/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_pdss_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1200_12(const double ae,
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
    const double C4724 = 0 * ae;
    const double C4723 = ae * be;
    const double C4722 = 0 * be;
    const double C4721 = ae + be;
    const double C4720 = 0 * be;
    const double C4719 = xA - xB;
    const double C4781 = yA - yB;
    const double C4784 = zA - zB;
    const double C4799 = 0 * be;
    const double C4825 = 0 * be;
    const double C4906 = 0 * ae;
    const double C4902 = 0 * be;
    const double C4977 = 0 * ae;
    const double C4973 = 0 * be;
    const double C5025 = p + q;
    const double C5024 = p * q;
    const double C5030 = xP - xQ;
    const double C5029 = bs[2];
    const double C5035 = bs[3];
    const double C5046 = bs[4];
    const double C5065 = yP - yQ;
    const double C5080 = zP - zQ;
    const double C74 = bs[0];
    const double C5646 = ce + de;
    const double C5645 = ce * de;
    const double C4753 = 2 * C4723;
    const double C4751 = -2 * C4722;
    const double C4729 = C4724 / C4721;
    const double C4726 = 2 * C4721;
    const double C4725 = std::pow(C4721, 2);
    const double C4728 = C4723 * C4719;
    const double C4727 = C4719 * C4722;
    const double C5463 = C4719 * be;
    const double C5462 = C4719 * ae;
    const double C5461 = std::pow(C4719, 2);
    const double C4800 = C4723 * C4781;
    const double C5493 = std::pow(C4781, 2);
    const double C5542 = C4781 * be;
    const double C5541 = C4781 * ae;
    const double C4826 = C4723 * C4784;
    const double C5504 = std::pow(C4784, 2);
    const double C5568 = C4784 * be;
    const double C5567 = C4784 * ae;
    const double C4903 = C4781 * C4799;
    const double C4927 = -2 * C4799;
    const double C4974 = C4784 * C4825;
    const double C4998 = -2 * C4825;
    const double C4911 = C4906 / C4721;
    const double C4982 = C4977 / C4721;
    const double C5026 = 2 * C5024;
    const double C5038 = C5030 * ae;
    const double C5037 = C5030 * be;
    const double C5034 = std::pow(C5030, 2);
    const double C5068 = C5065 * be;
    const double C5067 = C5030 * C5065;
    const double C5097 = C5065 * ae;
    const double C5096 = C5065 * C5030;
    const double C5110 = std::pow(C5065, 2);
    const double C5083 = C5080 * be;
    const double C5082 = C5030 * C5080;
    const double C5119 = C5065 * C5080;
    const double C5129 = C5080 * ae;
    const double C5128 = C5080 * C5030;
    const double C5142 = C5080 * C5065;
    const double C5151 = std::pow(C5080, 2);
    const double C63 = std::exp(-(std::pow(zC - zD, 2) * C5645) / C5646);
    const double C64 = std::exp(-(std::pow(yC - yD, 2) * C5645) / C5646);
    const double C65 = std::exp(-(std::pow(xC - xD, 2) * C5645) / C5646);
    const double C4754 = ae * C4751;
    const double C5471 = std::pow(C4726, -1);
    const double C5648 = std::pow(C4726, -2);
    const double C4730 = 2 * C4725;
    const double C4750 = C4725 * C4726;
    const double C5644 = 4 * C4725;
    const double C4731 = C4727 / C4721;
    const double C5464 = C5461 * C4723;
    const double C5494 = C5493 * C4723;
    const double C5505 = C5504 * C4723;
    const double C4908 = C4903 / C4721;
    const double C4930 = ae * C4927;
    const double C4979 = C4974 / C4721;
    const double C5001 = ae * C4998;
    const double C5028 = C5026 / C5025;
    const double C86 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C5026 / C5025, 2) -
          (bs[1] * C5026) / C5025) *
         C4723) /
        C4725;
    const double C75 = -(C5030 * bs[1] * C5026) / C5025;
    const double C321 = -(C5065 * bs[1] * C5026) / C5025;
    const double C628 = -(C5080 * bs[1] * C5026) / C5025;
    const double C5041 = C5035 * C5038;
    const double C5052 = C5046 * C5038;
    const double C79 = (-(bs[1] * C5038 * C5026) / C5025) / C4721;
    const double C5040 = C5035 * C5037;
    const double C5049 = C5046 * C5037;
    const double C78 = (-(bs[1] * C5037 * C5026) / C5025) / C4721;
    const double C5048 = C5034 * C5046;
    const double C5070 = C5035 * C5068;
    const double C5075 = C5046 * C5068;
    const double C109 = (-(bs[1] * C5068 * C5026) / C5025) / C4721;
    const double C5069 = C5067 * ae;
    const double C5099 = C5035 * C5097;
    const double C5104 = C5046 * C5097;
    const double C162 = (-(bs[1] * C5097 * C5026) / C5025) / C4721;
    const double C5098 = C5096 * ae;
    const double C5112 = C5110 * C5046;
    const double C5085 = C5035 * C5083;
    const double C5090 = C5046 * C5083;
    const double C136 = (-(bs[1] * C5083 * C5026) / C5025) / C4721;
    const double C5084 = C5082 * ae;
    const double C5120 = C5119 * ae;
    const double C5131 = C5035 * C5129;
    const double C5136 = C5046 * C5129;
    const double C233 = (-(bs[1] * C5129 * C5026) / C5025) / C4721;
    const double C5130 = C5128 * ae;
    const double C5143 = C5142 * ae;
    const double C5153 = C5151 * C5046;
    const double C4736 = C4722 / C4730;
    const double C4734 = C4720 / C4730;
    const double C4905 = C4799 / C4730;
    const double C4909 = C4902 / C4730;
    const double C4976 = C4825 / C4730;
    const double C4980 = C4973 / C4730;
    const double C4733 = 0 - C4731;
    const double C5465 = C5464 / C4721;
    const double C5495 = C5494 / C4721;
    const double C5506 = C5505 / C4721;
    const double C4912 = 0 - C4908;
    const double C4983 = 0 - C4979;
    const double C5031 = std::pow(C5028, 2);
    const double C5036 = -C5028;
    const double C5047 = std::pow(C5028, 4);
    const double C5071 = C5069 * be;
    const double C5100 = C5098 * be;
    const double C5086 = C5084 * be;
    const double C5121 = C5120 * be;
    const double C5132 = C5130 * be;
    const double C5144 = C5143 * be;
    const double C4738 = C4733 * ae;
    const double C5466 = -C5465;
    const double C5496 = -C5495;
    const double C5507 = -C5506;
    const double C4915 = C4912 * ae;
    const double C4986 = C4983 * ae;
    const double C5033 = C5029 * C5031;
    const double C87 =
        (ae * C5031 * C5029 * C5030 * be + be * C5031 * C5029 * C5030 * ae +
         C5030 *
             (C5029 * C5031 +
              std::pow(C5030, 2) * bs[3] * std::pow(-C5028, 3)) *
             C4723) /
        C4725;
    const double C113 = (C5031 * C5029 * C5030 * (yP - yQ) * ae * be) / C4725;
    const double C140 = (C5031 * C5029 * C5030 * (zP - zQ) * ae * be) / C4725;
    const double C166 = (C5031 * C5029 * C5065 * C5030 * ae * be) / C4725;
    const double C189 =
        ((std::pow(C5065, 2) * C5029 * C5031 - (bs[1] * C5026) / C5025) *
         C4723) /
        C4725;
    const double C211 = (C5031 * C5029 * C5065 * C5080 * ae * be) / C4725;
    const double C237 = (C5031 * C5029 * C5080 * C5030 * ae * be) / C4725;
    const double C259 = (C5031 * C5029 * C5080 * C5065 * ae * be) / C4725;
    const double C282 =
        ((std::pow(C5080, 2) * C5029 * C5031 - (bs[1] * C5026) / C5025) *
         C4723) /
        C4725;
    const double C80 = (C5030 * C5031 * C5029 * C5037) / C4721 -
                       (be * bs[1] * C5026) / (C5025 * C4721);
    const double C81 = (C5030 * C5031 * C5029 * C5038) / C4721 -
                       (ae * bs[1] * C5026) / (C5025 * C4721);
    const double C110 = (C5030 * C5031 * C5029 * C5068) / C4721;
    const double C137 = (C5030 * C5031 * C5029 * C5083) / C4721;
    const double C163 = (C5030 * C5031 * C5029 * C5097) / C4721;
    const double C234 = (C5030 * C5031 * C5029 * C5129) / C4721;
    const double C325 = (C5065 * C5031 * C5029 * C5037) / C4721;
    const double C326 = (C5065 * C5031 * C5029 * C5038) / C4721;
    const double C366 = (C5065 * C5031 * C5029 * C5068) / C4721 -
                        (be * bs[1] * C5026) / (C5025 * C4721);
    const double C400 = (C5065 * C5031 * C5029 * C5083) / C4721;
    const double C434 = (C5065 * C5031 * C5029 * C5097) / C4721 -
                        (ae * bs[1] * C5026) / (C5025 * C4721);
    const double C531 = (C5065 * C5031 * C5029 * C5129) / C4721;
    const double C632 = (C5080 * C5031 * C5029 * C5037) / C4721;
    const double C633 = (C5080 * C5031 * C5029 * C5038) / C4721;
    const double C670 = (C5080 * C5031 * C5029 * C5068) / C4721;
    const double C707 = (C5080 * C5031 * C5029 * C5083) / C4721 -
                        (be * bs[1] * C5026) / (C5025 * C4721);
    const double C741 = (C5080 * C5031 * C5029 * C5097) / C4721;
    const double C835 = (C5080 * C5031 * C5029 * C5129) / C4721 -
                        (ae * bs[1] * C5026) / (C5025 * C4721);
    const double C5039 = std::pow(C5036, 3);
    const double C5056 = C5047 * C5052;
    const double C5055 = C5047 * C5049;
    const double C5054 = C5048 * C5047;
    const double C5077 = C5047 * C5075;
    const double C5092 = C5047 * C5090;
    const double C5106 = C5047 * C5104;
    const double C5113 = C5112 * C5047;
    const double C5138 = C5047 * C5136;
    const double C5154 = C5153 * C5047;
    const double C5074 = C5046 * C5071;
    const double C5103 = C5046 * C5100;
    const double C5089 = C5046 * C5086;
    const double C5123 = C5046 * C5121;
    const double C5135 = C5046 * C5132;
    const double C5146 = C5046 * C5144;
    const double C4741 = C4738 / C4721;
    const double C5467 = std::exp(C5466);
    const double C5497 = std::exp(C5496);
    const double C5508 = std::exp(C5507);
    const double C4916 = C4915 / C4721;
    const double C4987 = C4986 / C4721;
    const double C76 = C5033 * C5034 - (bs[1] * C5026) / C5025;
    const double C322 = C5065 * C5030 * C5033;
    const double C323 = C5033 * C5110 - (bs[1] * C5026) / C5025;
    const double C629 = C5080 * C5030 * C5033;
    const double C630 = C5033 * C5151 - (bs[1] * C5026) / C5025;
    const double C1461 = C5080 * C5065 * C5033;
    const double C5043 = C5039 * C5041;
    const double C5042 = C5039 * C5040;
    const double C5045 = C5035 * C5039;
    const double C5072 = C5039 * C5070;
    const double C5087 = C5039 * C5085;
    const double C5101 = C5039 * C5099;
    const double C5133 = C5039 * C5131;
    const double C114 = (ae * C5031 * C5029 * C5065 * be +
                         C5030 * C5039 * C5035 * C5030 * C5065 * ae * be) /
                        C4725;
    const double C141 = (ae * C5031 * C5029 * C5080 * be +
                         C5030 * C5039 * C5035 * C5030 * C5080 * ae * be) /
                        C4725;
    const double C167 = (be * C5031 * C5029 * C5065 * ae +
                         C5030 * C5039 * C5035 * C5065 * C5030 * ae * be) /
                        C4725;
    const double C190 =
        (C5030 * (C5033 + std::pow(C5065, 2) * C5035 * C5039) * C4723) / C4725;
    const double C212 =
        (C5030 * C5039 * C5035 * C5065 * C5080 * ae * be) / C4725;
    const double C213 =
        (C5039 * C5035 * C5121 + C5047 * C5046 * C5121 * C5034) / C4725;
    const double C238 = (be * C5031 * C5029 * C5080 * ae +
                         C5030 * C5039 * C5035 * C5080 * C5030 * ae * be) /
                        C4725;
    const double C260 =
        (C5030 * C5039 * C5035 * C5080 * C5065 * ae * be) / C4725;
    const double C261 =
        (C5039 * C5035 * C5144 + C5047 * C5046 * C5144 * C5034) / C4725;
    const double C283 =
        (C5030 * (C5033 + std::pow(C5080, 2) * C5035 * C5039) * C4723) / C4725;
    const double C333 =
        (C5065 * (C5033 + C5034 * C5035 * C5039) * C4723) / C4725;
    const double C370 =
        (be * C5031 * C5029 * C5038 + C5065 * C5039 * C5035 * C5071) / C4725;
    const double C404 = (C5065 * C5039 * C5035 * C5086) / C4725;
    const double C438 =
        (ae * C5031 * C5029 * C5037 + C5065 * C5039 * C5035 * C5100) / C4725;
    const double C471 =
        (ae * C5031 * C5029 * C5068 + be * C5031 * C5029 * C5097 +
         C5065 * (C5033 + C5110 * C5035 * C5039) * C4723) /
        C4725;
    const double C501 =
        (ae * C5031 * C5029 * C5083 + C5065 * C5039 * C5035 * C5121) / C4725;
    const double C535 = (C5065 * C5039 * C5035 * C5132) / C4725;
    const double C565 =
        (be * C5031 * C5029 * C5129 + C5065 * C5039 * C5035 * C5144) / C4725;
    const double C595 =
        (C5065 * (C5033 + C5151 * C5035 * C5039) * C4723) / C4725;
    const double C640 =
        (C5080 * (C5033 + C5034 * C5035 * C5039) * C4723) / C4725;
    const double C674 = (C5080 * C5039 * C5035 * C5071) / C4725;
    const double C711 =
        (be * C5031 * C5029 * C5038 + C5080 * C5039 * C5035 * C5086) / C4725;
    const double C745 = (C5080 * C5039 * C5035 * C5100) / C4725;
    const double C775 =
        (C5080 * (C5033 + C5110 * C5035 * C5039) * C4723) / C4725;
    const double C805 =
        (be * C5031 * C5029 * C5097 + C5080 * C5039 * C5035 * C5121) / C4725;
    const double C839 =
        (ae * C5031 * C5029 * C5037 + C5080 * C5039 * C5035 * C5132) / C4725;
    const double C869 =
        (ae * C5031 * C5029 * C5068 + C5080 * C5039 * C5035 * C5144) / C4725;
    const double C902 =
        (ae * C5031 * C5029 * C5083 + be * C5031 * C5029 * C5129 +
         C5080 * (C5033 + C5151 * C5035 * C5039) * C4723) /
        C4725;
    const double C5059 = C5030 * C5056;
    const double C5286 = C5065 * C5056;
    const double C5058 = C5030 * C5055;
    const double C5291 = C5065 * C5055;
    const double C1468 =
        (ae * C5080 * C5065 * C5055 + be * C5080 * C5065 * C5056 +
         C5030 * C5080 * C5065 *
             (C5046 * C5047 + C5034 * bs[5] * std::pow(C5036, 5)) * C4723) /
        C4725;
    const double C5177 = C5030 * C5077;
    const double C5274 = C5065 * C5077;
    const double C5183 = C5030 * C5092;
    const double C5294 = C5065 * C5092;
    const double C5314 = C5080 * C5092;
    const double C5178 = C5030 * C5106;
    const double C5276 = C5065 * C5106;
    const double C5192 = C5030 * C5138;
    const double C5295 = C5065 * C5138;
    const double C5316 = C5080 * C5138;
    const double C5076 = C5047 * C5074;
    const double C5105 = C5047 * C5103;
    const double C5091 = C5047 * C5089;
    const double C5124 = C5047 * C5123;
    const double C5137 = C5047 * C5135;
    const double C5147 = C5047 * C5146;
    const double C4743 = C4741 - C4734;
    const double C4732 = C4728 * C5467;
    const double C5468 = C5467 * C5462;
    const double C5472 = C5471 * C5467;
    const double C5641 = C5467 * C5463;
    const double C5638 = C5467 / C4726;
    const double C1793 = C5648 * C5467;
    const double C4801 = C4800 * C5497;
    const double C108 = -(2 * C4723 * (yA - yB) * C5497) / C4721;
    const double C188 =
        -((C5497 - (C4781 * 2 * C4723 * C4781 * C5497) / C4721) * C4753) /
        C4721;
    const double C5543 = C5497 * C5541;
    const double C5546 = C5471 * C5497;
    const double C5652 = C5497 * C5542;
    const double C5647 = C5497 / C4726;
    const double C316 = C5648 * C5497;
    const double C4827 = C4826 * C5508;
    const double C135 = -(2 * C4723 * (zA - zB) * C5508) / C4721;
    const double C281 =
        -((C5508 - (C4784 * 2 * C4723 * C4784 * C5508) / C4721) * C4753) /
        C4721;
    const double C5569 = C5508 * C5567;
    const double C5572 = C5471 * C5508;
    const double C5656 = C5508 * C5568;
    const double C5649 = C5508 / C4726;
    const double C627 = C5648 * C5508;
    const double C4917 = C4916 - C4909;
    const double C4988 = C4987 - C4980;
    const double C83 =
        (C5031 * C5029 * C5038 + C5030 * (C5030 * C5043 + C5033 * ae) +
         C5030 * C5033 * ae) /
        C4721;
    const double C328 = (C5065 * (C5030 * C5043 + C5033 * ae)) / C4721;
    const double C330 = (C5031 * C5029 * C5038 + C5043 * C5110) / C4721;
    const double C635 = (C5080 * (C5030 * C5043 + C5033 * ae)) / C4721;
    const double C637 = (C5031 * C5029 * C5038 + C5043 * C5151) / C4721;
    const double C1464 = (C5080 * C5065 * C5043) / C4721;
    const double C2041 =
        (2 * C5065 * C5043 + C5065 * (C5043 + C5056 * C5110)) / C4721;
    const double C3040 = (C5080 * (C5043 + C5056 * C5110)) / C4721;
    const double C3760 =
        (2 * C5080 * C5043 + C5080 * (C5043 + C5056 * C5151)) / C4721;
    const double C88 =
        ((C5033 + C5034 * C5035 * C5039) * C4723 +
         ae * (C5030 * C5042 + C5033 * be) + be * (C5030 * C5043 + C5033 * ae) +
         C5030 * (ae * C5042 + be * C5043 +
                  C5030 * (C5035 * C5039 + C5034 * bs[4] * std::pow(C5028, 4)) *
                      C4723)) /
        C4725;
    const double C82 =
        (C5031 * C5029 * C5037 + C5030 * (C5030 * C5042 + C5033 * be) +
         C5030 * C5033 * be) /
        C4721;
    const double C327 = (C5065 * (C5030 * C5042 + C5033 * be)) / C4721;
    const double C329 = (C5031 * C5029 * C5037 + C5042 * C5110) / C4721;
    const double C634 = (C5080 * (C5030 * C5042 + C5033 * be)) / C4721;
    const double C636 = (C5031 * C5029 * C5037 + C5042 * C5151) / C4721;
    const double C1463 = (C5080 * C5065 * C5042) / C4721;
    const double C2040 =
        (2 * C5065 * C5042 + C5065 * (C5042 + C5055 * C5110)) / C4721;
    const double C3039 = (C5080 * (C5042 + C5055 * C5110)) / C4721;
    const double C3759 =
        (2 * C5080 * C5042 + C5080 * (C5042 + C5055 * C5151)) / C4721;
    const double C5053 = C5045 * ae;
    const double C5051 = C5030 * C5045;
    const double C5050 = C5045 * be;
    const double C5057 = C5045 + C5054;
    const double C5114 = C5045 + C5113;
    const double C5155 = C5045 + C5154;
    const double C5275 = C5065 * C5045;
    const double C5315 = C5080 * C5045;
    const double C191 = ((C5033 + C5110 * C5035 * C5039) * C4723 +
                         (C5045 + C5110 * C5046 * C5047) * C4723 * C5034) /
                        C4725;
    const double C284 = ((C5033 + C5151 * C5035 * C5039) * C4723 +
                         (C5045 + C5151 * C5046 * C5047) * C4723 * C5034) /
                        C4725;
    const double C77 = 2 * C5030 * C5033 + C5030 * (C5033 + C5045 * C5034);
    const double C943 = C5065 * (C5033 + C5045 * C5034);
    const double C1199 = C5080 * (C5033 + C5045 * C5034);
    const double C2039 = 2 * C5065 * C5033 + C5065 * (C5033 + C5045 * C5110);
    const double C3038 = C5080 * (C5033 + C5045 * C5110);
    const double C3758 = 2 * C5080 * C5033 + C5080 * (C5033 + C5045 * C5151);
    const double C115 = (C5039 * C5035 * C5071 + ae * C5030 * C5072 +
                         C5030 * (ae * C5072 + C5030 * C5047 * C5046 * C5071)) /
                        C4725;
    const double C111 = (C5031 * C5029 * C5068 + C5072 * C5034) / C4721;
    const double C112 =
        (2 * C5030 * C5072 + C5030 * (C5072 + C5077 * C5034)) / C4721;
    const double C367 =
        (C5031 * C5029 * C5068 + C5065 * (C5065 * C5072 + C5033 * be) +
         C5065 * C5033 * be) /
        C4721;
    const double C368 = (C5065 * C5030 * C5072 + C5030 * C5033 * be) / C4721;
    const double C671 = (C5080 * C5030 * C5072) / C4721;
    const double C672 = (C5031 * C5029 * C5068 + C5072 * C5151) / C4721;
    const double C975 =
        (C5065 * (C5072 + C5077 * C5034) + (C5033 + C5045 * C5034) * be) /
        C4721;
    const double C1229 = (C5080 * (C5072 + C5077 * C5034)) / C4721;
    const double C1503 = (C5080 * (C5065 * C5072 + C5033 * be)) / C4721;
    const double C3780 =
        (2 * C5080 * C5072 + C5080 * (C5072 + C5077 * C5151)) / C4721;
    const double C142 = (C5039 * C5035 * C5086 + ae * C5030 * C5087 +
                         C5030 * (ae * C5087 + C5030 * C5047 * C5046 * C5086)) /
                        C4725;
    const double C138 = (C5031 * C5029 * C5083 + C5087 * C5034) / C4721;
    const double C139 =
        (2 * C5030 * C5087 + C5030 * (C5087 + C5092 * C5034)) / C4721;
    const double C401 = (C5065 * C5030 * C5087) / C4721;
    const double C402 = (C5031 * C5029 * C5083 + C5087 * C5110) / C4721;
    const double C708 =
        (C5031 * C5029 * C5083 + C5080 * (C5080 * C5087 + C5033 * be) +
         C5080 * C5033 * be) /
        C4721;
    const double C709 = (C5080 * C5030 * C5087 + C5030 * C5033 * be) / C4721;
    const double C1003 = (C5065 * (C5087 + C5092 * C5034)) / C4721;
    const double C1259 =
        (C5080 * (C5087 + C5092 * C5034) + (C5033 + C5045 * C5034) * be) /
        C4721;
    const double C1541 = (C5080 * C5065 * C5087 + C5065 * C5033 * be) / C4721;
    const double C2085 =
        (2 * C5065 * C5087 + C5065 * (C5087 + C5092 * C5110)) / C4721;
    const double C3096 =
        (C5080 * (C5087 + C5092 * C5110) + (C5033 + C5045 * C5110) * be) /
        C4721;
    const double C168 = (C5039 * C5035 * C5100 + be * C5030 * C5101 +
                         C5030 * (be * C5101 + C5030 * C5047 * C5046 * C5100)) /
                        C4725;
    const double C164 = (C5031 * C5029 * C5097 + C5101 * C5034) / C4721;
    const double C165 =
        (2 * C5030 * C5101 + C5030 * (C5101 + C5106 * C5034)) / C4721;
    const double C435 = (C5065 * C5030 * C5101 + C5030 * C5033 * ae) / C4721;
    const double C436 =
        (C5031 * C5029 * C5097 + C5065 * (C5065 * C5101 + C5033 * ae) +
         C5065 * C5033 * ae) /
        C4721;
    const double C742 = (C5080 * C5030 * C5101) / C4721;
    const double C743 = (C5031 * C5029 * C5097 + C5101 * C5151) / C4721;
    const double C1031 =
        (C5065 * (C5101 + C5106 * C5034) + (C5033 + C5045 * C5034) * ae) /
        C4721;
    const double C1287 = (C5080 * (C5101 + C5106 * C5034)) / C4721;
    const double C1579 = (C5080 * (C5065 * C5101 + C5033 * ae)) / C4721;
    const double C3824 =
        (2 * C5080 * C5101 + C5080 * (C5101 + C5106 * C5151)) / C4721;
    const double C239 = (C5039 * C5035 * C5132 + be * C5030 * C5133 +
                         C5030 * (be * C5133 + C5030 * C5047 * C5046 * C5132)) /
                        C4725;
    const double C235 = (C5031 * C5029 * C5129 + C5133 * C5034) / C4721;
    const double C236 =
        (2 * C5030 * C5133 + C5030 * (C5133 + C5138 * C5034)) / C4721;
    const double C532 = (C5065 * C5030 * C5133) / C4721;
    const double C533 = (C5031 * C5029 * C5129 + C5133 * C5110) / C4721;
    const double C836 = (C5080 * C5030 * C5133 + C5030 * C5033 * ae) / C4721;
    const double C837 =
        (C5031 * C5029 * C5129 + C5080 * (C5080 * C5133 + C5033 * ae) +
         C5080 * C5033 * ae) /
        C4721;
    const double C1115 = (C5065 * (C5133 + C5138 * C5034)) / C4721;
    const double C1369 =
        (C5080 * (C5133 + C5138 * C5034) + (C5033 + C5045 * C5034) * ae) /
        C4721;
    const double C1689 = (C5080 * C5065 * C5133 + C5065 * C5033 * ae) / C4721;
    const double C2167 =
        (2 * C5065 * C5133 + C5065 * (C5133 + C5138 * C5110)) / C4721;
    const double C3206 =
        (C5080 * (C5133 + C5138 * C5110) + (C5033 + C5045 * C5110) * ae) /
        C4721;
    const double C2235 = (C5065 * C5043 + C5286 * C5151) / C4721;
    const double C2234 = (C5065 * C5042 + C5291 * C5151) / C4721;
    const double C673 = (C5030 * C5072 + C5177 * C5151) / C4721;
    const double C403 = (C5030 * C5087 + C5183 * C5110) / C4721;
    const double C1618 =
        (ae * C5080 * C5177 + be * C5080 * C5178 +
         C5065 * C5080 * C5030 *
             (C5046 * C5047 + C5110 * bs[5] * std::pow(C5036, 5)) * C4723) /
        C4725;
    const double C744 = (C5030 * C5101 + C5178 * C5151) / C4721;
    const double C1764 =
        (ae * C5065 * C5183 + be * C5065 * C5192 +
         C5080 * C5065 * C5030 *
             (C5046 * C5047 + C5151 * bs[5] * std::pow(C5036, 5)) * C4723) /
        C4725;
    const double C534 = (C5030 * C5133 + C5192 * C5110) / C4721;
    const double C116 =
        (2 * (ae * C5072 + C5030 * C5076) + ae * (C5072 + C5077 * C5034) +
         C5030 * (C5076 + ae * C5030 * C5077 +
                  C5030 * (ae * C5077 +
                           C5030 * std::pow(C5036, 5) * bs[5] * C5071))) /
        C4725;
    const double C371 = (C5039 * C5035 * C5071 + be * C5065 * C5043 +
                         C5065 * (be * C5043 + C5065 * C5076)) /
                        C4725;
    const double C372 = (be * (C5030 * C5043 + C5033 * ae) +
                         C5065 * (ae * C5072 + C5030 * C5076)) /
                        C4725;
    const double C675 = (C5080 * (ae * C5072 + C5030 * C5076)) / C4725;
    const double C676 = (C5039 * C5035 * C5071 + C5076 * C5151) / C4725;
    const double C677 =
        (ae * C5072 + C5030 * C5076 +
         (ae * C5077 + C5030 * std::pow(C5036, 5) * bs[5] * C5071) * C5151) /
        C4725;
    const double C1230 =
        (C5080 *
         (C5076 + ae * C5177 +
          C5030 * (ae * C5077 + C5030 * std::pow(C5036, 5) * bs[5] * C5071))) /
        C4725;
    const double C1505 = (C5080 * (be * C5043 + C5065 * C5076)) / C4725;
    const double C2066 =
        (2 * (be * C5043 + C5065 * C5076) + be * (C5043 + C5056 * C5110) +
         C5065 * (C5076 + be * C5065 * C5056 +
                  C5065 * (be * C5056 +
                           C5065 * std::pow(C5036, 5) * bs[5] * C5071))) /
        C4725;
    const double C2264 =
        (be * C5043 + C5065 * C5076 +
         (be * C5056 + C5065 * std::pow(C5036, 5) * bs[5] * C5071) * C5151) /
        C4725;
    const double C3069 =
        (C5080 *
         (C5076 + be * C5286 +
          C5065 * (be * C5056 + C5065 * std::pow(C5036, 5) * bs[5] * C5071))) /
        C4725;
    const double C3781 =
        (2 * C5080 * C5076 +
         C5080 * (C5076 + std::pow(C5036, 5) * bs[5] * C5071 * C5151)) /
        C4725;
    const double C169 =
        (2 * (be * C5101 + C5030 * C5105) + be * (C5101 + C5106 * C5034) +
         C5030 * (C5105 + be * C5030 * C5106 +
                  C5030 * (be * C5106 +
                           C5030 * std::pow(C5036, 5) * bs[5] * C5100))) /
        C4725;
    const double C439 = (ae * (C5030 * C5042 + C5033 * be) +
                         C5065 * (be * C5101 + C5030 * C5105)) /
                        C4725;
    const double C440 = (C5039 * C5035 * C5100 + ae * C5065 * C5042 +
                         C5065 * (ae * C5042 + C5065 * C5105)) /
                        C4725;
    const double C746 = (C5080 * (be * C5101 + C5030 * C5105)) / C4725;
    const double C747 = (C5039 * C5035 * C5100 + C5105 * C5151) / C4725;
    const double C748 =
        (be * C5101 + C5030 * C5105 +
         (be * C5106 + C5030 * std::pow(C5036, 5) * bs[5] * C5100) * C5151) /
        C4725;
    const double C1288 =
        (C5080 *
         (C5105 + be * C5178 +
          C5030 * (be * C5106 + C5030 * std::pow(C5036, 5) * bs[5] * C5100))) /
        C4725;
    const double C1581 = (ae * C5080 * C5042 + C5065 * C5080 * C5105) / C4725;
    const double C2106 =
        (2 * (ae * C5042 + C5065 * C5105) + ae * (C5042 + C5055 * C5110) +
         C5065 * (C5105 + ae * C5065 * C5055 +
                  C5065 * (ae * C5055 +
                           C5065 * std::pow(C5036, 5) * bs[5] * C5100))) /
        C4725;
    const double C2320 =
        (ae * (C5042 + C5055 * C5151) +
         C5065 * (C5105 + std::pow(C5036, 5) * bs[5] * C5100 * C5151)) /
        C4725;
    const double C3125 =
        (C5080 * C5105 + ae * C5080 * C5291 +
         C5065 * (ae * C5080 * C5055 +
                  C5065 * C5080 * std::pow(C5036, 5) * bs[5] * C5100)) /
        C4725;
    const double C3825 =
        (2 * C5080 * C5105 +
         C5080 * (C5105 + std::pow(C5036, 5) * bs[5] * C5100 * C5151)) /
        C4725;
    const double C143 =
        (2 * (ae * C5087 + C5030 * C5091) + ae * (C5087 + C5092 * C5034) +
         C5030 * (C5091 + ae * C5030 * C5092 +
                  C5030 * (ae * C5092 +
                           C5030 * std::pow(C5036, 5) * bs[5] * C5086))) /
        C4725;
    const double C405 = (C5065 * (ae * C5087 + C5030 * C5091)) / C4725;
    const double C406 = (C5039 * C5035 * C5086 + C5091 * C5110) / C4725;
    const double C407 =
        (ae * C5087 + C5030 * C5091 +
         (ae * C5092 + C5030 * std::pow(C5036, 5) * bs[5] * C5086) * C5110) /
        C4725;
    const double C712 = (C5039 * C5035 * C5086 + be * C5080 * C5043 +
                         C5080 * (be * C5043 + C5080 * C5091)) /
                        C4725;
    const double C713 = (be * (C5030 * C5043 + C5033 * ae) +
                         C5080 * (ae * C5087 + C5030 * C5091)) /
                        C4725;
    const double C1004 =
        (C5065 *
         (C5091 + ae * C5183 +
          C5030 * (ae * C5092 + C5030 * std::pow(C5036, 5) * bs[5] * C5086))) /
        C4725;
    const double C1543 = (be * C5065 * C5043 + C5080 * C5065 * C5091) / C4725;
    const double C2086 =
        (2 * C5065 * C5091 +
         C5065 * (C5091 + std::pow(C5036, 5) * bs[5] * C5086 * C5110)) /
        C4725;
    const double C2292 =
        (C5065 * C5091 + be * C5080 * C5286 +
         C5080 * (be * C5286 +
                  C5080 * C5065 * std::pow(C5036, 5) * bs[5] * C5086)) /
        C4725;
    const double C3097 =
        (be * (C5043 + C5056 * C5110) +
         C5080 * (C5091 + std::pow(C5036, 5) * bs[5] * C5086 * C5110)) /
        C4725;
    const double C3805 =
        (2 * (be * C5043 + C5080 * C5091) + be * (C5043 + C5056 * C5151) +
         C5080 * (C5091 + be * C5080 * C5056 +
                  C5080 * (be * C5056 +
                           C5080 * std::pow(C5036, 5) * bs[5] * C5086))) /
        C4725;
    const double C214 =
        (2 * C5030 * C5124 +
         C5030 * (C5124 + std::pow(C5036, 5) * bs[5] * C5121 * C5034)) /
        C4725;
    const double C502 = (C5039 * C5035 * C5121 + ae * C5065 * C5087 +
                         C5065 * (ae * C5087 + C5065 * C5124)) /
                        C4725;
    const double C503 = (ae * C5030 * C5087 + C5065 * C5030 * C5124) / C4725;
    const double C504 =
        (C5030 * C5124 + ae * C5065 * C5183 +
         C5065 * (ae * C5183 +
                  C5065 * C5030 * std::pow(C5036, 5) * bs[5] * C5121)) /
        C4725;
    const double C806 = (C5039 * C5035 * C5121 + be * C5080 * C5101 +
                         C5080 * (be * C5101 + C5080 * C5124)) /
                        C4725;
    const double C807 = (be * C5030 * C5101 + C5080 * C5030 * C5124) / C4725;
    const double C808 =
        (C5030 * C5124 + be * C5080 * C5178 +
         C5080 * (be * C5178 +
                  C5080 * C5030 * std::pow(C5036, 5) * bs[5] * C5121)) /
        C4725;
    const double C1088 =
        (ae * (C5087 + C5092 * C5034) +
         C5065 * (C5124 + std::pow(C5036, 5) * bs[5] * C5121 * C5034)) /
        C4725;
    const double C1342 =
        (be * (C5101 + C5106 * C5034) +
         C5080 * (C5124 + std::pow(C5036, 5) * bs[5] * C5121 * C5034)) /
        C4725;
    const double C1653 = (ae * (C5080 * C5087 + C5033 * be) +
                          C5065 * (be * C5101 + C5080 * C5124)) /
                         C4725;
    const double C2148 =
        (2 * (ae * C5087 + C5065 * C5124) + ae * (C5087 + C5092 * C5110) +
         C5065 * (C5124 + ae * C5065 * C5092 +
                  C5065 * (ae * C5092 +
                           C5065 * std::pow(C5036, 5) * bs[5] * C5121))) /
        C4725;
    const double C3863 =
        (2 * (be * C5101 + C5080 * C5124) + be * (C5101 + C5106 * C5151) +
         C5080 * (C5124 + be * C5080 * C5106 +
                  C5080 * (be * C5106 +
                           C5080 * std::pow(C5036, 5) * bs[5] * C5121))) /
        C4725;
    const double C240 =
        (2 * (be * C5133 + C5030 * C5137) + be * (C5133 + C5138 * C5034) +
         C5030 * (C5137 + be * C5030 * C5138 +
                  C5030 * (be * C5138 +
                           C5030 * std::pow(C5036, 5) * bs[5] * C5132))) /
        C4725;
    const double C536 = (C5065 * (be * C5133 + C5030 * C5137)) / C4725;
    const double C537 = (C5039 * C5035 * C5132 + C5137 * C5110) / C4725;
    const double C538 =
        (be * C5133 + C5030 * C5137 +
         (be * C5138 + C5030 * std::pow(C5036, 5) * bs[5] * C5132) * C5110) /
        C4725;
    const double C840 = (ae * (C5030 * C5042 + C5033 * be) +
                         C5080 * (be * C5133 + C5030 * C5137)) /
                        C4725;
    const double C841 = (C5039 * C5035 * C5132 + ae * C5080 * C5042 +
                         C5080 * (ae * C5042 + C5080 * C5137)) /
                        C4725;
    const double C1116 =
        (C5065 *
         (C5137 + be * C5192 +
          C5030 * (be * C5138 + C5030 * std::pow(C5036, 5) * bs[5] * C5132))) /
        C4725;
    const double C1691 = (ae * C5065 * C5042 + C5080 * C5065 * C5137) / C4725;
    const double C2168 =
        (2 * C5065 * C5137 +
         C5065 * (C5137 + std::pow(C5036, 5) * bs[5] * C5132 * C5110)) /
        C4725;
    const double C2402 =
        (C5065 * C5137 + ae * C5080 * C5291 +
         C5080 * (ae * C5291 +
                  C5080 * C5065 * std::pow(C5036, 5) * bs[5] * C5132)) /
        C4725;
    const double C3207 =
        (ae * (C5042 + C5055 * C5110) +
         C5080 * (C5137 + std::pow(C5036, 5) * bs[5] * C5132 * C5110)) /
        C4725;
    const double C3883 =
        (2 * (ae * C5042 + C5080 * C5137) + ae * (C5042 + C5055 * C5151) +
         C5080 * (C5137 + ae * C5080 * C5055 +
                  C5080 * (ae * C5055 +
                           C5080 * std::pow(C5036, 5) * bs[5] * C5132))) /
        C4725;
    const double C262 =
        (2 * C5030 * C5147 +
         C5030 * (C5147 + std::pow(C5036, 5) * bs[5] * C5144 * C5034)) /
        C4725;
    const double C566 = (C5039 * C5035 * C5144 + be * C5065 * C5133 +
                         C5065 * (be * C5133 + C5065 * C5147)) /
                        C4725;
    const double C567 = (be * C5030 * C5133 + C5065 * C5030 * C5147) / C4725;
    const double C568 =
        (C5030 * C5147 + be * C5065 * C5192 +
         C5065 * (be * C5192 +
                  C5065 * C5030 * std::pow(C5036, 5) * bs[5] * C5144)) /
        C4725;
    const double C870 = (C5039 * C5035 * C5144 + ae * C5080 * C5072 +
                         C5080 * (ae * C5072 + C5080 * C5147)) /
                        C4725;
    const double C871 = (ae * C5030 * C5072 + C5080 * C5030 * C5147) / C4725;
    const double C872 =
        (C5030 * C5147 + ae * C5080 * C5177 +
         C5080 * (ae * C5177 +
                  C5080 * C5030 * std::pow(C5036, 5) * bs[5] * C5144)) /
        C4725;
    const double C1143 =
        (be * (C5133 + C5138 * C5034) +
         C5065 * (C5147 + std::pow(C5036, 5) * bs[5] * C5144 * C5034)) /
        C4725;
    const double C1397 =
        (ae * (C5072 + C5077 * C5034) +
         C5080 * (C5147 + std::pow(C5036, 5) * bs[5] * C5144 * C5034)) /
        C4725;
    const double C1727 = (ae * (C5065 * C5072 + C5033 * be) +
                          C5080 * (be * C5133 + C5065 * C5147)) /
                         C4725;
    const double C2187 =
        (2 * (be * C5133 + C5065 * C5147) + be * (C5133 + C5138 * C5110) +
         C5065 * (C5147 + be * C5065 * C5138 +
                  C5065 * (be * C5138 +
                           C5065 * std::pow(C5036, 5) * bs[5] * C5144))) /
        C4725;
    const double C3902 =
        (2 * (ae * C5072 + C5080 * C5147) + ae * (C5072 + C5077 * C5151) +
         C5080 * (C5147 + ae * C5080 * C5077 +
                  C5080 * (ae * C5077 +
                           C5080 * std::pow(C5036, 5) * bs[5] * C5144))) /
        C4725;
    const double C4737 = C4732 / C4725;
    const double C4735 = 2 * C4732;
    const double C4752 = -4 * C4732;
    const double C5642 = C5468 / C4730;
    const double C5640 = C5468 / C4721;
    const double C5639 = C5468 * C5463;
    const double C1792 = (2 * C5471 * C5468) / C4721;
    const double C5643 = C5472 * C5463;
    const double C60 = C5472 / C5644;
    const double C934 = C5472 / C4726;
    const double C5661 = C5641 / C4721;
    const double C1791 = (C5467 * std::pow(C5462, 2)) / C4725 + C5638;
    const double C4809 = 2 * C4801;
    const double C4907 = C4801 / C4725;
    const double C4928 = -4 * C4801;
    const double C365 =
        ((0 * ae) / C4721 - C4801 / C4725) / C4726 + (0 * ae) / C4721;
    const double C974 = (0 * ae) / C4721 - C4801 / C4725;
    const double C5654 = C5543 / C4730;
    const double C5653 = C5543 * C5542;
    const double C5650 = C5543 / C4721;
    const double C315 = (2 * C5471 * C5543) / C4721;
    const double C364 =
        (((C5497 - (C4781 * 2 * C4801) / C4721) * ae) / C4721 - C4799 / C4730) /
            C4726 +
        ((C4781 * ((0 * ae) / C4721 - C4801 / C4725) + C5546) * ae) / C4721;
    const double C5655 = C5546 * C5542;
    const double C2036 = C5546 / C5644;
    const double C2487 = C5546 / C4726;
    const double C5663 = C5652 / C4721;
    const double C314 = (C5497 * std::pow(C5541, 2)) / C4725 + C5647;
    const double C4835 = 2 * C4827;
    const double C4978 = C4827 / C4725;
    const double C4999 = -4 * C4827;
    const double C706 =
        ((0 * ae) / C4721 - C4827 / C4725) / C4726 + (0 * ae) / C4721;
    const double C1258 = (0 * ae) / C4721 - C4827 / C4725;
    const double C5658 = C5569 / C4730;
    const double C5657 = C5569 * C5568;
    const double C5651 = C5569 / C4721;
    const double C626 = (2 * C5471 * C5569) / C4721;
    const double C705 =
        (((C5508 - (C4784 * 2 * C4827) / C4721) * ae) / C4721 - C4825 / C4730) /
            C4726 +
        ((C4784 * ((0 * ae) / C4721 - C4827 / C4725) + C5572) * ae) / C4721;
    const double C5659 = C5572 * C5568;
    const double C3757 = C5572 / C5644;
    const double C4260 = C5572 / C4726;
    const double C5666 = C5656 / C4721;
    const double C625 = (C5508 * std::pow(C5567, 2)) / C4725 + C5649;
    const double C5062 = C5059 + C5053;
    const double C5278 = C5276 + C5053;
    const double C5318 = C5316 + C5053;
    const double C1654 =
        (ae * (C5080 * C5183 + C5051 * be) +
         C5065 * (be * C5178 +
                  C5080 * C5030 * std::pow(C5036, 5) * bs[5] * C5121)) /
        C4725;
    const double C1728 =
        (ae * (C5065 * C5177 + C5051 * be) +
         C5080 * (be * C5192 +
                  C5065 * C5030 * std::pow(C5036, 5) * bs[5] * C5144)) /
        C4725;
    const double C369 = (C5030 * C5072 + C5065 * (C5065 * C5177 + C5051 * be) +
                         C5065 * C5051 * be) /
                        C4721;
    const double C437 = (C5030 * C5101 + C5065 * (C5065 * C5178 + C5051 * ae) +
                         C5065 * C5051 * ae) /
                        C4721;
    const double C710 = (C5030 * C5087 + C5080 * (C5080 * C5183 + C5051 * be) +
                         C5080 * C5051 * be) /
                        C4721;
    const double C838 = (C5030 * C5133 + C5080 * (C5080 * C5192 + C5051 * ae) +
                         C5080 * C5051 * ae) /
                        C4721;
    const double C1504 = (C5080 * (C5065 * C5177 + C5051 * be)) / C4721;
    const double C1542 = (C5080 * C5065 * C5183 + C5065 * C5051 * be) / C4721;
    const double C1580 = (C5080 * (C5065 * C5178 + C5051 * ae)) / C4721;
    const double C1690 = (C5080 * C5065 * C5192 + C5065 * C5051 * ae) / C4721;
    const double C324 = C5030 * C5033 + C5051 * C5110;
    const double C631 = C5030 * C5033 + C5051 * C5151;
    const double C1462 = C5080 * C5065 * C5051;
    const double C5061 = C5058 + C5050;
    const double C5277 = C5274 + C5050;
    const double C5317 = C5314 + C5050;
    const double C2374 =
        (ae * (C5087 + C5080 * (C5080 * C5092 + C5050) + C5080 * C5045 * be) +
         C5065 * (C5124 + be * C5080 * C5106 +
                  C5080 * (be * C5106 +
                           C5080 * std::pow(C5036, 5) * bs[5] * C5121))) /
        C4725;
    const double C5060 = C5057 * C4723;
    const double C5115 = C5114 * C4723;
    const double C5156 = C5155 * C4723;
    const double C3179 =
        (be * C5101 + C5080 * C5124 + ae * (C5080 * C5294 + C5275 * be) +
         C5065 * (ae * (C5080 * C5092 + C5050) +
                  C5065 * (be * C5106 +
                           C5080 * std::pow(C5036, 5) * bs[5] * C5121))) /
        C4725;
    const double C2291 = (C5065 * C5087 + C5080 * (C5080 * C5294 + C5275 * be) +
                          C5080 * C5275 * be) /
                         C4721;
    const double C2401 = (C5065 * C5133 + C5080 * (C5080 * C5295 + C5275 * ae) +
                          C5080 * C5275 * ae) /
                         C4721;
    const double C2233 = C5065 * C5033 + C5275 * C5151;
    const double C4740 = C4729 - C4737;
    const double C4739 = C4719 * C4735;
    const double C319 = (-C4735 / C4721) / C4726 - (0 * be) / C4721;
    const double C2037 = -C4735 / C4721;
    const double C4755 = C4752 / C4721;
    const double C5660 = C5639 / C4725;
    const double C5662 = C5643 / C4721;
    const double C312 = -C5661;
    const double C4810 = C4781 * C4809;
    const double C1829 = (-C4809 / C4721) / C4726 - (0 * be) / C4721;
    const double C4914 = C4911 - C4907;
    const double C4931 = C4928 / C4721;
    const double C5664 = C5653 / C4725;
    const double C363 =
        (((0 - (C4781 * C4799) / C4721) * ae) / C4721 - (0 * be) / C4730) /
            C4726 +
        ((C4781 * (((C5497 - (C4781 * 2 * C4801) / C4721) * ae) / C4721 -
                   C4799 / C4730) +
          C5650) *
         ae) /
            C4721 +
        (0 * ae) / C4721 - C4801 / C4725;
    const double C5665 = C5655 / C4721;
    const double C1794 = -C5663;
    const double C4836 = C4784 * C4835;
    const double C3343 = (-C4835 / C4721) / C4726 - (0 * be) / C4721;
    const double C4985 = C4982 - C4978;
    const double C5002 = C4999 / C4721;
    const double C5667 = C5657 / C4725;
    const double C704 =
        (((0 - (C4784 * C4825) / C4721) * ae) / C4721 - (0 * be) / C4730) /
            C4726 +
        ((C4784 * (((C5508 - (C4784 * 2 * C4827) / C4721) * ae) / C4721 -
                   C4825 / C4730) +
          C5651) *
         ae) /
            C4721 +
        (0 * ae) / C4721 - C4827 / C4725;
    const double C5668 = C5659 / C4721;
    const double C3288 = -C5666;
    const double C373 =
        (ae * C5072 + C5030 * C5076 + be * C5065 * C5062 +
         C5065 *
             (be * C5062 + C5065 * (ae * C5077 + C5030 * std::pow(C5036, 5) *
                                                     bs[5] * C5071))) /
        C4725;
    const double C714 =
        (ae * C5087 + C5030 * C5091 + be * C5080 * C5062 +
         C5080 *
             (be * C5062 + C5080 * (ae * C5092 + C5030 * std::pow(C5036, 5) *
                                                     bs[5] * C5086))) /
        C4725;
    const double C976 =
        (be * (C5043 + C5030 * C5062 + C5051 * ae) +
         C5065 * (C5076 + ae * C5177 +
                  C5030 * (ae * C5077 +
                           C5030 * std::pow(C5036, 5) * bs[5] * C5071))) /
        C4725;
    const double C1260 =
        (be * (C5043 + C5030 * C5062 + C5051 * ae) +
         C5080 * (C5091 + ae * C5183 +
                  C5030 * (ae * C5092 +
                           C5030 * std::pow(C5036, 5) * bs[5] * C5086))) /
        C4725;
    const double C1506 =
        (C5080 *
         (be * C5062 +
          C5065 * (ae * C5077 + C5030 * std::pow(C5036, 5) * bs[5] * C5071))) /
        C4725;
    const double C1544 =
        (be * C5065 * C5062 +
         C5080 * C5065 *
             (ae * C5092 + C5030 * std::pow(C5036, 5) * bs[5] * C5086)) /
        C4725;
    const double C85 = (2 * (C5030 * C5043 + C5033 * ae) +
                        C5030 * (C5043 + C5030 * C5062 + C5051 * ae) +
                        (C5033 + C5045 * C5034) * ae) /
                       C4721;
    const double C332 = (C5030 * C5043 + C5033 * ae + C5062 * C5110) / C4721;
    const double C639 = (C5030 * C5043 + C5033 * ae + C5062 * C5151) / C4721;
    const double C945 = (C5065 * (C5043 + C5030 * C5062 + C5051 * ae)) / C4721;
    const double C1201 = (C5080 * (C5043 + C5030 * C5062 + C5051 * ae)) / C4721;
    const double C1466 = (C5080 * C5065 * C5062) / C4721;
    const double C2105 = (2 * (C5065 * C5101 + C5033 * ae) +
                          C5065 * (C5101 + C5065 * C5278 + C5275 * ae) +
                          (C5033 + C5045 * C5110) * ae) /
                         C4721;
    const double C2319 = (C5065 * C5101 + C5033 * ae + C5278 * C5151) / C4721;
    const double C3124 = (C5080 * (C5101 + C5065 * C5278 + C5275 * ae)) / C4721;
    const double C3882 = (2 * (C5080 * C5133 + C5033 * ae) +
                          C5080 * (C5133 + C5080 * C5318 + C5315 * ae) +
                          (C5033 + C5045 * C5151) * ae) /
                         C4721;
    const double C441 =
        (be * C5101 + C5030 * C5105 + ae * C5065 * C5061 +
         C5065 *
             (ae * C5061 + C5065 * (be * C5106 + C5030 * std::pow(C5036, 5) *
                                                     bs[5] * C5100))) /
        C4725;
    const double C842 =
        (be * C5133 + C5030 * C5137 + ae * C5080 * C5061 +
         C5080 *
             (ae * C5061 + C5080 * (be * C5138 + C5030 * std::pow(C5036, 5) *
                                                     bs[5] * C5132))) /
        C4725;
    const double C1032 =
        (ae * (C5042 + C5030 * C5061 + C5051 * be) +
         C5065 * (C5105 + be * C5178 +
                  C5030 * (be * C5106 +
                           C5030 * std::pow(C5036, 5) * bs[5] * C5100))) /
        C4725;
    const double C1370 =
        (ae * (C5042 + C5030 * C5061 + C5051 * be) +
         C5080 * (C5137 + be * C5192 +
                  C5030 * (be * C5138 +
                           C5030 * std::pow(C5036, 5) * bs[5] * C5132))) /
        C4725;
    const double C1582 =
        (ae * C5080 * C5061 +
         C5065 * C5080 *
             (be * C5106 + C5030 * std::pow(C5036, 5) * bs[5] * C5100)) /
        C4725;
    const double C1692 =
        (ae * C5065 * C5061 +
         C5080 * C5065 *
             (be * C5138 + C5030 * std::pow(C5036, 5) * bs[5] * C5132)) /
        C4725;
    const double C84 = (2 * (C5030 * C5042 + C5033 * be) +
                        C5030 * (C5042 + C5030 * C5061 + C5051 * be) +
                        (C5033 + C5045 * C5034) * be) /
                       C4721;
    const double C331 = (C5030 * C5042 + C5033 * be + C5061 * C5110) / C4721;
    const double C638 = (C5030 * C5042 + C5033 * be + C5061 * C5151) / C4721;
    const double C944 = (C5065 * (C5042 + C5030 * C5061 + C5051 * be)) / C4721;
    const double C1200 = (C5080 * (C5042 + C5030 * C5061 + C5051 * be)) / C4721;
    const double C1465 = (C5080 * C5065 * C5061) / C4721;
    const double C2429 =
        (be * C5133 + C5065 * C5147 + ae * C5080 * C5277 +
         C5080 *
             (ae * C5277 + C5080 * (be * C5138 + C5065 * std::pow(C5036, 5) *
                                                     bs[5] * C5144))) /
        C4725;
    const double C3234 =
        (ae * (C5072 + C5065 * C5277 + C5275 * be) +
         C5080 * (C5147 + be * C5295 +
                  C5065 * (be * C5138 +
                           C5065 * std::pow(C5036, 5) * bs[5] * C5144))) /
        C4725;
    const double C2065 = (2 * (C5065 * C5072 + C5033 * be) +
                          C5065 * (C5072 + C5065 * C5277 + C5275 * be) +
                          (C5033 + C5045 * C5110) * be) /
                         C4721;
    const double C2263 = (C5065 * C5072 + C5033 * be + C5277 * C5151) / C4721;
    const double C3068 = (C5080 * (C5072 + C5065 * C5277 + C5275 * be)) / C4721;
    const double C3804 = (2 * (C5080 * C5087 + C5033 * be) +
                          C5080 * (C5087 + C5080 * C5317 + C5315 * be) +
                          (C5033 + C5045 * C5151) * be) /
                         C4721;
    const double C89 =
        (2 * (ae * C5042 + be * C5043 + C5030 * C5060) +
         ae * (C5042 + C5030 * C5061 + C5051 * be) +
         be * (C5043 + C5030 * C5062 + C5051 * ae) +
         C5030 * (C5060 + ae * C5061 + be * C5062 +
                  C5030 * (ae * C5055 + be * C5056 +
                           C5030 *
                               (C5046 * C5047 +
                                C5034 * bs[5] * std::pow(C5036, 5)) *
                               C4723))) /
        C4725;
    const double C334 =
        (ae * C5065 * C5042 + be * C5065 * C5043 + C5030 * C5065 * C5060) /
        C4725;
    const double C335 =
        ((C5033 + C5034 * C5035 * C5039) * C4723 + C5060 * C5110) / C4725;
    const double C336 =
        (ae * (C5042 + C5055 * C5110) + be * (C5043 + C5056 * C5110) +
         C5030 * (C5060 + (C5046 * C5047 + C5034 * bs[5] * std::pow(C5036, 5)) *
                              C4723 * C5110)) /
        C4725;
    const double C641 =
        (ae * C5080 * C5042 + be * C5080 * C5043 + C5030 * C5080 * C5060) /
        C4725;
    const double C642 =
        ((C5033 + C5034 * C5035 * C5039) * C4723 + C5060 * C5151) / C4725;
    const double C643 =
        (ae * (C5042 + C5055 * C5151) + be * (C5043 + C5056 * C5151) +
         C5030 * (C5060 + (C5046 * C5047 + C5034 * bs[5] * std::pow(C5036, 5)) *
                              C4723 * C5151)) /
        C4725;
    const double C946 =
        (C5065 * C5060 + ae * C5065 * C5061 + be * C5065 * C5062 +
         C5030 * (ae * C5065 * C5055 + be * C5065 * C5056 +
                  C5030 * C5065 *
                      (C5046 * C5047 + C5034 * bs[5] * std::pow(C5036, 5)) *
                      C4723)) /
        C4725;
    const double C1202 =
        (C5080 * C5060 + ae * C5080 * C5061 + be * C5080 * C5062 +
         C5030 * (ae * C5080 * C5055 + be * C5080 * C5056 +
                  C5030 * C5080 *
                      (C5046 * C5047 + C5034 * bs[5] * std::pow(C5036, 5)) *
                      C4723)) /
        C4725;
    const double C1467 = (C5080 * C5065 * C5060) / C4725;
    const double C2042 =
        (2 * C5065 * C5060 +
         C5065 * (C5060 + (C5046 * C5047 + C5034 * bs[5] * std::pow(C5036, 5)) *
                              C4723 * C5110)) /
        C4725;
    const double C2236 =
        (C5065 * C5060 +
         C5065 * (C5046 * C5047 + C5034 * bs[5] * std::pow(C5036, 5)) * C4723 *
             C5151) /
        C4725;
    const double C3041 =
        (C5080 * (C5060 + (C5046 * C5047 + C5034 * bs[5] * std::pow(C5036, 5)) *
                              C4723 * C5110)) /
        C4725;
    const double C3761 =
        (2 * C5080 * C5060 +
         C5080 * (C5060 + (C5046 * C5047 + C5034 * bs[5] * std::pow(C5036, 5)) *
                              C4723 * C5151)) /
        C4725;
    const double C192 =
        (2 * C5030 * C5115 +
         C5030 * (C5115 + (C5046 * C5047 + C5110 * bs[5] * std::pow(C5036, 5)) *
                              C4723 * C5034)) /
        C4725;
    const double C472 =
        ((C5033 + C5110 * C5035 * C5039) * C4723 +
         ae * (C5065 * C5072 + C5033 * be) + be * (C5065 * C5101 + C5033 * ae) +
         C5065 * (ae * C5072 + be * C5101 + C5065 * C5115)) /
        C4725;
    const double C473 =
        (ae * C5030 * C5072 + be * C5030 * C5101 + C5065 * C5030 * C5115) /
        C4725;
    const double C474 =
        (C5030 * C5115 + ae * (C5065 * C5177 + C5051 * be) +
         be * (C5065 * C5178 + C5051 * ae) +
         C5065 * (ae * C5177 + be * C5178 +
                  C5065 * C5030 *
                      (C5046 * C5047 + C5110 * bs[5] * std::pow(C5036, 5)) *
                      C4723)) /
        C4725;
    const double C776 = (C5080 * C5030 * C5115) / C4725;
    const double C777 =
        ((C5033 + C5110 * C5035 * C5039) * C4723 + C5115 * C5151) / C4725;
    const double C778 =
        (C5030 * C5115 +
         C5030 * (C5046 * C5047 + C5110 * bs[5] * std::pow(C5036, 5)) * C4723 *
             C5151) /
        C4725;
    const double C1061 =
        (ae * (C5072 + C5077 * C5034) + be * (C5101 + C5106 * C5034) +
         C5065 * (C5115 + (C5046 * C5047 + C5110 * bs[5] * std::pow(C5036, 5)) *
                              C4723 * C5034)) /
        C4725;
    const double C1315 =
        (C5080 * (C5115 + (C5046 * C5047 + C5110 * bs[5] * std::pow(C5036, 5)) *
                              C4723 * C5034)) /
        C4725;
    const double C1617 =
        (ae * C5080 * C5072 + be * C5080 * C5101 + C5065 * C5080 * C5115) /
        C4725;
    const double C2129 =
        (2 * (ae * C5072 + be * C5101 + C5065 * C5115) +
         ae * (C5072 + C5065 * C5277 + C5275 * be) +
         be * (C5101 + C5065 * C5278 + C5275 * ae) +
         C5065 * (C5115 + ae * C5277 + be * C5278 +
                  C5065 * (ae * C5077 + be * C5106 +
                           C5065 *
                               (C5046 * C5047 +
                                C5110 * bs[5] * std::pow(C5036, 5)) *
                               C4723))) /
        C4725;
    const double C2347 =
        (ae * (C5072 + C5077 * C5151) + be * (C5101 + C5106 * C5151) +
         C5065 * (C5115 + (C5046 * C5047 + C5110 * bs[5] * std::pow(C5036, 5)) *
                              C4723 * C5151)) /
        C4725;
    const double C3152 =
        (C5080 * C5115 + ae * C5080 * C5277 + be * C5080 * C5278 +
         C5065 * (ae * C5080 * C5077 + be * C5080 * C5106 +
                  C5065 * C5080 *
                      (C5046 * C5047 + C5110 * bs[5] * std::pow(C5036, 5)) *
                      C4723)) /
        C4725;
    const double C3844 =
        (2 * C5080 * C5115 +
         C5080 * (C5115 + (C5046 * C5047 + C5110 * bs[5] * std::pow(C5036, 5)) *
                              C4723 * C5151)) /
        C4725;
    const double C285 =
        (2 * C5030 * C5156 +
         C5030 * (C5156 + (C5046 * C5047 + C5151 * bs[5] * std::pow(C5036, 5)) *
                              C4723 * C5034)) /
        C4725;
    const double C596 =
        ((C5033 + C5151 * C5035 * C5039) * C4723 + C5156 * C5110) / C4725;
    const double C597 = (C5065 * C5030 * C5156) / C4725;
    const double C598 =
        (C5030 * C5156 +
         C5030 * (C5046 * C5047 + C5151 * bs[5] * std::pow(C5036, 5)) * C4723 *
             C5110) /
        C4725;
    const double C903 =
        ((C5033 + C5151 * C5035 * C5039) * C4723 +
         ae * (C5080 * C5087 + C5033 * be) + be * (C5080 * C5133 + C5033 * ae) +
         C5080 * (ae * C5087 + be * C5133 + C5080 * C5156)) /
        C4725;
    const double C904 =
        (ae * C5030 * C5087 + be * C5030 * C5133 + C5080 * C5030 * C5156) /
        C4725;
    const double C905 =
        (C5030 * C5156 + ae * (C5080 * C5183 + C5051 * be) +
         be * (C5080 * C5192 + C5051 * ae) +
         C5080 * (ae * C5183 + be * C5192 +
                  C5080 * C5030 *
                      (C5046 * C5047 + C5151 * bs[5] * std::pow(C5036, 5)) *
                      C4723)) /
        C4725;
    const double C1170 =
        (C5065 * (C5156 + (C5046 * C5047 + C5151 * bs[5] * std::pow(C5036, 5)) *
                              C4723 * C5034)) /
        C4725;
    const double C1426 =
        (ae * (C5087 + C5092 * C5034) + be * (C5133 + C5138 * C5034) +
         C5080 * (C5156 + (C5046 * C5047 + C5151 * bs[5] * std::pow(C5036, 5)) *
                              C4723 * C5034)) /
        C4725;
    const double C1763 =
        (ae * C5065 * C5087 + be * C5065 * C5133 + C5080 * C5065 * C5156) /
        C4725;
    const double C2206 =
        (2 * C5065 * C5156 +
         C5065 * (C5156 + (C5046 * C5047 + C5151 * bs[5] * std::pow(C5036, 5)) *
                              C4723 * C5110)) /
        C4725;
    const double C2456 =
        (C5065 * C5156 + ae * (C5080 * C5294 + C5275 * be) +
         be * (C5080 * C5295 + C5275 * ae) +
         C5080 * (ae * C5294 + be * C5295 +
                  C5080 * C5065 *
                      (C5046 * C5047 + C5151 * bs[5] * std::pow(C5036, 5)) *
                      C4723)) /
        C4725;
    const double C3261 =
        (ae * (C5087 + C5092 * C5110) + be * (C5133 + C5138 * C5110) +
         C5080 * (C5156 + (C5046 * C5047 + C5151 * bs[5] * std::pow(C5036, 5)) *
                              C4723 * C5110)) /
        C4725;
    const double C3925 =
        (2 * (ae * C5087 + be * C5133 + C5080 * C5156) +
         ae * (C5087 + C5080 * C5317 + C5315 * be) +
         be * (C5133 + C5080 * C5318 + C5315 * ae) +
         C5080 * (C5156 + ae * C5317 + be * C5318 +
                  C5080 * (ae * C5092 + be * C5138 +
                           C5080 *
                               (C5046 * C5047 +
                                C5151 * bs[5] * std::pow(C5036, 5)) *
                               C4723))) /
        C4725;
    const double C72 =
        (C4740 / C4726 - (0 * be) / C4721) / C4726 + (0 * ae) / C4721;
    const double C941 = C4740 / C4726 - (0 * be) / C4721;
    const double C1800 = C4740 / C4726 + (0 * ae) / C4721;
    const double C4742 = C4739 / C4721;
    const double C5669 = C5638 - C5660;
    const double C5670 = C5642 - C5662;
    const double C4811 = C4810 / C4721;
    const double C2064 =
        (C4914 / C4726 - (0 * be) / C4721) / C4726 + (0 * ae) / C4721;
    const double C2520 = C4914 / C4726 - (0 * be) / C4721;
    const double C5671 = C5647 - C5664;
    const double C5672 = C5654 - C5665;
    const double C4837 = C4836 / C4721;
    const double C3803 =
        (C4985 / C4726 - (0 * be) / C4721) / C4726 + (0 * ae) / C4721;
    const double C4315 = C4985 / C4726 - (0 * be) / C4721;
    const double C5673 = C5649 - C5667;
    const double C5674 = C5658 - C5668;
    const double C4744 = C5467 - C4742;
    const double C57 = (C5669 * C5462) / C4721 + (C5640 - C5661) / C4726;
    const double C58 = (C5670 * C5462) / C4721 + (2 * C5472 + C5669) / C4726;
    const double C59 = (C5462 * C5472) / C4730 + C5670 / C4726;
    const double C4812 = C5497 - C4811;
    const double C2033 = (C5671 * C5541) / C4721 + (C5650 - C5663) / C4726;
    const double C2034 = (C5672 * C5541) / C4721 + (2 * C5546 + C5671) / C4726;
    const double C2035 = (C5541 * C5546) / C4730 + C5672 / C4726;
    const double C4838 = C5508 - C4837;
    const double C3754 = (C5673 * C5567) / C4721 + (C5651 - C5666) / C4726;
    const double C3755 = (C5674 * C5567) / C4721 + (2 * C5572 + C5673) / C4726;
    const double C3756 = (C5567 * C5572) / C4730 + C5674 / C4726;
    const double C4745 = C4744 * ae;
    const double C4756 = C4744 * C4753;
    const double C317 = (-C4722 / C4721) / C4726 - (C4744 * be) / C4721;
    const double C4813 = C4812 * C4753;
    const double C4904 = C4812 * ae;
    const double C973 = (C4812 * ae) / C4721 - C4799 / C4730;
    const double C1828 = (-C4799 / C4721) / C4726 - (C4812 * be) / C4721;
    const double C4839 = C4838 * C4753;
    const double C4975 = C4838 * ae;
    const double C1257 = (C4838 * ae) / C4721 - C4825 / C4730;
    const double C3342 = (-C4825 / C4721) / C4726 - (C4838 * be) / C4721;
    const double C4746 = C4745 / C4721;
    const double C4757 = C4719 * C4756;
    const double C73 = (-C4756 / C4721) / (4 * C4750);
    const double C320 = (-C4756 / C4721) / C4726;
    const double C942 = (-C4756 / C4721) / (4 * C4725);
    const double C1801 = (-C4756 / C4721) / (4 * C4725);
    const double C2038 = -C4756 / C4721;
    const double C2491 = (-C4756 / C4721) / C4726;
    const double C4816 = C4781 * C4813;
    const double C468 =
        (ae * -2 * C4799) / C4750 +
        (((C4781 * ((-4 * C4801) / C4721 - (C4781 * C4813) / C4721) * ae) /
              C4721 +
          2 * ((C4812 * ae) / C4721 - C4799 / C4730)) *
         ae) /
            C4721 -
        C4813 / C4730;
    const double C470 = (-C4813 / C4721) / (4 * C4725);
    const double C1060 = (-C4813 / C4721) / C4726;
    const double C1909 = (-C4813 / C4721) / C4726;
    const double C2128 = (-C4813 / C4721) / (4 * C4750);
    const double C2601 = (-C4813 / C4721) / (4 * C4725);
    const double C4910 = C4904 / C4721;
    const double C4842 = C4784 * C4839;
    const double C899 =
        (ae * -2 * C4825) / C4750 +
        (((C4784 * ((-4 * C4827) / C4721 - (C4784 * C4839) / C4721) * ae) /
              C4721 +
          2 * ((C4838 * ae) / C4721 - C4825 / C4730)) *
         ae) /
            C4721 -
        C4839 / C4730;
    const double C901 = (-C4839 / C4721) / (4 * C4725);
    const double C1425 = (-C4839 / C4721) / C4726;
    const double C3501 = (-C4839 / C4721) / C4726;
    const double C3924 = (-C4839 / C4721) / (4 * C4750);
    const double C4474 = (-C4839 / C4721) / (4 * C4725);
    const double C4981 = C4975 / C4721;
    const double C4747 = C4746 - C4736;
    const double C4758 = C4757 / C4721;
    const double C4929 = C4816 / C4721;
    const double C469 =
        (((-4 * C4801) / C4721 - C4816 / C4721) * ae) / C4730 +
        ((2 * ((0 * ae) / C4721 - C4801 / C4725) - C4816 / C4730) * ae) / C4721;
    const double C1059 = (((-4 * C4801) / C4721 - C4816 / C4721) * ae) / C4721;
    const double C1908 = -(((-4 * C4801) / C4721 - C4816 / C4721) * be) / C4721;
    const double C4913 = C4910 - C4905;
    const double C5000 = C4842 / C4721;
    const double C900 =
        (((-4 * C4827) / C4721 - C4842 / C4721) * ae) / C4730 +
        ((2 * ((0 * ae) / C4721 - C4827 / C4725) - C4842 / C4730) * ae) / C4721;
    const double C1424 = (((-4 * C4827) / C4721 - C4842 / C4721) * ae) / C4721;
    const double C3500 = -(((-4 * C4827) / C4721 - C4842 / C4721) * be) / C4721;
    const double C4984 = C4981 - C4976;
    const double C66 =
        ((((0 - (C4719 * C4720) / C4721) * ae) / C4721 - (0 * be) / C4730 +
          C4722 / C4721) /
             C4726 -
         ((C4719 * C4743 + 0) * be) / C4721) /
            C4726 +
        ((C4719 *
              (C4743 / C4726 - ((C4719 * C4747 + C5640) * be) / C4721 + C4740) +
          C5669) *
         ae) /
            C4721 +
        C4747 / C4726 - ((C4719 * C4740 + C5472) * be) / C4721;
    const double C68 =
        (C4743 / C4726 - ((C4719 * C4747 + C5640) * be) / C4721 + C4740) /
            C4726 +
        ((C4719 * (C4747 / C4726 - ((C4719 * C4740 + C5472) * be) / C4721) +
          C5670) *
         ae) /
            C4721 +
        2 * (C4740 / C4726 - (0 * be) / C4721);
    const double C70 =
        (C4747 / C4726 - ((C4719 * C4740 + C5472) * be) / C4721) / C4726 +
        ((C4719 * (C4740 / C4726 - (0 * be) / C4721) + C934) * ae) / C4721;
    const double C937 =
        C4743 / C4726 - ((C4719 * C4747 + C5640) * be) / C4721 + C4740;
    const double C939 = C4747 / C4726 - ((C4719 * C4740 + C5472) * be) / C4721;
    const double C1796 =
        C4743 / C4726 + ((C4719 * C4747 + C5640) * ae) / C4721 + C4740;
    const double C1798 = C4747 / C4726 + ((C4719 * C4740 + C5472) * ae) / C4721;
    const double C4759 = C4755 - C4758;
    const double C4932 = C4931 - C4929;
    const double C2061 =
        ((((0 - (C4781 * C4902) / C4721) * ae) / C4721 - (0 * be) / C4730 +
          C4799 / C4721) /
             C4726 -
         ((C4781 * C4917 + 0) * be) / C4721) /
            C4726 +
        ((C4781 *
              (C4917 / C4726 - ((C4781 * C4913 + C5650) * be) / C4721 + C4914) +
          C5671) *
         ae) /
            C4721 +
        C4913 / C4726 - ((C4781 * C4914 + C5546) * be) / C4721;
    const double C2062 =
        (C4917 / C4726 - ((C4781 * C4913 + C5650) * be) / C4721 + C4914) /
            C4726 +
        ((C4781 * (C4913 / C4726 - ((C4781 * C4914 + C5546) * be) / C4721) +
          C5672) *
         ae) /
            C4721 +
        2 * (C4914 / C4726 - (0 * be) / C4721);
    const double C2063 =
        (C4913 / C4726 - ((C4781 * C4914 + C5546) * be) / C4721) / C4726 +
        ((C4781 * (C4914 / C4726 - (0 * be) / C4721) + C2487) * ae) / C4721;
    const double C2518 =
        C4917 / C4726 - ((C4781 * C4913 + C5650) * be) / C4721 + C4914;
    const double C2519 = C4913 / C4726 - ((C4781 * C4914 + C5546) * be) / C4721;
    const double C5003 = C5002 - C5000;
    const double C3800 =
        ((((0 - (C4784 * C4973) / C4721) * ae) / C4721 - (0 * be) / C4730 +
          C4825 / C4721) /
             C4726 -
         ((C4784 * C4988 + 0) * be) / C4721) /
            C4726 +
        ((C4784 *
              (C4988 / C4726 - ((C4784 * C4984 + C5651) * be) / C4721 + C4985) +
          C5673) *
         ae) /
            C4721 +
        C4984 / C4726 - ((C4784 * C4985 + C5572) * be) / C4721;
    const double C3801 =
        (C4988 / C4726 - ((C4784 * C4984 + C5651) * be) / C4721 + C4985) /
            C4726 +
        ((C4784 * (C4984 / C4726 - ((C4784 * C4985 + C5572) * be) / C4721) +
          C5674) *
         ae) /
            C4721 +
        2 * (C4985 / C4726 - (0 * be) / C4721);
    const double C3802 =
        (C4984 / C4726 - ((C4784 * C4985 + C5572) * be) / C4721) / C4726 +
        ((C4784 * (C4985 / C4726 - (0 * be) / C4721) + C4260) * ae) / C4721;
    const double C4313 =
        C4988 / C4726 - ((C4784 * C4984 + C5651) * be) / C4721 + C4985;
    const double C4314 = C4984 / C4726 - ((C4784 * C4985 + C5572) * be) / C4721;
    const double C4760 = C4759 * ae;
    const double C318 = -(C4759 * be) / C4721;
    const double C4933 = C4932 * ae;
    const double C5004 = C5003 * ae;
    const double C67 =
        ((ae * -2 * C4720) / C4750 -
         (((C4719 * C4754) / C4725 + 2 * C4743) * be) / C4721) /
            C4726 +
        ((C4719 * (C4754 / C4750 -
                   (((C4719 * C4760) / C4721 + 2 * C4747) * be) / C4721 -
                   C4756 / C4730) +
          2 * (C4743 / C4726 - ((C4719 * C4747 + C5640) * be) / C4721 +
               C4740)) *
         ae) /
            C4721 +
        C4760 / C4730 - ((2 * C4740 - C4757 / C4730) * be) / C4721;
    const double C69 =
        (C4754 / C4750 - (((C4719 * C4760) / C4721 + 2 * C4747) * be) / C4721 -
         C4756 / C4730) /
            C4726 +
        ((C4719 * (C4760 / C4730 - ((2 * C4740 - C4757 / C4730) * be) / C4721) +
          2 * (C4747 / C4726 - ((C4719 * C4740 + C5472) * be) / C4721)) *
         ae) /
            C4721 +
        (-2 * C4756) / (C4721 * 4 * C4725);
    const double C71 =
        (C4760 / C4730 - ((2 * C4740 - C4757 / C4730) * be) / C4721) / C4726 +
        ((2 * (C4740 / C4726 - (0 * be) / C4721) -
          C4757 / (C4721 * 4 * C4725)) *
         ae) /
            C4721;
    const double C938 = C4754 / C4750 -
                        (((C4719 * C4760) / C4721 + 2 * C4747) * be) / C4721 -
                        C4756 / C4730;
    const double C940 =
        C4760 / C4730 - ((2 * C4740 - C4757 / C4730) * be) / C4721;
    const double C1797 = C4754 / C4750 +
                         (((C4719 * C4760) / C4721 + 2 * C4747) * ae) / C4721 -
                         C4756 / C4730;
    const double C1799 =
        C4760 / C4730 + ((2 * C4740 - C4757 / C4730) * ae) / C4721;
    const double C2489 = C4760 / C4721;
    const double C2125 =
        ((ae * -2 * C4902) / C4750 -
         (((C4781 * C4930) / C4725 + 2 * C4917) * be) / C4721) /
            C4726 +
        ((C4781 * (C4930 / C4750 -
                   (((C4781 * C4933) / C4721 + 2 * C4913) * be) / C4721 -
                   C4813 / C4730) +
          2 * (C4917 / C4726 - ((C4781 * C4913 + C5650) * be) / C4721 +
               C4914)) *
         ae) /
            C4721 +
        C4933 / C4730 - ((2 * C4914 - C4816 / C4730) * be) / C4721;
    const double C2126 =
        (C4930 / C4750 - (((C4781 * C4933) / C4721 + 2 * C4913) * be) / C4721 -
         C4813 / C4730) /
            C4726 +
        ((C4781 * (C4933 / C4730 - ((2 * C4914 - C4816 / C4730) * be) / C4721) +
          2 * (C4913 / C4726 - ((C4781 * C4914 + C5546) * be) / C4721)) *
         ae) /
            C4721 +
        (-2 * C4813) / (C4721 * 4 * C4725);
    const double C2127 =
        (C4933 / C4730 - ((2 * C4914 - C4816 / C4730) * be) / C4721) / C4726 +
        ((2 * (C4914 / C4726 - (0 * be) / C4721) -
          C4816 / (C4721 * 4 * C4725)) *
         ae) /
            C4721;
    const double C2599 = C4930 / C4750 -
                         (((C4781 * C4933) / C4721 + 2 * C4913) * be) / C4721 -
                         C4813 / C4730;
    const double C2600 =
        C4933 / C4730 - ((2 * C4914 - C4816 / C4730) * be) / C4721;
    const double C3921 =
        ((ae * -2 * C4973) / C4750 -
         (((C4784 * C5001) / C4725 + 2 * C4988) * be) / C4721) /
            C4726 +
        ((C4784 * (C5001 / C4750 -
                   (((C4784 * C5004) / C4721 + 2 * C4984) * be) / C4721 -
                   C4839 / C4730) +
          2 * (C4988 / C4726 - ((C4784 * C4984 + C5651) * be) / C4721 +
               C4985)) *
         ae) /
            C4721 +
        C5004 / C4730 - ((2 * C4985 - C4842 / C4730) * be) / C4721;
    const double C3922 =
        (C5001 / C4750 - (((C4784 * C5004) / C4721 + 2 * C4984) * be) / C4721 -
         C4839 / C4730) /
            C4726 +
        ((C4784 * (C5004 / C4730 - ((2 * C4985 - C4842 / C4730) * be) / C4721) +
          2 * (C4984 / C4726 - ((C4784 * C4985 + C5572) * be) / C4721)) *
         ae) /
            C4721 +
        (-2 * C4839) / (C4721 * 4 * C4725);
    const double C3923 =
        (C5004 / C4730 - ((2 * C4985 - C4842 / C4730) * be) / C4721) / C4726 +
        ((2 * (C4985 / C4726 - (0 * be) / C4721) -
          C4842 / (C4721 * 4 * C4725)) *
         ae) /
            C4721;
    const double C4472 = C5001 / C4750 -
                         (((C4784 * C5004) / C4721 + 2 * C4984) * be) / C4721 -
                         C4839 / C4730;
    const double C4473 =
        C5004 / C4730 - ((2 * C4985 - C4842 / C4730) * be) / C4721;
    d2eexx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C937 * C78 - C938 * C74 - C937 * C79 + C5669 * C86 +
                    C939 * C80 - C940 * C75 - C939 * C81 + C5670 * C87 +
                    C941 * C82 - C942 * C76 - C941 * C83 + C934 * C88) *
                       C5508 * C5650 +
                   (C937 * C325 - C938 * C321 - C937 * C326 + C5669 * C333 +
                    C939 * C327 - C940 * C322 - C939 * C328 + C5670 * C334 +
                    C941 * C944 - C942 * C943 - C941 * C945 + C934 * C946) *
                       C5508 * C5546) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C5650 * C109 - C973 * C74 + C5546 * C366 - C974 * C321) * C937 +
          (C5650 * C113 - C973 * C79 + C5546 * C370 - C974 * C326) * C5669 +
          (C5650 * C110 - C973 * C75 + C5546 * C368 - C974 * C322) * C939 +
          (C5650 * C114 - C973 * C81 + C5546 * C372 - C974 * C328) * C5670 +
          (C5650 * C111 - C973 * C76 + C5546 * C975 - C974 * C943) * C941 +
          (C5650 * C115 - C973 * C83 + C5546 * C976 - C974 * C945) * C934) *
         C5508 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C5508 * C136 - C135 * C74) * C937 +
                    (C5508 * C140 - C135 * C79) * C5669 +
                    (C5508 * C137 - C135 * C75) * C939 +
                    (C5508 * C141 - C135 * C81) * C5670 +
                    (C5508 * C138 - C135 * C76) * C941 +
                    (C5508 * C142 - C135 * C83) * C934) *
                       C5650 +
                   ((C5508 * C400 - C135 * C321) * C937 +
                    (C5508 * C404 - C135 * C326) * C5669 +
                    (C5508 * C401 - C135 * C322) * C939 +
                    (C5508 * C405 - C135 * C328) * C5670 +
                    (C5508 * C1003 - C135 * C943) * C941 +
                    (C5508 * C1004 - C135 * C945) * C934) *
                       C5546) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C5669 * C78 - C937 * C74 + C5670 * C80 - C939 * C75 +
                    C934 * C82 - C941 * C76) *
                       C973 +
                   (C5669 * C166 - C937 * C162 + C5670 * C167 - C939 * C163 +
                    C934 * C168 - C941 * C164) *
                       C5650 +
                   (C5669 * C325 - C937 * C321 + C5670 * C327 - C939 * C322 +
                    C934 * C944 - C941 * C943) *
                       C974 +
                   (C5669 * C438 - C937 * C434 + C5670 * C439 - C939 * C435 +
                    C934 * C1032 - C941 * C1031) *
                       C5546) *
                  C5508 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C973 * C109 - C1059 * C74 - C973 * C162 + C5650 * C189 +
                    C974 * C366 - C1060 * C321 - C974 * C434 + C5546 * C471) *
                       C5669 +
                   (C973 * C110 - C1059 * C75 - C973 * C163 + C5650 * C190 +
                    C974 * C368 - C1060 * C322 - C974 * C435 + C5546 * C473) *
                       C5670 +
                   (C973 * C111 - C1059 * C76 - C973 * C164 + C5650 * C191 +
                    C974 * C975 - C1060 * C943 - C974 * C1031 + C5546 * C1061) *
                       C934) *
                  C5508 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C5508 * C136 - C135 * C74) * C973 +
                    (C5508 * C211 - C135 * C162) * C5650 +
                    (C5508 * C400 - C135 * C321) * C974 +
                    (C5508 * C501 - C135 * C434) * C5546) *
                       C5669 +
                   ((C5508 * C137 - C135 * C75) * C973 +
                    (C5508 * C212 - C135 * C163) * C5650 +
                    (C5508 * C401 - C135 * C322) * C974 +
                    (C5508 * C503 - C135 * C435) * C5546) *
                       C5670 +
                   ((C5508 * C138 - C135 * C76) * C973 +
                    (C5508 * C213 - C135 * C164) * C5650 +
                    (C5508 * C1003 - C135 * C943) * C974 +
                    (C5508 * C1088 - C135 * C1031) * C5546) *
                       C934) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C5669 * C78 - C937 * C74 + C5670 * C80 - C939 * C75 +
                     C934 * C82 - C941 * C76) *
                        C135 +
                    (C5669 * C237 - C937 * C233 + C5670 * C238 - C939 * C234 +
                     C934 * C239 - C941 * C235) *
                        C5508) *
                       C5650 +
                   ((C5669 * C325 - C937 * C321 + C5670 * C327 - C939 * C322 +
                     C934 * C944 - C941 * C943) *
                        C135 +
                    (C5669 * C535 - C937 * C531 + C5670 * C536 - C939 * C532 +
                     C934 * C1116 - C941 * C1115) *
                        C5508) *
                       C5546) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5650 * C109 - C973 * C74 + C5546 * C366 - C974 * C321) * C135 +
           (C5650 * C259 - C973 * C233 + C5546 * C565 - C974 * C531) * C5508) *
              C5669 +
          ((C5650 * C110 - C973 * C75 + C5546 * C368 - C974 * C322) * C135 +
           (C5650 * C260 - C973 * C234 + C5546 * C567 - C974 * C532) * C5508) *
              C5670 +
          ((C5650 * C111 - C973 * C76 + C5546 * C975 - C974 * C943) * C135 +
           (C5650 * C261 - C973 * C235 + C5546 * C1143 - C974 * C1115) *
               C5508) *
              C934) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C135 * C136 - C281 * C74 - C135 * C233 + C5508 * C282) * C5650 +
           (C135 * C400 - C281 * C321 - C135 * C531 + C5508 * C595) * C5546) *
              C5669 +
          ((C135 * C137 - C281 * C75 - C135 * C234 + C5508 * C283) * C5650 +
           (C135 * C401 - C281 * C322 - C135 * C532 + C5508 * C597) * C5546) *
              C5670 +
          ((C135 * C138 - C281 * C76 - C135 * C235 + C5508 * C284) * C5650 +
           (C135 * C1003 - C281 * C943 - C135 * C1115 + C5508 * C1170) *
               C5546) *
              C934) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C317 * C78 - C318 * C74 - C317 * C79 + C312 * C86 + C319 * C80 -
            C320 * C75 - C319 * C81 + C5472 * C87) *
               C5651 +
           (C317 * C632 - C318 * C628 - C317 * C633 + C312 * C640 +
            C319 * C634 - C320 * C629 - C319 * C635 + C5472 * C641) *
               C5572) *
              C5650 +
          ((C317 * C325 - C318 * C321 - C317 * C326 + C312 * C333 +
            C319 * C327 - C320 * C322 - C319 * C328 + C5472 * C334) *
               C5651 +
           (C317 * C1463 - C318 * C1461 - C317 * C1464 + C312 * C1467 +
            C319 * C1465 - C320 * C1462 - C319 * C1466 + C5472 * C1468) *
               C5572) *
              C5546) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5650 * C109 - C973 * C74 + C5546 * C366 - C974 * C321) * C317 +
           (C5650 * C113 - C973 * C79 + C5546 * C370 - C974 * C326) * C312 +
           (C5650 * C110 - C973 * C75 + C5546 * C368 - C974 * C322) * C319 +
           (C5650 * C114 - C973 * C81 + C5546 * C372 - C974 * C328) * C5472) *
              C5651 +
          ((C5650 * C670 - C973 * C628 + C5546 * C1503 - C974 * C1461) * C317 +
           (C5650 * C674 - C973 * C633 + C5546 * C1505 - C974 * C1464) * C312 +
           (C5650 * C671 - C973 * C629 + C5546 * C1504 - C974 * C1462) * C319 +
           (C5650 * C675 - C973 * C635 + C5546 * C1506 - C974 * C1466) *
               C5472) *
              C5572) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5651 * C136 - C1257 * C74 + C5572 * C707 - C1258 * C628) * C317 +
           (C5651 * C140 - C1257 * C79 + C5572 * C711 - C1258 * C633) * C312 +
           (C5651 * C137 - C1257 * C75 + C5572 * C709 - C1258 * C629) * C319 +
           (C5651 * C141 - C1257 * C81 + C5572 * C713 - C1258 * C635) * C5472) *
              C5650 +
          ((C5651 * C400 - C1257 * C321 + C5572 * C1541 - C1258 * C1461) *
               C317 +
           (C5651 * C404 - C1257 * C326 + C5572 * C1543 - C1258 * C1464) *
               C312 +
           (C5651 * C401 - C1257 * C322 + C5572 * C1542 - C1258 * C1462) *
               C319 +
           (C5651 * C405 - C1257 * C328 + C5572 * C1544 - C1258 * C1466) *
               C5472) *
              C5546) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C312 * C78 - C317 * C74 + C5472 * C80 - C319 * C75) * C973 +
           (C312 * C166 - C317 * C162 + C5472 * C167 - C319 * C163) * C5650 +
           (C312 * C325 - C317 * C321 + C5472 * C327 - C319 * C322) * C974 +
           (C312 * C438 - C317 * C434 + C5472 * C439 - C319 * C435) * C5546) *
              C5651 +
          ((C312 * C632 - C317 * C628 + C5472 * C634 - C319 * C629) * C973 +
           (C312 * C745 - C317 * C741 + C5472 * C746 - C319 * C742) * C5650 +
           (C312 * C1463 - C317 * C1461 + C5472 * C1465 - C319 * C1462) * C974 +
           (C312 * C1581 - C317 * C1579 + C5472 * C1582 - C319 * C1580) *
               C5546) *
              C5572) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C973 * C109 - C1059 * C74 - C973 * C162 + C5650 * C189 +
            C974 * C366 - C1060 * C321 - C974 * C434 + C5546 * C471) *
               C312 +
           (C973 * C110 - C1059 * C75 - C973 * C163 + C5650 * C190 +
            C974 * C368 - C1060 * C322 - C974 * C435 + C5546 * C473) *
               C5472) *
              C5651 +
          ((C973 * C670 - C1059 * C628 - C973 * C741 + C5650 * C775 +
            C974 * C1503 - C1060 * C1461 - C974 * C1579 + C5546 * C1617) *
               C312 +
           (C973 * C671 - C1059 * C629 - C973 * C742 + C5650 * C776 +
            C974 * C1504 - C1060 * C1462 - C974 * C1580 + C5546 * C1618) *
               C5472) *
              C5572) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5651 * C136 - C1257 * C74 + C5572 * C707 - C1258 * C628) * C973 +
           (C5651 * C211 - C1257 * C162 + C5572 * C805 - C1258 * C741) * C5650 +
           (C5651 * C400 - C1257 * C321 + C5572 * C1541 - C1258 * C1461) *
               C974 +
           (C5651 * C501 - C1257 * C434 + C5572 * C1653 - C1258 * C1579) *
               C5546) *
              C312 +
          ((C5651 * C137 - C1257 * C75 + C5572 * C709 - C1258 * C629) * C973 +
           (C5651 * C212 - C1257 * C163 + C5572 * C807 - C1258 * C742) * C5650 +
           (C5651 * C401 - C1257 * C322 + C5572 * C1542 - C1258 * C1462) *
               C974 +
           (C5651 * C503 - C1257 * C435 + C5572 * C1654 - C1258 * C1580) *
               C5546) *
              C5472) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C312 * C78 - C317 * C74 + C5472 * C80 - C319 * C75) * C1257 +
           (C312 * C237 - C317 * C233 + C5472 * C238 - C319 * C234) * C5651 +
           (C312 * C632 - C317 * C628 + C5472 * C634 - C319 * C629) * C1258 +
           (C312 * C839 - C317 * C835 + C5472 * C840 - C319 * C836) * C5572) *
              C5650 +
          ((C312 * C325 - C317 * C321 + C5472 * C327 - C319 * C322) * C1257 +
           (C312 * C535 - C317 * C531 + C5472 * C536 - C319 * C532) * C5651 +
           (C312 * C1463 - C317 * C1461 + C5472 * C1465 - C319 * C1462) *
               C1258 +
           (C312 * C1691 - C317 * C1689 + C5472 * C1692 - C319 * C1690) *
               C5572) *
              C5546) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5650 * C109 - C973 * C74 + C5546 * C366 - C974 * C321) * C1257 +
           (C5650 * C259 - C973 * C233 + C5546 * C565 - C974 * C531) * C5651 +
           (C5650 * C670 - C973 * C628 + C5546 * C1503 - C974 * C1461) * C1258 +
           (C5650 * C869 - C973 * C835 + C5546 * C1727 - C974 * C1689) *
               C5572) *
              C312 +
          ((C5650 * C110 - C973 * C75 + C5546 * C368 - C974 * C322) * C1257 +
           (C5650 * C260 - C973 * C234 + C5546 * C567 - C974 * C532) * C5651 +
           (C5650 * C671 - C973 * C629 + C5546 * C1504 - C974 * C1462) * C1258 +
           (C5650 * C871 - C973 * C836 + C5546 * C1728 - C974 * C1690) *
               C5572) *
              C5472) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1257 * C136 - C1424 * C74 - C1257 * C233 + C5651 * C282 +
            C1258 * C707 - C1425 * C628 - C1258 * C835 + C5572 * C902) *
               C5650 +
           (C1257 * C400 - C1424 * C321 - C1257 * C531 + C5651 * C595 +
            C1258 * C1541 - C1425 * C1461 - C1258 * C1689 + C5572 * C1763) *
               C5546) *
              C312 +
          ((C1257 * C137 - C1424 * C75 - C1257 * C234 + C5651 * C283 +
            C1258 * C709 - C1425 * C629 - C1258 * C836 + C5572 * C904) *
               C5650 +
           (C1257 * C401 - C1424 * C322 - C1257 * C532 + C5651 * C597 +
            C1258 * C1542 - C1425 * C1462 - C1258 * C1690 + C5572 * C1764) *
               C5546) *
              C5472) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] += (-std::pow(Pi, 2.5) *
                  ((C317 * C78 - C318 * C74 - C317 * C79 + C312 * C86 +
                    C319 * C80 - C320 * C75 - C319 * C81 + C5472 * C87) *
                       C5508 * C314 +
                   (C317 * C325 - C318 * C321 - C317 * C326 + C312 * C333 +
                    C319 * C327 - C320 * C322 - C319 * C328 + C5472 * C334) *
                       C5508 * C315 +
                   (C317 * C329 - C318 * C323 - C317 * C330 + C312 * C335 +
                    C319 * C331 - C320 * C324 - C319 * C332 + C5472 * C336) *
                       C5508 * C316) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (C66 * C78 - C67 * C74 - C66 * C79 + C57 * C86 + C68 * C80 -
                   C69 * C75 - C68 * C81 + C58 * C87 + C70 * C82 - C71 * C76 -
                   C70 * C83 + C59 * C88 + C72 * C84 - C73 * C77 - C72 * C85 +
                   C60 * C89) *
                  C5508 * C5497 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C317 * C78 - C318 * C74 - C317 * C79 + C312 * C86 +
                    C319 * C80 - C320 * C75 - C319 * C81 + C5472 * C87) *
                       C625 +
                   (C317 * C632 - C318 * C628 - C317 * C633 + C312 * C640 +
                    C319 * C634 - C320 * C629 - C319 * C635 + C5472 * C641) *
                       C626 +
                   (C317 * C636 - C318 * C630 - C317 * C637 + C312 * C642 +
                    C319 * C638 - C320 * C631 - C319 * C639 + C5472 * C643) *
                       C627) *
                  C5497 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eexy[2] += (-std::pow(Pi, 2.5) *
                  ((C314 * C109 - C363 * C74 + C315 * C366 - C364 * C321 +
                    C316 * C367 - C365 * C323) *
                       C317 +
                   (C314 * C113 - C363 * C79 + C315 * C370 - C364 * C326 +
                    C316 * C371 - C365 * C330) *
                       C312 +
                   (C314 * C110 - C363 * C75 + C315 * C368 - C364 * C322 +
                    C316 * C369 - C365 * C324) *
                       C319 +
                   (C314 * C114 - C363 * C81 + C315 * C372 - C364 * C328 +
                    C316 * C373 - C365 * C332) *
                       C5472) *
                  C5508 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C5497 * C109 - C108 * C74) * C66 +
                   (C5497 * C113 - C108 * C79) * C57 +
                   (C5497 * C110 - C108 * C75) * C68 +
                   (C5497 * C114 - C108 * C81) * C58 +
                   (C5497 * C111 - C108 * C76) * C70 +
                   (C5497 * C115 - C108 * C83) * C59 +
                   (C5497 * C112 - C108 * C77) * C72 +
                   (C5497 * C116 - C108 * C85) * C60) *
                  C5508 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C5497 * C109 - C108 * C74) * C317 +
                    (C5497 * C113 - C108 * C79) * C312 +
                    (C5497 * C110 - C108 * C75) * C319 +
                    (C5497 * C114 - C108 * C81) * C5472) *
                       C625 +
                   ((C5497 * C670 - C108 * C628) * C317 +
                    (C5497 * C674 - C108 * C633) * C312 +
                    (C5497 * C671 - C108 * C629) * C319 +
                    (C5497 * C675 - C108 * C635) * C5472) *
                       C626 +
                   ((C5497 * C672 - C108 * C630) * C317 +
                    (C5497 * C676 - C108 * C637) * C312 +
                    (C5497 * C673 - C108 * C631) * C319 +
                    (C5497 * C677 - C108 * C639) * C5472) *
                       C627) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eexz[2] += (-std::pow(Pi, 2.5) *
                  (((C5508 * C136 - C135 * C74) * C317 +
                    (C5508 * C140 - C135 * C79) * C312 +
                    (C5508 * C137 - C135 * C75) * C319 +
                    (C5508 * C141 - C135 * C81) * C5472) *
                       C314 +
                   ((C5508 * C400 - C135 * C321) * C317 +
                    (C5508 * C404 - C135 * C326) * C312 +
                    (C5508 * C401 - C135 * C322) * C319 +
                    (C5508 * C405 - C135 * C328) * C5472) *
                       C315 +
                   ((C5508 * C402 - C135 * C323) * C317 +
                    (C5508 * C406 - C135 * C330) * C312 +
                    (C5508 * C403 - C135 * C324) * C319 +
                    (C5508 * C407 - C135 * C332) * C5472) *
                       C316) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C5508 * C136 - C135 * C74) * C66 +
                   (C5508 * C140 - C135 * C79) * C57 +
                   (C5508 * C137 - C135 * C75) * C68 +
                   (C5508 * C141 - C135 * C81) * C58 +
                   (C5508 * C138 - C135 * C76) * C70 +
                   (C5508 * C142 - C135 * C83) * C59 +
                   (C5508 * C139 - C135 * C77) * C72 +
                   (C5508 * C143 - C135 * C85) * C60) *
                  C5497 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C625 * C136 - C704 * C74 + C626 * C707 - C705 * C628 +
                    C627 * C708 - C706 * C630) *
                       C317 +
                   (C625 * C140 - C704 * C79 + C626 * C711 - C705 * C633 +
                    C627 * C712 - C706 * C637) *
                       C312 +
                   (C625 * C137 - C704 * C75 + C626 * C709 - C705 * C629 +
                    C627 * C710 - C706 * C631) *
                       C319 +
                   (C625 * C141 - C704 * C81 + C626 * C713 - C705 * C635 +
                    C627 * C714 - C706 * C639) *
                       C5472) *
                  C5497 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::pow(Pi, 2.5) *
         ((C312 * C78 - C317 * C74 + C5472 * C80 - C319 * C75) * C363 +
          (C312 * C166 - C317 * C162 + C5472 * C167 - C319 * C163) * C314 +
          (C312 * C325 - C317 * C321 + C5472 * C327 - C319 * C322) * C364 +
          (C312 * C438 - C317 * C434 + C5472 * C439 - C319 * C435) * C315 +
          (C312 * C329 - C317 * C323 + C5472 * C331 - C319 * C324) * C365 +
          (C312 * C440 - C317 * C436 + C5472 * C441 - C319 * C437) * C316) *
         C5508 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C57 * C78 - C66 * C74 + C58 * C80 - C68 * C75 + C59 * C82 -
           C70 * C76 + C60 * C84 - C72 * C77) *
              C108 +
          (C57 * C166 - C66 * C162 + C58 * C167 - C68 * C163 + C59 * C168 -
           C70 * C164 + C60 * C169 - C72 * C165) *
              C5497) *
         C5508 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C312 * C78 - C317 * C74 + C5472 * C80 - C319 * C75) * C108 +
           (C312 * C166 - C317 * C162 + C5472 * C167 - C319 * C163) * C5497) *
              C625 +
          ((C312 * C632 - C317 * C628 + C5472 * C634 - C319 * C629) * C108 +
           (C312 * C745 - C317 * C741 + C5472 * C746 - C319 * C742) * C5497) *
              C626 +
          ((C312 * C636 - C317 * C630 + C5472 * C638 - C319 * C631) * C108 +
           (C312 * C747 - C317 * C743 + C5472 * C748 - C319 * C744) * C5497) *
              C627) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (-std::pow(Pi, 2.5) *
         ((C363 * C109 - C468 * C74 - C363 * C162 + C314 * C189 + C364 * C366 -
           C469 * C321 - C364 * C434 + C315 * C471 + C365 * C367 - C470 * C323 -
           C365 * C436 + C316 * C472) *
              C312 +
          (C363 * C110 - C468 * C75 - C363 * C163 + C314 * C190 + C364 * C368 -
           C469 * C322 - C364 * C435 + C315 * C473 + C365 * C369 - C470 * C324 -
           C365 * C437 + C316 * C474) *
              C5472) *
         C5508 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C108 * C109 - C188 * C74 - C108 * C162 + C5497 * C189) * C57 +
          (C108 * C110 - C188 * C75 - C108 * C163 + C5497 * C190) * C58 +
          (C108 * C111 - C188 * C76 - C108 * C164 + C5497 * C191) * C59 +
          (C108 * C112 - C188 * C77 - C108 * C165 + C5497 * C192) * C60) *
         C5508 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C108 * C109 - C188 * C74 - C108 * C162 + C5497 * C189) * C312 +
           (C108 * C110 - C188 * C75 - C108 * C163 + C5497 * C190) * C5472) *
              C625 +
          ((C108 * C670 - C188 * C628 - C108 * C741 + C5497 * C775) * C312 +
           (C108 * C671 - C188 * C629 - C108 * C742 + C5497 * C776) * C5472) *
              C626 +
          ((C108 * C672 - C188 * C630 - C108 * C743 + C5497 * C777) * C312 +
           (C108 * C673 - C188 * C631 - C108 * C744 + C5497 * C778) * C5472) *
              C627) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyz[2] += (-std::pow(Pi, 2.5) *
                  (((C5508 * C136 - C135 * C74) * C363 +
                    (C5508 * C211 - C135 * C162) * C314 +
                    (C5508 * C400 - C135 * C321) * C364 +
                    (C5508 * C501 - C135 * C434) * C315 +
                    (C5508 * C402 - C135 * C323) * C365 +
                    (C5508 * C502 - C135 * C436) * C316) *
                       C312 +
                   ((C5508 * C137 - C135 * C75) * C363 +
                    (C5508 * C212 - C135 * C163) * C314 +
                    (C5508 * C401 - C135 * C322) * C364 +
                    (C5508 * C503 - C135 * C435) * C315 +
                    (C5508 * C403 - C135 * C324) * C365 +
                    (C5508 * C504 - C135 * C437) * C316) *
                       C5472) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C5508 * C136 - C135 * C74) * C108 +
                    (C5508 * C211 - C135 * C162) * C5497) *
                       C57 +
                   ((C5508 * C137 - C135 * C75) * C108 +
                    (C5508 * C212 - C135 * C163) * C5497) *
                       C58 +
                   ((C5508 * C138 - C135 * C76) * C108 +
                    (C5508 * C213 - C135 * C164) * C5497) *
                       C59 +
                   ((C5508 * C139 - C135 * C77) * C108 +
                    (C5508 * C214 - C135 * C165) * C5497) *
                       C60) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C625 * C136 - C704 * C74 + C626 * C707 - C705 * C628 +
                     C627 * C708 - C706 * C630) *
                        C108 +
                    (C625 * C211 - C704 * C162 + C626 * C805 - C705 * C741 +
                     C627 * C806 - C706 * C743) *
                        C5497) *
                       C312 +
                   ((C625 * C137 - C704 * C75 + C626 * C709 - C705 * C629 +
                     C627 * C710 - C706 * C631) *
                        C108 +
                    (C625 * C212 - C704 * C163 + C626 * C807 - C705 * C742 +
                     C627 * C808 - C706 * C744) *
                        C5497) *
                       C5472) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::pow(Pi, 2.5) *
         (((C312 * C78 - C317 * C74 + C5472 * C80 - C319 * C75) * C135 +
           (C312 * C237 - C317 * C233 + C5472 * C238 - C319 * C234) * C5508) *
              C314 +
          ((C312 * C325 - C317 * C321 + C5472 * C327 - C319 * C322) * C135 +
           (C312 * C535 - C317 * C531 + C5472 * C536 - C319 * C532) * C5508) *
              C315 +
          ((C312 * C329 - C317 * C323 + C5472 * C331 - C319 * C324) * C135 +
           (C312 * C537 - C317 * C533 + C5472 * C538 - C319 * C534) * C5508) *
              C316) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C57 * C78 - C66 * C74 + C58 * C80 - C68 * C75 + C59 * C82 -
           C70 * C76 + C60 * C84 - C72 * C77) *
              C135 +
          (C57 * C237 - C66 * C233 + C58 * C238 - C68 * C234 + C59 * C239 -
           C70 * C235 + C60 * C240 - C72 * C236) *
              C5508) *
         C5497 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C312 * C78 - C317 * C74 + C5472 * C80 - C319 * C75) * C704 +
          (C312 * C237 - C317 * C233 + C5472 * C238 - C319 * C234) * C625 +
          (C312 * C632 - C317 * C628 + C5472 * C634 - C319 * C629) * C705 +
          (C312 * C839 - C317 * C835 + C5472 * C840 - C319 * C836) * C626 +
          (C312 * C636 - C317 * C630 + C5472 * C638 - C319 * C631) * C706 +
          (C312 * C841 - C317 * C837 + C5472 * C842 - C319 * C838) * C627) *
         C5497 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] += (-std::pow(Pi, 2.5) *
                  (((C314 * C109 - C363 * C74 + C315 * C366 - C364 * C321 +
                     C316 * C367 - C365 * C323) *
                        C135 +
                    (C314 * C259 - C363 * C233 + C315 * C565 - C364 * C531 +
                     C316 * C566 - C365 * C533) *
                        C5508) *
                       C312 +
                   ((C314 * C110 - C363 * C75 + C315 * C368 - C364 * C322 +
                     C316 * C369 - C365 * C324) *
                        C135 +
                    (C314 * C260 - C363 * C234 + C315 * C567 - C364 * C532 +
                     C316 * C568 - C365 * C534) *
                        C5508) *
                       C5472) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C5497 * C109 - C108 * C74) * C135 +
                    (C5497 * C259 - C108 * C233) * C5508) *
                       C57 +
                   ((C5497 * C110 - C108 * C75) * C135 +
                    (C5497 * C260 - C108 * C234) * C5508) *
                       C58 +
                   ((C5497 * C111 - C108 * C76) * C135 +
                    (C5497 * C261 - C108 * C235) * C5508) *
                       C59 +
                   ((C5497 * C112 - C108 * C77) * C135 +
                    (C5497 * C262 - C108 * C236) * C5508) *
                       C60) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C5497 * C109 - C108 * C74) * C704 +
                    (C5497 * C259 - C108 * C233) * C625 +
                    (C5497 * C670 - C108 * C628) * C705 +
                    (C5497 * C869 - C108 * C835) * C626 +
                    (C5497 * C672 - C108 * C630) * C706 +
                    (C5497 * C870 - C108 * C837) * C627) *
                       C312 +
                   ((C5497 * C110 - C108 * C75) * C704 +
                    (C5497 * C260 - C108 * C234) * C625 +
                    (C5497 * C671 - C108 * C629) * C705 +
                    (C5497 * C871 - C108 * C836) * C626 +
                    (C5497 * C673 - C108 * C631) * C706 +
                    (C5497 * C872 - C108 * C838) * C627) *
                       C5472) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C135 * C136 - C281 * C74 - C135 * C233 + C5508 * C282) * C314 +
           (C135 * C400 - C281 * C321 - C135 * C531 + C5508 * C595) * C315 +
           (C135 * C402 - C281 * C323 - C135 * C533 + C5508 * C596) * C316) *
              C312 +
          ((C135 * C137 - C281 * C75 - C135 * C234 + C5508 * C283) * C314 +
           (C135 * C401 - C281 * C322 - C135 * C532 + C5508 * C597) * C315 +
           (C135 * C403 - C281 * C324 - C135 * C534 + C5508 * C598) * C316) *
              C5472) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C135 * C136 - C281 * C74 - C135 * C233 + C5508 * C282) * C5497 *
              C57 +
          (C135 * C137 - C281 * C75 - C135 * C234 + C5508 * C283) * C5497 *
              C58 +
          (C135 * C138 - C281 * C76 - C135 * C235 + C5508 * C284) * C5497 *
              C59 +
          (C135 * C139 - C281 * C77 - C135 * C236 + C5508 * C285) * C5497 *
              C60) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C704 * C136 - C899 * C74 - C704 * C233 + C625 * C282 + C705 * C707 -
           C900 * C628 - C705 * C835 + C626 * C902 + C706 * C708 - C901 * C630 -
           C706 * C837 + C627 * C903) *
              C5497 * C312 +
          (C704 * C137 - C899 * C75 - C704 * C234 + C625 * C283 + C705 * C709 -
           C900 * C629 - C705 * C836 + C626 * C904 + C706 * C710 - C901 * C631 -
           C706 * C838 + C627 * C905) *
              C5497 * C5472) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C937 * C78 - C938 * C74 - C937 * C79 + C5669 * C86 +
                    C939 * C80 - C940 * C75 - C939 * C81 + C5670 * C87 +
                    C941 * C82 - C942 * C76 - C941 * C83 + C934 * C88) *
                       C5651 +
                   (C937 * C632 - C938 * C628 - C937 * C633 + C5669 * C640 +
                    C939 * C634 - C940 * C629 - C939 * C635 + C5670 * C641 +
                    C941 * C1200 - C942 * C1199 - C941 * C1201 + C934 * C1202) *
                       C5572) *
                  C5497 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C5497 * C109 - C108 * C74) * C937 +
                    (C5497 * C113 - C108 * C79) * C5669 +
                    (C5497 * C110 - C108 * C75) * C939 +
                    (C5497 * C114 - C108 * C81) * C5670 +
                    (C5497 * C111 - C108 * C76) * C941 +
                    (C5497 * C115 - C108 * C83) * C934) *
                       C5651 +
                   ((C5497 * C670 - C108 * C628) * C937 +
                    (C5497 * C674 - C108 * C633) * C5669 +
                    (C5497 * C671 - C108 * C629) * C939 +
                    (C5497 * C675 - C108 * C635) * C5670 +
                    (C5497 * C1229 - C108 * C1199) * C941 +
                    (C5497 * C1230 - C108 * C1201) * C934) *
                       C5572) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C5651 * C136 - C1257 * C74 + C5572 * C707 - C1258 * C628) * C937 +
          (C5651 * C140 - C1257 * C79 + C5572 * C711 - C1258 * C633) * C5669 +
          (C5651 * C137 - C1257 * C75 + C5572 * C709 - C1258 * C629) * C939 +
          (C5651 * C141 - C1257 * C81 + C5572 * C713 - C1258 * C635) * C5670 +
          (C5651 * C138 - C1257 * C76 + C5572 * C1259 - C1258 * C1199) * C941 +
          (C5651 * C142 - C1257 * C83 + C5572 * C1260 - C1258 * C1201) * C934) *
         C5497 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C5669 * C78 - C937 * C74 + C5670 * C80 - C939 * C75 +
                     C934 * C82 - C941 * C76) *
                        C108 +
                    (C5669 * C166 - C937 * C162 + C5670 * C167 - C939 * C163 +
                     C934 * C168 - C941 * C164) *
                        C5497) *
                       C5651 +
                   ((C5669 * C632 - C937 * C628 + C5670 * C634 - C939 * C629 +
                     C934 * C1200 - C941 * C1199) *
                        C108 +
                    (C5669 * C745 - C937 * C741 + C5670 * C746 - C939 * C742 +
                     C934 * C1288 - C941 * C1287) *
                        C5497) *
                       C5572) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C108 * C109 - C188 * C74 - C108 * C162 + C5497 * C189) * C5669 +
           (C108 * C110 - C188 * C75 - C108 * C163 + C5497 * C190) * C5670 +
           (C108 * C111 - C188 * C76 - C108 * C164 + C5497 * C191) * C934) *
              C5651 +
          ((C108 * C670 - C188 * C628 - C108 * C741 + C5497 * C775) * C5669 +
           (C108 * C671 - C188 * C629 - C108 * C742 + C5497 * C776) * C5670 +
           (C108 * C1229 - C188 * C1199 - C108 * C1287 + C5497 * C1315) *
               C934) *
              C5572) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5651 * C136 - C1257 * C74 + C5572 * C707 - C1258 * C628) * C108 +
           (C5651 * C211 - C1257 * C162 + C5572 * C805 - C1258 * C741) *
               C5497) *
              C5669 +
          ((C5651 * C137 - C1257 * C75 + C5572 * C709 - C1258 * C629) * C108 +
           (C5651 * C212 - C1257 * C163 + C5572 * C807 - C1258 * C742) *
               C5497) *
              C5670 +
          ((C5651 * C138 - C1257 * C76 + C5572 * C1259 - C1258 * C1199) * C108 +
           (C5651 * C213 - C1257 * C164 + C5572 * C1342 - C1258 * C1287) *
               C5497) *
              C934) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C5669 * C78 - C937 * C74 + C5670 * C80 - C939 * C75 +
                    C934 * C82 - C941 * C76) *
                       C1257 +
                   (C5669 * C237 - C937 * C233 + C5670 * C238 - C939 * C234 +
                    C934 * C239 - C941 * C235) *
                       C5651 +
                   (C5669 * C632 - C937 * C628 + C5670 * C634 - C939 * C629 +
                    C934 * C1200 - C941 * C1199) *
                       C1258 +
                   (C5669 * C839 - C937 * C835 + C5670 * C840 - C939 * C836 +
                    C934 * C1370 - C941 * C1369) *
                       C5572) *
                  C5497 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C5497 * C109 - C108 * C74) * C1257 +
                    (C5497 * C259 - C108 * C233) * C5651 +
                    (C5497 * C670 - C108 * C628) * C1258 +
                    (C5497 * C869 - C108 * C835) * C5572) *
                       C5669 +
                   ((C5497 * C110 - C108 * C75) * C1257 +
                    (C5497 * C260 - C108 * C234) * C5651 +
                    (C5497 * C671 - C108 * C629) * C1258 +
                    (C5497 * C871 - C108 * C836) * C5572) *
                       C5670 +
                   ((C5497 * C111 - C108 * C76) * C1257 +
                    (C5497 * C261 - C108 * C235) * C5651 +
                    (C5497 * C1229 - C108 * C1199) * C1258 +
                    (C5497 * C1397 - C108 * C1369) * C5572) *
                       C934) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C1257 * C136 - C1424 * C74 - C1257 * C233 + C5651 * C282 +
           C1258 * C707 - C1425 * C628 - C1258 * C835 + C5572 * C902) *
              C5497 * C5669 +
          (C1257 * C137 - C1424 * C75 - C1257 * C234 + C5651 * C283 +
           C1258 * C709 - C1425 * C629 - C1258 * C836 + C5572 * C904) *
              C5497 * C5670 +
          (C1257 * C138 - C1424 * C76 - C1257 * C235 + C5651 * C284 +
           C1258 * C1259 - C1425 * C1199 - C1258 * C1369 + C5572 * C1426) *
              C5497 * C934) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (C66 * C78 - C67 * C74 - C66 * C79 + C57 * C86 + C68 * C80 -
                   C69 * C75 - C68 * C81 + C58 * C87 + C70 * C82 - C71 * C76 -
                   C70 * C83 + C59 * C88 + C72 * C84 - C73 * C77 - C72 * C85 +
                   C60 * C89) *
                  C5508 * C5497 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C317 * C78 - C318 * C74 - C317 * C79 + C312 * C86 +
                    C319 * C80 - C320 * C75 - C319 * C81 + C5472 * C87) *
                       C5508 * C314 +
                   (C317 * C325 - C318 * C321 - C317 * C326 + C312 * C333 +
                    C319 * C327 - C320 * C322 - C319 * C328 + C5472 * C334) *
                       C5508 * C315 +
                   (C317 * C329 - C318 * C323 - C317 * C330 + C312 * C335 +
                    C319 * C331 - C320 * C324 - C319 * C332 + C5472 * C336) *
                       C5508 * C316) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eexy[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C5497 * C109 - C108 * C74) * C66 +
                   (C5497 * C113 - C108 * C79) * C57 +
                   (C5497 * C110 - C108 * C75) * C68 +
                   (C5497 * C114 - C108 * C81) * C58 +
                   (C5497 * C111 - C108 * C76) * C70 +
                   (C5497 * C115 - C108 * C83) * C59 +
                   (C5497 * C112 - C108 * C77) * C72 +
                   (C5497 * C116 - C108 * C85) * C60) *
                  C5508 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C314 * C109 - C363 * C74 + C315 * C366 - C364 * C321 +
                    C316 * C367 - C365 * C323) *
                       C317 +
                   (C314 * C113 - C363 * C79 + C315 * C370 - C364 * C326 +
                    C316 * C371 - C365 * C330) *
                       C312 +
                   (C314 * C110 - C363 * C75 + C315 * C368 - C364 * C322 +
                    C316 * C369 - C365 * C324) *
                       C319 +
                   (C314 * C114 - C363 * C81 + C315 * C372 - C364 * C328 +
                    C316 * C373 - C365 * C332) *
                       C5472) *
                  C5508 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eexz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C5508 * C136 - C135 * C74) * C66 +
                   (C5508 * C140 - C135 * C79) * C57 +
                   (C5508 * C137 - C135 * C75) * C68 +
                   (C5508 * C141 - C135 * C81) * C58 +
                   (C5508 * C138 - C135 * C76) * C70 +
                   (C5508 * C142 - C135 * C83) * C59 +
                   (C5508 * C139 - C135 * C77) * C72 +
                   (C5508 * C143 - C135 * C85) * C60) *
                  C5497 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C5508 * C136 - C135 * C74) * C317 +
                    (C5508 * C140 - C135 * C79) * C312 +
                    (C5508 * C137 - C135 * C75) * C319 +
                    (C5508 * C141 - C135 * C81) * C5472) *
                       C314 +
                   ((C5508 * C400 - C135 * C321) * C317 +
                    (C5508 * C404 - C135 * C326) * C312 +
                    (C5508 * C401 - C135 * C322) * C319 +
                    (C5508 * C405 - C135 * C328) * C5472) *
                       C315 +
                   ((C5508 * C402 - C135 * C323) * C317 +
                    (C5508 * C406 - C135 * C330) * C312 +
                    (C5508 * C403 - C135 * C324) * C319 +
                    (C5508 * C407 - C135 * C332) * C5472) *
                       C316) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C57 * C78 - C66 * C74 + C58 * C80 - C68 * C75 + C59 * C82 -
           C70 * C76 + C60 * C84 - C72 * C77) *
              C108 +
          (C57 * C166 - C66 * C162 + C58 * C167 - C68 * C163 + C59 * C168 -
           C70 * C164 + C60 * C169 - C72 * C165) *
              C5497) *
         C5508 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C312 * C78 - C317 * C74 + C5472 * C80 - C319 * C75) * C363 +
          (C312 * C166 - C317 * C162 + C5472 * C167 - C319 * C163) * C314 +
          (C312 * C325 - C317 * C321 + C5472 * C327 - C319 * C322) * C364 +
          (C312 * C438 - C317 * C434 + C5472 * C439 - C319 * C435) * C315 +
          (C312 * C329 - C317 * C323 + C5472 * C331 - C319 * C324) * C365 +
          (C312 * C440 - C317 * C436 + C5472 * C441 - C319 * C437) * C316) *
         C5508 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C108 * C109 - C188 * C74 - C108 * C162 + C5497 * C189) * C57 +
          (C108 * C110 - C188 * C75 - C108 * C163 + C5497 * C190) * C58 +
          (C108 * C111 - C188 * C76 - C108 * C164 + C5497 * C191) * C59 +
          (C108 * C112 - C188 * C77 - C108 * C165 + C5497 * C192) * C60) *
         C5508 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C363 * C109 - C468 * C74 - C363 * C162 + C314 * C189 + C364 * C366 -
           C469 * C321 - C364 * C434 + C315 * C471 + C365 * C367 - C470 * C323 -
           C365 * C436 + C316 * C472) *
              C312 +
          (C363 * C110 - C468 * C75 - C363 * C163 + C314 * C190 + C364 * C368 -
           C469 * C322 - C364 * C435 + C315 * C473 + C365 * C369 - C470 * C324 -
           C365 * C437 + C316 * C474) *
              C5472) *
         C5508 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C5508 * C136 - C135 * C74) * C108 +
                    (C5508 * C211 - C135 * C162) * C5497) *
                       C57 +
                   ((C5508 * C137 - C135 * C75) * C108 +
                    (C5508 * C212 - C135 * C163) * C5497) *
                       C58 +
                   ((C5508 * C138 - C135 * C76) * C108 +
                    (C5508 * C213 - C135 * C164) * C5497) *
                       C59 +
                   ((C5508 * C139 - C135 * C77) * C108 +
                    (C5508 * C214 - C135 * C165) * C5497) *
                       C60) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C5508 * C136 - C135 * C74) * C363 +
                    (C5508 * C211 - C135 * C162) * C314 +
                    (C5508 * C400 - C135 * C321) * C364 +
                    (C5508 * C501 - C135 * C434) * C315 +
                    (C5508 * C402 - C135 * C323) * C365 +
                    (C5508 * C502 - C135 * C436) * C316) *
                       C312 +
                   ((C5508 * C137 - C135 * C75) * C363 +
                    (C5508 * C212 - C135 * C163) * C314 +
                    (C5508 * C401 - C135 * C322) * C364 +
                    (C5508 * C503 - C135 * C435) * C315 +
                    (C5508 * C403 - C135 * C324) * C365 +
                    (C5508 * C504 - C135 * C437) * C316) *
                       C5472) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C57 * C78 - C66 * C74 + C58 * C80 - C68 * C75 + C59 * C82 -
           C70 * C76 + C60 * C84 - C72 * C77) *
              C135 +
          (C57 * C237 - C66 * C233 + C58 * C238 - C68 * C234 + C59 * C239 -
           C70 * C235 + C60 * C240 - C72 * C236) *
              C5508) *
         C5497 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C312 * C78 - C317 * C74 + C5472 * C80 - C319 * C75) * C135 +
           (C312 * C237 - C317 * C233 + C5472 * C238 - C319 * C234) * C5508) *
              C314 +
          ((C312 * C325 - C317 * C321 + C5472 * C327 - C319 * C322) * C135 +
           (C312 * C535 - C317 * C531 + C5472 * C536 - C319 * C532) * C5508) *
              C315 +
          ((C312 * C329 - C317 * C323 + C5472 * C331 - C319 * C324) * C135 +
           (C312 * C537 - C317 * C533 + C5472 * C538 - C319 * C534) * C5508) *
              C316) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezy[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C5497 * C109 - C108 * C74) * C135 +
                    (C5497 * C259 - C108 * C233) * C5508) *
                       C57 +
                   ((C5497 * C110 - C108 * C75) * C135 +
                    (C5497 * C260 - C108 * C234) * C5508) *
                       C58 +
                   ((C5497 * C111 - C108 * C76) * C135 +
                    (C5497 * C261 - C108 * C235) * C5508) *
                       C59 +
                   ((C5497 * C112 - C108 * C77) * C135 +
                    (C5497 * C262 - C108 * C236) * C5508) *
                       C60) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C314 * C109 - C363 * C74 + C315 * C366 - C364 * C321 +
                     C316 * C367 - C365 * C323) *
                        C135 +
                    (C314 * C259 - C363 * C233 + C315 * C565 - C364 * C531 +
                     C316 * C566 - C365 * C533) *
                        C5508) *
                       C312 +
                   ((C314 * C110 - C363 * C75 + C315 * C368 - C364 * C322 +
                     C316 * C369 - C365 * C324) *
                        C135 +
                    (C314 * C260 - C363 * C234 + C315 * C567 - C364 * C532 +
                     C316 * C568 - C365 * C534) *
                        C5508) *
                       C5472) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C135 * C136 - C281 * C74 - C135 * C233 + C5508 * C282) * C5497 *
              C57 +
          (C135 * C137 - C281 * C75 - C135 * C234 + C5508 * C283) * C5497 *
              C58 +
          (C135 * C138 - C281 * C76 - C135 * C235 + C5508 * C284) * C5497 *
              C59 +
          (C135 * C139 - C281 * C77 - C135 * C236 + C5508 * C285) * C5497 *
              C60) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C135 * C136 - C281 * C74 - C135 * C233 + C5508 * C282) * C314 +
           (C135 * C400 - C281 * C321 - C135 * C531 + C5508 * C595) * C315 +
           (C135 * C402 - C281 * C323 - C135 * C533 + C5508 * C596) * C316) *
              C312 +
          ((C135 * C137 - C281 * C75 - C135 * C234 + C5508 * C283) * C314 +
           (C135 * C401 - C281 * C322 - C135 * C532 + C5508 * C597) * C315 +
           (C135 * C403 - C281 * C324 - C135 * C534 + C5508 * C598) * C316) *
              C5472) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C4747 * C78 - C2489 * C74 - C4747 * C79 + C5640 * C86 +
                    C4740 * C80 - C2491 * C75 - C4740 * C81 + C5472 * C87) *
                       C5508 * C5671 +
                   (C4747 * C325 - C2489 * C321 - C4747 * C326 + C5640 * C333 +
                    C4740 * C327 - C2491 * C322 - C4740 * C328 + C5472 * C334) *
                       C5508 * C5672 +
                   (C4747 * C329 - C2489 * C323 - C4747 * C330 + C5640 * C335 +
                    C4740 * C331 - C2491 * C324 - C4740 * C332 + C5472 * C336) *
                       C5508 * C2487) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C5671 * C109 - C2518 * C74 + C5672 * C366 - C2519 * C321 +
                    C2487 * C367 - C2520 * C323) *
                       C4747 +
                   (C5671 * C113 - C2518 * C79 + C5672 * C370 - C2519 * C326 +
                    C2487 * C371 - C2520 * C330) *
                       C5640 +
                   (C5671 * C110 - C2518 * C75 + C5672 * C368 - C2519 * C322 +
                    C2487 * C369 - C2520 * C324) *
                       C4740 +
                   (C5671 * C114 - C2518 * C81 + C5672 * C372 - C2519 * C328 +
                    C2487 * C373 - C2520 * C332) *
                       C5472) *
                  C5508 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C5508 * C136 - C135 * C74) * C4747 +
                    (C5508 * C140 - C135 * C79) * C5640 +
                    (C5508 * C137 - C135 * C75) * C4740 +
                    (C5508 * C141 - C135 * C81) * C5472) *
                       C5671 +
                   ((C5508 * C400 - C135 * C321) * C4747 +
                    (C5508 * C404 - C135 * C326) * C5640 +
                    (C5508 * C401 - C135 * C322) * C4740 +
                    (C5508 * C405 - C135 * C328) * C5472) *
                       C5672 +
                   ((C5508 * C402 - C135 * C323) * C4747 +
                    (C5508 * C406 - C135 * C330) * C5640 +
                    (C5508 * C403 - C135 * C324) * C4740 +
                    (C5508 * C407 - C135 * C332) * C5472) *
                       C2487) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C5640 * C78 - C4747 * C74 + C5472 * C80 - C4740 * C75) * C2518 +
          (C5640 * C166 - C4747 * C162 + C5472 * C167 - C4740 * C163) * C5671 +
          (C5640 * C325 - C4747 * C321 + C5472 * C327 - C4740 * C322) * C2519 +
          (C5640 * C438 - C4747 * C434 + C5472 * C439 - C4740 * C435) * C5672 +
          (C5640 * C329 - C4747 * C323 + C5472 * C331 - C4740 * C324) * C2520 +
          (C5640 * C440 - C4747 * C436 + C5472 * C441 - C4740 * C437) * C2487) *
         C5508 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C2518 * C109 - C2599 * C74 - C2518 * C162 + C5671 * C189 +
                    C2519 * C366 - C2600 * C321 - C2519 * C434 + C5672 * C471 +
                    C2520 * C367 - C2601 * C323 - C2520 * C436 + C2487 * C472) *
                       C5640 +
                   (C2518 * C110 - C2599 * C75 - C2518 * C163 + C5671 * C190 +
                    C2519 * C368 - C2600 * C322 - C2519 * C435 + C5672 * C473 +
                    C2520 * C369 - C2601 * C324 - C2520 * C437 + C2487 * C474) *
                       C5472) *
                  C5508 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C5508 * C136 - C135 * C74) * C2518 +
                    (C5508 * C211 - C135 * C162) * C5671 +
                    (C5508 * C400 - C135 * C321) * C2519 +
                    (C5508 * C501 - C135 * C434) * C5672 +
                    (C5508 * C402 - C135 * C323) * C2520 +
                    (C5508 * C502 - C135 * C436) * C2487) *
                       C5640 +
                   ((C5508 * C137 - C135 * C75) * C2518 +
                    (C5508 * C212 - C135 * C163) * C5671 +
                    (C5508 * C401 - C135 * C322) * C2519 +
                    (C5508 * C503 - C135 * C435) * C5672 +
                    (C5508 * C403 - C135 * C324) * C2520 +
                    (C5508 * C504 - C135 * C437) * C2487) *
                       C5472) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5640 * C78 - C4747 * C74 + C5472 * C80 - C4740 * C75) * C135 +
           (C5640 * C237 - C4747 * C233 + C5472 * C238 - C4740 * C234) *
               C5508) *
              C5671 +
          ((C5640 * C325 - C4747 * C321 + C5472 * C327 - C4740 * C322) * C135 +
           (C5640 * C535 - C4747 * C531 + C5472 * C536 - C4740 * C532) *
               C5508) *
              C5672 +
          ((C5640 * C329 - C4747 * C323 + C5472 * C331 - C4740 * C324) * C135 +
           (C5640 * C537 - C4747 * C533 + C5472 * C538 - C4740 * C534) *
               C5508) *
              C2487) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C5671 * C109 - C2518 * C74 + C5672 * C366 - C2519 * C321 +
                     C2487 * C367 - C2520 * C323) *
                        C135 +
                    (C5671 * C259 - C2518 * C233 + C5672 * C565 - C2519 * C531 +
                     C2487 * C566 - C2520 * C533) *
                        C5508) *
                       C5640 +
                   ((C5671 * C110 - C2518 * C75 + C5672 * C368 - C2519 * C322 +
                     C2487 * C369 - C2520 * C324) *
                        C135 +
                    (C5671 * C260 - C2518 * C234 + C5672 * C567 - C2519 * C532 +
                     C2487 * C568 - C2520 * C534) *
                        C5508) *
                       C5472) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C135 * C136 - C281 * C74 - C135 * C233 + C5508 * C282) * C5671 +
           (C135 * C400 - C281 * C321 - C135 * C531 + C5508 * C595) * C5672 +
           (C135 * C402 - C281 * C323 - C135 * C533 + C5508 * C596) * C2487) *
              C5640 +
          ((C135 * C137 - C281 * C75 - C135 * C234 + C5508 * C283) * C5671 +
           (C135 * C401 - C281 * C322 - C135 * C532 + C5508 * C597) * C5672 +
           (C135 * C403 - C281 * C324 - C135 * C534 + C5508 * C598) * C2487) *
              C5472) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2037 * C78 - C2038 * C74 - C2037 * C79 + C5467 * C86) * C5651 +
           (C2037 * C632 - C2038 * C628 - C2037 * C633 + C5467 * C640) *
               C5572) *
              C5671 +
          ((C2037 * C325 - C2038 * C321 - C2037 * C326 + C5467 * C333) * C5651 +
           (C2037 * C1463 - C2038 * C1461 - C2037 * C1464 + C5467 * C1467) *
               C5572) *
              C5672 +
          ((C2037 * C329 - C2038 * C323 - C2037 * C330 + C5467 * C335) * C5651 +
           (C2037 * C3039 - C2038 * C3038 - C2037 * C3040 + C5467 * C3041) *
               C5572) *
              C2487) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C5671 * C109 - C2518 * C74 + C5672 * C366 - C2519 * C321 +
                     C2487 * C367 - C2520 * C323) *
                        C2037 +
                    (C5671 * C113 - C2518 * C79 + C5672 * C370 - C2519 * C326 +
                     C2487 * C371 - C2520 * C330) *
                        C5467) *
                       C5651 +
                   ((C5671 * C670 - C2518 * C628 + C5672 * C1503 -
                     C2519 * C1461 + C2487 * C3068 - C2520 * C3038) *
                        C2037 +
                    (C5671 * C674 - C2518 * C633 + C5672 * C1505 -
                     C2519 * C1464 + C2487 * C3069 - C2520 * C3040) *
                        C5467) *
                       C5572) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5651 * C136 - C1257 * C74 + C5572 * C707 - C1258 * C628) * C2037 +
           (C5651 * C140 - C1257 * C79 + C5572 * C711 - C1258 * C633) * C5467) *
              C5671 +
          ((C5651 * C400 - C1257 * C321 + C5572 * C1541 - C1258 * C1461) *
               C2037 +
           (C5651 * C404 - C1257 * C326 + C5572 * C1543 - C1258 * C1464) *
               C5467) *
              C5672 +
          ((C5651 * C402 - C1257 * C323 + C5572 * C3096 - C1258 * C3038) *
               C2037 +
           (C5651 * C406 - C1257 * C330 + C5572 * C3097 - C1258 * C3040) *
               C5467) *
              C2487) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C5467 * C78 - C2037 * C74) * C2518 +
                    (C5467 * C166 - C2037 * C162) * C5671 +
                    (C5467 * C325 - C2037 * C321) * C2519 +
                    (C5467 * C438 - C2037 * C434) * C5672 +
                    (C5467 * C329 - C2037 * C323) * C2520 +
                    (C5467 * C440 - C2037 * C436) * C2487) *
                       C5651 +
                   ((C5467 * C632 - C2037 * C628) * C2518 +
                    (C5467 * C745 - C2037 * C741) * C5671 +
                    (C5467 * C1463 - C2037 * C1461) * C2519 +
                    (C5467 * C1581 - C2037 * C1579) * C5672 +
                    (C5467 * C3039 - C2037 * C3038) * C2520 +
                    (C5467 * C3125 - C2037 * C3124) * C2487) *
                       C5572) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C2518 * C109 - C2599 * C74 - C2518 * C162 + C5671 * C189 +
           C2519 * C366 - C2600 * C321 - C2519 * C434 + C5672 * C471 +
           C2520 * C367 - C2601 * C323 - C2520 * C436 + C2487 * C472) *
              C5467 * C5651 +
          (C2518 * C670 - C2599 * C628 - C2518 * C741 + C5671 * C775 +
           C2519 * C1503 - C2600 * C1461 - C2519 * C1579 + C5672 * C1617 +
           C2520 * C3068 - C2601 * C3038 - C2520 * C3124 + C2487 * C3152) *
              C5467 * C5572) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C5651 * C136 - C1257 * C74 + C5572 * C707 - C1258 * C628) * C2518 +
          (C5651 * C211 - C1257 * C162 + C5572 * C805 - C1258 * C741) * C5671 +
          (C5651 * C400 - C1257 * C321 + C5572 * C1541 - C1258 * C1461) *
              C2519 +
          (C5651 * C501 - C1257 * C434 + C5572 * C1653 - C1258 * C1579) *
              C5672 +
          (C5651 * C402 - C1257 * C323 + C5572 * C3096 - C1258 * C3038) *
              C2520 +
          (C5651 * C502 - C1257 * C436 + C5572 * C3179 - C1258 * C3124) *
              C2487) *
         C5467 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezx[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C5467 * C78 - C2037 * C74) * C1257 +
                    (C5467 * C237 - C2037 * C233) * C5651 +
                    (C5467 * C632 - C2037 * C628) * C1258 +
                    (C5467 * C839 - C2037 * C835) * C5572) *
                       C5671 +
                   ((C5467 * C325 - C2037 * C321) * C1257 +
                    (C5467 * C535 - C2037 * C531) * C5651 +
                    (C5467 * C1463 - C2037 * C1461) * C1258 +
                    (C5467 * C1691 - C2037 * C1689) * C5572) *
                       C5672 +
                   ((C5467 * C329 - C2037 * C323) * C1257 +
                    (C5467 * C537 - C2037 * C533) * C5651 +
                    (C5467 * C3039 - C2037 * C3038) * C1258 +
                    (C5467 * C3207 - C2037 * C3206) * C5572) *
                       C2487) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezy[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C5671 * C109 - C2518 * C74 + C5672 * C366 - C2519 * C321 +
                    C2487 * C367 - C2520 * C323) *
                       C1257 +
                   (C5671 * C259 - C2518 * C233 + C5672 * C565 - C2519 * C531 +
                    C2487 * C566 - C2520 * C533) *
                       C5651 +
                   (C5671 * C670 - C2518 * C628 + C5672 * C1503 -
                    C2519 * C1461 + C2487 * C3068 - C2520 * C3038) *
                       C1258 +
                   (C5671 * C869 - C2518 * C835 + C5672 * C1727 -
                    C2519 * C1689 + C2487 * C3234 - C2520 * C3206) *
                       C5572) *
                  C5467 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C1257 * C136 - C1424 * C74 - C1257 * C233 + C5651 * C282 +
           C1258 * C707 - C1425 * C628 - C1258 * C835 + C5572 * C902) *
              C5671 +
          (C1257 * C400 - C1424 * C321 - C1257 * C531 + C5651 * C595 +
           C1258 * C1541 - C1425 * C1461 - C1258 * C1689 + C5572 * C1763) *
              C5672 +
          (C1257 * C402 - C1424 * C323 - C1257 * C533 + C5651 * C596 +
           C1258 * C3096 - C1425 * C3038 - C1258 * C3206 + C5572 * C3261) *
              C2487) *
         C5467 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::pow(Pi, 2.5) *
         ((C2037 * C78 - C2038 * C74 - C2037 * C79 + C5467 * C86) * C5508 *
              C2033 +
          (C2037 * C325 - C2038 * C321 - C2037 * C326 + C5467 * C333) * C5508 *
              C2034 +
          (C2037 * C329 - C2038 * C323 - C2037 * C330 + C5467 * C335) * C5508 *
              C2035 +
          (C2037 * C2040 - C2038 * C2039 - C2037 * C2041 + C5467 * C2042) *
              C5508 * C2036) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C1796 * C78 - C1797 * C74 - C1796 * C79 + C1791 * C86 + C1798 * C80 -
           C1799 * C75 - C1798 * C81 + C1792 * C87 + C1800 * C82 - C1801 * C76 -
           C1800 * C83 + C1793 * C88) *
              C5508 * C1794 +
          (C1796 * C325 - C1797 * C321 - C1796 * C326 + C1791 * C333 +
           C1798 * C327 - C1799 * C322 - C1798 * C328 + C1792 * C334 +
           C1800 * C944 - C1801 * C943 - C1800 * C945 + C1793 * C946) *
              C5508 * C5546) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2037 * C78 - C2038 * C74 - C2037 * C79 + C5467 * C86) * C625 +
           (C2037 * C632 - C2038 * C628 - C2037 * C633 + C5467 * C640) * C626 +
           (C2037 * C636 - C2038 * C630 - C2037 * C637 + C5467 * C642) * C627) *
              C1794 +
          ((C2037 * C325 - C2038 * C321 - C2037 * C326 + C5467 * C333) * C625 +
           (C2037 * C1463 - C2038 * C1461 - C2037 * C1464 + C5467 * C1467) *
               C626 +
           (C2037 * C2234 - C2038 * C2233 - C2037 * C2235 + C5467 * C2236) *
               C627) *
              C5546) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::pow(Pi, 2.5) *
         ((C2033 * C109 - C2061 * C74 + C2034 * C366 - C2062 * C321 +
           C2035 * C367 - C2063 * C323 + C2036 * C2065 - C2064 * C2039) *
              C2037 +
          (C2033 * C113 - C2061 * C79 + C2034 * C370 - C2062 * C326 +
           C2035 * C371 - C2063 * C330 + C2036 * C2066 - C2064 * C2041) *
              C5467) *
         C5508 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C1794 * C109 - C1828 * C74 + C5546 * C366 - C1829 * C321) * C1796 +
          (C1794 * C113 - C1828 * C79 + C5546 * C370 - C1829 * C326) * C1791 +
          (C1794 * C110 - C1828 * C75 + C5546 * C368 - C1829 * C322) * C1798 +
          (C1794 * C114 - C1828 * C81 + C5546 * C372 - C1829 * C328) * C1792 +
          (C1794 * C111 - C1828 * C76 + C5546 * C975 - C1829 * C943) * C1800 +
          (C1794 * C115 - C1828 * C83 + C5546 * C976 - C1829 * C945) * C1793) *
         C5508 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1794 * C109 - C1828 * C74 + C5546 * C366 - C1829 * C321) * C2037 +
           (C1794 * C113 - C1828 * C79 + C5546 * C370 - C1829 * C326) * C5467) *
              C625 +
          ((C1794 * C670 - C1828 * C628 + C5546 * C1503 - C1829 * C1461) *
               C2037 +
           (C1794 * C674 - C1828 * C633 + C5546 * C1505 - C1829 * C1464) *
               C5467) *
              C626 +
          ((C1794 * C672 - C1828 * C630 + C5546 * C2263 - C1829 * C2233) *
               C2037 +
           (C1794 * C676 - C1828 * C637 + C5546 * C2264 - C1829 * C2235) *
               C5467) *
              C627) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] += (-std::pow(Pi, 2.5) *
                  (((C5508 * C136 - C135 * C74) * C2037 +
                    (C5508 * C140 - C135 * C79) * C5467) *
                       C2033 +
                   ((C5508 * C400 - C135 * C321) * C2037 +
                    (C5508 * C404 - C135 * C326) * C5467) *
                       C2034 +
                   ((C5508 * C402 - C135 * C323) * C2037 +
                    (C5508 * C406 - C135 * C330) * C5467) *
                       C2035 +
                   ((C5508 * C2085 - C135 * C2039) * C2037 +
                    (C5508 * C2086 - C135 * C2041) * C5467) *
                       C2036) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C5508 * C136 - C135 * C74) * C1796 +
                    (C5508 * C140 - C135 * C79) * C1791 +
                    (C5508 * C137 - C135 * C75) * C1798 +
                    (C5508 * C141 - C135 * C81) * C1792 +
                    (C5508 * C138 - C135 * C76) * C1800 +
                    (C5508 * C142 - C135 * C83) * C1793) *
                       C1794 +
                   ((C5508 * C400 - C135 * C321) * C1796 +
                    (C5508 * C404 - C135 * C326) * C1791 +
                    (C5508 * C401 - C135 * C322) * C1798 +
                    (C5508 * C405 - C135 * C328) * C1792 +
                    (C5508 * C1003 - C135 * C943) * C1800 +
                    (C5508 * C1004 - C135 * C945) * C1793) *
                       C5546) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C625 * C136 - C704 * C74 + C626 * C707 - C705 * C628 +
                     C627 * C708 - C706 * C630) *
                        C2037 +
                    (C625 * C140 - C704 * C79 + C626 * C711 - C705 * C633 +
                     C627 * C712 - C706 * C637) *
                        C5467) *
                       C1794 +
                   ((C625 * C400 - C704 * C321 + C626 * C1541 - C705 * C1461 +
                     C627 * C2291 - C706 * C2233) *
                        C2037 +
                    (C625 * C404 - C704 * C326 + C626 * C1543 - C705 * C1464 +
                     C627 * C2292 - C706 * C2235) *
                        C5467) *
                       C5546) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[7] += (-std::pow(Pi, 2.5) *
                  ((C5467 * C78 - C2037 * C74) * C2061 +
                   (C5467 * C166 - C2037 * C162) * C2033 +
                   (C5467 * C325 - C2037 * C321) * C2062 +
                   (C5467 * C438 - C2037 * C434) * C2034 +
                   (C5467 * C329 - C2037 * C323) * C2063 +
                   (C5467 * C440 - C2037 * C436) * C2035 +
                   (C5467 * C2040 - C2037 * C2039) * C2064 +
                   (C5467 * C2106 - C2037 * C2105) * C2036) *
                  C5508 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C1791 * C78 - C1796 * C74 + C1792 * C80 - C1798 * C75 +
                    C1793 * C82 - C1800 * C76) *
                       C1828 +
                   (C1791 * C166 - C1796 * C162 + C1792 * C167 - C1798 * C163 +
                    C1793 * C168 - C1800 * C164) *
                       C1794 +
                   (C1791 * C325 - C1796 * C321 + C1792 * C327 - C1798 * C322 +
                    C1793 * C944 - C1800 * C943) *
                       C1829 +
                   (C1791 * C438 - C1796 * C434 + C1792 * C439 - C1798 * C435 +
                    C1793 * C1032 - C1800 * C1031) *
                       C5546) *
                  C5508 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C5467 * C78 - C2037 * C74) * C1828 +
                    (C5467 * C166 - C2037 * C162) * C1794 +
                    (C5467 * C325 - C2037 * C321) * C1829 +
                    (C5467 * C438 - C2037 * C434) * C5546) *
                       C625 +
                   ((C5467 * C632 - C2037 * C628) * C1828 +
                    (C5467 * C745 - C2037 * C741) * C1794 +
                    (C5467 * C1463 - C2037 * C1461) * C1829 +
                    (C5467 * C1581 - C2037 * C1579) * C5546) *
                       C626 +
                   ((C5467 * C636 - C2037 * C630) * C1828 +
                    (C5467 * C747 - C2037 * C743) * C1794 +
                    (C5467 * C2234 - C2037 * C2233) * C1829 +
                    (C5467 * C2320 - C2037 * C2319) * C5546) *
                       C627) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::pow(Pi, 2.5) *
         (C2061 * C109 - C2125 * C74 - C2061 * C162 + C2033 * C189 +
          C2062 * C366 - C2126 * C321 - C2062 * C434 + C2034 * C471 +
          C2063 * C367 - C2127 * C323 - C2063 * C436 + C2035 * C472 +
          C2064 * C2065 - C2128 * C2039 - C2064 * C2105 + C2036 * C2129) *
         C5467 * C5508 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C1828 * C109 - C1908 * C74 - C1828 * C162 + C1794 * C189 +
           C1829 * C366 - C1909 * C321 - C1829 * C434 + C5546 * C471) *
              C1791 +
          (C1828 * C110 - C1908 * C75 - C1828 * C163 + C1794 * C190 +
           C1829 * C368 - C1909 * C322 - C1829 * C435 + C5546 * C473) *
              C1792 +
          (C1828 * C111 - C1908 * C76 - C1828 * C164 + C1794 * C191 +
           C1829 * C975 - C1909 * C943 - C1829 * C1031 + C5546 * C1061) *
              C1793) *
         C5508 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C1828 * C109 - C1908 * C74 - C1828 * C162 + C1794 * C189 +
           C1829 * C366 - C1909 * C321 - C1829 * C434 + C5546 * C471) *
              C5467 * C625 +
          (C1828 * C670 - C1908 * C628 - C1828 * C741 + C1794 * C775 +
           C1829 * C1503 - C1909 * C1461 - C1829 * C1579 + C5546 * C1617) *
              C5467 * C626 +
          (C1828 * C672 - C1908 * C630 - C1828 * C743 + C1794 * C777 +
           C1829 * C2263 - C1909 * C2233 - C1829 * C2319 + C5546 * C2347) *
              C5467 * C627) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] += (-std::pow(Pi, 2.5) *
                  ((C5508 * C136 - C135 * C74) * C2061 +
                   (C5508 * C211 - C135 * C162) * C2033 +
                   (C5508 * C400 - C135 * C321) * C2062 +
                   (C5508 * C501 - C135 * C434) * C2034 +
                   (C5508 * C402 - C135 * C323) * C2063 +
                   (C5508 * C502 - C135 * C436) * C2035 +
                   (C5508 * C2085 - C135 * C2039) * C2064 +
                   (C5508 * C2148 - C135 * C2105) * C2036) *
                  C5467 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C5508 * C136 - C135 * C74) * C1828 +
                    (C5508 * C211 - C135 * C162) * C1794 +
                    (C5508 * C400 - C135 * C321) * C1829 +
                    (C5508 * C501 - C135 * C434) * C5546) *
                       C1791 +
                   ((C5508 * C137 - C135 * C75) * C1828 +
                    (C5508 * C212 - C135 * C163) * C1794 +
                    (C5508 * C401 - C135 * C322) * C1829 +
                    (C5508 * C503 - C135 * C435) * C5546) *
                       C1792 +
                   ((C5508 * C138 - C135 * C76) * C1828 +
                    (C5508 * C213 - C135 * C164) * C1794 +
                    (C5508 * C1003 - C135 * C943) * C1829 +
                    (C5508 * C1088 - C135 * C1031) * C5546) *
                       C1793) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C625 * C136 - C704 * C74 + C626 * C707 - C705 * C628 +
                    C627 * C708 - C706 * C630) *
                       C1828 +
                   (C625 * C211 - C704 * C162 + C626 * C805 - C705 * C741 +
                    C627 * C806 - C706 * C743) *
                       C1794 +
                   (C625 * C400 - C704 * C321 + C626 * C1541 - C705 * C1461 +
                    C627 * C2291 - C706 * C2233) *
                       C1829 +
                   (C625 * C501 - C704 * C434 + C626 * C1653 - C705 * C1579 +
                    C627 * C2374 - C706 * C2319) *
                       C5546) *
                  C5467 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezx[7] += (-std::pow(Pi, 2.5) *
                  (((C5467 * C78 - C2037 * C74) * C135 +
                    (C5467 * C237 - C2037 * C233) * C5508) *
                       C2033 +
                   ((C5467 * C325 - C2037 * C321) * C135 +
                    (C5467 * C535 - C2037 * C531) * C5508) *
                       C2034 +
                   ((C5467 * C329 - C2037 * C323) * C135 +
                    (C5467 * C537 - C2037 * C533) * C5508) *
                       C2035 +
                   ((C5467 * C2040 - C2037 * C2039) * C135 +
                    (C5467 * C2168 - C2037 * C2167) * C5508) *
                       C2036) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C1791 * C78 - C1796 * C74 + C1792 * C80 - C1798 * C75 +
                     C1793 * C82 - C1800 * C76) *
                        C135 +
                    (C1791 * C237 - C1796 * C233 + C1792 * C238 - C1798 * C234 +
                     C1793 * C239 - C1800 * C235) *
                        C5508) *
                       C1794 +
                   ((C1791 * C325 - C1796 * C321 + C1792 * C327 - C1798 * C322 +
                     C1793 * C944 - C1800 * C943) *
                        C135 +
                    (C1791 * C535 - C1796 * C531 + C1792 * C536 - C1798 * C532 +
                     C1793 * C1116 - C1800 * C1115) *
                        C5508) *
                       C5546) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C5467 * C78 - C2037 * C74) * C704 +
                    (C5467 * C237 - C2037 * C233) * C625 +
                    (C5467 * C632 - C2037 * C628) * C705 +
                    (C5467 * C839 - C2037 * C835) * C626 +
                    (C5467 * C636 - C2037 * C630) * C706 +
                    (C5467 * C841 - C2037 * C837) * C627) *
                       C1794 +
                   ((C5467 * C325 - C2037 * C321) * C704 +
                    (C5467 * C535 - C2037 * C531) * C625 +
                    (C5467 * C1463 - C2037 * C1461) * C705 +
                    (C5467 * C1691 - C2037 * C1689) * C626 +
                    (C5467 * C2234 - C2037 * C2233) * C706 +
                    (C5467 * C2402 - C2037 * C2401) * C627) *
                       C5546) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (-std::pow(Pi, 2.5) *
         ((C2033 * C109 - C2061 * C74 + C2034 * C366 - C2062 * C321 +
           C2035 * C367 - C2063 * C323 + C2036 * C2065 - C2064 * C2039) *
              C135 +
          (C2033 * C259 - C2061 * C233 + C2034 * C565 - C2062 * C531 +
           C2035 * C566 - C2063 * C533 + C2036 * C2187 - C2064 * C2167) *
              C5508) *
         C5467 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1794 * C109 - C1828 * C74 + C5546 * C366 - C1829 * C321) * C135 +
           (C1794 * C259 - C1828 * C233 + C5546 * C565 - C1829 * C531) *
               C5508) *
              C1791 +
          ((C1794 * C110 - C1828 * C75 + C5546 * C368 - C1829 * C322) * C135 +
           (C1794 * C260 - C1828 * C234 + C5546 * C567 - C1829 * C532) *
               C5508) *
              C1792 +
          ((C1794 * C111 - C1828 * C76 + C5546 * C975 - C1829 * C943) * C135 +
           (C1794 * C261 - C1828 * C235 + C5546 * C1143 - C1829 * C1115) *
               C5508) *
              C1793) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C1794 * C109 - C1828 * C74 + C5546 * C366 - C1829 * C321) * C704 +
          (C1794 * C259 - C1828 * C233 + C5546 * C565 - C1829 * C531) * C625 +
          (C1794 * C670 - C1828 * C628 + C5546 * C1503 - C1829 * C1461) * C705 +
          (C1794 * C869 - C1828 * C835 + C5546 * C1727 - C1829 * C1689) * C626 +
          (C1794 * C672 - C1828 * C630 + C5546 * C2263 - C1829 * C2233) * C706 +
          (C1794 * C870 - C1828 * C837 + C5546 * C2429 - C1829 * C2401) *
              C627) *
         C5467 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (-std::pow(Pi, 2.5) *
         ((C135 * C136 - C281 * C74 - C135 * C233 + C5508 * C282) * C2033 +
          (C135 * C400 - C281 * C321 - C135 * C531 + C5508 * C595) * C2034 +
          (C135 * C402 - C281 * C323 - C135 * C533 + C5508 * C596) * C2035 +
          (C135 * C2085 - C281 * C2039 - C135 * C2167 + C5508 * C2206) *
              C2036) *
         C5467 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C135 * C136 - C281 * C74 - C135 * C233 + C5508 * C282) * C1794 +
           (C135 * C400 - C281 * C321 - C135 * C531 + C5508 * C595) * C5546) *
              C1791 +
          ((C135 * C137 - C281 * C75 - C135 * C234 + C5508 * C283) * C1794 +
           (C135 * C401 - C281 * C322 - C135 * C532 + C5508 * C597) * C5546) *
              C1792 +
          ((C135 * C138 - C281 * C76 - C135 * C235 + C5508 * C284) * C1794 +
           (C135 * C1003 - C281 * C943 - C135 * C1115 + C5508 * C1170) *
               C5546) *
              C1793) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C704 * C136 - C899 * C74 - C704 * C233 + C625 * C282 + C705 * C707 -
           C900 * C628 - C705 * C835 + C626 * C902 + C706 * C708 - C901 * C630 -
           C706 * C837 + C627 * C903) *
              C1794 +
          (C704 * C400 - C899 * C321 - C704 * C531 + C625 * C595 +
           C705 * C1541 - C900 * C1461 - C705 * C1689 + C626 * C1763 +
           C706 * C2291 - C901 * C2233 - C706 * C2401 + C627 * C2456) *
              C5546) *
         C5467 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4747 * C78 - C2489 * C74 - C4747 * C79 + C5640 * C86 +
            C4740 * C80 - C2491 * C75 - C4740 * C81 + C5472 * C87) *
               C5651 +
           (C4747 * C632 - C2489 * C628 - C4747 * C633 + C5640 * C640 +
            C4740 * C634 - C2491 * C629 - C4740 * C635 + C5472 * C641) *
               C5572) *
              C1794 +
          ((C4747 * C325 - C2489 * C321 - C4747 * C326 + C5640 * C333 +
            C4740 * C327 - C2491 * C322 - C4740 * C328 + C5472 * C334) *
               C5651 +
           (C4747 * C1463 - C2489 * C1461 - C4747 * C1464 + C5640 * C1467 +
            C4740 * C1465 - C2491 * C1462 - C4740 * C1466 + C5472 * C1468) *
               C5572) *
              C5546) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1794 * C109 - C1828 * C74 + C5546 * C366 - C1829 * C321) * C4747 +
           (C1794 * C113 - C1828 * C79 + C5546 * C370 - C1829 * C326) * C5640 +
           (C1794 * C110 - C1828 * C75 + C5546 * C368 - C1829 * C322) * C4740 +
           (C1794 * C114 - C1828 * C81 + C5546 * C372 - C1829 * C328) * C5472) *
              C5651 +
          ((C1794 * C670 - C1828 * C628 + C5546 * C1503 - C1829 * C1461) *
               C4747 +
           (C1794 * C674 - C1828 * C633 + C5546 * C1505 - C1829 * C1464) *
               C5640 +
           (C1794 * C671 - C1828 * C629 + C5546 * C1504 - C1829 * C1462) *
               C4740 +
           (C1794 * C675 - C1828 * C635 + C5546 * C1506 - C1829 * C1466) *
               C5472) *
              C5572) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5651 * C136 - C1257 * C74 + C5572 * C707 - C1258 * C628) * C4747 +
           (C5651 * C140 - C1257 * C79 + C5572 * C711 - C1258 * C633) * C5640 +
           (C5651 * C137 - C1257 * C75 + C5572 * C709 - C1258 * C629) * C4740 +
           (C5651 * C141 - C1257 * C81 + C5572 * C713 - C1258 * C635) * C5472) *
              C1794 +
          ((C5651 * C400 - C1257 * C321 + C5572 * C1541 - C1258 * C1461) *
               C4747 +
           (C5651 * C404 - C1257 * C326 + C5572 * C1543 - C1258 * C1464) *
               C5640 +
           (C5651 * C401 - C1257 * C322 + C5572 * C1542 - C1258 * C1462) *
               C4740 +
           (C5651 * C405 - C1257 * C328 + C5572 * C1544 - C1258 * C1466) *
               C5472) *
              C5546) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5640 * C78 - C4747 * C74 + C5472 * C80 - C4740 * C75) * C1828 +
           (C5640 * C166 - C4747 * C162 + C5472 * C167 - C4740 * C163) * C1794 +
           (C5640 * C325 - C4747 * C321 + C5472 * C327 - C4740 * C322) * C1829 +
           (C5640 * C438 - C4747 * C434 + C5472 * C439 - C4740 * C435) *
               C5546) *
              C5651 +
          ((C5640 * C632 - C4747 * C628 + C5472 * C634 - C4740 * C629) * C1828 +
           (C5640 * C745 - C4747 * C741 + C5472 * C746 - C4740 * C742) * C1794 +
           (C5640 * C1463 - C4747 * C1461 + C5472 * C1465 - C4740 * C1462) *
               C1829 +
           (C5640 * C1581 - C4747 * C1579 + C5472 * C1582 - C4740 * C1580) *
               C5546) *
              C5572) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1828 * C109 - C1908 * C74 - C1828 * C162 + C1794 * C189 +
            C1829 * C366 - C1909 * C321 - C1829 * C434 + C5546 * C471) *
               C5640 +
           (C1828 * C110 - C1908 * C75 - C1828 * C163 + C1794 * C190 +
            C1829 * C368 - C1909 * C322 - C1829 * C435 + C5546 * C473) *
               C5472) *
              C5651 +
          ((C1828 * C670 - C1908 * C628 - C1828 * C741 + C1794 * C775 +
            C1829 * C1503 - C1909 * C1461 - C1829 * C1579 + C5546 * C1617) *
               C5640 +
           (C1828 * C671 - C1908 * C629 - C1828 * C742 + C1794 * C776 +
            C1829 * C1504 - C1909 * C1462 - C1829 * C1580 + C5546 * C1618) *
               C5472) *
              C5572) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5651 * C136 - C1257 * C74 + C5572 * C707 - C1258 * C628) * C1828 +
           (C5651 * C211 - C1257 * C162 + C5572 * C805 - C1258 * C741) * C1794 +
           (C5651 * C400 - C1257 * C321 + C5572 * C1541 - C1258 * C1461) *
               C1829 +
           (C5651 * C501 - C1257 * C434 + C5572 * C1653 - C1258 * C1579) *
               C5546) *
              C5640 +
          ((C5651 * C137 - C1257 * C75 + C5572 * C709 - C1258 * C629) * C1828 +
           (C5651 * C212 - C1257 * C163 + C5572 * C807 - C1258 * C742) * C1794 +
           (C5651 * C401 - C1257 * C322 + C5572 * C1542 - C1258 * C1462) *
               C1829 +
           (C5651 * C503 - C1257 * C435 + C5572 * C1654 - C1258 * C1580) *
               C5546) *
              C5472) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5640 * C78 - C4747 * C74 + C5472 * C80 - C4740 * C75) * C1257 +
           (C5640 * C237 - C4747 * C233 + C5472 * C238 - C4740 * C234) * C5651 +
           (C5640 * C632 - C4747 * C628 + C5472 * C634 - C4740 * C629) * C1258 +
           (C5640 * C839 - C4747 * C835 + C5472 * C840 - C4740 * C836) *
               C5572) *
              C1794 +
          ((C5640 * C325 - C4747 * C321 + C5472 * C327 - C4740 * C322) * C1257 +
           (C5640 * C535 - C4747 * C531 + C5472 * C536 - C4740 * C532) * C5651 +
           (C5640 * C1463 - C4747 * C1461 + C5472 * C1465 - C4740 * C1462) *
               C1258 +
           (C5640 * C1691 - C4747 * C1689 + C5472 * C1692 - C4740 * C1690) *
               C5572) *
              C5546) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1794 * C109 - C1828 * C74 + C5546 * C366 - C1829 * C321) * C1257 +
           (C1794 * C259 - C1828 * C233 + C5546 * C565 - C1829 * C531) * C5651 +
           (C1794 * C670 - C1828 * C628 + C5546 * C1503 - C1829 * C1461) *
               C1258 +
           (C1794 * C869 - C1828 * C835 + C5546 * C1727 - C1829 * C1689) *
               C5572) *
              C5640 +
          ((C1794 * C110 - C1828 * C75 + C5546 * C368 - C1829 * C322) * C1257 +
           (C1794 * C260 - C1828 * C234 + C5546 * C567 - C1829 * C532) * C5651 +
           (C1794 * C671 - C1828 * C629 + C5546 * C1504 - C1829 * C1462) *
               C1258 +
           (C1794 * C871 - C1828 * C836 + C5546 * C1728 - C1829 * C1690) *
               C5572) *
              C5472) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1257 * C136 - C1424 * C74 - C1257 * C233 + C5651 * C282 +
            C1258 * C707 - C1425 * C628 - C1258 * C835 + C5572 * C902) *
               C1794 +
           (C1257 * C400 - C1424 * C321 - C1257 * C531 + C5651 * C595 +
            C1258 * C1541 - C1425 * C1461 - C1258 * C1689 + C5572 * C1763) *
               C5546) *
              C5640 +
          ((C1257 * C137 - C1424 * C75 - C1257 * C234 + C5651 * C283 +
            C1258 * C709 - C1425 * C629 - C1258 * C836 + C5572 * C904) *
               C1794 +
           (C1257 * C401 - C1424 * C322 - C1257 * C532 + C5651 * C597 +
            C1258 * C1542 - C1425 * C1462 - C1258 * C1690 + C5572 * C1764) *
               C5546) *
              C5472) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1796 * C78 - C1797 * C74 - C1796 * C79 + C1791 * C86 + C1798 * C80 -
           C1799 * C75 - C1798 * C81 + C1792 * C87 + C1800 * C82 - C1801 * C76 -
           C1800 * C83 + C1793 * C88) *
              C5508 * C1794 +
          (C1796 * C325 - C1797 * C321 - C1796 * C326 + C1791 * C333 +
           C1798 * C327 - C1799 * C322 - C1798 * C328 + C1792 * C334 +
           C1800 * C944 - C1801 * C943 - C1800 * C945 + C1793 * C946) *
              C5508 * C5546) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C2037 * C78 - C2038 * C74 - C2037 * C79 + C5467 * C86) * C5508 *
              C2033 +
          (C2037 * C325 - C2038 * C321 - C2037 * C326 + C5467 * C333) * C5508 *
              C2034 +
          (C2037 * C329 - C2038 * C323 - C2037 * C330 + C5467 * C335) * C5508 *
              C2035 +
          (C2037 * C2040 - C2038 * C2039 - C2037 * C2041 + C5467 * C2042) *
              C5508 * C2036) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1794 * C109 - C1828 * C74 + C5546 * C366 - C1829 * C321) * C1796 +
          (C1794 * C113 - C1828 * C79 + C5546 * C370 - C1829 * C326) * C1791 +
          (C1794 * C110 - C1828 * C75 + C5546 * C368 - C1829 * C322) * C1798 +
          (C1794 * C114 - C1828 * C81 + C5546 * C372 - C1829 * C328) * C1792 +
          (C1794 * C111 - C1828 * C76 + C5546 * C975 - C1829 * C943) * C1800 +
          (C1794 * C115 - C1828 * C83 + C5546 * C976 - C1829 * C945) * C1793) *
         C5508 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C2033 * C109 - C2061 * C74 + C2034 * C366 - C2062 * C321 +
           C2035 * C367 - C2063 * C323 + C2036 * C2065 - C2064 * C2039) *
              C2037 +
          (C2033 * C113 - C2061 * C79 + C2034 * C370 - C2062 * C326 +
           C2035 * C371 - C2063 * C330 + C2036 * C2066 - C2064 * C2041) *
              C5467) *
         C5508 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexz[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C5508 * C136 - C135 * C74) * C1796 +
                    (C5508 * C140 - C135 * C79) * C1791 +
                    (C5508 * C137 - C135 * C75) * C1798 +
                    (C5508 * C141 - C135 * C81) * C1792 +
                    (C5508 * C138 - C135 * C76) * C1800 +
                    (C5508 * C142 - C135 * C83) * C1793) *
                       C1794 +
                   ((C5508 * C400 - C135 * C321) * C1796 +
                    (C5508 * C404 - C135 * C326) * C1791 +
                    (C5508 * C401 - C135 * C322) * C1798 +
                    (C5508 * C405 - C135 * C328) * C1792 +
                    (C5508 * C1003 - C135 * C943) * C1800 +
                    (C5508 * C1004 - C135 * C945) * C1793) *
                       C5546) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C5508 * C136 - C135 * C74) * C2037 +
                    (C5508 * C140 - C135 * C79) * C5467) *
                       C2033 +
                   ((C5508 * C400 - C135 * C321) * C2037 +
                    (C5508 * C404 - C135 * C326) * C5467) *
                       C2034 +
                   ((C5508 * C402 - C135 * C323) * C2037 +
                    (C5508 * C406 - C135 * C330) * C5467) *
                       C2035 +
                   ((C5508 * C2085 - C135 * C2039) * C2037 +
                    (C5508 * C2086 - C135 * C2041) * C5467) *
                       C2036) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C1791 * C78 - C1796 * C74 + C1792 * C80 - C1798 * C75 +
                    C1793 * C82 - C1800 * C76) *
                       C1828 +
                   (C1791 * C166 - C1796 * C162 + C1792 * C167 - C1798 * C163 +
                    C1793 * C168 - C1800 * C164) *
                       C1794 +
                   (C1791 * C325 - C1796 * C321 + C1792 * C327 - C1798 * C322 +
                    C1793 * C944 - C1800 * C943) *
                       C1829 +
                   (C1791 * C438 - C1796 * C434 + C1792 * C439 - C1798 * C435 +
                    C1793 * C1032 - C1800 * C1031) *
                       C5546) *
                  C5508 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C5467 * C78 - C2037 * C74) * C2061 +
                   (C5467 * C166 - C2037 * C162) * C2033 +
                   (C5467 * C325 - C2037 * C321) * C2062 +
                   (C5467 * C438 - C2037 * C434) * C2034 +
                   (C5467 * C329 - C2037 * C323) * C2063 +
                   (C5467 * C440 - C2037 * C436) * C2035 +
                   (C5467 * C2040 - C2037 * C2039) * C2064 +
                   (C5467 * C2106 - C2037 * C2105) * C2036) *
                  C5508 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1828 * C109 - C1908 * C74 - C1828 * C162 + C1794 * C189 +
           C1829 * C366 - C1909 * C321 - C1829 * C434 + C5546 * C471) *
              C1791 +
          (C1828 * C110 - C1908 * C75 - C1828 * C163 + C1794 * C190 +
           C1829 * C368 - C1909 * C322 - C1829 * C435 + C5546 * C473) *
              C1792 +
          (C1828 * C111 - C1908 * C76 - C1828 * C164 + C1794 * C191 +
           C1829 * C975 - C1909 * C943 - C1829 * C1031 + C5546 * C1061) *
              C1793) *
         C5508 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (C2061 * C109 - C2125 * C74 - C2061 * C162 + C2033 * C189 +
          C2062 * C366 - C2126 * C321 - C2062 * C434 + C2034 * C471 +
          C2063 * C367 - C2127 * C323 - C2063 * C436 + C2035 * C472 +
          C2064 * C2065 - C2128 * C2039 - C2064 * C2105 + C2036 * C2129) *
         C5467 * C5508 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyz[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C5508 * C136 - C135 * C74) * C1828 +
                    (C5508 * C211 - C135 * C162) * C1794 +
                    (C5508 * C400 - C135 * C321) * C1829 +
                    (C5508 * C501 - C135 * C434) * C5546) *
                       C1791 +
                   ((C5508 * C137 - C135 * C75) * C1828 +
                    (C5508 * C212 - C135 * C163) * C1794 +
                    (C5508 * C401 - C135 * C322) * C1829 +
                    (C5508 * C503 - C135 * C435) * C5546) *
                       C1792 +
                   ((C5508 * C138 - C135 * C76) * C1828 +
                    (C5508 * C213 - C135 * C164) * C1794 +
                    (C5508 * C1003 - C135 * C943) * C1829 +
                    (C5508 * C1088 - C135 * C1031) * C5546) *
                       C1793) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C5508 * C136 - C135 * C74) * C2061 +
                   (C5508 * C211 - C135 * C162) * C2033 +
                   (C5508 * C400 - C135 * C321) * C2062 +
                   (C5508 * C501 - C135 * C434) * C2034 +
                   (C5508 * C402 - C135 * C323) * C2063 +
                   (C5508 * C502 - C135 * C436) * C2035 +
                   (C5508 * C2085 - C135 * C2039) * C2064 +
                   (C5508 * C2148 - C135 * C2105) * C2036) *
                  C5467 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezx[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C1791 * C78 - C1796 * C74 + C1792 * C80 - C1798 * C75 +
                     C1793 * C82 - C1800 * C76) *
                        C135 +
                    (C1791 * C237 - C1796 * C233 + C1792 * C238 - C1798 * C234 +
                     C1793 * C239 - C1800 * C235) *
                        C5508) *
                       C1794 +
                   ((C1791 * C325 - C1796 * C321 + C1792 * C327 - C1798 * C322 +
                     C1793 * C944 - C1800 * C943) *
                        C135 +
                    (C1791 * C535 - C1796 * C531 + C1792 * C536 - C1798 * C532 +
                     C1793 * C1116 - C1800 * C1115) *
                        C5508) *
                       C5546) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C5467 * C78 - C2037 * C74) * C135 +
                    (C5467 * C237 - C2037 * C233) * C5508) *
                       C2033 +
                   ((C5467 * C325 - C2037 * C321) * C135 +
                    (C5467 * C535 - C2037 * C531) * C5508) *
                       C2034 +
                   ((C5467 * C329 - C2037 * C323) * C135 +
                    (C5467 * C537 - C2037 * C533) * C5508) *
                       C2035 +
                   ((C5467 * C2040 - C2037 * C2039) * C135 +
                    (C5467 * C2168 - C2037 * C2167) * C5508) *
                       C2036) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1794 * C109 - C1828 * C74 + C5546 * C366 - C1829 * C321) * C135 +
           (C1794 * C259 - C1828 * C233 + C5546 * C565 - C1829 * C531) *
               C5508) *
              C1791 +
          ((C1794 * C110 - C1828 * C75 + C5546 * C368 - C1829 * C322) * C135 +
           (C1794 * C260 - C1828 * C234 + C5546 * C567 - C1829 * C532) *
               C5508) *
              C1792 +
          ((C1794 * C111 - C1828 * C76 + C5546 * C975 - C1829 * C943) * C135 +
           (C1794 * C261 - C1828 * C235 + C5546 * C1143 - C1829 * C1115) *
               C5508) *
              C1793) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C2033 * C109 - C2061 * C74 + C2034 * C366 - C2062 * C321 +
           C2035 * C367 - C2063 * C323 + C2036 * C2065 - C2064 * C2039) *
              C135 +
          (C2033 * C259 - C2061 * C233 + C2034 * C565 - C2062 * C531 +
           C2035 * C566 - C2063 * C533 + C2036 * C2187 - C2064 * C2167) *
              C5508) *
         C5467 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C135 * C136 - C281 * C74 - C135 * C233 + C5508 * C282) * C1794 +
           (C135 * C400 - C281 * C321 - C135 * C531 + C5508 * C595) * C5546) *
              C1791 +
          ((C135 * C137 - C281 * C75 - C135 * C234 + C5508 * C283) * C1794 +
           (C135 * C401 - C281 * C322 - C135 * C532 + C5508 * C597) * C5546) *
              C1792 +
          ((C135 * C138 - C281 * C76 - C135 * C235 + C5508 * C284) * C1794 +
           (C135 * C1003 - C281 * C943 - C135 * C1115 + C5508 * C1170) *
               C5546) *
              C1793) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C135 * C136 - C281 * C74 - C135 * C233 + C5508 * C282) * C2033 +
          (C135 * C400 - C281 * C321 - C135 * C531 + C5508 * C595) * C2034 +
          (C135 * C402 - C281 * C323 - C135 * C533 + C5508 * C596) * C2035 +
          (C135 * C2085 - C281 * C2039 - C135 * C2167 + C5508 * C2206) *
              C2036) *
         C5467 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4747 * C78 - C2489 * C74 - C4747 * C79 + C5640 * C86 +
            C4740 * C80 - C2491 * C75 - C4740 * C81 + C5472 * C87) *
               C3288 +
           (C4747 * C632 - C2489 * C628 - C4747 * C633 + C5640 * C640 +
            C4740 * C634 - C2491 * C629 - C4740 * C635 + C5472 * C641) *
               C5572) *
              C5650 +
          ((C4747 * C325 - C2489 * C321 - C4747 * C326 + C5640 * C333 +
            C4740 * C327 - C2491 * C322 - C4740 * C328 + C5472 * C334) *
               C3288 +
           (C4747 * C1463 - C2489 * C1461 - C4747 * C1464 + C5640 * C1467 +
            C4740 * C1465 - C2491 * C1462 - C4740 * C1466 + C5472 * C1468) *
               C5572) *
              C5546) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5650 * C109 - C973 * C74 + C5546 * C366 - C974 * C321) * C4747 +
           (C5650 * C113 - C973 * C79 + C5546 * C370 - C974 * C326) * C5640 +
           (C5650 * C110 - C973 * C75 + C5546 * C368 - C974 * C322) * C4740 +
           (C5650 * C114 - C973 * C81 + C5546 * C372 - C974 * C328) * C5472) *
              C3288 +
          ((C5650 * C670 - C973 * C628 + C5546 * C1503 - C974 * C1461) * C4747 +
           (C5650 * C674 - C973 * C633 + C5546 * C1505 - C974 * C1464) * C5640 +
           (C5650 * C671 - C973 * C629 + C5546 * C1504 - C974 * C1462) * C4740 +
           (C5650 * C675 - C973 * C635 + C5546 * C1506 - C974 * C1466) *
               C5472) *
              C5572) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3288 * C136 - C3342 * C74 + C5572 * C707 - C3343 * C628) * C4747 +
           (C3288 * C140 - C3342 * C79 + C5572 * C711 - C3343 * C633) * C5640 +
           (C3288 * C137 - C3342 * C75 + C5572 * C709 - C3343 * C629) * C4740 +
           (C3288 * C141 - C3342 * C81 + C5572 * C713 - C3343 * C635) * C5472) *
              C5650 +
          ((C3288 * C400 - C3342 * C321 + C5572 * C1541 - C3343 * C1461) *
               C4747 +
           (C3288 * C404 - C3342 * C326 + C5572 * C1543 - C3343 * C1464) *
               C5640 +
           (C3288 * C401 - C3342 * C322 + C5572 * C1542 - C3343 * C1462) *
               C4740 +
           (C3288 * C405 - C3342 * C328 + C5572 * C1544 - C3343 * C1466) *
               C5472) *
              C5546) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5640 * C78 - C4747 * C74 + C5472 * C80 - C4740 * C75) * C973 +
           (C5640 * C166 - C4747 * C162 + C5472 * C167 - C4740 * C163) * C5650 +
           (C5640 * C325 - C4747 * C321 + C5472 * C327 - C4740 * C322) * C974 +
           (C5640 * C438 - C4747 * C434 + C5472 * C439 - C4740 * C435) *
               C5546) *
              C3288 +
          ((C5640 * C632 - C4747 * C628 + C5472 * C634 - C4740 * C629) * C973 +
           (C5640 * C745 - C4747 * C741 + C5472 * C746 - C4740 * C742) * C5650 +
           (C5640 * C1463 - C4747 * C1461 + C5472 * C1465 - C4740 * C1462) *
               C974 +
           (C5640 * C1581 - C4747 * C1579 + C5472 * C1582 - C4740 * C1580) *
               C5546) *
              C5572) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C973 * C109 - C1059 * C74 - C973 * C162 + C5650 * C189 +
            C974 * C366 - C1060 * C321 - C974 * C434 + C5546 * C471) *
               C5640 +
           (C973 * C110 - C1059 * C75 - C973 * C163 + C5650 * C190 +
            C974 * C368 - C1060 * C322 - C974 * C435 + C5546 * C473) *
               C5472) *
              C3288 +
          ((C973 * C670 - C1059 * C628 - C973 * C741 + C5650 * C775 +
            C974 * C1503 - C1060 * C1461 - C974 * C1579 + C5546 * C1617) *
               C5640 +
           (C973 * C671 - C1059 * C629 - C973 * C742 + C5650 * C776 +
            C974 * C1504 - C1060 * C1462 - C974 * C1580 + C5546 * C1618) *
               C5472) *
              C5572) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3288 * C136 - C3342 * C74 + C5572 * C707 - C3343 * C628) * C973 +
           (C3288 * C211 - C3342 * C162 + C5572 * C805 - C3343 * C741) * C5650 +
           (C3288 * C400 - C3342 * C321 + C5572 * C1541 - C3343 * C1461) *
               C974 +
           (C3288 * C501 - C3342 * C434 + C5572 * C1653 - C3343 * C1579) *
               C5546) *
              C5640 +
          ((C3288 * C137 - C3342 * C75 + C5572 * C709 - C3343 * C629) * C973 +
           (C3288 * C212 - C3342 * C163 + C5572 * C807 - C3343 * C742) * C5650 +
           (C3288 * C401 - C3342 * C322 + C5572 * C1542 - C3343 * C1462) *
               C974 +
           (C3288 * C503 - C3342 * C435 + C5572 * C1654 - C3343 * C1580) *
               C5546) *
              C5472) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5640 * C78 - C4747 * C74 + C5472 * C80 - C4740 * C75) * C3342 +
           (C5640 * C237 - C4747 * C233 + C5472 * C238 - C4740 * C234) * C3288 +
           (C5640 * C632 - C4747 * C628 + C5472 * C634 - C4740 * C629) * C3343 +
           (C5640 * C839 - C4747 * C835 + C5472 * C840 - C4740 * C836) *
               C5572) *
              C5650 +
          ((C5640 * C325 - C4747 * C321 + C5472 * C327 - C4740 * C322) * C3342 +
           (C5640 * C535 - C4747 * C531 + C5472 * C536 - C4740 * C532) * C3288 +
           (C5640 * C1463 - C4747 * C1461 + C5472 * C1465 - C4740 * C1462) *
               C3343 +
           (C5640 * C1691 - C4747 * C1689 + C5472 * C1692 - C4740 * C1690) *
               C5572) *
              C5546) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5650 * C109 - C973 * C74 + C5546 * C366 - C974 * C321) * C3342 +
           (C5650 * C259 - C973 * C233 + C5546 * C565 - C974 * C531) * C3288 +
           (C5650 * C670 - C973 * C628 + C5546 * C1503 - C974 * C1461) * C3343 +
           (C5650 * C869 - C973 * C835 + C5546 * C1727 - C974 * C1689) *
               C5572) *
              C5640 +
          ((C5650 * C110 - C973 * C75 + C5546 * C368 - C974 * C322) * C3342 +
           (C5650 * C260 - C973 * C234 + C5546 * C567 - C974 * C532) * C3288 +
           (C5650 * C671 - C973 * C629 + C5546 * C1504 - C974 * C1462) * C3343 +
           (C5650 * C871 - C973 * C836 + C5546 * C1728 - C974 * C1690) *
               C5572) *
              C5472) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3342 * C136 - C3500 * C74 - C3342 * C233 + C3288 * C282 +
            C3343 * C707 - C3501 * C628 - C3343 * C835 + C5572 * C902) *
               C5650 +
           (C3342 * C400 - C3500 * C321 - C3342 * C531 + C3288 * C595 +
            C3343 * C1541 - C3501 * C1461 - C3343 * C1689 + C5572 * C1763) *
               C5546) *
              C5640 +
          ((C3342 * C137 - C3500 * C75 - C3342 * C234 + C3288 * C283 +
            C3343 * C709 - C3501 * C629 - C3343 * C836 + C5572 * C904) *
               C5650 +
           (C3342 * C401 - C3500 * C322 - C3342 * C532 + C3288 * C597 +
            C3343 * C1542 - C3501 * C1462 - C3343 * C1690 + C5572 * C1764) *
               C5546) *
              C5472) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2037 * C78 - C2038 * C74 - C2037 * C79 + C5467 * C86) * C5673 +
           (C2037 * C632 - C2038 * C628 - C2037 * C633 + C5467 * C640) * C5674 +
           (C2037 * C636 - C2038 * C630 - C2037 * C637 + C5467 * C642) *
               C4260) *
              C5650 +
          ((C2037 * C325 - C2038 * C321 - C2037 * C326 + C5467 * C333) * C5673 +
           (C2037 * C1463 - C2038 * C1461 - C2037 * C1464 + C5467 * C1467) *
               C5674 +
           (C2037 * C2234 - C2038 * C2233 - C2037 * C2235 + C5467 * C2236) *
               C4260) *
              C5546) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5650 * C109 - C973 * C74 + C5546 * C366 - C974 * C321) * C2037 +
           (C5650 * C113 - C973 * C79 + C5546 * C370 - C974 * C326) * C5467) *
              C5673 +
          ((C5650 * C670 - C973 * C628 + C5546 * C1503 - C974 * C1461) * C2037 +
           (C5650 * C674 - C973 * C633 + C5546 * C1505 - C974 * C1464) *
               C5467) *
              C5674 +
          ((C5650 * C672 - C973 * C630 + C5546 * C2263 - C974 * C2233) * C2037 +
           (C5650 * C676 - C973 * C637 + C5546 * C2264 - C974 * C2235) *
               C5467) *
              C4260) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C5673 * C136 - C4313 * C74 + C5674 * C707 - C4314 * C628 +
                      C4260 * C708 - C4315 * C630) *
                         C2037 +
                     (C5673 * C140 - C4313 * C79 + C5674 * C711 - C4314 * C633 +
                      C4260 * C712 - C4315 * C637) *
                         C5467) *
                        C5650 +
                    ((C5673 * C400 - C4313 * C321 + C5674 * C1541 -
                      C4314 * C1461 + C4260 * C2291 - C4315 * C2233) *
                         C2037 +
                     (C5673 * C404 - C4313 * C326 + C5674 * C1543 -
                      C4314 * C1464 + C4260 * C2292 - C4315 * C2235) *
                         C5467) *
                        C5546) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C5467 * C78 - C2037 * C74) * C973 +
                     (C5467 * C166 - C2037 * C162) * C5650 +
                     (C5467 * C325 - C2037 * C321) * C974 +
                     (C5467 * C438 - C2037 * C434) * C5546) *
                        C5673 +
                    ((C5467 * C632 - C2037 * C628) * C973 +
                     (C5467 * C745 - C2037 * C741) * C5650 +
                     (C5467 * C1463 - C2037 * C1461) * C974 +
                     (C5467 * C1581 - C2037 * C1579) * C5546) *
                        C5674 +
                    ((C5467 * C636 - C2037 * C630) * C973 +
                     (C5467 * C747 - C2037 * C743) * C5650 +
                     (C5467 * C2234 - C2037 * C2233) * C974 +
                     (C5467 * C2320 - C2037 * C2319) * C5546) *
                        C4260) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C973 * C109 - C1059 * C74 - C973 * C162 + C5650 * C189 +
           C974 * C366 - C1060 * C321 - C974 * C434 + C5546 * C471) *
              C5467 * C5673 +
          (C973 * C670 - C1059 * C628 - C973 * C741 + C5650 * C775 +
           C974 * C1503 - C1060 * C1461 - C974 * C1579 + C5546 * C1617) *
              C5467 * C5674 +
          (C973 * C672 - C1059 * C630 - C973 * C743 + C5650 * C777 +
           C974 * C2263 - C1060 * C2233 - C974 * C2319 + C5546 * C2347) *
              C5467 * C4260) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((C5673 * C136 - C4313 * C74 + C5674 * C707 - C4314 * C628 +
                     C4260 * C708 - C4315 * C630) *
                        C973 +
                    (C5673 * C211 - C4313 * C162 + C5674 * C805 - C4314 * C741 +
                     C4260 * C806 - C4315 * C743) *
                        C5650 +
                    (C5673 * C400 - C4313 * C321 + C5674 * C1541 -
                     C4314 * C1461 + C4260 * C2291 - C4315 * C2233) *
                        C974 +
                    (C5673 * C501 - C4313 * C434 + C5674 * C1653 -
                     C4314 * C1579 + C4260 * C2374 - C4315 * C2319) *
                        C5546) *
                   C5467 * C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eezx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C5467 * C78 - C2037 * C74) * C4313 +
                     (C5467 * C237 - C2037 * C233) * C5673 +
                     (C5467 * C632 - C2037 * C628) * C4314 +
                     (C5467 * C839 - C2037 * C835) * C5674 +
                     (C5467 * C636 - C2037 * C630) * C4315 +
                     (C5467 * C841 - C2037 * C837) * C4260) *
                        C5650 +
                    ((C5467 * C325 - C2037 * C321) * C4313 +
                     (C5467 * C535 - C2037 * C531) * C5673 +
                     (C5467 * C1463 - C2037 * C1461) * C4314 +
                     (C5467 * C1691 - C2037 * C1689) * C5674 +
                     (C5467 * C2234 - C2037 * C2233) * C4315 +
                     (C5467 * C2402 - C2037 * C2401) * C4260) *
                        C5546) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C5650 * C109 - C973 * C74 + C5546 * C366 - C974 * C321) * C4313 +
          (C5650 * C259 - C973 * C233 + C5546 * C565 - C974 * C531) * C5673 +
          (C5650 * C670 - C973 * C628 + C5546 * C1503 - C974 * C1461) * C4314 +
          (C5650 * C869 - C973 * C835 + C5546 * C1727 - C974 * C1689) * C5674 +
          (C5650 * C672 - C973 * C630 + C5546 * C2263 - C974 * C2233) * C4315 +
          (C5650 * C870 - C973 * C837 + C5546 * C2429 - C974 * C2401) * C4260) *
         C5467 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C4313 * C136 - C4472 * C74 - C4313 * C233 + C5673 * C282 +
           C4314 * C707 - C4473 * C628 - C4314 * C835 + C5674 * C902 +
           C4315 * C708 - C4474 * C630 - C4315 * C837 + C4260 * C903) *
              C5650 +
          (C4313 * C400 - C4472 * C321 - C4313 * C531 + C5673 * C595 +
           C4314 * C1541 - C4473 * C1461 - C4314 * C1689 + C5674 * C1763 +
           C4315 * C2291 - C4474 * C2233 - C4315 * C2401 + C4260 * C2456) *
              C5546) *
         C5467 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (-std::pow(Pi, 2.5) *
         (((C2037 * C78 - C2038 * C74 - C2037 * C79 + C5467 * C86) * C3288 +
           (C2037 * C632 - C2038 * C628 - C2037 * C633 + C5467 * C640) *
               C5572) *
              C314 +
          ((C2037 * C325 - C2038 * C321 - C2037 * C326 + C5467 * C333) * C3288 +
           (C2037 * C1463 - C2038 * C1461 - C2037 * C1464 + C5467 * C1467) *
               C5572) *
              C315 +
          ((C2037 * C329 - C2038 * C323 - C2037 * C330 + C5467 * C335) * C3288 +
           (C2037 * C3039 - C2038 * C3038 - C2037 * C3040 + C5467 * C3041) *
               C5572) *
              C316) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C1796 * C78 - C1797 * C74 - C1796 * C79 + C1791 * C86 + C1798 * C80 -
           C1799 * C75 - C1798 * C81 + C1792 * C87 + C1800 * C82 - C1801 * C76 -
           C1800 * C83 + C1793 * C88) *
              C3288 +
          (C1796 * C632 - C1797 * C628 - C1796 * C633 + C1791 * C640 +
           C1798 * C634 - C1799 * C629 - C1798 * C635 + C1792 * C641 +
           C1800 * C1200 - C1801 * C1199 - C1800 * C1201 + C1793 * C1202) *
              C5572) *
         C5497 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C2037 * C78 - C2038 * C74 - C2037 * C79 + C5467 * C86) * C3754 +
          (C2037 * C632 - C2038 * C628 - C2037 * C633 + C5467 * C640) * C3755 +
          (C2037 * C636 - C2038 * C630 - C2037 * C637 + C5467 * C642) * C3756 +
          (C2037 * C3759 - C2038 * C3758 - C2037 * C3760 + C5467 * C3761) *
              C3757) *
         C5497 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] += (-std::pow(Pi, 2.5) *
                   (((C314 * C109 - C363 * C74 + C315 * C366 - C364 * C321 +
                      C316 * C367 - C365 * C323) *
                         C2037 +
                     (C314 * C113 - C363 * C79 + C315 * C370 - C364 * C326 +
                      C316 * C371 - C365 * C330) *
                         C5467) *
                        C3288 +
                    ((C314 * C670 - C363 * C628 + C315 * C1503 - C364 * C1461 +
                      C316 * C3068 - C365 * C3038) *
                         C2037 +
                     (C314 * C674 - C363 * C633 + C315 * C1505 - C364 * C1464 +
                      C316 * C3069 - C365 * C3040) *
                         C5467) *
                        C5572) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C5497 * C109 - C108 * C74) * C1796 +
                     (C5497 * C113 - C108 * C79) * C1791 +
                     (C5497 * C110 - C108 * C75) * C1798 +
                     (C5497 * C114 - C108 * C81) * C1792 +
                     (C5497 * C111 - C108 * C76) * C1800 +
                     (C5497 * C115 - C108 * C83) * C1793) *
                        C3288 +
                    ((C5497 * C670 - C108 * C628) * C1796 +
                     (C5497 * C674 - C108 * C633) * C1791 +
                     (C5497 * C671 - C108 * C629) * C1798 +
                     (C5497 * C675 - C108 * C635) * C1792 +
                     (C5497 * C1229 - C108 * C1199) * C1800 +
                     (C5497 * C1230 - C108 * C1201) * C1793) *
                        C5572) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C5497 * C109 - C108 * C74) * C2037 +
                     (C5497 * C113 - C108 * C79) * C5467) *
                        C3754 +
                    ((C5497 * C670 - C108 * C628) * C2037 +
                     (C5497 * C674 - C108 * C633) * C5467) *
                        C3755 +
                    ((C5497 * C672 - C108 * C630) * C2037 +
                     (C5497 * C676 - C108 * C637) * C5467) *
                        C3756 +
                    ((C5497 * C3780 - C108 * C3758) * C2037 +
                     (C5497 * C3781 - C108 * C3760) * C5467) *
                        C3757) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (-std::pow(Pi, 2.5) *
         (((C3288 * C136 - C3342 * C74 + C5572 * C707 - C3343 * C628) * C2037 +
           (C3288 * C140 - C3342 * C79 + C5572 * C711 - C3343 * C633) * C5467) *
              C314 +
          ((C3288 * C400 - C3342 * C321 + C5572 * C1541 - C3343 * C1461) *
               C2037 +
           (C3288 * C404 - C3342 * C326 + C5572 * C1543 - C3343 * C1464) *
               C5467) *
              C315 +
          ((C3288 * C402 - C3342 * C323 + C5572 * C3096 - C3343 * C3038) *
               C2037 +
           (C3288 * C406 - C3342 * C330 + C5572 * C3097 - C3343 * C3040) *
               C5467) *
              C316) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C3288 * C136 - C3342 * C74 + C5572 * C707 - C3343 * C628) * C1796 +
          (C3288 * C140 - C3342 * C79 + C5572 * C711 - C3343 * C633) * C1791 +
          (C3288 * C137 - C3342 * C75 + C5572 * C709 - C3343 * C629) * C1798 +
          (C3288 * C141 - C3342 * C81 + C5572 * C713 - C3343 * C635) * C1792 +
          (C3288 * C138 - C3342 * C76 + C5572 * C1259 - C3343 * C1199) * C1800 +
          (C3288 * C142 - C3342 * C83 + C5572 * C1260 - C3343 * C1201) *
              C1793) *
         C5497 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C3754 * C136 - C3800 * C74 + C3755 * C707 - C3801 * C628 +
           C3756 * C708 - C3802 * C630 + C3757 * C3804 - C3803 * C3758) *
              C2037 +
          (C3754 * C140 - C3800 * C79 + C3755 * C711 - C3801 * C633 +
           C3756 * C712 - C3802 * C637 + C3757 * C3805 - C3803 * C3760) *
              C5467) *
         C5497 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] += (-std::pow(Pi, 2.5) *
                   (((C5467 * C78 - C2037 * C74) * C363 +
                     (C5467 * C166 - C2037 * C162) * C314 +
                     (C5467 * C325 - C2037 * C321) * C364 +
                     (C5467 * C438 - C2037 * C434) * C315 +
                     (C5467 * C329 - C2037 * C323) * C365 +
                     (C5467 * C440 - C2037 * C436) * C316) *
                        C3288 +
                    ((C5467 * C632 - C2037 * C628) * C363 +
                     (C5467 * C745 - C2037 * C741) * C314 +
                     (C5467 * C1463 - C2037 * C1461) * C364 +
                     (C5467 * C1581 - C2037 * C1579) * C315 +
                     (C5467 * C3039 - C2037 * C3038) * C365 +
                     (C5467 * C3125 - C2037 * C3124) * C316) *
                        C5572) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C1791 * C78 - C1796 * C74 + C1792 * C80 - C1798 * C75 +
                      C1793 * C82 - C1800 * C76) *
                         C108 +
                     (C1791 * C166 - C1796 * C162 + C1792 * C167 -
                      C1798 * C163 + C1793 * C168 - C1800 * C164) *
                         C5497) *
                        C3288 +
                    ((C1791 * C632 - C1796 * C628 + C1792 * C634 -
                      C1798 * C629 + C1793 * C1200 - C1800 * C1199) *
                         C108 +
                     (C1791 * C745 - C1796 * C741 + C1792 * C746 -
                      C1798 * C742 + C1793 * C1288 - C1800 * C1287) *
                         C5497) *
                        C5572) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C5467 * C78 - C2037 * C74) * C108 +
                     (C5467 * C166 - C2037 * C162) * C5497) *
                        C3754 +
                    ((C5467 * C632 - C2037 * C628) * C108 +
                     (C5467 * C745 - C2037 * C741) * C5497) *
                        C3755 +
                    ((C5467 * C636 - C2037 * C630) * C108 +
                     (C5467 * C747 - C2037 * C743) * C5497) *
                        C3756 +
                    ((C5467 * C3759 - C2037 * C3758) * C108 +
                     (C5467 * C3825 - C2037 * C3824) * C5497) *
                        C3757) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (-std::pow(Pi, 2.5) *
         ((C363 * C109 - C468 * C74 - C363 * C162 + C314 * C189 + C364 * C366 -
           C469 * C321 - C364 * C434 + C315 * C471 + C365 * C367 - C470 * C323 -
           C365 * C436 + C316 * C472) *
              C5467 * C3288 +
          (C363 * C670 - C468 * C628 - C363 * C741 + C314 * C775 +
           C364 * C1503 - C469 * C1461 - C364 * C1579 + C315 * C1617 +
           C365 * C3068 - C470 * C3038 - C365 * C3124 + C316 * C3152) *
              C5467 * C5572) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C108 * C109 - C188 * C74 - C108 * C162 + C5497 * C189) * C1791 +
           (C108 * C110 - C188 * C75 - C108 * C163 + C5497 * C190) * C1792 +
           (C108 * C111 - C188 * C76 - C108 * C164 + C5497 * C191) * C1793) *
              C3288 +
          ((C108 * C670 - C188 * C628 - C108 * C741 + C5497 * C775) * C1791 +
           (C108 * C671 - C188 * C629 - C108 * C742 + C5497 * C776) * C1792 +
           (C108 * C1229 - C188 * C1199 - C108 * C1287 + C5497 * C1315) *
               C1793) *
              C5572) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C108 * C109 - C188 * C74 - C108 * C162 + C5497 * C189) * C5467 *
              C3754 +
          (C108 * C670 - C188 * C628 - C108 * C741 + C5497 * C775) * C5467 *
              C3755 +
          (C108 * C672 - C188 * C630 - C108 * C743 + C5497 * C777) * C5467 *
              C3756 +
          (C108 * C3780 - C188 * C3758 - C108 * C3824 + C5497 * C3844) * C5467 *
              C3757) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (-std::pow(Pi, 2.5) *
         ((C3288 * C136 - C3342 * C74 + C5572 * C707 - C3343 * C628) * C363 +
          (C3288 * C211 - C3342 * C162 + C5572 * C805 - C3343 * C741) * C314 +
          (C3288 * C400 - C3342 * C321 + C5572 * C1541 - C3343 * C1461) * C364 +
          (C3288 * C501 - C3342 * C434 + C5572 * C1653 - C3343 * C1579) * C315 +
          (C3288 * C402 - C3342 * C323 + C5572 * C3096 - C3343 * C3038) * C365 +
          (C3288 * C502 - C3342 * C436 + C5572 * C3179 - C3343 * C3124) *
              C316) *
         C5467 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3288 * C136 - C3342 * C74 + C5572 * C707 - C3343 * C628) * C108 +
           (C3288 * C211 - C3342 * C162 + C5572 * C805 - C3343 * C741) *
               C5497) *
              C1791 +
          ((C3288 * C137 - C3342 * C75 + C5572 * C709 - C3343 * C629) * C108 +
           (C3288 * C212 - C3342 * C163 + C5572 * C807 - C3343 * C742) *
               C5497) *
              C1792 +
          ((C3288 * C138 - C3342 * C76 + C5572 * C1259 - C3343 * C1199) * C108 +
           (C3288 * C213 - C3342 * C164 + C5572 * C1342 - C3343 * C1287) *
               C5497) *
              C1793) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C3754 * C136 - C3800 * C74 + C3755 * C707 - C3801 * C628 +
           C3756 * C708 - C3802 * C630 + C3757 * C3804 - C3803 * C3758) *
              C108 +
          (C3754 * C211 - C3800 * C162 + C3755 * C805 - C3801 * C741 +
           C3756 * C806 - C3802 * C743 + C3757 * C3863 - C3803 * C3824) *
              C5497) *
         C5467 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezx[12] += (-std::pow(Pi, 2.5) *
                   (((C5467 * C78 - C2037 * C74) * C3342 +
                     (C5467 * C237 - C2037 * C233) * C3288 +
                     (C5467 * C632 - C2037 * C628) * C3343 +
                     (C5467 * C839 - C2037 * C835) * C5572) *
                        C314 +
                    ((C5467 * C325 - C2037 * C321) * C3342 +
                     (C5467 * C535 - C2037 * C531) * C3288 +
                     (C5467 * C1463 - C2037 * C1461) * C3343 +
                     (C5467 * C1691 - C2037 * C1689) * C5572) *
                        C315 +
                    ((C5467 * C329 - C2037 * C323) * C3342 +
                     (C5467 * C537 - C2037 * C533) * C3288 +
                     (C5467 * C3039 - C2037 * C3038) * C3343 +
                     (C5467 * C3207 - C2037 * C3206) * C5572) *
                        C316) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((C1791 * C78 - C1796 * C74 + C1792 * C80 - C1798 * C75 +
                     C1793 * C82 - C1800 * C76) *
                        C3342 +
                    (C1791 * C237 - C1796 * C233 + C1792 * C238 - C1798 * C234 +
                     C1793 * C239 - C1800 * C235) *
                        C3288 +
                    (C1791 * C632 - C1796 * C628 + C1792 * C634 - C1798 * C629 +
                     C1793 * C1200 - C1800 * C1199) *
                        C3343 +
                    (C1791 * C839 - C1796 * C835 + C1792 * C840 - C1798 * C836 +
                     C1793 * C1370 - C1800 * C1369) *
                        C5572) *
                   C5497 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((C5467 * C78 - C2037 * C74) * C3800 +
                    (C5467 * C237 - C2037 * C233) * C3754 +
                    (C5467 * C632 - C2037 * C628) * C3801 +
                    (C5467 * C839 - C2037 * C835) * C3755 +
                    (C5467 * C636 - C2037 * C630) * C3802 +
                    (C5467 * C841 - C2037 * C837) * C3756 +
                    (C5467 * C3759 - C2037 * C3758) * C3803 +
                    (C5467 * C3883 - C2037 * C3882) * C3757) *
                   C5497 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eezy[12] += (-std::pow(Pi, 2.5) *
                   ((C314 * C109 - C363 * C74 + C315 * C366 - C364 * C321 +
                     C316 * C367 - C365 * C323) *
                        C3342 +
                    (C314 * C259 - C363 * C233 + C315 * C565 - C364 * C531 +
                     C316 * C566 - C365 * C533) *
                        C3288 +
                    (C314 * C670 - C363 * C628 + C315 * C1503 - C364 * C1461 +
                     C316 * C3068 - C365 * C3038) *
                        C3343 +
                    (C314 * C869 - C363 * C835 + C315 * C1727 - C364 * C1689 +
                     C316 * C3234 - C365 * C3206) *
                        C5572) *
                   C5467 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C5497 * C109 - C108 * C74) * C3342 +
                     (C5497 * C259 - C108 * C233) * C3288 +
                     (C5497 * C670 - C108 * C628) * C3343 +
                     (C5497 * C869 - C108 * C835) * C5572) *
                        C1791 +
                    ((C5497 * C110 - C108 * C75) * C3342 +
                     (C5497 * C260 - C108 * C234) * C3288 +
                     (C5497 * C671 - C108 * C629) * C3343 +
                     (C5497 * C871 - C108 * C836) * C5572) *
                        C1792 +
                    ((C5497 * C111 - C108 * C76) * C3342 +
                     (C5497 * C261 - C108 * C235) * C3288 +
                     (C5497 * C1229 - C108 * C1199) * C3343 +
                     (C5497 * C1397 - C108 * C1369) * C5572) *
                        C1793) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((C5497 * C109 - C108 * C74) * C3800 +
                    (C5497 * C259 - C108 * C233) * C3754 +
                    (C5497 * C670 - C108 * C628) * C3801 +
                    (C5497 * C869 - C108 * C835) * C3755 +
                    (C5497 * C672 - C108 * C630) * C3802 +
                    (C5497 * C870 - C108 * C837) * C3756 +
                    (C5497 * C3780 - C108 * C3758) * C3803 +
                    (C5497 * C3902 - C108 * C3882) * C3757) *
                   C5467 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (-std::pow(Pi, 2.5) *
         ((C3342 * C136 - C3500 * C74 - C3342 * C233 + C3288 * C282 +
           C3343 * C707 - C3501 * C628 - C3343 * C835 + C5572 * C902) *
              C314 +
          (C3342 * C400 - C3500 * C321 - C3342 * C531 + C3288 * C595 +
           C3343 * C1541 - C3501 * C1461 - C3343 * C1689 + C5572 * C1763) *
              C315 +
          (C3342 * C402 - C3500 * C323 - C3342 * C533 + C3288 * C596 +
           C3343 * C3096 - C3501 * C3038 - C3343 * C3206 + C5572 * C3261) *
              C316) *
         C5467 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C3342 * C136 - C3500 * C74 - C3342 * C233 + C3288 * C282 +
           C3343 * C707 - C3501 * C628 - C3343 * C835 + C5572 * C902) *
              C5497 * C1791 +
          (C3342 * C137 - C3500 * C75 - C3342 * C234 + C3288 * C283 +
           C3343 * C709 - C3501 * C629 - C3343 * C836 + C5572 * C904) *
              C5497 * C1792 +
          (C3342 * C138 - C3500 * C76 - C3342 * C235 + C3288 * C284 +
           C3343 * C1259 - C3501 * C1199 - C3343 * C1369 + C5572 * C1426) *
              C5497 * C1793) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (C3800 * C136 - C3921 * C74 - C3800 * C233 + C3754 * C282 +
          C3801 * C707 - C3922 * C628 - C3801 * C835 + C3755 * C902 +
          C3802 * C708 - C3923 * C630 - C3802 * C837 + C3756 * C903 +
          C3803 * C3804 - C3924 * C3758 - C3803 * C3882 + C3757 * C3925) *
         C5497 * C5467 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C4747 * C78 - C2489 * C74 - C4747 * C79 + C5640 * C86 + C4740 * C80 -
           C2491 * C75 - C4740 * C81 + C5472 * C87) *
              C5673 +
          (C4747 * C632 - C2489 * C628 - C4747 * C633 + C5640 * C640 +
           C4740 * C634 - C2491 * C629 - C4740 * C635 + C5472 * C641) *
              C5674 +
          (C4747 * C636 - C2489 * C630 - C4747 * C637 + C5640 * C642 +
           C4740 * C638 - C2491 * C631 - C4740 * C639 + C5472 * C643) *
              C4260) *
         C5497 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexy[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C5497 * C109 - C108 * C74) * C4747 +
                     (C5497 * C113 - C108 * C79) * C5640 +
                     (C5497 * C110 - C108 * C75) * C4740 +
                     (C5497 * C114 - C108 * C81) * C5472) *
                        C5673 +
                    ((C5497 * C670 - C108 * C628) * C4747 +
                     (C5497 * C674 - C108 * C633) * C5640 +
                     (C5497 * C671 - C108 * C629) * C4740 +
                     (C5497 * C675 - C108 * C635) * C5472) *
                        C5674 +
                    ((C5497 * C672 - C108 * C630) * C4747 +
                     (C5497 * C676 - C108 * C637) * C5640 +
                     (C5497 * C673 - C108 * C631) * C4740 +
                     (C5497 * C677 - C108 * C639) * C5472) *
                        C4260) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eexz[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((C5673 * C136 - C4313 * C74 + C5674 * C707 - C4314 * C628 +
                     C4260 * C708 - C4315 * C630) *
                        C4747 +
                    (C5673 * C140 - C4313 * C79 + C5674 * C711 - C4314 * C633 +
                     C4260 * C712 - C4315 * C637) *
                        C5640 +
                    (C5673 * C137 - C4313 * C75 + C5674 * C709 - C4314 * C629 +
                     C4260 * C710 - C4315 * C631) *
                        C4740 +
                    (C5673 * C141 - C4313 * C81 + C5674 * C713 - C4314 * C635 +
                     C4260 * C714 - C4315 * C639) *
                        C5472) *
                   C5497 * C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5640 * C78 - C4747 * C74 + C5472 * C80 - C4740 * C75) * C108 +
           (C5640 * C166 - C4747 * C162 + C5472 * C167 - C4740 * C163) *
               C5497) *
              C5673 +
          ((C5640 * C632 - C4747 * C628 + C5472 * C634 - C4740 * C629) * C108 +
           (C5640 * C745 - C4747 * C741 + C5472 * C746 - C4740 * C742) *
               C5497) *
              C5674 +
          ((C5640 * C636 - C4747 * C630 + C5472 * C638 - C4740 * C631) * C108 +
           (C5640 * C747 - C4747 * C743 + C5472 * C748 - C4740 * C744) *
               C5497) *
              C4260) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C108 * C109 - C188 * C74 - C108 * C162 + C5497 * C189) * C5640 +
           (C108 * C110 - C188 * C75 - C108 * C163 + C5497 * C190) * C5472) *
              C5673 +
          ((C108 * C670 - C188 * C628 - C108 * C741 + C5497 * C775) * C5640 +
           (C108 * C671 - C188 * C629 - C108 * C742 + C5497 * C776) * C5472) *
              C5674 +
          ((C108 * C672 - C188 * C630 - C108 * C743 + C5497 * C777) * C5640 +
           (C108 * C673 - C188 * C631 - C108 * C744 + C5497 * C778) * C5472) *
              C4260) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyz[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C5673 * C136 - C4313 * C74 + C5674 * C707 - C4314 * C628 +
                      C4260 * C708 - C4315 * C630) *
                         C108 +
                     (C5673 * C211 - C4313 * C162 + C5674 * C805 -
                      C4314 * C741 + C4260 * C806 - C4315 * C743) *
                         C5497) *
                        C5640 +
                    ((C5673 * C137 - C4313 * C75 + C5674 * C709 - C4314 * C629 +
                      C4260 * C710 - C4315 * C631) *
                         C108 +
                     (C5673 * C212 - C4313 * C163 + C5674 * C807 -
                      C4314 * C742 + C4260 * C808 - C4315 * C744) *
                         C5497) *
                        C5472) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C5640 * C78 - C4747 * C74 + C5472 * C80 - C4740 * C75) * C4313 +
          (C5640 * C237 - C4747 * C233 + C5472 * C238 - C4740 * C234) * C5673 +
          (C5640 * C632 - C4747 * C628 + C5472 * C634 - C4740 * C629) * C4314 +
          (C5640 * C839 - C4747 * C835 + C5472 * C840 - C4740 * C836) * C5674 +
          (C5640 * C636 - C4747 * C630 + C5472 * C638 - C4740 * C631) * C4315 +
          (C5640 * C841 - C4747 * C837 + C5472 * C842 - C4740 * C838) * C4260) *
         C5497 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C5497 * C109 - C108 * C74) * C4313 +
                     (C5497 * C259 - C108 * C233) * C5673 +
                     (C5497 * C670 - C108 * C628) * C4314 +
                     (C5497 * C869 - C108 * C835) * C5674 +
                     (C5497 * C672 - C108 * C630) * C4315 +
                     (C5497 * C870 - C108 * C837) * C4260) *
                        C5640 +
                    ((C5497 * C110 - C108 * C75) * C4313 +
                     (C5497 * C260 - C108 * C234) * C5673 +
                     (C5497 * C671 - C108 * C629) * C4314 +
                     (C5497 * C871 - C108 * C836) * C5674 +
                     (C5497 * C673 - C108 * C631) * C4315 +
                     (C5497 * C872 - C108 * C838) * C4260) *
                        C5472) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C4313 * C136 - C4472 * C74 - C4313 * C233 + C5673 * C282 +
           C4314 * C707 - C4473 * C628 - C4314 * C835 + C5674 * C902 +
           C4315 * C708 - C4474 * C630 - C4315 * C837 + C4260 * C903) *
              C5497 * C5640 +
          (C4313 * C137 - C4472 * C75 - C4313 * C234 + C5673 * C283 +
           C4314 * C709 - C4473 * C629 - C4314 * C836 + C5674 * C904 +
           C4315 * C710 - C4474 * C631 - C4315 * C838 + C4260 * C905) *
              C5497 * C5472) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1796 * C78 - C1797 * C74 - C1796 * C79 + C1791 * C86 + C1798 * C80 -
           C1799 * C75 - C1798 * C81 + C1792 * C87 + C1800 * C82 - C1801 * C76 -
           C1800 * C83 + C1793 * C88) *
              C3288 +
          (C1796 * C632 - C1797 * C628 - C1796 * C633 + C1791 * C640 +
           C1798 * C634 - C1799 * C629 - C1798 * C635 + C1792 * C641 +
           C1800 * C1200 - C1801 * C1199 - C1800 * C1201 + C1793 * C1202) *
              C5572) *
         C5497 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2037 * C78 - C2038 * C74 - C2037 * C79 + C5467 * C86) * C3288 +
           (C2037 * C632 - C2038 * C628 - C2037 * C633 + C5467 * C640) *
               C5572) *
              C314 +
          ((C2037 * C325 - C2038 * C321 - C2037 * C326 + C5467 * C333) * C3288 +
           (C2037 * C1463 - C2038 * C1461 - C2037 * C1464 + C5467 * C1467) *
               C5572) *
              C315 +
          ((C2037 * C329 - C2038 * C323 - C2037 * C330 + C5467 * C335) * C3288 +
           (C2037 * C3039 - C2038 * C3038 - C2037 * C3040 + C5467 * C3041) *
               C5572) *
              C316) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C5497 * C109 - C108 * C74) * C1796 +
                     (C5497 * C113 - C108 * C79) * C1791 +
                     (C5497 * C110 - C108 * C75) * C1798 +
                     (C5497 * C114 - C108 * C81) * C1792 +
                     (C5497 * C111 - C108 * C76) * C1800 +
                     (C5497 * C115 - C108 * C83) * C1793) *
                        C3288 +
                    ((C5497 * C670 - C108 * C628) * C1796 +
                     (C5497 * C674 - C108 * C633) * C1791 +
                     (C5497 * C671 - C108 * C629) * C1798 +
                     (C5497 * C675 - C108 * C635) * C1792 +
                     (C5497 * C1229 - C108 * C1199) * C1800 +
                     (C5497 * C1230 - C108 * C1201) * C1793) *
                        C5572) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C314 * C109 - C363 * C74 + C315 * C366 - C364 * C321 +
                      C316 * C367 - C365 * C323) *
                         C2037 +
                     (C314 * C113 - C363 * C79 + C315 * C370 - C364 * C326 +
                      C316 * C371 - C365 * C330) *
                         C5467) *
                        C3288 +
                    ((C314 * C670 - C363 * C628 + C315 * C1503 - C364 * C1461 +
                      C316 * C3068 - C365 * C3038) *
                         C2037 +
                     (C314 * C674 - C363 * C633 + C315 * C1505 - C364 * C1464 +
                      C316 * C3069 - C365 * C3040) *
                         C5467) *
                        C5572) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3288 * C136 - C3342 * C74 + C5572 * C707 - C3343 * C628) * C1796 +
          (C3288 * C140 - C3342 * C79 + C5572 * C711 - C3343 * C633) * C1791 +
          (C3288 * C137 - C3342 * C75 + C5572 * C709 - C3343 * C629) * C1798 +
          (C3288 * C141 - C3342 * C81 + C5572 * C713 - C3343 * C635) * C1792 +
          (C3288 * C138 - C3342 * C76 + C5572 * C1259 - C3343 * C1199) * C1800 +
          (C3288 * C142 - C3342 * C83 + C5572 * C1260 - C3343 * C1201) *
              C1793) *
         C5497 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3288 * C136 - C3342 * C74 + C5572 * C707 - C3343 * C628) * C2037 +
           (C3288 * C140 - C3342 * C79 + C5572 * C711 - C3343 * C633) * C5467) *
              C314 +
          ((C3288 * C400 - C3342 * C321 + C5572 * C1541 - C3343 * C1461) *
               C2037 +
           (C3288 * C404 - C3342 * C326 + C5572 * C1543 - C3343 * C1464) *
               C5467) *
              C315 +
          ((C3288 * C402 - C3342 * C323 + C5572 * C3096 - C3343 * C3038) *
               C2037 +
           (C3288 * C406 - C3342 * C330 + C5572 * C3097 - C3343 * C3040) *
               C5467) *
              C316) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyx[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1791 * C78 - C1796 * C74 + C1792 * C80 - C1798 * C75 +
                      C1793 * C82 - C1800 * C76) *
                         C108 +
                     (C1791 * C166 - C1796 * C162 + C1792 * C167 -
                      C1798 * C163 + C1793 * C168 - C1800 * C164) *
                         C5497) *
                        C3288 +
                    ((C1791 * C632 - C1796 * C628 + C1792 * C634 -
                      C1798 * C629 + C1793 * C1200 - C1800 * C1199) *
                         C108 +
                     (C1791 * C745 - C1796 * C741 + C1792 * C746 -
                      C1798 * C742 + C1793 * C1288 - C1800 * C1287) *
                         C5497) *
                        C5572) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C5467 * C78 - C2037 * C74) * C363 +
                     (C5467 * C166 - C2037 * C162) * C314 +
                     (C5467 * C325 - C2037 * C321) * C364 +
                     (C5467 * C438 - C2037 * C434) * C315 +
                     (C5467 * C329 - C2037 * C323) * C365 +
                     (C5467 * C440 - C2037 * C436) * C316) *
                        C3288 +
                    ((C5467 * C632 - C2037 * C628) * C363 +
                     (C5467 * C745 - C2037 * C741) * C314 +
                     (C5467 * C1463 - C2037 * C1461) * C364 +
                     (C5467 * C1581 - C2037 * C1579) * C315 +
                     (C5467 * C3039 - C2037 * C3038) * C365 +
                     (C5467 * C3125 - C2037 * C3124) * C316) *
                        C5572) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C108 * C109 - C188 * C74 - C108 * C162 + C5497 * C189) * C1791 +
           (C108 * C110 - C188 * C75 - C108 * C163 + C5497 * C190) * C1792 +
           (C108 * C111 - C188 * C76 - C108 * C164 + C5497 * C191) * C1793) *
              C3288 +
          ((C108 * C670 - C188 * C628 - C108 * C741 + C5497 * C775) * C1791 +
           (C108 * C671 - C188 * C629 - C108 * C742 + C5497 * C776) * C1792 +
           (C108 * C1229 - C188 * C1199 - C108 * C1287 + C5497 * C1315) *
               C1793) *
              C5572) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C363 * C109 - C468 * C74 - C363 * C162 + C314 * C189 + C364 * C366 -
           C469 * C321 - C364 * C434 + C315 * C471 + C365 * C367 - C470 * C323 -
           C365 * C436 + C316 * C472) *
              C5467 * C3288 +
          (C363 * C670 - C468 * C628 - C363 * C741 + C314 * C775 +
           C364 * C1503 - C469 * C1461 - C364 * C1579 + C315 * C1617 +
           C365 * C3068 - C470 * C3038 - C365 * C3124 + C316 * C3152) *
              C5467 * C5572) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3288 * C136 - C3342 * C74 + C5572 * C707 - C3343 * C628) * C108 +
           (C3288 * C211 - C3342 * C162 + C5572 * C805 - C3343 * C741) *
               C5497) *
              C1791 +
          ((C3288 * C137 - C3342 * C75 + C5572 * C709 - C3343 * C629) * C108 +
           (C3288 * C212 - C3342 * C163 + C5572 * C807 - C3343 * C742) *
               C5497) *
              C1792 +
          ((C3288 * C138 - C3342 * C76 + C5572 * C1259 - C3343 * C1199) * C108 +
           (C3288 * C213 - C3342 * C164 + C5572 * C1342 - C3343 * C1287) *
               C5497) *
              C1793) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3288 * C136 - C3342 * C74 + C5572 * C707 - C3343 * C628) * C363 +
          (C3288 * C211 - C3342 * C162 + C5572 * C805 - C3343 * C741) * C314 +
          (C3288 * C400 - C3342 * C321 + C5572 * C1541 - C3343 * C1461) * C364 +
          (C3288 * C501 - C3342 * C434 + C5572 * C1653 - C3343 * C1579) * C315 +
          (C3288 * C402 - C3342 * C323 + C5572 * C3096 - C3343 * C3038) * C365 +
          (C3288 * C502 - C3342 * C436 + C5572 * C3179 - C3343 * C3124) *
              C316) *
         C5467 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezx[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C1791 * C78 - C1796 * C74 + C1792 * C80 - C1798 * C75 +
                     C1793 * C82 - C1800 * C76) *
                        C3342 +
                    (C1791 * C237 - C1796 * C233 + C1792 * C238 - C1798 * C234 +
                     C1793 * C239 - C1800 * C235) *
                        C3288 +
                    (C1791 * C632 - C1796 * C628 + C1792 * C634 - C1798 * C629 +
                     C1793 * C1200 - C1800 * C1199) *
                        C3343 +
                    (C1791 * C839 - C1796 * C835 + C1792 * C840 - C1798 * C836 +
                     C1793 * C1370 - C1800 * C1369) *
                        C5572) *
                   C5497 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C5467 * C78 - C2037 * C74) * C3342 +
                     (C5467 * C237 - C2037 * C233) * C3288 +
                     (C5467 * C632 - C2037 * C628) * C3343 +
                     (C5467 * C839 - C2037 * C835) * C5572) *
                        C314 +
                    ((C5467 * C325 - C2037 * C321) * C3342 +
                     (C5467 * C535 - C2037 * C531) * C3288 +
                     (C5467 * C1463 - C2037 * C1461) * C3343 +
                     (C5467 * C1691 - C2037 * C1689) * C5572) *
                        C315 +
                    ((C5467 * C329 - C2037 * C323) * C3342 +
                     (C5467 * C537 - C2037 * C533) * C3288 +
                     (C5467 * C3039 - C2037 * C3038) * C3343 +
                     (C5467 * C3207 - C2037 * C3206) * C5572) *
                        C316) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eezy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C5497 * C109 - C108 * C74) * C3342 +
                     (C5497 * C259 - C108 * C233) * C3288 +
                     (C5497 * C670 - C108 * C628) * C3343 +
                     (C5497 * C869 - C108 * C835) * C5572) *
                        C1791 +
                    ((C5497 * C110 - C108 * C75) * C3342 +
                     (C5497 * C260 - C108 * C234) * C3288 +
                     (C5497 * C671 - C108 * C629) * C3343 +
                     (C5497 * C871 - C108 * C836) * C5572) *
                        C1792 +
                    ((C5497 * C111 - C108 * C76) * C3342 +
                     (C5497 * C261 - C108 * C235) * C3288 +
                     (C5497 * C1229 - C108 * C1199) * C3343 +
                     (C5497 * C1397 - C108 * C1369) * C5572) *
                        C1793) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C314 * C109 - C363 * C74 + C315 * C366 - C364 * C321 +
                     C316 * C367 - C365 * C323) *
                        C3342 +
                    (C314 * C259 - C363 * C233 + C315 * C565 - C364 * C531 +
                     C316 * C566 - C365 * C533) *
                        C3288 +
                    (C314 * C670 - C363 * C628 + C315 * C1503 - C364 * C1461 +
                     C316 * C3068 - C365 * C3038) *
                        C3343 +
                    (C314 * C869 - C363 * C835 + C315 * C1727 - C364 * C1689 +
                     C316 * C3234 - C365 * C3206) *
                        C5572) *
                   C5467 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3342 * C136 - C3500 * C74 - C3342 * C233 + C3288 * C282 +
           C3343 * C707 - C3501 * C628 - C3343 * C835 + C5572 * C902) *
              C5497 * C1791 +
          (C3342 * C137 - C3500 * C75 - C3342 * C234 + C3288 * C283 +
           C3343 * C709 - C3501 * C629 - C3343 * C836 + C5572 * C904) *
              C5497 * C1792 +
          (C3342 * C138 - C3500 * C76 - C3342 * C235 + C3288 * C284 +
           C3343 * C1259 - C3501 * C1199 - C3343 * C1369 + C5572 * C1426) *
              C5497 * C1793) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3342 * C136 - C3500 * C74 - C3342 * C233 + C3288 * C282 +
           C3343 * C707 - C3501 * C628 - C3343 * C835 + C5572 * C902) *
              C314 +
          (C3342 * C400 - C3500 * C321 - C3342 * C531 + C3288 * C595 +
           C3343 * C1541 - C3501 * C1461 - C3343 * C1689 + C5572 * C1763) *
              C315 +
          (C3342 * C402 - C3500 * C323 - C3342 * C533 + C3288 * C596 +
           C3343 * C3096 - C3501 * C3038 - C3343 * C3206 + C5572 * C3261) *
              C316) *
         C5467 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
}
