/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_pdss_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1200_11(const double ae,
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
    const double C4829 = 0 * ae;
    const double C4828 = ae * be;
    const double C4827 = 0 * be;
    const double C4826 = xA - xB;
    const double C4825 = ae + be;
    const double C4824 = 0 * be;
    const double C4889 = yA - yB;
    const double C4892 = zA - zB;
    const double C4907 = 0 * be;
    const double C4933 = 0 * be;
    const double C5014 = 0 * ae;
    const double C5010 = 0 * be;
    const double C5085 = 0 * ae;
    const double C5081 = 0 * be;
    const double C5133 = p + q;
    const double C5132 = p * q;
    const double C5138 = xP - xQ;
    const double C5137 = bs[2];
    const double C5145 = std::pow(ae, 2);
    const double C5143 = bs[3];
    const double C5156 = bs[4];
    const double C5176 = yP - yQ;
    const double C5190 = zP - zQ;
    const double C74 = bs[0];
    const double C5706 = ce + de;
    const double C5705 = ce * de;
    const double C4835 = 2 * C4828;
    const double C4832 = -2 * C4827;
    const double C4834 = C4828 * C4826;
    const double C4833 = C4826 * C4827;
    const double C5523 = C4826 * be;
    const double C5522 = C4826 * ae;
    const double C5521 = std::pow(C4826, 2);
    const double C4836 = C4829 / C4825;
    const double C4831 = 2 * C4825;
    const double C4830 = std::pow(C4825, 2);
    const double C4908 = C4828 * C4889;
    const double C5553 = std::pow(C4889, 2);
    const double C5602 = C4889 * be;
    const double C5601 = C4889 * ae;
    const double C4934 = C4828 * C4892;
    const double C5564 = std::pow(C4892, 2);
    const double C5628 = C4892 * be;
    const double C5627 = C4892 * ae;
    const double C5011 = C4889 * C4907;
    const double C5035 = -2 * C4907;
    const double C5082 = C4892 * C4933;
    const double C5106 = -2 * C4933;
    const double C5019 = C5014 / C4825;
    const double C5090 = C5085 / C4825;
    const double C5134 = 2 * C5132;
    const double C5146 = C5138 * ae;
    const double C5142 = std::pow(C5138, 2);
    const double C5179 = C5176 * ae;
    const double C5178 = C5138 * C5176;
    const double C5205 = C5176 * C5138;
    const double C5213 = std::pow(C5176, 2);
    const double C5193 = C5190 * ae;
    const double C5192 = C5138 * C5190;
    const double C5222 = C5176 * C5190;
    const double C5230 = C5190 * C5138;
    const double C5238 = C5190 * C5176;
    const double C5246 = std::pow(C5190, 2);
    const double C63 = std::exp(-(std::pow(zC - zD, 2) * C5705) / C5706);
    const double C64 = std::exp(-(std::pow(yC - yD, 2) * C5705) / C5706);
    const double C65 = std::exp(-(std::pow(xC - xD, 2) * C5705) / C5706);
    const double C4838 = ae * C4832;
    const double C4839 = C4833 / C4825;
    const double C5524 = C5521 * C4828;
    const double C5531 = std::pow(C4831, -1);
    const double C5708 = std::pow(C4831, -2);
    const double C4840 = 2 * C4830;
    const double C4837 = C4830 * C4831;
    const double C5704 = 4 * C4830;
    const double C5554 = C5553 * C4828;
    const double C5565 = C5564 * C4828;
    const double C5016 = C5011 / C4825;
    const double C5038 = ae * C5035;
    const double C5087 = C5082 / C4825;
    const double C5109 = ae * C5106;
    const double C5136 = C5134 / C5133;
    const double C82 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C5134 / C5133, 2) -
          (bs[1] * C5134) / C5133) *
         std::pow(ae, 2)) /
        C4830;
    const double C75 = -(C5138 * bs[1] * C5134) / C5133;
    const double C321 = -(C5176 * bs[1] * C5134) / C5133;
    const double C632 = -(C5190 * bs[1] * C5134) / C5133;
    const double C5148 = C5143 * C5146;
    const double C5159 = C5156 * C5146;
    const double C78 = (-(bs[1] * C5146 * C5134) / C5133) / C4825;
    const double C5158 = C5142 * C5156;
    const double C5181 = C5143 * C5179;
    const double C5185 = C5156 * C5179;
    const double C109 = (-(bs[1] * C5179 * C5134) / C5133) / C4825;
    const double C5180 = C5178 * C5145;
    const double C5206 = C5205 * C5145;
    const double C5215 = C5213 * C5156;
    const double C5195 = C5143 * C5193;
    const double C5199 = C5156 * C5193;
    const double C136 = (-(bs[1] * C5193 * C5134) / C5133) / C4825;
    const double C5194 = C5192 * C5145;
    const double C5223 = C5222 * C5145;
    const double C5231 = C5230 * C5145;
    const double C5239 = C5238 * C5145;
    const double C5248 = C5246 * C5156;
    const double C4842 = 0 - C4839;
    const double C5525 = C5524 / C4825;
    const double C4846 = C4827 / C4840;
    const double C4843 = C4824 / C4840;
    const double C5013 = C4907 / C4840;
    const double C5017 = C5010 / C4840;
    const double C5084 = C4933 / C4840;
    const double C5088 = C5081 / C4840;
    const double C5555 = C5554 / C4825;
    const double C5566 = C5565 / C4825;
    const double C5020 = 0 - C5016;
    const double C5091 = 0 - C5087;
    const double C5139 = std::pow(C5136, 2);
    const double C5144 = -C5136;
    const double C5157 = std::pow(C5136, 4);
    const double C5184 = C5156 * C5180;
    const double C5208 = C5156 * C5206;
    const double C5198 = C5156 * C5194;
    const double C5225 = C5156 * C5223;
    const double C5233 = C5156 * C5231;
    const double C5241 = C5156 * C5239;
    const double C4848 = C4842 * ae;
    const double C5526 = -C5525;
    const double C5556 = -C5555;
    const double C5567 = -C5566;
    const double C5023 = C5020 * ae;
    const double C5094 = C5091 * ae;
    const double C5141 = C5137 * C5139;
    const double C83 = (2 * ae * C5139 * C5137 * C5138 * ae +
                        C5138 *
                            (C5137 * C5139 +
                             std::pow(C5138, 2) * bs[3] * std::pow(-C5136, 3)) *
                            std::pow(ae, 2)) /
                       C4830;
    const double C113 = (C5139 * C5137 * C5138 * (yP - yQ) * C5145) / C4830;
    const double C140 = (C5139 * C5137 * C5138 * (zP - zQ) * C5145) / C4830;
    const double C162 = (C5139 * C5137 * C5176 * C5138 * C5145) / C4830;
    const double C185 =
        ((std::pow(C5176, 2) * C5137 * C5139 - (bs[1] * C5134) / C5133) *
         C5145) /
        C4830;
    const double C211 = (C5139 * C5137 * C5176 * C5190 * C5145) / C4830;
    const double C233 = (C5139 * C5137 * C5190 * C5138 * C5145) / C4830;
    const double C255 = (C5139 * C5137 * C5190 * C5176 * C5145) / C4830;
    const double C278 =
        ((std::pow(C5190, 2) * C5137 * C5139 - (bs[1] * C5134) / C5133) *
         C5145) /
        C4830;
    const double C79 = (C5138 * C5139 * C5137 * C5146) / C4825 -
                       (ae * bs[1] * C5134) / (C5133 * C4825);
    const double C110 = (C5138 * C5139 * C5137 * C5179) / C4825;
    const double C137 = (C5138 * C5139 * C5137 * C5193) / C4825;
    const double C325 = (C5176 * C5139 * C5137 * C5146) / C4825;
    const double C368 = (C5176 * C5139 * C5137 * C5179) / C4825 -
                        (ae * bs[1] * C5134) / (C5133 * C4825);
    const double C402 = (C5176 * C5139 * C5137 * C5193) / C4825;
    const double C636 = (C5190 * C5139 * C5137 * C5146) / C4825;
    const double C674 = (C5190 * C5139 * C5137 * C5179) / C4825;
    const double C711 = (C5190 * C5139 * C5137 * C5193) / C4825 -
                        (ae * bs[1] * C5134) / (C5133 * C4825);
    const double C5147 = std::pow(C5144, 3);
    const double C5163 = C5157 * C5159;
    const double C5162 = C5158 * C5157;
    const double C5187 = C5157 * C5185;
    const double C5201 = C5157 * C5199;
    const double C5216 = C5215 * C5157;
    const double C5249 = C5248 * C5157;
    const double C5186 = C5157 * C5184;
    const double C5209 = C5157 * C5208;
    const double C5200 = C5157 * C5198;
    const double C5226 = C5157 * C5225;
    const double C5234 = C5157 * C5233;
    const double C5242 = C5157 * C5241;
    const double C4852 = C4848 / C4825;
    const double C5527 = std::exp(C5526);
    const double C5557 = std::exp(C5556);
    const double C5568 = std::exp(C5567);
    const double C5024 = C5023 / C4825;
    const double C5095 = C5094 / C4825;
    const double C5149 = C5141 * ae;
    const double C76 = C5141 * C5142 - (bs[1] * C5134) / C5133;
    const double C322 = C5176 * C5138 * C5141;
    const double C323 = C5141 * C5213 - (bs[1] * C5134) / C5133;
    const double C633 = C5190 * C5138 * C5141;
    const double C634 = C5141 * C5246 - (bs[1] * C5134) / C5133;
    const double C1484 = C5190 * C5176 * C5141;
    const double C5150 = C5147 * C5148;
    const double C5155 = C5143 * C5147;
    const double C5182 = C5147 * C5181;
    const double C5196 = C5147 * C5195;
    const double C114 = (ae * C5139 * C5137 * C5176 * ae +
                         C5138 * C5147 * C5143 * C5138 * C5176 * C5145) /
                        C4830;
    const double C141 = (ae * C5139 * C5137 * C5190 * ae +
                         C5138 * C5147 * C5143 * C5138 * C5190 * C5145) /
                        C4830;
    const double C163 = (ae * C5139 * C5137 * C5179 +
                         C5138 * C5147 * C5143 * C5176 * C5138 * C5145) /
                        C4830;
    const double C186 =
        (C5138 * (C5141 + std::pow(C5176, 2) * C5143 * C5147) * C5145) / C4830;
    const double C212 = (C5138 * C5147 * C5143 * C5176 * C5190 * C5145) / C4830;
    const double C213 =
        (C5147 * C5143 * C5223 + C5157 * C5156 * C5223 * C5142) / C4830;
    const double C234 = (ae * C5139 * C5137 * C5193 +
                         C5138 * C5147 * C5143 * C5190 * C5138 * C5145) /
                        C4830;
    const double C256 = (C5138 * C5147 * C5143 * C5190 * C5176 * C5145) / C4830;
    const double C257 =
        (C5147 * C5143 * C5239 + C5157 * C5156 * C5239 * C5142) / C4830;
    const double C279 =
        (C5138 * (C5141 + std::pow(C5190, 2) * C5143 * C5147) * C5145) / C4830;
    const double C329 =
        (C5176 * (C5141 + C5142 * C5143 * C5147) * C5145) / C4830;
    const double C372 =
        (ae * C5139 * C5137 * C5146 + C5176 * C5147 * C5143 * C5180) / C4830;
    const double C406 = (C5176 * C5147 * C5143 * C5194) / C4830;
    const double C436 =
        (ae * C5139 * C5137 * C5146 + C5176 * C5147 * C5143 * C5206) / C4830;
    const double C469 = (2 * ae * C5139 * C5137 * C5179 +
                         C5176 * (C5141 + C5213 * C5143 * C5147) * C5145) /
                        C4830;
    const double C505 =
        (ae * C5139 * C5137 * C5193 + C5176 * C5147 * C5143 * C5223) / C4830;
    const double C535 = (C5176 * C5147 * C5143 * C5231) / C4830;
    const double C565 =
        (ae * C5139 * C5137 * C5193 + C5176 * C5147 * C5143 * C5239) / C4830;
    const double C595 =
        (C5176 * (C5141 + C5246 * C5143 * C5147) * C5145) / C4830;
    const double C640 =
        (C5190 * (C5141 + C5142 * C5143 * C5147) * C5145) / C4830;
    const double C678 = (C5190 * C5147 * C5143 * C5180) / C4830;
    const double C715 =
        (ae * C5139 * C5137 * C5146 + C5190 * C5147 * C5143 * C5194) / C4830;
    const double C745 = (C5190 * C5147 * C5143 * C5206) / C4830;
    const double C775 =
        (C5190 * (C5141 + C5213 * C5143 * C5147) * C5145) / C4830;
    const double C809 =
        (ae * C5139 * C5137 * C5179 + C5190 * C5147 * C5143 * C5223) / C4830;
    const double C839 =
        (ae * C5139 * C5137 * C5146 + C5190 * C5147 * C5143 * C5231) / C4830;
    const double C869 =
        (ae * C5139 * C5137 * C5179 + C5190 * C5147 * C5143 * C5239) / C4830;
    const double C902 = (2 * ae * C5139 * C5137 * C5193 +
                         C5190 * (C5141 + C5246 * C5143 * C5147) * C5145) /
                        C4830;
    const double C5166 = C5138 * C5163;
    const double C5399 = C5176 * C5163;
    const double C1489 =
        (2 * ae * C5190 * C5176 * C5163 +
         C5138 * C5190 * C5176 *
             (C5156 * C5157 + C5142 * bs[5] * std::pow(C5144, 5)) * C5145) /
        C4830;
    const double C5275 = C5138 * C5187;
    const double C5383 = C5176 * C5187;
    const double C5283 = C5138 * C5201;
    const double C5406 = C5176 * C5201;
    const double C5430 = C5190 * C5201;
    const double C680 = (C5147 * C5143 * C5180 + C5186 * C5246) / C4830;
    const double C3871 =
        (2 * C5190 * C5186 +
         C5190 * (C5186 + std::pow(C5144, 5) * bs[5] * C5180 * C5246)) /
        C4830;
    const double C747 = (C5147 * C5143 * C5206 + C5209 * C5246) / C4830;
    const double C3914 =
        (2 * C5190 * C5209 +
         C5190 * (C5209 + std::pow(C5144, 5) * bs[5] * C5206 * C5246)) /
        C4830;
    const double C408 = (C5147 * C5143 * C5194 + C5200 * C5213) / C4830;
    const double C2128 =
        (2 * C5176 * C5200 +
         C5176 * (C5200 + std::pow(C5144, 5) * bs[5] * C5194 * C5213)) /
        C4830;
    const double C214 =
        (2 * C5138 * C5226 +
         C5138 * (C5226 + std::pow(C5144, 5) * bs[5] * C5223 * C5142)) /
        C4830;
    const double C537 = (C5147 * C5143 * C5231 + C5234 * C5213) / C4830;
    const double C2212 =
        (2 * C5176 * C5234 +
         C5176 * (C5234 + std::pow(C5144, 5) * bs[5] * C5231 * C5213)) /
        C4830;
    const double C258 =
        (2 * C5138 * C5242 +
         C5138 * (C5242 + std::pow(C5144, 5) * bs[5] * C5239 * C5142)) /
        C4830;
    const double C4854 = C4852 - C4843;
    const double C4841 = C4834 * C5527;
    const double C5528 = C5527 * C5522;
    const double C5532 = C5531 * C5527;
    const double C5701 = C5527 * C5523;
    const double C5698 = C5527 / C4831;
    const double C1820 = C5708 * C5527;
    const double C4909 = C4908 * C5557;
    const double C108 = -(2 * C4828 * (yA - yB) * C5557) / C4825;
    const double C184 =
        -((C5557 - (C4889 * 2 * C4828 * C4889 * C5557) / C4825) * C4835) /
        C4825;
    const double C5603 = C5557 * C5601;
    const double C5606 = C5531 * C5557;
    const double C5712 = C5557 * C5602;
    const double C5707 = C5557 / C4831;
    const double C316 = C5708 * C5557;
    const double C4935 = C4934 * C5568;
    const double C135 = -(2 * C4828 * (zA - zB) * C5568) / C4825;
    const double C277 =
        -((C5568 - (C4892 * 2 * C4828 * C4892 * C5568) / C4825) * C4835) /
        C4825;
    const double C5629 = C5568 * C5627;
    const double C5632 = C5531 * C5568;
    const double C5716 = C5568 * C5628;
    const double C5709 = C5568 / C4831;
    const double C631 = C5708 * C5568;
    const double C5025 = C5024 - C5017;
    const double C5096 = C5095 - C5088;
    const double C5151 = C5138 * C5150;
    const double C373 = (C5147 * C5143 * C5180 + ae * C5176 * C5150 +
                         C5176 * (ae * C5150 + C5176 * C5186)) /
                        C4830;
    const double C438 = (C5147 * C5143 * C5206 + ae * C5176 * C5150 +
                         C5176 * (ae * C5150 + C5176 * C5209)) /
                        C4830;
    const double C716 = (C5147 * C5143 * C5194 + ae * C5190 * C5150 +
                         C5190 * (ae * C5150 + C5190 * C5200)) /
                        C4830;
    const double C841 = (C5147 * C5143 * C5231 + ae * C5190 * C5150 +
                         C5190 * (ae * C5150 + C5190 * C5234)) /
                        C4830;
    const double C1528 = (C5190 * (ae * C5150 + C5176 * C5186)) / C4830;
    const double C1566 = (ae * C5176 * C5150 + C5190 * C5176 * C5200) / C4830;
    const double C1602 = (ae * C5190 * C5150 + C5176 * C5190 * C5209) / C4830;
    const double C1714 = (ae * C5176 * C5150 + C5190 * C5176 * C5234) / C4830;
    const double C2108 =
        (2 * (ae * C5150 + C5176 * C5186) + ae * (C5150 + C5163 * C5213) +
         C5176 * (C5186 + ae * C5176 * C5163 +
                  C5176 * (ae * C5163 +
                           C5176 * std::pow(C5144, 5) * bs[5] * C5180))) /
        C4830;
    const double C2147 =
        (2 * (ae * C5150 + C5176 * C5209) + ae * (C5150 + C5163 * C5213) +
         C5176 * (C5209 + ae * C5176 * C5163 +
                  C5176 * (ae * C5163 +
                           C5176 * std::pow(C5144, 5) * bs[5] * C5206))) /
        C4830;
    const double C2312 =
        (ae * C5150 + C5176 * C5186 +
         (ae * C5163 + C5176 * std::pow(C5144, 5) * bs[5] * C5180) * C5246) /
        C4830;
    const double C2367 =
        (ae * (C5150 + C5163 * C5246) +
         C5176 * (C5209 + std::pow(C5144, 5) * bs[5] * C5206 * C5246)) /
        C4830;
    const double C3168 =
        (ae * (C5150 + C5163 * C5213) +
         C5190 * (C5200 + std::pow(C5144, 5) * bs[5] * C5194 * C5213)) /
        C4830;
    const double C3279 =
        (ae * (C5150 + C5163 * C5213) +
         C5190 * (C5234 + std::pow(C5144, 5) * bs[5] * C5231 * C5213)) /
        C4830;
    const double C3895 =
        (2 * (ae * C5150 + C5190 * C5200) + ae * (C5150 + C5163 * C5246) +
         C5190 * (C5200 + ae * C5190 * C5163 +
                  C5190 * (ae * C5163 +
                           C5190 * std::pow(C5144, 5) * bs[5] * C5194))) /
        C4830;
    const double C3972 =
        (2 * (ae * C5150 + C5190 * C5234) + ae * (C5150 + C5163 * C5246) +
         C5190 * (C5234 + ae * C5190 * C5163 +
                  C5190 * (ae * C5163 +
                           C5190 * std::pow(C5144, 5) * bs[5] * C5231))) /
        C4830;
    const double C327 = (C5139 * C5137 * C5146 + C5150 * C5213) / C4825;
    const double C638 = (C5139 * C5137 * C5146 + C5150 * C5246) / C4825;
    const double C1486 = (C5190 * C5176 * C5150) / C4825;
    const double C2079 =
        (2 * C5176 * C5150 + C5176 * (C5150 + C5163 * C5213)) / C4825;
    const double C3110 = (C5190 * (C5150 + C5163 * C5213)) / C4825;
    const double C3849 =
        (2 * C5190 * C5150 + C5190 * (C5150 + C5163 * C5246)) / C4825;
    const double C5161 = C5138 * C5155;
    const double C5160 = C5155 * ae;
    const double C5165 = C5155 + C5162;
    const double C5217 = C5155 + C5216;
    const double C5250 = C5155 + C5249;
    const double C5384 = C5176 * C5155;
    const double C5431 = C5190 * C5155;
    const double C187 = ((C5141 + C5213 * C5143 * C5147) * C5145 +
                         (C5155 + C5213 * C5156 * C5157) * C5145 * C5142) /
                        C4830;
    const double C280 = ((C5141 + C5246 * C5143 * C5147) * C5145 +
                         (C5155 + C5246 * C5156 * C5157) * C5145 * C5142) /
                        C4830;
    const double C77 = 2 * C5138 * C5141 + C5138 * (C5141 + C5155 * C5142);
    const double C949 = C5176 * (C5141 + C5155 * C5142);
    const double C1215 = C5190 * (C5141 + C5155 * C5142);
    const double C2078 = 2 * C5176 * C5141 + C5176 * (C5141 + C5155 * C5213);
    const double C3109 = C5190 * (C5141 + C5155 * C5213);
    const double C3848 = 2 * C5190 * C5141 + C5190 * (C5141 + C5155 * C5246);
    const double C5270 = C5176 * C5182;
    const double C115 = (C5147 * C5143 * C5180 + ae * C5138 * C5182 +
                         C5138 * (ae * C5182 + C5138 * C5157 * C5156 * C5180)) /
                        C4830;
    const double C116 =
        (2 * (ae * C5182 + C5138 * C5186) + ae * (C5182 + C5187 * C5142) +
         C5138 * (C5186 + ae * C5138 * C5187 +
                  C5138 * (ae * C5187 +
                           C5138 * std::pow(C5144, 5) * bs[5] * C5180))) /
        C4830;
    const double C164 = (C5147 * C5143 * C5206 + ae * C5138 * C5182 +
                         C5138 * (ae * C5182 + C5138 * C5157 * C5156 * C5206)) /
                        C4830;
    const double C165 =
        (2 * (ae * C5182 + C5138 * C5209) + ae * (C5182 + C5187 * C5142) +
         C5138 * (C5209 + ae * C5138 * C5187 +
                  C5138 * (ae * C5187 +
                           C5138 * std::pow(C5144, 5) * bs[5] * C5206))) /
        C4830;
    const double C679 = (C5190 * (ae * C5182 + C5138 * C5186)) / C4830;
    const double C681 =
        (ae * C5182 + C5138 * C5186 +
         (ae * C5187 + C5138 * std::pow(C5144, 5) * bs[5] * C5180) * C5246) /
        C4830;
    const double C746 = (C5190 * (ae * C5182 + C5138 * C5209)) / C4830;
    const double C748 =
        (ae * C5182 + C5138 * C5209 +
         (ae * C5187 + C5138 * std::pow(C5144, 5) * bs[5] * C5206) * C5246) /
        C4830;
    const double C810 = (C5147 * C5143 * C5223 + ae * C5190 * C5182 +
                         C5190 * (ae * C5182 + C5190 * C5226)) /
                        C4830;
    const double C811 = (ae * C5138 * C5182 + C5190 * C5138 * C5226) / C4830;
    const double C870 = (C5147 * C5143 * C5239 + ae * C5190 * C5182 +
                         C5190 * (ae * C5182 + C5190 * C5242)) /
                        C4830;
    const double C871 = (ae * C5138 * C5182 + C5190 * C5138 * C5242) / C4830;
    const double C1360 =
        (ae * (C5182 + C5187 * C5142) +
         C5190 * (C5226 + std::pow(C5144, 5) * bs[5] * C5223 * C5142)) /
        C4830;
    const double C1414 =
        (ae * (C5182 + C5187 * C5142) +
         C5190 * (C5242 + std::pow(C5144, 5) * bs[5] * C5239 * C5142)) /
        C4830;
    const double C3953 =
        (2 * (ae * C5182 + C5190 * C5226) + ae * (C5182 + C5187 * C5246) +
         C5190 * (C5226 + ae * C5190 * C5187 +
                  C5190 * (ae * C5187 +
                           C5190 * std::pow(C5144, 5) * bs[5] * C5223))) /
        C4830;
    const double C3991 =
        (2 * (ae * C5182 + C5190 * C5242) + ae * (C5182 + C5187 * C5246) +
         C5190 * (C5242 + ae * C5190 * C5187 +
                  C5190 * (ae * C5187 +
                           C5190 * std::pow(C5144, 5) * bs[5] * C5239))) /
        C4830;
    const double C111 = (C5139 * C5137 * C5179 + C5182 * C5142) / C4825;
    const double C112 =
        (2 * C5138 * C5182 + C5138 * (C5182 + C5187 * C5142)) / C4825;
    const double C370 = (C5176 * C5138 * C5182 + C5138 * C5141 * ae) / C4825;
    const double C675 = (C5190 * C5138 * C5182) / C4825;
    const double C676 = (C5139 * C5137 * C5179 + C5182 * C5246) / C4825;
    const double C986 =
        (C5176 * (C5182 + C5187 * C5142) + (C5141 + C5155 * C5142) * ae) /
        C4825;
    const double C1247 = (C5190 * (C5182 + C5187 * C5142)) / C4825;
    const double C3870 =
        (2 * C5190 * C5182 + C5190 * (C5182 + C5187 * C5246)) / C4825;
    const double C5330 = C5190 * C5196;
    const double C142 = (C5147 * C5143 * C5194 + ae * C5138 * C5196 +
                         C5138 * (ae * C5196 + C5138 * C5157 * C5156 * C5194)) /
                        C4830;
    const double C143 =
        (2 * (ae * C5196 + C5138 * C5200) + ae * (C5196 + C5201 * C5142) +
         C5138 * (C5200 + ae * C5138 * C5201 +
                  C5138 * (ae * C5201 +
                           C5138 * std::pow(C5144, 5) * bs[5] * C5194))) /
        C4830;
    const double C235 = (C5147 * C5143 * C5231 + ae * C5138 * C5196 +
                         C5138 * (ae * C5196 + C5138 * C5157 * C5156 * C5231)) /
                        C4830;
    const double C236 =
        (2 * (ae * C5196 + C5138 * C5234) + ae * (C5196 + C5201 * C5142) +
         C5138 * (C5234 + ae * C5138 * C5201 +
                  C5138 * (ae * C5201 +
                           C5138 * std::pow(C5144, 5) * bs[5] * C5231))) /
        C4830;
    const double C407 = (C5176 * (ae * C5196 + C5138 * C5200)) / C4830;
    const double C409 =
        (ae * C5196 + C5138 * C5200 +
         (ae * C5201 + C5138 * std::pow(C5144, 5) * bs[5] * C5194) * C5213) /
        C4830;
    const double C506 = (C5147 * C5143 * C5223 + ae * C5176 * C5196 +
                         C5176 * (ae * C5196 + C5176 * C5226)) /
                        C4830;
    const double C507 = (ae * C5138 * C5196 + C5176 * C5138 * C5226) / C4830;
    const double C536 = (C5176 * (ae * C5196 + C5138 * C5234)) / C4830;
    const double C538 =
        (ae * C5196 + C5138 * C5234 +
         (ae * C5201 + C5138 * std::pow(C5144, 5) * bs[5] * C5231) * C5213) /
        C4830;
    const double C566 = (C5147 * C5143 * C5239 + ae * C5176 * C5196 +
                         C5176 * (ae * C5196 + C5176 * C5242)) /
                        C4830;
    const double C567 = (ae * C5138 * C5196 + C5176 * C5138 * C5242) / C4830;
    const double C1104 =
        (ae * (C5196 + C5201 * C5142) +
         C5176 * (C5226 + std::pow(C5144, 5) * bs[5] * C5223 * C5142)) /
        C4830;
    const double C1158 =
        (ae * (C5196 + C5201 * C5142) +
         C5176 * (C5242 + std::pow(C5144, 5) * bs[5] * C5239 * C5142)) /
        C4830;
    const double C2193 =
        (2 * (ae * C5196 + C5176 * C5226) + ae * (C5196 + C5201 * C5213) +
         C5176 * (C5226 + ae * C5176 * C5201 +
                  C5176 * (ae * C5201 +
                           C5176 * std::pow(C5144, 5) * bs[5] * C5223))) /
        C4830;
    const double C2231 =
        (2 * (ae * C5196 + C5176 * C5242) + ae * (C5196 + C5201 * C5213) +
         C5176 * (C5242 + ae * C5176 * C5201 +
                  C5176 * (ae * C5201 +
                           C5176 * std::pow(C5144, 5) * bs[5] * C5239))) /
        C4830;
    const double C138 = (C5139 * C5137 * C5193 + C5196 * C5142) / C4825;
    const double C139 =
        (2 * C5138 * C5196 + C5138 * (C5196 + C5201 * C5142)) / C4825;
    const double C403 = (C5176 * C5138 * C5196) / C4825;
    const double C404 = (C5139 * C5137 * C5193 + C5196 * C5213) / C4825;
    const double C713 = (C5190 * C5138 * C5196 + C5138 * C5141 * ae) / C4825;
    const double C1014 = (C5176 * (C5196 + C5201 * C5142)) / C4825;
    const double C1277 =
        (C5190 * (C5196 + C5201 * C5142) + (C5141 + C5155 * C5142) * ae) /
        C4825;
    const double C1564 = (C5190 * C5176 * C5196 + C5176 * C5141 * ae) / C4825;
    const double C2127 =
        (2 * C5176 * C5196 + C5176 * (C5196 + C5201 * C5213)) / C4825;
    const double C3167 =
        (C5190 * (C5196 + C5201 * C5213) + (C5141 + C5155 * C5213) * ae) /
        C4825;
    const double C2340 =
        (C5176 * C5200 + ae * C5190 * C5399 +
         C5190 * (ae * C5399 +
                  C5190 * C5176 * std::pow(C5144, 5) * bs[5] * C5194)) /
        C4830;
    const double C2452 =
        (C5176 * C5234 + ae * C5190 * C5399 +
         C5190 * (ae * C5399 +
                  C5190 * C5176 * std::pow(C5144, 5) * bs[5] * C5231)) /
        C4830;
    const double C3140 =
        (C5190 *
         (C5186 + ae * C5399 +
          C5176 * (ae * C5163 + C5176 * std::pow(C5144, 5) * bs[5] * C5180))) /
        C4830;
    const double C3195 =
        (C5190 * C5209 + ae * C5190 * C5399 +
         C5176 * (ae * C5190 * C5163 +
                  C5176 * C5190 * std::pow(C5144, 5) * bs[5] * C5206)) /
        C4830;
    const double C2279 = (C5176 * C5150 + C5399 * C5246) / C4825;
    const double C5276 = C5176 * C5275;
    const double C812 =
        (C5138 * C5226 + ae * C5190 * C5275 +
         C5190 * (ae * C5275 +
                  C5190 * C5138 * std::pow(C5144, 5) * bs[5] * C5223)) /
        C4830;
    const double C872 =
        (C5138 * C5242 + ae * C5190 * C5275 +
         C5190 * (ae * C5275 +
                  C5190 * C5138 * std::pow(C5144, 5) * bs[5] * C5239)) /
        C4830;
    const double C1248 =
        (C5190 *
         (C5186 + ae * C5275 +
          C5138 * (ae * C5187 + C5138 * std::pow(C5144, 5) * bs[5] * C5180))) /
        C4830;
    const double C1305 =
        (C5190 *
         (C5209 + ae * C5275 +
          C5138 * (ae * C5187 + C5138 * std::pow(C5144, 5) * bs[5] * C5206))) /
        C4830;
    const double C1639 =
        (2 * ae * C5190 * C5275 +
         C5176 * C5190 * C5138 *
             (C5156 * C5157 + C5213 * bs[5] * std::pow(C5144, 5)) * C5145) /
        C4830;
    const double C677 = (C5138 * C5182 + C5275 * C5246) / C4825;
    const double C5335 = C5190 * C5283;
    const double C508 =
        (C5138 * C5226 + ae * C5176 * C5283 +
         C5176 * (ae * C5283 +
                  C5176 * C5138 * std::pow(C5144, 5) * bs[5] * C5223)) /
        C4830;
    const double C568 =
        (C5138 * C5242 + ae * C5176 * C5283 +
         C5176 * (ae * C5283 +
                  C5176 * C5138 * std::pow(C5144, 5) * bs[5] * C5239)) /
        C4830;
    const double C1015 =
        (C5176 *
         (C5200 + ae * C5283 +
          C5138 * (ae * C5201 + C5138 * std::pow(C5144, 5) * bs[5] * C5194))) /
        C4830;
    const double C1131 =
        (C5176 *
         (C5234 + ae * C5283 +
          C5138 * (ae * C5201 + C5138 * std::pow(C5144, 5) * bs[5] * C5231))) /
        C4830;
    const double C1787 =
        (2 * ae * C5176 * C5283 +
         C5190 * C5176 * C5138 *
             (C5156 * C5157 + C5246 * bs[5] * std::pow(C5144, 5)) * C5145) /
        C4830;
    const double C405 = (C5138 * C5196 + C5283 * C5213) / C4825;
    const double C5407 = C5190 * C5406;
    const double C4847 = C4841 / C4830;
    const double C4845 = 2 * C4841;
    const double C4844 = -4 * C4841;
    const double C5702 = C5528 / C4840;
    const double C5700 = C5528 / C4825;
    const double C5699 = C5528 * C5523;
    const double C1819 = (2 * C5531 * C5528) / C4825;
    const double C5703 = C5532 * C5523;
    const double C60 = C5532 / C5704;
    const double C940 = C5532 / C4831;
    const double C5721 = C5701 / C4825;
    const double C1818 = (C5527 * std::pow(C5522, 2)) / C4830 + C5698;
    const double C4917 = 2 * C4909;
    const double C5015 = C4909 / C4830;
    const double C5036 = -4 * C4909;
    const double C367 =
        ((0 * ae) / C4825 - C4909 / C4830) / C4831 + (0 * ae) / C4825;
    const double C985 = (0 * ae) / C4825 - C4909 / C4830;
    const double C191 = C108 * C110;
    const double C190 = C108 * C109;
    const double C780 = C108 * C674;
    const double C5714 = C5603 / C4840;
    const double C5713 = C5603 * C5602;
    const double C5710 = C5603 / C4825;
    const double C315 = (2 * C5531 * C5603) / C4825;
    const double C366 =
        (((C5557 - (C4889 * 2 * C4909) / C4825) * ae) / C4825 - C4907 / C4840) /
            C4831 +
        ((C4889 * ((0 * ae) / C4825 - C4909 / C4830) + C5606) * ae) / C4825;
    const double C5715 = C5606 * C5602;
    const double C2075 = C5606 / C5704;
    const double C2540 = C5606 / C4831;
    const double C5723 = C5712 / C4825;
    const double C314 = (C5557 * std::pow(C5601, 2)) / C4830 + C5707;
    const double C4943 = 2 * C4935;
    const double C5086 = C4935 / C4830;
    const double C5107 = -4 * C4935;
    const double C710 =
        ((0 * ae) / C4825 - C4935 / C4830) / C4831 + (0 * ae) / C4825;
    const double C1276 = (0 * ae) / C4825 - C4935 / C4830;
    const double C284 = C135 * C137;
    const double C283 = C135 * C136;
    const double C600 = C135 * C402;
    const double C5718 = C5629 / C4840;
    const double C5717 = C5629 * C5628;
    const double C5711 = C5629 / C4825;
    const double C630 = (2 * C5531 * C5629) / C4825;
    const double C709 =
        (((C5568 - (C4892 * 2 * C4935) / C4825) * ae) / C4825 - C4933 / C4840) /
            C4831 +
        ((C4892 * ((0 * ae) / C4825 - C4935 / C4830) + C5632) * ae) / C4825;
    const double C5719 = C5632 * C5628;
    const double C3847 = C5632 / C5704;
    const double C4355 = C5632 / C4831;
    const double C5726 = C5716 / C4825;
    const double C629 = (C5568 * std::pow(C5627, 2)) / C4830 + C5709;
    const double C5152 = C5151 + C5149;
    const double C5164 = C5161 * ae;
    const double C1565 = (C5190 * C5176 * C5283 + C5176 * C5161 * ae) / C4825;
    const double C324 = C5138 * C5141 + C5161 * C5213;
    const double C635 = C5138 * C5141 + C5161 * C5246;
    const double C1485 = C5190 * C5176 * C5161;
    const double C5168 = C5166 + C5160;
    const double C5385 = C5383 + C5160;
    const double C5432 = C5430 + C5160;
    const double C2425 =
        (ae * (C5196 + C5190 * (C5190 * C5201 + C5160) + C5190 * C5155 * ae) +
         C5176 * (C5226 + ae * C5190 * C5187 +
                  C5190 * (ae * C5187 +
                           C5190 * std::pow(C5144, 5) * bs[5] * C5223))) /
        C4830;
    const double C5167 = C5165 * C5145;
    const double C5218 = C5217 * C5145;
    const double C5251 = C5250 * C5145;
    const double C5386 = C5384 * ae;
    const double C2278 = C5176 * C5141 + C5384 * C5246;
    const double C5433 = C5431 * ae;
    const double C5271 = C5270 + C5149;
    const double C192 = C108 * C111;
    const double C193 = C108 * C112;
    const double C781 = C108 * C675;
    const double C782 = C108 * C676;
    const double C1334 = C108 * C1247;
    const double C3935 = C108 * C3870;
    const double C5331 = C5330 + C5149;
    const double C285 = C135 * C138;
    const double C286 = C135 * C139;
    const double C602 = C135 * C403;
    const double C601 = C135 * C404;
    const double C1187 = C135 * C1014;
    const double C2252 = C135 * C2127;
    const double C783 = C108 * C677;
    const double C603 = C135 * C405;
    const double C4851 = C4836 - C4847;
    const double C4850 = C4826 * C4845;
    const double C320 = (-C4845 / C4825) / C4831 - (0 * be) / C4825;
    const double C2077 = -C4845 / C4825;
    const double C4849 = C4844 / C4825;
    const double C5720 = C5699 / C4830;
    const double C5722 = C5703 / C4825;
    const double C312 = -C5721;
    const double C4918 = C4889 * C4917;
    const double C1862 = (-C4917 / C4825) / C4831 - (0 * be) / C4825;
    const double C5022 = C5019 - C5015;
    const double C5039 = C5036 / C4825;
    const double C1078 = C985 * C986;
    const double C1076 = C985 * C370;
    const double C1074 = C985 * C368;
    const double C5724 = C5713 / C4830;
    const double C365 =
        (((0 - (C4889 * C4907) / C4825) * ae) / C4825 - (0 * be) / C4840) /
            C4831 +
        ((C4889 * (((C5557 - (C4889 * 2 * C4909) / C4825) * ae) / C4825 -
                   C4907 / C4840) +
          C5710) *
         ae) /
            C4825 +
        (0 * ae) / C4825 - C4909 / C4830;
    const double C478 = C366 * C370;
    const double C475 = C366 * C368;
    const double C5725 = C5715 / C4825;
    const double C1821 = -C5723;
    const double C4944 = C4892 * C4943;
    const double C3420 = (-C4943 / C4825) / C4831 - (0 * be) / C4825;
    const double C5093 = C5090 - C5086;
    const double C5110 = C5107 / C4825;
    const double C1450 = C1276 * C1277;
    const double C1448 = C1276 * C713;
    const double C1446 = C1276 * C711;
    const double C1790 = C1276 * C1564;
    const double C3336 = C1276 * C3167;
    const double C5727 = C5717 / C4830;
    const double C708 =
        (((0 - (C4892 * C4933) / C4825) * ae) / C4825 - (0 * be) / C4840) /
            C4831 +
        ((C4892 * (((C5568 - (C4892 * 2 * C4935) / C4825) * ae) / C4825 -
                   C4933 / C4840) +
          C5711) *
         ae) /
            C4825 +
        (0 * ae) / C4825 - C4935 / C4830;
    const double C911 = C709 * C713;
    const double C908 = C709 * C711;
    const double C2509 = C709 * C1564;
    const double C5728 = C5719 / C4825;
    const double C3362 = -C5726;
    const double C5153 = ae * C5152;
    const double C80 =
        (C5139 * C5137 * C5146 + C5138 * C5152 + C5138 * C5141 * ae) / C4825;
    const double C326 = (C5176 * C5152) / C4825;
    const double C637 = (C5190 * C5152) / C4825;
    const double C5277 = C5276 + C5164;
    const double C5336 = C5335 + C5164;
    const double C1792 = C1276 * C1565;
    const double C5170 = ae * C5168;
    const double C5169 = C5138 * C5168;
    const double C5339 = C5176 * C5168;
    const double C5350 = C5190 * C5168;
    const double C328 = (C5152 + C5168 * C5213) / C4825;
    const double C639 = (C5152 + C5168 * C5246) / C4825;
    const double C5388 = ae * C5385;
    const double C5387 = C5176 * C5385;
    const double C5415 = C5190 * C5385;
    const double C5435 = ae * C5432;
    const double C5434 = C5190 * C5432;
    const double C330 =
        (2 * ae * C5176 * C5150 + C5138 * C5176 * C5167) / C4830;
    const double C331 =
        ((C5141 + C5142 * C5143 * C5147) * C5145 + C5167 * C5213) / C4830;
    const double C332 =
        (2 * ae * (C5150 + C5163 * C5213) +
         C5138 * (C5167 + (C5156 * C5157 + C5142 * bs[5] * std::pow(C5144, 5)) *
                              C5145 * C5213)) /
        C4830;
    const double C641 =
        (2 * ae * C5190 * C5150 + C5138 * C5190 * C5167) / C4830;
    const double C642 =
        ((C5141 + C5142 * C5143 * C5147) * C5145 + C5167 * C5246) / C4830;
    const double C643 =
        (2 * ae * (C5150 + C5163 * C5246) +
         C5138 * (C5167 + (C5156 * C5157 + C5142 * bs[5] * std::pow(C5144, 5)) *
                              C5145 * C5246)) /
        C4830;
    const double C1488 = (C5190 * C5176 * C5167) / C4830;
    const double C2080 =
        (2 * C5176 * C5167 +
         C5176 * (C5167 + (C5156 * C5157 + C5142 * bs[5] * std::pow(C5144, 5)) *
                              C5145 * C5213)) /
        C4830;
    const double C2280 =
        (C5176 * C5167 +
         C5176 * (C5156 * C5157 + C5142 * bs[5] * std::pow(C5144, 5)) * C5145 *
             C5246) /
        C4830;
    const double C3111 =
        (C5190 * (C5167 + (C5156 * C5157 + C5142 * bs[5] * std::pow(C5144, 5)) *
                              C5145 * C5213)) /
        C4830;
    const double C3850 =
        (2 * C5190 * C5167 +
         C5190 * (C5167 + (C5156 * C5157 + C5142 * bs[5] * std::pow(C5144, 5)) *
                              C5145 * C5246)) /
        C4830;
    const double C188 =
        (2 * C5138 * C5218 +
         C5138 * (C5218 + (C5156 * C5157 + C5213 * bs[5] * std::pow(C5144, 5)) *
                              C5145 * C5142)) /
        C4830;
    const double C471 =
        (2 * ae * C5138 * C5182 + C5176 * C5138 * C5218) / C4830;
    const double C776 = (C5190 * C5138 * C5218) / C4830;
    const double C777 =
        ((C5141 + C5213 * C5143 * C5147) * C5145 + C5218 * C5246) / C4830;
    const double C778 =
        (C5138 * C5218 +
         C5138 * (C5156 * C5157 + C5213 * bs[5] * std::pow(C5144, 5)) * C5145 *
             C5246) /
        C4830;
    const double C1071 =
        (2 * ae * (C5182 + C5187 * C5142) +
         C5176 * (C5218 + (C5156 * C5157 + C5213 * bs[5] * std::pow(C5144, 5)) *
                              C5145 * C5142)) /
        C4830;
    const double C1332 =
        (C5190 * (C5218 + (C5156 * C5157 + C5213 * bs[5] * std::pow(C5144, 5)) *
                              C5145 * C5142)) /
        C4830;
    const double C1638 =
        (2 * ae * C5190 * C5182 + C5176 * C5190 * C5218) / C4830;
    const double C2394 =
        (2 * ae * (C5182 + C5187 * C5246) +
         C5176 * (C5218 + (C5156 * C5157 + C5213 * bs[5] * std::pow(C5144, 5)) *
                              C5145 * C5246)) /
        C4830;
    const double C3933 =
        (2 * C5190 * C5218 +
         C5190 * (C5218 + (C5156 * C5157 + C5213 * bs[5] * std::pow(C5144, 5)) *
                              C5145 * C5246)) /
        C4830;
    const double C281 =
        (2 * C5138 * C5251 +
         C5138 * (C5251 + (C5156 * C5157 + C5246 * bs[5] * std::pow(C5144, 5)) *
                              C5145 * C5142)) /
        C4830;
    const double C596 =
        ((C5141 + C5246 * C5143 * C5147) * C5145 + C5251 * C5213) / C4830;
    const double C597 = (C5176 * C5138 * C5251) / C4830;
    const double C598 =
        (C5138 * C5251 +
         C5138 * (C5156 * C5157 + C5246 * bs[5] * std::pow(C5144, 5)) * C5145 *
             C5213) /
        C4830;
    const double C904 =
        (2 * ae * C5138 * C5196 + C5190 * C5138 * C5251) / C4830;
    const double C1185 =
        (C5176 * (C5251 + (C5156 * C5157 + C5246 * bs[5] * std::pow(C5144, 5)) *
                              C5145 * C5142)) /
        C4830;
    const double C1443 =
        (2 * ae * (C5196 + C5201 * C5142) +
         C5190 * (C5251 + (C5156 * C5157 + C5246 * bs[5] * std::pow(C5144, 5)) *
                              C5145 * C5142)) /
        C4830;
    const double C1786 =
        (2 * ae * C5176 * C5196 + C5190 * C5176 * C5251) / C4830;
    const double C2250 =
        (2 * C5176 * C5251 +
         C5176 * (C5251 + (C5156 * C5157 + C5246 * bs[5] * std::pow(C5144, 5)) *
                              C5145 * C5213)) /
        C4830;
    const double C3333 =
        (2 * ae * (C5196 + C5201 * C5213) +
         C5190 * (C5251 + (C5156 * C5157 + C5246 * bs[5] * std::pow(C5144, 5)) *
                              C5145 * C5213)) /
        C4830;
    const double C5408 = C5407 + C5386;
    const double C5272 = ae * C5271;
    const double C369 =
        (C5139 * C5137 * C5179 + C5176 * C5271 + C5176 * C5141 * ae) / C4825;
    const double C1526 = (C5190 * C5271) / C4825;
    const double C2311 = (C5271 + C5385 * C5246) / C4825;
    const double C5332 = ae * C5331;
    const double C712 =
        (C5139 * C5137 * C5193 + C5190 * C5331 + C5190 * C5141 * ae) / C4825;
    const double C2547 = C4851 * C79;
    const double C73 =
        (C4851 / C4831 - (0 * be) / C4825) / C4831 + (0 * ae) / C4825;
    const double C948 = C4851 / C4831 - (0 * be) / C4825;
    const double C1828 = C4851 / C4831 + (0 * ae) / C4825;
    const double C4853 = C4850 / C4825;
    const double C335 = C320 * C79;
    const double C2085 = C2077 * C2079;
    const double C2084 = C2077 * C327;
    const double C2083 = C2077 * C325;
    const double C2082 = C2077 * C78;
    const double C2285 = C2077 * C2279;
    const double C2284 = C2077 * C1486;
    const double C2283 = C2077 * C638;
    const double C2282 = C2077 * C636;
    const double C3113 = C2077 * C3110;
    const double C3852 = C2077 * C3849;
    const double C5729 = C5698 - C5720;
    const double C5730 = C5702 - C5722;
    const double C4919 = C4918 / C4825;
    const double C1949 = C1862 * C986;
    const double C1947 = C1862 * C370;
    const double C1945 = C1862 * C368;
    const double C2106 =
        (C5022 / C4831 - (0 * be) / C4825) / C4831 + (0 * ae) / C4825;
    const double C2579 = C5022 / C4831 - (0 * be) / C4825;
    const double C5731 = C5707 - C5724;
    const double C477 = C365 * C110;
    const double C474 = C365 * C109;
    const double C3716 = C365 * C674;
    const double C5732 = C5714 - C5725;
    const double C4945 = C4944 / C4825;
    const double C3585 = C3420 * C1277;
    const double C3583 = C3420 * C713;
    const double C3581 = C3420 * C711;
    const double C3826 = C3420 * C3167;
    const double C3824 = C3420 * C1564;
    const double C4327 = C3420 * C1565;
    const double C3893 =
        (C5093 / C4831 - (0 * be) / C4825) / C4831 + (0 * ae) / C4825;
    const double C4412 = C5093 / C4831 - (0 * be) / C4825;
    const double C5733 = C5709 - C5727;
    const double C910 = C708 * C137;
    const double C907 = C708 * C136;
    const double C2508 = C708 * C402;
    const double C5734 = C5718 - C5728;
    const double C84 =
        ((C5141 + C5142 * C5143 * C5147) * C5145 + C5153 + C5153 +
         C5138 * (2 * ae * C5150 +
                  C5138 * (C5143 * C5147 + C5142 * bs[4] * std::pow(C5136, 4)) *
                      C5145)) /
        C4830;
    const double C374 = (C5153 + C5176 * (ae * C5182 + C5138 * C5186)) / C4830;
    const double C437 = (C5153 + C5176 * (ae * C5182 + C5138 * C5209)) / C4830;
    const double C717 = (C5153 + C5190 * (ae * C5196 + C5138 * C5200)) / C4830;
    const double C840 = (C5153 + C5190 * (ae * C5196 + C5138 * C5234)) / C4830;
    const double C337 = C320 * C326;
    const double C2549 = C4851 * C326;
    const double C646 = C320 * C637;
    const double C2807 = C4851 * C637;
    const double C5278 = ae * C5277;
    const double C371 =
        (C5138 * C5182 + C5176 * C5277 + C5176 * C5161 * ae) / C4825;
    const double C1527 = (C5190 * C5277) / C4825;
    const double C5337 = ae * C5336;
    const double C714 =
        (C5138 * C5196 + C5190 * C5336 + C5190 * C5161 * ae) / C4825;
    const double C375 =
        (ae * C5182 + C5138 * C5186 + ae * C5176 * C5168 +
         C5176 * (C5170 + C5176 * (ae * C5187 + C5138 * std::pow(C5144, 5) *
                                                    bs[5] * C5180))) /
        C4830;
    const double C439 =
        (ae * C5182 + C5138 * C5209 + ae * C5176 * C5168 +
         C5176 * (C5170 + C5176 * (ae * C5187 + C5138 * std::pow(C5144, 5) *
                                                    bs[5] * C5206))) /
        C4830;
    const double C718 =
        (ae * C5196 + C5138 * C5200 + ae * C5190 * C5168 +
         C5190 * (C5170 + C5190 * (ae * C5201 + C5138 * std::pow(C5144, 5) *
                                                    bs[5] * C5194))) /
        C4830;
    const double C842 =
        (ae * C5196 + C5138 * C5234 + ae * C5190 * C5168 +
         C5190 * (C5170 + C5190 * (ae * C5201 + C5138 * std::pow(C5144, 5) *
                                                    bs[5] * C5231))) /
        C4830;
    const double C1529 =
        (C5190 * (C5170 + C5176 * (ae * C5187 + C5138 * std::pow(C5144, 5) *
                                                    bs[5] * C5180))) /
        C4830;
    const double C5171 = C5150 + C5169;
    const double C5340 = ae * C5339;
    const double C1487 = (C5190 * C5339) / C4825;
    const double C5351 = ae * C5350;
    const double C339 = C320 * C328;
    const double C2551 = C4851 * C328;
    const double C648 = C320 * C639;
    const double C4358 = C4851 * C639;
    const double C2479 =
        (ae * C5196 + C5176 * C5242 + ae * C5190 * C5385 +
         C5190 * (C5388 + C5190 * (ae * C5201 + C5176 * std::pow(C5144, 5) *
                                                    bs[5] * C5239))) /
        C4830;
    const double C5389 = C5182 + C5387;
    const double C5416 = ae * C5415;
    const double C5436 = C5196 + C5434;
    const double C5409 = ae * C5408;
    const double C2339 =
        (C5176 * C5196 + C5190 * C5408 + C5190 * C5384 * ae) / C4825;
    const double C470 = ((C5141 + C5213 * C5143 * C5147) * C5145 + C5272 +
                         C5272 + C5176 * (2 * ae * C5182 + C5176 * C5218)) /
                        C4830;
    const double C1750 = (C5272 + C5190 * (ae * C5196 + C5176 * C5242)) / C4830;
    const double C476 = C367 * C369;
    const double C1642 = C985 * C1526;
    const double C2397 = C1862 * C1526;
    const double C3717 = C366 * C1526;
    const double C2399 = C1862 * C2311;
    const double C4710 = C985 * C2311;
    const double C903 = ((C5141 + C5246 * C5143 * C5147) * C5145 + C5332 +
                         C5332 + C5190 * (2 * ae * C5196 + C5190 * C5251)) /
                        C4830;
    const double C1678 = (C5332 + C5176 * (ae * C5182 + C5190 * C5226)) / C4830;
    const double C909 = C710 * C712;
    const double C955 = C948 * C80;
    const double C1832 = C1828 * C80;
    const double C4855 = C5527 - C4853;
    const double C57 = (C5729 * C5522) / C4825 + (C5700 - C5721) / C4831;
    const double C58 = (C5730 * C5522) / C4825 + (2 * C5532 + C5729) / C4831;
    const double C59 = (C5522 * C5532) / C4840 + C5730 / C4831;
    const double C4920 = C5557 - C4919;
    const double C2664 = C2579 * C369;
    const double C2072 = (C5731 * C5601) / C4825 + (C5710 - C5723) / C4831;
    const double C2073 = (C5732 * C5601) / C4825 + (2 * C5606 + C5731) / C4831;
    const double C2074 = (C5601 * C5606) / C4840 + C5732 / C4831;
    const double C4946 = C5568 - C4945;
    const double C4575 = C4412 * C712;
    const double C3844 = (C5733 * C5627) / C4825 + (C5711 - C5726) / C4831;
    const double C3845 = (C5734 * C5627) / C4825 + (2 * C5632 + C5733) / C4831;
    const double C3846 = (C5627 * C5632) / C4840 + C5734 / C4831;
    const double C472 =
        (C5138 * C5218 + C5278 + C5278 +
         C5176 * (2 * ae * C5275 +
                  C5176 * C5138 *
                      (C5156 * C5157 + C5213 * bs[5] * std::pow(C5144, 5)) *
                      C5145)) /
        C4830;
    const double C1751 =
        (C5278 + C5190 * (ae * C5283 +
                          C5176 * C5138 * std::pow(C5144, 5) * bs[5] * C5239)) /
        C4830;
    const double C479 = C367 * C371;
    const double C2667 = C2579 * C371;
    const double C1644 = C985 * C1527;
    const double C2947 = C1862 * C1527;
    const double C905 =
        (C5138 * C5251 + C5337 + C5337 +
         C5190 * (2 * ae * C5283 +
                  C5190 * C5138 *
                      (C5156 * C5157 + C5246 * bs[5] * std::pow(C5144, 5)) *
                      C5145)) /
        C4830;
    const double C1679 =
        (C5337 + C5176 * (ae * C5275 +
                          C5190 * C5138 * std::pow(C5144, 5) * bs[5] * C5223)) /
        C4830;
    const double C912 = C710 * C714;
    const double C4578 = C4412 * C714;
    const double C5172 = C5171 + C5164;
    const double C951 =
        (C5176 * C5167 + C5340 + C5340 +
         C5138 * (2 * ae * C5176 * C5163 +
                  C5138 * C5176 *
                      (C5156 * C5157 + C5142 * bs[5] * std::pow(C5144, 5)) *
                      C5145)) /
        C4830;
    const double C1567 = (C5340 + C5190 * C5176 *
                                      (ae * C5201 + C5138 * std::pow(C5144, 5) *
                                                        bs[5] * C5194)) /
                         C4830;
    const double C1715 = (C5340 + C5190 * C5176 *
                                      (ae * C5201 + C5138 * std::pow(C5144, 5) *
                                                        bs[5] * C5231)) /
                         C4830;
    const double C1492 = C320 * C1487;
    const double C2809 = C4851 * C1487;
    const double C1217 =
        (C5190 * C5167 + C5351 + C5351 +
         C5138 * (2 * ae * C5190 * C5163 +
                  C5138 * C5190 *
                      (C5156 * C5157 + C5142 * bs[5] * std::pow(C5144, 5)) *
                      C5145)) /
        C4830;
    const double C1603 = (C5351 + C5176 * C5190 *
                                      (ae * C5187 + C5138 * std::pow(C5144, 5) *
                                                        bs[5] * C5206)) /
                         C4830;
    const double C5390 = C5389 + C5386;
    const double C3222 =
        (C5190 * C5218 + C5416 + C5416 +
         C5176 * (2 * ae * C5190 * C5187 +
                  C5176 * C5190 *
                      (C5156 * C5157 + C5213 * bs[5] * std::pow(C5144, 5)) *
                      C5145)) /
        C4830;
    const double C5437 = C5436 + C5433;
    const double C2506 =
        (C5176 * C5251 + C5409 + C5409 +
         C5190 * (2 * ae * C5406 +
                  C5190 * C5176 *
                      (C5156 * C5157 + C5246 * bs[5] * std::pow(C5144, 5)) *
                      C5145)) /
        C4830;
    const double C3252 =
        (ae * C5182 + C5190 * C5226 + C5409 +
         C5176 * (ae * (C5190 * C5201 + C5160) +
                  C5176 * (ae * C5187 +
                           C5190 * std::pow(C5144, 5) * bs[5] * C5223))) /
        C4830;
    const double C2510 = C710 * C2339;
    const double C4817 = C4412 * C2339;
    const double C4857 = C4855 * ae;
    const double C4856 = C4855 * C4835;
    const double C318 = (-C4827 / C4825) / C4831 - (C4855 * be) / C4825;
    const double C4921 = C4920 * C4835;
    const double C5012 = C4920 * ae;
    const double C984 = (C4920 * ae) / C4825 - C4907 / C4840;
    const double C1861 = (-C4907 / C4825) / C4831 - (C4920 * be) / C4825;
    const double C4947 = C4946 * C4835;
    const double C5083 = C4946 * ae;
    const double C1275 = (C4946 * ae) / C4825 - C4933 / C4840;
    const double C3419 = (-C4933 / C4825) / C4831 - (C4946 * be) / C4825;
    const double C5173 = ae * C5172;
    const double C81 =
        (2 * C5152 + C5138 * C5172 + (C5141 + C5155 * C5142) * ae) / C4825;
    const double C950 = (C5176 * C5172) / C4825;
    const double C1216 = (C5190 * C5172) / C4825;
    const double C5391 = ae * C5390;
    const double C2107 =
        (2 * C5271 + C5176 * C5390 + (C5141 + C5155 * C5213) * ae) / C4825;
    const double C3139 = (C5190 * C5390) / C4825;
    const double C5438 = ae * C5437;
    const double C3894 =
        (2 * C5331 + C5190 * C5437 + (C5141 + C5155 * C5246) * ae) / C4825;
    const double C4859 = C4857 / C4825;
    const double C4858 = C4826 * C4856;
    const double C72 = (-C4856 / C4825) / (4 * C4837);
    const double C319 = (-C4856 / C4825) / C4831;
    const double C947 = (-C4856 / C4825) / (4 * C4830);
    const double C1827 = (-C4856 / C4825) / (4 * C4830);
    const double C2076 = -C4856 / C4825;
    const double C2543 = (-C4856 / C4825) / C4831;
    const double C338 = C318 * C327;
    const double C336 = C318 * C325;
    const double C334 = C318 * C78;
    const double C647 = C318 * C638;
    const double C645 = C318 * C636;
    const double C1491 = C318 * C1486;
    const double C4924 = C4889 * C4921;
    const double C466 =
        (ae * -2 * C4907) / C4837 +
        (((C4889 * ((-4 * C4909) / C4825 - (C4889 * C4921) / C4825) * ae) /
              C4825 +
          2 * ((C4920 * ae) / C4825 - C4907 / C4840)) *
         ae) /
            C4825 -
        C4921 / C4840;
    const double C468 = (-C4921 / C4825) / (4 * C4830);
    const double C1070 = (-C4921 / C4825) / C4831;
    const double C1942 = (-C4921 / C4825) / C4831;
    const double C2169 = (-C4921 / C4825) / (4 * C4837);
    const double C2660 = (-C4921 / C4825) / (4 * C4830);
    const double C5018 = C5012 / C4825;
    const double C1077 = C984 * C111;
    const double C1075 = C984 * C110;
    const double C1073 = C984 * C109;
    const double C1643 = C984 * C675;
    const double C1641 = C984 * C674;
    const double C4709 = C984 * C676;
    const double C1948 = C1861 * C111;
    const double C1946 = C1861 * C110;
    const double C1944 = C1861 * C109;
    const double C2398 = C1861 * C676;
    const double C2396 = C1861 * C674;
    const double C2946 = C1861 * C675;
    const double C4950 = C4892 * C4947;
    const double C899 =
        (ae * -2 * C4933) / C4837 +
        (((C4892 * ((-4 * C4935) / C4825 - (C4892 * C4947) / C4825) * ae) /
              C4825 +
          2 * ((C4946 * ae) / C4825 - C4933 / C4840)) *
         ae) /
            C4825 -
        C4947 / C4840;
    const double C901 = (-C4947 / C4825) / (4 * C4830);
    const double C1442 = (-C4947 / C4825) / C4831;
    const double C3578 = (-C4947 / C4825) / C4831;
    const double C4013 = (-C4947 / C4825) / (4 * C4837);
    const double C4571 = (-C4947 / C4825) / (4 * C4830);
    const double C5089 = C5083 / C4825;
    const double C1449 = C1275 * C138;
    const double C1447 = C1275 * C137;
    const double C1445 = C1275 * C136;
    const double C1791 = C1275 * C403;
    const double C1789 = C1275 * C402;
    const double C3335 = C1275 * C404;
    const double C3584 = C3419 * C138;
    const double C3582 = C3419 * C137;
    const double C3580 = C3419 * C136;
    const double C3825 = C3419 * C404;
    const double C3823 = C3419 * C402;
    const double C4326 = C3419 * C403;
    const double C85 =
        (2 * (2 * ae * C5150 + C5138 * C5167) + C5173 + C5173 +
         C5138 * (C5167 + C5170 + C5170 +
                  C5138 * (2 * ae * C5163 +
                           C5138 *
                               (C5156 * C5157 +
                                C5142 * bs[5] * std::pow(C5144, 5)) *
                               C5145))) /
        C4830;
    const double C987 =
        (C5173 + C5176 * (C5186 + ae * C5275 +
                          C5138 * (ae * C5187 + C5138 * std::pow(C5144, 5) *
                                                    bs[5] * C5180))) /
        C4830;
    const double C1042 =
        (C5173 + C5176 * (C5209 + ae * C5275 +
                          C5138 * (ae * C5187 + C5138 * std::pow(C5144, 5) *
                                                    bs[5] * C5206))) /
        C4830;
    const double C1278 =
        (C5173 + C5190 * (C5200 + ae * C5283 +
                          C5138 * (ae * C5201 + C5138 * std::pow(C5144, 5) *
                                                    bs[5] * C5194))) /
        C4830;
    const double C1387 =
        (C5173 + C5190 * (C5234 + ae * C5283 +
                          C5138 * (ae * C5201 + C5138 * std::pow(C5144, 5) *
                                                    bs[5] * C5231))) /
        C4830;
    const double C90 = C73 * C81;
    const double C958 = C948 * C950;
    const double C1835 = C1828 * C950;
    const double C1221 = C948 * C1216;
    const double C3367 = C1828 * C1216;
    const double C2170 =
        (2 * (2 * ae * C5182 + C5176 * C5218) + C5391 + C5391 +
         C5176 * (C5218 + C5388 + C5388 +
                  C5176 * (2 * ae * C5187 +
                           C5176 *
                               (C5156 * C5157 +
                                C5213 * bs[5] * std::pow(C5144, 5)) *
                               C5145))) /
        C4830;
    const double C3306 =
        (C5391 + C5190 * (C5242 + ae * C5406 +
                          C5176 * (ae * C5201 + C5176 * std::pow(C5144, 5) *
                                                    bs[5] * C5239))) /
        C4830;
    const double C2175 = C2106 * C2107;
    const double C3226 = C2579 * C3139;
    const double C3718 = C367 * C3139;
    const double C4014 =
        (2 * (2 * ae * C5196 + C5190 * C5251) + C5438 + C5438 +
         C5190 * (C5251 + C5435 + C5435 +
                  C5190 * (2 * ae * C5201 +
                           C5190 *
                               (C5156 * C5157 +
                                C5246 * bs[5] * std::pow(C5144, 5)) *
                               C5145))) /
        C4830;
    const double C4019 = C3893 * C3894;
    const double C4861 = C4859 - C4846;
    const double C4860 = C4858 / C4825;
    const double C5037 = C4924 / C4825;
    const double C467 =
        (((-4 * C4909) / C4825 - C4924 / C4825) * ae) / C4840 +
        ((2 * ((0 * ae) / C4825 - C4909 / C4830) - C4924 / C4840) * ae) / C4825;
    const double C1069 = (((-4 * C4909) / C4825 - C4924 / C4825) * ae) / C4825;
    const double C1941 = -(((-4 * C4909) / C4825 - C4924 / C4825) * be) / C4825;
    const double C5021 = C5018 - C5013;
    const double C5108 = C4950 / C4825;
    const double C900 =
        (((-4 * C4935) / C4825 - C4950 / C4825) * ae) / C4840 +
        ((2 * ((0 * ae) / C4825 - C4935 / C4830) - C4950 / C4840) * ae) / C4825;
    const double C1441 = (((-4 * C4935) / C4825 - C4950 / C4825) * ae) / C4825;
    const double C3577 = -(((-4 * C4935) / C4825 - C4950 / C4825) * be) / C4825;
    const double C5092 = C5089 - C5084;
    const double C2550 = C4861 * C327;
    const double C2548 = C4861 * C325;
    const double C2546 = C4861 * C78;
    const double C2808 = C4861 * C1486;
    const double C2806 = C4861 * C636;
    const double C4357 = C4861 * C638;
    const double C67 =
        ((((0 - (C4826 * C4824) / C4825) * ae) / C4825 - (0 * be) / C4840 +
          C4827 / C4825) /
             C4831 -
         ((C4826 * C4854 + 0) * be) / C4825) /
            C4831 +
        ((C4826 *
              (C4854 / C4831 - ((C4826 * C4861 + C5700) * be) / C4825 + C4851) +
          C5729) *
         ae) /
            C4825 +
        C4861 / C4831 - ((C4826 * C4851 + C5532) * be) / C4825;
    const double C69 =
        (C4854 / C4831 - ((C4826 * C4861 + C5700) * be) / C4825 + C4851) /
            C4831 +
        ((C4826 * (C4861 / C4831 - ((C4826 * C4851 + C5532) * be) / C4825) +
          C5730) *
         ae) /
            C4825 +
        2 * (C4851 / C4831 - (0 * be) / C4825);
    const double C71 =
        (C4861 / C4831 - ((C4826 * C4851 + C5532) * be) / C4825) / C4831 +
        ((C4826 * (C4851 / C4831 - (0 * be) / C4825) + C940) * ae) / C4825;
    const double C944 =
        C4854 / C4831 - ((C4826 * C4861 + C5700) * be) / C4825 + C4851;
    const double C946 = C4861 / C4831 - ((C4826 * C4851 + C5532) * be) / C4825;
    const double C1824 =
        C4854 / C4831 + ((C4826 * C4861 + C5700) * ae) / C4825 + C4851;
    const double C1826 = C4861 / C4831 + ((C4826 * C4851 + C5532) * ae) / C4825;
    const double C4862 = C4849 - C4860;
    const double C5040 = C5039 - C5037;
    const double C2103 =
        ((((0 - (C4889 * C5010) / C4825) * ae) / C4825 - (0 * be) / C4840 +
          C4907 / C4825) /
             C4831 -
         ((C4889 * C5025 + 0) * be) / C4825) /
            C4831 +
        ((C4889 *
              (C5025 / C4831 - ((C4889 * C5021 + C5710) * be) / C4825 + C5022) +
          C5731) *
         ae) /
            C4825 +
        C5021 / C4831 - ((C4889 * C5022 + C5606) * be) / C4825;
    const double C2104 =
        (C5025 / C4831 - ((C4889 * C5021 + C5710) * be) / C4825 + C5022) /
            C4831 +
        ((C4889 * (C5021 / C4831 - ((C4889 * C5022 + C5606) * be) / C4825) +
          C5732) *
         ae) /
            C4825 +
        2 * (C5022 / C4831 - (0 * be) / C4825);
    const double C2105 =
        (C5021 / C4831 - ((C4889 * C5022 + C5606) * be) / C4825) / C4831 +
        ((C4889 * (C5022 / C4831 - (0 * be) / C4825) + C2540) * ae) / C4825;
    const double C2577 =
        C5025 / C4831 - ((C4889 * C5021 + C5710) * be) / C4825 + C5022;
    const double C2578 = C5021 / C4831 - ((C4889 * C5022 + C5606) * be) / C4825;
    const double C5111 = C5110 - C5108;
    const double C3890 =
        ((((0 - (C4892 * C5081) / C4825) * ae) / C4825 - (0 * be) / C4840 +
          C4933 / C4825) /
             C4831 -
         ((C4892 * C5096 + 0) * be) / C4825) /
            C4831 +
        ((C4892 *
              (C5096 / C4831 - ((C4892 * C5092 + C5711) * be) / C4825 + C5093) +
          C5733) *
         ae) /
            C4825 +
        C5092 / C4831 - ((C4892 * C5093 + C5632) * be) / C4825;
    const double C3891 =
        (C5096 / C4831 - ((C4892 * C5092 + C5711) * be) / C4825 + C5093) /
            C4831 +
        ((C4892 * (C5092 / C4831 - ((C4892 * C5093 + C5632) * be) / C4825) +
          C5734) *
         ae) /
            C4825 +
        2 * (C5093 / C4831 - (0 * be) / C4825);
    const double C3892 =
        (C5092 / C4831 - ((C4892 * C5093 + C5632) * be) / C4825) / C4831 +
        ((C4892 * (C5093 / C4831 - (0 * be) / C4825) + C4355) * ae) / C4825;
    const double C4410 =
        C5096 / C4831 - ((C4892 * C5092 + C5711) * be) / C4825 + C5093;
    const double C4411 = C5092 / C4831 - ((C4892 * C5093 + C5632) * be) / C4825;
    const double C87 = C67 * C78;
    const double C88 = C69 * C79;
    const double C89 = C71 * C80;
    const double C956 = C944 * C325;
    const double C953 = C944 * C78;
    const double C1219 = C944 * C636;
    const double C957 = C946 * C326;
    const double C954 = C946 * C79;
    const double C1220 = C946 * C637;
    const double C1833 = C1824 * C325;
    const double C1830 = C1824 * C78;
    const double C3365 = C1824 * C636;
    const double C1834 = C1826 * C326;
    const double C1831 = C1826 * C79;
    const double C3366 = C1826 * C637;
    const double C4863 = C4862 * ae;
    const double C317 = -(C4862 * be) / C4825;
    const double C5041 = C5040 * ae;
    const double C2172 = C2103 * C109;
    const double C2173 = C2104 * C368;
    const double C2174 = C2105 * C369;
    const double C2665 = C2577 * C110;
    const double C2662 = C2577 * C109;
    const double C3224 = C2577 * C674;
    const double C2666 = C2578 * C370;
    const double C2663 = C2578 * C368;
    const double C3225 = C2578 * C1526;
    const double C5112 = C5111 * ae;
    const double C4016 = C3890 * C136;
    const double C4017 = C3891 * C711;
    const double C4018 = C3892 * C712;
    const double C4576 = C4410 * C137;
    const double C4573 = C4410 * C136;
    const double C4815 = C4410 * C402;
    const double C4577 = C4411 * C713;
    const double C4574 = C4411 * C711;
    const double C4816 = C4411 * C1564;
    const double C66 =
        ((ae * -2 * C4824) / C4837 -
         (((C4826 * C4838) / C4830 + 2 * C4854) * be) / C4825) /
            C4831 +
        ((C4826 * (C4838 / C4837 -
                   (((C4826 * C4863) / C4825 + 2 * C4861) * be) / C4825 -
                   C4856 / C4840) +
          2 * (C4854 / C4831 - ((C4826 * C4861 + C5700) * be) / C4825 +
               C4851)) *
         ae) /
            C4825 +
        C4863 / C4840 - ((2 * C4851 - C4858 / C4840) * be) / C4825;
    const double C68 =
        (C4838 / C4837 - (((C4826 * C4863) / C4825 + 2 * C4861) * be) / C4825 -
         C4856 / C4840) /
            C4831 +
        ((C4826 * (C4863 / C4840 - ((2 * C4851 - C4858 / C4840) * be) / C4825) +
          2 * (C4861 / C4831 - ((C4826 * C4851 + C5532) * be) / C4825)) *
         ae) /
            C4825 +
        (-2 * C4856) / (C4825 * 4 * C4830);
    const double C70 =
        (C4863 / C4840 - ((2 * C4851 - C4858 / C4840) * be) / C4825) / C4831 +
        ((2 * (C4851 / C4831 - (0 * be) / C4825) -
          C4858 / (C4825 * 4 * C4830)) *
         ae) /
            C4825;
    const double C943 = C4838 / C4837 -
                        (((C4826 * C4863) / C4825 + 2 * C4861) * be) / C4825 -
                        C4856 / C4840;
    const double C945 =
        C4863 / C4840 - ((2 * C4851 - C4858 / C4840) * be) / C4825;
    const double C1823 = C4838 / C4837 +
                         (((C4826 * C4863) / C4825 + 2 * C4861) * ae) / C4825 -
                         C4856 / C4840;
    const double C1825 =
        C4863 / C4840 + ((2 * C4851 - C4858 / C4840) * ae) / C4825;
    const double C2541 = C4863 / C4825;
    const double C2166 =
        ((ae * -2 * C5010) / C4837 -
         (((C4889 * C5038) / C4830 + 2 * C5025) * be) / C4825) /
            C4831 +
        ((C4889 * (C5038 / C4837 -
                   (((C4889 * C5041) / C4825 + 2 * C5021) * be) / C4825 -
                   C4921 / C4840) +
          2 * (C5025 / C4831 - ((C4889 * C5021 + C5710) * be) / C4825 +
               C5022)) *
         ae) /
            C4825 +
        C5041 / C4840 - ((2 * C5022 - C4924 / C4840) * be) / C4825;
    const double C2167 =
        (C5038 / C4837 - (((C4889 * C5041) / C4825 + 2 * C5021) * be) / C4825 -
         C4921 / C4840) /
            C4831 +
        ((C4889 * (C5041 / C4840 - ((2 * C5022 - C4924 / C4840) * be) / C4825) +
          2 * (C5021 / C4831 - ((C4889 * C5022 + C5606) * be) / C4825)) *
         ae) /
            C4825 +
        (-2 * C4921) / (C4825 * 4 * C4830);
    const double C2168 =
        (C5041 / C4840 - ((2 * C5022 - C4924 / C4840) * be) / C4825) / C4831 +
        ((2 * (C5022 / C4831 - (0 * be) / C4825) -
          C4924 / (C4825 * 4 * C4830)) *
         ae) /
            C4825;
    const double C2658 = C5038 / C4837 -
                         (((C4889 * C5041) / C4825 + 2 * C5021) * be) / C4825 -
                         C4921 / C4840;
    const double C2659 =
        C5041 / C4840 - ((2 * C5022 - C4924 / C4840) * be) / C4825;
    const double C4010 =
        ((ae * -2 * C5081) / C4837 -
         (((C4892 * C5109) / C4830 + 2 * C5096) * be) / C4825) /
            C4831 +
        ((C4892 * (C5109 / C4837 -
                   (((C4892 * C5112) / C4825 + 2 * C5092) * be) / C4825 -
                   C4947 / C4840) +
          2 * (C5096 / C4831 - ((C4892 * C5092 + C5711) * be) / C4825 +
               C5093)) *
         ae) /
            C4825 +
        C5112 / C4840 - ((2 * C5093 - C4950 / C4840) * be) / C4825;
    const double C4011 =
        (C5109 / C4837 - (((C4892 * C5112) / C4825 + 2 * C5092) * be) / C4825 -
         C4947 / C4840) /
            C4831 +
        ((C4892 * (C5112 / C4840 - ((2 * C5093 - C4950 / C4840) * be) / C4825) +
          2 * (C5092 / C4831 - ((C4892 * C5093 + C5632) * be) / C4825)) *
         ae) /
            C4825 +
        (-2 * C4947) / (C4825 * 4 * C4830);
    const double C4012 =
        (C5112 / C4840 - ((2 * C5093 - C4950 / C4840) * be) / C4825) / C4831 +
        ((2 * (C5093 / C4831 - (0 * be) / C4825) -
          C4950 / (C4825 * 4 * C4830)) *
         ae) /
            C4825;
    const double C4569 = C5109 / C4837 -
                         (((C4892 * C5112) / C4825 + 2 * C5092) * be) / C4825 -
                         C4947 / C4840;
    const double C4570 =
        C5112 / C4840 - ((2 * C5093 - C4950 / C4840) * be) / C4825;
    d2eexx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C943 * C74 + C953 + C953 + C5729 * C82 + C945 * C75 + C954 + C954 +
           C5730 * C83 + C947 * C76 + C955 + C955 + C940 * C84) *
              C5568 * C5710 +
          (C943 * C321 + C956 + C956 + C5729 * C329 + C945 * C322 + C957 +
           C957 + C5730 * C330 + C947 * C949 + C958 + C958 + C940 * C951) *
              C5568 * C5606) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C984 * C74 + C5710 * C109 + C985 * C321 + C5606 * C368) * C944 +
          (C984 * C78 + C5710 * C113 + C985 * C325 + C5606 * C372) * C5729 +
          (C984 * C75 + C5710 * C110 + C985 * C322 + C5606 * C370) * C946 +
          (C984 * C79 + C5710 * C114 + C985 * C326 + C5606 * C374) * C5730 +
          (C984 * C76 + C5710 * C111 + C985 * C949 + C5606 * C986) * C948 +
          (C984 * C80 + C5710 * C115 + C985 * C950 + C5606 * C987) * C940) *
         C5568 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5568 * C136) * C944 +
                    (C135 * C78 + C5568 * C140) * C5729 +
                    (C135 * C75 + C5568 * C137) * C946 +
                    (C135 * C79 + C5568 * C141) * C5730 +
                    (C135 * C76 + C5568 * C138) * C948 +
                    (C135 * C80 + C5568 * C142) * C940) *
                       C5710 +
                   ((C135 * C321 + C5568 * C402) * C944 +
                    (C135 * C325 + C5568 * C406) * C5729 +
                    (C135 * C322 + C5568 * C403) * C946 +
                    (C135 * C326 + C5568 * C407) * C5730 +
                    (C135 * C949 + C5568 * C1014) * C948 +
                    (C135 * C950 + C5568 * C1015) * C940) *
                       C5606) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C944 * C74 + C5729 * C78 + C946 * C75 + C5730 * C79 +
                    C948 * C76 + C940 * C80) *
                       C984 +
                   (C944 * C109 + C5729 * C162 + C946 * C110 + C5730 * C163 +
                    C948 * C111 + C940 * C164) *
                       C5710 +
                   (C944 * C321 + C5729 * C325 + C946 * C322 + C5730 * C326 +
                    C948 * C949 + C940 * C950) *
                       C985 +
                   (C944 * C368 + C5729 * C436 + C946 * C370 + C5730 * C437 +
                    C948 * C986 + C940 * C1042) *
                       C5606) *
                  C5568 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C1069 * C74 + C1073 + C1073 + C5710 * C185 + C1070 * C321 +
                    C1074 + C1074 + C5606 * C469) *
                       C5729 +
                   (C1069 * C75 + C1075 + C1075 + C5710 * C186 + C1070 * C322 +
                    C1076 + C1076 + C5606 * C471) *
                       C5730 +
                   (C1069 * C76 + C1077 + C1077 + C5710 * C187 + C1070 * C949 +
                    C1078 + C1078 + C5606 * C1071) *
                       C940) *
                  C5568 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5568 * C136) * C984 +
                    (C135 * C109 + C5568 * C211) * C5710 +
                    (C135 * C321 + C5568 * C402) * C985 +
                    (C135 * C368 + C5568 * C505) * C5606) *
                       C5729 +
                   ((C135 * C75 + C5568 * C137) * C984 +
                    (C135 * C110 + C5568 * C212) * C5710 +
                    (C135 * C322 + C5568 * C403) * C985 +
                    (C135 * C370 + C5568 * C507) * C5606) *
                       C5730 +
                   ((C135 * C76 + C5568 * C138) * C984 +
                    (C135 * C111 + C5568 * C213) * C5710 +
                    (C135 * C949 + C5568 * C1014) * C985 +
                    (C135 * C986 + C5568 * C1104) * C5606) *
                       C940) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C944 * C74 + C5729 * C78 + C946 * C75 + C5730 * C79 +
                     C948 * C76 + C940 * C80) *
                        C135 +
                    (C944 * C136 + C5729 * C233 + C946 * C137 + C5730 * C234 +
                     C948 * C138 + C940 * C235) *
                        C5568) *
                       C5710 +
                   ((C944 * C321 + C5729 * C325 + C946 * C322 + C5730 * C326 +
                     C948 * C949 + C940 * C950) *
                        C135 +
                    (C944 * C402 + C5729 * C535 + C946 * C403 + C5730 * C536 +
                     C948 * C1014 + C940 * C1131) *
                        C5568) *
                       C5606) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C984 * C74 + C5710 * C109 + C985 * C321 + C5606 * C368) * C135 +
           (C984 * C136 + C5710 * C255 + C985 * C402 + C5606 * C565) * C5568) *
              C5729 +
          ((C984 * C75 + C5710 * C110 + C985 * C322 + C5606 * C370) * C135 +
           (C984 * C137 + C5710 * C256 + C985 * C403 + C5606 * C567) * C5568) *
              C5730 +
          ((C984 * C76 + C5710 * C111 + C985 * C949 + C5606 * C986) * C135 +
           (C984 * C138 + C5710 * C257 + C985 * C1014 + C5606 * C1158) *
               C5568) *
              C940) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C277 * C74 + C283 + C283 + C5568 * C278) * C5710 +
                    (C277 * C321 + C600 + C600 + C5568 * C595) * C5606) *
                       C5729 +
                   ((C277 * C75 + C284 + C284 + C5568 * C279) * C5710 +
                    (C277 * C322 + C602 + C602 + C5568 * C597) * C5606) *
                       C5730 +
                   ((C277 * C76 + C285 + C285 + C5568 * C280) * C5710 +
                    (C277 * C949 + C1187 + C1187 + C5568 * C1185) * C5606) *
                       C940) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C317 * C74 + C334 + C334 + C312 * C82 + C319 * C75 + C335 +
                     C335 + C5532 * C83) *
                        C5711 +
                    (C317 * C632 + C645 + C645 + C312 * C640 + C319 * C633 +
                     C646 + C646 + C5532 * C641) *
                        C5632) *
                       C5710 +
                   ((C317 * C321 + C336 + C336 + C312 * C329 + C319 * C322 +
                     C337 + C337 + C5532 * C330) *
                        C5711 +
                    (C317 * C1484 + C1491 + C1491 + C312 * C1488 +
                     C319 * C1485 + C1492 + C1492 + C5532 * C1489) *
                        C5632) *
                       C5606) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C984 * C74 + C5710 * C109 + C985 * C321 + C5606 * C368) * C318 +
           (C984 * C78 + C5710 * C113 + C985 * C325 + C5606 * C372) * C312 +
           (C984 * C75 + C5710 * C110 + C985 * C322 + C5606 * C370) * C320 +
           (C984 * C79 + C5710 * C114 + C985 * C326 + C5606 * C374) * C5532) *
              C5711 +
          ((C984 * C632 + C5710 * C674 + C985 * C1484 + C5606 * C1526) * C318 +
           (C984 * C636 + C5710 * C678 + C985 * C1486 + C5606 * C1528) * C312 +
           (C984 * C633 + C5710 * C675 + C985 * C1485 + C5606 * C1527) * C320 +
           (C984 * C637 + C5710 * C679 + C985 * C1487 + C5606 * C1529) *
               C5532) *
              C5632) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1275 * C74 + C5711 * C136 + C1276 * C632 + C5632 * C711) * C318 +
           (C1275 * C78 + C5711 * C140 + C1276 * C636 + C5632 * C715) * C312 +
           (C1275 * C75 + C5711 * C137 + C1276 * C633 + C5632 * C713) * C320 +
           (C1275 * C79 + C5711 * C141 + C1276 * C637 + C5632 * C717) * C5532) *
              C5710 +
          ((C1275 * C321 + C5711 * C402 + C1276 * C1484 + C5632 * C1564) *
               C318 +
           (C1275 * C325 + C5711 * C406 + C1276 * C1486 + C5632 * C1566) *
               C312 +
           (C1275 * C322 + C5711 * C403 + C1276 * C1485 + C5632 * C1565) *
               C320 +
           (C1275 * C326 + C5711 * C407 + C1276 * C1487 + C5632 * C1567) *
               C5532) *
              C5606) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C318 * C74 + C312 * C78 + C320 * C75 + C5532 * C79) * C984 +
           (C318 * C109 + C312 * C162 + C320 * C110 + C5532 * C163) * C5710 +
           (C318 * C321 + C312 * C325 + C320 * C322 + C5532 * C326) * C985 +
           (C318 * C368 + C312 * C436 + C320 * C370 + C5532 * C437) * C5606) *
              C5711 +
          ((C318 * C632 + C312 * C636 + C320 * C633 + C5532 * C637) * C984 +
           (C318 * C674 + C312 * C745 + C320 * C675 + C5532 * C746) * C5710 +
           (C318 * C1484 + C312 * C1486 + C320 * C1485 + C5532 * C1487) * C985 +
           (C318 * C1526 + C312 * C1602 + C320 * C1527 + C5532 * C1603) *
               C5606) *
              C5632) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C1069 * C74 + C1073 + C1073 + C5710 * C185 + C1070 * C321 +
                     C1074 + C1074 + C5606 * C469) *
                        C312 +
                    (C1069 * C75 + C1075 + C1075 + C5710 * C186 + C1070 * C322 +
                     C1076 + C1076 + C5606 * C471) *
                        C5532) *
                       C5711 +
                   ((C1069 * C632 + C1641 + C1641 + C5710 * C775 +
                     C1070 * C1484 + C1642 + C1642 + C5606 * C1638) *
                        C312 +
                    (C1069 * C633 + C1643 + C1643 + C5710 * C776 +
                     C1070 * C1485 + C1644 + C1644 + C5606 * C1639) *
                        C5532) *
                       C5632) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1275 * C74 + C5711 * C136 + C1276 * C632 + C5632 * C711) * C984 +
           (C1275 * C109 + C5711 * C211 + C1276 * C674 + C5632 * C809) * C5710 +
           (C1275 * C321 + C5711 * C402 + C1276 * C1484 + C5632 * C1564) *
               C985 +
           (C1275 * C368 + C5711 * C505 + C1276 * C1526 + C5632 * C1678) *
               C5606) *
              C312 +
          ((C1275 * C75 + C5711 * C137 + C1276 * C633 + C5632 * C713) * C984 +
           (C1275 * C110 + C5711 * C212 + C1276 * C675 + C5632 * C811) * C5710 +
           (C1275 * C322 + C5711 * C403 + C1276 * C1485 + C5632 * C1565) *
               C985 +
           (C1275 * C370 + C5711 * C507 + C1276 * C1527 + C5632 * C1679) *
               C5606) *
              C5532) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C318 * C74 + C312 * C78 + C320 * C75 + C5532 * C79) * C1275 +
           (C318 * C136 + C312 * C233 + C320 * C137 + C5532 * C234) * C5711 +
           (C318 * C632 + C312 * C636 + C320 * C633 + C5532 * C637) * C1276 +
           (C318 * C711 + C312 * C839 + C320 * C713 + C5532 * C840) * C5632) *
              C5710 +
          ((C318 * C321 + C312 * C325 + C320 * C322 + C5532 * C326) * C1275 +
           (C318 * C402 + C312 * C535 + C320 * C403 + C5532 * C536) * C5711 +
           (C318 * C1484 + C312 * C1486 + C320 * C1485 + C5532 * C1487) *
               C1276 +
           (C318 * C1564 + C312 * C1714 + C320 * C1565 + C5532 * C1715) *
               C5632) *
              C5606) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C984 * C74 + C5710 * C109 + C985 * C321 + C5606 * C368) * C1275 +
           (C984 * C136 + C5710 * C255 + C985 * C402 + C5606 * C565) * C5711 +
           (C984 * C632 + C5710 * C674 + C985 * C1484 + C5606 * C1526) * C1276 +
           (C984 * C711 + C5710 * C869 + C985 * C1564 + C5606 * C1750) *
               C5632) *
              C312 +
          ((C984 * C75 + C5710 * C110 + C985 * C322 + C5606 * C370) * C1275 +
           (C984 * C137 + C5710 * C256 + C985 * C403 + C5606 * C567) * C5711 +
           (C984 * C633 + C5710 * C675 + C985 * C1485 + C5606 * C1527) * C1276 +
           (C984 * C713 + C5710 * C871 + C985 * C1565 + C5606 * C1751) *
               C5632) *
              C5532) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C1441 * C74 + C1445 + C1445 + C5711 * C278 + C1442 * C632 +
                     C1446 + C1446 + C5632 * C902) *
                        C5710 +
                    (C1441 * C321 + C1789 + C1789 + C5711 * C595 +
                     C1442 * C1484 + C1790 + C1790 + C5632 * C1786) *
                        C5606) *
                       C312 +
                   ((C1441 * C75 + C1447 + C1447 + C5711 * C279 + C1442 * C633 +
                     C1448 + C1448 + C5632 * C904) *
                        C5710 +
                    (C1441 * C322 + C1791 + C1791 + C5711 * C597 +
                     C1442 * C1485 + C1792 + C1792 + C5632 * C1787) *
                        C5606) *
                       C5532) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] += (-std::pow(Pi, 2.5) *
                  ((C317 * C74 + C334 + C334 + C312 * C82 + C319 * C75 + C335 +
                    C335 + C5532 * C83) *
                       C5568 * C314 +
                   (C317 * C321 + C336 + C336 + C312 * C329 + C319 * C322 +
                    C337 + C337 + C5532 * C330) *
                       C5568 * C315 +
                   (C317 * C323 + C338 + C338 + C312 * C331 + C319 * C324 +
                    C339 + C339 + C5532 * C332) *
                       C5568 * C316) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (C66 * C74 + C87 + C87 + C57 * C82 + C68 * C75 + C88 + C88 +
                   C58 * C83 + C70 * C76 + C89 + C89 + C59 * C84 + C72 * C77 +
                   C90 + C90 + C60 * C85) *
                  C5568 * C5557 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C317 * C74 + C334 + C334 + C312 * C82 + C319 * C75 + C335 +
                    C335 + C5532 * C83) *
                       C629 +
                   (C317 * C632 + C645 + C645 + C312 * C640 + C319 * C633 +
                    C646 + C646 + C5532 * C641) *
                       C630 +
                   (C317 * C634 + C647 + C647 + C312 * C642 + C319 * C635 +
                    C648 + C648 + C5532 * C643) *
                       C631) *
                  C5557 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eexy[2] += (-std::pow(Pi, 2.5) *
                  ((C365 * C74 + C314 * C109 + C366 * C321 + C315 * C368 +
                    C367 * C323 + C316 * C369) *
                       C318 +
                   (C365 * C78 + C314 * C113 + C366 * C325 + C315 * C372 +
                    C367 * C327 + C316 * C373) *
                       C312 +
                   (C365 * C75 + C314 * C110 + C366 * C322 + C315 * C370 +
                    C367 * C324 + C316 * C371) *
                       C320 +
                   (C365 * C79 + C314 * C114 + C366 * C326 + C315 * C374 +
                    C367 * C328 + C316 * C375) *
                       C5532) *
                  C5568 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C108 * C74 + C5557 * C109) * C67 +
                   (C108 * C78 + C5557 * C113) * C57 +
                   (C108 * C75 + C5557 * C110) * C69 +
                   (C108 * C79 + C5557 * C114) * C58 +
                   (C108 * C76 + C5557 * C111) * C71 +
                   (C108 * C80 + C5557 * C115) * C59 +
                   (C108 * C77 + C5557 * C112) * C73 +
                   (C108 * C81 + C5557 * C116) * C60) *
                  C5568 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C108 * C74 + C5557 * C109) * C318 +
                    (C108 * C78 + C5557 * C113) * C312 +
                    (C108 * C75 + C5557 * C110) * C320 +
                    (C108 * C79 + C5557 * C114) * C5532) *
                       C629 +
                   ((C108 * C632 + C5557 * C674) * C318 +
                    (C108 * C636 + C5557 * C678) * C312 +
                    (C108 * C633 + C5557 * C675) * C320 +
                    (C108 * C637 + C5557 * C679) * C5532) *
                       C630 +
                   ((C108 * C634 + C5557 * C676) * C318 +
                    (C108 * C638 + C5557 * C680) * C312 +
                    (C108 * C635 + C5557 * C677) * C320 +
                    (C108 * C639 + C5557 * C681) * C5532) *
                       C631) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eexz[2] += (-std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5568 * C136) * C318 +
                    (C135 * C78 + C5568 * C140) * C312 +
                    (C135 * C75 + C5568 * C137) * C320 +
                    (C135 * C79 + C5568 * C141) * C5532) *
                       C314 +
                   ((C135 * C321 + C5568 * C402) * C318 +
                    (C135 * C325 + C5568 * C406) * C312 +
                    (C135 * C322 + C5568 * C403) * C320 +
                    (C135 * C326 + C5568 * C407) * C5532) *
                       C315 +
                   ((C135 * C323 + C5568 * C404) * C318 +
                    (C135 * C327 + C5568 * C408) * C312 +
                    (C135 * C324 + C5568 * C405) * C320 +
                    (C135 * C328 + C5568 * C409) * C5532) *
                       C316) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C135 * C74 + C5568 * C136) * C67 +
                   (C135 * C78 + C5568 * C140) * C57 +
                   (C135 * C75 + C5568 * C137) * C69 +
                   (C135 * C79 + C5568 * C141) * C58 +
                   (C135 * C76 + C5568 * C138) * C71 +
                   (C135 * C80 + C5568 * C142) * C59 +
                   (C135 * C77 + C5568 * C139) * C73 +
                   (C135 * C81 + C5568 * C143) * C60) *
                  C5557 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C708 * C74 + C629 * C136 + C709 * C632 + C630 * C711 +
                    C710 * C634 + C631 * C712) *
                       C318 +
                   (C708 * C78 + C629 * C140 + C709 * C636 + C630 * C715 +
                    C710 * C638 + C631 * C716) *
                       C312 +
                   (C708 * C75 + C629 * C137 + C709 * C633 + C630 * C713 +
                    C710 * C635 + C631 * C714) *
                       C320 +
                   (C708 * C79 + C629 * C141 + C709 * C637 + C630 * C717 +
                    C710 * C639 + C631 * C718) *
                       C5532) *
                  C5557 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::pow(Pi, 2.5) *
         ((C318 * C74 + C312 * C78 + C320 * C75 + C5532 * C79) * C365 +
          (C318 * C109 + C312 * C162 + C320 * C110 + C5532 * C163) * C314 +
          (C318 * C321 + C312 * C325 + C320 * C322 + C5532 * C326) * C366 +
          (C318 * C368 + C312 * C436 + C320 * C370 + C5532 * C437) * C315 +
          (C318 * C323 + C312 * C327 + C320 * C324 + C5532 * C328) * C367 +
          (C318 * C369 + C312 * C438 + C320 * C371 + C5532 * C439) * C316) *
         C5568 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C67 * C74 + C57 * C78 + C69 * C75 + C58 * C79 + C71 * C76 +
           C59 * C80 + C73 * C77 + C60 * C81) *
              C108 +
          (C67 * C109 + C57 * C162 + C69 * C110 + C58 * C163 + C71 * C111 +
           C59 * C164 + C73 * C112 + C60 * C165) *
              C5557) *
         C5568 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C318 * C74 + C312 * C78 + C320 * C75 + C5532 * C79) * C108 +
           (C318 * C109 + C312 * C162 + C320 * C110 + C5532 * C163) * C5557) *
              C629 +
          ((C318 * C632 + C312 * C636 + C320 * C633 + C5532 * C637) * C108 +
           (C318 * C674 + C312 * C745 + C320 * C675 + C5532 * C746) * C5557) *
              C630 +
          ((C318 * C634 + C312 * C638 + C320 * C635 + C5532 * C639) * C108 +
           (C318 * C676 + C312 * C747 + C320 * C677 + C5532 * C748) * C5557) *
              C631) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (-std::pow(Pi, 2.5) *
         ((C466 * C74 + C474 + C474 + C314 * C185 + C467 * C321 + C475 + C475 +
           C315 * C469 + C468 * C323 + C476 + C476 + C316 * C470) *
              C312 +
          (C466 * C75 + C477 + C477 + C314 * C186 + C467 * C322 + C478 + C478 +
           C315 * C471 + C468 * C324 + C479 + C479 + C316 * C472) *
              C5532) *
         C5568 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C184 * C74 + C190 + C190 + C5557 * C185) * C57 +
          (C184 * C75 + C191 + C191 + C5557 * C186) * C58 +
          (C184 * C76 + C192 + C192 + C5557 * C187) * C59 +
          (C184 * C77 + C193 + C193 + C5557 * C188) * C60) *
         C5568 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C184 * C74 + C190 + C190 + C5557 * C185) * C312 +
           (C184 * C75 + C191 + C191 + C5557 * C186) * C5532) *
              C629 +
          ((C184 * C632 + C780 + C780 + C5557 * C775) * C312 +
           (C184 * C633 + C781 + C781 + C5557 * C776) * C5532) *
              C630 +
          ((C184 * C634 + C782 + C782 + C5557 * C777) * C312 +
           (C184 * C635 + C783 + C783 + C5557 * C778) * C5532) *
              C631) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyz[2] += (-std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5568 * C136) * C365 +
                    (C135 * C109 + C5568 * C211) * C314 +
                    (C135 * C321 + C5568 * C402) * C366 +
                    (C135 * C368 + C5568 * C505) * C315 +
                    (C135 * C323 + C5568 * C404) * C367 +
                    (C135 * C369 + C5568 * C506) * C316) *
                       C312 +
                   ((C135 * C75 + C5568 * C137) * C365 +
                    (C135 * C110 + C5568 * C212) * C314 +
                    (C135 * C322 + C5568 * C403) * C366 +
                    (C135 * C370 + C5568 * C507) * C315 +
                    (C135 * C324 + C5568 * C405) * C367 +
                    (C135 * C371 + C5568 * C508) * C316) *
                       C5532) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5568 * C136) * C108 +
                    (C135 * C109 + C5568 * C211) * C5557) *
                       C57 +
                   ((C135 * C75 + C5568 * C137) * C108 +
                    (C135 * C110 + C5568 * C212) * C5557) *
                       C58 +
                   ((C135 * C76 + C5568 * C138) * C108 +
                    (C135 * C111 + C5568 * C213) * C5557) *
                       C59 +
                   ((C135 * C77 + C5568 * C139) * C108 +
                    (C135 * C112 + C5568 * C214) * C5557) *
                       C60) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C708 * C74 + C629 * C136 + C709 * C632 + C630 * C711 +
                     C710 * C634 + C631 * C712) *
                        C108 +
                    (C708 * C109 + C629 * C211 + C709 * C674 + C630 * C809 +
                     C710 * C676 + C631 * C810) *
                        C5557) *
                       C312 +
                   ((C708 * C75 + C629 * C137 + C709 * C633 + C630 * C713 +
                     C710 * C635 + C631 * C714) *
                        C108 +
                    (C708 * C110 + C629 * C212 + C709 * C675 + C630 * C811 +
                     C710 * C677 + C631 * C812) *
                        C5557) *
                       C5532) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::pow(Pi, 2.5) *
         (((C318 * C74 + C312 * C78 + C320 * C75 + C5532 * C79) * C135 +
           (C318 * C136 + C312 * C233 + C320 * C137 + C5532 * C234) * C5568) *
              C314 +
          ((C318 * C321 + C312 * C325 + C320 * C322 + C5532 * C326) * C135 +
           (C318 * C402 + C312 * C535 + C320 * C403 + C5532 * C536) * C5568) *
              C315 +
          ((C318 * C323 + C312 * C327 + C320 * C324 + C5532 * C328) * C135 +
           (C318 * C404 + C312 * C537 + C320 * C405 + C5532 * C538) * C5568) *
              C316) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C67 * C74 + C57 * C78 + C69 * C75 + C58 * C79 + C71 * C76 +
           C59 * C80 + C73 * C77 + C60 * C81) *
              C135 +
          (C67 * C136 + C57 * C233 + C69 * C137 + C58 * C234 + C71 * C138 +
           C59 * C235 + C73 * C139 + C60 * C236) *
              C5568) *
         C5557 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C318 * C74 + C312 * C78 + C320 * C75 + C5532 * C79) * C708 +
          (C318 * C136 + C312 * C233 + C320 * C137 + C5532 * C234) * C629 +
          (C318 * C632 + C312 * C636 + C320 * C633 + C5532 * C637) * C709 +
          (C318 * C711 + C312 * C839 + C320 * C713 + C5532 * C840) * C630 +
          (C318 * C634 + C312 * C638 + C320 * C635 + C5532 * C639) * C710 +
          (C318 * C712 + C312 * C841 + C320 * C714 + C5532 * C842) * C631) *
         C5557 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] += (-std::pow(Pi, 2.5) *
                  (((C365 * C74 + C314 * C109 + C366 * C321 + C315 * C368 +
                     C367 * C323 + C316 * C369) *
                        C135 +
                    (C365 * C136 + C314 * C255 + C366 * C402 + C315 * C565 +
                     C367 * C404 + C316 * C566) *
                        C5568) *
                       C312 +
                   ((C365 * C75 + C314 * C110 + C366 * C322 + C315 * C370 +
                     C367 * C324 + C316 * C371) *
                        C135 +
                    (C365 * C137 + C314 * C256 + C366 * C403 + C315 * C567 +
                     C367 * C405 + C316 * C568) *
                        C5568) *
                       C5532) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C108 * C74 + C5557 * C109) * C135 +
                    (C108 * C136 + C5557 * C255) * C5568) *
                       C57 +
                   ((C108 * C75 + C5557 * C110) * C135 +
                    (C108 * C137 + C5557 * C256) * C5568) *
                       C58 +
                   ((C108 * C76 + C5557 * C111) * C135 +
                    (C108 * C138 + C5557 * C257) * C5568) *
                       C59 +
                   ((C108 * C77 + C5557 * C112) * C135 +
                    (C108 * C139 + C5557 * C258) * C5568) *
                       C60) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C108 * C74 + C5557 * C109) * C708 +
                    (C108 * C136 + C5557 * C255) * C629 +
                    (C108 * C632 + C5557 * C674) * C709 +
                    (C108 * C711 + C5557 * C869) * C630 +
                    (C108 * C634 + C5557 * C676) * C710 +
                    (C108 * C712 + C5557 * C870) * C631) *
                       C312 +
                   ((C108 * C75 + C5557 * C110) * C708 +
                    (C108 * C137 + C5557 * C256) * C629 +
                    (C108 * C633 + C5557 * C675) * C709 +
                    (C108 * C713 + C5557 * C871) * C630 +
                    (C108 * C635 + C5557 * C677) * C710 +
                    (C108 * C714 + C5557 * C872) * C631) *
                       C5532) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C277 * C74 + C283 + C283 + C5568 * C278) * C314 +
           (C277 * C321 + C600 + C600 + C5568 * C595) * C315 +
           (C277 * C323 + C601 + C601 + C5568 * C596) * C316) *
              C312 +
          ((C277 * C75 + C284 + C284 + C5568 * C279) * C314 +
           (C277 * C322 + C602 + C602 + C5568 * C597) * C315 +
           (C277 * C324 + C603 + C603 + C5568 * C598) * C316) *
              C5532) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C277 * C74 + C283 + C283 + C5568 * C278) * C5557 * C57 +
          (C277 * C75 + C284 + C284 + C5568 * C279) * C5557 * C58 +
          (C277 * C76 + C285 + C285 + C5568 * C280) * C5557 * C59 +
          (C277 * C77 + C286 + C286 + C5568 * C281) * C5557 * C60) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C899 * C74 + C907 + C907 + C629 * C278 + C900 * C632 + C908 + C908 +
           C630 * C902 + C901 * C634 + C909 + C909 + C631 * C903) *
              C5557 * C312 +
          (C899 * C75 + C910 + C910 + C629 * C279 + C900 * C633 + C911 + C911 +
           C630 * C904 + C901 * C635 + C912 + C912 + C631 * C905) *
              C5557 * C5532) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C943 * C74 + C953 + C953 + C5729 * C82 + C945 * C75 + C954 + C954 +
           C5730 * C83 + C947 * C76 + C955 + C955 + C940 * C84) *
              C5711 +
          (C943 * C632 + C1219 + C1219 + C5729 * C640 + C945 * C633 + C1220 +
           C1220 + C5730 * C641 + C947 * C1215 + C1221 + C1221 + C940 * C1217) *
              C5632) *
         C5557 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C108 * C74 + C5557 * C109) * C944 +
                    (C108 * C78 + C5557 * C113) * C5729 +
                    (C108 * C75 + C5557 * C110) * C946 +
                    (C108 * C79 + C5557 * C114) * C5730 +
                    (C108 * C76 + C5557 * C111) * C948 +
                    (C108 * C80 + C5557 * C115) * C940) *
                       C5711 +
                   ((C108 * C632 + C5557 * C674) * C944 +
                    (C108 * C636 + C5557 * C678) * C5729 +
                    (C108 * C633 + C5557 * C675) * C946 +
                    (C108 * C637 + C5557 * C679) * C5730 +
                    (C108 * C1215 + C5557 * C1247) * C948 +
                    (C108 * C1216 + C5557 * C1248) * C940) *
                       C5632) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C1275 * C74 + C5711 * C136 + C1276 * C632 + C5632 * C711) * C944 +
          (C1275 * C78 + C5711 * C140 + C1276 * C636 + C5632 * C715) * C5729 +
          (C1275 * C75 + C5711 * C137 + C1276 * C633 + C5632 * C713) * C946 +
          (C1275 * C79 + C5711 * C141 + C1276 * C637 + C5632 * C717) * C5730 +
          (C1275 * C76 + C5711 * C138 + C1276 * C1215 + C5632 * C1277) * C948 +
          (C1275 * C80 + C5711 * C142 + C1276 * C1216 + C5632 * C1278) * C940) *
         C5557 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C944 * C74 + C5729 * C78 + C946 * C75 + C5730 * C79 +
                     C948 * C76 + C940 * C80) *
                        C108 +
                    (C944 * C109 + C5729 * C162 + C946 * C110 + C5730 * C163 +
                     C948 * C111 + C940 * C164) *
                        C5557) *
                       C5711 +
                   ((C944 * C632 + C5729 * C636 + C946 * C633 + C5730 * C637 +
                     C948 * C1215 + C940 * C1216) *
                        C108 +
                    (C944 * C674 + C5729 * C745 + C946 * C675 + C5730 * C746 +
                     C948 * C1247 + C940 * C1305) *
                        C5557) *
                       C5632) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C184 * C74 + C190 + C190 + C5557 * C185) * C5729 +
                    (C184 * C75 + C191 + C191 + C5557 * C186) * C5730 +
                    (C184 * C76 + C192 + C192 + C5557 * C187) * C940) *
                       C5711 +
                   ((C184 * C632 + C780 + C780 + C5557 * C775) * C5729 +
                    (C184 * C633 + C781 + C781 + C5557 * C776) * C5730 +
                    (C184 * C1215 + C1334 + C1334 + C5557 * C1332) * C940) *
                       C5632) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1275 * C74 + C5711 * C136 + C1276 * C632 + C5632 * C711) * C108 +
           (C1275 * C109 + C5711 * C211 + C1276 * C674 + C5632 * C809) *
               C5557) *
              C5729 +
          ((C1275 * C75 + C5711 * C137 + C1276 * C633 + C5632 * C713) * C108 +
           (C1275 * C110 + C5711 * C212 + C1276 * C675 + C5632 * C811) *
               C5557) *
              C5730 +
          ((C1275 * C76 + C5711 * C138 + C1276 * C1215 + C5632 * C1277) * C108 +
           (C1275 * C111 + C5711 * C213 + C1276 * C1247 + C5632 * C1360) *
               C5557) *
              C940) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C944 * C74 + C5729 * C78 + C946 * C75 + C5730 * C79 +
                    C948 * C76 + C940 * C80) *
                       C1275 +
                   (C944 * C136 + C5729 * C233 + C946 * C137 + C5730 * C234 +
                    C948 * C138 + C940 * C235) *
                       C5711 +
                   (C944 * C632 + C5729 * C636 + C946 * C633 + C5730 * C637 +
                    C948 * C1215 + C940 * C1216) *
                       C1276 +
                   (C944 * C711 + C5729 * C839 + C946 * C713 + C5730 * C840 +
                    C948 * C1277 + C940 * C1387) *
                       C5632) *
                  C5557 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C108 * C74 + C5557 * C109) * C1275 +
                    (C108 * C136 + C5557 * C255) * C5711 +
                    (C108 * C632 + C5557 * C674) * C1276 +
                    (C108 * C711 + C5557 * C869) * C5632) *
                       C5729 +
                   ((C108 * C75 + C5557 * C110) * C1275 +
                    (C108 * C137 + C5557 * C256) * C5711 +
                    (C108 * C633 + C5557 * C675) * C1276 +
                    (C108 * C713 + C5557 * C871) * C5632) *
                       C5730 +
                   ((C108 * C76 + C5557 * C111) * C1275 +
                    (C108 * C138 + C5557 * C257) * C5711 +
                    (C108 * C1215 + C5557 * C1247) * C1276 +
                    (C108 * C1277 + C5557 * C1414) * C5632) *
                       C940) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C1441 * C74 + C1445 + C1445 + C5711 * C278 + C1442 * C632 +
                    C1446 + C1446 + C5632 * C902) *
                       C5557 * C5729 +
                   (C1441 * C75 + C1447 + C1447 + C5711 * C279 + C1442 * C633 +
                    C1448 + C1448 + C5632 * C904) *
                       C5557 * C5730 +
                   (C1441 * C76 + C1449 + C1449 + C5711 * C280 + C1442 * C1215 +
                    C1450 + C1450 + C5632 * C1443) *
                       C5557 * C940) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (C66 * C74 + C87 + C87 + C57 * C82 + C68 * C75 + C88 + C88 +
                   C58 * C83 + C70 * C76 + C89 + C89 + C59 * C84 + C72 * C77 +
                   C90 + C90 + C60 * C85) *
                  C5568 * C5557 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C317 * C74 + C334 + C334 + C312 * C82 + C319 * C75 + C335 +
                    C335 + C5532 * C83) *
                       C5568 * C314 +
                   (C317 * C321 + C336 + C336 + C312 * C329 + C319 * C322 +
                    C337 + C337 + C5532 * C330) *
                       C5568 * C315 +
                   (C317 * C323 + C338 + C338 + C312 * C331 + C319 * C324 +
                    C339 + C339 + C5532 * C332) *
                       C5568 * C316) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eexy[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C108 * C74 + C5557 * C109) * C67 +
                   (C108 * C78 + C5557 * C113) * C57 +
                   (C108 * C75 + C5557 * C110) * C69 +
                   (C108 * C79 + C5557 * C114) * C58 +
                   (C108 * C76 + C5557 * C111) * C71 +
                   (C108 * C80 + C5557 * C115) * C59 +
                   (C108 * C77 + C5557 * C112) * C73 +
                   (C108 * C81 + C5557 * C116) * C60) *
                  C5568 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C365 * C74 + C314 * C109 + C366 * C321 + C315 * C368 +
                    C367 * C323 + C316 * C369) *
                       C318 +
                   (C365 * C78 + C314 * C113 + C366 * C325 + C315 * C372 +
                    C367 * C327 + C316 * C373) *
                       C312 +
                   (C365 * C75 + C314 * C110 + C366 * C322 + C315 * C370 +
                    C367 * C324 + C316 * C371) *
                       C320 +
                   (C365 * C79 + C314 * C114 + C366 * C326 + C315 * C374 +
                    C367 * C328 + C316 * C375) *
                       C5532) *
                  C5568 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eexz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C135 * C74 + C5568 * C136) * C67 +
                   (C135 * C78 + C5568 * C140) * C57 +
                   (C135 * C75 + C5568 * C137) * C69 +
                   (C135 * C79 + C5568 * C141) * C58 +
                   (C135 * C76 + C5568 * C138) * C71 +
                   (C135 * C80 + C5568 * C142) * C59 +
                   (C135 * C77 + C5568 * C139) * C73 +
                   (C135 * C81 + C5568 * C143) * C60) *
                  C5557 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5568 * C136) * C318 +
                    (C135 * C78 + C5568 * C140) * C312 +
                    (C135 * C75 + C5568 * C137) * C320 +
                    (C135 * C79 + C5568 * C141) * C5532) *
                       C314 +
                   ((C135 * C321 + C5568 * C402) * C318 +
                    (C135 * C325 + C5568 * C406) * C312 +
                    (C135 * C322 + C5568 * C403) * C320 +
                    (C135 * C326 + C5568 * C407) * C5532) *
                       C315 +
                   ((C135 * C323 + C5568 * C404) * C318 +
                    (C135 * C327 + C5568 * C408) * C312 +
                    (C135 * C324 + C5568 * C405) * C320 +
                    (C135 * C328 + C5568 * C409) * C5532) *
                       C316) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C67 * C74 + C57 * C78 + C69 * C75 + C58 * C79 + C71 * C76 +
           C59 * C80 + C73 * C77 + C60 * C81) *
              C108 +
          (C67 * C109 + C57 * C162 + C69 * C110 + C58 * C163 + C71 * C111 +
           C59 * C164 + C73 * C112 + C60 * C165) *
              C5557) *
         C5568 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C318 * C74 + C312 * C78 + C320 * C75 + C5532 * C79) * C365 +
          (C318 * C109 + C312 * C162 + C320 * C110 + C5532 * C163) * C314 +
          (C318 * C321 + C312 * C325 + C320 * C322 + C5532 * C326) * C366 +
          (C318 * C368 + C312 * C436 + C320 * C370 + C5532 * C437) * C315 +
          (C318 * C323 + C312 * C327 + C320 * C324 + C5532 * C328) * C367 +
          (C318 * C369 + C312 * C438 + C320 * C371 + C5532 * C439) * C316) *
         C5568 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C184 * C74 + C190 + C190 + C5557 * C185) * C57 +
          (C184 * C75 + C191 + C191 + C5557 * C186) * C58 +
          (C184 * C76 + C192 + C192 + C5557 * C187) * C59 +
          (C184 * C77 + C193 + C193 + C5557 * C188) * C60) *
         C5568 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C466 * C74 + C474 + C474 + C314 * C185 + C467 * C321 + C475 + C475 +
           C315 * C469 + C468 * C323 + C476 + C476 + C316 * C470) *
              C312 +
          (C466 * C75 + C477 + C477 + C314 * C186 + C467 * C322 + C478 + C478 +
           C315 * C471 + C468 * C324 + C479 + C479 + C316 * C472) *
              C5532) *
         C5568 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5568 * C136) * C108 +
                    (C135 * C109 + C5568 * C211) * C5557) *
                       C57 +
                   ((C135 * C75 + C5568 * C137) * C108 +
                    (C135 * C110 + C5568 * C212) * C5557) *
                       C58 +
                   ((C135 * C76 + C5568 * C138) * C108 +
                    (C135 * C111 + C5568 * C213) * C5557) *
                       C59 +
                   ((C135 * C77 + C5568 * C139) * C108 +
                    (C135 * C112 + C5568 * C214) * C5557) *
                       C60) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5568 * C136) * C365 +
                    (C135 * C109 + C5568 * C211) * C314 +
                    (C135 * C321 + C5568 * C402) * C366 +
                    (C135 * C368 + C5568 * C505) * C315 +
                    (C135 * C323 + C5568 * C404) * C367 +
                    (C135 * C369 + C5568 * C506) * C316) *
                       C312 +
                   ((C135 * C75 + C5568 * C137) * C365 +
                    (C135 * C110 + C5568 * C212) * C314 +
                    (C135 * C322 + C5568 * C403) * C366 +
                    (C135 * C370 + C5568 * C507) * C315 +
                    (C135 * C324 + C5568 * C405) * C367 +
                    (C135 * C371 + C5568 * C508) * C316) *
                       C5532) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C67 * C74 + C57 * C78 + C69 * C75 + C58 * C79 + C71 * C76 +
           C59 * C80 + C73 * C77 + C60 * C81) *
              C135 +
          (C67 * C136 + C57 * C233 + C69 * C137 + C58 * C234 + C71 * C138 +
           C59 * C235 + C73 * C139 + C60 * C236) *
              C5568) *
         C5557 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C318 * C74 + C312 * C78 + C320 * C75 + C5532 * C79) * C135 +
           (C318 * C136 + C312 * C233 + C320 * C137 + C5532 * C234) * C5568) *
              C314 +
          ((C318 * C321 + C312 * C325 + C320 * C322 + C5532 * C326) * C135 +
           (C318 * C402 + C312 * C535 + C320 * C403 + C5532 * C536) * C5568) *
              C315 +
          ((C318 * C323 + C312 * C327 + C320 * C324 + C5532 * C328) * C135 +
           (C318 * C404 + C312 * C537 + C320 * C405 + C5532 * C538) * C5568) *
              C316) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezy[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C108 * C74 + C5557 * C109) * C135 +
                    (C108 * C136 + C5557 * C255) * C5568) *
                       C57 +
                   ((C108 * C75 + C5557 * C110) * C135 +
                    (C108 * C137 + C5557 * C256) * C5568) *
                       C58 +
                   ((C108 * C76 + C5557 * C111) * C135 +
                    (C108 * C138 + C5557 * C257) * C5568) *
                       C59 +
                   ((C108 * C77 + C5557 * C112) * C135 +
                    (C108 * C139 + C5557 * C258) * C5568) *
                       C60) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C365 * C74 + C314 * C109 + C366 * C321 + C315 * C368 +
                     C367 * C323 + C316 * C369) *
                        C135 +
                    (C365 * C136 + C314 * C255 + C366 * C402 + C315 * C565 +
                     C367 * C404 + C316 * C566) *
                        C5568) *
                       C312 +
                   ((C365 * C75 + C314 * C110 + C366 * C322 + C315 * C370 +
                     C367 * C324 + C316 * C371) *
                        C135 +
                    (C365 * C137 + C314 * C256 + C366 * C403 + C315 * C567 +
                     C367 * C405 + C316 * C568) *
                        C5568) *
                       C5532) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C277 * C74 + C283 + C283 + C5568 * C278) * C5557 * C57 +
                   (C277 * C75 + C284 + C284 + C5568 * C279) * C5557 * C58 +
                   (C277 * C76 + C285 + C285 + C5568 * C280) * C5557 * C59 +
                   (C277 * C77 + C286 + C286 + C5568 * C281) * C5557 * C60) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C277 * C74 + C283 + C283 + C5568 * C278) * C314 +
                    (C277 * C321 + C600 + C600 + C5568 * C595) * C315 +
                    (C277 * C323 + C601 + C601 + C5568 * C596) * C316) *
                       C312 +
                   ((C277 * C75 + C284 + C284 + C5568 * C279) * C314 +
                    (C277 * C322 + C602 + C602 + C5568 * C597) * C315 +
                    (C277 * C324 + C603 + C603 + C5568 * C598) * C316) *
                       C5532) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eexx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C2541 * C74 + C2546 + C2546 + C5700 * C82 + C2543 * C75 +
                    C2547 + C2547 + C5532 * C83) *
                       C5568 * C5731 +
                   (C2541 * C321 + C2548 + C2548 + C5700 * C329 + C2543 * C322 +
                    C2549 + C2549 + C5532 * C330) *
                       C5568 * C5732 +
                   (C2541 * C323 + C2550 + C2550 + C5700 * C331 + C2543 * C324 +
                    C2551 + C2551 + C5532 * C332) *
                       C5568 * C2540) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C2577 * C74 + C5731 * C109 + C2578 * C321 + C5732 * C368 +
                    C2579 * C323 + C2540 * C369) *
                       C4861 +
                   (C2577 * C78 + C5731 * C113 + C2578 * C325 + C5732 * C372 +
                    C2579 * C327 + C2540 * C373) *
                       C5700 +
                   (C2577 * C75 + C5731 * C110 + C2578 * C322 + C5732 * C370 +
                    C2579 * C324 + C2540 * C371) *
                       C4851 +
                   (C2577 * C79 + C5731 * C114 + C2578 * C326 + C5732 * C374 +
                    C2579 * C328 + C2540 * C375) *
                       C5532) *
                  C5568 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5568 * C136) * C4861 +
                    (C135 * C78 + C5568 * C140) * C5700 +
                    (C135 * C75 + C5568 * C137) * C4851 +
                    (C135 * C79 + C5568 * C141) * C5532) *
                       C5731 +
                   ((C135 * C321 + C5568 * C402) * C4861 +
                    (C135 * C325 + C5568 * C406) * C5700 +
                    (C135 * C322 + C5568 * C403) * C4851 +
                    (C135 * C326 + C5568 * C407) * C5532) *
                       C5732 +
                   ((C135 * C323 + C5568 * C404) * C4861 +
                    (C135 * C327 + C5568 * C408) * C5700 +
                    (C135 * C324 + C5568 * C405) * C4851 +
                    (C135 * C328 + C5568 * C409) * C5532) *
                       C2540) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C4861 * C74 + C5700 * C78 + C4851 * C75 + C5532 * C79) * C2577 +
          (C4861 * C109 + C5700 * C162 + C4851 * C110 + C5532 * C163) * C5731 +
          (C4861 * C321 + C5700 * C325 + C4851 * C322 + C5532 * C326) * C2578 +
          (C4861 * C368 + C5700 * C436 + C4851 * C370 + C5532 * C437) * C5732 +
          (C4861 * C323 + C5700 * C327 + C4851 * C324 + C5532 * C328) * C2579 +
          (C4861 * C369 + C5700 * C438 + C4851 * C371 + C5532 * C439) * C2540) *
         C5568 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C2658 * C74 + C2662 + C2662 + C5731 * C185 + C2659 * C321 + C2663 +
           C2663 + C5732 * C469 + C2660 * C323 + C2664 + C2664 + C2540 * C470) *
              C5700 +
          (C2658 * C75 + C2665 + C2665 + C5731 * C186 + C2659 * C322 + C2666 +
           C2666 + C5732 * C471 + C2660 * C324 + C2667 + C2667 + C2540 * C472) *
              C5532) *
         C5568 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5568 * C136) * C2577 +
                    (C135 * C109 + C5568 * C211) * C5731 +
                    (C135 * C321 + C5568 * C402) * C2578 +
                    (C135 * C368 + C5568 * C505) * C5732 +
                    (C135 * C323 + C5568 * C404) * C2579 +
                    (C135 * C369 + C5568 * C506) * C2540) *
                       C5700 +
                   ((C135 * C75 + C5568 * C137) * C2577 +
                    (C135 * C110 + C5568 * C212) * C5731 +
                    (C135 * C322 + C5568 * C403) * C2578 +
                    (C135 * C370 + C5568 * C507) * C5732 +
                    (C135 * C324 + C5568 * C405) * C2579 +
                    (C135 * C371 + C5568 * C508) * C2540) *
                       C5532) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4861 * C74 + C5700 * C78 + C4851 * C75 + C5532 * C79) * C135 +
           (C4861 * C136 + C5700 * C233 + C4851 * C137 + C5532 * C234) *
               C5568) *
              C5731 +
          ((C4861 * C321 + C5700 * C325 + C4851 * C322 + C5532 * C326) * C135 +
           (C4861 * C402 + C5700 * C535 + C4851 * C403 + C5532 * C536) *
               C5568) *
              C5732 +
          ((C4861 * C323 + C5700 * C327 + C4851 * C324 + C5532 * C328) * C135 +
           (C4861 * C404 + C5700 * C537 + C4851 * C405 + C5532 * C538) *
               C5568) *
              C2540) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2577 * C74 + C5731 * C109 + C2578 * C321 + C5732 * C368 +
                     C2579 * C323 + C2540 * C369) *
                        C135 +
                    (C2577 * C136 + C5731 * C255 + C2578 * C402 + C5732 * C565 +
                     C2579 * C404 + C2540 * C566) *
                        C5568) *
                       C5700 +
                   ((C2577 * C75 + C5731 * C110 + C2578 * C322 + C5732 * C370 +
                     C2579 * C324 + C2540 * C371) *
                        C135 +
                    (C2577 * C137 + C5731 * C256 + C2578 * C403 + C5732 * C567 +
                     C2579 * C405 + C2540 * C568) *
                        C5568) *
                       C5532) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C277 * C74 + C283 + C283 + C5568 * C278) * C5731 +
                    (C277 * C321 + C600 + C600 + C5568 * C595) * C5732 +
                    (C277 * C323 + C601 + C601 + C5568 * C596) * C2540) *
                       C5700 +
                   ((C277 * C75 + C284 + C284 + C5568 * C279) * C5731 +
                    (C277 * C322 + C602 + C602 + C5568 * C597) * C5732 +
                    (C277 * C324 + C603 + C603 + C5568 * C598) * C2540) *
                       C5532) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexx[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2076 * C74 + C2082 + C2082 + C5527 * C82) * C5711 +
                    (C2076 * C632 + C2282 + C2282 + C5527 * C640) * C5632) *
                       C5731 +
                   ((C2076 * C321 + C2083 + C2083 + C5527 * C329) * C5711 +
                    (C2076 * C1484 + C2284 + C2284 + C5527 * C1488) * C5632) *
                       C5732 +
                   ((C2076 * C323 + C2084 + C2084 + C5527 * C331) * C5711 +
                    (C2076 * C3109 + C3113 + C3113 + C5527 * C3111) * C5632) *
                       C2540) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexy[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2577 * C74 + C5731 * C109 + C2578 * C321 + C5732 * C368 +
                     C2579 * C323 + C2540 * C369) *
                        C2077 +
                    (C2577 * C78 + C5731 * C113 + C2578 * C325 + C5732 * C372 +
                     C2579 * C327 + C2540 * C373) *
                        C5527) *
                       C5711 +
                   ((C2577 * C632 + C5731 * C674 + C2578 * C1484 +
                     C5732 * C1526 + C2579 * C3109 + C2540 * C3139) *
                        C2077 +
                    (C2577 * C636 + C5731 * C678 + C2578 * C1486 +
                     C5732 * C1528 + C2579 * C3110 + C2540 * C3140) *
                        C5527) *
                       C5632) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1275 * C74 + C5711 * C136 + C1276 * C632 + C5632 * C711) * C2077 +
           (C1275 * C78 + C5711 * C140 + C1276 * C636 + C5632 * C715) * C5527) *
              C5731 +
          ((C1275 * C321 + C5711 * C402 + C1276 * C1484 + C5632 * C1564) *
               C2077 +
           (C1275 * C325 + C5711 * C406 + C1276 * C1486 + C5632 * C1566) *
               C5527) *
              C5732 +
          ((C1275 * C323 + C5711 * C404 + C1276 * C3109 + C5632 * C3167) *
               C2077 +
           (C1275 * C327 + C5711 * C408 + C1276 * C3110 + C5632 * C3168) *
               C5527) *
              C2540) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2077 * C74 + C5527 * C78) * C2577 +
                    (C2077 * C109 + C5527 * C162) * C5731 +
                    (C2077 * C321 + C5527 * C325) * C2578 +
                    (C2077 * C368 + C5527 * C436) * C5732 +
                    (C2077 * C323 + C5527 * C327) * C2579 +
                    (C2077 * C369 + C5527 * C438) * C2540) *
                       C5711 +
                   ((C2077 * C632 + C5527 * C636) * C2577 +
                    (C2077 * C674 + C5527 * C745) * C5731 +
                    (C2077 * C1484 + C5527 * C1486) * C2578 +
                    (C2077 * C1526 + C5527 * C1602) * C5732 +
                    (C2077 * C3109 + C5527 * C3110) * C2579 +
                    (C2077 * C3139 + C5527 * C3195) * C2540) *
                       C5632) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C2658 * C74 + C2662 + C2662 + C5731 * C185 + C2659 * C321 + C2663 +
           C2663 + C5732 * C469 + C2660 * C323 + C2664 + C2664 + C2540 * C470) *
              C5527 * C5711 +
          (C2658 * C632 + C3224 + C3224 + C5731 * C775 + C2659 * C1484 + C3225 +
           C3225 + C5732 * C1638 + C2660 * C3109 + C3226 + C3226 +
           C2540 * C3222) *
              C5527 * C5632) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C1275 * C74 + C5711 * C136 + C1276 * C632 + C5632 * C711) * C2577 +
          (C1275 * C109 + C5711 * C211 + C1276 * C674 + C5632 * C809) * C5731 +
          (C1275 * C321 + C5711 * C402 + C1276 * C1484 + C5632 * C1564) *
              C2578 +
          (C1275 * C368 + C5711 * C505 + C1276 * C1526 + C5632 * C1678) *
              C5732 +
          (C1275 * C323 + C5711 * C404 + C1276 * C3109 + C5632 * C3167) *
              C2579 +
          (C1275 * C369 + C5711 * C506 + C1276 * C3139 + C5632 * C3252) *
              C2540) *
         C5527 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezx[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2077 * C74 + C5527 * C78) * C1275 +
                    (C2077 * C136 + C5527 * C233) * C5711 +
                    (C2077 * C632 + C5527 * C636) * C1276 +
                    (C2077 * C711 + C5527 * C839) * C5632) *
                       C5731 +
                   ((C2077 * C321 + C5527 * C325) * C1275 +
                    (C2077 * C402 + C5527 * C535) * C5711 +
                    (C2077 * C1484 + C5527 * C1486) * C1276 +
                    (C2077 * C1564 + C5527 * C1714) * C5632) *
                       C5732 +
                   ((C2077 * C323 + C5527 * C327) * C1275 +
                    (C2077 * C404 + C5527 * C537) * C5711 +
                    (C2077 * C3109 + C5527 * C3110) * C1276 +
                    (C2077 * C3167 + C5527 * C3279) * C5632) *
                       C2540) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezy[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C2577 * C74 + C5731 * C109 + C2578 * C321 + C5732 * C368 +
                    C2579 * C323 + C2540 * C369) *
                       C1275 +
                   (C2577 * C136 + C5731 * C255 + C2578 * C402 + C5732 * C565 +
                    C2579 * C404 + C2540 * C566) *
                       C5711 +
                   (C2577 * C632 + C5731 * C674 + C2578 * C1484 +
                    C5732 * C1526 + C2579 * C3109 + C2540 * C3139) *
                       C1276 +
                   (C2577 * C711 + C5731 * C869 + C2578 * C1564 +
                    C5732 * C1750 + C2579 * C3167 + C2540 * C3306) *
                       C5632) *
                  C5527 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezz[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C1441 * C74 + C1445 + C1445 + C5711 * C278 + C1442 * C632 +
                    C1446 + C1446 + C5632 * C902) *
                       C5731 +
                   (C1441 * C321 + C1789 + C1789 + C5711 * C595 +
                    C1442 * C1484 + C1790 + C1790 + C5632 * C1786) *
                       C5732 +
                   (C1441 * C323 + C3335 + C3335 + C5711 * C596 +
                    C1442 * C3109 + C3336 + C3336 + C5632 * C3333) *
                       C2540) *
                  C5527 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::pow(Pi, 2.5) *
         ((C2076 * C74 + C2082 + C2082 + C5527 * C82) * C5568 * C2072 +
          (C2076 * C321 + C2083 + C2083 + C5527 * C329) * C5568 * C2073 +
          (C2076 * C323 + C2084 + C2084 + C5527 * C331) * C5568 * C2074 +
          (C2076 * C2078 + C2085 + C2085 + C5527 * C2080) * C5568 * C2075) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C1823 * C74 + C1830 + C1830 + C1818 * C82 + C1825 * C75 + C1831 +
           C1831 + C1819 * C83 + C1827 * C76 + C1832 + C1832 + C1820 * C84) *
              C5568 * C1821 +
          (C1823 * C321 + C1833 + C1833 + C1818 * C329 + C1825 * C322 + C1834 +
           C1834 + C1819 * C330 + C1827 * C949 + C1835 + C1835 + C1820 * C951) *
              C5568 * C5606) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2076 * C74 + C2082 + C2082 + C5527 * C82) * C629 +
           (C2076 * C632 + C2282 + C2282 + C5527 * C640) * C630 +
           (C2076 * C634 + C2283 + C2283 + C5527 * C642) * C631) *
              C1821 +
          ((C2076 * C321 + C2083 + C2083 + C5527 * C329) * C629 +
           (C2076 * C1484 + C2284 + C2284 + C5527 * C1488) * C630 +
           (C2076 * C2278 + C2285 + C2285 + C5527 * C2280) * C631) *
              C5606) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::pow(Pi, 2.5) *
         ((C2103 * C74 + C2072 * C109 + C2104 * C321 + C2073 * C368 +
           C2105 * C323 + C2074 * C369 + C2106 * C2078 + C2075 * C2107) *
              C2077 +
          (C2103 * C78 + C2072 * C113 + C2104 * C325 + C2073 * C372 +
           C2105 * C327 + C2074 * C373 + C2106 * C2079 + C2075 * C2108) *
              C5527) *
         C5568 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C1861 * C74 + C1821 * C109 + C1862 * C321 + C5606 * C368) * C1824 +
          (C1861 * C78 + C1821 * C113 + C1862 * C325 + C5606 * C372) * C1818 +
          (C1861 * C75 + C1821 * C110 + C1862 * C322 + C5606 * C370) * C1826 +
          (C1861 * C79 + C1821 * C114 + C1862 * C326 + C5606 * C374) * C1819 +
          (C1861 * C76 + C1821 * C111 + C1862 * C949 + C5606 * C986) * C1828 +
          (C1861 * C80 + C1821 * C115 + C1862 * C950 + C5606 * C987) * C1820) *
         C5568 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1861 * C74 + C1821 * C109 + C1862 * C321 + C5606 * C368) * C2077 +
           (C1861 * C78 + C1821 * C113 + C1862 * C325 + C5606 * C372) * C5527) *
              C629 +
          ((C1861 * C632 + C1821 * C674 + C1862 * C1484 + C5606 * C1526) *
               C2077 +
           (C1861 * C636 + C1821 * C678 + C1862 * C1486 + C5606 * C1528) *
               C5527) *
              C630 +
          ((C1861 * C634 + C1821 * C676 + C1862 * C2278 + C5606 * C2311) *
               C2077 +
           (C1861 * C638 + C1821 * C680 + C1862 * C2279 + C5606 * C2312) *
               C5527) *
              C631) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] += (-std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5568 * C136) * C2077 +
                    (C135 * C78 + C5568 * C140) * C5527) *
                       C2072 +
                   ((C135 * C321 + C5568 * C402) * C2077 +
                    (C135 * C325 + C5568 * C406) * C5527) *
                       C2073 +
                   ((C135 * C323 + C5568 * C404) * C2077 +
                    (C135 * C327 + C5568 * C408) * C5527) *
                       C2074 +
                   ((C135 * C2078 + C5568 * C2127) * C2077 +
                    (C135 * C2079 + C5568 * C2128) * C5527) *
                       C2075) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5568 * C136) * C1824 +
                    (C135 * C78 + C5568 * C140) * C1818 +
                    (C135 * C75 + C5568 * C137) * C1826 +
                    (C135 * C79 + C5568 * C141) * C1819 +
                    (C135 * C76 + C5568 * C138) * C1828 +
                    (C135 * C80 + C5568 * C142) * C1820) *
                       C1821 +
                   ((C135 * C321 + C5568 * C402) * C1824 +
                    (C135 * C325 + C5568 * C406) * C1818 +
                    (C135 * C322 + C5568 * C403) * C1826 +
                    (C135 * C326 + C5568 * C407) * C1819 +
                    (C135 * C949 + C5568 * C1014) * C1828 +
                    (C135 * C950 + C5568 * C1015) * C1820) *
                       C5606) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C708 * C74 + C629 * C136 + C709 * C632 + C630 * C711 +
                     C710 * C634 + C631 * C712) *
                        C2077 +
                    (C708 * C78 + C629 * C140 + C709 * C636 + C630 * C715 +
                     C710 * C638 + C631 * C716) *
                        C5527) *
                       C1821 +
                   ((C708 * C321 + C629 * C402 + C709 * C1484 + C630 * C1564 +
                     C710 * C2278 + C631 * C2339) *
                        C2077 +
                    (C708 * C325 + C629 * C406 + C709 * C1486 + C630 * C1566 +
                     C710 * C2279 + C631 * C2340) *
                        C5527) *
                       C5606) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[7] += (-std::pow(Pi, 2.5) *
                  ((C2077 * C74 + C5527 * C78) * C2103 +
                   (C2077 * C109 + C5527 * C162) * C2072 +
                   (C2077 * C321 + C5527 * C325) * C2104 +
                   (C2077 * C368 + C5527 * C436) * C2073 +
                   (C2077 * C323 + C5527 * C327) * C2105 +
                   (C2077 * C369 + C5527 * C438) * C2074 +
                   (C2077 * C2078 + C5527 * C2079) * C2106 +
                   (C2077 * C2107 + C5527 * C2147) * C2075) *
                  C5568 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C1824 * C74 + C1818 * C78 + C1826 * C75 + C1819 * C79 +
                    C1828 * C76 + C1820 * C80) *
                       C1861 +
                   (C1824 * C109 + C1818 * C162 + C1826 * C110 + C1819 * C163 +
                    C1828 * C111 + C1820 * C164) *
                       C1821 +
                   (C1824 * C321 + C1818 * C325 + C1826 * C322 + C1819 * C326 +
                    C1828 * C949 + C1820 * C950) *
                       C1862 +
                   (C1824 * C368 + C1818 * C436 + C1826 * C370 + C1819 * C437 +
                    C1828 * C986 + C1820 * C1042) *
                       C5606) *
                  C5568 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C2077 * C74 + C5527 * C78) * C1861 +
                    (C2077 * C109 + C5527 * C162) * C1821 +
                    (C2077 * C321 + C5527 * C325) * C1862 +
                    (C2077 * C368 + C5527 * C436) * C5606) *
                       C629 +
                   ((C2077 * C632 + C5527 * C636) * C1861 +
                    (C2077 * C674 + C5527 * C745) * C1821 +
                    (C2077 * C1484 + C5527 * C1486) * C1862 +
                    (C2077 * C1526 + C5527 * C1602) * C5606) *
                       C630 +
                   ((C2077 * C634 + C5527 * C638) * C1861 +
                    (C2077 * C676 + C5527 * C747) * C1821 +
                    (C2077 * C2278 + C5527 * C2279) * C1862 +
                    (C2077 * C2311 + C5527 * C2367) * C5606) *
                       C631) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::pow(Pi, 2.5) *
         (C2166 * C74 + C2172 + C2172 + C2072 * C185 + C2167 * C321 + C2173 +
          C2173 + C2073 * C469 + C2168 * C323 + C2174 + C2174 + C2074 * C470 +
          C2169 * C2078 + C2175 + C2175 + C2075 * C2170) *
         C5527 * C5568 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C1941 * C74 + C1944 + C1944 + C1821 * C185 + C1942 * C321 + C1945 +
           C1945 + C5606 * C469) *
              C1818 +
          (C1941 * C75 + C1946 + C1946 + C1821 * C186 + C1942 * C322 + C1947 +
           C1947 + C5606 * C471) *
              C1819 +
          (C1941 * C76 + C1948 + C1948 + C1821 * C187 + C1942 * C949 + C1949 +
           C1949 + C5606 * C1071) *
              C1820) *
         C5568 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C1941 * C74 + C1944 + C1944 + C1821 * C185 + C1942 * C321 + C1945 +
           C1945 + C5606 * C469) *
              C5527 * C629 +
          (C1941 * C632 + C2396 + C2396 + C1821 * C775 + C1942 * C1484 + C2397 +
           C2397 + C5606 * C1638) *
              C5527 * C630 +
          (C1941 * C634 + C2398 + C2398 + C1821 * C777 + C1942 * C2278 + C2399 +
           C2399 + C5606 * C2394) *
              C5527 * C631) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] += (-std::pow(Pi, 2.5) *
                  ((C135 * C74 + C5568 * C136) * C2103 +
                   (C135 * C109 + C5568 * C211) * C2072 +
                   (C135 * C321 + C5568 * C402) * C2104 +
                   (C135 * C368 + C5568 * C505) * C2073 +
                   (C135 * C323 + C5568 * C404) * C2105 +
                   (C135 * C369 + C5568 * C506) * C2074 +
                   (C135 * C2078 + C5568 * C2127) * C2106 +
                   (C135 * C2107 + C5568 * C2193) * C2075) *
                  C5527 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5568 * C136) * C1861 +
                    (C135 * C109 + C5568 * C211) * C1821 +
                    (C135 * C321 + C5568 * C402) * C1862 +
                    (C135 * C368 + C5568 * C505) * C5606) *
                       C1818 +
                   ((C135 * C75 + C5568 * C137) * C1861 +
                    (C135 * C110 + C5568 * C212) * C1821 +
                    (C135 * C322 + C5568 * C403) * C1862 +
                    (C135 * C370 + C5568 * C507) * C5606) *
                       C1819 +
                   ((C135 * C76 + C5568 * C138) * C1861 +
                    (C135 * C111 + C5568 * C213) * C1821 +
                    (C135 * C949 + C5568 * C1014) * C1862 +
                    (C135 * C986 + C5568 * C1104) * C5606) *
                       C1820) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C708 * C74 + C629 * C136 + C709 * C632 + C630 * C711 +
                    C710 * C634 + C631 * C712) *
                       C1861 +
                   (C708 * C109 + C629 * C211 + C709 * C674 + C630 * C809 +
                    C710 * C676 + C631 * C810) *
                       C1821 +
                   (C708 * C321 + C629 * C402 + C709 * C1484 + C630 * C1564 +
                    C710 * C2278 + C631 * C2339) *
                       C1862 +
                   (C708 * C368 + C629 * C505 + C709 * C1526 + C630 * C1678 +
                    C710 * C2311 + C631 * C2425) *
                       C5606) *
                  C5527 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezx[7] += (-std::pow(Pi, 2.5) *
                  (((C2077 * C74 + C5527 * C78) * C135 +
                    (C2077 * C136 + C5527 * C233) * C5568) *
                       C2072 +
                   ((C2077 * C321 + C5527 * C325) * C135 +
                    (C2077 * C402 + C5527 * C535) * C5568) *
                       C2073 +
                   ((C2077 * C323 + C5527 * C327) * C135 +
                    (C2077 * C404 + C5527 * C537) * C5568) *
                       C2074 +
                   ((C2077 * C2078 + C5527 * C2079) * C135 +
                    (C2077 * C2127 + C5527 * C2212) * C5568) *
                       C2075) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C1824 * C74 + C1818 * C78 + C1826 * C75 + C1819 * C79 +
                     C1828 * C76 + C1820 * C80) *
                        C135 +
                    (C1824 * C136 + C1818 * C233 + C1826 * C137 + C1819 * C234 +
                     C1828 * C138 + C1820 * C235) *
                        C5568) *
                       C1821 +
                   ((C1824 * C321 + C1818 * C325 + C1826 * C322 + C1819 * C326 +
                     C1828 * C949 + C1820 * C950) *
                        C135 +
                    (C1824 * C402 + C1818 * C535 + C1826 * C403 + C1819 * C536 +
                     C1828 * C1014 + C1820 * C1131) *
                        C5568) *
                       C5606) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C2077 * C74 + C5527 * C78) * C708 +
                    (C2077 * C136 + C5527 * C233) * C629 +
                    (C2077 * C632 + C5527 * C636) * C709 +
                    (C2077 * C711 + C5527 * C839) * C630 +
                    (C2077 * C634 + C5527 * C638) * C710 +
                    (C2077 * C712 + C5527 * C841) * C631) *
                       C1821 +
                   ((C2077 * C321 + C5527 * C325) * C708 +
                    (C2077 * C402 + C5527 * C535) * C629 +
                    (C2077 * C1484 + C5527 * C1486) * C709 +
                    (C2077 * C1564 + C5527 * C1714) * C630 +
                    (C2077 * C2278 + C5527 * C2279) * C710 +
                    (C2077 * C2339 + C5527 * C2452) * C631) *
                       C5606) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (-std::pow(Pi, 2.5) *
         ((C2103 * C74 + C2072 * C109 + C2104 * C321 + C2073 * C368 +
           C2105 * C323 + C2074 * C369 + C2106 * C2078 + C2075 * C2107) *
              C135 +
          (C2103 * C136 + C2072 * C255 + C2104 * C402 + C2073 * C565 +
           C2105 * C404 + C2074 * C566 + C2106 * C2127 + C2075 * C2231) *
              C5568) *
         C5527 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1861 * C74 + C1821 * C109 + C1862 * C321 + C5606 * C368) * C135 +
           (C1861 * C136 + C1821 * C255 + C1862 * C402 + C5606 * C565) *
               C5568) *
              C1818 +
          ((C1861 * C75 + C1821 * C110 + C1862 * C322 + C5606 * C370) * C135 +
           (C1861 * C137 + C1821 * C256 + C1862 * C403 + C5606 * C567) *
               C5568) *
              C1819 +
          ((C1861 * C76 + C1821 * C111 + C1862 * C949 + C5606 * C986) * C135 +
           (C1861 * C138 + C1821 * C257 + C1862 * C1014 + C5606 * C1158) *
               C5568) *
              C1820) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C1861 * C74 + C1821 * C109 + C1862 * C321 + C5606 * C368) * C708 +
          (C1861 * C136 + C1821 * C255 + C1862 * C402 + C5606 * C565) * C629 +
          (C1861 * C632 + C1821 * C674 + C1862 * C1484 + C5606 * C1526) * C709 +
          (C1861 * C711 + C1821 * C869 + C1862 * C1564 + C5606 * C1750) * C630 +
          (C1861 * C634 + C1821 * C676 + C1862 * C2278 + C5606 * C2311) * C710 +
          (C1861 * C712 + C1821 * C870 + C1862 * C2339 + C5606 * C2479) *
              C631) *
         C5527 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (-std::pow(Pi, 2.5) *
         ((C277 * C74 + C283 + C283 + C5568 * C278) * C2072 +
          (C277 * C321 + C600 + C600 + C5568 * C595) * C2073 +
          (C277 * C323 + C601 + C601 + C5568 * C596) * C2074 +
          (C277 * C2078 + C2252 + C2252 + C5568 * C2250) * C2075) *
         C5527 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C277 * C74 + C283 + C283 + C5568 * C278) * C1821 +
           (C277 * C321 + C600 + C600 + C5568 * C595) * C5606) *
              C1818 +
          ((C277 * C75 + C284 + C284 + C5568 * C279) * C1821 +
           (C277 * C322 + C602 + C602 + C5568 * C597) * C5606) *
              C1819 +
          ((C277 * C76 + C285 + C285 + C5568 * C280) * C1821 +
           (C277 * C949 + C1187 + C1187 + C5568 * C1185) * C5606) *
              C1820) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C899 * C74 + C907 + C907 + C629 * C278 + C900 * C632 + C908 + C908 +
           C630 * C902 + C901 * C634 + C909 + C909 + C631 * C903) *
              C1821 +
          (C899 * C321 + C2508 + C2508 + C629 * C595 + C900 * C1484 + C2509 +
           C2509 + C630 * C1786 + C901 * C2278 + C2510 + C2510 + C631 * C2506) *
              C5606) *
         C5527 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexx[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2541 * C74 + C2546 + C2546 + C5700 * C82 + C2543 * C75 +
                     C2547 + C2547 + C5532 * C83) *
                        C5711 +
                    (C2541 * C632 + C2806 + C2806 + C5700 * C640 +
                     C2543 * C633 + C2807 + C2807 + C5532 * C641) *
                        C5632) *
                       C1821 +
                   ((C2541 * C321 + C2548 + C2548 + C5700 * C329 +
                     C2543 * C322 + C2549 + C2549 + C5532 * C330) *
                        C5711 +
                    (C2541 * C1484 + C2808 + C2808 + C5700 * C1488 +
                     C2543 * C1485 + C2809 + C2809 + C5532 * C1489) *
                        C5632) *
                       C5606) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1861 * C74 + C1821 * C109 + C1862 * C321 + C5606 * C368) * C4861 +
           (C1861 * C78 + C1821 * C113 + C1862 * C325 + C5606 * C372) * C5700 +
           (C1861 * C75 + C1821 * C110 + C1862 * C322 + C5606 * C370) * C4851 +
           (C1861 * C79 + C1821 * C114 + C1862 * C326 + C5606 * C374) * C5532) *
              C5711 +
          ((C1861 * C632 + C1821 * C674 + C1862 * C1484 + C5606 * C1526) *
               C4861 +
           (C1861 * C636 + C1821 * C678 + C1862 * C1486 + C5606 * C1528) *
               C5700 +
           (C1861 * C633 + C1821 * C675 + C1862 * C1485 + C5606 * C1527) *
               C4851 +
           (C1861 * C637 + C1821 * C679 + C1862 * C1487 + C5606 * C1529) *
               C5532) *
              C5632) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1275 * C74 + C5711 * C136 + C1276 * C632 + C5632 * C711) * C4861 +
           (C1275 * C78 + C5711 * C140 + C1276 * C636 + C5632 * C715) * C5700 +
           (C1275 * C75 + C5711 * C137 + C1276 * C633 + C5632 * C713) * C4851 +
           (C1275 * C79 + C5711 * C141 + C1276 * C637 + C5632 * C717) * C5532) *
              C1821 +
          ((C1275 * C321 + C5711 * C402 + C1276 * C1484 + C5632 * C1564) *
               C4861 +
           (C1275 * C325 + C5711 * C406 + C1276 * C1486 + C5632 * C1566) *
               C5700 +
           (C1275 * C322 + C5711 * C403 + C1276 * C1485 + C5632 * C1565) *
               C4851 +
           (C1275 * C326 + C5711 * C407 + C1276 * C1487 + C5632 * C1567) *
               C5532) *
              C5606) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4861 * C74 + C5700 * C78 + C4851 * C75 + C5532 * C79) * C1861 +
           (C4861 * C109 + C5700 * C162 + C4851 * C110 + C5532 * C163) * C1821 +
           (C4861 * C321 + C5700 * C325 + C4851 * C322 + C5532 * C326) * C1862 +
           (C4861 * C368 + C5700 * C436 + C4851 * C370 + C5532 * C437) *
               C5606) *
              C5711 +
          ((C4861 * C632 + C5700 * C636 + C4851 * C633 + C5532 * C637) * C1861 +
           (C4861 * C674 + C5700 * C745 + C4851 * C675 + C5532 * C746) * C1821 +
           (C4861 * C1484 + C5700 * C1486 + C4851 * C1485 + C5532 * C1487) *
               C1862 +
           (C4861 * C1526 + C5700 * C1602 + C4851 * C1527 + C5532 * C1603) *
               C5606) *
              C5632) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C1941 * C74 + C1944 + C1944 + C1821 * C185 + C1942 * C321 +
                     C1945 + C1945 + C5606 * C469) *
                        C5700 +
                    (C1941 * C75 + C1946 + C1946 + C1821 * C186 + C1942 * C322 +
                     C1947 + C1947 + C5606 * C471) *
                        C5532) *
                       C5711 +
                   ((C1941 * C632 + C2396 + C2396 + C1821 * C775 +
                     C1942 * C1484 + C2397 + C2397 + C5606 * C1638) *
                        C5700 +
                    (C1941 * C633 + C2946 + C2946 + C1821 * C776 +
                     C1942 * C1485 + C2947 + C2947 + C5606 * C1639) *
                        C5532) *
                       C5632) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1275 * C74 + C5711 * C136 + C1276 * C632 + C5632 * C711) * C1861 +
           (C1275 * C109 + C5711 * C211 + C1276 * C674 + C5632 * C809) * C1821 +
           (C1275 * C321 + C5711 * C402 + C1276 * C1484 + C5632 * C1564) *
               C1862 +
           (C1275 * C368 + C5711 * C505 + C1276 * C1526 + C5632 * C1678) *
               C5606) *
              C5700 +
          ((C1275 * C75 + C5711 * C137 + C1276 * C633 + C5632 * C713) * C1861 +
           (C1275 * C110 + C5711 * C212 + C1276 * C675 + C5632 * C811) * C1821 +
           (C1275 * C322 + C5711 * C403 + C1276 * C1485 + C5632 * C1565) *
               C1862 +
           (C1275 * C370 + C5711 * C507 + C1276 * C1527 + C5632 * C1679) *
               C5606) *
              C5532) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4861 * C74 + C5700 * C78 + C4851 * C75 + C5532 * C79) * C1275 +
           (C4861 * C136 + C5700 * C233 + C4851 * C137 + C5532 * C234) * C5711 +
           (C4861 * C632 + C5700 * C636 + C4851 * C633 + C5532 * C637) * C1276 +
           (C4861 * C711 + C5700 * C839 + C4851 * C713 + C5532 * C840) *
               C5632) *
              C1821 +
          ((C4861 * C321 + C5700 * C325 + C4851 * C322 + C5532 * C326) * C1275 +
           (C4861 * C402 + C5700 * C535 + C4851 * C403 + C5532 * C536) * C5711 +
           (C4861 * C1484 + C5700 * C1486 + C4851 * C1485 + C5532 * C1487) *
               C1276 +
           (C4861 * C1564 + C5700 * C1714 + C4851 * C1565 + C5532 * C1715) *
               C5632) *
              C5606) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1861 * C74 + C1821 * C109 + C1862 * C321 + C5606 * C368) * C1275 +
           (C1861 * C136 + C1821 * C255 + C1862 * C402 + C5606 * C565) * C5711 +
           (C1861 * C632 + C1821 * C674 + C1862 * C1484 + C5606 * C1526) *
               C1276 +
           (C1861 * C711 + C1821 * C869 + C1862 * C1564 + C5606 * C1750) *
               C5632) *
              C5700 +
          ((C1861 * C75 + C1821 * C110 + C1862 * C322 + C5606 * C370) * C1275 +
           (C1861 * C137 + C1821 * C256 + C1862 * C403 + C5606 * C567) * C5711 +
           (C1861 * C633 + C1821 * C675 + C1862 * C1485 + C5606 * C1527) *
               C1276 +
           (C1861 * C713 + C1821 * C871 + C1862 * C1565 + C5606 * C1751) *
               C5632) *
              C5532) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C1441 * C74 + C1445 + C1445 + C5711 * C278 + C1442 * C632 +
                     C1446 + C1446 + C5632 * C902) *
                        C1821 +
                    (C1441 * C321 + C1789 + C1789 + C5711 * C595 +
                     C1442 * C1484 + C1790 + C1790 + C5632 * C1786) *
                        C5606) *
                       C5700 +
                   ((C1441 * C75 + C1447 + C1447 + C5711 * C279 + C1442 * C633 +
                     C1448 + C1448 + C5632 * C904) *
                        C1821 +
                    (C1441 * C322 + C1791 + C1791 + C5711 * C597 +
                     C1442 * C1485 + C1792 + C1792 + C5632 * C1787) *
                        C5606) *
                       C5532) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1823 * C74 + C1830 + C1830 + C1818 * C82 + C1825 * C75 + C1831 +
           C1831 + C1819 * C83 + C1827 * C76 + C1832 + C1832 + C1820 * C84) *
              C5568 * C1821 +
          (C1823 * C321 + C1833 + C1833 + C1818 * C329 + C1825 * C322 + C1834 +
           C1834 + C1819 * C330 + C1827 * C949 + C1835 + C1835 + C1820 * C951) *
              C5568 * C5606) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C2076 * C74 + C2082 + C2082 + C5527 * C82) * C5568 * C2072 +
          (C2076 * C321 + C2083 + C2083 + C5527 * C329) * C5568 * C2073 +
          (C2076 * C323 + C2084 + C2084 + C5527 * C331) * C5568 * C2074 +
          (C2076 * C2078 + C2085 + C2085 + C5527 * C2080) * C5568 * C2075) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1861 * C74 + C1821 * C109 + C1862 * C321 + C5606 * C368) * C1824 +
          (C1861 * C78 + C1821 * C113 + C1862 * C325 + C5606 * C372) * C1818 +
          (C1861 * C75 + C1821 * C110 + C1862 * C322 + C5606 * C370) * C1826 +
          (C1861 * C79 + C1821 * C114 + C1862 * C326 + C5606 * C374) * C1819 +
          (C1861 * C76 + C1821 * C111 + C1862 * C949 + C5606 * C986) * C1828 +
          (C1861 * C80 + C1821 * C115 + C1862 * C950 + C5606 * C987) * C1820) *
         C5568 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C2103 * C74 + C2072 * C109 + C2104 * C321 + C2073 * C368 +
           C2105 * C323 + C2074 * C369 + C2106 * C2078 + C2075 * C2107) *
              C2077 +
          (C2103 * C78 + C2072 * C113 + C2104 * C325 + C2073 * C372 +
           C2105 * C327 + C2074 * C373 + C2106 * C2079 + C2075 * C2108) *
              C5527) *
         C5568 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexz[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5568 * C136) * C1824 +
                    (C135 * C78 + C5568 * C140) * C1818 +
                    (C135 * C75 + C5568 * C137) * C1826 +
                    (C135 * C79 + C5568 * C141) * C1819 +
                    (C135 * C76 + C5568 * C138) * C1828 +
                    (C135 * C80 + C5568 * C142) * C1820) *
                       C1821 +
                   ((C135 * C321 + C5568 * C402) * C1824 +
                    (C135 * C325 + C5568 * C406) * C1818 +
                    (C135 * C322 + C5568 * C403) * C1826 +
                    (C135 * C326 + C5568 * C407) * C1819 +
                    (C135 * C949 + C5568 * C1014) * C1828 +
                    (C135 * C950 + C5568 * C1015) * C1820) *
                       C5606) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5568 * C136) * C2077 +
                    (C135 * C78 + C5568 * C140) * C5527) *
                       C2072 +
                   ((C135 * C321 + C5568 * C402) * C2077 +
                    (C135 * C325 + C5568 * C406) * C5527) *
                       C2073 +
                   ((C135 * C323 + C5568 * C404) * C2077 +
                    (C135 * C327 + C5568 * C408) * C5527) *
                       C2074 +
                   ((C135 * C2078 + C5568 * C2127) * C2077 +
                    (C135 * C2079 + C5568 * C2128) * C5527) *
                       C2075) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C1824 * C74 + C1818 * C78 + C1826 * C75 + C1819 * C79 +
                    C1828 * C76 + C1820 * C80) *
                       C1861 +
                   (C1824 * C109 + C1818 * C162 + C1826 * C110 + C1819 * C163 +
                    C1828 * C111 + C1820 * C164) *
                       C1821 +
                   (C1824 * C321 + C1818 * C325 + C1826 * C322 + C1819 * C326 +
                    C1828 * C949 + C1820 * C950) *
                       C1862 +
                   (C1824 * C368 + C1818 * C436 + C1826 * C370 + C1819 * C437 +
                    C1828 * C986 + C1820 * C1042) *
                       C5606) *
                  C5568 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C2077 * C74 + C5527 * C78) * C2103 +
                   (C2077 * C109 + C5527 * C162) * C2072 +
                   (C2077 * C321 + C5527 * C325) * C2104 +
                   (C2077 * C368 + C5527 * C436) * C2073 +
                   (C2077 * C323 + C5527 * C327) * C2105 +
                   (C2077 * C369 + C5527 * C438) * C2074 +
                   (C2077 * C2078 + C5527 * C2079) * C2106 +
                   (C2077 * C2107 + C5527 * C2147) * C2075) *
                  C5568 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1941 * C74 + C1944 + C1944 + C1821 * C185 + C1942 * C321 + C1945 +
           C1945 + C5606 * C469) *
              C1818 +
          (C1941 * C75 + C1946 + C1946 + C1821 * C186 + C1942 * C322 + C1947 +
           C1947 + C5606 * C471) *
              C1819 +
          (C1941 * C76 + C1948 + C1948 + C1821 * C187 + C1942 * C949 + C1949 +
           C1949 + C5606 * C1071) *
              C1820) *
         C5568 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (C2166 * C74 + C2172 + C2172 + C2072 * C185 + C2167 * C321 + C2173 +
          C2173 + C2073 * C469 + C2168 * C323 + C2174 + C2174 + C2074 * C470 +
          C2169 * C2078 + C2175 + C2175 + C2075 * C2170) *
         C5527 * C5568 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyz[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5568 * C136) * C1861 +
                    (C135 * C109 + C5568 * C211) * C1821 +
                    (C135 * C321 + C5568 * C402) * C1862 +
                    (C135 * C368 + C5568 * C505) * C5606) *
                       C1818 +
                   ((C135 * C75 + C5568 * C137) * C1861 +
                    (C135 * C110 + C5568 * C212) * C1821 +
                    (C135 * C322 + C5568 * C403) * C1862 +
                    (C135 * C370 + C5568 * C507) * C5606) *
                       C1819 +
                   ((C135 * C76 + C5568 * C138) * C1861 +
                    (C135 * C111 + C5568 * C213) * C1821 +
                    (C135 * C949 + C5568 * C1014) * C1862 +
                    (C135 * C986 + C5568 * C1104) * C5606) *
                       C1820) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C135 * C74 + C5568 * C136) * C2103 +
                   (C135 * C109 + C5568 * C211) * C2072 +
                   (C135 * C321 + C5568 * C402) * C2104 +
                   (C135 * C368 + C5568 * C505) * C2073 +
                   (C135 * C323 + C5568 * C404) * C2105 +
                   (C135 * C369 + C5568 * C506) * C2074 +
                   (C135 * C2078 + C5568 * C2127) * C2106 +
                   (C135 * C2107 + C5568 * C2193) * C2075) *
                  C5527 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezx[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C1824 * C74 + C1818 * C78 + C1826 * C75 + C1819 * C79 +
                     C1828 * C76 + C1820 * C80) *
                        C135 +
                    (C1824 * C136 + C1818 * C233 + C1826 * C137 + C1819 * C234 +
                     C1828 * C138 + C1820 * C235) *
                        C5568) *
                       C1821 +
                   ((C1824 * C321 + C1818 * C325 + C1826 * C322 + C1819 * C326 +
                     C1828 * C949 + C1820 * C950) *
                        C135 +
                    (C1824 * C402 + C1818 * C535 + C1826 * C403 + C1819 * C536 +
                     C1828 * C1014 + C1820 * C1131) *
                        C5568) *
                       C5606) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C2077 * C74 + C5527 * C78) * C135 +
                    (C2077 * C136 + C5527 * C233) * C5568) *
                       C2072 +
                   ((C2077 * C321 + C5527 * C325) * C135 +
                    (C2077 * C402 + C5527 * C535) * C5568) *
                       C2073 +
                   ((C2077 * C323 + C5527 * C327) * C135 +
                    (C2077 * C404 + C5527 * C537) * C5568) *
                       C2074 +
                   ((C2077 * C2078 + C5527 * C2079) * C135 +
                    (C2077 * C2127 + C5527 * C2212) * C5568) *
                       C2075) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1861 * C74 + C1821 * C109 + C1862 * C321 + C5606 * C368) * C135 +
           (C1861 * C136 + C1821 * C255 + C1862 * C402 + C5606 * C565) *
               C5568) *
              C1818 +
          ((C1861 * C75 + C1821 * C110 + C1862 * C322 + C5606 * C370) * C135 +
           (C1861 * C137 + C1821 * C256 + C1862 * C403 + C5606 * C567) *
               C5568) *
              C1819 +
          ((C1861 * C76 + C1821 * C111 + C1862 * C949 + C5606 * C986) * C135 +
           (C1861 * C138 + C1821 * C257 + C1862 * C1014 + C5606 * C1158) *
               C5568) *
              C1820) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C2103 * C74 + C2072 * C109 + C2104 * C321 + C2073 * C368 +
           C2105 * C323 + C2074 * C369 + C2106 * C2078 + C2075 * C2107) *
              C135 +
          (C2103 * C136 + C2072 * C255 + C2104 * C402 + C2073 * C565 +
           C2105 * C404 + C2074 * C566 + C2106 * C2127 + C2075 * C2231) *
              C5568) *
         C5527 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezz[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C277 * C74 + C283 + C283 + C5568 * C278) * C1821 +
                    (C277 * C321 + C600 + C600 + C5568 * C595) * C5606) *
                       C1818 +
                   ((C277 * C75 + C284 + C284 + C5568 * C279) * C1821 +
                    (C277 * C322 + C602 + C602 + C5568 * C597) * C5606) *
                       C1819 +
                   ((C277 * C76 + C285 + C285 + C5568 * C280) * C1821 +
                    (C277 * C949 + C1187 + C1187 + C5568 * C1185) * C5606) *
                       C1820) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C277 * C74 + C283 + C283 + C5568 * C278) * C2072 +
                   (C277 * C321 + C600 + C600 + C5568 * C595) * C2073 +
                   (C277 * C323 + C601 + C601 + C5568 * C596) * C2074 +
                   (C277 * C2078 + C2252 + C2252 + C5568 * C2250) * C2075) *
                  C5527 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eexx[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C2541 * C74 + C2546 + C2546 + C5700 * C82 + C2543 * C75 +
                      C2547 + C2547 + C5532 * C83) *
                         C3362 +
                     (C2541 * C632 + C2806 + C2806 + C5700 * C640 +
                      C2543 * C633 + C2807 + C2807 + C5532 * C641) *
                         C5632) *
                        C5710 +
                    ((C2541 * C321 + C2548 + C2548 + C5700 * C329 +
                      C2543 * C322 + C2549 + C2549 + C5532 * C330) *
                         C3362 +
                     (C2541 * C1484 + C2808 + C2808 + C5700 * C1488 +
                      C2543 * C1485 + C2809 + C2809 + C5532 * C1489) *
                         C5632) *
                        C5606) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C984 * C74 + C5710 * C109 + C985 * C321 + C5606 * C368) * C4861 +
           (C984 * C78 + C5710 * C113 + C985 * C325 + C5606 * C372) * C5700 +
           (C984 * C75 + C5710 * C110 + C985 * C322 + C5606 * C370) * C4851 +
           (C984 * C79 + C5710 * C114 + C985 * C326 + C5606 * C374) * C5532) *
              C3362 +
          ((C984 * C632 + C5710 * C674 + C985 * C1484 + C5606 * C1526) * C4861 +
           (C984 * C636 + C5710 * C678 + C985 * C1486 + C5606 * C1528) * C5700 +
           (C984 * C633 + C5710 * C675 + C985 * C1485 + C5606 * C1527) * C4851 +
           (C984 * C637 + C5710 * C679 + C985 * C1487 + C5606 * C1529) *
               C5532) *
              C5632) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3419 * C74 + C3362 * C136 + C3420 * C632 + C5632 * C711) * C4861 +
           (C3419 * C78 + C3362 * C140 + C3420 * C636 + C5632 * C715) * C5700 +
           (C3419 * C75 + C3362 * C137 + C3420 * C633 + C5632 * C713) * C4851 +
           (C3419 * C79 + C3362 * C141 + C3420 * C637 + C5632 * C717) * C5532) *
              C5710 +
          ((C3419 * C321 + C3362 * C402 + C3420 * C1484 + C5632 * C1564) *
               C4861 +
           (C3419 * C325 + C3362 * C406 + C3420 * C1486 + C5632 * C1566) *
               C5700 +
           (C3419 * C322 + C3362 * C403 + C3420 * C1485 + C5632 * C1565) *
               C4851 +
           (C3419 * C326 + C3362 * C407 + C3420 * C1487 + C5632 * C1567) *
               C5532) *
              C5606) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4861 * C74 + C5700 * C78 + C4851 * C75 + C5532 * C79) * C984 +
           (C4861 * C109 + C5700 * C162 + C4851 * C110 + C5532 * C163) * C5710 +
           (C4861 * C321 + C5700 * C325 + C4851 * C322 + C5532 * C326) * C985 +
           (C4861 * C368 + C5700 * C436 + C4851 * C370 + C5532 * C437) *
               C5606) *
              C3362 +
          ((C4861 * C632 + C5700 * C636 + C4851 * C633 + C5532 * C637) * C984 +
           (C4861 * C674 + C5700 * C745 + C4851 * C675 + C5532 * C746) * C5710 +
           (C4861 * C1484 + C5700 * C1486 + C4851 * C1485 + C5532 * C1487) *
               C985 +
           (C4861 * C1526 + C5700 * C1602 + C4851 * C1527 + C5532 * C1603) *
               C5606) *
              C5632) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C1069 * C74 + C1073 + C1073 + C5710 * C185 +
                      C1070 * C321 + C1074 + C1074 + C5606 * C469) *
                         C5700 +
                     (C1069 * C75 + C1075 + C1075 + C5710 * C186 +
                      C1070 * C322 + C1076 + C1076 + C5606 * C471) *
                         C5532) *
                        C3362 +
                    ((C1069 * C632 + C1641 + C1641 + C5710 * C775 +
                      C1070 * C1484 + C1642 + C1642 + C5606 * C1638) *
                         C5700 +
                     (C1069 * C633 + C1643 + C1643 + C5710 * C776 +
                      C1070 * C1485 + C1644 + C1644 + C5606 * C1639) *
                         C5532) *
                        C5632) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3419 * C74 + C3362 * C136 + C3420 * C632 + C5632 * C711) * C984 +
           (C3419 * C109 + C3362 * C211 + C3420 * C674 + C5632 * C809) * C5710 +
           (C3419 * C321 + C3362 * C402 + C3420 * C1484 + C5632 * C1564) *
               C985 +
           (C3419 * C368 + C3362 * C505 + C3420 * C1526 + C5632 * C1678) *
               C5606) *
              C5700 +
          ((C3419 * C75 + C3362 * C137 + C3420 * C633 + C5632 * C713) * C984 +
           (C3419 * C110 + C3362 * C212 + C3420 * C675 + C5632 * C811) * C5710 +
           (C3419 * C322 + C3362 * C403 + C3420 * C1485 + C5632 * C1565) *
               C985 +
           (C3419 * C370 + C3362 * C507 + C3420 * C1527 + C5632 * C1679) *
               C5606) *
              C5532) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4861 * C74 + C5700 * C78 + C4851 * C75 + C5532 * C79) * C3419 +
           (C4861 * C136 + C5700 * C233 + C4851 * C137 + C5532 * C234) * C3362 +
           (C4861 * C632 + C5700 * C636 + C4851 * C633 + C5532 * C637) * C3420 +
           (C4861 * C711 + C5700 * C839 + C4851 * C713 + C5532 * C840) *
               C5632) *
              C5710 +
          ((C4861 * C321 + C5700 * C325 + C4851 * C322 + C5532 * C326) * C3419 +
           (C4861 * C402 + C5700 * C535 + C4851 * C403 + C5532 * C536) * C3362 +
           (C4861 * C1484 + C5700 * C1486 + C4851 * C1485 + C5532 * C1487) *
               C3420 +
           (C4861 * C1564 + C5700 * C1714 + C4851 * C1565 + C5532 * C1715) *
               C5632) *
              C5606) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C984 * C74 + C5710 * C109 + C985 * C321 + C5606 * C368) * C3419 +
           (C984 * C136 + C5710 * C255 + C985 * C402 + C5606 * C565) * C3362 +
           (C984 * C632 + C5710 * C674 + C985 * C1484 + C5606 * C1526) * C3420 +
           (C984 * C711 + C5710 * C869 + C985 * C1564 + C5606 * C1750) *
               C5632) *
              C5700 +
          ((C984 * C75 + C5710 * C110 + C985 * C322 + C5606 * C370) * C3419 +
           (C984 * C137 + C5710 * C256 + C985 * C403 + C5606 * C567) * C3362 +
           (C984 * C633 + C5710 * C675 + C985 * C1485 + C5606 * C1527) * C3420 +
           (C984 * C713 + C5710 * C871 + C985 * C1565 + C5606 * C1751) *
               C5632) *
              C5532) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezz[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C3577 * C74 + C3580 + C3580 + C3362 * C278 +
                      C3578 * C632 + C3581 + C3581 + C5632 * C902) *
                         C5710 +
                     (C3577 * C321 + C3823 + C3823 + C3362 * C595 +
                      C3578 * C1484 + C3824 + C3824 + C5632 * C1786) *
                         C5606) *
                        C5700 +
                    ((C3577 * C75 + C3582 + C3582 + C3362 * C279 +
                      C3578 * C633 + C3583 + C3583 + C5632 * C904) *
                         C5710 +
                     (C3577 * C322 + C4326 + C4326 + C3362 * C597 +
                      C3578 * C1485 + C4327 + C4327 + C5632 * C1787) *
                         C5606) *
                        C5532) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eexx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C2076 * C74 + C2082 + C2082 + C5527 * C82) * C5733 +
                     (C2076 * C632 + C2282 + C2282 + C5527 * C640) * C5734 +
                     (C2076 * C634 + C2283 + C2283 + C5527 * C642) * C4355) *
                        C5710 +
                    ((C2076 * C321 + C2083 + C2083 + C5527 * C329) * C5733 +
                     (C2076 * C1484 + C2284 + C2284 + C5527 * C1488) * C5734 +
                     (C2076 * C2278 + C2285 + C2285 + C5527 * C2280) * C4355) *
                        C5606) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C984 * C74 + C5710 * C109 + C985 * C321 + C5606 * C368) * C2077 +
           (C984 * C78 + C5710 * C113 + C985 * C325 + C5606 * C372) * C5527) *
              C5733 +
          ((C984 * C632 + C5710 * C674 + C985 * C1484 + C5606 * C1526) * C2077 +
           (C984 * C636 + C5710 * C678 + C985 * C1486 + C5606 * C1528) *
               C5527) *
              C5734 +
          ((C984 * C634 + C5710 * C676 + C985 * C2278 + C5606 * C2311) * C2077 +
           (C984 * C638 + C5710 * C680 + C985 * C2279 + C5606 * C2312) *
               C5527) *
              C4355) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4410 * C74 + C5733 * C136 + C4411 * C632 + C5734 * C711 +
                      C4412 * C634 + C4355 * C712) *
                         C2077 +
                     (C4410 * C78 + C5733 * C140 + C4411 * C636 + C5734 * C715 +
                      C4412 * C638 + C4355 * C716) *
                         C5527) *
                        C5710 +
                    ((C4410 * C321 + C5733 * C402 + C4411 * C1484 +
                      C5734 * C1564 + C4412 * C2278 + C4355 * C2339) *
                         C2077 +
                     (C4410 * C325 + C5733 * C406 + C4411 * C1486 +
                      C5734 * C1566 + C4412 * C2279 + C4355 * C2340) *
                         C5527) *
                        C5606) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C2077 * C74 + C5527 * C78) * C984 +
                     (C2077 * C109 + C5527 * C162) * C5710 +
                     (C2077 * C321 + C5527 * C325) * C985 +
                     (C2077 * C368 + C5527 * C436) * C5606) *
                        C5733 +
                    ((C2077 * C632 + C5527 * C636) * C984 +
                     (C2077 * C674 + C5527 * C745) * C5710 +
                     (C2077 * C1484 + C5527 * C1486) * C985 +
                     (C2077 * C1526 + C5527 * C1602) * C5606) *
                        C5734 +
                    ((C2077 * C634 + C5527 * C638) * C984 +
                     (C2077 * C676 + C5527 * C747) * C5710 +
                     (C2077 * C2278 + C5527 * C2279) * C985 +
                     (C2077 * C2311 + C5527 * C2367) * C5606) *
                        C4355) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((C1069 * C74 + C1073 + C1073 + C5710 * C185 + C1070 * C321 +
                     C1074 + C1074 + C5606 * C469) *
                        C5527 * C5733 +
                    (C1069 * C632 + C1641 + C1641 + C5710 * C775 +
                     C1070 * C1484 + C1642 + C1642 + C5606 * C1638) *
                        C5527 * C5734 +
                    (C1069 * C634 + C4709 + C4709 + C5710 * C777 +
                     C1070 * C2278 + C4710 + C4710 + C5606 * C2394) *
                        C5527 * C4355) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((C4410 * C74 + C5733 * C136 + C4411 * C632 + C5734 * C711 +
                     C4412 * C634 + C4355 * C712) *
                        C984 +
                    (C4410 * C109 + C5733 * C211 + C4411 * C674 + C5734 * C809 +
                     C4412 * C676 + C4355 * C810) *
                        C5710 +
                    (C4410 * C321 + C5733 * C402 + C4411 * C1484 +
                     C5734 * C1564 + C4412 * C2278 + C4355 * C2339) *
                        C985 +
                    (C4410 * C368 + C5733 * C505 + C4411 * C1526 +
                     C5734 * C1678 + C4412 * C2311 + C4355 * C2425) *
                        C5606) *
                   C5527 * C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eezx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C2077 * C74 + C5527 * C78) * C4410 +
                     (C2077 * C136 + C5527 * C233) * C5733 +
                     (C2077 * C632 + C5527 * C636) * C4411 +
                     (C2077 * C711 + C5527 * C839) * C5734 +
                     (C2077 * C634 + C5527 * C638) * C4412 +
                     (C2077 * C712 + C5527 * C841) * C4355) *
                        C5710 +
                    ((C2077 * C321 + C5527 * C325) * C4410 +
                     (C2077 * C402 + C5527 * C535) * C5733 +
                     (C2077 * C1484 + C5527 * C1486) * C4411 +
                     (C2077 * C1564 + C5527 * C1714) * C5734 +
                     (C2077 * C2278 + C5527 * C2279) * C4412 +
                     (C2077 * C2339 + C5527 * C2452) * C4355) *
                        C5606) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C984 * C74 + C5710 * C109 + C985 * C321 + C5606 * C368) * C4410 +
          (C984 * C136 + C5710 * C255 + C985 * C402 + C5606 * C565) * C5733 +
          (C984 * C632 + C5710 * C674 + C985 * C1484 + C5606 * C1526) * C4411 +
          (C984 * C711 + C5710 * C869 + C985 * C1564 + C5606 * C1750) * C5734 +
          (C984 * C634 + C5710 * C676 + C985 * C2278 + C5606 * C2311) * C4412 +
          (C984 * C712 + C5710 * C870 + C985 * C2339 + C5606 * C2479) * C4355) *
         C5527 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C4569 * C74 + C4573 + C4573 + C5733 * C278 + C4570 * C632 + C4574 +
           C4574 + C5734 * C902 + C4571 * C634 + C4575 + C4575 + C4355 * C903) *
              C5710 +
          (C4569 * C321 + C4815 + C4815 + C5733 * C595 + C4570 * C1484 + C4816 +
           C4816 + C5734 * C1786 + C4571 * C2278 + C4817 + C4817 +
           C4355 * C2506) *
              C5606) *
         C5527 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (-std::pow(Pi, 2.5) *
         (((C2076 * C74 + C2082 + C2082 + C5527 * C82) * C3362 +
           (C2076 * C632 + C2282 + C2282 + C5527 * C640) * C5632) *
              C314 +
          ((C2076 * C321 + C2083 + C2083 + C5527 * C329) * C3362 +
           (C2076 * C1484 + C2284 + C2284 + C5527 * C1488) * C5632) *
              C315 +
          ((C2076 * C323 + C2084 + C2084 + C5527 * C331) * C3362 +
           (C2076 * C3109 + C3113 + C3113 + C5527 * C3111) * C5632) *
              C316) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C1823 * C74 + C1830 + C1830 + C1818 * C82 + C1825 * C75 + C1831 +
           C1831 + C1819 * C83 + C1827 * C76 + C1832 + C1832 + C1820 * C84) *
              C3362 +
          (C1823 * C632 + C3365 + C3365 + C1818 * C640 + C1825 * C633 + C3366 +
           C3366 + C1819 * C641 + C1827 * C1215 + C3367 + C3367 +
           C1820 * C1217) *
              C5632) *
         C5557 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C2076 * C74 + C2082 + C2082 + C5527 * C82) * C3844 +
          (C2076 * C632 + C2282 + C2282 + C5527 * C640) * C3845 +
          (C2076 * C634 + C2283 + C2283 + C5527 * C642) * C3846 +
          (C2076 * C3848 + C3852 + C3852 + C5527 * C3850) * C3847) *
         C5557 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] += (-std::pow(Pi, 2.5) *
                   (((C365 * C74 + C314 * C109 + C366 * C321 + C315 * C368 +
                      C367 * C323 + C316 * C369) *
                         C2077 +
                     (C365 * C78 + C314 * C113 + C366 * C325 + C315 * C372 +
                      C367 * C327 + C316 * C373) *
                         C5527) *
                        C3362 +
                    ((C365 * C632 + C314 * C674 + C366 * C1484 + C315 * C1526 +
                      C367 * C3109 + C316 * C3139) *
                         C2077 +
                     (C365 * C636 + C314 * C678 + C366 * C1486 + C315 * C1528 +
                      C367 * C3110 + C316 * C3140) *
                         C5527) *
                        C5632) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C108 * C74 + C5557 * C109) * C1824 +
                     (C108 * C78 + C5557 * C113) * C1818 +
                     (C108 * C75 + C5557 * C110) * C1826 +
                     (C108 * C79 + C5557 * C114) * C1819 +
                     (C108 * C76 + C5557 * C111) * C1828 +
                     (C108 * C80 + C5557 * C115) * C1820) *
                        C3362 +
                    ((C108 * C632 + C5557 * C674) * C1824 +
                     (C108 * C636 + C5557 * C678) * C1818 +
                     (C108 * C633 + C5557 * C675) * C1826 +
                     (C108 * C637 + C5557 * C679) * C1819 +
                     (C108 * C1215 + C5557 * C1247) * C1828 +
                     (C108 * C1216 + C5557 * C1248) * C1820) *
                        C5632) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C108 * C74 + C5557 * C109) * C2077 +
                     (C108 * C78 + C5557 * C113) * C5527) *
                        C3844 +
                    ((C108 * C632 + C5557 * C674) * C2077 +
                     (C108 * C636 + C5557 * C678) * C5527) *
                        C3845 +
                    ((C108 * C634 + C5557 * C676) * C2077 +
                     (C108 * C638 + C5557 * C680) * C5527) *
                        C3846 +
                    ((C108 * C3848 + C5557 * C3870) * C2077 +
                     (C108 * C3849 + C5557 * C3871) * C5527) *
                        C3847) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (-std::pow(Pi, 2.5) *
         (((C3419 * C74 + C3362 * C136 + C3420 * C632 + C5632 * C711) * C2077 +
           (C3419 * C78 + C3362 * C140 + C3420 * C636 + C5632 * C715) * C5527) *
              C314 +
          ((C3419 * C321 + C3362 * C402 + C3420 * C1484 + C5632 * C1564) *
               C2077 +
           (C3419 * C325 + C3362 * C406 + C3420 * C1486 + C5632 * C1566) *
               C5527) *
              C315 +
          ((C3419 * C323 + C3362 * C404 + C3420 * C3109 + C5632 * C3167) *
               C2077 +
           (C3419 * C327 + C3362 * C408 + C3420 * C3110 + C5632 * C3168) *
               C5527) *
              C316) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C3419 * C74 + C3362 * C136 + C3420 * C632 + C5632 * C711) * C1824 +
          (C3419 * C78 + C3362 * C140 + C3420 * C636 + C5632 * C715) * C1818 +
          (C3419 * C75 + C3362 * C137 + C3420 * C633 + C5632 * C713) * C1826 +
          (C3419 * C79 + C3362 * C141 + C3420 * C637 + C5632 * C717) * C1819 +
          (C3419 * C76 + C3362 * C138 + C3420 * C1215 + C5632 * C1277) * C1828 +
          (C3419 * C80 + C3362 * C142 + C3420 * C1216 + C5632 * C1278) *
              C1820) *
         C5557 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C3890 * C74 + C3844 * C136 + C3891 * C632 + C3845 * C711 +
           C3892 * C634 + C3846 * C712 + C3893 * C3848 + C3847 * C3894) *
              C2077 +
          (C3890 * C78 + C3844 * C140 + C3891 * C636 + C3845 * C715 +
           C3892 * C638 + C3846 * C716 + C3893 * C3849 + C3847 * C3895) *
              C5527) *
         C5557 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] += (-std::pow(Pi, 2.5) *
                   (((C2077 * C74 + C5527 * C78) * C365 +
                     (C2077 * C109 + C5527 * C162) * C314 +
                     (C2077 * C321 + C5527 * C325) * C366 +
                     (C2077 * C368 + C5527 * C436) * C315 +
                     (C2077 * C323 + C5527 * C327) * C367 +
                     (C2077 * C369 + C5527 * C438) * C316) *
                        C3362 +
                    ((C2077 * C632 + C5527 * C636) * C365 +
                     (C2077 * C674 + C5527 * C745) * C314 +
                     (C2077 * C1484 + C5527 * C1486) * C366 +
                     (C2077 * C1526 + C5527 * C1602) * C315 +
                     (C2077 * C3109 + C5527 * C3110) * C367 +
                     (C2077 * C3139 + C5527 * C3195) * C316) *
                        C5632) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C1824 * C74 + C1818 * C78 + C1826 * C75 + C1819 * C79 +
                      C1828 * C76 + C1820 * C80) *
                         C108 +
                     (C1824 * C109 + C1818 * C162 + C1826 * C110 +
                      C1819 * C163 + C1828 * C111 + C1820 * C164) *
                         C5557) *
                        C3362 +
                    ((C1824 * C632 + C1818 * C636 + C1826 * C633 +
                      C1819 * C637 + C1828 * C1215 + C1820 * C1216) *
                         C108 +
                     (C1824 * C674 + C1818 * C745 + C1826 * C675 +
                      C1819 * C746 + C1828 * C1247 + C1820 * C1305) *
                         C5557) *
                        C5632) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C2077 * C74 + C5527 * C78) * C108 +
                     (C2077 * C109 + C5527 * C162) * C5557) *
                        C3844 +
                    ((C2077 * C632 + C5527 * C636) * C108 +
                     (C2077 * C674 + C5527 * C745) * C5557) *
                        C3845 +
                    ((C2077 * C634 + C5527 * C638) * C108 +
                     (C2077 * C676 + C5527 * C747) * C5557) *
                        C3846 +
                    ((C2077 * C3848 + C5527 * C3849) * C108 +
                     (C2077 * C3870 + C5527 * C3914) * C5557) *
                        C3847) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (-std::pow(Pi, 2.5) *
         ((C466 * C74 + C474 + C474 + C314 * C185 + C467 * C321 + C475 + C475 +
           C315 * C469 + C468 * C323 + C476 + C476 + C316 * C470) *
              C5527 * C3362 +
          (C466 * C632 + C3716 + C3716 + C314 * C775 + C467 * C1484 + C3717 +
           C3717 + C315 * C1638 + C468 * C3109 + C3718 + C3718 + C316 * C3222) *
              C5527 * C5632) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C184 * C74 + C190 + C190 + C5557 * C185) * C1818 +
           (C184 * C75 + C191 + C191 + C5557 * C186) * C1819 +
           (C184 * C76 + C192 + C192 + C5557 * C187) * C1820) *
              C3362 +
          ((C184 * C632 + C780 + C780 + C5557 * C775) * C1818 +
           (C184 * C633 + C781 + C781 + C5557 * C776) * C1819 +
           (C184 * C1215 + C1334 + C1334 + C5557 * C1332) * C1820) *
              C5632) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C184 * C74 + C190 + C190 + C5557 * C185) * C5527 * C3844 +
          (C184 * C632 + C780 + C780 + C5557 * C775) * C5527 * C3845 +
          (C184 * C634 + C782 + C782 + C5557 * C777) * C5527 * C3846 +
          (C184 * C3848 + C3935 + C3935 + C5557 * C3933) * C5527 * C3847) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (-std::pow(Pi, 2.5) *
         ((C3419 * C74 + C3362 * C136 + C3420 * C632 + C5632 * C711) * C365 +
          (C3419 * C109 + C3362 * C211 + C3420 * C674 + C5632 * C809) * C314 +
          (C3419 * C321 + C3362 * C402 + C3420 * C1484 + C5632 * C1564) * C366 +
          (C3419 * C368 + C3362 * C505 + C3420 * C1526 + C5632 * C1678) * C315 +
          (C3419 * C323 + C3362 * C404 + C3420 * C3109 + C5632 * C3167) * C367 +
          (C3419 * C369 + C3362 * C506 + C3420 * C3139 + C5632 * C3252) *
              C316) *
         C5527 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3419 * C74 + C3362 * C136 + C3420 * C632 + C5632 * C711) * C108 +
           (C3419 * C109 + C3362 * C211 + C3420 * C674 + C5632 * C809) *
               C5557) *
              C1818 +
          ((C3419 * C75 + C3362 * C137 + C3420 * C633 + C5632 * C713) * C108 +
           (C3419 * C110 + C3362 * C212 + C3420 * C675 + C5632 * C811) *
               C5557) *
              C1819 +
          ((C3419 * C76 + C3362 * C138 + C3420 * C1215 + C5632 * C1277) * C108 +
           (C3419 * C111 + C3362 * C213 + C3420 * C1247 + C5632 * C1360) *
               C5557) *
              C1820) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C3890 * C74 + C3844 * C136 + C3891 * C632 + C3845 * C711 +
           C3892 * C634 + C3846 * C712 + C3893 * C3848 + C3847 * C3894) *
              C108 +
          (C3890 * C109 + C3844 * C211 + C3891 * C674 + C3845 * C809 +
           C3892 * C676 + C3846 * C810 + C3893 * C3870 + C3847 * C3953) *
              C5557) *
         C5527 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezx[12] += (-std::pow(Pi, 2.5) *
                   (((C2077 * C74 + C5527 * C78) * C3419 +
                     (C2077 * C136 + C5527 * C233) * C3362 +
                     (C2077 * C632 + C5527 * C636) * C3420 +
                     (C2077 * C711 + C5527 * C839) * C5632) *
                        C314 +
                    ((C2077 * C321 + C5527 * C325) * C3419 +
                     (C2077 * C402 + C5527 * C535) * C3362 +
                     (C2077 * C1484 + C5527 * C1486) * C3420 +
                     (C2077 * C1564 + C5527 * C1714) * C5632) *
                        C315 +
                    ((C2077 * C323 + C5527 * C327) * C3419 +
                     (C2077 * C404 + C5527 * C537) * C3362 +
                     (C2077 * C3109 + C5527 * C3110) * C3420 +
                     (C2077 * C3167 + C5527 * C3279) * C5632) *
                        C316) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((C1824 * C74 + C1818 * C78 + C1826 * C75 + C1819 * C79 +
                     C1828 * C76 + C1820 * C80) *
                        C3419 +
                    (C1824 * C136 + C1818 * C233 + C1826 * C137 + C1819 * C234 +
                     C1828 * C138 + C1820 * C235) *
                        C3362 +
                    (C1824 * C632 + C1818 * C636 + C1826 * C633 + C1819 * C637 +
                     C1828 * C1215 + C1820 * C1216) *
                        C3420 +
                    (C1824 * C711 + C1818 * C839 + C1826 * C713 + C1819 * C840 +
                     C1828 * C1277 + C1820 * C1387) *
                        C5632) *
                   C5557 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((C2077 * C74 + C5527 * C78) * C3890 +
                    (C2077 * C136 + C5527 * C233) * C3844 +
                    (C2077 * C632 + C5527 * C636) * C3891 +
                    (C2077 * C711 + C5527 * C839) * C3845 +
                    (C2077 * C634 + C5527 * C638) * C3892 +
                    (C2077 * C712 + C5527 * C841) * C3846 +
                    (C2077 * C3848 + C5527 * C3849) * C3893 +
                    (C2077 * C3894 + C5527 * C3972) * C3847) *
                   C5557 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eezy[12] += (-std::pow(Pi, 2.5) *
                   ((C365 * C74 + C314 * C109 + C366 * C321 + C315 * C368 +
                     C367 * C323 + C316 * C369) *
                        C3419 +
                    (C365 * C136 + C314 * C255 + C366 * C402 + C315 * C565 +
                     C367 * C404 + C316 * C566) *
                        C3362 +
                    (C365 * C632 + C314 * C674 + C366 * C1484 + C315 * C1526 +
                     C367 * C3109 + C316 * C3139) *
                        C3420 +
                    (C365 * C711 + C314 * C869 + C366 * C1564 + C315 * C1750 +
                     C367 * C3167 + C316 * C3306) *
                        C5632) *
                   C5527 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C108 * C74 + C5557 * C109) * C3419 +
                     (C108 * C136 + C5557 * C255) * C3362 +
                     (C108 * C632 + C5557 * C674) * C3420 +
                     (C108 * C711 + C5557 * C869) * C5632) *
                        C1818 +
                    ((C108 * C75 + C5557 * C110) * C3419 +
                     (C108 * C137 + C5557 * C256) * C3362 +
                     (C108 * C633 + C5557 * C675) * C3420 +
                     (C108 * C713 + C5557 * C871) * C5632) *
                        C1819 +
                    ((C108 * C76 + C5557 * C111) * C3419 +
                     (C108 * C138 + C5557 * C257) * C3362 +
                     (C108 * C1215 + C5557 * C1247) * C3420 +
                     (C108 * C1277 + C5557 * C1414) * C5632) *
                        C1820) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((C108 * C74 + C5557 * C109) * C3890 +
                    (C108 * C136 + C5557 * C255) * C3844 +
                    (C108 * C632 + C5557 * C674) * C3891 +
                    (C108 * C711 + C5557 * C869) * C3845 +
                    (C108 * C634 + C5557 * C676) * C3892 +
                    (C108 * C712 + C5557 * C870) * C3846 +
                    (C108 * C3848 + C5557 * C3870) * C3893 +
                    (C108 * C3894 + C5557 * C3991) * C3847) *
                   C5527 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (-std::pow(Pi, 2.5) *
         ((C3577 * C74 + C3580 + C3580 + C3362 * C278 + C3578 * C632 + C3581 +
           C3581 + C5632 * C902) *
              C314 +
          (C3577 * C321 + C3823 + C3823 + C3362 * C595 + C3578 * C1484 + C3824 +
           C3824 + C5632 * C1786) *
              C315 +
          (C3577 * C323 + C3825 + C3825 + C3362 * C596 + C3578 * C3109 + C3826 +
           C3826 + C5632 * C3333) *
              C316) *
         C5527 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C3577 * C74 + C3580 + C3580 + C3362 * C278 + C3578 * C632 + C3581 +
           C3581 + C5632 * C902) *
              C5557 * C1818 +
          (C3577 * C75 + C3582 + C3582 + C3362 * C279 + C3578 * C633 + C3583 +
           C3583 + C5632 * C904) *
              C5557 * C1819 +
          (C3577 * C76 + C3584 + C3584 + C3362 * C280 + C3578 * C1215 + C3585 +
           C3585 + C5632 * C1443) *
              C5557 * C1820) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (C4010 * C74 + C4016 + C4016 + C3844 * C278 + C4011 * C632 + C4017 +
          C4017 + C3845 * C902 + C4012 * C634 + C4018 + C4018 + C3846 * C903 +
          C4013 * C3848 + C4019 + C4019 + C3847 * C4014) *
         C5557 * C5527 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((C2541 * C74 + C2546 + C2546 + C5700 * C82 + C2543 * C75 +
                     C2547 + C2547 + C5532 * C83) *
                        C5733 +
                    (C2541 * C632 + C2806 + C2806 + C5700 * C640 +
                     C2543 * C633 + C2807 + C2807 + C5532 * C641) *
                        C5734 +
                    (C2541 * C634 + C4357 + C4357 + C5700 * C642 +
                     C2543 * C635 + C4358 + C4358 + C5532 * C643) *
                        C4355) *
                   C5557 * C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eexy[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C108 * C74 + C5557 * C109) * C4861 +
                     (C108 * C78 + C5557 * C113) * C5700 +
                     (C108 * C75 + C5557 * C110) * C4851 +
                     (C108 * C79 + C5557 * C114) * C5532) *
                        C5733 +
                    ((C108 * C632 + C5557 * C674) * C4861 +
                     (C108 * C636 + C5557 * C678) * C5700 +
                     (C108 * C633 + C5557 * C675) * C4851 +
                     (C108 * C637 + C5557 * C679) * C5532) *
                        C5734 +
                    ((C108 * C634 + C5557 * C676) * C4861 +
                     (C108 * C638 + C5557 * C680) * C5700 +
                     (C108 * C635 + C5557 * C677) * C4851 +
                     (C108 * C639 + C5557 * C681) * C5532) *
                        C4355) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eexz[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((C4410 * C74 + C5733 * C136 + C4411 * C632 + C5734 * C711 +
                     C4412 * C634 + C4355 * C712) *
                        C4861 +
                    (C4410 * C78 + C5733 * C140 + C4411 * C636 + C5734 * C715 +
                     C4412 * C638 + C4355 * C716) *
                        C5700 +
                    (C4410 * C75 + C5733 * C137 + C4411 * C633 + C5734 * C713 +
                     C4412 * C635 + C4355 * C714) *
                        C4851 +
                    (C4410 * C79 + C5733 * C141 + C4411 * C637 + C5734 * C717 +
                     C4412 * C639 + C4355 * C718) *
                        C5532) *
                   C5557 * C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4861 * C74 + C5700 * C78 + C4851 * C75 + C5532 * C79) * C108 +
           (C4861 * C109 + C5700 * C162 + C4851 * C110 + C5532 * C163) *
               C5557) *
              C5733 +
          ((C4861 * C632 + C5700 * C636 + C4851 * C633 + C5532 * C637) * C108 +
           (C4861 * C674 + C5700 * C745 + C4851 * C675 + C5532 * C746) *
               C5557) *
              C5734 +
          ((C4861 * C634 + C5700 * C638 + C4851 * C635 + C5532 * C639) * C108 +
           (C4861 * C676 + C5700 * C747 + C4851 * C677 + C5532 * C748) *
               C5557) *
              C4355) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C184 * C74 + C190 + C190 + C5557 * C185) * C5700 +
                     (C184 * C75 + C191 + C191 + C5557 * C186) * C5532) *
                        C5733 +
                    ((C184 * C632 + C780 + C780 + C5557 * C775) * C5700 +
                     (C184 * C633 + C781 + C781 + C5557 * C776) * C5532) *
                        C5734 +
                    ((C184 * C634 + C782 + C782 + C5557 * C777) * C5700 +
                     (C184 * C635 + C783 + C783 + C5557 * C778) * C5532) *
                        C4355) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4410 * C74 + C5733 * C136 + C4411 * C632 + C5734 * C711 +
                      C4412 * C634 + C4355 * C712) *
                         C108 +
                     (C4410 * C109 + C5733 * C211 + C4411 * C674 +
                      C5734 * C809 + C4412 * C676 + C4355 * C810) *
                         C5557) *
                        C5700 +
                    ((C4410 * C75 + C5733 * C137 + C4411 * C633 + C5734 * C713 +
                      C4412 * C635 + C4355 * C714) *
                         C108 +
                     (C4410 * C110 + C5733 * C212 + C4411 * C675 +
                      C5734 * C811 + C4412 * C677 + C4355 * C812) *
                         C5557) *
                        C5532) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C4861 * C74 + C5700 * C78 + C4851 * C75 + C5532 * C79) * C4410 +
          (C4861 * C136 + C5700 * C233 + C4851 * C137 + C5532 * C234) * C5733 +
          (C4861 * C632 + C5700 * C636 + C4851 * C633 + C5532 * C637) * C4411 +
          (C4861 * C711 + C5700 * C839 + C4851 * C713 + C5532 * C840) * C5734 +
          (C4861 * C634 + C5700 * C638 + C4851 * C635 + C5532 * C639) * C4412 +
          (C4861 * C712 + C5700 * C841 + C4851 * C714 + C5532 * C842) * C4355) *
         C5557 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C108 * C74 + C5557 * C109) * C4410 +
                     (C108 * C136 + C5557 * C255) * C5733 +
                     (C108 * C632 + C5557 * C674) * C4411 +
                     (C108 * C711 + C5557 * C869) * C5734 +
                     (C108 * C634 + C5557 * C676) * C4412 +
                     (C108 * C712 + C5557 * C870) * C4355) *
                        C5700 +
                    ((C108 * C75 + C5557 * C110) * C4410 +
                     (C108 * C137 + C5557 * C256) * C5733 +
                     (C108 * C633 + C5557 * C675) * C4411 +
                     (C108 * C713 + C5557 * C871) * C5734 +
                     (C108 * C635 + C5557 * C677) * C4412 +
                     (C108 * C714 + C5557 * C872) * C4355) *
                        C5532) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C4569 * C74 + C4573 + C4573 + C5733 * C278 + C4570 * C632 + C4574 +
           C4574 + C5734 * C902 + C4571 * C634 + C4575 + C4575 + C4355 * C903) *
              C5557 * C5700 +
          (C4569 * C75 + C4576 + C4576 + C5733 * C279 + C4570 * C633 + C4577 +
           C4577 + C5734 * C904 + C4571 * C635 + C4578 + C4578 + C4355 * C905) *
              C5557 * C5532) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1823 * C74 + C1830 + C1830 + C1818 * C82 + C1825 * C75 + C1831 +
           C1831 + C1819 * C83 + C1827 * C76 + C1832 + C1832 + C1820 * C84) *
              C3362 +
          (C1823 * C632 + C3365 + C3365 + C1818 * C640 + C1825 * C633 + C3366 +
           C3366 + C1819 * C641 + C1827 * C1215 + C3367 + C3367 +
           C1820 * C1217) *
              C5632) *
         C5557 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2076 * C74 + C2082 + C2082 + C5527 * C82) * C3362 +
           (C2076 * C632 + C2282 + C2282 + C5527 * C640) * C5632) *
              C314 +
          ((C2076 * C321 + C2083 + C2083 + C5527 * C329) * C3362 +
           (C2076 * C1484 + C2284 + C2284 + C5527 * C1488) * C5632) *
              C315 +
          ((C2076 * C323 + C2084 + C2084 + C5527 * C331) * C3362 +
           (C2076 * C3109 + C3113 + C3113 + C5527 * C3111) * C5632) *
              C316) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C108 * C74 + C5557 * C109) * C1824 +
                     (C108 * C78 + C5557 * C113) * C1818 +
                     (C108 * C75 + C5557 * C110) * C1826 +
                     (C108 * C79 + C5557 * C114) * C1819 +
                     (C108 * C76 + C5557 * C111) * C1828 +
                     (C108 * C80 + C5557 * C115) * C1820) *
                        C3362 +
                    ((C108 * C632 + C5557 * C674) * C1824 +
                     (C108 * C636 + C5557 * C678) * C1818 +
                     (C108 * C633 + C5557 * C675) * C1826 +
                     (C108 * C637 + C5557 * C679) * C1819 +
                     (C108 * C1215 + C5557 * C1247) * C1828 +
                     (C108 * C1216 + C5557 * C1248) * C1820) *
                        C5632) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C365 * C74 + C314 * C109 + C366 * C321 + C315 * C368 +
                      C367 * C323 + C316 * C369) *
                         C2077 +
                     (C365 * C78 + C314 * C113 + C366 * C325 + C315 * C372 +
                      C367 * C327 + C316 * C373) *
                         C5527) *
                        C3362 +
                    ((C365 * C632 + C314 * C674 + C366 * C1484 + C315 * C1526 +
                      C367 * C3109 + C316 * C3139) *
                         C2077 +
                     (C365 * C636 + C314 * C678 + C366 * C1486 + C315 * C1528 +
                      C367 * C3110 + C316 * C3140) *
                         C5527) *
                        C5632) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3419 * C74 + C3362 * C136 + C3420 * C632 + C5632 * C711) * C1824 +
          (C3419 * C78 + C3362 * C140 + C3420 * C636 + C5632 * C715) * C1818 +
          (C3419 * C75 + C3362 * C137 + C3420 * C633 + C5632 * C713) * C1826 +
          (C3419 * C79 + C3362 * C141 + C3420 * C637 + C5632 * C717) * C1819 +
          (C3419 * C76 + C3362 * C138 + C3420 * C1215 + C5632 * C1277) * C1828 +
          (C3419 * C80 + C3362 * C142 + C3420 * C1216 + C5632 * C1278) *
              C1820) *
         C5557 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3419 * C74 + C3362 * C136 + C3420 * C632 + C5632 * C711) * C2077 +
           (C3419 * C78 + C3362 * C140 + C3420 * C636 + C5632 * C715) * C5527) *
              C314 +
          ((C3419 * C321 + C3362 * C402 + C3420 * C1484 + C5632 * C1564) *
               C2077 +
           (C3419 * C325 + C3362 * C406 + C3420 * C1486 + C5632 * C1566) *
               C5527) *
              C315 +
          ((C3419 * C323 + C3362 * C404 + C3420 * C3109 + C5632 * C3167) *
               C2077 +
           (C3419 * C327 + C3362 * C408 + C3420 * C3110 + C5632 * C3168) *
               C5527) *
              C316) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyx[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1824 * C74 + C1818 * C78 + C1826 * C75 + C1819 * C79 +
                      C1828 * C76 + C1820 * C80) *
                         C108 +
                     (C1824 * C109 + C1818 * C162 + C1826 * C110 +
                      C1819 * C163 + C1828 * C111 + C1820 * C164) *
                         C5557) *
                        C3362 +
                    ((C1824 * C632 + C1818 * C636 + C1826 * C633 +
                      C1819 * C637 + C1828 * C1215 + C1820 * C1216) *
                         C108 +
                     (C1824 * C674 + C1818 * C745 + C1826 * C675 +
                      C1819 * C746 + C1828 * C1247 + C1820 * C1305) *
                         C5557) *
                        C5632) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C2077 * C74 + C5527 * C78) * C365 +
                     (C2077 * C109 + C5527 * C162) * C314 +
                     (C2077 * C321 + C5527 * C325) * C366 +
                     (C2077 * C368 + C5527 * C436) * C315 +
                     (C2077 * C323 + C5527 * C327) * C367 +
                     (C2077 * C369 + C5527 * C438) * C316) *
                        C3362 +
                    ((C2077 * C632 + C5527 * C636) * C365 +
                     (C2077 * C674 + C5527 * C745) * C314 +
                     (C2077 * C1484 + C5527 * C1486) * C366 +
                     (C2077 * C1526 + C5527 * C1602) * C315 +
                     (C2077 * C3109 + C5527 * C3110) * C367 +
                     (C2077 * C3139 + C5527 * C3195) * C316) *
                        C5632) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C184 * C74 + C190 + C190 + C5557 * C185) * C1818 +
           (C184 * C75 + C191 + C191 + C5557 * C186) * C1819 +
           (C184 * C76 + C192 + C192 + C5557 * C187) * C1820) *
              C3362 +
          ((C184 * C632 + C780 + C780 + C5557 * C775) * C1818 +
           (C184 * C633 + C781 + C781 + C5557 * C776) * C1819 +
           (C184 * C1215 + C1334 + C1334 + C5557 * C1332) * C1820) *
              C5632) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C466 * C74 + C474 + C474 + C314 * C185 + C467 * C321 + C475 + C475 +
           C315 * C469 + C468 * C323 + C476 + C476 + C316 * C470) *
              C5527 * C3362 +
          (C466 * C632 + C3716 + C3716 + C314 * C775 + C467 * C1484 + C3717 +
           C3717 + C315 * C1638 + C468 * C3109 + C3718 + C3718 + C316 * C3222) *
              C5527 * C5632) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3419 * C74 + C3362 * C136 + C3420 * C632 + C5632 * C711) * C108 +
           (C3419 * C109 + C3362 * C211 + C3420 * C674 + C5632 * C809) *
               C5557) *
              C1818 +
          ((C3419 * C75 + C3362 * C137 + C3420 * C633 + C5632 * C713) * C108 +
           (C3419 * C110 + C3362 * C212 + C3420 * C675 + C5632 * C811) *
               C5557) *
              C1819 +
          ((C3419 * C76 + C3362 * C138 + C3420 * C1215 + C5632 * C1277) * C108 +
           (C3419 * C111 + C3362 * C213 + C3420 * C1247 + C5632 * C1360) *
               C5557) *
              C1820) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3419 * C74 + C3362 * C136 + C3420 * C632 + C5632 * C711) * C365 +
          (C3419 * C109 + C3362 * C211 + C3420 * C674 + C5632 * C809) * C314 +
          (C3419 * C321 + C3362 * C402 + C3420 * C1484 + C5632 * C1564) * C366 +
          (C3419 * C368 + C3362 * C505 + C3420 * C1526 + C5632 * C1678) * C315 +
          (C3419 * C323 + C3362 * C404 + C3420 * C3109 + C5632 * C3167) * C367 +
          (C3419 * C369 + C3362 * C506 + C3420 * C3139 + C5632 * C3252) *
              C316) *
         C5527 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezx[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C1824 * C74 + C1818 * C78 + C1826 * C75 + C1819 * C79 +
                     C1828 * C76 + C1820 * C80) *
                        C3419 +
                    (C1824 * C136 + C1818 * C233 + C1826 * C137 + C1819 * C234 +
                     C1828 * C138 + C1820 * C235) *
                        C3362 +
                    (C1824 * C632 + C1818 * C636 + C1826 * C633 + C1819 * C637 +
                     C1828 * C1215 + C1820 * C1216) *
                        C3420 +
                    (C1824 * C711 + C1818 * C839 + C1826 * C713 + C1819 * C840 +
                     C1828 * C1277 + C1820 * C1387) *
                        C5632) *
                   C5557 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C2077 * C74 + C5527 * C78) * C3419 +
                     (C2077 * C136 + C5527 * C233) * C3362 +
                     (C2077 * C632 + C5527 * C636) * C3420 +
                     (C2077 * C711 + C5527 * C839) * C5632) *
                        C314 +
                    ((C2077 * C321 + C5527 * C325) * C3419 +
                     (C2077 * C402 + C5527 * C535) * C3362 +
                     (C2077 * C1484 + C5527 * C1486) * C3420 +
                     (C2077 * C1564 + C5527 * C1714) * C5632) *
                        C315 +
                    ((C2077 * C323 + C5527 * C327) * C3419 +
                     (C2077 * C404 + C5527 * C537) * C3362 +
                     (C2077 * C3109 + C5527 * C3110) * C3420 +
                     (C2077 * C3167 + C5527 * C3279) * C5632) *
                        C316) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eezy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C108 * C74 + C5557 * C109) * C3419 +
                     (C108 * C136 + C5557 * C255) * C3362 +
                     (C108 * C632 + C5557 * C674) * C3420 +
                     (C108 * C711 + C5557 * C869) * C5632) *
                        C1818 +
                    ((C108 * C75 + C5557 * C110) * C3419 +
                     (C108 * C137 + C5557 * C256) * C3362 +
                     (C108 * C633 + C5557 * C675) * C3420 +
                     (C108 * C713 + C5557 * C871) * C5632) *
                        C1819 +
                    ((C108 * C76 + C5557 * C111) * C3419 +
                     (C108 * C138 + C5557 * C257) * C3362 +
                     (C108 * C1215 + C5557 * C1247) * C3420 +
                     (C108 * C1277 + C5557 * C1414) * C5632) *
                        C1820) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C365 * C74 + C314 * C109 + C366 * C321 + C315 * C368 +
                     C367 * C323 + C316 * C369) *
                        C3419 +
                    (C365 * C136 + C314 * C255 + C366 * C402 + C315 * C565 +
                     C367 * C404 + C316 * C566) *
                        C3362 +
                    (C365 * C632 + C314 * C674 + C366 * C1484 + C315 * C1526 +
                     C367 * C3109 + C316 * C3139) *
                        C3420 +
                    (C365 * C711 + C314 * C869 + C366 * C1564 + C315 * C1750 +
                     C367 * C3167 + C316 * C3306) *
                        C5632) *
                   C5527 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eezz[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C3577 * C74 + C3580 + C3580 + C3362 * C278 + C3578 * C632 +
                     C3581 + C3581 + C5632 * C902) *
                        C5557 * C1818 +
                    (C3577 * C75 + C3582 + C3582 + C3362 * C279 + C3578 * C633 +
                     C3583 + C3583 + C5632 * C904) *
                        C5557 * C1819 +
                    (C3577 * C76 + C3584 + C3584 + C3362 * C280 +
                     C3578 * C1215 + C3585 + C3585 + C5632 * C1443) *
                        C5557 * C1820) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C3577 * C74 + C3580 + C3580 + C3362 * C278 + C3578 * C632 +
                     C3581 + C3581 + C5632 * C902) *
                        C314 +
                    (C3577 * C321 + C3823 + C3823 + C3362 * C595 +
                     C3578 * C1484 + C3824 + C3824 + C5632 * C1786) *
                        C315 +
                    (C3577 * C323 + C3825 + C3825 + C3362 * C596 +
                     C3578 * C3109 + C3826 + C3826 + C5632 * C3333) *
                        C316) *
                   C5527 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
}
