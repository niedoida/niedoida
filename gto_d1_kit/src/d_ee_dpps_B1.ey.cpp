/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2110_2_vr(const double ae,
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
    const double C4166 = g[34];
    const double C4186 = g[35];
    const double C4187 = g[36];
    const double C4204 = g[37];
    const double C4220 = g[38];
    const double C4221 = g[39];
    const double C4292 = g[40];
    const double C4293 = g[41];
    const double C4309 = g[42];
    const double C4341 = g[43];
    const double C4342 = g[44];
    const double C4358 = g[45];
    const double C4375 = g[46];
    const double C4404 = g[47];
    const double C4448 = g[48];
    const double C4535 = g[49];
    const double C4564 = g[50];
    const double C4593 = g[51];
    const double C4665 = g[52];
    const double C4681 = g[53];
    const double C4698 = g[54];
    const double C4727 = g[55];
    const double C4757 = g[56];
    const double C4816 = g[57];
    const double C4917 = g[58];
    const double C4940 = g[59];
    const double C5021 = g[60];
    const double C5220 = g[61];
    const double C5639 = g[62];
    const double C5784 = g[63];
    const double C5850 = g[64];
    const double C6756 = g[65];
    const double C4169 = p + q;
    const double C4168 = p * q;
    const double C6867 = C4342 * be;
    const double C6862 = bs[5];
    const double C6861 = C4917 * be;
    const double C6860 = bs[4];
    const double C6858 = bs[3];
    const double C6857 = C4698 * be;
    const double C6856 = C4535 * be;
    const double C6855 = C4375 * be;
    const double C6854 = C4166 * be;
    const double C6853 = bs[2];
    const double C6851 = std::pow(Pi, 2.5);
    const double C6850 = ae * be;
    const double C6849 = bs[0];
    const double C6846 = bs[1];
    const double C6845 = C4221 * be;
    const double C6843 = C2402 * be;
    const double C6842 = C2358 * be;
    const double C6841 = C2282 * be;
    const double C6840 = C2175 * be;
    const double C6839 = C2099 * be;
    const double C6837 = C4341 * be;
    const double C6835 = C4292 * be;
    const double C6834 = zP - zQ;
    const double C6833 = be * zAB;
    const double C6832 = yP - yQ;
    const double C6831 = be * yAB;
    const double C6830 = C4220 * be;
    const double C6829 = C1897 * be;
    const double C6828 = 2 * p;
    const double C6826 = xP - xQ;
    const double C6825 = std::pow(p, 2);
    const double C6823 = be * xAB;
    const double C6822 = C1915 * be;
    const double C4170 = C4169 * p;
    const double C6852 = std::sqrt(C4169);
    const double C6848 = p * C4169;
    const double C6847 = C4168 * be;
    const double C6824 = be * C4168;
    const double C6923 = C6867 / p;
    const double C6917 = C6861 / p;
    const double C6914 = C6857 / p;
    const double C6912 = C6856 / p;
    const double C6910 = C6855 / p;
    const double C6908 = C6854 / p;
    const double C6906 = 4 * C6851;
    const double C6905 = kab * C6850;
    const double C6902 = C6845 / p;
    const double C6899 = C6843 / p;
    const double C6897 = C6842 / p;
    const double C6895 = C6841 / p;
    const double C6893 = C6840 / p;
    const double C6891 = C6839 / p;
    const double C6888 = C6837 / p;
    const double C6885 = C6835 / p;
    const double C6884 = C6834 * C4168;
    const double C6883 = C6832 * C4168;
    const double C6881 = C6830 / p;
    const double C6879 = C6829 / p;
    const double C6877 = C6826 * C4168;
    const double C6876 = C4169 * C6825;
    const double C6874 = C6822 / p;
    const double C6907 = C4168 * C6852;
    const double C6904 = kab * C6847;
    const double C6924 = C5784 * C6824;
    const double C6918 = C5021 * C6824;
    const double C6915 = C4917 * C6824;
    const double C6913 = C4816 * C6824;
    const double C6911 = C4757 * C6824;
    const double C6909 = C4727 * C6824;
    const double C6903 = C4698 * C6824;
    const double C6900 = C4593 * C6824;
    const double C6898 = C4564 * C6824;
    const double C6896 = C4535 * C6824;
    const double C6894 = C4404 * C6824;
    const double C6892 = C4375 * C6824;
    const double C6889 = C4342 * C6824;
    const double C6886 = C4293 * C6824;
    const double C6882 = C4221 * C6824;
    const double C6880 = C4204 * C6824;
    const double C6875 = C4166 * C6824;
    const double C6947 = kcd * C6905;
    const double C6946 = kcd * C6904;
    const double C6958 = C6924 / C6876;
    const double C6953 = C6918 / C6876;
    const double C6951 = C6915 / C6876;
    const double C6950 = C6913 / C6876;
    const double C6949 = C6911 / C6876;
    const double C6948 = C6909 / C6876;
    const double C6945 = C6903 / C6876;
    const double C6943 = C6900 / C6876;
    const double C6942 = C6898 / C6876;
    const double C6941 = C6896 / C6876;
    const double C6940 = C6894 / C6876;
    const double C6939 = C6892 / C6876;
    const double C6937 = C6889 / C6876;
    const double C6935 = C6886 / C6876;
    const double C6934 = C6882 / C6876;
    const double C6933 = C6880 / C6876;
    const double C6931 = C6875 / C6876;
    const double C6978 = C6860 * C6947;
    const double C6976 = C6858 * C6947;
    const double C6973 = C6853 * C6947;
    const double C6971 = C6846 * C6947;
    const double C6969 = C6849 * C6947;
    const double C6977 = C6862 * C6946;
    const double C6975 = C6860 * C6946;
    const double C6972 = C6858 * C6946;
    const double C6970 = C6853 * C6946;
    const double C6968 = C6846 * C6946;
    const double C5025 =
        -(((C6826 * C6977) / C6848 - (xAB * C6978) / p) * C6906) / C6907;
    const double C5906 =
        -(((C6832 * C6977) / C6848 - (yAB * C6978) / p) * C6906) / C6907;
    const double C6784 =
        -(((C6834 * C6977) / C6848 - (zAB * C6978) / p) * C6906) / C6907;
    const double C4921 =
        -(((C6826 * C6975) / C6848 - (xAB * C6976) / p) * C6906) / C6907;
    const double C5810 =
        -(((C6832 * C6975) / C6848 - (yAB * C6976) / p) * C6906) / C6907;
    const double C6688 =
        -(((C6834 * C6975) / C6848 - (zAB * C6976) / p) * C6906) / C6907;
    const double C4686 =
        -(((C6826 * C6972) / C6848 - (xAB * C6973) / p) * C6906) / C6907;
    const double C5584 =
        -(((C6832 * C6972) / C6848 - (yAB * C6973) / p) * C6906) / C6907;
    const double C6464 =
        -(((C6834 * C6972) / C6848 - (zAB * C6973) / p) * C6906) / C6907;
    const double C4192 =
        -(((C6826 * C6970) / C6848 - (xAB * C6971) / p) * C6906) / C6907;
    const double C5077 =
        -(((C6832 * C6970) / C6848 - (yAB * C6971) / p) * C6906) / C6907;
    const double C5958 =
        -(((C6834 * C6970) / C6848 - (zAB * C6971) / p) * C6906) / C6907;
    const double C4191 =
        -(((C6826 * C6968) / C6848 - (xAB * C6969) / p) * C6906) / C6907;
    const double C5076 =
        -(((C6832 * C6968) / C6848 - (yAB * C6969) / p) * C6906) / C6907;
    const double C5957 =
        -(((C6834 * C6968) / C6848 - (zAB * C6969) / p) * C6906) / C6907;
    const double C6859 = C4921 * C4168;
    const double C4944 =
        C6917 - (C4921 * C6823) / p - C6953 - (C5025 * C6877) / C4170;
    const double C4959 = -((C4921 * C6831) / p + (C5025 * C6883) / C4170);
    const double C4988 = -((C4921 * C6833) / p + (C5025 * C6884) / C4170);
    const double C6868 = C5810 * C4168;
    const double C5825 = -((C5810 * C6823) / p + (C5906 * C6877) / C4170);
    const double C5855 =
        C6917 - (C5810 * C6831) / p - C6953 - (C5906 * C6883) / C4170;
    const double C5884 = -((C5810 * C6833) / p + (C5906 * C6884) / C4170);
    const double C6873 = C6688 * C4168;
    const double C6703 = -((C6688 * C6823) / p + (C6784 * C6877) / C4170);
    const double C6732 = -((C6688 * C6831) / p + (C6784 * C6883) / C4170);
    const double C6762 =
        C6917 - (C6688 * C6833) / p - C6953 - (C6784 * C6884) / C4170;
    const double C6844 = C4686 * C4168;
    const double C4685 =
        C6914 - (C4686 * C6823) / p - C6951 - (C4921 * C6877) / C4170;
    const double C4776 = -((C4686 * C6831) / p + (C4921 * C6883) / C4170);
    const double C4835 = -((C4686 * C6833) / p + (C4921 * C6884) / C4170);
    const double C6866 = C5584 * C4168;
    const double C5599 = -((C5584 * C6823) / p + (C5810 * C6877) / C4170);
    const double C5644 =
        C6914 - (C5584 * C6831) / p - C6951 - (C5810 * C6883) / C4170;
    const double C5702 = -((C5584 * C6833) / p + (C5810 * C6884) / C4170);
    const double C6872 = C6464 * C4168;
    const double C6479 = -((C6464 * C6823) / p + (C6688 * C6877) / C4170);
    const double C6523 = -((C6464 * C6831) / p + (C6688 * C6883) / C4170);
    const double C6581 =
        C6914 - (C6464 * C6833) / p - C6951 - (C6688 * C6884) / C4170;
    const double C6827 = C4192 * C4168;
    const double C4174 =
        C6902 - (C4192 * C6823) / p - C6945 - (C4686 * C6877) / C4170;
    const double C4297 = -((C4192 * C6831) / p + (C4686 * C6883) / C4170);
    const double C4346 = -((C4192 * C6833) / p + (C4686 * C6884) / C4170);
    const double C6863 = C5077 * C4168;
    const double C5078 = -((C5077 * C6823) / p + (C5584 * C6877) / C4170);
    const double C5193 =
        C6902 - (C5077 * C6831) / p - C6945 - (C5584 * C6883) / C4170;
    const double C5240 = -((C5077 * C6833) / p + (C5584 * C6884) / C4170);
    const double C6869 = C5958 * C4168;
    const double C5959 = -((C5958 * C6823) / p + (C6464 * C6877) / C4170);
    const double C6074 = -((C5958 * C6831) / p + (C6464 * C6883) / C4170);
    const double C6120 =
        C6902 - (C5958 * C6833) / p - C6945 - (C6464 * C6884) / C4170;
    const double C1919 =
        C6881 - (C4191 * C6823) / p - C6934 - (C4192 * C6877) / C4170;
    const double C2132 = -((C4191 * C6831) / p + (C4192 * C6883) / C4170);
    const double C2345 = -((C4191 * C6833) / p + (C4192 * C6884) / C4170);
    const double C2640 = -((C5076 * C6823) / p + (C5077 * C6877) / C4170);
    const double C2849 =
        C6881 - (C5076 * C6831) / p - C6934 - (C5077 * C6883) / C4170;
    const double C3058 = -((C5076 * C6833) / p + (C5077 * C6884) / C4170);
    const double C3347 = -((C5957 * C6823) / p + (C5958 * C6877) / C4170);
    const double C3556 = -((C5957 * C6831) / p + (C5958 * C6883) / C4170);
    const double C3765 =
        C6881 - (C5957 * C6833) / p - C6934 - (C5958 * C6884) / C4170;
    const double C6916 = C6859 / C4170;
    const double C6925 = C6868 / C4170;
    const double C6930 = C6873 / C4170;
    const double C6901 = C6844 / C4170;
    const double C6922 = C6866 / C4170;
    const double C6929 = C6872 / C4170;
    const double C6878 = C6827 / C4170;
    const double C4669 = -((C4346 * C6831) / p + (C4835 * C6883) / C4170);
    const double C6919 = C6863 / C4170;
    const double C5555 =
        C6923 - (C5240 * C6831) / p - C6958 - (C5702 * C6883) / C4170;
    const double C6926 = C6869 / C4170;
    const double C6435 = -((C6120 * C6831) / p + (C6581 * C6883) / C4170);
    const double C1995 =
        C6885 - (C2132 * C6823) / p - C6935 - (C4297 * C6877) / C4170;
    const double C2041 =
        C6888 - (C2345 * C6823) / p - C6937 - (C4346 * C6877) / C4170;
    const double C2238 = -((C2345 * C6831) / p + (C4346 * C6883) / C4170);
    const double C2715 = -((C2849 * C6823) / p + (C5193 * C6877) / C4170);
    const double C2760 = -((C3058 * C6823) / p + (C5240 * C6877) / C4170);
    const double C2953 =
        C6888 - (C3058 * C6831) / p - C6937 - (C5240 * C6883) / C4170;
    const double C3422 = -((C3556 * C6823) / p + (C6074 * C6877) / C4170);
    const double C3467 = -((C3765 * C6823) / p + (C6120 * C6877) / C4170);
    const double C3660 = -((C3765 * C6831) / p + (C6120 * C6883) / C4170);
    const double C6952 = C4686 - C6916;
    const double C6959 = C5584 - C6925;
    const double C6964 = C6464 - C6930;
    const double C6944 = C4192 - C6901;
    const double C6957 = C5077 - C6922;
    const double C6963 = C5958 - C6929;
    const double C6932 = C4191 - C6878;
    const double C6954 = C5076 - C6919;
    const double C6960 = C5957 - C6926;
    const double C2478 = (C2576 * be) / p - (C2238 * C6823) / p -
                         (C4665 * C6824) / C6876 - (C4669 * C6877) / C4170;
    const double C3188 = -((C2953 * C6823) / p + (C5555 * C6877) / C4170);
    const double C3895 = -((C3660 * C6823) / p + (C6435 * C6877) / C4170);
    const double C6974 = C6952 / C6828;
    const double C6982 = C6959 / C6828;
    const double C6986 = C6964 / C6828;
    const double C6967 = C6944 / C6828;
    const double C6981 = C6957 / C6828;
    const double C6985 = C6963 / C6828;
    const double C6965 = C6932 / C6828;
    const double C6979 = C6954 / C6828;
    const double C6983 = C6960 / C6828;
    const double C4731 = (C4681 * be) / p - (C4685 * C6823) / p -
                         (C4940 * C6824) / C6876 - (C4944 * C6877) / C4170 +
                         C6974;
    const double C4761 =
        C6974 - ((C4776 * C6831) / p + (C4959 * C6883) / C4170);
    const double C4820 =
        C6974 - ((C4835 * C6833) / p + (C4988 * C6884) / C4170);
    const double C5614 =
        C6982 - ((C5599 * C6823) / p + (C5825 * C6877) / C4170);
    const double C5659 = (C5639 * be) / p - (C5644 * C6831) / p -
                         (C5850 * C6824) / C6876 - (C5855 * C6883) / C4170 +
                         C6982;
    const double C5717 =
        C6982 - ((C5702 * C6833) / p + (C5884 * C6884) / C4170);
    const double C6494 =
        C6986 - ((C6479 * C6823) / p + (C6703 * C6877) / C4170);
    const double C6538 =
        C6986 - ((C6523 * C6831) / p + (C6732 * C6883) / C4170);
    const double C6596 = (C5784 * be) / p - (C6581 * C6833) / p -
                         (C6756 * C6824) / C6876 - (C6762 * C6884) / C4170 +
                         C6986;
    const double C4173 = (C4187 * be) / p - (C4174 * C6823) / p -
                         (C4681 * C6824) / C6876 - (C4685 * C6877) / C4170 +
                         C6967;
    const double C4314 =
        C6967 - ((C4297 * C6831) / p + (C4776 * C6883) / C4170);
    const double C4363 =
        C6967 - ((C4346 * C6833) / p + (C4835 * C6884) / C4170);
    const double C5093 =
        C6981 - ((C5078 * C6823) / p + (C5599 * C6877) / C4170);
    const double C5208 = (C4293 * be) / p - (C5193 * C6831) / p -
                         (C5639 * C6824) / C6876 - (C5644 * C6883) / C4170 +
                         C6981;
    const double C5255 =
        C6981 - ((C5240 * C6833) / p + (C5702 * C6884) / C4170);
    const double C5974 =
        C6985 - ((C5959 * C6823) / p + (C6479 * C6877) / C4170);
    const double C6089 =
        C6985 - ((C6074 * C6831) / p + (C6523 * C6883) / C4170);
    const double C6135 =
        C6923 - (C6120 * C6833) / p - C6958 - (C6581 * C6884) / C4170 + C6985;
    const double C1902 = (C4186 * be) / p - (C1919 * C6823) / p -
                         (C4187 * C6824) / C6876 - (C4174 * C6877) / C4170 +
                         C6965;
    const double C2087 =
        C6965 - ((C2132 * C6831) / p + (C4297 * C6883) / C4170);
    const double C2270 =
        C6965 - ((C2345 * C6833) / p + (C4346 * C6884) / C4170);
    const double C2623 =
        C6979 - ((C2640 * C6823) / p + (C5078 * C6877) / C4170);
    const double C2804 =
        C6885 - (C2849 * C6831) / p - C6935 - (C5193 * C6883) / C4170 + C6979;
    const double C2983 =
        C6979 - ((C3058 * C6833) / p + (C5240 * C6884) / C4170);
    const double C3330 =
        C6983 - ((C3347 * C6823) / p + (C5959 * C6877) / C4170);
    const double C3511 =
        C6983 - ((C3556 * C6831) / p + (C6074 * C6883) / C4170);
    const double C3690 =
        C6888 - (C3765 * C6833) / p - C6937 - (C6120 * C6884) / C4170 + C6983;
    const double C4208 = C6908 - (C4173 * C6823) / p - C6948 -
                         (C4731 * C6877) / C4170 +
                         (C4174 - (C4685 * C4168) / C4170) / p;
    const double C4329 = -((C4173 * C6833) / p + (C4731 * C6884) / C4170);
    const double C6836 = C4314 * C4168;
    const double C4313 =
        C6910 - (C4314 * C6823) / p - C6949 - (C4761 * C6877) / C4170;
    const double C4408 = (C4297 - (C4776 * C4168) / C4170) / p -
                         ((C4314 * C6831) / p + (C4761 * C6883) / C4170);
    const double C4452 = -((C4314 * C6833) / p + (C4761 * C6884) / C4170);
    const double C6838 = C4363 * C4168;
    const double C4362 =
        C6912 - (C4363 * C6823) / p - C6950 - (C4820 * C6877) / C4170;
    const double C4523 = -((C4363 * C6831) / p + (C4820 * C6883) / C4170);
    const double C4597 = (C4346 - (C4835 * C4168) / C4170) / p -
                         ((C4363 * C6833) / p + (C4820 * C6884) / C4170);
    const double C5108 = (C5078 - (C5599 * C4168) / C4170) / p -
                         ((C5093 * C6823) / p + (C5614 * C6877) / C4170);
    const double C5225 = -((C5093 * C6833) / p + (C5614 * C6884) / C4170);
    const double C6864 = C5208 * C4168;
    const double C5209 = -((C5208 * C6823) / p + (C5659 * C6877) / C4170);
    const double C5299 = C6910 - (C5208 * C6831) / p - C6949 -
                         (C5659 * C6883) / C4170 +
                         (C5193 - (C5644 * C4168) / C4170) / p;
    const double C5342 = -((C5208 * C6833) / p + (C5659 * C6884) / C4170);
    const double C6865 = C5255 * C4168;
    const double C5256 = -((C5255 * C6823) / p + (C5717 * C6877) / C4170);
    const double C5413 =
        C6912 - (C5255 * C6831) / p - C6950 - (C5717 * C6883) / C4170;
    const double C5484 = (C5240 - (C5702 * C4168) / C4170) / p -
                         ((C5255 * C6833) / p + (C5717 * C6884) / C4170);
    const double C5989 = (C5959 - (C6479 * C4168) / C4170) / p -
                         ((C5974 * C6823) / p + (C6494 * C6877) / C4170);
    const double C6105 =
        C6908 - (C5974 * C6833) / p - C6948 - (C6494 * C6884) / C4170;
    const double C6870 = C6089 * C4168;
    const double C6090 = -((C6089 * C6823) / p + (C6538 * C6877) / C4170);
    const double C6179 = (C6074 - (C6523 * C4168) / C4170) / p -
                         ((C6089 * C6831) / p + (C6538 * C6883) / C4170);
    const double C6222 =
        C6910 - (C6089 * C6833) / p - C6949 - (C6538 * C6884) / C4170;
    const double C6871 = C6135 * C4168;
    const double C6136 = -((C6135 * C6823) / p + (C6596 * C6877) / C4170);
    const double C6293 = -((C6135 * C6831) / p + (C6596 * C6883) / C4170);
    const double C6364 = C6912 - (C6135 * C6833) / p - C6950 -
                         (C6596 * C6884) / C4170 +
                         (C6120 - (C6581 * C4168) / C4170) / p;
    const double C1901 = C6874 - (C1902 * C6823) / p - C6931 -
                         (C4173 * C6877) / C4170 +
                         (C1919 - (C4174 * C4168) / C4170) / p;
    const double C1949 = -((C1902 * C6831) / p + (C4173 * C6883) / C4170);
    const double C1979 = -((C1902 * C6833) / p + (C4173 * C6884) / C4170);
    const double C2086 =
        C6891 - (C2087 * C6823) / p - C6939 - (C4314 * C6877) / C4170;
    const double C2133 = (C2132 - (C4297 * C4168) / C4170) / p -
                         ((C2087 * C6831) / p + (C4314 * C6883) / C4170);
    const double C2163 = -((C2087 * C6833) / p + (C4314 * C6884) / C4170);
    const double C2269 =
        C6895 - (C2270 * C6823) / p - C6941 - (C4363 * C6877) / C4170;
    const double C2315 = -((C2270 * C6831) / p + (C4363 * C6883) / C4170);
    const double C2346 = (C2345 - (C4346 * C4168) / C4170) / p -
                         ((C2270 * C6833) / p + (C4363 * C6884) / C4170);
    const double C2624 = (C2640 - (C5078 * C4168) / C4170) / p -
                         ((C2623 * C6823) / p + (C5093 * C6877) / C4170);
    const double C2670 =
        C6874 - (C2623 * C6831) / p - C6931 - (C5093 * C6883) / C4170;
    const double C2700 = -((C2623 * C6833) / p + (C5093 * C6884) / C4170);
    const double C2805 = -((C2804 * C6823) / p + (C5208 * C6877) / C4170);
    const double C2850 = C6891 - (C2804 * C6831) / p - C6939 -
                         (C5208 * C6883) / C4170 +
                         (C2849 - (C5193 * C4168) / C4170) / p;
    const double C2880 = -((C2804 * C6833) / p + (C5208 * C6884) / C4170);
    const double C2984 = -((C2983 * C6823) / p + (C5255 * C6877) / C4170);
    const double C3028 =
        C6895 - (C2983 * C6831) / p - C6941 - (C5255 * C6883) / C4170;
    const double C3059 = (C3058 - (C5240 * C4168) / C4170) / p -
                         ((C2983 * C6833) / p + (C5255 * C6884) / C4170);
    const double C3331 = (C3347 - (C5959 * C4168) / C4170) / p -
                         ((C3330 * C6823) / p + (C5974 * C6877) / C4170);
    const double C3377 = -((C3330 * C6831) / p + (C5974 * C6883) / C4170);
    const double C3407 =
        C6874 - (C3330 * C6833) / p - C6931 - (C5974 * C6884) / C4170;
    const double C3512 = -((C3511 * C6823) / p + (C6089 * C6877) / C4170);
    const double C3557 = (C3556 - (C6074 * C4168) / C4170) / p -
                         ((C3511 * C6831) / p + (C6089 * C6883) / C4170);
    const double C3587 =
        C6891 - (C3511 * C6833) / p - C6939 - (C6089 * C6884) / C4170;
    const double C3691 = -((C3690 * C6823) / p + (C6135 * C6877) / C4170);
    const double C3735 = -((C3690 * C6831) / p + (C6135 * C6883) / C4170);
    const double C3766 = C6895 - (C3690 * C6833) / p - C6941 -
                         (C6135 * C6884) / C4170 +
                         (C3765 - (C6120 * C4168) / C4170) / p;
    const double C6887 = C6836 / C4170;
    const double C6890 = C6838 / C4170;
    const double C6920 = C6864 / C4170;
    const double C6921 = C6865 / C4170;
    const double C6927 = C6870 / C4170;
    const double C6928 = C6871 / C4170;
    const double C1903 = C6879 - (C1901 * C6823) / p - C6933 -
                         (C4208 * C6877) / C4170 +
                         (3 * (C1902 - (C4173 * C4168) / C4170)) / C6828;
    const double C1934 = -((C1901 * C6831) / p + (C4208 * C6883) / C4170);
    const double C1964 = -((C1901 * C6833) / p + (C4208 * C6884) / C4170);
    const double C2025 = -((C1979 * C6831) / p + (C4329 * C6883) / C4170);
    const double C2117 =
        C6893 - (C2133 * C6823) / p - C6940 - (C4408 * C6877) / C4170;
    const double C2208 = -((C2133 * C6833) / p + (C4408 * C6884) / C4170);
    const double C2148 = (C2220 * be) / p - (C2163 * C6823) / p -
                         (C4448 * C6824) / C6876 - (C4452 * C6877) / C4170;
    const double C2300 =
        C6897 - (C2315 * C6823) / p - C6942 - (C4523 * C6877) / C4170;
    const double C2330 =
        C6899 - (C2346 * C6823) / p - C6943 - (C4597 * C6877) / C4170;
    const double C2390 = -((C2346 * C6831) / p + (C4597 * C6883) / C4170);
    const double C2625 = (3 * (C2623 - (C5093 * C4168) / C4170)) / C6828 -
                         ((C2624 * C6823) / p + (C5108 * C6877) / C4170);
    const double C2655 =
        C6879 - (C2624 * C6831) / p - C6933 - (C5108 * C6883) / C4170;
    const double C2685 = -((C2624 * C6833) / p + (C5108 * C6884) / C4170);
    const double C2745 = (C2037 * be) / p - (C2700 * C6831) / p -
                         (C5220 * C6824) / C6876 - (C5225 * C6883) / C4170;
    const double C2834 = -((C2850 * C6823) / p + (C5299 * C6877) / C4170);
    const double C2924 = -((C2850 * C6833) / p + (C5299 * C6884) / C4170);
    const double C2865 = -((C2880 * C6823) / p + (C5342 * C6877) / C4170);
    const double C3013 = -((C3028 * C6823) / p + (C5413 * C6877) / C4170);
    const double C3043 = -((C3059 * C6823) / p + (C5484 * C6877) / C4170);
    const double C3102 =
        C6899 - (C3059 * C6831) / p - C6943 - (C5484 * C6883) / C4170;
    const double C3332 = (3 * (C3330 - (C5974 * C4168) / C4170)) / C6828 -
                         ((C3331 * C6823) / p + (C5989 * C6877) / C4170);
    const double C3362 = -((C3331 * C6831) / p + (C5989 * C6883) / C4170);
    const double C3392 =
        C6879 - (C3331 * C6833) / p - C6933 - (C5989 * C6884) / C4170;
    const double C3452 = -((C3407 * C6831) / p + (C6105 * C6883) / C4170);
    const double C3541 = -((C3557 * C6823) / p + (C6179 * C6877) / C4170);
    const double C3631 =
        C6893 - (C3557 * C6833) / p - C6940 - (C6179 * C6884) / C4170;
    const double C3572 = -((C3587 * C6823) / p + (C6222 * C6877) / C4170);
    const double C3720 = -((C3735 * C6823) / p + (C6293 * C6877) / C4170);
    const double C3750 = -((C3766 * C6823) / p + (C6364 * C6877) / C4170);
    const double C3809 = -((C3766 * C6831) / p + (C6364 * C6883) / C4170);
    const double C6936 = C2087 - C6887;
    const double C6938 = C2270 - C6890;
    const double C6955 = C2804 - C6920;
    const double C6956 = C2983 - C6921;
    const double C6961 = C3511 - C6927;
    const double C6962 = C3690 - C6928;
    const double C2010 = (C2082 * be) / p - (C2086 * C6823) / p -
                         (C4309 * C6824) / C6876 - (C4313 * C6877) / C4170 +
                         C6936 / C6828;
    const double C2193 =
        (3 * C6936) / C6828 - ((C2133 * C6831) / p + (C4408 * C6883) / C4170);
    const double C6966 = C6938 / C6828;
    const double C2434 =
        (3 * C6938) / C6828 - ((C2346 * C6833) / p + (C4597 * C6884) / C4170);
    const double C2730 =
        C6955 / C6828 - ((C2805 * C6823) / p + (C5209 * C6877) / C4170);
    const double C2909 = C6893 - (C2850 * C6831) / p - C6940 -
                         (C5299 * C6883) / C4170 + (3 * C6955) / C6828;
    const double C6980 = C6956 / C6828;
    const double C3145 =
        (3 * C6956) / C6828 - ((C3059 * C6833) / p + (C5484 * C6884) / C4170);
    const double C3437 =
        C6961 / C6828 - ((C3512 * C6823) / p + (C6090 * C6877) / C4170);
    const double C3616 =
        (3 * C6961) / C6828 - ((C3557 * C6831) / p + (C6179 * C6883) / C4170);
    const double C6984 = C6962 / C6828;
    const double C3852 = C6899 - (C3766 * C6833) / p - C6943 -
                         (C6364 * C6884) / C4170 + (3 * C6962) / C6828;
    const double C2070 = (C2265 * be) / p - (C2269 * C6823) / p -
                         (C4358 * C6824) / C6876 - (C4362 * C6877) / C4170 +
                         C6966;
    const double C2253 =
        C6966 - ((C2315 * C6831) / p + (C4523 * C6883) / C4170);
    const double C2789 =
        C6980 - ((C2984 * C6823) / p + (C5256 * C6877) / C4170);
    const double C2968 =
        C6897 - (C3028 * C6831) / p - C6942 - (C5413 * C6883) / C4170 + C6980;
    const double C3496 =
        C6984 - ((C3691 * C6823) / p + (C6136 * C6877) / C4170);
    const double C3675 =
        C6984 - ((C3735 * C6831) / p + (C6293 * C6883) / C4170);
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
