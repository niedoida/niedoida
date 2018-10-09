/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_21(double ae,
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
    const double C4839 = ae + be;
    const double C4842 = Pi / C4839;
    const double C4843 = std::sqrt(C4842);
    const double C4848 = std::pow(C4839, 2);
    const double C4847 = be * xAB;
    const double C4856 = be * yAB;
    const double C4859 = be * zAB;
    const double C4875 = C4843 * C4859;
    const double C4874 = C4843 * C4856;
    const double C4873 = ae * zAB;
    const double C4872 = ae * yAB;
    const double C4871 = be * zAB;
    const double C4870 = be * yAB;
    const double C4869 = 2. * C4848;
    const double C4868 = C4843 * C4847;
    const double C4867 = ae * xAB;
    const double C4866 = 2. * C4839;
    const double C4865 = be * xAB;
    const double C4864 = Pi / C4839;
    const double C4877 = C4843 / C4866;
    const double C4876 = std::sqrt(C4864);
    const double C4748 = -(C4876 * C4865) / C4839;
    const double C4750 =
        (C4843 * std::pow(C4865, 2)) / std::pow(C4839, 2) + C4877;
    const double C4753 =
        (((C4843 * std::pow(C4847, 2)) / C4848 + C4877) * C4867) / C4839 +
        (-2. * C4868) / C4869;
    const double C4754 = -(C4843 * C4870) / C4839;
    const double C4755 = -(C4843 * C4871) / C4839;
    const double C4771 = (C4843 * C4872) / C4839;
    const double C4774 = (C4843 * C4873) / C4839;
    const double C4777 = (C4843 * std::pow(C4870, 2)) / C4848 + C4877;
    const double C4778 = (C4843 * C4867) / C4839;
    const double C4784 =
        (((C4843 * std::pow(C4856, 2)) / C4848 + C4877) * C4872) / C4839 +
        (-2. * C4874) / C4869;
    const double C4798 = (C4843 * std::pow(C4871, 2)) / C4848 + C4877;
    const double C4806 =
        (((C4843 * std::pow(C4859, 2)) / C4848 + C4877) * C4873) / C4839 +
        (-2. * C4875) / C4869;
    const double C4818 = C4877 - (C4867 * C4868) / C4848;
    const double C4821 = C4877 - (C4872 * C4874) / C4848;
    const double C4830 = C4877 - (C4873 * C4875) / C4848;
    const double C4759 = be * xAB;
    const double C4758 = be * C4876;
    const double C4757 = ae + be;
    const double C4756 = ae * C4748;
    const double C4762 = C4756 * C4759;
    const double C4761 = 2 * C4758;
    const double C4760 = 2. * C4757;
    const double C4764 = 2 * C4762;
    const double C4763 = -C4761;
    const double C4766 = C4764 / C4757;
    const double C4765 = C4763 / C4760;
    const double C4767 = C4765 - C4766;
    const double C4780 = be * yAB;
    const double C4779 = ae * C4754;
    const double C4786 = C4779 * C4780;
    const double C4785 = be * C4843;
    const double C4788 = 2 * C4786;
    const double C4787 = 2 * C4785;
    const double C4790 = C4788 / C4757;
    const double C4789 = -C4787;
    const double C4791 = C4789 / C4760;
    const double C4792 = C4791 - C4790;
    const double C4800 = be * zAB;
    const double C4799 = ae * C4755;
    const double C4808 = C4799 * C4800;
    const double C4807 = be * C4843;
    const double C4810 = 2 * C4808;
    const double C4809 = 2 * C4807;
    const double C4812 = C4810 / C4757;
    const double C4811 = -C4809;
    const double C4813 = C4811 / C4760;
    const double C4814 = C4813 - C4812;
    const double C4901 = 4. * C4799;
    const double C4900 = C4814 * C4873;
    const double C4899 = 4. * C4779;
    const double C4898 = C4792 * C4872;
    const double C4897 = 4. * C4756;
    const double C4896 = C4767 * C4867;
    const double C4895 = C4791 - C4812;
    const double C4894 = be * C4755;
    const double C4893 = C4792 * C4780;
    const double C4892 = be * C4754;
    const double C4891 = ae * C4876;
    const double C4890 = C4756 * C4867;
    const double C4889 = C4799 * C4873;
    const double C4888 = ae * C4843;
    const double C4887 = C4779 * C4872;
    const double C4886 = 2 * C4799;
    const double C4885 = 2 * C4779;
    const double C4884 = C4767 * C4759;
    const double C4883 = be * C4748;
    const double C4882 = 2 * C4756;
    const double C4918 = C4901 / C4760;
    const double C4917 = C4900 / C4757;
    const double C4916 = C4899 / C4760;
    const double C4915 = C4898 / C4757;
    const double C4914 = C4897 / C4760;
    const double C4913 = C4896 / C4757;
    const double C4912 = C4895 * C4800;
    const double C4911 = 2 * C4894;
    const double C4910 = C4893 / C4757;
    const double C4909 = 2 * C4892;
    const double C4908 = 2. * C4891;
    const double C4907 = 2 * C4890;
    const double C4906 = 2 * C4889;
    const double C4905 = 2. * C4888;
    const double C4904 = 2 * C4887;
    const double C4903 = C4884 / C4757;
    const double C4902 = 2 * C4883;
    const double C4930 = C4917 + C4918;
    const double C4929 = C4915 + C4916;
    const double C4928 = C4913 + C4914;
    const double C4927 = C4912 / C4757;
    const double C4926 = C4886 - C4911;
    const double C4925 = C4885 - C4909;
    const double C4924 = C4908 / C4760;
    const double C4923 = C4907 / C4757;
    const double C4922 = C4906 / C4757;
    const double C4921 = C4905 / C4760;
    const double C4920 = C4904 / C4757;
    const double C4919 = C4882 - C4902;
    const double C4936 = C4926 / C4760;
    const double C4935 = C4925 / C4760;
    const double C4934 = C4923 + C4924;
    const double C4933 = C4922 + C4921;
    const double C4932 = C4920 + C4921;
    const double C4931 = C4919 / C4760;
    const double C4939 = C4936 - C4927;
    const double C4938 = C4935 - C4910;
    const double C4937 = C4931 - C4903;
    const double gx200100 =
        ((C4937 * C4867) / C4757 + (2 * C4767 + 2 * ae * C4750) / C4760) *
        std::pow(C4843, 2);
    const double gx200010 = C4937 * C4771 * C4843;
    const double gx200001 = C4937 * C4843 * C4774;
    const double gx020100 = C4934 * C4777 * C4843;
    const double gx020010 = 2 * C4756 * C4784 * C4843;
    const double gx020001 = 2 * C4756 * C4777 * C4774;
    const double gx002100 = C4934 * C4843 * C4798;
    const double gx002010 = 2 * C4756 * C4771 * C4798;
    const double gx002001 = 2 * C4756 * C4843 * C4806;
    const double gx110100 = C4928 * C4754 * C4843;
    const double gx110010 = C4767 * C4821 * C4843;
    const double gx110001 = C4767 * C4754 * C4774;
    const double gx101100 = C4928 * C4843 * C4755;
    const double gx101010 = C4767 * C4771 * C4755;
    const double gx101001 = C4767 * C4843 * C4830;
    const double gx011100 = C4934 * C4754 * C4755;
    const double gx011010 = 2 * C4756 * C4821 * C4755;
    const double gx011001 = 2 * C4756 * C4754 * C4830;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx110100;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gx110010;
    gx[(Ai + 0) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * gx110001;
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx011100;
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gx011010;
    gx[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * gx011001;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        cc * (-0.5 * gx200100 - 0.5 * gx020100 + gx002100);
    gx[(Ai + 2) * matrix_size + Bi + 1] +=
        cc * (-0.5 * gx200010 - 0.5 * gx020010 + gx002010);
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gx200001 - 0.5 * gx020001 + gx002001);
    gx[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx101100;
    gx[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gx101010;
    gx[(Ai + 3) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * gx101001;
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(0.75) * gx200100 - std::sqrt(0.75) * gx020100);
    gx[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(0.75) * gx200010 - std::sqrt(0.75) * gx020010);
    gx[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(0.75) * gx200001 - std::sqrt(0.75) * gx020001);
    const double gy200100 = C4753 * C4885 * C4843;
    const double gy200010 = C4750 * C4932 * C4843;
    const double gy200001 = C4750 * C4885 * C4774;
    const double gy020100 = C4778 * C4938 * C4843;
    const double gy020010 =
        C4876 *
        ((C4938 * C4872) / C4757 + (2 * C4792 + 2 * ae * C4777) / C4760) *
        C4843;
    const double gy020001 = C4876 * C4938 * C4774;
    const double gy002100 = C4778 * C4885 * C4798;
    const double gy002010 = C4876 * C4932 * C4798;
    const double gy002001 = C4876 * C4885 * C4806;
    const double gy110100 = C4818 * C4792 * C4843;
    const double gy110010 = C4748 * C4929 * C4843;
    const double gy110001 = C4748 * C4792 * C4774;
    const double gy101100 = C4818 * C4885 * C4755;
    const double gy101010 = C4748 * C4932 * C4755;
    const double gy101001 = C4748 * C4885 * C4830;
    const double gy011100 = C4778 * C4792 * C4755;
    const double gy011010 = C4876 * C4929 * C4755;
    const double gy011001 = C4876 * C4792 * C4830;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy110100;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gy110010;
    gy[(Ai + 0) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * gy110001;
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy011100;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gy011010;
    gy[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * gy011001;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        cc * (-0.5 * gy200100 - 0.5 * gy020100 + gy002100);
    gy[(Ai + 2) * matrix_size + Bi + 1] +=
        cc * (-0.5 * gy200010 - 0.5 * gy020010 + gy002010);
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gy200001 - 0.5 * gy020001 + gy002001);
    gy[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy101100;
    gy[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gy101010;
    gy[(Ai + 3) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * gy101001;
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(0.75) * gy200100 - std::sqrt(0.75) * gy020100);
    gy[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(0.75) * gy200010 - std::sqrt(0.75) * gy020010);
    gy[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(0.75) * gy200001 - std::sqrt(0.75) * gy020001);
    const double gz200100 = C4753 * C4843 * C4886;
    const double gz200010 = C4750 * C4771 * C4886;
    const double gz200001 = C4750 * C4843 * C4933;
    const double gz020100 = C4778 * C4777 * C4886;
    const double gz020010 = C4876 * C4784 * C4886;
    const double gz020001 = C4876 * C4777 * C4933;
    const double gz002100 = C4778 * C4843 * C4939;
    const double gz002010 = C4876 * C4771 * C4939;
    const double gz002001 =
        C4876 * C4843 *
        (((C4936 - (C4814 * C4800) / C4757) * C4873) / C4757 +
         (2 * C4814 + 2 * ae * C4798) / C4760);
    const double gz110100 = C4818 * C4754 * C4886;
    const double gz110010 = C4748 * C4821 * C4886;
    const double gz110001 = C4748 * C4754 * C4933;
    const double gz101100 = C4818 * C4843 * C4814;
    const double gz101010 = C4748 * C4771 * C4814;
    const double gz101001 = C4748 * C4843 * C4930;
    const double gz011100 = C4778 * C4754 * C4814;
    const double gz011010 = C4876 * C4821 * C4814;
    const double gz011001 = C4876 * C4754 * C4930;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz110100;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gz110010;
    gz[(Ai + 0) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * gz110001;
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz011100;
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gz011010;
    gz[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * gz011001;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        cc * (-0.5 * gz200100 - 0.5 * gz020100 + gz002100);
    gz[(Ai + 2) * matrix_size + Bi + 1] +=
        cc * (-0.5 * gz200010 - 0.5 * gz020010 + gz002010);
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gz200001 - 0.5 * gz020001 + gz002001);
    gz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz101100;
    gz[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gz101010;
    gz[(Ai + 3) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * gz101001;
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(0.75) * gz200100 - std::sqrt(0.75) * gz020100);
    gz[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(0.75) * gz200010 - std::sqrt(0.75) * gz020010);
    gz[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(0.75) * gz200001 - std::sqrt(0.75) * gz020001);
}

// Automatically generated, do not edit
