/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2011_2_et(const double ae,
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
                            const double* const vrx,
                            const double* const vry,
                            const double* const vrz,
                            double* const etx,
                            double* const ety,
                            double* const etz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double C26864 = g[0];
    const double C26882 = g[1];
    const double C26899 = g[2];
    const double C26916 = g[3];
    const double C27008 = g[4];
    const double C27025 = g[5];
    const double C27041 = g[6];
    const double C27057 = g[7];
    const double C27151 = g[8];
    const double C27168 = g[9];
    const double C27184 = g[10];
    const double C27200 = g[11];
    const double C27293 = g[12];
    const double C27312 = g[13];
    const double C27327 = g[14];
    const double C27342 = g[15];
    const double C27429 = g[16];
    const double C27447 = g[17];
    const double C27462 = g[18];
    const double C27479 = g[19];
    const double C27565 = g[20];
    const double C27582 = g[21];
    const double C27597 = g[22];
    const double C27612 = g[23];
    const double C27697 = g[24];
    const double C27713 = g[25];
    const double C27832 = g[26];
    const double C27949 = g[27];
    const double C28051 = g[28];
    const double C28066 = g[29];
    const double C28095 = g[30];
    const double C28110 = g[31];
    const double C28167 = g[32];
    const double C29194 = g[33];
    const double C29298 = g[34];
    const double C29482 = g[35];
    const double C30640 = g[36];
    const double C26869 = vrx[0];
    const double C26886 = vrx[1];
    const double C26887 = vrx[2];
    const double C26936 = vrx[3];
    const double C26981 = vrx[4];
    const double C27012 = vrx[5];
    const double C27029 = vrx[6];
    const double C27076 = vrx[7];
    const double C27077 = vrx[8];
    const double C27124 = vrx[9];
    const double C27155 = vrx[10];
    const double C27172 = vrx[11];
    const double C27219 = vrx[12];
    const double C27264 = vrx[13];
    const double C27265 = vrx[14];
    const double C27299 = vrx[15];
    const double C27402 = vrx[16];
    const double C27434 = vrx[17];
    const double C27569 = vrx[18];
    const double C27701 = vrx[19];
    const double C27717 = vrx[20];
    const double C27746 = vrx[21];
    const double C27775 = vrx[22];
    const double C27790 = vrx[23];
    const double C27805 = vrx[24];
    const double C27820 = vrx[25];
    const double C27850 = vrx[26];
    const double C27865 = vrx[27];
    const double C27893 = vrx[28];
    const double C27922 = vrx[29];
    const double C27937 = vrx[30];
    const double C27967 = vrx[31];
    const double C27982 = vrx[32];
    const double C28011 = vrx[33];
    const double C28039 = vrx[34];
    const double C28201 = vry[0];
    const double C28217 = vry[1];
    const double C28218 = vry[2];
    const double C28265 = vry[3];
    const double C28310 = vry[4];
    const double C28340 = vry[5];
    const double C28356 = vry[6];
    const double C28401 = vry[7];
    const double C28402 = vry[8];
    const double C28449 = vry[9];
    const double C28479 = vry[10];
    const double C28495 = vry[11];
    const double C28540 = vry[12];
    const double C28585 = vry[13];
    const double C28586 = vry[14];
    const double C28618 = vry[15];
    const double C28718 = vry[16];
    const double C28749 = vry[17];
    const double C28880 = vry[18];
    const double C29008 = vry[19];
    const double C29023 = vry[20];
    const double C29052 = vry[21];
    const double C29081 = vry[22];
    const double C29096 = vry[23];
    const double C29111 = vry[24];
    const double C29126 = vry[25];
    const double C29155 = vry[26];
    const double C29170 = vry[27];
    const double C29199 = vry[28];
    const double C29228 = vry[29];
    const double C29243 = vry[30];
    const double C29272 = vry[31];
    const double C29287 = vry[32];
    const double C29317 = vry[33];
    const double C29345 = vry[34];
    const double C29503 = vrz[0];
    const double C29519 = vrz[1];
    const double C29520 = vrz[2];
    const double C29567 = vrz[3];
    const double C29612 = vrz[4];
    const double C29642 = vrz[5];
    const double C29658 = vrz[6];
    const double C29703 = vrz[7];
    const double C29704 = vrz[8];
    const double C29751 = vrz[9];
    const double C29781 = vrz[10];
    const double C29797 = vrz[11];
    const double C29842 = vrz[12];
    const double C29887 = vrz[13];
    const double C29888 = vrz[14];
    const double C29920 = vrz[15];
    const double C30020 = vrz[16];
    const double C30051 = vrz[17];
    const double C30182 = vrz[18];
    const double C30310 = vrz[19];
    const double C30325 = vrz[20];
    const double C30354 = vrz[21];
    const double C30383 = vrz[22];
    const double C30398 = vrz[23];
    const double C30413 = vrz[24];
    const double C30428 = vrz[25];
    const double C30457 = vrz[26];
    const double C30472 = vrz[27];
    const double C30500 = vrz[28];
    const double C30529 = vrz[29];
    const double C30544 = vrz[30];
    const double C30573 = vrz[31];
    const double C30588 = vrz[32];
    const double C30617 = vrz[33];
    const double C30646 = vrz[34];
    const double C27295 = 2 * q;
    const double C30840 = C27569 / q;
    const double C30839 = C27434 / q;
    const double C30838 = C27967 * p;
    const double C30837 = C27937 * p;
    const double C30836 = C27922 * p;
    const double C30835 = C27569 * p;
    const double C30834 = C27865 * p;
    const double C30833 = C27299 / q;
    const double C30832 = C27820 * p;
    const double C30831 = C27805 * p;
    const double C30830 = C27790 * p;
    const double C30829 = C27775 * p;
    const double C30828 = C27434 * p;
    const double C30827 = C27746 * p;
    const double C30826 = C27299 * p;
    const double C30817 = C27402 * p;
    const double C30810 = C27219 * p;
    const double C30808 = C27172 * p;
    const double C30805 = C27124 * p;
    const double C30802 = C27029 * p;
    const double C30799 = C26981 * p;
    const double C30798 = de * zCD;
    const double C30797 = be * zAB;
    const double C30794 = C26936 * p;
    const double C30793 = de * yCD;
    const double C30792 = be * yAB;
    const double C30790 = de * xCD;
    const double C30789 = be * xAB;
    const double C30906 = C28880 / q;
    const double C30905 = C28749 / q;
    const double C30904 = C29272 * p;
    const double C30903 = C29243 * p;
    const double C30902 = C29228 * p;
    const double C30901 = C28880 * p;
    const double C30900 = C29170 * p;
    const double C30899 = C28618 / q;
    const double C30898 = C29126 * p;
    const double C30897 = C29111 * p;
    const double C30896 = C29096 * p;
    const double C30895 = C29081 * p;
    const double C30894 = C28749 * p;
    const double C30893 = C29052 * p;
    const double C30892 = C28618 * p;
    const double C30883 = C28718 * p;
    const double C30876 = C28540 * p;
    const double C30874 = C28495 * p;
    const double C30871 = C28449 * p;
    const double C30868 = C28356 * p;
    const double C30865 = C28310 * p;
    const double C30862 = C28265 * p;
    const double C30970 = C30182 / q;
    const double C30969 = C30051 / q;
    const double C30968 = C30573 * p;
    const double C30967 = C30544 * p;
    const double C30966 = C30529 * p;
    const double C30965 = C30182 * p;
    const double C30964 = C30472 * p;
    const double C30963 = C29920 / q;
    const double C30962 = C30428 * p;
    const double C30961 = C30413 * p;
    const double C30960 = C30398 * p;
    const double C30959 = C30383 * p;
    const double C30958 = C30051 * p;
    const double C30957 = C30354 * p;
    const double C30956 = C29920 * p;
    const double C30947 = C30020 * p;
    const double C30940 = C29842 * p;
    const double C30938 = C29797 * p;
    const double C30935 = C29751 * p;
    const double C30932 = C29658 * p;
    const double C30929 = C29612 * p;
    const double C30926 = C29567 * p;
    const double C30825 = C27701 / C27295;
    const double C30824 = C27569 / C27295;
    const double C30820 = C27264 / C27295;
    const double C30819 = C27434 / C27295;
    const double C30815 = C26886 / C27295;
    const double C30813 = C27076 / C27295;
    const double C30812 = C27299 / C27295;
    const double C30807 = C27155 / C27295;
    const double C30801 = C27012 / C27295;
    const double C30791 = C26869 / C27295;
    const double C30891 = C29008 / C27295;
    const double C30890 = C28880 / C27295;
    const double C30886 = C28585 / C27295;
    const double C30885 = C28749 / C27295;
    const double C30881 = C28217 / C27295;
    const double C30879 = C28401 / C27295;
    const double C30878 = C28618 / C27295;
    const double C30873 = C28479 / C27295;
    const double C30867 = C28340 / C27295;
    const double C30861 = C28201 / C27295;
    const double C30955 = C30310 / C27295;
    const double C30954 = C30182 / C27295;
    const double C30950 = C29887 / C27295;
    const double C30949 = C30051 / C27295;
    const double C30945 = C29519 / C27295;
    const double C30943 = C29703 / C27295;
    const double C30942 = C29920 / C27295;
    const double C30937 = C29781 / C27295;
    const double C30931 = C29642 / C27295;
    const double C30925 = C29503 / C27295;
    const double C30856 = C30837 / q;
    const double C30855 = C30832 / q;
    const double C30854 = C30830 / q;
    const double C30850 = C30808 / q;
    const double C30846 = C30802 / q;
    const double C30844 = C30797 + C30798;
    const double C30842 = C30792 + C30793;
    const double C30841 = C30789 + C30790;
    const double C30919 = C30904 / q;
    const double C30918 = C30903 / q;
    const double C30917 = C30898 / q;
    const double C30920 = C30897 / q;
    const double C30916 = C30896 / q;
    const double C30915 = C30893 / q;
    const double C30912 = C30876 / q;
    const double C30907 = C30862 / q;
    const double C30982 = C30967 / q;
    const double C30981 = C30966 / q;
    const double C30980 = C30964 / q;
    const double C30979 = C30962 / q;
    const double C30978 = C30961 / q;
    const double C30977 = C30960 / q;
    const double C30976 = C30959 / q;
    const double C30974 = C30935 / q;
    const double C30972 = C30929 / q;
    const double C25656 = -(C26869 * C30844 + C30799) / q;
    const double C25725 = -(C27012 * C30844 + C30805) / q;
    const double C25794 = C27264 / q - (C27155 * C30844) / q - (C27265 * p) / q;
    const double C25863 = -(C27299 * C30844 + C30817) / q;
    const double C25932 = C30815 - (C27434 * C30844) / q - C30850;
    const double C26001 = C30813 - (C27569 * C30844) / q - C30810 / q;
    const double C26920 = -(C26886 * C30844 + C30828) / q;
    const double C26921 = -(C26887 * C30844 + C30829) / q;
    const double C26966 = -(C26936 * C30844 + C30831) / q;
    const double C26996 = C30791 - (C26981 * C30844) / q - C30855;
    const double C27061 = -(C27029 * C30844 + C30834) / q;
    const double C27108 = -(C27076 * C30844 + C30835) / q;
    const double C27109 = -(C27077 * C30844 + C30836) / q;
    const double C27139 = C30801 - (C27124 * C30844) / q - C30856;
    const double C27204 = C30839 - (C27172 * C30844) / q - (C27982 * p) / q;
    const double C27249 = C30840 - (C27219 * C30844) / q - (C28011 * p) / q;
    const double C27280 = C30825 - (C27264 * C30844) / q - (C27155 * p) / q;
    const double C27281 =
        (3 * C27155) / C27295 - (C27265 * C30844) / q - (C28039 * p) / q;
    const double C27417 = C30812 - (C27402 * C30844) / q - C30838 / q;
    const double C26070 = -(C28201 * C30844 + C30865) / q;
    const double C26139 = -(C28340 * C30844 + C30871) / q;
    const double C26208 = C28585 / q - (C28479 * C30844) / q - (C28586 * p) / q;
    const double C26277 = -(C28618 * C30844 + C30883) / q;
    const double C26346 = C30881 - (C28749 * C30844) / q - C30874 / q;
    const double C28249 = -(C28217 * C30844 + C30894) / q;
    const double C28250 = -(C28218 * C30844 + C30895) / q;
    const double C28295 = -(C28265 * C30844 + C30897) / q;
    const double C28386 = -(C28356 * C30844 + C30900) / q;
    const double C28433 = -(C28401 * C30844 + C30901) / q;
    const double C28434 = -(C28402 * C30844 + C30902) / q;
    const double C28525 = C30905 - (C28495 * C30844) / q - (C29287 * p) / q;
    const double C28570 = C30906 - (C28540 * C30844) / q - (C29317 * p) / q;
    const double C28601 = C30891 - (C28585 * C30844) / q - (C28479 * p) / q;
    const double C28602 =
        (3 * C28479) / C27295 - (C28586 * C30844) / q - (C29345 * p) / q;
    const double C26622 = (C27168 * be) / q - (C29781 * C30844) / q +
                          C29887 / q - (C29888 * p) / q;
    const double C26691 =
        (C27312 * be) / q - (C29920 * C30844) / q - C30947 / q;
    const double C26760 =
        (C27447 * be) / q - (C30051 * C30844) / q + C30945 - C30938 / q;
    const double C26829 =
        (C27582 * be) / q - (C30182 * C30844) / q + C30943 - C30940 / q;
    const double C29551 =
        (C27697 * be) / q - (C29519 * C30844) / q - C30958 / q;
    const double C29735 =
        (C28051 * be) / q - (C29703 * C30844) / q - C30965 / q;
    const double C29827 =
        (C27949 * be) / q - (C29797 * C30844) / q + C30969 - (C30588 * p) / q;
    const double C29872 =
        (C29298 * be) / q - (C29842 * C30844) / q + C30970 - (C30617 * p) / q;
    const double C29903 =
        (C28095 * be) / q - (C29887 * C30844) / q + C30955 - (C29781 * p) / q;
    const double C29904 = (C30640 * be) / q - (C29888 * C30844) / q +
                          (3 * C29781) / C27295 - (C30646 * p) / q;
    const double C30035 =
        (C28167 * be) / q - (C30020 * C30844) / q + C30942 - C30968 / q;
    const double C25633 = -(C26869 * C30842 + C30794) / q;
    const double C25702 = C27076 / q - (C27012 * C30842) / q - (C27077 * p) / q;
    const double C25771 = -(C27155 * C30842 + C30810) / q;
    const double C25840 = C30815 - (C27299 * C30842) / q - C30846;
    const double C25909 = -(C27434 * C30842 + C30817) / q;
    const double C25978 = C30820 - (C27569 * C30842) / q - C30805 / q;
    const double C26903 = -(C26886 * C30842 + C30826) / q;
    const double C26904 = -(C26887 * C30842 + C30827) / q;
    const double C26951 = C30791 - (C26936 * C30842) / q - C30854;
    const double C27045 = C30833 - (C27029 * C30842) / q - (C27850 * p) / q;
    const double C27092 = C30825 - (C27076 * C30842) / q - (C27012 * p) / q;
    const double C27093 =
        (3 * C27012) / C27295 - (C27077 * C30842) / q - (C27893 * p) / q;
    const double C27188 = -(C27172 * C30842 + C30838) / q;
    const double C27234 = C30807 - (C27219 * C30842) / q - C30856;
    const double C27466 = -(C27264 * C30842 + C30835) / q;
    const double C27467 = -(C26981 * C30842 + C30831) / q;
    const double C27511 = C30819 - (C27402 * C30842) / q - C30834 / q;
    const double C27644 = C30840 - (C27124 * C30842) / q - C30836 / q;
    const double C26116 = (C27025 * be) / q - (C28340 * C30842) / q +
                          C28401 / q - (C28402 * p) / q;
    const double C26254 =
        (C27312 * be) / q - (C28618 * C30842) / q + C30881 - C30868 / q;
    const double C26323 =
        (C27447 * be) / q - (C28749 * C30842) / q - C30883 / q;
    const double C26392 =
        (C27582 * be) / q - (C28880 * C30842) / q + C30886 - C30871 / q;
    const double C28233 =
        (C27697 * be) / q - (C28217 * C30842) / q - C30892 / q;
    const double C28371 =
        (C27832 * be) / q - (C28356 * C30842) / q + C30899 - (C29155 * p) / q;
    const double C28417 =
        (C28051 * be) / q - (C28401 * C30842) / q + C30891 - (C28340 * p) / q;
    const double C28418 = (C29194 * be) / q - (C28402 * C30842) / q +
                          (3 * C28340) / C27295 - (C29199 * p) / q;
    const double C28779 =
        (C28095 * be) / q - (C28585 * C30842) / q - C30901 / q;
    const double C28823 =
        (C28167 * be) / q - (C28718 * C30842) / q + C30885 - C30900 / q;
    const double C28952 =
        (C29482 * be) / q - (C28449 * C30842) / q + C30906 - C30902 / q;
    const double C26461 = -(C29503 * C30842 + C30926) / q;
    const double C26530 = C29703 / q - (C29642 * C30842) / q - (C29704 * p) / q;
    const double C26599 = -(C29781 * C30842 + C30940) / q;
    const double C26668 = C30945 - (C29920 * C30842) / q - C30932 / q;
    const double C26737 = -(C30051 * C30842 + C30947) / q;
    const double C29535 = -(C29519 * C30842 + C30956) / q;
    const double C29536 = -(C29520 * C30842 + C30957) / q;
    const double C29673 = C30963 - (C29658 * C30842) / q - (C30457 * p) / q;
    const double C29719 = C30955 - (C29703 * C30842) / q - (C29642 * p) / q;
    const double C29720 =
        (3 * C29642) / C27295 - (C29704 * C30842) / q - (C30500 * p) / q;
    const double C29812 = -(C29797 * C30842 + C30968) / q;
    const double C30081 = -(C29887 * C30842 + C30965) / q;
    const double C30082 = -(C29612 * C30842 + C30961) / q;
    const double C25609 = (C26882 * be) / q - (C26869 * C30841) / q +
                          C26886 / q - (C26887 * p) / q;
    const double C25678 = (C27025 * be) / q - (C27012 * C30841) / q - C30846;
    const double C25747 = (C27168 * be) / q - (C27155 * C30841) / q - C30850;
    const double C25816 =
        (C27312 * be) / q - (C27299 * C30841) / q + C30813 - C30794 / q;
    const double C25885 =
        (C27447 * be) / q - (C27434 * C30841) / q + C30820 - C30799 / q;
    const double C25954 =
        (C27582 * be) / q - (C27569 * C30841) / q - C30817 / q;
    const double C26868 =
        (C27697 * be) / q - (C26886 * C30841) / q + C30825 - (C26869 * p) / q;
    const double C26870 = (C27713 * be) / q - (C26887 * C30841) / q +
                          (3 * C26869) / C27295 - (C27717 * p) / q;
    const double C27013 =
        (C27832 * be) / q - (C27029 * C30841) / q + C30801 - C30854;
    const double C27156 =
        (C27949 * be) / q - (C27172 * C30841) / q + C30807 - C30855;
    const double C27298 =
        (C28051 * be) / q - (C27076 * C30841) / q - C30826 / q;
    const double C27300 =
        (C28066 * be) / q - (C26936 * C30841) / q + C30833 - C30827 / q;
    const double C27433 =
        (C28095 * be) / q - (C27264 * C30841) / q - C30828 / q;
    const double C27435 =
        (C28110 * be) / q - (C26981 * C30841) / q + C30839 - C30829 / q;
    const double C27570 =
        (C28167 * be) / q - (C27402 * C30841) / q + C30824 - C30831 / q;
    const double C26023 = C28217 / q - (C28201 * C30841) / q - (C28218 * p) / q;
    const double C26092 = -(C28340 * C30841 + C30868) / q;
    const double C26161 = -(C28479 * C30841 + C30874) / q;
    const double C26299 = C30886 - (C28749 * C30841) / q - C30865 / q;
    const double C26368 = -(C28880 * C30841 + C30883) / q;
    const double C28200 = C30891 - (C28217 * C30841) / q - (C28201 * p) / q;
    const double C28202 =
        (3 * C28201) / C27295 - (C28218 * C30841) / q - (C29023 * p) / q;
    const double C28617 = -(C28401 * C30841 + C30892) / q;
    const double C28748 = -(C28585 * C30841 + C30894) / q;
    const double C28750 = C30905 - (C28310 * C30841) / q - C30895 / q;
    const double C26437 = C29519 / q - (C29503 * C30841) / q - (C29520 * p) / q;
    const double C26506 = -(C29642 * C30841 + C30932) / q;
    const double C26575 = -(C29781 * C30841 + C30938) / q;
    const double C26644 = C30943 - (C29920 * C30841) / q - C30926 / q;
    const double C26782 = -(C30182 * C30841 + C30947) / q;
    const double C29502 = C30955 - (C29519 * C30841) / q - (C29503 * p) / q;
    const double C29504 =
        (3 * C29503) / C27295 - (C29520 * C30841) / q - (C30325 * p) / q;
    const double C29919 = -(C29703 * C30841 + C30956) / q;
    const double C29921 = C30963 - (C29567 * C30841) / q - C30957 / q;
    const double C30050 = -(C29887 * C30841 + C30958) / q;
    const double C28510 = (C27949 * be) / q - (C28495 * C30842) / q - C30919;
    const double C28733 = C30878 - (C28718 * C30844) / q - C30919;
    const double C28464 = C30867 - (C28449 * C30844) / q - C30918;
    const double C28555 =
        (C29298 * be) / q - (C28540 * C30842) / q + C30873 - C30918;
    const double C28325 = C30861 - (C28310 * C30844) / q - C30917;
    const double C28480 = C30873 - (C28495 * C30841) / q - C30917;
    const double C28780 = (C28110 * be) / q - (C28310 * C30842) / q - C30920;
    const double C28881 = C30890 - (C28718 * C30841) / q - C30920;
    const double C28280 =
        (C28066 * be) / q - (C28265 * C30842) / q + C30861 - C30916;
    const double C28341 = C30867 - (C28356 * C30841) / q - C30916;
    const double C28234 = (C27713 * be) / q - (C28218 * C30842) / q - C30915;
    const double C28619 = C30899 - (C28265 * C30841) / q - C30915;
    const double C26185 = (C27168 * be) / q - (C28479 * C30842) / q - C30912;
    const double C26415 = C30879 - (C28880 * C30844) / q - C30912;
    const double C26047 = (C26882 * be) / q - (C28201 * C30842) / q - C30907;
    const double C26230 = C30879 - (C28618 * C30841) / q - C30907;
    const double C29766 =
        (C29482 * be) / q - (C29751 * C30844) / q + C30931 - C30982;
    const double C29857 = C30937 - (C29842 * C30842) / q - C30982;
    const double C29736 = (C29194 * be) / q - (C29704 * C30844) / q - C30981;
    const double C30254 = C30970 - (C29751 * C30842) / q - C30981;
    const double C29688 = (C27832 * be) / q - (C29658 * C30844) / q - C30980;
    const double C30125 = C30949 - (C30020 * C30842) / q - C30980;
    const double C29627 =
        (C28110 * be) / q - (C29612 * C30844) / q + C30925 - C30979;
    const double C29782 = C30937 - (C29797 * C30841) / q - C30979;
    const double C29597 = (C28066 * be) / q - (C29567 * C30844) / q - C30978;
    const double C30183 = C30954 - (C30020 * C30841) / q - C30978;
    const double C29582 = C30925 - (C29567 * C30842) / q - C30977;
    const double C29643 = C30931 - (C29658 * C30841) / q - C30977;
    const double C29552 = (C27713 * be) / q - (C29520 * C30844) / q - C30976;
    const double C30052 = C30969 - (C29612 * C30841) / q - C30976;
    const double C26553 = (C27025 * be) / q - (C29642 * C30844) / q - C30974;
    const double C26806 = C30950 - (C30182 * C30842) / q - C30974;
    const double C26484 = (C26882 * be) / q - (C29503 * C30844) / q - C30972;
    const double C26713 = C30950 - (C30051 * C30841) / q - C30972;
    const double C30816 = C26920 / C27295;
    const double C25625 = (C26916 * be) / q - (C25656 * C30841) / q +
                          C26920 / q - (C26921 * p) / q;
    const double C30796 = C26966 * p;
    const double C30800 = C26996 * p;
    const double C30804 = C27061 * p;
    const double C30814 = C27108 / C27295;
    const double C25717 = C27108 / q - (C25725 * C30842) / q - (C27109 * p) / q;
    const double C30806 = C27139 * p;
    const double C30809 = C27204 * p;
    const double C30811 = C27249 * p;
    const double C30822 = C27280 / C27295;
    const double C25808 =
        C27280 / q - (C25794 * C30844) / q + C30807 - (C27281 * p) / q;
    const double C30818 = C27417 * p;
    const double C30882 = C28249 / C27295;
    const double C26039 = C28249 / q - (C26070 * C30841) / q - (C28250 * p) / q;
    const double C30864 = C28295 * p;
    const double C30870 = C28386 * p;
    const double C30880 = C28433 / C27295;
    const double C26131 = (C27057 * be) / q - (C26139 * C30842) / q +
                          C28433 / q - (C28434 * p) / q;
    const double C30875 = C28525 * p;
    const double C30877 = C28570 * p;
    const double C30888 = C28601 / C27295;
    const double C26222 =
        C28601 / q - (C26208 * C30844) / q + C30873 - (C28602 * p) / q;
    const double C30946 = C29551 / C27295;
    const double C30944 = C29735 / C27295;
    const double C30939 = C29827 * p;
    const double C30941 = C29872 * p;
    const double C30952 = C29903 / C27295;
    const double C26636 = (C27200 * be) / q - (C26622 * C30844) / q +
                          C29903 / q + C30937 - (C29904 * p) / q;
    const double C30948 = C30035 * p;
    const double C25617 = (C26899 * be) / q - (C25633 * C30841) / q +
                          C26903 / q - (C26904 * p) / q;
    const double C30795 = C26951 * p;
    const double C30803 = C27045 * p;
    const double C25709 =
        C27092 / q - (C25702 * C30842) / q + C30801 - (C27093 * p) / q;
    const double C25755 =
        (C27184 * be) / q - (C25771 * C30841) / q - (C27188 * p) / q;
    const double C25778 = C30807 - (C25771 * C30842) / q - (C27234 * p) / q;
    const double C30821 = C27466 / C27295;
    const double C30823 = C27511 * p;
    const double C30869 = C28371 * p;
    const double C26123 = (C27041 * be) / q - (C26116 * C30842) / q +
                          C28417 / q + C30867 - (C28418 * p) / q;
    const double C30887 = C28779 / C27295;
    const double C30889 = C28823 * p;
    const double C26445 = C29535 / q - (C26461 * C30841) / q - (C29536 * p) / q;
    const double C30933 = C29673 * p;
    const double C26537 =
        C29719 / q - (C26530 * C30842) / q + C30931 - (C29720 * p) / q;
    const double C26583 = -(C26599 * C30841 + C29812 * p) / q;
    const double C30951 = C30081 / C27295;
    const double C25608 = (C26864 * be) / q - (C25609 * C30841) / q +
                          C26868 / q + C30791 - (C26870 * p) / q;
    const double C25677 =
        (C27008 * be) / q - (C25678 * C30841) / q + C30801 - (C27013 * p) / q;
    const double C25746 =
        (C27151 * be) / q - (C25747 * C30841) / q + C30807 - (C27156 * p) / q;
    const double C25815 = (C27293 * be) / q - (C25816 * C30841) / q +
                          C27298 / C27295 + C30812 - (C27300 * p) / q;
    const double C25884 = (C27429 * be) / q - (C25885 * C30841) / q +
                          C27433 / C27295 + C30819 - (C27435 * p) / q;
    const double C25953 =
        (C27565 * be) / q - (C25954 * C30841) / q + C30824 - (C27570 * p) / q;
    const double C26022 =
        C28200 / q - (C26023 * C30841) / q + C30861 - (C28202 * p) / q;
    const double C26298 =
        C28748 / C27295 - (C26299 * C30841) / q + C30885 - (C28750 * p) / q;
    const double C26436 =
        C29502 / q - (C26437 * C30841) / q + C30925 - (C29504 * p) / q;
    const double C26643 =
        C29919 / C27295 - (C26644 * C30841) / q + C30942 - (C29921 * p) / q;
    const double C30884 = C28733 * p;
    const double C30872 = C28464 * p;
    const double C30866 = C28325 * p;
    const double C26160 = C30873 - (C26161 * C30841) / q - (C28480 * p) / q;
    const double C26367 = C30890 - (C26368 * C30841) / q - (C28881 * p) / q;
    const double C30863 = C28280 * p;
    const double C26091 = C30867 - (C26092 * C30841) / q - (C28341 * p) / q;
    const double C26169 = -(C26185 * C30841 + C28510 * p) / q;
    const double C26192 =
        (C27184 * be) / q - (C26185 * C30842) / q + C30873 - (C28555 * p) / q;
    const double C26031 = C28233 / q - (C26047 * C30841) / q - (C28234 * p) / q;
    const double C26229 =
        C28617 / C27295 - (C26230 * C30841) / q + C30878 - (C28619 * p) / q;
    const double C30936 = C29766 * p;
    const double C26606 = C30937 - (C26599 * C30842) / q - (C29857 * p) / q;
    const double C30934 = C29688 * p;
    const double C30953 = C30125 * p;
    const double C30930 = C29627 * p;
    const double C26574 = C30937 - (C26575 * C30841) / q - (C29782 * p) / q;
    const double C30928 = C29597 * p;
    const double C26781 = C30954 - (C26782 * C30841) / q - (C30183 * p) / q;
    const double C30927 = C29582 * p;
    const double C26505 = C30931 - (C26506 * C30841) / q - (C29643 * p) / q;
    const double C26545 = C29735 / q - (C26553 * C30842) / q - (C29736 * p) / q;
    const double C26453 = C29551 / q - (C26484 * C30841) / q - (C29552 * p) / q;
    const double C26712 =
        C30050 / C27295 - (C26713 * C30841) / q + C30949 - (C30052 * p) / q;
    const double C25648 = -(C25656 * C30842 + C30796) / q;
    const double C30845 = C30800 / q;
    const double C30848 = C30804 / q;
    const double C25832 =
        (C27342 * be) / q - (C25863 * C30841) / q + C30814 - C30796 / q;
    const double C30849 = C30806 / q;
    const double C30851 = C30809 / q;
    const double C25786 = -(C25794 * C30842 + C30811) / q;
    const double C26015 = C30814 - (C26001 * C30844) / q + C30824 - C30811 / q;
    const double C30852 = C30818 / q;
    const double C25924 = -(C25932 * C30842 + C30818) / q;
    const double C30909 = C30864 / q;
    const double C26108 = -(C26139 * C30841 + C30870) / q;
    const double C26269 =
        (C27342 * be) / q - (C26277 * C30842) / q + C30882 - C30870 / q;
    const double C26177 = -(C26208 * C30841 + C30875) / q;
    const double C26360 = C30882 - (C26346 * C30844) / q + C30885 - C30875 / q;
    const double C30913 = C30877 / q;
    const double C26591 = -(C26622 * C30841 + C30939) / q;
    const double C26774 = (C27479 * be) / q - (C26760 * C30844) / q + C30946 +
                          C30949 - C30939 / q;
    const double C26614 = -(C26622 * C30842 + C30941) / q;
    const double C26843 = (C27612 * be) / q - (C26829 * C30844) / q + C30944 +
                          C30954 - C30941 / q;
    const double C26705 =
        (C27342 * be) / q - (C26691 * C30844) / q + C30942 - C30948 / q;
    const double C26752 = -(C26760 * C30842 + C30948) / q;
    const double C26798 = -(C26829 * C30841 + C30948) / q;
    const double C30843 = C30795 / q;
    const double C30847 = C30803 / q;
    const double C25893 =
        (C27462 * be) / q - (C25909 * C30841) / q + C30821 - (C27467 * p) / q;
    const double C25985 =
        C30821 - (C25978 * C30842) / q + C30824 - (C27644 * p) / q;
    const double C30853 = C30823 / q;
    const double C26100 = -(C26116 * C30841 + C30869) / q;
    const double C26261 = (C27327 * be) / q - (C26254 * C30842) / q +
                          C28233 / C27295 + C30878 - C30869 / q;
    const double C26307 = C30887 - (C26323 * C30841) / q - (C28780 * p) / q;
    const double C26399 = (C27597 * be) / q - (C26392 * C30842) / q + C30887 +
                          C30890 - (C28952 * p) / q;
    const double C26330 =
        (C27462 * be) / q - (C26323 * C30842) / q + C30885 - C30889 / q;
    const double C26376 = -(C26392 * C30841 + C30889) / q;
    const double C26514 = -(C26530 * C30841 + C30933) / q;
    const double C26675 =
        C29535 / C27295 - (C26668 * C30842) / q + C30942 - C30933 / q;
    const double C26721 = C30951 - (C26737 * C30841) / q - (C30082 * p) / q;
    const double C26813 =
        C30951 - (C26806 * C30842) / q + C30954 - (C30254 * p) / q;
    const double C30914 = C30884 / q;
    const double C26384 = -(C26415 * C30841 + C30884) / q;
    const double C30911 = C30872 / q;
    const double C30910 = C30866 / q;
    const double C30908 = C30863 / q;
    const double C30975 = C30936 / q;
    const double C26522 = -(C26553 * C30841 + C30934) / q;
    const double C26683 = C30946 - (C26691 * C30842) / q - C30934 / q;
    const double C26744 = C30949 - (C26737 * C30842) / q - C30953 / q;
    const double C26790 = -(C26806 * C30841 + C30953) / q;
    const double C30973 = C30930 / q;
    const double C26476 = -(C26484 * C30842 + C30928) / q;
    const double C26660 = C30944 - (C26691 * C30841) / q - C30928 / q;
    const double C30971 = C30927 / q;
    const double C25670 = C30791 - (C25656 * C30844) / q - C30845;
    const double C25901 =
        (C27479 * be) / q - (C25932 * C30841) / q + C30822 - C30845;
    const double C25694 = (C27057 * be) / q - (C25725 * C30841) / q - C30848;
    const double C25855 = C30816 - (C25863 * C30842) / q - C30848;
    const double C25739 = C30801 - (C25725 * C30844) / q - C30849;
    const double C25993 = C30822 - (C26001 * C30842) / q - C30849;
    const double C25763 = (C27200 * be) / q - (C25794 * C30841) / q - C30851;
    const double C25946 = C30816 - (C25932 * C30844) / q + C30819 - C30851;
    const double C25877 = C30812 - (C25863 * C30844) / q - C30852;
    const double C25970 = (C27612 * be) / q - (C26001 * C30841) / q - C30852;
    const double C26062 = (C26916 * be) / q - (C26070 * C30842) / q - C30909;
    const double C26246 = C30880 - (C26277 * C30841) / q - C30909;
    const double C26200 = (C27200 * be) / q - (C26208 * C30842) / q - C30913;
    const double C26429 = C30880 - (C26415 * C30844) / q + C30890 - C30913;
    const double C25640 = C30791 - (C25633 * C30842) / q - C30843;
    const double C25824 =
        (C27327 * be) / q - (C25840 * C30841) / q + C27092 / C27295 - C30843;
    const double C25686 = (C27041 * be) / q - (C25702 * C30841) / q - C30847;
    const double C25847 =
        C26903 / C27295 - (C25840 * C30842) / q + C30812 - C30847;
    const double C25916 = C30819 - (C25909 * C30842) / q - C30853;
    const double C25962 = (C27597 * be) / q - (C25978 * C30841) / q - C30853;
    const double C26291 = C30878 - (C26277 * C30844) / q - C30914;
    const double C26338 = (C27479 * be) / q - (C26346 * C30842) / q - C30914;
    const double C26153 = C30867 - (C26139 * C30844) / q - C30911;
    const double C26407 =
        (C27612 * be) / q - (C26415 * C30842) / q + C30888 - C30911;
    const double C26084 = C30861 - (C26070 * C30844) / q - C30910;
    const double C26315 = C30888 - (C26346 * C30841) / q - C30910;
    const double C26054 =
        (C26899 * be) / q - (C26047 * C30842) / q + C30861 - C30908;
    const double C26238 = C28417 / C27295 - (C26254 * C30841) / q - C30908;
    const double C26567 =
        (C27057 * be) / q - (C26553 * C30844) / q + C30931 - C30975;
    const double C26821 = C30952 - (C26829 * C30842) / q - C30975;
    const double C26498 =
        (C26916 * be) / q - (C26484 * C30844) / q + C30925 - C30973;
    const double C26729 = C30952 - (C26760 * C30841) / q - C30973;
    const double C26468 = C30925 - (C26461 * C30842) / q - C30971;
    const double C26652 = C29719 / C27295 - (C26668 * C30841) / q - C30971;
    etx[0] = C25608;
    etx[1] = C25609;
    etx[2] = C25617;
    etx[3] = C25625;
    etx[4] = C25633;
    etx[5] = C25640;
    etx[6] = C25648;
    etx[7] = C25656;
    etx[8] = C25670;
    etx[9] = C25677;
    etx[10] = C25678;
    etx[11] = C25686;
    etx[12] = C25694;
    etx[13] = C25702;
    etx[14] = C25709;
    etx[15] = C25717;
    etx[16] = C25725;
    etx[17] = C25739;
    etx[18] = C25746;
    etx[19] = C25747;
    etx[20] = C25755;
    etx[21] = C25763;
    etx[22] = C25771;
    etx[23] = C25778;
    etx[24] = C25786;
    etx[25] = C25794;
    etx[26] = C25808;
    etx[27] = C25815;
    etx[28] = C25816;
    etx[29] = C25824;
    etx[30] = C25832;
    etx[31] = C25840;
    etx[32] = C25847;
    etx[33] = C25855;
    etx[34] = C25863;
    etx[35] = C25877;
    etx[36] = C25884;
    etx[37] = C25885;
    etx[38] = C25893;
    etx[39] = C25901;
    etx[40] = C25909;
    etx[41] = C25916;
    etx[42] = C25924;
    etx[43] = C25932;
    etx[44] = C25946;
    etx[45] = C25953;
    etx[46] = C25954;
    etx[47] = C25962;
    etx[48] = C25970;
    etx[49] = C25978;
    etx[50] = C25985;
    etx[51] = C25993;
    etx[52] = C26001;
    etx[53] = C26015;
    ety[0] = C26022;
    ety[1] = C26023;
    ety[2] = C26031;
    ety[3] = C26039;
    ety[4] = C26047;
    ety[5] = C26054;
    ety[6] = C26062;
    ety[7] = C26070;
    ety[8] = C26084;
    ety[9] = C26091;
    ety[10] = C26092;
    ety[11] = C26100;
    ety[12] = C26108;
    ety[13] = C26116;
    ety[14] = C26123;
    ety[15] = C26131;
    ety[16] = C26139;
    ety[17] = C26153;
    ety[18] = C26160;
    ety[19] = C26161;
    ety[20] = C26169;
    ety[21] = C26177;
    ety[22] = C26185;
    ety[23] = C26192;
    ety[24] = C26200;
    ety[25] = C26208;
    ety[26] = C26222;
    ety[27] = C26229;
    ety[28] = C26230;
    ety[29] = C26238;
    ety[30] = C26246;
    ety[31] = C26254;
    ety[32] = C26261;
    ety[33] = C26269;
    ety[34] = C26277;
    ety[35] = C26291;
    ety[36] = C26298;
    ety[37] = C26299;
    ety[38] = C26307;
    ety[39] = C26315;
    ety[40] = C26323;
    ety[41] = C26330;
    ety[42] = C26338;
    ety[43] = C26346;
    ety[44] = C26360;
    ety[45] = C26367;
    ety[46] = C26368;
    ety[47] = C26376;
    ety[48] = C26384;
    ety[49] = C26392;
    ety[50] = C26399;
    ety[51] = C26407;
    ety[52] = C26415;
    ety[53] = C26429;
    etz[0] = C26436;
    etz[1] = C26437;
    etz[2] = C26445;
    etz[3] = C26453;
    etz[4] = C26461;
    etz[5] = C26468;
    etz[6] = C26476;
    etz[7] = C26484;
    etz[8] = C26498;
    etz[9] = C26505;
    etz[10] = C26506;
    etz[11] = C26514;
    etz[12] = C26522;
    etz[13] = C26530;
    etz[14] = C26537;
    etz[15] = C26545;
    etz[16] = C26553;
    etz[17] = C26567;
    etz[18] = C26574;
    etz[19] = C26575;
    etz[20] = C26583;
    etz[21] = C26591;
    etz[22] = C26599;
    etz[23] = C26606;
    etz[24] = C26614;
    etz[25] = C26622;
    etz[26] = C26636;
    etz[27] = C26643;
    etz[28] = C26644;
    etz[29] = C26652;
    etz[30] = C26660;
    etz[31] = C26668;
    etz[32] = C26675;
    etz[33] = C26683;
    etz[34] = C26691;
    etz[35] = C26705;
    etz[36] = C26712;
    etz[37] = C26713;
    etz[38] = C26721;
    etz[39] = C26729;
    etz[40] = C26737;
    etz[41] = C26744;
    etz[42] = C26752;
    etz[43] = C26760;
    etz[44] = C26774;
    etz[45] = C26781;
    etz[46] = C26782;
    etz[47] = C26790;
    etz[48] = C26798;
    etz[49] = C26806;
    etz[50] = C26813;
    etz[51] = C26821;
    etz[52] = C26829;
    etz[53] = C26843;
}
