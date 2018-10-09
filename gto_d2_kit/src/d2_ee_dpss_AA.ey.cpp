/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_dpss_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_2100_11(const double ae,
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
    const double C4942 = 0 * be;
    const double C4973 = 0 * ae;
    const double C4969 = 0 * be;
    const double C5012 = 0 * be;
    const double C5039 = 0 * ae;
    const double C5035 = 0 * be;
    const double C5136 = p + q;
    const double C5135 = p * q;
    const double C5141 = xP - xQ;
    const double C5140 = bs[2];
    const double C5148 = std::pow(ae, 2);
    const double C5146 = bs[3];
    const double C5159 = bs[4];
    const double C5179 = yP - yQ;
    const double C5193 = zP - zQ;
    const double C74 = bs[0];
    const double C5718 = ce + de;
    const double C5717 = ce * de;
    const double C4835 = 2 * C4828;
    const double C4832 = -2 * C4827;
    const double C4834 = C4828 * C4826;
    const double C4833 = C4826 * C4827;
    const double C5526 = C4826 * be;
    const double C5525 = C4826 * ae;
    const double C5524 = std::pow(C4826, 2);
    const double C4836 = C4829 / C4825;
    const double C4831 = 2 * C4825;
    const double C4830 = std::pow(C4825, 2);
    const double C4914 = C4828 * C4889;
    const double C5571 = std::pow(C4889, 2);
    const double C5585 = C4889 * be;
    const double C5584 = C4889 * ae;
    const double C4926 = C4828 * C4892;
    const double C5597 = std::pow(C4892, 2);
    const double C5609 = C4892 * be;
    const double C5608 = C4892 * ae;
    const double C4970 = C4889 * C4942;
    const double C4995 = -2 * C4942;
    const double C4978 = C4973 / C4825;
    const double C5036 = C4892 * C5012;
    const double C5061 = -2 * C5012;
    const double C5044 = C5039 / C4825;
    const double C5137 = 2 * C5135;
    const double C5149 = C5141 * ae;
    const double C5145 = std::pow(C5141, 2);
    const double C5182 = C5179 * ae;
    const double C5181 = C5141 * C5179;
    const double C5208 = C5179 * C5141;
    const double C5216 = std::pow(C5179, 2);
    const double C5196 = C5193 * ae;
    const double C5195 = C5141 * C5193;
    const double C5225 = C5179 * C5193;
    const double C5233 = C5193 * C5141;
    const double C5241 = C5193 * C5179;
    const double C5249 = std::pow(C5193, 2);
    const double C63 = std::exp(-(std::pow(zC - zD, 2) * C5717) / C5718);
    const double C64 = std::exp(-(std::pow(yC - yD, 2) * C5717) / C5718);
    const double C65 = std::exp(-(std::pow(xC - xD, 2) * C5717) / C5718);
    const double C4838 = ae * C4832;
    const double C4839 = C4833 / C4825;
    const double C5527 = C5524 * C4828;
    const double C5534 = std::pow(C4831, -1);
    const double C5719 = std::pow(C4831, -2);
    const double C4840 = 2 * C4830;
    const double C4837 = C4830 * C4831;
    const double C5716 = 4 * C4830;
    const double C5572 = C5571 * C4828;
    const double C5598 = C5597 * C4828;
    const double C4975 = C4970 / C4825;
    const double C4998 = ae * C4995;
    const double C5041 = C5036 / C4825;
    const double C5064 = ae * C5061;
    const double C5139 = C5137 / C5136;
    const double C82 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C5137 / C5136, 2) -
          (bs[1] * C5137) / C5136) *
         std::pow(ae, 2)) /
        C4830;
    const double C75 = -(C5141 * bs[1] * C5137) / C5136;
    const double C323 = -(C5179 * bs[1] * C5137) / C5136;
    const double C617 = -(C5193 * bs[1] * C5137) / C5136;
    const double C5151 = C5146 * C5149;
    const double C5162 = C5159 * C5149;
    const double C78 = (-(bs[1] * C5149 * C5137) / C5136) / C4825;
    const double C5161 = C5145 * C5159;
    const double C5184 = C5146 * C5182;
    const double C5188 = C5159 * C5182;
    const double C109 = (-(bs[1] * C5182 * C5137) / C5136) / C4825;
    const double C5183 = C5181 * C5148;
    const double C5209 = C5208 * C5148;
    const double C5218 = C5216 * C5159;
    const double C5198 = C5146 * C5196;
    const double C5202 = C5159 * C5196;
    const double C136 = (-(bs[1] * C5196 * C5137) / C5136) / C4825;
    const double C5197 = C5195 * C5148;
    const double C5226 = C5225 * C5148;
    const double C5234 = C5233 * C5148;
    const double C5242 = C5241 * C5148;
    const double C5251 = C5249 * C5159;
    const double C4842 = 0 - C4839;
    const double C5528 = C5527 / C4825;
    const double C4846 = C4827 / C4840;
    const double C4843 = C4824 / C4840;
    const double C4972 = C4942 / C4840;
    const double C4976 = C4969 / C4840;
    const double C5038 = C5012 / C4840;
    const double C5042 = C5035 / C4840;
    const double C5573 = C5572 / C4825;
    const double C5599 = C5598 / C4825;
    const double C4979 = 0 - C4975;
    const double C5045 = 0 - C5041;
    const double C5142 = std::pow(C5139, 2);
    const double C5147 = -C5139;
    const double C5160 = std::pow(C5139, 4);
    const double C5187 = C5159 * C5183;
    const double C5211 = C5159 * C5209;
    const double C5201 = C5159 * C5197;
    const double C5228 = C5159 * C5226;
    const double C5236 = C5159 * C5234;
    const double C5244 = C5159 * C5242;
    const double C4848 = C4842 * ae;
    const double C5529 = -C5528;
    const double C5574 = -C5573;
    const double C5600 = -C5599;
    const double C4982 = C4979 * ae;
    const double C5048 = C5045 * ae;
    const double C5144 = C5140 * C5142;
    const double C83 = (2 * ae * C5142 * C5140 * C5141 * ae +
                        C5141 *
                            (C5140 * C5142 +
                             std::pow(C5141, 2) * bs[3] * std::pow(-C5139, 3)) *
                            std::pow(ae, 2)) /
                       C4830;
    const double C113 = (C5142 * C5140 * C5141 * (yP - yQ) * C5148) / C4830;
    const double C140 = (C5142 * C5140 * C5141 * (zP - zQ) * C5148) / C4830;
    const double C162 = (C5142 * C5140 * C5179 * C5141 * C5148) / C4830;
    const double C185 =
        ((std::pow(C5179, 2) * C5140 * C5142 - (bs[1] * C5137) / C5136) *
         C5148) /
        C4830;
    const double C211 = (C5142 * C5140 * C5179 * C5193 * C5148) / C4830;
    const double C233 = (C5142 * C5140 * C5193 * C5141 * C5148) / C4830;
    const double C255 = (C5142 * C5140 * C5193 * C5179 * C5148) / C4830;
    const double C278 =
        ((std::pow(C5193, 2) * C5140 * C5142 - (bs[1] * C5137) / C5136) *
         C5148) /
        C4830;
    const double C79 = (C5141 * C5142 * C5140 * C5149) / C4825 -
                       (ae * bs[1] * C5137) / (C5136 * C4825);
    const double C110 = (C5141 * C5142 * C5140 * C5182) / C4825;
    const double C137 = (C5141 * C5142 * C5140 * C5196) / C4825;
    const double C326 = (C5179 * C5142 * C5140 * C5149) / C4825;
    const double C366 = (C5179 * C5142 * C5140 * C5182) / C4825 -
                        (ae * bs[1] * C5137) / (C5136 * C4825);
    const double C398 = (C5179 * C5142 * C5140 * C5196) / C4825;
    const double C620 = (C5193 * C5142 * C5140 * C5149) / C4825;
    const double C655 = (C5193 * C5142 * C5140 * C5182) / C4825;
    const double C689 = (C5193 * C5142 * C5140 * C5196) / C4825 -
                        (ae * bs[1] * C5137) / (C5136 * C4825);
    const double C5150 = std::pow(C5147, 3);
    const double C5166 = C5160 * C5162;
    const double C5165 = C5161 * C5160;
    const double C5190 = C5160 * C5188;
    const double C5204 = C5160 * C5202;
    const double C5219 = C5218 * C5160;
    const double C5252 = C5251 * C5160;
    const double C5189 = C5160 * C5187;
    const double C5212 = C5160 * C5211;
    const double C5203 = C5160 * C5201;
    const double C5229 = C5160 * C5228;
    const double C5237 = C5160 * C5236;
    const double C5245 = C5160 * C5244;
    const double C4852 = C4848 / C4825;
    const double C5530 = std::exp(C5529);
    const double C5575 = std::exp(C5574);
    const double C5601 = std::exp(C5600);
    const double C4983 = C4982 / C4825;
    const double C5049 = C5048 / C4825;
    const double C5152 = C5144 * ae;
    const double C76 = C5144 * C5145 - (bs[1] * C5137) / C5136;
    const double C324 = C5179 * C5141 * C5144;
    const double C618 = C5193 * C5141 * C5144;
    const double C915 = C5144 * C5216 - (bs[1] * C5137) / C5136;
    const double C1394 = C5193 * C5179 * C5144;
    const double C1667 = C5144 * C5249 - (bs[1] * C5137) / C5136;
    const double C5153 = C5150 * C5151;
    const double C5158 = C5146 * C5150;
    const double C5185 = C5150 * C5184;
    const double C5199 = C5150 * C5198;
    const double C114 = (ae * C5142 * C5140 * C5179 * ae +
                         C5141 * C5150 * C5146 * C5141 * C5179 * C5148) /
                        C4830;
    const double C141 = (ae * C5142 * C5140 * C5193 * ae +
                         C5141 * C5150 * C5146 * C5141 * C5193 * C5148) /
                        C4830;
    const double C163 = (ae * C5142 * C5140 * C5182 +
                         C5141 * C5150 * C5146 * C5179 * C5141 * C5148) /
                        C4830;
    const double C186 =
        (C5141 * (C5144 + std::pow(C5179, 2) * C5146 * C5150) * C5148) / C4830;
    const double C212 = (C5141 * C5150 * C5146 * C5179 * C5193 * C5148) / C4830;
    const double C213 =
        (C5150 * C5146 * C5226 + C5160 * C5159 * C5226 * C5145) / C4830;
    const double C234 = (ae * C5142 * C5140 * C5196 +
                         C5141 * C5150 * C5146 * C5193 * C5141 * C5148) /
                        C4830;
    const double C256 = (C5141 * C5150 * C5146 * C5193 * C5179 * C5148) / C4830;
    const double C257 =
        (C5150 * C5146 * C5242 + C5160 * C5159 * C5242 * C5145) / C4830;
    const double C279 =
        (C5141 * (C5144 + std::pow(C5193, 2) * C5146 * C5150) * C5148) / C4830;
    const double C329 =
        (C5179 * (C5144 + C5145 * C5146 * C5150) * C5148) / C4830;
    const double C369 =
        (ae * C5142 * C5140 * C5149 + C5179 * C5150 * C5146 * C5183) / C4830;
    const double C401 = (C5179 * C5150 * C5146 * C5197) / C4830;
    const double C430 =
        (ae * C5142 * C5140 * C5149 + C5179 * C5150 * C5146 * C5209) / C4830;
    const double C461 = (2 * ae * C5142 * C5140 * C5182 +
                         C5179 * (C5144 + C5216 * C5146 * C5150) * C5148) /
                        C4830;
    const double C496 =
        (ae * C5142 * C5140 * C5196 + C5179 * C5150 * C5146 * C5226) / C4830;
    const double C525 = (C5179 * C5150 * C5146 * C5234) / C4830;
    const double C554 =
        (ae * C5142 * C5140 * C5196 + C5179 * C5150 * C5146 * C5242) / C4830;
    const double C583 =
        (C5179 * (C5144 + C5249 * C5146 * C5150) * C5148) / C4830;
    const double C623 =
        (C5193 * (C5144 + C5145 * C5146 * C5150) * C5148) / C4830;
    const double C658 = (C5193 * C5150 * C5146 * C5183) / C4830;
    const double C692 =
        (ae * C5142 * C5140 * C5149 + C5193 * C5150 * C5146 * C5197) / C4830;
    const double C721 = (C5193 * C5150 * C5146 * C5209) / C4830;
    const double C750 =
        (C5193 * (C5144 + C5216 * C5146 * C5150) * C5148) / C4830;
    const double C782 =
        (ae * C5142 * C5140 * C5182 + C5193 * C5150 * C5146 * C5226) / C4830;
    const double C811 =
        (ae * C5142 * C5140 * C5149 + C5193 * C5150 * C5146 * C5234) / C4830;
    const double C840 =
        (ae * C5142 * C5140 * C5182 + C5193 * C5150 * C5146 * C5242) / C4830;
    const double C871 = (2 * ae * C5142 * C5140 * C5196 +
                         C5193 * (C5144 + C5249 * C5146 * C5150) * C5148) /
                        C4830;
    const double C5169 = C5141 * C5166;
    const double C5404 = C5179 * C5166;
    const double C5326 = C5141 * C5190;
    const double C5344 = C5179 * C5190;
    const double C5332 = C5141 * C5204;
    const double C5411 = C5179 * C5204;
    const double C5424 = C5193 * C5204;
    const double C660 =
        (C5193 *
         (C5189 + ae * C5141 * C5190 +
          C5141 * (ae * C5190 + C5141 * std::pow(C5147, 5) * bs[5] * C5183))) /
        C4830;
    const double C1432 =
        (C5193 *
         (C5189 + ae * C5179 * C5166 +
          C5179 * (ae * C5166 + C5179 * std::pow(C5147, 5) * bs[5] * C5183))) /
        C4830;
    const double C1705 = (C5150 * C5146 * C5183 + C5189 * C5249) / C4830;
    const double C2220 =
        (2 * C5193 * C5189 +
         C5193 * (C5189 + std::pow(C5147, 5) * bs[5] * C5183 * C5249)) /
        C4830;
    const double C723 =
        (C5193 *
         (C5212 + ae * C5141 * C5190 +
          C5141 * (ae * C5190 + C5141 * std::pow(C5147, 5) * bs[5] * C5209))) /
        C4830;
    const double C1490 =
        (C5193 * C5212 + ae * C5193 * C5179 * C5166 +
         C5179 * (ae * C5193 * C5166 +
                  C5179 * C5193 * std::pow(C5147, 5) * bs[5] * C5209)) /
        C4830;
    const double C1766 = (C5150 * C5146 * C5209 + C5212 * C5249) / C4830;
    const double C2263 =
        (2 * C5193 * C5212 +
         C5193 * (C5212 + std::pow(C5147, 5) * bs[5] * C5209 * C5249)) /
        C4830;
    const double C403 =
        (C5179 *
         (C5203 + ae * C5141 * C5204 +
          C5141 * (ae * C5204 + C5141 * std::pow(C5147, 5) * bs[5] * C5197))) /
        C4830;
    const double C988 = (C5150 * C5146 * C5197 + C5203 * C5216) / C4830;
    const double C1244 =
        (2 * C5179 * C5203 +
         C5179 * (C5203 + std::pow(C5147, 5) * bs[5] * C5197 * C5216)) /
        C4830;
    const double C214 =
        (2 * C5141 * C5229 +
         C5141 * (C5229 + std::pow(C5147, 5) * bs[5] * C5226 * C5145)) /
        C4830;
    const double C527 =
        (C5179 *
         (C5237 + ae * C5141 * C5204 +
          C5141 * (ae * C5204 + C5141 * std::pow(C5147, 5) * bs[5] * C5234))) /
        C4830;
    const double C1109 = (C5150 * C5146 * C5234 + C5237 * C5216) / C4830;
    const double C1328 =
        (2 * C5179 * C5237 +
         C5179 * (C5237 + std::pow(C5147, 5) * bs[5] * C5234 * C5216)) /
        C4830;
    const double C258 =
        (2 * C5141 * C5245 +
         C5141 * (C5245 + std::pow(C5147, 5) * bs[5] * C5242 * C5145)) /
        C4830;
    const double C4854 = C4852 - C4843;
    const double C4841 = C4834 * C5530;
    const double C5531 = C5530 * C5525;
    const double C5535 = C5534 * C5530;
    const double C5712 = C5530 / C4831;
    const double C5711 = C5530 * C5526;
    const double C314 = C5719 * C5530;
    const double C4915 = C4914 * C5575;
    const double C108 = -(2 * C4828 * (yA - yB) * C5575) / C4825;
    const double C184 =
        -((C5575 - (C4889 * 2 * C4828 * C4889 * C5575) / C4825) * C4835) /
        C4825;
    const double C364 =
        ((C5575 - (C4889 * 2 * C4828 * C4889 * C5575) / C4825) * ae) / C4825 -
        (0 * be) / C4840;
    const double C365 = (0 * ae) / C4825 - (C4828 * C4889 * C5575) / C4830;
    const double C5586 = C5575 * C5584;
    const double C5589 = C5534 * C5575;
    const double C5723 = C5575 * C5585;
    const double C5722 = C5575 / C4831;
    const double C910 = C5719 * C5575;
    const double C4927 = C4926 * C5601;
    const double C135 = -(2 * C4828 * (zA - zB) * C5601) / C4825;
    const double C277 =
        -((C5601 - (C4892 * 2 * C4828 * C4892 * C5601) / C4825) * C4835) /
        C4825;
    const double C687 =
        ((C5601 - (C4892 * 2 * C4828 * C4892 * C5601) / C4825) * ae) / C4825 -
        (0 * be) / C4840;
    const double C688 = (0 * ae) / C4825 - (C4828 * C4892 * C5601) / C4830;
    const double C5610 = C5601 * C5608;
    const double C5613 = C5534 * C5601;
    const double C5728 = C5601 * C5609;
    const double C5727 = C5601 / C4831;
    const double C1666 = C5719 * C5601;
    const double C4984 = C4983 - C4976;
    const double C5050 = C5049 - C5042;
    const double C5154 = C5141 * C5153;
    const double C958 = (C5150 * C5146 * C5183 + ae * C5179 * C5153 +
                         C5179 * (ae * C5153 + C5179 * C5189)) /
                        C4830;
    const double C1016 = (C5150 * C5146 * C5209 + ae * C5179 * C5153 +
                          C5179 * (ae * C5153 + C5179 * C5212)) /
                         C4830;
    const double C1224 =
        (2 * (ae * C5153 + C5179 * C5189) + ae * (C5153 + C5166 * C5216) +
         C5179 * (C5189 + ae * C5179 * C5166 +
                  C5179 * (ae * C5166 +
                           C5179 * std::pow(C5147, 5) * bs[5] * C5183))) /
        C4830;
    const double C1263 =
        (2 * (ae * C5153 + C5179 * C5212) + ae * (C5153 + C5166 * C5216) +
         C5179 * (C5212 + ae * C5179 * C5166 +
                  C5179 * (ae * C5166 +
                           C5179 * std::pow(C5147, 5) * bs[5] * C5209))) /
        C4830;
    const double C1431 = (C5193 * (ae * C5153 + C5179 * C5189)) / C4830;
    const double C1461 = (ae * C5179 * C5153 + C5193 * C5179 * C5203) / C4830;
    const double C1462 =
        (ae * (C5153 + C5166 * C5216) +
         C5193 * (C5203 + std::pow(C5147, 5) * bs[5] * C5197 * C5216)) /
        C4830;
    const double C1489 = (ae * C5193 * C5153 + C5179 * C5193 * C5212) / C4830;
    const double C1576 = (ae * C5179 * C5153 + C5193 * C5179 * C5237) / C4830;
    const double C1577 =
        (ae * (C5153 + C5166 * C5216) +
         C5193 * (C5237 + std::pow(C5147, 5) * bs[5] * C5234 * C5216)) /
        C4830;
    const double C1738 = (C5150 * C5146 * C5197 + ae * C5193 * C5153 +
                          C5193 * (ae * C5153 + C5193 * C5203)) /
                         C4830;
    const double C1852 = (C5150 * C5146 * C5234 + ae * C5193 * C5153 +
                          C5193 * (ae * C5153 + C5193 * C5237)) /
                         C4830;
    const double C1977 =
        (ae * C5153 + C5179 * C5189 +
         (ae * C5166 + C5179 * std::pow(C5147, 5) * bs[5] * C5183) * C5249) /
        C4830;
    const double C2032 =
        (ae * (C5153 + C5166 * C5249) +
         C5179 * (C5212 + std::pow(C5147, 5) * bs[5] * C5209 * C5249)) /
        C4830;
    const double C2244 =
        (2 * (ae * C5153 + C5193 * C5203) + ae * (C5153 + C5166 * C5249) +
         C5193 * (C5203 + ae * C5193 * C5166 +
                  C5193 * (ae * C5166 +
                           C5193 * std::pow(C5147, 5) * bs[5] * C5197))) /
        C4830;
    const double C2321 =
        (2 * (ae * C5153 + C5193 * C5237) + ae * (C5153 + C5166 * C5249) +
         C5193 * (C5237 + ae * C5193 * C5166 +
                  C5193 * (ae * C5166 +
                           C5193 * std::pow(C5147, 5) * bs[5] * C5234))) /
        C4830;
    const double C917 = (C5142 * C5140 * C5149 + C5153 * C5216) / C4825;
    const double C1195 =
        (2 * C5179 * C5153 + C5179 * (C5153 + C5166 * C5216)) / C4825;
    const double C1396 = (C5193 * C5179 * C5153) / C4825;
    const double C1397 = (C5193 * (C5153 + C5166 * C5216)) / C4825;
    const double C1669 = (C5142 * C5140 * C5149 + C5153 * C5249) / C4825;
    const double C2198 =
        (2 * C5193 * C5153 + C5193 * (C5153 + C5166 * C5249)) / C4825;
    const double C5164 = C5141 * C5158;
    const double C5163 = C5158 * ae;
    const double C5168 = C5158 + C5165;
    const double C5220 = C5158 + C5219;
    const double C5253 = C5158 + C5252;
    const double C5345 = C5179 * C5158;
    const double C5425 = C5193 * C5158;
    const double C187 = ((C5144 + C5216 * C5146 * C5150) * C5148 +
                         (C5158 + C5216 * C5159 * C5160) * C5148 * C5145) /
                        C4830;
    const double C280 = ((C5144 + C5249 * C5146 * C5150) * C5148 +
                         (C5158 + C5249 * C5159 * C5160) * C5148 * C5145) /
                        C4830;
    const double C77 = 2 * C5141 * C5144 + C5141 * (C5144 + C5158 * C5145);
    const double C325 = C5179 * (C5144 + C5158 * C5145);
    const double C619 = C5193 * (C5144 + C5158 * C5145);
    const double C1194 = 2 * C5179 * C5144 + C5179 * (C5144 + C5158 * C5216);
    const double C1395 = C5193 * (C5144 + C5158 * C5216);
    const double C2197 = 2 * C5193 * C5144 + C5193 * (C5144 + C5158 * C5249);
    const double C5322 = C5179 * C5185;
    const double C115 = (C5150 * C5146 * C5183 + ae * C5141 * C5185 +
                         C5141 * (ae * C5185 + C5141 * C5160 * C5159 * C5183)) /
                        C4830;
    const double C116 =
        (2 * (ae * C5185 + C5141 * C5189) + ae * (C5185 + C5190 * C5145) +
         C5141 * (C5189 + ae * C5141 * C5190 +
                  C5141 * (ae * C5190 +
                           C5141 * std::pow(C5147, 5) * bs[5] * C5183))) /
        C4830;
    const double C164 = (C5150 * C5146 * C5209 + ae * C5141 * C5185 +
                         C5141 * (ae * C5185 + C5141 * C5160 * C5159 * C5209)) /
                        C4830;
    const double C165 =
        (2 * (ae * C5185 + C5141 * C5212) + ae * (C5185 + C5190 * C5145) +
         C5141 * (C5212 + ae * C5141 * C5190 +
                  C5141 * (ae * C5190 +
                           C5141 * std::pow(C5147, 5) * bs[5] * C5209))) /
        C4830;
    const double C659 = (C5193 * (ae * C5185 + C5141 * C5189)) / C4830;
    const double C722 = (C5193 * (ae * C5185 + C5141 * C5212)) / C4830;
    const double C783 = (ae * C5141 * C5185 + C5193 * C5141 * C5229) / C4830;
    const double C784 =
        (ae * (C5185 + C5190 * C5145) +
         C5193 * (C5229 + std::pow(C5147, 5) * bs[5] * C5226 * C5145)) /
        C4830;
    const double C841 = (ae * C5141 * C5185 + C5193 * C5141 * C5245) / C4830;
    const double C842 =
        (ae * (C5185 + C5190 * C5145) +
         C5193 * (C5245 + std::pow(C5147, 5) * bs[5] * C5242 * C5145)) /
        C4830;
    const double C1706 =
        (ae * C5185 + C5141 * C5189 +
         (ae * C5190 + C5141 * std::pow(C5147, 5) * bs[5] * C5183) * C5249) /
        C4830;
    const double C1767 =
        (ae * C5185 + C5141 * C5212 +
         (ae * C5190 + C5141 * std::pow(C5147, 5) * bs[5] * C5209) * C5249) /
        C4830;
    const double C1824 = (C5150 * C5146 * C5226 + ae * C5193 * C5185 +
                          C5193 * (ae * C5185 + C5193 * C5229)) /
                         C4830;
    const double C1880 = (C5150 * C5146 * C5242 + ae * C5193 * C5185 +
                          C5193 * (ae * C5185 + C5193 * C5245)) /
                         C4830;
    const double C2302 =
        (2 * (ae * C5185 + C5193 * C5229) + ae * (C5185 + C5190 * C5249) +
         C5193 * (C5229 + ae * C5193 * C5190 +
                  C5193 * (ae * C5190 +
                           C5193 * std::pow(C5147, 5) * bs[5] * C5226))) /
        C4830;
    const double C2340 =
        (2 * (ae * C5185 + C5193 * C5245) + ae * (C5185 + C5190 * C5249) +
         C5193 * (C5245 + ae * C5193 * C5190 +
                  C5193 * (ae * C5190 +
                           C5193 * std::pow(C5147, 5) * bs[5] * C5242))) /
        C4830;
    const double C111 = (C5142 * C5140 * C5182 + C5185 * C5145) / C4825;
    const double C112 =
        (2 * C5141 * C5185 + C5141 * (C5185 + C5190 * C5145)) / C4825;
    const double C367 = (C5179 * C5141 * C5185 + C5141 * C5144 * ae) / C4825;
    const double C368 =
        (C5179 * (C5185 + C5190 * C5145) + (C5144 + C5158 * C5145) * ae) /
        C4825;
    const double C656 = (C5193 * C5141 * C5185) / C4825;
    const double C657 = (C5193 * (C5185 + C5190 * C5145)) / C4825;
    const double C1703 = (C5142 * C5140 * C5182 + C5185 * C5249) / C4825;
    const double C2219 =
        (2 * C5193 * C5185 + C5193 * (C5185 + C5190 * C5249)) / C4825;
    const double C5394 = C5193 * C5199;
    const double C142 = (C5150 * C5146 * C5197 + ae * C5141 * C5199 +
                         C5141 * (ae * C5199 + C5141 * C5160 * C5159 * C5197)) /
                        C4830;
    const double C143 =
        (2 * (ae * C5199 + C5141 * C5203) + ae * (C5199 + C5204 * C5145) +
         C5141 * (C5203 + ae * C5141 * C5204 +
                  C5141 * (ae * C5204 +
                           C5141 * std::pow(C5147, 5) * bs[5] * C5197))) /
        C4830;
    const double C235 = (C5150 * C5146 * C5234 + ae * C5141 * C5199 +
                         C5141 * (ae * C5199 + C5141 * C5160 * C5159 * C5234)) /
                        C4830;
    const double C236 =
        (2 * (ae * C5199 + C5141 * C5237) + ae * (C5199 + C5204 * C5145) +
         C5141 * (C5237 + ae * C5141 * C5204 +
                  C5141 * (ae * C5204 +
                           C5141 * std::pow(C5147, 5) * bs[5] * C5234))) /
        C4830;
    const double C402 = (C5179 * (ae * C5199 + C5141 * C5203)) / C4830;
    const double C497 = (ae * C5141 * C5199 + C5179 * C5141 * C5229) / C4830;
    const double C498 =
        (ae * (C5199 + C5204 * C5145) +
         C5179 * (C5229 + std::pow(C5147, 5) * bs[5] * C5226 * C5145)) /
        C4830;
    const double C526 = (C5179 * (ae * C5199 + C5141 * C5237)) / C4830;
    const double C555 = (ae * C5141 * C5199 + C5179 * C5141 * C5245) / C4830;
    const double C556 =
        (ae * (C5199 + C5204 * C5145) +
         C5179 * (C5245 + std::pow(C5147, 5) * bs[5] * C5242 * C5145)) /
        C4830;
    const double C989 =
        (ae * C5199 + C5141 * C5203 +
         (ae * C5204 + C5141 * std::pow(C5147, 5) * bs[5] * C5197) * C5216) /
        C4830;
    const double C1081 = (C5150 * C5146 * C5226 + ae * C5179 * C5199 +
                          C5179 * (ae * C5199 + C5179 * C5229)) /
                         C4830;
    const double C1110 =
        (ae * C5199 + C5141 * C5237 +
         (ae * C5204 + C5141 * std::pow(C5147, 5) * bs[5] * C5234) * C5216) /
        C4830;
    const double C1137 = (C5150 * C5146 * C5242 + ae * C5179 * C5199 +
                          C5179 * (ae * C5199 + C5179 * C5245)) /
                         C4830;
    const double C1309 =
        (2 * (ae * C5199 + C5179 * C5229) + ae * (C5199 + C5204 * C5216) +
         C5179 * (C5229 + ae * C5179 * C5204 +
                  C5179 * (ae * C5204 +
                           C5179 * std::pow(C5147, 5) * bs[5] * C5226))) /
        C4830;
    const double C1347 =
        (2 * (ae * C5199 + C5179 * C5245) + ae * (C5199 + C5204 * C5216) +
         C5179 * (C5245 + ae * C5179 * C5204 +
                  C5179 * (ae * C5204 +
                           C5179 * std::pow(C5147, 5) * bs[5] * C5242))) /
        C4830;
    const double C1548 =
        (ae * (C5193 * C5199 + C5152) + C5179 * (ae * C5185 + C5193 * C5229)) /
        C4830;
    const double C138 = (C5142 * C5140 * C5196 + C5199 * C5145) / C4825;
    const double C139 =
        (2 * C5141 * C5199 + C5141 * (C5199 + C5204 * C5145)) / C4825;
    const double C399 = (C5179 * C5141 * C5199) / C4825;
    const double C400 = (C5179 * (C5199 + C5204 * C5145)) / C4825;
    const double C690 = (C5193 * C5141 * C5199 + C5141 * C5144 * ae) / C4825;
    const double C691 =
        (C5193 * (C5199 + C5204 * C5145) + (C5144 + C5158 * C5145) * ae) /
        C4825;
    const double C986 = (C5142 * C5140 * C5196 + C5199 * C5216) / C4825;
    const double C1243 =
        (2 * C5179 * C5199 + C5179 * (C5199 + C5204 * C5216)) / C4825;
    const double C1459 = (C5193 * C5179 * C5199 + C5179 * C5144 * ae) / C4825;
    const double C1460 =
        (C5193 * (C5199 + C5204 * C5216) + (C5144 + C5158 * C5216) * ae) /
        C4825;
    const double C2005 =
        (C5179 * C5203 + ae * C5193 * C5404 +
         C5193 * (ae * C5404 +
                  C5193 * C5179 * std::pow(C5147, 5) * bs[5] * C5197)) /
        C4830;
    const double C2117 =
        (C5179 * C5237 + ae * C5193 * C5404 +
         C5193 * (ae * C5404 +
                  C5193 * C5179 * std::pow(C5147, 5) * bs[5] * C5234)) /
        C4830;
    const double C2926 =
        (2 * ae * C5193 * C5404 +
         C5141 * C5193 * C5179 *
             (C5159 * C5160 + C5145 * bs[5] * std::pow(C5147, 5)) * C5148) /
        C4830;
    const double C1946 = (C5179 * C5153 + C5404 * C5249) / C4825;
    const double C5327 = C5179 * C5326;
    const double C1825 =
        (C5141 * C5229 + ae * C5193 * C5326 +
         C5193 * (ae * C5326 +
                  C5193 * C5141 * std::pow(C5147, 5) * bs[5] * C5226)) /
        C4830;
    const double C1881 =
        (C5141 * C5245 + ae * C5193 * C5326 +
         C5193 * (ae * C5326 +
                  C5193 * C5141 * std::pow(C5147, 5) * bs[5] * C5242)) /
        C4830;
    const double C3072 =
        (2 * ae * C5193 * C5326 +
         C5179 * C5193 * C5141 *
             (C5159 * C5160 + C5216 * bs[5] * std::pow(C5147, 5)) * C5148) /
        C4830;
    const double C1704 = (C5141 * C5185 + C5326 * C5249) / C4825;
    const double C5398 = C5193 * C5332;
    const double C1082 =
        (C5141 * C5229 + ae * C5179 * C5332 +
         C5179 * (ae * C5332 +
                  C5179 * C5141 * std::pow(C5147, 5) * bs[5] * C5226)) /
        C4830;
    const double C1138 =
        (C5141 * C5245 + ae * C5179 * C5332 +
         C5179 * (ae * C5332 +
                  C5179 * C5141 * std::pow(C5147, 5) * bs[5] * C5242)) /
        C4830;
    const double C3216 =
        (2 * ae * C5179 * C5332 +
         C5193 * C5179 * C5141 *
             (C5159 * C5160 + C5249 * bs[5] * std::pow(C5147, 5)) * C5148) /
        C4830;
    const double C987 = (C5141 * C5199 + C5332 * C5216) / C4825;
    const double C5412 = C5193 * C5411;
    const double C4847 = C4841 / C4830;
    const double C4845 = 2 * C4841;
    const double C4844 = -4 * C4841;
    const double C5714 = C5531 / C4840;
    const double C5713 = C5531 * C5526;
    const double C5710 = C5531 / C4825;
    const double C5538 = C5535 * C5526;
    const double C60 = C5535 / C5716;
    const double C2396 = C5535 / C4831;
    const double C312 = (C5530 * std::pow(C5526, 2)) / C4830 + C5712;
    const double C5732 = C5711 / C4825;
    const double C313 = (-2 * C5534 * C5711) / C4825;
    const double C4943 = 2 * C4915;
    const double C4974 = C4915 / C4830;
    const double C4996 = -4 * C4915;
    const double C459 =
        (((-4 * C4915) / C4825 -
          (C4889 * (C5575 - (C4889 * 2 * C4915) / C4825) * C4835) / C4825) *
         ae) /
        C4825;
    const double C460 =
        (-((C5575 - (C4889 * 2 * C4915) / C4825) * C4835) / C4825) / C4831;
    const double C191 = C108 * C110;
    const double C190 = C108 * C109;
    const double C754 = C108 * C655;
    const double C467 = C364 * C110;
    const double C465 = C364 * C109;
    const double C2061 = C364 * C655;
    const double C466 = C365 * C366;
    const double C5725 = C5586 / C4840;
    const double C5724 = C5586 * C5585;
    const double C5720 = C5586 / C4825;
    const double C5592 = C5589 * C5585;
    const double C1191 = C5589 / C5716;
    const double C2659 = C5589 / C4831;
    const double C5735 = C5723 / C4825;
    const double C909 = (-2 * C5534 * C5723) / C4825;
    const double C908 = (C5575 * std::pow(C5585, 2)) / C4830 + C5722;
    const double C5013 = 2 * C4927;
    const double C5040 = C4927 / C4830;
    const double C5062 = -4 * C4927;
    const double C869 =
        (((-4 * C4927) / C4825 -
          (C4892 * (C5601 - (C4892 * 2 * C4927) / C4825) * C4835) / C4825) *
         ae) /
        C4825;
    const double C870 =
        (-((C5601 - (C4892 * 2 * C4927) / C4825) * C4835) / C4825) / C4831;
    const double C284 = C135 * C137;
    const double C283 = C135 * C136;
    const double C587 = C135 * C398;
    const double C877 = C687 * C137;
    const double C875 = C687 * C136;
    const double C1635 = C687 * C398;
    const double C876 = C688 * C689;
    const double C5730 = C5610 / C4840;
    const double C5729 = C5610 * C5609;
    const double C5721 = C5610 / C4825;
    const double C5616 = C5613 * C5609;
    const double C2196 = C5613 / C5716;
    const double C3808 = C5613 / C4831;
    const double C5738 = C5728 / C4825;
    const double C1665 = (-2 * C5534 * C5728) / C4825;
    const double C1664 = (C5601 * std::pow(C5609, 2)) / C4830 + C5727;
    const double C5155 = C5154 + C5152;
    const double C5167 = C5164 * ae;
    const double C3001 = (C5193 * C5179 * C5332 + C5179 * C5164 * ae) / C4825;
    const double C916 = C5141 * C5144 + C5164 * C5216;
    const double C1668 = C5141 * C5144 + C5164 * C5249;
    const double C2924 = C5193 * C5179 * C5164;
    const double C5171 = C5169 + C5163;
    const double C5346 = C5344 + C5163;
    const double C5426 = C5424 + C5163;
    const double C2090 =
        (ae * (C5199 + C5193 * (C5193 * C5204 + C5163) + C5193 * C5158 * ae) +
         C5179 * (C5229 + ae * C5193 * C5190 +
                  C5193 * (ae * C5190 +
                           C5193 * std::pow(C5147, 5) * bs[5] * C5226))) /
        C4830;
    const double C5170 = C5168 * C5148;
    const double C5221 = C5220 * C5148;
    const double C5254 = C5253 * C5148;
    const double C5347 = C5345 * ae;
    const double C1945 = C5179 * C5144 + C5345 * C5249;
    const double C5427 = C5425 * ae;
    const double C5323 = C5322 + C5152;
    const double C192 = C108 * C111;
    const double C469 = C364 * C111;
    const double C193 = C108 * C112;
    const double C468 = C365 * C367;
    const double C470 = C365 * C368;
    const double C755 = C108 * C656;
    const double C3639 = C364 * C656;
    const double C756 = C108 * C657;
    const double C1797 = C108 * C1703;
    const double C2063 = C364 * C1703;
    const double C2284 = C108 * C2219;
    const double C5395 = C5394 + C5152;
    const double C285 = C135 * C138;
    const double C879 = C687 * C138;
    const double C286 = C135 * C139;
    const double C588 = C135 * C399;
    const double C3218 = C687 * C399;
    const double C589 = C135 * C400;
    const double C878 = C688 * C690;
    const double C880 = C688 * C691;
    const double C1168 = C135 * C986;
    const double C1637 = C687 * C986;
    const double C1368 = C135 * C1243;
    const double C1636 = C688 * C1459;
    const double C1638 = C688 * C1460;
    const double C1798 = C108 * C1704;
    const double C1169 = C135 * C987;
    const double C4851 = C4836 - C4847;
    const double C4850 = C4826 * C4845;
    const double C322 = ((-C4845 / C4825) / C4831 - (0 * be) / C4825) / C4831 -
                        (0 * be) / C4825;
    const double C1193 = -C4845 / C4825;
    const double C2663 = (-C4845 / C4825) / C4831 - (0 * be) / C4825;
    const double C4849 = C4844 / C4825;
    const double C5733 = C5713 / C4830;
    const double C5715 = C5538 / C4825;
    const double C2655 = -C5732;
    const double C4951 = C4889 * C4943;
    const double C954 =
        ((-C4942 / C4825) / C4831 -
         ((C5575 - (C4889 * C4943) / C4825) * be) / C4825) /
            C4831 -
        ((C4889 * ((-C4943 / C4825) / C4831 - (0 * be) / C4825) + C5589) * be) /
            C4825;
    const double C955 = ((-C4943 / C4825) / C4831 - (0 * be) / C4825) / C4831 -
                        (0 * be) / C4825;
    const double C2438 = (-C4943 / C4825) / C4831 - (0 * be) / C4825;
    const double C4981 = C4978 - C4974;
    const double C4999 = C4996 / C4825;
    const double C5736 = C5724 / C4830;
    const double C5726 = C5592 / C4825;
    const double C2397 = -C5735;
    const double C5021 = C4892 * C5013;
    const double C1734 =
        ((-C5012 / C4825) / C4831 -
         ((C5601 - (C4892 * C5013) / C4825) * be) / C4825) /
            C4831 -
        ((C4892 * ((-C5013 / C4825) / C4831 - (0 * be) / C4825) + C5613) * be) /
            C4825;
    const double C1735 = ((-C5013 / C4825) / C4831 - (0 * be) / C4825) / C4831 -
                         (0 * be) / C4825;
    const double C3303 = (-C5013 / C4825) / C4831 - (0 * be) / C4825;
    const double C5047 = C5044 - C5040;
    const double C5065 = C5062 / C4825;
    const double C5739 = C5729 / C4830;
    const double C5731 = C5616 / C4825;
    const double C3245 = -C5738;
    const double C5156 = ae * C5155;
    const double C80 =
        (C5142 * C5140 * C5149 + C5141 * C5155 + C5141 * C5144 * ae) / C4825;
    const double C327 = (C5179 * C5155) / C4825;
    const double C621 = (C5193 * C5155) / C4825;
    const double C5328 = C5327 + C5167;
    const double C5399 = C5398 + C5167;
    const double C3219 = C688 * C3001;
    const double C5173 = ae * C5171;
    const double C5172 = C5141 * C5171;
    const double C5258 = C5179 * C5171;
    const double C5287 = C5193 * C5171;
    const double C918 = (C5155 + C5171 * C5216) / C4825;
    const double C1670 = (C5155 + C5171 * C5249) / C4825;
    const double C5349 = ae * C5346;
    const double C5348 = C5179 * C5346;
    const double C5367 = C5193 * C5346;
    const double C5429 = ae * C5426;
    const double C5428 = C5193 * C5426;
    const double C330 =
        (2 * ae * C5179 * C5153 + C5141 * C5179 * C5170) / C4830;
    const double C624 =
        (2 * ae * C5193 * C5153 + C5141 * C5193 * C5170) / C4830;
    const double C919 =
        ((C5144 + C5145 * C5146 * C5150) * C5148 + C5170 * C5216) / C4830;
    const double C920 =
        (2 * ae * (C5153 + C5166 * C5216) +
         C5141 * (C5170 + (C5159 * C5160 + C5145 * bs[5] * std::pow(C5147, 5)) *
                              C5148 * C5216)) /
        C4830;
    const double C1196 =
        (2 * C5179 * C5170 +
         C5179 * (C5170 + (C5159 * C5160 + C5145 * bs[5] * std::pow(C5147, 5)) *
                              C5148 * C5216)) /
        C4830;
    const double C1398 = (C5193 * C5179 * C5170) / C4830;
    const double C1399 =
        (C5193 * (C5170 + (C5159 * C5160 + C5145 * bs[5] * std::pow(C5147, 5)) *
                              C5148 * C5216)) /
        C4830;
    const double C1671 =
        ((C5144 + C5145 * C5146 * C5150) * C5148 + C5170 * C5249) / C4830;
    const double C1672 =
        (2 * ae * (C5153 + C5166 * C5249) +
         C5141 * (C5170 + (C5159 * C5160 + C5145 * bs[5] * std::pow(C5147, 5)) *
                              C5148 * C5249)) /
        C4830;
    const double C1947 =
        (C5179 * C5170 +
         C5179 * (C5159 * C5160 + C5145 * bs[5] * std::pow(C5147, 5)) * C5148 *
             C5249) /
        C4830;
    const double C2199 =
        (2 * C5193 * C5170 +
         C5193 * (C5170 + (C5159 * C5160 + C5145 * bs[5] * std::pow(C5147, 5)) *
                              C5148 * C5249)) /
        C4830;
    const double C188 =
        (2 * C5141 * C5221 +
         C5141 * (C5221 + (C5159 * C5160 + C5216 * bs[5] * std::pow(C5147, 5)) *
                              C5148 * C5145)) /
        C4830;
    const double C462 =
        (2 * ae * C5141 * C5185 + C5179 * C5141 * C5221) / C4830;
    const double C463 =
        (2 * ae * (C5185 + C5190 * C5145) +
         C5179 * (C5221 + (C5159 * C5160 + C5216 * bs[5] * std::pow(C5147, 5)) *
                              C5148 * C5145)) /
        C4830;
    const double C751 = (C5193 * C5141 * C5221) / C4830;
    const double C752 =
        (C5193 * (C5221 + (C5159 * C5160 + C5216 * bs[5] * std::pow(C5147, 5)) *
                              C5148 * C5145)) /
        C4830;
    const double C1517 =
        (2 * ae * C5193 * C5185 + C5179 * C5193 * C5221) / C4830;
    const double C1794 =
        ((C5144 + C5216 * C5146 * C5150) * C5148 + C5221 * C5249) / C4830;
    const double C1795 =
        (C5141 * C5221 +
         C5141 * (C5159 * C5160 + C5216 * bs[5] * std::pow(C5147, 5)) * C5148 *
             C5249) /
        C4830;
    const double C2059 =
        (2 * ae * (C5185 + C5190 * C5249) +
         C5179 * (C5221 + (C5159 * C5160 + C5216 * bs[5] * std::pow(C5147, 5)) *
                              C5148 * C5249)) /
        C4830;
    const double C2282 =
        (2 * C5193 * C5221 +
         C5193 * (C5221 + (C5159 * C5160 + C5216 * bs[5] * std::pow(C5147, 5)) *
                              C5148 * C5249)) /
        C4830;
    const double C281 =
        (2 * C5141 * C5254 +
         C5141 * (C5254 + (C5159 * C5160 + C5249 * bs[5] * std::pow(C5147, 5)) *
                              C5148 * C5145)) /
        C4830;
    const double C584 = (C5179 * C5141 * C5254) / C4830;
    const double C585 =
        (C5179 * (C5254 + (C5159 * C5160 + C5249 * bs[5] * std::pow(C5147, 5)) *
                              C5148 * C5145)) /
        C4830;
    const double C872 =
        (2 * ae * C5141 * C5199 + C5193 * C5141 * C5254) / C4830;
    const double C873 =
        (2 * ae * (C5199 + C5204 * C5145) +
         C5193 * (C5254 + (C5159 * C5160 + C5249 * bs[5] * std::pow(C5147, 5)) *
                              C5148 * C5145)) /
        C4830;
    const double C1165 =
        ((C5144 + C5249 * C5146 * C5150) * C5148 + C5254 * C5216) / C4830;
    const double C1166 =
        (C5141 * C5254 +
         C5141 * (C5159 * C5160 + C5249 * bs[5] * std::pow(C5147, 5)) * C5148 *
             C5216) /
        C4830;
    const double C1366 =
        (2 * C5179 * C5254 +
         C5179 * (C5254 + (C5159 * C5160 + C5249 * bs[5] * std::pow(C5147, 5)) *
                              C5148 * C5216)) /
        C4830;
    const double C1632 =
        (2 * ae * C5179 * C5199 + C5193 * C5179 * C5254) / C4830;
    const double C1633 =
        (2 * ae * (C5199 + C5204 * C5216) +
         C5193 * (C5254 + (C5159 * C5160 + C5249 * bs[5] * std::pow(C5147, 5)) *
                              C5148 * C5216)) /
        C4830;
    const double C5413 = C5412 + C5347;
    const double C1549 =
        (ae * C5185 + C5193 * C5229 + ae * (C5193 * C5179 * C5204 + C5347) +
         C5179 * (ae * (C5193 * C5204 + C5163) +
                  C5179 * (ae * C5190 +
                           C5193 * std::pow(C5147, 5) * bs[5] * C5226))) /
        C4830;
    const double C5324 = ae * C5323;
    const double C956 =
        (C5142 * C5140 * C5182 + C5179 * C5323 + C5179 * C5144 * ae) / C4825;
    const double C1429 = (C5193 * C5323) / C4825;
    const double C1976 = (C5323 + C5346 * C5249) / C4825;
    const double C5396 = ae * C5395;
    const double C1736 =
        (C5142 * C5140 * C5196 + C5193 * C5395 + C5193 * C5144 * ae) / C4825;
    const double C923 = C4851 * C79;
    const double C73 =
        (C4851 / C4831 - (0 * be) / C4825) / C4831 - (0 * be) / C4825;
    const double C2404 = C4851 / C4831 - (0 * be) / C4825;
    const double C4853 = C4850 / C4825;
    const double C1201 = C1193 * C1195;
    const double C1200 = C1193 * C917;
    const double C1199 = C1193 * C326;
    const double C1198 = C1193 * C78;
    const double C1403 = C1193 * C1397;
    const double C1402 = C1193 * C1396;
    const double C1401 = C1193 * C620;
    const double C1950 = C1193 * C1946;
    const double C1949 = C1193 * C1669;
    const double C2201 = C1193 * C2198;
    const double C2666 = C2663 * C79;
    const double C5741 = C5712 - C5733;
    const double C5734 = C5714 - C5715;
    const double C4952 = C4951 / C4825;
    const double C1054 = C954 * C367;
    const double C1051 = C954 * C366;
    const double C2525 = C2438 * C368;
    const double C2523 = C2438 * C367;
    const double C2521 = C2438 * C366;
    const double C1222 =
        (C4981 / C4831 - (0 * be) / C4825) / C4831 - (0 * be) / C4825;
    const double C2698 = C4981 / C4831 - (0 * be) / C4825;
    const double C5742 = C5722 - C5736;
    const double C5737 = C5725 - C5726;
    const double C953 =
        ((-(0 * be) / C4825) / C4831 -
         ((0 - (C4889 * C4942) / C4825) * be) / C4825) /
            C4831 -
        ((C4889 * ((-C4942 / C4825) / C4831 -
                   ((C5575 - (C4889 * C4943) / C4825) * be) / C4825) +
          C2397) *
         be) /
            C4825 +
        (-C4943 / C4825) / C4831 - (0 * be) / C4825;
    const double C5022 = C5021 / C4825;
    const double C1918 = C1734 * C690;
    const double C1915 = C1734 * C689;
    const double C2174 = C1734 * C1459;
    const double C3468 = C3303 * C691;
    const double C3466 = C3303 * C690;
    const double C3464 = C3303 * C689;
    const double C3780 = C3303 * C3001;
    const double C3778 = C3303 * C1459;
    const double C4578 = C3303 * C1460;
    const double C2242 =
        (C5047 / C4831 - (0 * be) / C4825) / C4831 - (0 * be) / C4825;
    const double C3865 = C5047 / C4831 - (0 * be) / C4825;
    const double C5743 = C5727 - C5739;
    const double C5740 = C5730 - C5731;
    const double C1733 =
        ((-(0 * be) / C4825) / C4831 -
         ((0 - (C4892 * C5012) / C4825) * be) / C4825) /
            C4831 -
        ((C4892 * ((-C5012 / C4825) / C4831 -
                   ((C5601 - (C4892 * C5013) / C4825) * be) / C4825) +
          C3245) *
         be) /
            C4825 +
        (-C5013 / C4825) / C4831 - (0 * be) / C4825;
    const double C84 =
        ((C5144 + C5145 * C5146 * C5150) * C5148 + C5156 + C5156 +
         C5141 * (2 * ae * C5153 +
                  C5141 * (C5146 * C5150 + C5145 * bs[4] * std::pow(C5139, 4)) *
                      C5148)) /
        C4830;
    const double C370 = (C5156 + C5179 * (ae * C5185 + C5141 * C5189)) / C4830;
    const double C431 = (C5156 + C5179 * (ae * C5185 + C5141 * C5212)) / C4830;
    const double C693 = (C5156 + C5193 * (ae * C5199 + C5141 * C5203)) / C4830;
    const double C812 = (C5156 + C5193 * (ae * C5199 + C5141 * C5237)) / C4830;
    const double C335 = C322 * C80;
    const double C925 = C4851 * C327;
    const double C2668 = C2663 * C327;
    const double C1675 = C4851 * C621;
    const double C2929 = C2663 * C621;
    const double C5329 = ae * C5328;
    const double C957 =
        (C5141 * C5185 + C5179 * C5328 + C5179 * C5164 * ae) / C4825;
    const double C2965 = (C5193 * C5328) / C4825;
    const double C5400 = ae * C5399;
    const double C1737 =
        (C5141 * C5199 + C5193 * C5399 + C5193 * C5164 * ae) / C4825;
    const double C2966 =
        (C5193 * (C5173 + C5179 * (ae * C5190 + C5141 * std::pow(C5147, 5) *
                                                    bs[5] * C5183))) /
        C4830;
    const double C5174 = C5153 + C5172;
    const double C5259 = ae * C5258;
    const double C2925 = (C5193 * C5258) / C4825;
    const double C5288 = ae * C5287;
    const double C927 = C4851 * C918;
    const double C2670 = C2663 * C918;
    const double C1677 = C4851 * C1670;
    const double C3811 = C2663 * C1670;
    const double C5350 = C5185 + C5348;
    const double C5368 = ae * C5367;
    const double C5430 = C5199 + C5428;
    const double C5414 = ae * C5413;
    const double C2004 =
        (C5179 * C5199 + C5193 * C5413 + C5193 * C5345 * ae) / C4825;
    const double C1047 = ((C5144 + C5216 * C5146 * C5150) * C5148 + C5324 +
                          C5324 + C5179 * (2 * ae * C5185 + C5179 * C5221)) /
                         C4830;
    const double C1604 = (C5324 + C5193 * (ae * C5199 + C5179 * C5245)) / C4830;
    const double C1052 = C955 * C956;
    const double C1521 = C954 * C1429;
    const double C2062 = C365 * C1429;
    const double C3075 = C2438 * C1429;
    const double C2064 = C365 * C1976;
    const double C4710 = C2438 * C1976;
    const double C1911 = ((C5144 + C5249 * C5146 * C5150) * C5148 + C5396 +
                          C5396 + C5193 * (2 * ae * C5199 + C5193 * C5254)) /
                         C4830;
    const double C1916 = C1735 * C1736;
    const double C2408 = C2404 * C80;
    const double C4855 = C5530 - C4853;
    const double C57 = (C5710 - C5732) / C4831 - (C5741 * C5526) / C4825;
    const double C58 = (2 * C5535 + C5741) / C4831 - (C5734 * C5526) / C4825;
    const double C59 = C5734 / C4831 - C5538 / C4840;
    const double C4953 = C5575 - C4952;
    const double C2783 = C2698 * C956;
    const double C1188 = (C5720 - C5735) / C4831 - (C5742 * C5585) / C4825;
    const double C1189 = (2 * C5589 + C5742) / C4831 - (C5737 * C5585) / C4825;
    const double C1190 = C5737 / C4831 - C5592 / C4840;
    const double C1053 = C953 * C110;
    const double C1050 = C953 * C109;
    const double C1520 = C953 * C655;
    const double C5023 = C5601 - C5022;
    const double C4028 = C3865 * C1736;
    const double C2193 = (C5721 - C5738) / C4831 - (C5743 * C5609) / C4825;
    const double C2194 = (2 * C5613 + C5743) / C4831 - (C5740 * C5609) / C4825;
    const double C2195 = C5740 / C4831 - C5616 / C4840;
    const double C1917 = C1733 * C137;
    const double C1914 = C1733 * C136;
    const double C2173 = C1733 * C398;
    const double C1048 =
        (C5141 * C5221 + C5329 + C5329 +
         C5179 * (2 * ae * C5326 +
                  C5179 * C5141 *
                      (C5159 * C5160 + C5216 * bs[5] * std::pow(C5147, 5)) *
                      C5148)) /
        C4830;
    const double C3181 =
        (C5329 + C5193 * (ae * C5332 +
                          C5179 * C5141 * std::pow(C5147, 5) * bs[5] * C5242)) /
        C4830;
    const double C1055 = C955 * C957;
    const double C2786 = C2698 * C957;
    const double C3077 = C2438 * C2965;
    const double C3640 = C365 * C2965;
    const double C1912 =
        (C5141 * C5254 + C5400 + C5400 +
         C5193 * (2 * ae * C5332 +
                  C5193 * C5141 *
                      (C5159 * C5160 + C5249 * bs[5] * std::pow(C5147, 5)) *
                      C5148)) /
        C4830;
    const double C3111 =
        (C5400 + C5179 * (ae * C5326 +
                          C5193 * C5141 * std::pow(C5147, 5) * bs[5] * C5226)) /
        C4830;
    const double C1919 = C1735 * C1737;
    const double C4031 = C3865 * C1737;
    const double C5175 = C5174 + C5167;
    const double C331 =
        (C5179 * C5170 + C5259 + C5259 +
         C5141 * (2 * ae * C5179 * C5166 +
                  C5141 * C5179 *
                      (C5159 * C5160 + C5145 * bs[5] * std::pow(C5147, 5)) *
                      C5148)) /
        C4830;
    const double C959 =
        (ae * C5185 + C5141 * C5189 + C5259 +
         C5179 * (C5173 + C5179 * (ae * C5190 + C5141 * std::pow(C5147, 5) *
                                                    bs[5] * C5183))) /
        C4830;
    const double C1017 =
        (ae * C5185 + C5141 * C5212 + C5259 +
         C5179 * (C5173 + C5179 * (ae * C5190 + C5141 * std::pow(C5147, 5) *
                                                    bs[5] * C5209))) /
        C4830;
    const double C3002 = (C5259 + C5193 * C5179 *
                                      (ae * C5204 + C5141 * std::pow(C5147, 5) *
                                                        bs[5] * C5197)) /
                         C4830;
    const double C3146 = (C5259 + C5193 * C5179 *
                                      (ae * C5204 + C5141 * std::pow(C5147, 5) *
                                                        bs[5] * C5234)) /
                         C4830;
    const double C2931 = C2663 * C2925;
    const double C4067 = C4851 * C2925;
    const double C625 =
        (C5193 * C5170 + C5288 + C5288 +
         C5141 * (2 * ae * C5193 * C5166 +
                  C5141 * C5193 *
                      (C5159 * C5160 + C5145 * bs[5] * std::pow(C5147, 5)) *
                      C5148)) /
        C4830;
    const double C1739 =
        (ae * C5199 + C5141 * C5203 + C5288 +
         C5193 * (C5173 + C5193 * (ae * C5204 + C5141 * std::pow(C5147, 5) *
                                                    bs[5] * C5197))) /
        C4830;
    const double C1853 =
        (ae * C5199 + C5141 * C5237 + C5288 +
         C5193 * (C5173 + C5193 * (ae * C5204 + C5141 * std::pow(C5147, 5) *
                                                    bs[5] * C5234))) /
        C4830;
    const double C3037 = (C5288 + C5179 * C5193 *
                                      (ae * C5190 + C5141 * std::pow(C5147, 5) *
                                                        bs[5] * C5209)) /
                         C4830;
    const double C5351 = C5350 + C5347;
    const double C1518 =
        (C5193 * C5221 + C5368 + C5368 +
         C5179 * (2 * ae * C5193 * C5190 +
                  C5179 * C5193 *
                      (C5159 * C5160 + C5216 * bs[5] * std::pow(C5147, 5)) *
                      C5148)) /
        C4830;
    const double C2144 =
        (ae * C5199 + C5179 * C5245 + C5368 +
         C5193 * (C5349 + C5193 * (ae * C5204 + C5179 * std::pow(C5147, 5) *
                                                    bs[5] * C5242))) /
        C4830;
    const double C5431 = C5430 + C5427;
    const double C2171 =
        (C5179 * C5254 + C5414 + C5414 +
         C5193 * (2 * ae * C5411 +
                  C5193 * C5179 *
                      (C5159 * C5160 + C5249 * bs[5] * std::pow(C5147, 5)) *
                      C5148)) /
        C4830;
    const double C2175 = C1735 * C2004;
    const double C4817 = C3865 * C2004;
    const double C4857 = C4855 * ae;
    const double C4856 = C4855 * C4835;
    const double C318 =
        ((-C4824 / C4825) / C4831 - (C4842 * be) / C4825) / C4831 -
        ((C4826 * ((-C4827 / C4825) / C4831 - (C4855 * be) / C4825) + C2655) *
         be) /
            C4825 +
        (-C4845 / C4825) / C4831 - (0 * be) / C4825;
    const double C320 =
        ((-C4827 / C4825) / C4831 - (C4855 * be) / C4825) / C4831 -
        ((C4826 * ((-C4845 / C4825) / C4831 - (0 * be) / C4825) + C5535) * be) /
            C4825;
    const double C2661 = (-C4827 / C4825) / C4831 - (C4855 * be) / C4825;
    const double C4954 = C4953 * C4835;
    const double C4971 = C4953 * ae;
    const double C2437 = (-C4942 / C4825) / C4831 - (C4953 * be) / C4825;
    const double C5024 = C5023 * C4835;
    const double C5037 = C5023 * ae;
    const double C3302 = (-C5012 / C4825) / C4831 - (C5023 * be) / C4825;
    const double C5176 = ae * C5175;
    const double C81 =
        (2 * C5155 + C5141 * C5175 + (C5144 + C5158 * C5145) * ae) / C4825;
    const double C328 = (C5179 * C5175) / C4825;
    const double C622 = (C5193 * C5175) / C4825;
    const double C5352 = ae * C5351;
    const double C1223 =
        (2 * C5323 + C5179 * C5351 + (C5144 + C5158 * C5216) * ae) / C4825;
    const double C1430 = (C5193 * C5351) / C4825;
    const double C5432 = ae * C5431;
    const double C2243 =
        (2 * C5395 + C5193 * C5431 + (C5144 + C5158 * C5249) * ae) / C4825;
    const double C4859 = C4857 / C4825;
    const double C4858 = C4826 * C4856;
    const double C72 = (-C4856 / C4825) / (4 * C4837);
    const double C321 = (-C4856 / C4825) / (4 * C4830);
    const double C913 = (-C4856 / C4825) / C4831;
    const double C1192 = -C4856 / C4825;
    const double C2403 = (-C4856 / C4825) / (4 * C4830);
    const double C2662 = (-C4856 / C4825) / C4831;
    const double C336 = C318 * C326;
    const double C333 = C318 * C78;
    const double C627 = C318 * C620;
    const double C337 = C320 * C327;
    const double C334 = C320 * C79;
    const double C628 = C320 * C621;
    const double C2669 = C2661 * C917;
    const double C2667 = C2661 * C326;
    const double C2665 = C2661 * C78;
    const double C2930 = C2661 * C1396;
    const double C2928 = C2661 * C620;
    const double C3810 = C2661 * C1669;
    const double C4957 = C4889 * C4954;
    const double C1044 =
        (-(be * -2 * C4942) / C4830) / C4831 -
        ((2 * ((-C4942 / C4825) / C4831 - (C4953 * be) / C4825) -
          (C4889 * ((-4 * C4915) / C4825 - (C4889 * C4954) / C4825) * be) /
              C4825) *
         be) /
            C4825 -
        C4954 / C4840;
    const double C1046 = (-C4954 / C4825) / (4 * C4830);
    const double C1285 = (-C4954 / C4825) / (4 * C4837);
    const double C2518 = (-C4954 / C4825) / C4831;
    const double C2779 = (-C4954 / C4825) / (4 * C4830);
    const double C4977 = C4971 / C4825;
    const double C2524 = C2437 * C111;
    const double C2522 = C2437 * C110;
    const double C2520 = C2437 * C109;
    const double C3076 = C2437 * C656;
    const double C3074 = C2437 * C655;
    const double C4709 = C2437 * C1703;
    const double C5027 = C4892 * C5024;
    const double C1908 =
        (-(be * -2 * C5012) / C4830) / C4831 -
        ((2 * ((-C5012 / C4825) / C4831 - (C5023 * be) / C4825) -
          (C4892 * ((-4 * C4927) / C4825 - (C4892 * C5024) / C4825) * be) /
              C4825) *
         be) /
            C4825 -
        C5024 / C4840;
    const double C1910 = (-C5024 / C4825) / (4 * C4830);
    const double C2362 = (-C5024 / C4825) / (4 * C4837);
    const double C3461 = (-C5024 / C4825) / C4831;
    const double C4024 = (-C5024 / C4825) / (4 * C4830);
    const double C5043 = C5037 / C4825;
    const double C3467 = C3302 * C138;
    const double C3465 = C3302 * C137;
    const double C3463 = C3302 * C136;
    const double C3779 = C3302 * C399;
    const double C3777 = C3302 * C398;
    const double C4577 = C3302 * C986;
    const double C85 =
        (2 * (2 * ae * C5153 + C5141 * C5170) + C5176 + C5176 +
         C5141 * (C5170 + C5173 + C5173 +
                  C5141 * (2 * ae * C5166 +
                           C5141 *
                               (C5159 * C5160 +
                                C5145 * bs[5] * std::pow(C5147, 5)) *
                               C5148))) /
        C4830;
    const double C371 =
        (C5176 + C5179 * (C5189 + ae * C5141 * C5190 +
                          C5141 * (ae * C5190 + C5141 * std::pow(C5147, 5) *
                                                    bs[5] * C5183))) /
        C4830;
    const double C432 =
        (C5176 + C5179 * (C5212 + ae * C5141 * C5190 +
                          C5141 * (ae * C5190 + C5141 * std::pow(C5147, 5) *
                                                    bs[5] * C5209))) /
        C4830;
    const double C694 =
        (C5176 + C5193 * (C5203 + ae * C5141 * C5204 +
                          C5141 * (ae * C5204 + C5141 * std::pow(C5147, 5) *
                                                    bs[5] * C5197))) /
        C4830;
    const double C813 =
        (C5176 + C5193 * (C5237 + ae * C5141 * C5204 +
                          C5141 * (ae * C5204 + C5141 * std::pow(C5147, 5) *
                                                    bs[5] * C5234))) /
        C4830;
    const double C90 = C73 * C81;
    const double C338 = C322 * C328;
    const double C2411 = C2404 * C328;
    const double C629 = C322 * C622;
    const double C3250 = C2404 * C622;
    const double C1286 =
        (2 * (2 * ae * C5185 + C5179 * C5221) + C5352 + C5352 +
         C5179 * (C5221 + C5349 + C5349 +
                  C5179 * (2 * ae * C5190 +
                           C5179 *
                               (C5159 * C5160 +
                                C5216 * bs[5] * std::pow(C5147, 5)) *
                               C5148))) /
        C4830;
    const double C1605 =
        (C5352 + C5193 * (C5245 + ae * C5179 * C5204 +
                          C5179 * (ae * C5204 + C5179 * std::pow(C5147, 5) *
                                                    bs[5] * C5242))) /
        C4830;
    const double C1291 = C1222 * C1223;
    const double C1522 = C955 * C1430;
    const double C4472 = C2698 * C1430;
    const double C2363 =
        (2 * (2 * ae * C5199 + C5193 * C5254) + C5432 + C5432 +
         C5193 * (C5254 + C5429 + C5429 +
                  C5193 * (2 * ae * C5204 +
                           C5193 *
                               (C5159 * C5160 +
                                C5249 * bs[5] * std::pow(C5147, 5)) *
                               C5148))) /
        C4830;
    const double C2368 = C2242 * C2243;
    const double C4861 = C4859 - C4846;
    const double C4860 = C4858 / C4825;
    const double C4997 = C4957 / C4825;
    const double C1045 =
        (-(((-4 * C4915) / C4825 - C4957 / C4825) * be) / C4825) / C4831 -
        ((2 * ((-C4943 / C4825) / C4831 - (0 * be) / C4825) - C4957 / C4840) *
         be) /
            C4825;
    const double C4980 = C4977 - C4972;
    const double C5063 = C5027 / C4825;
    const double C1909 =
        (-(((-4 * C4927) / C4825 - C5027 / C4825) * be) / C4825) / C4831 -
        ((2 * ((-C5013 / C4825) / C4831 - (0 * be) / C4825) - C5027 / C4840) *
         be) /
            C4825;
    const double C5046 = C5043 - C5038;
    const double C926 = C4861 * C917;
    const double C924 = C4861 * C326;
    const double C922 = C4861 * C78;
    const double C1676 = C4861 * C1669;
    const double C1674 = C4861 * C620;
    const double C4066 = C4861 * C1396;
    const double C67 =
        ((((0 - (C4826 * C4824) / C4825) * ae) / C4825 - (0 * be) / C4840 +
          C4827 / C4825) /
             C4831 -
         ((C4826 * C4854 + 0) * be) / C4825) /
            C4831 -
        ((C4826 *
              (C4854 / C4831 - ((C4826 * C4861 + C5710) * be) / C4825 + C4851) +
          C5741) *
         be) /
            C4825 +
        C4861 / C4831 - ((C4826 * C4851 + C5535) * be) / C4825;
    const double C69 =
        (C4854 / C4831 - ((C4826 * C4861 + C5710) * be) / C4825 + C4851) /
            C4831 -
        ((C4826 * (C4861 / C4831 - ((C4826 * C4851 + C5535) * be) / C4825) +
          C5734) *
         be) /
            C4825 +
        2 * (C4851 / C4831 - (0 * be) / C4825);
    const double C71 =
        (C4861 / C4831 - ((C4826 * C4851 + C5535) * be) / C4825) / C4831 -
        ((C4826 * (C4851 / C4831 - (0 * be) / C4825) + C2396) * be) / C4825;
    const double C2400 =
        C4854 / C4831 - ((C4826 * C4861 + C5710) * be) / C4825 + C4851;
    const double C2402 = C4861 / C4831 - ((C4826 * C4851 + C5535) * be) / C4825;
    const double C4862 = C4849 - C4860;
    const double C5000 = C4999 - C4997;
    const double C1219 =
        ((((0 - (C4889 * C4969) / C4825) * ae) / C4825 - (0 * be) / C4840 +
          C4942 / C4825) /
             C4831 -
         ((C4889 * C4984 + 0) * be) / C4825) /
            C4831 -
        ((C4889 *
              (C4984 / C4831 - ((C4889 * C4980 + C5720) * be) / C4825 + C4981) +
          C5742) *
         be) /
            C4825 +
        C4980 / C4831 - ((C4889 * C4981 + C5589) * be) / C4825;
    const double C1220 =
        (C4984 / C4831 - ((C4889 * C4980 + C5720) * be) / C4825 + C4981) /
            C4831 -
        ((C4889 * (C4980 / C4831 - ((C4889 * C4981 + C5589) * be) / C4825) +
          C5737) *
         be) /
            C4825 +
        2 * (C4981 / C4831 - (0 * be) / C4825);
    const double C1221 =
        (C4980 / C4831 - ((C4889 * C4981 + C5589) * be) / C4825) / C4831 -
        ((C4889 * (C4981 / C4831 - (0 * be) / C4825) + C2659) * be) / C4825;
    const double C2696 =
        C4984 / C4831 - ((C4889 * C4980 + C5720) * be) / C4825 + C4981;
    const double C2697 = C4980 / C4831 - ((C4889 * C4981 + C5589) * be) / C4825;
    const double C5066 = C5065 - C5063;
    const double C2239 =
        ((((0 - (C4892 * C5035) / C4825) * ae) / C4825 - (0 * be) / C4840 +
          C5012 / C4825) /
             C4831 -
         ((C4892 * C5050 + 0) * be) / C4825) /
            C4831 -
        ((C4892 *
              (C5050 / C4831 - ((C4892 * C5046 + C5721) * be) / C4825 + C5047) +
          C5743) *
         be) /
            C4825 +
        C5046 / C4831 - ((C4892 * C5047 + C5613) * be) / C4825;
    const double C2240 =
        (C5050 / C4831 - ((C4892 * C5046 + C5721) * be) / C4825 + C5047) /
            C4831 -
        ((C4892 * (C5046 / C4831 - ((C4892 * C5047 + C5613) * be) / C4825) +
          C5740) *
         be) /
            C4825 +
        2 * (C5047 / C4831 - (0 * be) / C4825);
    const double C2241 =
        (C5046 / C4831 - ((C4892 * C5047 + C5613) * be) / C4825) / C4831 -
        ((C4892 * (C5047 / C4831 - (0 * be) / C4825) + C3808) * be) / C4825;
    const double C3863 =
        C5050 / C4831 - ((C4892 * C5046 + C5721) * be) / C4825 + C5047;
    const double C3864 = C5046 / C4831 - ((C4892 * C5047 + C5613) * be) / C4825;
    const double C87 = C67 * C78;
    const double C88 = C69 * C79;
    const double C89 = C71 * C80;
    const double C2409 = C2400 * C326;
    const double C2406 = C2400 * C78;
    const double C3248 = C2400 * C620;
    const double C2410 = C2402 * C327;
    const double C2407 = C2402 * C79;
    const double C3249 = C2402 * C621;
    const double C4863 = C4862 * ae;
    const double C317 =
        (-(be * C4832) / C4830) / C4831 -
        ((2 * ((-C4827 / C4825) / C4831 - (C4855 * be) / C4825) -
          (C4826 * C4862 * be) / C4825) *
         be) /
            C4825 -
        C4856 / C4840;
    const double C319 =
        (-(C4862 * be) / C4825) / C4831 -
        ((2 * ((-C4845 / C4825) / C4831 - (0 * be) / C4825) - C4858 / C4840) *
         be) /
            C4825;
    const double C2660 = -(C4862 * be) / C4825;
    const double C5001 = C5000 * ae;
    const double C2517 = -(C5000 * be) / C4825;
    const double C1288 = C1219 * C109;
    const double C1289 = C1220 * C366;
    const double C1290 = C1221 * C956;
    const double C2784 = C2696 * C110;
    const double C2781 = C2696 * C109;
    const double C4470 = C2696 * C655;
    const double C2785 = C2697 * C367;
    const double C2782 = C2697 * C366;
    const double C4471 = C2697 * C1429;
    const double C5067 = C5066 * ae;
    const double C3460 = -(C5066 * be) / C4825;
    const double C2365 = C2239 * C136;
    const double C2366 = C2240 * C689;
    const double C2367 = C2241 * C1736;
    const double C4029 = C3863 * C137;
    const double C4026 = C3863 * C136;
    const double C4815 = C3863 * C398;
    const double C4030 = C3864 * C690;
    const double C4027 = C3864 * C689;
    const double C4816 = C3864 * C1459;
    const double C66 =
        ((ae * -2 * C4824) / C4837 -
         (((C4826 * C4838) / C4830 + 2 * C4854) * be) / C4825) /
            C4831 -
        ((C4826 * (C4838 / C4837 -
                   (((C4826 * C4863) / C4825 + 2 * C4861) * be) / C4825 -
                   C4856 / C4840) +
          2 * (C4854 / C4831 - ((C4826 * C4861 + C5710) * be) / C4825 +
               C4851)) *
         be) /
            C4825 +
        C4863 / C4840 - ((2 * C4851 - C4858 / C4840) * be) / C4825;
    const double C68 =
        (C4838 / C4837 - (((C4826 * C4863) / C4825 + 2 * C4861) * be) / C4825 -
         C4856 / C4840) /
            C4831 -
        ((C4826 * (C4863 / C4840 - ((2 * C4851 - C4858 / C4840) * be) / C4825) +
          2 * (C4861 / C4831 - ((C4826 * C4851 + C5535) * be) / C4825)) *
         be) /
            C4825 +
        (-2 * C4856) / (C4825 * 4 * C4830);
    const double C70 =
        (C4863 / C4840 - ((2 * C4851 - C4858 / C4840) * be) / C4825) / C4831 -
        ((2 * (C4851 / C4831 - (0 * be) / C4825) -
          C4858 / (C4825 * 4 * C4830)) *
         be) /
            C4825;
    const double C911 = C4863 / C4825;
    const double C2399 = C4838 / C4837 -
                         (((C4826 * C4863) / C4825 + 2 * C4861) * be) / C4825 -
                         C4856 / C4840;
    const double C2401 =
        C4863 / C4840 - ((2 * C4851 - C4858 / C4840) * be) / C4825;
    const double C1282 =
        ((ae * -2 * C4969) / C4837 -
         (((C4889 * C4998) / C4830 + 2 * C4984) * be) / C4825) /
            C4831 -
        ((C4889 * (C4998 / C4837 -
                   (((C4889 * C5001) / C4825 + 2 * C4980) * be) / C4825 -
                   C4954 / C4840) +
          2 * (C4984 / C4831 - ((C4889 * C4980 + C5720) * be) / C4825 +
               C4981)) *
         be) /
            C4825 +
        C5001 / C4840 - ((2 * C4981 - C4957 / C4840) * be) / C4825;
    const double C1283 =
        (C4998 / C4837 - (((C4889 * C5001) / C4825 + 2 * C4980) * be) / C4825 -
         C4954 / C4840) /
            C4831 -
        ((C4889 * (C5001 / C4840 - ((2 * C4981 - C4957 / C4840) * be) / C4825) +
          2 * (C4980 / C4831 - ((C4889 * C4981 + C5589) * be) / C4825)) *
         be) /
            C4825 +
        (-2 * C4954) / (C4825 * 4 * C4830);
    const double C1284 =
        (C5001 / C4840 - ((2 * C4981 - C4957 / C4840) * be) / C4825) / C4831 -
        ((2 * (C4981 / C4831 - (0 * be) / C4825) -
          C4957 / (C4825 * 4 * C4830)) *
         be) /
            C4825;
    const double C2777 = C4998 / C4837 -
                         (((C4889 * C5001) / C4825 + 2 * C4980) * be) / C4825 -
                         C4954 / C4840;
    const double C2778 =
        C5001 / C4840 - ((2 * C4981 - C4957 / C4840) * be) / C4825;
    const double C2359 =
        ((ae * -2 * C5035) / C4837 -
         (((C4892 * C5064) / C4830 + 2 * C5050) * be) / C4825) /
            C4831 -
        ((C4892 * (C5064 / C4837 -
                   (((C4892 * C5067) / C4825 + 2 * C5046) * be) / C4825 -
                   C5024 / C4840) +
          2 * (C5050 / C4831 - ((C4892 * C5046 + C5721) * be) / C4825 +
               C5047)) *
         be) /
            C4825 +
        C5067 / C4840 - ((2 * C5047 - C5027 / C4840) * be) / C4825;
    const double C2360 =
        (C5064 / C4837 - (((C4892 * C5067) / C4825 + 2 * C5046) * be) / C4825 -
         C5024 / C4840) /
            C4831 -
        ((C4892 * (C5067 / C4840 - ((2 * C5047 - C5027 / C4840) * be) / C4825) +
          2 * (C5046 / C4831 - ((C4892 * C5047 + C5613) * be) / C4825)) *
         be) /
            C4825 +
        (-2 * C5024) / (C4825 * 4 * C4830);
    const double C2361 =
        (C5067 / C4840 - ((2 * C5047 - C5027 / C4840) * be) / C4825) / C4831 -
        ((2 * (C5047 / C4831 - (0 * be) / C4825) -
          C5027 / (C4825 * 4 * C4830)) *
         be) /
            C4825;
    const double C4022 = C5064 / C4837 -
                         (((C4892 * C5067) / C4825 + 2 * C5046) * be) / C4825 -
                         C5024 / C4840;
    const double C4023 =
        C5067 / C4840 - ((2 * C5047 - C5027 / C4840) * be) / C4825;
    d2eexx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C2399 * C74 + C2406 + C2406 + C5741 * C82 + C2401 * C75 + C2407 +
           C2407 + C5734 * C83 + C2403 * C76 + C2408 + C2408 + C2396 * C84) *
              C5601 * C2397 +
          (C2399 * C323 + C2409 + C2409 + C5741 * C329 + C2401 * C324 + C2410 +
           C2410 + C5734 * C330 + C2403 * C325 + C2411 + C2411 + C2396 * C331) *
              C5601 * C5589) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C2437 * C74 + C2397 * C109 + C2438 * C323 + C5589 * C366) * C2400 +
          (C2437 * C78 + C2397 * C113 + C2438 * C326 + C5589 * C369) * C5741 +
          (C2437 * C75 + C2397 * C110 + C2438 * C324 + C5589 * C367) * C2402 +
          (C2437 * C79 + C2397 * C114 + C2438 * C327 + C5589 * C370) * C5734 +
          (C2437 * C76 + C2397 * C111 + C2438 * C325 + C5589 * C368) * C2404 +
          (C2437 * C80 + C2397 * C115 + C2438 * C328 + C5589 * C371) * C2396) *
         C5601 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5601 * C136) * C2400 +
                    (C135 * C78 + C5601 * C140) * C5741 +
                    (C135 * C75 + C5601 * C137) * C2402 +
                    (C135 * C79 + C5601 * C141) * C5734 +
                    (C135 * C76 + C5601 * C138) * C2404 +
                    (C135 * C80 + C5601 * C142) * C2396) *
                       C2397 +
                   ((C135 * C323 + C5601 * C398) * C2400 +
                    (C135 * C326 + C5601 * C401) * C5741 +
                    (C135 * C324 + C5601 * C399) * C2402 +
                    (C135 * C327 + C5601 * C402) * C5734 +
                    (C135 * C325 + C5601 * C400) * C2404 +
                    (C135 * C328 + C5601 * C403) * C2396) *
                       C5589) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C2400 * C74 + C5741 * C78 + C2402 * C75 + C5734 * C79 +
                    C2404 * C76 + C2396 * C80) *
                       C2437 +
                   (C2400 * C109 + C5741 * C162 + C2402 * C110 + C5734 * C163 +
                    C2404 * C111 + C2396 * C164) *
                       C2397 +
                   (C2400 * C323 + C5741 * C326 + C2402 * C324 + C5734 * C327 +
                    C2404 * C325 + C2396 * C328) *
                       C2438 +
                   (C2400 * C366 + C5741 * C430 + C2402 * C367 + C5734 * C431 +
                    C2404 * C368 + C2396 * C432) *
                       C5589) *
                  C5601 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C2517 * C74 + C2520 + C2520 + C2397 * C185 + C2518 * C323 +
                    C2521 + C2521 + C5589 * C461) *
                       C5741 +
                   (C2517 * C75 + C2522 + C2522 + C2397 * C186 + C2518 * C324 +
                    C2523 + C2523 + C5589 * C462) *
                       C5734 +
                   (C2517 * C76 + C2524 + C2524 + C2397 * C187 + C2518 * C325 +
                    C2525 + C2525 + C5589 * C463) *
                       C2396) *
                  C5601 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5601 * C136) * C2437 +
                    (C135 * C109 + C5601 * C211) * C2397 +
                    (C135 * C323 + C5601 * C398) * C2438 +
                    (C135 * C366 + C5601 * C496) * C5589) *
                       C5741 +
                   ((C135 * C75 + C5601 * C137) * C2437 +
                    (C135 * C110 + C5601 * C212) * C2397 +
                    (C135 * C324 + C5601 * C399) * C2438 +
                    (C135 * C367 + C5601 * C497) * C5589) *
                       C5734 +
                   ((C135 * C76 + C5601 * C138) * C2437 +
                    (C135 * C111 + C5601 * C213) * C2397 +
                    (C135 * C325 + C5601 * C400) * C2438 +
                    (C135 * C368 + C5601 * C498) * C5589) *
                       C2396) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2400 * C74 + C5741 * C78 + C2402 * C75 + C5734 * C79 +
                     C2404 * C76 + C2396 * C80) *
                        C135 +
                    (C2400 * C136 + C5741 * C233 + C2402 * C137 + C5734 * C234 +
                     C2404 * C138 + C2396 * C235) *
                        C5601) *
                       C2397 +
                   ((C2400 * C323 + C5741 * C326 + C2402 * C324 + C5734 * C327 +
                     C2404 * C325 + C2396 * C328) *
                        C135 +
                    (C2400 * C398 + C5741 * C525 + C2402 * C399 + C5734 * C526 +
                     C2404 * C400 + C2396 * C527) *
                        C5601) *
                       C5589) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2437 * C74 + C2397 * C109 + C2438 * C323 + C5589 * C366) * C135 +
           (C2437 * C136 + C2397 * C255 + C2438 * C398 + C5589 * C554) *
               C5601) *
              C5741 +
          ((C2437 * C75 + C2397 * C110 + C2438 * C324 + C5589 * C367) * C135 +
           (C2437 * C137 + C2397 * C256 + C2438 * C399 + C5589 * C555) *
               C5601) *
              C5734 +
          ((C2437 * C76 + C2397 * C111 + C2438 * C325 + C5589 * C368) * C135 +
           (C2437 * C138 + C2397 * C257 + C2438 * C400 + C5589 * C556) *
               C5601) *
              C2396) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C277 * C74 + C283 + C283 + C5601 * C278) * C2397 +
                    (C277 * C323 + C587 + C587 + C5601 * C583) * C5589) *
                       C5741 +
                   ((C277 * C75 + C284 + C284 + C5601 * C279) * C2397 +
                    (C277 * C324 + C588 + C588 + C5601 * C584) * C5589) *
                       C5734 +
                   ((C277 * C76 + C285 + C285 + C5601 * C280) * C2397 +
                    (C277 * C325 + C589 + C589 + C5601 * C585) * C5589) *
                       C2396) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C2660 * C74 + C2665 + C2665 + C2655 * C82 + C2662 * C75 +
                    C2666 + C2666 + C5535 * C83) *
                       C5601 * C5742 +
                   (C2660 * C323 + C2667 + C2667 + C2655 * C329 + C2662 * C324 +
                    C2668 + C2668 + C5535 * C330) *
                       C5601 * C5737 +
                   (C2660 * C915 + C2669 + C2669 + C2655 * C919 + C2662 * C916 +
                    C2670 + C2670 + C5535 * C920) *
                       C5601 * C2659) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C2696 * C74 + C5742 * C109 + C2697 * C323 + C5737 * C366 +
                    C2698 * C915 + C2659 * C956) *
                       C2661 +
                   (C2696 * C78 + C5742 * C113 + C2697 * C326 + C5737 * C369 +
                    C2698 * C917 + C2659 * C958) *
                       C2655 +
                   (C2696 * C75 + C5742 * C110 + C2697 * C324 + C5737 * C367 +
                    C2698 * C916 + C2659 * C957) *
                       C2663 +
                   (C2696 * C79 + C5742 * C114 + C2697 * C327 + C5737 * C370 +
                    C2698 * C918 + C2659 * C959) *
                       C5535) *
                  C5601 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5601 * C136) * C2661 +
                    (C135 * C78 + C5601 * C140) * C2655 +
                    (C135 * C75 + C5601 * C137) * C2663 +
                    (C135 * C79 + C5601 * C141) * C5535) *
                       C5742 +
                   ((C135 * C323 + C5601 * C398) * C2661 +
                    (C135 * C326 + C5601 * C401) * C2655 +
                    (C135 * C324 + C5601 * C399) * C2663 +
                    (C135 * C327 + C5601 * C402) * C5535) *
                       C5737 +
                   ((C135 * C915 + C5601 * C986) * C2661 +
                    (C135 * C917 + C5601 * C988) * C2655 +
                    (C135 * C916 + C5601 * C987) * C2663 +
                    (C135 * C918 + C5601 * C989) * C5535) *
                       C2659) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C2661 * C74 + C2655 * C78 + C2663 * C75 + C5535 * C79) * C2696 +
          (C2661 * C109 + C2655 * C162 + C2663 * C110 + C5535 * C163) * C5742 +
          (C2661 * C323 + C2655 * C326 + C2663 * C324 + C5535 * C327) * C2697 +
          (C2661 * C366 + C2655 * C430 + C2663 * C367 + C5535 * C431) * C5737 +
          (C2661 * C915 + C2655 * C917 + C2663 * C916 + C5535 * C918) * C2698 +
          (C2661 * C956 + C2655 * C1016 + C2663 * C957 + C5535 * C1017) *
              C2659) *
         C5601 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C2777 * C74 + C2781 + C2781 + C5742 * C185 + C2778 * C323 +
                    C2782 + C2782 + C5737 * C461 + C2779 * C915 + C2783 +
                    C2783 + C2659 * C1047) *
                       C2655 +
                   (C2777 * C75 + C2784 + C2784 + C5742 * C186 + C2778 * C324 +
                    C2785 + C2785 + C5737 * C462 + C2779 * C916 + C2786 +
                    C2786 + C2659 * C1048) *
                       C5535) *
                  C5601 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5601 * C136) * C2696 +
                    (C135 * C109 + C5601 * C211) * C5742 +
                    (C135 * C323 + C5601 * C398) * C2697 +
                    (C135 * C366 + C5601 * C496) * C5737 +
                    (C135 * C915 + C5601 * C986) * C2698 +
                    (C135 * C956 + C5601 * C1081) * C2659) *
                       C2655 +
                   ((C135 * C75 + C5601 * C137) * C2696 +
                    (C135 * C110 + C5601 * C212) * C5742 +
                    (C135 * C324 + C5601 * C399) * C2697 +
                    (C135 * C367 + C5601 * C497) * C5737 +
                    (C135 * C916 + C5601 * C987) * C2698 +
                    (C135 * C957 + C5601 * C1082) * C2659) *
                       C5535) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2661 * C74 + C2655 * C78 + C2663 * C75 + C5535 * C79) * C135 +
           (C2661 * C136 + C2655 * C233 + C2663 * C137 + C5535 * C234) *
               C5601) *
              C5742 +
          ((C2661 * C323 + C2655 * C326 + C2663 * C324 + C5535 * C327) * C135 +
           (C2661 * C398 + C2655 * C525 + C2663 * C399 + C5535 * C526) *
               C5601) *
              C5737 +
          ((C2661 * C915 + C2655 * C917 + C2663 * C916 + C5535 * C918) * C135 +
           (C2661 * C986 + C2655 * C1109 + C2663 * C987 + C5535 * C1110) *
               C5601) *
              C2659) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2696 * C74 + C5742 * C109 + C2697 * C323 + C5737 * C366 +
                     C2698 * C915 + C2659 * C956) *
                        C135 +
                    (C2696 * C136 + C5742 * C255 + C2697 * C398 + C5737 * C554 +
                     C2698 * C986 + C2659 * C1137) *
                        C5601) *
                       C2655 +
                   ((C2696 * C75 + C5742 * C110 + C2697 * C324 + C5737 * C367 +
                     C2698 * C916 + C2659 * C957) *
                        C135 +
                    (C2696 * C137 + C5742 * C256 + C2697 * C399 + C5737 * C555 +
                     C2698 * C987 + C2659 * C1138) *
                        C5601) *
                       C5535) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C277 * C74 + C283 + C283 + C5601 * C278) * C5742 +
                    (C277 * C323 + C587 + C587 + C5601 * C583) * C5737 +
                    (C277 * C915 + C1168 + C1168 + C5601 * C1165) * C2659) *
                       C2655 +
                   ((C277 * C75 + C284 + C284 + C5601 * C279) * C5742 +
                    (C277 * C324 + C588 + C588 + C5601 * C584) * C5737 +
                    (C277 * C916 + C1169 + C1169 + C5601 * C1166) * C2659) *
                       C5535) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2660 * C74 + C2665 + C2665 + C2655 * C82 + C2662 * C75 +
                     C2666 + C2666 + C5535 * C83) *
                        C5721 +
                    (C2660 * C617 + C2928 + C2928 + C2655 * C623 +
                     C2662 * C618 + C2929 + C2929 + C5535 * C624) *
                        C5613) *
                       C2397 +
                   ((C2660 * C323 + C2667 + C2667 + C2655 * C329 +
                     C2662 * C324 + C2668 + C2668 + C5535 * C330) *
                        C5721 +
                    (C2660 * C1394 + C2930 + C2930 + C2655 * C1398 +
                     C2662 * C2924 + C2931 + C2931 + C5535 * C2926) *
                        C5613) *
                       C5589) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2437 * C74 + C2397 * C109 + C2438 * C323 + C5589 * C366) * C2661 +
           (C2437 * C78 + C2397 * C113 + C2438 * C326 + C5589 * C369) * C2655 +
           (C2437 * C75 + C2397 * C110 + C2438 * C324 + C5589 * C367) * C2663 +
           (C2437 * C79 + C2397 * C114 + C2438 * C327 + C5589 * C370) * C5535) *
              C5721 +
          ((C2437 * C617 + C2397 * C655 + C2438 * C1394 + C5589 * C1429) *
               C2661 +
           (C2437 * C620 + C2397 * C658 + C2438 * C1396 + C5589 * C1431) *
               C2655 +
           (C2437 * C618 + C2397 * C656 + C2438 * C2924 + C5589 * C2965) *
               C2663 +
           (C2437 * C621 + C2397 * C659 + C2438 * C2925 + C5589 * C2966) *
               C5535) *
              C5613) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C687 * C74 + C5721 * C136 + C688 * C617 + C5613 * C689) * C2661 +
           (C687 * C78 + C5721 * C140 + C688 * C620 + C5613 * C692) * C2655 +
           (C687 * C75 + C5721 * C137 + C688 * C618 + C5613 * C690) * C2663 +
           (C687 * C79 + C5721 * C141 + C688 * C621 + C5613 * C693) * C5535) *
              C2397 +
          ((C687 * C323 + C5721 * C398 + C688 * C1394 + C5613 * C1459) * C2661 +
           (C687 * C326 + C5721 * C401 + C688 * C1396 + C5613 * C1461) * C2655 +
           (C687 * C324 + C5721 * C399 + C688 * C2924 + C5613 * C3001) * C2663 +
           (C687 * C327 + C5721 * C402 + C688 * C2925 + C5613 * C3002) *
               C5535) *
              C5589) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2661 * C74 + C2655 * C78 + C2663 * C75 + C5535 * C79) * C2437 +
           (C2661 * C109 + C2655 * C162 + C2663 * C110 + C5535 * C163) * C2397 +
           (C2661 * C323 + C2655 * C326 + C2663 * C324 + C5535 * C327) * C2438 +
           (C2661 * C366 + C2655 * C430 + C2663 * C367 + C5535 * C431) *
               C5589) *
              C5721 +
          ((C2661 * C617 + C2655 * C620 + C2663 * C618 + C5535 * C621) * C2437 +
           (C2661 * C655 + C2655 * C721 + C2663 * C656 + C5535 * C722) * C2397 +
           (C2661 * C1394 + C2655 * C1396 + C2663 * C2924 + C5535 * C2925) *
               C2438 +
           (C2661 * C1429 + C2655 * C1489 + C2663 * C2965 + C5535 * C3037) *
               C5589) *
              C5613) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2517 * C74 + C2520 + C2520 + C2397 * C185 + C2518 * C323 +
                     C2521 + C2521 + C5589 * C461) *
                        C2655 +
                    (C2517 * C75 + C2522 + C2522 + C2397 * C186 + C2518 * C324 +
                     C2523 + C2523 + C5589 * C462) *
                        C5535) *
                       C5721 +
                   ((C2517 * C617 + C3074 + C3074 + C2397 * C750 +
                     C2518 * C1394 + C3075 + C3075 + C5589 * C1517) *
                        C2655 +
                    (C2517 * C618 + C3076 + C3076 + C2397 * C751 +
                     C2518 * C2924 + C3077 + C3077 + C5589 * C3072) *
                        C5535) *
                       C5613) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C687 * C74 + C5721 * C136 + C688 * C617 + C5613 * C689) * C2437 +
           (C687 * C109 + C5721 * C211 + C688 * C655 + C5613 * C782) * C2397 +
           (C687 * C323 + C5721 * C398 + C688 * C1394 + C5613 * C1459) * C2438 +
           (C687 * C366 + C5721 * C496 + C688 * C1429 + C5613 * C1548) *
               C5589) *
              C2655 +
          ((C687 * C75 + C5721 * C137 + C688 * C618 + C5613 * C690) * C2437 +
           (C687 * C110 + C5721 * C212 + C688 * C656 + C5613 * C783) * C2397 +
           (C687 * C324 + C5721 * C399 + C688 * C2924 + C5613 * C3001) * C2438 +
           (C687 * C367 + C5721 * C497 + C688 * C2965 + C5613 * C3111) *
               C5589) *
              C5535) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2661 * C74 + C2655 * C78 + C2663 * C75 + C5535 * C79) * C687 +
           (C2661 * C136 + C2655 * C233 + C2663 * C137 + C5535 * C234) * C5721 +
           (C2661 * C617 + C2655 * C620 + C2663 * C618 + C5535 * C621) * C688 +
           (C2661 * C689 + C2655 * C811 + C2663 * C690 + C5535 * C812) *
               C5613) *
              C2397 +
          ((C2661 * C323 + C2655 * C326 + C2663 * C324 + C5535 * C327) * C687 +
           (C2661 * C398 + C2655 * C525 + C2663 * C399 + C5535 * C526) * C5721 +
           (C2661 * C1394 + C2655 * C1396 + C2663 * C2924 + C5535 * C2925) *
               C688 +
           (C2661 * C1459 + C2655 * C1576 + C2663 * C3001 + C5535 * C3146) *
               C5613) *
              C5589) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2437 * C74 + C2397 * C109 + C2438 * C323 + C5589 * C366) * C687 +
           (C2437 * C136 + C2397 * C255 + C2438 * C398 + C5589 * C554) * C5721 +
           (C2437 * C617 + C2397 * C655 + C2438 * C1394 + C5589 * C1429) *
               C688 +
           (C2437 * C689 + C2397 * C840 + C2438 * C1459 + C5589 * C1604) *
               C5613) *
              C2655 +
          ((C2437 * C75 + C2397 * C110 + C2438 * C324 + C5589 * C367) * C687 +
           (C2437 * C137 + C2397 * C256 + C2438 * C399 + C5589 * C555) * C5721 +
           (C2437 * C618 + C2397 * C656 + C2438 * C2924 + C5589 * C2965) *
               C688 +
           (C2437 * C690 + C2397 * C841 + C2438 * C3001 + C5589 * C3181) *
               C5613) *
              C5535) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezz[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C869 * C74 + C875 + C875 + C5721 * C278 + C870 * C617 +
                     C876 + C876 + C5613 * C871) *
                        C2397 +
                    (C869 * C323 + C1635 + C1635 + C5721 * C583 + C870 * C1394 +
                     C1636 + C1636 + C5613 * C1632) *
                        C5589) *
                       C2655 +
                   ((C869 * C75 + C877 + C877 + C5721 * C279 + C870 * C618 +
                     C878 + C878 + C5613 * C872) *
                        C2397 +
                    (C869 * C324 + C3218 + C3218 + C5721 * C584 + C870 * C2924 +
                     C3219 + C3219 + C5613 * C3216) *
                        C5589) *
                       C5535) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C911 * C74 + C922 + C922 + C5710 * C82 + C913 * C75 +
                     C923 + C923 + C5535 * C83) *
                        C3245 +
                    (C911 * C617 + C1674 + C1674 + C5710 * C623 + C913 * C618 +
                     C1675 + C1675 + C5535 * C624) *
                        C5613) *
                       C2397 +
                   ((C911 * C323 + C924 + C924 + C5710 * C329 + C913 * C324 +
                     C925 + C925 + C5535 * C330) *
                        C3245 +
                    (C911 * C1394 + C4066 + C4066 + C5710 * C1398 +
                     C913 * C2924 + C4067 + C4067 + C5535 * C2926) *
                        C5613) *
                       C5589) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2437 * C74 + C2397 * C109 + C2438 * C323 + C5589 * C366) * C4861 +
           (C2437 * C78 + C2397 * C113 + C2438 * C326 + C5589 * C369) * C5710 +
           (C2437 * C75 + C2397 * C110 + C2438 * C324 + C5589 * C367) * C4851 +
           (C2437 * C79 + C2397 * C114 + C2438 * C327 + C5589 * C370) * C5535) *
              C3245 +
          ((C2437 * C617 + C2397 * C655 + C2438 * C1394 + C5589 * C1429) *
               C4861 +
           (C2437 * C620 + C2397 * C658 + C2438 * C1396 + C5589 * C1431) *
               C5710 +
           (C2437 * C618 + C2397 * C656 + C2438 * C2924 + C5589 * C2965) *
               C4851 +
           (C2437 * C621 + C2397 * C659 + C2438 * C2925 + C5589 * C2966) *
               C5535) *
              C5613) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3302 * C74 + C3245 * C136 + C3303 * C617 + C5613 * C689) * C4861 +
           (C3302 * C78 + C3245 * C140 + C3303 * C620 + C5613 * C692) * C5710 +
           (C3302 * C75 + C3245 * C137 + C3303 * C618 + C5613 * C690) * C4851 +
           (C3302 * C79 + C3245 * C141 + C3303 * C621 + C5613 * C693) * C5535) *
              C2397 +
          ((C3302 * C323 + C3245 * C398 + C3303 * C1394 + C5613 * C1459) *
               C4861 +
           (C3302 * C326 + C3245 * C401 + C3303 * C1396 + C5613 * C1461) *
               C5710 +
           (C3302 * C324 + C3245 * C399 + C3303 * C2924 + C5613 * C3001) *
               C4851 +
           (C3302 * C327 + C3245 * C402 + C3303 * C2925 + C5613 * C3002) *
               C5535) *
              C5589) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4861 * C74 + C5710 * C78 + C4851 * C75 + C5535 * C79) * C2437 +
           (C4861 * C109 + C5710 * C162 + C4851 * C110 + C5535 * C163) * C2397 +
           (C4861 * C323 + C5710 * C326 + C4851 * C324 + C5535 * C327) * C2438 +
           (C4861 * C366 + C5710 * C430 + C4851 * C367 + C5535 * C431) *
               C5589) *
              C3245 +
          ((C4861 * C617 + C5710 * C620 + C4851 * C618 + C5535 * C621) * C2437 +
           (C4861 * C655 + C5710 * C721 + C4851 * C656 + C5535 * C722) * C2397 +
           (C4861 * C1394 + C5710 * C1396 + C4851 * C2924 + C5535 * C2925) *
               C2438 +
           (C4861 * C1429 + C5710 * C1489 + C4851 * C2965 + C5535 * C3037) *
               C5589) *
              C5613) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2517 * C74 + C2520 + C2520 + C2397 * C185 + C2518 * C323 +
                     C2521 + C2521 + C5589 * C461) *
                        C5710 +
                    (C2517 * C75 + C2522 + C2522 + C2397 * C186 + C2518 * C324 +
                     C2523 + C2523 + C5589 * C462) *
                        C5535) *
                       C3245 +
                   ((C2517 * C617 + C3074 + C3074 + C2397 * C750 +
                     C2518 * C1394 + C3075 + C3075 + C5589 * C1517) *
                        C5710 +
                    (C2517 * C618 + C3076 + C3076 + C2397 * C751 +
                     C2518 * C2924 + C3077 + C3077 + C5589 * C3072) *
                        C5535) *
                       C5613) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3302 * C74 + C3245 * C136 + C3303 * C617 + C5613 * C689) * C2437 +
           (C3302 * C109 + C3245 * C211 + C3303 * C655 + C5613 * C782) * C2397 +
           (C3302 * C323 + C3245 * C398 + C3303 * C1394 + C5613 * C1459) *
               C2438 +
           (C3302 * C366 + C3245 * C496 + C3303 * C1429 + C5613 * C1548) *
               C5589) *
              C5710 +
          ((C3302 * C75 + C3245 * C137 + C3303 * C618 + C5613 * C690) * C2437 +
           (C3302 * C110 + C3245 * C212 + C3303 * C656 + C5613 * C783) * C2397 +
           (C3302 * C324 + C3245 * C399 + C3303 * C2924 + C5613 * C3001) *
               C2438 +
           (C3302 * C367 + C3245 * C497 + C3303 * C2965 + C5613 * C3111) *
               C5589) *
              C5535) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4861 * C74 + C5710 * C78 + C4851 * C75 + C5535 * C79) * C3302 +
           (C4861 * C136 + C5710 * C233 + C4851 * C137 + C5535 * C234) * C3245 +
           (C4861 * C617 + C5710 * C620 + C4851 * C618 + C5535 * C621) * C3303 +
           (C4861 * C689 + C5710 * C811 + C4851 * C690 + C5535 * C812) *
               C5613) *
              C2397 +
          ((C4861 * C323 + C5710 * C326 + C4851 * C324 + C5535 * C327) * C3302 +
           (C4861 * C398 + C5710 * C525 + C4851 * C399 + C5535 * C526) * C3245 +
           (C4861 * C1394 + C5710 * C1396 + C4851 * C2924 + C5535 * C2925) *
               C3303 +
           (C4861 * C1459 + C5710 * C1576 + C4851 * C3001 + C5535 * C3146) *
               C5613) *
              C5589) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2437 * C74 + C2397 * C109 + C2438 * C323 + C5589 * C366) * C3302 +
           (C2437 * C136 + C2397 * C255 + C2438 * C398 + C5589 * C554) * C3245 +
           (C2437 * C617 + C2397 * C655 + C2438 * C1394 + C5589 * C1429) *
               C3303 +
           (C2437 * C689 + C2397 * C840 + C2438 * C1459 + C5589 * C1604) *
               C5613) *
              C5710 +
          ((C2437 * C75 + C2397 * C110 + C2438 * C324 + C5589 * C367) * C3302 +
           (C2437 * C137 + C2397 * C256 + C2438 * C399 + C5589 * C555) * C3245 +
           (C2437 * C618 + C2397 * C656 + C2438 * C2924 + C5589 * C2965) *
               C3303 +
           (C2437 * C690 + C2397 * C841 + C2438 * C3001 + C5589 * C3181) *
               C5613) *
              C5535) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C3460 * C74 + C3463 + C3463 + C3245 * C278 + C3461 * C617 +
                     C3464 + C3464 + C5613 * C871) *
                        C2397 +
                    (C3460 * C323 + C3777 + C3777 + C3245 * C583 +
                     C3461 * C1394 + C3778 + C3778 + C5613 * C1632) *
                        C5589) *
                       C5710 +
                   ((C3460 * C75 + C3465 + C3465 + C3245 * C279 + C3461 * C618 +
                     C3466 + C3466 + C5613 * C872) *
                        C2397 +
                    (C3460 * C324 + C3779 + C3779 + C3245 * C584 +
                     C3461 * C2924 + C3780 + C3780 + C5613 * C3216) *
                        C5589) *
                       C5535) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C1192 * C74 + C1198 + C1198 + C5530 * C82) * C3245 +
                    (C1192 * C617 + C1401 + C1401 + C5530 * C623) * C5613) *
                       C5742 +
                   ((C1192 * C323 + C1199 + C1199 + C5530 * C329) * C3245 +
                    (C1192 * C1394 + C1402 + C1402 + C5530 * C1398) * C5613) *
                       C5737 +
                   ((C1192 * C915 + C1200 + C1200 + C5530 * C919) * C3245 +
                    (C1192 * C1395 + C1403 + C1403 + C5530 * C1399) * C5613) *
                       C2659) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexy[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2696 * C74 + C5742 * C109 + C2697 * C323 + C5737 * C366 +
                     C2698 * C915 + C2659 * C956) *
                        C1193 +
                    (C2696 * C78 + C5742 * C113 + C2697 * C326 + C5737 * C369 +
                     C2698 * C917 + C2659 * C958) *
                        C5530) *
                       C3245 +
                   ((C2696 * C617 + C5742 * C655 + C2697 * C1394 +
                     C5737 * C1429 + C2698 * C1395 + C2659 * C1430) *
                        C1193 +
                    (C2696 * C620 + C5742 * C658 + C2697 * C1396 +
                     C5737 * C1431 + C2698 * C1397 + C2659 * C1432) *
                        C5530) *
                       C5613) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3302 * C74 + C3245 * C136 + C3303 * C617 + C5613 * C689) * C1193 +
           (C3302 * C78 + C3245 * C140 + C3303 * C620 + C5613 * C692) * C5530) *
              C5742 +
          ((C3302 * C323 + C3245 * C398 + C3303 * C1394 + C5613 * C1459) *
               C1193 +
           (C3302 * C326 + C3245 * C401 + C3303 * C1396 + C5613 * C1461) *
               C5530) *
              C5737 +
          ((C3302 * C915 + C3245 * C986 + C3303 * C1395 + C5613 * C1460) *
               C1193 +
           (C3302 * C917 + C3245 * C988 + C3303 * C1397 + C5613 * C1462) *
               C5530) *
              C2659) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyx[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C1193 * C74 + C5530 * C78) * C2696 +
                    (C1193 * C109 + C5530 * C162) * C5742 +
                    (C1193 * C323 + C5530 * C326) * C2697 +
                    (C1193 * C366 + C5530 * C430) * C5737 +
                    (C1193 * C915 + C5530 * C917) * C2698 +
                    (C1193 * C956 + C5530 * C1016) * C2659) *
                       C3245 +
                   ((C1193 * C617 + C5530 * C620) * C2696 +
                    (C1193 * C655 + C5530 * C721) * C5742 +
                    (C1193 * C1394 + C5530 * C1396) * C2697 +
                    (C1193 * C1429 + C5530 * C1489) * C5737 +
                    (C1193 * C1395 + C5530 * C1397) * C2698 +
                    (C1193 * C1430 + C5530 * C1490) * C2659) *
                       C5613) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C2777 * C74 + C2781 + C2781 + C5742 * C185 + C2778 * C323 +
                    C2782 + C2782 + C5737 * C461 + C2779 * C915 + C2783 +
                    C2783 + C2659 * C1047) *
                       C5530 * C3245 +
                   (C2777 * C617 + C4470 + C4470 + C5742 * C750 +
                    C2778 * C1394 + C4471 + C4471 + C5737 * C1517 +
                    C2779 * C1395 + C4472 + C4472 + C2659 * C1518) *
                       C5530 * C5613) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C3302 * C74 + C3245 * C136 + C3303 * C617 + C5613 * C689) * C2696 +
          (C3302 * C109 + C3245 * C211 + C3303 * C655 + C5613 * C782) * C5742 +
          (C3302 * C323 + C3245 * C398 + C3303 * C1394 + C5613 * C1459) *
              C2697 +
          (C3302 * C366 + C3245 * C496 + C3303 * C1429 + C5613 * C1548) *
              C5737 +
          (C3302 * C915 + C3245 * C986 + C3303 * C1395 + C5613 * C1460) *
              C2698 +
          (C3302 * C956 + C3245 * C1081 + C3303 * C1430 + C5613 * C1549) *
              C2659) *
         C5530 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezx[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C1193 * C74 + C5530 * C78) * C3302 +
                    (C1193 * C136 + C5530 * C233) * C3245 +
                    (C1193 * C617 + C5530 * C620) * C3303 +
                    (C1193 * C689 + C5530 * C811) * C5613) *
                       C5742 +
                   ((C1193 * C323 + C5530 * C326) * C3302 +
                    (C1193 * C398 + C5530 * C525) * C3245 +
                    (C1193 * C1394 + C5530 * C1396) * C3303 +
                    (C1193 * C1459 + C5530 * C1576) * C5613) *
                       C5737 +
                   ((C1193 * C915 + C5530 * C917) * C3302 +
                    (C1193 * C986 + C5530 * C1109) * C3245 +
                    (C1193 * C1395 + C5530 * C1397) * C3303 +
                    (C1193 * C1460 + C5530 * C1577) * C5613) *
                       C2659) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezy[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C2696 * C74 + C5742 * C109 + C2697 * C323 + C5737 * C366 +
                    C2698 * C915 + C2659 * C956) *
                       C3302 +
                   (C2696 * C136 + C5742 * C255 + C2697 * C398 + C5737 * C554 +
                    C2698 * C986 + C2659 * C1137) *
                       C3245 +
                   (C2696 * C617 + C5742 * C655 + C2697 * C1394 +
                    C5737 * C1429 + C2698 * C1395 + C2659 * C1430) *
                       C3303 +
                   (C2696 * C689 + C5742 * C840 + C2697 * C1459 +
                    C5737 * C1604 + C2698 * C1460 + C2659 * C1605) *
                       C5613) *
                  C5530 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezz[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C3460 * C74 + C3463 + C3463 + C3245 * C278 + C3461 * C617 +
                    C3464 + C3464 + C5613 * C871) *
                       C5742 +
                   (C3460 * C323 + C3777 + C3777 + C3245 * C583 +
                    C3461 * C1394 + C3778 + C3778 + C5613 * C1632) *
                       C5737 +
                   (C3460 * C915 + C4577 + C4577 + C3245 * C1165 +
                    C3461 * C1395 + C4578 + C4578 + C5613 * C1633) *
                       C2659) *
                  C5530 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C1192 * C74 + C1198 + C1198 + C5530 * C82) * C5743 +
                    (C1192 * C617 + C1401 + C1401 + C5530 * C623) * C5740 +
                    (C1192 * C1667 + C1949 + C1949 + C5530 * C1671) * C3808) *
                       C2397 +
                   ((C1192 * C323 + C1199 + C1199 + C5530 * C329) * C5743 +
                    (C1192 * C1394 + C1402 + C1402 + C5530 * C1398) * C5740 +
                    (C1192 * C1945 + C1950 + C1950 + C5530 * C1947) * C3808) *
                       C5589) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2437 * C74 + C2397 * C109 + C2438 * C323 + C5589 * C366) * C1193 +
           (C2437 * C78 + C2397 * C113 + C2438 * C326 + C5589 * C369) * C5530) *
              C5743 +
          ((C2437 * C617 + C2397 * C655 + C2438 * C1394 + C5589 * C1429) *
               C1193 +
           (C2437 * C620 + C2397 * C658 + C2438 * C1396 + C5589 * C1431) *
               C5530) *
              C5740 +
          ((C2437 * C1667 + C2397 * C1703 + C2438 * C1945 + C5589 * C1976) *
               C1193 +
           (C2437 * C1669 + C2397 * C1705 + C2438 * C1946 + C5589 * C1977) *
               C5530) *
              C3808) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C3863 * C74 + C5743 * C136 + C3864 * C617 + C5740 * C689 +
                     C3865 * C1667 + C3808 * C1736) *
                        C1193 +
                    (C3863 * C78 + C5743 * C140 + C3864 * C620 + C5740 * C692 +
                     C3865 * C1669 + C3808 * C1738) *
                        C5530) *
                       C2397 +
                   ((C3863 * C323 + C5743 * C398 + C3864 * C1394 +
                     C5740 * C1459 + C3865 * C1945 + C3808 * C2004) *
                        C1193 +
                    (C3863 * C326 + C5743 * C401 + C3864 * C1396 +
                     C5740 * C1461 + C3865 * C1946 + C3808 * C2005) *
                        C5530) *
                       C5589) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C1193 * C74 + C5530 * C78) * C2437 +
                    (C1193 * C109 + C5530 * C162) * C2397 +
                    (C1193 * C323 + C5530 * C326) * C2438 +
                    (C1193 * C366 + C5530 * C430) * C5589) *
                       C5743 +
                   ((C1193 * C617 + C5530 * C620) * C2437 +
                    (C1193 * C655 + C5530 * C721) * C2397 +
                    (C1193 * C1394 + C5530 * C1396) * C2438 +
                    (C1193 * C1429 + C5530 * C1489) * C5589) *
                       C5740 +
                   ((C1193 * C1667 + C5530 * C1669) * C2437 +
                    (C1193 * C1703 + C5530 * C1766) * C2397 +
                    (C1193 * C1945 + C5530 * C1946) * C2438 +
                    (C1193 * C1976 + C5530 * C2032) * C5589) *
                       C3808) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C2517 * C74 + C2520 + C2520 + C2397 * C185 + C2518 * C323 +
                    C2521 + C2521 + C5589 * C461) *
                       C5530 * C5743 +
                   (C2517 * C617 + C3074 + C3074 + C2397 * C750 +
                    C2518 * C1394 + C3075 + C3075 + C5589 * C1517) *
                       C5530 * C5740 +
                   (C2517 * C1667 + C4709 + C4709 + C2397 * C1794 +
                    C2518 * C1945 + C4710 + C4710 + C5589 * C2059) *
                       C5530 * C3808) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C3863 * C74 + C5743 * C136 + C3864 * C617 + C5740 * C689 +
                    C3865 * C1667 + C3808 * C1736) *
                       C2437 +
                   (C3863 * C109 + C5743 * C211 + C3864 * C655 + C5740 * C782 +
                    C3865 * C1703 + C3808 * C1824) *
                       C2397 +
                   (C3863 * C323 + C5743 * C398 + C3864 * C1394 +
                    C5740 * C1459 + C3865 * C1945 + C3808 * C2004) *
                       C2438 +
                   (C3863 * C366 + C5743 * C496 + C3864 * C1429 +
                    C5740 * C1548 + C3865 * C1976 + C3808 * C2090) *
                       C5589) *
                  C5530 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C1193 * C74 + C5530 * C78) * C3863 +
                    (C1193 * C136 + C5530 * C233) * C5743 +
                    (C1193 * C617 + C5530 * C620) * C3864 +
                    (C1193 * C689 + C5530 * C811) * C5740 +
                    (C1193 * C1667 + C5530 * C1669) * C3865 +
                    (C1193 * C1736 + C5530 * C1852) * C3808) *
                       C2397 +
                   ((C1193 * C323 + C5530 * C326) * C3863 +
                    (C1193 * C398 + C5530 * C525) * C5743 +
                    (C1193 * C1394 + C5530 * C1396) * C3864 +
                    (C1193 * C1459 + C5530 * C1576) * C5740 +
                    (C1193 * C1945 + C5530 * C1946) * C3865 +
                    (C1193 * C2004 + C5530 * C2117) * C3808) *
                       C5589) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C2437 * C74 + C2397 * C109 + C2438 * C323 + C5589 * C366) * C3863 +
          (C2437 * C136 + C2397 * C255 + C2438 * C398 + C5589 * C554) * C5743 +
          (C2437 * C617 + C2397 * C655 + C2438 * C1394 + C5589 * C1429) *
              C3864 +
          (C2437 * C689 + C2397 * C840 + C2438 * C1459 + C5589 * C1604) *
              C5740 +
          (C2437 * C1667 + C2397 * C1703 + C2438 * C1945 + C5589 * C1976) *
              C3865 +
          (C2437 * C1736 + C2397 * C1880 + C2438 * C2004 + C5589 * C2144) *
              C3808) *
         C5530 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C4022 * C74 + C4026 + C4026 + C5743 * C278 + C4023 * C617 +
                    C4027 + C4027 + C5740 * C871 + C4024 * C1667 + C4028 +
                    C4028 + C3808 * C1911) *
                       C2397 +
                   (C4022 * C323 + C4815 + C4815 + C5743 * C583 +
                    C4023 * C1394 + C4816 + C4816 + C5740 * C1632 +
                    C4024 * C1945 + C4817 + C4817 + C3808 * C2171) *
                       C5589) *
                  C5530 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexx[6] += (-std::pow(Pi, 2.5) *
                  ((C911 * C74 + C922 + C922 + C5710 * C82 + C913 * C75 + C923 +
                    C923 + C5535 * C83) *
                       C5601 * C908 +
                   (C911 * C323 + C924 + C924 + C5710 * C329 + C913 * C324 +
                    C925 + C925 + C5535 * C330) *
                       C5601 * C909 +
                   (C911 * C915 + C926 + C926 + C5710 * C919 + C913 * C916 +
                    C927 + C927 + C5535 * C920) *
                       C5601 * C910) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (C66 * C74 + C87 + C87 + C57 * C82 + C68 * C75 + C88 + C88 +
                   C58 * C83 + C70 * C76 + C89 + C89 + C59 * C84 + C72 * C77 +
                   C90 + C90 + C60 * C85) *
                  C5601 * C5575 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C911 * C74 + C922 + C922 + C5710 * C82 + C913 * C75 + C923 +
                    C923 + C5535 * C83) *
                       C1664 +
                   (C911 * C617 + C1674 + C1674 + C5710 * C623 + C913 * C618 +
                    C1675 + C1675 + C5535 * C624) *
                       C1665 +
                   (C911 * C1667 + C1676 + C1676 + C5710 * C1671 +
                    C913 * C1668 + C1677 + C1677 + C5535 * C1672) *
                       C1666) *
                  C5575 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eexy[6] += (-std::pow(Pi, 2.5) *
                  ((C953 * C74 + C908 * C109 + C954 * C323 + C909 * C366 +
                    C955 * C915 + C910 * C956) *
                       C4861 +
                   (C953 * C78 + C908 * C113 + C954 * C326 + C909 * C369 +
                    C955 * C917 + C910 * C958) *
                       C5710 +
                   (C953 * C75 + C908 * C110 + C954 * C324 + C909 * C367 +
                    C955 * C916 + C910 * C957) *
                       C4851 +
                   (C953 * C79 + C908 * C114 + C954 * C327 + C909 * C370 +
                    C955 * C918 + C910 * C959) *
                       C5535) *
                  C5601 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C108 * C74 + C5575 * C109) * C67 +
                   (C108 * C78 + C5575 * C113) * C57 +
                   (C108 * C75 + C5575 * C110) * C69 +
                   (C108 * C79 + C5575 * C114) * C58 +
                   (C108 * C76 + C5575 * C111) * C71 +
                   (C108 * C80 + C5575 * C115) * C59 +
                   (C108 * C77 + C5575 * C112) * C73 +
                   (C108 * C81 + C5575 * C116) * C60) *
                  C5601 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C108 * C74 + C5575 * C109) * C4861 +
                    (C108 * C78 + C5575 * C113) * C5710 +
                    (C108 * C75 + C5575 * C110) * C4851 +
                    (C108 * C79 + C5575 * C114) * C5535) *
                       C1664 +
                   ((C108 * C617 + C5575 * C655) * C4861 +
                    (C108 * C620 + C5575 * C658) * C5710 +
                    (C108 * C618 + C5575 * C656) * C4851 +
                    (C108 * C621 + C5575 * C659) * C5535) *
                       C1665 +
                   ((C108 * C1667 + C5575 * C1703) * C4861 +
                    (C108 * C1669 + C5575 * C1705) * C5710 +
                    (C108 * C1668 + C5575 * C1704) * C4851 +
                    (C108 * C1670 + C5575 * C1706) * C5535) *
                       C1666) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eexz[6] += (-std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5601 * C136) * C4861 +
                    (C135 * C78 + C5601 * C140) * C5710 +
                    (C135 * C75 + C5601 * C137) * C4851 +
                    (C135 * C79 + C5601 * C141) * C5535) *
                       C908 +
                   ((C135 * C323 + C5601 * C398) * C4861 +
                    (C135 * C326 + C5601 * C401) * C5710 +
                    (C135 * C324 + C5601 * C399) * C4851 +
                    (C135 * C327 + C5601 * C402) * C5535) *
                       C909 +
                   ((C135 * C915 + C5601 * C986) * C4861 +
                    (C135 * C917 + C5601 * C988) * C5710 +
                    (C135 * C916 + C5601 * C987) * C4851 +
                    (C135 * C918 + C5601 * C989) * C5535) *
                       C910) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C135 * C74 + C5601 * C136) * C67 +
                   (C135 * C78 + C5601 * C140) * C57 +
                   (C135 * C75 + C5601 * C137) * C69 +
                   (C135 * C79 + C5601 * C141) * C58 +
                   (C135 * C76 + C5601 * C138) * C71 +
                   (C135 * C80 + C5601 * C142) * C59 +
                   (C135 * C77 + C5601 * C139) * C73 +
                   (C135 * C81 + C5601 * C143) * C60) *
                  C5575 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C1733 * C74 + C1664 * C136 + C1734 * C617 + C1665 * C689 +
                    C1735 * C1667 + C1666 * C1736) *
                       C4861 +
                   (C1733 * C78 + C1664 * C140 + C1734 * C620 + C1665 * C692 +
                    C1735 * C1669 + C1666 * C1738) *
                       C5710 +
                   (C1733 * C75 + C1664 * C137 + C1734 * C618 + C1665 * C690 +
                    C1735 * C1668 + C1666 * C1737) *
                       C4851 +
                   (C1733 * C79 + C1664 * C141 + C1734 * C621 + C1665 * C693 +
                    C1735 * C1670 + C1666 * C1739) *
                       C5535) *
                  C5575 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (-std::pow(Pi, 2.5) *
         ((C4861 * C74 + C5710 * C78 + C4851 * C75 + C5535 * C79) * C953 +
          (C4861 * C109 + C5710 * C162 + C4851 * C110 + C5535 * C163) * C908 +
          (C4861 * C323 + C5710 * C326 + C4851 * C324 + C5535 * C327) * C954 +
          (C4861 * C366 + C5710 * C430 + C4851 * C367 + C5535 * C431) * C909 +
          (C4861 * C915 + C5710 * C917 + C4851 * C916 + C5535 * C918) * C955 +
          (C4861 * C956 + C5710 * C1016 + C4851 * C957 + C5535 * C1017) *
              C910) *
         C5601 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C67 * C74 + C57 * C78 + C69 * C75 + C58 * C79 + C71 * C76 +
           C59 * C80 + C73 * C77 + C60 * C81) *
              C108 +
          (C67 * C109 + C57 * C162 + C69 * C110 + C58 * C163 + C71 * C111 +
           C59 * C164 + C73 * C112 + C60 * C165) *
              C5575) *
         C5601 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C4861 * C74 + C5710 * C78 + C4851 * C75 + C5535 * C79) * C108 +
           (C4861 * C109 + C5710 * C162 + C4851 * C110 + C5535 * C163) *
               C5575) *
              C1664 +
          ((C4861 * C617 + C5710 * C620 + C4851 * C618 + C5535 * C621) * C108 +
           (C4861 * C655 + C5710 * C721 + C4851 * C656 + C5535 * C722) *
               C5575) *
              C1665 +
          ((C4861 * C1667 + C5710 * C1669 + C4851 * C1668 + C5535 * C1670) *
               C108 +
           (C4861 * C1703 + C5710 * C1766 + C4851 * C1704 + C5535 * C1767) *
               C5575) *
              C1666) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (-std::pow(Pi, 2.5) *
         ((C1044 * C74 + C1050 + C1050 + C908 * C185 + C1045 * C323 + C1051 +
           C1051 + C909 * C461 + C1046 * C915 + C1052 + C1052 + C910 * C1047) *
              C5710 +
          (C1044 * C75 + C1053 + C1053 + C908 * C186 + C1045 * C324 + C1054 +
           C1054 + C909 * C462 + C1046 * C916 + C1055 + C1055 + C910 * C1048) *
              C5535) *
         C5601 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C184 * C74 + C190 + C190 + C5575 * C185) * C57 +
          (C184 * C75 + C191 + C191 + C5575 * C186) * C58 +
          (C184 * C76 + C192 + C192 + C5575 * C187) * C59 +
          (C184 * C77 + C193 + C193 + C5575 * C188) * C60) *
         C5601 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C184 * C74 + C190 + C190 + C5575 * C185) * C5710 +
           (C184 * C75 + C191 + C191 + C5575 * C186) * C5535) *
              C1664 +
          ((C184 * C617 + C754 + C754 + C5575 * C750) * C5710 +
           (C184 * C618 + C755 + C755 + C5575 * C751) * C5535) *
              C1665 +
          ((C184 * C1667 + C1797 + C1797 + C5575 * C1794) * C5710 +
           (C184 * C1668 + C1798 + C1798 + C5575 * C1795) * C5535) *
              C1666) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyz[6] += (-std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5601 * C136) * C953 +
                    (C135 * C109 + C5601 * C211) * C908 +
                    (C135 * C323 + C5601 * C398) * C954 +
                    (C135 * C366 + C5601 * C496) * C909 +
                    (C135 * C915 + C5601 * C986) * C955 +
                    (C135 * C956 + C5601 * C1081) * C910) *
                       C5710 +
                   ((C135 * C75 + C5601 * C137) * C953 +
                    (C135 * C110 + C5601 * C212) * C908 +
                    (C135 * C324 + C5601 * C399) * C954 +
                    (C135 * C367 + C5601 * C497) * C909 +
                    (C135 * C916 + C5601 * C987) * C955 +
                    (C135 * C957 + C5601 * C1082) * C910) *
                       C5535) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5601 * C136) * C108 +
                    (C135 * C109 + C5601 * C211) * C5575) *
                       C57 +
                   ((C135 * C75 + C5601 * C137) * C108 +
                    (C135 * C110 + C5601 * C212) * C5575) *
                       C58 +
                   ((C135 * C76 + C5601 * C138) * C108 +
                    (C135 * C111 + C5601 * C213) * C5575) *
                       C59 +
                   ((C135 * C77 + C5601 * C139) * C108 +
                    (C135 * C112 + C5601 * C214) * C5575) *
                       C60) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C1733 * C74 + C1664 * C136 + C1734 * C617 + C1665 * C689 +
                     C1735 * C1667 + C1666 * C1736) *
                        C108 +
                    (C1733 * C109 + C1664 * C211 + C1734 * C655 + C1665 * C782 +
                     C1735 * C1703 + C1666 * C1824) *
                        C5575) *
                       C5710 +
                   ((C1733 * C75 + C1664 * C137 + C1734 * C618 + C1665 * C690 +
                     C1735 * C1668 + C1666 * C1737) *
                        C108 +
                    (C1733 * C110 + C1664 * C212 + C1734 * C656 + C1665 * C783 +
                     C1735 * C1704 + C1666 * C1825) *
                        C5575) *
                       C5535) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (-std::pow(Pi, 2.5) *
         (((C4861 * C74 + C5710 * C78 + C4851 * C75 + C5535 * C79) * C135 +
           (C4861 * C136 + C5710 * C233 + C4851 * C137 + C5535 * C234) *
               C5601) *
              C908 +
          ((C4861 * C323 + C5710 * C326 + C4851 * C324 + C5535 * C327) * C135 +
           (C4861 * C398 + C5710 * C525 + C4851 * C399 + C5535 * C526) *
               C5601) *
              C909 +
          ((C4861 * C915 + C5710 * C917 + C4851 * C916 + C5535 * C918) * C135 +
           (C4861 * C986 + C5710 * C1109 + C4851 * C987 + C5535 * C1110) *
               C5601) *
              C910) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C67 * C74 + C57 * C78 + C69 * C75 + C58 * C79 + C71 * C76 +
           C59 * C80 + C73 * C77 + C60 * C81) *
              C135 +
          (C67 * C136 + C57 * C233 + C69 * C137 + C58 * C234 + C71 * C138 +
           C59 * C235 + C73 * C139 + C60 * C236) *
              C5601) *
         C5575 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C4861 * C74 + C5710 * C78 + C4851 * C75 + C5535 * C79) * C1733 +
          (C4861 * C136 + C5710 * C233 + C4851 * C137 + C5535 * C234) * C1664 +
          (C4861 * C617 + C5710 * C620 + C4851 * C618 + C5535 * C621) * C1734 +
          (C4861 * C689 + C5710 * C811 + C4851 * C690 + C5535 * C812) * C1665 +
          (C4861 * C1667 + C5710 * C1669 + C4851 * C1668 + C5535 * C1670) *
              C1735 +
          (C4861 * C1736 + C5710 * C1852 + C4851 * C1737 + C5535 * C1853) *
              C1666) *
         C5575 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezy[6] += (-std::pow(Pi, 2.5) *
                  (((C953 * C74 + C908 * C109 + C954 * C323 + C909 * C366 +
                     C955 * C915 + C910 * C956) *
                        C135 +
                    (C953 * C136 + C908 * C255 + C954 * C398 + C909 * C554 +
                     C955 * C986 + C910 * C1137) *
                        C5601) *
                       C5710 +
                   ((C953 * C75 + C908 * C110 + C954 * C324 + C909 * C367 +
                     C955 * C916 + C910 * C957) *
                        C135 +
                    (C953 * C137 + C908 * C256 + C954 * C399 + C909 * C555 +
                     C955 * C987 + C910 * C1138) *
                        C5601) *
                       C5535) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C108 * C74 + C5575 * C109) * C135 +
                    (C108 * C136 + C5575 * C255) * C5601) *
                       C57 +
                   ((C108 * C75 + C5575 * C110) * C135 +
                    (C108 * C137 + C5575 * C256) * C5601) *
                       C58 +
                   ((C108 * C76 + C5575 * C111) * C135 +
                    (C108 * C138 + C5575 * C257) * C5601) *
                       C59 +
                   ((C108 * C77 + C5575 * C112) * C135 +
                    (C108 * C139 + C5575 * C258) * C5601) *
                       C60) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C108 * C74 + C5575 * C109) * C1733 +
                    (C108 * C136 + C5575 * C255) * C1664 +
                    (C108 * C617 + C5575 * C655) * C1734 +
                    (C108 * C689 + C5575 * C840) * C1665 +
                    (C108 * C1667 + C5575 * C1703) * C1735 +
                    (C108 * C1736 + C5575 * C1880) * C1666) *
                       C5710 +
                   ((C108 * C75 + C5575 * C110) * C1733 +
                    (C108 * C137 + C5575 * C256) * C1664 +
                    (C108 * C618 + C5575 * C656) * C1734 +
                    (C108 * C690 + C5575 * C841) * C1665 +
                    (C108 * C1668 + C5575 * C1704) * C1735 +
                    (C108 * C1737 + C5575 * C1881) * C1666) *
                       C5535) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezz[6] += (-std::pow(Pi, 2.5) *
                  (((C277 * C74 + C283 + C283 + C5601 * C278) * C908 +
                    (C277 * C323 + C587 + C587 + C5601 * C583) * C909 +
                    (C277 * C915 + C1168 + C1168 + C5601 * C1165) * C910) *
                       C5710 +
                   ((C277 * C75 + C284 + C284 + C5601 * C279) * C908 +
                    (C277 * C324 + C588 + C588 + C5601 * C584) * C909 +
                    (C277 * C916 + C1169 + C1169 + C5601 * C1166) * C910) *
                       C5535) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C277 * C74 + C283 + C283 + C5601 * C278) * C5575 * C57 +
                   (C277 * C75 + C284 + C284 + C5601 * C279) * C5575 * C58 +
                   (C277 * C76 + C285 + C285 + C5601 * C280) * C5575 * C59 +
                   (C277 * C77 + C286 + C286 + C5601 * C281) * C5575 * C60) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C1908 * C74 + C1914 + C1914 + C1664 * C278 + C1909 * C617 +
                    C1915 + C1915 + C1665 * C871 + C1910 * C1667 + C1916 +
                    C1916 + C1666 * C1911) *
                       C5575 * C5710 +
                   (C1908 * C75 + C1917 + C1917 + C1664 * C279 + C1909 * C618 +
                    C1918 + C1918 + C1665 * C872 + C1910 * C1668 + C1919 +
                    C1919 + C1666 * C1912) *
                       C5575 * C5535) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::pow(Pi, 2.5) *
         ((C1192 * C74 + C1198 + C1198 + C5530 * C82) * C5601 * C1188 +
          (C1192 * C323 + C1199 + C1199 + C5530 * C329) * C5601 * C1189 +
          (C1192 * C915 + C1200 + C1200 + C5530 * C919) * C5601 * C1190 +
          (C1192 * C1194 + C1201 + C1201 + C5530 * C1196) * C5601 * C1191) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C317 * C74 + C333 + C333 + C312 * C82 + C319 * C75 + C334 + C334 +
           C313 * C83 + C321 * C76 + C335 + C335 + C314 * C84) *
              C5601 * C5720 +
          (C317 * C323 + C336 + C336 + C312 * C329 + C319 * C324 + C337 + C337 +
           C313 * C330 + C321 * C325 + C338 + C338 + C314 * C331) *
              C5601 * C5589) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1192 * C74 + C1198 + C1198 + C5530 * C82) * C1664 +
           (C1192 * C617 + C1401 + C1401 + C5530 * C623) * C1665 +
           (C1192 * C1667 + C1949 + C1949 + C5530 * C1671) * C1666) *
              C5720 +
          ((C1192 * C323 + C1199 + C1199 + C5530 * C329) * C1664 +
           (C1192 * C1394 + C1402 + C1402 + C5530 * C1398) * C1665 +
           (C1192 * C1945 + C1950 + C1950 + C5530 * C1947) * C1666) *
              C5589) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::pow(Pi, 2.5) *
         ((C1219 * C74 + C1188 * C109 + C1220 * C323 + C1189 * C366 +
           C1221 * C915 + C1190 * C956 + C1222 * C1194 + C1191 * C1223) *
              C1193 +
          (C1219 * C78 + C1188 * C113 + C1220 * C326 + C1189 * C369 +
           C1221 * C917 + C1190 * C958 + C1222 * C1195 + C1191 * C1224) *
              C5530) *
         C5601 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C364 * C74 + C5720 * C109 + C365 * C323 + C5589 * C366) * C318 +
          (C364 * C78 + C5720 * C113 + C365 * C326 + C5589 * C369) * C312 +
          (C364 * C75 + C5720 * C110 + C365 * C324 + C5589 * C367) * C320 +
          (C364 * C79 + C5720 * C114 + C365 * C327 + C5589 * C370) * C313 +
          (C364 * C76 + C5720 * C111 + C365 * C325 + C5589 * C368) * C322 +
          (C364 * C80 + C5720 * C115 + C365 * C328 + C5589 * C371) * C314) *
         C5601 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C364 * C74 + C5720 * C109 + C365 * C323 + C5589 * C366) * C1193 +
           (C364 * C78 + C5720 * C113 + C365 * C326 + C5589 * C369) * C5530) *
              C1664 +
          ((C364 * C617 + C5720 * C655 + C365 * C1394 + C5589 * C1429) * C1193 +
           (C364 * C620 + C5720 * C658 + C365 * C1396 + C5589 * C1431) *
               C5530) *
              C1665 +
          ((C364 * C1667 + C5720 * C1703 + C365 * C1945 + C5589 * C1976) *
               C1193 +
           (C364 * C1669 + C5720 * C1705 + C365 * C1946 + C5589 * C1977) *
               C5530) *
              C1666) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] += (-std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5601 * C136) * C1193 +
                    (C135 * C78 + C5601 * C140) * C5530) *
                       C1188 +
                   ((C135 * C323 + C5601 * C398) * C1193 +
                    (C135 * C326 + C5601 * C401) * C5530) *
                       C1189 +
                   ((C135 * C915 + C5601 * C986) * C1193 +
                    (C135 * C917 + C5601 * C988) * C5530) *
                       C1190 +
                   ((C135 * C1194 + C5601 * C1243) * C1193 +
                    (C135 * C1195 + C5601 * C1244) * C5530) *
                       C1191) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5601 * C136) * C318 +
                    (C135 * C78 + C5601 * C140) * C312 +
                    (C135 * C75 + C5601 * C137) * C320 +
                    (C135 * C79 + C5601 * C141) * C313 +
                    (C135 * C76 + C5601 * C138) * C322 +
                    (C135 * C80 + C5601 * C142) * C314) *
                       C5720 +
                   ((C135 * C323 + C5601 * C398) * C318 +
                    (C135 * C326 + C5601 * C401) * C312 +
                    (C135 * C324 + C5601 * C399) * C320 +
                    (C135 * C327 + C5601 * C402) * C313 +
                    (C135 * C325 + C5601 * C400) * C322 +
                    (C135 * C328 + C5601 * C403) * C314) *
                       C5589) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C1733 * C74 + C1664 * C136 + C1734 * C617 + C1665 * C689 +
                     C1735 * C1667 + C1666 * C1736) *
                        C1193 +
                    (C1733 * C78 + C1664 * C140 + C1734 * C620 + C1665 * C692 +
                     C1735 * C1669 + C1666 * C1738) *
                        C5530) *
                       C5720 +
                   ((C1733 * C323 + C1664 * C398 + C1734 * C1394 +
                     C1665 * C1459 + C1735 * C1945 + C1666 * C2004) *
                        C1193 +
                    (C1733 * C326 + C1664 * C401 + C1734 * C1396 +
                     C1665 * C1461 + C1735 * C1946 + C1666 * C2005) *
                        C5530) *
                       C5589) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[7] += (-std::pow(Pi, 2.5) *
                  ((C1193 * C74 + C5530 * C78) * C1219 +
                   (C1193 * C109 + C5530 * C162) * C1188 +
                   (C1193 * C323 + C5530 * C326) * C1220 +
                   (C1193 * C366 + C5530 * C430) * C1189 +
                   (C1193 * C915 + C5530 * C917) * C1221 +
                   (C1193 * C956 + C5530 * C1016) * C1190 +
                   (C1193 * C1194 + C5530 * C1195) * C1222 +
                   (C1193 * C1223 + C5530 * C1263) * C1191) *
                  C5601 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C318 * C74 + C312 * C78 + C320 * C75 + C313 * C79 +
                    C322 * C76 + C314 * C80) *
                       C364 +
                   (C318 * C109 + C312 * C162 + C320 * C110 + C313 * C163 +
                    C322 * C111 + C314 * C164) *
                       C5720 +
                   (C318 * C323 + C312 * C326 + C320 * C324 + C313 * C327 +
                    C322 * C325 + C314 * C328) *
                       C365 +
                   (C318 * C366 + C312 * C430 + C320 * C367 + C313 * C431 +
                    C322 * C368 + C314 * C432) *
                       C5589) *
                  C5601 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C1193 * C74 + C5530 * C78) * C364 +
                    (C1193 * C109 + C5530 * C162) * C5720 +
                    (C1193 * C323 + C5530 * C326) * C365 +
                    (C1193 * C366 + C5530 * C430) * C5589) *
                       C1664 +
                   ((C1193 * C617 + C5530 * C620) * C364 +
                    (C1193 * C655 + C5530 * C721) * C5720 +
                    (C1193 * C1394 + C5530 * C1396) * C365 +
                    (C1193 * C1429 + C5530 * C1489) * C5589) *
                       C1665 +
                   ((C1193 * C1667 + C5530 * C1669) * C364 +
                    (C1193 * C1703 + C5530 * C1766) * C5720 +
                    (C1193 * C1945 + C5530 * C1946) * C365 +
                    (C1193 * C1976 + C5530 * C2032) * C5589) *
                       C1666) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::pow(Pi, 2.5) *
         (C1282 * C74 + C1288 + C1288 + C1188 * C185 + C1283 * C323 + C1289 +
          C1289 + C1189 * C461 + C1284 * C915 + C1290 + C1290 + C1190 * C1047 +
          C1285 * C1194 + C1291 + C1291 + C1191 * C1286) *
         C5530 * C5601 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C459 * C74 + C465 + C465 + C5720 * C185 + C460 * C323 + C466 + C466 +
           C5589 * C461) *
              C312 +
          (C459 * C75 + C467 + C467 + C5720 * C186 + C460 * C324 + C468 + C468 +
           C5589 * C462) *
              C313 +
          (C459 * C76 + C469 + C469 + C5720 * C187 + C460 * C325 + C470 + C470 +
           C5589 * C463) *
              C314) *
         C5601 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C459 * C74 + C465 + C465 + C5720 * C185 + C460 * C323 + C466 + C466 +
           C5589 * C461) *
              C5530 * C1664 +
          (C459 * C617 + C2061 + C2061 + C5720 * C750 + C460 * C1394 + C2062 +
           C2062 + C5589 * C1517) *
              C5530 * C1665 +
          (C459 * C1667 + C2063 + C2063 + C5720 * C1794 + C460 * C1945 + C2064 +
           C2064 + C5589 * C2059) *
              C5530 * C1666) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] += (-std::pow(Pi, 2.5) *
                  ((C135 * C74 + C5601 * C136) * C1219 +
                   (C135 * C109 + C5601 * C211) * C1188 +
                   (C135 * C323 + C5601 * C398) * C1220 +
                   (C135 * C366 + C5601 * C496) * C1189 +
                   (C135 * C915 + C5601 * C986) * C1221 +
                   (C135 * C956 + C5601 * C1081) * C1190 +
                   (C135 * C1194 + C5601 * C1243) * C1222 +
                   (C135 * C1223 + C5601 * C1309) * C1191) *
                  C5530 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C135 * C74 + C5601 * C136) * C364 +
                    (C135 * C109 + C5601 * C211) * C5720 +
                    (C135 * C323 + C5601 * C398) * C365 +
                    (C135 * C366 + C5601 * C496) * C5589) *
                       C312 +
                   ((C135 * C75 + C5601 * C137) * C364 +
                    (C135 * C110 + C5601 * C212) * C5720 +
                    (C135 * C324 + C5601 * C399) * C365 +
                    (C135 * C367 + C5601 * C497) * C5589) *
                       C313 +
                   ((C135 * C76 + C5601 * C138) * C364 +
                    (C135 * C111 + C5601 * C213) * C5720 +
                    (C135 * C325 + C5601 * C400) * C365 +
                    (C135 * C368 + C5601 * C498) * C5589) *
                       C314) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C1733 * C74 + C1664 * C136 + C1734 * C617 + C1665 * C689 +
                    C1735 * C1667 + C1666 * C1736) *
                       C364 +
                   (C1733 * C109 + C1664 * C211 + C1734 * C655 + C1665 * C782 +
                    C1735 * C1703 + C1666 * C1824) *
                       C5720 +
                   (C1733 * C323 + C1664 * C398 + C1734 * C1394 +
                    C1665 * C1459 + C1735 * C1945 + C1666 * C2004) *
                       C365 +
                   (C1733 * C366 + C1664 * C496 + C1734 * C1429 +
                    C1665 * C1548 + C1735 * C1976 + C1666 * C2090) *
                       C5589) *
                  C5530 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezx[7] += (-std::pow(Pi, 2.5) *
                  (((C1193 * C74 + C5530 * C78) * C135 +
                    (C1193 * C136 + C5530 * C233) * C5601) *
                       C1188 +
                   ((C1193 * C323 + C5530 * C326) * C135 +
                    (C1193 * C398 + C5530 * C525) * C5601) *
                       C1189 +
                   ((C1193 * C915 + C5530 * C917) * C135 +
                    (C1193 * C986 + C5530 * C1109) * C5601) *
                       C1190 +
                   ((C1193 * C1194 + C5530 * C1195) * C135 +
                    (C1193 * C1243 + C5530 * C1328) * C5601) *
                       C1191) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C318 * C74 + C312 * C78 + C320 * C75 + C313 * C79 +
                     C322 * C76 + C314 * C80) *
                        C135 +
                    (C318 * C136 + C312 * C233 + C320 * C137 + C313 * C234 +
                     C322 * C138 + C314 * C235) *
                        C5601) *
                       C5720 +
                   ((C318 * C323 + C312 * C326 + C320 * C324 + C313 * C327 +
                     C322 * C325 + C314 * C328) *
                        C135 +
                    (C318 * C398 + C312 * C525 + C320 * C399 + C313 * C526 +
                     C322 * C400 + C314 * C527) *
                        C5601) *
                       C5589) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C1193 * C74 + C5530 * C78) * C1733 +
                    (C1193 * C136 + C5530 * C233) * C1664 +
                    (C1193 * C617 + C5530 * C620) * C1734 +
                    (C1193 * C689 + C5530 * C811) * C1665 +
                    (C1193 * C1667 + C5530 * C1669) * C1735 +
                    (C1193 * C1736 + C5530 * C1852) * C1666) *
                       C5720 +
                   ((C1193 * C323 + C5530 * C326) * C1733 +
                    (C1193 * C398 + C5530 * C525) * C1664 +
                    (C1193 * C1394 + C5530 * C1396) * C1734 +
                    (C1193 * C1459 + C5530 * C1576) * C1665 +
                    (C1193 * C1945 + C5530 * C1946) * C1735 +
                    (C1193 * C2004 + C5530 * C2117) * C1666) *
                       C5589) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (-std::pow(Pi, 2.5) *
         ((C1219 * C74 + C1188 * C109 + C1220 * C323 + C1189 * C366 +
           C1221 * C915 + C1190 * C956 + C1222 * C1194 + C1191 * C1223) *
              C135 +
          (C1219 * C136 + C1188 * C255 + C1220 * C398 + C1189 * C554 +
           C1221 * C986 + C1190 * C1137 + C1222 * C1243 + C1191 * C1347) *
              C5601) *
         C5530 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C364 * C74 + C5720 * C109 + C365 * C323 + C5589 * C366) * C135 +
           (C364 * C136 + C5720 * C255 + C365 * C398 + C5589 * C554) * C5601) *
              C312 +
          ((C364 * C75 + C5720 * C110 + C365 * C324 + C5589 * C367) * C135 +
           (C364 * C137 + C5720 * C256 + C365 * C399 + C5589 * C555) * C5601) *
              C313 +
          ((C364 * C76 + C5720 * C111 + C365 * C325 + C5589 * C368) * C135 +
           (C364 * C138 + C5720 * C257 + C365 * C400 + C5589 * C556) * C5601) *
              C314) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C364 * C74 + C5720 * C109 + C365 * C323 + C5589 * C366) * C1733 +
          (C364 * C136 + C5720 * C255 + C365 * C398 + C5589 * C554) * C1664 +
          (C364 * C617 + C5720 * C655 + C365 * C1394 + C5589 * C1429) * C1734 +
          (C364 * C689 + C5720 * C840 + C365 * C1459 + C5589 * C1604) * C1665 +
          (C364 * C1667 + C5720 * C1703 + C365 * C1945 + C5589 * C1976) *
              C1735 +
          (C364 * C1736 + C5720 * C1880 + C365 * C2004 + C5589 * C2144) *
              C1666) *
         C5530 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezz[7] += (-std::pow(Pi, 2.5) *
                  ((C277 * C74 + C283 + C283 + C5601 * C278) * C1188 +
                   (C277 * C323 + C587 + C587 + C5601 * C583) * C1189 +
                   (C277 * C915 + C1168 + C1168 + C5601 * C1165) * C1190 +
                   (C277 * C1194 + C1368 + C1368 + C5601 * C1366) * C1191) *
                  C5530 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C277 * C74 + C283 + C283 + C5601 * C278) * C5720 +
                    (C277 * C323 + C587 + C587 + C5601 * C583) * C5589) *
                       C312 +
                   ((C277 * C75 + C284 + C284 + C5601 * C279) * C5720 +
                    (C277 * C324 + C588 + C588 + C5601 * C584) * C5589) *
                       C313 +
                   ((C277 * C76 + C285 + C285 + C5601 * C280) * C5720 +
                    (C277 * C325 + C589 + C589 + C5601 * C585) * C5589) *
                       C314) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C1908 * C74 + C1914 + C1914 + C1664 * C278 + C1909 * C617 +
                    C1915 + C1915 + C1665 * C871 + C1910 * C1667 + C1916 +
                    C1916 + C1666 * C1911) *
                       C5720 +
                   (C1908 * C323 + C2173 + C2173 + C1664 * C583 +
                    C1909 * C1394 + C2174 + C2174 + C1665 * C1632 +
                    C1910 * C1945 + C2175 + C2175 + C1666 * C2171) *
                       C5589) *
                  C5530 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (-std::pow(Pi, 2.5) *
         (((C1192 * C74 + C1198 + C1198 + C5530 * C82) * C5721 +
           (C1192 * C617 + C1401 + C1401 + C5530 * C623) * C5613) *
              C908 +
          ((C1192 * C323 + C1199 + C1199 + C5530 * C329) * C5721 +
           (C1192 * C1394 + C1402 + C1402 + C5530 * C1398) * C5613) *
              C909 +
          ((C1192 * C915 + C1200 + C1200 + C5530 * C919) * C5721 +
           (C1192 * C1395 + C1403 + C1403 + C5530 * C1399) * C5613) *
              C910) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C317 * C74 + C333 + C333 + C312 * C82 + C319 * C75 + C334 + C334 +
           C313 * C83 + C321 * C76 + C335 + C335 + C314 * C84) *
              C5721 +
          (C317 * C617 + C627 + C627 + C312 * C623 + C319 * C618 + C628 + C628 +
           C313 * C624 + C321 * C619 + C629 + C629 + C314 * C625) *
              C5613) *
         C5575 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C1192 * C74 + C1198 + C1198 + C5530 * C82) * C2193 +
          (C1192 * C617 + C1401 + C1401 + C5530 * C623) * C2194 +
          (C1192 * C1667 + C1949 + C1949 + C5530 * C1671) * C2195 +
          (C1192 * C2197 + C2201 + C2201 + C5530 * C2199) * C2196) *
         C5575 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexy[8] += (-std::pow(Pi, 2.5) *
                  (((C953 * C74 + C908 * C109 + C954 * C323 + C909 * C366 +
                     C955 * C915 + C910 * C956) *
                        C1193 +
                    (C953 * C78 + C908 * C113 + C954 * C326 + C909 * C369 +
                     C955 * C917 + C910 * C958) *
                        C5530) *
                       C5721 +
                   ((C953 * C617 + C908 * C655 + C954 * C1394 + C909 * C1429 +
                     C955 * C1395 + C910 * C1430) *
                        C1193 +
                    (C953 * C620 + C908 * C658 + C954 * C1396 + C909 * C1431 +
                     C955 * C1397 + C910 * C1432) *
                        C5530) *
                       C5613) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C108 * C74 + C5575 * C109) * C318 +
                    (C108 * C78 + C5575 * C113) * C312 +
                    (C108 * C75 + C5575 * C110) * C320 +
                    (C108 * C79 + C5575 * C114) * C313 +
                    (C108 * C76 + C5575 * C111) * C322 +
                    (C108 * C80 + C5575 * C115) * C314) *
                       C5721 +
                   ((C108 * C617 + C5575 * C655) * C318 +
                    (C108 * C620 + C5575 * C658) * C312 +
                    (C108 * C618 + C5575 * C656) * C320 +
                    (C108 * C621 + C5575 * C659) * C313 +
                    (C108 * C619 + C5575 * C657) * C322 +
                    (C108 * C622 + C5575 * C660) * C314) *
                       C5613) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C108 * C74 + C5575 * C109) * C1193 +
                    (C108 * C78 + C5575 * C113) * C5530) *
                       C2193 +
                   ((C108 * C617 + C5575 * C655) * C1193 +
                    (C108 * C620 + C5575 * C658) * C5530) *
                       C2194 +
                   ((C108 * C1667 + C5575 * C1703) * C1193 +
                    (C108 * C1669 + C5575 * C1705) * C5530) *
                       C2195 +
                   ((C108 * C2197 + C5575 * C2219) * C1193 +
                    (C108 * C2198 + C5575 * C2220) * C5530) *
                       C2196) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (-std::pow(Pi, 2.5) *
         (((C687 * C74 + C5721 * C136 + C688 * C617 + C5613 * C689) * C1193 +
           (C687 * C78 + C5721 * C140 + C688 * C620 + C5613 * C692) * C5530) *
              C908 +
          ((C687 * C323 + C5721 * C398 + C688 * C1394 + C5613 * C1459) * C1193 +
           (C687 * C326 + C5721 * C401 + C688 * C1396 + C5613 * C1461) *
               C5530) *
              C909 +
          ((C687 * C915 + C5721 * C986 + C688 * C1395 + C5613 * C1460) * C1193 +
           (C687 * C917 + C5721 * C988 + C688 * C1397 + C5613 * C1462) *
               C5530) *
              C910) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C687 * C74 + C5721 * C136 + C688 * C617 + C5613 * C689) * C318 +
          (C687 * C78 + C5721 * C140 + C688 * C620 + C5613 * C692) * C312 +
          (C687 * C75 + C5721 * C137 + C688 * C618 + C5613 * C690) * C320 +
          (C687 * C79 + C5721 * C141 + C688 * C621 + C5613 * C693) * C313 +
          (C687 * C76 + C5721 * C138 + C688 * C619 + C5613 * C691) * C322 +
          (C687 * C80 + C5721 * C142 + C688 * C622 + C5613 * C694) * C314) *
         C5575 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C2239 * C74 + C2193 * C136 + C2240 * C617 + C2194 * C689 +
           C2241 * C1667 + C2195 * C1736 + C2242 * C2197 + C2196 * C2243) *
              C1193 +
          (C2239 * C78 + C2193 * C140 + C2240 * C620 + C2194 * C692 +
           C2241 * C1669 + C2195 * C1738 + C2242 * C2198 + C2196 * C2244) *
              C5530) *
         C5575 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyx[8] += (-std::pow(Pi, 2.5) *
                  (((C1193 * C74 + C5530 * C78) * C953 +
                    (C1193 * C109 + C5530 * C162) * C908 +
                    (C1193 * C323 + C5530 * C326) * C954 +
                    (C1193 * C366 + C5530 * C430) * C909 +
                    (C1193 * C915 + C5530 * C917) * C955 +
                    (C1193 * C956 + C5530 * C1016) * C910) *
                       C5721 +
                   ((C1193 * C617 + C5530 * C620) * C953 +
                    (C1193 * C655 + C5530 * C721) * C908 +
                    (C1193 * C1394 + C5530 * C1396) * C954 +
                    (C1193 * C1429 + C5530 * C1489) * C909 +
                    (C1193 * C1395 + C5530 * C1397) * C955 +
                    (C1193 * C1430 + C5530 * C1490) * C910) *
                       C5613) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C318 * C74 + C312 * C78 + C320 * C75 + C313 * C79 +
                     C322 * C76 + C314 * C80) *
                        C108 +
                    (C318 * C109 + C312 * C162 + C320 * C110 + C313 * C163 +
                     C322 * C111 + C314 * C164) *
                        C5575) *
                       C5721 +
                   ((C318 * C617 + C312 * C620 + C320 * C618 + C313 * C621 +
                     C322 * C619 + C314 * C622) *
                        C108 +
                    (C318 * C655 + C312 * C721 + C320 * C656 + C313 * C722 +
                     C322 * C657 + C314 * C723) *
                        C5575) *
                       C5613) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C1193 * C74 + C5530 * C78) * C108 +
                    (C1193 * C109 + C5530 * C162) * C5575) *
                       C2193 +
                   ((C1193 * C617 + C5530 * C620) * C108 +
                    (C1193 * C655 + C5530 * C721) * C5575) *
                       C2194 +
                   ((C1193 * C1667 + C5530 * C1669) * C108 +
                    (C1193 * C1703 + C5530 * C1766) * C5575) *
                       C2195 +
                   ((C1193 * C2197 + C5530 * C2198) * C108 +
                    (C1193 * C2219 + C5530 * C2263) * C5575) *
                       C2196) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (-std::pow(Pi, 2.5) *
         ((C1044 * C74 + C1050 + C1050 + C908 * C185 + C1045 * C323 + C1051 +
           C1051 + C909 * C461 + C1046 * C915 + C1052 + C1052 + C910 * C1047) *
              C5530 * C5721 +
          (C1044 * C617 + C1520 + C1520 + C908 * C750 + C1045 * C1394 + C1521 +
           C1521 + C909 * C1517 + C1046 * C1395 + C1522 + C1522 +
           C910 * C1518) *
              C5530 * C5613) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C184 * C74 + C190 + C190 + C5575 * C185) * C312 +
           (C184 * C75 + C191 + C191 + C5575 * C186) * C313 +
           (C184 * C76 + C192 + C192 + C5575 * C187) * C314) *
              C5721 +
          ((C184 * C617 + C754 + C754 + C5575 * C750) * C312 +
           (C184 * C618 + C755 + C755 + C5575 * C751) * C313 +
           (C184 * C619 + C756 + C756 + C5575 * C752) * C314) *
              C5613) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C184 * C74 + C190 + C190 + C5575 * C185) * C5530 * C2193 +
          (C184 * C617 + C754 + C754 + C5575 * C750) * C5530 * C2194 +
          (C184 * C1667 + C1797 + C1797 + C5575 * C1794) * C5530 * C2195 +
          (C184 * C2197 + C2284 + C2284 + C5575 * C2282) * C5530 * C2196) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (-std::pow(Pi, 2.5) *
         ((C687 * C74 + C5721 * C136 + C688 * C617 + C5613 * C689) * C953 +
          (C687 * C109 + C5721 * C211 + C688 * C655 + C5613 * C782) * C908 +
          (C687 * C323 + C5721 * C398 + C688 * C1394 + C5613 * C1459) * C954 +
          (C687 * C366 + C5721 * C496 + C688 * C1429 + C5613 * C1548) * C909 +
          (C687 * C915 + C5721 * C986 + C688 * C1395 + C5613 * C1460) * C955 +
          (C687 * C956 + C5721 * C1081 + C688 * C1430 + C5613 * C1549) * C910) *
         C5530 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C687 * C74 + C5721 * C136 + C688 * C617 + C5613 * C689) * C108 +
           (C687 * C109 + C5721 * C211 + C688 * C655 + C5613 * C782) * C5575) *
              C312 +
          ((C687 * C75 + C5721 * C137 + C688 * C618 + C5613 * C690) * C108 +
           (C687 * C110 + C5721 * C212 + C688 * C656 + C5613 * C783) * C5575) *
              C313 +
          ((C687 * C76 + C5721 * C138 + C688 * C619 + C5613 * C691) * C108 +
           (C687 * C111 + C5721 * C213 + C688 * C657 + C5613 * C784) * C5575) *
              C314) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C2239 * C74 + C2193 * C136 + C2240 * C617 + C2194 * C689 +
           C2241 * C1667 + C2195 * C1736 + C2242 * C2197 + C2196 * C2243) *
              C108 +
          (C2239 * C109 + C2193 * C211 + C2240 * C655 + C2194 * C782 +
           C2241 * C1703 + C2195 * C1824 + C2242 * C2219 + C2196 * C2302) *
              C5575) *
         C5530 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezx[8] += (-std::pow(Pi, 2.5) *
                  (((C1193 * C74 + C5530 * C78) * C687 +
                    (C1193 * C136 + C5530 * C233) * C5721 +
                    (C1193 * C617 + C5530 * C620) * C688 +
                    (C1193 * C689 + C5530 * C811) * C5613) *
                       C908 +
                   ((C1193 * C323 + C5530 * C326) * C687 +
                    (C1193 * C398 + C5530 * C525) * C5721 +
                    (C1193 * C1394 + C5530 * C1396) * C688 +
                    (C1193 * C1459 + C5530 * C1576) * C5613) *
                       C909 +
                   ((C1193 * C915 + C5530 * C917) * C687 +
                    (C1193 * C986 + C5530 * C1109) * C5721 +
                    (C1193 * C1395 + C5530 * C1397) * C688 +
                    (C1193 * C1460 + C5530 * C1577) * C5613) *
                       C910) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C318 * C74 + C312 * C78 + C320 * C75 + C313 * C79 +
                    C322 * C76 + C314 * C80) *
                       C687 +
                   (C318 * C136 + C312 * C233 + C320 * C137 + C313 * C234 +
                    C322 * C138 + C314 * C235) *
                       C5721 +
                   (C318 * C617 + C312 * C620 + C320 * C618 + C313 * C621 +
                    C322 * C619 + C314 * C622) *
                       C688 +
                   (C318 * C689 + C312 * C811 + C320 * C690 + C313 * C812 +
                    C322 * C691 + C314 * C813) *
                       C5613) *
                  C5575 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C1193 * C74 + C5530 * C78) * C2239 +
                   (C1193 * C136 + C5530 * C233) * C2193 +
                   (C1193 * C617 + C5530 * C620) * C2240 +
                   (C1193 * C689 + C5530 * C811) * C2194 +
                   (C1193 * C1667 + C5530 * C1669) * C2241 +
                   (C1193 * C1736 + C5530 * C1852) * C2195 +
                   (C1193 * C2197 + C5530 * C2198) * C2242 +
                   (C1193 * C2243 + C5530 * C2321) * C2196) *
                  C5575 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezy[8] += (-std::pow(Pi, 2.5) *
                  ((C953 * C74 + C908 * C109 + C954 * C323 + C909 * C366 +
                    C955 * C915 + C910 * C956) *
                       C687 +
                   (C953 * C136 + C908 * C255 + C954 * C398 + C909 * C554 +
                    C955 * C986 + C910 * C1137) *
                       C5721 +
                   (C953 * C617 + C908 * C655 + C954 * C1394 + C909 * C1429 +
                    C955 * C1395 + C910 * C1430) *
                       C688 +
                   (C953 * C689 + C908 * C840 + C954 * C1459 + C909 * C1604 +
                    C955 * C1460 + C910 * C1605) *
                       C5613) *
                  C5530 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C108 * C74 + C5575 * C109) * C687 +
                    (C108 * C136 + C5575 * C255) * C5721 +
                    (C108 * C617 + C5575 * C655) * C688 +
                    (C108 * C689 + C5575 * C840) * C5613) *
                       C312 +
                   ((C108 * C75 + C5575 * C110) * C687 +
                    (C108 * C137 + C5575 * C256) * C5721 +
                    (C108 * C618 + C5575 * C656) * C688 +
                    (C108 * C690 + C5575 * C841) * C5613) *
                       C313 +
                   ((C108 * C76 + C5575 * C111) * C687 +
                    (C108 * C138 + C5575 * C257) * C5721 +
                    (C108 * C619 + C5575 * C657) * C688 +
                    (C108 * C691 + C5575 * C842) * C5613) *
                       C314) *
                  C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C108 * C74 + C5575 * C109) * C2239 +
                   (C108 * C136 + C5575 * C255) * C2193 +
                   (C108 * C617 + C5575 * C655) * C2240 +
                   (C108 * C689 + C5575 * C840) * C2194 +
                   (C108 * C1667 + C5575 * C1703) * C2241 +
                   (C108 * C1736 + C5575 * C1880) * C2195 +
                   (C108 * C2197 + C5575 * C2219) * C2242 +
                   (C108 * C2243 + C5575 * C2340) * C2196) *
                  C5530 * C63 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (-std::pow(Pi, 2.5) *
         ((C869 * C74 + C875 + C875 + C5721 * C278 + C870 * C617 + C876 + C876 +
           C5613 * C871) *
              C908 +
          (C869 * C323 + C1635 + C1635 + C5721 * C583 + C870 * C1394 + C1636 +
           C1636 + C5613 * C1632) *
              C909 +
          (C869 * C915 + C1637 + C1637 + C5721 * C1165 + C870 * C1395 + C1638 +
           C1638 + C5613 * C1633) *
              C910) *
         C5530 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C869 * C74 + C875 + C875 + C5721 * C278 + C870 * C617 + C876 + C876 +
           C5613 * C871) *
              C5575 * C312 +
          (C869 * C75 + C877 + C877 + C5721 * C279 + C870 * C618 + C878 + C878 +
           C5613 * C872) *
              C5575 * C313 +
          (C869 * C76 + C879 + C879 + C5721 * C280 + C870 * C619 + C880 + C880 +
           C5613 * C873) *
              C5575 * C314) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (C2359 * C74 + C2365 + C2365 + C2193 * C278 + C2360 * C617 + C2366 +
          C2366 + C2194 * C871 + C2361 * C1667 + C2367 + C2367 + C2195 * C1911 +
          C2362 * C2197 + C2368 + C2368 + C2196 * C2363) *
         C5575 * C5530 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C2399 * C74 + C2406 + C2406 + C5741 * C82 + C2401 * C75 + C2407 +
           C2407 + C5734 * C83 + C2403 * C76 + C2408 + C2408 + C2396 * C84) *
              C3245 +
          (C2399 * C617 + C3248 + C3248 + C5741 * C623 + C2401 * C618 + C3249 +
           C3249 + C5734 * C624 + C2403 * C619 + C3250 + C3250 + C2396 * C625) *
              C5613) *
         C5575 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexy[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C108 * C74 + C5575 * C109) * C2400 +
                    (C108 * C78 + C5575 * C113) * C5741 +
                    (C108 * C75 + C5575 * C110) * C2402 +
                    (C108 * C79 + C5575 * C114) * C5734 +
                    (C108 * C76 + C5575 * C111) * C2404 +
                    (C108 * C80 + C5575 * C115) * C2396) *
                       C3245 +
                   ((C108 * C617 + C5575 * C655) * C2400 +
                    (C108 * C620 + C5575 * C658) * C5741 +
                    (C108 * C618 + C5575 * C656) * C2402 +
                    (C108 * C621 + C5575 * C659) * C5734 +
                    (C108 * C619 + C5575 * C657) * C2404 +
                    (C108 * C622 + C5575 * C660) * C2396) *
                       C5613) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C3302 * C74 + C3245 * C136 + C3303 * C617 + C5613 * C689) * C2400 +
          (C3302 * C78 + C3245 * C140 + C3303 * C620 + C5613 * C692) * C5741 +
          (C3302 * C75 + C3245 * C137 + C3303 * C618 + C5613 * C690) * C2402 +
          (C3302 * C79 + C3245 * C141 + C3303 * C621 + C5613 * C693) * C5734 +
          (C3302 * C76 + C3245 * C138 + C3303 * C619 + C5613 * C691) * C2404 +
          (C3302 * C80 + C3245 * C142 + C3303 * C622 + C5613 * C694) * C2396) *
         C5575 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyx[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2400 * C74 + C5741 * C78 + C2402 * C75 + C5734 * C79 +
                     C2404 * C76 + C2396 * C80) *
                        C108 +
                    (C2400 * C109 + C5741 * C162 + C2402 * C110 + C5734 * C163 +
                     C2404 * C111 + C2396 * C164) *
                        C5575) *
                       C3245 +
                   ((C2400 * C617 + C5741 * C620 + C2402 * C618 + C5734 * C621 +
                     C2404 * C619 + C2396 * C622) *
                        C108 +
                    (C2400 * C655 + C5741 * C721 + C2402 * C656 + C5734 * C722 +
                     C2404 * C657 + C2396 * C723) *
                        C5575) *
                       C5613) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C184 * C74 + C190 + C190 + C5575 * C185) * C5741 +
                    (C184 * C75 + C191 + C191 + C5575 * C186) * C5734 +
                    (C184 * C76 + C192 + C192 + C5575 * C187) * C2396) *
                       C3245 +
                   ((C184 * C617 + C754 + C754 + C5575 * C750) * C5741 +
                    (C184 * C618 + C755 + C755 + C5575 * C751) * C5734 +
                    (C184 * C619 + C756 + C756 + C5575 * C752) * C2396) *
                       C5613) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3302 * C74 + C3245 * C136 + C3303 * C617 + C5613 * C689) * C108 +
           (C3302 * C109 + C3245 * C211 + C3303 * C655 + C5613 * C782) *
               C5575) *
              C5741 +
          ((C3302 * C75 + C3245 * C137 + C3303 * C618 + C5613 * C690) * C108 +
           (C3302 * C110 + C3245 * C212 + C3303 * C656 + C5613 * C783) *
               C5575) *
              C5734 +
          ((C3302 * C76 + C3245 * C138 + C3303 * C619 + C5613 * C691) * C108 +
           (C3302 * C111 + C3245 * C213 + C3303 * C657 + C5613 * C784) *
               C5575) *
              C2396) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezx[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C2400 * C74 + C5741 * C78 + C2402 * C75 + C5734 * C79 +
                    C2404 * C76 + C2396 * C80) *
                       C3302 +
                   (C2400 * C136 + C5741 * C233 + C2402 * C137 + C5734 * C234 +
                    C2404 * C138 + C2396 * C235) *
                       C3245 +
                   (C2400 * C617 + C5741 * C620 + C2402 * C618 + C5734 * C621 +
                    C2404 * C619 + C2396 * C622) *
                       C3303 +
                   (C2400 * C689 + C5741 * C811 + C2402 * C690 + C5734 * C812 +
                    C2404 * C691 + C2396 * C813) *
                       C5613) *
                  C5575 * C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezy[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C108 * C74 + C5575 * C109) * C3302 +
                    (C108 * C136 + C5575 * C255) * C3245 +
                    (C108 * C617 + C5575 * C655) * C3303 +
                    (C108 * C689 + C5575 * C840) * C5613) *
                       C5741 +
                   ((C108 * C75 + C5575 * C110) * C3302 +
                    (C108 * C137 + C5575 * C256) * C3245 +
                    (C108 * C618 + C5575 * C656) * C3303 +
                    (C108 * C690 + C5575 * C841) * C5613) *
                       C5734 +
                   ((C108 * C76 + C5575 * C111) * C3302 +
                    (C108 * C138 + C5575 * C257) * C3245 +
                    (C108 * C619 + C5575 * C657) * C3303 +
                    (C108 * C691 + C5575 * C842) * C5613) *
                       C2396) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezz[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((C3460 * C74 + C3463 + C3463 + C3245 * C278 + C3461 * C617 +
                    C3464 + C3464 + C5613 * C871) *
                       C5575 * C5741 +
                   (C3460 * C75 + C3465 + C3465 + C3245 * C279 + C3461 * C618 +
                    C3466 + C3466 + C5613 * C872) *
                       C5575 * C5734 +
                   (C3460 * C76 + C3467 + C3467 + C3245 * C280 + C3461 * C619 +
                    C3468 + C3468 + C5613 * C873) *
                       C5575 * C2396) *
                  C63 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexx[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C2660 * C74 + C2665 + C2665 + C2655 * C82 + C2662 * C75 +
                      C2666 + C2666 + C5535 * C83) *
                         C3245 +
                     (C2660 * C617 + C2928 + C2928 + C2655 * C623 +
                      C2662 * C618 + C2929 + C2929 + C5535 * C624) *
                         C5613) *
                        C5720 +
                    ((C2660 * C323 + C2667 + C2667 + C2655 * C329 +
                      C2662 * C324 + C2668 + C2668 + C5535 * C330) *
                         C3245 +
                     (C2660 * C1394 + C2930 + C2930 + C2655 * C1398 +
                      C2662 * C2924 + C2931 + C2931 + C5535 * C2926) *
                         C5613) *
                        C5589) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C364 * C74 + C5720 * C109 + C365 * C323 + C5589 * C366) * C2661 +
           (C364 * C78 + C5720 * C113 + C365 * C326 + C5589 * C369) * C2655 +
           (C364 * C75 + C5720 * C110 + C365 * C324 + C5589 * C367) * C2663 +
           (C364 * C79 + C5720 * C114 + C365 * C327 + C5589 * C370) * C5535) *
              C3245 +
          ((C364 * C617 + C5720 * C655 + C365 * C1394 + C5589 * C1429) * C2661 +
           (C364 * C620 + C5720 * C658 + C365 * C1396 + C5589 * C1431) * C2655 +
           (C364 * C618 + C5720 * C656 + C365 * C2924 + C5589 * C2965) * C2663 +
           (C364 * C621 + C5720 * C659 + C365 * C2925 + C5589 * C2966) *
               C5535) *
              C5613) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3302 * C74 + C3245 * C136 + C3303 * C617 + C5613 * C689) * C2661 +
           (C3302 * C78 + C3245 * C140 + C3303 * C620 + C5613 * C692) * C2655 +
           (C3302 * C75 + C3245 * C137 + C3303 * C618 + C5613 * C690) * C2663 +
           (C3302 * C79 + C3245 * C141 + C3303 * C621 + C5613 * C693) * C5535) *
              C5720 +
          ((C3302 * C323 + C3245 * C398 + C3303 * C1394 + C5613 * C1459) *
               C2661 +
           (C3302 * C326 + C3245 * C401 + C3303 * C1396 + C5613 * C1461) *
               C2655 +
           (C3302 * C324 + C3245 * C399 + C3303 * C2924 + C5613 * C3001) *
               C2663 +
           (C3302 * C327 + C3245 * C402 + C3303 * C2925 + C5613 * C3002) *
               C5535) *
              C5589) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2661 * C74 + C2655 * C78 + C2663 * C75 + C5535 * C79) * C364 +
           (C2661 * C109 + C2655 * C162 + C2663 * C110 + C5535 * C163) * C5720 +
           (C2661 * C323 + C2655 * C326 + C2663 * C324 + C5535 * C327) * C365 +
           (C2661 * C366 + C2655 * C430 + C2663 * C367 + C5535 * C431) *
               C5589) *
              C3245 +
          ((C2661 * C617 + C2655 * C620 + C2663 * C618 + C5535 * C621) * C364 +
           (C2661 * C655 + C2655 * C721 + C2663 * C656 + C5535 * C722) * C5720 +
           (C2661 * C1394 + C2655 * C1396 + C2663 * C2924 + C5535 * C2925) *
               C365 +
           (C2661 * C1429 + C2655 * C1489 + C2663 * C2965 + C5535 * C3037) *
               C5589) *
              C5613) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C459 * C74 + C465 + C465 + C5720 * C185 + C460 * C323 +
                      C466 + C466 + C5589 * C461) *
                         C2655 +
                     (C459 * C75 + C467 + C467 + C5720 * C186 + C460 * C324 +
                      C468 + C468 + C5589 * C462) *
                         C5535) *
                        C3245 +
                    ((C459 * C617 + C2061 + C2061 + C5720 * C750 +
                      C460 * C1394 + C2062 + C2062 + C5589 * C1517) *
                         C2655 +
                     (C459 * C618 + C3639 + C3639 + C5720 * C751 +
                      C460 * C2924 + C3640 + C3640 + C5589 * C3072) *
                         C5535) *
                        C5613) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3302 * C74 + C3245 * C136 + C3303 * C617 + C5613 * C689) * C364 +
           (C3302 * C109 + C3245 * C211 + C3303 * C655 + C5613 * C782) * C5720 +
           (C3302 * C323 + C3245 * C398 + C3303 * C1394 + C5613 * C1459) *
               C365 +
           (C3302 * C366 + C3245 * C496 + C3303 * C1429 + C5613 * C1548) *
               C5589) *
              C2655 +
          ((C3302 * C75 + C3245 * C137 + C3303 * C618 + C5613 * C690) * C364 +
           (C3302 * C110 + C3245 * C212 + C3303 * C656 + C5613 * C783) * C5720 +
           (C3302 * C324 + C3245 * C399 + C3303 * C2924 + C5613 * C3001) *
               C365 +
           (C3302 * C367 + C3245 * C497 + C3303 * C2965 + C5613 * C3111) *
               C5589) *
              C5535) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2661 * C74 + C2655 * C78 + C2663 * C75 + C5535 * C79) * C3302 +
           (C2661 * C136 + C2655 * C233 + C2663 * C137 + C5535 * C234) * C3245 +
           (C2661 * C617 + C2655 * C620 + C2663 * C618 + C5535 * C621) * C3303 +
           (C2661 * C689 + C2655 * C811 + C2663 * C690 + C5535 * C812) *
               C5613) *
              C5720 +
          ((C2661 * C323 + C2655 * C326 + C2663 * C324 + C5535 * C327) * C3302 +
           (C2661 * C398 + C2655 * C525 + C2663 * C399 + C5535 * C526) * C3245 +
           (C2661 * C1394 + C2655 * C1396 + C2663 * C2924 + C5535 * C2925) *
               C3303 +
           (C2661 * C1459 + C2655 * C1576 + C2663 * C3001 + C5535 * C3146) *
               C5613) *
              C5589) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C364 * C74 + C5720 * C109 + C365 * C323 + C5589 * C366) * C3302 +
           (C364 * C136 + C5720 * C255 + C365 * C398 + C5589 * C554) * C3245 +
           (C364 * C617 + C5720 * C655 + C365 * C1394 + C5589 * C1429) * C3303 +
           (C364 * C689 + C5720 * C840 + C365 * C1459 + C5589 * C1604) *
               C5613) *
              C2655 +
          ((C364 * C75 + C5720 * C110 + C365 * C324 + C5589 * C367) * C3302 +
           (C364 * C137 + C5720 * C256 + C365 * C399 + C5589 * C555) * C3245 +
           (C364 * C618 + C5720 * C656 + C365 * C2924 + C5589 * C2965) * C3303 +
           (C364 * C690 + C5720 * C841 + C365 * C3001 + C5589 * C3181) *
               C5613) *
              C5535) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezz[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C3460 * C74 + C3463 + C3463 + C3245 * C278 +
                      C3461 * C617 + C3464 + C3464 + C5613 * C871) *
                         C5720 +
                     (C3460 * C323 + C3777 + C3777 + C3245 * C583 +
                      C3461 * C1394 + C3778 + C3778 + C5613 * C1632) *
                         C5589) *
                        C2655 +
                    ((C3460 * C75 + C3465 + C3465 + C3245 * C279 +
                      C3461 * C618 + C3466 + C3466 + C5613 * C872) *
                         C5720 +
                     (C3460 * C324 + C3779 + C3779 + C3245 * C584 +
                      C3461 * C2924 + C3780 + C3780 + C5613 * C3216) *
                         C5589) *
                        C5535) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eexx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((C2660 * C74 + C2665 + C2665 + C2655 * C82 + C2662 * C75 +
                     C2666 + C2666 + C5535 * C83) *
                        C5743 +
                    (C2660 * C617 + C2928 + C2928 + C2655 * C623 +
                     C2662 * C618 + C2929 + C2929 + C5535 * C624) *
                        C5740 +
                    (C2660 * C1667 + C3810 + C3810 + C2655 * C1671 +
                     C2662 * C1668 + C3811 + C3811 + C5535 * C1672) *
                        C3808) *
                   C5575 * C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eexy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C108 * C74 + C5575 * C109) * C2661 +
                     (C108 * C78 + C5575 * C113) * C2655 +
                     (C108 * C75 + C5575 * C110) * C2663 +
                     (C108 * C79 + C5575 * C114) * C5535) *
                        C5743 +
                    ((C108 * C617 + C5575 * C655) * C2661 +
                     (C108 * C620 + C5575 * C658) * C2655 +
                     (C108 * C618 + C5575 * C656) * C2663 +
                     (C108 * C621 + C5575 * C659) * C5535) *
                        C5740 +
                    ((C108 * C1667 + C5575 * C1703) * C2661 +
                     (C108 * C1669 + C5575 * C1705) * C2655 +
                     (C108 * C1668 + C5575 * C1704) * C2663 +
                     (C108 * C1670 + C5575 * C1706) * C5535) *
                        C3808) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eexz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((C3863 * C74 + C5743 * C136 + C3864 * C617 + C5740 * C689 +
                     C3865 * C1667 + C3808 * C1736) *
                        C2661 +
                    (C3863 * C78 + C5743 * C140 + C3864 * C620 + C5740 * C692 +
                     C3865 * C1669 + C3808 * C1738) *
                        C2655 +
                    (C3863 * C75 + C5743 * C137 + C3864 * C618 + C5740 * C690 +
                     C3865 * C1668 + C3808 * C1737) *
                        C2663 +
                    (C3863 * C79 + C5743 * C141 + C3864 * C621 + C5740 * C693 +
                     C3865 * C1670 + C3808 * C1739) *
                        C5535) *
                   C5575 * C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2661 * C74 + C2655 * C78 + C2663 * C75 + C5535 * C79) * C108 +
           (C2661 * C109 + C2655 * C162 + C2663 * C110 + C5535 * C163) *
               C5575) *
              C5743 +
          ((C2661 * C617 + C2655 * C620 + C2663 * C618 + C5535 * C621) * C108 +
           (C2661 * C655 + C2655 * C721 + C2663 * C656 + C5535 * C722) *
               C5575) *
              C5740 +
          ((C2661 * C1667 + C2655 * C1669 + C2663 * C1668 + C5535 * C1670) *
               C108 +
           (C2661 * C1703 + C2655 * C1766 + C2663 * C1704 + C5535 * C1767) *
               C5575) *
              C3808) *
         C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C184 * C74 + C190 + C190 + C5575 * C185) * C2655 +
                     (C184 * C75 + C191 + C191 + C5575 * C186) * C5535) *
                        C5743 +
                    ((C184 * C617 + C754 + C754 + C5575 * C750) * C2655 +
                     (C184 * C618 + C755 + C755 + C5575 * C751) * C5535) *
                        C5740 +
                    ((C184 * C1667 + C1797 + C1797 + C5575 * C1794) * C2655 +
                     (C184 * C1668 + C1798 + C1798 + C5575 * C1795) * C5535) *
                        C3808) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C3863 * C74 + C5743 * C136 + C3864 * C617 + C5740 * C689 +
                      C3865 * C1667 + C3808 * C1736) *
                         C108 +
                     (C3863 * C109 + C5743 * C211 + C3864 * C655 +
                      C5740 * C782 + C3865 * C1703 + C3808 * C1824) *
                         C5575) *
                        C2655 +
                    ((C3863 * C75 + C5743 * C137 + C3864 * C618 + C5740 * C690 +
                      C3865 * C1668 + C3808 * C1737) *
                         C108 +
                     (C3863 * C110 + C5743 * C212 + C3864 * C656 +
                      C5740 * C783 + C3865 * C1704 + C3808 * C1825) *
                         C5575) *
                        C5535) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C2661 * C74 + C2655 * C78 + C2663 * C75 + C5535 * C79) * C3863 +
          (C2661 * C136 + C2655 * C233 + C2663 * C137 + C5535 * C234) * C5743 +
          (C2661 * C617 + C2655 * C620 + C2663 * C618 + C5535 * C621) * C3864 +
          (C2661 * C689 + C2655 * C811 + C2663 * C690 + C5535 * C812) * C5740 +
          (C2661 * C1667 + C2655 * C1669 + C2663 * C1668 + C5535 * C1670) *
              C3865 +
          (C2661 * C1736 + C2655 * C1852 + C2663 * C1737 + C5535 * C1853) *
              C3808) *
         C5575 * C63 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C108 * C74 + C5575 * C109) * C3863 +
                     (C108 * C136 + C5575 * C255) * C5743 +
                     (C108 * C617 + C5575 * C655) * C3864 +
                     (C108 * C689 + C5575 * C840) * C5740 +
                     (C108 * C1667 + C5575 * C1703) * C3865 +
                     (C108 * C1736 + C5575 * C1880) * C3808) *
                        C2655 +
                    ((C108 * C75 + C5575 * C110) * C3863 +
                     (C108 * C137 + C5575 * C256) * C5743 +
                     (C108 * C618 + C5575 * C656) * C3864 +
                     (C108 * C690 + C5575 * C841) * C5740 +
                     (C108 * C1668 + C5575 * C1704) * C3865 +
                     (C108 * C1737 + C5575 * C1881) * C3808) *
                        C5535) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eezz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((C4022 * C74 + C4026 + C4026 + C5743 * C278 + C4023 * C617 +
                     C4027 + C4027 + C5740 * C871 + C4024 * C1667 + C4028 +
                     C4028 + C3808 * C1911) *
                        C5575 * C2655 +
                    (C4022 * C75 + C4029 + C4029 + C5743 * C279 + C4023 * C618 +
                     C4030 + C4030 + C5740 * C872 + C4024 * C1668 + C4031 +
                     C4031 + C3808 * C1912) *
                        C5575 * C5535) *
                   C63 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eexx[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (C66 * C74 + C87 + C87 + C57 * C82 + C68 * C75 + C88 + C88 +
                    C58 * C83 + C70 * C76 + C89 + C89 + C59 * C84 + C72 * C77 +
                    C90 + C90 + C60 * C85) *
                   C5601 * C5575 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C911 * C74 + C922 + C922 + C5710 * C82 + C913 * C75 +
                     C923 + C923 + C5535 * C83) *
                        C5601 * C908 +
                    (C911 * C323 + C924 + C924 + C5710 * C329 + C913 * C324 +
                     C925 + C925 + C5535 * C330) *
                        C5601 * C909 +
                    (C911 * C915 + C926 + C926 + C5710 * C919 + C913 * C916 +
                     C927 + C927 + C5535 * C920) *
                        C5601 * C910) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eexy[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C108 * C74 + C5575 * C109) * C67 +
                    (C108 * C78 + C5575 * C113) * C57 +
                    (C108 * C75 + C5575 * C110) * C69 +
                    (C108 * C79 + C5575 * C114) * C58 +
                    (C108 * C76 + C5575 * C111) * C71 +
                    (C108 * C80 + C5575 * C115) * C59 +
                    (C108 * C77 + C5575 * C112) * C73 +
                    (C108 * C81 + C5575 * C116) * C60) *
                   C5601 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C953 * C74 + C908 * C109 + C954 * C323 + C909 * C366 +
                     C955 * C915 + C910 * C956) *
                        C4861 +
                    (C953 * C78 + C908 * C113 + C954 * C326 + C909 * C369 +
                     C955 * C917 + C910 * C958) *
                        C5710 +
                    (C953 * C75 + C908 * C110 + C954 * C324 + C909 * C367 +
                     C955 * C916 + C910 * C957) *
                        C4851 +
                    (C953 * C79 + C908 * C114 + C954 * C327 + C909 * C370 +
                     C955 * C918 + C910 * C959) *
                        C5535) *
                   C5601 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eexz[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C135 * C74 + C5601 * C136) * C67 +
                    (C135 * C78 + C5601 * C140) * C57 +
                    (C135 * C75 + C5601 * C137) * C69 +
                    (C135 * C79 + C5601 * C141) * C58 +
                    (C135 * C76 + C5601 * C138) * C71 +
                    (C135 * C80 + C5601 * C142) * C59 +
                    (C135 * C77 + C5601 * C139) * C73 +
                    (C135 * C81 + C5601 * C143) * C60) *
                   C5575 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C135 * C74 + C5601 * C136) * C4861 +
                     (C135 * C78 + C5601 * C140) * C5710 +
                     (C135 * C75 + C5601 * C137) * C4851 +
                     (C135 * C79 + C5601 * C141) * C5535) *
                        C908 +
                    ((C135 * C323 + C5601 * C398) * C4861 +
                     (C135 * C326 + C5601 * C401) * C5710 +
                     (C135 * C324 + C5601 * C399) * C4851 +
                     (C135 * C327 + C5601 * C402) * C5535) *
                        C909 +
                    ((C135 * C915 + C5601 * C986) * C4861 +
                     (C135 * C917 + C5601 * C988) * C5710 +
                     (C135 * C916 + C5601 * C987) * C4851 +
                     (C135 * C918 + C5601 * C989) * C5535) *
                        C910) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C67 * C74 + C57 * C78 + C69 * C75 + C58 * C79 + C71 * C76 +
           C59 * C80 + C73 * C77 + C60 * C81) *
              C108 +
          (C67 * C109 + C57 * C162 + C69 * C110 + C58 * C163 + C71 * C111 +
           C59 * C164 + C73 * C112 + C60 * C165) *
              C5575) *
         C5601 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C4861 * C74 + C5710 * C78 + C4851 * C75 + C5535 * C79) * C953 +
          (C4861 * C109 + C5710 * C162 + C4851 * C110 + C5535 * C163) * C908 +
          (C4861 * C323 + C5710 * C326 + C4851 * C324 + C5535 * C327) * C954 +
          (C4861 * C366 + C5710 * C430 + C4851 * C367 + C5535 * C431) * C909 +
          (C4861 * C915 + C5710 * C917 + C4851 * C916 + C5535 * C918) * C955 +
          (C4861 * C956 + C5710 * C1016 + C4851 * C957 + C5535 * C1017) *
              C910) *
         C5601 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C184 * C74 + C190 + C190 + C5575 * C185) * C57 +
          (C184 * C75 + C191 + C191 + C5575 * C186) * C58 +
          (C184 * C76 + C192 + C192 + C5575 * C187) * C59 +
          (C184 * C77 + C193 + C193 + C5575 * C188) * C60) *
         C5601 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1044 * C74 + C1050 + C1050 + C908 * C185 + C1045 * C323 + C1051 +
           C1051 + C909 * C461 + C1046 * C915 + C1052 + C1052 + C910 * C1047) *
              C5710 +
          (C1044 * C75 + C1053 + C1053 + C908 * C186 + C1045 * C324 + C1054 +
           C1054 + C909 * C462 + C1046 * C916 + C1055 + C1055 + C910 * C1048) *
              C5535) *
         C5601 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C135 * C74 + C5601 * C136) * C108 +
                     (C135 * C109 + C5601 * C211) * C5575) *
                        C57 +
                    ((C135 * C75 + C5601 * C137) * C108 +
                     (C135 * C110 + C5601 * C212) * C5575) *
                        C58 +
                    ((C135 * C76 + C5601 * C138) * C108 +
                     (C135 * C111 + C5601 * C213) * C5575) *
                        C59 +
                    ((C135 * C77 + C5601 * C139) * C108 +
                     (C135 * C112 + C5601 * C214) * C5575) *
                        C60) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C135 * C74 + C5601 * C136) * C953 +
                     (C135 * C109 + C5601 * C211) * C908 +
                     (C135 * C323 + C5601 * C398) * C954 +
                     (C135 * C366 + C5601 * C496) * C909 +
                     (C135 * C915 + C5601 * C986) * C955 +
                     (C135 * C956 + C5601 * C1081) * C910) *
                        C5710 +
                    ((C135 * C75 + C5601 * C137) * C953 +
                     (C135 * C110 + C5601 * C212) * C908 +
                     (C135 * C324 + C5601 * C399) * C954 +
                     (C135 * C367 + C5601 * C497) * C909 +
                     (C135 * C916 + C5601 * C987) * C955 +
                     (C135 * C957 + C5601 * C1082) * C910) *
                        C5535) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C67 * C74 + C57 * C78 + C69 * C75 + C58 * C79 + C71 * C76 +
           C59 * C80 + C73 * C77 + C60 * C81) *
              C135 +
          (C67 * C136 + C57 * C233 + C69 * C137 + C58 * C234 + C71 * C138 +
           C59 * C235 + C73 * C139 + C60 * C236) *
              C5601) *
         C5575 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4861 * C74 + C5710 * C78 + C4851 * C75 + C5535 * C79) * C135 +
           (C4861 * C136 + C5710 * C233 + C4851 * C137 + C5535 * C234) *
               C5601) *
              C908 +
          ((C4861 * C323 + C5710 * C326 + C4851 * C324 + C5535 * C327) * C135 +
           (C4861 * C398 + C5710 * C525 + C4851 * C399 + C5535 * C526) *
               C5601) *
              C909 +
          ((C4861 * C915 + C5710 * C917 + C4851 * C916 + C5535 * C918) * C135 +
           (C4861 * C986 + C5710 * C1109 + C4851 * C987 + C5535 * C1110) *
               C5601) *
              C910) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C108 * C74 + C5575 * C109) * C135 +
                     (C108 * C136 + C5575 * C255) * C5601) *
                        C57 +
                    ((C108 * C75 + C5575 * C110) * C135 +
                     (C108 * C137 + C5575 * C256) * C5601) *
                        C58 +
                    ((C108 * C76 + C5575 * C111) * C135 +
                     (C108 * C138 + C5575 * C257) * C5601) *
                        C59 +
                    ((C108 * C77 + C5575 * C112) * C135 +
                     (C108 * C139 + C5575 * C258) * C5601) *
                        C60) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C953 * C74 + C908 * C109 + C954 * C323 + C909 * C366 +
                      C955 * C915 + C910 * C956) *
                         C135 +
                     (C953 * C136 + C908 * C255 + C954 * C398 + C909 * C554 +
                      C955 * C986 + C910 * C1137) *
                         C5601) *
                        C5710 +
                    ((C953 * C75 + C908 * C110 + C954 * C324 + C909 * C367 +
                      C955 * C916 + C910 * C957) *
                         C135 +
                     (C953 * C137 + C908 * C256 + C954 * C399 + C909 * C555 +
                      C955 * C987 + C910 * C1138) *
                         C5601) *
                        C5535) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eezz[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C277 * C74 + C283 + C283 + C5601 * C278) * C5575 * C57 +
                    (C277 * C75 + C284 + C284 + C5601 * C279) * C5575 * C58 +
                    (C277 * C76 + C285 + C285 + C5601 * C280) * C5575 * C59 +
                    (C277 * C77 + C286 + C286 + C5601 * C281) * C5575 * C60) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C277 * C74 + C283 + C283 + C5601 * C278) * C908 +
                     (C277 * C323 + C587 + C587 + C5601 * C583) * C909 +
                     (C277 * C915 + C1168 + C1168 + C5601 * C1165) * C910) *
                        C5710 +
                    ((C277 * C75 + C284 + C284 + C5601 * C279) * C908 +
                     (C277 * C324 + C588 + C588 + C5601 * C584) * C909 +
                     (C277 * C916 + C1169 + C1169 + C5601 * C1166) * C910) *
                        C5535) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C317 * C74 + C333 + C333 + C312 * C82 + C319 * C75 + C334 + C334 +
           C313 * C83 + C321 * C76 + C335 + C335 + C314 * C84) *
              C5601 * C5720 +
          (C317 * C323 + C336 + C336 + C312 * C329 + C319 * C324 + C337 + C337 +
           C313 * C330 + C321 * C325 + C338 + C338 + C314 * C331) *
              C5601 * C5589) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1192 * C74 + C1198 + C1198 + C5530 * C82) * C5601 * C1188 +
          (C1192 * C323 + C1199 + C1199 + C5530 * C329) * C5601 * C1189 +
          (C1192 * C915 + C1200 + C1200 + C5530 * C919) * C5601 * C1190 +
          (C1192 * C1194 + C1201 + C1201 + C5530 * C1196) * C5601 * C1191) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C364 * C74 + C5720 * C109 + C365 * C323 + C5589 * C366) * C318 +
          (C364 * C78 + C5720 * C113 + C365 * C326 + C5589 * C369) * C312 +
          (C364 * C75 + C5720 * C110 + C365 * C324 + C5589 * C367) * C320 +
          (C364 * C79 + C5720 * C114 + C365 * C327 + C5589 * C370) * C313 +
          (C364 * C76 + C5720 * C111 + C365 * C325 + C5589 * C368) * C322 +
          (C364 * C80 + C5720 * C115 + C365 * C328 + C5589 * C371) * C314) *
         C5601 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1219 * C74 + C1188 * C109 + C1220 * C323 + C1189 * C366 +
           C1221 * C915 + C1190 * C956 + C1222 * C1194 + C1191 * C1223) *
              C1193 +
          (C1219 * C78 + C1188 * C113 + C1220 * C326 + C1189 * C369 +
           C1221 * C917 + C1190 * C958 + C1222 * C1195 + C1191 * C1224) *
              C5530) *
         C5601 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexz[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C135 * C74 + C5601 * C136) * C318 +
                     (C135 * C78 + C5601 * C140) * C312 +
                     (C135 * C75 + C5601 * C137) * C320 +
                     (C135 * C79 + C5601 * C141) * C313 +
                     (C135 * C76 + C5601 * C138) * C322 +
                     (C135 * C80 + C5601 * C142) * C314) *
                        C5720 +
                    ((C135 * C323 + C5601 * C398) * C318 +
                     (C135 * C326 + C5601 * C401) * C312 +
                     (C135 * C324 + C5601 * C399) * C320 +
                     (C135 * C327 + C5601 * C402) * C313 +
                     (C135 * C325 + C5601 * C400) * C322 +
                     (C135 * C328 + C5601 * C403) * C314) *
                        C5589) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C135 * C74 + C5601 * C136) * C1193 +
                     (C135 * C78 + C5601 * C140) * C5530) *
                        C1188 +
                    ((C135 * C323 + C5601 * C398) * C1193 +
                     (C135 * C326 + C5601 * C401) * C5530) *
                        C1189 +
                    ((C135 * C915 + C5601 * C986) * C1193 +
                     (C135 * C917 + C5601 * C988) * C5530) *
                        C1190 +
                    ((C135 * C1194 + C5601 * C1243) * C1193 +
                     (C135 * C1195 + C5601 * C1244) * C5530) *
                        C1191) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C318 * C74 + C312 * C78 + C320 * C75 + C313 * C79 +
                     C322 * C76 + C314 * C80) *
                        C364 +
                    (C318 * C109 + C312 * C162 + C320 * C110 + C313 * C163 +
                     C322 * C111 + C314 * C164) *
                        C5720 +
                    (C318 * C323 + C312 * C326 + C320 * C324 + C313 * C327 +
                     C322 * C325 + C314 * C328) *
                        C365 +
                    (C318 * C366 + C312 * C430 + C320 * C367 + C313 * C431 +
                     C322 * C368 + C314 * C432) *
                        C5589) *
                   C5601 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C1193 * C74 + C5530 * C78) * C1219 +
                    (C1193 * C109 + C5530 * C162) * C1188 +
                    (C1193 * C323 + C5530 * C326) * C1220 +
                    (C1193 * C366 + C5530 * C430) * C1189 +
                    (C1193 * C915 + C5530 * C917) * C1221 +
                    (C1193 * C956 + C5530 * C1016) * C1190 +
                    (C1193 * C1194 + C5530 * C1195) * C1222 +
                    (C1193 * C1223 + C5530 * C1263) * C1191) *
                   C5601 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C459 * C74 + C465 + C465 + C5720 * C185 + C460 * C323 + C466 + C466 +
           C5589 * C461) *
              C312 +
          (C459 * C75 + C467 + C467 + C5720 * C186 + C460 * C324 + C468 + C468 +
           C5589 * C462) *
              C313 +
          (C459 * C76 + C469 + C469 + C5720 * C187 + C460 * C325 + C470 + C470 +
           C5589 * C463) *
              C314) *
         C5601 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (C1282 * C74 + C1288 + C1288 + C1188 * C185 + C1283 * C323 + C1289 +
          C1289 + C1189 * C461 + C1284 * C915 + C1290 + C1290 + C1190 * C1047 +
          C1285 * C1194 + C1291 + C1291 + C1191 * C1286) *
         C5530 * C5601 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyz[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C135 * C74 + C5601 * C136) * C364 +
                     (C135 * C109 + C5601 * C211) * C5720 +
                     (C135 * C323 + C5601 * C398) * C365 +
                     (C135 * C366 + C5601 * C496) * C5589) *
                        C312 +
                    ((C135 * C75 + C5601 * C137) * C364 +
                     (C135 * C110 + C5601 * C212) * C5720 +
                     (C135 * C324 + C5601 * C399) * C365 +
                     (C135 * C367 + C5601 * C497) * C5589) *
                        C313 +
                    ((C135 * C76 + C5601 * C138) * C364 +
                     (C135 * C111 + C5601 * C213) * C5720 +
                     (C135 * C325 + C5601 * C400) * C365 +
                     (C135 * C368 + C5601 * C498) * C5589) *
                        C314) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C135 * C74 + C5601 * C136) * C1219 +
                    (C135 * C109 + C5601 * C211) * C1188 +
                    (C135 * C323 + C5601 * C398) * C1220 +
                    (C135 * C366 + C5601 * C496) * C1189 +
                    (C135 * C915 + C5601 * C986) * C1221 +
                    (C135 * C956 + C5601 * C1081) * C1190 +
                    (C135 * C1194 + C5601 * C1243) * C1222 +
                    (C135 * C1223 + C5601 * C1309) * C1191) *
                   C5530 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eezx[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C318 * C74 + C312 * C78 + C320 * C75 + C313 * C79 +
                      C322 * C76 + C314 * C80) *
                         C135 +
                     (C318 * C136 + C312 * C233 + C320 * C137 + C313 * C234 +
                      C322 * C138 + C314 * C235) *
                         C5601) *
                        C5720 +
                    ((C318 * C323 + C312 * C326 + C320 * C324 + C313 * C327 +
                      C322 * C325 + C314 * C328) *
                         C135 +
                     (C318 * C398 + C312 * C525 + C320 * C399 + C313 * C526 +
                      C322 * C400 + C314 * C527) *
                         C5601) *
                        C5589) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1193 * C74 + C5530 * C78) * C135 +
                     (C1193 * C136 + C5530 * C233) * C5601) *
                        C1188 +
                    ((C1193 * C323 + C5530 * C326) * C135 +
                     (C1193 * C398 + C5530 * C525) * C5601) *
                        C1189 +
                    ((C1193 * C915 + C5530 * C917) * C135 +
                     (C1193 * C986 + C5530 * C1109) * C5601) *
                        C1190 +
                    ((C1193 * C1194 + C5530 * C1195) * C135 +
                     (C1193 * C1243 + C5530 * C1328) * C5601) *
                        C1191) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eezy[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C364 * C74 + C5720 * C109 + C365 * C323 + C5589 * C366) * C135 +
           (C364 * C136 + C5720 * C255 + C365 * C398 + C5589 * C554) * C5601) *
              C312 +
          ((C364 * C75 + C5720 * C110 + C365 * C324 + C5589 * C367) * C135 +
           (C364 * C137 + C5720 * C256 + C365 * C399 + C5589 * C555) * C5601) *
              C313 +
          ((C364 * C76 + C5720 * C111 + C365 * C325 + C5589 * C368) * C135 +
           (C364 * C138 + C5720 * C257 + C365 * C400 + C5589 * C556) * C5601) *
              C314) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1219 * C74 + C1188 * C109 + C1220 * C323 + C1189 * C366 +
           C1221 * C915 + C1190 * C956 + C1222 * C1194 + C1191 * C1223) *
              C135 +
          (C1219 * C136 + C1188 * C255 + C1220 * C398 + C1189 * C554 +
           C1221 * C986 + C1190 * C1137 + C1222 * C1243 + C1191 * C1347) *
              C5601) *
         C5530 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezz[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C277 * C74 + C283 + C283 + C5601 * C278) * C5720 +
                     (C277 * C323 + C587 + C587 + C5601 * C583) * C5589) *
                        C312 +
                    ((C277 * C75 + C284 + C284 + C5601 * C279) * C5720 +
                     (C277 * C324 + C588 + C588 + C5601 * C584) * C5589) *
                        C313 +
                    ((C277 * C76 + C285 + C285 + C5601 * C280) * C5720 +
                     (C277 * C325 + C589 + C589 + C5601 * C585) * C5589) *
                        C314) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C277 * C74 + C283 + C283 + C5601 * C278) * C1188 +
                    (C277 * C323 + C587 + C587 + C5601 * C583) * C1189 +
                    (C277 * C915 + C1168 + C1168 + C5601 * C1165) * C1190 +
                    (C277 * C1194 + C1368 + C1368 + C5601 * C1366) * C1191) *
                   C5530 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C317 * C74 + C333 + C333 + C312 * C82 + C319 * C75 + C334 + C334 +
           C313 * C83 + C321 * C76 + C335 + C335 + C314 * C84) *
              C5721 +
          (C317 * C617 + C627 + C627 + C312 * C623 + C319 * C618 + C628 + C628 +
           C313 * C624 + C321 * C619 + C629 + C629 + C314 * C625) *
              C5613) *
         C5575 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1192 * C74 + C1198 + C1198 + C5530 * C82) * C5721 +
           (C1192 * C617 + C1401 + C1401 + C5530 * C623) * C5613) *
              C908 +
          ((C1192 * C323 + C1199 + C1199 + C5530 * C329) * C5721 +
           (C1192 * C1394 + C1402 + C1402 + C5530 * C1398) * C5613) *
              C909 +
          ((C1192 * C915 + C1200 + C1200 + C5530 * C919) * C5721 +
           (C1192 * C1395 + C1403 + C1403 + C5530 * C1399) * C5613) *
              C910) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C108 * C74 + C5575 * C109) * C318 +
                     (C108 * C78 + C5575 * C113) * C312 +
                     (C108 * C75 + C5575 * C110) * C320 +
                     (C108 * C79 + C5575 * C114) * C313 +
                     (C108 * C76 + C5575 * C111) * C322 +
                     (C108 * C80 + C5575 * C115) * C314) *
                        C5721 +
                    ((C108 * C617 + C5575 * C655) * C318 +
                     (C108 * C620 + C5575 * C658) * C312 +
                     (C108 * C618 + C5575 * C656) * C320 +
                     (C108 * C621 + C5575 * C659) * C313 +
                     (C108 * C619 + C5575 * C657) * C322 +
                     (C108 * C622 + C5575 * C660) * C314) *
                        C5613) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C953 * C74 + C908 * C109 + C954 * C323 + C909 * C366 +
                      C955 * C915 + C910 * C956) *
                         C1193 +
                     (C953 * C78 + C908 * C113 + C954 * C326 + C909 * C369 +
                      C955 * C917 + C910 * C958) *
                         C5530) *
                        C5721 +
                    ((C953 * C617 + C908 * C655 + C954 * C1394 + C909 * C1429 +
                      C955 * C1395 + C910 * C1430) *
                         C1193 +
                     (C953 * C620 + C908 * C658 + C954 * C1396 + C909 * C1431 +
                      C955 * C1397 + C910 * C1432) *
                         C5530) *
                        C5613) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C687 * C74 + C5721 * C136 + C688 * C617 + C5613 * C689) * C318 +
          (C687 * C78 + C5721 * C140 + C688 * C620 + C5613 * C692) * C312 +
          (C687 * C75 + C5721 * C137 + C688 * C618 + C5613 * C690) * C320 +
          (C687 * C79 + C5721 * C141 + C688 * C621 + C5613 * C693) * C313 +
          (C687 * C76 + C5721 * C138 + C688 * C619 + C5613 * C691) * C322 +
          (C687 * C80 + C5721 * C142 + C688 * C622 + C5613 * C694) * C314) *
         C5575 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C687 * C74 + C5721 * C136 + C688 * C617 + C5613 * C689) * C1193 +
           (C687 * C78 + C5721 * C140 + C688 * C620 + C5613 * C692) * C5530) *
              C908 +
          ((C687 * C323 + C5721 * C398 + C688 * C1394 + C5613 * C1459) * C1193 +
           (C687 * C326 + C5721 * C401 + C688 * C1396 + C5613 * C1461) *
               C5530) *
              C909 +
          ((C687 * C915 + C5721 * C986 + C688 * C1395 + C5613 * C1460) * C1193 +
           (C687 * C917 + C5721 * C988 + C688 * C1397 + C5613 * C1462) *
               C5530) *
              C910) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyx[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C318 * C74 + C312 * C78 + C320 * C75 + C313 * C79 +
                      C322 * C76 + C314 * C80) *
                         C108 +
                     (C318 * C109 + C312 * C162 + C320 * C110 + C313 * C163 +
                      C322 * C111 + C314 * C164) *
                         C5575) *
                        C5721 +
                    ((C318 * C617 + C312 * C620 + C320 * C618 + C313 * C621 +
                      C322 * C619 + C314 * C622) *
                         C108 +
                     (C318 * C655 + C312 * C721 + C320 * C656 + C313 * C722 +
                      C322 * C657 + C314 * C723) *
                         C5575) *
                        C5613) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1193 * C74 + C5530 * C78) * C953 +
                     (C1193 * C109 + C5530 * C162) * C908 +
                     (C1193 * C323 + C5530 * C326) * C954 +
                     (C1193 * C366 + C5530 * C430) * C909 +
                     (C1193 * C915 + C5530 * C917) * C955 +
                     (C1193 * C956 + C5530 * C1016) * C910) *
                        C5721 +
                    ((C1193 * C617 + C5530 * C620) * C953 +
                     (C1193 * C655 + C5530 * C721) * C908 +
                     (C1193 * C1394 + C5530 * C1396) * C954 +
                     (C1193 * C1429 + C5530 * C1489) * C909 +
                     (C1193 * C1395 + C5530 * C1397) * C955 +
                     (C1193 * C1430 + C5530 * C1490) * C910) *
                        C5613) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C184 * C74 + C190 + C190 + C5575 * C185) * C312 +
           (C184 * C75 + C191 + C191 + C5575 * C186) * C313 +
           (C184 * C76 + C192 + C192 + C5575 * C187) * C314) *
              C5721 +
          ((C184 * C617 + C754 + C754 + C5575 * C750) * C312 +
           (C184 * C618 + C755 + C755 + C5575 * C751) * C313 +
           (C184 * C619 + C756 + C756 + C5575 * C752) * C314) *
              C5613) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1044 * C74 + C1050 + C1050 + C908 * C185 + C1045 * C323 + C1051 +
           C1051 + C909 * C461 + C1046 * C915 + C1052 + C1052 + C910 * C1047) *
              C5530 * C5721 +
          (C1044 * C617 + C1520 + C1520 + C908 * C750 + C1045 * C1394 + C1521 +
           C1521 + C909 * C1517 + C1046 * C1395 + C1522 + C1522 +
           C910 * C1518) *
              C5530 * C5613) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C687 * C74 + C5721 * C136 + C688 * C617 + C5613 * C689) * C108 +
           (C687 * C109 + C5721 * C211 + C688 * C655 + C5613 * C782) * C5575) *
              C312 +
          ((C687 * C75 + C5721 * C137 + C688 * C618 + C5613 * C690) * C108 +
           (C687 * C110 + C5721 * C212 + C688 * C656 + C5613 * C783) * C5575) *
              C313 +
          ((C687 * C76 + C5721 * C138 + C688 * C619 + C5613 * C691) * C108 +
           (C687 * C111 + C5721 * C213 + C688 * C657 + C5613 * C784) * C5575) *
              C314) *
         C63 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C687 * C74 + C5721 * C136 + C688 * C617 + C5613 * C689) * C953 +
          (C687 * C109 + C5721 * C211 + C688 * C655 + C5613 * C782) * C908 +
          (C687 * C323 + C5721 * C398 + C688 * C1394 + C5613 * C1459) * C954 +
          (C687 * C366 + C5721 * C496 + C688 * C1429 + C5613 * C1548) * C909 +
          (C687 * C915 + C5721 * C986 + C688 * C1395 + C5613 * C1460) * C955 +
          (C687 * C956 + C5721 * C1081 + C688 * C1430 + C5613 * C1549) * C910) *
         C5530 * C63 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezx[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C318 * C74 + C312 * C78 + C320 * C75 + C313 * C79 +
                     C322 * C76 + C314 * C80) *
                        C687 +
                    (C318 * C136 + C312 * C233 + C320 * C137 + C313 * C234 +
                     C322 * C138 + C314 * C235) *
                        C5721 +
                    (C318 * C617 + C312 * C620 + C320 * C618 + C313 * C621 +
                     C322 * C619 + C314 * C622) *
                        C688 +
                    (C318 * C689 + C312 * C811 + C320 * C690 + C313 * C812 +
                     C322 * C691 + C314 * C813) *
                        C5613) *
                   C5575 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1193 * C74 + C5530 * C78) * C687 +
                     (C1193 * C136 + C5530 * C233) * C5721 +
                     (C1193 * C617 + C5530 * C620) * C688 +
                     (C1193 * C689 + C5530 * C811) * C5613) *
                        C908 +
                    ((C1193 * C323 + C5530 * C326) * C687 +
                     (C1193 * C398 + C5530 * C525) * C5721 +
                     (C1193 * C1394 + C5530 * C1396) * C688 +
                     (C1193 * C1459 + C5530 * C1576) * C5613) *
                        C909 +
                    ((C1193 * C915 + C5530 * C917) * C687 +
                     (C1193 * C986 + C5530 * C1109) * C5721 +
                     (C1193 * C1395 + C5530 * C1397) * C688 +
                     (C1193 * C1460 + C5530 * C1577) * C5613) *
                        C910) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eezy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C108 * C74 + C5575 * C109) * C687 +
                     (C108 * C136 + C5575 * C255) * C5721 +
                     (C108 * C617 + C5575 * C655) * C688 +
                     (C108 * C689 + C5575 * C840) * C5613) *
                        C312 +
                    ((C108 * C75 + C5575 * C110) * C687 +
                     (C108 * C137 + C5575 * C256) * C5721 +
                     (C108 * C618 + C5575 * C656) * C688 +
                     (C108 * C690 + C5575 * C841) * C5613) *
                        C313 +
                    ((C108 * C76 + C5575 * C111) * C687 +
                     (C108 * C138 + C5575 * C257) * C5721 +
                     (C108 * C619 + C5575 * C657) * C688 +
                     (C108 * C691 + C5575 * C842) * C5613) *
                        C314) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C953 * C74 + C908 * C109 + C954 * C323 + C909 * C366 +
                     C955 * C915 + C910 * C956) *
                        C687 +
                    (C953 * C136 + C908 * C255 + C954 * C398 + C909 * C554 +
                     C955 * C986 + C910 * C1137) *
                        C5721 +
                    (C953 * C617 + C908 * C655 + C954 * C1394 + C909 * C1429 +
                     C955 * C1395 + C910 * C1430) *
                        C688 +
                    (C953 * C689 + C908 * C840 + C954 * C1459 + C909 * C1604 +
                     C955 * C1460 + C910 * C1605) *
                        C5613) *
                   C5530 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eezz[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C869 * C74 + C875 + C875 + C5721 * C278 + C870 * C617 +
                     C876 + C876 + C5613 * C871) *
                        C5575 * C312 +
                    (C869 * C75 + C877 + C877 + C5721 * C279 + C870 * C618 +
                     C878 + C878 + C5613 * C872) *
                        C5575 * C313 +
                    (C869 * C76 + C879 + C879 + C5721 * C280 + C870 * C619 +
                     C880 + C880 + C5613 * C873) *
                        C5575 * C314) *
                   C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C869 * C74 + C875 + C875 + C5721 * C278 + C870 * C617 +
                     C876 + C876 + C5613 * C871) *
                        C908 +
                    (C869 * C323 + C1635 + C1635 + C5721 * C583 + C870 * C1394 +
                     C1636 + C1636 + C5613 * C1632) *
                        C909 +
                    (C869 * C915 + C1637 + C1637 + C5721 * C1165 +
                     C870 * C1395 + C1638 + C1638 + C5613 * C1633) *
                        C910) *
                   C5530 * C63 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
}
