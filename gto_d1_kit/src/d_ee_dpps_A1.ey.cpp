/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2110_1_vr(const double ae,
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
                            const double* const g,
                            double* const vrx,
                            double* const vry,
                            double* const vrz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double muab = ae * be / p;
    const double mucd = ce * de / q;
    const double rAB2 = xAB * xAB + yAB * yAB + zAB * zAB;
    const double rCD2 = xCD * xCD + yCD * yCD + zCD * zCD;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double kab = std::exp(-muab * rAB2);
    const double kcd = std::exp(-mucd * rCD2);
    const double C1897 = g[18];
    const double C1915 = g[19];
    const double C2037 = g[21];
    const double C2082 = g[22];
    const double C2099 = g[23];
    const double C2175 = g[24];
    const double C2220 = g[25];
    const double C2265 = g[26];
    const double C2282 = g[27];
    const double C2358 = g[28];
    const double C2402 = g[29];
    const double C2576 = g[33];
    const double C4148 = g[34];
    const double C4149 = g[35];
    const double C4170 = g[36];
    const double C4186 = g[37];
    const double C4202 = g[38];
    const double C4203 = g[39];
    const double C4274 = g[40];
    const double C4275 = g[41];
    const double C4291 = g[42];
    const double C4323 = g[43];
    const double C4324 = g[44];
    const double C4340 = g[45];
    const double C4371 = g[46];
    const double C4386 = g[47];
    const double C4430 = g[48];
    const double C4531 = g[49];
    const double C4546 = g[50];
    const double C4575 = g[51];
    const double C4647 = g[52];
    const double C4663 = g[53];
    const double C4693 = g[54];
    const double C4709 = g[55];
    const double C4739 = g[56];
    const double C4798 = g[57];
    const double C4906 = g[58];
    const double C4922 = g[59];
    const double C5003 = g[60];
    const double C5202 = g[61];
    const double C5621 = g[62];
    const double C5766 = g[63];
    const double C5832 = g[64];
    const double C6738 = g[65];
    const double C4152 = p + q;
    const double C4151 = p * q;
    const double C6829 = bs[5];
    const double C6828 = bs[4];
    const double C6826 = bs[3];
    const double C6824 = bs[2];
    const double C6822 = std::pow(Pi, 2.5);
    const double C6819 = bs[1];
    const double C6818 = ae * be;
    const double C6817 = bs[0];
    const double C6814 = zP - zQ;
    const double C6813 = be * zAB;
    const double C6812 = yP - yQ;
    const double C6811 = be * yAB;
    const double C6810 = 2 * p;
    const double C6808 = xP - xQ;
    const double C6807 = std::pow(p, 2);
    const double C6805 = be * xAB;
    const double C6804 = ae / p;
    const double C4153 = C4152 * p;
    const double C6823 = std::sqrt(C4152);
    const double C6821 = p * C4152;
    const double C6820 = kab * C4151;
    const double C6806 = ae * C4151;
    const double C6861 = 4 * C6822;
    const double C6859 = kab * C6818;
    const double C6848 = C6814 * C4151;
    const double C6847 = C6812 * C4151;
    const double C6842 = C6808 * C4151;
    const double C6841 = C4152 * C6807;
    const double C6840 = C6804 - 1;
    const double C6862 = C4151 * C6823;
    const double C6860 = kcd * C6820;
    const double C6874 = C5766 * C6806;
    const double C6869 = C5003 * C6806;
    const double C6867 = C4906 * C6806;
    const double C6866 = C4798 * C6806;
    const double C6865 = C4739 * C6806;
    const double C6864 = C4709 * C6806;
    const double C6858 = C4663 * C6806;
    const double C6857 = C4575 * C6806;
    const double C6856 = C4546 * C6806;
    const double C6855 = C4531 * C6806;
    const double C6854 = C4386 * C6806;
    const double C6853 = C4371 * C6806;
    const double C6851 = C4324 * C6806;
    const double C6849 = C4275 * C6806;
    const double C6846 = C4203 * C6806;
    const double C6845 = C4186 * C6806;
    const double C6844 = C4170 * C6806;
    const double C6906 = kcd * C6859;
    const double C6928 = C6840 * C4324;
    const double C6921 = C6840 * C4906;
    const double C6917 = C6840 * C4663;
    const double C6914 = C6840 * C4531;
    const double C6912 = C6840 * C4371;
    const double C6910 = C6840 * C4170;
    const double C6904 = C6840 * C4203;
    const double C6902 = C6840 * C2402;
    const double C6900 = C6840 * C2358;
    const double C6898 = C6840 * C2282;
    const double C6896 = C6840 * C2175;
    const double C6894 = C6840 * C2099;
    const double C6891 = C6840 * C4323;
    const double C6888 = C6840 * C4274;
    const double C6886 = C6840 * C4202;
    const double C6884 = C6840 * C1897;
    const double C6882 = C6840 * C1915;
    const double C6923 = C6829 * C6860;
    const double C6920 = C6828 * C6860;
    const double C6916 = C6826 * C6860;
    const double C6908 = C6824 * C6860;
    const double C6907 = C6819 * C6860;
    const double C6929 = C6874 / C6841;
    const double C6922 = C6869 / C6841;
    const double C6918 = C6867 / C6841;
    const double C6915 = C6866 / C6841;
    const double C6913 = C6865 / C6841;
    const double C6911 = C6864 / C6841;
    const double C6905 = C6858 / C6841;
    const double C6903 = C6857 / C6841;
    const double C6901 = C6856 / C6841;
    const double C6899 = C6855 / C6841;
    const double C6897 = C6854 / C6841;
    const double C6895 = C6853 / C6841;
    const double C6892 = C6851 / C6841;
    const double C6889 = C6849 / C6841;
    const double C6887 = C6846 / C6841;
    const double C6885 = C6845 / C6841;
    const double C6883 = C6844 / C6841;
    const double C6948 = C6828 * C6906;
    const double C6946 = C6826 * C6906;
    const double C6943 = C6824 * C6906;
    const double C6940 = C6819 * C6906;
    const double C6938 = C6817 * C6906;
    const double C6949 = C6923 * ae;
    const double C6947 = C6920 * ae;
    const double C6944 = C6916 * ae;
    const double C6941 = C6908 * ae;
    const double C6939 = C6907 * ae;
    const double C5007 =
        -(((xAB * C6948) / p + (C6808 * C6949) / C6821) * C6861) / C6862;
    const double C5888 =
        -(((yAB * C6948) / p + (C6812 * C6949) / C6821) * C6861) / C6862;
    const double C6766 =
        -(((zAB * C6948) / p + (C6814 * C6949) / C6821) * C6861) / C6862;
    const double C4910 =
        -(((xAB * C6946) / p + (C6808 * C6947) / C6821) * C6861) / C6862;
    const double C5792 =
        -(((yAB * C6946) / p + (C6812 * C6947) / C6821) * C6861) / C6862;
    const double C6670 =
        -(((zAB * C6946) / p + (C6814 * C6947) / C6821) * C6861) / C6862;
    const double C4667 =
        -(((xAB * C6943) / p + (C6808 * C6944) / C6821) * C6861) / C6862;
    const double C5566 =
        -(((yAB * C6943) / p + (C6812 * C6944) / C6821) * C6861) / C6862;
    const double C6446 =
        -(((zAB * C6943) / p + (C6814 * C6944) / C6821) * C6861) / C6862;
    const double C4158 =
        -(((xAB * C6940) / p + (C6808 * C6941) / C6821) * C6861) / C6862;
    const double C5059 =
        -(((yAB * C6940) / p + (C6812 * C6941) / C6821) * C6861) / C6862;
    const double C5940 =
        -(((zAB * C6940) / p + (C6814 * C6941) / C6821) * C6861) / C6862;
    const double C4157 =
        -(((xAB * C6938) / p + (C6808 * C6939) / C6821) * C6861) / C6862;
    const double C5058 =
        -(((yAB * C6938) / p + (C6812 * C6939) / C6821) * C6861) / C6862;
    const double C5939 =
        -(((zAB * C6938) / p + (C6814 * C6939) / C6821) * C6861) / C6862;
    const double C6827 = C4910 * C4151;
    const double C4926 =
        C6921 - (C4910 * C6805) / p - C6922 - (C5007 * C6842) / C4153;
    const double C4941 = -((C4910 * C6811) / p + (C5007 * C6847) / C4153);
    const double C4970 = -((C4910 * C6813) / p + (C5007 * C6848) / C4153);
    const double C6834 = C5792 * C4151;
    const double C5807 = -((C5792 * C6805) / p + (C5888 * C6842) / C4153);
    const double C5837 =
        C6921 - (C5792 * C6811) / p - C6922 - (C5888 * C6847) / C4153;
    const double C5866 = -((C5792 * C6813) / p + (C5888 * C6848) / C4153);
    const double C6839 = C6670 * C4151;
    const double C6685 = -((C6670 * C6805) / p + (C6766 * C6842) / C4153);
    const double C6714 = -((C6670 * C6811) / p + (C6766 * C6847) / C4153);
    const double C6744 =
        C6921 - (C6670 * C6813) / p - C6922 - (C6766 * C6848) / C4153;
    const double C6825 = C4667 * C4151;
    const double C4697 =
        C6917 - (C4667 * C6805) / p - C6918 - (C4910 * C6842) / C4153;
    const double C4758 = -((C4667 * C6811) / p + (C4910 * C6847) / C4153);
    const double C4817 = -((C4667 * C6813) / p + (C4910 * C6848) / C4153);
    const double C6833 = C5566 * C4151;
    const double C5581 = -((C5566 * C6805) / p + (C5792 * C6842) / C4153);
    const double C5626 =
        C6917 - (C5566 * C6811) / p - C6918 - (C5792 * C6847) / C4153;
    const double C5684 = -((C5566 * C6813) / p + (C5792 * C6848) / C4153);
    const double C6838 = C6446 * C4151;
    const double C6461 = -((C6446 * C6805) / p + (C6670 * C6842) / C4153);
    const double C6505 = -((C6446 * C6811) / p + (C6670 * C6847) / C4153);
    const double C6563 =
        C6917 - (C6446 * C6813) / p - C6918 - (C6670 * C6848) / C4153;
    const double C6809 = C4158 * C4151;
    const double C4156 =
        C6904 - (C4158 * C6805) / p - C6905 - (C4667 * C6842) / C4153;
    const double C4279 = -((C4158 * C6811) / p + (C4667 * C6847) / C4153);
    const double C4328 = -((C4158 * C6813) / p + (C4667 * C6848) / C4153);
    const double C6830 = C5059 * C4151;
    const double C5060 = -((C5059 * C6805) / p + (C5566 * C6842) / C4153);
    const double C5175 =
        C6904 - (C5059 * C6811) / p - C6905 - (C5566 * C6847) / C4153;
    const double C5222 = -((C5059 * C6813) / p + (C5566 * C6848) / C4153);
    const double C6835 = C5940 * C4151;
    const double C5941 = -((C5940 * C6805) / p + (C6446 * C6842) / C4153);
    const double C6056 = -((C5940 * C6811) / p + (C6446 * C6847) / C4153);
    const double C6102 =
        C6904 - (C5940 * C6813) / p - C6905 - (C6446 * C6848) / C4153;
    const double C1919 =
        C6886 - (C4157 * C6805) / p - C6887 - (C4158 * C6842) / C4153;
    const double C2132 = -((C4157 * C6811) / p + (C4158 * C6847) / C4153);
    const double C2345 = -((C4157 * C6813) / p + (C4158 * C6848) / C4153);
    const double C2640 = -((C5058 * C6805) / p + (C5059 * C6842) / C4153);
    const double C2849 =
        C6886 - (C5058 * C6811) / p - C6887 - (C5059 * C6847) / C4153;
    const double C3058 = -((C5058 * C6813) / p + (C5059 * C6848) / C4153);
    const double C3347 = -((C5939 * C6805) / p + (C5940 * C6842) / C4153);
    const double C3556 = -((C5939 * C6811) / p + (C5940 * C6847) / C4153);
    const double C3765 =
        C6886 - (C5939 * C6813) / p - C6887 - (C5940 * C6848) / C4153;
    const double C6868 = C6827 / C4153;
    const double C6875 = C6834 / C4153;
    const double C6880 = C6839 / C4153;
    const double C6863 = C6825 / C4153;
    const double C6873 = C6833 / C4153;
    const double C6879 = C6838 / C4153;
    const double C6843 = C6809 / C4153;
    const double C4651 = -((C4328 * C6811) / p + (C4817 * C6847) / C4153);
    const double C6870 = C6830 / C4153;
    const double C5537 =
        C6928 - (C5222 * C6811) / p - C6929 - (C5684 * C6847) / C4153;
    const double C6876 = C6835 / C4153;
    const double C6417 = -((C6102 * C6811) / p + (C6563 * C6847) / C4153);
    const double C1995 =
        C6888 - (C2132 * C6805) / p - C6889 - (C4279 * C6842) / C4153;
    const double C2041 =
        C6891 - (C2345 * C6805) / p - C6892 - (C4328 * C6842) / C4153;
    const double C2238 = -((C2345 * C6811) / p + (C4328 * C6847) / C4153);
    const double C2715 = -((C2849 * C6805) / p + (C5175 * C6842) / C4153);
    const double C2760 = -((C3058 * C6805) / p + (C5222 * C6842) / C4153);
    const double C2953 =
        C6891 - (C3058 * C6811) / p - C6892 - (C5222 * C6847) / C4153;
    const double C3422 = -((C3556 * C6805) / p + (C6056 * C6842) / C4153);
    const double C3467 = -((C3765 * C6805) / p + (C6102 * C6842) / C4153);
    const double C3660 = -((C3765 * C6811) / p + (C6102 * C6847) / C4153);
    const double C6919 = C4667 - C6868;
    const double C6930 = C5566 - C6875;
    const double C6935 = C6446 - C6880;
    const double C6909 = C4158 - C6863;
    const double C6927 = C5059 - C6873;
    const double C6934 = C5940 - C6879;
    const double C6881 = C4157 - C6843;
    const double C6924 = C5058 - C6870;
    const double C6931 = C5939 - C6876;
    const double C2478 = C6840 * C2576 - (C2238 * C6805) / p -
                         (C4647 * C6806) / C6841 - (C4651 * C6842) / C4153;
    const double C3188 = -((C2953 * C6805) / p + (C5537 * C6842) / C4153);
    const double C3895 = -((C3660 * C6805) / p + (C6417 * C6842) / C4153);
    const double C6945 = C6919 / C6810;
    const double C6953 = C6930 / C6810;
    const double C6957 = C6935 / C6810;
    const double C6942 = C6909 / C6810;
    const double C6952 = C6927 / C6810;
    const double C6956 = C6934 / C6810;
    const double C6936 = C6881 / C6810;
    const double C6950 = C6924 / C6810;
    const double C6954 = C6931 / C6810;
    const double C4713 = C6840 * C4693 - (C4697 * C6805) / p -
                         (C4922 * C6806) / C6841 - (C4926 * C6842) / C4153 +
                         C6945;
    const double C4743 =
        C6945 - ((C4758 * C6811) / p + (C4941 * C6847) / C4153);
    const double C4802 =
        C6945 - ((C4817 * C6813) / p + (C4970 * C6848) / C4153);
    const double C5596 =
        C6953 - ((C5581 * C6805) / p + (C5807 * C6842) / C4153);
    const double C5641 = C6840 * C5621 - (C5626 * C6811) / p -
                         (C5832 * C6806) / C6841 - (C5837 * C6847) / C4153 +
                         C6953;
    const double C5699 =
        C6953 - ((C5684 * C6813) / p + (C5866 * C6848) / C4153);
    const double C6476 =
        C6957 - ((C6461 * C6805) / p + (C6685 * C6842) / C4153);
    const double C6520 =
        C6957 - ((C6505 * C6811) / p + (C6714 * C6847) / C4153);
    const double C6578 = C6840 * C5766 - (C6563 * C6813) / p -
                         (C6738 * C6806) / C6841 - (C6744 * C6848) / C4153 +
                         C6957;
    const double C4174 = C6840 * C4149 - (C4156 * C6805) / p -
                         (C4693 * C6806) / C6841 - (C4697 * C6842) / C4153 +
                         C6942;
    const double C4296 =
        C6942 - ((C4279 * C6811) / p + (C4758 * C6847) / C4153);
    const double C4345 =
        C6942 - ((C4328 * C6813) / p + (C4817 * C6848) / C4153);
    const double C5075 =
        C6952 - ((C5060 * C6805) / p + (C5581 * C6842) / C4153);
    const double C5190 = C6840 * C4275 - (C5175 * C6811) / p -
                         (C5621 * C6806) / C6841 - (C5626 * C6847) / C4153 +
                         C6952;
    const double C5237 =
        C6952 - ((C5222 * C6813) / p + (C5684 * C6848) / C4153);
    const double C5956 =
        C6956 - ((C5941 * C6805) / p + (C6461 * C6842) / C4153);
    const double C6071 =
        C6956 - ((C6056 * C6811) / p + (C6505 * C6847) / C4153);
    const double C6117 =
        C6928 - (C6102 * C6813) / p - C6929 - (C6563 * C6848) / C4153 + C6956;
    const double C1901 = C6840 * C4148 - (C1919 * C6805) / p -
                         (C4149 * C6806) / C6841 - (C4156 * C6842) / C4153 +
                         C6936;
    const double C2086 =
        C6936 - ((C2132 * C6811) / p + (C4279 * C6847) / C4153);
    const double C2269 =
        C6936 - ((C2345 * C6813) / p + (C4328 * C6848) / C4153);
    const double C2623 =
        C6950 - ((C2640 * C6805) / p + (C5060 * C6842) / C4153);
    const double C2804 =
        C6888 - (C2849 * C6811) / p - C6889 - (C5175 * C6847) / C4153 + C6950;
    const double C2983 =
        C6950 - ((C3058 * C6813) / p + (C5222 * C6848) / C4153);
    const double C3330 =
        C6954 - ((C3347 * C6805) / p + (C5941 * C6842) / C4153);
    const double C3511 =
        C6954 - ((C3556 * C6811) / p + (C6056 * C6847) / C4153);
    const double C3690 =
        C6891 - (C3765 * C6813) / p - C6892 - (C6102 * C6848) / C4153 + C6954;
    const double C4190 = C6910 - (C4174 * C6805) / p - C6911 -
                         (C4713 * C6842) / C4153 +
                         (C4156 - (C4697 * C4151) / C4153) / p;
    const double C4311 = -((C4174 * C6813) / p + (C4713 * C6848) / C4153);
    const double C6815 = C4296 * C4151;
    const double C4295 =
        C6912 - (C4296 * C6805) / p - C6913 - (C4743 * C6842) / C4153;
    const double C4390 = (C4279 - (C4758 * C4151) / C4153) / p -
                         ((C4296 * C6811) / p + (C4743 * C6847) / C4153);
    const double C4434 = -((C4296 * C6813) / p + (C4743 * C6848) / C4153);
    const double C6816 = C4345 * C4151;
    const double C4344 =
        C6914 - (C4345 * C6805) / p - C6915 - (C4802 * C6842) / C4153;
    const double C4505 = -((C4345 * C6811) / p + (C4802 * C6847) / C4153);
    const double C4579 = (C4328 - (C4817 * C4151) / C4153) / p -
                         ((C4345 * C6813) / p + (C4802 * C6848) / C4153);
    const double C5090 = (C5060 - (C5581 * C4151) / C4153) / p -
                         ((C5075 * C6805) / p + (C5596 * C6842) / C4153);
    const double C5207 = -((C5075 * C6813) / p + (C5596 * C6848) / C4153);
    const double C6831 = C5190 * C4151;
    const double C5191 = -((C5190 * C6805) / p + (C5641 * C6842) / C4153);
    const double C5281 = C6912 - (C5190 * C6811) / p - C6913 -
                         (C5641 * C6847) / C4153 +
                         (C5175 - (C5626 * C4151) / C4153) / p;
    const double C5324 = -((C5190 * C6813) / p + (C5641 * C6848) / C4153);
    const double C6832 = C5237 * C4151;
    const double C5238 = -((C5237 * C6805) / p + (C5699 * C6842) / C4153);
    const double C5395 =
        C6914 - (C5237 * C6811) / p - C6915 - (C5699 * C6847) / C4153;
    const double C5466 = (C5222 - (C5684 * C4151) / C4153) / p -
                         ((C5237 * C6813) / p + (C5699 * C6848) / C4153);
    const double C5971 = (C5941 - (C6461 * C4151) / C4153) / p -
                         ((C5956 * C6805) / p + (C6476 * C6842) / C4153);
    const double C6087 =
        C6910 - (C5956 * C6813) / p - C6911 - (C6476 * C6848) / C4153;
    const double C6836 = C6071 * C4151;
    const double C6072 = -((C6071 * C6805) / p + (C6520 * C6842) / C4153);
    const double C6161 = (C6056 - (C6505 * C4151) / C4153) / p -
                         ((C6071 * C6811) / p + (C6520 * C6847) / C4153);
    const double C6204 =
        C6912 - (C6071 * C6813) / p - C6913 - (C6520 * C6848) / C4153;
    const double C6837 = C6117 * C4151;
    const double C6118 = -((C6117 * C6805) / p + (C6578 * C6842) / C4153);
    const double C6275 = -((C6117 * C6811) / p + (C6578 * C6847) / C4153);
    const double C6346 = C6914 - (C6117 * C6813) / p - C6915 -
                         (C6578 * C6848) / C4153 +
                         (C6102 - (C6563 * C4151) / C4153) / p;
    const double C1902 = C6882 - (C1901 * C6805) / p - C6883 -
                         (C4174 * C6842) / C4153 +
                         (C1919 - (C4156 * C4151) / C4153) / p;
    const double C1949 = -((C1901 * C6811) / p + (C4174 * C6847) / C4153);
    const double C1979 = -((C1901 * C6813) / p + (C4174 * C6848) / C4153);
    const double C2087 =
        C6894 - (C2086 * C6805) / p - C6895 - (C4296 * C6842) / C4153;
    const double C2133 = (C2132 - (C4279 * C4151) / C4153) / p -
                         ((C2086 * C6811) / p + (C4296 * C6847) / C4153);
    const double C2163 = -((C2086 * C6813) / p + (C4296 * C6848) / C4153);
    const double C2270 =
        C6898 - (C2269 * C6805) / p - C6899 - (C4345 * C6842) / C4153;
    const double C2315 = -((C2269 * C6811) / p + (C4345 * C6847) / C4153);
    const double C2346 = (C2345 - (C4328 * C4151) / C4153) / p -
                         ((C2269 * C6813) / p + (C4345 * C6848) / C4153);
    const double C2624 = (C2640 - (C5060 * C4151) / C4153) / p -
                         ((C2623 * C6805) / p + (C5075 * C6842) / C4153);
    const double C2670 =
        C6882 - (C2623 * C6811) / p - C6883 - (C5075 * C6847) / C4153;
    const double C2700 = -((C2623 * C6813) / p + (C5075 * C6848) / C4153);
    const double C2805 = -((C2804 * C6805) / p + (C5190 * C6842) / C4153);
    const double C2850 = C6894 - (C2804 * C6811) / p - C6895 -
                         (C5190 * C6847) / C4153 +
                         (C2849 - (C5175 * C4151) / C4153) / p;
    const double C2880 = -((C2804 * C6813) / p + (C5190 * C6848) / C4153);
    const double C2984 = -((C2983 * C6805) / p + (C5237 * C6842) / C4153);
    const double C3028 =
        C6898 - (C2983 * C6811) / p - C6899 - (C5237 * C6847) / C4153;
    const double C3059 = (C3058 - (C5222 * C4151) / C4153) / p -
                         ((C2983 * C6813) / p + (C5237 * C6848) / C4153);
    const double C3331 = (C3347 - (C5941 * C4151) / C4153) / p -
                         ((C3330 * C6805) / p + (C5956 * C6842) / C4153);
    const double C3377 = -((C3330 * C6811) / p + (C5956 * C6847) / C4153);
    const double C3407 =
        C6882 - (C3330 * C6813) / p - C6883 - (C5956 * C6848) / C4153;
    const double C3512 = -((C3511 * C6805) / p + (C6071 * C6842) / C4153);
    const double C3557 = (C3556 - (C6056 * C4151) / C4153) / p -
                         ((C3511 * C6811) / p + (C6071 * C6847) / C4153);
    const double C3587 =
        C6894 - (C3511 * C6813) / p - C6895 - (C6071 * C6848) / C4153;
    const double C3691 = -((C3690 * C6805) / p + (C6117 * C6842) / C4153);
    const double C3735 = -((C3690 * C6811) / p + (C6117 * C6847) / C4153);
    const double C3766 = C6898 - (C3690 * C6813) / p - C6899 -
                         (C6117 * C6848) / C4153 +
                         (C3765 - (C6102 * C4151) / C4153) / p;
    const double C6850 = C6815 / C4153;
    const double C6852 = C6816 / C4153;
    const double C6871 = C6831 / C4153;
    const double C6872 = C6832 / C4153;
    const double C6877 = C6836 / C4153;
    const double C6878 = C6837 / C4153;
    const double C1903 = C6884 - (C1902 * C6805) / p - C6885 -
                         (C4190 * C6842) / C4153 +
                         (3 * (C1901 - (C4174 * C4151) / C4153)) / C6810;
    const double C1934 = -((C1902 * C6811) / p + (C4190 * C6847) / C4153);
    const double C1964 = -((C1902 * C6813) / p + (C4190 * C6848) / C4153);
    const double C2025 = -((C1979 * C6811) / p + (C4311 * C6847) / C4153);
    const double C2117 =
        C6896 - (C2133 * C6805) / p - C6897 - (C4390 * C6842) / C4153;
    const double C2208 = -((C2133 * C6813) / p + (C4390 * C6848) / C4153);
    const double C2148 = C6840 * C2220 - (C2163 * C6805) / p -
                         (C4430 * C6806) / C6841 - (C4434 * C6842) / C4153;
    const double C2300 =
        C6900 - (C2315 * C6805) / p - C6901 - (C4505 * C6842) / C4153;
    const double C2330 =
        C6902 - (C2346 * C6805) / p - C6903 - (C4579 * C6842) / C4153;
    const double C2390 = -((C2346 * C6811) / p + (C4579 * C6847) / C4153);
    const double C2625 = (3 * (C2623 - (C5075 * C4151) / C4153)) / C6810 -
                         ((C2624 * C6805) / p + (C5090 * C6842) / C4153);
    const double C2655 =
        C6884 - (C2624 * C6811) / p - C6885 - (C5090 * C6847) / C4153;
    const double C2685 = -((C2624 * C6813) / p + (C5090 * C6848) / C4153);
    const double C2745 = C6840 * C2037 - (C2700 * C6811) / p -
                         (C5202 * C6806) / C6841 - (C5207 * C6847) / C4153;
    const double C2834 = -((C2850 * C6805) / p + (C5281 * C6842) / C4153);
    const double C2924 = -((C2850 * C6813) / p + (C5281 * C6848) / C4153);
    const double C2865 = -((C2880 * C6805) / p + (C5324 * C6842) / C4153);
    const double C3013 = -((C3028 * C6805) / p + (C5395 * C6842) / C4153);
    const double C3043 = -((C3059 * C6805) / p + (C5466 * C6842) / C4153);
    const double C3102 =
        C6902 - (C3059 * C6811) / p - C6903 - (C5466 * C6847) / C4153;
    const double C3332 = (3 * (C3330 - (C5956 * C4151) / C4153)) / C6810 -
                         ((C3331 * C6805) / p + (C5971 * C6842) / C4153);
    const double C3362 = -((C3331 * C6811) / p + (C5971 * C6847) / C4153);
    const double C3392 =
        C6884 - (C3331 * C6813) / p - C6885 - (C5971 * C6848) / C4153;
    const double C3452 = -((C3407 * C6811) / p + (C6087 * C6847) / C4153);
    const double C3541 = -((C3557 * C6805) / p + (C6161 * C6842) / C4153);
    const double C3631 =
        C6896 - (C3557 * C6813) / p - C6897 - (C6161 * C6848) / C4153;
    const double C3572 = -((C3587 * C6805) / p + (C6204 * C6842) / C4153);
    const double C3720 = -((C3735 * C6805) / p + (C6275 * C6842) / C4153);
    const double C3750 = -((C3766 * C6805) / p + (C6346 * C6842) / C4153);
    const double C3809 = -((C3766 * C6811) / p + (C6346 * C6847) / C4153);
    const double C6890 = C2086 - C6850;
    const double C6893 = C2269 - C6852;
    const double C6925 = C2804 - C6871;
    const double C6926 = C2983 - C6872;
    const double C6932 = C3511 - C6877;
    const double C6933 = C3690 - C6878;
    const double C2010 = C6840 * C2082 - (C2087 * C6805) / p -
                         (C4291 * C6806) / C6841 - (C4295 * C6842) / C4153 +
                         C6890 / C6810;
    const double C2193 =
        (3 * C6890) / C6810 - ((C2133 * C6811) / p + (C4390 * C6847) / C4153);
    const double C6937 = C6893 / C6810;
    const double C2434 =
        (3 * C6893) / C6810 - ((C2346 * C6813) / p + (C4579 * C6848) / C4153);
    const double C2730 =
        C6925 / C6810 - ((C2805 * C6805) / p + (C5191 * C6842) / C4153);
    const double C2909 = C6896 - (C2850 * C6811) / p - C6897 -
                         (C5281 * C6847) / C4153 + (3 * C6925) / C6810;
    const double C6951 = C6926 / C6810;
    const double C3145 =
        (3 * C6926) / C6810 - ((C3059 * C6813) / p + (C5466 * C6848) / C4153);
    const double C3437 =
        C6932 / C6810 - ((C3512 * C6805) / p + (C6072 * C6842) / C4153);
    const double C3616 =
        (3 * C6932) / C6810 - ((C3557 * C6811) / p + (C6161 * C6847) / C4153);
    const double C6955 = C6933 / C6810;
    const double C3852 = C6902 - (C3766 * C6813) / p - C6903 -
                         (C6346 * C6848) / C4153 + (3 * C6933) / C6810;
    const double C2070 = C6840 * C2265 - (C2270 * C6805) / p -
                         (C4340 * C6806) / C6841 - (C4344 * C6842) / C4153 +
                         C6937;
    const double C2253 =
        C6937 - ((C2315 * C6811) / p + (C4505 * C6847) / C4153);
    const double C2789 =
        C6951 - ((C2984 * C6805) / p + (C5238 * C6842) / C4153);
    const double C2968 =
        C6900 - (C3028 * C6811) / p - C6901 - (C5395 * C6847) / C4153 + C6951;
    const double C3496 =
        C6955 - ((C3691 * C6805) / p + (C6118 * C6842) / C4153);
    const double C3675 =
        C6955 - ((C3735 * C6811) / p + (C6275 * C6847) / C4153);
    vrx[0] = C1901;
    vrx[1] = C1902;
    vrx[2] = C1903;
    vrx[3] = C1919;
    vrx[4] = C1934;
    vrx[5] = C1949;
    vrx[6] = C1964;
    vrx[7] = C1979;
    vrx[8] = C1995;
    vrx[9] = C2010;
    vrx[10] = C2025;
    vrx[11] = C2041;
    vrx[12] = C2070;
    vrx[13] = C2086;
    vrx[14] = C2087;
    vrx[15] = C2117;
    vrx[16] = C2132;
    vrx[17] = C2133;
    vrx[18] = C2148;
    vrx[19] = C2163;
    vrx[20] = C2193;
    vrx[21] = C2208;
    vrx[22] = C2238;
    vrx[23] = C2253;
    vrx[24] = C2269;
    vrx[25] = C2270;
    vrx[26] = C2300;
    vrx[27] = C2315;
    vrx[28] = C2330;
    vrx[29] = C2345;
    vrx[30] = C2346;
    vrx[31] = C2390;
    vrx[32] = C2434;
    vrx[33] = C2478;
    vry[0] = C2623;
    vry[1] = C2624;
    vry[2] = C2625;
    vry[3] = C2640;
    vry[4] = C2655;
    vry[5] = C2670;
    vry[6] = C2685;
    vry[7] = C2700;
    vry[8] = C2715;
    vry[9] = C2730;
    vry[10] = C2745;
    vry[11] = C2760;
    vry[12] = C2789;
    vry[13] = C2804;
    vry[14] = C2805;
    vry[15] = C2834;
    vry[16] = C2849;
    vry[17] = C2850;
    vry[18] = C2865;
    vry[19] = C2880;
    vry[20] = C2909;
    vry[21] = C2924;
    vry[22] = C2953;
    vry[23] = C2968;
    vry[24] = C2983;
    vry[25] = C2984;
    vry[26] = C3013;
    vry[27] = C3028;
    vry[28] = C3043;
    vry[29] = C3058;
    vry[30] = C3059;
    vry[31] = C3102;
    vry[32] = C3145;
    vry[33] = C3188;
    vrz[0] = C3330;
    vrz[1] = C3331;
    vrz[2] = C3332;
    vrz[3] = C3347;
    vrz[4] = C3362;
    vrz[5] = C3377;
    vrz[6] = C3392;
    vrz[7] = C3407;
    vrz[8] = C3422;
    vrz[9] = C3437;
    vrz[10] = C3452;
    vrz[11] = C3467;
    vrz[12] = C3496;
    vrz[13] = C3511;
    vrz[14] = C3512;
    vrz[15] = C3541;
    vrz[16] = C3556;
    vrz[17] = C3557;
    vrz[18] = C3572;
    vrz[19] = C3587;
    vrz[20] = C3616;
    vrz[21] = C3631;
    vrz[22] = C3660;
    vrz[23] = C3675;
    vrz[24] = C3690;
    vrz[25] = C3691;
    vrz[26] = C3720;
    vrz[27] = C3735;
    vrz[28] = C3750;
    vrz[29] = C3765;
    vrz[30] = C3766;
    vrz[31] = C3809;
    vrz[32] = C3852;
    vrz[33] = C3895;
}
