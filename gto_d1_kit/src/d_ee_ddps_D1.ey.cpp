/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2120_4_vr(const double ae,
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
    const double C12409 = g[82];
    const double C12428 = g[83];
    const double C12469 = g[84];
    const double C12524 = g[85];
    const double C12579 = g[86];
    const double C12593 = g[87];
    const double C12608 = g[88];
    const double C12635 = g[89];
    const double C12650 = g[90];
    const double C12664 = g[91];
    const double C12713 = g[92];
    const double C12755 = g[93];
    const double C12836 = g[94];
    const double C12893 = g[95];
    const double C12909 = g[96];
    const double C12923 = g[97];
    const double C12951 = g[98];
    const double C12966 = g[99];
    const double C12995 = g[100];
    const double C13076 = g[101];
    const double C13090 = g[102];
    const double C13104 = g[103];
    const double C13132 = g[104];
    const double C13185 = g[105];
    const double C13201 = g[106];
    const double C13289 = g[107];
    const double C13304 = g[108];
    const double C13332 = g[109];
    const double C13360 = g[110];
    const double C13388 = g[111];
    const double C13416 = g[112];
    const double C13431 = g[113];
    const double C13446 = g[114];
    const double C13566 = g[115];
    const double C13614 = g[116];
    const double C13629 = g[117];
    const double C13686 = g[118];
    const double C13701 = g[119];
    const double C13748 = g[120];
    const double C13763 = g[121];
    const double C13839 = g[122];
    const double C14164 = g[123];
    const double C14260 = g[124];
    const double C14274 = g[125];
    const double C14317 = g[126];
    const double C14676 = g[127];
    const double C14731 = g[128];
    const double C14948 = g[129];
    const double C15090 = g[130];
    const double C15247 = g[131];
    const double C15771 = g[132];
    const double C16541 = g[133];
    const double C16698 = g[134];
    const double C12412 = p + q;
    const double C12411 = p * q;
    const double C16792 = bs[6];
    const double C16791 = bs[5];
    const double C16789 = bs[4];
    const double C16787 = bs[3];
    const double C16784 = bs[2];
    const double C16777 = std::pow(Pi, 2.5);
    const double C16774 = bs[1];
    const double C16773 = ce * de;
    const double C16772 = bs[0];
    const double C16770 = zP - zQ;
    const double C16769 = be * zAB;
    const double C16768 = yP - yQ;
    const double C16767 = be * yAB;
    const double C16766 = 2 * p;
    const double C16764 = xP - xQ;
    const double C16763 = be * xAB;
    const double C12413 = C12412 * p;
    const double C16778 = std::sqrt(C12412);
    const double C16776 = q * C12412;
    const double C16775 = C12411 * de;
    const double C16762 = C12412 * C12411;
    const double C16761 = de * C12411;
    const double C16830 = 4 * C16777;
    const double C16828 = kab * C16773;
    const double C16819 = C16770 * C12411;
    const double C16818 = C16768 * C12411;
    const double C16816 = C16764 * C12411;
    const double C16831 = C12411 * C16778;
    const double C16829 = kab * C16775;
    const double C16868 = C14731 * C16761;
    const double C16864 = C14260 * C16761;
    const double C16859 = C13839 * C16761;
    const double C16857 = C13748 * C16761;
    const double C16856 = C13701 * C16761;
    const double C16855 = C13686 * C16761;
    const double C16853 = C13566 * C16761;
    const double C16852 = C13446 * C16761;
    const double C16849 = C13388 * C16761;
    const double C16848 = C13360 * C16761;
    const double C16847 = C13332 * C16761;
    const double C16846 = C13304 * C16761;
    const double C16845 = C13289 * C16761;
    const double C16844 = C13201 * C16761;
    const double C16842 = C13132 * C16761;
    const double C16841 = C13104 * C16761;
    const double C16840 = C13090 * C16761;
    const double C16839 = C13076 * C16761;
    const double C16838 = C12995 * C16761;
    const double C16837 = C12923 * C16761;
    const double C16836 = C12909 * C16761;
    const double C16826 = C12664 * C16761;
    const double C16825 = C12650 * C16761;
    const double C16824 = C12635 * C16761;
    const double C16823 = C12608 * C16761;
    const double C16822 = C12579 * C16761;
    const double C16821 = C12524 * C16761;
    const double C16820 = C12469 * C16761;
    const double C16815 = C12409 * C16761;
    const double C16894 = kcd * C16828;
    const double C16895 = kcd * C16829;
    const double C16932 = C16868 / C16762;
    const double C16928 = C16864 / C16762;
    const double C16923 = C16859 / C16762;
    const double C16921 = C16857 / C16762;
    const double C16920 = C16856 / C16762;
    const double C16919 = C16855 / C16762;
    const double C16917 = C16853 / C16762;
    const double C16916 = C16852 / C16762;
    const double C16913 = C16849 / C16762;
    const double C16912 = C16848 / C16762;
    const double C16911 = C16847 / C16762;
    const double C16910 = C16846 / C16762;
    const double C16909 = C16845 / C16762;
    const double C16908 = C16844 / C16762;
    const double C16906 = C16842 / C16762;
    const double C16905 = C16841 / C16762;
    const double C16904 = C16840 / C16762;
    const double C16903 = C16839 / C16762;
    const double C16902 = C16838 / C16762;
    const double C16901 = C16837 / C16762;
    const double C16900 = C16836 / C16762;
    const double C16892 = C16826 / C16762;
    const double C16891 = C16825 / C16762;
    const double C16890 = C16824 / C16762;
    const double C16889 = C16823 / C16762;
    const double C16888 = C16822 / C16762;
    const double C16887 = C16821 / C16762;
    const double C16886 = C16820 / C16762;
    const double C16884 = C16815 / C16762;
    const double C16967 = C16791 * C16894;
    const double C16965 = C16789 * C16894;
    const double C16962 = C16787 * C16894;
    const double C16959 = C16784 * C16894;
    const double C16956 = C16774 * C16894;
    const double C16949 = C16772 * C16894;
    const double C16968 = C16792 * C16895;
    const double C16966 = C16791 * C16895;
    const double C16963 = C16789 * C16895;
    const double C16960 = C16787 * C16895;
    const double C16957 = C16784 * C16895;
    const double C16950 = C16774 * C16895;
    const double C13843 =
        (((xCD * C16967) / q + (C16764 * C16968) / C16776) * C16830) / C16831;
    const double C15287 =
        (((yCD * C16967) / q + (C16768 * C16968) / C16776) * C16830) / C16831;
    const double C16725 =
        (((zCD * C16967) / q + (C16770 * C16968) / C16776) * C16830) / C16831;
    const double C13752 =
        (((xCD * C16965) / q + (C16764 * C16966) / C16776) * C16830) / C16831;
    const double C15197 =
        (((yCD * C16965) / q + (C16768 * C16966) / C16776) * C16830) / C16831;
    const double C16635 =
        (((zCD * C16965) / q + (C16770 * C16966) / C16776) * C16830) / C16831;
    const double C13570 =
        (((xCD * C16962) / q + (C16764 * C16963) / C16776) * C16830) / C16831;
    const double C15026 =
        (((yCD * C16962) / q + (C16768 * C16963) / C16776) * C16830) / C16831;
    const double C16464 =
        (((zCD * C16962) / q + (C16770 * C16963) / C16776) * C16830) / C16831;
    const double C13190 =
        (((xCD * C16959) / q + (C16764 * C16960) / C16776) * C16830) / C16831;
    const double C14645 =
        (((yCD * C16959) / q + (C16768 * C16960) / C16776) * C16830) / C16831;
    const double C16086 =
        (((zCD * C16959) / q + (C16770 * C16960) / C16776) * C16830) / C16831;
    const double C12432 =
        (((xCD * C16956) / q + (C16764 * C16957) / C16776) * C16830) / C16831;
    const double C13906 =
        (((yCD * C16956) / q + (C16768 * C16957) / C16776) * C16830) / C16831;
    const double C15350 =
        (((zCD * C16956) / q + (C16770 * C16957) / C16776) * C16830) / C16831;
    const double C4929 =
        (((xCD * C16949) / q + (C16764 * C16950) / C16776) * C16830) / C16831;
    const double C7792 =
        (((yCD * C16949) / q + (C16768 * C16950) / C16776) * C16830) / C16831;
    const double C10634 =
        (((zCD * C16949) / q + (C16770 * C16950) / C16776) * C16830) / C16831;
    const double C16790 = C13752 * C12411;
    const double C13767 =
        C16923 - (C13752 * C16763) / p - (C13843 * C16816) / C12413;
    const double C13807 = -((C13752 * C16767) / p + (C13843 * C16818) / C12413);
    const double C13821 = -((C13752 * C16769) / p + (C13843 * C16819) / C12413);
    const double C16803 = C15197 * C12411;
    const double C15211 = -((C15197 * C16763) / p + (C15287 * C16816) / C12413);
    const double C15252 =
        C16923 - (C15197 * C16767) / p - (C15287 * C16818) / C12413;
    const double C15266 = -((C15197 * C16769) / p + (C15287 * C16819) / C12413);
    const double C16814 = C16635 * C12411;
    const double C16649 = -((C16635 * C16763) / p + (C16725 * C16816) / C12413);
    const double C16689 = -((C16635 * C16767) / p + (C16725 * C16818) / C12413);
    const double C16704 =
        C16923 - (C16635 * C16769) / p - (C16725 * C16819) / C12413;
    const double C16788 = C13570 * C12411;
    const double C13618 =
        C16921 - (C13570 * C16763) / p - (C13752 * C16816) / C12413;
    const double C13647 = -((C13570 * C16767) / p + (C13752 * C16818) / C12413);
    const double C13661 = -((C13570 * C16769) / p + (C13752 * C16819) / C12413);
    const double C16802 = C15026 * C12411;
    const double C15066 = -((C15026 * C16763) / p + (C15197 * C16816) / C12413);
    const double C15095 =
        C16921 - (C15026 * C16767) / p - (C15197 * C16818) / C12413;
    const double C15109 = -((C15026 * C16769) / p + (C15197 * C16819) / C12413);
    const double C16813 = C16464 * C12411;
    const double C16504 = -((C16464 * C16763) / p + (C16635 * C16816) / C12413);
    const double C16532 = -((C16464 * C16767) / p + (C16635 * C16818) / C12413);
    const double C16547 =
        C16921 - (C16464 * C16769) / p - (C16635 * C16819) / C12413;
    const double C16783 = C13190 * C12411;
    const double C13189 =
        C16917 - (C13190 * C16763) / p - (C13570 * C16816) / C12413;
    const double C13225 = -((C13190 * C16767) / p + (C13570 * C16818) / C12413);
    const double C13252 = -((C13190 * C16769) / p + (C13570 * C16819) / C12413);
    const double C16799 = C14645 * C12411;
    const double C14659 = -((C14645 * C16763) / p + (C15026 * C16816) / C12413);
    const double C14681 =
        C16917 - (C14645 * C16767) / p - (C15026 * C16818) / C12413;
    const double C14708 = -((C14645 * C16769) / p + (C15026 * C16819) / C12413);
    const double C16810 = C16086 * C12411;
    const double C16100 = -((C16086 * C16763) / p + (C16464 * C16816) / C12413);
    const double C16121 = -((C16086 * C16767) / p + (C16464 * C16818) / C12413);
    const double C16148 =
        C16917 - (C16086 * C16769) / p - (C16464 * C16819) / C12413;
    const double C16765 = C12432 * C12411;
    const double C12417 =
        C16908 - (C12432 * C16763) / p - (C13190 * C16816) / C12413;
    const double C12487 = -((C12432 * C16767) / p + (C13190 * C16818) / C12413);
    const double C12542 = -((C12432 * C16769) / p + (C13190 * C16819) / C12413);
    const double C16793 = C13906 * C12411;
    const double C13891 = -((C13906 * C16763) / p + (C14645 * C16816) / C12413);
    const double C13960 =
        C16908 - (C13906 * C16767) / p - (C14645 * C16818) / C12413;
    const double C14014 = -((C13906 * C16769) / p + (C14645 * C16819) / C12413);
    const double C16804 = C15350 * C12411;
    const double C15335 = -((C15350 * C16763) / p + (C16086 * C16816) / C12413);
    const double C15404 = -((C15350 * C16767) / p + (C16086 * C16818) / C12413);
    const double C15458 =
        C16908 - (C15350 * C16769) / p - (C16086 * C16819) / C12413;
    const double C4898 =
        C16891 - (C4929 * C16763) / p - (C12432 * C16816) / C12413;
    const double C5166 = -((C4929 * C16767) / p + (C12432 * C16818) / C12413);
    const double C5285 = -((C4929 * C16769) / p + (C12432 * C16819) / C12413);
    const double C7748 = -((C7792 * C16763) / p + (C13906 * C16816) / C12413);
    const double C8013 =
        C16891 - (C7792 * C16767) / p - (C13906 * C16818) / C12413;
    const double C8129 = -((C7792 * C16769) / p + (C13906 * C16819) / C12413);
    const double C10590 = -((C10634 * C16763) / p + (C15350 * C16816) / C12413);
    const double C10855 = -((C10634 * C16767) / p + (C15350 * C16818) / C12413);
    const double C10971 =
        C16891 - (C10634 * C16769) / p - (C15350 * C16819) / C12413;
    const double C16858 = C16790 / C12413;
    const double C16872 = C16803 / C12413;
    const double C16883 = C16814 / C12413;
    const double C16854 = C16788 / C12413;
    const double C16871 = C16802 / C12413;
    const double C16882 = C16813 / C12413;
    const double C16843 = C16783 / C12413;
    const double C16867 = C16799 / C12413;
    const double C16879 = C16810 / C12413;
    const double C16817 = C16765 / C12413;
    const double C12597 = -((C12542 * C16767) / p + (C13252 * C16818) / C12413);
    const double C16860 = C16793 / C12413;
    const double C14067 =
        C16932 - (C14014 * C16767) / p - (C14708 * C16818) / C12413;
    const double C16873 = C16804 / C12413;
    const double C15511 = -((C15458 * C16767) / p + (C16148 * C16818) / C12413);
    const double C4523 =
        C16888 - (C5166 * C16763) / p - (C12487 * C16816) / C12413;
    const double C4705 =
        C16889 - (C5285 * C16763) / p - (C12542 * C16816) / C12413;
    const double C4794 = -((C5285 * C16767) / p + (C12542 * C16818) / C12413);
    const double C7401 = -((C8013 * C16763) / p + (C13960 * C16816) / C12413);
    const double C7577 = -((C8129 * C16763) / p + (C14014 * C16816) / C12413);
    const double C7663 =
        C16889 - (C8129 * C16767) / p - (C14014 * C16818) / C12413;
    const double C10243 = -((C10855 * C16763) / p + (C15404 * C16816) / C12413);
    const double C10419 = -((C10971 * C16763) / p + (C15458 * C16816) / C12413);
    const double C10505 = -((C10971 * C16767) / p + (C15458 * C16818) / C12413);
    const double C16922 = C13570 - C16858;
    const double C16936 = C15026 - C16872;
    const double C16947 = C16464 - C16883;
    const double C16918 = C13190 - C16854;
    const double C16935 = C14645 - C16871;
    const double C16946 = C16086 - C16882;
    const double C16907 = C12432 - C16843;
    const double C16931 = C13906 - C16867;
    const double C16943 = C15350 - C16879;
    const double C16885 = C4929 - C16817;
    const double C16924 = C7792 - C16860;
    const double C16937 = C10634 - C16873;
    const double C4614 = (C12593 * C16761) / C16762 - (C4794 * C16763) / p -
                         (C12597 * C16816) / C12413;
    const double C7489 = -((C7663 * C16763) / p + (C14067 * C16816) / C12413);
    const double C10331 = -((C10505 * C16763) / p + (C15511 * C16816) / C12413);
    const double C16964 = C16922 / C16766;
    const double C16977 = C16936 / C16766;
    const double C16986 = C16947 / C16766;
    const double C16961 = C16918 / C16766;
    const double C16976 = C16935 / C16766;
    const double C16985 = C16946 / C16766;
    const double C16955 = C16907 / C16766;
    const double C16974 = C16931 / C16766;
    const double C16983 = C16943 / C16766;
    const double C16948 = C16885 / C16766;
    const double C16969 = C16924 / C16766;
    const double C16978 = C16937 / C16766;
    const double C13633 = (C13763 * C16761) / C16762 - (C13618 * C16763) / p -
                          (C13767 * C16816) / C12413 + C16964;
    const double C13675 =
        C16964 - ((C13647 * C16767) / p + (C13807 * C16818) / C12413);
    const double C13690 =
        C16964 - ((C13661 * C16769) / p + (C13821 * C16819) / C12413);
    const double C15080 =
        C16977 - ((C15066 * C16763) / p + (C15211 * C16816) / C12413);
    const double C15123 = (C15247 * C16761) / C16762 - (C15095 * C16767) / p -
                          (C15252 * C16818) / C12413 + C16977;
    const double C15137 =
        C16977 - ((C15109 * C16769) / p + (C15266 * C16819) / C12413);
    const double C16518 =
        C16986 - ((C16504 * C16763) / p + (C16649 * C16816) / C12413);
    const double C16561 =
        C16986 - ((C16532 * C16767) / p + (C16689 * C16818) / C12413);
    const double C16575 = (C16698 * C16761) / C16762 - (C16547 * C16769) / p -
                          (C16704 * C16819) / C12413 + C16986;
    const double C13293 = (C13614 * C16761) / C16762 - (C13189 * C16763) / p -
                          (C13618 * C16816) / C12413 + C16961;
    const double C13336 =
        C16961 - ((C13225 * C16767) / p + (C13647 * C16818) / C12413);
    const double C13364 =
        C16961 - ((C13252 * C16769) / p + (C13661 * C16819) / C12413);
    const double C14749 =
        C16976 - ((C14659 * C16763) / p + (C15066 * C16816) / C12413);
    const double C14790 = (C15090 * C16761) / C16762 - (C14681 * C16767) / p -
                          (C15095 * C16818) / C12413 + C16976;
    const double C14817 =
        C16976 - ((C14708 * C16769) / p + (C15109 * C16819) / C12413);
    const double C16188 =
        C16985 - ((C16100 * C16763) / p + (C16504 * C16816) / C12413);
    const double C16229 =
        C16985 - ((C16121 * C16767) / p + (C16532 * C16818) / C12413);
    const double C16256 = (C16541 * C16761) / C16762 - (C16148 * C16769) / p -
                          (C16547 * C16819) / C12413 + C16985;
    const double C12416 = (C13185 * C16761) / C16762 - (C12417 * C16763) / p -
                          (C13189 * C16816) / C12413 + C16955;
    const double C12473 =
        C16955 - ((C12487 * C16767) / p + (C13225 * C16818) / C12413);
    const double C12528 =
        C16955 - ((C12542 * C16769) / p + (C13252 * C16819) / C12413);
    const double C13892 =
        C16974 - ((C13891 * C16763) / p + (C14659 * C16816) / C12413);
    const double C13946 = (C14676 * C16761) / C16762 - (C13960 * C16767) / p -
                          (C14681 * C16818) / C12413 + C16974;
    const double C14000 =
        C16974 - ((C14014 * C16769) / p + (C14708 * C16819) / C12413);
    const double C15336 =
        C16983 - ((C15335 * C16763) / p + (C16100 * C16816) / C12413);
    const double C15390 =
        C16983 - ((C15404 * C16767) / p + (C16121 * C16818) / C12413);
    const double C15444 =
        C16932 - (C15458 * C16769) / p - (C16148 * C16819) / C12413 + C16983;
    const double C3398 = (C12428 * C16761) / C16762 - (C4898 * C16763) / p -
                         (C12417 * C16816) / C12413 + C16948;
    const double C3784 =
        C16948 - ((C5166 * C16767) / p + (C12487 * C16818) / C12413);
    const double C4164 =
        C16948 - ((C5285 * C16769) / p + (C12542 * C16819) / C12413);
    const double C6311 =
        C16969 - ((C7748 * C16763) / p + (C13891 * C16816) / C12413);
    const double C6685 =
        C16888 - (C8013 * C16767) / p - (C13960 * C16818) / C12413 + C16969;
    const double C7053 =
        C16969 - ((C8129 * C16769) / p + (C14014 * C16819) / C12413);
    const double C9153 =
        C16978 - ((C10590 * C16763) / p + (C15335 * C16816) / C12413);
    const double C9527 =
        C16978 - ((C10855 * C16767) / p + (C15404 * C16818) / C12413);
    const double C9895 =
        C16889 - (C10971 * C16769) / p - (C15458 * C16819) / C12413 + C16978;
    const double C13308 = (C13629 * C16761) / C16762 - (C13293 * C16763) / p -
                          (C13633 * C16816) / C12413 +
                          (C13189 - (C13618 * C12411) / C12413) / p;
    const double C16786 = C13336 * C12411;
    const double C13392 = (C13225 - (C13647 * C12411) / C12413) / p -
                          ((C13336 * C16767) / p + (C13675 * C16818) / C12413);
    const double C13435 =
        C16920 - (C13336 * C16763) / p - (C13675 * C16816) / C12413;
    const double C16785 = C13364 * C12411;
    const double C13420 =
        C16919 - (C13364 * C16763) / p - (C13690 * C16816) / C12413;
    const double C13450 = (C13252 - (C13661 * C12411) / C12413) / p -
                          ((C13364 * C16769) / p + (C13690 * C16819) / C12413);
    const double C13503 = -((C13364 * C16767) / p + (C13690 * C16818) / C12413);
    const double C14763 = (C14659 - (C15066 * C12411) / C12413) / p -
                          ((C14749 * C16763) / p + (C15080 * C16816) / C12413);
    const double C16801 = C14790 * C12411;
    const double C14857 = C16920 - (C14790 * C16767) / p -
                          (C15123 * C16818) / C12413 +
                          (C14681 - (C15095 * C12411) / C12413) / p;
    const double C14885 = -((C14790 * C16763) / p + (C15123 * C16816) / C12413);
    const double C16800 = C14817 * C12411;
    const double C14871 = -((C14817 * C16763) / p + (C15137 * C16816) / C12413);
    const double C14912 = (C14708 - (C15109 * C12411) / C12413) / p -
                          ((C14817 * C16769) / p + (C15137 * C16819) / C12413);
    const double C14953 =
        C16919 - (C14817 * C16767) / p - (C15137 * C16818) / C12413;
    const double C16202 = (C16100 - (C16504 * C12411) / C12413) / p -
                          ((C16188 * C16763) / p + (C16518 * C16816) / C12413);
    const double C16812 = C16229 * C12411;
    const double C16296 = (C16121 - (C16532 * C12411) / C12413) / p -
                          ((C16229 * C16767) / p + (C16561 * C16818) / C12413);
    const double C16324 = -((C16229 * C16763) / p + (C16561 * C16816) / C12413);
    const double C16811 = C16256 * C12411;
    const double C16310 = -((C16256 * C16763) / p + (C16575 * C16816) / C12413);
    const double C16351 = C16919 - (C16256 * C16769) / p -
                          (C16575 * C16819) / C12413 +
                          (C16148 - (C16547 * C12411) / C12413) / p;
    const double C16391 = -((C16256 * C16767) / p + (C16575 * C16818) / C12413);
    const double C12639 = C16909 - (C12416 * C16763) / p -
                          (C13293 * C16816) / C12413 +
                          (C12417 - (C13189 * C12411) / C12413) / p;
    const double C12812 = -((C12416 * C16769) / p + (C13293 * C16819) / C12413);
    const double C16779 = C12473 * C12411;
    const double C12717 =
        C16911 - (C12473 * C16763) / p - (C13336 * C16816) / C12413;
    const double C12841 = (C12487 - (C13225 * C12411) / C12413) / p -
                          ((C12473 * C16767) / p + (C13336 * C16818) / C12413);
    const double C12955 = -((C12473 * C16769) / p + (C13336 * C16819) / C12413);
    const double C16780 = C12528 * C12411;
    const double C12759 =
        C16912 - (C12528 * C16763) / p - (C13364 * C16816) / C12413;
    const double C12898 = (C12542 - (C13252 * C12411) / C12413) / p -
                          ((C12528 * C16769) / p + (C13364 * C16819) / C12413);
    const double C12984 = -((C12528 * C16767) / p + (C13364 * C16818) / C12413);
    const double C14120 = (C13891 - (C14659 * C12411) / C12413) / p -
                          ((C13892 * C16763) / p + (C14749 * C16816) / C12413);
    const double C14279 = -((C13892 * C16769) / p + (C14749 * C16819) / C12413);
    const double C16795 = C13946 * C12411;
    const double C14183 = -((C13946 * C16763) / p + (C14790 * C16816) / C12413);
    const double C14306 = C16911 - (C13946 * C16767) / p -
                          (C14790 * C16818) / C12413 +
                          (C13960 - (C14681 * C12411) / C12413) / p;
    const double C14418 = -((C13946 * C16769) / p + (C14790 * C16819) / C12413);
    const double C16796 = C14000 * C12411;
    const double C14224 = -((C14000 * C16763) / p + (C14817 * C16816) / C12413);
    const double C14363 = (C14014 - (C14708 * C12411) / C12413) / p -
                          ((C14000 * C16769) / p + (C14817 * C16819) / C12413);
    const double C14446 =
        C16912 - (C14000 * C16767) / p - (C14817 * C16818) / C12413;
    const double C15564 = (C15335 - (C16100 * C12411) / C12413) / p -
                          ((C15336 * C16763) / p + (C16188 * C16816) / C12413);
    const double C15720 =
        C16909 - (C15336 * C16769) / p - (C16188 * C16819) / C12413;
    const double C16806 = C15390 * C12411;
    const double C15626 = -((C15390 * C16763) / p + (C16229 * C16816) / C12413);
    const double C15747 = (C15404 - (C16121 * C12411) / C12413) / p -
                          ((C15390 * C16767) / p + (C16229 * C16818) / C12413);
    const double C15859 =
        C16911 - (C15390 * C16769) / p - (C16229 * C16819) / C12413;
    const double C16807 = C15444 * C12411;
    const double C15667 = -((C15444 * C16763) / p + (C16256 * C16816) / C12413);
    const double C15804 = C16912 - (C15444 * C16769) / p -
                          (C16256 * C16819) / C12413 +
                          (C15458 - (C16148 * C12411) / C12413) / p;
    const double C15887 = -((C15444 * C16767) / p + (C16256 * C16818) / C12413);
    const double C3380 = C16884 - (C3398 * C16763) / p -
                         (C12416 * C16816) / C12413 +
                         (C4898 - (C12417 * C12411) / C12413) / p;
    const double C3574 = -((C3398 * C16767) / p + (C12416 * C16818) / C12413);
    const double C3670 = -((C3398 * C16769) / p + (C12416 * C16819) / C12413);
    const double C3767 =
        C16886 - (C3784 * C16763) / p - (C12473 * C16816) / C12413;
    const double C3957 = (C5166 - (C12487 * C12411) / C12413) / p -
                         ((C3784 * C16767) / p + (C12473 * C16818) / C12413);
    const double C4050 = -((C3784 * C16769) / p + (C12473 * C16819) / C12413);
    const double C4147 =
        C16887 - (C4164 * C16763) / p - (C12528 * C16816) / C12413;
    const double C4337 = -((C4164 * C16767) / p + (C12528 * C16818) / C12413);
    const double C4429 = (C5285 - (C12542 * C12411) / C12413) / p -
                         ((C4164 * C16769) / p + (C12528 * C16819) / C12413);
    const double C6294 = (C7748 - (C13891 * C12411) / C12413) / p -
                         ((C6311 * C16763) / p + (C13892 * C16816) / C12413);
    const double C6482 =
        C16884 - (C6311 * C16767) / p - (C13892 * C16818) / C12413;
    const double C6575 = -((C6311 * C16769) / p + (C13892 * C16819) / C12413);
    const double C6669 = -((C6685 * C16763) / p + (C13946 * C16816) / C12413);
    const double C6852 = C16886 - (C6685 * C16767) / p -
                         (C13946 * C16818) / C12413 +
                         (C8013 - (C13960 * C12411) / C12413) / p;
    const double C6942 = -((C6685 * C16769) / p + (C13946 * C16819) / C12413);
    const double C7037 = -((C7053 * C16763) / p + (C14000 * C16816) / C12413);
    const double C7220 =
        C16887 - (C7053 * C16767) / p - (C14000 * C16818) / C12413;
    const double C7309 = (C8129 - (C14014 * C12411) / C12413) / p -
                         ((C7053 * C16769) / p + (C14000 * C16819) / C12413);
    const double C9136 = (C10590 - (C15335 * C12411) / C12413) / p -
                         ((C9153 * C16763) / p + (C15336 * C16816) / C12413);
    const double C9324 = -((C9153 * C16767) / p + (C15336 * C16818) / C12413);
    const double C9417 =
        C16884 - (C9153 * C16769) / p - (C15336 * C16819) / C12413;
    const double C9511 = -((C9527 * C16763) / p + (C15390 * C16816) / C12413);
    const double C9694 = (C10855 - (C15404 * C12411) / C12413) / p -
                         ((C9527 * C16767) / p + (C15390 * C16818) / C12413);
    const double C9784 =
        C16886 - (C9527 * C16769) / p - (C15390 * C16819) / C12413;
    const double C9879 = -((C9895 * C16763) / p + (C15444 * C16816) / C12413);
    const double C10062 = -((C9895 * C16767) / p + (C15444 * C16818) / C12413);
    const double C10151 = C16887 - (C9895 * C16769) / p -
                          (C15444 * C16819) / C12413 +
                          (C10971 - (C15458 * C12411) / C12413) / p;
    const double C16851 = C16786 / C12413;
    const double C16850 = C16785 / C12413;
    const double C16870 = C16801 / C12413;
    const double C16869 = C16800 / C12413;
    const double C16881 = C16812 / C12413;
    const double C16880 = C16811 / C12413;
    const double C16771 = C12639 * C12411;
    const double C12668 = C16910 - (C12639 * C16763) / p -
                          (C13308 * C16816) / C12413 +
                          (3 * (C12416 - (C13293 * C12411) / C12413)) / C16766;
    const double C12702 = -((C12639 * C16767) / p + (C13308 * C16818) / C12413);
    const double C12744 = -((C12639 * C16769) / p + (C13308 * C16819) / C12413);
    const double C16832 = C16779 / C12413;
    const double C16781 = C12841 * C12411;
    const double C12840 =
        C16913 - (C12841 * C16763) / p - (C13392 * C16816) / C12413;
    const double C12999 = -((C12841 * C16769) / p + (C13392 * C16819) / C12413);
    const double C16833 = C16780 / C12413;
    const double C16782 = C12898 * C12411;
    const double C12897 =
        C16916 - (C12898 * C16763) / p - (C13450 * C16816) / C12413;
    const double C13065 = -((C12898 * C16767) / p + (C13450 * C16818) / C12413);
    const double C16794 = C14120 * C12411;
    const double C14134 = (3 * (C13892 - (C14749 * C12411) / C12413)) / C16766 -
                          ((C14120 * C16763) / p + (C14763 * C16816) / C12413);
    const double C14169 =
        C16910 - (C14120 * C16767) / p - (C14763 * C16818) / C12413;
    const double C14210 = -((C14120 * C16769) / p + (C14763 * C16819) / C12413);
    const double C16862 = C16795 / C12413;
    const double C16797 = C14306 * C12411;
    const double C14307 = -((C14306 * C16763) / p + (C14857 * C16816) / C12413);
    const double C14460 = -((C14306 * C16769) / p + (C14857 * C16819) / C12413);
    const double C16863 = C16796 / C12413;
    const double C16798 = C14363 * C12411;
    const double C14364 = -((C14363 * C16763) / p + (C14912 * C16816) / C12413);
    const double C14526 =
        C16916 - (C14363 * C16767) / p - (C14912 * C16818) / C12413;
    const double C16805 = C15564 * C12411;
    const double C15578 = (3 * (C15336 - (C16188 * C12411) / C12413)) / C16766 -
                          ((C15564 * C16763) / p + (C16202 * C16816) / C12413);
    const double C15612 = -((C15564 * C16767) / p + (C16202 * C16818) / C12413);
    const double C15653 =
        C16910 - (C15564 * C16769) / p - (C16202 * C16819) / C12413;
    const double C16875 = C16806 / C12413;
    const double C16808 = C15747 * C12411;
    const double C15748 = -((C15747 * C16763) / p + (C16296 * C16816) / C12413);
    const double C15901 =
        C16913 - (C15747 * C16769) / p - (C16296 * C16819) / C12413;
    const double C16876 = C16807 / C12413;
    const double C16809 = C15804 * C12411;
    const double C15805 = -((C15804 * C16763) / p + (C16351 * C16816) / C12413);
    const double C15967 = -((C15804 * C16767) / p + (C16351 * C16818) / C12413);
    const double C4882 = C16890 - (C3380 * C16763) / p -
                         (C12639 * C16816) / C12413 +
                         (3 * (C3398 - (C12416 * C12411) / C12413)) / C16766;
    const double C4944 = -((C3380 * C16767) / p + (C12639 * C16818) / C12413);
    const double C5003 = -((C3380 * C16769) / p + (C12639 * C16819) / C12413);
    const double C5135 = -((C3670 * C16767) / p + (C12812 * C16818) / C12413);
    const double C5445 =
        C16900 - (C3957 * C16763) / p - (C12841 * C16816) / C12413;
    const double C5605 = -((C3957 * C16769) / p + (C12841 * C16819) / C12413);
    const double C5517 = (C12951 * C16761) / C16762 - (C4050 * C16763) / p -
                         (C12955 * C16816) / C12413;
    const double C5855 =
        C16903 - (C4337 * C16763) / p - (C12984 * C16816) / C12413;
    const double C5912 =
        C16904 - (C4429 * C16763) / p - (C12898 * C16816) / C12413;
    const double C6013 = -((C4429 * C16767) / p + (C12898 * C16818) / C12413);
    const double C7763 = (3 * (C6311 - (C13892 * C12411) / C12413)) / C16766 -
                         ((C6294 * C16763) / p + (C14120 * C16816) / C12413);
    const double C7807 =
        C16890 - (C6294 * C16767) / p - (C14120 * C16818) / C12413;
    const double C7866 = -((C6294 * C16769) / p + (C14120 * C16819) / C12413);
    const double C7998 = (C14274 * C16761) / C16762 - (C6575 * C16767) / p -
                         (C14279 * C16818) / C12413;
    const double C8299 = -((C6852 * C16763) / p + (C14306 * C16816) / C12413);
    const double C8459 = -((C6852 * C16769) / p + (C14306 * C16819) / C12413);
    const double C8371 = -((C6942 * C16763) / p + (C14418 * C16816) / C12413);
    const double C8704 = -((C7220 * C16763) / p + (C14446 * C16816) / C12413);
    const double C8761 = -((C7309 * C16763) / p + (C14363 * C16816) / C12413);
    const double C8862 =
        C16904 - (C7309 * C16767) / p - (C14363 * C16818) / C12413;
    const double C10605 = (3 * (C9153 - (C15336 * C12411) / C12413)) / C16766 -
                          ((C9136 * C16763) / p + (C15564 * C16816) / C12413);
    const double C10649 = -((C9136 * C16767) / p + (C15564 * C16818) / C12413);
    const double C10708 =
        C16890 - (C9136 * C16769) / p - (C15564 * C16819) / C12413;
    const double C10840 = -((C9417 * C16767) / p + (C15720 * C16818) / C12413);
    const double C11141 = -((C9694 * C16763) / p + (C15747 * C16816) / C12413);
    const double C11301 =
        C16900 - (C9694 * C16769) / p - (C15747 * C16819) / C12413;
    const double C11213 = -((C9784 * C16763) / p + (C15859 * C16816) / C12413);
    const double C11544 = -((C10062 * C16763) / p + (C15887 * C16816) / C12413);
    const double C11601 = -((C10151 * C16763) / p + (C15804 * C16816) / C12413);
    const double C11702 = -((C10151 * C16767) / p + (C15804 * C16818) / C12413);
    const double C16915 = C12473 - C16851;
    const double C16914 = C12528 - C16850;
    const double C16934 = C13946 - C16870;
    const double C16933 = C14000 - C16869;
    const double C16945 = C15390 - C16881;
    const double C16944 = C15444 - C16880;
    const double C16827 = C16771 / C12413;
    const double C16896 = C3784 - C16832;
    const double C16834 = C16781 / C12413;
    const double C16897 = C4164 - C16833;
    const double C16835 = C16782 / C12413;
    const double C16861 = C16794 / C12413;
    const double C16926 = C6685 - C16862;
    const double C16865 = C16797 / C12413;
    const double C16927 = C7053 - C16863;
    const double C16866 = C16798 / C12413;
    const double C16874 = C16805 / C12413;
    const double C16939 = C9527 - C16875;
    const double C16877 = C16808 / C12413;
    const double C16940 = C9895 - C16876;
    const double C16878 = C16809 / C12413;
    const double C5062 = -((C4882 * C16767) / p + (C12668 * C16818) / C12413);
    const double C5091 = -((C4882 * C16769) / p + (C12668 * C16819) / C12413);
    const double C5120 = -((C5003 * C16767) / p + (C12744 * C16818) / C12413);
    const double C5576 =
        C16902 - (C5605 * C16763) / p - (C12999 * C16816) / C12413;
    const double C5998 =
        C16906 - (C6013 * C16763) / p - (C13065 * C16816) / C12413;
    const double C7925 =
        C16892 - (C7763 * C16767) / p - (C14134 * C16818) / C12413;
    const double C7954 = -((C7763 * C16769) / p + (C14134 * C16819) / C12413);
    const double C7983 =
        C16928 - (C7866 * C16767) / p - (C14210 * C16818) / C12413;
    const double C8430 = -((C8459 * C16763) / p + (C14460 * C16816) / C12413);
    const double C8847 = -((C8862 * C16763) / p + (C14526 * C16816) / C12413);
    const double C10767 = -((C10605 * C16767) / p + (C15578 * C16818) / C12413);
    const double C10796 =
        C16892 - (C10605 * C16769) / p - (C15578 * C16819) / C12413;
    const double C10825 = -((C10708 * C16767) / p + (C15653 * C16818) / C12413);
    const double C11272 = -((C11301 * C16763) / p + (C15901 * C16816) / C12413);
    const double C11687 = -((C11702 * C16763) / p + (C15967 * C16816) / C12413);
    const double C12869 = (C13431 * C16761) / C16762 - (C12717 * C16763) / p -
                          (C13435 * C16816) / C12413 + C16915 / C16766;
    const double C12927 = (3 * C16915) / C16766 -
                          ((C12841 * C16767) / p + (C13392 * C16818) / C12413);
    const double C16958 = C16914 / C16766;
    const double C13108 = (3 * C16914) / C16766 -
                          ((C12898 * C16769) / p + (C13450 * C16819) / C12413);
    const double C14336 =
        C16934 / C16766 - ((C14183 * C16763) / p + (C14885 * C16816) / C12413);
    const double C14391 = C16913 - (C14306 * C16767) / p -
                          (C14857 * C16818) / C12413 + (3 * C16934) / C16766;
    const double C16975 = C16933 / C16766;
    const double C14566 = (3 * C16933) / C16766 -
                          ((C14363 * C16769) / p + (C14912 * C16819) / C12413);
    const double C15777 =
        C16945 / C16766 - ((C15626 * C16763) / p + (C16324 * C16816) / C12413);
    const double C15832 = (3 * C16945) / C16766 -
                          ((C15747 * C16767) / p + (C16296 * C16818) / C12413);
    const double C16984 = C16944 / C16766;
    const double C16007 = C16916 - (C15804 * C16769) / p -
                          (C16351 * C16819) / C12413 + (3 * C16944) / C16766;
    const double C16893 = C3380 - C16827;
    const double C4988 = (C12713 * C16761) / C16762 - (C3767 * C16763) / p -
                         (C12717 * C16816) / C12413 + C16896 / C16766;
    const double C5502 = (3 * C16896) / C16766 -
                         ((C3957 * C16767) / p + (C12841 * C16818) / C12413);
    const double C16898 = C3957 - C16834;
    const double C16952 = C16897 / C16766;
    const double C5969 = (3 * C16897) / C16766 -
                         ((C4429 * C16769) / p + (C12898 * C16819) / C12413);
    const double C16899 = C4429 - C16835;
    const double C16925 = C6294 - C16861;
    const double C7851 =
        C16926 / C16766 - ((C6669 * C16763) / p + (C14183 * C16816) / C12413);
    const double C8356 = C16900 - (C6852 * C16767) / p -
                         (C14306 * C16818) / C12413 + (3 * C16926) / C16766;
    const double C16929 = C6852 - C16865;
    const double C16971 = C16927 / C16766;
    const double C8818 = (3 * C16927) / C16766 -
                         ((C7309 * C16769) / p + (C14363 * C16819) / C12413);
    const double C16930 = C7309 - C16866;
    const double C16938 = C9136 - C16874;
    const double C10693 =
        C16939 / C16766 - ((C9511 * C16763) / p + (C15626 * C16816) / C12413);
    const double C11198 = (3 * C16939) / C16766 -
                          ((C9694 * C16767) / p + (C15747 * C16818) / C12413);
    const double C16941 = C9694 - C16877;
    const double C16980 = C16940 / C16766;
    const double C11658 = C16904 - (C10151 * C16769) / p -
                          (C15804 * C16819) / C12413 + (3 * C16940) / C16766;
    const double C16942 = C10151 - C16878;
    const double C12855 = (C13416 * C16761) / C16762 - (C12759 * C16763) / p -
                          (C13420 * C16816) / C12413 + C16958;
    const double C12970 =
        C16958 - ((C12984 * C16767) / p + (C13503 * C16818) / C12413);
    const double C14322 =
        C16975 - ((C14224 * C16763) / p + (C14871 * C16816) / C12413);
    const double C14432 = (C14948 * C16761) / C16762 - (C14446 * C16767) / p -
                          (C14953 * C16818) / C12413 + C16975;
    const double C15762 =
        C16984 - ((C15667 * C16763) / p + (C16310 * C16816) / C12413);
    const double C15873 =
        C16984 - ((C15887 * C16767) / p + (C16391 * C16818) / C12413);
    const double C16951 = C16893 / C16766;
    const double C4914 = C16892 - (C4882 * C16763) / p -
                         (C12668 * C16816) / C12413 + (2 * C16893) / p;
    const double C5254 = -((C4988 * C16769) / p + (C12869 * C16819) / C12413);
    const double C5460 =
        C16901 - (C5502 * C16763) / p - (C12927 * C16816) / C12413;
    const double C5680 = -((C5502 * C16769) / p + (C12927 * C16819) / C12413);
    const double C16953 = C16898 / C16766;
    const double C5650 =
        (2 * C16898) / p - ((C5502 * C16767) / p + (C12927 * C16818) / C12413);
    const double C5047 = (C12755 * C16761) / C16762 - (C4147 * C16763) / p -
                         (C12759 * C16816) / C12413 + C16952;
    const double C5561 =
        C16952 - ((C4337 * C16767) / p + (C12984 * C16818) / C12413);
    const double C5927 =
        C16905 - (C5969 * C16763) / p - (C13108 * C16816) / C12413;
    const double C6072 = -((C5969 * C16767) / p + (C13108 * C16818) / C12413);
    const double C16954 = C16899 / C16766;
    const double C6145 =
        (2 * C16899) / p - ((C5969 * C16769) / p + (C13108 * C16819) / C12413);
    const double C16970 = C16925 / C16766;
    const double C7778 =
        (2 * C16925) / p - ((C7763 * C16763) / p + (C14134 * C16816) / C12413);
    const double C8114 = -((C7851 * C16769) / p + (C14336 * C16819) / C12413);
    const double C8314 = -((C8356 * C16763) / p + (C14391 * C16816) / C12413);
    const double C8533 = -((C8356 * C16769) / p + (C14391 * C16819) / C12413);
    const double C16972 = C16929 / C16766;
    const double C8503 = C16901 - (C8356 * C16767) / p -
                         (C14391 * C16818) / C12413 + (2 * C16929) / p;
    const double C7910 =
        C16971 - ((C7037 * C16763) / p + (C14224 * C16816) / C12413);
    const double C8415 =
        C16903 - (C7220 * C16767) / p - (C14446 * C16818) / C12413 + C16971;
    const double C8776 = -((C8818 * C16763) / p + (C14566 * C16816) / C12413);
    const double C8920 =
        C16905 - (C8818 * C16767) / p - (C14566 * C16818) / C12413;
    const double C16973 = C16930 / C16766;
    const double C8992 =
        (2 * C16930) / p - ((C8818 * C16769) / p + (C14566 * C16819) / C12413);
    const double C16979 = C16938 / C16766;
    const double C10620 =
        (2 * C16938) / p - ((C10605 * C16763) / p + (C15578 * C16816) / C12413);
    const double C10956 = (C15771 * C16761) / C16762 - (C10693 * C16769) / p -
                          (C15777 * C16819) / C12413;
    const double C11156 = -((C11198 * C16763) / p + (C15832 * C16816) / C12413);
    const double C11374 =
        C16901 - (C11198 * C16769) / p - (C15832 * C16819) / C12413;
    const double C16981 = C16941 / C16766;
    const double C11344 =
        (2 * C16941) / p - ((C11198 * C16767) / p + (C15832 * C16818) / C12413);
    const double C10752 =
        C16980 - ((C9879 * C16763) / p + (C15667 * C16816) / C12413);
    const double C11257 =
        C16980 - ((C10062 * C16767) / p + (C15887 * C16818) / C12413);
    const double C11616 = -((C11658 * C16763) / p + (C16007 * C16816) / C12413);
    const double C11759 = -((C11658 * C16767) / p + (C16007 * C16818) / C12413);
    const double C16982 = C16942 / C16766;
    const double C11831 = C16905 - (C11658 * C16769) / p -
                          (C16007 * C16819) / C12413 + (2 * C16942) / p;
    const double C4959 =
        C16951 - ((C4944 * C16767) / p + (C12702 * C16818) / C12413);
    const double C5018 =
        C16951 - ((C5003 * C16769) / p + (C12744 * C16819) / C12413);
    const double C5196 = (C12836 * C16761) / C16762 - (C5445 * C16763) / p -
                         (C12840 * C16816) / C12413 + C16953;
    const double C5665 =
        C16953 - ((C5605 * C16769) / p + (C12999 * C16819) / C12413);
    const double C5211 = -((C5047 * C16767) / p + (C12855 * C16818) / C12413);
    const double C5532 = (C12966 * C16761) / C16762 - (C5561 * C16763) / p -
                         (C12970 * C16816) / C12413;
    const double C5343 = (C12893 * C16761) / C16762 - (C5912 * C16763) / p -
                         (C12897 * C16816) / C12413 + C16954;
    const double C5767 =
        C16954 - ((C6013 * C16767) / p + (C13065 * C16818) / C12413);
    const double C7822 = (C14164 * C16761) / C16762 - (C7807 * C16767) / p -
                         (C14169 * C16818) / C12413 + C16970;
    const double C7881 =
        C16970 - ((C7866 * C16769) / p + (C14210 * C16819) / C12413);
    const double C8056 =
        C16972 - ((C8299 * C16763) / p + (C14307 * C16816) / C12413);
    const double C8518 =
        C16972 - ((C8459 * C16769) / p + (C14460 * C16819) / C12413);
    const double C8071 = (C14317 * C16761) / C16762 - (C7910 * C16767) / p -
                         (C14322 * C16818) / C12413;
    const double C8386 = -((C8415 * C16763) / p + (C14432 * C16816) / C12413);
    const double C8200 =
        C16973 - ((C8761 * C16763) / p + (C14364 * C16816) / C12413);
    const double C8619 =
        C16906 - (C8862 * C16767) / p - (C14526 * C16818) / C12413 + C16973;
    const double C10664 =
        C16979 - ((C10649 * C16767) / p + (C15612 * C16818) / C12413);
    const double C10723 =
        C16928 - (C10708 * C16769) / p - (C15653 * C16819) / C12413 + C16979;
    const double C10898 =
        C16981 - ((C11141 * C16763) / p + (C15748 * C16816) / C12413);
    const double C11359 =
        C16902 - (C11301 * C16769) / p - (C15901 * C16819) / C12413 + C16981;
    const double C10913 = -((C10752 * C16767) / p + (C15762 * C16818) / C12413);
    const double C11228 = -((C11257 * C16763) / p + (C15873 * C16816) / C12413);
    const double C11042 =
        C16982 - ((C11601 * C16763) / p + (C15805 * C16816) / C12413);
    const double C11459 =
        C16982 - ((C11702 * C16767) / p + (C15967 * C16818) / C12413);
    vrx[0] = C3380;
    vrx[1] = C3398;
    vrx[2] = C3574;
    vrx[3] = C3670;
    vrx[4] = C3767;
    vrx[5] = C3784;
    vrx[6] = C3957;
    vrx[7] = C4050;
    vrx[8] = C4147;
    vrx[9] = C4164;
    vrx[10] = C4337;
    vrx[11] = C4429;
    vrx[12] = C4523;
    vrx[13] = C4614;
    vrx[14] = C4705;
    vrx[15] = C4794;
    vrx[16] = C4882;
    vrx[17] = C4898;
    vrx[18] = C4914;
    vrx[19] = C4929;
    vrx[20] = C4944;
    vrx[21] = C4959;
    vrx[22] = C4988;
    vrx[23] = C5003;
    vrx[24] = C5018;
    vrx[25] = C5047;
    vrx[26] = C5062;
    vrx[27] = C5091;
    vrx[28] = C5120;
    vrx[29] = C5135;
    vrx[30] = C5166;
    vrx[31] = C5196;
    vrx[32] = C5211;
    vrx[33] = C5254;
    vrx[34] = C5285;
    vrx[35] = C5343;
    vrx[36] = C5445;
    vrx[37] = C5460;
    vrx[38] = C5502;
    vrx[39] = C5517;
    vrx[40] = C5532;
    vrx[41] = C5561;
    vrx[42] = C5576;
    vrx[43] = C5605;
    vrx[44] = C5650;
    vrx[45] = C5665;
    vrx[46] = C5680;
    vrx[47] = C5767;
    vrx[48] = C5855;
    vrx[49] = C5912;
    vrx[50] = C5927;
    vrx[51] = C5969;
    vrx[52] = C5998;
    vrx[53] = C6013;
    vrx[54] = C6072;
    vrx[55] = C6145;
    vry[0] = C6294;
    vry[1] = C6311;
    vry[2] = C6482;
    vry[3] = C6575;
    vry[4] = C6669;
    vry[5] = C6685;
    vry[6] = C6852;
    vry[7] = C6942;
    vry[8] = C7037;
    vry[9] = C7053;
    vry[10] = C7220;
    vry[11] = C7309;
    vry[12] = C7401;
    vry[13] = C7489;
    vry[14] = C7577;
    vry[15] = C7663;
    vry[16] = C7748;
    vry[17] = C7763;
    vry[18] = C7778;
    vry[19] = C7792;
    vry[20] = C7807;
    vry[21] = C7822;
    vry[22] = C7851;
    vry[23] = C7866;
    vry[24] = C7881;
    vry[25] = C7910;
    vry[26] = C7925;
    vry[27] = C7954;
    vry[28] = C7983;
    vry[29] = C7998;
    vry[30] = C8013;
    vry[31] = C8056;
    vry[32] = C8071;
    vry[33] = C8114;
    vry[34] = C8129;
    vry[35] = C8200;
    vry[36] = C8299;
    vry[37] = C8314;
    vry[38] = C8356;
    vry[39] = C8371;
    vry[40] = C8386;
    vry[41] = C8415;
    vry[42] = C8430;
    vry[43] = C8459;
    vry[44] = C8503;
    vry[45] = C8518;
    vry[46] = C8533;
    vry[47] = C8619;
    vry[48] = C8704;
    vry[49] = C8761;
    vry[50] = C8776;
    vry[51] = C8818;
    vry[52] = C8847;
    vry[53] = C8862;
    vry[54] = C8920;
    vry[55] = C8992;
    vrz[0] = C9136;
    vrz[1] = C9153;
    vrz[2] = C9324;
    vrz[3] = C9417;
    vrz[4] = C9511;
    vrz[5] = C9527;
    vrz[6] = C9694;
    vrz[7] = C9784;
    vrz[8] = C9879;
    vrz[9] = C9895;
    vrz[10] = C10062;
    vrz[11] = C10151;
    vrz[12] = C10243;
    vrz[13] = C10331;
    vrz[14] = C10419;
    vrz[15] = C10505;
    vrz[16] = C10590;
    vrz[17] = C10605;
    vrz[18] = C10620;
    vrz[19] = C10634;
    vrz[20] = C10649;
    vrz[21] = C10664;
    vrz[22] = C10693;
    vrz[23] = C10708;
    vrz[24] = C10723;
    vrz[25] = C10752;
    vrz[26] = C10767;
    vrz[27] = C10796;
    vrz[28] = C10825;
    vrz[29] = C10840;
    vrz[30] = C10855;
    vrz[31] = C10898;
    vrz[32] = C10913;
    vrz[33] = C10956;
    vrz[34] = C10971;
    vrz[35] = C11042;
    vrz[36] = C11141;
    vrz[37] = C11156;
    vrz[38] = C11198;
    vrz[39] = C11213;
    vrz[40] = C11228;
    vrz[41] = C11257;
    vrz[42] = C11272;
    vrz[43] = C11301;
    vrz[44] = C11344;
    vrz[45] = C11359;
    vrz[46] = C11374;
    vrz[47] = C11459;
    vrz[48] = C11544;
    vrz[49] = C11601;
    vrz[50] = C11616;
    vrz[51] = C11658;
    vrz[52] = C11687;
    vrz[53] = C11702;
    vrz[54] = C11759;
    vrz[55] = C11831;
}
