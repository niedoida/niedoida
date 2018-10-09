/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_pdss_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1200_13(const double ae,
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
    const double C4682 = 0 * ae;
    const double C4681 = ae * be;
    const double C4680 = 0 * be;
    const double C4679 = ae + be;
    const double C4678 = 0 * be;
    const double C4677 = xA - xB;
    const double C4735 = 0 * be;
    const double C4734 = yA - yB;
    const double C4750 = 0 * be;
    const double C4749 = zA - zB;
    const double C4793 = 0 * ae;
    const double C4789 = 0 * be;
    const double C4839 = 0 * ae;
    const double C4835 = 0 * be;
    const double C4870 = p + q;
    const double C4869 = p * q;
    const double C4876 = ce + de;
    const double C4875 = xP - xQ;
    const double C4874 = bs[2];
    const double C4885 = ae * ce;
    const double C4881 = bs[3];
    const double C4894 = bs[4];
    const double C4913 = yP - yQ;
    const double C4928 = zP - zQ;
    const double C71 = bs[0];
    const double C5493 = ce * de;
    const double C4687 = C4682 / C4679;
    const double C4684 = 2 * C4679;
    const double C4683 = std::pow(C4679, 2);
    const double C4686 = C4681 * C4677;
    const double C4685 = C4677 * C4680;
    const double C5311 = C4677 * be;
    const double C5310 = C4677 * ae;
    const double C5309 = std::pow(C4677, 2);
    const double C4736 = C4681 * C4734;
    const double C4790 = C4734 * C4735;
    const double C5341 = std::pow(C4734, 2);
    const double C5390 = C4734 * be;
    const double C5389 = C4734 * ae;
    const double C4751 = C4681 * C4749;
    const double C4836 = C4749 * C4750;
    const double C5352 = std::pow(C4749, 2);
    const double C5416 = C4749 * be;
    const double C5415 = C4749 * ae;
    const double C4798 = C4793 / C4679;
    const double C4844 = C4839 / C4679;
    const double C4871 = 2 * C4869;
    const double C4878 = C4876 * C4679;
    const double C4886 = C4875 * ae;
    const double C4884 = std::pow(C4875, 2);
    const double C4882 = C4875 * ce;
    const double C4916 = C4875 * C4913;
    const double C4915 = C4913 * ce;
    const double C4945 = C4913 * C4875;
    const double C4944 = C4913 * ae;
    const double C4958 = std::pow(C4913, 2);
    const double C4931 = C4875 * C4928;
    const double C4930 = C4928 * ce;
    const double C4967 = C4913 * C4928;
    const double C4977 = C4928 * C4875;
    const double C4976 = C4928 * ae;
    const double C4990 = C4928 * C4913;
    const double C4999 = std::pow(C4928, 2);
    const double C61 = std::exp(-(std::pow(xC - xD, 2) * C5493) / C4876);
    const double C64 = std::exp(-(std::pow(zC - zD, 2) * C5493) / C4876);
    const double C65 = std::exp(-(std::pow(yC - yD, 2) * C5493) / C4876);
    const double C5319 = std::pow(C4684, -1);
    const double C5495 = std::pow(C4684, -2);
    const double C4688 = 2 * C4683;
    const double C5492 = 4 * C4683;
    const double C4689 = C4685 / C4679;
    const double C5312 = C5309 * C4681;
    const double C4795 = C4790 / C4679;
    const double C5342 = C5341 * C4681;
    const double C4841 = C4836 / C4679;
    const double C5353 = C5352 * C4681;
    const double C4873 = C4871 / C4870;
    const double C83 =
        (-((std::pow(xP - xQ, 2) * bs[2] * std::pow(C4871 / C4870, 2) -
            (bs[1] * C4871) / C4870) *
           ae * ce) /
         (ce + de)) /
        C4679;
    const double C72 = -(C4875 * bs[1] * C4871) / C4870;
    const double C316 = -(C4913 * bs[1] * C4871) / C4870;
    const double C620 = -(C4928 * bs[1] * C4871) / C4870;
    const double C4889 = C4881 * C4886;
    const double C4900 = C4894 * C4886;
    const double C75 = (-(bs[1] * C4886 * C4871) / C4870) / C4679;
    const double C4896 = C4884 * C4894;
    const double C4888 = C4881 * C4882;
    const double C4897 = C4894 * C4882;
    const double C79 = (bs[1] * C4882 * C4871) / (C4870 * C4876);
    const double C4918 = C4916 * ae;
    const double C4917 = C4881 * C4915;
    const double C4923 = C4894 * C4915;
    const double C106 = (bs[1] * C4915 * C4871) / (C4870 * C4876);
    const double C4947 = C4945 * ae;
    const double C4946 = C4881 * C4944;
    const double C4952 = C4894 * C4944;
    const double C160 = (-(bs[1] * C4944 * C4871) / C4870) / C4679;
    const double C4960 = C4958 * C4894;
    const double C4933 = C4931 * ae;
    const double C4932 = C4881 * C4930;
    const double C4938 = C4894 * C4930;
    const double C133 = (bs[1] * C4930 * C4871) / (C4870 * C4876);
    const double C4968 = C4967 * ae;
    const double C4979 = C4977 * ae;
    const double C4978 = C4881 * C4976;
    const double C4984 = C4894 * C4976;
    const double C231 = (-(bs[1] * C4976 * C4871) / C4870) / C4679;
    const double C4991 = C4990 * ae;
    const double C5001 = C4999 * C4894;
    const double C70 = -(2 * ce * de * (xC - xD) * C61) / (ce + de);
    const double C132 = -(2 * ce * de * (zC - zD) * C64) / (ce + de);
    const double C105 = -(2 * ce * de * (yC - yD) * C65) / (ce + de);
    const double C4694 = C4680 / C4688;
    const double C4692 = C4678 / C4688;
    const double C4792 = C4735 / C4688;
    const double C4796 = C4789 / C4688;
    const double C4838 = C4750 / C4688;
    const double C4842 = C4835 / C4688;
    const double C4691 = 0 - C4689;
    const double C5313 = C5312 / C4679;
    const double C4799 = 0 - C4795;
    const double C5343 = C5342 / C4679;
    const double C4845 = 0 - C4841;
    const double C5354 = C5353 / C4679;
    const double C4877 = std::pow(C4873, 2);
    const double C4880 = -C4873;
    const double C4895 = std::pow(C4873, 4);
    const double C4920 = C4918 * ce;
    const double C4949 = C4947 * ce;
    const double C4935 = C4933 * ce;
    const double C4969 = C4968 * ce;
    const double C4981 = C4979 * ce;
    const double C4992 = C4991 * ce;
    const double C4696 = C4691 * ae;
    const double C5314 = -C5313;
    const double C4802 = C4799 * ae;
    const double C5344 = -C5343;
    const double C4848 = C4845 * ae;
    const double C5355 = -C5354;
    const double C4883 = C4874 * C4877;
    const double C84 =
        (-(C4877 * C4874 * C4875 * ae * ce) / C4876) / C4679 -
        (ae * C4877 * C4874 * C4875 * ce) / C4878 -
        (C4875 *
         (C4874 * C4877 + std::pow(C4875, 2) * bs[3] * std::pow(-C4873, 3)) *
         ae * ce) /
            C4878;
    const double C110 =
        (-(C4877 * C4874 * C4875 * (yP - yQ) * ae * ce) / C4876) / C4679;
    const double C137 =
        (-(C4877 * C4874 * C4875 * (zP - zQ) * ae * ce) / C4876) / C4679;
    const double C164 =
        (-(C4877 * C4874 * C4913 * C4875 * ae * ce) / C4876) / C4679;
    const double C186 =
        (-((std::pow(C4913, 2) * C4874 * C4877 - (bs[1] * C4871) / C4870) *
           C4885) /
         C4876) /
        C4679;
    const double C208 =
        (-(C4877 * C4874 * C4913 * C4928 * ae * ce) / C4876) / C4679;
    const double C235 =
        (-(C4877 * C4874 * C4928 * C4875 * ae * ce) / C4876) / C4679;
    const double C257 =
        (-(C4877 * C4874 * C4928 * C4913 * ae * ce) / C4876) / C4679;
    const double C279 =
        (-((std::pow(C4928, 2) * C4874 * C4877 - (bs[1] * C4871) / C4870) *
           C4885) /
         C4876) /
        C4679;
    const double C76 = (C4875 * C4877 * C4874 * C4886) / C4679 -
                       (ae * bs[1] * C4871) / (C4870 * C4679);
    const double C80 = (ce * bs[1] * C4871) / (C4870 * C4876) -
                       (C4875 * C4877 * C4874 * C4882) / C4876;
    const double C107 = -(C4875 * C4877 * C4874 * C4915) / C4876;
    const double C134 = -(C4875 * C4877 * C4874 * C4930) / C4876;
    const double C161 = (C4875 * C4877 * C4874 * C4944) / C4679;
    const double C232 = (C4875 * C4877 * C4874 * C4976) / C4679;
    const double C320 = (C4913 * C4877 * C4874 * C4886) / C4679;
    const double C322 = -(C4913 * C4877 * C4874 * C4882) / C4876;
    const double C358 = (ce * bs[1] * C4871) / (C4870 * C4876) -
                        (C4913 * C4877 * C4874 * C4915) / C4876;
    const double C392 = -(C4913 * C4877 * C4874 * C4930) / C4876;
    const double C429 = (C4913 * C4877 * C4874 * C4944) / C4679 -
                        (ae * bs[1] * C4871) / (C4870 * C4679);
    const double C523 = (C4913 * C4877 * C4874 * C4976) / C4679;
    const double C624 = (C4928 * C4877 * C4874 * C4886) / C4679;
    const double C626 = -(C4928 * C4877 * C4874 * C4882) / C4876;
    const double C662 = -(C4928 * C4877 * C4874 * C4915) / C4876;
    const double C696 = (ce * bs[1] * C4871) / (C4870 * C4876) -
                        (C4928 * C4877 * C4874 * C4930) / C4876;
    const double C730 = (C4928 * C4877 * C4874 * C4944) / C4679;
    const double C827 = (C4928 * C4877 * C4874 * C4976) / C4679 -
                        (ae * bs[1] * C4871) / (C4870 * C4679);
    const double C4887 = std::pow(C4880, 3);
    const double C4904 = C4895 * C4900;
    const double C4903 = C4895 * C4897;
    const double C4902 = C4896 * C4895;
    const double C4925 = C4895 * C4923;
    const double C4940 = C4895 * C4938;
    const double C4954 = C4895 * C4952;
    const double C4961 = C4960 * C4895;
    const double C4986 = C4895 * C4984;
    const double C5002 = C5001 * C4895;
    const double C4922 = C4894 * C4920;
    const double C4951 = C4894 * C4949;
    const double C4937 = C4894 * C4935;
    const double C4971 = C4894 * C4969;
    const double C4983 = C4894 * C4981;
    const double C4994 = C4894 * C4992;
    const double C4699 = C4696 / C4679;
    const double C5315 = std::exp(C5314);
    const double C4804 = C4802 / C4679;
    const double C5345 = std::exp(C5344);
    const double C4850 = C4848 / C4679;
    const double C5356 = std::exp(C5355);
    const double C73 = C4883 * C4884 - (bs[1] * C4871) / C4870;
    const double C317 = C4913 * C4875 * C4883;
    const double C318 = C4883 * C4958 - (bs[1] * C4871) / C4870;
    const double C621 = C4928 * C4875 * C4883;
    const double C622 = C4883 * C4999 - (bs[1] * C4871) / C4870;
    const double C1443 = C4928 * C4913 * C4883;
    const double C4891 = C4887 * C4889;
    const double C4890 = C4887 * C4888;
    const double C4893 = C4881 * C4887;
    const double C4919 = C4887 * C4917;
    const double C4934 = C4887 * C4932;
    const double C4948 = C4887 * C4946;
    const double C4980 = C4887 * C4978;
    const double C111 =
        (-(C4875 * C4887 * C4881 * C4875 * C4913 * ae * ce) / C4876) / C4679 -
        (ae * C4877 * C4874 * C4913 * ce) / C4878;
    const double C138 =
        (-(C4875 * C4887 * C4881 * C4875 * C4928 * ae * ce) / C4876) / C4679 -
        (ae * C4877 * C4874 * C4928 * ce) / C4878;
    const double C165 =
        (-(C4875 * C4887 * C4881 * C4913 * C4875 * ae * ce) / C4876) / C4679 -
        (C4877 * C4874 * C4913 * ae * ce) / C4878;
    const double C187 =
        (-(C4875 * (C4883 + std::pow(C4913, 2) * C4881 * C4887) * C4885) /
         C4876) /
        C4679;
    const double C209 =
        (-(C4875 * C4887 * C4881 * C4913 * C4928 * ae * ce) / C4876) / C4679;
    const double C210 = (-(C4895 * C4894 * C4969 * C4884) / C4876) / C4679 -
                        (C4887 * C4881 * C4969) / C4878;
    const double C236 =
        (-(C4875 * C4887 * C4881 * C4928 * C4875 * ae * ce) / C4876) / C4679 -
        (C4877 * C4874 * C4928 * ae * ce) / C4878;
    const double C258 =
        (-(C4875 * C4887 * C4881 * C4928 * C4913 * ae * ce) / C4876) / C4679;
    const double C259 = (-(C4895 * C4894 * C4992 * C4884) / C4876) / C4679 -
                        (C4887 * C4881 * C4992) / C4878;
    const double C280 =
        (-(C4875 * (C4883 + std::pow(C4928, 2) * C4881 * C4887) * C4885) /
         C4876) /
        C4679;
    const double C328 =
        (-(C4913 * (C4883 + C4884 * C4881 * C4887) * C4885) / C4876) / C4679;
    const double C362 = (-(C4913 * C4887 * C4881 * C4920) / C4876) / C4679 -
                        (C4877 * C4874 * C4886 * ce) / C4878;
    const double C396 = (-(C4913 * C4887 * C4881 * C4935) / C4876) / C4679;
    const double C433 = (-(C4913 * C4887 * C4881 * C4949) / C4876) / C4679 -
                        (ae * C4877 * C4874 * C4882) / C4878;
    const double C463 =
        (-(C4877 * C4874 * C4944 * ce) / C4876) / C4679 -
        (ae * C4877 * C4874 * C4915) / C4878 -
        (C4913 * (C4883 + C4958 * C4881 * C4887) * C4885) / C4878;
    const double C493 = (-(C4913 * C4887 * C4881 * C4969) / C4876) / C4679 -
                        (ae * C4877 * C4874 * C4930) / C4878;
    const double C527 = (-(C4913 * C4887 * C4881 * C4981) / C4876) / C4679;
    const double C557 = (-(C4913 * C4887 * C4881 * C4992) / C4876) / C4679 -
                        (C4877 * C4874 * C4976 * ce) / C4878;
    const double C587 =
        (-(C4913 * (C4883 + C4999 * C4881 * C4887) * C4885) / C4876) / C4679;
    const double C632 =
        (-(C4928 * (C4883 + C4884 * C4881 * C4887) * C4885) / C4876) / C4679;
    const double C666 = (-(C4928 * C4887 * C4881 * C4920) / C4876) / C4679;
    const double C700 = (-(C4928 * C4887 * C4881 * C4935) / C4876) / C4679 -
                        (C4877 * C4874 * C4886 * ce) / C4878;
    const double C734 = (-(C4928 * C4887 * C4881 * C4949) / C4876) / C4679;
    const double C764 =
        (-(C4928 * (C4883 + C4958 * C4881 * C4887) * C4885) / C4876) / C4679;
    const double C794 = (-(C4928 * C4887 * C4881 * C4969) / C4876) / C4679 -
                        (C4877 * C4874 * C4944 * ce) / C4878;
    const double C831 = (-(C4928 * C4887 * C4881 * C4981) / C4876) / C4679 -
                        (ae * C4877 * C4874 * C4882) / C4878;
    const double C861 = (-(C4928 * C4887 * C4881 * C4992) / C4876) / C4679 -
                        (ae * C4877 * C4874 * C4915) / C4878;
    const double C891 =
        (-(C4877 * C4874 * C4976 * ce) / C4876) / C4679 -
        (ae * C4877 * C4874 * C4930) / C4878 -
        (C4928 * (C4883 + C4999 * C4881 * C4887) * C4885) / C4878;
    const double C4907 = C4875 * C4904;
    const double C5134 = C4913 * C4904;
    const double C4906 = C4875 * C4903;
    const double C5139 = C4913 * C4903;
    const double C1450 =
        (-(C4928 * C4913 * C4904 * ce) / C4876) / C4679 -
        (ae * C4928 * C4913 * C4903) / C4878 -
        (C4875 * C4928 * C4913 *
         (C4894 * C4895 + C4884 * bs[5] * std::pow(C4880, 5)) * C4885) /
            C4878;
    const double C5025 = C4875 * C4925;
    const double C5122 = C4913 * C4925;
    const double C5031 = C4875 * C4940;
    const double C5142 = C4913 * C4940;
    const double C5162 = C4928 * C4940;
    const double C5026 = C4875 * C4954;
    const double C5124 = C4913 * C4954;
    const double C5040 = C4875 * C4986;
    const double C5143 = C4913 * C4986;
    const double C5164 = C4928 * C4986;
    const double C4924 = C4895 * C4922;
    const double C4953 = C4895 * C4951;
    const double C4939 = C4895 * C4937;
    const double C4972 = C4895 * C4971;
    const double C4985 = C4895 * C4983;
    const double C4995 = C4895 * C4994;
    const double C4701 = C4699 - C4692;
    const double C4690 = C4686 * C5315;
    const double C5316 = C5315 * C5310;
    const double C5320 = C5319 * C5315;
    const double C5489 = C5315 * C5311;
    const double C5486 = C5315 / C4684;
    const double C1775 = C5495 * C5315;
    const double C4806 = C4804 - C4796;
    const double C4737 = C4736 * C5345;
    const double C159 = -(2 * C4681 * (yA - yB) * C5345) / C4679;
    const double C5391 = C5345 * C5389;
    const double C5394 = C5319 * C5345;
    const double C5499 = C5345 * C5390;
    const double C5494 = C5345 / C4684;
    const double C313 = C5495 * C5345;
    const double C4852 = C4850 - C4842;
    const double C4752 = C4751 * C5356;
    const double C230 = -(2 * C4681 * (zA - zB) * C5356) / C4679;
    const double C5417 = C5356 * C5415;
    const double C5420 = C5319 * C5356;
    const double C5503 = C5356 * C5416;
    const double C5496 = C5356 / C4684;
    const double C619 = C5495 * C5356;
    const double C77 =
        (C4877 * C4874 * C4886 + C4875 * (C4875 * C4891 + C4883 * ae) +
         C4875 * C4883 * ae) /
        C4679;
    const double C321 = (C4913 * (C4875 * C4891 + C4883 * ae)) / C4679;
    const double C324 = (C4877 * C4874 * C4886 + C4891 * C4958) / C4679;
    const double C625 = (C4928 * (C4875 * C4891 + C4883 * ae)) / C4679;
    const double C628 = (C4877 * C4874 * C4886 + C4891 * C4999) / C4679;
    const double C1445 = (C4928 * C4913 * C4891) / C4679;
    const double C2016 =
        (2 * C4913 * C4891 + C4913 * (C4891 + C4904 * C4958)) / C4679;
    const double C3006 = (C4928 * (C4891 + C4904 * C4958)) / C4679;
    const double C3724 =
        (2 * C4928 * C4891 + C4928 * (C4891 + C4904 * C4999)) / C4679;
    const double C85 =
        (-(ae * (C4875 * C4890 + C4883 * ce)) / C4876) / C4679 -
        ((C4883 + C4884 * C4881 * C4887) * C4885) / C4878 -
        ((C4875 * C4891 + C4883 * ae) * ce) / C4878 +
        C4875 * ((-(C4891 * ce) / C4876) / C4679 - (ae * C4890) / C4878 -
                 (C4875 * (C4881 * C4887 + C4884 * bs[4] * std::pow(C4873, 4)) *
                  C4885) /
                     C4878);
    const double C81 = -(C4875 * (C4875 * C4890 + C4883 * ce) +
                         C4877 * C4874 * C4882 + C4875 * C4883 * ce) /
                       C4876;
    const double C323 = -(C4913 * (C4875 * C4890 + C4883 * ce)) / C4876;
    const double C326 = -(C4890 * C4958 + C4877 * C4874 * C4882) / C4876;
    const double C627 = -(C4928 * (C4875 * C4890 + C4883 * ce)) / C4876;
    const double C630 = -(C4890 * C4999 + C4877 * C4874 * C4882) / C4876;
    const double C1447 = -(C4928 * C4913 * C4890) / C4876;
    const double C2017 = (-2 * C4913 * C4890) / C4876 -
                         (C4913 * (C4903 * C4958 + C4890)) / C4876;
    const double C3007 = -(C4928 * (C4903 * C4958 + C4890)) / C4876;
    const double C3725 = (-2 * C4928 * C4890) / C4876 -
                         (C4928 * (C4903 * C4999 + C4890)) / C4876;
    const double C4901 = C4893 * ae;
    const double C4899 = C4875 * C4893;
    const double C4898 = C4893 * ce;
    const double C4905 = C4893 + C4902;
    const double C4962 = C4893 + C4961;
    const double C5003 = C4893 + C5002;
    const double C5123 = C4913 * C4893;
    const double C5163 = C4928 * C4893;
    const double C188 =
        (-((C4893 + C4958 * C4894 * C4895) * C4885 * C4884) / C4876) / C4679 -
        ((C4883 + C4958 * C4881 * C4887) * C4885) / C4878;
    const double C281 =
        (-((C4893 + C4999 * C4894 * C4895) * C4885 * C4884) / C4876) / C4679 -
        ((C4883 + C4999 * C4881 * C4887) * C4885) / C4878;
    const double C74 = 2 * C4875 * C4883 + C4875 * (C4883 + C4893 * C4884);
    const double C929 = C4913 * (C4883 + C4893 * C4884);
    const double C1183 = C4928 * (C4883 + C4893 * C4884);
    const double C2015 = 2 * C4913 * C4883 + C4913 * (C4883 + C4893 * C4958);
    const double C3005 = C4928 * (C4883 + C4893 * C4958);
    const double C3723 = 2 * C4928 * C4883 + C4928 * (C4883 + C4893 * C4999);
    const double C112 =
        (-(ae * C4875 * C4919) / C4876) / C4679 -
        (C4887 * C4881 * C4920) / C4878 +
        C4875 * ((-(C4875 * C4895 * C4894 * C4920) / C4876) / C4679 -
                 (ae * C4919) / C4878);
    const double C108 = -(C4919 * C4884 + C4877 * C4874 * C4915) / C4876;
    const double C109 = (-2 * C4875 * C4919) / C4876 -
                        (C4875 * (C4925 * C4884 + C4919)) / C4876;
    const double C359 = -(C4913 * C4875 * C4919 + C4875 * C4883 * ce) / C4876;
    const double C360 = -(C4913 * (C4913 * C4919 + C4883 * ce) +
                          C4877 * C4874 * C4915 + C4913 * C4883 * ce) /
                        C4876;
    const double C663 = -(C4928 * C4875 * C4919) / C4876;
    const double C664 = -(C4919 * C4999 + C4877 * C4874 * C4915) / C4876;
    const double C959 =
        -(C4913 * (C4925 * C4884 + C4919) + (C4883 + C4893 * C4884) * ce) /
        C4876;
    const double C1213 = -(C4928 * (C4925 * C4884 + C4919)) / C4876;
    const double C1485 = -(C4928 * (C4913 * C4919 + C4883 * ce)) / C4876;
    const double C3745 = (-2 * C4928 * C4919) / C4876 -
                         (C4928 * (C4925 * C4999 + C4919)) / C4876;
    const double C139 =
        (-(ae * C4875 * C4934) / C4876) / C4679 -
        (C4887 * C4881 * C4935) / C4878 +
        C4875 * ((-(C4875 * C4895 * C4894 * C4935) / C4876) / C4679 -
                 (ae * C4934) / C4878);
    const double C135 = -(C4934 * C4884 + C4877 * C4874 * C4930) / C4876;
    const double C136 = (-2 * C4875 * C4934) / C4876 -
                        (C4875 * (C4940 * C4884 + C4934)) / C4876;
    const double C393 = -(C4913 * C4875 * C4934) / C4876;
    const double C394 = -(C4934 * C4958 + C4877 * C4874 * C4930) / C4876;
    const double C697 = -(C4928 * C4875 * C4934 + C4875 * C4883 * ce) / C4876;
    const double C698 = -(C4928 * (C4928 * C4934 + C4883 * ce) +
                          C4877 * C4874 * C4930 + C4928 * C4883 * ce) /
                        C4876;
    const double C987 = -(C4913 * (C4940 * C4884 + C4934)) / C4876;
    const double C1241 =
        -(C4928 * (C4940 * C4884 + C4934) + (C4883 + C4893 * C4884) * ce) /
        C4876;
    const double C1523 = -(C4928 * C4913 * C4934 + C4913 * C4883 * ce) / C4876;
    const double C2057 = (-2 * C4913 * C4934) / C4876 -
                         (C4913 * (C4940 * C4958 + C4934)) / C4876;
    const double C3063 =
        -(C4928 * (C4940 * C4958 + C4934) + (C4883 + C4893 * C4958) * ce) /
        C4876;
    const double C166 =
        (-(C4875 * C4948 * ce) / C4876) / C4679 -
        (C4887 * C4881 * C4949) / C4878 +
        C4875 * ((-(C4875 * C4895 * C4894 * C4949) / C4876) / C4679 -
                 (C4948 * ce) / C4878);
    const double C162 = (C4877 * C4874 * C4944 + C4948 * C4884) / C4679;
    const double C163 =
        (2 * C4875 * C4948 + C4875 * (C4948 + C4954 * C4884)) / C4679;
    const double C430 =
        (C4877 * C4874 * C4944 + C4913 * (C4913 * C4948 + C4883 * ae) +
         C4913 * C4883 * ae) /
        C4679;
    const double C431 = (C4913 * C4875 * C4948 + C4875 * C4883 * ae) / C4679;
    const double C731 = (C4877 * C4874 * C4944 + C4948 * C4999) / C4679;
    const double C732 = (C4928 * C4875 * C4948) / C4679;
    const double C1017 =
        (C4913 * (C4948 + C4954 * C4884) + (C4883 + C4893 * C4884) * ae) /
        C4679;
    const double C1269 = (C4928 * (C4948 + C4954 * C4884)) / C4679;
    const double C1561 = (C4928 * (C4913 * C4948 + C4883 * ae)) / C4679;
    const double C3785 =
        (2 * C4928 * C4948 + C4928 * (C4948 + C4954 * C4999)) / C4679;
    const double C237 =
        (-(C4875 * C4980 * ce) / C4876) / C4679 -
        (C4887 * C4881 * C4981) / C4878 +
        C4875 * ((-(C4875 * C4895 * C4894 * C4981) / C4876) / C4679 -
                 (C4980 * ce) / C4878);
    const double C233 = (C4877 * C4874 * C4976 + C4980 * C4884) / C4679;
    const double C234 =
        (2 * C4875 * C4980 + C4875 * (C4980 + C4986 * C4884)) / C4679;
    const double C524 = (C4913 * C4875 * C4980) / C4679;
    const double C525 = (C4877 * C4874 * C4976 + C4980 * C4958) / C4679;
    const double C828 =
        (C4877 * C4874 * C4976 + C4928 * (C4928 * C4980 + C4883 * ae) +
         C4928 * C4883 * ae) /
        C4679;
    const double C829 = (C4928 * C4875 * C4980 + C4875 * C4883 * ae) / C4679;
    const double C1099 = (C4913 * (C4980 + C4986 * C4884)) / C4679;
    const double C1353 =
        (C4928 * (C4980 + C4986 * C4884) + (C4883 + C4893 * C4884) * ae) /
        C4679;
    const double C1671 = (C4928 * C4913 * C4980 + C4913 * C4883 * ae) / C4679;
    const double C2139 =
        (2 * C4913 * C4980 + C4913 * (C4980 + C4986 * C4958)) / C4679;
    const double C3173 =
        (C4928 * (C4980 + C4986 * C4958) + (C4883 + C4893 * C4958) * ae) /
        C4679;
    const double C2206 = (C4913 * C4891 + C5134 * C4999) / C4679;
    const double C2207 = -(C5139 * C4999 + C4913 * C4890) / C4876;
    const double C665 = -(C5025 * C4999 + C4875 * C4919) / C4876;
    const double C395 = -(C5031 * C4958 + C4875 * C4934) / C4876;
    const double C1600 =
        (-(C4928 * C5026 * ce) / C4876) / C4679 - (ae * C4928 * C5025) / C4878 -
        (C4913 * C4928 * C4875 *
         (C4894 * C4895 + C4958 * bs[5] * std::pow(C4880, 5)) * C4885) /
            C4878;
    const double C733 = (C4875 * C4948 + C5026 * C4999) / C4679;
    const double C1746 =
        (-(C4913 * C5040 * ce) / C4876) / C4679 - (ae * C4913 * C5031) / C4878 -
        (C4928 * C4913 * C4875 *
         (C4894 * C4895 + C4999 * bs[5] * std::pow(C4880, 5)) * C4885) /
            C4878;
    const double C526 = (C4875 * C4980 + C5040 * C4958) / C4679;
    const double C113 =
        2 * ((-(C4875 * C4924) / C4876) / C4679 - (ae * C4919) / C4878) -
        (ae * (C4925 * C4884 + C4919)) / C4878 +
        C4875 *
            ((-(ae * C4875 * C4925) / C4876) / C4679 - C4924 / C4878 +
             C4875 * ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4920) / C4876) /
                          C4679 -
                      (ae * C4925) / C4878));
    const double C363 =
        C4913 * ((-(C4875 * C4924) / C4876) / C4679 - (ae * C4919) / C4878) -
        ((C4875 * C4891 + C4883 * ae) * ce) / C4878;
    const double C364 =
        (-(C4913 * C4891 * ce) / C4876) / C4679 -
        (C4887 * C4881 * C4920) / C4878 +
        C4913 * ((-(C4913 * C4924) / C4876) / C4679 - (C4891 * ce) / C4878);
    const double C667 =
        C4928 * ((-(C4875 * C4924) / C4876) / C4679 - (ae * C4919) / C4878);
    const double C668 =
        (-(C4924 * C4999) / C4876) / C4679 - (C4887 * C4881 * C4920) / C4878;
    const double C669 =
        (-(C4875 * C4924) / C4876) / C4679 - (ae * C4919) / C4878 +
        ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4920) / C4876) / C4679 -
         (ae * C4925) / C4878) *
            C4999;
    const double C1214 =
        C4928 *
        ((-(ae * C5025) / C4876) / C4679 - C4924 / C4878 +
         C4875 *
             ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4920) / C4876) / C4679 -
              (ae * C4925) / C4878));
    const double C1487 =
        C4928 * ((-(C4913 * C4924) / C4876) / C4679 - (C4891 * ce) / C4878);
    const double C2038 =
        2 * ((-(C4913 * C4924) / C4876) / C4679 - (C4891 * ce) / C4878) -
        ((C4891 + C4904 * C4958) * ce) / C4878 +
        C4913 *
            ((-(C4913 * C4904 * ce) / C4876) / C4679 - C4924 / C4878 +
             C4913 * ((-(C4913 * std::pow(C4880, 5) * bs[5] * C4920) / C4876) /
                          C4679 -
                      (C4904 * ce) / C4878));
    const double C2236 =
        (-(C4913 * C4924) / C4876) / C4679 - (C4891 * ce) / C4878 +
        ((-(C4913 * std::pow(C4880, 5) * bs[5] * C4920) / C4876) / C4679 -
         (C4904 * ce) / C4878) *
            C4999;
    const double C3036 =
        C4928 *
        ((-(C5134 * ce) / C4876) / C4679 - C4924 / C4878 +
         C4913 *
             ((-(C4913 * std::pow(C4880, 5) * bs[5] * C4920) / C4876) / C4679 -
              (C4904 * ce) / C4878));
    const double C3746 =
        (-2 * C4928 * C4924) / C4878 +
        C4928 *
            ((-(std::pow(C4880, 5) * bs[5] * C4920 * C4999) / C4876) / C4679 -
             C4924 / C4878);
    const double C167 =
        2 * ((-(C4875 * C4953) / C4876) / C4679 - (C4948 * ce) / C4878) -
        ((C4948 + C4954 * C4884) * ce) / C4878 +
        C4875 *
            ((-(C4875 * C4954 * ce) / C4876) / C4679 - C4953 / C4878 +
             C4875 * ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4949) / C4876) /
                          C4679 -
                      (C4954 * ce) / C4878));
    const double C434 =
        (-(ae * C4913 * C4890) / C4876) / C4679 -
        (C4887 * C4881 * C4949) / C4878 +
        C4913 * ((-(C4913 * C4953) / C4876) / C4679 - (ae * C4890) / C4878);
    const double C435 =
        C4913 * ((-(C4875 * C4953) / C4876) / C4679 - (C4948 * ce) / C4878) -
        (ae * (C4875 * C4890 + C4883 * ce)) / C4878;
    const double C735 =
        (-(C4953 * C4999) / C4876) / C4679 - (C4887 * C4881 * C4949) / C4878;
    const double C736 =
        C4928 * ((-(C4875 * C4953) / C4876) / C4679 - (C4948 * ce) / C4878);
    const double C737 =
        (-(C4875 * C4953) / C4876) / C4679 - (C4948 * ce) / C4878 +
        ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4949) / C4876) / C4679 -
         (C4954 * ce) / C4878) *
            C4999;
    const double C1270 =
        C4928 *
        ((-(C5026 * ce) / C4876) / C4679 - C4953 / C4878 +
         C4875 *
             ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4949) / C4876) / C4679 -
              (C4954 * ce) / C4878));
    const double C1563 = (-(C4913 * C4928 * C4953) / C4876) / C4679 -
                         (ae * C4928 * C4890) / C4878;
    const double C2082 =
        2 * ((-(C4913 * C4953) / C4876) / C4679 - (ae * C4890) / C4878) -
        (ae * (C4903 * C4958 + C4890)) / C4878 +
        C4913 *
            ((-(ae * C4913 * C4903) / C4876) / C4679 - C4953 / C4878 +
             C4913 * ((-(C4913 * std::pow(C4880, 5) * bs[5] * C4949) / C4876) /
                          C4679 -
                      (ae * C4903) / C4878));
    const double C2292 =
        C4913 *
            ((-(std::pow(C4880, 5) * bs[5] * C4949 * C4999) / C4876) / C4679 -
             C4953 / C4878) -
        (ae * (C4903 * C4999 + C4890)) / C4878;
    const double C3092 =
        (-(ae * C4928 * C5139) / C4876) / C4679 - (C4928 * C4953) / C4878 +
        C4913 *
            ((-(C4913 * C4928 * std::pow(C4880, 5) * bs[5] * C4949) / C4876) /
                 C4679 -
             (ae * C4928 * C4903) / C4878);
    const double C3786 =
        (-2 * C4928 * C4953) / C4878 +
        C4928 *
            ((-(std::pow(C4880, 5) * bs[5] * C4949 * C4999) / C4876) / C4679 -
             C4953 / C4878);
    const double C140 =
        2 * ((-(C4875 * C4939) / C4876) / C4679 - (ae * C4934) / C4878) -
        (ae * (C4940 * C4884 + C4934)) / C4878 +
        C4875 *
            ((-(ae * C4875 * C4940) / C4876) / C4679 - C4939 / C4878 +
             C4875 * ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4935) / C4876) /
                          C4679 -
                      (ae * C4940) / C4878));
    const double C397 =
        C4913 * ((-(C4875 * C4939) / C4876) / C4679 - (ae * C4934) / C4878);
    const double C398 =
        (-(C4939 * C4958) / C4876) / C4679 - (C4887 * C4881 * C4935) / C4878;
    const double C399 =
        (-(C4875 * C4939) / C4876) / C4679 - (ae * C4934) / C4878 +
        ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4935) / C4876) / C4679 -
         (ae * C4940) / C4878) *
            C4958;
    const double C701 =
        C4928 * ((-(C4875 * C4939) / C4876) / C4679 - (ae * C4934) / C4878) -
        ((C4875 * C4891 + C4883 * ae) * ce) / C4878;
    const double C702 =
        (-(C4928 * C4891 * ce) / C4876) / C4679 -
        (C4887 * C4881 * C4935) / C4878 +
        C4928 * ((-(C4928 * C4939) / C4876) / C4679 - (C4891 * ce) / C4878);
    const double C988 =
        C4913 *
        ((-(ae * C5031) / C4876) / C4679 - C4939 / C4878 +
         C4875 *
             ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4935) / C4876) / C4679 -
              (ae * C4940) / C4878));
    const double C1525 = (-(C4928 * C4913 * C4939) / C4876) / C4679 -
                         (C4913 * C4891 * ce) / C4878;
    const double C2058 =
        (-2 * C4913 * C4939) / C4878 +
        C4913 *
            ((-(std::pow(C4880, 5) * bs[5] * C4935 * C4958) / C4876) / C4679 -
             C4939 / C4878);
    const double C2264 =
        (-(C4928 * C5134 * ce) / C4876) / C4679 - (C4913 * C4939) / C4878 +
        C4928 *
            ((-(C4928 * C4913 * std::pow(C4880, 5) * bs[5] * C4935) / C4876) /
                 C4679 -
             (C5134 * ce) / C4878);
    const double C3064 =
        C4928 *
            ((-(std::pow(C4880, 5) * bs[5] * C4935 * C4958) / C4876) / C4679 -
             C4939 / C4878) -
        ((C4891 + C4904 * C4958) * ce) / C4878;
    const double C3766 =
        2 * ((-(C4928 * C4939) / C4876) / C4679 - (C4891 * ce) / C4878) -
        ((C4891 + C4904 * C4999) * ce) / C4878 +
        C4928 *
            ((-(C4928 * C4904 * ce) / C4876) / C4679 - C4939 / C4878 +
             C4928 * ((-(C4928 * std::pow(C4880, 5) * bs[5] * C4935) / C4876) /
                          C4679 -
                      (C4904 * ce) / C4878));
    const double C211 =
        (-2 * C4875 * C4972) / C4878 +
        C4875 *
            ((-(std::pow(C4880, 5) * bs[5] * C4969 * C4884) / C4876) / C4679 -
             C4972 / C4878);
    const double C494 =
        (-(ae * C4913 * C4934) / C4876) / C4679 -
        (C4887 * C4881 * C4969) / C4878 +
        C4913 * ((-(C4913 * C4972) / C4876) / C4679 - (ae * C4934) / C4878);
    const double C495 = (-(C4913 * C4875 * C4972) / C4876) / C4679 -
                        (ae * C4875 * C4934) / C4878;
    const double C496 =
        (-(ae * C4913 * C5031) / C4876) / C4679 - (C4875 * C4972) / C4878 +
        C4913 *
            ((-(C4913 * C4875 * std::pow(C4880, 5) * bs[5] * C4969) / C4876) /
                 C4679 -
             (ae * C5031) / C4878);
    const double C795 =
        (-(C4928 * C4948 * ce) / C4876) / C4679 -
        (C4887 * C4881 * C4969) / C4878 +
        C4928 * ((-(C4928 * C4972) / C4876) / C4679 - (C4948 * ce) / C4878);
    const double C796 = (-(C4928 * C4875 * C4972) / C4876) / C4679 -
                        (C4875 * C4948 * ce) / C4878;
    const double C797 =
        (-(C4928 * C5026 * ce) / C4876) / C4679 - (C4875 * C4972) / C4878 +
        C4928 *
            ((-(C4928 * C4875 * std::pow(C4880, 5) * bs[5] * C4969) / C4876) /
                 C4679 -
             (C5026 * ce) / C4878);
    const double C1072 =
        C4913 *
            ((-(std::pow(C4880, 5) * bs[5] * C4969 * C4884) / C4876) / C4679 -
             C4972 / C4878) -
        (ae * (C4940 * C4884 + C4934)) / C4878;
    const double C1324 =
        C4928 *
            ((-(std::pow(C4880, 5) * bs[5] * C4969 * C4884) / C4876) / C4679 -
             C4972 / C4878) -
        ((C4948 + C4954 * C4884) * ce) / C4878;
    const double C1635 =
        C4913 * ((-(C4928 * C4972) / C4876) / C4679 - (C4948 * ce) / C4878) -
        (ae * (C4928 * C4934 + C4883 * ce)) / C4878;
    const double C2120 =
        2 * ((-(C4913 * C4972) / C4876) / C4679 - (ae * C4934) / C4878) -
        (ae * (C4940 * C4958 + C4934)) / C4878 +
        C4913 *
            ((-(ae * C4913 * C4940) / C4876) / C4679 - C4972 / C4878 +
             C4913 * ((-(C4913 * std::pow(C4880, 5) * bs[5] * C4969) / C4876) /
                          C4679 -
                      (ae * C4940) / C4878));
    const double C3824 =
        2 * ((-(C4928 * C4972) / C4876) / C4679 - (C4948 * ce) / C4878) -
        ((C4948 + C4954 * C4999) * ce) / C4878 +
        C4928 *
            ((-(C4928 * C4954 * ce) / C4876) / C4679 - C4972 / C4878 +
             C4928 * ((-(C4928 * std::pow(C4880, 5) * bs[5] * C4969) / C4876) /
                          C4679 -
                      (C4954 * ce) / C4878));
    const double C238 =
        2 * ((-(C4875 * C4985) / C4876) / C4679 - (C4980 * ce) / C4878) -
        ((C4980 + C4986 * C4884) * ce) / C4878 +
        C4875 *
            ((-(C4875 * C4986 * ce) / C4876) / C4679 - C4985 / C4878 +
             C4875 * ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4981) / C4876) /
                          C4679 -
                      (C4986 * ce) / C4878));
    const double C528 =
        C4913 * ((-(C4875 * C4985) / C4876) / C4679 - (C4980 * ce) / C4878);
    const double C529 =
        (-(C4985 * C4958) / C4876) / C4679 - (C4887 * C4881 * C4981) / C4878;
    const double C530 =
        (-(C4875 * C4985) / C4876) / C4679 - (C4980 * ce) / C4878 +
        ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4981) / C4876) / C4679 -
         (C4986 * ce) / C4878) *
            C4958;
    const double C832 =
        (-(ae * C4928 * C4890) / C4876) / C4679 -
        (C4887 * C4881 * C4981) / C4878 +
        C4928 * ((-(C4928 * C4985) / C4876) / C4679 - (ae * C4890) / C4878);
    const double C833 =
        C4928 * ((-(C4875 * C4985) / C4876) / C4679 - (C4980 * ce) / C4878) -
        (ae * (C4875 * C4890 + C4883 * ce)) / C4878;
    const double C1100 =
        C4913 *
        ((-(C5040 * ce) / C4876) / C4679 - C4985 / C4878 +
         C4875 *
             ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4981) / C4876) / C4679 -
              (C4986 * ce) / C4878));
    const double C1673 = (-(C4928 * C4913 * C4985) / C4876) / C4679 -
                         (ae * C4913 * C4890) / C4878;
    const double C2140 =
        (-2 * C4913 * C4985) / C4878 +
        C4913 *
            ((-(std::pow(C4880, 5) * bs[5] * C4981 * C4958) / C4876) / C4679 -
             C4985 / C4878);
    const double C2374 =
        (-(ae * C4928 * C5139) / C4876) / C4679 - (C4913 * C4985) / C4878 +
        C4928 *
            ((-(C4928 * C4913 * std::pow(C4880, 5) * bs[5] * C4981) / C4876) /
                 C4679 -
             (ae * C5139) / C4878);
    const double C3174 =
        C4928 *
            ((-(std::pow(C4880, 5) * bs[5] * C4981 * C4958) / C4876) / C4679 -
             C4985 / C4878) -
        (ae * (C4903 * C4958 + C4890)) / C4878;
    const double C3848 =
        2 * ((-(C4928 * C4985) / C4876) / C4679 - (ae * C4890) / C4878) -
        (ae * (C4903 * C4999 + C4890)) / C4878 +
        C4928 *
            ((-(ae * C4928 * C4903) / C4876) / C4679 - C4985 / C4878 +
             C4928 * ((-(C4928 * std::pow(C4880, 5) * bs[5] * C4981) / C4876) /
                          C4679 -
                      (ae * C4903) / C4878));
    const double C260 =
        (-2 * C4875 * C4995) / C4878 +
        C4875 *
            ((-(std::pow(C4880, 5) * bs[5] * C4992 * C4884) / C4876) / C4679 -
             C4995 / C4878);
    const double C558 = (-(C4913 * C4875 * C4995) / C4876) / C4679 -
                        (C4875 * C4980 * ce) / C4878;
    const double C559 =
        (-(C4913 * C4980 * ce) / C4876) / C4679 -
        (C4887 * C4881 * C4992) / C4878 +
        C4913 * ((-(C4913 * C4995) / C4876) / C4679 - (C4980 * ce) / C4878);
    const double C560 =
        (-(C4913 * C5040 * ce) / C4876) / C4679 - (C4875 * C4995) / C4878 +
        C4913 *
            ((-(C4913 * C4875 * std::pow(C4880, 5) * bs[5] * C4992) / C4876) /
                 C4679 -
             (C5040 * ce) / C4878);
    const double C862 =
        (-(ae * C4928 * C4919) / C4876) / C4679 -
        (C4887 * C4881 * C4992) / C4878 +
        C4928 * ((-(C4928 * C4995) / C4876) / C4679 - (ae * C4919) / C4878);
    const double C863 = (-(C4928 * C4875 * C4995) / C4876) / C4679 -
                        (ae * C4875 * C4919) / C4878;
    const double C864 =
        (-(ae * C4928 * C5025) / C4876) / C4679 - (C4875 * C4995) / C4878 +
        C4928 *
            ((-(C4928 * C4875 * std::pow(C4880, 5) * bs[5] * C4992) / C4876) /
                 C4679 -
             (ae * C5025) / C4878);
    const double C1127 =
        C4913 *
            ((-(std::pow(C4880, 5) * bs[5] * C4992 * C4884) / C4876) / C4679 -
             C4995 / C4878) -
        ((C4980 + C4986 * C4884) * ce) / C4878;
    const double C1381 =
        C4928 *
            ((-(std::pow(C4880, 5) * bs[5] * C4992 * C4884) / C4876) / C4679 -
             C4995 / C4878) -
        (ae * (C4925 * C4884 + C4919)) / C4878;
    const double C1709 =
        C4928 * ((-(C4913 * C4995) / C4876) / C4679 - (C4980 * ce) / C4878) -
        (ae * (C4913 * C4919 + C4883 * ce)) / C4878;
    const double C2159 =
        2 * ((-(C4913 * C4995) / C4876) / C4679 - (C4980 * ce) / C4878) -
        ((C4980 + C4986 * C4958) * ce) / C4878 +
        C4913 *
            ((-(C4913 * C4986 * ce) / C4876) / C4679 - C4995 / C4878 +
             C4913 * ((-(C4913 * std::pow(C4880, 5) * bs[5] * C4992) / C4876) /
                          C4679 -
                      (C4986 * ce) / C4878));
    const double C3867 =
        2 * ((-(C4928 * C4995) / C4876) / C4679 - (ae * C4919) / C4878) -
        (ae * (C4925 * C4999 + C4919)) / C4878 +
        C4928 *
            ((-(ae * C4928 * C4925) / C4876) / C4679 - C4995 / C4878 +
             C4928 * ((-(C4928 * std::pow(C4880, 5) * bs[5] * C4992) / C4876) /
                          C4679 -
                      (ae * C4925) / C4878));
    const double C4695 = C4690 / C4683;
    const double C4693 = 2 * C4690;
    const double C5490 = C5316 / C4688;
    const double C5488 = C5316 / C4679;
    const double C5487 = C5316 * C5311;
    const double C1774 = (2 * C5319 * C5316) / C4679;
    const double C5491 = C5320 * C5311;
    const double C60 = C5320 / C5492;
    const double C923 = C5320 / C4684;
    const double C5508 = C5489 / C4679;
    const double C1773 = (C5315 * std::pow(C5310, 2)) / C4683 + C5486;
    const double C4794 = C4737 / C4683;
    const double C4791 = 2 * C4737;
    const double C428 =
        ((0 * ae) / C4679 - C4737 / C4683) / C4684 + (0 * ae) / C4679;
    const double C1015 =
        ((C5345 - (C4734 * 2 * C4737) / C4679) * ae) / C4679 - C4735 / C4688;
    const double C1016 = (0 * ae) / C4679 - C4737 / C4683;
    const double C1859 = (-C4735 / C4679) / C4684 -
                         ((C5345 - (C4734 * 2 * C4737) / C4679) * be) / C4679;
    const double C1860 = (-(2 * C4737) / C4679) / C4684 - (0 * be) / C4679;
    const double C5501 = C5391 / C4688;
    const double C5500 = C5391 * C5390;
    const double C5497 = C5391 / C4679;
    const double C312 = (2 * C5319 * C5391) / C4679;
    const double C427 =
        (((C5345 - (C4734 * 2 * C4737) / C4679) * ae) / C4679 - C4735 / C4688) /
            C4684 +
        ((C4734 * ((0 * ae) / C4679 - C4737 / C4683) + C5394) * ae) / C4679;
    const double C5502 = C5394 * C5390;
    const double C2013 = C5394 / C5492;
    const double C2459 = C5394 / C4684;
    const double C5510 = C5499 / C4679;
    const double C311 = (C5345 * std::pow(C5389, 2)) / C4683 + C5494;
    const double C4840 = C4752 / C4683;
    const double C4837 = 2 * C4752;
    const double C826 =
        ((0 * ae) / C4679 - C4752 / C4683) / C4684 + (0 * ae) / C4679;
    const double C1351 =
        ((C5356 - (C4749 * 2 * C4752) / C4679) * ae) / C4679 - C4750 / C4688;
    const double C1352 = (0 * ae) / C4679 - C4752 / C4683;
    const double C3413 = (-C4750 / C4679) / C4684 -
                         ((C5356 - (C4749 * 2 * C4752) / C4679) * be) / C4679;
    const double C3414 = (-(2 * C4752) / C4679) / C4684 - (0 * be) / C4679;
    const double C5505 = C5417 / C4688;
    const double C5504 = C5417 * C5416;
    const double C5498 = C5417 / C4679;
    const double C618 = (2 * C5319 * C5417) / C4679;
    const double C825 =
        (((C5356 - (C4749 * 2 * C4752) / C4679) * ae) / C4679 - C4750 / C4688) /
            C4684 +
        ((C4749 * ((0 * ae) / C4679 - C4752 / C4683) + C5420) * ae) / C4679;
    const double C5506 = C5420 * C5416;
    const double C3722 = C5420 / C5492;
    const double C4221 = C5420 / C4684;
    const double C5513 = C5503 / C4679;
    const double C617 = (C5356 * std::pow(C5415, 2)) / C4683 + C5496;
    const double C4910 = C4907 + C4901;
    const double C5126 = C5124 + C4901;
    const double C5166 = C5164 + C4901;
    const double C1636 =
        C4913 *
            ((-(C4928 * C4875 * std::pow(C4880, 5) * bs[5] * C4969) / C4876) /
                 C4679 -
             (C5026 * ce) / C4878) -
        (ae * (C4928 * C5031 + C4899 * ce)) / C4878;
    const double C1710 =
        C4928 *
            ((-(C4913 * C4875 * std::pow(C4880, 5) * bs[5] * C4992) / C4876) /
                 C4679 -
             (C5040 * ce) / C4878) -
        (ae * (C4913 * C5025 + C4899 * ce)) / C4878;
    const double C361 = -(C4913 * (C4913 * C5025 + C4899 * ce) + C4875 * C4919 +
                          C4913 * C4899 * ce) /
                        C4876;
    const double C432 = (C4875 * C4948 + C4913 * (C4913 * C5026 + C4899 * ae) +
                         C4913 * C4899 * ae) /
                        C4679;
    const double C699 = -(C4928 * (C4928 * C5031 + C4899 * ce) + C4875 * C4934 +
                          C4928 * C4899 * ce) /
                        C4876;
    const double C830 = (C4875 * C4980 + C4928 * (C4928 * C5040 + C4899 * ae) +
                         C4928 * C4899 * ae) /
                        C4679;
    const double C1486 = -(C4928 * (C4913 * C5025 + C4899 * ce)) / C4876;
    const double C1524 = -(C4928 * C4913 * C5031 + C4913 * C4899 * ce) / C4876;
    const double C1562 = (C4928 * (C4913 * C5026 + C4899 * ae)) / C4679;
    const double C1672 = (C4928 * C4913 * C5040 + C4913 * C4899 * ae) / C4679;
    const double C319 = C4875 * C4883 + C4899 * C4958;
    const double C623 = C4875 * C4883 + C4899 * C4999;
    const double C1444 = C4928 * C4913 * C4899;
    const double C4909 = C4906 + C4898;
    const double C5125 = C5122 + C4898;
    const double C5165 = C5162 + C4898;
    const double C2346 =
        C4913 *
            ((-(C4928 * C4954 * ce) / C4876) / C4679 - C4972 / C4878 +
             C4928 * ((-(C4928 * std::pow(C4880, 5) * bs[5] * C4969) / C4876) /
                          C4679 -
                      (C4954 * ce) / C4878)) -
        (ae * (C4928 * (C4928 * C4940 + C4898) + C4934 + C4928 * C4893 * ce)) /
            C4878;
    const double C4908 = C4905 * C4885;
    const double C4963 = C4962 * C4885;
    const double C5004 = C5003 * C4885;
    const double C3146 =
        (-(C4928 * C4972) / C4876) / C4679 - (C4948 * ce) / C4878 -
        (ae * (C4928 * C5142 + C5123 * ce)) / C4878 +
        C4913 *
            (C4913 * ((-(C4928 * std::pow(C4880, 5) * bs[5] * C4969) / C4876) /
                          C4679 -
                      (C4954 * ce) / C4878) -
             (ae * (C4928 * C4940 + C4898)) / C4878);
    const double C2263 = -(C4928 * (C4928 * C5142 + C5123 * ce) +
                           C4913 * C4934 + C4928 * C5123 * ce) /
                         C4876;
    const double C2373 = (C4913 * C4980 + C4928 * (C4928 * C5143 + C5123 * ae) +
                          C4928 * C5123 * ae) /
                         C4679;
    const double C2205 = C4913 * C4883 + C5123 * C4999;
    const double C4698 = C4687 - C4695;
    const double C4697 = C4677 * C4693;
    const double C315 = (-C4693 / C4679) / C4684 - (0 * be) / C4679;
    const double C2014 = -C4693 / C4679;
    const double C5507 = C5487 / C4683;
    const double C5509 = C5491 / C4679;
    const double C309 = -C5508;
    const double C4801 = C4798 - C4794;
    const double C4797 = C4734 * C4791;
    const double C5511 = C5500 / C4683;
    const double C426 =
        (((0 - (C4734 * C4735) / C4679) * ae) / C4679 - (0 * be) / C4688) /
            C4684 +
        ((C4734 * (((C5345 - (C4734 * 2 * C4737) / C4679) * ae) / C4679 -
                   C4735 / C4688) +
          C5497) *
         ae) /
            C4679 +
        (0 * ae) / C4679 - C4737 / C4683;
    const double C5512 = C5502 / C4679;
    const double C1776 = -C5510;
    const double C4847 = C4844 - C4840;
    const double C4843 = C4749 * C4837;
    const double C5514 = C5504 / C4683;
    const double C824 =
        (((0 - (C4749 * C4750) / C4679) * ae) / C4679 - (0 * be) / C4688) /
            C4684 +
        ((C4749 * (((C5356 - (C4749 * 2 * C4752) / C4679) * ae) / C4679 -
                   C4750 / C4688) +
          C5498) *
         ae) /
            C4679 +
        (0 * ae) / C4679 - C4752 / C4683;
    const double C5515 = C5506 / C4679;
    const double C3255 = -C5513;
    const double C365 =
        (-(C4875 * C4924) / C4876) / C4679 - (ae * C4919) / C4878 -
        (C4913 * C4910 * ce) / C4878 +
        C4913 *
            (C4913 * ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4920) / C4876) /
                          C4679 -
                      (ae * C4925) / C4878) -
             (C4910 * ce) / C4878);
    const double C703 =
        (-(C4875 * C4939) / C4876) / C4679 - (ae * C4934) / C4878 -
        (C4928 * C4910 * ce) / C4878 +
        C4928 *
            (C4928 * ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4935) / C4876) /
                          C4679 -
                      (ae * C4940) / C4878) -
             (C4910 * ce) / C4878);
    const double C960 =
        C4913 *
            ((-(ae * C5025) / C4876) / C4679 - C4924 / C4878 +
             C4875 * ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4920) / C4876) /
                          C4679 -
                      (ae * C4925) / C4878)) -
        ((C4891 + C4875 * C4910 + C4899 * ae) * ce) / C4878;
    const double C1242 =
        C4928 *
            ((-(ae * C5031) / C4876) / C4679 - C4939 / C4878 +
             C4875 * ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4935) / C4876) /
                          C4679 -
                      (ae * C4940) / C4878)) -
        ((C4891 + C4875 * C4910 + C4899 * ae) * ce) / C4878;
    const double C1488 =
        C4928 *
        (C4913 *
             ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4920) / C4876) / C4679 -
              (ae * C4925) / C4878) -
         (C4910 * ce) / C4878);
    const double C1526 =
        C4928 * C4913 *
            ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4935) / C4876) / C4679 -
             (ae * C4940) / C4878) -
        (C4913 * C4910 * ce) / C4878;
    const double C78 = (2 * (C4875 * C4891 + C4883 * ae) +
                        C4875 * (C4891 + C4875 * C4910 + C4899 * ae) +
                        (C4883 + C4893 * C4884) * ae) /
                       C4679;
    const double C325 = (C4875 * C4891 + C4883 * ae + C4910 * C4958) / C4679;
    const double C629 = (C4875 * C4891 + C4883 * ae + C4910 * C4999) / C4679;
    const double C930 = (C4913 * (C4891 + C4875 * C4910 + C4899 * ae)) / C4679;
    const double C1184 = (C4928 * (C4891 + C4875 * C4910 + C4899 * ae)) / C4679;
    const double C1446 = (C4928 * C4913 * C4910) / C4679;
    const double C2081 = (2 * (C4913 * C4948 + C4883 * ae) +
                          C4913 * (C4948 + C4913 * C5126 + C5123 * ae) +
                          (C4883 + C4893 * C4958) * ae) /
                         C4679;
    const double C2291 = (C4913 * C4948 + C4883 * ae + C5126 * C4999) / C4679;
    const double C3091 = (C4928 * (C4948 + C4913 * C5126 + C5123 * ae)) / C4679;
    const double C3847 = (2 * (C4928 * C4980 + C4883 * ae) +
                          C4928 * (C4980 + C4928 * C5166 + C5163 * ae) +
                          (C4883 + C4893 * C4999) * ae) /
                         C4679;
    const double C436 =
        (-(C4875 * C4953) / C4876) / C4679 - (C4948 * ce) / C4878 -
        (ae * C4913 * C4909) / C4878 +
        C4913 *
            (C4913 * ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4949) / C4876) /
                          C4679 -
                      (C4954 * ce) / C4878) -
             (ae * C4909) / C4878);
    const double C834 =
        (-(C4875 * C4985) / C4876) / C4679 - (C4980 * ce) / C4878 -
        (ae * C4928 * C4909) / C4878 +
        C4928 *
            (C4928 * ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4981) / C4876) /
                          C4679 -
                      (C4986 * ce) / C4878) -
             (ae * C4909) / C4878);
    const double C1018 =
        C4913 *
            ((-(C5026 * ce) / C4876) / C4679 - C4953 / C4878 +
             C4875 * ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4949) / C4876) /
                          C4679 -
                      (C4954 * ce) / C4878)) -
        (ae * (C4875 * C4909 + C4890 + C4899 * ce)) / C4878;
    const double C1354 =
        C4928 *
            ((-(C5040 * ce) / C4876) / C4679 - C4985 / C4878 +
             C4875 * ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4981) / C4876) /
                          C4679 -
                      (C4986 * ce) / C4878)) -
        (ae * (C4875 * C4909 + C4890 + C4899 * ce)) / C4878;
    const double C1564 =
        C4913 * C4928 *
            ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4949) / C4876) / C4679 -
             (C4954 * ce) / C4878) -
        (ae * C4928 * C4909) / C4878;
    const double C1674 =
        C4928 * C4913 *
            ((-(C4875 * std::pow(C4880, 5) * bs[5] * C4981) / C4876) / C4679 -
             (C4986 * ce) / C4878) -
        (ae * C4913 * C4909) / C4878;
    const double C82 = (-2 * (C4875 * C4890 + C4883 * ce)) / C4876 -
                       (C4875 * (C4875 * C4909 + C4890 + C4899 * ce)) / C4876 -
                       ((C4883 + C4893 * C4884) * ce) / C4876;
    const double C327 = -(C4909 * C4958 + C4875 * C4890 + C4883 * ce) / C4876;
    const double C631 = -(C4909 * C4999 + C4875 * C4890 + C4883 * ce) / C4876;
    const double C931 = -(C4913 * (C4875 * C4909 + C4890 + C4899 * ce)) / C4876;
    const double C1185 =
        -(C4928 * (C4875 * C4909 + C4890 + C4899 * ce)) / C4876;
    const double C1448 = -(C4928 * C4913 * C4909) / C4876;
    const double C2401 =
        (-(C4913 * C4995) / C4876) / C4679 - (C4980 * ce) / C4878 -
        (ae * C4928 * C5125) / C4878 +
        C4928 *
            (C4928 * ((-(C4913 * std::pow(C4880, 5) * bs[5] * C4992) / C4876) /
                          C4679 -
                      (C4986 * ce) / C4878) -
             (ae * C5125) / C4878);
    const double C3201 =
        C4928 *
            ((-(C5143 * ce) / C4876) / C4679 - C4995 / C4878 +
             C4913 * ((-(C4913 * std::pow(C4880, 5) * bs[5] * C4992) / C4876) /
                          C4679 -
                      (C4986 * ce) / C4878)) -
        (ae * (C4913 * C5125 + C4919 + C5123 * ce)) / C4878;
    const double C2037 =
        (-2 * (C4913 * C4919 + C4883 * ce)) / C4876 -
        (C4913 * (C4913 * C5125 + C4919 + C5123 * ce)) / C4876 -
        ((C4883 + C4893 * C4958) * ce) / C4876;
    const double C2235 = -(C5125 * C4999 + C4913 * C4919 + C4883 * ce) / C4876;
    const double C3035 =
        -(C4928 * (C4913 * C5125 + C4919 + C5123 * ce)) / C4876;
    const double C3765 =
        (-2 * (C4928 * C4934 + C4883 * ce)) / C4876 -
        (C4928 * (C4928 * C5165 + C4934 + C5163 * ce)) / C4876 -
        ((C4883 + C4893 * C4999) * ce) / C4876;
    const double C86 =
        2 * ((-(C4891 * ce) / C4876) / C4679 - (ae * C4890) / C4878 -
             (C4875 * C4908) / C4878) -
        (ae * (C4875 * C4909 + C4890 + C4899 * ce)) / C4878 -
        ((C4891 + C4875 * C4910 + C4899 * ae) * ce) / C4878 +
        C4875 *
            ((-(ae * C4909) / C4876) / C4679 - C4908 / C4878 -
             (C4910 * ce) / C4878 +
             C4875 * ((-(C4904 * ce) / C4876) / C4679 - (ae * C4903) / C4878 -
                      (C4875 *
                       (C4894 * C4895 + C4884 * bs[5] * std::pow(C4880, 5)) *
                       C4885) /
                          C4878));
    const double C329 = (-(C4913 * C4891 * ce) / C4876) / C4679 -
                        (ae * C4913 * C4890) / C4878 -
                        (C4875 * C4913 * C4908) / C4878;
    const double C330 = (-(C4908 * C4958) / C4876) / C4679 -
                        ((C4883 + C4884 * C4881 * C4887) * C4885) / C4878;
    const double C331 =
        (-((C4891 + C4904 * C4958) * ce) / C4876) / C4679 -
        (ae * (C4903 * C4958 + C4890)) / C4878 +
        C4875 * ((-((C4894 * C4895 + C4884 * bs[5] * std::pow(C4880, 5)) *
                    C4885 * C4958) /
                  C4876) /
                     C4679 -
                 C4908 / C4878);
    const double C633 = (-(C4928 * C4891 * ce) / C4876) / C4679 -
                        (ae * C4928 * C4890) / C4878 -
                        (C4875 * C4928 * C4908) / C4878;
    const double C634 = (-(C4908 * C4999) / C4876) / C4679 -
                        ((C4883 + C4884 * C4881 * C4887) * C4885) / C4878;
    const double C635 =
        (-((C4891 + C4904 * C4999) * ce) / C4876) / C4679 -
        (ae * (C4903 * C4999 + C4890)) / C4878 +
        C4875 * ((-((C4894 * C4895 + C4884 * bs[5] * std::pow(C4880, 5)) *
                    C4885 * C4999) /
                  C4876) /
                     C4679 -
                 C4908 / C4878);
    const double C932 =
        (-(ae * C4913 * C4909) / C4876) / C4679 - (C4913 * C4908) / C4878 -
        (C4913 * C4910 * ce) / C4878 +
        C4875 *
            ((-(C4913 * C4904 * ce) / C4876) / C4679 -
             (ae * C4913 * C4903) / C4878 -
             (C4875 * C4913 *
              (C4894 * C4895 + C4884 * bs[5] * std::pow(C4880, 5)) * C4885) /
                 C4878);
    const double C1186 =
        (-(ae * C4928 * C4909) / C4876) / C4679 - (C4928 * C4908) / C4878 -
        (C4928 * C4910 * ce) / C4878 +
        C4875 *
            ((-(C4928 * C4904 * ce) / C4876) / C4679 -
             (ae * C4928 * C4903) / C4878 -
             (C4875 * C4928 *
              (C4894 * C4895 + C4884 * bs[5] * std::pow(C4880, 5)) * C4885) /
                 C4878);
    const double C1449 = (-(C4928 * C4913 * C4908) / C4876) / C4679;
    const double C2018 =
        (-2 * C4913 * C4908) / C4878 +
        C4913 * ((-((C4894 * C4895 + C4884 * bs[5] * std::pow(C4880, 5)) *
                    C4885 * C4958) /
                  C4876) /
                     C4679 -
                 C4908 / C4878);
    const double C2208 =
        (-(C4913 * (C4894 * C4895 + C4884 * bs[5] * std::pow(C4880, 5)) *
           C4885 * C4999) /
         C4876) /
            C4679 -
        (C4913 * C4908) / C4878;
    const double C3008 =
        C4928 * ((-((C4894 * C4895 + C4884 * bs[5] * std::pow(C4880, 5)) *
                    C4885 * C4958) /
                  C4876) /
                     C4679 -
                 C4908 / C4878);
    const double C3726 =
        (-2 * C4928 * C4908) / C4878 +
        C4928 * ((-((C4894 * C4895 + C4884 * bs[5] * std::pow(C4880, 5)) *
                    C4885 * C4999) /
                  C4876) /
                     C4679 -
                 C4908 / C4878);
    const double C189 =
        (-2 * C4875 * C4963) / C4878 +
        C4875 * ((-((C4894 * C4895 + C4958 * bs[5] * std::pow(C4880, 5)) *
                    C4885 * C4884) /
                  C4876) /
                     C4679 -
                 C4963 / C4878);
    const double C464 =
        (-(ae * (C4913 * C4919 + C4883 * ce)) / C4876) / C4679 -
        ((C4883 + C4958 * C4881 * C4887) * C4885) / C4878 -
        ((C4913 * C4948 + C4883 * ae) * ce) / C4878 +
        C4913 * ((-(C4948 * ce) / C4876) / C4679 - (ae * C4919) / C4878 -
                 (C4913 * C4963) / C4878);
    const double C465 = (-(C4875 * C4948 * ce) / C4876) / C4679 -
                        (ae * C4875 * C4919) / C4878 -
                        (C4913 * C4875 * C4963) / C4878;
    const double C466 =
        (-(ae * (C4913 * C5025 + C4899 * ce)) / C4876) / C4679 -
        (C4875 * C4963) / C4878 - ((C4913 * C5026 + C4899 * ae) * ce) / C4878 +
        C4913 *
            ((-(C5026 * ce) / C4876) / C4679 - (ae * C5025) / C4878 -
             (C4913 * C4875 *
              (C4894 * C4895 + C4958 * bs[5] * std::pow(C4880, 5)) * C4885) /
                 C4878);
    const double C765 = (-(C4963 * C4999) / C4876) / C4679 -
                        ((C4883 + C4958 * C4881 * C4887) * C4885) / C4878;
    const double C766 = (-(C4928 * C4875 * C4963) / C4876) / C4679;
    const double C767 =
        (-(C4875 * (C4894 * C4895 + C4958 * bs[5] * std::pow(C4880, 5)) *
           C4885 * C4999) /
         C4876) /
            C4679 -
        (C4875 * C4963) / C4878;
    const double C1045 =
        (-((C4948 + C4954 * C4884) * ce) / C4876) / C4679 -
        (ae * (C4925 * C4884 + C4919)) / C4878 +
        C4913 * ((-((C4894 * C4895 + C4958 * bs[5] * std::pow(C4880, 5)) *
                    C4885 * C4884) /
                  C4876) /
                     C4679 -
                 C4963 / C4878);
    const double C1297 =
        C4928 * ((-((C4894 * C4895 + C4958 * bs[5] * std::pow(C4880, 5)) *
                    C4885 * C4884) /
                  C4876) /
                     C4679 -
                 C4963 / C4878);
    const double C1599 = (-(C4928 * C4948 * ce) / C4876) / C4679 -
                         (ae * C4928 * C4919) / C4878 -
                         (C4913 * C4928 * C4963) / C4878;
    const double C2101 =
        2 * ((-(C4948 * ce) / C4876) / C4679 - (ae * C4919) / C4878 -
             (C4913 * C4963) / C4878) -
        (ae * (C4913 * C5125 + C4919 + C5123 * ce)) / C4878 -
        ((C4948 + C4913 * C5126 + C5123 * ae) * ce) / C4878 +
        C4913 *
            ((-(ae * C5125) / C4876) / C4679 - C4963 / C4878 -
             (C5126 * ce) / C4878 +
             C4913 * ((-(C4954 * ce) / C4876) / C4679 - (ae * C4925) / C4878 -
                      (C4913 *
                       (C4894 * C4895 + C4958 * bs[5] * std::pow(C4880, 5)) *
                       C4885) /
                          C4878));
    const double C2319 =
        (-((C4948 + C4954 * C4999) * ce) / C4876) / C4679 -
        (ae * (C4925 * C4999 + C4919)) / C4878 +
        C4913 * ((-((C4894 * C4895 + C4958 * bs[5] * std::pow(C4880, 5)) *
                    C4885 * C4999) /
                  C4876) /
                     C4679 -
                 C4963 / C4878);
    const double C3119 =
        (-(ae * C4928 * C5125) / C4876) / C4679 - (C4928 * C4963) / C4878 -
        (C4928 * C5126 * ce) / C4878 +
        C4913 *
            ((-(C4928 * C4954 * ce) / C4876) / C4679 -
             (ae * C4928 * C4925) / C4878 -
             (C4913 * C4928 *
              (C4894 * C4895 + C4958 * bs[5] * std::pow(C4880, 5)) * C4885) /
                 C4878);
    const double C3805 =
        (-2 * C4928 * C4963) / C4878 +
        C4928 * ((-((C4894 * C4895 + C4958 * bs[5] * std::pow(C4880, 5)) *
                    C4885 * C4999) /
                  C4876) /
                     C4679 -
                 C4963 / C4878);
    const double C282 =
        (-2 * C4875 * C5004) / C4878 +
        C4875 * ((-((C4894 * C4895 + C4999 * bs[5] * std::pow(C4880, 5)) *
                    C4885 * C4884) /
                  C4876) /
                     C4679 -
                 C5004 / C4878);
    const double C588 = (-(C4913 * C4875 * C5004) / C4876) / C4679;
    const double C589 = (-(C5004 * C4958) / C4876) / C4679 -
                        ((C4883 + C4999 * C4881 * C4887) * C4885) / C4878;
    const double C590 =
        (-(C4875 * (C4894 * C4895 + C4999 * bs[5] * std::pow(C4880, 5)) *
           C4885 * C4958) /
         C4876) /
            C4679 -
        (C4875 * C5004) / C4878;
    const double C892 =
        (-(ae * (C4928 * C4934 + C4883 * ce)) / C4876) / C4679 -
        ((C4883 + C4999 * C4881 * C4887) * C4885) / C4878 -
        ((C4928 * C4980 + C4883 * ae) * ce) / C4878 +
        C4928 * ((-(C4980 * ce) / C4876) / C4679 - (ae * C4934) / C4878 -
                 (C4928 * C5004) / C4878);
    const double C893 = (-(C4875 * C4980 * ce) / C4876) / C4679 -
                        (ae * C4875 * C4934) / C4878 -
                        (C4928 * C4875 * C5004) / C4878;
    const double C894 =
        (-(ae * (C4928 * C5031 + C4899 * ce)) / C4876) / C4679 -
        (C4875 * C5004) / C4878 - ((C4928 * C5040 + C4899 * ae) * ce) / C4878 +
        C4928 *
            ((-(C5040 * ce) / C4876) / C4679 - (ae * C5031) / C4878 -
             (C4928 * C4875 *
              (C4894 * C4895 + C4999 * bs[5] * std::pow(C4880, 5)) * C4885) /
                 C4878);
    const double C1154 =
        C4913 * ((-((C4894 * C4895 + C4999 * bs[5] * std::pow(C4880, 5)) *
                    C4885 * C4884) /
                  C4876) /
                     C4679 -
                 C5004 / C4878);
    const double C1408 =
        (-((C4980 + C4986 * C4884) * ce) / C4876) / C4679 -
        (ae * (C4940 * C4884 + C4934)) / C4878 +
        C4928 * ((-((C4894 * C4895 + C4999 * bs[5] * std::pow(C4880, 5)) *
                    C4885 * C4884) /
                  C4876) /
                     C4679 -
                 C5004 / C4878);
    const double C1745 = (-(C4913 * C4980 * ce) / C4876) / C4679 -
                         (ae * C4913 * C4934) / C4878 -
                         (C4928 * C4913 * C5004) / C4878;
    const double C2178 =
        (-2 * C4913 * C5004) / C4878 +
        C4913 * ((-((C4894 * C4895 + C4999 * bs[5] * std::pow(C4880, 5)) *
                    C4885 * C4958) /
                  C4876) /
                     C4679 -
                 C5004 / C4878);
    const double C2428 =
        (-(ae * (C4928 * C5142 + C5123 * ce)) / C4876) / C4679 -
        (C4913 * C5004) / C4878 - ((C4928 * C5143 + C5123 * ae) * ce) / C4878 +
        C4928 *
            ((-(C5143 * ce) / C4876) / C4679 - (ae * C5142) / C4878 -
             (C4928 * C4913 *
              (C4894 * C4895 + C4999 * bs[5] * std::pow(C4880, 5)) * C4885) /
                 C4878);
    const double C3228 =
        (-((C4980 + C4986 * C4958) * ce) / C4876) / C4679 -
        (ae * (C4940 * C4958 + C4934)) / C4878 +
        C4928 * ((-((C4894 * C4895 + C4999 * bs[5] * std::pow(C4880, 5)) *
                    C4885 * C4958) /
                  C4876) /
                     C4679 -
                 C5004 / C4878);
    const double C3886 =
        2 * ((-(C4980 * ce) / C4876) / C4679 - (ae * C4934) / C4878 -
             (C4928 * C5004) / C4878) -
        (ae * (C4928 * C5165 + C4934 + C5163 * ce)) / C4878 -
        ((C4980 + C4928 * C5166 + C5163 * ae) * ce) / C4878 +
        C4928 *
            ((-(ae * C5165) / C4876) / C4679 - C5004 / C4878 -
             (C5166 * ce) / C4878 +
             C4928 * ((-(C4986 * ce) / C4876) / C4679 - (ae * C4940) / C4878 -
                      (C4928 *
                       (C4894 * C4895 + C4999 * bs[5] * std::pow(C4880, 5)) *
                       C4885) /
                          C4878));
    const double C69 =
        (C4698 / C4684 - (0 * be) / C4679) / C4684 + (0 * ae) / C4679;
    const double C928 = C4698 / C4684 - (0 * be) / C4679;
    const double C1780 = C4698 / C4684 + (0 * ae) / C4679;
    const double C4700 = C4697 / C4679;
    const double C5516 = C5486 - C5507;
    const double C5517 = C5490 - C5509;
    const double C2080 =
        (C4801 / C4684 - (0 * be) / C4679) / C4684 + (0 * ae) / C4679;
    const double C2542 = C4801 / C4684 - (0 * be) / C4679;
    const double C4800 = C4797 / C4679;
    const double C5518 = C5494 - C5511;
    const double C5519 = C5501 - C5512;
    const double C3846 =
        (C4847 / C4684 - (0 * be) / C4679) / C4684 + (0 * ae) / C4679;
    const double C4380 = C4847 / C4684 - (0 * be) / C4679;
    const double C4846 = C4843 / C4679;
    const double C5520 = C5496 - C5514;
    const double C5521 = C5505 - C5515;
    const double C4702 = C5315 - C4700;
    const double C57 = (C5516 * C5310) / C4679 + (C5488 - C5508) / C4684;
    const double C58 = (C5517 * C5310) / C4679 + (2 * C5320 + C5516) / C4684;
    const double C59 = (C5310 * C5320) / C4688 + C5517 / C4684;
    const double C4803 = C5345 - C4800;
    const double C2010 = (C5518 * C5389) / C4679 + (C5497 - C5510) / C4684;
    const double C2011 = (C5519 * C5389) / C4679 + (2 * C5394 + C5518) / C4684;
    const double C2012 = (C5389 * C5394) / C4688 + C5519 / C4684;
    const double C4849 = C5356 - C4846;
    const double C3719 = (C5520 * C5415) / C4679 + (C5498 - C5513) / C4684;
    const double C3720 = (C5521 * C5415) / C4679 + (2 * C5420 + C5520) / C4684;
    const double C3721 = (C5415 * C5420) / C4688 + C5521 / C4684;
    const double C4703 = C4702 * ae;
    const double C314 = (-C4680 / C4679) / C4684 - (C4702 * be) / C4679;
    const double C4805 = C4803 * ae;
    const double C4851 = C4849 * ae;
    const double C4704 = C4703 / C4679;
    const double C4807 = C4805 / C4679;
    const double C4853 = C4851 / C4679;
    const double C4705 = C4704 - C4694;
    const double C4808 = C4807 - C4792;
    const double C4854 = C4853 - C4838;
    const double C66 =
        ((((0 - (C4677 * C4678) / C4679) * ae) / C4679 - (0 * be) / C4688 +
          C4680 / C4679) /
             C4684 -
         ((C4677 * C4701 + 0) * be) / C4679) /
            C4684 +
        ((C4677 *
              (C4701 / C4684 - ((C4677 * C4705 + C5488) * be) / C4679 + C4698) +
          C5516) *
         ae) /
            C4679 +
        C4705 / C4684 - ((C4677 * C4698 + C5320) * be) / C4679;
    const double C67 =
        (C4701 / C4684 - ((C4677 * C4705 + C5488) * be) / C4679 + C4698) /
            C4684 +
        ((C4677 * (C4705 / C4684 - ((C4677 * C4698 + C5320) * be) / C4679) +
          C5517) *
         ae) /
            C4679 +
        2 * (C4698 / C4684 - (0 * be) / C4679);
    const double C68 =
        (C4705 / C4684 - ((C4677 * C4698 + C5320) * be) / C4679) / C4684 +
        ((C4677 * (C4698 / C4684 - (0 * be) / C4679) + C923) * ae) / C4679;
    const double C926 =
        C4701 / C4684 - ((C4677 * C4705 + C5488) * be) / C4679 + C4698;
    const double C927 = C4705 / C4684 - ((C4677 * C4698 + C5320) * be) / C4679;
    const double C1778 =
        C4701 / C4684 + ((C4677 * C4705 + C5488) * ae) / C4679 + C4698;
    const double C1779 = C4705 / C4684 + ((C4677 * C4698 + C5320) * ae) / C4679;
    const double C2077 =
        ((((0 - (C4734 * C4789) / C4679) * ae) / C4679 - (0 * be) / C4688 +
          C4735 / C4679) /
             C4684 -
         ((C4734 * C4806 + 0) * be) / C4679) /
            C4684 +
        ((C4734 *
              (C4806 / C4684 - ((C4734 * C4808 + C5497) * be) / C4679 + C4801) +
          C5518) *
         ae) /
            C4679 +
        C4808 / C4684 - ((C4734 * C4801 + C5394) * be) / C4679;
    const double C2078 =
        (C4806 / C4684 - ((C4734 * C4808 + C5497) * be) / C4679 + C4801) /
            C4684 +
        ((C4734 * (C4808 / C4684 - ((C4734 * C4801 + C5394) * be) / C4679) +
          C5519) *
         ae) /
            C4679 +
        2 * (C4801 / C4684 - (0 * be) / C4679);
    const double C2079 =
        (C4808 / C4684 - ((C4734 * C4801 + C5394) * be) / C4679) / C4684 +
        ((C4734 * (C4801 / C4684 - (0 * be) / C4679) + C2459) * ae) / C4679;
    const double C2540 =
        C4806 / C4684 - ((C4734 * C4808 + C5497) * be) / C4679 + C4801;
    const double C2541 = C4808 / C4684 - ((C4734 * C4801 + C5394) * be) / C4679;
    const double C3843 =
        ((((0 - (C4749 * C4835) / C4679) * ae) / C4679 - (0 * be) / C4688 +
          C4750 / C4679) /
             C4684 -
         ((C4749 * C4852 + 0) * be) / C4679) /
            C4684 +
        ((C4749 *
              (C4852 / C4684 - ((C4749 * C4854 + C5498) * be) / C4679 + C4847) +
          C5520) *
         ae) /
            C4679 +
        C4854 / C4684 - ((C4749 * C4847 + C5420) * be) / C4679;
    const double C3844 =
        (C4852 / C4684 - ((C4749 * C4854 + C5498) * be) / C4679 + C4847) /
            C4684 +
        ((C4749 * (C4854 / C4684 - ((C4749 * C4847 + C5420) * be) / C4679) +
          C5521) *
         ae) /
            C4679 +
        2 * (C4847 / C4684 - (0 * be) / C4679);
    const double C3845 =
        (C4854 / C4684 - ((C4749 * C4847 + C5420) * be) / C4679) / C4684 +
        ((C4749 * (C4847 / C4684 - (0 * be) / C4679) + C4221) * ae) / C4679;
    const double C4378 =
        C4852 / C4684 - ((C4749 * C4854 + C5498) * be) / C4679 + C4847;
    const double C4379 = C4854 / C4684 - ((C4749 * C4847 + C5420) * be) / C4679;
    d2eexx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C926 * C71 + C5516 * C75 + C927 * C72 + C5517 * C76 +
                     C928 * C73 + C923 * C77) *
                        C70 +
                    (C926 * C79 + C5516 * C83 + C927 * C80 + C5517 * C84 +
                     C928 * C81 + C923 * C85) *
                        C61) *
                       C5497 +
                   ((C926 * C316 + C5516 * C320 + C927 * C317 + C5517 * C321 +
                     C928 * C929 + C923 * C930) *
                        C70 +
                    (C926 * C322 + C5516 * C328 + C927 * C323 + C5517 * C329 +
                     C928 * C931 + C923 * C932) *
                        C61) *
                       C5394) *
                  C5356 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C926 * C71 + C5516 * C75 + C927 * C72 + C5517 * C76 +
                     C928 * C73 + C923 * C77) *
                        C105 +
                    (C926 * C106 + C5516 * C110 + C927 * C107 + C5517 * C111 +
                     C928 * C108 + C923 * C112) *
                        C65) *
                       C5497 +
                   ((C926 * C316 + C5516 * C320 + C927 * C317 + C5517 * C321 +
                     C928 * C929 + C923 * C930) *
                        C105 +
                    (C926 * C358 + C5516 * C362 + C927 * C359 + C5517 * C363 +
                     C928 * C959 + C923 * C960) *
                        C65) *
                       C5394) *
                  C5356 * C61 * C64) /
                 (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C926 * C71 + C5516 * C75 + C927 * C72 + C5517 * C76 +
                     C928 * C73 + C923 * C77) *
                        C132 +
                    (C926 * C133 + C5516 * C137 + C927 * C134 + C5517 * C138 +
                     C928 * C135 + C923 * C139) *
                        C64) *
                       C5497 +
                   ((C926 * C316 + C5516 * C320 + C927 * C317 + C5517 * C321 +
                     C928 * C929 + C923 * C930) *
                        C132 +
                    (C926 * C392 + C5516 * C396 + C927 * C393 + C5517 * C397 +
                     C928 * C987 + C923 * C988) *
                        C64) *
                       C5394) *
                  C5356 * C65 * C61) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1015 * C71 + C5497 * C160 + C1016 * C316 + C5394 * C429) * C70 +
           (C1015 * C79 + C5497 * C164 + C1016 * C322 + C5394 * C433) * C61) *
              C5356 * C5516 +
          ((C1015 * C72 + C5497 * C161 + C1016 * C317 + C5394 * C431) * C70 +
           (C1015 * C80 + C5497 * C165 + C1016 * C323 + C5394 * C435) * C61) *
              C5356 * C5517 +
          ((C1015 * C73 + C5497 * C162 + C1016 * C929 + C5394 * C1017) * C70 +
           (C1015 * C81 + C5497 * C166 + C1016 * C931 + C5394 * C1018) * C61) *
              C5356 * C923) *
         C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1015 * C71 + C5497 * C160 + C1016 * C316 + C5394 * C429) * C105 +
           (C1015 * C106 + C5497 * C186 + C1016 * C358 + C5394 * C463) * C65) *
              C5356 * C5516 +
          ((C1015 * C72 + C5497 * C161 + C1016 * C317 + C5394 * C431) * C105 +
           (C1015 * C107 + C5497 * C187 + C1016 * C359 + C5394 * C465) * C65) *
              C5356 * C5517 +
          ((C1015 * C73 + C5497 * C162 + C1016 * C929 + C5394 * C1017) * C105 +
           (C1015 * C108 + C5497 * C188 + C1016 * C959 + C5394 * C1045) * C65) *
              C5356 * C923) *
         C61 * C64) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1015 * C71 + C5497 * C160 + C1016 * C316 + C5394 * C429) * C132 +
           (C1015 * C133 + C5497 * C208 + C1016 * C392 + C5394 * C493) * C64) *
              C5356 * C5516 +
          ((C1015 * C72 + C5497 * C161 + C1016 * C317 + C5394 * C431) * C132 +
           (C1015 * C134 + C5497 * C209 + C1016 * C393 + C5394 * C495) * C64) *
              C5356 * C5517 +
          ((C1015 * C73 + C5497 * C162 + C1016 * C929 + C5394 * C1017) * C132 +
           (C1015 * C135 + C5497 * C210 + C1016 * C987 + C5394 * C1072) * C64) *
              C5356 * C923) *
         C65 * C61) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C5356 * C231) * C70 +
                     (C230 * C79 + C5356 * C235) * C61) *
                        C5516 +
                    ((C230 * C72 + C5356 * C232) * C70 +
                     (C230 * C80 + C5356 * C236) * C61) *
                        C5517 +
                    ((C230 * C73 + C5356 * C233) * C70 +
                     (C230 * C81 + C5356 * C237) * C61) *
                        C923) *
                       C5497 +
                   (((C230 * C316 + C5356 * C523) * C70 +
                     (C230 * C322 + C5356 * C527) * C61) *
                        C5516 +
                    ((C230 * C317 + C5356 * C524) * C70 +
                     (C230 * C323 + C5356 * C528) * C61) *
                        C5517 +
                    ((C230 * C929 + C5356 * C1099) * C70 +
                     (C230 * C931 + C5356 * C1100) * C61) *
                        C923) *
                       C5394) *
                  C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C5356 * C231) * C105 +
                     (C230 * C106 + C5356 * C257) * C65) *
                        C5516 +
                    ((C230 * C72 + C5356 * C232) * C105 +
                     (C230 * C107 + C5356 * C258) * C65) *
                        C5517 +
                    ((C230 * C73 + C5356 * C233) * C105 +
                     (C230 * C108 + C5356 * C259) * C65) *
                        C923) *
                       C5497 +
                   (((C230 * C316 + C5356 * C523) * C105 +
                     (C230 * C358 + C5356 * C557) * C65) *
                        C5516 +
                    ((C230 * C317 + C5356 * C524) * C105 +
                     (C230 * C359 + C5356 * C558) * C65) *
                        C5517 +
                    ((C230 * C929 + C5356 * C1099) * C105 +
                     (C230 * C959 + C5356 * C1127) * C65) *
                        C923) *
                       C5394) *
                  C61 * C64) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C5356 * C231) * C132 +
                     (C230 * C133 + C5356 * C279) * C64) *
                        C5516 +
                    ((C230 * C72 + C5356 * C232) * C132 +
                     (C230 * C134 + C5356 * C280) * C64) *
                        C5517 +
                    ((C230 * C73 + C5356 * C233) * C132 +
                     (C230 * C135 + C5356 * C281) * C64) *
                        C923) *
                       C5497 +
                   (((C230 * C316 + C5356 * C523) * C132 +
                     (C230 * C392 + C5356 * C587) * C64) *
                        C5516 +
                    ((C230 * C317 + C5356 * C524) * C132 +
                     (C230 * C393 + C5356 * C588) * C64) *
                        C5517 +
                    ((C230 * C929 + C5356 * C1099) * C132 +
                     (C230 * C987 + C5356 * C1154) * C64) *
                        C923) *
                       C5394) *
                  C65 * C61) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C314 * C71 + C309 * C75 + C315 * C72 + C5320 * C76) * C70 +
            (C314 * C79 + C309 * C83 + C315 * C80 + C5320 * C84) * C61) *
               C5497 +
           ((C314 * C316 + C309 * C320 + C315 * C317 + C5320 * C321) * C70 +
            (C314 * C322 + C309 * C328 + C315 * C323 + C5320 * C329) * C61) *
               C5394) *
              C5498 +
          (((C314 * C620 + C309 * C624 + C315 * C621 + C5320 * C625) * C70 +
            (C314 * C626 + C309 * C632 + C315 * C627 + C5320 * C633) * C61) *
               C5497 +
           ((C314 * C1443 + C309 * C1445 + C315 * C1444 + C5320 * C1446) * C70 +
            (C314 * C1447 + C309 * C1449 + C315 * C1448 + C5320 * C1450) *
                C61) *
               C5394) *
              C5420) *
         C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C314 * C71 + C309 * C75 + C315 * C72 + C5320 * C76) * C105 +
            (C314 * C106 + C309 * C110 + C315 * C107 + C5320 * C111) * C65) *
               C5497 +
           ((C314 * C316 + C309 * C320 + C315 * C317 + C5320 * C321) * C105 +
            (C314 * C358 + C309 * C362 + C315 * C359 + C5320 * C363) * C65) *
               C5394) *
              C5498 +
          (((C314 * C620 + C309 * C624 + C315 * C621 + C5320 * C625) * C105 +
            (C314 * C662 + C309 * C666 + C315 * C663 + C5320 * C667) * C65) *
               C5497 +
           ((C314 * C1443 + C309 * C1445 + C315 * C1444 + C5320 * C1446) *
                C105 +
            (C314 * C1485 + C309 * C1487 + C315 * C1486 + C5320 * C1488) *
                C65) *
               C5394) *
              C5420) *
         C61 * C64) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C314 * C71 + C309 * C75 + C315 * C72 + C5320 * C76) * C132 +
            (C314 * C133 + C309 * C137 + C315 * C134 + C5320 * C138) * C64) *
               C5497 +
           ((C314 * C316 + C309 * C320 + C315 * C317 + C5320 * C321) * C132 +
            (C314 * C392 + C309 * C396 + C315 * C393 + C5320 * C397) * C64) *
               C5394) *
              C5498 +
          (((C314 * C620 + C309 * C624 + C315 * C621 + C5320 * C625) * C132 +
            (C314 * C696 + C309 * C700 + C315 * C697 + C5320 * C701) * C64) *
               C5497 +
           ((C314 * C1443 + C309 * C1445 + C315 * C1444 + C5320 * C1446) *
                C132 +
            (C314 * C1523 + C309 * C1525 + C315 * C1524 + C5320 * C1526) *
                C64) *
               C5394) *
              C5420) *
         C65 * C61) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1015 * C71 + C5497 * C160 + C1016 * C316 + C5394 * C429) * C70 +
            (C1015 * C79 + C5497 * C164 + C1016 * C322 + C5394 * C433) * C61) *
               C5498 +
           ((C1015 * C620 + C5497 * C730 + C1016 * C1443 + C5394 * C1561) *
                C70 +
            (C1015 * C626 + C5497 * C734 + C1016 * C1447 + C5394 * C1563) *
                C61) *
               C5420) *
              C309 +
          (((C1015 * C72 + C5497 * C161 + C1016 * C317 + C5394 * C431) * C70 +
            (C1015 * C80 + C5497 * C165 + C1016 * C323 + C5394 * C435) * C61) *
               C5498 +
           ((C1015 * C621 + C5497 * C732 + C1016 * C1444 + C5394 * C1562) *
                C70 +
            (C1015 * C627 + C5497 * C736 + C1016 * C1448 + C5394 * C1564) *
                C61) *
               C5420) *
              C5320) *
         C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1015 * C71 + C5497 * C160 + C1016 * C316 + C5394 * C429) * C105 +
            (C1015 * C106 + C5497 * C186 + C1016 * C358 + C5394 * C463) * C65) *
               C5498 +
           ((C1015 * C620 + C5497 * C730 + C1016 * C1443 + C5394 * C1561) *
                C105 +
            (C1015 * C662 + C5497 * C764 + C1016 * C1485 + C5394 * C1599) *
                C65) *
               C5420) *
              C309 +
          (((C1015 * C72 + C5497 * C161 + C1016 * C317 + C5394 * C431) * C105 +
            (C1015 * C107 + C5497 * C187 + C1016 * C359 + C5394 * C465) * C65) *
               C5498 +
           ((C1015 * C621 + C5497 * C732 + C1016 * C1444 + C5394 * C1562) *
                C105 +
            (C1015 * C663 + C5497 * C766 + C1016 * C1486 + C5394 * C1600) *
                C65) *
               C5420) *
              C5320) *
         C61 * C64) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1015 * C71 + C5497 * C160 + C1016 * C316 + C5394 * C429) * C132 +
            (C1015 * C133 + C5497 * C208 + C1016 * C392 + C5394 * C493) * C64) *
               C5498 +
           ((C1015 * C620 + C5497 * C730 + C1016 * C1443 + C5394 * C1561) *
                C132 +
            (C1015 * C696 + C5497 * C794 + C1016 * C1523 + C5394 * C1635) *
                C64) *
               C5420) *
              C309 +
          (((C1015 * C72 + C5497 * C161 + C1016 * C317 + C5394 * C431) * C132 +
            (C1015 * C134 + C5497 * C209 + C1016 * C393 + C5394 * C495) * C64) *
               C5498 +
           ((C1015 * C621 + C5497 * C732 + C1016 * C1444 + C5394 * C1562) *
                C132 +
            (C1015 * C697 + C5497 * C796 + C1016 * C1524 + C5394 * C1636) *
                C64) *
               C5420) *
              C5320) *
         C65 * C61) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1351 * C71 + C5498 * C231 + C1352 * C620 + C5420 * C827) * C70 +
            (C1351 * C79 + C5498 * C235 + C1352 * C626 + C5420 * C831) * C61) *
               C309 +
           ((C1351 * C72 + C5498 * C232 + C1352 * C621 + C5420 * C829) * C70 +
            (C1351 * C80 + C5498 * C236 + C1352 * C627 + C5420 * C833) * C61) *
               C5320) *
              C5497 +
          (((C1351 * C316 + C5498 * C523 + C1352 * C1443 + C5420 * C1671) *
                C70 +
            (C1351 * C322 + C5498 * C527 + C1352 * C1447 + C5420 * C1673) *
                C61) *
               C309 +
           ((C1351 * C317 + C5498 * C524 + C1352 * C1444 + C5420 * C1672) *
                C70 +
            (C1351 * C323 + C5498 * C528 + C1352 * C1448 + C5420 * C1674) *
                C61) *
               C5320) *
              C5394) *
         C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1351 * C71 + C5498 * C231 + C1352 * C620 + C5420 * C827) * C105 +
            (C1351 * C106 + C5498 * C257 + C1352 * C662 + C5420 * C861) * C65) *
               C309 +
           ((C1351 * C72 + C5498 * C232 + C1352 * C621 + C5420 * C829) * C105 +
            (C1351 * C107 + C5498 * C258 + C1352 * C663 + C5420 * C863) * C65) *
               C5320) *
              C5497 +
          (((C1351 * C316 + C5498 * C523 + C1352 * C1443 + C5420 * C1671) *
                C105 +
            (C1351 * C358 + C5498 * C557 + C1352 * C1485 + C5420 * C1709) *
                C65) *
               C309 +
           ((C1351 * C317 + C5498 * C524 + C1352 * C1444 + C5420 * C1672) *
                C105 +
            (C1351 * C359 + C5498 * C558 + C1352 * C1486 + C5420 * C1710) *
                C65) *
               C5320) *
              C5394) *
         C61 * C64) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1351 * C71 + C5498 * C231 + C1352 * C620 + C5420 * C827) * C132 +
            (C1351 * C133 + C5498 * C279 + C1352 * C696 + C5420 * C891) * C64) *
               C309 +
           ((C1351 * C72 + C5498 * C232 + C1352 * C621 + C5420 * C829) * C132 +
            (C1351 * C134 + C5498 * C280 + C1352 * C697 + C5420 * C893) * C64) *
               C5320) *
              C5497 +
          (((C1351 * C316 + C5498 * C523 + C1352 * C1443 + C5420 * C1671) *
                C132 +
            (C1351 * C392 + C5498 * C587 + C1352 * C1523 + C5420 * C1745) *
                C64) *
               C309 +
           ((C1351 * C317 + C5498 * C524 + C1352 * C1444 + C5420 * C1672) *
                C132 +
            (C1351 * C393 + C5498 * C588 + C1352 * C1524 + C5420 * C1746) *
                C64) *
               C5320) *
              C5394) *
         C65 * C61) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::pow(Pi, 2.5) *
         (((C314 * C71 + C309 * C75 + C315 * C72 + C5320 * C76) * C70 +
           (C314 * C79 + C309 * C83 + C315 * C80 + C5320 * C84) * C61) *
              C311 +
          ((C314 * C316 + C309 * C320 + C315 * C317 + C5320 * C321) * C70 +
           (C314 * C322 + C309 * C328 + C315 * C323 + C5320 * C329) * C61) *
              C312 +
          ((C314 * C318 + C309 * C324 + C315 * C319 + C5320 * C325) * C70 +
           (C314 * C326 + C309 * C330 + C315 * C327 + C5320 * C331) * C61) *
              C313) *
         C5356 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C66 * C71 + C57 * C75 + C67 * C72 + C58 * C76 + C68 * C73 +
           C59 * C77 + C69 * C74 + C60 * C78) *
              C70 +
          (C66 * C79 + C57 * C83 + C67 * C80 + C58 * C84 + C68 * C81 +
           C59 * C85 + C69 * C82 + C60 * C86) *
              C61) *
         C5345 * C5356 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C314 * C71 + C309 * C75 + C315 * C72 + C5320 * C76) * C70 +
           (C314 * C79 + C309 * C83 + C315 * C80 + C5320 * C84) * C61) *
              C5345 * C617 +
          ((C314 * C620 + C309 * C624 + C315 * C621 + C5320 * C625) * C70 +
           (C314 * C626 + C309 * C632 + C315 * C627 + C5320 * C633) * C61) *
              C5345 * C618 +
          ((C314 * C622 + C309 * C628 + C315 * C623 + C5320 * C629) * C70 +
           (C314 * C630 + C309 * C634 + C315 * C631 + C5320 * C635) * C61) *
              C5345 * C619) *
         C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::pow(Pi, 2.5) *
         (((C314 * C71 + C309 * C75 + C315 * C72 + C5320 * C76) * C105 +
           (C314 * C106 + C309 * C110 + C315 * C107 + C5320 * C111) * C65) *
              C311 +
          ((C314 * C316 + C309 * C320 + C315 * C317 + C5320 * C321) * C105 +
           (C314 * C358 + C309 * C362 + C315 * C359 + C5320 * C363) * C65) *
              C312 +
          ((C314 * C318 + C309 * C324 + C315 * C319 + C5320 * C325) * C105 +
           (C314 * C360 + C309 * C364 + C315 * C361 + C5320 * C365) * C65) *
              C313) *
         C5356 * C61 * C64) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C66 * C71 + C57 * C75 + C67 * C72 + C58 * C76 + C68 * C73 +
           C59 * C77 + C69 * C74 + C60 * C78) *
              C105 +
          (C66 * C106 + C57 * C110 + C67 * C107 + C58 * C111 + C68 * C108 +
           C59 * C112 + C69 * C109 + C60 * C113) *
              C65) *
         C5345 * C5356 * C61 * C64) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C314 * C71 + C309 * C75 + C315 * C72 + C5320 * C76) * C105 +
           (C314 * C106 + C309 * C110 + C315 * C107 + C5320 * C111) * C65) *
              C5345 * C617 +
          ((C314 * C620 + C309 * C624 + C315 * C621 + C5320 * C625) * C105 +
           (C314 * C662 + C309 * C666 + C315 * C663 + C5320 * C667) * C65) *
              C5345 * C618 +
          ((C314 * C622 + C309 * C628 + C315 * C623 + C5320 * C629) * C105 +
           (C314 * C664 + C309 * C668 + C315 * C665 + C5320 * C669) * C65) *
              C5345 * C619) *
         C61 * C64) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (-std::pow(Pi, 2.5) *
         (((C314 * C71 + C309 * C75 + C315 * C72 + C5320 * C76) * C132 +
           (C314 * C133 + C309 * C137 + C315 * C134 + C5320 * C138) * C64) *
              C311 +
          ((C314 * C316 + C309 * C320 + C315 * C317 + C5320 * C321) * C132 +
           (C314 * C392 + C309 * C396 + C315 * C393 + C5320 * C397) * C64) *
              C312 +
          ((C314 * C318 + C309 * C324 + C315 * C319 + C5320 * C325) * C132 +
           (C314 * C394 + C309 * C398 + C315 * C395 + C5320 * C399) * C64) *
              C313) *
         C5356 * C65 * C61) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C66 * C71 + C57 * C75 + C67 * C72 + C58 * C76 + C68 * C73 +
           C59 * C77 + C69 * C74 + C60 * C78) *
              C132 +
          (C66 * C133 + C57 * C137 + C67 * C134 + C58 * C138 + C68 * C135 +
           C59 * C139 + C69 * C136 + C60 * C140) *
              C64) *
         C5345 * C5356 * C65 * C61) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C314 * C71 + C309 * C75 + C315 * C72 + C5320 * C76) * C132 +
           (C314 * C133 + C309 * C137 + C315 * C134 + C5320 * C138) * C64) *
              C5345 * C617 +
          ((C314 * C620 + C309 * C624 + C315 * C621 + C5320 * C625) * C132 +
           (C314 * C696 + C309 * C700 + C315 * C697 + C5320 * C701) * C64) *
              C5345 * C618 +
          ((C314 * C622 + C309 * C628 + C315 * C623 + C5320 * C629) * C132 +
           (C314 * C698 + C309 * C702 + C315 * C699 + C5320 * C703) * C64) *
              C5345 * C619) *
         C65 * C61) /
            (p * q * std::sqrt(p + q));
    d2eeyx[2] += (-std::pow(Pi, 2.5) *
                  (((C426 * C71 + C311 * C160 + C427 * C316 + C312 * C429 +
                     C428 * C318 + C313 * C430) *
                        C70 +
                    (C426 * C79 + C311 * C164 + C427 * C322 + C312 * C433 +
                     C428 * C326 + C313 * C434) *
                        C61) *
                       C5356 * C309 +
                   ((C426 * C72 + C311 * C161 + C427 * C317 + C312 * C431 +
                     C428 * C319 + C313 * C432) *
                        C70 +
                    (C426 * C80 + C311 * C165 + C427 * C323 + C312 * C435 +
                     C428 * C327 + C313 * C436) *
                        C61) *
                       C5356 * C5320) *
                  C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C159 * C71 + C5345 * C160) * C70 +
                    (C159 * C79 + C5345 * C164) * C61) *
                       C5356 * C57 +
                   ((C159 * C72 + C5345 * C161) * C70 +
                    (C159 * C80 + C5345 * C165) * C61) *
                       C5356 * C58 +
                   ((C159 * C73 + C5345 * C162) * C70 +
                    (C159 * C81 + C5345 * C166) * C61) *
                       C5356 * C59 +
                   ((C159 * C74 + C5345 * C163) * C70 +
                    (C159 * C82 + C5345 * C167) * C61) *
                       C5356 * C60) *
                  C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C159 * C71 + C5345 * C160) * C70 +
                     (C159 * C79 + C5345 * C164) * C61) *
                        C617 +
                    ((C159 * C620 + C5345 * C730) * C70 +
                     (C159 * C626 + C5345 * C734) * C61) *
                        C618 +
                    ((C159 * C622 + C5345 * C731) * C70 +
                     (C159 * C630 + C5345 * C735) * C61) *
                        C619) *
                       C309 +
                   (((C159 * C72 + C5345 * C161) * C70 +
                     (C159 * C80 + C5345 * C165) * C61) *
                        C617 +
                    ((C159 * C621 + C5345 * C732) * C70 +
                     (C159 * C627 + C5345 * C736) * C61) *
                        C618 +
                    ((C159 * C623 + C5345 * C733) * C70 +
                     (C159 * C631 + C5345 * C737) * C61) *
                        C619) *
                       C5320) *
                  C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[2] += (-std::pow(Pi, 2.5) *
                  (((C426 * C71 + C311 * C160 + C427 * C316 + C312 * C429 +
                     C428 * C318 + C313 * C430) *
                        C105 +
                    (C426 * C106 + C311 * C186 + C427 * C358 + C312 * C463 +
                     C428 * C360 + C313 * C464) *
                        C65) *
                       C5356 * C309 +
                   ((C426 * C72 + C311 * C161 + C427 * C317 + C312 * C431 +
                     C428 * C319 + C313 * C432) *
                        C105 +
                    (C426 * C107 + C311 * C187 + C427 * C359 + C312 * C465 +
                     C428 * C361 + C313 * C466) *
                        C65) *
                       C5356 * C5320) *
                  C61 * C64) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C159 * C71 + C5345 * C160) * C105 +
                    (C159 * C106 + C5345 * C186) * C65) *
                       C5356 * C57 +
                   ((C159 * C72 + C5345 * C161) * C105 +
                    (C159 * C107 + C5345 * C187) * C65) *
                       C5356 * C58 +
                   ((C159 * C73 + C5345 * C162) * C105 +
                    (C159 * C108 + C5345 * C188) * C65) *
                       C5356 * C59 +
                   ((C159 * C74 + C5345 * C163) * C105 +
                    (C159 * C109 + C5345 * C189) * C65) *
                       C5356 * C60) *
                  C61 * C64) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C159 * C71 + C5345 * C160) * C105 +
                     (C159 * C106 + C5345 * C186) * C65) *
                        C617 +
                    ((C159 * C620 + C5345 * C730) * C105 +
                     (C159 * C662 + C5345 * C764) * C65) *
                        C618 +
                    ((C159 * C622 + C5345 * C731) * C105 +
                     (C159 * C664 + C5345 * C765) * C65) *
                        C619) *
                       C309 +
                   (((C159 * C72 + C5345 * C161) * C105 +
                     (C159 * C107 + C5345 * C187) * C65) *
                        C617 +
                    ((C159 * C621 + C5345 * C732) * C105 +
                     (C159 * C663 + C5345 * C766) * C65) *
                        C618 +
                    ((C159 * C623 + C5345 * C733) * C105 +
                     (C159 * C665 + C5345 * C767) * C65) *
                        C619) *
                       C5320) *
                  C61 * C64) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[2] += (-std::pow(Pi, 2.5) *
                  (((C426 * C71 + C311 * C160 + C427 * C316 + C312 * C429 +
                     C428 * C318 + C313 * C430) *
                        C132 +
                    (C426 * C133 + C311 * C208 + C427 * C392 + C312 * C493 +
                     C428 * C394 + C313 * C494) *
                        C64) *
                       C5356 * C309 +
                   ((C426 * C72 + C311 * C161 + C427 * C317 + C312 * C431 +
                     C428 * C319 + C313 * C432) *
                        C132 +
                    (C426 * C134 + C311 * C209 + C427 * C393 + C312 * C495 +
                     C428 * C395 + C313 * C496) *
                        C64) *
                       C5356 * C5320) *
                  C65 * C61) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C159 * C71 + C5345 * C160) * C132 +
                    (C159 * C133 + C5345 * C208) * C64) *
                       C5356 * C57 +
                   ((C159 * C72 + C5345 * C161) * C132 +
                    (C159 * C134 + C5345 * C209) * C64) *
                       C5356 * C58 +
                   ((C159 * C73 + C5345 * C162) * C132 +
                    (C159 * C135 + C5345 * C210) * C64) *
                       C5356 * C59 +
                   ((C159 * C74 + C5345 * C163) * C132 +
                    (C159 * C136 + C5345 * C211) * C64) *
                       C5356 * C60) *
                  C65 * C61) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C159 * C71 + C5345 * C160) * C132 +
                     (C159 * C133 + C5345 * C208) * C64) *
                        C617 +
                    ((C159 * C620 + C5345 * C730) * C132 +
                     (C159 * C696 + C5345 * C794) * C64) *
                        C618 +
                    ((C159 * C622 + C5345 * C731) * C132 +
                     (C159 * C698 + C5345 * C795) * C64) *
                        C619) *
                       C309 +
                   (((C159 * C72 + C5345 * C161) * C132 +
                     (C159 * C134 + C5345 * C209) * C64) *
                        C617 +
                    ((C159 * C621 + C5345 * C732) * C132 +
                     (C159 * C697 + C5345 * C796) * C64) *
                        C618 +
                    ((C159 * C623 + C5345 * C733) * C132 +
                     (C159 * C699 + C5345 * C797) * C64) *
                        C619) *
                       C5320) *
                  C65 * C61) /
                     (p * q * std::sqrt(p + q));
    d2eezx[2] += (-std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C5356 * C231) * C70 +
                     (C230 * C79 + C5356 * C235) * C61) *
                        C309 +
                    ((C230 * C72 + C5356 * C232) * C70 +
                     (C230 * C80 + C5356 * C236) * C61) *
                        C5320) *
                       C311 +
                   (((C230 * C316 + C5356 * C523) * C70 +
                     (C230 * C322 + C5356 * C527) * C61) *
                        C309 +
                    ((C230 * C317 + C5356 * C524) * C70 +
                     (C230 * C323 + C5356 * C528) * C61) *
                        C5320) *
                       C312 +
                   (((C230 * C318 + C5356 * C525) * C70 +
                     (C230 * C326 + C5356 * C529) * C61) *
                        C309 +
                    ((C230 * C319 + C5356 * C526) * C70 +
                     (C230 * C327 + C5356 * C530) * C61) *
                        C5320) *
                       C313) *
                  C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C230 * C71 + C5356 * C231) * C70 +
                    (C230 * C79 + C5356 * C235) * C61) *
                       C57 +
                   ((C230 * C72 + C5356 * C232) * C70 +
                    (C230 * C80 + C5356 * C236) * C61) *
                       C58 +
                   ((C230 * C73 + C5356 * C233) * C70 +
                    (C230 * C81 + C5356 * C237) * C61) *
                       C59 +
                   ((C230 * C74 + C5356 * C234) * C70 +
                    (C230 * C82 + C5356 * C238) * C61) *
                       C60) *
                  C5345 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C824 * C71 + C617 * C231 + C825 * C620 + C618 * C827 +
                     C826 * C622 + C619 * C828) *
                        C70 +
                    (C824 * C79 + C617 * C235 + C825 * C626 + C618 * C831 +
                     C826 * C630 + C619 * C832) *
                        C61) *
                       C309 +
                   ((C824 * C72 + C617 * C232 + C825 * C621 + C618 * C829 +
                     C826 * C623 + C619 * C830) *
                        C70 +
                    (C824 * C80 + C617 * C236 + C825 * C627 + C618 * C833 +
                     C826 * C631 + C619 * C834) *
                        C61) *
                       C5320) *
                  C5345 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezy[2] += (-std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C5356 * C231) * C105 +
                     (C230 * C106 + C5356 * C257) * C65) *
                        C309 +
                    ((C230 * C72 + C5356 * C232) * C105 +
                     (C230 * C107 + C5356 * C258) * C65) *
                        C5320) *
                       C311 +
                   (((C230 * C316 + C5356 * C523) * C105 +
                     (C230 * C358 + C5356 * C557) * C65) *
                        C309 +
                    ((C230 * C317 + C5356 * C524) * C105 +
                     (C230 * C359 + C5356 * C558) * C65) *
                        C5320) *
                       C312 +
                   (((C230 * C318 + C5356 * C525) * C105 +
                     (C230 * C360 + C5356 * C559) * C65) *
                        C309 +
                    ((C230 * C319 + C5356 * C526) * C105 +
                     (C230 * C361 + C5356 * C560) * C65) *
                        C5320) *
                       C313) *
                  C61 * C64) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C230 * C71 + C5356 * C231) * C105 +
                    (C230 * C106 + C5356 * C257) * C65) *
                       C57 +
                   ((C230 * C72 + C5356 * C232) * C105 +
                    (C230 * C107 + C5356 * C258) * C65) *
                       C58 +
                   ((C230 * C73 + C5356 * C233) * C105 +
                    (C230 * C108 + C5356 * C259) * C65) *
                       C59 +
                   ((C230 * C74 + C5356 * C234) * C105 +
                    (C230 * C109 + C5356 * C260) * C65) *
                       C60) *
                  C5345 * C61 * C64) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C824 * C71 + C617 * C231 + C825 * C620 + C618 * C827 +
                     C826 * C622 + C619 * C828) *
                        C105 +
                    (C824 * C106 + C617 * C257 + C825 * C662 + C618 * C861 +
                     C826 * C664 + C619 * C862) *
                        C65) *
                       C309 +
                   ((C824 * C72 + C617 * C232 + C825 * C621 + C618 * C829 +
                     C826 * C623 + C619 * C830) *
                        C105 +
                    (C824 * C107 + C617 * C258 + C825 * C663 + C618 * C863 +
                     C826 * C665 + C619 * C864) *
                        C65) *
                       C5320) *
                  C5345 * C61 * C64) /
                     (p * q * std::sqrt(p + q));
    d2eezz[2] += (-std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C5356 * C231) * C132 +
                     (C230 * C133 + C5356 * C279) * C64) *
                        C309 +
                    ((C230 * C72 + C5356 * C232) * C132 +
                     (C230 * C134 + C5356 * C280) * C64) *
                        C5320) *
                       C311 +
                   (((C230 * C316 + C5356 * C523) * C132 +
                     (C230 * C392 + C5356 * C587) * C64) *
                        C309 +
                    ((C230 * C317 + C5356 * C524) * C132 +
                     (C230 * C393 + C5356 * C588) * C64) *
                        C5320) *
                       C312 +
                   (((C230 * C318 + C5356 * C525) * C132 +
                     (C230 * C394 + C5356 * C589) * C64) *
                        C309 +
                    ((C230 * C319 + C5356 * C526) * C132 +
                     (C230 * C395 + C5356 * C590) * C64) *
                        C5320) *
                       C313) *
                  C65 * C61) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C230 * C71 + C5356 * C231) * C132 +
                    (C230 * C133 + C5356 * C279) * C64) *
                       C57 +
                   ((C230 * C72 + C5356 * C232) * C132 +
                    (C230 * C134 + C5356 * C280) * C64) *
                       C58 +
                   ((C230 * C73 + C5356 * C233) * C132 +
                    (C230 * C135 + C5356 * C281) * C64) *
                       C59 +
                   ((C230 * C74 + C5356 * C234) * C132 +
                    (C230 * C136 + C5356 * C282) * C64) *
                       C60) *
                  C5345 * C65 * C61) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C824 * C71 + C617 * C231 + C825 * C620 + C618 * C827 +
                     C826 * C622 + C619 * C828) *
                        C132 +
                    (C824 * C133 + C617 * C279 + C825 * C696 + C618 * C891 +
                     C826 * C698 + C619 * C892) *
                        C64) *
                       C309 +
                   ((C824 * C72 + C617 * C232 + C825 * C621 + C618 * C829 +
                     C826 * C623 + C619 * C830) *
                        C132 +
                    (C824 * C134 + C617 * C280 + C825 * C697 + C618 * C893 +
                     C826 * C699 + C619 * C894) *
                        C64) *
                       C5320) *
                  C5345 * C65 * C61) /
                     (p * q * std::sqrt(p + q));
    d2eexx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C926 * C71 + C5516 * C75 + C927 * C72 + C5517 * C76 +
                     C928 * C73 + C923 * C77) *
                        C70 +
                    (C926 * C79 + C5516 * C83 + C927 * C80 + C5517 * C84 +
                     C928 * C81 + C923 * C85) *
                        C61) *
                       C5345 * C5498 +
                   ((C926 * C620 + C5516 * C624 + C927 * C621 + C5517 * C625 +
                     C928 * C1183 + C923 * C1184) *
                        C70 +
                    (C926 * C626 + C5516 * C632 + C927 * C627 + C5517 * C633 +
                     C928 * C1185 + C923 * C1186) *
                        C61) *
                       C5345 * C5420) *
                  C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C926 * C71 + C5516 * C75 + C927 * C72 + C5517 * C76 +
                     C928 * C73 + C923 * C77) *
                        C105 +
                    (C926 * C106 + C5516 * C110 + C927 * C107 + C5517 * C111 +
                     C928 * C108 + C923 * C112) *
                        C65) *
                       C5345 * C5498 +
                   ((C926 * C620 + C5516 * C624 + C927 * C621 + C5517 * C625 +
                     C928 * C1183 + C923 * C1184) *
                        C105 +
                    (C926 * C662 + C5516 * C666 + C927 * C663 + C5517 * C667 +
                     C928 * C1213 + C923 * C1214) *
                        C65) *
                       C5345 * C5420) *
                  C61 * C64) /
                 (p * q * std::sqrt(p + q));
    d2eexz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C926 * C71 + C5516 * C75 + C927 * C72 + C5517 * C76 +
                     C928 * C73 + C923 * C77) *
                        C132 +
                    (C926 * C133 + C5516 * C137 + C927 * C134 + C5517 * C138 +
                     C928 * C135 + C923 * C139) *
                        C64) *
                       C5345 * C5498 +
                   ((C926 * C620 + C5516 * C624 + C927 * C621 + C5517 * C625 +
                     C928 * C1183 + C923 * C1184) *
                        C132 +
                    (C926 * C696 + C5516 * C700 + C927 * C697 + C5517 * C701 +
                     C928 * C1241 + C923 * C1242) *
                        C64) *
                       C5345 * C5420) *
                  C65 * C61) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C159 * C71 + C5345 * C160) * C70 +
                     (C159 * C79 + C5345 * C164) * C61) *
                        C5498 +
                    ((C159 * C620 + C5345 * C730) * C70 +
                     (C159 * C626 + C5345 * C734) * C61) *
                        C5420) *
                       C5516 +
                   (((C159 * C72 + C5345 * C161) * C70 +
                     (C159 * C80 + C5345 * C165) * C61) *
                        C5498 +
                    ((C159 * C621 + C5345 * C732) * C70 +
                     (C159 * C627 + C5345 * C736) * C61) *
                        C5420) *
                       C5517 +
                   (((C159 * C73 + C5345 * C162) * C70 +
                     (C159 * C81 + C5345 * C166) * C61) *
                        C5498 +
                    ((C159 * C1183 + C5345 * C1269) * C70 +
                     (C159 * C1185 + C5345 * C1270) * C61) *
                        C5420) *
                       C923) *
                  C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C159 * C71 + C5345 * C160) * C105 +
                     (C159 * C106 + C5345 * C186) * C65) *
                        C5498 +
                    ((C159 * C620 + C5345 * C730) * C105 +
                     (C159 * C662 + C5345 * C764) * C65) *
                        C5420) *
                       C5516 +
                   (((C159 * C72 + C5345 * C161) * C105 +
                     (C159 * C107 + C5345 * C187) * C65) *
                        C5498 +
                    ((C159 * C621 + C5345 * C732) * C105 +
                     (C159 * C663 + C5345 * C766) * C65) *
                        C5420) *
                       C5517 +
                   (((C159 * C73 + C5345 * C162) * C105 +
                     (C159 * C108 + C5345 * C188) * C65) *
                        C5498 +
                    ((C159 * C1183 + C5345 * C1269) * C105 +
                     (C159 * C1213 + C5345 * C1297) * C65) *
                        C5420) *
                       C923) *
                  C61 * C64) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C159 * C71 + C5345 * C160) * C132 +
                     (C159 * C133 + C5345 * C208) * C64) *
                        C5498 +
                    ((C159 * C620 + C5345 * C730) * C132 +
                     (C159 * C696 + C5345 * C794) * C64) *
                        C5420) *
                       C5516 +
                   (((C159 * C72 + C5345 * C161) * C132 +
                     (C159 * C134 + C5345 * C209) * C64) *
                        C5498 +
                    ((C159 * C621 + C5345 * C732) * C132 +
                     (C159 * C697 + C5345 * C796) * C64) *
                        C5420) *
                       C5517 +
                   (((C159 * C73 + C5345 * C162) * C132 +
                     (C159 * C135 + C5345 * C210) * C64) *
                        C5498 +
                    ((C159 * C1183 + C5345 * C1269) * C132 +
                     (C159 * C1241 + C5345 * C1324) * C64) *
                        C5420) *
                       C923) *
                  C65 * C61) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1351 * C71 + C5498 * C231 + C1352 * C620 + C5420 * C827) * C70 +
           (C1351 * C79 + C5498 * C235 + C1352 * C626 + C5420 * C831) * C61) *
              C5516 +
          ((C1351 * C72 + C5498 * C232 + C1352 * C621 + C5420 * C829) * C70 +
           (C1351 * C80 + C5498 * C236 + C1352 * C627 + C5420 * C833) * C61) *
              C5517 +
          ((C1351 * C73 + C5498 * C233 + C1352 * C1183 + C5420 * C1353) * C70 +
           (C1351 * C81 + C5498 * C237 + C1352 * C1185 + C5420 * C1354) * C61) *
              C923) *
         C5345 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1351 * C71 + C5498 * C231 + C1352 * C620 + C5420 * C827) * C105 +
           (C1351 * C106 + C5498 * C257 + C1352 * C662 + C5420 * C861) * C65) *
              C5516 +
          ((C1351 * C72 + C5498 * C232 + C1352 * C621 + C5420 * C829) * C105 +
           (C1351 * C107 + C5498 * C258 + C1352 * C663 + C5420 * C863) * C65) *
              C5517 +
          ((C1351 * C73 + C5498 * C233 + C1352 * C1183 + C5420 * C1353) * C105 +
           (C1351 * C108 + C5498 * C259 + C1352 * C1213 + C5420 * C1381) *
               C65) *
              C923) *
         C5345 * C61 * C64) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1351 * C71 + C5498 * C231 + C1352 * C620 + C5420 * C827) * C132 +
           (C1351 * C133 + C5498 * C279 + C1352 * C696 + C5420 * C891) * C64) *
              C5516 +
          ((C1351 * C72 + C5498 * C232 + C1352 * C621 + C5420 * C829) * C132 +
           (C1351 * C134 + C5498 * C280 + C1352 * C697 + C5420 * C893) * C64) *
              C5517 +
          ((C1351 * C73 + C5498 * C233 + C1352 * C1183 + C5420 * C1353) * C132 +
           (C1351 * C135 + C5498 * C281 + C1352 * C1241 + C5420 * C1408) *
               C64) *
              C923) *
         C5345 * C65 * C61) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C66 * C71 + C57 * C75 + C67 * C72 + C58 * C76 + C68 * C73 +
           C59 * C77 + C69 * C74 + C60 * C78) *
              C70 +
          (C66 * C79 + C57 * C83 + C67 * C80 + C58 * C84 + C68 * C81 +
           C59 * C85 + C69 * C82 + C60 * C86) *
              C61) *
         C5345 * C5356 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C314 * C71 + C309 * C75 + C315 * C72 + C5320 * C76) * C70 +
           (C314 * C79 + C309 * C83 + C315 * C80 + C5320 * C84) * C61) *
              C311 +
          ((C314 * C316 + C309 * C320 + C315 * C317 + C5320 * C321) * C70 +
           (C314 * C322 + C309 * C328 + C315 * C323 + C5320 * C329) * C61) *
              C312 +
          ((C314 * C318 + C309 * C324 + C315 * C319 + C5320 * C325) * C70 +
           (C314 * C326 + C309 * C330 + C315 * C327 + C5320 * C331) * C61) *
              C313) *
         C5356 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C66 * C71 + C57 * C75 + C67 * C72 + C58 * C76 + C68 * C73 +
           C59 * C77 + C69 * C74 + C60 * C78) *
              C105 +
          (C66 * C106 + C57 * C110 + C67 * C107 + C58 * C111 + C68 * C108 +
           C59 * C112 + C69 * C109 + C60 * C113) *
              C65) *
         C5345 * C5356 * C61 * C64) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C314 * C71 + C309 * C75 + C315 * C72 + C5320 * C76) * C105 +
           (C314 * C106 + C309 * C110 + C315 * C107 + C5320 * C111) * C65) *
              C311 +
          ((C314 * C316 + C309 * C320 + C315 * C317 + C5320 * C321) * C105 +
           (C314 * C358 + C309 * C362 + C315 * C359 + C5320 * C363) * C65) *
              C312 +
          ((C314 * C318 + C309 * C324 + C315 * C319 + C5320 * C325) * C105 +
           (C314 * C360 + C309 * C364 + C315 * C361 + C5320 * C365) * C65) *
              C313) *
         C5356 * C61 * C64) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C66 * C71 + C57 * C75 + C67 * C72 + C58 * C76 + C68 * C73 +
           C59 * C77 + C69 * C74 + C60 * C78) *
              C132 +
          (C66 * C133 + C57 * C137 + C67 * C134 + C58 * C138 + C68 * C135 +
           C59 * C139 + C69 * C136 + C60 * C140) *
              C64) *
         C5345 * C5356 * C65 * C61) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C314 * C71 + C309 * C75 + C315 * C72 + C5320 * C76) * C132 +
           (C314 * C133 + C309 * C137 + C315 * C134 + C5320 * C138) * C64) *
              C311 +
          ((C314 * C316 + C309 * C320 + C315 * C317 + C5320 * C321) * C132 +
           (C314 * C392 + C309 * C396 + C315 * C393 + C5320 * C397) * C64) *
              C312 +
          ((C314 * C318 + C309 * C324 + C315 * C319 + C5320 * C325) * C132 +
           (C314 * C394 + C309 * C398 + C315 * C395 + C5320 * C399) * C64) *
              C313) *
         C5356 * C65 * C61) /
            (p * q * std::sqrt(p + q));
    d2eeyx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C159 * C71 + C5345 * C160) * C70 +
                    (C159 * C79 + C5345 * C164) * C61) *
                       C5356 * C57 +
                   ((C159 * C72 + C5345 * C161) * C70 +
                    (C159 * C80 + C5345 * C165) * C61) *
                       C5356 * C58 +
                   ((C159 * C73 + C5345 * C162) * C70 +
                    (C159 * C81 + C5345 * C166) * C61) *
                       C5356 * C59 +
                   ((C159 * C74 + C5345 * C163) * C70 +
                    (C159 * C82 + C5345 * C167) * C61) *
                       C5356 * C60) *
                  C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C426 * C71 + C311 * C160 + C427 * C316 + C312 * C429 +
                     C428 * C318 + C313 * C430) *
                        C70 +
                    (C426 * C79 + C311 * C164 + C427 * C322 + C312 * C433 +
                     C428 * C326 + C313 * C434) *
                        C61) *
                       C5356 * C309 +
                   ((C426 * C72 + C311 * C161 + C427 * C317 + C312 * C431 +
                     C428 * C319 + C313 * C432) *
                        C70 +
                    (C426 * C80 + C311 * C165 + C427 * C323 + C312 * C435 +
                     C428 * C327 + C313 * C436) *
                        C61) *
                       C5356 * C5320) *
                  C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C159 * C71 + C5345 * C160) * C105 +
                    (C159 * C106 + C5345 * C186) * C65) *
                       C5356 * C57 +
                   ((C159 * C72 + C5345 * C161) * C105 +
                    (C159 * C107 + C5345 * C187) * C65) *
                       C5356 * C58 +
                   ((C159 * C73 + C5345 * C162) * C105 +
                    (C159 * C108 + C5345 * C188) * C65) *
                       C5356 * C59 +
                   ((C159 * C74 + C5345 * C163) * C105 +
                    (C159 * C109 + C5345 * C189) * C65) *
                       C5356 * C60) *
                  C61 * C64) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C426 * C71 + C311 * C160 + C427 * C316 + C312 * C429 +
                     C428 * C318 + C313 * C430) *
                        C105 +
                    (C426 * C106 + C311 * C186 + C427 * C358 + C312 * C463 +
                     C428 * C360 + C313 * C464) *
                        C65) *
                       C5356 * C309 +
                   ((C426 * C72 + C311 * C161 + C427 * C317 + C312 * C431 +
                     C428 * C319 + C313 * C432) *
                        C105 +
                    (C426 * C107 + C311 * C187 + C427 * C359 + C312 * C465 +
                     C428 * C361 + C313 * C466) *
                        C65) *
                       C5356 * C5320) *
                  C61 * C64) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C159 * C71 + C5345 * C160) * C132 +
                    (C159 * C133 + C5345 * C208) * C64) *
                       C5356 * C57 +
                   ((C159 * C72 + C5345 * C161) * C132 +
                    (C159 * C134 + C5345 * C209) * C64) *
                       C5356 * C58 +
                   ((C159 * C73 + C5345 * C162) * C132 +
                    (C159 * C135 + C5345 * C210) * C64) *
                       C5356 * C59 +
                   ((C159 * C74 + C5345 * C163) * C132 +
                    (C159 * C136 + C5345 * C211) * C64) *
                       C5356 * C60) *
                  C65 * C61) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C426 * C71 + C311 * C160 + C427 * C316 + C312 * C429 +
                     C428 * C318 + C313 * C430) *
                        C132 +
                    (C426 * C133 + C311 * C208 + C427 * C392 + C312 * C493 +
                     C428 * C394 + C313 * C494) *
                        C64) *
                       C5356 * C309 +
                   ((C426 * C72 + C311 * C161 + C427 * C317 + C312 * C431 +
                     C428 * C319 + C313 * C432) *
                        C132 +
                    (C426 * C134 + C311 * C209 + C427 * C393 + C312 * C495 +
                     C428 * C395 + C313 * C496) *
                        C64) *
                       C5356 * C5320) *
                  C65 * C61) /
                     (p * q * std::sqrt(p + q));
    d2eezx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C5356 * C231) * C70 +
                    (C230 * C79 + C5356 * C235) * C61) *
                       C57 +
                   ((C230 * C72 + C5356 * C232) * C70 +
                    (C230 * C80 + C5356 * C236) * C61) *
                       C58 +
                   ((C230 * C73 + C5356 * C233) * C70 +
                    (C230 * C81 + C5356 * C237) * C61) *
                       C59 +
                   ((C230 * C74 + C5356 * C234) * C70 +
                    (C230 * C82 + C5356 * C238) * C61) *
                       C60) *
                  C5345 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C5356 * C231) * C70 +
                     (C230 * C79 + C5356 * C235) * C61) *
                        C309 +
                    ((C230 * C72 + C5356 * C232) * C70 +
                     (C230 * C80 + C5356 * C236) * C61) *
                        C5320) *
                       C311 +
                   (((C230 * C316 + C5356 * C523) * C70 +
                     (C230 * C322 + C5356 * C527) * C61) *
                        C309 +
                    ((C230 * C317 + C5356 * C524) * C70 +
                     (C230 * C323 + C5356 * C528) * C61) *
                        C5320) *
                       C312 +
                   (((C230 * C318 + C5356 * C525) * C70 +
                     (C230 * C326 + C5356 * C529) * C61) *
                        C309 +
                    ((C230 * C319 + C5356 * C526) * C70 +
                     (C230 * C327 + C5356 * C530) * C61) *
                        C5320) *
                       C313) *
                  C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezy[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C5356 * C231) * C105 +
                    (C230 * C106 + C5356 * C257) * C65) *
                       C57 +
                   ((C230 * C72 + C5356 * C232) * C105 +
                    (C230 * C107 + C5356 * C258) * C65) *
                       C58 +
                   ((C230 * C73 + C5356 * C233) * C105 +
                    (C230 * C108 + C5356 * C259) * C65) *
                       C59 +
                   ((C230 * C74 + C5356 * C234) * C105 +
                    (C230 * C109 + C5356 * C260) * C65) *
                       C60) *
                  C5345 * C61 * C64) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C5356 * C231) * C105 +
                     (C230 * C106 + C5356 * C257) * C65) *
                        C309 +
                    ((C230 * C72 + C5356 * C232) * C105 +
                     (C230 * C107 + C5356 * C258) * C65) *
                        C5320) *
                       C311 +
                   (((C230 * C316 + C5356 * C523) * C105 +
                     (C230 * C358 + C5356 * C557) * C65) *
                        C309 +
                    ((C230 * C317 + C5356 * C524) * C105 +
                     (C230 * C359 + C5356 * C558) * C65) *
                        C5320) *
                       C312 +
                   (((C230 * C318 + C5356 * C525) * C105 +
                     (C230 * C360 + C5356 * C559) * C65) *
                        C309 +
                    ((C230 * C319 + C5356 * C526) * C105 +
                     (C230 * C361 + C5356 * C560) * C65) *
                        C5320) *
                       C313) *
                  C61 * C64) /
                     (p * q * std::sqrt(p + q));
    d2eezz[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C5356 * C231) * C132 +
                    (C230 * C133 + C5356 * C279) * C64) *
                       C57 +
                   ((C230 * C72 + C5356 * C232) * C132 +
                    (C230 * C134 + C5356 * C280) * C64) *
                       C58 +
                   ((C230 * C73 + C5356 * C233) * C132 +
                    (C230 * C135 + C5356 * C281) * C64) *
                       C59 +
                   ((C230 * C74 + C5356 * C234) * C132 +
                    (C230 * C136 + C5356 * C282) * C64) *
                       C60) *
                  C5345 * C65 * C61) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C5356 * C231) * C132 +
                     (C230 * C133 + C5356 * C279) * C64) *
                        C309 +
                    ((C230 * C72 + C5356 * C232) * C132 +
                     (C230 * C134 + C5356 * C280) * C64) *
                        C5320) *
                       C311 +
                   (((C230 * C316 + C5356 * C523) * C132 +
                     (C230 * C392 + C5356 * C587) * C64) *
                        C309 +
                    ((C230 * C317 + C5356 * C524) * C132 +
                     (C230 * C393 + C5356 * C588) * C64) *
                        C5320) *
                       C312 +
                   (((C230 * C318 + C5356 * C525) * C132 +
                     (C230 * C394 + C5356 * C589) * C64) *
                        C309 +
                    ((C230 * C319 + C5356 * C526) * C132 +
                     (C230 * C395 + C5356 * C590) * C64) *
                        C5320) *
                       C313) *
                  C65 * C61) /
                     (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4705 * C71 + C5488 * C75 + C4698 * C72 + C5320 * C76) * C70 +
           (C4705 * C79 + C5488 * C83 + C4698 * C80 + C5320 * C84) * C61) *
              C5518 +
          ((C4705 * C316 + C5488 * C320 + C4698 * C317 + C5320 * C321) * C70 +
           (C4705 * C322 + C5488 * C328 + C4698 * C323 + C5320 * C329) * C61) *
              C5519 +
          ((C4705 * C318 + C5488 * C324 + C4698 * C319 + C5320 * C325) * C70 +
           (C4705 * C326 + C5488 * C330 + C4698 * C327 + C5320 * C331) * C61) *
              C2459) *
         C5356 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4705 * C71 + C5488 * C75 + C4698 * C72 + C5320 * C76) * C105 +
           (C4705 * C106 + C5488 * C110 + C4698 * C107 + C5320 * C111) * C65) *
              C5518 +
          ((C4705 * C316 + C5488 * C320 + C4698 * C317 + C5320 * C321) * C105 +
           (C4705 * C358 + C5488 * C362 + C4698 * C359 + C5320 * C363) * C65) *
              C5519 +
          ((C4705 * C318 + C5488 * C324 + C4698 * C319 + C5320 * C325) * C105 +
           (C4705 * C360 + C5488 * C364 + C4698 * C361 + C5320 * C365) * C65) *
              C2459) *
         C5356 * C61 * C64) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4705 * C71 + C5488 * C75 + C4698 * C72 + C5320 * C76) * C132 +
           (C4705 * C133 + C5488 * C137 + C4698 * C134 + C5320 * C138) * C64) *
              C5518 +
          ((C4705 * C316 + C5488 * C320 + C4698 * C317 + C5320 * C321) * C132 +
           (C4705 * C392 + C5488 * C396 + C4698 * C393 + C5320 * C397) * C64) *
              C5519 +
          ((C4705 * C318 + C5488 * C324 + C4698 * C319 + C5320 * C325) * C132 +
           (C4705 * C394 + C5488 * C398 + C4698 * C395 + C5320 * C399) * C64) *
              C2459) *
         C5356 * C65 * C61) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2540 * C71 + C5518 * C160 + C2541 * C316 + C5519 * C429 +
                     C2542 * C318 + C2459 * C430) *
                        C70 +
                    (C2540 * C79 + C5518 * C164 + C2541 * C322 + C5519 * C433 +
                     C2542 * C326 + C2459 * C434) *
                        C61) *
                       C5356 * C5488 +
                   ((C2540 * C72 + C5518 * C161 + C2541 * C317 + C5519 * C431 +
                     C2542 * C319 + C2459 * C432) *
                        C70 +
                    (C2540 * C80 + C5518 * C165 + C2541 * C323 + C5519 * C435 +
                     C2542 * C327 + C2459 * C436) *
                        C61) *
                       C5356 * C5320) *
                  C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2540 * C71 + C5518 * C160 + C2541 * C316 + C5519 * C429 +
                     C2542 * C318 + C2459 * C430) *
                        C105 +
                    (C2540 * C106 + C5518 * C186 + C2541 * C358 + C5519 * C463 +
                     C2542 * C360 + C2459 * C464) *
                        C65) *
                       C5356 * C5488 +
                   ((C2540 * C72 + C5518 * C161 + C2541 * C317 + C5519 * C431 +
                     C2542 * C319 + C2459 * C432) *
                        C105 +
                    (C2540 * C107 + C5518 * C187 + C2541 * C359 + C5519 * C465 +
                     C2542 * C361 + C2459 * C466) *
                        C65) *
                       C5356 * C5320) *
                  C61 * C64) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2540 * C71 + C5518 * C160 + C2541 * C316 + C5519 * C429 +
                     C2542 * C318 + C2459 * C430) *
                        C132 +
                    (C2540 * C133 + C5518 * C208 + C2541 * C392 + C5519 * C493 +
                     C2542 * C394 + C2459 * C494) *
                        C64) *
                       C5356 * C5488 +
                   ((C2540 * C72 + C5518 * C161 + C2541 * C317 + C5519 * C431 +
                     C2542 * C319 + C2459 * C432) *
                        C132 +
                    (C2540 * C134 + C5518 * C209 + C2541 * C393 + C5519 * C495 +
                     C2542 * C395 + C2459 * C496) *
                        C64) *
                       C5356 * C5320) *
                  C65 * C61) /
                 (p * q * std::sqrt(p + q));
    d2eezx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C5356 * C231) * C70 +
                     (C230 * C79 + C5356 * C235) * C61) *
                        C5488 +
                    ((C230 * C72 + C5356 * C232) * C70 +
                     (C230 * C80 + C5356 * C236) * C61) *
                        C5320) *
                       C5518 +
                   (((C230 * C316 + C5356 * C523) * C70 +
                     (C230 * C322 + C5356 * C527) * C61) *
                        C5488 +
                    ((C230 * C317 + C5356 * C524) * C70 +
                     (C230 * C323 + C5356 * C528) * C61) *
                        C5320) *
                       C5519 +
                   (((C230 * C318 + C5356 * C525) * C70 +
                     (C230 * C326 + C5356 * C529) * C61) *
                        C5488 +
                    ((C230 * C319 + C5356 * C526) * C70 +
                     (C230 * C327 + C5356 * C530) * C61) *
                        C5320) *
                       C2459) *
                  C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eezy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C5356 * C231) * C105 +
                     (C230 * C106 + C5356 * C257) * C65) *
                        C5488 +
                    ((C230 * C72 + C5356 * C232) * C105 +
                     (C230 * C107 + C5356 * C258) * C65) *
                        C5320) *
                       C5518 +
                   (((C230 * C316 + C5356 * C523) * C105 +
                     (C230 * C358 + C5356 * C557) * C65) *
                        C5488 +
                    ((C230 * C317 + C5356 * C524) * C105 +
                     (C230 * C359 + C5356 * C558) * C65) *
                        C5320) *
                       C5519 +
                   (((C230 * C318 + C5356 * C525) * C105 +
                     (C230 * C360 + C5356 * C559) * C65) *
                        C5488 +
                    ((C230 * C319 + C5356 * C526) * C105 +
                     (C230 * C361 + C5356 * C560) * C65) *
                        C5320) *
                       C2459) *
                  C61 * C64) /
                 (p * q * std::sqrt(p + q));
    d2eezz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C5356 * C231) * C132 +
                     (C230 * C133 + C5356 * C279) * C64) *
                        C5488 +
                    ((C230 * C72 + C5356 * C232) * C132 +
                     (C230 * C134 + C5356 * C280) * C64) *
                        C5320) *
                       C5518 +
                   (((C230 * C316 + C5356 * C523) * C132 +
                     (C230 * C392 + C5356 * C587) * C64) *
                        C5488 +
                    ((C230 * C317 + C5356 * C524) * C132 +
                     (C230 * C393 + C5356 * C588) * C64) *
                        C5320) *
                       C5519 +
                   (((C230 * C318 + C5356 * C525) * C132 +
                     (C230 * C394 + C5356 * C589) * C64) *
                        C5488 +
                    ((C230 * C319 + C5356 * C526) * C132 +
                     (C230 * C395 + C5356 * C590) * C64) *
                        C5320) *
                       C2459) *
                  C65 * C61) /
                 (p * q * std::sqrt(p + q));
    d2eexx[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C2014 * C71 + C5315 * C75) * C70 +
                     (C2014 * C79 + C5315 * C83) * C61) *
                        C5518 +
                    ((C2014 * C316 + C5315 * C320) * C70 +
                     (C2014 * C322 + C5315 * C328) * C61) *
                        C5519 +
                    ((C2014 * C318 + C5315 * C324) * C70 +
                     (C2014 * C326 + C5315 * C330) * C61) *
                        C2459) *
                       C5498 +
                   (((C2014 * C620 + C5315 * C624) * C70 +
                     (C2014 * C626 + C5315 * C632) * C61) *
                        C5518 +
                    ((C2014 * C1443 + C5315 * C1445) * C70 +
                     (C2014 * C1447 + C5315 * C1449) * C61) *
                        C5519 +
                    ((C2014 * C3005 + C5315 * C3006) * C70 +
                     (C2014 * C3007 + C5315 * C3008) * C61) *
                        C2459) *
                       C5420) *
                  C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eexy[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C2014 * C71 + C5315 * C75) * C105 +
                     (C2014 * C106 + C5315 * C110) * C65) *
                        C5518 +
                    ((C2014 * C316 + C5315 * C320) * C105 +
                     (C2014 * C358 + C5315 * C362) * C65) *
                        C5519 +
                    ((C2014 * C318 + C5315 * C324) * C105 +
                     (C2014 * C360 + C5315 * C364) * C65) *
                        C2459) *
                       C5498 +
                   (((C2014 * C620 + C5315 * C624) * C105 +
                     (C2014 * C662 + C5315 * C666) * C65) *
                        C5518 +
                    ((C2014 * C1443 + C5315 * C1445) * C105 +
                     (C2014 * C1485 + C5315 * C1487) * C65) *
                        C5519 +
                    ((C2014 * C3005 + C5315 * C3006) * C105 +
                     (C2014 * C3035 + C5315 * C3036) * C65) *
                        C2459) *
                       C5420) *
                  C61 * C64) /
                 (p * q * std::sqrt(p + q));
    d2eexz[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C2014 * C71 + C5315 * C75) * C132 +
                     (C2014 * C133 + C5315 * C137) * C64) *
                        C5518 +
                    ((C2014 * C316 + C5315 * C320) * C132 +
                     (C2014 * C392 + C5315 * C396) * C64) *
                        C5519 +
                    ((C2014 * C318 + C5315 * C324) * C132 +
                     (C2014 * C394 + C5315 * C398) * C64) *
                        C2459) *
                       C5498 +
                   (((C2014 * C620 + C5315 * C624) * C132 +
                     (C2014 * C696 + C5315 * C700) * C64) *
                        C5518 +
                    ((C2014 * C1443 + C5315 * C1445) * C132 +
                     (C2014 * C1523 + C5315 * C1525) * C64) *
                        C5519 +
                    ((C2014 * C3005 + C5315 * C3006) * C132 +
                     (C2014 * C3063 + C5315 * C3064) * C64) *
                        C2459) *
                       C5420) *
                  C65 * C61) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2540 * C71 + C5518 * C160 + C2541 * C316 + C5519 * C429 +
                     C2542 * C318 + C2459 * C430) *
                        C70 +
                    (C2540 * C79 + C5518 * C164 + C2541 * C322 + C5519 * C433 +
                     C2542 * C326 + C2459 * C434) *
                        C61) *
                       C5498 +
                   ((C2540 * C620 + C5518 * C730 + C2541 * C1443 +
                     C5519 * C1561 + C2542 * C3005 + C2459 * C3091) *
                        C70 +
                    (C2540 * C626 + C5518 * C734 + C2541 * C1447 +
                     C5519 * C1563 + C2542 * C3007 + C2459 * C3092) *
                        C61) *
                       C5420) *
                  C5315 * C64 * C65) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2540 * C71 + C5518 * C160 + C2541 * C316 + C5519 * C429 +
                     C2542 * C318 + C2459 * C430) *
                        C105 +
                    (C2540 * C106 + C5518 * C186 + C2541 * C358 + C5519 * C463 +
                     C2542 * C360 + C2459 * C464) *
                        C65) *
                       C5498 +
                   ((C2540 * C620 + C5518 * C730 + C2541 * C1443 +
                     C5519 * C1561 + C2542 * C3005 + C2459 * C3091) *
                        C105 +
                    (C2540 * C662 + C5518 * C764 + C2541 * C1485 +
                     C5519 * C1599 + C2542 * C3035 + C2459 * C3119) *
                        C65) *
                       C5420) *
                  C5315 * C61 * C64) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2540 * C71 + C5518 * C160 + C2541 * C316 + C5519 * C429 +
                     C2542 * C318 + C2459 * C430) *
                        C132 +
                    (C2540 * C133 + C5518 * C208 + C2541 * C392 + C5519 * C493 +
                     C2542 * C394 + C2459 * C494) *
                        C64) *
                       C5498 +
                   ((C2540 * C620 + C5518 * C730 + C2541 * C1443 +
                     C5519 * C1561 + C2542 * C3005 + C2459 * C3091) *
                        C132 +
                    (C2540 * C696 + C5518 * C794 + C2541 * C1523 +
                     C5519 * C1635 + C2542 * C3063 + C2459 * C3146) *
                        C64) *
                       C5420) *
                  C5315 * C65 * C61) /
                 (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1351 * C71 + C5498 * C231 + C1352 * C620 + C5420 * C827) * C70 +
           (C1351 * C79 + C5498 * C235 + C1352 * C626 + C5420 * C831) * C61) *
              C5315 * C5518 +
          ((C1351 * C316 + C5498 * C523 + C1352 * C1443 + C5420 * C1671) * C70 +
           (C1351 * C322 + C5498 * C527 + C1352 * C1447 + C5420 * C1673) *
               C61) *
              C5315 * C5519 +
          ((C1351 * C318 + C5498 * C525 + C1352 * C3005 + C5420 * C3173) * C70 +
           (C1351 * C326 + C5498 * C529 + C1352 * C3007 + C5420 * C3174) *
               C61) *
              C5315 * C2459) *
         C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1351 * C71 + C5498 * C231 + C1352 * C620 + C5420 * C827) * C105 +
           (C1351 * C106 + C5498 * C257 + C1352 * C662 + C5420 * C861) * C65) *
              C5315 * C5518 +
          ((C1351 * C316 + C5498 * C523 + C1352 * C1443 + C5420 * C1671) *
               C105 +
           (C1351 * C358 + C5498 * C557 + C1352 * C1485 + C5420 * C1709) *
               C65) *
              C5315 * C5519 +
          ((C1351 * C318 + C5498 * C525 + C1352 * C3005 + C5420 * C3173) *
               C105 +
           (C1351 * C360 + C5498 * C559 + C1352 * C3035 + C5420 * C3201) *
               C65) *
              C5315 * C2459) *
         C61 * C64) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1351 * C71 + C5498 * C231 + C1352 * C620 + C5420 * C827) * C132 +
           (C1351 * C133 + C5498 * C279 + C1352 * C696 + C5420 * C891) * C64) *
              C5315 * C5518 +
          ((C1351 * C316 + C5498 * C523 + C1352 * C1443 + C5420 * C1671) *
               C132 +
           (C1351 * C392 + C5498 * C587 + C1352 * C1523 + C5420 * C1745) *
               C64) *
              C5315 * C5519 +
          ((C1351 * C318 + C5498 * C525 + C1352 * C3005 + C5420 * C3173) *
               C132 +
           (C1351 * C394 + C5498 * C589 + C1352 * C3063 + C5420 * C3228) *
               C64) *
              C5315 * C2459) *
         C65 * C61) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] += (-std::pow(Pi, 2.5) *
                  (((C2014 * C71 + C5315 * C75) * C70 +
                    (C2014 * C79 + C5315 * C83) * C61) *
                       C2010 +
                   ((C2014 * C316 + C5315 * C320) * C70 +
                    (C2014 * C322 + C5315 * C328) * C61) *
                       C2011 +
                   ((C2014 * C318 + C5315 * C324) * C70 +
                    (C2014 * C326 + C5315 * C330) * C61) *
                       C2012 +
                   ((C2014 * C2015 + C5315 * C2016) * C70 +
                    (C2014 * C2017 + C5315 * C2018) * C61) *
                       C2013) *
                  C5356 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C1778 * C71 + C1773 * C75 + C1779 * C72 + C1774 * C76 +
                     C1780 * C73 + C1775 * C77) *
                        C70 +
                    (C1778 * C79 + C1773 * C83 + C1779 * C80 + C1774 * C84 +
                     C1780 * C81 + C1775 * C85) *
                        C61) *
                       C1776 +
                   ((C1778 * C316 + C1773 * C320 + C1779 * C317 + C1774 * C321 +
                     C1780 * C929 + C1775 * C930) *
                        C70 +
                    (C1778 * C322 + C1773 * C328 + C1779 * C323 + C1774 * C329 +
                     C1780 * C931 + C1775 * C932) *
                        C61) *
                       C5394) *
                  C5356 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C2014 * C71 + C5315 * C75) * C70 +
                     (C2014 * C79 + C5315 * C83) * C61) *
                        C1776 +
                    ((C2014 * C316 + C5315 * C320) * C70 +
                     (C2014 * C322 + C5315 * C328) * C61) *
                        C5394) *
                       C617 +
                   (((C2014 * C620 + C5315 * C624) * C70 +
                     (C2014 * C626 + C5315 * C632) * C61) *
                        C1776 +
                    ((C2014 * C1443 + C5315 * C1445) * C70 +
                     (C2014 * C1447 + C5315 * C1449) * C61) *
                        C5394) *
                       C618 +
                   (((C2014 * C622 + C5315 * C628) * C70 +
                     (C2014 * C630 + C5315 * C634) * C61) *
                        C1776 +
                    ((C2014 * C2205 + C5315 * C2206) * C70 +
                     (C2014 * C2207 + C5315 * C2208) * C61) *
                        C5394) *
                       C619) *
                  C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eexy[7] += (-std::pow(Pi, 2.5) *
                  (((C2014 * C71 + C5315 * C75) * C105 +
                    (C2014 * C106 + C5315 * C110) * C65) *
                       C2010 +
                   ((C2014 * C316 + C5315 * C320) * C105 +
                    (C2014 * C358 + C5315 * C362) * C65) *
                       C2011 +
                   ((C2014 * C318 + C5315 * C324) * C105 +
                    (C2014 * C360 + C5315 * C364) * C65) *
                       C2012 +
                   ((C2014 * C2015 + C5315 * C2016) * C105 +
                    (C2014 * C2037 + C5315 * C2038) * C65) *
                       C2013) *
                  C5356 * C61 * C64) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C1778 * C71 + C1773 * C75 + C1779 * C72 + C1774 * C76 +
                     C1780 * C73 + C1775 * C77) *
                        C105 +
                    (C1778 * C106 + C1773 * C110 + C1779 * C107 + C1774 * C111 +
                     C1780 * C108 + C1775 * C112) *
                        C65) *
                       C1776 +
                   ((C1778 * C316 + C1773 * C320 + C1779 * C317 + C1774 * C321 +
                     C1780 * C929 + C1775 * C930) *
                        C105 +
                    (C1778 * C358 + C1773 * C362 + C1779 * C359 + C1774 * C363 +
                     C1780 * C959 + C1775 * C960) *
                        C65) *
                       C5394) *
                  C5356 * C61 * C64) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C2014 * C71 + C5315 * C75) * C105 +
                     (C2014 * C106 + C5315 * C110) * C65) *
                        C1776 +
                    ((C2014 * C316 + C5315 * C320) * C105 +
                     (C2014 * C358 + C5315 * C362) * C65) *
                        C5394) *
                       C617 +
                   (((C2014 * C620 + C5315 * C624) * C105 +
                     (C2014 * C662 + C5315 * C666) * C65) *
                        C1776 +
                    ((C2014 * C1443 + C5315 * C1445) * C105 +
                     (C2014 * C1485 + C5315 * C1487) * C65) *
                        C5394) *
                       C618 +
                   (((C2014 * C622 + C5315 * C628) * C105 +
                     (C2014 * C664 + C5315 * C668) * C65) *
                        C1776 +
                    ((C2014 * C2205 + C5315 * C2206) * C105 +
                     (C2014 * C2235 + C5315 * C2236) * C65) *
                        C5394) *
                       C619) *
                  C61 * C64) /
                     (p * q * std::sqrt(p + q));
    d2eexz[7] += (-std::pow(Pi, 2.5) *
                  (((C2014 * C71 + C5315 * C75) * C132 +
                    (C2014 * C133 + C5315 * C137) * C64) *
                       C2010 +
                   ((C2014 * C316 + C5315 * C320) * C132 +
                    (C2014 * C392 + C5315 * C396) * C64) *
                       C2011 +
                   ((C2014 * C318 + C5315 * C324) * C132 +
                    (C2014 * C394 + C5315 * C398) * C64) *
                       C2012 +
                   ((C2014 * C2015 + C5315 * C2016) * C132 +
                    (C2014 * C2057 + C5315 * C2058) * C64) *
                       C2013) *
                  C5356 * C65 * C61) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C1778 * C71 + C1773 * C75 + C1779 * C72 + C1774 * C76 +
                     C1780 * C73 + C1775 * C77) *
                        C132 +
                    (C1778 * C133 + C1773 * C137 + C1779 * C134 + C1774 * C138 +
                     C1780 * C135 + C1775 * C139) *
                        C64) *
                       C1776 +
                   ((C1778 * C316 + C1773 * C320 + C1779 * C317 + C1774 * C321 +
                     C1780 * C929 + C1775 * C930) *
                        C132 +
                    (C1778 * C392 + C1773 * C396 + C1779 * C393 + C1774 * C397 +
                     C1780 * C987 + C1775 * C988) *
                        C64) *
                       C5394) *
                  C5356 * C65 * C61) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C2014 * C71 + C5315 * C75) * C132 +
                     (C2014 * C133 + C5315 * C137) * C64) *
                        C1776 +
                    ((C2014 * C316 + C5315 * C320) * C132 +
                     (C2014 * C392 + C5315 * C396) * C64) *
                        C5394) *
                       C617 +
                   (((C2014 * C620 + C5315 * C624) * C132 +
                     (C2014 * C696 + C5315 * C700) * C64) *
                        C1776 +
                    ((C2014 * C1443 + C5315 * C1445) * C132 +
                     (C2014 * C1523 + C5315 * C1525) * C64) *
                        C5394) *
                       C618 +
                   (((C2014 * C622 + C5315 * C628) * C132 +
                     (C2014 * C698 + C5315 * C702) * C64) *
                        C1776 +
                    ((C2014 * C2205 + C5315 * C2206) * C132 +
                     (C2014 * C2263 + C5315 * C2264) * C64) *
                        C5394) *
                       C619) *
                  C65 * C61) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (-std::pow(Pi, 2.5) *
         ((C2077 * C71 + C2010 * C160 + C2078 * C316 + C2011 * C429 +
           C2079 * C318 + C2012 * C430 + C2080 * C2015 + C2013 * C2081) *
              C70 +
          (C2077 * C79 + C2010 * C164 + C2078 * C322 + C2011 * C433 +
           C2079 * C326 + C2012 * C434 + C2080 * C2017 + C2013 * C2082) *
              C61) *
         C5356 * C5315 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1859 * C71 + C1776 * C160 + C1860 * C316 + C5394 * C429) * C70 +
           (C1859 * C79 + C1776 * C164 + C1860 * C322 + C5394 * C433) * C61) *
              C5356 * C1773 +
          ((C1859 * C72 + C1776 * C161 + C1860 * C317 + C5394 * C431) * C70 +
           (C1859 * C80 + C1776 * C165 + C1860 * C323 + C5394 * C435) * C61) *
              C5356 * C1774 +
          ((C1859 * C73 + C1776 * C162 + C1860 * C929 + C5394 * C1017) * C70 +
           (C1859 * C81 + C1776 * C166 + C1860 * C931 + C5394 * C1018) * C61) *
              C5356 * C1775) *
         C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1859 * C71 + C1776 * C160 + C1860 * C316 + C5394 * C429) * C70 +
           (C1859 * C79 + C1776 * C164 + C1860 * C322 + C5394 * C433) * C61) *
              C617 +
          ((C1859 * C620 + C1776 * C730 + C1860 * C1443 + C5394 * C1561) * C70 +
           (C1859 * C626 + C1776 * C734 + C1860 * C1447 + C5394 * C1563) *
               C61) *
              C618 +
          ((C1859 * C622 + C1776 * C731 + C1860 * C2205 + C5394 * C2291) * C70 +
           (C1859 * C630 + C1776 * C735 + C1860 * C2207 + C5394 * C2292) *
               C61) *
              C619) *
         C5315 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::pow(Pi, 2.5) *
         ((C2077 * C71 + C2010 * C160 + C2078 * C316 + C2011 * C429 +
           C2079 * C318 + C2012 * C430 + C2080 * C2015 + C2013 * C2081) *
              C105 +
          (C2077 * C106 + C2010 * C186 + C2078 * C358 + C2011 * C463 +
           C2079 * C360 + C2012 * C464 + C2080 * C2037 + C2013 * C2101) *
              C65) *
         C5356 * C5315 * C61 * C64) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1859 * C71 + C1776 * C160 + C1860 * C316 + C5394 * C429) * C105 +
           (C1859 * C106 + C1776 * C186 + C1860 * C358 + C5394 * C463) * C65) *
              C5356 * C1773 +
          ((C1859 * C72 + C1776 * C161 + C1860 * C317 + C5394 * C431) * C105 +
           (C1859 * C107 + C1776 * C187 + C1860 * C359 + C5394 * C465) * C65) *
              C5356 * C1774 +
          ((C1859 * C73 + C1776 * C162 + C1860 * C929 + C5394 * C1017) * C105 +
           (C1859 * C108 + C1776 * C188 + C1860 * C959 + C5394 * C1045) * C65) *
              C5356 * C1775) *
         C61 * C64) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1859 * C71 + C1776 * C160 + C1860 * C316 + C5394 * C429) * C105 +
           (C1859 * C106 + C1776 * C186 + C1860 * C358 + C5394 * C463) * C65) *
              C617 +
          ((C1859 * C620 + C1776 * C730 + C1860 * C1443 + C5394 * C1561) *
               C105 +
           (C1859 * C662 + C1776 * C764 + C1860 * C1485 + C5394 * C1599) *
               C65) *
              C618 +
          ((C1859 * C622 + C1776 * C731 + C1860 * C2205 + C5394 * C2291) *
               C105 +
           (C1859 * C664 + C1776 * C765 + C1860 * C2235 + C5394 * C2319) *
               C65) *
              C619) *
         C5315 * C61 * C64) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (-std::pow(Pi, 2.5) *
         ((C2077 * C71 + C2010 * C160 + C2078 * C316 + C2011 * C429 +
           C2079 * C318 + C2012 * C430 + C2080 * C2015 + C2013 * C2081) *
              C132 +
          (C2077 * C133 + C2010 * C208 + C2078 * C392 + C2011 * C493 +
           C2079 * C394 + C2012 * C494 + C2080 * C2057 + C2013 * C2120) *
              C64) *
         C5356 * C5315 * C65 * C61) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1859 * C71 + C1776 * C160 + C1860 * C316 + C5394 * C429) * C132 +
           (C1859 * C133 + C1776 * C208 + C1860 * C392 + C5394 * C493) * C64) *
              C5356 * C1773 +
          ((C1859 * C72 + C1776 * C161 + C1860 * C317 + C5394 * C431) * C132 +
           (C1859 * C134 + C1776 * C209 + C1860 * C393 + C5394 * C495) * C64) *
              C5356 * C1774 +
          ((C1859 * C73 + C1776 * C162 + C1860 * C929 + C5394 * C1017) * C132 +
           (C1859 * C135 + C1776 * C210 + C1860 * C987 + C5394 * C1072) * C64) *
              C5356 * C1775) *
         C65 * C61) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1859 * C71 + C1776 * C160 + C1860 * C316 + C5394 * C429) * C132 +
           (C1859 * C133 + C1776 * C208 + C1860 * C392 + C5394 * C493) * C64) *
              C617 +
          ((C1859 * C620 + C1776 * C730 + C1860 * C1443 + C5394 * C1561) *
               C132 +
           (C1859 * C696 + C1776 * C794 + C1860 * C1523 + C5394 * C1635) *
               C64) *
              C618 +
          ((C1859 * C622 + C1776 * C731 + C1860 * C2205 + C5394 * C2291) *
               C132 +
           (C1859 * C698 + C1776 * C795 + C1860 * C2263 + C5394 * C2346) *
               C64) *
              C619) *
         C5315 * C65 * C61) /
            (p * q * std::sqrt(p + q));
    d2eezx[7] += (-std::pow(Pi, 2.5) *
                  (((C230 * C71 + C5356 * C231) * C70 +
                    (C230 * C79 + C5356 * C235) * C61) *
                       C5315 * C2010 +
                   ((C230 * C316 + C5356 * C523) * C70 +
                    (C230 * C322 + C5356 * C527) * C61) *
                       C5315 * C2011 +
                   ((C230 * C318 + C5356 * C525) * C70 +
                    (C230 * C326 + C5356 * C529) * C61) *
                       C5315 * C2012 +
                   ((C230 * C2015 + C5356 * C2139) * C70 +
                    (C230 * C2017 + C5356 * C2140) * C61) *
                       C5315 * C2013) *
                  C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C5356 * C231) * C70 +
                     (C230 * C79 + C5356 * C235) * C61) *
                        C1773 +
                    ((C230 * C72 + C5356 * C232) * C70 +
                     (C230 * C80 + C5356 * C236) * C61) *
                        C1774 +
                    ((C230 * C73 + C5356 * C233) * C70 +
                     (C230 * C81 + C5356 * C237) * C61) *
                        C1775) *
                       C1776 +
                   (((C230 * C316 + C5356 * C523) * C70 +
                     (C230 * C322 + C5356 * C527) * C61) *
                        C1773 +
                    ((C230 * C317 + C5356 * C524) * C70 +
                     (C230 * C323 + C5356 * C528) * C61) *
                        C1774 +
                    ((C230 * C929 + C5356 * C1099) * C70 +
                     (C230 * C931 + C5356 * C1100) * C61) *
                        C1775) *
                       C5394) *
                  C64 * C65) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C824 * C71 + C617 * C231 + C825 * C620 + C618 * C827 +
                     C826 * C622 + C619 * C828) *
                        C70 +
                    (C824 * C79 + C617 * C235 + C825 * C626 + C618 * C831 +
                     C826 * C630 + C619 * C832) *
                        C61) *
                       C5315 * C1776 +
                   ((C824 * C316 + C617 * C523 + C825 * C1443 + C618 * C1671 +
                     C826 * C2205 + C619 * C2373) *
                        C70 +
                    (C824 * C322 + C617 * C527 + C825 * C1447 + C618 * C1673 +
                     C826 * C2207 + C619 * C2374) *
                        C61) *
                       C5315 * C5394) *
                  C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezy[7] += (-std::pow(Pi, 2.5) *
                  (((C230 * C71 + C5356 * C231) * C105 +
                    (C230 * C106 + C5356 * C257) * C65) *
                       C5315 * C2010 +
                   ((C230 * C316 + C5356 * C523) * C105 +
                    (C230 * C358 + C5356 * C557) * C65) *
                       C5315 * C2011 +
                   ((C230 * C318 + C5356 * C525) * C105 +
                    (C230 * C360 + C5356 * C559) * C65) *
                       C5315 * C2012 +
                   ((C230 * C2015 + C5356 * C2139) * C105 +
                    (C230 * C2037 + C5356 * C2159) * C65) *
                       C5315 * C2013) *
                  C61 * C64) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C5356 * C231) * C105 +
                     (C230 * C106 + C5356 * C257) * C65) *
                        C1773 +
                    ((C230 * C72 + C5356 * C232) * C105 +
                     (C230 * C107 + C5356 * C258) * C65) *
                        C1774 +
                    ((C230 * C73 + C5356 * C233) * C105 +
                     (C230 * C108 + C5356 * C259) * C65) *
                        C1775) *
                       C1776 +
                   (((C230 * C316 + C5356 * C523) * C105 +
                     (C230 * C358 + C5356 * C557) * C65) *
                        C1773 +
                    ((C230 * C317 + C5356 * C524) * C105 +
                     (C230 * C359 + C5356 * C558) * C65) *
                        C1774 +
                    ((C230 * C929 + C5356 * C1099) * C105 +
                     (C230 * C959 + C5356 * C1127) * C65) *
                        C1775) *
                       C5394) *
                  C61 * C64) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C824 * C71 + C617 * C231 + C825 * C620 + C618 * C827 +
                     C826 * C622 + C619 * C828) *
                        C105 +
                    (C824 * C106 + C617 * C257 + C825 * C662 + C618 * C861 +
                     C826 * C664 + C619 * C862) *
                        C65) *
                       C5315 * C1776 +
                   ((C824 * C316 + C617 * C523 + C825 * C1443 + C618 * C1671 +
                     C826 * C2205 + C619 * C2373) *
                        C105 +
                    (C824 * C358 + C617 * C557 + C825 * C1485 + C618 * C1709 +
                     C826 * C2235 + C619 * C2401) *
                        C65) *
                       C5315 * C5394) *
                  C61 * C64) /
                     (p * q * std::sqrt(p + q));
    d2eezz[7] += (-std::pow(Pi, 2.5) *
                  (((C230 * C71 + C5356 * C231) * C132 +
                    (C230 * C133 + C5356 * C279) * C64) *
                       C5315 * C2010 +
                   ((C230 * C316 + C5356 * C523) * C132 +
                    (C230 * C392 + C5356 * C587) * C64) *
                       C5315 * C2011 +
                   ((C230 * C318 + C5356 * C525) * C132 +
                    (C230 * C394 + C5356 * C589) * C64) *
                       C5315 * C2012 +
                   ((C230 * C2015 + C5356 * C2139) * C132 +
                    (C230 * C2057 + C5356 * C2178) * C64) *
                       C5315 * C2013) *
                  C65 * C61) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C5356 * C231) * C132 +
                     (C230 * C133 + C5356 * C279) * C64) *
                        C1773 +
                    ((C230 * C72 + C5356 * C232) * C132 +
                     (C230 * C134 + C5356 * C280) * C64) *
                        C1774 +
                    ((C230 * C73 + C5356 * C233) * C132 +
                     (C230 * C135 + C5356 * C281) * C64) *
                        C1775) *
                       C1776 +
                   (((C230 * C316 + C5356 * C523) * C132 +
                     (C230 * C392 + C5356 * C587) * C64) *
                        C1773 +
                    ((C230 * C317 + C5356 * C524) * C132 +
                     (C230 * C393 + C5356 * C588) * C64) *
                        C1774 +
                    ((C230 * C929 + C5356 * C1099) * C132 +
                     (C230 * C987 + C5356 * C1154) * C64) *
                        C1775) *
                       C5394) *
                  C65 * C61) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C824 * C71 + C617 * C231 + C825 * C620 + C618 * C827 +
                     C826 * C622 + C619 * C828) *
                        C132 +
                    (C824 * C133 + C617 * C279 + C825 * C696 + C618 * C891 +
                     C826 * C698 + C619 * C892) *
                        C64) *
                       C5315 * C1776 +
                   ((C824 * C316 + C617 * C523 + C825 * C1443 + C618 * C1671 +
                     C826 * C2205 + C619 * C2373) *
                        C132 +
                    (C824 * C392 + C617 * C587 + C825 * C1523 + C618 * C1745 +
                     C826 * C2263 + C619 * C2428) *
                        C64) *
                       C5315 * C5394) *
                  C65 * C61) /
                     (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4705 * C71 + C5488 * C75 + C4698 * C72 + C5320 * C76) * C70 +
            (C4705 * C79 + C5488 * C83 + C4698 * C80 + C5320 * C84) * C61) *
               C1776 +
           ((C4705 * C316 + C5488 * C320 + C4698 * C317 + C5320 * C321) * C70 +
            (C4705 * C322 + C5488 * C328 + C4698 * C323 + C5320 * C329) * C61) *
               C5394) *
              C5498 +
          (((C4705 * C620 + C5488 * C624 + C4698 * C621 + C5320 * C625) * C70 +
            (C4705 * C626 + C5488 * C632 + C4698 * C627 + C5320 * C633) * C61) *
               C1776 +
           ((C4705 * C1443 + C5488 * C1445 + C4698 * C1444 + C5320 * C1446) *
                C70 +
            (C4705 * C1447 + C5488 * C1449 + C4698 * C1448 + C5320 * C1450) *
                C61) *
               C5394) *
              C5420) *
         C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4705 * C71 + C5488 * C75 + C4698 * C72 + C5320 * C76) * C105 +
            (C4705 * C106 + C5488 * C110 + C4698 * C107 + C5320 * C111) * C65) *
               C1776 +
           ((C4705 * C316 + C5488 * C320 + C4698 * C317 + C5320 * C321) * C105 +
            (C4705 * C358 + C5488 * C362 + C4698 * C359 + C5320 * C363) * C65) *
               C5394) *
              C5498 +
          (((C4705 * C620 + C5488 * C624 + C4698 * C621 + C5320 * C625) * C105 +
            (C4705 * C662 + C5488 * C666 + C4698 * C663 + C5320 * C667) * C65) *
               C1776 +
           ((C4705 * C1443 + C5488 * C1445 + C4698 * C1444 + C5320 * C1446) *
                C105 +
            (C4705 * C1485 + C5488 * C1487 + C4698 * C1486 + C5320 * C1488) *
                C65) *
               C5394) *
              C5420) *
         C61 * C64) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4705 * C71 + C5488 * C75 + C4698 * C72 + C5320 * C76) * C132 +
            (C4705 * C133 + C5488 * C137 + C4698 * C134 + C5320 * C138) * C64) *
               C1776 +
           ((C4705 * C316 + C5488 * C320 + C4698 * C317 + C5320 * C321) * C132 +
            (C4705 * C392 + C5488 * C396 + C4698 * C393 + C5320 * C397) * C64) *
               C5394) *
              C5498 +
          (((C4705 * C620 + C5488 * C624 + C4698 * C621 + C5320 * C625) * C132 +
            (C4705 * C696 + C5488 * C700 + C4698 * C697 + C5320 * C701) * C64) *
               C1776 +
           ((C4705 * C1443 + C5488 * C1445 + C4698 * C1444 + C5320 * C1446) *
                C132 +
            (C4705 * C1523 + C5488 * C1525 + C4698 * C1524 + C5320 * C1526) *
                C64) *
               C5394) *
              C5420) *
         C65 * C61) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1859 * C71 + C1776 * C160 + C1860 * C316 + C5394 * C429) * C70 +
            (C1859 * C79 + C1776 * C164 + C1860 * C322 + C5394 * C433) * C61) *
               C5498 +
           ((C1859 * C620 + C1776 * C730 + C1860 * C1443 + C5394 * C1561) *
                C70 +
            (C1859 * C626 + C1776 * C734 + C1860 * C1447 + C5394 * C1563) *
                C61) *
               C5420) *
              C5488 +
          (((C1859 * C72 + C1776 * C161 + C1860 * C317 + C5394 * C431) * C70 +
            (C1859 * C80 + C1776 * C165 + C1860 * C323 + C5394 * C435) * C61) *
               C5498 +
           ((C1859 * C621 + C1776 * C732 + C1860 * C1444 + C5394 * C1562) *
                C70 +
            (C1859 * C627 + C1776 * C736 + C1860 * C1448 + C5394 * C1564) *
                C61) *
               C5420) *
              C5320) *
         C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1859 * C71 + C1776 * C160 + C1860 * C316 + C5394 * C429) * C105 +
            (C1859 * C106 + C1776 * C186 + C1860 * C358 + C5394 * C463) * C65) *
               C5498 +
           ((C1859 * C620 + C1776 * C730 + C1860 * C1443 + C5394 * C1561) *
                C105 +
            (C1859 * C662 + C1776 * C764 + C1860 * C1485 + C5394 * C1599) *
                C65) *
               C5420) *
              C5488 +
          (((C1859 * C72 + C1776 * C161 + C1860 * C317 + C5394 * C431) * C105 +
            (C1859 * C107 + C1776 * C187 + C1860 * C359 + C5394 * C465) * C65) *
               C5498 +
           ((C1859 * C621 + C1776 * C732 + C1860 * C1444 + C5394 * C1562) *
                C105 +
            (C1859 * C663 + C1776 * C766 + C1860 * C1486 + C5394 * C1600) *
                C65) *
               C5420) *
              C5320) *
         C61 * C64) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1859 * C71 + C1776 * C160 + C1860 * C316 + C5394 * C429) * C132 +
            (C1859 * C133 + C1776 * C208 + C1860 * C392 + C5394 * C493) * C64) *
               C5498 +
           ((C1859 * C620 + C1776 * C730 + C1860 * C1443 + C5394 * C1561) *
                C132 +
            (C1859 * C696 + C1776 * C794 + C1860 * C1523 + C5394 * C1635) *
                C64) *
               C5420) *
              C5488 +
          (((C1859 * C72 + C1776 * C161 + C1860 * C317 + C5394 * C431) * C132 +
            (C1859 * C134 + C1776 * C209 + C1860 * C393 + C5394 * C495) * C64) *
               C5498 +
           ((C1859 * C621 + C1776 * C732 + C1860 * C1444 + C5394 * C1562) *
                C132 +
            (C1859 * C697 + C1776 * C796 + C1860 * C1524 + C5394 * C1636) *
                C64) *
               C5420) *
              C5320) *
         C65 * C61) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1351 * C71 + C5498 * C231 + C1352 * C620 + C5420 * C827) * C70 +
            (C1351 * C79 + C5498 * C235 + C1352 * C626 + C5420 * C831) * C61) *
               C5488 +
           ((C1351 * C72 + C5498 * C232 + C1352 * C621 + C5420 * C829) * C70 +
            (C1351 * C80 + C5498 * C236 + C1352 * C627 + C5420 * C833) * C61) *
               C5320) *
              C1776 +
          (((C1351 * C316 + C5498 * C523 + C1352 * C1443 + C5420 * C1671) *
                C70 +
            (C1351 * C322 + C5498 * C527 + C1352 * C1447 + C5420 * C1673) *
                C61) *
               C5488 +
           ((C1351 * C317 + C5498 * C524 + C1352 * C1444 + C5420 * C1672) *
                C70 +
            (C1351 * C323 + C5498 * C528 + C1352 * C1448 + C5420 * C1674) *
                C61) *
               C5320) *
              C5394) *
         C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1351 * C71 + C5498 * C231 + C1352 * C620 + C5420 * C827) * C105 +
            (C1351 * C106 + C5498 * C257 + C1352 * C662 + C5420 * C861) * C65) *
               C5488 +
           ((C1351 * C72 + C5498 * C232 + C1352 * C621 + C5420 * C829) * C105 +
            (C1351 * C107 + C5498 * C258 + C1352 * C663 + C5420 * C863) * C65) *
               C5320) *
              C1776 +
          (((C1351 * C316 + C5498 * C523 + C1352 * C1443 + C5420 * C1671) *
                C105 +
            (C1351 * C358 + C5498 * C557 + C1352 * C1485 + C5420 * C1709) *
                C65) *
               C5488 +
           ((C1351 * C317 + C5498 * C524 + C1352 * C1444 + C5420 * C1672) *
                C105 +
            (C1351 * C359 + C5498 * C558 + C1352 * C1486 + C5420 * C1710) *
                C65) *
               C5320) *
              C5394) *
         C61 * C64) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1351 * C71 + C5498 * C231 + C1352 * C620 + C5420 * C827) * C132 +
            (C1351 * C133 + C5498 * C279 + C1352 * C696 + C5420 * C891) * C64) *
               C5488 +
           ((C1351 * C72 + C5498 * C232 + C1352 * C621 + C5420 * C829) * C132 +
            (C1351 * C134 + C5498 * C280 + C1352 * C697 + C5420 * C893) * C64) *
               C5320) *
              C1776 +
          (((C1351 * C316 + C5498 * C523 + C1352 * C1443 + C5420 * C1671) *
                C132 +
            (C1351 * C392 + C5498 * C587 + C1352 * C1523 + C5420 * C1745) *
                C64) *
               C5488 +
           ((C1351 * C317 + C5498 * C524 + C1352 * C1444 + C5420 * C1672) *
                C132 +
            (C1351 * C393 + C5498 * C588 + C1352 * C1524 + C5420 * C1746) *
                C64) *
               C5320) *
              C5394) *
         C65 * C61) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C1778 * C71 + C1773 * C75 + C1779 * C72 + C1774 * C76 +
                     C1780 * C73 + C1775 * C77) *
                        C70 +
                    (C1778 * C79 + C1773 * C83 + C1779 * C80 + C1774 * C84 +
                     C1780 * C81 + C1775 * C85) *
                        C61) *
                       C1776 +
                   ((C1778 * C316 + C1773 * C320 + C1779 * C317 + C1774 * C321 +
                     C1780 * C929 + C1775 * C930) *
                        C70 +
                    (C1778 * C322 + C1773 * C328 + C1779 * C323 + C1774 * C329 +
                     C1780 * C931 + C1775 * C932) *
                        C61) *
                       C5394) *
                  C5356 * C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C2014 * C71 + C5315 * C75) * C70 +
                    (C2014 * C79 + C5315 * C83) * C61) *
                       C2010 +
                   ((C2014 * C316 + C5315 * C320) * C70 +
                    (C2014 * C322 + C5315 * C328) * C61) *
                       C2011 +
                   ((C2014 * C318 + C5315 * C324) * C70 +
                    (C2014 * C326 + C5315 * C330) * C61) *
                       C2012 +
                   ((C2014 * C2015 + C5315 * C2016) * C70 +
                    (C2014 * C2017 + C5315 * C2018) * C61) *
                       C2013) *
                  C5356 * C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eexy[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C1778 * C71 + C1773 * C75 + C1779 * C72 + C1774 * C76 +
                     C1780 * C73 + C1775 * C77) *
                        C105 +
                    (C1778 * C106 + C1773 * C110 + C1779 * C107 + C1774 * C111 +
                     C1780 * C108 + C1775 * C112) *
                        C65) *
                       C1776 +
                   ((C1778 * C316 + C1773 * C320 + C1779 * C317 + C1774 * C321 +
                     C1780 * C929 + C1775 * C930) *
                        C105 +
                    (C1778 * C358 + C1773 * C362 + C1779 * C359 + C1774 * C363 +
                     C1780 * C959 + C1775 * C960) *
                        C65) *
                       C5394) *
                  C5356 * C61 * C64) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C2014 * C71 + C5315 * C75) * C105 +
                    (C2014 * C106 + C5315 * C110) * C65) *
                       C2010 +
                   ((C2014 * C316 + C5315 * C320) * C105 +
                    (C2014 * C358 + C5315 * C362) * C65) *
                       C2011 +
                   ((C2014 * C318 + C5315 * C324) * C105 +
                    (C2014 * C360 + C5315 * C364) * C65) *
                       C2012 +
                   ((C2014 * C2015 + C5315 * C2016) * C105 +
                    (C2014 * C2037 + C5315 * C2038) * C65) *
                       C2013) *
                  C5356 * C61 * C64) /
                     (p * q * std::sqrt(p + q));
    d2eexz[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C1778 * C71 + C1773 * C75 + C1779 * C72 + C1774 * C76 +
                     C1780 * C73 + C1775 * C77) *
                        C132 +
                    (C1778 * C133 + C1773 * C137 + C1779 * C134 + C1774 * C138 +
                     C1780 * C135 + C1775 * C139) *
                        C64) *
                       C1776 +
                   ((C1778 * C316 + C1773 * C320 + C1779 * C317 + C1774 * C321 +
                     C1780 * C929 + C1775 * C930) *
                        C132 +
                    (C1778 * C392 + C1773 * C396 + C1779 * C393 + C1774 * C397 +
                     C1780 * C987 + C1775 * C988) *
                        C64) *
                       C5394) *
                  C5356 * C65 * C61) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C2014 * C71 + C5315 * C75) * C132 +
                    (C2014 * C133 + C5315 * C137) * C64) *
                       C2010 +
                   ((C2014 * C316 + C5315 * C320) * C132 +
                    (C2014 * C392 + C5315 * C396) * C64) *
                       C2011 +
                   ((C2014 * C318 + C5315 * C324) * C132 +
                    (C2014 * C394 + C5315 * C398) * C64) *
                       C2012 +
                   ((C2014 * C2015 + C5315 * C2016) * C132 +
                    (C2014 * C2057 + C5315 * C2058) * C64) *
                       C2013) *
                  C5356 * C65 * C61) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1859 * C71 + C1776 * C160 + C1860 * C316 + C5394 * C429) * C70 +
           (C1859 * C79 + C1776 * C164 + C1860 * C322 + C5394 * C433) * C61) *
              C5356 * C1773 +
          ((C1859 * C72 + C1776 * C161 + C1860 * C317 + C5394 * C431) * C70 +
           (C1859 * C80 + C1776 * C165 + C1860 * C323 + C5394 * C435) * C61) *
              C5356 * C1774 +
          ((C1859 * C73 + C1776 * C162 + C1860 * C929 + C5394 * C1017) * C70 +
           (C1859 * C81 + C1776 * C166 + C1860 * C931 + C5394 * C1018) * C61) *
              C5356 * C1775) *
         C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C2077 * C71 + C2010 * C160 + C2078 * C316 + C2011 * C429 +
           C2079 * C318 + C2012 * C430 + C2080 * C2015 + C2013 * C2081) *
              C70 +
          (C2077 * C79 + C2010 * C164 + C2078 * C322 + C2011 * C433 +
           C2079 * C326 + C2012 * C434 + C2080 * C2017 + C2013 * C2082) *
              C61) *
         C5356 * C5315 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1859 * C71 + C1776 * C160 + C1860 * C316 + C5394 * C429) * C105 +
           (C1859 * C106 + C1776 * C186 + C1860 * C358 + C5394 * C463) * C65) *
              C5356 * C1773 +
          ((C1859 * C72 + C1776 * C161 + C1860 * C317 + C5394 * C431) * C105 +
           (C1859 * C107 + C1776 * C187 + C1860 * C359 + C5394 * C465) * C65) *
              C5356 * C1774 +
          ((C1859 * C73 + C1776 * C162 + C1860 * C929 + C5394 * C1017) * C105 +
           (C1859 * C108 + C1776 * C188 + C1860 * C959 + C5394 * C1045) * C65) *
              C5356 * C1775) *
         C61 * C64) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C2077 * C71 + C2010 * C160 + C2078 * C316 + C2011 * C429 +
           C2079 * C318 + C2012 * C430 + C2080 * C2015 + C2013 * C2081) *
              C105 +
          (C2077 * C106 + C2010 * C186 + C2078 * C358 + C2011 * C463 +
           C2079 * C360 + C2012 * C464 + C2080 * C2037 + C2013 * C2101) *
              C65) *
         C5356 * C5315 * C61 * C64) /
            (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1859 * C71 + C1776 * C160 + C1860 * C316 + C5394 * C429) * C132 +
           (C1859 * C133 + C1776 * C208 + C1860 * C392 + C5394 * C493) * C64) *
              C5356 * C1773 +
          ((C1859 * C72 + C1776 * C161 + C1860 * C317 + C5394 * C431) * C132 +
           (C1859 * C134 + C1776 * C209 + C1860 * C393 + C5394 * C495) * C64) *
              C5356 * C1774 +
          ((C1859 * C73 + C1776 * C162 + C1860 * C929 + C5394 * C1017) * C132 +
           (C1859 * C135 + C1776 * C210 + C1860 * C987 + C5394 * C1072) * C64) *
              C5356 * C1775) *
         C65 * C61) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C2077 * C71 + C2010 * C160 + C2078 * C316 + C2011 * C429 +
           C2079 * C318 + C2012 * C430 + C2080 * C2015 + C2013 * C2081) *
              C132 +
          (C2077 * C133 + C2010 * C208 + C2078 * C392 + C2011 * C493 +
           C2079 * C394 + C2012 * C494 + C2080 * C2057 + C2013 * C2120) *
              C64) *
         C5356 * C5315 * C65 * C61) /
            (p * q * std::sqrt(p + q));
    d2eezx[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C5356 * C231) * C70 +
                     (C230 * C79 + C5356 * C235) * C61) *
                        C1773 +
                    ((C230 * C72 + C5356 * C232) * C70 +
                     (C230 * C80 + C5356 * C236) * C61) *
                        C1774 +
                    ((C230 * C73 + C5356 * C233) * C70 +
                     (C230 * C81 + C5356 * C237) * C61) *
                        C1775) *
                       C1776 +
                   (((C230 * C316 + C5356 * C523) * C70 +
                     (C230 * C322 + C5356 * C527) * C61) *
                        C1773 +
                    ((C230 * C317 + C5356 * C524) * C70 +
                     (C230 * C323 + C5356 * C528) * C61) *
                        C1774 +
                    ((C230 * C929 + C5356 * C1099) * C70 +
                     (C230 * C931 + C5356 * C1100) * C61) *
                        C1775) *
                       C5394) *
                  C64 * C65) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C5356 * C231) * C70 +
                    (C230 * C79 + C5356 * C235) * C61) *
                       C5315 * C2010 +
                   ((C230 * C316 + C5356 * C523) * C70 +
                    (C230 * C322 + C5356 * C527) * C61) *
                       C5315 * C2011 +
                   ((C230 * C318 + C5356 * C525) * C70 +
                    (C230 * C326 + C5356 * C529) * C61) *
                       C5315 * C2012 +
                   ((C230 * C2015 + C5356 * C2139) * C70 +
                    (C230 * C2017 + C5356 * C2140) * C61) *
                       C5315 * C2013) *
                  C64 * C65) /
                     (p * q * std::sqrt(p + q));
    d2eezy[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C5356 * C231) * C105 +
                     (C230 * C106 + C5356 * C257) * C65) *
                        C1773 +
                    ((C230 * C72 + C5356 * C232) * C105 +
                     (C230 * C107 + C5356 * C258) * C65) *
                        C1774 +
                    ((C230 * C73 + C5356 * C233) * C105 +
                     (C230 * C108 + C5356 * C259) * C65) *
                        C1775) *
                       C1776 +
                   (((C230 * C316 + C5356 * C523) * C105 +
                     (C230 * C358 + C5356 * C557) * C65) *
                        C1773 +
                    ((C230 * C317 + C5356 * C524) * C105 +
                     (C230 * C359 + C5356 * C558) * C65) *
                        C1774 +
                    ((C230 * C929 + C5356 * C1099) * C105 +
                     (C230 * C959 + C5356 * C1127) * C65) *
                        C1775) *
                       C5394) *
                  C61 * C64) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C5356 * C231) * C105 +
                    (C230 * C106 + C5356 * C257) * C65) *
                       C5315 * C2010 +
                   ((C230 * C316 + C5356 * C523) * C105 +
                    (C230 * C358 + C5356 * C557) * C65) *
                       C5315 * C2011 +
                   ((C230 * C318 + C5356 * C525) * C105 +
                    (C230 * C360 + C5356 * C559) * C65) *
                       C5315 * C2012 +
                   ((C230 * C2015 + C5356 * C2139) * C105 +
                    (C230 * C2037 + C5356 * C2159) * C65) *
                       C5315 * C2013) *
                  C61 * C64) /
                     (p * q * std::sqrt(p + q));
    d2eezz[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C5356 * C231) * C132 +
                     (C230 * C133 + C5356 * C279) * C64) *
                        C1773 +
                    ((C230 * C72 + C5356 * C232) * C132 +
                     (C230 * C134 + C5356 * C280) * C64) *
                        C1774 +
                    ((C230 * C73 + C5356 * C233) * C132 +
                     (C230 * C135 + C5356 * C281) * C64) *
                        C1775) *
                       C1776 +
                   (((C230 * C316 + C5356 * C523) * C132 +
                     (C230 * C392 + C5356 * C587) * C64) *
                        C1773 +
                    ((C230 * C317 + C5356 * C524) * C132 +
                     (C230 * C393 + C5356 * C588) * C64) *
                        C1774 +
                    ((C230 * C929 + C5356 * C1099) * C132 +
                     (C230 * C987 + C5356 * C1154) * C64) *
                        C1775) *
                       C5394) *
                  C65 * C61) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C5356 * C231) * C132 +
                    (C230 * C133 + C5356 * C279) * C64) *
                       C5315 * C2010 +
                   ((C230 * C316 + C5356 * C523) * C132 +
                    (C230 * C392 + C5356 * C587) * C64) *
                       C5315 * C2011 +
                   ((C230 * C318 + C5356 * C525) * C132 +
                    (C230 * C394 + C5356 * C589) * C64) *
                       C5315 * C2012 +
                   ((C230 * C2015 + C5356 * C2139) * C132 +
                    (C230 * C2057 + C5356 * C2178) * C64) *
                       C5315 * C2013) *
                  C65 * C61) /
                     (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4705 * C71 + C5488 * C75 + C4698 * C72 + C5320 * C76) * C70 +
            (C4705 * C79 + C5488 * C83 + C4698 * C80 + C5320 * C84) * C61) *
               C5497 +
           ((C4705 * C316 + C5488 * C320 + C4698 * C317 + C5320 * C321) * C70 +
            (C4705 * C322 + C5488 * C328 + C4698 * C323 + C5320 * C329) * C61) *
               C5394) *
              C3255 +
          (((C4705 * C620 + C5488 * C624 + C4698 * C621 + C5320 * C625) * C70 +
            (C4705 * C626 + C5488 * C632 + C4698 * C627 + C5320 * C633) * C61) *
               C5497 +
           ((C4705 * C1443 + C5488 * C1445 + C4698 * C1444 + C5320 * C1446) *
                C70 +
            (C4705 * C1447 + C5488 * C1449 + C4698 * C1448 + C5320 * C1450) *
                C61) *
               C5394) *
              C5420) *
         C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4705 * C71 + C5488 * C75 + C4698 * C72 + C5320 * C76) * C105 +
            (C4705 * C106 + C5488 * C110 + C4698 * C107 + C5320 * C111) * C65) *
               C5497 +
           ((C4705 * C316 + C5488 * C320 + C4698 * C317 + C5320 * C321) * C105 +
            (C4705 * C358 + C5488 * C362 + C4698 * C359 + C5320 * C363) * C65) *
               C5394) *
              C3255 +
          (((C4705 * C620 + C5488 * C624 + C4698 * C621 + C5320 * C625) * C105 +
            (C4705 * C662 + C5488 * C666 + C4698 * C663 + C5320 * C667) * C65) *
               C5497 +
           ((C4705 * C1443 + C5488 * C1445 + C4698 * C1444 + C5320 * C1446) *
                C105 +
            (C4705 * C1485 + C5488 * C1487 + C4698 * C1486 + C5320 * C1488) *
                C65) *
               C5394) *
              C5420) *
         C61 * C64) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4705 * C71 + C5488 * C75 + C4698 * C72 + C5320 * C76) * C132 +
            (C4705 * C133 + C5488 * C137 + C4698 * C134 + C5320 * C138) * C64) *
               C5497 +
           ((C4705 * C316 + C5488 * C320 + C4698 * C317 + C5320 * C321) * C132 +
            (C4705 * C392 + C5488 * C396 + C4698 * C393 + C5320 * C397) * C64) *
               C5394) *
              C3255 +
          (((C4705 * C620 + C5488 * C624 + C4698 * C621 + C5320 * C625) * C132 +
            (C4705 * C696 + C5488 * C700 + C4698 * C697 + C5320 * C701) * C64) *
               C5497 +
           ((C4705 * C1443 + C5488 * C1445 + C4698 * C1444 + C5320 * C1446) *
                C132 +
            (C4705 * C1523 + C5488 * C1525 + C4698 * C1524 + C5320 * C1526) *
                C64) *
               C5394) *
              C5420) *
         C65 * C61) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1015 * C71 + C5497 * C160 + C1016 * C316 + C5394 * C429) * C70 +
            (C1015 * C79 + C5497 * C164 + C1016 * C322 + C5394 * C433) * C61) *
               C3255 +
           ((C1015 * C620 + C5497 * C730 + C1016 * C1443 + C5394 * C1561) *
                C70 +
            (C1015 * C626 + C5497 * C734 + C1016 * C1447 + C5394 * C1563) *
                C61) *
               C5420) *
              C5488 +
          (((C1015 * C72 + C5497 * C161 + C1016 * C317 + C5394 * C431) * C70 +
            (C1015 * C80 + C5497 * C165 + C1016 * C323 + C5394 * C435) * C61) *
               C3255 +
           ((C1015 * C621 + C5497 * C732 + C1016 * C1444 + C5394 * C1562) *
                C70 +
            (C1015 * C627 + C5497 * C736 + C1016 * C1448 + C5394 * C1564) *
                C61) *
               C5420) *
              C5320) *
         C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1015 * C71 + C5497 * C160 + C1016 * C316 + C5394 * C429) * C105 +
            (C1015 * C106 + C5497 * C186 + C1016 * C358 + C5394 * C463) * C65) *
               C3255 +
           ((C1015 * C620 + C5497 * C730 + C1016 * C1443 + C5394 * C1561) *
                C105 +
            (C1015 * C662 + C5497 * C764 + C1016 * C1485 + C5394 * C1599) *
                C65) *
               C5420) *
              C5488 +
          (((C1015 * C72 + C5497 * C161 + C1016 * C317 + C5394 * C431) * C105 +
            (C1015 * C107 + C5497 * C187 + C1016 * C359 + C5394 * C465) * C65) *
               C3255 +
           ((C1015 * C621 + C5497 * C732 + C1016 * C1444 + C5394 * C1562) *
                C105 +
            (C1015 * C663 + C5497 * C766 + C1016 * C1486 + C5394 * C1600) *
                C65) *
               C5420) *
              C5320) *
         C61 * C64) /
        (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1015 * C71 + C5497 * C160 + C1016 * C316 + C5394 * C429) * C132 +
            (C1015 * C133 + C5497 * C208 + C1016 * C392 + C5394 * C493) * C64) *
               C3255 +
           ((C1015 * C620 + C5497 * C730 + C1016 * C1443 + C5394 * C1561) *
                C132 +
            (C1015 * C696 + C5497 * C794 + C1016 * C1523 + C5394 * C1635) *
                C64) *
               C5420) *
              C5488 +
          (((C1015 * C72 + C5497 * C161 + C1016 * C317 + C5394 * C431) * C132 +
            (C1015 * C134 + C5497 * C209 + C1016 * C393 + C5394 * C495) * C64) *
               C3255 +
           ((C1015 * C621 + C5497 * C732 + C1016 * C1444 + C5394 * C1562) *
                C132 +
            (C1015 * C697 + C5497 * C796 + C1016 * C1524 + C5394 * C1636) *
                C64) *
               C5420) *
              C5320) *
         C65 * C61) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3413 * C71 + C3255 * C231 + C3414 * C620 + C5420 * C827) * C70 +
            (C3413 * C79 + C3255 * C235 + C3414 * C626 + C5420 * C831) * C61) *
               C5488 +
           ((C3413 * C72 + C3255 * C232 + C3414 * C621 + C5420 * C829) * C70 +
            (C3413 * C80 + C3255 * C236 + C3414 * C627 + C5420 * C833) * C61) *
               C5320) *
              C5497 +
          (((C3413 * C316 + C3255 * C523 + C3414 * C1443 + C5420 * C1671) *
                C70 +
            (C3413 * C322 + C3255 * C527 + C3414 * C1447 + C5420 * C1673) *
                C61) *
               C5488 +
           ((C3413 * C317 + C3255 * C524 + C3414 * C1444 + C5420 * C1672) *
                C70 +
            (C3413 * C323 + C3255 * C528 + C3414 * C1448 + C5420 * C1674) *
                C61) *
               C5320) *
              C5394) *
         C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3413 * C71 + C3255 * C231 + C3414 * C620 + C5420 * C827) * C105 +
            (C3413 * C106 + C3255 * C257 + C3414 * C662 + C5420 * C861) * C65) *
               C5488 +
           ((C3413 * C72 + C3255 * C232 + C3414 * C621 + C5420 * C829) * C105 +
            (C3413 * C107 + C3255 * C258 + C3414 * C663 + C5420 * C863) * C65) *
               C5320) *
              C5497 +
          (((C3413 * C316 + C3255 * C523 + C3414 * C1443 + C5420 * C1671) *
                C105 +
            (C3413 * C358 + C3255 * C557 + C3414 * C1485 + C5420 * C1709) *
                C65) *
               C5488 +
           ((C3413 * C317 + C3255 * C524 + C3414 * C1444 + C5420 * C1672) *
                C105 +
            (C3413 * C359 + C3255 * C558 + C3414 * C1486 + C5420 * C1710) *
                C65) *
               C5320) *
              C5394) *
         C61 * C64) /
        (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3413 * C71 + C3255 * C231 + C3414 * C620 + C5420 * C827) * C132 +
            (C3413 * C133 + C3255 * C279 + C3414 * C696 + C5420 * C891) * C64) *
               C5488 +
           ((C3413 * C72 + C3255 * C232 + C3414 * C621 + C5420 * C829) * C132 +
            (C3413 * C134 + C3255 * C280 + C3414 * C697 + C5420 * C893) * C64) *
               C5320) *
              C5497 +
          (((C3413 * C316 + C3255 * C523 + C3414 * C1443 + C5420 * C1671) *
                C132 +
            (C3413 * C392 + C3255 * C587 + C3414 * C1523 + C5420 * C1745) *
                C64) *
               C5488 +
           ((C3413 * C317 + C3255 * C524 + C3414 * C1444 + C5420 * C1672) *
                C132 +
            (C3413 * C393 + C3255 * C588 + C3414 * C1524 + C5420 * C1746) *
                C64) *
               C5320) *
              C5394) *
         C65 * C61) /
        (p * q * std::sqrt(p + q));
    d2eexx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C2014 * C71 + C5315 * C75) * C70 +
                      (C2014 * C79 + C5315 * C83) * C61) *
                         C5497 +
                     ((C2014 * C316 + C5315 * C320) * C70 +
                      (C2014 * C322 + C5315 * C328) * C61) *
                         C5394) *
                        C5520 +
                    (((C2014 * C620 + C5315 * C624) * C70 +
                      (C2014 * C626 + C5315 * C632) * C61) *
                         C5497 +
                     ((C2014 * C1443 + C5315 * C1445) * C70 +
                      (C2014 * C1447 + C5315 * C1449) * C61) *
                         C5394) *
                        C5521 +
                    (((C2014 * C622 + C5315 * C628) * C70 +
                      (C2014 * C630 + C5315 * C634) * C61) *
                         C5497 +
                     ((C2014 * C2205 + C5315 * C2206) * C70 +
                      (C2014 * C2207 + C5315 * C2208) * C61) *
                         C5394) *
                        C4221) *
                   C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eexy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C2014 * C71 + C5315 * C75) * C105 +
                      (C2014 * C106 + C5315 * C110) * C65) *
                         C5497 +
                     ((C2014 * C316 + C5315 * C320) * C105 +
                      (C2014 * C358 + C5315 * C362) * C65) *
                         C5394) *
                        C5520 +
                    (((C2014 * C620 + C5315 * C624) * C105 +
                      (C2014 * C662 + C5315 * C666) * C65) *
                         C5497 +
                     ((C2014 * C1443 + C5315 * C1445) * C105 +
                      (C2014 * C1485 + C5315 * C1487) * C65) *
                         C5394) *
                        C5521 +
                    (((C2014 * C622 + C5315 * C628) * C105 +
                      (C2014 * C664 + C5315 * C668) * C65) *
                         C5497 +
                     ((C2014 * C2205 + C5315 * C2206) * C105 +
                      (C2014 * C2235 + C5315 * C2236) * C65) *
                         C5394) *
                        C4221) *
                   C61 * C64) /
                  (p * q * std::sqrt(p + q));
    d2eexz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C2014 * C71 + C5315 * C75) * C132 +
                      (C2014 * C133 + C5315 * C137) * C64) *
                         C5497 +
                     ((C2014 * C316 + C5315 * C320) * C132 +
                      (C2014 * C392 + C5315 * C396) * C64) *
                         C5394) *
                        C5520 +
                    (((C2014 * C620 + C5315 * C624) * C132 +
                      (C2014 * C696 + C5315 * C700) * C64) *
                         C5497 +
                     ((C2014 * C1443 + C5315 * C1445) * C132 +
                      (C2014 * C1523 + C5315 * C1525) * C64) *
                         C5394) *
                        C5521 +
                    (((C2014 * C622 + C5315 * C628) * C132 +
                      (C2014 * C698 + C5315 * C702) * C64) *
                         C5497 +
                     ((C2014 * C2205 + C5315 * C2206) * C132 +
                      (C2014 * C2263 + C5315 * C2264) * C64) *
                         C5394) *
                        C4221) *
                   C65 * C61) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1015 * C71 + C5497 * C160 + C1016 * C316 + C5394 * C429) * C70 +
           (C1015 * C79 + C5497 * C164 + C1016 * C322 + C5394 * C433) * C61) *
              C5520 +
          ((C1015 * C620 + C5497 * C730 + C1016 * C1443 + C5394 * C1561) * C70 +
           (C1015 * C626 + C5497 * C734 + C1016 * C1447 + C5394 * C1563) *
               C61) *
              C5521 +
          ((C1015 * C622 + C5497 * C731 + C1016 * C2205 + C5394 * C2291) * C70 +
           (C1015 * C630 + C5497 * C735 + C1016 * C2207 + C5394 * C2292) *
               C61) *
              C4221) *
         C5315 * C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1015 * C71 + C5497 * C160 + C1016 * C316 + C5394 * C429) * C105 +
           (C1015 * C106 + C5497 * C186 + C1016 * C358 + C5394 * C463) * C65) *
              C5520 +
          ((C1015 * C620 + C5497 * C730 + C1016 * C1443 + C5394 * C1561) *
               C105 +
           (C1015 * C662 + C5497 * C764 + C1016 * C1485 + C5394 * C1599) *
               C65) *
              C5521 +
          ((C1015 * C622 + C5497 * C731 + C1016 * C2205 + C5394 * C2291) *
               C105 +
           (C1015 * C664 + C5497 * C765 + C1016 * C2235 + C5394 * C2319) *
               C65) *
              C4221) *
         C5315 * C61 * C64) /
        (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1015 * C71 + C5497 * C160 + C1016 * C316 + C5394 * C429) * C132 +
           (C1015 * C133 + C5497 * C208 + C1016 * C392 + C5394 * C493) * C64) *
              C5520 +
          ((C1015 * C620 + C5497 * C730 + C1016 * C1443 + C5394 * C1561) *
               C132 +
           (C1015 * C696 + C5497 * C794 + C1016 * C1523 + C5394 * C1635) *
               C64) *
              C5521 +
          ((C1015 * C622 + C5497 * C731 + C1016 * C2205 + C5394 * C2291) *
               C132 +
           (C1015 * C698 + C5497 * C795 + C1016 * C2263 + C5394 * C2346) *
               C64) *
              C4221) *
         C5315 * C65 * C61) /
        (p * q * std::sqrt(p + q));
    d2eezx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4378 * C71 + C5520 * C231 + C4379 * C620 + C5521 * C827 +
                      C4380 * C622 + C4221 * C828) *
                         C70 +
                     (C4378 * C79 + C5520 * C235 + C4379 * C626 + C5521 * C831 +
                      C4380 * C630 + C4221 * C832) *
                         C61) *
                        C5315 * C5497 +
                    ((C4378 * C316 + C5520 * C523 + C4379 * C1443 +
                      C5521 * C1671 + C4380 * C2205 + C4221 * C2373) *
                         C70 +
                     (C4378 * C322 + C5520 * C527 + C4379 * C1447 +
                      C5521 * C1673 + C4380 * C2207 + C4221 * C2374) *
                         C61) *
                        C5315 * C5394) *
                   C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eezy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4378 * C71 + C5520 * C231 + C4379 * C620 + C5521 * C827 +
                      C4380 * C622 + C4221 * C828) *
                         C105 +
                     (C4378 * C106 + C5520 * C257 + C4379 * C662 +
                      C5521 * C861 + C4380 * C664 + C4221 * C862) *
                         C65) *
                        C5315 * C5497 +
                    ((C4378 * C316 + C5520 * C523 + C4379 * C1443 +
                      C5521 * C1671 + C4380 * C2205 + C4221 * C2373) *
                         C105 +
                     (C4378 * C358 + C5520 * C557 + C4379 * C1485 +
                      C5521 * C1709 + C4380 * C2235 + C4221 * C2401) *
                         C65) *
                        C5315 * C5394) *
                   C61 * C64) /
                  (p * q * std::sqrt(p + q));
    d2eezz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4378 * C71 + C5520 * C231 + C4379 * C620 + C5521 * C827 +
                      C4380 * C622 + C4221 * C828) *
                         C132 +
                     (C4378 * C133 + C5520 * C279 + C4379 * C696 +
                      C5521 * C891 + C4380 * C698 + C4221 * C892) *
                         C64) *
                        C5315 * C5497 +
                    ((C4378 * C316 + C5520 * C523 + C4379 * C1443 +
                      C5521 * C1671 + C4380 * C2205 + C4221 * C2373) *
                         C132 +
                     (C4378 * C392 + C5520 * C587 + C4379 * C1523 +
                      C5521 * C1745 + C4380 * C2263 + C4221 * C2428) *
                         C64) *
                        C5315 * C5394) *
                   C65 * C61) /
                  (p * q * std::sqrt(p + q));
    d2eexx[12] += (-std::pow(Pi, 2.5) *
                   ((((C2014 * C71 + C5315 * C75) * C70 +
                      (C2014 * C79 + C5315 * C83) * C61) *
                         C311 +
                     ((C2014 * C316 + C5315 * C320) * C70 +
                      (C2014 * C322 + C5315 * C328) * C61) *
                         C312 +
                     ((C2014 * C318 + C5315 * C324) * C70 +
                      (C2014 * C326 + C5315 * C330) * C61) *
                         C313) *
                        C3255 +
                    (((C2014 * C620 + C5315 * C624) * C70 +
                      (C2014 * C626 + C5315 * C632) * C61) *
                         C311 +
                     ((C2014 * C1443 + C5315 * C1445) * C70 +
                      (C2014 * C1447 + C5315 * C1449) * C61) *
                         C312 +
                     ((C2014 * C3005 + C5315 * C3006) * C70 +
                      (C2014 * C3007 + C5315 * C3008) * C61) *
                         C313) *
                        C5420) *
                   C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C1778 * C71 + C1773 * C75 + C1779 * C72 + C1774 * C76 +
                      C1780 * C73 + C1775 * C77) *
                         C70 +
                     (C1778 * C79 + C1773 * C83 + C1779 * C80 + C1774 * C84 +
                      C1780 * C81 + C1775 * C85) *
                         C61) *
                        C5345 * C3255 +
                    ((C1778 * C620 + C1773 * C624 + C1779 * C621 +
                      C1774 * C625 + C1780 * C1183 + C1775 * C1184) *
                         C70 +
                     (C1778 * C626 + C1773 * C632 + C1779 * C627 +
                      C1774 * C633 + C1780 * C1185 + C1775 * C1186) *
                         C61) *
                        C5345 * C5420) *
                   C64 * C65) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C2014 * C71 + C5315 * C75) * C70 +
                     (C2014 * C79 + C5315 * C83) * C61) *
                        C5345 * C3719 +
                    ((C2014 * C620 + C5315 * C624) * C70 +
                     (C2014 * C626 + C5315 * C632) * C61) *
                        C5345 * C3720 +
                    ((C2014 * C622 + C5315 * C628) * C70 +
                     (C2014 * C630 + C5315 * C634) * C61) *
                        C5345 * C3721 +
                    ((C2014 * C3723 + C5315 * C3724) * C70 +
                     (C2014 * C3725 + C5315 * C3726) * C61) *
                        C5345 * C3722) *
                   C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eexy[12] += (-std::pow(Pi, 2.5) *
                   ((((C2014 * C71 + C5315 * C75) * C105 +
                      (C2014 * C106 + C5315 * C110) * C65) *
                         C311 +
                     ((C2014 * C316 + C5315 * C320) * C105 +
                      (C2014 * C358 + C5315 * C362) * C65) *
                         C312 +
                     ((C2014 * C318 + C5315 * C324) * C105 +
                      (C2014 * C360 + C5315 * C364) * C65) *
                         C313) *
                        C3255 +
                    (((C2014 * C620 + C5315 * C624) * C105 +
                      (C2014 * C662 + C5315 * C666) * C65) *
                         C311 +
                     ((C2014 * C1443 + C5315 * C1445) * C105 +
                      (C2014 * C1485 + C5315 * C1487) * C65) *
                         C312 +
                     ((C2014 * C3005 + C5315 * C3006) * C105 +
                      (C2014 * C3035 + C5315 * C3036) * C65) *
                         C313) *
                        C5420) *
                   C61 * C64) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C1778 * C71 + C1773 * C75 + C1779 * C72 + C1774 * C76 +
                      C1780 * C73 + C1775 * C77) *
                         C105 +
                     (C1778 * C106 + C1773 * C110 + C1779 * C107 +
                      C1774 * C111 + C1780 * C108 + C1775 * C112) *
                         C65) *
                        C5345 * C3255 +
                    ((C1778 * C620 + C1773 * C624 + C1779 * C621 +
                      C1774 * C625 + C1780 * C1183 + C1775 * C1184) *
                         C105 +
                     (C1778 * C662 + C1773 * C666 + C1779 * C663 +
                      C1774 * C667 + C1780 * C1213 + C1775 * C1214) *
                         C65) *
                        C5345 * C5420) *
                   C61 * C64) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C2014 * C71 + C5315 * C75) * C105 +
                     (C2014 * C106 + C5315 * C110) * C65) *
                        C5345 * C3719 +
                    ((C2014 * C620 + C5315 * C624) * C105 +
                     (C2014 * C662 + C5315 * C666) * C65) *
                        C5345 * C3720 +
                    ((C2014 * C622 + C5315 * C628) * C105 +
                     (C2014 * C664 + C5315 * C668) * C65) *
                        C5345 * C3721 +
                    ((C2014 * C3723 + C5315 * C3724) * C105 +
                     (C2014 * C3745 + C5315 * C3746) * C65) *
                        C5345 * C3722) *
                   C61 * C64) /
                      (p * q * std::sqrt(p + q));
    d2eexz[12] += (-std::pow(Pi, 2.5) *
                   ((((C2014 * C71 + C5315 * C75) * C132 +
                      (C2014 * C133 + C5315 * C137) * C64) *
                         C311 +
                     ((C2014 * C316 + C5315 * C320) * C132 +
                      (C2014 * C392 + C5315 * C396) * C64) *
                         C312 +
                     ((C2014 * C318 + C5315 * C324) * C132 +
                      (C2014 * C394 + C5315 * C398) * C64) *
                         C313) *
                        C3255 +
                    (((C2014 * C620 + C5315 * C624) * C132 +
                      (C2014 * C696 + C5315 * C700) * C64) *
                         C311 +
                     ((C2014 * C1443 + C5315 * C1445) * C132 +
                      (C2014 * C1523 + C5315 * C1525) * C64) *
                         C312 +
                     ((C2014 * C3005 + C5315 * C3006) * C132 +
                      (C2014 * C3063 + C5315 * C3064) * C64) *
                         C313) *
                        C5420) *
                   C65 * C61) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C1778 * C71 + C1773 * C75 + C1779 * C72 + C1774 * C76 +
                      C1780 * C73 + C1775 * C77) *
                         C132 +
                     (C1778 * C133 + C1773 * C137 + C1779 * C134 +
                      C1774 * C138 + C1780 * C135 + C1775 * C139) *
                         C64) *
                        C5345 * C3255 +
                    ((C1778 * C620 + C1773 * C624 + C1779 * C621 +
                      C1774 * C625 + C1780 * C1183 + C1775 * C1184) *
                         C132 +
                     (C1778 * C696 + C1773 * C700 + C1779 * C697 +
                      C1774 * C701 + C1780 * C1241 + C1775 * C1242) *
                         C64) *
                        C5345 * C5420) *
                   C65 * C61) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C2014 * C71 + C5315 * C75) * C132 +
                     (C2014 * C133 + C5315 * C137) * C64) *
                        C5345 * C3719 +
                    ((C2014 * C620 + C5315 * C624) * C132 +
                     (C2014 * C696 + C5315 * C700) * C64) *
                        C5345 * C3720 +
                    ((C2014 * C622 + C5315 * C628) * C132 +
                     (C2014 * C698 + C5315 * C702) * C64) *
                        C5345 * C3721 +
                    ((C2014 * C3723 + C5315 * C3724) * C132 +
                     (C2014 * C3765 + C5315 * C3766) * C64) *
                        C5345 * C3722) *
                   C65 * C61) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[12] += (-std::pow(Pi, 2.5) *
                   (((C426 * C71 + C311 * C160 + C427 * C316 + C312 * C429 +
                      C428 * C318 + C313 * C430) *
                         C70 +
                     (C426 * C79 + C311 * C164 + C427 * C322 + C312 * C433 +
                      C428 * C326 + C313 * C434) *
                         C61) *
                        C3255 +
                    ((C426 * C620 + C311 * C730 + C427 * C1443 + C312 * C1561 +
                      C428 * C3005 + C313 * C3091) *
                         C70 +
                     (C426 * C626 + C311 * C734 + C427 * C1447 + C312 * C1563 +
                      C428 * C3007 + C313 * C3092) *
                         C61) *
                        C5420) *
                   C5315 * C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C159 * C71 + C5345 * C160) * C70 +
                      (C159 * C79 + C5345 * C164) * C61) *
                         C3255 +
                     ((C159 * C620 + C5345 * C730) * C70 +
                      (C159 * C626 + C5345 * C734) * C61) *
                         C5420) *
                        C1773 +
                    (((C159 * C72 + C5345 * C161) * C70 +
                      (C159 * C80 + C5345 * C165) * C61) *
                         C3255 +
                     ((C159 * C621 + C5345 * C732) * C70 +
                      (C159 * C627 + C5345 * C736) * C61) *
                         C5420) *
                        C1774 +
                    (((C159 * C73 + C5345 * C162) * C70 +
                      (C159 * C81 + C5345 * C166) * C61) *
                         C3255 +
                     ((C159 * C1183 + C5345 * C1269) * C70 +
                      (C159 * C1185 + C5345 * C1270) * C61) *
                         C5420) *
                        C1775) *
                   C64 * C65) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C159 * C71 + C5345 * C160) * C70 +
                     (C159 * C79 + C5345 * C164) * C61) *
                        C3719 +
                    ((C159 * C620 + C5345 * C730) * C70 +
                     (C159 * C626 + C5345 * C734) * C61) *
                        C3720 +
                    ((C159 * C622 + C5345 * C731) * C70 +
                     (C159 * C630 + C5345 * C735) * C61) *
                        C3721 +
                    ((C159 * C3723 + C5345 * C3785) * C70 +
                     (C159 * C3725 + C5345 * C3786) * C61) *
                        C3722) *
                   C5315 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[12] += (-std::pow(Pi, 2.5) *
                   (((C426 * C71 + C311 * C160 + C427 * C316 + C312 * C429 +
                      C428 * C318 + C313 * C430) *
                         C105 +
                     (C426 * C106 + C311 * C186 + C427 * C358 + C312 * C463 +
                      C428 * C360 + C313 * C464) *
                         C65) *
                        C3255 +
                    ((C426 * C620 + C311 * C730 + C427 * C1443 + C312 * C1561 +
                      C428 * C3005 + C313 * C3091) *
                         C105 +
                     (C426 * C662 + C311 * C764 + C427 * C1485 + C312 * C1599 +
                      C428 * C3035 + C313 * C3119) *
                         C65) *
                        C5420) *
                   C5315 * C61 * C64) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C159 * C71 + C5345 * C160) * C105 +
                      (C159 * C106 + C5345 * C186) * C65) *
                         C3255 +
                     ((C159 * C620 + C5345 * C730) * C105 +
                      (C159 * C662 + C5345 * C764) * C65) *
                         C5420) *
                        C1773 +
                    (((C159 * C72 + C5345 * C161) * C105 +
                      (C159 * C107 + C5345 * C187) * C65) *
                         C3255 +
                     ((C159 * C621 + C5345 * C732) * C105 +
                      (C159 * C663 + C5345 * C766) * C65) *
                         C5420) *
                        C1774 +
                    (((C159 * C73 + C5345 * C162) * C105 +
                      (C159 * C108 + C5345 * C188) * C65) *
                         C3255 +
                     ((C159 * C1183 + C5345 * C1269) * C105 +
                      (C159 * C1213 + C5345 * C1297) * C65) *
                         C5420) *
                        C1775) *
                   C61 * C64) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C159 * C71 + C5345 * C160) * C105 +
                     (C159 * C106 + C5345 * C186) * C65) *
                        C3719 +
                    ((C159 * C620 + C5345 * C730) * C105 +
                     (C159 * C662 + C5345 * C764) * C65) *
                        C3720 +
                    ((C159 * C622 + C5345 * C731) * C105 +
                     (C159 * C664 + C5345 * C765) * C65) *
                        C3721 +
                    ((C159 * C3723 + C5345 * C3785) * C105 +
                     (C159 * C3745 + C5345 * C3805) * C65) *
                        C3722) *
                   C5315 * C61 * C64) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[12] += (-std::pow(Pi, 2.5) *
                   (((C426 * C71 + C311 * C160 + C427 * C316 + C312 * C429 +
                      C428 * C318 + C313 * C430) *
                         C132 +
                     (C426 * C133 + C311 * C208 + C427 * C392 + C312 * C493 +
                      C428 * C394 + C313 * C494) *
                         C64) *
                        C3255 +
                    ((C426 * C620 + C311 * C730 + C427 * C1443 + C312 * C1561 +
                      C428 * C3005 + C313 * C3091) *
                         C132 +
                     (C426 * C696 + C311 * C794 + C427 * C1523 + C312 * C1635 +
                      C428 * C3063 + C313 * C3146) *
                         C64) *
                        C5420) *
                   C5315 * C65 * C61) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C159 * C71 + C5345 * C160) * C132 +
                      (C159 * C133 + C5345 * C208) * C64) *
                         C3255 +
                     ((C159 * C620 + C5345 * C730) * C132 +
                      (C159 * C696 + C5345 * C794) * C64) *
                         C5420) *
                        C1773 +
                    (((C159 * C72 + C5345 * C161) * C132 +
                      (C159 * C134 + C5345 * C209) * C64) *
                         C3255 +
                     ((C159 * C621 + C5345 * C732) * C132 +
                      (C159 * C697 + C5345 * C796) * C64) *
                         C5420) *
                        C1774 +
                    (((C159 * C73 + C5345 * C162) * C132 +
                      (C159 * C135 + C5345 * C210) * C64) *
                         C3255 +
                     ((C159 * C1183 + C5345 * C1269) * C132 +
                      (C159 * C1241 + C5345 * C1324) * C64) *
                         C5420) *
                        C1775) *
                   C65 * C61) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C159 * C71 + C5345 * C160) * C132 +
                     (C159 * C133 + C5345 * C208) * C64) *
                        C3719 +
                    ((C159 * C620 + C5345 * C730) * C132 +
                     (C159 * C696 + C5345 * C794) * C64) *
                        C3720 +
                    ((C159 * C622 + C5345 * C731) * C132 +
                     (C159 * C698 + C5345 * C795) * C64) *
                        C3721 +
                    ((C159 * C3723 + C5345 * C3785) * C132 +
                     (C159 * C3765 + C5345 * C3824) * C64) *
                        C3722) *
                   C5315 * C65 * C61) /
                      (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (-std::pow(Pi, 2.5) *
         (((C3413 * C71 + C3255 * C231 + C3414 * C620 + C5420 * C827) * C70 +
           (C3413 * C79 + C3255 * C235 + C3414 * C626 + C5420 * C831) * C61) *
              C5315 * C311 +
          ((C3413 * C316 + C3255 * C523 + C3414 * C1443 + C5420 * C1671) * C70 +
           (C3413 * C322 + C3255 * C527 + C3414 * C1447 + C5420 * C1673) *
               C61) *
              C5315 * C312 +
          ((C3413 * C318 + C3255 * C525 + C3414 * C3005 + C5420 * C3173) * C70 +
           (C3413 * C326 + C3255 * C529 + C3414 * C3007 + C5420 * C3174) *
               C61) *
              C5315 * C313) *
         C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3413 * C71 + C3255 * C231 + C3414 * C620 + C5420 * C827) * C70 +
           (C3413 * C79 + C3255 * C235 + C3414 * C626 + C5420 * C831) * C61) *
              C1773 +
          ((C3413 * C72 + C3255 * C232 + C3414 * C621 + C5420 * C829) * C70 +
           (C3413 * C80 + C3255 * C236 + C3414 * C627 + C5420 * C833) * C61) *
              C1774 +
          ((C3413 * C73 + C3255 * C233 + C3414 * C1183 + C5420 * C1353) * C70 +
           (C3413 * C81 + C3255 * C237 + C3414 * C1185 + C5420 * C1354) * C61) *
              C1775) *
         C5345 * C64 * C65) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C3843 * C71 + C3719 * C231 + C3844 * C620 + C3720 * C827 +
           C3845 * C622 + C3721 * C828 + C3846 * C3723 + C3722 * C3847) *
              C70 +
          (C3843 * C79 + C3719 * C235 + C3844 * C626 + C3720 * C831 +
           C3845 * C630 + C3721 * C832 + C3846 * C3725 + C3722 * C3848) *
              C61) *
         C5315 * C5345 * C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] +=
        (-std::pow(Pi, 2.5) *
         (((C3413 * C71 + C3255 * C231 + C3414 * C620 + C5420 * C827) * C105 +
           (C3413 * C106 + C3255 * C257 + C3414 * C662 + C5420 * C861) * C65) *
              C5315 * C311 +
          ((C3413 * C316 + C3255 * C523 + C3414 * C1443 + C5420 * C1671) *
               C105 +
           (C3413 * C358 + C3255 * C557 + C3414 * C1485 + C5420 * C1709) *
               C65) *
              C5315 * C312 +
          ((C3413 * C318 + C3255 * C525 + C3414 * C3005 + C5420 * C3173) *
               C105 +
           (C3413 * C360 + C3255 * C559 + C3414 * C3035 + C5420 * C3201) *
               C65) *
              C5315 * C313) *
         C61 * C64) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3413 * C71 + C3255 * C231 + C3414 * C620 + C5420 * C827) * C105 +
           (C3413 * C106 + C3255 * C257 + C3414 * C662 + C5420 * C861) * C65) *
              C1773 +
          ((C3413 * C72 + C3255 * C232 + C3414 * C621 + C5420 * C829) * C105 +
           (C3413 * C107 + C3255 * C258 + C3414 * C663 + C5420 * C863) * C65) *
              C1774 +
          ((C3413 * C73 + C3255 * C233 + C3414 * C1183 + C5420 * C1353) * C105 +
           (C3413 * C108 + C3255 * C259 + C3414 * C1213 + C5420 * C1381) *
               C65) *
              C1775) *
         C5345 * C61 * C64) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C3843 * C71 + C3719 * C231 + C3844 * C620 + C3720 * C827 +
           C3845 * C622 + C3721 * C828 + C3846 * C3723 + C3722 * C3847) *
              C105 +
          (C3843 * C106 + C3719 * C257 + C3844 * C662 + C3720 * C861 +
           C3845 * C664 + C3721 * C862 + C3846 * C3745 + C3722 * C3867) *
              C65) *
         C5315 * C5345 * C61 * C64) /
            (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (-std::pow(Pi, 2.5) *
         (((C3413 * C71 + C3255 * C231 + C3414 * C620 + C5420 * C827) * C132 +
           (C3413 * C133 + C3255 * C279 + C3414 * C696 + C5420 * C891) * C64) *
              C5315 * C311 +
          ((C3413 * C316 + C3255 * C523 + C3414 * C1443 + C5420 * C1671) *
               C132 +
           (C3413 * C392 + C3255 * C587 + C3414 * C1523 + C5420 * C1745) *
               C64) *
              C5315 * C312 +
          ((C3413 * C318 + C3255 * C525 + C3414 * C3005 + C5420 * C3173) *
               C132 +
           (C3413 * C394 + C3255 * C589 + C3414 * C3063 + C5420 * C3228) *
               C64) *
              C5315 * C313) *
         C65 * C61) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3413 * C71 + C3255 * C231 + C3414 * C620 + C5420 * C827) * C132 +
           (C3413 * C133 + C3255 * C279 + C3414 * C696 + C5420 * C891) * C64) *
              C1773 +
          ((C3413 * C72 + C3255 * C232 + C3414 * C621 + C5420 * C829) * C132 +
           (C3413 * C134 + C3255 * C280 + C3414 * C697 + C5420 * C893) * C64) *
              C1774 +
          ((C3413 * C73 + C3255 * C233 + C3414 * C1183 + C5420 * C1353) * C132 +
           (C3413 * C135 + C3255 * C281 + C3414 * C1241 + C5420 * C1408) *
               C64) *
              C1775) *
         C5345 * C65 * C61) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C3843 * C71 + C3719 * C231 + C3844 * C620 + C3720 * C827 +
           C3845 * C622 + C3721 * C828 + C3846 * C3723 + C3722 * C3847) *
              C132 +
          (C3843 * C133 + C3719 * C279 + C3844 * C696 + C3720 * C891 +
           C3845 * C698 + C3721 * C892 + C3846 * C3765 + C3722 * C3886) *
              C64) *
         C5315 * C5345 * C65 * C61) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4705 * C71 + C5488 * C75 + C4698 * C72 + C5320 * C76) * C70 +
           (C4705 * C79 + C5488 * C83 + C4698 * C80 + C5320 * C84) * C61) *
              C5345 * C5520 +
          ((C4705 * C620 + C5488 * C624 + C4698 * C621 + C5320 * C625) * C70 +
           (C4705 * C626 + C5488 * C632 + C4698 * C627 + C5320 * C633) * C61) *
              C5345 * C5521 +
          ((C4705 * C622 + C5488 * C628 + C4698 * C623 + C5320 * C629) * C70 +
           (C4705 * C630 + C5488 * C634 + C4698 * C631 + C5320 * C635) * C61) *
              C5345 * C4221) *
         C64 * C65) /
        (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4705 * C71 + C5488 * C75 + C4698 * C72 + C5320 * C76) * C105 +
           (C4705 * C106 + C5488 * C110 + C4698 * C107 + C5320 * C111) * C65) *
              C5345 * C5520 +
          ((C4705 * C620 + C5488 * C624 + C4698 * C621 + C5320 * C625) * C105 +
           (C4705 * C662 + C5488 * C666 + C4698 * C663 + C5320 * C667) * C65) *
              C5345 * C5521 +
          ((C4705 * C622 + C5488 * C628 + C4698 * C623 + C5320 * C629) * C105 +
           (C4705 * C664 + C5488 * C668 + C4698 * C665 + C5320 * C669) * C65) *
              C5345 * C4221) *
         C61 * C64) /
        (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4705 * C71 + C5488 * C75 + C4698 * C72 + C5320 * C76) * C132 +
           (C4705 * C133 + C5488 * C137 + C4698 * C134 + C5320 * C138) * C64) *
              C5345 * C5520 +
          ((C4705 * C620 + C5488 * C624 + C4698 * C621 + C5320 * C625) * C132 +
           (C4705 * C696 + C5488 * C700 + C4698 * C697 + C5320 * C701) * C64) *
              C5345 * C5521 +
          ((C4705 * C622 + C5488 * C628 + C4698 * C623 + C5320 * C629) * C132 +
           (C4705 * C698 + C5488 * C702 + C4698 * C699 + C5320 * C703) * C64) *
              C5345 * C4221) *
         C65 * C61) /
        (p * q * std::sqrt(p + q));
    d2eeyx[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C159 * C71 + C5345 * C160) * C70 +
                      (C159 * C79 + C5345 * C164) * C61) *
                         C5520 +
                     ((C159 * C620 + C5345 * C730) * C70 +
                      (C159 * C626 + C5345 * C734) * C61) *
                         C5521 +
                     ((C159 * C622 + C5345 * C731) * C70 +
                      (C159 * C630 + C5345 * C735) * C61) *
                         C4221) *
                        C5488 +
                    (((C159 * C72 + C5345 * C161) * C70 +
                      (C159 * C80 + C5345 * C165) * C61) *
                         C5520 +
                     ((C159 * C621 + C5345 * C732) * C70 +
                      (C159 * C627 + C5345 * C736) * C61) *
                         C5521 +
                     ((C159 * C623 + C5345 * C733) * C70 +
                      (C159 * C631 + C5345 * C737) * C61) *
                         C4221) *
                        C5320) *
                   C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C159 * C71 + C5345 * C160) * C105 +
                      (C159 * C106 + C5345 * C186) * C65) *
                         C5520 +
                     ((C159 * C620 + C5345 * C730) * C105 +
                      (C159 * C662 + C5345 * C764) * C65) *
                         C5521 +
                     ((C159 * C622 + C5345 * C731) * C105 +
                      (C159 * C664 + C5345 * C765) * C65) *
                         C4221) *
                        C5488 +
                    (((C159 * C72 + C5345 * C161) * C105 +
                      (C159 * C107 + C5345 * C187) * C65) *
                         C5520 +
                     ((C159 * C621 + C5345 * C732) * C105 +
                      (C159 * C663 + C5345 * C766) * C65) *
                         C5521 +
                     ((C159 * C623 + C5345 * C733) * C105 +
                      (C159 * C665 + C5345 * C767) * C65) *
                         C4221) *
                        C5320) *
                   C61 * C64) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C159 * C71 + C5345 * C160) * C132 +
                      (C159 * C133 + C5345 * C208) * C64) *
                         C5520 +
                     ((C159 * C620 + C5345 * C730) * C132 +
                      (C159 * C696 + C5345 * C794) * C64) *
                         C5521 +
                     ((C159 * C622 + C5345 * C731) * C132 +
                      (C159 * C698 + C5345 * C795) * C64) *
                         C4221) *
                        C5488 +
                    (((C159 * C72 + C5345 * C161) * C132 +
                      (C159 * C134 + C5345 * C209) * C64) *
                         C5520 +
                     ((C159 * C621 + C5345 * C732) * C132 +
                      (C159 * C697 + C5345 * C796) * C64) *
                         C5521 +
                     ((C159 * C623 + C5345 * C733) * C132 +
                      (C159 * C699 + C5345 * C797) * C64) *
                         C4221) *
                        C5320) *
                   C65 * C61) /
                  (p * q * std::sqrt(p + q));
    d2eezx[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4378 * C71 + C5520 * C231 + C4379 * C620 + C5521 * C827 +
                      C4380 * C622 + C4221 * C828) *
                         C70 +
                     (C4378 * C79 + C5520 * C235 + C4379 * C626 + C5521 * C831 +
                      C4380 * C630 + C4221 * C832) *
                         C61) *
                        C5488 +
                    ((C4378 * C72 + C5520 * C232 + C4379 * C621 + C5521 * C829 +
                      C4380 * C623 + C4221 * C830) *
                         C70 +
                     (C4378 * C80 + C5520 * C236 + C4379 * C627 + C5521 * C833 +
                      C4380 * C631 + C4221 * C834) *
                         C61) *
                        C5320) *
                   C5345 * C64 * C65) /
                  (p * q * std::sqrt(p + q));
    d2eezy[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4378 * C71 + C5520 * C231 + C4379 * C620 + C5521 * C827 +
                      C4380 * C622 + C4221 * C828) *
                         C105 +
                     (C4378 * C106 + C5520 * C257 + C4379 * C662 +
                      C5521 * C861 + C4380 * C664 + C4221 * C862) *
                         C65) *
                        C5488 +
                    ((C4378 * C72 + C5520 * C232 + C4379 * C621 + C5521 * C829 +
                      C4380 * C623 + C4221 * C830) *
                         C105 +
                     (C4378 * C107 + C5520 * C258 + C4379 * C663 +
                      C5521 * C863 + C4380 * C665 + C4221 * C864) *
                         C65) *
                        C5320) *
                   C5345 * C61 * C64) /
                  (p * q * std::sqrt(p + q));
    d2eezz[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4378 * C71 + C5520 * C231 + C4379 * C620 + C5521 * C827 +
                      C4380 * C622 + C4221 * C828) *
                         C132 +
                     (C4378 * C133 + C5520 * C279 + C4379 * C696 +
                      C5521 * C891 + C4380 * C698 + C4221 * C892) *
                         C64) *
                        C5488 +
                    ((C4378 * C72 + C5520 * C232 + C4379 * C621 + C5521 * C829 +
                      C4380 * C623 + C4221 * C830) *
                         C132 +
                     (C4378 * C134 + C5520 * C280 + C4379 * C697 +
                      C5521 * C893 + C4380 * C699 + C4221 * C894) *
                         C64) *
                        C5320) *
                   C5345 * C65 * C61) /
                  (p * q * std::sqrt(p + q));
    d2eexx[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1778 * C71 + C1773 * C75 + C1779 * C72 + C1774 * C76 +
                      C1780 * C73 + C1775 * C77) *
                         C70 +
                     (C1778 * C79 + C1773 * C83 + C1779 * C80 + C1774 * C84 +
                      C1780 * C81 + C1775 * C85) *
                         C61) *
                        C5345 * C3255 +
                    ((C1778 * C620 + C1773 * C624 + C1779 * C621 +
                      C1774 * C625 + C1780 * C1183 + C1775 * C1184) *
                         C70 +
                     (C1778 * C626 + C1773 * C632 + C1779 * C627 +
                      C1774 * C633 + C1780 * C1185 + C1775 * C1186) *
                         C61) *
                        C5345 * C5420) *
                   C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C2014 * C71 + C5315 * C75) * C70 +
                      (C2014 * C79 + C5315 * C83) * C61) *
                         C311 +
                     ((C2014 * C316 + C5315 * C320) * C70 +
                      (C2014 * C322 + C5315 * C328) * C61) *
                         C312 +
                     ((C2014 * C318 + C5315 * C324) * C70 +
                      (C2014 * C326 + C5315 * C330) * C61) *
                         C313) *
                        C3255 +
                    (((C2014 * C620 + C5315 * C624) * C70 +
                      (C2014 * C626 + C5315 * C632) * C61) *
                         C311 +
                     ((C2014 * C1443 + C5315 * C1445) * C70 +
                      (C2014 * C1447 + C5315 * C1449) * C61) *
                         C312 +
                     ((C2014 * C3005 + C5315 * C3006) * C70 +
                      (C2014 * C3007 + C5315 * C3008) * C61) *
                         C313) *
                        C5420) *
                   C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eexy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1778 * C71 + C1773 * C75 + C1779 * C72 + C1774 * C76 +
                      C1780 * C73 + C1775 * C77) *
                         C105 +
                     (C1778 * C106 + C1773 * C110 + C1779 * C107 +
                      C1774 * C111 + C1780 * C108 + C1775 * C112) *
                         C65) *
                        C5345 * C3255 +
                    ((C1778 * C620 + C1773 * C624 + C1779 * C621 +
                      C1774 * C625 + C1780 * C1183 + C1775 * C1184) *
                         C105 +
                     (C1778 * C662 + C1773 * C666 + C1779 * C663 +
                      C1774 * C667 + C1780 * C1213 + C1775 * C1214) *
                         C65) *
                        C5345 * C5420) *
                   C61 * C64) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C2014 * C71 + C5315 * C75) * C105 +
                      (C2014 * C106 + C5315 * C110) * C65) *
                         C311 +
                     ((C2014 * C316 + C5315 * C320) * C105 +
                      (C2014 * C358 + C5315 * C362) * C65) *
                         C312 +
                     ((C2014 * C318 + C5315 * C324) * C105 +
                      (C2014 * C360 + C5315 * C364) * C65) *
                         C313) *
                        C3255 +
                    (((C2014 * C620 + C5315 * C624) * C105 +
                      (C2014 * C662 + C5315 * C666) * C65) *
                         C311 +
                     ((C2014 * C1443 + C5315 * C1445) * C105 +
                      (C2014 * C1485 + C5315 * C1487) * C65) *
                         C312 +
                     ((C2014 * C3005 + C5315 * C3006) * C105 +
                      (C2014 * C3035 + C5315 * C3036) * C65) *
                         C313) *
                        C5420) *
                   C61 * C64) /
                      (p * q * std::sqrt(p + q));
    d2eexz[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1778 * C71 + C1773 * C75 + C1779 * C72 + C1774 * C76 +
                      C1780 * C73 + C1775 * C77) *
                         C132 +
                     (C1778 * C133 + C1773 * C137 + C1779 * C134 +
                      C1774 * C138 + C1780 * C135 + C1775 * C139) *
                         C64) *
                        C5345 * C3255 +
                    ((C1778 * C620 + C1773 * C624 + C1779 * C621 +
                      C1774 * C625 + C1780 * C1183 + C1775 * C1184) *
                         C132 +
                     (C1778 * C696 + C1773 * C700 + C1779 * C697 +
                      C1774 * C701 + C1780 * C1241 + C1775 * C1242) *
                         C64) *
                        C5345 * C5420) *
                   C65 * C61) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C2014 * C71 + C5315 * C75) * C132 +
                      (C2014 * C133 + C5315 * C137) * C64) *
                         C311 +
                     ((C2014 * C316 + C5315 * C320) * C132 +
                      (C2014 * C392 + C5315 * C396) * C64) *
                         C312 +
                     ((C2014 * C318 + C5315 * C324) * C132 +
                      (C2014 * C394 + C5315 * C398) * C64) *
                         C313) *
                        C3255 +
                    (((C2014 * C620 + C5315 * C624) * C132 +
                      (C2014 * C696 + C5315 * C700) * C64) *
                         C311 +
                     ((C2014 * C1443 + C5315 * C1445) * C132 +
                      (C2014 * C1523 + C5315 * C1525) * C64) *
                         C312 +
                     ((C2014 * C3005 + C5315 * C3006) * C132 +
                      (C2014 * C3063 + C5315 * C3064) * C64) *
                         C313) *
                        C5420) *
                   C65 * C61) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C159 * C71 + C5345 * C160) * C70 +
                      (C159 * C79 + C5345 * C164) * C61) *
                         C3255 +
                     ((C159 * C620 + C5345 * C730) * C70 +
                      (C159 * C626 + C5345 * C734) * C61) *
                         C5420) *
                        C1773 +
                    (((C159 * C72 + C5345 * C161) * C70 +
                      (C159 * C80 + C5345 * C165) * C61) *
                         C3255 +
                     ((C159 * C621 + C5345 * C732) * C70 +
                      (C159 * C627 + C5345 * C736) * C61) *
                         C5420) *
                        C1774 +
                    (((C159 * C73 + C5345 * C162) * C70 +
                      (C159 * C81 + C5345 * C166) * C61) *
                         C3255 +
                     ((C159 * C1183 + C5345 * C1269) * C70 +
                      (C159 * C1185 + C5345 * C1270) * C61) *
                         C5420) *
                        C1775) *
                   C64 * C65) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C426 * C71 + C311 * C160 + C427 * C316 + C312 * C429 +
                      C428 * C318 + C313 * C430) *
                         C70 +
                     (C426 * C79 + C311 * C164 + C427 * C322 + C312 * C433 +
                      C428 * C326 + C313 * C434) *
                         C61) *
                        C3255 +
                    ((C426 * C620 + C311 * C730 + C427 * C1443 + C312 * C1561 +
                      C428 * C3005 + C313 * C3091) *
                         C70 +
                     (C426 * C626 + C311 * C734 + C427 * C1447 + C312 * C1563 +
                      C428 * C3007 + C313 * C3092) *
                         C61) *
                        C5420) *
                   C5315 * C64 * C65) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C159 * C71 + C5345 * C160) * C105 +
                      (C159 * C106 + C5345 * C186) * C65) *
                         C3255 +
                     ((C159 * C620 + C5345 * C730) * C105 +
                      (C159 * C662 + C5345 * C764) * C65) *
                         C5420) *
                        C1773 +
                    (((C159 * C72 + C5345 * C161) * C105 +
                      (C159 * C107 + C5345 * C187) * C65) *
                         C3255 +
                     ((C159 * C621 + C5345 * C732) * C105 +
                      (C159 * C663 + C5345 * C766) * C65) *
                         C5420) *
                        C1774 +
                    (((C159 * C73 + C5345 * C162) * C105 +
                      (C159 * C108 + C5345 * C188) * C65) *
                         C3255 +
                     ((C159 * C1183 + C5345 * C1269) * C105 +
                      (C159 * C1213 + C5345 * C1297) * C65) *
                         C5420) *
                        C1775) *
                   C61 * C64) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C426 * C71 + C311 * C160 + C427 * C316 + C312 * C429 +
                      C428 * C318 + C313 * C430) *
                         C105 +
                     (C426 * C106 + C311 * C186 + C427 * C358 + C312 * C463 +
                      C428 * C360 + C313 * C464) *
                         C65) *
                        C3255 +
                    ((C426 * C620 + C311 * C730 + C427 * C1443 + C312 * C1561 +
                      C428 * C3005 + C313 * C3091) *
                         C105 +
                     (C426 * C662 + C311 * C764 + C427 * C1485 + C312 * C1599 +
                      C428 * C3035 + C313 * C3119) *
                         C65) *
                        C5420) *
                   C5315 * C61 * C64) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C159 * C71 + C5345 * C160) * C132 +
                      (C159 * C133 + C5345 * C208) * C64) *
                         C3255 +
                     ((C159 * C620 + C5345 * C730) * C132 +
                      (C159 * C696 + C5345 * C794) * C64) *
                         C5420) *
                        C1773 +
                    (((C159 * C72 + C5345 * C161) * C132 +
                      (C159 * C134 + C5345 * C209) * C64) *
                         C3255 +
                     ((C159 * C621 + C5345 * C732) * C132 +
                      (C159 * C697 + C5345 * C796) * C64) *
                         C5420) *
                        C1774 +
                    (((C159 * C73 + C5345 * C162) * C132 +
                      (C159 * C135 + C5345 * C210) * C64) *
                         C3255 +
                     ((C159 * C1183 + C5345 * C1269) * C132 +
                      (C159 * C1241 + C5345 * C1324) * C64) *
                         C5420) *
                        C1775) *
                   C65 * C61) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C426 * C71 + C311 * C160 + C427 * C316 + C312 * C429 +
                      C428 * C318 + C313 * C430) *
                         C132 +
                     (C426 * C133 + C311 * C208 + C427 * C392 + C312 * C493 +
                      C428 * C394 + C313 * C494) *
                         C64) *
                        C3255 +
                    ((C426 * C620 + C311 * C730 + C427 * C1443 + C312 * C1561 +
                      C428 * C3005 + C313 * C3091) *
                         C132 +
                     (C426 * C696 + C311 * C794 + C427 * C1523 + C312 * C1635 +
                      C428 * C3063 + C313 * C3146) *
                         C64) *
                        C5420) *
                   C5315 * C65 * C61) /
                      (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3413 * C71 + C3255 * C231 + C3414 * C620 + C5420 * C827) * C70 +
           (C3413 * C79 + C3255 * C235 + C3414 * C626 + C5420 * C831) * C61) *
              C1773 +
          ((C3413 * C72 + C3255 * C232 + C3414 * C621 + C5420 * C829) * C70 +
           (C3413 * C80 + C3255 * C236 + C3414 * C627 + C5420 * C833) * C61) *
              C1774 +
          ((C3413 * C73 + C3255 * C233 + C3414 * C1183 + C5420 * C1353) * C70 +
           (C3413 * C81 + C3255 * C237 + C3414 * C1185 + C5420 * C1354) * C61) *
              C1775) *
         C5345 * C64 * C65) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3413 * C71 + C3255 * C231 + C3414 * C620 + C5420 * C827) * C70 +
           (C3413 * C79 + C3255 * C235 + C3414 * C626 + C5420 * C831) * C61) *
              C5315 * C311 +
          ((C3413 * C316 + C3255 * C523 + C3414 * C1443 + C5420 * C1671) * C70 +
           (C3413 * C322 + C3255 * C527 + C3414 * C1447 + C5420 * C1673) *
               C61) *
              C5315 * C312 +
          ((C3413 * C318 + C3255 * C525 + C3414 * C3005 + C5420 * C3173) * C70 +
           (C3413 * C326 + C3255 * C529 + C3414 * C3007 + C5420 * C3174) *
               C61) *
              C5315 * C313) *
         C64 * C65) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3413 * C71 + C3255 * C231 + C3414 * C620 + C5420 * C827) * C105 +
           (C3413 * C106 + C3255 * C257 + C3414 * C662 + C5420 * C861) * C65) *
              C1773 +
          ((C3413 * C72 + C3255 * C232 + C3414 * C621 + C5420 * C829) * C105 +
           (C3413 * C107 + C3255 * C258 + C3414 * C663 + C5420 * C863) * C65) *
              C1774 +
          ((C3413 * C73 + C3255 * C233 + C3414 * C1183 + C5420 * C1353) * C105 +
           (C3413 * C108 + C3255 * C259 + C3414 * C1213 + C5420 * C1381) *
               C65) *
              C1775) *
         C5345 * C61 * C64) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3413 * C71 + C3255 * C231 + C3414 * C620 + C5420 * C827) * C105 +
           (C3413 * C106 + C3255 * C257 + C3414 * C662 + C5420 * C861) * C65) *
              C5315 * C311 +
          ((C3413 * C316 + C3255 * C523 + C3414 * C1443 + C5420 * C1671) *
               C105 +
           (C3413 * C358 + C3255 * C557 + C3414 * C1485 + C5420 * C1709) *
               C65) *
              C5315 * C312 +
          ((C3413 * C318 + C3255 * C525 + C3414 * C3005 + C5420 * C3173) *
               C105 +
           (C3413 * C360 + C3255 * C559 + C3414 * C3035 + C5420 * C3201) *
               C65) *
              C5315 * C313) *
         C61 * C64) /
            (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3413 * C71 + C3255 * C231 + C3414 * C620 + C5420 * C827) * C132 +
           (C3413 * C133 + C3255 * C279 + C3414 * C696 + C5420 * C891) * C64) *
              C1773 +
          ((C3413 * C72 + C3255 * C232 + C3414 * C621 + C5420 * C829) * C132 +
           (C3413 * C134 + C3255 * C280 + C3414 * C697 + C5420 * C893) * C64) *
              C1774 +
          ((C3413 * C73 + C3255 * C233 + C3414 * C1183 + C5420 * C1353) * C132 +
           (C3413 * C135 + C3255 * C281 + C3414 * C1241 + C5420 * C1408) *
               C64) *
              C1775) *
         C5345 * C65 * C61) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3413 * C71 + C3255 * C231 + C3414 * C620 + C5420 * C827) * C132 +
           (C3413 * C133 + C3255 * C279 + C3414 * C696 + C5420 * C891) * C64) *
              C5315 * C311 +
          ((C3413 * C316 + C3255 * C523 + C3414 * C1443 + C5420 * C1671) *
               C132 +
           (C3413 * C392 + C3255 * C587 + C3414 * C1523 + C5420 * C1745) *
               C64) *
              C5315 * C312 +
          ((C3413 * C318 + C3255 * C525 + C3414 * C3005 + C5420 * C3173) *
               C132 +
           (C3413 * C394 + C3255 * C589 + C3414 * C3063 + C5420 * C3228) *
               C64) *
              C5315 * C313) *
         C65 * C61) /
            (p * q * std::sqrt(p + q));
}
