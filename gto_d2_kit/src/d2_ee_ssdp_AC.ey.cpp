/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ssdp_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0021_13(const double ae,
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
    const double C4684 = 0 * ce;
    const double C4683 = ce * de;
    const double C4682 = 0 * de;
    const double C4681 = ce + de;
    const double C4680 = 0 * de;
    const double C4679 = xC - xD;
    const double C4734 = yC - yD;
    const double C4741 = zC - zD;
    const double C4753 = 0 * de;
    const double C4773 = 0 * ce;
    const double C4769 = 0 * de;
    const double C4800 = 0 * de;
    const double C4818 = 0 * ce;
    const double C4814 = 0 * de;
    const double C4873 = p + q;
    const double C4872 = p * q;
    const double C4879 = ae + be;
    const double C4878 = xP - xQ;
    const double C4877 = bs[2];
    const double C4888 = ae * ce;
    const double C4884 = bs[3];
    const double C4897 = bs[4];
    const double C4916 = yP - yQ;
    const double C4931 = zP - zQ;
    const double C71 = bs[0];
    const double C5498 = ae * be;
    const double C4689 = C4684 / C4681;
    const double C4686 = 2 * C4681;
    const double C4685 = std::pow(C4681, 2);
    const double C4688 = C4683 * C4679;
    const double C4687 = C4679 * C4682;
    const double C5316 = C4679 * de;
    const double C5315 = C4679 * ce;
    const double C5314 = std::pow(C4679, 2);
    const double C4754 = C4683 * C4734;
    const double C5359 = std::pow(C4734, 2);
    const double C5373 = C4734 * de;
    const double C5372 = C4734 * ce;
    const double C4801 = C4683 * C4741;
    const double C5385 = std::pow(C4741, 2);
    const double C5397 = C4741 * de;
    const double C5396 = C4741 * ce;
    const double C4770 = C4734 * C4753;
    const double C4778 = C4773 / C4681;
    const double C4815 = C4741 * C4800;
    const double C4823 = C4818 / C4681;
    const double C4874 = 2 * C4872;
    const double C4881 = C4681 * C4879;
    const double C4889 = C4878 * ae;
    const double C4887 = std::pow(C4878, 2);
    const double C4885 = C4878 * ce;
    const double C4919 = C4878 * C4916;
    const double C4918 = C4916 * ce;
    const double C4948 = C4916 * C4878;
    const double C4947 = C4916 * ae;
    const double C4961 = std::pow(C4916, 2);
    const double C4934 = C4878 * C4931;
    const double C4933 = C4931 * ce;
    const double C4970 = C4916 * C4931;
    const double C4980 = C4931 * C4878;
    const double C4979 = C4931 * ae;
    const double C4993 = C4931 * C4916;
    const double C5002 = std::pow(C4931, 2);
    const double C57 = std::exp(-(std::pow(xA - xB, 2) * C5498) / C4879);
    const double C62 = std::exp(-(std::pow(yA - yB, 2) * C5498) / C4879);
    const double C63 = std::exp(-(std::pow(zA - zB, 2) * C5498) / C4879);
    const double C5324 = std::pow(C4686, -1);
    const double C5506 = std::pow(C4686, -2);
    const double C4690 = 2 * C4685;
    const double C5505 = 4 * C4685;
    const double C4691 = C4687 / C4681;
    const double C5317 = C5314 * C4683;
    const double C5360 = C5359 * C4683;
    const double C5386 = C5385 * C4683;
    const double C4775 = C4770 / C4681;
    const double C4820 = C4815 / C4681;
    const double C4876 = C4874 / C4873;
    const double C83 =
        (-((std::pow(xP - xQ, 2) * bs[2] * std::pow(C4874 / C4873, 2) -
            (bs[1] * C4874) / C4873) *
           ae * ce) /
         C4681) /
        (ae + be);
    const double C72 = -(C4878 * bs[1] * C4874) / C4873;
    const double C318 = -(C4916 * bs[1] * C4874) / C4873;
    const double C604 = -(C4931 * bs[1] * C4874) / C4873;
    const double C4892 = C4884 * C4889;
    const double C4903 = C4897 * C4889;
    const double C75 = (-(bs[1] * C4889 * C4874) / C4873) / C4879;
    const double C4899 = C4887 * C4897;
    const double C4891 = C4884 * C4885;
    const double C4900 = C4897 * C4885;
    const double C76 = (bs[1] * C4885 * C4874) / (C4873 * C4681);
    const double C4921 = C4919 * ae;
    const double C4920 = C4884 * C4918;
    const double C4926 = C4897 * C4918;
    const double C106 = (bs[1] * C4918 * C4874) / (C4873 * C4681);
    const double C4950 = C4948 * ae;
    const double C4949 = C4884 * C4947;
    const double C4955 = C4897 * C4947;
    const double C160 = (-(bs[1] * C4947 * C4874) / C4873) / C4879;
    const double C4963 = C4961 * C4897;
    const double C4936 = C4934 * ae;
    const double C4935 = C4884 * C4933;
    const double C4941 = C4897 * C4933;
    const double C133 = (bs[1] * C4933 * C4874) / (C4873 * C4681);
    const double C4971 = C4970 * ae;
    const double C4982 = C4980 * ae;
    const double C4981 = C4884 * C4979;
    const double C4987 = C4897 * C4979;
    const double C231 = (-(bs[1] * C4979 * C4874) / C4873) / C4879;
    const double C4994 = C4993 * ae;
    const double C5004 = C5002 * C4897;
    const double C66 = -(2 * ae * be * (xA - xB) * C57) / (ae + be);
    const double C159 = -(2 * ae * be * (yA - yB) * C62) / (ae + be);
    const double C230 = -(2 * ae * be * (zA - zB) * C63) / (ae + be);
    const double C4696 = C4682 / C4690;
    const double C4694 = C4680 / C4690;
    const double C4772 = C4753 / C4690;
    const double C4776 = C4769 / C4690;
    const double C4817 = C4800 / C4690;
    const double C4821 = C4814 / C4690;
    const double C4693 = 0 - C4691;
    const double C5318 = C5317 / C4681;
    const double C5361 = C5360 / C4681;
    const double C5387 = C5386 / C4681;
    const double C4779 = 0 - C4775;
    const double C4824 = 0 - C4820;
    const double C4880 = std::pow(C4876, 2);
    const double C4883 = -C4876;
    const double C4898 = std::pow(C4876, 4);
    const double C4923 = C4921 * ce;
    const double C4952 = C4950 * ce;
    const double C4938 = C4936 * ce;
    const double C4972 = C4971 * ce;
    const double C4984 = C4982 * ce;
    const double C4995 = C4994 * ce;
    const double C4698 = C4693 * ce;
    const double C5319 = -C5318;
    const double C5362 = -C5361;
    const double C5388 = -C5387;
    const double C4782 = C4779 * ce;
    const double C4827 = C4824 * ce;
    const double C4886 = C4877 * C4880;
    const double C84 =
        (-(C4880 * C4877 * C4878 * ae * ce) / C4681) / C4879 -
        (ae * C4880 * C4877 * C4878 * ce) / C4881 -
        (C4878 *
         (C4877 * C4880 + std::pow(C4878, 2) * bs[3] * std::pow(-C4876, 3)) *
         ae * ce) /
            C4881;
    const double C110 =
        (-(C4880 * C4877 * C4878 * (yP - yQ) * ae * ce) / C4681) / C4879;
    const double C137 =
        (-(C4880 * C4877 * C4878 * (zP - zQ) * ae * ce) / C4681) / C4879;
    const double C164 =
        (-(C4880 * C4877 * C4916 * C4878 * ae * ce) / C4681) / C4879;
    const double C186 =
        (-((std::pow(C4916, 2) * C4877 * C4880 - (bs[1] * C4874) / C4873) *
           C4888) /
         C4681) /
        C4879;
    const double C208 =
        (-(C4880 * C4877 * C4916 * C4931 * ae * ce) / C4681) / C4879;
    const double C235 =
        (-(C4880 * C4877 * C4931 * C4878 * ae * ce) / C4681) / C4879;
    const double C257 =
        (-(C4880 * C4877 * C4931 * C4916 * ae * ce) / C4681) / C4879;
    const double C279 =
        (-((std::pow(C4931, 2) * C4877 * C4880 - (bs[1] * C4874) / C4873) *
           C4888) /
         C4681) /
        C4879;
    const double C77 = (C4878 * C4880 * C4877 * C4889) / C4879 -
                       (ae * bs[1] * C4874) / (C4873 * C4879);
    const double C78 = (ce * bs[1] * C4874) / (C4873 * C4681) -
                       (C4878 * C4880 * C4877 * C4885) / C4681;
    const double C107 = -(C4878 * C4880 * C4877 * C4918) / C4681;
    const double C134 = -(C4878 * C4880 * C4877 * C4933) / C4681;
    const double C161 = (C4878 * C4880 * C4877 * C4947) / C4879;
    const double C232 = (C4878 * C4880 * C4877 * C4979) / C4879;
    const double C321 = -(C4916 * C4880 * C4877 * C4885) / C4681;
    const double C322 = (C4916 * C4880 * C4877 * C4889) / C4879;
    const double C357 = (ce * bs[1] * C4874) / (C4873 * C4681) -
                        (C4916 * C4880 * C4877 * C4918) / C4681;
    const double C389 = -(C4916 * C4880 * C4877 * C4933) / C4681;
    const double C422 = (C4916 * C4880 * C4877 * C4947) / C4879 -
                        (ae * bs[1] * C4874) / (C4873 * C4879);
    const double C512 = (C4916 * C4880 * C4877 * C4979) / C4879;
    const double C607 = -(C4931 * C4880 * C4877 * C4885) / C4681;
    const double C608 = (C4931 * C4880 * C4877 * C4889) / C4879;
    const double C642 = -(C4931 * C4880 * C4877 * C4918) / C4681;
    const double C675 = (ce * bs[1] * C4874) / (C4873 * C4681) -
                        (C4931 * C4880 * C4877 * C4933) / C4681;
    const double C708 = (C4931 * C4880 * C4877 * C4947) / C4879;
    const double C798 = (C4931 * C4880 * C4877 * C4979) / C4879 -
                        (ae * bs[1] * C4874) / (C4873 * C4879);
    const double C4890 = std::pow(C4883, 3);
    const double C4907 = C4898 * C4903;
    const double C4906 = C4898 * C4900;
    const double C4905 = C4899 * C4898;
    const double C4928 = C4898 * C4926;
    const double C4943 = C4898 * C4941;
    const double C4957 = C4898 * C4955;
    const double C4964 = C4963 * C4898;
    const double C4989 = C4898 * C4987;
    const double C5005 = C5004 * C4898;
    const double C4925 = C4897 * C4923;
    const double C4954 = C4897 * C4952;
    const double C4940 = C4897 * C4938;
    const double C4974 = C4897 * C4972;
    const double C4986 = C4897 * C4984;
    const double C4997 = C4897 * C4995;
    const double C4701 = C4698 / C4681;
    const double C5320 = std::exp(C5319);
    const double C5363 = std::exp(C5362);
    const double C5389 = std::exp(C5388);
    const double C4784 = C4782 / C4681;
    const double C4829 = C4827 / C4681;
    const double C73 = C4886 * C4887 - (bs[1] * C4874) / C4873;
    const double C317 = C4916 * C4878 * C4886;
    const double C603 = C4931 * C4878 * C4886;
    const double C894 = C4886 * C4961 - (bs[1] * C4874) / C4873;
    const double C1351 = C4931 * C4916 * C4886;
    const double C1620 = C4886 * C5002 - (bs[1] * C4874) / C4873;
    const double C4894 = C4890 * C4892;
    const double C4893 = C4890 * C4891;
    const double C4896 = C4884 * C4890;
    const double C4922 = C4890 * C4920;
    const double C4937 = C4890 * C4935;
    const double C4951 = C4890 * C4949;
    const double C4983 = C4890 * C4981;
    const double C111 =
        (-(C4878 * C4890 * C4884 * C4878 * C4916 * ae * ce) / C4681) / C4879 -
        (ae * C4880 * C4877 * C4916 * ce) / C4881;
    const double C138 =
        (-(C4878 * C4890 * C4884 * C4878 * C4931 * ae * ce) / C4681) / C4879 -
        (ae * C4880 * C4877 * C4931 * ce) / C4881;
    const double C165 =
        (-(C4878 * C4890 * C4884 * C4916 * C4878 * ae * ce) / C4681) / C4879 -
        (C4880 * C4877 * C4916 * ae * ce) / C4881;
    const double C187 =
        (-(C4878 * (C4886 + std::pow(C4916, 2) * C4884 * C4890) * C4888) /
         C4681) /
        C4879;
    const double C209 =
        (-(C4878 * C4890 * C4884 * C4916 * C4931 * ae * ce) / C4681) / C4879;
    const double C210 = (-(C4898 * C4897 * C4972 * C4887) / C4681) / C4879 -
                        (C4890 * C4884 * C4972) / C4881;
    const double C236 =
        (-(C4878 * C4890 * C4884 * C4931 * C4878 * ae * ce) / C4681) / C4879 -
        (C4880 * C4877 * C4931 * ae * ce) / C4881;
    const double C258 =
        (-(C4878 * C4890 * C4884 * C4931 * C4916 * ae * ce) / C4681) / C4879;
    const double C259 = (-(C4898 * C4897 * C4995 * C4887) / C4681) / C4879 -
                        (C4890 * C4884 * C4995) / C4881;
    const double C280 =
        (-(C4878 * (C4886 + std::pow(C4931, 2) * C4884 * C4890) * C4888) /
         C4681) /
        C4879;
    const double C326 =
        (-(C4916 * (C4886 + C4887 * C4884 * C4890) * C4888) / C4681) / C4879;
    const double C360 = (-(C4916 * C4890 * C4884 * C4923) / C4681) / C4879 -
                        (C4880 * C4877 * C4889 * ce) / C4881;
    const double C392 = (-(C4916 * C4890 * C4884 * C4938) / C4681) / C4879;
    const double C424 = (-(C4916 * C4890 * C4884 * C4952) / C4681) / C4879 -
                        (ae * C4880 * C4877 * C4885) / C4881;
    const double C453 =
        (-(C4880 * C4877 * C4947 * ce) / C4681) / C4879 -
        (ae * C4880 * C4877 * C4918) / C4881 -
        (C4916 * (C4886 + C4961 * C4884 * C4890) * C4888) / C4881;
    const double C482 = (-(C4916 * C4890 * C4884 * C4972) / C4681) / C4879 -
                        (ae * C4880 * C4877 * C4933) / C4881;
    const double C514 = (-(C4916 * C4890 * C4884 * C4984) / C4681) / C4879;
    const double C543 = (-(C4916 * C4890 * C4884 * C4995) / C4681) / C4879 -
                        (C4880 * C4877 * C4979 * ce) / C4881;
    const double C572 =
        (-(C4916 * (C4886 + C5002 * C4884 * C4890) * C4888) / C4681) / C4879;
    const double C612 =
        (-(C4931 * (C4886 + C4887 * C4884 * C4890) * C4888) / C4681) / C4879;
    const double C645 = (-(C4931 * C4890 * C4884 * C4923) / C4681) / C4879;
    const double C678 = (-(C4931 * C4890 * C4884 * C4938) / C4681) / C4879 -
                        (C4880 * C4877 * C4889 * ce) / C4881;
    const double C710 = (-(C4931 * C4890 * C4884 * C4952) / C4681) / C4879;
    const double C740 =
        (-(C4931 * (C4886 + C4961 * C4884 * C4890) * C4888) / C4681) / C4879;
    const double C768 = (-(C4931 * C4890 * C4884 * C4972) / C4681) / C4879 -
                        (C4880 * C4877 * C4947 * ce) / C4881;
    const double C800 = (-(C4931 * C4890 * C4884 * C4984) / C4681) / C4879 -
                        (ae * C4880 * C4877 * C4885) / C4881;
    const double C830 = (-(C4931 * C4890 * C4884 * C4995) / C4681) / C4879 -
                        (ae * C4880 * C4877 * C4918) / C4881;
    const double C858 =
        (-(C4880 * C4877 * C4979 * ce) / C4681) / C4879 -
        (ae * C4880 * C4877 * C4933) / C4881 -
        (C4931 * (C4886 + C5002 * C4884 * C4890) * C4888) / C4881;
    const double C4910 = C4878 * C4907;
    const double C5137 = C4916 * C4907;
    const double C4909 = C4878 * C4906;
    const double C5142 = C4916 * C4906;
    const double C5072 = C4878 * C4928;
    const double C5089 = C4916 * C4928;
    const double C5076 = C4878 * C4943;
    const double C5145 = C4916 * C4943;
    const double C5156 = C4931 * C4943;
    const double C5073 = C4878 * C4957;
    const double C5091 = C4916 * C4957;
    const double C5081 = C4878 * C4989;
    const double C5146 = C4916 * C4989;
    const double C5158 = C4931 * C4989;
    const double C4927 = C4898 * C4925;
    const double C4956 = C4898 * C4954;
    const double C4942 = C4898 * C4940;
    const double C4975 = C4898 * C4974;
    const double C4988 = C4898 * C4986;
    const double C4998 = C4898 * C4997;
    const double C4703 = C4701 - C4694;
    const double C4692 = C4688 * C5320;
    const double C5321 = C5320 * C5315;
    const double C5325 = C5324 * C5320;
    const double C5501 = C5320 / C4686;
    const double C5500 = C5320 * C5316;
    const double C311 = C5506 * C5320;
    const double C4755 = C4754 * C5363;
    const double C105 = -(2 * C4683 * (yC - yD) * C5363) / C4681;
    const double C355 =
        ((C5363 - (C4734 * 2 * C4683 * C4734 * C5363) / C4681) * ce) / C4681 -
        (0 * de) / C4690;
    const double C356 = (0 * ce) / C4681 - (C4683 * C4734 * C5363) / C4685;
    const double C5374 = C5363 * C5372;
    const double C5377 = C5324 * C5363;
    const double C5510 = C5363 * C5373;
    const double C5509 = C5363 / C4686;
    const double C891 = C5506 * C5363;
    const double C4802 = C4801 * C5389;
    const double C132 = -(2 * C4683 * (zC - zD) * C5389) / C4681;
    const double C673 =
        ((C5389 - (C4741 * 2 * C4683 * C4741 * C5389) / C4681) * ce) / C4681 -
        (0 * de) / C4690;
    const double C674 = (0 * ce) / C4681 - (C4683 * C4741 * C5389) / C4685;
    const double C5398 = C5389 * C5396;
    const double C5401 = C5324 * C5389;
    const double C5515 = C5389 * C5397;
    const double C5514 = C5389 / C4686;
    const double C1619 = C5506 * C5389;
    const double C4786 = C4784 - C4776;
    const double C4831 = C4829 - C4821;
    const double C79 =
        (C4880 * C4877 * C4889 + C4878 * (C4878 * C4894 + C4886 * ae) +
         C4878 * C4886 * ae) /
        C4879;
    const double C320 = (C4916 * (C4878 * C4894 + C4886 * ae)) / C4879;
    const double C606 = (C4931 * (C4878 * C4894 + C4886 * ae)) / C4879;
    const double C896 = (C4880 * C4877 * C4889 + C4894 * C4961) / C4879;
    const double C1163 =
        (2 * C4916 * C4894 + C4916 * (C4894 + C4907 * C4961)) / C4879;
    const double C1353 = (C4931 * C4916 * C4894) / C4879;
    const double C1356 = (C4931 * (C4894 + C4907 * C4961)) / C4879;
    const double C1622 = (C4880 * C4877 * C4889 + C4894 * C5002) / C4879;
    const double C2137 =
        (2 * C4931 * C4894 + C4931 * (C4894 + C4907 * C5002)) / C4879;
    const double C85 =
        (-(ae * (C4878 * C4893 + C4886 * ce)) / C4681) / C4879 -
        ((C4886 + C4887 * C4884 * C4890) * C4888) / C4881 -
        ((C4878 * C4894 + C4886 * ae) * ce) / C4881 +
        C4878 * ((-(C4894 * ce) / C4681) / C4879 - (ae * C4893) / C4881 -
                 (C4878 * (C4884 * C4890 + C4887 * bs[4] * std::pow(C4876, 4)) *
                  C4888) /
                     C4881);
    const double C80 = -(C4878 * (C4878 * C4893 + C4886 * ce) +
                         C4880 * C4877 * C4885 + C4878 * C4886 * ce) /
                       C4681;
    const double C323 = -(C4916 * (C4878 * C4893 + C4886 * ce)) / C4681;
    const double C609 = -(C4931 * (C4878 * C4893 + C4886 * ce)) / C4681;
    const double C897 = -(C4893 * C4961 + C4880 * C4877 * C4885) / C4681;
    const double C1162 = (-2 * C4916 * C4893) / C4681 -
                         (C4916 * (C4906 * C4961 + C4893)) / C4681;
    const double C1354 = -(C4931 * C4916 * C4893) / C4681;
    const double C1355 = -(C4931 * (C4906 * C4961 + C4893)) / C4681;
    const double C1623 = -(C4893 * C5002 + C4880 * C4877 * C4885) / C4681;
    const double C2136 = (-2 * C4931 * C4893) / C4681 -
                         (C4931 * (C4906 * C5002 + C4893)) / C4681;
    const double C4904 = C4896 * ae;
    const double C4902 = C4878 * C4896;
    const double C4901 = C4896 * ce;
    const double C4908 = C4896 + C4905;
    const double C4965 = C4896 + C4964;
    const double C5006 = C4896 + C5005;
    const double C5090 = C4916 * C4896;
    const double C5157 = C4931 * C4896;
    const double C188 =
        (-((C4896 + C4961 * C4897 * C4898) * C4888 * C4887) / C4681) / C4879 -
        ((C4886 + C4961 * C4884 * C4890) * C4888) / C4881;
    const double C281 =
        (-((C4896 + C5002 * C4897 * C4898) * C4888 * C4887) / C4681) / C4879 -
        ((C4886 + C5002 * C4884 * C4890) * C4888) / C4881;
    const double C74 = 2 * C4878 * C4886 + C4878 * (C4886 + C4896 * C4887);
    const double C319 = C4916 * (C4886 + C4896 * C4887);
    const double C605 = C4931 * (C4886 + C4896 * C4887);
    const double C1161 = 2 * C4916 * C4886 + C4916 * (C4886 + C4896 * C4961);
    const double C1352 = C4931 * (C4886 + C4896 * C4961);
    const double C2135 = 2 * C4931 * C4886 + C4931 * (C4886 + C4896 * C5002);
    const double C112 =
        (-(ae * C4878 * C4922) / C4681) / C4879 -
        (C4890 * C4884 * C4923) / C4881 +
        C4878 * ((-(C4878 * C4898 * C4897 * C4923) / C4681) / C4879 -
                 (ae * C4922) / C4881);
    const double C108 = -(C4922 * C4887 + C4880 * C4877 * C4918) / C4681;
    const double C109 = (-2 * C4878 * C4922) / C4681 -
                        (C4878 * (C4928 * C4887 + C4922)) / C4681;
    const double C358 = -(C4916 * C4878 * C4922 + C4878 * C4886 * ce) / C4681;
    const double C359 =
        -(C4916 * (C4928 * C4887 + C4922) + (C4886 + C4896 * C4887) * ce) /
        C4681;
    const double C641 = -(C4931 * C4878 * C4922) / C4681;
    const double C643 = -(C4931 * (C4928 * C4887 + C4922)) / C4681;
    const double C931 = -(C4916 * (C4916 * C4922 + C4886 * ce) +
                          C4880 * C4877 * C4918 + C4916 * C4886 * ce) /
                        C4681;
    const double C1385 = -(C4931 * (C4916 * C4922 + C4886 * ce)) / C4681;
    const double C1654 = -(C4922 * C5002 + C4880 * C4877 * C4918) / C4681;
    const double C2157 = (-2 * C4931 * C4922) / C4681 -
                         (C4931 * (C4928 * C5002 + C4922)) / C4681;
    const double C139 =
        (-(ae * C4878 * C4937) / C4681) / C4879 -
        (C4890 * C4884 * C4938) / C4881 +
        C4878 * ((-(C4878 * C4898 * C4897 * C4938) / C4681) / C4879 -
                 (ae * C4937) / C4881);
    const double C135 = -(C4937 * C4887 + C4880 * C4877 * C4933) / C4681;
    const double C136 = (-2 * C4878 * C4937) / C4681 -
                        (C4878 * (C4943 * C4887 + C4937)) / C4681;
    const double C390 = -(C4916 * C4878 * C4937) / C4681;
    const double C391 = -(C4916 * (C4943 * C4887 + C4937)) / C4681;
    const double C676 = -(C4931 * C4878 * C4937 + C4878 * C4886 * ce) / C4681;
    const double C677 =
        -(C4931 * (C4943 * C4887 + C4937) + (C4886 + C4896 * C4887) * ce) /
        C4681;
    const double C961 = -(C4937 * C4961 + C4880 * C4877 * C4933) / C4681;
    const double C1207 = (-2 * C4916 * C4937) / C4681 -
                         (C4916 * (C4943 * C4961 + C4937)) / C4681;
    const double C1415 = -(C4931 * C4916 * C4937 + C4916 * C4886 * ce) / C4681;
    const double C1416 =
        -(C4931 * (C4943 * C4961 + C4937) + (C4886 + C4896 * C4961) * ce) /
        C4681;
    const double C1687 = -(C4931 * (C4931 * C4937 + C4886 * ce) +
                           C4880 * C4877 * C4933 + C4931 * C4886 * ce) /
                         C4681;
    const double C166 =
        (-(C4878 * C4951 * ce) / C4681) / C4879 -
        (C4890 * C4884 * C4952) / C4881 +
        C4878 * ((-(C4878 * C4898 * C4897 * C4952) / C4681) / C4879 -
                 (C4951 * ce) / C4881);
    const double C162 = (C4880 * C4877 * C4947 + C4951 * C4887) / C4879;
    const double C163 =
        (2 * C4878 * C4951 + C4878 * (C4951 + C4957 * C4887)) / C4879;
    const double C421 = (C4916 * C4878 * C4951 + C4878 * C4886 * ae) / C4879;
    const double C423 =
        (C4916 * (C4951 + C4957 * C4887) + (C4886 + C4896 * C4887) * ae) /
        C4879;
    const double C707 = (C4931 * C4878 * C4951) / C4879;
    const double C709 = (C4931 * (C4951 + C4957 * C4887)) / C4879;
    const double C991 =
        (C4880 * C4877 * C4947 + C4916 * (C4916 * C4951 + C4886 * ae) +
         C4916 * C4886 * ae) /
        C4879;
    const double C1445 = (C4931 * (C4916 * C4951 + C4886 * ae)) / C4879;
    const double C1717 = (C4880 * C4877 * C4947 + C4951 * C5002) / C4879;
    const double C2201 =
        (2 * C4931 * C4951 + C4931 * (C4951 + C4957 * C5002)) / C4879;
    const double C237 =
        (-(C4878 * C4983 * ce) / C4681) / C4879 -
        (C4890 * C4884 * C4984) / C4881 +
        C4878 * ((-(C4878 * C4898 * C4897 * C4984) / C4681) / C4879 -
                 (C4983 * ce) / C4881);
    const double C233 = (C4880 * C4877 * C4979 + C4983 * C4887) / C4879;
    const double C234 =
        (2 * C4878 * C4983 + C4878 * (C4983 + C4989 * C4887)) / C4879;
    const double C511 = (C4916 * C4878 * C4983) / C4879;
    const double C513 = (C4916 * (C4983 + C4989 * C4887)) / C4879;
    const double C797 = (C4931 * C4878 * C4983 + C4878 * C4886 * ae) / C4879;
    const double C799 =
        (C4931 * (C4983 + C4989 * C4887) + (C4886 + C4896 * C4887) * ae) /
        C4879;
    const double C1077 = (C4880 * C4877 * C4979 + C4983 * C4961) / C4879;
    const double C1285 =
        (2 * C4916 * C4983 + C4916 * (C4983 + C4989 * C4961)) / C4879;
    const double C1531 = (C4931 * C4916 * C4983 + C4916 * C4886 * ae) / C4879;
    const double C1532 =
        (C4931 * (C4983 + C4989 * C4961) + (C4886 + C4896 * C4961) * ae) /
        C4879;
    const double C1803 =
        (C4880 * C4877 * C4979 + C4931 * (C4931 * C4983 + C4886 * ae) +
         C4931 * C4886 * ae) /
        C4879;
    const double C1891 = (C4916 * C4894 + C5137 * C5002) / C4879;
    const double C2824 =
        (-(C4931 * C5137 * ce) / C4681) / C4879 - (ae * C4931 * C5142) / C4881 -
        (C4878 * C4931 * C4916 *
         (C4897 * C4898 + C4887 * bs[5] * std::pow(C4883, 5)) * C4888) /
            C4881;
    const double C1890 = -(C5142 * C5002 + C4916 * C4893) / C4681;
    const double C1655 = -(C5072 * C5002 + C4878 * C4922) / C4681;
    const double C962 = -(C5076 * C4961 + C4878 * C4937) / C4681;
    const double C2967 =
        (-(C4931 * C5073 * ce) / C4681) / C4879 - (ae * C4931 * C5072) / C4881 -
        (C4916 * C4931 * C4878 *
         (C4897 * C4898 + C4961 * bs[5] * std::pow(C4883, 5)) * C4888) /
            C4881;
    const double C1718 = (C4878 * C4951 + C5073 * C5002) / C4879;
    const double C3108 =
        (-(C4916 * C5081 * ce) / C4681) / C4879 - (ae * C4916 * C5076) / C4881 -
        (C4931 * C4916 * C4878 *
         (C4897 * C4898 + C5002 * bs[5] * std::pow(C4883, 5)) * C4888) /
            C4881;
    const double C1078 = (C4878 * C4983 + C5081 * C4961) / C4879;
    const double C113 =
        2 * ((-(C4878 * C4927) / C4681) / C4879 - (ae * C4922) / C4881) -
        (ae * (C4928 * C4887 + C4922)) / C4881 +
        C4878 *
            ((-(ae * C4878 * C4928) / C4681) / C4879 - C4927 / C4881 +
             C4878 * ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4923) / C4681) /
                          C4879 -
                      (ae * C4928) / C4881));
    const double C361 =
        C4916 * ((-(C4878 * C4927) / C4681) / C4879 - (ae * C4922) / C4881) -
        ((C4878 * C4894 + C4886 * ae) * ce) / C4881;
    const double C644 =
        C4931 * ((-(C4878 * C4927) / C4681) / C4879 - (ae * C4922) / C4881);
    const double C646 =
        C4931 *
        ((-(ae * C4878 * C4928) / C4681) / C4879 - C4927 / C4881 +
         C4878 *
             ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4923) / C4681) / C4879 -
              (ae * C4928) / C4881));
    const double C933 =
        (-(C4916 * C4894 * ce) / C4681) / C4879 -
        (C4890 * C4884 * C4923) / C4881 +
        C4916 * ((-(C4916 * C4927) / C4681) / C4879 - (C4894 * ce) / C4881);
    const double C1188 =
        2 * ((-(C4916 * C4927) / C4681) / C4879 - (C4894 * ce) / C4881) -
        ((C4894 + C4907 * C4961) * ce) / C4881 +
        C4916 *
            ((-(C4916 * C4907 * ce) / C4681) / C4879 - C4927 / C4881 +
             C4916 * ((-(C4916 * std::pow(C4883, 5) * bs[5] * C4923) / C4681) /
                          C4879 -
                      (C4907 * ce) / C4881));
    const double C1387 =
        C4931 * ((-(C4916 * C4927) / C4681) / C4879 - (C4894 * ce) / C4881);
    const double C1388 =
        C4931 *
        ((-(C4916 * C4907 * ce) / C4681) / C4879 - C4927 / C4881 +
         C4916 *
             ((-(C4916 * std::pow(C4883, 5) * bs[5] * C4923) / C4681) / C4879 -
              (C4907 * ce) / C4881));
    const double C1656 =
        (-(C4927 * C5002) / C4681) / C4879 - (C4890 * C4884 * C4923) / C4881;
    const double C1657 =
        (-(C4878 * C4927) / C4681) / C4879 - (ae * C4922) / C4881 +
        ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4923) / C4681) / C4879 -
         (ae * C4928) / C4881) *
            C5002;
    const double C1920 =
        (-(C4916 * C4927) / C4681) / C4879 - (C4894 * ce) / C4881 +
        ((-(C4916 * std::pow(C4883, 5) * bs[5] * C4923) / C4681) / C4879 -
         (C4907 * ce) / C4881) *
            C5002;
    const double C2158 =
        (-2 * C4931 * C4927) / C4881 +
        C4931 *
            ((-(std::pow(C4883, 5) * bs[5] * C4923 * C5002) / C4681) / C4879 -
             C4927 / C4881);
    const double C167 =
        2 * ((-(C4878 * C4956) / C4681) / C4879 - (C4951 * ce) / C4881) -
        ((C4951 + C4957 * C4887) * ce) / C4881 +
        C4878 *
            ((-(C4878 * C4957 * ce) / C4681) / C4879 - C4956 / C4881 +
             C4878 * ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4952) / C4681) /
                          C4879 -
                      (C4957 * ce) / C4881));
    const double C425 =
        C4916 * ((-(C4878 * C4956) / C4681) / C4879 - (C4951 * ce) / C4881) -
        (ae * (C4878 * C4893 + C4886 * ce)) / C4881;
    const double C711 =
        C4931 * ((-(C4878 * C4956) / C4681) / C4879 - (C4951 * ce) / C4881);
    const double C712 =
        C4931 *
        ((-(C4878 * C4957 * ce) / C4681) / C4879 - C4956 / C4881 +
         C4878 *
             ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4952) / C4681) / C4879 -
              (C4957 * ce) / C4881));
    const double C993 =
        (-(ae * C4916 * C4893) / C4681) / C4879 -
        (C4890 * C4884 * C4952) / C4881 +
        C4916 * ((-(C4916 * C4956) / C4681) / C4879 - (ae * C4893) / C4881);
    const double C1228 =
        2 * ((-(C4916 * C4956) / C4681) / C4879 - (ae * C4893) / C4881) -
        (ae * (C4906 * C4961 + C4893)) / C4881 +
        C4916 *
            ((-(ae * C4916 * C4906) / C4681) / C4879 - C4956 / C4881 +
             C4916 * ((-(C4916 * std::pow(C4883, 5) * bs[5] * C4952) / C4681) /
                          C4879 -
                      (ae * C4906) / C4881));
    const double C1447 = (-(C4916 * C4931 * C4956) / C4681) / C4879 -
                         (ae * C4931 * C4893) / C4881;
    const double C1448 =
        (-(ae * C4931 * C4916 * C4906) / C4681) / C4879 -
        (C4931 * C4956) / C4881 +
        C4916 *
            ((-(C4916 * C4931 * std::pow(C4883, 5) * bs[5] * C4952) / C4681) /
                 C4879 -
             (ae * C4931 * C4906) / C4881);
    const double C1719 =
        (-(C4956 * C5002) / C4681) / C4879 - (C4890 * C4884 * C4952) / C4881;
    const double C1720 =
        (-(C4878 * C4956) / C4681) / C4879 - (C4951 * ce) / C4881 +
        ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4952) / C4681) / C4879 -
         (C4957 * ce) / C4881) *
            C5002;
    const double C1976 =
        C4916 *
            ((-(std::pow(C4883, 5) * bs[5] * C4952 * C5002) / C4681) / C4879 -
             C4956 / C4881) -
        (ae * (C4906 * C5002 + C4893)) / C4881;
    const double C2202 =
        (-2 * C4931 * C4956) / C4881 +
        C4931 *
            ((-(std::pow(C4883, 5) * bs[5] * C4952 * C5002) / C4681) / C4879 -
             C4956 / C4881);
    const double C140 =
        2 * ((-(C4878 * C4942) / C4681) / C4879 - (ae * C4937) / C4881) -
        (ae * (C4943 * C4887 + C4937)) / C4881 +
        C4878 *
            ((-(ae * C4878 * C4943) / C4681) / C4879 - C4942 / C4881 +
             C4878 * ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4938) / C4681) /
                          C4879 -
                      (ae * C4943) / C4881));
    const double C393 =
        C4916 * ((-(C4878 * C4942) / C4681) / C4879 - (ae * C4937) / C4881);
    const double C394 =
        C4916 *
        ((-(ae * C4878 * C4943) / C4681) / C4879 - C4942 / C4881 +
         C4878 *
             ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4938) / C4681) / C4879 -
              (ae * C4943) / C4881));
    const double C679 =
        C4931 * ((-(C4878 * C4942) / C4681) / C4879 - (ae * C4937) / C4881) -
        ((C4878 * C4894 + C4886 * ae) * ce) / C4881;
    const double C963 =
        (-(C4942 * C4961) / C4681) / C4879 - (C4890 * C4884 * C4938) / C4881;
    const double C964 =
        (-(C4878 * C4942) / C4681) / C4879 - (ae * C4937) / C4881 +
        ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4938) / C4681) / C4879 -
         (ae * C4943) / C4881) *
            C4961;
    const double C1208 =
        (-2 * C4916 * C4942) / C4881 +
        C4916 *
            ((-(std::pow(C4883, 5) * bs[5] * C4938 * C4961) / C4681) / C4879 -
             C4942 / C4881);
    const double C1417 = (-(C4931 * C4916 * C4942) / C4681) / C4879 -
                         (C4916 * C4894 * ce) / C4881;
    const double C1418 =
        C4931 *
            ((-(std::pow(C4883, 5) * bs[5] * C4938 * C4961) / C4681) / C4879 -
             C4942 / C4881) -
        ((C4894 + C4907 * C4961) * ce) / C4881;
    const double C1689 =
        (-(C4931 * C4894 * ce) / C4681) / C4879 -
        (C4890 * C4884 * C4938) / C4881 +
        C4931 * ((-(C4931 * C4942) / C4681) / C4879 - (C4894 * ce) / C4881);
    const double C1948 =
        (-(C4931 * C5137 * ce) / C4681) / C4879 - (C4916 * C4942) / C4881 +
        C4931 *
            ((-(C4931 * C4916 * std::pow(C4883, 5) * bs[5] * C4938) / C4681) /
                 C4879 -
             (C5137 * ce) / C4881);
    const double C2182 =
        2 * ((-(C4931 * C4942) / C4681) / C4879 - (C4894 * ce) / C4881) -
        ((C4894 + C4907 * C5002) * ce) / C4881 +
        C4931 *
            ((-(C4931 * C4907 * ce) / C4681) / C4879 - C4942 / C4881 +
             C4931 * ((-(C4931 * std::pow(C4883, 5) * bs[5] * C4938) / C4681) /
                          C4879 -
                      (C4907 * ce) / C4881));
    const double C211 =
        (-2 * C4878 * C4975) / C4881 +
        C4878 *
            ((-(std::pow(C4883, 5) * bs[5] * C4972 * C4887) / C4681) / C4879 -
             C4975 / C4881);
    const double C483 = (-(C4916 * C4878 * C4975) / C4681) / C4879 -
                        (ae * C4878 * C4937) / C4881;
    const double C484 =
        C4916 *
            ((-(std::pow(C4883, 5) * bs[5] * C4972 * C4887) / C4681) / C4879 -
             C4975 / C4881) -
        (ae * (C4943 * C4887 + C4937)) / C4881;
    const double C769 = (-(C4931 * C4878 * C4975) / C4681) / C4879 -
                        (C4878 * C4951 * ce) / C4881;
    const double C770 =
        C4931 *
            ((-(std::pow(C4883, 5) * bs[5] * C4972 * C4887) / C4681) / C4879 -
             C4975 / C4881) -
        ((C4951 + C4957 * C4887) * ce) / C4881;
    const double C1049 =
        (-(ae * C4916 * C4937) / C4681) / C4879 -
        (C4890 * C4884 * C4972) / C4881 +
        C4916 * ((-(C4916 * C4975) / C4681) / C4879 - (ae * C4937) / C4881);
    const double C1050 =
        (-(ae * C4916 * C5076) / C4681) / C4879 - (C4878 * C4975) / C4881 +
        C4916 *
            ((-(C4916 * C4878 * std::pow(C4883, 5) * bs[5] * C4972) / C4681) /
                 C4879 -
             (ae * C5076) / C4881);
    const double C1266 =
        2 * ((-(C4916 * C4975) / C4681) / C4879 - (ae * C4937) / C4881) -
        (ae * (C4943 * C4961 + C4937)) / C4881 +
        C4916 *
            ((-(ae * C4916 * C4943) / C4681) / C4879 - C4975 / C4881 +
             C4916 * ((-(C4916 * std::pow(C4883, 5) * bs[5] * C4972) / C4681) /
                          C4879 -
                      (ae * C4943) / C4881));
    const double C1503 =
        C4916 * ((-(C4931 * C4975) / C4681) / C4879 - (C4951 * ce) / C4881) -
        (ae * (C4931 * C4937 + C4886 * ce)) / C4881;
    const double C1775 =
        (-(C4931 * C4951 * ce) / C4681) / C4879 -
        (C4890 * C4884 * C4972) / C4881 +
        C4931 * ((-(C4931 * C4975) / C4681) / C4879 - (C4951 * ce) / C4881);
    const double C1776 =
        (-(C4931 * C5073 * ce) / C4681) / C4879 - (C4878 * C4975) / C4881 +
        C4931 *
            ((-(C4931 * C4878 * std::pow(C4883, 5) * bs[5] * C4972) / C4681) /
                 C4879 -
             (C5073 * ce) / C4881);
    const double C2240 =
        2 * ((-(C4931 * C4975) / C4681) / C4879 - (C4951 * ce) / C4881) -
        ((C4951 + C4957 * C5002) * ce) / C4881 +
        C4931 *
            ((-(C4931 * C4957 * ce) / C4681) / C4879 - C4975 / C4881 +
             C4931 * ((-(C4931 * std::pow(C4883, 5) * bs[5] * C4972) / C4681) /
                          C4879 -
                      (C4957 * ce) / C4881));
    const double C238 =
        2 * ((-(C4878 * C4988) / C4681) / C4879 - (C4983 * ce) / C4881) -
        ((C4983 + C4989 * C4887) * ce) / C4881 +
        C4878 *
            ((-(C4878 * C4989 * ce) / C4681) / C4879 - C4988 / C4881 +
             C4878 * ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4984) / C4681) /
                          C4879 -
                      (C4989 * ce) / C4881));
    const double C515 =
        C4916 * ((-(C4878 * C4988) / C4681) / C4879 - (C4983 * ce) / C4881);
    const double C516 =
        C4916 *
        ((-(C4878 * C4989 * ce) / C4681) / C4879 - C4988 / C4881 +
         C4878 *
             ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4984) / C4681) / C4879 -
              (C4989 * ce) / C4881));
    const double C801 =
        C4931 * ((-(C4878 * C4988) / C4681) / C4879 - (C4983 * ce) / C4881) -
        (ae * (C4878 * C4893 + C4886 * ce)) / C4881;
    const double C1079 =
        (-(C4988 * C4961) / C4681) / C4879 - (C4890 * C4884 * C4984) / C4881;
    const double C1080 =
        (-(C4878 * C4988) / C4681) / C4879 - (C4983 * ce) / C4881 +
        ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4984) / C4681) / C4879 -
         (C4989 * ce) / C4881) *
            C4961;
    const double C1286 =
        (-2 * C4916 * C4988) / C4881 +
        C4916 *
            ((-(std::pow(C4883, 5) * bs[5] * C4984 * C4961) / C4681) / C4879 -
             C4988 / C4881);
    const double C1533 = (-(C4931 * C4916 * C4988) / C4681) / C4879 -
                         (ae * C4916 * C4893) / C4881;
    const double C1534 =
        C4931 *
            ((-(std::pow(C4883, 5) * bs[5] * C4984 * C4961) / C4681) / C4879 -
             C4988 / C4881) -
        (ae * (C4906 * C4961 + C4893)) / C4881;
    const double C1805 =
        (-(ae * C4931 * C4893) / C4681) / C4879 -
        (C4890 * C4884 * C4984) / C4881 +
        C4931 * ((-(C4931 * C4988) / C4681) / C4879 - (ae * C4893) / C4881);
    const double C2058 =
        (-(ae * C4931 * C5142) / C4681) / C4879 - (C4916 * C4988) / C4881 +
        C4931 *
            ((-(C4931 * C4916 * std::pow(C4883, 5) * bs[5] * C4984) / C4681) /
                 C4879 -
             (ae * C5142) / C4881);
    const double C2260 =
        2 * ((-(C4931 * C4988) / C4681) / C4879 - (ae * C4893) / C4881) -
        (ae * (C4906 * C5002 + C4893)) / C4881 +
        C4931 *
            ((-(ae * C4931 * C4906) / C4681) / C4879 - C4988 / C4881 +
             C4931 * ((-(C4931 * std::pow(C4883, 5) * bs[5] * C4984) / C4681) /
                          C4879 -
                      (ae * C4906) / C4881));
    const double C260 =
        (-2 * C4878 * C4998) / C4881 +
        C4878 *
            ((-(std::pow(C4883, 5) * bs[5] * C4995 * C4887) / C4681) / C4879 -
             C4998 / C4881);
    const double C544 = (-(C4916 * C4878 * C4998) / C4681) / C4879 -
                        (C4878 * C4983 * ce) / C4881;
    const double C545 =
        C4916 *
            ((-(std::pow(C4883, 5) * bs[5] * C4995 * C4887) / C4681) / C4879 -
             C4998 / C4881) -
        ((C4983 + C4989 * C4887) * ce) / C4881;
    const double C829 = (-(C4931 * C4878 * C4998) / C4681) / C4879 -
                        (ae * C4878 * C4922) / C4881;
    const double C831 =
        C4931 *
            ((-(std::pow(C4883, 5) * bs[5] * C4995 * C4887) / C4681) / C4879 -
             C4998 / C4881) -
        (ae * (C4928 * C4887 + C4922)) / C4881;
    const double C1107 =
        (-(C4916 * C4983 * ce) / C4681) / C4879 -
        (C4890 * C4884 * C4995) / C4881 +
        C4916 * ((-(C4916 * C4998) / C4681) / C4879 - (C4983 * ce) / C4881);
    const double C1108 =
        (-(C4916 * C5081 * ce) / C4681) / C4879 - (C4878 * C4998) / C4881 +
        C4916 *
            ((-(C4916 * C4878 * std::pow(C4883, 5) * bs[5] * C4995) / C4681) /
                 C4879 -
             (C5081 * ce) / C4881);
    const double C1305 =
        2 * ((-(C4916 * C4998) / C4681) / C4879 - (C4983 * ce) / C4881) -
        ((C4983 + C4989 * C4961) * ce) / C4881 +
        C4916 *
            ((-(C4916 * C4989 * ce) / C4681) / C4879 - C4998 / C4881 +
             C4916 * ((-(C4916 * std::pow(C4883, 5) * bs[5] * C4995) / C4681) /
                          C4879 -
                      (C4989 * ce) / C4881));
    const double C1561 =
        C4931 * ((-(C4916 * C4998) / C4681) / C4879 - (C4983 * ce) / C4881) -
        (ae * (C4916 * C4922 + C4886 * ce)) / C4881;
    const double C1833 =
        (-(ae * C4931 * C4922) / C4681) / C4879 -
        (C4890 * C4884 * C4995) / C4881 +
        C4931 * ((-(C4931 * C4998) / C4681) / C4879 - (ae * C4922) / C4881);
    const double C1834 =
        (-(ae * C4931 * C5072) / C4681) / C4879 - (C4878 * C4998) / C4881 +
        C4931 *
            ((-(C4931 * C4878 * std::pow(C4883, 5) * bs[5] * C4995) / C4681) /
                 C4879 -
             (ae * C5072) / C4881);
    const double C2279 =
        2 * ((-(C4931 * C4998) / C4681) / C4879 - (ae * C4922) / C4881) -
        (ae * (C4928 * C5002 + C4922)) / C4881 +
        C4931 *
            ((-(ae * C4931 * C4928) / C4681) / C4879 - C4998 / C4881 +
             C4931 * ((-(C4931 * std::pow(C4883, 5) * bs[5] * C4995) / C4681) /
                          C4879 -
                      (ae * C4928) / C4881));
    const double C4697 = C4692 / C4685;
    const double C4695 = 2 * C4692;
    const double C5503 = C5321 / C4690;
    const double C5502 = C5321 * C5316;
    const double C5499 = C5321 / C4681;
    const double C5328 = C5325 * C5316;
    const double C61 = C5325 / C5505;
    const double C2327 = C5325 / C4686;
    const double C309 = (C5320 * std::pow(C5316, 2)) / C4685 + C5501;
    const double C5519 = C5500 / C4681;
    const double C310 = (-2 * C5324 * C5500) / C4681;
    const double C4756 = 2 * C4755;
    const double C4774 = C4755 / C4685;
    const double C5512 = C5374 / C4690;
    const double C5511 = C5374 * C5373;
    const double C5507 = C5374 / C4681;
    const double C5380 = C5377 * C5373;
    const double C1159 = C5377 / C5505;
    const double C2573 = C5377 / C4686;
    const double C5522 = C5510 / C4681;
    const double C890 = (-2 * C5324 * C5510) / C4681;
    const double C889 = (C5363 * std::pow(C5373, 2)) / C4685 + C5509;
    const double C4803 = 2 * C4802;
    const double C4819 = C4802 / C4685;
    const double C5517 = C5398 / C4690;
    const double C5516 = C5398 * C5397;
    const double C5508 = C5398 / C4681;
    const double C5404 = C5401 * C5397;
    const double C2134 = C5401 / C5505;
    const double C3681 = C5401 / C4686;
    const double C5525 = C5515 / C4681;
    const double C1618 = (-2 * C5324 * C5515) / C4681;
    const double C1617 = (C5389 * std::pow(C5397, 2)) / C4685 + C5514;
    const double C4913 = C4910 + C4904;
    const double C5093 = C5091 + C4904;
    const double C5160 = C5158 + C4904;
    const double C3002 =
        C4916 *
            ((-(C4931 * C4878 * std::pow(C4883, 5) * bs[5] * C4972) / C4681) /
                 C4879 -
             (C5073 * ce) / C4881) -
        (ae * (C4931 * C5076 + C4902 * ce)) / C4881;
    const double C3073 =
        C4931 *
            ((-(C4916 * C4878 * std::pow(C4883, 5) * bs[5] * C4995) / C4681) /
                 C4879 -
             (C5081 * ce) / C4881) -
        (ae * (C4916 * C5072 + C4902 * ce)) / C4881;
    const double C932 = -(C4916 * (C4916 * C5072 + C4902 * ce) + C4878 * C4922 +
                          C4916 * C4902 * ce) /
                        C4681;
    const double C992 = (C4878 * C4951 + C4916 * (C4916 * C5073 + C4902 * ae) +
                         C4916 * C4902 * ae) /
                        C4879;
    const double C1688 = -(C4931 * (C4931 * C5076 + C4902 * ce) +
                           C4878 * C4937 + C4931 * C4902 * ce) /
                         C4681;
    const double C1804 = (C4878 * C4983 + C4931 * (C4931 * C5081 + C4902 * ae) +
                          C4931 * C4902 * ae) /
                         C4879;
    const double C2859 = -(C4931 * (C4916 * C5072 + C4902 * ce)) / C4681;
    const double C2895 = -(C4931 * C4916 * C5076 + C4916 * C4902 * ce) / C4681;
    const double C2931 = (C4931 * (C4916 * C5073 + C4902 * ae)) / C4879;
    const double C3037 = (C4931 * C4916 * C5081 + C4916 * C4902 * ae) / C4879;
    const double C895 = C4878 * C4886 + C4902 * C4961;
    const double C1621 = C4878 * C4886 + C4902 * C5002;
    const double C2821 = C4931 * C4916 * C4902;
    const double C4912 = C4909 + C4901;
    const double C5092 = C5089 + C4901;
    const double C5159 = C5156 + C4901;
    const double C2030 =
        C4916 *
            ((-(C4931 * C4957 * ce) / C4681) / C4879 - C4975 / C4881 +
             C4931 * ((-(C4931 * std::pow(C4883, 5) * bs[5] * C4972) / C4681) /
                          C4879 -
                      (C4957 * ce) / C4881)) -
        (ae * (C4931 * (C4931 * C4943 + C4901) + C4937 + C4931 * C4896 * ce)) /
            C4881;
    const double C4911 = C4908 * C4888;
    const double C4966 = C4965 * C4888;
    const double C5007 = C5006 * C4888;
    const double C1504 =
        (-(C4931 * C4975) / C4681) / C4879 - (C4951 * ce) / C4881 -
        (ae * (C4931 * C4916 * C4943 + C5090 * ce)) / C4881 +
        C4916 *
            (C4916 * ((-(C4931 * std::pow(C4883, 5) * bs[5] * C4972) / C4681) /
                          C4879 -
                      (C4957 * ce) / C4881) -
             (ae * (C4931 * C4943 + C4901)) / C4881);
    const double C1947 = -(C4931 * (C4931 * C5145 + C5090 * ce) +
                           C4916 * C4937 + C4931 * C5090 * ce) /
                         C4681;
    const double C2057 = (C4916 * C4983 + C4931 * (C4931 * C5146 + C5090 * ae) +
                          C4931 * C5090 * ae) /
                         C4879;
    const double C1889 = C4916 * C4886 + C5090 * C5002;
    const double C4700 = C4689 - C4697;
    const double C4699 = C4679 * C4695;
    const double C316 = ((-C4695 / C4681) / C4686 - (0 * de) / C4681) / C4686 -
                        (0 * de) / C4681;
    const double C1160 = -C4695 / C4681;
    const double C2575 = (-C4695 / C4681) / C4686 - (0 * de) / C4681;
    const double C5520 = C5502 / C4685;
    const double C5504 = C5328 / C4681;
    const double C2569 = -C5519;
    const double C4771 = C4734 * C4756;
    const double C929 =
        ((-C4753 / C4681) / C4686 -
         ((C5363 - (C4734 * C4756) / C4681) * de) / C4681) /
            C4686 -
        ((C4734 * ((-C4756 / C4681) / C4686 - (0 * de) / C4681) + C5377) * de) /
            C4681;
    const double C930 = ((-C4756 / C4681) / C4686 - (0 * de) / C4681) / C4686 -
                        (0 * de) / C4681;
    const double C2360 = (-C4756 / C4681) / C4686 - (0 * de) / C4681;
    const double C4781 = C4778 - C4774;
    const double C5523 = C5511 / C4685;
    const double C5513 = C5380 / C4681;
    const double C2328 = -C5522;
    const double C4816 = C4741 * C4803;
    const double C1685 =
        ((-C4800 / C4681) / C4686 -
         ((C5389 - (C4741 * C4803) / C4681) * de) / C4681) /
            C4686 -
        ((C4741 * ((-C4803 / C4681) / C4686 - (0 * de) / C4681) + C5401) * de) /
            C4681;
    const double C1686 = ((-C4803 / C4681) / C4686 - (0 * de) / C4681) / C4686 -
                         (0 * de) / C4681;
    const double C3190 = (-C4803 / C4681) / C4686 - (0 * de) / C4681;
    const double C4826 = C4823 - C4819;
    const double C5526 = C5516 / C4685;
    const double C5518 = C5404 / C4681;
    const double C3135 = -C5525;
    const double C362 =
        C4916 *
            ((-(ae * C4878 * C4928) / C4681) / C4879 - C4927 / C4881 +
             C4878 * ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4923) / C4681) /
                          C4879 -
                      (ae * C4928) / C4881)) -
        ((C4894 + C4878 * C4913 + C4902 * ae) * ce) / C4881;
    const double C680 =
        C4931 *
            ((-(ae * C4878 * C4943) / C4681) / C4879 - C4942 / C4881 +
             C4878 * ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4938) / C4681) /
                          C4879 -
                      (ae * C4943) / C4881)) -
        ((C4894 + C4878 * C4913 + C4902 * ae) * ce) / C4881;
    const double C934 =
        (-(C4878 * C4927) / C4681) / C4879 - (ae * C4922) / C4881 -
        (C4916 * C4913 * ce) / C4881 +
        C4916 *
            (C4916 * ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4923) / C4681) /
                          C4879 -
                      (ae * C4928) / C4881) -
             (C4913 * ce) / C4881);
    const double C1690 =
        (-(C4878 * C4942) / C4681) / C4879 - (ae * C4937) / C4881 -
        (C4931 * C4913 * ce) / C4881 +
        C4931 *
            (C4931 * ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4938) / C4681) /
                          C4879 -
                      (ae * C4943) / C4881) -
             (C4913 * ce) / C4881);
    const double C2860 =
        C4931 *
        (C4916 *
             ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4923) / C4681) / C4879 -
              (ae * C4928) / C4881) -
         (C4913 * ce) / C4881);
    const double C2896 =
        C4931 * C4916 *
            ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4938) / C4681) / C4879 -
             (ae * C4943) / C4881) -
        (C4916 * C4913 * ce) / C4881;
    const double C81 = (2 * (C4878 * C4894 + C4886 * ae) +
                        C4878 * (C4894 + C4878 * C4913 + C4902 * ae) +
                        (C4886 + C4896 * C4887) * ae) /
                       C4879;
    const double C324 = (C4916 * (C4894 + C4878 * C4913 + C4902 * ae)) / C4879;
    const double C610 = (C4931 * (C4894 + C4878 * C4913 + C4902 * ae)) / C4879;
    const double C898 = (C4878 * C4894 + C4886 * ae + C4913 * C4961) / C4879;
    const double C1624 = (C4878 * C4894 + C4886 * ae + C4913 * C5002) / C4879;
    const double C2822 = (C4931 * C4916 * C4913) / C4879;
    const double C1227 = (2 * (C4916 * C4951 + C4886 * ae) +
                          C4916 * (C4951 + C4916 * C5093 + C5090 * ae) +
                          (C4886 + C4896 * C4961) * ae) /
                         C4879;
    const double C1446 = (C4931 * (C4951 + C4916 * C5093 + C5090 * ae)) / C4879;
    const double C1975 = (C4916 * C4951 + C4886 * ae + C5093 * C5002) / C4879;
    const double C2259 = (2 * (C4931 * C4983 + C4886 * ae) +
                          C4931 * (C4983 + C4931 * C5160 + C5157 * ae) +
                          (C4886 + C4896 * C5002) * ae) /
                         C4879;
    const double C426 =
        C4916 *
            ((-(C4878 * C4957 * ce) / C4681) / C4879 - C4956 / C4881 +
             C4878 * ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4952) / C4681) /
                          C4879 -
                      (C4957 * ce) / C4881)) -
        (ae * (C4878 * C4912 + C4893 + C4902 * ce)) / C4881;
    const double C802 =
        C4931 *
            ((-(C4878 * C4989 * ce) / C4681) / C4879 - C4988 / C4881 +
             C4878 * ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4984) / C4681) /
                          C4879 -
                      (C4989 * ce) / C4881)) -
        (ae * (C4878 * C4912 + C4893 + C4902 * ce)) / C4881;
    const double C994 =
        (-(C4878 * C4956) / C4681) / C4879 - (C4951 * ce) / C4881 -
        (ae * C4916 * C4912) / C4881 +
        C4916 *
            (C4916 * ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4952) / C4681) /
                          C4879 -
                      (C4957 * ce) / C4881) -
             (ae * C4912) / C4881);
    const double C1806 =
        (-(C4878 * C4988) / C4681) / C4879 - (C4983 * ce) / C4881 -
        (ae * C4931 * C4912) / C4881 +
        C4931 *
            (C4931 * ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4984) / C4681) /
                          C4879 -
                      (C4989 * ce) / C4881) -
             (ae * C4912) / C4881);
    const double C2932 =
        C4916 * C4931 *
            ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4952) / C4681) / C4879 -
             (C4957 * ce) / C4881) -
        (ae * C4931 * C4912) / C4881;
    const double C3038 =
        C4931 * C4916 *
            ((-(C4878 * std::pow(C4883, 5) * bs[5] * C4984) / C4681) / C4879 -
             (C4989 * ce) / C4881) -
        (ae * C4916 * C4912) / C4881;
    const double C82 = (-2 * (C4878 * C4893 + C4886 * ce)) / C4681 -
                       (C4878 * (C4878 * C4912 + C4893 + C4902 * ce)) / C4681 -
                       ((C4886 + C4896 * C4887) * ce) / C4681;
    const double C325 = -(C4916 * (C4878 * C4912 + C4893 + C4902 * ce)) / C4681;
    const double C611 = -(C4931 * (C4878 * C4912 + C4893 + C4902 * ce)) / C4681;
    const double C899 = -(C4912 * C4961 + C4878 * C4893 + C4886 * ce) / C4681;
    const double C1625 = -(C4912 * C5002 + C4878 * C4893 + C4886 * ce) / C4681;
    const double C2823 = -(C4931 * C4916 * C4912) / C4681;
    const double C1562 =
        C4931 *
            ((-(C4916 * C4989 * ce) / C4681) / C4879 - C4998 / C4881 +
             C4916 * ((-(C4916 * std::pow(C4883, 5) * bs[5] * C4995) / C4681) /
                          C4879 -
                      (C4989 * ce) / C4881)) -
        (ae * (C4916 * C5092 + C4922 + C5090 * ce)) / C4881;
    const double C2085 =
        (-(C4916 * C4998) / C4681) / C4879 - (C4983 * ce) / C4881 -
        (ae * C4931 * C5092) / C4881 +
        C4931 *
            (C4931 * ((-(C4916 * std::pow(C4883, 5) * bs[5] * C4995) / C4681) /
                          C4879 -
                      (C4989 * ce) / C4881) -
             (ae * C5092) / C4881);
    const double C1187 =
        (-2 * (C4916 * C4922 + C4886 * ce)) / C4681 -
        (C4916 * (C4916 * C5092 + C4922 + C5090 * ce)) / C4681 -
        ((C4886 + C4896 * C4961) * ce) / C4681;
    const double C1386 =
        -(C4931 * (C4916 * C5092 + C4922 + C5090 * ce)) / C4681;
    const double C1919 = -(C5092 * C5002 + C4916 * C4922 + C4886 * ce) / C4681;
    const double C2181 =
        (-2 * (C4931 * C4937 + C4886 * ce)) / C4681 -
        (C4931 * (C4931 * C5159 + C4937 + C5157 * ce)) / C4681 -
        ((C4886 + C4896 * C5002) * ce) / C4681;
    const double C86 =
        2 * ((-(C4894 * ce) / C4681) / C4879 - (ae * C4893) / C4881 -
             (C4878 * C4911) / C4881) -
        (ae * (C4878 * C4912 + C4893 + C4902 * ce)) / C4881 -
        ((C4894 + C4878 * C4913 + C4902 * ae) * ce) / C4881 +
        C4878 *
            ((-(ae * C4912) / C4681) / C4879 - C4911 / C4881 -
             (C4913 * ce) / C4881 +
             C4878 * ((-(C4907 * ce) / C4681) / C4879 - (ae * C4906) / C4881 -
                      (C4878 *
                       (C4897 * C4898 + C4887 * bs[5] * std::pow(C4883, 5)) *
                       C4888) /
                          C4881));
    const double C327 = (-(C4916 * C4894 * ce) / C4681) / C4879 -
                        (ae * C4916 * C4893) / C4881 -
                        (C4878 * C4916 * C4911) / C4881;
    const double C328 =
        (-(ae * C4916 * C4912) / C4681) / C4879 - (C4916 * C4911) / C4881 -
        (C4916 * C4913 * ce) / C4881 +
        C4878 *
            ((-(C4916 * C4907 * ce) / C4681) / C4879 -
             (ae * C4916 * C4906) / C4881 -
             (C4878 * C4916 *
              (C4897 * C4898 + C4887 * bs[5] * std::pow(C4883, 5)) * C4888) /
                 C4881);
    const double C613 = (-(C4931 * C4894 * ce) / C4681) / C4879 -
                        (ae * C4931 * C4893) / C4881 -
                        (C4878 * C4931 * C4911) / C4881;
    const double C614 =
        (-(ae * C4931 * C4912) / C4681) / C4879 - (C4931 * C4911) / C4881 -
        (C4931 * C4913 * ce) / C4881 +
        C4878 *
            ((-(C4931 * C4907 * ce) / C4681) / C4879 -
             (ae * C4931 * C4906) / C4881 -
             (C4878 * C4931 *
              (C4897 * C4898 + C4887 * bs[5] * std::pow(C4883, 5)) * C4888) /
                 C4881);
    const double C900 = (-(C4911 * C4961) / C4681) / C4879 -
                        ((C4886 + C4887 * C4884 * C4890) * C4888) / C4881;
    const double C901 =
        (-((C4894 + C4907 * C4961) * ce) / C4681) / C4879 -
        (ae * (C4906 * C4961 + C4893)) / C4881 +
        C4878 * ((-((C4897 * C4898 + C4887 * bs[5] * std::pow(C4883, 5)) *
                    C4888 * C4961) /
                  C4681) /
                     C4879 -
                 C4911 / C4881);
    const double C1164 =
        (-2 * C4916 * C4911) / C4881 +
        C4916 * ((-((C4897 * C4898 + C4887 * bs[5] * std::pow(C4883, 5)) *
                    C4888 * C4961) /
                  C4681) /
                     C4879 -
                 C4911 / C4881);
    const double C1357 = (-(C4931 * C4916 * C4911) / C4681) / C4879;
    const double C1358 =
        C4931 * ((-((C4897 * C4898 + C4887 * bs[5] * std::pow(C4883, 5)) *
                    C4888 * C4961) /
                  C4681) /
                     C4879 -
                 C4911 / C4881);
    const double C1626 = (-(C4911 * C5002) / C4681) / C4879 -
                         ((C4886 + C4887 * C4884 * C4890) * C4888) / C4881;
    const double C1627 =
        (-((C4894 + C4907 * C5002) * ce) / C4681) / C4879 -
        (ae * (C4906 * C5002 + C4893)) / C4881 +
        C4878 * ((-((C4897 * C4898 + C4887 * bs[5] * std::pow(C4883, 5)) *
                    C4888 * C5002) /
                  C4681) /
                     C4879 -
                 C4911 / C4881);
    const double C1892 =
        (-(C4916 * (C4897 * C4898 + C4887 * bs[5] * std::pow(C4883, 5)) *
           C4888 * C5002) /
         C4681) /
            C4879 -
        (C4916 * C4911) / C4881;
    const double C2138 =
        (-2 * C4931 * C4911) / C4881 +
        C4931 * ((-((C4897 * C4898 + C4887 * bs[5] * std::pow(C4883, 5)) *
                    C4888 * C5002) /
                  C4681) /
                     C4879 -
                 C4911 / C4881);
    const double C189 =
        (-2 * C4878 * C4966) / C4881 +
        C4878 * ((-((C4897 * C4898 + C4961 * bs[5] * std::pow(C4883, 5)) *
                    C4888 * C4887) /
                  C4681) /
                     C4879 -
                 C4966 / C4881);
    const double C454 = (-(C4878 * C4951 * ce) / C4681) / C4879 -
                        (ae * C4878 * C4922) / C4881 -
                        (C4916 * C4878 * C4966) / C4881;
    const double C455 =
        (-((C4951 + C4957 * C4887) * ce) / C4681) / C4879 -
        (ae * (C4928 * C4887 + C4922)) / C4881 +
        C4916 * ((-((C4897 * C4898 + C4961 * bs[5] * std::pow(C4883, 5)) *
                    C4888 * C4887) /
                  C4681) /
                     C4879 -
                 C4966 / C4881);
    const double C739 = (-(C4931 * C4878 * C4966) / C4681) / C4879;
    const double C741 =
        C4931 * ((-((C4897 * C4898 + C4961 * bs[5] * std::pow(C4883, 5)) *
                    C4888 * C4887) /
                  C4681) /
                     C4879 -
                 C4966 / C4881);
    const double C1021 =
        (-(ae * (C4916 * C4922 + C4886 * ce)) / C4681) / C4879 -
        ((C4886 + C4961 * C4884 * C4890) * C4888) / C4881 -
        ((C4916 * C4951 + C4886 * ae) * ce) / C4881 +
        C4916 * ((-(C4951 * ce) / C4681) / C4879 - (ae * C4922) / C4881 -
                 (C4916 * C4966) / C4881);
    const double C1022 =
        (-(ae * (C4916 * C5072 + C4902 * ce)) / C4681) / C4879 -
        (C4878 * C4966) / C4881 - ((C4916 * C5073 + C4902 * ae) * ce) / C4881 +
        C4916 *
            ((-(C5073 * ce) / C4681) / C4879 - (ae * C5072) / C4881 -
             (C4916 * C4878 *
              (C4897 * C4898 + C4961 * bs[5] * std::pow(C4883, 5)) * C4888) /
                 C4881);
    const double C1247 =
        2 * ((-(C4951 * ce) / C4681) / C4879 - (ae * C4922) / C4881 -
             (C4916 * C4966) / C4881) -
        (ae * (C4916 * C5092 + C4922 + C5090 * ce)) / C4881 -
        ((C4951 + C4916 * C5093 + C5090 * ae) * ce) / C4881 +
        C4916 *
            ((-(ae * C5092) / C4681) / C4879 - C4966 / C4881 -
             (C5093 * ce) / C4881 +
             C4916 * ((-(C4957 * ce) / C4681) / C4879 - (ae * C4928) / C4881 -
                      (C4916 *
                       (C4897 * C4898 + C4961 * bs[5] * std::pow(C4883, 5)) *
                       C4888) /
                          C4881));
    const double C1475 = (-(C4931 * C4951 * ce) / C4681) / C4879 -
                         (ae * C4931 * C4922) / C4881 -
                         (C4916 * C4931 * C4966) / C4881;
    const double C1476 =
        (-(ae * C4931 * C5092) / C4681) / C4879 - (C4931 * C4966) / C4881 -
        (C4931 * C5093 * ce) / C4881 +
        C4916 *
            ((-(C4931 * C4957 * ce) / C4681) / C4879 -
             (ae * C4931 * C4928) / C4881 -
             (C4916 * C4931 *
              (C4897 * C4898 + C4961 * bs[5] * std::pow(C4883, 5)) * C4888) /
                 C4881);
    const double C1747 = (-(C4966 * C5002) / C4681) / C4879 -
                         ((C4886 + C4961 * C4884 * C4890) * C4888) / C4881;
    const double C1748 =
        (-(C4878 * (C4897 * C4898 + C4961 * bs[5] * std::pow(C4883, 5)) *
           C4888 * C5002) /
         C4681) /
            C4879 -
        (C4878 * C4966) / C4881;
    const double C2003 =
        (-((C4951 + C4957 * C5002) * ce) / C4681) / C4879 -
        (ae * (C4928 * C5002 + C4922)) / C4881 +
        C4916 * ((-((C4897 * C4898 + C4961 * bs[5] * std::pow(C4883, 5)) *
                    C4888 * C5002) /
                  C4681) /
                     C4879 -
                 C4966 / C4881);
    const double C2221 =
        (-2 * C4931 * C4966) / C4881 +
        C4931 * ((-((C4897 * C4898 + C4961 * bs[5] * std::pow(C4883, 5)) *
                    C4888 * C5002) /
                  C4681) /
                     C4879 -
                 C4966 / C4881);
    const double C282 =
        (-2 * C4878 * C5007) / C4881 +
        C4878 * ((-((C4897 * C4898 + C5002 * bs[5] * std::pow(C4883, 5)) *
                    C4888 * C4887) /
                  C4681) /
                     C4879 -
                 C5007 / C4881);
    const double C573 = (-(C4916 * C4878 * C5007) / C4681) / C4879;
    const double C574 =
        C4916 * ((-((C4897 * C4898 + C5002 * bs[5] * std::pow(C4883, 5)) *
                    C4888 * C4887) /
                  C4681) /
                     C4879 -
                 C5007 / C4881);
    const double C859 = (-(C4878 * C4983 * ce) / C4681) / C4879 -
                        (ae * C4878 * C4937) / C4881 -
                        (C4931 * C4878 * C5007) / C4881;
    const double C860 =
        (-((C4983 + C4989 * C4887) * ce) / C4681) / C4879 -
        (ae * (C4943 * C4887 + C4937)) / C4881 +
        C4931 * ((-((C4897 * C4898 + C5002 * bs[5] * std::pow(C4883, 5)) *
                    C4888 * C4887) /
                  C4681) /
                     C4879 -
                 C5007 / C4881);
    const double C1135 = (-(C5007 * C4961) / C4681) / C4879 -
                         ((C4886 + C5002 * C4884 * C4890) * C4888) / C4881;
    const double C1136 =
        (-(C4878 * (C4897 * C4898 + C5002 * bs[5] * std::pow(C4883, 5)) *
           C4888 * C4961) /
         C4681) /
            C4879 -
        (C4878 * C5007) / C4881;
    const double C1324 =
        (-2 * C4916 * C5007) / C4881 +
        C4916 * ((-((C4897 * C4898 + C5002 * bs[5] * std::pow(C4883, 5)) *
                    C4888 * C4961) /
                  C4681) /
                     C4879 -
                 C5007 / C4881);
    const double C1589 = (-(C4916 * C4983 * ce) / C4681) / C4879 -
                         (ae * C4916 * C4937) / C4881 -
                         (C4931 * C4916 * C5007) / C4881;
    const double C1590 =
        (-((C4983 + C4989 * C4961) * ce) / C4681) / C4879 -
        (ae * (C4943 * C4961 + C4937)) / C4881 +
        C4931 * ((-((C4897 * C4898 + C5002 * bs[5] * std::pow(C4883, 5)) *
                    C4888 * C4961) /
                  C4681) /
                     C4879 -
                 C5007 / C4881);
    const double C1861 =
        (-(ae * (C4931 * C4937 + C4886 * ce)) / C4681) / C4879 -
        ((C4886 + C5002 * C4884 * C4890) * C4888) / C4881 -
        ((C4931 * C4983 + C4886 * ae) * ce) / C4881 +
        C4931 * ((-(C4983 * ce) / C4681) / C4879 - (ae * C4937) / C4881 -
                 (C4931 * C5007) / C4881);
    const double C1862 =
        (-(ae * (C4931 * C5076 + C4902 * ce)) / C4681) / C4879 -
        (C4878 * C5007) / C4881 - ((C4931 * C5081 + C4902 * ae) * ce) / C4881 +
        C4931 *
            ((-(C5081 * ce) / C4681) / C4879 - (ae * C5076) / C4881 -
             (C4931 * C4878 *
              (C4897 * C4898 + C5002 * bs[5] * std::pow(C4883, 5)) * C4888) /
                 C4881);
    const double C2112 =
        (-(ae * (C4931 * C5145 + C5090 * ce)) / C4681) / C4879 -
        (C4916 * C5007) / C4881 - ((C4931 * C5146 + C5090 * ae) * ce) / C4881 +
        C4931 *
            ((-(C5146 * ce) / C4681) / C4879 - (ae * C5145) / C4881 -
             (C4931 * C4916 *
              (C4897 * C4898 + C5002 * bs[5] * std::pow(C4883, 5)) * C4888) /
                 C4881);
    const double C2298 =
        2 * ((-(C4983 * ce) / C4681) / C4879 - (ae * C4937) / C4881 -
             (C4931 * C5007) / C4881) -
        (ae * (C4931 * C5159 + C4937 + C5157 * ce)) / C4881 -
        ((C4983 + C4931 * C5160 + C5157 * ae) * ce) / C4881 +
        C4931 *
            ((-(ae * C5159) / C4681) / C4879 - C5007 / C4881 -
             (C5160 * ce) / C4881 +
             C4931 * ((-(C4989 * ce) / C4681) / C4879 - (ae * C4943) / C4881 -
                      (C4931 *
                       (C4897 * C4898 + C5002 * bs[5] * std::pow(C4883, 5)) *
                       C4888) /
                          C4881));
    const double C70 =
        (C4700 / C4686 - (0 * de) / C4681) / C4686 - (0 * de) / C4681;
    const double C2332 = C4700 / C4686 - (0 * de) / C4681;
    const double C4702 = C4699 / C4681;
    const double C5528 = C5501 - C5520;
    const double C5521 = C5503 - C5504;
    const double C4777 = C4771 / C4681;
    const double C1186 =
        (C4781 / C4686 - (0 * de) / C4681) / C4686 - (0 * de) / C4681;
    const double C2604 = C4781 / C4686 - (0 * de) / C4681;
    const double C5529 = C5509 - C5523;
    const double C5524 = C5512 - C5513;
    const double C928 =
        ((-(0 * de) / C4681) / C4686 -
         ((0 - (C4734 * C4753) / C4681) * de) / C4681) /
            C4686 -
        ((C4734 * ((-C4753 / C4681) / C4686 -
                   ((C5363 - (C4734 * C4756) / C4681) * de) / C4681) +
          C2328) *
         de) /
            C4681 +
        (-C4756 / C4681) / C4686 - (0 * de) / C4681;
    const double C4822 = C4816 / C4681;
    const double C2180 =
        (C4826 / C4686 - (0 * de) / C4681) / C4686 - (0 * de) / C4681;
    const double C3736 = C4826 / C4686 - (0 * de) / C4681;
    const double C5530 = C5514 - C5526;
    const double C5527 = C5517 - C5518;
    const double C1684 =
        ((-(0 * de) / C4681) / C4686 -
         ((0 - (C4741 * C4800) / C4681) * de) / C4681) /
            C4686 -
        ((C4741 * ((-C4800 / C4681) / C4686 -
                   ((C5389 - (C4741 * C4803) / C4681) * de) / C4681) +
          C3135) *
         de) /
            C4681 +
        (-C4803 / C4681) / C4686 - (0 * de) / C4681;
    const double C4704 = C5320 - C4702;
    const double C58 = (C5499 - C5519) / C4686 - (C5528 * C5316) / C4681;
    const double C59 = (2 * C5325 + C5528) / C4686 - (C5521 * C5316) / C4681;
    const double C60 = C5521 / C4686 - C5328 / C4690;
    const double C4780 = C5363 - C4777;
    const double C1156 = (C5507 - C5522) / C4686 - (C5529 * C5373) / C4681;
    const double C1157 = (2 * C5377 + C5529) / C4686 - (C5524 * C5373) / C4681;
    const double C1158 = C5524 / C4686 - C5380 / C4690;
    const double C4825 = C5389 - C4822;
    const double C2131 = (C5508 - C5525) / C4686 - (C5530 * C5397) / C4681;
    const double C2132 = (2 * C5401 + C5530) / C4686 - (C5527 * C5397) / C4681;
    const double C2133 = C5527 / C4686 - C5404 / C4690;
    const double C4705 = C4704 * ce;
    const double C314 =
        ((-C4680 / C4681) / C4686 - (C4693 * de) / C4681) / C4686 -
        ((C4679 * ((-C4682 / C4681) / C4686 - (C4704 * de) / C4681) + C2569) *
         de) /
            C4681 +
        (-C4695 / C4681) / C4686 - (0 * de) / C4681;
    const double C315 =
        ((-C4682 / C4681) / C4686 - (C4704 * de) / C4681) / C4686 -
        ((C4679 * ((-C4695 / C4681) / C4686 - (0 * de) / C4681) + C5325) * de) /
            C4681;
    const double C2574 = (-C4682 / C4681) / C4686 - (C4704 * de) / C4681;
    const double C4783 = C4780 * ce;
    const double C2359 = (-C4753 / C4681) / C4686 - (C4780 * de) / C4681;
    const double C4828 = C4825 * ce;
    const double C3189 = (-C4800 / C4681) / C4686 - (C4825 * de) / C4681;
    const double C4706 = C4705 / C4681;
    const double C4785 = C4783 / C4681;
    const double C4830 = C4828 / C4681;
    const double C4707 = C4706 - C4696;
    const double C4787 = C4785 - C4772;
    const double C4832 = C4830 - C4817;
    const double C67 =
        ((((0 - (C4679 * C4680) / C4681) * ce) / C4681 - (0 * de) / C4690 +
          C4682 / C4681) /
             C4686 -
         ((C4679 * C4703 + 0) * de) / C4681) /
            C4686 -
        ((C4679 *
              (C4703 / C4686 - ((C4679 * C4707 + C5499) * de) / C4681 + C4700) +
          C5528) *
         de) /
            C4681 +
        C4707 / C4686 - ((C4679 * C4700 + C5325) * de) / C4681;
    const double C68 =
        (C4703 / C4686 - ((C4679 * C4707 + C5499) * de) / C4681 + C4700) /
            C4686 -
        ((C4679 * (C4707 / C4686 - ((C4679 * C4700 + C5325) * de) / C4681) +
          C5521) *
         de) /
            C4681 +
        2 * (C4700 / C4686 - (0 * de) / C4681);
    const double C69 =
        (C4707 / C4686 - ((C4679 * C4700 + C5325) * de) / C4681) / C4686 -
        ((C4679 * (C4700 / C4686 - (0 * de) / C4681) + C2327) * de) / C4681;
    const double C2330 =
        C4703 / C4686 - ((C4679 * C4707 + C5499) * de) / C4681 + C4700;
    const double C2331 = C4707 / C4686 - ((C4679 * C4700 + C5325) * de) / C4681;
    const double C1183 =
        ((((0 - (C4734 * C4769) / C4681) * ce) / C4681 - (0 * de) / C4690 +
          C4753 / C4681) /
             C4686 -
         ((C4734 * C4786 + 0) * de) / C4681) /
            C4686 -
        ((C4734 *
              (C4786 / C4686 - ((C4734 * C4787 + C5507) * de) / C4681 + C4781) +
          C5529) *
         de) /
            C4681 +
        C4787 / C4686 - ((C4734 * C4781 + C5377) * de) / C4681;
    const double C1184 =
        (C4786 / C4686 - ((C4734 * C4787 + C5507) * de) / C4681 + C4781) /
            C4686 -
        ((C4734 * (C4787 / C4686 - ((C4734 * C4781 + C5377) * de) / C4681) +
          C5524) *
         de) /
            C4681 +
        2 * (C4781 / C4686 - (0 * de) / C4681);
    const double C1185 =
        (C4787 / C4686 - ((C4734 * C4781 + C5377) * de) / C4681) / C4686 -
        ((C4734 * (C4781 / C4686 - (0 * de) / C4681) + C2573) * de) / C4681;
    const double C2602 =
        C4786 / C4686 - ((C4734 * C4787 + C5507) * de) / C4681 + C4781;
    const double C2603 = C4787 / C4686 - ((C4734 * C4781 + C5377) * de) / C4681;
    const double C2177 =
        ((((0 - (C4741 * C4814) / C4681) * ce) / C4681 - (0 * de) / C4690 +
          C4800 / C4681) /
             C4686 -
         ((C4741 * C4831 + 0) * de) / C4681) /
            C4686 -
        ((C4741 *
              (C4831 / C4686 - ((C4741 * C4832 + C5508) * de) / C4681 + C4826) +
          C5530) *
         de) /
            C4681 +
        C4832 / C4686 - ((C4741 * C4826 + C5401) * de) / C4681;
    const double C2178 =
        (C4831 / C4686 - ((C4741 * C4832 + C5508) * de) / C4681 + C4826) /
            C4686 -
        ((C4741 * (C4832 / C4686 - ((C4741 * C4826 + C5401) * de) / C4681) +
          C5527) *
         de) /
            C4681 +
        2 * (C4826 / C4686 - (0 * de) / C4681);
    const double C2179 =
        (C4832 / C4686 - ((C4741 * C4826 + C5401) * de) / C4681) / C4686 -
        ((C4741 * (C4826 / C4686 - (0 * de) / C4681) + C3681) * de) / C4681;
    const double C3734 =
        C4831 / C4686 - ((C4741 * C4832 + C5508) * de) / C4681 + C4826;
    const double C3735 = C4832 / C4686 - ((C4741 * C4826 + C5401) * de) / C4681;
    d2eexx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C2330 + (C66 * C76 + C57 * C83) * C5528 -
           (C66 * C72 + C57 * C77) * C2331 - (C66 * C78 + C57 * C84) * C5521 +
           (C66 * C73 + C57 * C79) * C2332 + (C66 * C80 + C57 * C85) * C2327) *
              C62 * C63 * C5389 * C2328 +
          ((C66 * C317 + C57 * C320) * C2331 -
           ((C66 * C321 + C57 * C326) * C5528 +
            (C66 * C318 + C57 * C322) * C2330) +
           (C66 * C323 + C57 * C327) * C5521 -
           (C66 * C319 + C57 * C324) * C2332 -
           (C66 * C325 + C57 * C328) * C2327) *
              C62 * C63 * C5389 * C5377)) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C2359 + (C66 * C106 + C57 * C110) * C2328 -
           (C66 * C318 + C57 * C322) * C2360 -
           (C66 * C357 + C57 * C360) * C5377) *
              C62 * C63 * C5528 +
          ((C66 * C317 + C57 * C320) * C2360 -
           ((C66 * C107 + C57 * C111) * C2328 +
            (C66 * C72 + C57 * C77) * C2359) +
           (C66 * C358 + C57 * C361) * C5377) *
              C62 * C63 * C5521 +
          ((C66 * C73 + C57 * C79) * C2359 + (C66 * C108 + C57 * C112) * C2328 -
           (C66 * C319 + C57 * C324) * C2360 -
           (C66 * C359 + C57 * C362) * C5377) *
              C62 * C63 * C2327) *
         C5389) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C66 * C71 + C57 * C75) * C132 +
                     (C66 * C133 + C57 * C137) * C5389) *
                        C62 * C63 * C2328 -
                    ((C66 * C389 + C57 * C392) * C5389 +
                     (C66 * C318 + C57 * C322) * C132) *
                        C62 * C63 * C5377) *
                       C5528 +
                   (((C66 * C317 + C57 * C320) * C132 +
                     (C66 * C390 + C57 * C393) * C5389) *
                        C62 * C63 * C5377 -
                    ((C66 * C134 + C57 * C138) * C5389 +
                     (C66 * C72 + C57 * C77) * C132) *
                        C62 * C63 * C2328) *
                       C5521 +
                   (((C66 * C73 + C57 * C79) * C132 +
                     (C66 * C135 + C57 * C139) * C5389) *
                        C62 * C63 * C2328 -
                    ((C66 * C391 + C57 * C394) * C5389 +
                     (C66 * C319 + C57 * C324) * C132) *
                        C62 * C63 * C5377) *
                       C2327)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C2330 +
                    (C159 * C76 + C62 * C164) * C5528 -
                    (C159 * C72 + C62 * C161) * C2331 -
                    (C159 * C78 + C62 * C165) * C5521 +
                    (C159 * C73 + C62 * C162) * C2332 +
                    (C159 * C80 + C62 * C166) * C2327) *
                       C63 * C57 * C5389 * C2328 +
                   ((C159 * C317 + C62 * C421) * C2331 -
                    ((C159 * C321 + C62 * C424) * C5528 +
                     (C159 * C318 + C62 * C422) * C2330) +
                    (C159 * C323 + C62 * C425) * C5521 -
                    (C159 * C319 + C62 * C423) * C2332 -
                    (C159 * C325 + C62 * C426) * C2327) *
                       C63 * C57 * C5389 * C5377)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C2359 +
                    (C159 * C106 + C62 * C186) * C2328 -
                    (C159 * C318 + C62 * C422) * C2360 -
                    (C159 * C357 + C62 * C453) * C5377) *
                       C63 * C57 * C5528 +
                   ((C159 * C317 + C62 * C421) * C2360 -
                    ((C159 * C107 + C62 * C187) * C2328 +
                     (C159 * C72 + C62 * C161) * C2359) +
                    (C159 * C358 + C62 * C454) * C5377) *
                       C63 * C57 * C5521 +
                   ((C159 * C73 + C62 * C162) * C2359 +
                    (C159 * C108 + C62 * C188) * C2328 -
                    (C159 * C319 + C62 * C423) * C2360 -
                    (C159 * C359 + C62 * C455) * C5377) *
                       C63 * C57 * C2327) *
                  C5389) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C159 * C71 + C62 * C160) * C132 +
                     (C159 * C133 + C62 * C208) * C5389) *
                        C63 * C57 * C2328 -
                    ((C159 * C389 + C62 * C482) * C5389 +
                     (C159 * C318 + C62 * C422) * C132) *
                        C63 * C57 * C5377) *
                       C5528 +
                   (((C159 * C317 + C62 * C421) * C132 +
                     (C159 * C390 + C62 * C483) * C5389) *
                        C63 * C57 * C5377 -
                    ((C159 * C134 + C62 * C209) * C5389 +
                     (C159 * C72 + C62 * C161) * C132) *
                        C63 * C57 * C2328) *
                       C5521 +
                   (((C159 * C73 + C62 * C162) * C132 +
                     (C159 * C135 + C62 * C210) * C5389) *
                        C63 * C57 * C2328 -
                    ((C159 * C391 + C62 * C484) * C5389 +
                     (C159 * C319 + C62 * C423) * C132) *
                        C63 * C57 * C5377) *
                       C2327)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C2330 +
                    (C230 * C76 + C63 * C235) * C5528 -
                    (C230 * C72 + C63 * C232) * C2331 -
                    (C230 * C78 + C63 * C236) * C5521 +
                    (C230 * C73 + C63 * C233) * C2332 +
                    (C230 * C80 + C63 * C237) * C2327) *
                       C57 * C62 * C5389 * C2328 +
                   ((C230 * C317 + C63 * C511) * C2331 -
                    ((C230 * C321 + C63 * C514) * C5528 +
                     (C230 * C318 + C63 * C512) * C2330) +
                    (C230 * C323 + C63 * C515) * C5521 -
                    (C230 * C319 + C63 * C513) * C2332 -
                    (C230 * C325 + C63 * C516) * C2327) *
                       C57 * C62 * C5389 * C5377)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C2359 +
                    (C230 * C106 + C63 * C257) * C2328 -
                    (C230 * C318 + C63 * C512) * C2360 -
                    (C230 * C357 + C63 * C543) * C5377) *
                       C57 * C62 * C5528 +
                   ((C230 * C317 + C63 * C511) * C2360 -
                    ((C230 * C107 + C63 * C258) * C2328 +
                     (C230 * C72 + C63 * C232) * C2359) +
                    (C230 * C358 + C63 * C544) * C5377) *
                       C57 * C62 * C5521 +
                   ((C230 * C73 + C63 * C233) * C2359 +
                    (C230 * C108 + C63 * C259) * C2328 -
                    (C230 * C319 + C63 * C513) * C2360 -
                    (C230 * C359 + C63 * C545) * C5377) *
                       C57 * C62 * C2327) *
                  C5389) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C63 * C231) * C132 +
                     (C230 * C133 + C63 * C279) * C5389) *
                        C57 * C62 * C2328 -
                    ((C230 * C389 + C63 * C572) * C5389 +
                     (C230 * C318 + C63 * C512) * C132) *
                        C57 * C62 * C5377) *
                       C5528 +
                   (((C230 * C317 + C63 * C511) * C132 +
                     (C230 * C390 + C63 * C573) * C5389) *
                        C57 * C62 * C5377 -
                    ((C230 * C134 + C63 * C280) * C5389 +
                     (C230 * C72 + C63 * C232) * C132) *
                        C57 * C62 * C2328) *
                       C5521 +
                   (((C230 * C73 + C63 * C233) * C132 +
                     (C230 * C135 + C63 * C281) * C5389) *
                        C57 * C62 * C2328 -
                    ((C230 * C391 + C63 * C574) * C5389 +
                     (C230 * C319 + C63 * C513) * C132) *
                        C57 * C62 * C5377) *
                       C2327)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C2574 + (C66 * C76 + C57 * C83) * C2569 -
           (C66 * C72 + C57 * C77) * C2575 - (C66 * C78 + C57 * C84) * C5325) *
              C62 * C63 * C5389 * C5529 +
          ((C66 * C317 + C57 * C320) * C2575 -
           ((C66 * C321 + C57 * C326) * C2569 +
            (C66 * C318 + C57 * C322) * C2574) +
           (C66 * C323 + C57 * C327) * C5325) *
              C62 * C63 * C5389 * C5524 +
          ((C66 * C894 + C57 * C896) * C2574 +
           (C66 * C897 + C57 * C900) * C2569 -
           (C66 * C895 + C57 * C898) * C2575 -
           (C66 * C899 + C57 * C901) * C5325) *
              C62 * C63 * C5389 * C2573)) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C2602 + (C66 * C106 + C57 * C110) * C5529 -
           (C66 * C318 + C57 * C322) * C2603 -
           (C66 * C357 + C57 * C360) * C5524 +
           (C66 * C894 + C57 * C896) * C2604 +
           (C66 * C931 + C57 * C933) * C2573) *
              C62 * C63 * C2569 +
          ((C66 * C317 + C57 * C320) * C2603 -
           ((C66 * C107 + C57 * C111) * C5529 +
            (C66 * C72 + C57 * C77) * C2602) +
           (C66 * C358 + C57 * C361) * C5524 -
           (C66 * C895 + C57 * C898) * C2604 -
           (C66 * C932 + C57 * C934) * C2573) *
              C62 * C63 * C5325) *
         C5389) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C66 * C71 + C57 * C75) * C132 +
                     (C66 * C133 + C57 * C137) * C5389) *
                        C62 * C63 * C5529 -
                    ((C66 * C389 + C57 * C392) * C5389 +
                     (C66 * C318 + C57 * C322) * C132) *
                        C62 * C63 * C5524 +
                    ((C66 * C894 + C57 * C896) * C132 +
                     (C66 * C961 + C57 * C963) * C5389) *
                        C62 * C63 * C2573) *
                       C2569 +
                   (((C66 * C317 + C57 * C320) * C132 +
                     (C66 * C390 + C57 * C393) * C5389) *
                        C62 * C63 * C5524 -
                    ((C66 * C134 + C57 * C138) * C5389 +
                     (C66 * C72 + C57 * C77) * C132) *
                        C62 * C63 * C5529 -
                    ((C66 * C962 + C57 * C964) * C5389 +
                     (C66 * C895 + C57 * C898) * C132) *
                        C62 * C63 * C2573) *
                       C5325)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C2574 +
                    (C159 * C76 + C62 * C164) * C2569 -
                    (C159 * C72 + C62 * C161) * C2575 -
                    (C159 * C78 + C62 * C165) * C5325) *
                       C63 * C57 * C5389 * C5529 +
                   ((C159 * C317 + C62 * C421) * C2575 -
                    ((C159 * C321 + C62 * C424) * C2569 +
                     (C159 * C318 + C62 * C422) * C2574) +
                    (C159 * C323 + C62 * C425) * C5325) *
                       C63 * C57 * C5389 * C5524 +
                   ((C159 * C894 + C62 * C991) * C2574 +
                    (C159 * C897 + C62 * C993) * C2569 -
                    (C159 * C895 + C62 * C992) * C2575 -
                    (C159 * C899 + C62 * C994) * C5325) *
                       C63 * C57 * C5389 * C2573)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C2602 +
                    (C159 * C106 + C62 * C186) * C5529 -
                    (C159 * C318 + C62 * C422) * C2603 -
                    (C159 * C357 + C62 * C453) * C5524 +
                    (C159 * C894 + C62 * C991) * C2604 +
                    (C159 * C931 + C62 * C1021) * C2573) *
                       C63 * C57 * C2569 +
                   ((C159 * C317 + C62 * C421) * C2603 -
                    ((C159 * C107 + C62 * C187) * C5529 +
                     (C159 * C72 + C62 * C161) * C2602) +
                    (C159 * C358 + C62 * C454) * C5524 -
                    (C159 * C895 + C62 * C992) * C2604 -
                    (C159 * C932 + C62 * C1022) * C2573) *
                       C63 * C57 * C5325) *
                  C5389) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C159 * C71 + C62 * C160) * C132 +
                     (C159 * C133 + C62 * C208) * C5389) *
                        C63 * C57 * C5529 -
                    ((C159 * C389 + C62 * C482) * C5389 +
                     (C159 * C318 + C62 * C422) * C132) *
                        C63 * C57 * C5524 +
                    ((C159 * C894 + C62 * C991) * C132 +
                     (C159 * C961 + C62 * C1049) * C5389) *
                        C63 * C57 * C2573) *
                       C2569 +
                   (((C159 * C317 + C62 * C421) * C132 +
                     (C159 * C390 + C62 * C483) * C5389) *
                        C63 * C57 * C5524 -
                    ((C159 * C134 + C62 * C209) * C5389 +
                     (C159 * C72 + C62 * C161) * C132) *
                        C63 * C57 * C5529 -
                    ((C159 * C962 + C62 * C1050) * C5389 +
                     (C159 * C895 + C62 * C992) * C132) *
                        C63 * C57 * C2573) *
                       C5325)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C2574 +
                    (C230 * C76 + C63 * C235) * C2569 -
                    (C230 * C72 + C63 * C232) * C2575 -
                    (C230 * C78 + C63 * C236) * C5325) *
                       C57 * C62 * C5389 * C5529 +
                   ((C230 * C317 + C63 * C511) * C2575 -
                    ((C230 * C321 + C63 * C514) * C2569 +
                     (C230 * C318 + C63 * C512) * C2574) +
                    (C230 * C323 + C63 * C515) * C5325) *
                       C57 * C62 * C5389 * C5524 +
                   ((C230 * C894 + C63 * C1077) * C2574 +
                    (C230 * C897 + C63 * C1079) * C2569 -
                    (C230 * C895 + C63 * C1078) * C2575 -
                    (C230 * C899 + C63 * C1080) * C5325) *
                       C57 * C62 * C5389 * C2573)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C2602 +
                    (C230 * C106 + C63 * C257) * C5529 -
                    (C230 * C318 + C63 * C512) * C2603 -
                    (C230 * C357 + C63 * C543) * C5524 +
                    (C230 * C894 + C63 * C1077) * C2604 +
                    (C230 * C931 + C63 * C1107) * C2573) *
                       C57 * C62 * C2569 +
                   ((C230 * C317 + C63 * C511) * C2603 -
                    ((C230 * C107 + C63 * C258) * C5529 +
                     (C230 * C72 + C63 * C232) * C2602) +
                    (C230 * C358 + C63 * C544) * C5524 -
                    (C230 * C895 + C63 * C1078) * C2604 -
                    (C230 * C932 + C63 * C1108) * C2573) *
                       C57 * C62 * C5325) *
                  C5389) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C63 * C231) * C132 +
                     (C230 * C133 + C63 * C279) * C5389) *
                        C57 * C62 * C5529 -
                    ((C230 * C389 + C63 * C572) * C5389 +
                     (C230 * C318 + C63 * C512) * C132) *
                        C57 * C62 * C5524 +
                    ((C230 * C894 + C63 * C1077) * C132 +
                     (C230 * C961 + C63 * C1135) * C5389) *
                        C57 * C62 * C2573) *
                       C2569 +
                   (((C230 * C317 + C63 * C511) * C132 +
                     (C230 * C390 + C63 * C573) * C5389) *
                        C57 * C62 * C5524 -
                    ((C230 * C134 + C63 * C280) * C5389 +
                     (C230 * C72 + C63 * C232) * C132) *
                        C57 * C62 * C5529 -
                    ((C230 * C962 + C63 * C1136) * C5389 +
                     (C230 * C895 + C63 * C1078) * C132) *
                        C57 * C62 * C2573) *
                       C5325)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C66 * C71 + C57 * C75) * C2574 + (C66 * C76 + C57 * C83) * C2569 -
            (C66 * C72 + C57 * C77) * C2575 - (C66 * C78 + C57 * C84) * C5325) *
               C62 * C63 * C5508 +
           ((C66 * C603 + C57 * C606) * C2575 -
            ((C66 * C607 + C57 * C612) * C2569 +
             (C66 * C604 + C57 * C608) * C2574) +
            (C66 * C609 + C57 * C613) * C5325) *
               C62 * C63 * C5401) *
              C2328 +
          (((C66 * C317 + C57 * C320) * C2575 -
            ((C66 * C321 + C57 * C326) * C2569 +
             (C66 * C318 + C57 * C322) * C2574) +
            (C66 * C323 + C57 * C327) * C5325) *
               C62 * C63 * C5508 +
           ((C66 * C1351 + C57 * C1353) * C2574 +
            (C66 * C1354 + C57 * C1357) * C2569 -
            (C66 * C2821 + C57 * C2822) * C2575 -
            (C66 * C2823 + C57 * C2824) * C5325) *
               C62 * C63 * C5401) *
              C5377)) /
        (p * q * std::sqrt(p + q));
    d2eexy[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C66 * C71 + C57 * C75) * C2359 +
                     (C66 * C106 + C57 * C110) * C2328 -
                     (C66 * C318 + C57 * C322) * C2360 -
                     (C66 * C357 + C57 * C360) * C5377) *
                        C62 * C63 * C2569 +
                    ((C66 * C317 + C57 * C320) * C2360 -
                     ((C66 * C107 + C57 * C111) * C2328 +
                      (C66 * C72 + C57 * C77) * C2359) +
                     (C66 * C358 + C57 * C361) * C5377) *
                        C62 * C63 * C5325) *
                       C5508 +
                   (((C66 * C1351 + C57 * C1353) * C2360 -
                     ((C66 * C642 + C57 * C645) * C2328 +
                      (C66 * C604 + C57 * C608) * C2359) +
                     (C66 * C1385 + C57 * C1387) * C5377) *
                        C62 * C63 * C2569 +
                    ((C66 * C603 + C57 * C606) * C2359 +
                     (C66 * C641 + C57 * C644) * C2328 -
                     (C66 * C2821 + C57 * C2822) * C2360 -
                     (C66 * C2859 + C57 * C2860) * C5377) *
                        C62 * C63 * C5325) *
                       C5401)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C66 * C71 + C57 * C75) * C673 + (C66 * C133 + C57 * C137) * C5508 -
            (C66 * C604 + C57 * C608) * C674 -
            (C66 * C675 + C57 * C678) * C5401) *
               C62 * C63 * C2328 +
           ((C66 * C1351 + C57 * C1353) * C674 -
            ((C66 * C389 + C57 * C392) * C5508 +
             (C66 * C318 + C57 * C322) * C673) +
            (C66 * C1415 + C57 * C1417) * C5401) *
               C62 * C63 * C5377) *
              C2569 +
          (((C66 * C603 + C57 * C606) * C674 -
            ((C66 * C134 + C57 * C138) * C5508 +
             (C66 * C72 + C57 * C77) * C673) +
            (C66 * C676 + C57 * C679) * C5401) *
               C62 * C63 * C2328 +
           ((C66 * C317 + C57 * C320) * C673 +
            (C66 * C390 + C57 * C393) * C5508 -
            (C66 * C2821 + C57 * C2822) * C674 -
            (C66 * C2895 + C57 * C2896) * C5401) *
               C62 * C63 * C5377) *
              C5325)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C159 * C71 + C62 * C160) * C2574 +
                     (C159 * C76 + C62 * C164) * C2569 -
                     (C159 * C72 + C62 * C161) * C2575 -
                     (C159 * C78 + C62 * C165) * C5325) *
                        C63 * C57 * C5508 +
                    ((C159 * C603 + C62 * C707) * C2575 -
                     ((C159 * C607 + C62 * C710) * C2569 +
                      (C159 * C604 + C62 * C708) * C2574) +
                     (C159 * C609 + C62 * C711) * C5325) *
                        C63 * C57 * C5401) *
                       C2328 +
                   (((C159 * C317 + C62 * C421) * C2575 -
                     ((C159 * C321 + C62 * C424) * C2569 +
                      (C159 * C318 + C62 * C422) * C2574) +
                     (C159 * C323 + C62 * C425) * C5325) *
                        C63 * C57 * C5508 +
                    ((C159 * C1351 + C62 * C1445) * C2574 +
                     (C159 * C1354 + C62 * C1447) * C2569 -
                     (C159 * C2821 + C62 * C2931) * C2575 -
                     (C159 * C2823 + C62 * C2932) * C5325) *
                        C63 * C57 * C5401) *
                       C5377)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C159 * C71 + C62 * C160) * C2359 +
                     (C159 * C106 + C62 * C186) * C2328 -
                     (C159 * C318 + C62 * C422) * C2360 -
                     (C159 * C357 + C62 * C453) * C5377) *
                        C63 * C57 * C2569 +
                    ((C159 * C317 + C62 * C421) * C2360 -
                     ((C159 * C107 + C62 * C187) * C2328 +
                      (C159 * C72 + C62 * C161) * C2359) +
                     (C159 * C358 + C62 * C454) * C5377) *
                        C63 * C57 * C5325) *
                       C5508 +
                   (((C159 * C1351 + C62 * C1445) * C2360 -
                     ((C159 * C642 + C62 * C740) * C2328 +
                      (C159 * C604 + C62 * C708) * C2359) +
                     (C159 * C1385 + C62 * C1475) * C5377) *
                        C63 * C57 * C2569 +
                    ((C159 * C603 + C62 * C707) * C2359 +
                     (C159 * C641 + C62 * C739) * C2328 -
                     (C159 * C2821 + C62 * C2931) * C2360 -
                     (C159 * C2859 + C62 * C2967) * C5377) *
                        C63 * C57 * C5325) *
                       C5401)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C159 * C71 + C62 * C160) * C673 +
                     (C159 * C133 + C62 * C208) * C5508 -
                     (C159 * C604 + C62 * C708) * C674 -
                     (C159 * C675 + C62 * C768) * C5401) *
                        C63 * C57 * C2328 +
                    ((C159 * C1351 + C62 * C1445) * C674 -
                     ((C159 * C389 + C62 * C482) * C5508 +
                      (C159 * C318 + C62 * C422) * C673) +
                     (C159 * C1415 + C62 * C1503) * C5401) *
                        C63 * C57 * C5377) *
                       C2569 +
                   (((C159 * C603 + C62 * C707) * C674 -
                     ((C159 * C134 + C62 * C209) * C5508 +
                      (C159 * C72 + C62 * C161) * C673) +
                     (C159 * C676 + C62 * C769) * C5401) *
                        C63 * C57 * C2328 +
                    ((C159 * C317 + C62 * C421) * C673 +
                     (C159 * C390 + C62 * C483) * C5508 -
                     (C159 * C2821 + C62 * C2931) * C674 -
                     (C159 * C2895 + C62 * C3002) * C5401) *
                        C63 * C57 * C5377) *
                       C5325)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C63 * C231) * C2574 +
                     (C230 * C76 + C63 * C235) * C2569 -
                     (C230 * C72 + C63 * C232) * C2575 -
                     (C230 * C78 + C63 * C236) * C5325) *
                        C57 * C62 * C5508 +
                    ((C230 * C603 + C63 * C797) * C2575 -
                     ((C230 * C607 + C63 * C800) * C2569 +
                      (C230 * C604 + C63 * C798) * C2574) +
                     (C230 * C609 + C63 * C801) * C5325) *
                        C57 * C62 * C5401) *
                       C2328 +
                   (((C230 * C317 + C63 * C511) * C2575 -
                     ((C230 * C321 + C63 * C514) * C2569 +
                      (C230 * C318 + C63 * C512) * C2574) +
                     (C230 * C323 + C63 * C515) * C5325) *
                        C57 * C62 * C5508 +
                    ((C230 * C1351 + C63 * C1531) * C2574 +
                     (C230 * C1354 + C63 * C1533) * C2569 -
                     (C230 * C2821 + C63 * C3037) * C2575 -
                     (C230 * C2823 + C63 * C3038) * C5325) *
                        C57 * C62 * C5401) *
                       C5377)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C63 * C231) * C2359 +
                     (C230 * C106 + C63 * C257) * C2328 -
                     (C230 * C318 + C63 * C512) * C2360 -
                     (C230 * C357 + C63 * C543) * C5377) *
                        C57 * C62 * C2569 +
                    ((C230 * C317 + C63 * C511) * C2360 -
                     ((C230 * C107 + C63 * C258) * C2328 +
                      (C230 * C72 + C63 * C232) * C2359) +
                     (C230 * C358 + C63 * C544) * C5377) *
                        C57 * C62 * C5325) *
                       C5508 +
                   (((C230 * C1351 + C63 * C1531) * C2360 -
                     ((C230 * C642 + C63 * C830) * C2328 +
                      (C230 * C604 + C63 * C798) * C2359) +
                     (C230 * C1385 + C63 * C1561) * C5377) *
                        C57 * C62 * C2569 +
                    ((C230 * C603 + C63 * C797) * C2359 +
                     (C230 * C641 + C63 * C829) * C2328 -
                     (C230 * C2821 + C63 * C3037) * C2360 -
                     (C230 * C2859 + C63 * C3073) * C5377) *
                        C57 * C62 * C5325) *
                       C5401)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C63 * C231) * C673 +
                     (C230 * C133 + C63 * C279) * C5508 -
                     (C230 * C604 + C63 * C798) * C674 -
                     (C230 * C675 + C63 * C858) * C5401) *
                        C57 * C62 * C2328 +
                    ((C230 * C1351 + C63 * C1531) * C674 -
                     ((C230 * C389 + C63 * C572) * C5508 +
                      (C230 * C318 + C63 * C512) * C673) +
                     (C230 * C1415 + C63 * C1589) * C5401) *
                        C57 * C62 * C5377) *
                       C2569 +
                   (((C230 * C603 + C63 * C797) * C674 -
                     ((C230 * C134 + C63 * C280) * C5508 +
                      (C230 * C72 + C63 * C232) * C673) +
                     (C230 * C676 + C63 * C859) * C5401) *
                        C57 * C62 * C2328 +
                    ((C230 * C317 + C63 * C511) * C673 +
                     (C230 * C390 + C63 * C573) * C5508 -
                     (C230 * C2821 + C63 * C3037) * C674 -
                     (C230 * C2895 + C63 * C3108) * C5401) *
                        C57 * C62 * C5377) *
                       C5325)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C66 * C71 + C57 * C75) * C4707 + (C66 * C76 + C57 * C83) * C5499 -
            (C66 * C72 + C57 * C77) * C4700 - (C66 * C78 + C57 * C84) * C5325) *
               C62 * C63 * C3135 +
           ((C66 * C603 + C57 * C606) * C4700 -
            ((C66 * C607 + C57 * C612) * C5499 +
             (C66 * C604 + C57 * C608) * C4707) +
            (C66 * C609 + C57 * C613) * C5325) *
               C62 * C63 * C5401) *
              C2328 +
          (((C66 * C317 + C57 * C320) * C4700 -
            ((C66 * C321 + C57 * C326) * C5499 +
             (C66 * C318 + C57 * C322) * C4707) +
            (C66 * C323 + C57 * C327) * C5325) *
               C62 * C63 * C3135 +
           ((C66 * C1351 + C57 * C1353) * C4707 +
            (C66 * C1354 + C57 * C1357) * C5499 -
            (C66 * C2821 + C57 * C2822) * C4700 -
            (C66 * C2823 + C57 * C2824) * C5325) *
               C62 * C63 * C5401) *
              C5377)) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C66 * C71 + C57 * C75) * C2359 +
                     (C66 * C106 + C57 * C110) * C2328 -
                     (C66 * C318 + C57 * C322) * C2360 -
                     (C66 * C357 + C57 * C360) * C5377) *
                        C62 * C63 * C5499 +
                    ((C66 * C317 + C57 * C320) * C2360 -
                     ((C66 * C107 + C57 * C111) * C2328 +
                      (C66 * C72 + C57 * C77) * C2359) +
                     (C66 * C358 + C57 * C361) * C5377) *
                        C62 * C63 * C5325) *
                       C3135 +
                   (((C66 * C1351 + C57 * C1353) * C2360 -
                     ((C66 * C642 + C57 * C645) * C2328 +
                      (C66 * C604 + C57 * C608) * C2359) +
                     (C66 * C1385 + C57 * C1387) * C5377) *
                        C62 * C63 * C5499 +
                    ((C66 * C603 + C57 * C606) * C2359 +
                     (C66 * C641 + C57 * C644) * C2328 -
                     (C66 * C2821 + C57 * C2822) * C2360 -
                     (C66 * C2859 + C57 * C2860) * C5377) *
                        C62 * C63 * C5325) *
                       C5401)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C66 * C71 + C57 * C75) * C3189 +
                     (C66 * C133 + C57 * C137) * C3135 -
                     (C66 * C604 + C57 * C608) * C3190 -
                     (C66 * C675 + C57 * C678) * C5401) *
                        C62 * C63 * C2328 +
                    ((C66 * C1351 + C57 * C1353) * C3190 -
                     ((C66 * C389 + C57 * C392) * C3135 +
                      (C66 * C318 + C57 * C322) * C3189) +
                     (C66 * C1415 + C57 * C1417) * C5401) *
                        C62 * C63 * C5377) *
                       C5499 +
                   (((C66 * C603 + C57 * C606) * C3190 -
                     ((C66 * C134 + C57 * C138) * C3135 +
                      (C66 * C72 + C57 * C77) * C3189) +
                     (C66 * C676 + C57 * C679) * C5401) *
                        C62 * C63 * C2328 +
                    ((C66 * C317 + C57 * C320) * C3189 +
                     (C66 * C390 + C57 * C393) * C3135 -
                     (C66 * C2821 + C57 * C2822) * C3190 -
                     (C66 * C2895 + C57 * C2896) * C5401) *
                        C62 * C63 * C5377) *
                       C5325)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C159 * C71 + C62 * C160) * C4707 +
                     (C159 * C76 + C62 * C164) * C5499 -
                     (C159 * C72 + C62 * C161) * C4700 -
                     (C159 * C78 + C62 * C165) * C5325) *
                        C63 * C57 * C3135 +
                    ((C159 * C603 + C62 * C707) * C4700 -
                     ((C159 * C607 + C62 * C710) * C5499 +
                      (C159 * C604 + C62 * C708) * C4707) +
                     (C159 * C609 + C62 * C711) * C5325) *
                        C63 * C57 * C5401) *
                       C2328 +
                   (((C159 * C317 + C62 * C421) * C4700 -
                     ((C159 * C321 + C62 * C424) * C5499 +
                      (C159 * C318 + C62 * C422) * C4707) +
                     (C159 * C323 + C62 * C425) * C5325) *
                        C63 * C57 * C3135 +
                    ((C159 * C1351 + C62 * C1445) * C4707 +
                     (C159 * C1354 + C62 * C1447) * C5499 -
                     (C159 * C2821 + C62 * C2931) * C4700 -
                     (C159 * C2823 + C62 * C2932) * C5325) *
                        C63 * C57 * C5401) *
                       C5377)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C159 * C71 + C62 * C160) * C2359 +
                     (C159 * C106 + C62 * C186) * C2328 -
                     (C159 * C318 + C62 * C422) * C2360 -
                     (C159 * C357 + C62 * C453) * C5377) *
                        C63 * C57 * C5499 +
                    ((C159 * C317 + C62 * C421) * C2360 -
                     ((C159 * C107 + C62 * C187) * C2328 +
                      (C159 * C72 + C62 * C161) * C2359) +
                     (C159 * C358 + C62 * C454) * C5377) *
                        C63 * C57 * C5325) *
                       C3135 +
                   (((C159 * C1351 + C62 * C1445) * C2360 -
                     ((C159 * C642 + C62 * C740) * C2328 +
                      (C159 * C604 + C62 * C708) * C2359) +
                     (C159 * C1385 + C62 * C1475) * C5377) *
                        C63 * C57 * C5499 +
                    ((C159 * C603 + C62 * C707) * C2359 +
                     (C159 * C641 + C62 * C739) * C2328 -
                     (C159 * C2821 + C62 * C2931) * C2360 -
                     (C159 * C2859 + C62 * C2967) * C5377) *
                        C63 * C57 * C5325) *
                       C5401)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C159 * C71 + C62 * C160) * C3189 +
                     (C159 * C133 + C62 * C208) * C3135 -
                     (C159 * C604 + C62 * C708) * C3190 -
                     (C159 * C675 + C62 * C768) * C5401) *
                        C63 * C57 * C2328 +
                    ((C159 * C1351 + C62 * C1445) * C3190 -
                     ((C159 * C389 + C62 * C482) * C3135 +
                      (C159 * C318 + C62 * C422) * C3189) +
                     (C159 * C1415 + C62 * C1503) * C5401) *
                        C63 * C57 * C5377) *
                       C5499 +
                   (((C159 * C603 + C62 * C707) * C3190 -
                     ((C159 * C134 + C62 * C209) * C3135 +
                      (C159 * C72 + C62 * C161) * C3189) +
                     (C159 * C676 + C62 * C769) * C5401) *
                        C63 * C57 * C2328 +
                    ((C159 * C317 + C62 * C421) * C3189 +
                     (C159 * C390 + C62 * C483) * C3135 -
                     (C159 * C2821 + C62 * C2931) * C3190 -
                     (C159 * C2895 + C62 * C3002) * C5401) *
                        C63 * C57 * C5377) *
                       C5325)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C63 * C231) * C4707 +
                     (C230 * C76 + C63 * C235) * C5499 -
                     (C230 * C72 + C63 * C232) * C4700 -
                     (C230 * C78 + C63 * C236) * C5325) *
                        C57 * C62 * C3135 +
                    ((C230 * C603 + C63 * C797) * C4700 -
                     ((C230 * C607 + C63 * C800) * C5499 +
                      (C230 * C604 + C63 * C798) * C4707) +
                     (C230 * C609 + C63 * C801) * C5325) *
                        C57 * C62 * C5401) *
                       C2328 +
                   (((C230 * C317 + C63 * C511) * C4700 -
                     ((C230 * C321 + C63 * C514) * C5499 +
                      (C230 * C318 + C63 * C512) * C4707) +
                     (C230 * C323 + C63 * C515) * C5325) *
                        C57 * C62 * C3135 +
                    ((C230 * C1351 + C63 * C1531) * C4707 +
                     (C230 * C1354 + C63 * C1533) * C5499 -
                     (C230 * C2821 + C63 * C3037) * C4700 -
                     (C230 * C2823 + C63 * C3038) * C5325) *
                        C57 * C62 * C5401) *
                       C5377)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C63 * C231) * C2359 +
                     (C230 * C106 + C63 * C257) * C2328 -
                     (C230 * C318 + C63 * C512) * C2360 -
                     (C230 * C357 + C63 * C543) * C5377) *
                        C57 * C62 * C5499 +
                    ((C230 * C317 + C63 * C511) * C2360 -
                     ((C230 * C107 + C63 * C258) * C2328 +
                      (C230 * C72 + C63 * C232) * C2359) +
                     (C230 * C358 + C63 * C544) * C5377) *
                        C57 * C62 * C5325) *
                       C3135 +
                   (((C230 * C1351 + C63 * C1531) * C2360 -
                     ((C230 * C642 + C63 * C830) * C2328 +
                      (C230 * C604 + C63 * C798) * C2359) +
                     (C230 * C1385 + C63 * C1561) * C5377) *
                        C57 * C62 * C5499 +
                    ((C230 * C603 + C63 * C797) * C2359 +
                     (C230 * C641 + C63 * C829) * C2328 -
                     (C230 * C2821 + C63 * C3037) * C2360 -
                     (C230 * C2859 + C63 * C3073) * C5377) *
                        C57 * C62 * C5325) *
                       C5401)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C63 * C231) * C3189 +
                     (C230 * C133 + C63 * C279) * C3135 -
                     (C230 * C604 + C63 * C798) * C3190 -
                     (C230 * C675 + C63 * C858) * C5401) *
                        C57 * C62 * C2328 +
                    ((C230 * C1351 + C63 * C1531) * C3190 -
                     ((C230 * C389 + C63 * C572) * C3135 +
                      (C230 * C318 + C63 * C512) * C3189) +
                     (C230 * C1415 + C63 * C1589) * C5401) *
                        C57 * C62 * C5377) *
                       C5499 +
                   (((C230 * C603 + C63 * C797) * C3190 -
                     ((C230 * C134 + C63 * C280) * C3135 +
                      (C230 * C72 + C63 * C232) * C3189) +
                     (C230 * C676 + C63 * C859) * C5401) *
                        C57 * C62 * C2328 +
                    ((C230 * C317 + C63 * C511) * C3189 +
                     (C230 * C390 + C63 * C573) * C3135 -
                     (C230 * C2821 + C63 * C3037) * C3190 -
                     (C230 * C2895 + C63 * C3108) * C5401) *
                        C57 * C62 * C5377) *
                       C5325)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C66 * C71 + C57 * C75) * C1160 + (C66 * C76 + C57 * C83) * C5320) *
               C62 * C63 * C3135 -
           ((C66 * C607 + C57 * C612) * C5320 +
            (C66 * C604 + C57 * C608) * C1160) *
               C62 * C63 * C5401) *
              C5529 +
          (((C66 * C1351 + C57 * C1353) * C1160 +
            (C66 * C1354 + C57 * C1357) * C5320) *
               C62 * C63 * C5401 -
           ((C66 * C321 + C57 * C326) * C5320 +
            (C66 * C318 + C57 * C322) * C1160) *
               C62 * C63 * C3135) *
              C5524 +
          (((C66 * C894 + C57 * C896) * C1160 +
            (C66 * C897 + C57 * C900) * C5320) *
               C62 * C63 * C3135 -
           ((C66 * C1355 + C57 * C1358) * C5320 +
            (C66 * C1352 + C57 * C1356) * C1160) *
               C62 * C63 * C5401) *
              C2573)) /
        (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C2602 + (C66 * C106 + C57 * C110) * C5529 -
           (C66 * C318 + C57 * C322) * C2603 -
           (C66 * C357 + C57 * C360) * C5524 +
           (C66 * C894 + C57 * C896) * C2604 +
           (C66 * C931 + C57 * C933) * C2573) *
              C62 * C63 * C5320 * C3135 +
          ((C66 * C1351 + C57 * C1353) * C2603 -
           ((C66 * C642 + C57 * C645) * C5529 +
            (C66 * C604 + C57 * C608) * C2602) +
           (C66 * C1385 + C57 * C1387) * C5524 -
           (C66 * C1352 + C57 * C1356) * C2604 -
           (C66 * C1386 + C57 * C1388) * C2573) *
              C62 * C63 * C5320 * C5401)) /
        (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C3189 + (C66 * C133 + C57 * C137) * C3135 -
           (C66 * C604 + C57 * C608) * C3190 -
           (C66 * C675 + C57 * C678) * C5401) *
              C62 * C63 * C5529 +
          ((C66 * C1351 + C57 * C1353) * C3190 -
           ((C66 * C389 + C57 * C392) * C3135 +
            (C66 * C318 + C57 * C322) * C3189) +
           (C66 * C1415 + C57 * C1417) * C5401) *
              C62 * C63 * C5524 +
          ((C66 * C894 + C57 * C896) * C3189 +
           (C66 * C961 + C57 * C963) * C3135 -
           (C66 * C1352 + C57 * C1356) * C3190 -
           (C66 * C1416 + C57 * C1418) * C5401) *
              C62 * C63 * C2573) *
         C5320) /
        (p * q * std::sqrt(p + q));
    d2eeyx[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C159 * C71 + C62 * C160) * C1160 +
                     (C159 * C76 + C62 * C164) * C5320) *
                        C63 * C57 * C3135 -
                    ((C159 * C607 + C62 * C710) * C5320 +
                     (C159 * C604 + C62 * C708) * C1160) *
                        C63 * C57 * C5401) *
                       C5529 +
                   (((C159 * C1351 + C62 * C1445) * C1160 +
                     (C159 * C1354 + C62 * C1447) * C5320) *
                        C63 * C57 * C5401 -
                    ((C159 * C321 + C62 * C424) * C5320 +
                     (C159 * C318 + C62 * C422) * C1160) *
                        C63 * C57 * C3135) *
                       C5524 +
                   (((C159 * C894 + C62 * C991) * C1160 +
                     (C159 * C897 + C62 * C993) * C5320) *
                        C63 * C57 * C3135 -
                    ((C159 * C1355 + C62 * C1448) * C5320 +
                     (C159 * C1352 + C62 * C1446) * C1160) *
                        C63 * C57 * C5401) *
                       C2573)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C2602 +
                    (C159 * C106 + C62 * C186) * C5529 -
                    (C159 * C318 + C62 * C422) * C2603 -
                    (C159 * C357 + C62 * C453) * C5524 +
                    (C159 * C894 + C62 * C991) * C2604 +
                    (C159 * C931 + C62 * C1021) * C2573) *
                       C63 * C57 * C5320 * C3135 +
                   ((C159 * C1351 + C62 * C1445) * C2603 -
                    ((C159 * C642 + C62 * C740) * C5529 +
                     (C159 * C604 + C62 * C708) * C2602) +
                    (C159 * C1385 + C62 * C1475) * C5524 -
                    (C159 * C1352 + C62 * C1446) * C2604 -
                    (C159 * C1386 + C62 * C1476) * C2573) *
                       C63 * C57 * C5320 * C5401)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C3189 +
                    (C159 * C133 + C62 * C208) * C3135 -
                    (C159 * C604 + C62 * C708) * C3190 -
                    (C159 * C675 + C62 * C768) * C5401) *
                       C63 * C57 * C5529 +
                   ((C159 * C1351 + C62 * C1445) * C3190 -
                    ((C159 * C389 + C62 * C482) * C3135 +
                     (C159 * C318 + C62 * C422) * C3189) +
                    (C159 * C1415 + C62 * C1503) * C5401) *
                       C63 * C57 * C5524 +
                   ((C159 * C894 + C62 * C991) * C3189 +
                    (C159 * C961 + C62 * C1049) * C3135 -
                    (C159 * C1352 + C62 * C1446) * C3190 -
                    (C159 * C1416 + C62 * C1504) * C5401) *
                       C63 * C57 * C2573) *
                  C5320) /
                 (p * q * std::sqrt(p + q));
    d2eezx[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C63 * C231) * C1160 +
                     (C230 * C76 + C63 * C235) * C5320) *
                        C57 * C62 * C3135 -
                    ((C230 * C607 + C63 * C800) * C5320 +
                     (C230 * C604 + C63 * C798) * C1160) *
                        C57 * C62 * C5401) *
                       C5529 +
                   (((C230 * C1351 + C63 * C1531) * C1160 +
                     (C230 * C1354 + C63 * C1533) * C5320) *
                        C57 * C62 * C5401 -
                    ((C230 * C321 + C63 * C514) * C5320 +
                     (C230 * C318 + C63 * C512) * C1160) *
                        C57 * C62 * C3135) *
                       C5524 +
                   (((C230 * C894 + C63 * C1077) * C1160 +
                     (C230 * C897 + C63 * C1079) * C5320) *
                        C57 * C62 * C3135 -
                    ((C230 * C1355 + C63 * C1534) * C5320 +
                     (C230 * C1352 + C63 * C1532) * C1160) *
                        C57 * C62 * C5401) *
                       C2573)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C2602 +
                    (C230 * C106 + C63 * C257) * C5529 -
                    (C230 * C318 + C63 * C512) * C2603 -
                    (C230 * C357 + C63 * C543) * C5524 +
                    (C230 * C894 + C63 * C1077) * C2604 +
                    (C230 * C931 + C63 * C1107) * C2573) *
                       C57 * C62 * C5320 * C3135 +
                   ((C230 * C1351 + C63 * C1531) * C2603 -
                    ((C230 * C642 + C63 * C830) * C5529 +
                     (C230 * C604 + C63 * C798) * C2602) +
                    (C230 * C1385 + C63 * C1561) * C5524 -
                    (C230 * C1352 + C63 * C1532) * C2604 -
                    (C230 * C1386 + C63 * C1562) * C2573) *
                       C57 * C62 * C5320 * C5401)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C3189 +
                    (C230 * C133 + C63 * C279) * C3135 -
                    (C230 * C604 + C63 * C798) * C3190 -
                    (C230 * C675 + C63 * C858) * C5401) *
                       C57 * C62 * C5529 +
                   ((C230 * C1351 + C63 * C1531) * C3190 -
                    ((C230 * C389 + C63 * C572) * C3135 +
                     (C230 * C318 + C63 * C512) * C3189) +
                    (C230 * C1415 + C63 * C1589) * C5401) *
                       C57 * C62 * C5524 +
                   ((C230 * C894 + C63 * C1077) * C3189 +
                    (C230 * C961 + C63 * C1135) * C3135 -
                    (C230 * C1352 + C63 * C1532) * C3190 -
                    (C230 * C1416 + C63 * C1590) * C5401) *
                       C57 * C62 * C2573) *
                  C5320) /
                 (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C66 * C71 + C57 * C75) * C1160 + (C66 * C76 + C57 * C83) * C5320) *
               C62 * C63 * C5530 -
           ((C66 * C607 + C57 * C612) * C5320 +
            (C66 * C604 + C57 * C608) * C1160) *
               C62 * C63 * C5527 +
           ((C66 * C1620 + C57 * C1622) * C1160 +
            (C66 * C1623 + C57 * C1626) * C5320) *
               C62 * C63 * C3681) *
              C2328 +
          (((C66 * C1351 + C57 * C1353) * C1160 +
            (C66 * C1354 + C57 * C1357) * C5320) *
               C62 * C63 * C5527 -
           ((C66 * C321 + C57 * C326) * C5320 +
            (C66 * C318 + C57 * C322) * C1160) *
               C62 * C63 * C5530 -
           ((C66 * C1890 + C57 * C1892) * C5320 +
            (C66 * C1889 + C57 * C1891) * C1160) *
               C62 * C63 * C3681) *
              C5377)) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C2359 + (C66 * C106 + C57 * C110) * C2328 -
           (C66 * C318 + C57 * C322) * C2360 -
           (C66 * C357 + C57 * C360) * C5377) *
              C62 * C63 * C5320 * C5530 +
          ((C66 * C1351 + C57 * C1353) * C2360 -
           ((C66 * C642 + C57 * C645) * C2328 +
            (C66 * C604 + C57 * C608) * C2359) +
           (C66 * C1385 + C57 * C1387) * C5377) *
              C62 * C63 * C5320 * C5527 +
          ((C66 * C1620 + C57 * C1622) * C2359 +
           (C66 * C1654 + C57 * C1656) * C2328 -
           (C66 * C1889 + C57 * C1891) * C2360 -
           (C66 * C1919 + C57 * C1920) * C5377) *
              C62 * C63 * C5320 * C3681)) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C3734 + (C66 * C133 + C57 * C137) * C5530 -
           (C66 * C604 + C57 * C608) * C3735 -
           (C66 * C675 + C57 * C678) * C5527 +
           (C66 * C1620 + C57 * C1622) * C3736 +
           (C66 * C1687 + C57 * C1689) * C3681) *
              C62 * C63 * C2328 +
          ((C66 * C1351 + C57 * C1353) * C3735 -
           ((C66 * C389 + C57 * C392) * C5530 +
            (C66 * C318 + C57 * C322) * C3734) +
           (C66 * C1415 + C57 * C1417) * C5527 -
           (C66 * C1889 + C57 * C1891) * C3736 -
           (C66 * C1947 + C57 * C1948) * C3681) *
              C62 * C63 * C5377) *
         C5320) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C159 * C71 + C62 * C160) * C1160 +
                     (C159 * C76 + C62 * C164) * C5320) *
                        C63 * C57 * C5530 -
                    ((C159 * C607 + C62 * C710) * C5320 +
                     (C159 * C604 + C62 * C708) * C1160) *
                        C63 * C57 * C5527 +
                    ((C159 * C1620 + C62 * C1717) * C1160 +
                     (C159 * C1623 + C62 * C1719) * C5320) *
                        C63 * C57 * C3681) *
                       C2328 +
                   (((C159 * C1351 + C62 * C1445) * C1160 +
                     (C159 * C1354 + C62 * C1447) * C5320) *
                        C63 * C57 * C5527 -
                    ((C159 * C321 + C62 * C424) * C5320 +
                     (C159 * C318 + C62 * C422) * C1160) *
                        C63 * C57 * C5530 -
                    ((C159 * C1890 + C62 * C1976) * C5320 +
                     (C159 * C1889 + C62 * C1975) * C1160) *
                        C63 * C57 * C3681) *
                       C5377)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C2359 +
                    (C159 * C106 + C62 * C186) * C2328 -
                    (C159 * C318 + C62 * C422) * C2360 -
                    (C159 * C357 + C62 * C453) * C5377) *
                       C63 * C57 * C5320 * C5530 +
                   ((C159 * C1351 + C62 * C1445) * C2360 -
                    ((C159 * C642 + C62 * C740) * C2328 +
                     (C159 * C604 + C62 * C708) * C2359) +
                    (C159 * C1385 + C62 * C1475) * C5377) *
                       C63 * C57 * C5320 * C5527 +
                   ((C159 * C1620 + C62 * C1717) * C2359 +
                    (C159 * C1654 + C62 * C1747) * C2328 -
                    (C159 * C1889 + C62 * C1975) * C2360 -
                    (C159 * C1919 + C62 * C2003) * C5377) *
                       C63 * C57 * C5320 * C3681)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C3734 +
                    (C159 * C133 + C62 * C208) * C5530 -
                    (C159 * C604 + C62 * C708) * C3735 -
                    (C159 * C675 + C62 * C768) * C5527 +
                    (C159 * C1620 + C62 * C1717) * C3736 +
                    (C159 * C1687 + C62 * C1775) * C3681) *
                       C63 * C57 * C2328 +
                   ((C159 * C1351 + C62 * C1445) * C3735 -
                    ((C159 * C389 + C62 * C482) * C5530 +
                     (C159 * C318 + C62 * C422) * C3734) +
                    (C159 * C1415 + C62 * C1503) * C5527 -
                    (C159 * C1889 + C62 * C1975) * C3736 -
                    (C159 * C1947 + C62 * C2030) * C3681) *
                       C63 * C57 * C5377) *
                  C5320) /
                 (p * q * std::sqrt(p + q));
    d2eezx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C63 * C231) * C1160 +
                     (C230 * C76 + C63 * C235) * C5320) *
                        C57 * C62 * C5530 -
                    ((C230 * C607 + C63 * C800) * C5320 +
                     (C230 * C604 + C63 * C798) * C1160) *
                        C57 * C62 * C5527 +
                    ((C230 * C1620 + C63 * C1803) * C1160 +
                     (C230 * C1623 + C63 * C1805) * C5320) *
                        C57 * C62 * C3681) *
                       C2328 +
                   (((C230 * C1351 + C63 * C1531) * C1160 +
                     (C230 * C1354 + C63 * C1533) * C5320) *
                        C57 * C62 * C5527 -
                    ((C230 * C321 + C63 * C514) * C5320 +
                     (C230 * C318 + C63 * C512) * C1160) *
                        C57 * C62 * C5530 -
                    ((C230 * C1890 + C63 * C2058) * C5320 +
                     (C230 * C1889 + C63 * C2057) * C1160) *
                        C57 * C62 * C3681) *
                       C5377)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C2359 +
                    (C230 * C106 + C63 * C257) * C2328 -
                    (C230 * C318 + C63 * C512) * C2360 -
                    (C230 * C357 + C63 * C543) * C5377) *
                       C57 * C62 * C5320 * C5530 +
                   ((C230 * C1351 + C63 * C1531) * C2360 -
                    ((C230 * C642 + C63 * C830) * C2328 +
                     (C230 * C604 + C63 * C798) * C2359) +
                    (C230 * C1385 + C63 * C1561) * C5377) *
                       C57 * C62 * C5320 * C5527 +
                   ((C230 * C1620 + C63 * C1803) * C2359 +
                    (C230 * C1654 + C63 * C1833) * C2328 -
                    (C230 * C1889 + C63 * C2057) * C2360 -
                    (C230 * C1919 + C63 * C2085) * C5377) *
                       C57 * C62 * C5320 * C3681)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C3734 +
                    (C230 * C133 + C63 * C279) * C5530 -
                    (C230 * C604 + C63 * C798) * C3735 -
                    (C230 * C675 + C63 * C858) * C5527 +
                    (C230 * C1620 + C63 * C1803) * C3736 +
                    (C230 * C1687 + C63 * C1861) * C3681) *
                       C57 * C62 * C2328 +
                   ((C230 * C1351 + C63 * C1531) * C3735 -
                    ((C230 * C389 + C63 * C572) * C5530 +
                     (C230 * C318 + C63 * C512) * C3734) +
                    (C230 * C1415 + C63 * C1589) * C5527 -
                    (C230 * C1889 + C63 * C2057) * C3736 -
                    (C230 * C1947 + C63 * C2112) * C3681) *
                       C57 * C62 * C5377) *
                  C5320) /
                 (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (-std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C4707 + (C66 * C76 + C57 * C83) * C5499 -
           (C66 * C72 + C57 * C77) * C4700 - (C66 * C78 + C57 * C84) * C5325) *
              C62 * C63 * C5389 * C889 +
          ((C66 * C317 + C57 * C320) * C4700 -
           ((C66 * C321 + C57 * C326) * C5499 +
            (C66 * C318 + C57 * C322) * C4707) +
           (C66 * C323 + C57 * C327) * C5325) *
              C62 * C63 * C5389 * C890 +
          ((C66 * C894 + C57 * C896) * C4707 +
           (C66 * C897 + C57 * C900) * C5499 -
           (C66 * C895 + C57 * C898) * C4700 -
           (C66 * C899 + C57 * C901) * C5325) *
              C62 * C63 * C5389 * C891)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C66 * C71 + C57 * C75) * C67 + (C66 * C76 + C57 * C83) * C58 -
          (C66 * C72 + C57 * C77) * C68 - (C66 * C78 + C57 * C84) * C59 +
          (C66 * C73 + C57 * C79) * C69 + (C66 * C80 + C57 * C85) * C60 -
          (C66 * C74 + C57 * C81) * C70 - (C66 * C82 + C57 * C86) * C61) *
         C62 * C63 * C5389 * C5363) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C4707 + (C66 * C76 + C57 * C83) * C5499 -
           (C66 * C72 + C57 * C77) * C4700 - (C66 * C78 + C57 * C84) * C5325) *
              C62 * C63 * C1617 +
          ((C66 * C603 + C57 * C606) * C4700 -
           ((C66 * C607 + C57 * C612) * C5499 +
            (C66 * C604 + C57 * C608) * C4707) +
           (C66 * C609 + C57 * C613) * C5325) *
              C62 * C63 * C1618 +
          ((C66 * C1620 + C57 * C1622) * C4707 +
           (C66 * C1623 + C57 * C1626) * C5499 -
           (C66 * C1621 + C57 * C1624) * C4700 -
           (C66 * C1625 + C57 * C1627) * C5325) *
              C62 * C63 * C1619) *
         C5363) /
            (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (-std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C928 + (C66 * C106 + C57 * C110) * C889 -
           (C66 * C318 + C57 * C322) * C929 - (C66 * C357 + C57 * C360) * C890 +
           (C66 * C894 + C57 * C896) * C930 +
           (C66 * C931 + C57 * C933) * C891) *
              C62 * C63 * C5499 +
          ((C66 * C317 + C57 * C320) * C929 -
           ((C66 * C107 + C57 * C111) * C889 + (C66 * C72 + C57 * C77) * C928) +
           (C66 * C358 + C57 * C361) * C890 - (C66 * C895 + C57 * C898) * C930 -
           (C66 * C932 + C57 * C934) * C891) *
              C62 * C63 * C5325) *
         C5389) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C105 + (C66 * C106 + C57 * C110) * C5363) *
              C62 * C63 * C58 -
          ((C66 * C107 + C57 * C111) * C5363 + (C66 * C72 + C57 * C77) * C105) *
              C62 * C63 * C59 +
          ((C66 * C73 + C57 * C79) * C105 + (C66 * C108 + C57 * C112) * C5363) *
              C62 * C63 * C60 -
          ((C66 * C109 + C57 * C113) * C5363 + (C66 * C74 + C57 * C81) * C105) *
              C62 * C63 * C61) *
         C5389) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C66 * C71 + C57 * C75) * C105 +
            (C66 * C106 + C57 * C110) * C5363) *
               C62 * C63 * C5499 -
           ((C66 * C107 + C57 * C111) * C5363 +
            (C66 * C72 + C57 * C77) * C105) *
               C62 * C63 * C5325) *
              C1617 +
          (((C66 * C603 + C57 * C606) * C105 +
            (C66 * C641 + C57 * C644) * C5363) *
               C62 * C63 * C5325 -
           ((C66 * C642 + C57 * C645) * C5363 +
            (C66 * C604 + C57 * C608) * C105) *
               C62 * C63 * C5499) *
              C1618 +
          (((C66 * C1620 + C57 * C1622) * C105 +
            (C66 * C1654 + C57 * C1656) * C5363) *
               C62 * C63 * C5499 -
           ((C66 * C1655 + C57 * C1657) * C5363 +
            (C66 * C1621 + C57 * C1624) * C105) *
               C62 * C63 * C5325) *
              C1619)) /
            (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (-std::pow(Pi, 2.5) * ((((C66 * C71 + C57 * C75) * C132 +
                                 (C66 * C133 + C57 * C137) * C5389) *
                                    C62 * C63 * C889 -
                                ((C66 * C389 + C57 * C392) * C5389 +
                                 (C66 * C318 + C57 * C322) * C132) *
                                    C62 * C63 * C890 +
                                ((C66 * C894 + C57 * C896) * C132 +
                                 (C66 * C961 + C57 * C963) * C5389) *
                                    C62 * C63 * C891) *
                                   C5499 +
                               (((C66 * C317 + C57 * C320) * C132 +
                                 (C66 * C390 + C57 * C393) * C5389) *
                                    C62 * C63 * C890 -
                                ((C66 * C134 + C57 * C138) * C5389 +
                                 (C66 * C72 + C57 * C77) * C132) *
                                    C62 * C63 * C889 -
                                ((C66 * C962 + C57 * C964) * C5389 +
                                 (C66 * C895 + C57 * C898) * C132) *
                                    C62 * C63 * C891) *
                                   C5325)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C132 + (C66 * C133 + C57 * C137) * C5389) *
              C62 * C63 * C5363 * C58 -
          ((C66 * C134 + C57 * C138) * C5389 + (C66 * C72 + C57 * C77) * C132) *
              C62 * C63 * C5363 * C59 +
          ((C66 * C73 + C57 * C79) * C132 + (C66 * C135 + C57 * C139) * C5389) *
              C62 * C63 * C5363 * C60 -
          ((C66 * C136 + C57 * C140) * C5389 + (C66 * C74 + C57 * C81) * C132) *
              C62 * C63 * C5363 * C61)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C1684 + (C66 * C133 + C57 * C137) * C1617 -
           (C66 * C604 + C57 * C608) * C1685 -
           (C66 * C675 + C57 * C678) * C1618 +
           (C66 * C1620 + C57 * C1622) * C1686 +
           (C66 * C1687 + C57 * C1689) * C1619) *
              C62 * C63 * C5363 * C5499 +
          ((C66 * C603 + C57 * C606) * C1685 -
           ((C66 * C134 + C57 * C138) * C1617 +
            (C66 * C72 + C57 * C77) * C1684) +
           (C66 * C676 + C57 * C679) * C1618 -
           (C66 * C1621 + C57 * C1624) * C1686 -
           (C66 * C1688 + C57 * C1690) * C1619) *
              C62 * C63 * C5363 * C5325)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (-std::pow(Pi, 2.5) * (((C159 * C71 + C62 * C160) * C4707 +
                                (C159 * C76 + C62 * C164) * C5499 -
                                (C159 * C72 + C62 * C161) * C4700 -
                                (C159 * C78 + C62 * C165) * C5325) *
                                   C63 * C57 * C5389 * C889 +
                               ((C159 * C317 + C62 * C421) * C4700 -
                                ((C159 * C321 + C62 * C424) * C5499 +
                                 (C159 * C318 + C62 * C422) * C4707) +
                                (C159 * C323 + C62 * C425) * C5325) *
                                   C63 * C57 * C5389 * C890 +
                               ((C159 * C894 + C62 * C991) * C4707 +
                                (C159 * C897 + C62 * C993) * C5499 -
                                (C159 * C895 + C62 * C992) * C4700 -
                                (C159 * C899 + C62 * C994) * C5325) *
                                   C63 * C57 * C5389 * C891)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C159 * C71 + C62 * C160) * C67 + (C159 * C76 + C62 * C164) * C58 -
          (C159 * C72 + C62 * C161) * C68 - (C159 * C78 + C62 * C165) * C59 +
          (C159 * C73 + C62 * C162) * C69 + (C159 * C80 + C62 * C166) * C60 -
          (C159 * C74 + C62 * C163) * C70 - (C159 * C82 + C62 * C167) * C61) *
         C63 * C57 * C5389 * C5363) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C159 * C71 + C62 * C160) * C4707 +
           (C159 * C76 + C62 * C164) * C5499 -
           (C159 * C72 + C62 * C161) * C4700 -
           (C159 * C78 + C62 * C165) * C5325) *
              C63 * C57 * C1617 +
          ((C159 * C603 + C62 * C707) * C4700 -
           ((C159 * C607 + C62 * C710) * C5499 +
            (C159 * C604 + C62 * C708) * C4707) +
           (C159 * C609 + C62 * C711) * C5325) *
              C63 * C57 * C1618 +
          ((C159 * C1620 + C62 * C1717) * C4707 +
           (C159 * C1623 + C62 * C1719) * C5499 -
           (C159 * C1621 + C62 * C1718) * C4700 -
           (C159 * C1625 + C62 * C1720) * C5325) *
              C63 * C57 * C1619) *
         C5363) /
            (p * q * std::sqrt(p + q));
    d2eeyy[6] += (-std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C928 +
                    (C159 * C106 + C62 * C186) * C889 -
                    (C159 * C318 + C62 * C422) * C929 -
                    (C159 * C357 + C62 * C453) * C890 +
                    (C159 * C894 + C62 * C991) * C930 +
                    (C159 * C931 + C62 * C1021) * C891) *
                       C63 * C57 * C5499 +
                   ((C159 * C317 + C62 * C421) * C929 -
                    ((C159 * C107 + C62 * C187) * C889 +
                     (C159 * C72 + C62 * C161) * C928) +
                    (C159 * C358 + C62 * C454) * C890 -
                    (C159 * C895 + C62 * C992) * C930 -
                    (C159 * C932 + C62 * C1022) * C891) *
                       C63 * C57 * C5325) *
                  C5389) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C105 +
                    (C159 * C106 + C62 * C186) * C5363) *
                       C63 * C57 * C58 -
                   ((C159 * C107 + C62 * C187) * C5363 +
                    (C159 * C72 + C62 * C161) * C105) *
                       C63 * C57 * C59 +
                   ((C159 * C73 + C62 * C162) * C105 +
                    (C159 * C108 + C62 * C188) * C5363) *
                       C63 * C57 * C60 -
                   ((C159 * C109 + C62 * C189) * C5363 +
                    (C159 * C74 + C62 * C163) * C105) *
                       C63 * C57 * C61) *
                  C5389) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C159 * C71 + C62 * C160) * C105 +
                     (C159 * C106 + C62 * C186) * C5363) *
                        C63 * C57 * C5499 -
                    ((C159 * C107 + C62 * C187) * C5363 +
                     (C159 * C72 + C62 * C161) * C105) *
                        C63 * C57 * C5325) *
                       C1617 +
                   (((C159 * C603 + C62 * C707) * C105 +
                     (C159 * C641 + C62 * C739) * C5363) *
                        C63 * C57 * C5325 -
                    ((C159 * C642 + C62 * C740) * C5363 +
                     (C159 * C604 + C62 * C708) * C105) *
                        C63 * C57 * C5499) *
                       C1618 +
                   (((C159 * C1620 + C62 * C1717) * C105 +
                     (C159 * C1654 + C62 * C1747) * C5363) *
                        C63 * C57 * C5499 -
                    ((C159 * C1655 + C62 * C1748) * C5363 +
                     (C159 * C1621 + C62 * C1718) * C105) *
                        C63 * C57 * C5325) *
                       C1619)) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[6] += (-std::pow(Pi, 2.5) * ((((C159 * C71 + C62 * C160) * C132 +
                                          (C159 * C133 + C62 * C208) * C5389) *
                                             C63 * C57 * C889 -
                                         ((C159 * C389 + C62 * C482) * C5389 +
                                          (C159 * C318 + C62 * C422) * C132) *
                                             C63 * C57 * C890 +
                                         ((C159 * C894 + C62 * C991) * C132 +
                                          (C159 * C961 + C62 * C1049) * C5389) *
                                             C63 * C57 * C891) *
                                            C5499 +
                                        (((C159 * C317 + C62 * C421) * C132 +
                                          (C159 * C390 + C62 * C483) * C5389) *
                                             C63 * C57 * C890 -
                                         ((C159 * C134 + C62 * C209) * C5389 +
                                          (C159 * C72 + C62 * C161) * C132) *
                                             C63 * C57 * C889 -
                                         ((C159 * C962 + C62 * C1050) * C5389 +
                                          (C159 * C895 + C62 * C992) * C132) *
                                             C63 * C57 * C891) *
                                            C5325)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) * (((C159 * C71 + C62 * C160) * C132 +
                                        (C159 * C133 + C62 * C208) * C5389) *
                                           C63 * C57 * C5363 * C58 -
                                       ((C159 * C134 + C62 * C209) * C5389 +
                                        (C159 * C72 + C62 * C161) * C132) *
                                           C63 * C57 * C5363 * C59 +
                                       ((C159 * C73 + C62 * C162) * C132 +
                                        (C159 * C135 + C62 * C210) * C5389) *
                                           C63 * C57 * C5363 * C60 -
                                       ((C159 * C136 + C62 * C211) * C5389 +
                                        (C159 * C74 + C62 * C163) * C132) *
                                           C63 * C57 * C5363 * C61)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C1684 +
                    (C159 * C133 + C62 * C208) * C1617 -
                    (C159 * C604 + C62 * C708) * C1685 -
                    (C159 * C675 + C62 * C768) * C1618 +
                    (C159 * C1620 + C62 * C1717) * C1686 +
                    (C159 * C1687 + C62 * C1775) * C1619) *
                       C63 * C57 * C5363 * C5499 +
                   ((C159 * C603 + C62 * C707) * C1685 -
                    ((C159 * C134 + C62 * C209) * C1617 +
                     (C159 * C72 + C62 * C161) * C1684) +
                    (C159 * C676 + C62 * C769) * C1618 -
                    (C159 * C1621 + C62 * C1718) * C1686 -
                    (C159 * C1688 + C62 * C1776) * C1619) *
                       C63 * C57 * C5363 * C5325)) /
                     (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (-std::pow(Pi, 2.5) * (((C230 * C71 + C63 * C231) * C4707 +
                                (C230 * C76 + C63 * C235) * C5499 -
                                (C230 * C72 + C63 * C232) * C4700 -
                                (C230 * C78 + C63 * C236) * C5325) *
                                   C57 * C62 * C5389 * C889 +
                               ((C230 * C317 + C63 * C511) * C4700 -
                                ((C230 * C321 + C63 * C514) * C5499 +
                                 (C230 * C318 + C63 * C512) * C4707) +
                                (C230 * C323 + C63 * C515) * C5325) *
                                   C57 * C62 * C5389 * C890 +
                               ((C230 * C894 + C63 * C1077) * C4707 +
                                (C230 * C897 + C63 * C1079) * C5499 -
                                (C230 * C895 + C63 * C1078) * C4700 -
                                (C230 * C899 + C63 * C1080) * C5325) *
                                   C57 * C62 * C5389 * C891)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C230 * C71 + C63 * C231) * C67 + (C230 * C76 + C63 * C235) * C58 -
          (C230 * C72 + C63 * C232) * C68 - (C230 * C78 + C63 * C236) * C59 +
          (C230 * C73 + C63 * C233) * C69 + (C230 * C80 + C63 * C237) * C60 -
          (C230 * C74 + C63 * C234) * C70 - (C230 * C82 + C63 * C238) * C61) *
         C57 * C62 * C5389 * C5363) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C230 * C71 + C63 * C231) * C4707 +
           (C230 * C76 + C63 * C235) * C5499 -
           (C230 * C72 + C63 * C232) * C4700 -
           (C230 * C78 + C63 * C236) * C5325) *
              C57 * C62 * C1617 +
          ((C230 * C603 + C63 * C797) * C4700 -
           ((C230 * C607 + C63 * C800) * C5499 +
            (C230 * C604 + C63 * C798) * C4707) +
           (C230 * C609 + C63 * C801) * C5325) *
              C57 * C62 * C1618 +
          ((C230 * C1620 + C63 * C1803) * C4707 +
           (C230 * C1623 + C63 * C1805) * C5499 -
           (C230 * C1621 + C63 * C1804) * C4700 -
           (C230 * C1625 + C63 * C1806) * C5325) *
              C57 * C62 * C1619) *
         C5363) /
            (p * q * std::sqrt(p + q));
    d2eezy[6] += (-std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C928 +
                    (C230 * C106 + C63 * C257) * C889 -
                    (C230 * C318 + C63 * C512) * C929 -
                    (C230 * C357 + C63 * C543) * C890 +
                    (C230 * C894 + C63 * C1077) * C930 +
                    (C230 * C931 + C63 * C1107) * C891) *
                       C57 * C62 * C5499 +
                   ((C230 * C317 + C63 * C511) * C929 -
                    ((C230 * C107 + C63 * C258) * C889 +
                     (C230 * C72 + C63 * C232) * C928) +
                    (C230 * C358 + C63 * C544) * C890 -
                    (C230 * C895 + C63 * C1078) * C930 -
                    (C230 * C932 + C63 * C1108) * C891) *
                       C57 * C62 * C5325) *
                  C5389) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C105 +
                    (C230 * C106 + C63 * C257) * C5363) *
                       C57 * C62 * C58 -
                   ((C230 * C107 + C63 * C258) * C5363 +
                    (C230 * C72 + C63 * C232) * C105) *
                       C57 * C62 * C59 +
                   ((C230 * C73 + C63 * C233) * C105 +
                    (C230 * C108 + C63 * C259) * C5363) *
                       C57 * C62 * C60 -
                   ((C230 * C109 + C63 * C260) * C5363 +
                    (C230 * C74 + C63 * C234) * C105) *
                       C57 * C62 * C61) *
                  C5389) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C63 * C231) * C105 +
                     (C230 * C106 + C63 * C257) * C5363) *
                        C57 * C62 * C5499 -
                    ((C230 * C107 + C63 * C258) * C5363 +
                     (C230 * C72 + C63 * C232) * C105) *
                        C57 * C62 * C5325) *
                       C1617 +
                   (((C230 * C603 + C63 * C797) * C105 +
                     (C230 * C641 + C63 * C829) * C5363) *
                        C57 * C62 * C5325 -
                    ((C230 * C642 + C63 * C830) * C5363 +
                     (C230 * C604 + C63 * C798) * C105) *
                        C57 * C62 * C5499) *
                       C1618 +
                   (((C230 * C1620 + C63 * C1803) * C105 +
                     (C230 * C1654 + C63 * C1833) * C5363) *
                        C57 * C62 * C5499 -
                    ((C230 * C1655 + C63 * C1834) * C5363 +
                     (C230 * C1621 + C63 * C1804) * C105) *
                        C57 * C62 * C5325) *
                       C1619)) /
                     (p * q * std::sqrt(p + q));
    d2eezz[6] += (-std::pow(Pi, 2.5) * ((((C230 * C71 + C63 * C231) * C132 +
                                          (C230 * C133 + C63 * C279) * C5389) *
                                             C57 * C62 * C889 -
                                         ((C230 * C389 + C63 * C572) * C5389 +
                                          (C230 * C318 + C63 * C512) * C132) *
                                             C57 * C62 * C890 +
                                         ((C230 * C894 + C63 * C1077) * C132 +
                                          (C230 * C961 + C63 * C1135) * C5389) *
                                             C57 * C62 * C891) *
                                            C5499 +
                                        (((C230 * C317 + C63 * C511) * C132 +
                                          (C230 * C390 + C63 * C573) * C5389) *
                                             C57 * C62 * C890 -
                                         ((C230 * C134 + C63 * C280) * C5389 +
                                          (C230 * C72 + C63 * C232) * C132) *
                                             C57 * C62 * C889 -
                                         ((C230 * C962 + C63 * C1136) * C5389 +
                                          (C230 * C895 + C63 * C1078) * C132) *
                                             C57 * C62 * C891) *
                                            C5325)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) * (((C230 * C71 + C63 * C231) * C132 +
                                        (C230 * C133 + C63 * C279) * C5389) *
                                           C57 * C62 * C5363 * C58 -
                                       ((C230 * C134 + C63 * C280) * C5389 +
                                        (C230 * C72 + C63 * C232) * C132) *
                                           C57 * C62 * C5363 * C59 +
                                       ((C230 * C73 + C63 * C233) * C132 +
                                        (C230 * C135 + C63 * C281) * C5389) *
                                           C57 * C62 * C5363 * C60 -
                                       ((C230 * C136 + C63 * C282) * C5389 +
                                        (C230 * C74 + C63 * C234) * C132) *
                                           C57 * C62 * C5363 * C61)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C1684 +
                    (C230 * C133 + C63 * C279) * C1617 -
                    (C230 * C604 + C63 * C798) * C1685 -
                    (C230 * C675 + C63 * C858) * C1618 +
                    (C230 * C1620 + C63 * C1803) * C1686 +
                    (C230 * C1687 + C63 * C1861) * C1619) *
                       C57 * C62 * C5363 * C5499 +
                   ((C230 * C603 + C63 * C797) * C1685 -
                    ((C230 * C134 + C63 * C280) * C1617 +
                     (C230 * C72 + C63 * C232) * C1684) +
                    (C230 * C676 + C63 * C859) * C1618 -
                    (C230 * C1621 + C63 * C1804) * C1686 -
                    (C230 * C1688 + C63 * C1862) * C1619) *
                       C57 * C62 * C5363 * C5325)) /
                     (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C1160 + (C66 * C76 + C57 * C83) * C5320) *
              C62 * C63 * C5389 * C1156 -
          ((C66 * C321 + C57 * C326) * C5320 +
           (C66 * C318 + C57 * C322) * C1160) *
              C62 * C63 * C5389 * C1157 +
          ((C66 * C894 + C57 * C896) * C1160 +
           (C66 * C897 + C57 * C900) * C5320) *
              C62 * C63 * C5389 * C1158 -
          ((C66 * C1162 + C57 * C1164) * C5320 +
           (C66 * C1161 + C57 * C1163) * C1160) *
              C62 * C63 * C5389 * C1159)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C314 + (C66 * C76 + C57 * C83) * C309 -
           (C66 * C72 + C57 * C77) * C315 - (C66 * C78 + C57 * C84) * C310 +
           (C66 * C73 + C57 * C79) * C316 + (C66 * C80 + C57 * C85) * C311) *
              C62 * C63 * C5389 * C5507 +
          ((C66 * C317 + C57 * C320) * C315 -
           ((C66 * C321 + C57 * C326) * C309 +
            (C66 * C318 + C57 * C322) * C314) +
           (C66 * C323 + C57 * C327) * C310 - (C66 * C319 + C57 * C324) * C316 -
           (C66 * C325 + C57 * C328) * C311) *
              C62 * C63 * C5389 * C5377)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C66 * C71 + C57 * C75) * C1160 + (C66 * C76 + C57 * C83) * C5320) *
               C62 * C63 * C1617 -
           ((C66 * C607 + C57 * C612) * C5320 +
            (C66 * C604 + C57 * C608) * C1160) *
               C62 * C63 * C1618 +
           ((C66 * C1620 + C57 * C1622) * C1160 +
            (C66 * C1623 + C57 * C1626) * C5320) *
               C62 * C63 * C1619) *
              C5507 +
          (((C66 * C1351 + C57 * C1353) * C1160 +
            (C66 * C1354 + C57 * C1357) * C5320) *
               C62 * C63 * C1618 -
           ((C66 * C321 + C57 * C326) * C5320 +
            (C66 * C318 + C57 * C322) * C1160) *
               C62 * C63 * C1617 -
           ((C66 * C1890 + C57 * C1892) * C5320 +
            (C66 * C1889 + C57 * C1891) * C1160) *
               C62 * C63 * C1619) *
              C5377)) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::pow(Pi, 2.5) *
         ((C66 * C71 + C57 * C75) * C1183 + (C66 * C106 + C57 * C110) * C1156 -
          (C66 * C318 + C57 * C322) * C1184 -
          (C66 * C357 + C57 * C360) * C1157 +
          (C66 * C894 + C57 * C896) * C1185 +
          (C66 * C931 + C57 * C933) * C1158 -
          (C66 * C1161 + C57 * C1163) * C1186 -
          (C66 * C1187 + C57 * C1188) * C1159) *
         C62 * C63 * C5320 * C5389) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C355 + (C66 * C106 + C57 * C110) * C5507 -
           (C66 * C318 + C57 * C322) * C356 -
           (C66 * C357 + C57 * C360) * C5377) *
              C62 * C63 * C309 +
          ((C66 * C317 + C57 * C320) * C356 -
           ((C66 * C107 + C57 * C111) * C5507 +
            (C66 * C72 + C57 * C77) * C355) +
           (C66 * C358 + C57 * C361) * C5377) *
              C62 * C63 * C310 +
          ((C66 * C73 + C57 * C79) * C355 + (C66 * C108 + C57 * C112) * C5507 -
           (C66 * C319 + C57 * C324) * C356 -
           (C66 * C359 + C57 * C362) * C5377) *
              C62 * C63 * C311) *
         C5389) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C355 + (C66 * C106 + C57 * C110) * C5507 -
           (C66 * C318 + C57 * C322) * C356 -
           (C66 * C357 + C57 * C360) * C5377) *
              C62 * C63 * C5320 * C1617 +
          ((C66 * C1351 + C57 * C1353) * C356 -
           ((C66 * C642 + C57 * C645) * C5507 +
            (C66 * C604 + C57 * C608) * C355) +
           (C66 * C1385 + C57 * C1387) * C5377) *
              C62 * C63 * C5320 * C1618 +
          ((C66 * C1620 + C57 * C1622) * C355 +
           (C66 * C1654 + C57 * C1656) * C5507 -
           (C66 * C1889 + C57 * C1891) * C356 -
           (C66 * C1919 + C57 * C1920) * C5377) *
              C62 * C63 * C5320 * C1619)) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C132 + (C66 * C133 + C57 * C137) * C5389) *
              C62 * C63 * C1156 -
          ((C66 * C389 + C57 * C392) * C5389 +
           (C66 * C318 + C57 * C322) * C132) *
              C62 * C63 * C1157 +
          ((C66 * C894 + C57 * C896) * C132 +
           (C66 * C961 + C57 * C963) * C5389) *
              C62 * C63 * C1158 -
          ((C66 * C1207 + C57 * C1208) * C5389 +
           (C66 * C1161 + C57 * C1163) * C132) *
              C62 * C63 * C1159) *
         C5320) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C66 * C71 + C57 * C75) * C132 +
                                (C66 * C133 + C57 * C137) * C5389) *
                                   C62 * C63 * C5507 -
                               ((C66 * C389 + C57 * C392) * C5389 +
                                (C66 * C318 + C57 * C322) * C132) *
                                   C62 * C63 * C5377) *
                                  C309 +
                              (((C66 * C317 + C57 * C320) * C132 +
                                (C66 * C390 + C57 * C393) * C5389) *
                                   C62 * C63 * C5377 -
                               ((C66 * C134 + C57 * C138) * C5389 +
                                (C66 * C72 + C57 * C77) * C132) *
                                   C62 * C63 * C5507) *
                                  C310 +
                              (((C66 * C73 + C57 * C79) * C132 +
                                (C66 * C135 + C57 * C139) * C5389) *
                                   C62 * C63 * C5507 -
                               ((C66 * C391 + C57 * C394) * C5389 +
                                (C66 * C319 + C57 * C324) * C132) *
                                   C62 * C63 * C5377) *
                                  C311)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C1684 + (C66 * C133 + C57 * C137) * C1617 -
           (C66 * C604 + C57 * C608) * C1685 -
           (C66 * C675 + C57 * C678) * C1618 +
           (C66 * C1620 + C57 * C1622) * C1686 +
           (C66 * C1687 + C57 * C1689) * C1619) *
              C62 * C63 * C5507 +
          ((C66 * C1351 + C57 * C1353) * C1685 -
           ((C66 * C389 + C57 * C392) * C1617 +
            (C66 * C318 + C57 * C322) * C1684) +
           (C66 * C1415 + C57 * C1417) * C1618 -
           (C66 * C1889 + C57 * C1891) * C1686 -
           (C66 * C1947 + C57 * C1948) * C1619) *
              C62 * C63 * C5377) *
         C5320) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (-std::pow(Pi, 2.5) * (((C159 * C71 + C62 * C160) * C1160 +
                                (C159 * C76 + C62 * C164) * C5320) *
                                   C63 * C57 * C5389 * C1156 -
                               ((C159 * C321 + C62 * C424) * C5320 +
                                (C159 * C318 + C62 * C422) * C1160) *
                                   C63 * C57 * C5389 * C1157 +
                               ((C159 * C894 + C62 * C991) * C1160 +
                                (C159 * C897 + C62 * C993) * C5320) *
                                   C63 * C57 * C5389 * C1158 -
                               ((C159 * C1162 + C62 * C1228) * C5320 +
                                (C159 * C1161 + C62 * C1227) * C1160) *
                                   C63 * C57 * C5389 * C1159)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C159 * C71 + C62 * C160) * C314 + (C159 * C76 + C62 * C164) * C309 -
           (C159 * C72 + C62 * C161) * C315 - (C159 * C78 + C62 * C165) * C310 +
           (C159 * C73 + C62 * C162) * C316 +
           (C159 * C80 + C62 * C166) * C311) *
              C63 * C57 * C5389 * C5507 +
          ((C159 * C317 + C62 * C421) * C315 -
           ((C159 * C321 + C62 * C424) * C309 +
            (C159 * C318 + C62 * C422) * C314) +
           (C159 * C323 + C62 * C425) * C310 -
           (C159 * C319 + C62 * C423) * C316 -
           (C159 * C325 + C62 * C426) * C311) *
              C63 * C57 * C5389 * C5377)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C159 * C71 + C62 * C160) * C1160 +
            (C159 * C76 + C62 * C164) * C5320) *
               C63 * C57 * C1617 -
           ((C159 * C607 + C62 * C710) * C5320 +
            (C159 * C604 + C62 * C708) * C1160) *
               C63 * C57 * C1618 +
           ((C159 * C1620 + C62 * C1717) * C1160 +
            (C159 * C1623 + C62 * C1719) * C5320) *
               C63 * C57 * C1619) *
              C5507 +
          (((C159 * C1351 + C62 * C1445) * C1160 +
            (C159 * C1354 + C62 * C1447) * C5320) *
               C63 * C57 * C1618 -
           ((C159 * C321 + C62 * C424) * C5320 +
            (C159 * C318 + C62 * C422) * C1160) *
               C63 * C57 * C1617 -
           ((C159 * C1890 + C62 * C1976) * C5320 +
            (C159 * C1889 + C62 * C1975) * C1160) *
               C63 * C57 * C1619) *
              C5377)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[7] += (-std::pow(Pi, 2.5) *
                  ((C159 * C71 + C62 * C160) * C1183 +
                   (C159 * C106 + C62 * C186) * C1156 -
                   (C159 * C318 + C62 * C422) * C1184 -
                   (C159 * C357 + C62 * C453) * C1157 +
                   (C159 * C894 + C62 * C991) * C1185 +
                   (C159 * C931 + C62 * C1021) * C1158 -
                   (C159 * C1161 + C62 * C1227) * C1186 -
                   (C159 * C1187 + C62 * C1247) * C1159) *
                  C63 * C57 * C5320 * C5389) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C355 +
                    (C159 * C106 + C62 * C186) * C5507 -
                    (C159 * C318 + C62 * C422) * C356 -
                    (C159 * C357 + C62 * C453) * C5377) *
                       C63 * C57 * C309 +
                   ((C159 * C317 + C62 * C421) * C356 -
                    ((C159 * C107 + C62 * C187) * C5507 +
                     (C159 * C72 + C62 * C161) * C355) +
                    (C159 * C358 + C62 * C454) * C5377) *
                       C63 * C57 * C310 +
                   ((C159 * C73 + C62 * C162) * C355 +
                    (C159 * C108 + C62 * C188) * C5507 -
                    (C159 * C319 + C62 * C423) * C356 -
                    (C159 * C359 + C62 * C455) * C5377) *
                       C63 * C57 * C311) *
                  C5389) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C355 +
                    (C159 * C106 + C62 * C186) * C5507 -
                    (C159 * C318 + C62 * C422) * C356 -
                    (C159 * C357 + C62 * C453) * C5377) *
                       C63 * C57 * C5320 * C1617 +
                   ((C159 * C1351 + C62 * C1445) * C356 -
                    ((C159 * C642 + C62 * C740) * C5507 +
                     (C159 * C604 + C62 * C708) * C355) +
                    (C159 * C1385 + C62 * C1475) * C5377) *
                       C63 * C57 * C5320 * C1618 +
                   ((C159 * C1620 + C62 * C1717) * C355 +
                    (C159 * C1654 + C62 * C1747) * C5507 -
                    (C159 * C1889 + C62 * C1975) * C356 -
                    (C159 * C1919 + C62 * C2003) * C5377) *
                       C63 * C57 * C5320 * C1619)) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[7] += (-std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C132 +
                    (C159 * C133 + C62 * C208) * C5389) *
                       C63 * C57 * C1156 -
                   ((C159 * C389 + C62 * C482) * C5389 +
                    (C159 * C318 + C62 * C422) * C132) *
                       C63 * C57 * C1157 +
                   ((C159 * C894 + C62 * C991) * C132 +
                    (C159 * C961 + C62 * C1049) * C5389) *
                       C63 * C57 * C1158 -
                   ((C159 * C1207 + C62 * C1266) * C5389 +
                    (C159 * C1161 + C62 * C1227) * C132) *
                       C63 * C57 * C1159) *
                  C5320) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) * ((((C159 * C71 + C62 * C160) * C132 +
                                         (C159 * C133 + C62 * C208) * C5389) *
                                            C63 * C57 * C5507 -
                                        ((C159 * C389 + C62 * C482) * C5389 +
                                         (C159 * C318 + C62 * C422) * C132) *
                                            C63 * C57 * C5377) *
                                           C309 +
                                       (((C159 * C317 + C62 * C421) * C132 +
                                         (C159 * C390 + C62 * C483) * C5389) *
                                            C63 * C57 * C5377 -
                                        ((C159 * C134 + C62 * C209) * C5389 +
                                         (C159 * C72 + C62 * C161) * C132) *
                                            C63 * C57 * C5507) *
                                           C310 +
                                       (((C159 * C73 + C62 * C162) * C132 +
                                         (C159 * C135 + C62 * C210) * C5389) *
                                            C63 * C57 * C5507 -
                                        ((C159 * C391 + C62 * C484) * C5389 +
                                         (C159 * C319 + C62 * C423) * C132) *
                                            C63 * C57 * C5377) *
                                           C311)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C1684 +
                    (C159 * C133 + C62 * C208) * C1617 -
                    (C159 * C604 + C62 * C708) * C1685 -
                    (C159 * C675 + C62 * C768) * C1618 +
                    (C159 * C1620 + C62 * C1717) * C1686 +
                    (C159 * C1687 + C62 * C1775) * C1619) *
                       C63 * C57 * C5507 +
                   ((C159 * C1351 + C62 * C1445) * C1685 -
                    ((C159 * C389 + C62 * C482) * C1617 +
                     (C159 * C318 + C62 * C422) * C1684) +
                    (C159 * C1415 + C62 * C1503) * C1618 -
                    (C159 * C1889 + C62 * C1975) * C1686 -
                    (C159 * C1947 + C62 * C2030) * C1619) *
                       C63 * C57 * C5377) *
                  C5320) /
                     (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (-std::pow(Pi, 2.5) * (((C230 * C71 + C63 * C231) * C1160 +
                                (C230 * C76 + C63 * C235) * C5320) *
                                   C57 * C62 * C5389 * C1156 -
                               ((C230 * C321 + C63 * C514) * C5320 +
                                (C230 * C318 + C63 * C512) * C1160) *
                                   C57 * C62 * C5389 * C1157 +
                               ((C230 * C894 + C63 * C1077) * C1160 +
                                (C230 * C897 + C63 * C1079) * C5320) *
                                   C57 * C62 * C5389 * C1158 -
                               ((C230 * C1162 + C63 * C1286) * C5320 +
                                (C230 * C1161 + C63 * C1285) * C1160) *
                                   C57 * C62 * C5389 * C1159)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C230 * C71 + C63 * C231) * C314 + (C230 * C76 + C63 * C235) * C309 -
           (C230 * C72 + C63 * C232) * C315 - (C230 * C78 + C63 * C236) * C310 +
           (C230 * C73 + C63 * C233) * C316 +
           (C230 * C80 + C63 * C237) * C311) *
              C57 * C62 * C5389 * C5507 +
          ((C230 * C317 + C63 * C511) * C315 -
           ((C230 * C321 + C63 * C514) * C309 +
            (C230 * C318 + C63 * C512) * C314) +
           (C230 * C323 + C63 * C515) * C310 -
           (C230 * C319 + C63 * C513) * C316 -
           (C230 * C325 + C63 * C516) * C311) *
              C57 * C62 * C5389 * C5377)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C230 * C71 + C63 * C231) * C1160 +
            (C230 * C76 + C63 * C235) * C5320) *
               C57 * C62 * C1617 -
           ((C230 * C607 + C63 * C800) * C5320 +
            (C230 * C604 + C63 * C798) * C1160) *
               C57 * C62 * C1618 +
           ((C230 * C1620 + C63 * C1803) * C1160 +
            (C230 * C1623 + C63 * C1805) * C5320) *
               C57 * C62 * C1619) *
              C5507 +
          (((C230 * C1351 + C63 * C1531) * C1160 +
            (C230 * C1354 + C63 * C1533) * C5320) *
               C57 * C62 * C1618 -
           ((C230 * C321 + C63 * C514) * C5320 +
            (C230 * C318 + C63 * C512) * C1160) *
               C57 * C62 * C1617 -
           ((C230 * C1890 + C63 * C2058) * C5320 +
            (C230 * C1889 + C63 * C2057) * C1160) *
               C57 * C62 * C1619) *
              C5377)) /
            (p * q * std::sqrt(p + q));
    d2eezy[7] += (-std::pow(Pi, 2.5) *
                  ((C230 * C71 + C63 * C231) * C1183 +
                   (C230 * C106 + C63 * C257) * C1156 -
                   (C230 * C318 + C63 * C512) * C1184 -
                   (C230 * C357 + C63 * C543) * C1157 +
                   (C230 * C894 + C63 * C1077) * C1185 +
                   (C230 * C931 + C63 * C1107) * C1158 -
                   (C230 * C1161 + C63 * C1285) * C1186 -
                   (C230 * C1187 + C63 * C1305) * C1159) *
                  C57 * C62 * C5320 * C5389) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C355 +
                    (C230 * C106 + C63 * C257) * C5507 -
                    (C230 * C318 + C63 * C512) * C356 -
                    (C230 * C357 + C63 * C543) * C5377) *
                       C57 * C62 * C309 +
                   ((C230 * C317 + C63 * C511) * C356 -
                    ((C230 * C107 + C63 * C258) * C5507 +
                     (C230 * C72 + C63 * C232) * C355) +
                    (C230 * C358 + C63 * C544) * C5377) *
                       C57 * C62 * C310 +
                   ((C230 * C73 + C63 * C233) * C355 +
                    (C230 * C108 + C63 * C259) * C5507 -
                    (C230 * C319 + C63 * C513) * C356 -
                    (C230 * C359 + C63 * C545) * C5377) *
                       C57 * C62 * C311) *
                  C5389) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C355 +
                    (C230 * C106 + C63 * C257) * C5507 -
                    (C230 * C318 + C63 * C512) * C356 -
                    (C230 * C357 + C63 * C543) * C5377) *
                       C57 * C62 * C5320 * C1617 +
                   ((C230 * C1351 + C63 * C1531) * C356 -
                    ((C230 * C642 + C63 * C830) * C5507 +
                     (C230 * C604 + C63 * C798) * C355) +
                    (C230 * C1385 + C63 * C1561) * C5377) *
                       C57 * C62 * C5320 * C1618 +
                   ((C230 * C1620 + C63 * C1803) * C355 +
                    (C230 * C1654 + C63 * C1833) * C5507 -
                    (C230 * C1889 + C63 * C2057) * C356 -
                    (C230 * C1919 + C63 * C2085) * C5377) *
                       C57 * C62 * C5320 * C1619)) /
                     (p * q * std::sqrt(p + q));
    d2eezz[7] += (-std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C132 +
                    (C230 * C133 + C63 * C279) * C5389) *
                       C57 * C62 * C1156 -
                   ((C230 * C389 + C63 * C572) * C5389 +
                    (C230 * C318 + C63 * C512) * C132) *
                       C57 * C62 * C1157 +
                   ((C230 * C894 + C63 * C1077) * C132 +
                    (C230 * C961 + C63 * C1135) * C5389) *
                       C57 * C62 * C1158 -
                   ((C230 * C1207 + C63 * C1324) * C5389 +
                    (C230 * C1161 + C63 * C1285) * C132) *
                       C57 * C62 * C1159) *
                  C5320) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) * ((((C230 * C71 + C63 * C231) * C132 +
                                         (C230 * C133 + C63 * C279) * C5389) *
                                            C57 * C62 * C5507 -
                                        ((C230 * C389 + C63 * C572) * C5389 +
                                         (C230 * C318 + C63 * C512) * C132) *
                                            C57 * C62 * C5377) *
                                           C309 +
                                       (((C230 * C317 + C63 * C511) * C132 +
                                         (C230 * C390 + C63 * C573) * C5389) *
                                            C57 * C62 * C5377 -
                                        ((C230 * C134 + C63 * C280) * C5389 +
                                         (C230 * C72 + C63 * C232) * C132) *
                                            C57 * C62 * C5507) *
                                           C310 +
                                       (((C230 * C73 + C63 * C233) * C132 +
                                         (C230 * C135 + C63 * C281) * C5389) *
                                            C57 * C62 * C5507 -
                                        ((C230 * C391 + C63 * C574) * C5389 +
                                         (C230 * C319 + C63 * C513) * C132) *
                                            C57 * C62 * C5377) *
                                           C311)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C1684 +
                    (C230 * C133 + C63 * C279) * C1617 -
                    (C230 * C604 + C63 * C798) * C1685 -
                    (C230 * C675 + C63 * C858) * C1618 +
                    (C230 * C1620 + C63 * C1803) * C1686 +
                    (C230 * C1687 + C63 * C1861) * C1619) *
                       C57 * C62 * C5507 +
                   ((C230 * C1351 + C63 * C1531) * C1685 -
                    ((C230 * C389 + C63 * C572) * C1617 +
                     (C230 * C318 + C63 * C512) * C1684) +
                    (C230 * C1415 + C63 * C1589) * C1618 -
                    (C230 * C1889 + C63 * C2057) * C1686 -
                    (C230 * C1947 + C63 * C2112) * C1619) *
                       C57 * C62 * C5377) *
                  C5320) /
                     (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (-std::pow(Pi, 2.5) *
         ((((C66 * C71 + C57 * C75) * C1160 + (C66 * C76 + C57 * C83) * C5320) *
               C62 * C63 * C5508 -
           ((C66 * C607 + C57 * C612) * C5320 +
            (C66 * C604 + C57 * C608) * C1160) *
               C62 * C63 * C5401) *
              C889 +
          (((C66 * C1351 + C57 * C1353) * C1160 +
            (C66 * C1354 + C57 * C1357) * C5320) *
               C62 * C63 * C5401 -
           ((C66 * C321 + C57 * C326) * C5320 +
            (C66 * C318 + C57 * C322) * C1160) *
               C62 * C63 * C5508) *
              C890 +
          (((C66 * C894 + C57 * C896) * C1160 +
            (C66 * C897 + C57 * C900) * C5320) *
               C62 * C63 * C5508 -
           ((C66 * C1355 + C57 * C1358) * C5320 +
            (C66 * C1352 + C57 * C1356) * C1160) *
               C62 * C63 * C5401) *
              C891)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C314 + (C66 * C76 + C57 * C83) * C309 -
           (C66 * C72 + C57 * C77) * C315 - (C66 * C78 + C57 * C84) * C310 +
           (C66 * C73 + C57 * C79) * C316 + (C66 * C80 + C57 * C85) * C311) *
              C62 * C63 * C5508 +
          ((C66 * C603 + C57 * C606) * C315 -
           ((C66 * C607 + C57 * C612) * C309 +
            (C66 * C604 + C57 * C608) * C314) +
           (C66 * C609 + C57 * C613) * C310 - (C66 * C605 + C57 * C610) * C316 -
           (C66 * C611 + C57 * C614) * C311) *
              C62 * C63 * C5401) *
         C5363) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C1160 + (C66 * C76 + C57 * C83) * C5320) *
              C62 * C63 * C2131 -
          ((C66 * C607 + C57 * C612) * C5320 +
           (C66 * C604 + C57 * C608) * C1160) *
              C62 * C63 * C2132 +
          ((C66 * C1620 + C57 * C1622) * C1160 +
           (C66 * C1623 + C57 * C1626) * C5320) *
              C62 * C63 * C2133 -
          ((C66 * C2136 + C57 * C2138) * C5320 +
           (C66 * C2135 + C57 * C2137) * C1160) *
              C62 * C63 * C2134) *
         C5363) /
            (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (-std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C928 + (C66 * C106 + C57 * C110) * C889 -
           (C66 * C318 + C57 * C322) * C929 - (C66 * C357 + C57 * C360) * C890 +
           (C66 * C894 + C57 * C896) * C930 +
           (C66 * C931 + C57 * C933) * C891) *
              C62 * C63 * C5320 * C5508 +
          ((C66 * C1351 + C57 * C1353) * C929 -
           ((C66 * C642 + C57 * C645) * C889 +
            (C66 * C604 + C57 * C608) * C928) +
           (C66 * C1385 + C57 * C1387) * C890 -
           (C66 * C1352 + C57 * C1356) * C930 -
           (C66 * C1386 + C57 * C1388) * C891) *
              C62 * C63 * C5320 * C5401)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C66 * C71 + C57 * C75) * C105 +
                                (C66 * C106 + C57 * C110) * C5363) *
                                   C62 * C63 * C309 -
                               ((C66 * C107 + C57 * C111) * C5363 +
                                (C66 * C72 + C57 * C77) * C105) *
                                   C62 * C63 * C310 +
                               ((C66 * C73 + C57 * C79) * C105 +
                                (C66 * C108 + C57 * C112) * C5363) *
                                   C62 * C63 * C311) *
                                  C5508 +
                              (((C66 * C603 + C57 * C606) * C105 +
                                (C66 * C641 + C57 * C644) * C5363) *
                                   C62 * C63 * C310 -
                               ((C66 * C642 + C57 * C645) * C5363 +
                                (C66 * C604 + C57 * C608) * C105) *
                                   C62 * C63 * C309 -
                               ((C66 * C643 + C57 * C646) * C5363 +
                                (C66 * C605 + C57 * C610) * C105) *
                                   C62 * C63 * C311) *
                                  C5401)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C105 + (C66 * C106 + C57 * C110) * C5363) *
              C62 * C63 * C5320 * C2131 -
          ((C66 * C642 + C57 * C645) * C5363 +
           (C66 * C604 + C57 * C608) * C105) *
              C62 * C63 * C5320 * C2132 +
          ((C66 * C1620 + C57 * C1622) * C105 +
           (C66 * C1654 + C57 * C1656) * C5363) *
              C62 * C63 * C5320 * C2133 -
          ((C66 * C2157 + C57 * C2158) * C5363 +
           (C66 * C2135 + C57 * C2137) * C105) *
              C62 * C63 * C5320 * C2134)) /
            (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (-std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C673 + (C66 * C133 + C57 * C137) * C5508 -
           (C66 * C604 + C57 * C608) * C674 -
           (C66 * C675 + C57 * C678) * C5401) *
              C62 * C63 * C889 +
          ((C66 * C1351 + C57 * C1353) * C674 -
           ((C66 * C389 + C57 * C392) * C5508 +
            (C66 * C318 + C57 * C322) * C673) +
           (C66 * C1415 + C57 * C1417) * C5401) *
              C62 * C63 * C890 +
          ((C66 * C894 + C57 * C896) * C673 +
           (C66 * C961 + C57 * C963) * C5508 -
           (C66 * C1352 + C57 * C1356) * C674 -
           (C66 * C1416 + C57 * C1418) * C5401) *
              C62 * C63 * C891) *
         C5320) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C673 + (C66 * C133 + C57 * C137) * C5508 -
           (C66 * C604 + C57 * C608) * C674 -
           (C66 * C675 + C57 * C678) * C5401) *
              C62 * C63 * C5363 * C309 +
          ((C66 * C603 + C57 * C606) * C674 -
           ((C66 * C134 + C57 * C138) * C5508 +
            (C66 * C72 + C57 * C77) * C673) +
           (C66 * C676 + C57 * C679) * C5401) *
              C62 * C63 * C5363 * C310 +
          ((C66 * C73 + C57 * C79) * C673 + (C66 * C135 + C57 * C139) * C5508 -
           (C66 * C605 + C57 * C610) * C674 -
           (C66 * C677 + C57 * C680) * C5401) *
              C62 * C63 * C5363 * C311)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C66 * C71 + C57 * C75) * C2177 + (C66 * C133 + C57 * C137) * C2131 -
          (C66 * C604 + C57 * C608) * C2178 -
          (C66 * C675 + C57 * C678) * C2132 +
          (C66 * C1620 + C57 * C1622) * C2179 +
          (C66 * C1687 + C57 * C1689) * C2133 -
          (C66 * C2135 + C57 * C2137) * C2180 -
          (C66 * C2181 + C57 * C2182) * C2134) *
         C62 * C63 * C5363 * C5320) /
            (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (-std::pow(Pi, 2.5) * ((((C159 * C71 + C62 * C160) * C1160 +
                                 (C159 * C76 + C62 * C164) * C5320) *
                                    C63 * C57 * C5508 -
                                ((C159 * C607 + C62 * C710) * C5320 +
                                 (C159 * C604 + C62 * C708) * C1160) *
                                    C63 * C57 * C5401) *
                                   C889 +
                               (((C159 * C1351 + C62 * C1445) * C1160 +
                                 (C159 * C1354 + C62 * C1447) * C5320) *
                                    C63 * C57 * C5401 -
                                ((C159 * C321 + C62 * C424) * C5320 +
                                 (C159 * C318 + C62 * C422) * C1160) *
                                    C63 * C57 * C5508) *
                                   C890 +
                               (((C159 * C894 + C62 * C991) * C1160 +
                                 (C159 * C897 + C62 * C993) * C5320) *
                                    C63 * C57 * C5508 -
                                ((C159 * C1355 + C62 * C1448) * C5320 +
                                 (C159 * C1352 + C62 * C1446) * C1160) *
                                    C63 * C57 * C5401) *
                                   C891)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C159 * C71 + C62 * C160) * C314 + (C159 * C76 + C62 * C164) * C309 -
           (C159 * C72 + C62 * C161) * C315 - (C159 * C78 + C62 * C165) * C310 +
           (C159 * C73 + C62 * C162) * C316 +
           (C159 * C80 + C62 * C166) * C311) *
              C63 * C57 * C5508 +
          ((C159 * C603 + C62 * C707) * C315 -
           ((C159 * C607 + C62 * C710) * C309 +
            (C159 * C604 + C62 * C708) * C314) +
           (C159 * C609 + C62 * C711) * C310 -
           (C159 * C605 + C62 * C709) * C316 -
           (C159 * C611 + C62 * C712) * C311) *
              C63 * C57 * C5401) *
         C5363) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C159 * C71 + C62 * C160) * C1160 +
           (C159 * C76 + C62 * C164) * C5320) *
              C63 * C57 * C2131 -
          ((C159 * C607 + C62 * C710) * C5320 +
           (C159 * C604 + C62 * C708) * C1160) *
              C63 * C57 * C2132 +
          ((C159 * C1620 + C62 * C1717) * C1160 +
           (C159 * C1623 + C62 * C1719) * C5320) *
              C63 * C57 * C2133 -
          ((C159 * C2136 + C62 * C2202) * C5320 +
           (C159 * C2135 + C62 * C2201) * C1160) *
              C63 * C57 * C2134) *
         C5363) /
            (p * q * std::sqrt(p + q));
    d2eeyy[8] += (-std::pow(Pi, 2.5) * (((C159 * C71 + C62 * C160) * C928 +
                                         (C159 * C106 + C62 * C186) * C889 -
                                         (C159 * C318 + C62 * C422) * C929 -
                                         (C159 * C357 + C62 * C453) * C890 +
                                         (C159 * C894 + C62 * C991) * C930 +
                                         (C159 * C931 + C62 * C1021) * C891) *
                                            C63 * C57 * C5320 * C5508 +
                                        ((C159 * C1351 + C62 * C1445) * C929 -
                                         ((C159 * C642 + C62 * C740) * C889 +
                                          (C159 * C604 + C62 * C708) * C928) +
                                         (C159 * C1385 + C62 * C1475) * C890 -
                                         (C159 * C1352 + C62 * C1446) * C930 -
                                         (C159 * C1386 + C62 * C1476) * C891) *
                                            C63 * C57 * C5320 * C5401)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) * ((((C159 * C71 + C62 * C160) * C105 +
                                         (C159 * C106 + C62 * C186) * C5363) *
                                            C63 * C57 * C309 -
                                        ((C159 * C107 + C62 * C187) * C5363 +
                                         (C159 * C72 + C62 * C161) * C105) *
                                            C63 * C57 * C310 +
                                        ((C159 * C73 + C62 * C162) * C105 +
                                         (C159 * C108 + C62 * C188) * C5363) *
                                            C63 * C57 * C311) *
                                           C5508 +
                                       (((C159 * C603 + C62 * C707) * C105 +
                                         (C159 * C641 + C62 * C739) * C5363) *
                                            C63 * C57 * C310 -
                                        ((C159 * C642 + C62 * C740) * C5363 +
                                         (C159 * C604 + C62 * C708) * C105) *
                                            C63 * C57 * C309 -
                                        ((C159 * C643 + C62 * C741) * C5363 +
                                         (C159 * C605 + C62 * C709) * C105) *
                                            C63 * C57 * C311) *
                                           C5401)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C105 +
                    (C159 * C106 + C62 * C186) * C5363) *
                       C63 * C57 * C5320 * C2131 -
                   ((C159 * C642 + C62 * C740) * C5363 +
                    (C159 * C604 + C62 * C708) * C105) *
                       C63 * C57 * C5320 * C2132 +
                   ((C159 * C1620 + C62 * C1717) * C105 +
                    (C159 * C1654 + C62 * C1747) * C5363) *
                       C63 * C57 * C5320 * C2133 -
                   ((C159 * C2157 + C62 * C2221) * C5363 +
                    (C159 * C2135 + C62 * C2201) * C105) *
                       C63 * C57 * C5320 * C2134)) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[8] += (-std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C673 +
                    (C159 * C133 + C62 * C208) * C5508 -
                    (C159 * C604 + C62 * C708) * C674 -
                    (C159 * C675 + C62 * C768) * C5401) *
                       C63 * C57 * C889 +
                   ((C159 * C1351 + C62 * C1445) * C674 -
                    ((C159 * C389 + C62 * C482) * C5508 +
                     (C159 * C318 + C62 * C422) * C673) +
                    (C159 * C1415 + C62 * C1503) * C5401) *
                       C63 * C57 * C890 +
                   ((C159 * C894 + C62 * C991) * C673 +
                    (C159 * C961 + C62 * C1049) * C5508 -
                    (C159 * C1352 + C62 * C1446) * C674 -
                    (C159 * C1416 + C62 * C1504) * C5401) *
                       C63 * C57 * C891) *
                  C5320) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) * (((C159 * C71 + C62 * C160) * C673 +
                                        (C159 * C133 + C62 * C208) * C5508 -
                                        (C159 * C604 + C62 * C708) * C674 -
                                        (C159 * C675 + C62 * C768) * C5401) *
                                           C63 * C57 * C5363 * C309 +
                                       ((C159 * C603 + C62 * C707) * C674 -
                                        ((C159 * C134 + C62 * C209) * C5508 +
                                         (C159 * C72 + C62 * C161) * C673) +
                                        (C159 * C676 + C62 * C769) * C5401) *
                                           C63 * C57 * C5363 * C310 +
                                       ((C159 * C73 + C62 * C162) * C673 +
                                        (C159 * C135 + C62 * C210) * C5508 -
                                        (C159 * C605 + C62 * C709) * C674 -
                                        (C159 * C677 + C62 * C770) * C5401) *
                                           C63 * C57 * C5363 * C311)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C159 * C71 + C62 * C160) * C2177 +
                   (C159 * C133 + C62 * C208) * C2131 -
                   (C159 * C604 + C62 * C708) * C2178 -
                   (C159 * C675 + C62 * C768) * C2132 +
                   (C159 * C1620 + C62 * C1717) * C2179 +
                   (C159 * C1687 + C62 * C1775) * C2133 -
                   (C159 * C2135 + C62 * C2201) * C2180 -
                   (C159 * C2181 + C62 * C2240) * C2134) *
                  C63 * C57 * C5363 * C5320) /
                     (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (-std::pow(Pi, 2.5) * ((((C230 * C71 + C63 * C231) * C1160 +
                                 (C230 * C76 + C63 * C235) * C5320) *
                                    C57 * C62 * C5508 -
                                ((C230 * C607 + C63 * C800) * C5320 +
                                 (C230 * C604 + C63 * C798) * C1160) *
                                    C57 * C62 * C5401) *
                                   C889 +
                               (((C230 * C1351 + C63 * C1531) * C1160 +
                                 (C230 * C1354 + C63 * C1533) * C5320) *
                                    C57 * C62 * C5401 -
                                ((C230 * C321 + C63 * C514) * C5320 +
                                 (C230 * C318 + C63 * C512) * C1160) *
                                    C57 * C62 * C5508) *
                                   C890 +
                               (((C230 * C894 + C63 * C1077) * C1160 +
                                 (C230 * C897 + C63 * C1079) * C5320) *
                                    C57 * C62 * C5508 -
                                ((C230 * C1355 + C63 * C1534) * C5320 +
                                 (C230 * C1352 + C63 * C1532) * C1160) *
                                    C57 * C62 * C5401) *
                                   C891)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C230 * C71 + C63 * C231) * C314 + (C230 * C76 + C63 * C235) * C309 -
           (C230 * C72 + C63 * C232) * C315 - (C230 * C78 + C63 * C236) * C310 +
           (C230 * C73 + C63 * C233) * C316 +
           (C230 * C80 + C63 * C237) * C311) *
              C57 * C62 * C5508 +
          ((C230 * C603 + C63 * C797) * C315 -
           ((C230 * C607 + C63 * C800) * C309 +
            (C230 * C604 + C63 * C798) * C314) +
           (C230 * C609 + C63 * C801) * C310 -
           (C230 * C605 + C63 * C799) * C316 -
           (C230 * C611 + C63 * C802) * C311) *
              C57 * C62 * C5401) *
         C5363) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C230 * C71 + C63 * C231) * C1160 +
           (C230 * C76 + C63 * C235) * C5320) *
              C57 * C62 * C2131 -
          ((C230 * C607 + C63 * C800) * C5320 +
           (C230 * C604 + C63 * C798) * C1160) *
              C57 * C62 * C2132 +
          ((C230 * C1620 + C63 * C1803) * C1160 +
           (C230 * C1623 + C63 * C1805) * C5320) *
              C57 * C62 * C2133 -
          ((C230 * C2136 + C63 * C2260) * C5320 +
           (C230 * C2135 + C63 * C2259) * C1160) *
              C57 * C62 * C2134) *
         C5363) /
            (p * q * std::sqrt(p + q));
    d2eezy[8] += (-std::pow(Pi, 2.5) * (((C230 * C71 + C63 * C231) * C928 +
                                         (C230 * C106 + C63 * C257) * C889 -
                                         (C230 * C318 + C63 * C512) * C929 -
                                         (C230 * C357 + C63 * C543) * C890 +
                                         (C230 * C894 + C63 * C1077) * C930 +
                                         (C230 * C931 + C63 * C1107) * C891) *
                                            C57 * C62 * C5320 * C5508 +
                                        ((C230 * C1351 + C63 * C1531) * C929 -
                                         ((C230 * C642 + C63 * C830) * C889 +
                                          (C230 * C604 + C63 * C798) * C928) +
                                         (C230 * C1385 + C63 * C1561) * C890 -
                                         (C230 * C1352 + C63 * C1532) * C930 -
                                         (C230 * C1386 + C63 * C1562) * C891) *
                                            C57 * C62 * C5320 * C5401)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) * ((((C230 * C71 + C63 * C231) * C105 +
                                         (C230 * C106 + C63 * C257) * C5363) *
                                            C57 * C62 * C309 -
                                        ((C230 * C107 + C63 * C258) * C5363 +
                                         (C230 * C72 + C63 * C232) * C105) *
                                            C57 * C62 * C310 +
                                        ((C230 * C73 + C63 * C233) * C105 +
                                         (C230 * C108 + C63 * C259) * C5363) *
                                            C57 * C62 * C311) *
                                           C5508 +
                                       (((C230 * C603 + C63 * C797) * C105 +
                                         (C230 * C641 + C63 * C829) * C5363) *
                                            C57 * C62 * C310 -
                                        ((C230 * C642 + C63 * C830) * C5363 +
                                         (C230 * C604 + C63 * C798) * C105) *
                                            C57 * C62 * C309 -
                                        ((C230 * C643 + C63 * C831) * C5363 +
                                         (C230 * C605 + C63 * C799) * C105) *
                                            C57 * C62 * C311) *
                                           C5401)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C105 +
                    (C230 * C106 + C63 * C257) * C5363) *
                       C57 * C62 * C5320 * C2131 -
                   ((C230 * C642 + C63 * C830) * C5363 +
                    (C230 * C604 + C63 * C798) * C105) *
                       C57 * C62 * C5320 * C2132 +
                   ((C230 * C1620 + C63 * C1803) * C105 +
                    (C230 * C1654 + C63 * C1833) * C5363) *
                       C57 * C62 * C5320 * C2133 -
                   ((C230 * C2157 + C63 * C2279) * C5363 +
                    (C230 * C2135 + C63 * C2259) * C105) *
                       C57 * C62 * C5320 * C2134)) /
                     (p * q * std::sqrt(p + q));
    d2eezz[8] += (-std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C673 +
                    (C230 * C133 + C63 * C279) * C5508 -
                    (C230 * C604 + C63 * C798) * C674 -
                    (C230 * C675 + C63 * C858) * C5401) *
                       C57 * C62 * C889 +
                   ((C230 * C1351 + C63 * C1531) * C674 -
                    ((C230 * C389 + C63 * C572) * C5508 +
                     (C230 * C318 + C63 * C512) * C673) +
                    (C230 * C1415 + C63 * C1589) * C5401) *
                       C57 * C62 * C890 +
                   ((C230 * C894 + C63 * C1077) * C673 +
                    (C230 * C961 + C63 * C1135) * C5508 -
                    (C230 * C1352 + C63 * C1532) * C674 -
                    (C230 * C1416 + C63 * C1590) * C5401) *
                       C57 * C62 * C891) *
                  C5320) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) * (((C230 * C71 + C63 * C231) * C673 +
                                        (C230 * C133 + C63 * C279) * C5508 -
                                        (C230 * C604 + C63 * C798) * C674 -
                                        (C230 * C675 + C63 * C858) * C5401) *
                                           C57 * C62 * C5363 * C309 +
                                       ((C230 * C603 + C63 * C797) * C674 -
                                        ((C230 * C134 + C63 * C280) * C5508 +
                                         (C230 * C72 + C63 * C232) * C673) +
                                        (C230 * C676 + C63 * C859) * C5401) *
                                           C57 * C62 * C5363 * C310 +
                                       ((C230 * C73 + C63 * C233) * C673 +
                                        (C230 * C135 + C63 * C281) * C5508 -
                                        (C230 * C605 + C63 * C799) * C674 -
                                        (C230 * C677 + C63 * C860) * C5401) *
                                           C57 * C62 * C5363 * C311)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C230 * C71 + C63 * C231) * C2177 +
                   (C230 * C133 + C63 * C279) * C2131 -
                   (C230 * C604 + C63 * C798) * C2178 -
                   (C230 * C675 + C63 * C858) * C2132 +
                   (C230 * C1620 + C63 * C1803) * C2179 +
                   (C230 * C1687 + C63 * C1861) * C2133 -
                   (C230 * C2135 + C63 * C2259) * C2180 -
                   (C230 * C2181 + C63 * C2298) * C2134) *
                  C57 * C62 * C5363 * C5320) /
                     (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C2330 + (C66 * C76 + C57 * C83) * C5528 -
           (C66 * C72 + C57 * C77) * C2331 - (C66 * C78 + C57 * C84) * C5521 +
           (C66 * C73 + C57 * C79) * C2332 + (C66 * C80 + C57 * C85) * C2327) *
              C62 * C63 * C3135 +
          ((C66 * C603 + C57 * C606) * C2331 -
           ((C66 * C607 + C57 * C612) * C5528 +
            (C66 * C604 + C57 * C608) * C2330) +
           (C66 * C609 + C57 * C613) * C5521 -
           (C66 * C605 + C57 * C610) * C2332 -
           (C66 * C611 + C57 * C614) * C2327) *
              C62 * C63 * C5401) *
         C5363) /
        (p * q * std::sqrt(p + q));
    d2eexy[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C66 * C71 + C57 * C75) * C105 +
                     (C66 * C106 + C57 * C110) * C5363) *
                        C62 * C63 * C5528 -
                    ((C66 * C107 + C57 * C111) * C5363 +
                     (C66 * C72 + C57 * C77) * C105) *
                        C62 * C63 * C5521 +
                    ((C66 * C73 + C57 * C79) * C105 +
                     (C66 * C108 + C57 * C112) * C5363) *
                        C62 * C63 * C2327) *
                       C3135 +
                   (((C66 * C603 + C57 * C606) * C105 +
                     (C66 * C641 + C57 * C644) * C5363) *
                        C62 * C63 * C5521 -
                    ((C66 * C642 + C57 * C645) * C5363 +
                     (C66 * C604 + C57 * C608) * C105) *
                        C62 * C63 * C5528 -
                    ((C66 * C643 + C57 * C646) * C5363 +
                     (C66 * C605 + C57 * C610) * C105) *
                        C62 * C63 * C2327) *
                       C5401)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C3189 + (C66 * C133 + C57 * C137) * C3135 -
           (C66 * C604 + C57 * C608) * C3190 -
           (C66 * C675 + C57 * C678) * C5401) *
              C62 * C63 * C5363 * C5528 +
          ((C66 * C603 + C57 * C606) * C3190 -
           ((C66 * C134 + C57 * C138) * C3135 +
            (C66 * C72 + C57 * C77) * C3189) +
           (C66 * C676 + C57 * C679) * C5401) *
              C62 * C63 * C5363 * C5521 +
          ((C66 * C73 + C57 * C79) * C3189 + (C66 * C135 + C57 * C139) * C3135 -
           (C66 * C605 + C57 * C610) * C3190 -
           (C66 * C677 + C57 * C680) * C5401) *
              C62 * C63 * C5363 * C2327)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C2330 +
                    (C159 * C76 + C62 * C164) * C5528 -
                    (C159 * C72 + C62 * C161) * C2331 -
                    (C159 * C78 + C62 * C165) * C5521 +
                    (C159 * C73 + C62 * C162) * C2332 +
                    (C159 * C80 + C62 * C166) * C2327) *
                       C63 * C57 * C3135 +
                   ((C159 * C603 + C62 * C707) * C2331 -
                    ((C159 * C607 + C62 * C710) * C5528 +
                     (C159 * C604 + C62 * C708) * C2330) +
                    (C159 * C609 + C62 * C711) * C5521 -
                    (C159 * C605 + C62 * C709) * C2332 -
                    (C159 * C611 + C62 * C712) * C2327) *
                       C63 * C57 * C5401) *
                  C5363) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C159 * C71 + C62 * C160) * C105 +
                     (C159 * C106 + C62 * C186) * C5363) *
                        C63 * C57 * C5528 -
                    ((C159 * C107 + C62 * C187) * C5363 +
                     (C159 * C72 + C62 * C161) * C105) *
                        C63 * C57 * C5521 +
                    ((C159 * C73 + C62 * C162) * C105 +
                     (C159 * C108 + C62 * C188) * C5363) *
                        C63 * C57 * C2327) *
                       C3135 +
                   (((C159 * C603 + C62 * C707) * C105 +
                     (C159 * C641 + C62 * C739) * C5363) *
                        C63 * C57 * C5521 -
                    ((C159 * C642 + C62 * C740) * C5363 +
                     (C159 * C604 + C62 * C708) * C105) *
                        C63 * C57 * C5528 -
                    ((C159 * C643 + C62 * C741) * C5363 +
                     (C159 * C605 + C62 * C709) * C105) *
                        C63 * C57 * C2327) *
                       C5401)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C159 * C71 + C62 * C160) * C3189 +
                    (C159 * C133 + C62 * C208) * C3135 -
                    (C159 * C604 + C62 * C708) * C3190 -
                    (C159 * C675 + C62 * C768) * C5401) *
                       C63 * C57 * C5363 * C5528 +
                   ((C159 * C603 + C62 * C707) * C3190 -
                    ((C159 * C134 + C62 * C209) * C3135 +
                     (C159 * C72 + C62 * C161) * C3189) +
                    (C159 * C676 + C62 * C769) * C5401) *
                       C63 * C57 * C5363 * C5521 +
                   ((C159 * C73 + C62 * C162) * C3189 +
                    (C159 * C135 + C62 * C210) * C3135 -
                    (C159 * C605 + C62 * C709) * C3190 -
                    (C159 * C677 + C62 * C770) * C5401) *
                       C63 * C57 * C5363 * C2327)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C2330 +
                    (C230 * C76 + C63 * C235) * C5528 -
                    (C230 * C72 + C63 * C232) * C2331 -
                    (C230 * C78 + C63 * C236) * C5521 +
                    (C230 * C73 + C63 * C233) * C2332 +
                    (C230 * C80 + C63 * C237) * C2327) *
                       C57 * C62 * C3135 +
                   ((C230 * C603 + C63 * C797) * C2331 -
                    ((C230 * C607 + C63 * C800) * C5528 +
                     (C230 * C604 + C63 * C798) * C2330) +
                    (C230 * C609 + C63 * C801) * C5521 -
                    (C230 * C605 + C63 * C799) * C2332 -
                    (C230 * C611 + C63 * C802) * C2327) *
                       C57 * C62 * C5401) *
                  C5363) /
                 (p * q * std::sqrt(p + q));
    d2eezy[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C230 * C71 + C63 * C231) * C105 +
                     (C230 * C106 + C63 * C257) * C5363) *
                        C57 * C62 * C5528 -
                    ((C230 * C107 + C63 * C258) * C5363 +
                     (C230 * C72 + C63 * C232) * C105) *
                        C57 * C62 * C5521 +
                    ((C230 * C73 + C63 * C233) * C105 +
                     (C230 * C108 + C63 * C259) * C5363) *
                        C57 * C62 * C2327) *
                       C3135 +
                   (((C230 * C603 + C63 * C797) * C105 +
                     (C230 * C641 + C63 * C829) * C5363) *
                        C57 * C62 * C5521 -
                    ((C230 * C642 + C63 * C830) * C5363 +
                     (C230 * C604 + C63 * C798) * C105) *
                        C57 * C62 * C5528 -
                    ((C230 * C643 + C63 * C831) * C5363 +
                     (C230 * C605 + C63 * C799) * C105) *
                        C57 * C62 * C2327) *
                       C5401)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C230 * C71 + C63 * C231) * C3189 +
                    (C230 * C133 + C63 * C279) * C3135 -
                    (C230 * C604 + C63 * C798) * C3190 -
                    (C230 * C675 + C63 * C858) * C5401) *
                       C57 * C62 * C5363 * C5528 +
                   ((C230 * C603 + C63 * C797) * C3190 -
                    ((C230 * C134 + C63 * C280) * C3135 +
                     (C230 * C72 + C63 * C232) * C3189) +
                    (C230 * C676 + C63 * C859) * C5401) *
                       C57 * C62 * C5363 * C5521 +
                   ((C230 * C73 + C63 * C233) * C3189 +
                    (C230 * C135 + C63 * C281) * C3135 -
                    (C230 * C605 + C63 * C799) * C3190 -
                    (C230 * C677 + C63 * C860) * C5401) *
                       C57 * C62 * C5363 * C2327)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C66 * C71 + C57 * C75) * C2574 + (C66 * C76 + C57 * C83) * C2569 -
            (C66 * C72 + C57 * C77) * C2575 - (C66 * C78 + C57 * C84) * C5325) *
               C62 * C63 * C3135 +
           ((C66 * C603 + C57 * C606) * C2575 -
            ((C66 * C607 + C57 * C612) * C2569 +
             (C66 * C604 + C57 * C608) * C2574) +
            (C66 * C609 + C57 * C613) * C5325) *
               C62 * C63 * C5401) *
              C5507 +
          (((C66 * C317 + C57 * C320) * C2575 -
            ((C66 * C321 + C57 * C326) * C2569 +
             (C66 * C318 + C57 * C322) * C2574) +
            (C66 * C323 + C57 * C327) * C5325) *
               C62 * C63 * C3135 +
           ((C66 * C1351 + C57 * C1353) * C2574 +
            (C66 * C1354 + C57 * C1357) * C2569 -
            (C66 * C2821 + C57 * C2822) * C2575 -
            (C66 * C2823 + C57 * C2824) * C5325) *
               C62 * C63 * C5401) *
              C5377)) /
        (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C66 * C71 + C57 * C75) * C355 + (C66 * C106 + C57 * C110) * C5507 -
            (C66 * C318 + C57 * C322) * C356 -
            (C66 * C357 + C57 * C360) * C5377) *
               C62 * C63 * C2569 +
           ((C66 * C317 + C57 * C320) * C356 -
            ((C66 * C107 + C57 * C111) * C5507 +
             (C66 * C72 + C57 * C77) * C355) +
            (C66 * C358 + C57 * C361) * C5377) *
               C62 * C63 * C5325) *
              C3135 +
          (((C66 * C1351 + C57 * C1353) * C356 -
            ((C66 * C642 + C57 * C645) * C5507 +
             (C66 * C604 + C57 * C608) * C355) +
            (C66 * C1385 + C57 * C1387) * C5377) *
               C62 * C63 * C2569 +
           ((C66 * C603 + C57 * C606) * C355 +
            (C66 * C641 + C57 * C644) * C5507 -
            (C66 * C2821 + C57 * C2822) * C356 -
            (C66 * C2859 + C57 * C2860) * C5377) *
               C62 * C63 * C5325) *
              C5401)) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C66 * C71 + C57 * C75) * C3189 +
                      (C66 * C133 + C57 * C137) * C3135 -
                      (C66 * C604 + C57 * C608) * C3190 -
                      (C66 * C675 + C57 * C678) * C5401) *
                         C62 * C63 * C5507 +
                     ((C66 * C1351 + C57 * C1353) * C3190 -
                      ((C66 * C389 + C57 * C392) * C3135 +
                       (C66 * C318 + C57 * C322) * C3189) +
                      (C66 * C1415 + C57 * C1417) * C5401) *
                         C62 * C63 * C5377) *
                        C2569 +
                    (((C66 * C603 + C57 * C606) * C3190 -
                      ((C66 * C134 + C57 * C138) * C3135 +
                       (C66 * C72 + C57 * C77) * C3189) +
                      (C66 * C676 + C57 * C679) * C5401) *
                         C62 * C63 * C5507 +
                     ((C66 * C317 + C57 * C320) * C3189 +
                      (C66 * C390 + C57 * C393) * C3135 -
                      (C66 * C2821 + C57 * C2822) * C3190 -
                      (C66 * C2895 + C57 * C2896) * C5401) *
                         C62 * C63 * C5377) *
                        C5325)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C159 * C71 + C62 * C160) * C2574 +
                      (C159 * C76 + C62 * C164) * C2569 -
                      (C159 * C72 + C62 * C161) * C2575 -
                      (C159 * C78 + C62 * C165) * C5325) *
                         C63 * C57 * C3135 +
                     ((C159 * C603 + C62 * C707) * C2575 -
                      ((C159 * C607 + C62 * C710) * C2569 +
                       (C159 * C604 + C62 * C708) * C2574) +
                      (C159 * C609 + C62 * C711) * C5325) *
                         C63 * C57 * C5401) *
                        C5507 +
                    (((C159 * C317 + C62 * C421) * C2575 -
                      ((C159 * C321 + C62 * C424) * C2569 +
                       (C159 * C318 + C62 * C422) * C2574) +
                      (C159 * C323 + C62 * C425) * C5325) *
                         C63 * C57 * C3135 +
                     ((C159 * C1351 + C62 * C1445) * C2574 +
                      (C159 * C1354 + C62 * C1447) * C2569 -
                      (C159 * C2821 + C62 * C2931) * C2575 -
                      (C159 * C2823 + C62 * C2932) * C5325) *
                         C63 * C57 * C5401) *
                        C5377)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C159 * C71 + C62 * C160) * C355 +
                      (C159 * C106 + C62 * C186) * C5507 -
                      (C159 * C318 + C62 * C422) * C356 -
                      (C159 * C357 + C62 * C453) * C5377) *
                         C63 * C57 * C2569 +
                     ((C159 * C317 + C62 * C421) * C356 -
                      ((C159 * C107 + C62 * C187) * C5507 +
                       (C159 * C72 + C62 * C161) * C355) +
                      (C159 * C358 + C62 * C454) * C5377) *
                         C63 * C57 * C5325) *
                        C3135 +
                    (((C159 * C1351 + C62 * C1445) * C356 -
                      ((C159 * C642 + C62 * C740) * C5507 +
                       (C159 * C604 + C62 * C708) * C355) +
                      (C159 * C1385 + C62 * C1475) * C5377) *
                         C63 * C57 * C2569 +
                     ((C159 * C603 + C62 * C707) * C355 +
                      (C159 * C641 + C62 * C739) * C5507 -
                      (C159 * C2821 + C62 * C2931) * C356 -
                      (C159 * C2859 + C62 * C2967) * C5377) *
                         C63 * C57 * C5325) *
                        C5401)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C159 * C71 + C62 * C160) * C3189 +
                      (C159 * C133 + C62 * C208) * C3135 -
                      (C159 * C604 + C62 * C708) * C3190 -
                      (C159 * C675 + C62 * C768) * C5401) *
                         C63 * C57 * C5507 +
                     ((C159 * C1351 + C62 * C1445) * C3190 -
                      ((C159 * C389 + C62 * C482) * C3135 +
                       (C159 * C318 + C62 * C422) * C3189) +
                      (C159 * C1415 + C62 * C1503) * C5401) *
                         C63 * C57 * C5377) *
                        C2569 +
                    (((C159 * C603 + C62 * C707) * C3190 -
                      ((C159 * C134 + C62 * C209) * C3135 +
                       (C159 * C72 + C62 * C161) * C3189) +
                      (C159 * C676 + C62 * C769) * C5401) *
                         C63 * C57 * C5507 +
                     ((C159 * C317 + C62 * C421) * C3189 +
                      (C159 * C390 + C62 * C483) * C3135 -
                      (C159 * C2821 + C62 * C2931) * C3190 -
                      (C159 * C2895 + C62 * C3002) * C5401) *
                         C63 * C57 * C5377) *
                        C5325)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C230 * C71 + C63 * C231) * C2574 +
                      (C230 * C76 + C63 * C235) * C2569 -
                      (C230 * C72 + C63 * C232) * C2575 -
                      (C230 * C78 + C63 * C236) * C5325) *
                         C57 * C62 * C3135 +
                     ((C230 * C603 + C63 * C797) * C2575 -
                      ((C230 * C607 + C63 * C800) * C2569 +
                       (C230 * C604 + C63 * C798) * C2574) +
                      (C230 * C609 + C63 * C801) * C5325) *
                         C57 * C62 * C5401) *
                        C5507 +
                    (((C230 * C317 + C63 * C511) * C2575 -
                      ((C230 * C321 + C63 * C514) * C2569 +
                       (C230 * C318 + C63 * C512) * C2574) +
                      (C230 * C323 + C63 * C515) * C5325) *
                         C57 * C62 * C3135 +
                     ((C230 * C1351 + C63 * C1531) * C2574 +
                      (C230 * C1354 + C63 * C1533) * C2569 -
                      (C230 * C2821 + C63 * C3037) * C2575 -
                      (C230 * C2823 + C63 * C3038) * C5325) *
                         C57 * C62 * C5401) *
                        C5377)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C230 * C71 + C63 * C231) * C355 +
                      (C230 * C106 + C63 * C257) * C5507 -
                      (C230 * C318 + C63 * C512) * C356 -
                      (C230 * C357 + C63 * C543) * C5377) *
                         C57 * C62 * C2569 +
                     ((C230 * C317 + C63 * C511) * C356 -
                      ((C230 * C107 + C63 * C258) * C5507 +
                       (C230 * C72 + C63 * C232) * C355) +
                      (C230 * C358 + C63 * C544) * C5377) *
                         C57 * C62 * C5325) *
                        C3135 +
                    (((C230 * C1351 + C63 * C1531) * C356 -
                      ((C230 * C642 + C63 * C830) * C5507 +
                       (C230 * C604 + C63 * C798) * C355) +
                      (C230 * C1385 + C63 * C1561) * C5377) *
                         C57 * C62 * C2569 +
                     ((C230 * C603 + C63 * C797) * C355 +
                      (C230 * C641 + C63 * C829) * C5507 -
                      (C230 * C2821 + C63 * C3037) * C356 -
                      (C230 * C2859 + C63 * C3073) * C5377) *
                         C57 * C62 * C5325) *
                        C5401)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C230 * C71 + C63 * C231) * C3189 +
                      (C230 * C133 + C63 * C279) * C3135 -
                      (C230 * C604 + C63 * C798) * C3190 -
                      (C230 * C675 + C63 * C858) * C5401) *
                         C57 * C62 * C5507 +
                     ((C230 * C1351 + C63 * C1531) * C3190 -
                      ((C230 * C389 + C63 * C572) * C3135 +
                       (C230 * C318 + C63 * C512) * C3189) +
                      (C230 * C1415 + C63 * C1589) * C5401) *
                         C57 * C62 * C5377) *
                        C2569 +
                    (((C230 * C603 + C63 * C797) * C3190 -
                      ((C230 * C134 + C63 * C280) * C3135 +
                       (C230 * C72 + C63 * C232) * C3189) +
                      (C230 * C676 + C63 * C859) * C5401) *
                         C57 * C62 * C5507 +
                     ((C230 * C317 + C63 * C511) * C3189 +
                      (C230 * C390 + C63 * C573) * C3135 -
                      (C230 * C2821 + C63 * C3037) * C3190 -
                      (C230 * C2895 + C63 * C3108) * C5401) *
                         C57 * C62 * C5377) *
                        C5325)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C2574 + (C66 * C76 + C57 * C83) * C2569 -
           (C66 * C72 + C57 * C77) * C2575 - (C66 * C78 + C57 * C84) * C5325) *
              C62 * C63 * C5530 +
          ((C66 * C603 + C57 * C606) * C2575 -
           ((C66 * C607 + C57 * C612) * C2569 +
            (C66 * C604 + C57 * C608) * C2574) +
           (C66 * C609 + C57 * C613) * C5325) *
              C62 * C63 * C5527 +
          ((C66 * C1620 + C57 * C1622) * C2574 +
           (C66 * C1623 + C57 * C1626) * C2569 -
           (C66 * C1621 + C57 * C1624) * C2575 -
           (C66 * C1625 + C57 * C1627) * C5325) *
              C62 * C63 * C3681) *
         C5363) /
        (p * q * std::sqrt(p + q));
    d2eexy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C66 * C71 + C57 * C75) * C105 +
                      (C66 * C106 + C57 * C110) * C5363) *
                         C62 * C63 * C2569 -
                     ((C66 * C107 + C57 * C111) * C5363 +
                      (C66 * C72 + C57 * C77) * C105) *
                         C62 * C63 * C5325) *
                        C5530 +
                    (((C66 * C603 + C57 * C606) * C105 +
                      (C66 * C641 + C57 * C644) * C5363) *
                         C62 * C63 * C5325 -
                     ((C66 * C642 + C57 * C645) * C5363 +
                      (C66 * C604 + C57 * C608) * C105) *
                         C62 * C63 * C2569) *
                        C5527 +
                    (((C66 * C1620 + C57 * C1622) * C105 +
                      (C66 * C1654 + C57 * C1656) * C5363) *
                         C62 * C63 * C2569 -
                     ((C66 * C1655 + C57 * C1657) * C5363 +
                      (C66 * C1621 + C57 * C1624) * C105) *
                         C62 * C63 * C5325) *
                        C3681)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C3734 + (C66 * C133 + C57 * C137) * C5530 -
           (C66 * C604 + C57 * C608) * C3735 -
           (C66 * C675 + C57 * C678) * C5527 +
           (C66 * C1620 + C57 * C1622) * C3736 +
           (C66 * C1687 + C57 * C1689) * C3681) *
              C62 * C63 * C5363 * C2569 +
          ((C66 * C603 + C57 * C606) * C3735 -
           ((C66 * C134 + C57 * C138) * C5530 +
            (C66 * C72 + C57 * C77) * C3734) +
           (C66 * C676 + C57 * C679) * C5527 -
           (C66 * C1621 + C57 * C1624) * C3736 -
           (C66 * C1688 + C57 * C1690) * C3681) *
              C62 * C63 * C5363 * C5325)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C159 * C71 + C62 * C160) * C2574 +
                     (C159 * C76 + C62 * C164) * C2569 -
                     (C159 * C72 + C62 * C161) * C2575 -
                     (C159 * C78 + C62 * C165) * C5325) *
                        C63 * C57 * C5530 +
                    ((C159 * C603 + C62 * C707) * C2575 -
                     ((C159 * C607 + C62 * C710) * C2569 +
                      (C159 * C604 + C62 * C708) * C2574) +
                     (C159 * C609 + C62 * C711) * C5325) *
                        C63 * C57 * C5527 +
                    ((C159 * C1620 + C62 * C1717) * C2574 +
                     (C159 * C1623 + C62 * C1719) * C2569 -
                     (C159 * C1621 + C62 * C1718) * C2575 -
                     (C159 * C1625 + C62 * C1720) * C5325) *
                        C63 * C57 * C3681) *
                   C5363) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C159 * C71 + C62 * C160) * C105 +
                      (C159 * C106 + C62 * C186) * C5363) *
                         C63 * C57 * C2569 -
                     ((C159 * C107 + C62 * C187) * C5363 +
                      (C159 * C72 + C62 * C161) * C105) *
                         C63 * C57 * C5325) *
                        C5530 +
                    (((C159 * C603 + C62 * C707) * C105 +
                      (C159 * C641 + C62 * C739) * C5363) *
                         C63 * C57 * C5325 -
                     ((C159 * C642 + C62 * C740) * C5363 +
                      (C159 * C604 + C62 * C708) * C105) *
                         C63 * C57 * C2569) *
                        C5527 +
                    (((C159 * C1620 + C62 * C1717) * C105 +
                      (C159 * C1654 + C62 * C1747) * C5363) *
                         C63 * C57 * C2569 -
                     ((C159 * C1655 + C62 * C1748) * C5363 +
                      (C159 * C1621 + C62 * C1718) * C105) *
                         C63 * C57 * C5325) *
                        C3681)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C159 * C71 + C62 * C160) * C3734 +
                     (C159 * C133 + C62 * C208) * C5530 -
                     (C159 * C604 + C62 * C708) * C3735 -
                     (C159 * C675 + C62 * C768) * C5527 +
                     (C159 * C1620 + C62 * C1717) * C3736 +
                     (C159 * C1687 + C62 * C1775) * C3681) *
                        C63 * C57 * C5363 * C2569 +
                    ((C159 * C603 + C62 * C707) * C3735 -
                     ((C159 * C134 + C62 * C209) * C5530 +
                      (C159 * C72 + C62 * C161) * C3734) +
                     (C159 * C676 + C62 * C769) * C5527 -
                     (C159 * C1621 + C62 * C1718) * C3736 -
                     (C159 * C1688 + C62 * C1776) * C3681) *
                        C63 * C57 * C5363 * C5325)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C230 * C71 + C63 * C231) * C2574 +
                     (C230 * C76 + C63 * C235) * C2569 -
                     (C230 * C72 + C63 * C232) * C2575 -
                     (C230 * C78 + C63 * C236) * C5325) *
                        C57 * C62 * C5530 +
                    ((C230 * C603 + C63 * C797) * C2575 -
                     ((C230 * C607 + C63 * C800) * C2569 +
                      (C230 * C604 + C63 * C798) * C2574) +
                     (C230 * C609 + C63 * C801) * C5325) *
                        C57 * C62 * C5527 +
                    ((C230 * C1620 + C63 * C1803) * C2574 +
                     (C230 * C1623 + C63 * C1805) * C2569 -
                     (C230 * C1621 + C63 * C1804) * C2575 -
                     (C230 * C1625 + C63 * C1806) * C5325) *
                        C57 * C62 * C3681) *
                   C5363) /
                  (p * q * std::sqrt(p + q));
    d2eezy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C230 * C71 + C63 * C231) * C105 +
                      (C230 * C106 + C63 * C257) * C5363) *
                         C57 * C62 * C2569 -
                     ((C230 * C107 + C63 * C258) * C5363 +
                      (C230 * C72 + C63 * C232) * C105) *
                         C57 * C62 * C5325) *
                        C5530 +
                    (((C230 * C603 + C63 * C797) * C105 +
                      (C230 * C641 + C63 * C829) * C5363) *
                         C57 * C62 * C5325 -
                     ((C230 * C642 + C63 * C830) * C5363 +
                      (C230 * C604 + C63 * C798) * C105) *
                         C57 * C62 * C2569) *
                        C5527 +
                    (((C230 * C1620 + C63 * C1803) * C105 +
                      (C230 * C1654 + C63 * C1833) * C5363) *
                         C57 * C62 * C2569 -
                     ((C230 * C1655 + C63 * C1834) * C5363 +
                      (C230 * C1621 + C63 * C1804) * C105) *
                         C57 * C62 * C5325) *
                        C3681)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C230 * C71 + C63 * C231) * C3734 +
                     (C230 * C133 + C63 * C279) * C5530 -
                     (C230 * C604 + C63 * C798) * C3735 -
                     (C230 * C675 + C63 * C858) * C5527 +
                     (C230 * C1620 + C63 * C1803) * C3736 +
                     (C230 * C1687 + C63 * C1861) * C3681) *
                        C57 * C62 * C5363 * C2569 +
                    ((C230 * C603 + C63 * C797) * C3735 -
                     ((C230 * C134 + C63 * C280) * C5530 +
                      (C230 * C72 + C63 * C232) * C3734) +
                     (C230 * C676 + C63 * C859) * C5527 -
                     (C230 * C1621 + C63 * C1804) * C3736 -
                     (C230 * C1688 + C63 * C1862) * C3681) *
                        C57 * C62 * C5363 * C5325)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C66 * C71 + C57 * C75) * C67 + (C66 * C76 + C57 * C83) * C58 -
          (C66 * C72 + C57 * C77) * C68 - (C66 * C78 + C57 * C84) * C59 +
          (C66 * C73 + C57 * C79) * C69 + (C66 * C80 + C57 * C85) * C60 -
          (C66 * C74 + C57 * C81) * C70 - (C66 * C82 + C57 * C86) * C61) *
         C62 * C63 * C5389 * C5363) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C4707 + (C66 * C76 + C57 * C83) * C5499 -
           (C66 * C72 + C57 * C77) * C4700 - (C66 * C78 + C57 * C84) * C5325) *
              C62 * C63 * C5389 * C889 +
          ((C66 * C317 + C57 * C320) * C4700 -
           ((C66 * C321 + C57 * C326) * C5499 +
            (C66 * C318 + C57 * C322) * C4707) +
           (C66 * C323 + C57 * C327) * C5325) *
              C62 * C63 * C5389 * C890 +
          ((C66 * C894 + C57 * C896) * C4707 +
           (C66 * C897 + C57 * C900) * C5499 -
           (C66 * C895 + C57 * C898) * C4700 -
           (C66 * C899 + C57 * C901) * C5325) *
              C62 * C63 * C5389 * C891)) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C105 + (C66 * C106 + C57 * C110) * C5363) *
              C62 * C63 * C58 -
          ((C66 * C107 + C57 * C111) * C5363 + (C66 * C72 + C57 * C77) * C105) *
              C62 * C63 * C59 +
          ((C66 * C73 + C57 * C79) * C105 + (C66 * C108 + C57 * C112) * C5363) *
              C62 * C63 * C60 -
          ((C66 * C109 + C57 * C113) * C5363 + (C66 * C74 + C57 * C81) * C105) *
              C62 * C63 * C61) *
         C5389) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C928 + (C66 * C106 + C57 * C110) * C889 -
           (C66 * C318 + C57 * C322) * C929 - (C66 * C357 + C57 * C360) * C890 +
           (C66 * C894 + C57 * C896) * C930 +
           (C66 * C931 + C57 * C933) * C891) *
              C62 * C63 * C5499 +
          ((C66 * C317 + C57 * C320) * C929 -
           ((C66 * C107 + C57 * C111) * C889 + (C66 * C72 + C57 * C77) * C928) +
           (C66 * C358 + C57 * C361) * C890 - (C66 * C895 + C57 * C898) * C930 -
           (C66 * C932 + C57 * C934) * C891) *
              C62 * C63 * C5325) *
         C5389) /
            (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C132 + (C66 * C133 + C57 * C137) * C5389) *
              C62 * C63 * C5363 * C58 -
          ((C66 * C134 + C57 * C138) * C5389 + (C66 * C72 + C57 * C77) * C132) *
              C62 * C63 * C5363 * C59 +
          ((C66 * C73 + C57 * C79) * C132 + (C66 * C135 + C57 * C139) * C5389) *
              C62 * C63 * C5363 * C60 -
          ((C66 * C136 + C57 * C140) * C5389 + (C66 * C74 + C57 * C81) * C132) *
              C62 * C63 * C5363 * C61)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C66 * C71 + C57 * C75) * C132 +
            (C66 * C133 + C57 * C137) * C5389) *
               C62 * C63 * C889 -
           ((C66 * C389 + C57 * C392) * C5389 +
            (C66 * C318 + C57 * C322) * C132) *
               C62 * C63 * C890 +
           ((C66 * C894 + C57 * C896) * C132 +
            (C66 * C961 + C57 * C963) * C5389) *
               C62 * C63 * C891) *
              C5499 +
          (((C66 * C317 + C57 * C320) * C132 +
            (C66 * C390 + C57 * C393) * C5389) *
               C62 * C63 * C890 -
           ((C66 * C134 + C57 * C138) * C5389 +
            (C66 * C72 + C57 * C77) * C132) *
               C62 * C63 * C889 -
           ((C66 * C962 + C57 * C964) * C5389 +
            (C66 * C895 + C57 * C898) * C132) *
               C62 * C63 * C891) *
              C5325)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C159 * C71 + C62 * C160) * C67 + (C159 * C76 + C62 * C164) * C58 -
          (C159 * C72 + C62 * C161) * C68 - (C159 * C78 + C62 * C165) * C59 +
          (C159 * C73 + C62 * C162) * C69 + (C159 * C80 + C62 * C166) * C60 -
          (C159 * C74 + C62 * C163) * C70 - (C159 * C82 + C62 * C167) * C61) *
         C63 * C57 * C5389 * C5363) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C159 * C71 + C62 * C160) * C4707 +
           (C159 * C76 + C62 * C164) * C5499 -
           (C159 * C72 + C62 * C161) * C4700 -
           (C159 * C78 + C62 * C165) * C5325) *
              C63 * C57 * C5389 * C889 +
          ((C159 * C317 + C62 * C421) * C4700 -
           ((C159 * C321 + C62 * C424) * C5499 +
            (C159 * C318 + C62 * C422) * C4707) +
           (C159 * C323 + C62 * C425) * C5325) *
              C63 * C57 * C5389 * C890 +
          ((C159 * C894 + C62 * C991) * C4707 +
           (C159 * C897 + C62 * C993) * C5499 -
           (C159 * C895 + C62 * C992) * C4700 -
           (C159 * C899 + C62 * C994) * C5325) *
              C63 * C57 * C5389 * C891)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C159 * C71 + C62 * C160) * C105 +
                     (C159 * C106 + C62 * C186) * C5363) *
                        C63 * C57 * C58 -
                    ((C159 * C107 + C62 * C187) * C5363 +
                     (C159 * C72 + C62 * C161) * C105) *
                        C63 * C57 * C59 +
                    ((C159 * C73 + C62 * C162) * C105 +
                     (C159 * C108 + C62 * C188) * C5363) *
                        C63 * C57 * C60 -
                    ((C159 * C109 + C62 * C189) * C5363 +
                     (C159 * C74 + C62 * C163) * C105) *
                        C63 * C57 * C61) *
                   C5389) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C159 * C71 + C62 * C160) * C928 +
                     (C159 * C106 + C62 * C186) * C889 -
                     (C159 * C318 + C62 * C422) * C929 -
                     (C159 * C357 + C62 * C453) * C890 +
                     (C159 * C894 + C62 * C991) * C930 +
                     (C159 * C931 + C62 * C1021) * C891) *
                        C63 * C57 * C5499 +
                    ((C159 * C317 + C62 * C421) * C929 -
                     ((C159 * C107 + C62 * C187) * C889 +
                      (C159 * C72 + C62 * C161) * C928) +
                     (C159 * C358 + C62 * C454) * C890 -
                     (C159 * C895 + C62 * C992) * C930 -
                     (C159 * C932 + C62 * C1022) * C891) *
                        C63 * C57 * C5325) *
                   C5389) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C159 * C71 + C62 * C160) * C132 +
                     (C159 * C133 + C62 * C208) * C5389) *
                        C63 * C57 * C5363 * C58 -
                    ((C159 * C134 + C62 * C209) * C5389 +
                     (C159 * C72 + C62 * C161) * C132) *
                        C63 * C57 * C5363 * C59 +
                    ((C159 * C73 + C62 * C162) * C132 +
                     (C159 * C135 + C62 * C210) * C5389) *
                        C63 * C57 * C5363 * C60 -
                    ((C159 * C136 + C62 * C211) * C5389 +
                     (C159 * C74 + C62 * C163) * C132) *
                        C63 * C57 * C5363 * C61)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C159 * C71 + C62 * C160) * C132 +
                      (C159 * C133 + C62 * C208) * C5389) *
                         C63 * C57 * C889 -
                     ((C159 * C389 + C62 * C482) * C5389 +
                      (C159 * C318 + C62 * C422) * C132) *
                         C63 * C57 * C890 +
                     ((C159 * C894 + C62 * C991) * C132 +
                      (C159 * C961 + C62 * C1049) * C5389) *
                         C63 * C57 * C891) *
                        C5499 +
                    (((C159 * C317 + C62 * C421) * C132 +
                      (C159 * C390 + C62 * C483) * C5389) *
                         C63 * C57 * C890 -
                     ((C159 * C134 + C62 * C209) * C5389 +
                      (C159 * C72 + C62 * C161) * C132) *
                         C63 * C57 * C889 -
                     ((C159 * C962 + C62 * C1050) * C5389 +
                      (C159 * C895 + C62 * C992) * C132) *
                         C63 * C57 * C891) *
                        C5325)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C230 * C71 + C63 * C231) * C67 + (C230 * C76 + C63 * C235) * C58 -
          (C230 * C72 + C63 * C232) * C68 - (C230 * C78 + C63 * C236) * C59 +
          (C230 * C73 + C63 * C233) * C69 + (C230 * C80 + C63 * C237) * C60 -
          (C230 * C74 + C63 * C234) * C70 - (C230 * C82 + C63 * C238) * C61) *
         C57 * C62 * C5389 * C5363) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C230 * C71 + C63 * C231) * C4707 +
           (C230 * C76 + C63 * C235) * C5499 -
           (C230 * C72 + C63 * C232) * C4700 -
           (C230 * C78 + C63 * C236) * C5325) *
              C57 * C62 * C5389 * C889 +
          ((C230 * C317 + C63 * C511) * C4700 -
           ((C230 * C321 + C63 * C514) * C5499 +
            (C230 * C318 + C63 * C512) * C4707) +
           (C230 * C323 + C63 * C515) * C5325) *
              C57 * C62 * C5389 * C890 +
          ((C230 * C894 + C63 * C1077) * C4707 +
           (C230 * C897 + C63 * C1079) * C5499 -
           (C230 * C895 + C63 * C1078) * C4700 -
           (C230 * C899 + C63 * C1080) * C5325) *
              C57 * C62 * C5389 * C891)) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C230 * C71 + C63 * C231) * C105 +
                     (C230 * C106 + C63 * C257) * C5363) *
                        C57 * C62 * C58 -
                    ((C230 * C107 + C63 * C258) * C5363 +
                     (C230 * C72 + C63 * C232) * C105) *
                        C57 * C62 * C59 +
                    ((C230 * C73 + C63 * C233) * C105 +
                     (C230 * C108 + C63 * C259) * C5363) *
                        C57 * C62 * C60 -
                    ((C230 * C109 + C63 * C260) * C5363 +
                     (C230 * C74 + C63 * C234) * C105) *
                        C57 * C62 * C61) *
                   C5389) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C230 * C71 + C63 * C231) * C928 +
                     (C230 * C106 + C63 * C257) * C889 -
                     (C230 * C318 + C63 * C512) * C929 -
                     (C230 * C357 + C63 * C543) * C890 +
                     (C230 * C894 + C63 * C1077) * C930 +
                     (C230 * C931 + C63 * C1107) * C891) *
                        C57 * C62 * C5499 +
                    ((C230 * C317 + C63 * C511) * C929 -
                     ((C230 * C107 + C63 * C258) * C889 +
                      (C230 * C72 + C63 * C232) * C928) +
                     (C230 * C358 + C63 * C544) * C890 -
                     (C230 * C895 + C63 * C1078) * C930 -
                     (C230 * C932 + C63 * C1108) * C891) *
                        C57 * C62 * C5325) *
                   C5389) /
                      (p * q * std::sqrt(p + q));
    d2eezz[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C230 * C71 + C63 * C231) * C132 +
                     (C230 * C133 + C63 * C279) * C5389) *
                        C57 * C62 * C5363 * C58 -
                    ((C230 * C134 + C63 * C280) * C5389 +
                     (C230 * C72 + C63 * C232) * C132) *
                        C57 * C62 * C5363 * C59 +
                    ((C230 * C73 + C63 * C233) * C132 +
                     (C230 * C135 + C63 * C281) * C5389) *
                        C57 * C62 * C5363 * C60 -
                    ((C230 * C136 + C63 * C282) * C5389 +
                     (C230 * C74 + C63 * C234) * C132) *
                        C57 * C62 * C5363 * C61)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C230 * C71 + C63 * C231) * C132 +
                      (C230 * C133 + C63 * C279) * C5389) *
                         C57 * C62 * C889 -
                     ((C230 * C389 + C63 * C572) * C5389 +
                      (C230 * C318 + C63 * C512) * C132) *
                         C57 * C62 * C890 +
                     ((C230 * C894 + C63 * C1077) * C132 +
                      (C230 * C961 + C63 * C1135) * C5389) *
                         C57 * C62 * C891) *
                        C5499 +
                    (((C230 * C317 + C63 * C511) * C132 +
                      (C230 * C390 + C63 * C573) * C5389) *
                         C57 * C62 * C890 -
                     ((C230 * C134 + C63 * C280) * C5389 +
                      (C230 * C72 + C63 * C232) * C132) *
                         C57 * C62 * C889 -
                     ((C230 * C962 + C63 * C1136) * C5389 +
                      (C230 * C895 + C63 * C1078) * C132) *
                         C57 * C62 * C891) *
                        C5325)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C314 + (C66 * C76 + C57 * C83) * C309 -
           (C66 * C72 + C57 * C77) * C315 - (C66 * C78 + C57 * C84) * C310 +
           (C66 * C73 + C57 * C79) * C316 + (C66 * C80 + C57 * C85) * C311) *
              C62 * C63 * C5389 * C5507 +
          ((C66 * C317 + C57 * C320) * C315 -
           ((C66 * C321 + C57 * C326) * C309 +
            (C66 * C318 + C57 * C322) * C314) +
           (C66 * C323 + C57 * C327) * C310 - (C66 * C319 + C57 * C324) * C316 -
           (C66 * C325 + C57 * C328) * C311) *
              C62 * C63 * C5389 * C5377)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C1160 + (C66 * C76 + C57 * C83) * C5320) *
              C62 * C63 * C5389 * C1156 -
          ((C66 * C321 + C57 * C326) * C5320 +
           (C66 * C318 + C57 * C322) * C1160) *
              C62 * C63 * C5389 * C1157 +
          ((C66 * C894 + C57 * C896) * C1160 +
           (C66 * C897 + C57 * C900) * C5320) *
              C62 * C63 * C5389 * C1158 -
          ((C66 * C1162 + C57 * C1164) * C5320 +
           (C66 * C1161 + C57 * C1163) * C1160) *
              C62 * C63 * C5389 * C1159)) /
            (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C355 + (C66 * C106 + C57 * C110) * C5507 -
           (C66 * C318 + C57 * C322) * C356 -
           (C66 * C357 + C57 * C360) * C5377) *
              C62 * C63 * C309 +
          ((C66 * C317 + C57 * C320) * C356 -
           ((C66 * C107 + C57 * C111) * C5507 +
            (C66 * C72 + C57 * C77) * C355) +
           (C66 * C358 + C57 * C361) * C5377) *
              C62 * C63 * C310 +
          ((C66 * C73 + C57 * C79) * C355 + (C66 * C108 + C57 * C112) * C5507 -
           (C66 * C319 + C57 * C324) * C356 -
           (C66 * C359 + C57 * C362) * C5377) *
              C62 * C63 * C311) *
         C5389) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C66 * C71 + C57 * C75) * C1183 + (C66 * C106 + C57 * C110) * C1156 -
          (C66 * C318 + C57 * C322) * C1184 -
          (C66 * C357 + C57 * C360) * C1157 +
          (C66 * C894 + C57 * C896) * C1185 +
          (C66 * C931 + C57 * C933) * C1158 -
          (C66 * C1161 + C57 * C1163) * C1186 -
          (C66 * C1187 + C57 * C1188) * C1159) *
         C62 * C63 * C5320 * C5389) /
            (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C66 * C71 + C57 * C75) * C132 +
            (C66 * C133 + C57 * C137) * C5389) *
               C62 * C63 * C5507 -
           ((C66 * C389 + C57 * C392) * C5389 +
            (C66 * C318 + C57 * C322) * C132) *
               C62 * C63 * C5377) *
              C309 +
          (((C66 * C317 + C57 * C320) * C132 +
            (C66 * C390 + C57 * C393) * C5389) *
               C62 * C63 * C5377 -
           ((C66 * C134 + C57 * C138) * C5389 +
            (C66 * C72 + C57 * C77) * C132) *
               C62 * C63 * C5507) *
              C310 +
          (((C66 * C73 + C57 * C79) * C132 +
            (C66 * C135 + C57 * C139) * C5389) *
               C62 * C63 * C5507 -
           ((C66 * C391 + C57 * C394) * C5389 +
            (C66 * C319 + C57 * C324) * C132) *
               C62 * C63 * C5377) *
              C311)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C132 + (C66 * C133 + C57 * C137) * C5389) *
              C62 * C63 * C1156 -
          ((C66 * C389 + C57 * C392) * C5389 +
           (C66 * C318 + C57 * C322) * C132) *
              C62 * C63 * C1157 +
          ((C66 * C894 + C57 * C896) * C132 +
           (C66 * C961 + C57 * C963) * C5389) *
              C62 * C63 * C1158 -
          ((C66 * C1207 + C57 * C1208) * C5389 +
           (C66 * C1161 + C57 * C1163) * C132) *
              C62 * C63 * C1159) *
         C5320) /
            (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C159 * C71 + C62 * C160) * C314 + (C159 * C76 + C62 * C164) * C309 -
           (C159 * C72 + C62 * C161) * C315 - (C159 * C78 + C62 * C165) * C310 +
           (C159 * C73 + C62 * C162) * C316 +
           (C159 * C80 + C62 * C166) * C311) *
              C63 * C57 * C5389 * C5507 +
          ((C159 * C317 + C62 * C421) * C315 -
           ((C159 * C321 + C62 * C424) * C309 +
            (C159 * C318 + C62 * C422) * C314) +
           (C159 * C323 + C62 * C425) * C310 -
           (C159 * C319 + C62 * C423) * C316 -
           (C159 * C325 + C62 * C426) * C311) *
              C63 * C57 * C5389 * C5377)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C159 * C71 + C62 * C160) * C1160 +
           (C159 * C76 + C62 * C164) * C5320) *
              C63 * C57 * C5389 * C1156 -
          ((C159 * C321 + C62 * C424) * C5320 +
           (C159 * C318 + C62 * C422) * C1160) *
              C63 * C57 * C5389 * C1157 +
          ((C159 * C894 + C62 * C991) * C1160 +
           (C159 * C897 + C62 * C993) * C5320) *
              C63 * C57 * C5389 * C1158 -
          ((C159 * C1162 + C62 * C1228) * C5320 +
           (C159 * C1161 + C62 * C1227) * C1160) *
              C63 * C57 * C5389 * C1159)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C159 * C71 + C62 * C160) * C355 +
                     (C159 * C106 + C62 * C186) * C5507 -
                     (C159 * C318 + C62 * C422) * C356 -
                     (C159 * C357 + C62 * C453) * C5377) *
                        C63 * C57 * C309 +
                    ((C159 * C317 + C62 * C421) * C356 -
                     ((C159 * C107 + C62 * C187) * C5507 +
                      (C159 * C72 + C62 * C161) * C355) +
                     (C159 * C358 + C62 * C454) * C5377) *
                        C63 * C57 * C310 +
                    ((C159 * C73 + C62 * C162) * C355 +
                     (C159 * C108 + C62 * C188) * C5507 -
                     (C159 * C319 + C62 * C423) * C356 -
                     (C159 * C359 + C62 * C455) * C5377) *
                        C63 * C57 * C311) *
                   C5389) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C159 * C71 + C62 * C160) * C1183 +
                    (C159 * C106 + C62 * C186) * C1156 -
                    (C159 * C318 + C62 * C422) * C1184 -
                    (C159 * C357 + C62 * C453) * C1157 +
                    (C159 * C894 + C62 * C991) * C1185 +
                    (C159 * C931 + C62 * C1021) * C1158 -
                    (C159 * C1161 + C62 * C1227) * C1186 -
                    (C159 * C1187 + C62 * C1247) * C1159) *
                   C63 * C57 * C5320 * C5389) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C159 * C71 + C62 * C160) * C132 +
                      (C159 * C133 + C62 * C208) * C5389) *
                         C63 * C57 * C5507 -
                     ((C159 * C389 + C62 * C482) * C5389 +
                      (C159 * C318 + C62 * C422) * C132) *
                         C63 * C57 * C5377) *
                        C309 +
                    (((C159 * C317 + C62 * C421) * C132 +
                      (C159 * C390 + C62 * C483) * C5389) *
                         C63 * C57 * C5377 -
                     ((C159 * C134 + C62 * C209) * C5389 +
                      (C159 * C72 + C62 * C161) * C132) *
                         C63 * C57 * C5507) *
                        C310 +
                    (((C159 * C73 + C62 * C162) * C132 +
                      (C159 * C135 + C62 * C210) * C5389) *
                         C63 * C57 * C5507 -
                     ((C159 * C391 + C62 * C484) * C5389 +
                      (C159 * C319 + C62 * C423) * C132) *
                         C63 * C57 * C5377) *
                        C311)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C159 * C71 + C62 * C160) * C132 +
                     (C159 * C133 + C62 * C208) * C5389) *
                        C63 * C57 * C1156 -
                    ((C159 * C389 + C62 * C482) * C5389 +
                     (C159 * C318 + C62 * C422) * C132) *
                        C63 * C57 * C1157 +
                    ((C159 * C894 + C62 * C991) * C132 +
                     (C159 * C961 + C62 * C1049) * C5389) *
                        C63 * C57 * C1158 -
                    ((C159 * C1207 + C62 * C1266) * C5389 +
                     (C159 * C1161 + C62 * C1227) * C132) *
                        C63 * C57 * C1159) *
                   C5320) /
                      (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C230 * C71 + C63 * C231) * C314 + (C230 * C76 + C63 * C235) * C309 -
           (C230 * C72 + C63 * C232) * C315 - (C230 * C78 + C63 * C236) * C310 +
           (C230 * C73 + C63 * C233) * C316 +
           (C230 * C80 + C63 * C237) * C311) *
              C57 * C62 * C5389 * C5507 +
          ((C230 * C317 + C63 * C511) * C315 -
           ((C230 * C321 + C63 * C514) * C309 +
            (C230 * C318 + C63 * C512) * C314) +
           (C230 * C323 + C63 * C515) * C310 -
           (C230 * C319 + C63 * C513) * C316 -
           (C230 * C325 + C63 * C516) * C311) *
              C57 * C62 * C5389 * C5377)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C230 * C71 + C63 * C231) * C1160 +
           (C230 * C76 + C63 * C235) * C5320) *
              C57 * C62 * C5389 * C1156 -
          ((C230 * C321 + C63 * C514) * C5320 +
           (C230 * C318 + C63 * C512) * C1160) *
              C57 * C62 * C5389 * C1157 +
          ((C230 * C894 + C63 * C1077) * C1160 +
           (C230 * C897 + C63 * C1079) * C5320) *
              C57 * C62 * C5389 * C1158 -
          ((C230 * C1162 + C63 * C1286) * C5320 +
           (C230 * C1161 + C63 * C1285) * C1160) *
              C57 * C62 * C5389 * C1159)) /
            (p * q * std::sqrt(p + q));
    d2eezy[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C230 * C71 + C63 * C231) * C355 +
                     (C230 * C106 + C63 * C257) * C5507 -
                     (C230 * C318 + C63 * C512) * C356 -
                     (C230 * C357 + C63 * C543) * C5377) *
                        C57 * C62 * C309 +
                    ((C230 * C317 + C63 * C511) * C356 -
                     ((C230 * C107 + C63 * C258) * C5507 +
                      (C230 * C72 + C63 * C232) * C355) +
                     (C230 * C358 + C63 * C544) * C5377) *
                        C57 * C62 * C310 +
                    ((C230 * C73 + C63 * C233) * C355 +
                     (C230 * C108 + C63 * C259) * C5507 -
                     (C230 * C319 + C63 * C513) * C356 -
                     (C230 * C359 + C63 * C545) * C5377) *
                        C57 * C62 * C311) *
                   C5389) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C230 * C71 + C63 * C231) * C1183 +
                    (C230 * C106 + C63 * C257) * C1156 -
                    (C230 * C318 + C63 * C512) * C1184 -
                    (C230 * C357 + C63 * C543) * C1157 +
                    (C230 * C894 + C63 * C1077) * C1185 +
                    (C230 * C931 + C63 * C1107) * C1158 -
                    (C230 * C1161 + C63 * C1285) * C1186 -
                    (C230 * C1187 + C63 * C1305) * C1159) *
                   C57 * C62 * C5320 * C5389) /
                      (p * q * std::sqrt(p + q));
    d2eezz[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C230 * C71 + C63 * C231) * C132 +
                      (C230 * C133 + C63 * C279) * C5389) *
                         C57 * C62 * C5507 -
                     ((C230 * C389 + C63 * C572) * C5389 +
                      (C230 * C318 + C63 * C512) * C132) *
                         C57 * C62 * C5377) *
                        C309 +
                    (((C230 * C317 + C63 * C511) * C132 +
                      (C230 * C390 + C63 * C573) * C5389) *
                         C57 * C62 * C5377 -
                     ((C230 * C134 + C63 * C280) * C5389 +
                      (C230 * C72 + C63 * C232) * C132) *
                         C57 * C62 * C5507) *
                        C310 +
                    (((C230 * C73 + C63 * C233) * C132 +
                      (C230 * C135 + C63 * C281) * C5389) *
                         C57 * C62 * C5507 -
                     ((C230 * C391 + C63 * C574) * C5389 +
                      (C230 * C319 + C63 * C513) * C132) *
                         C57 * C62 * C5377) *
                        C311)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C230 * C71 + C63 * C231) * C132 +
                     (C230 * C133 + C63 * C279) * C5389) *
                        C57 * C62 * C1156 -
                    ((C230 * C389 + C63 * C572) * C5389 +
                     (C230 * C318 + C63 * C512) * C132) *
                        C57 * C62 * C1157 +
                    ((C230 * C894 + C63 * C1077) * C132 +
                     (C230 * C961 + C63 * C1135) * C5389) *
                        C57 * C62 * C1158 -
                    ((C230 * C1207 + C63 * C1324) * C5389 +
                     (C230 * C1161 + C63 * C1285) * C132) *
                        C57 * C62 * C1159) *
                   C5320) /
                      (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C314 + (C66 * C76 + C57 * C83) * C309 -
           (C66 * C72 + C57 * C77) * C315 - (C66 * C78 + C57 * C84) * C310 +
           (C66 * C73 + C57 * C79) * C316 + (C66 * C80 + C57 * C85) * C311) *
              C62 * C63 * C5508 +
          ((C66 * C603 + C57 * C606) * C315 -
           ((C66 * C607 + C57 * C612) * C309 +
            (C66 * C604 + C57 * C608) * C314) +
           (C66 * C609 + C57 * C613) * C310 - (C66 * C605 + C57 * C610) * C316 -
           (C66 * C611 + C57 * C614) * C311) *
              C62 * C63 * C5401) *
         C5363) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C66 * C71 + C57 * C75) * C1160 + (C66 * C76 + C57 * C83) * C5320) *
               C62 * C63 * C5508 -
           ((C66 * C607 + C57 * C612) * C5320 +
            (C66 * C604 + C57 * C608) * C1160) *
               C62 * C63 * C5401) *
              C889 +
          (((C66 * C1351 + C57 * C1353) * C1160 +
            (C66 * C1354 + C57 * C1357) * C5320) *
               C62 * C63 * C5401 -
           ((C66 * C321 + C57 * C326) * C5320 +
            (C66 * C318 + C57 * C322) * C1160) *
               C62 * C63 * C5508) *
              C890 +
          (((C66 * C894 + C57 * C896) * C1160 +
            (C66 * C897 + C57 * C900) * C5320) *
               C62 * C63 * C5508 -
           ((C66 * C1355 + C57 * C1358) * C5320 +
            (C66 * C1352 + C57 * C1356) * C1160) *
               C62 * C63 * C5401) *
              C891)) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C66 * C71 + C57 * C75) * C105 +
            (C66 * C106 + C57 * C110) * C5363) *
               C62 * C63 * C309 -
           ((C66 * C107 + C57 * C111) * C5363 +
            (C66 * C72 + C57 * C77) * C105) *
               C62 * C63 * C310 +
           ((C66 * C73 + C57 * C79) * C105 +
            (C66 * C108 + C57 * C112) * C5363) *
               C62 * C63 * C311) *
              C5508 +
          (((C66 * C603 + C57 * C606) * C105 +
            (C66 * C641 + C57 * C644) * C5363) *
               C62 * C63 * C310 -
           ((C66 * C642 + C57 * C645) * C5363 +
            (C66 * C604 + C57 * C608) * C105) *
               C62 * C63 * C309 -
           ((C66 * C643 + C57 * C646) * C5363 +
            (C66 * C605 + C57 * C610) * C105) *
               C62 * C63 * C311) *
              C5401)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C928 + (C66 * C106 + C57 * C110) * C889 -
           (C66 * C318 + C57 * C322) * C929 - (C66 * C357 + C57 * C360) * C890 +
           (C66 * C894 + C57 * C896) * C930 +
           (C66 * C931 + C57 * C933) * C891) *
              C62 * C63 * C5320 * C5508 +
          ((C66 * C1351 + C57 * C1353) * C929 -
           ((C66 * C642 + C57 * C645) * C889 +
            (C66 * C604 + C57 * C608) * C928) +
           (C66 * C1385 + C57 * C1387) * C890 -
           (C66 * C1352 + C57 * C1356) * C930 -
           (C66 * C1386 + C57 * C1388) * C891) *
              C62 * C63 * C5320 * C5401)) /
            (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C673 + (C66 * C133 + C57 * C137) * C5508 -
           (C66 * C604 + C57 * C608) * C674 -
           (C66 * C675 + C57 * C678) * C5401) *
              C62 * C63 * C5363 * C309 +
          ((C66 * C603 + C57 * C606) * C674 -
           ((C66 * C134 + C57 * C138) * C5508 +
            (C66 * C72 + C57 * C77) * C673) +
           (C66 * C676 + C57 * C679) * C5401) *
              C62 * C63 * C5363 * C310 +
          ((C66 * C73 + C57 * C79) * C673 + (C66 * C135 + C57 * C139) * C5508 -
           (C66 * C605 + C57 * C610) * C674 -
           (C66 * C677 + C57 * C680) * C5401) *
              C62 * C63 * C5363 * C311)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C66 * C71 + C57 * C75) * C673 + (C66 * C133 + C57 * C137) * C5508 -
           (C66 * C604 + C57 * C608) * C674 -
           (C66 * C675 + C57 * C678) * C5401) *
              C62 * C63 * C889 +
          ((C66 * C1351 + C57 * C1353) * C674 -
           ((C66 * C389 + C57 * C392) * C5508 +
            (C66 * C318 + C57 * C322) * C673) +
           (C66 * C1415 + C57 * C1417) * C5401) *
              C62 * C63 * C890 +
          ((C66 * C894 + C57 * C896) * C673 +
           (C66 * C961 + C57 * C963) * C5508 -
           (C66 * C1352 + C57 * C1356) * C674 -
           (C66 * C1416 + C57 * C1418) * C5401) *
              C62 * C63 * C891) *
         C5320) /
            (p * q * std::sqrt(p + q));
    d2eeyx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C159 * C71 + C62 * C160) * C314 + (C159 * C76 + C62 * C164) * C309 -
           (C159 * C72 + C62 * C161) * C315 - (C159 * C78 + C62 * C165) * C310 +
           (C159 * C73 + C62 * C162) * C316 +
           (C159 * C80 + C62 * C166) * C311) *
              C63 * C57 * C5508 +
          ((C159 * C603 + C62 * C707) * C315 -
           ((C159 * C607 + C62 * C710) * C309 +
            (C159 * C604 + C62 * C708) * C314) +
           (C159 * C609 + C62 * C711) * C310 -
           (C159 * C605 + C62 * C709) * C316 -
           (C159 * C611 + C62 * C712) * C311) *
              C63 * C57 * C5401) *
         C5363) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C159 * C71 + C62 * C160) * C1160 +
            (C159 * C76 + C62 * C164) * C5320) *
               C63 * C57 * C5508 -
           ((C159 * C607 + C62 * C710) * C5320 +
            (C159 * C604 + C62 * C708) * C1160) *
               C63 * C57 * C5401) *
              C889 +
          (((C159 * C1351 + C62 * C1445) * C1160 +
            (C159 * C1354 + C62 * C1447) * C5320) *
               C63 * C57 * C5401 -
           ((C159 * C321 + C62 * C424) * C5320 +
            (C159 * C318 + C62 * C422) * C1160) *
               C63 * C57 * C5508) *
              C890 +
          (((C159 * C894 + C62 * C991) * C1160 +
            (C159 * C897 + C62 * C993) * C5320) *
               C63 * C57 * C5508 -
           ((C159 * C1355 + C62 * C1448) * C5320 +
            (C159 * C1352 + C62 * C1446) * C1160) *
               C63 * C57 * C5401) *
              C891)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C159 * C71 + C62 * C160) * C105 +
                      (C159 * C106 + C62 * C186) * C5363) *
                         C63 * C57 * C309 -
                     ((C159 * C107 + C62 * C187) * C5363 +
                      (C159 * C72 + C62 * C161) * C105) *
                         C63 * C57 * C310 +
                     ((C159 * C73 + C62 * C162) * C105 +
                      (C159 * C108 + C62 * C188) * C5363) *
                         C63 * C57 * C311) *
                        C5508 +
                    (((C159 * C603 + C62 * C707) * C105 +
                      (C159 * C641 + C62 * C739) * C5363) *
                         C63 * C57 * C310 -
                     ((C159 * C642 + C62 * C740) * C5363 +
                      (C159 * C604 + C62 * C708) * C105) *
                         C63 * C57 * C309 -
                     ((C159 * C643 + C62 * C741) * C5363 +
                      (C159 * C605 + C62 * C709) * C105) *
                         C63 * C57 * C311) *
                        C5401)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C159 * C71 + C62 * C160) * C928 +
                     (C159 * C106 + C62 * C186) * C889 -
                     (C159 * C318 + C62 * C422) * C929 -
                     (C159 * C357 + C62 * C453) * C890 +
                     (C159 * C894 + C62 * C991) * C930 +
                     (C159 * C931 + C62 * C1021) * C891) *
                        C63 * C57 * C5320 * C5508 +
                    ((C159 * C1351 + C62 * C1445) * C929 -
                     ((C159 * C642 + C62 * C740) * C889 +
                      (C159 * C604 + C62 * C708) * C928) +
                     (C159 * C1385 + C62 * C1475) * C890 -
                     (C159 * C1352 + C62 * C1446) * C930 -
                     (C159 * C1386 + C62 * C1476) * C891) *
                        C63 * C57 * C5320 * C5401)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C159 * C71 + C62 * C160) * C673 +
                     (C159 * C133 + C62 * C208) * C5508 -
                     (C159 * C604 + C62 * C708) * C674 -
                     (C159 * C675 + C62 * C768) * C5401) *
                        C63 * C57 * C5363 * C309 +
                    ((C159 * C603 + C62 * C707) * C674 -
                     ((C159 * C134 + C62 * C209) * C5508 +
                      (C159 * C72 + C62 * C161) * C673) +
                     (C159 * C676 + C62 * C769) * C5401) *
                        C63 * C57 * C5363 * C310 +
                    ((C159 * C73 + C62 * C162) * C673 +
                     (C159 * C135 + C62 * C210) * C5508 -
                     (C159 * C605 + C62 * C709) * C674 -
                     (C159 * C677 + C62 * C770) * C5401) *
                        C63 * C57 * C5363 * C311)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C159 * C71 + C62 * C160) * C673 +
                     (C159 * C133 + C62 * C208) * C5508 -
                     (C159 * C604 + C62 * C708) * C674 -
                     (C159 * C675 + C62 * C768) * C5401) *
                        C63 * C57 * C889 +
                    ((C159 * C1351 + C62 * C1445) * C674 -
                     ((C159 * C389 + C62 * C482) * C5508 +
                      (C159 * C318 + C62 * C422) * C673) +
                     (C159 * C1415 + C62 * C1503) * C5401) *
                        C63 * C57 * C890 +
                    ((C159 * C894 + C62 * C991) * C673 +
                     (C159 * C961 + C62 * C1049) * C5508 -
                     (C159 * C1352 + C62 * C1446) * C674 -
                     (C159 * C1416 + C62 * C1504) * C5401) *
                        C63 * C57 * C891) *
                   C5320) /
                      (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C230 * C71 + C63 * C231) * C314 + (C230 * C76 + C63 * C235) * C309 -
           (C230 * C72 + C63 * C232) * C315 - (C230 * C78 + C63 * C236) * C310 +
           (C230 * C73 + C63 * C233) * C316 +
           (C230 * C80 + C63 * C237) * C311) *
              C57 * C62 * C5508 +
          ((C230 * C603 + C63 * C797) * C315 -
           ((C230 * C607 + C63 * C800) * C309 +
            (C230 * C604 + C63 * C798) * C314) +
           (C230 * C609 + C63 * C801) * C310 -
           (C230 * C605 + C63 * C799) * C316 -
           (C230 * C611 + C63 * C802) * C311) *
              C57 * C62 * C5401) *
         C5363) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C230 * C71 + C63 * C231) * C1160 +
            (C230 * C76 + C63 * C235) * C5320) *
               C57 * C62 * C5508 -
           ((C230 * C607 + C63 * C800) * C5320 +
            (C230 * C604 + C63 * C798) * C1160) *
               C57 * C62 * C5401) *
              C889 +
          (((C230 * C1351 + C63 * C1531) * C1160 +
            (C230 * C1354 + C63 * C1533) * C5320) *
               C57 * C62 * C5401 -
           ((C230 * C321 + C63 * C514) * C5320 +
            (C230 * C318 + C63 * C512) * C1160) *
               C57 * C62 * C5508) *
              C890 +
          (((C230 * C894 + C63 * C1077) * C1160 +
            (C230 * C897 + C63 * C1079) * C5320) *
               C57 * C62 * C5508 -
           ((C230 * C1355 + C63 * C1534) * C5320 +
            (C230 * C1352 + C63 * C1532) * C1160) *
               C57 * C62 * C5401) *
              C891)) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C230 * C71 + C63 * C231) * C105 +
                      (C230 * C106 + C63 * C257) * C5363) *
                         C57 * C62 * C309 -
                     ((C230 * C107 + C63 * C258) * C5363 +
                      (C230 * C72 + C63 * C232) * C105) *
                         C57 * C62 * C310 +
                     ((C230 * C73 + C63 * C233) * C105 +
                      (C230 * C108 + C63 * C259) * C5363) *
                         C57 * C62 * C311) *
                        C5508 +
                    (((C230 * C603 + C63 * C797) * C105 +
                      (C230 * C641 + C63 * C829) * C5363) *
                         C57 * C62 * C310 -
                     ((C230 * C642 + C63 * C830) * C5363 +
                      (C230 * C604 + C63 * C798) * C105) *
                         C57 * C62 * C309 -
                     ((C230 * C643 + C63 * C831) * C5363 +
                      (C230 * C605 + C63 * C799) * C105) *
                         C57 * C62 * C311) *
                        C5401)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C230 * C71 + C63 * C231) * C928 +
                     (C230 * C106 + C63 * C257) * C889 -
                     (C230 * C318 + C63 * C512) * C929 -
                     (C230 * C357 + C63 * C543) * C890 +
                     (C230 * C894 + C63 * C1077) * C930 +
                     (C230 * C931 + C63 * C1107) * C891) *
                        C57 * C62 * C5320 * C5508 +
                    ((C230 * C1351 + C63 * C1531) * C929 -
                     ((C230 * C642 + C63 * C830) * C889 +
                      (C230 * C604 + C63 * C798) * C928) +
                     (C230 * C1385 + C63 * C1561) * C890 -
                     (C230 * C1352 + C63 * C1532) * C930 -
                     (C230 * C1386 + C63 * C1562) * C891) *
                        C57 * C62 * C5320 * C5401)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C230 * C71 + C63 * C231) * C673 +
                     (C230 * C133 + C63 * C279) * C5508 -
                     (C230 * C604 + C63 * C798) * C674 -
                     (C230 * C675 + C63 * C858) * C5401) *
                        C57 * C62 * C5363 * C309 +
                    ((C230 * C603 + C63 * C797) * C674 -
                     ((C230 * C134 + C63 * C280) * C5508 +
                      (C230 * C72 + C63 * C232) * C673) +
                     (C230 * C676 + C63 * C859) * C5401) *
                        C57 * C62 * C5363 * C310 +
                    ((C230 * C73 + C63 * C233) * C673 +
                     (C230 * C135 + C63 * C281) * C5508 -
                     (C230 * C605 + C63 * C799) * C674 -
                     (C230 * C677 + C63 * C860) * C5401) *
                        C57 * C62 * C5363 * C311)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C230 * C71 + C63 * C231) * C673 +
                     (C230 * C133 + C63 * C279) * C5508 -
                     (C230 * C604 + C63 * C798) * C674 -
                     (C230 * C675 + C63 * C858) * C5401) *
                        C57 * C62 * C889 +
                    ((C230 * C1351 + C63 * C1531) * C674 -
                     ((C230 * C389 + C63 * C572) * C5508 +
                      (C230 * C318 + C63 * C512) * C673) +
                     (C230 * C1415 + C63 * C1589) * C5401) *
                        C57 * C62 * C890 +
                    ((C230 * C894 + C63 * C1077) * C673 +
                     (C230 * C961 + C63 * C1135) * C5508 -
                     (C230 * C1352 + C63 * C1532) * C674 -
                     (C230 * C1416 + C63 * C1590) * C5401) *
                        C57 * C62 * C891) *
                   C5320) /
                      (p * q * std::sqrt(p + q));
}
