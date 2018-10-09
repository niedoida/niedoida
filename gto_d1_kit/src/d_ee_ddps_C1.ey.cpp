/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2120_3_vr(const double ae,
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
    const double C12367 = g[82];
    const double C12386 = g[83];
    const double C12427 = g[84];
    const double C12482 = g[85];
    const double C12537 = g[86];
    const double C12551 = g[87];
    const double C12566 = g[88];
    const double C12593 = g[89];
    const double C12607 = g[90];
    const double C12622 = g[91];
    const double C12671 = g[92];
    const double C12713 = g[93];
    const double C12794 = g[94];
    const double C12851 = g[95];
    const double C12867 = g[96];
    const double C12881 = g[97];
    const double C12909 = g[98];
    const double C12924 = g[99];
    const double C12953 = g[100];
    const double C13034 = g[101];
    const double C13048 = g[102];
    const double C13062 = g[103];
    const double C13090 = g[104];
    const double C13143 = g[105];
    const double C13159 = g[106];
    const double C13247 = g[107];
    const double C13262 = g[108];
    const double C13290 = g[109];
    const double C13318 = g[110];
    const double C13346 = g[111];
    const double C13374 = g[112];
    const double C13389 = g[113];
    const double C13404 = g[114];
    const double C13524 = g[115];
    const double C13572 = g[116];
    const double C13587 = g[117];
    const double C13644 = g[118];
    const double C13659 = g[119];
    const double C13706 = g[120];
    const double C13721 = g[121];
    const double C13797 = g[122];
    const double C14122 = g[123];
    const double C14218 = g[124];
    const double C14232 = g[125];
    const double C14275 = g[126];
    const double C14634 = g[127];
    const double C14689 = g[128];
    const double C14906 = g[129];
    const double C15048 = g[130];
    const double C15205 = g[131];
    const double C15729 = g[132];
    const double C16499 = g[133];
    const double C16656 = g[134];
    const double C12370 = p + q;
    const double C12369 = p * q;
    const double C16750 = bs[6];
    const double C16749 = bs[5];
    const double C16747 = bs[4];
    const double C16745 = bs[3];
    const double C16742 = bs[2];
    const double C16735 = std::pow(Pi, 2.5);
    const double C16734 = ce * de;
    const double C16733 = bs[0];
    const double C16730 = bs[1];
    const double C16728 = zP - zQ;
    const double C16727 = be * zAB;
    const double C16726 = yP - yQ;
    const double C16725 = be * yAB;
    const double C16724 = 2 * p;
    const double C16722 = xP - xQ;
    const double C16721 = be * xAB;
    const double C12371 = C12370 * p;
    const double C16736 = std::sqrt(C12370);
    const double C16732 = q * C12370;
    const double C16731 = C12369 * ce;
    const double C16720 = C12370 * C12369;
    const double C16719 = ce * C12369;
    const double C16788 = 4 * C16735;
    const double C16787 = kab * C16734;
    const double C16777 = C16728 * C12369;
    const double C16776 = C16726 * C12369;
    const double C16774 = C16722 * C12369;
    const double C16789 = C12369 * C16736;
    const double C16786 = kab * C16731;
    const double C16826 = C14689 * C16719;
    const double C16822 = C14218 * C16719;
    const double C16817 = C13797 * C16719;
    const double C16815 = C13706 * C16719;
    const double C16814 = C13659 * C16719;
    const double C16813 = C13644 * C16719;
    const double C16811 = C13524 * C16719;
    const double C16810 = C13404 * C16719;
    const double C16807 = C13346 * C16719;
    const double C16806 = C13318 * C16719;
    const double C16805 = C13290 * C16719;
    const double C16804 = C13262 * C16719;
    const double C16803 = C13247 * C16719;
    const double C16802 = C13159 * C16719;
    const double C16800 = C13090 * C16719;
    const double C16799 = C13062 * C16719;
    const double C16798 = C13048 * C16719;
    const double C16797 = C13034 * C16719;
    const double C16796 = C12953 * C16719;
    const double C16795 = C12881 * C16719;
    const double C16794 = C12867 * C16719;
    const double C16784 = C12622 * C16719;
    const double C16783 = C12607 * C16719;
    const double C16782 = C12593 * C16719;
    const double C16781 = C12566 * C16719;
    const double C16780 = C12537 * C16719;
    const double C16779 = C12482 * C16719;
    const double C16778 = C12427 * C16719;
    const double C16773 = C12367 * C16719;
    const double C16853 = kcd * C16787;
    const double C16852 = kcd * C16786;
    const double C16890 = C16826 / C16720;
    const double C16886 = C16822 / C16720;
    const double C16881 = C16817 / C16720;
    const double C16879 = C16815 / C16720;
    const double C16878 = C16814 / C16720;
    const double C16877 = C16813 / C16720;
    const double C16875 = C16811 / C16720;
    const double C16874 = C16810 / C16720;
    const double C16871 = C16807 / C16720;
    const double C16870 = C16806 / C16720;
    const double C16869 = C16805 / C16720;
    const double C16868 = C16804 / C16720;
    const double C16867 = C16803 / C16720;
    const double C16866 = C16802 / C16720;
    const double C16864 = C16800 / C16720;
    const double C16863 = C16799 / C16720;
    const double C16862 = C16798 / C16720;
    const double C16861 = C16797 / C16720;
    const double C16860 = C16796 / C16720;
    const double C16859 = C16795 / C16720;
    const double C16858 = C16794 / C16720;
    const double C16850 = C16784 / C16720;
    const double C16849 = C16783 / C16720;
    const double C16848 = C16782 / C16720;
    const double C16847 = C16781 / C16720;
    const double C16846 = C16780 / C16720;
    const double C16845 = C16779 / C16720;
    const double C16844 = C16778 / C16720;
    const double C16842 = C16773 / C16720;
    const double C16926 = C16749 * C16853;
    const double C16924 = C16747 * C16853;
    const double C16921 = C16745 * C16853;
    const double C16918 = C16742 * C16853;
    const double C16915 = C16730 * C16853;
    const double C16908 = C16733 * C16853;
    const double C16925 = C16750 * C16852;
    const double C16923 = C16749 * C16852;
    const double C16920 = C16747 * C16852;
    const double C16917 = C16745 * C16852;
    const double C16914 = C16742 * C16852;
    const double C16907 = C16730 * C16852;
    const double C13801 =
        (((C16722 * C16925) / C16732 - (xCD * C16926) / q) * C16788) / C16789;
    const double C15245 =
        (((C16726 * C16925) / C16732 - (yCD * C16926) / q) * C16788) / C16789;
    const double C16683 =
        (((C16728 * C16925) / C16732 - (zCD * C16926) / q) * C16788) / C16789;
    const double C13710 =
        (((C16722 * C16923) / C16732 - (xCD * C16924) / q) * C16788) / C16789;
    const double C15155 =
        (((C16726 * C16923) / C16732 - (yCD * C16924) / q) * C16788) / C16789;
    const double C16593 =
        (((C16728 * C16923) / C16732 - (zCD * C16924) / q) * C16788) / C16789;
    const double C13528 =
        (((C16722 * C16920) / C16732 - (xCD * C16921) / q) * C16788) / C16789;
    const double C14984 =
        (((C16726 * C16920) / C16732 - (yCD * C16921) / q) * C16788) / C16789;
    const double C16422 =
        (((C16728 * C16920) / C16732 - (zCD * C16921) / q) * C16788) / C16789;
    const double C13148 =
        (((C16722 * C16917) / C16732 - (xCD * C16918) / q) * C16788) / C16789;
    const double C14603 =
        (((C16726 * C16917) / C16732 - (yCD * C16918) / q) * C16788) / C16789;
    const double C16044 =
        (((C16728 * C16917) / C16732 - (zCD * C16918) / q) * C16788) / C16789;
    const double C12390 =
        (((C16722 * C16914) / C16732 - (xCD * C16915) / q) * C16788) / C16789;
    const double C13864 =
        (((C16726 * C16914) / C16732 - (yCD * C16915) / q) * C16788) / C16789;
    const double C15308 =
        (((C16728 * C16914) / C16732 - (zCD * C16915) / q) * C16788) / C16789;
    const double C4929 =
        (((C16722 * C16907) / C16732 - (xCD * C16908) / q) * C16788) / C16789;
    const double C7792 =
        (((C16726 * C16907) / C16732 - (yCD * C16908) / q) * C16788) / C16789;
    const double C10634 =
        (((C16728 * C16907) / C16732 - (zCD * C16908) / q) * C16788) / C16789;
    const double C16748 = C13710 * C12369;
    const double C13725 =
        C16881 - (C13710 * C16721) / p - (C13801 * C16774) / C12371;
    const double C13765 = -((C13710 * C16725) / p + (C13801 * C16776) / C12371);
    const double C13779 = -((C13710 * C16727) / p + (C13801 * C16777) / C12371);
    const double C16761 = C15155 * C12369;
    const double C15169 = -((C15155 * C16721) / p + (C15245 * C16774) / C12371);
    const double C15210 =
        C16881 - (C15155 * C16725) / p - (C15245 * C16776) / C12371;
    const double C15224 = -((C15155 * C16727) / p + (C15245 * C16777) / C12371);
    const double C16772 = C16593 * C12369;
    const double C16607 = -((C16593 * C16721) / p + (C16683 * C16774) / C12371);
    const double C16647 = -((C16593 * C16725) / p + (C16683 * C16776) / C12371);
    const double C16662 =
        C16881 - (C16593 * C16727) / p - (C16683 * C16777) / C12371;
    const double C16746 = C13528 * C12369;
    const double C13576 =
        C16879 - (C13528 * C16721) / p - (C13710 * C16774) / C12371;
    const double C13605 = -((C13528 * C16725) / p + (C13710 * C16776) / C12371);
    const double C13619 = -((C13528 * C16727) / p + (C13710 * C16777) / C12371);
    const double C16760 = C14984 * C12369;
    const double C15024 = -((C14984 * C16721) / p + (C15155 * C16774) / C12371);
    const double C15053 =
        C16879 - (C14984 * C16725) / p - (C15155 * C16776) / C12371;
    const double C15067 = -((C14984 * C16727) / p + (C15155 * C16777) / C12371);
    const double C16771 = C16422 * C12369;
    const double C16462 = -((C16422 * C16721) / p + (C16593 * C16774) / C12371);
    const double C16490 = -((C16422 * C16725) / p + (C16593 * C16776) / C12371);
    const double C16505 =
        C16879 - (C16422 * C16727) / p - (C16593 * C16777) / C12371;
    const double C16741 = C13148 * C12369;
    const double C13147 =
        C16875 - (C13148 * C16721) / p - (C13528 * C16774) / C12371;
    const double C13183 = -((C13148 * C16725) / p + (C13528 * C16776) / C12371);
    const double C13210 = -((C13148 * C16727) / p + (C13528 * C16777) / C12371);
    const double C16757 = C14603 * C12369;
    const double C14617 = -((C14603 * C16721) / p + (C14984 * C16774) / C12371);
    const double C14639 =
        C16875 - (C14603 * C16725) / p - (C14984 * C16776) / C12371;
    const double C14666 = -((C14603 * C16727) / p + (C14984 * C16777) / C12371);
    const double C16768 = C16044 * C12369;
    const double C16058 = -((C16044 * C16721) / p + (C16422 * C16774) / C12371);
    const double C16079 = -((C16044 * C16725) / p + (C16422 * C16776) / C12371);
    const double C16106 =
        C16875 - (C16044 * C16727) / p - (C16422 * C16777) / C12371;
    const double C16723 = C12390 * C12369;
    const double C12375 =
        C16866 - (C12390 * C16721) / p - (C13148 * C16774) / C12371;
    const double C12445 = -((C12390 * C16725) / p + (C13148 * C16776) / C12371);
    const double C12500 = -((C12390 * C16727) / p + (C13148 * C16777) / C12371);
    const double C16751 = C13864 * C12369;
    const double C13849 = -((C13864 * C16721) / p + (C14603 * C16774) / C12371);
    const double C13918 =
        C16866 - (C13864 * C16725) / p - (C14603 * C16776) / C12371;
    const double C13972 = -((C13864 * C16727) / p + (C14603 * C16777) / C12371);
    const double C16762 = C15308 * C12369;
    const double C15293 = -((C15308 * C16721) / p + (C16044 * C16774) / C12371);
    const double C15362 = -((C15308 * C16725) / p + (C16044 * C16776) / C12371);
    const double C15416 =
        C16866 - (C15308 * C16727) / p - (C16044 * C16777) / C12371;
    const double C4882 =
        C16848 - (C4929 * C16721) / p - (C12390 * C16774) / C12371;
    const double C5151 = -((C4929 * C16725) / p + (C12390 * C16776) / C12371);
    const double C5270 = -((C4929 * C16727) / p + (C12390 * C16777) / C12371);
    const double C7748 = -((C7792 * C16721) / p + (C13864 * C16774) / C12371);
    const double C8013 =
        C16848 - (C7792 * C16725) / p - (C13864 * C16776) / C12371;
    const double C8129 = -((C7792 * C16727) / p + (C13864 * C16777) / C12371);
    const double C10590 = -((C10634 * C16721) / p + (C15308 * C16774) / C12371);
    const double C10855 = -((C10634 * C16725) / p + (C15308 * C16776) / C12371);
    const double C10971 =
        C16848 - (C10634 * C16727) / p - (C15308 * C16777) / C12371;
    const double C16816 = C16748 / C12371;
    const double C16830 = C16761 / C12371;
    const double C16841 = C16772 / C12371;
    const double C16812 = C16746 / C12371;
    const double C16829 = C16760 / C12371;
    const double C16840 = C16771 / C12371;
    const double C16801 = C16741 / C12371;
    const double C16825 = C16757 / C12371;
    const double C16837 = C16768 / C12371;
    const double C16775 = C16723 / C12371;
    const double C12555 = -((C12500 * C16725) / p + (C13210 * C16776) / C12371);
    const double C16818 = C16751 / C12371;
    const double C14025 =
        C16890 - (C13972 * C16725) / p - (C14666 * C16776) / C12371;
    const double C16831 = C16762 / C12371;
    const double C15469 = -((C15416 * C16725) / p + (C16106 * C16776) / C12371);
    const double C4523 =
        C16846 - (C5151 * C16721) / p - (C12445 * C16774) / C12371;
    const double C4705 =
        C16847 - (C5270 * C16721) / p - (C12500 * C16774) / C12371;
    const double C4794 = -((C5270 * C16725) / p + (C12500 * C16776) / C12371);
    const double C7401 = -((C8013 * C16721) / p + (C13918 * C16774) / C12371);
    const double C7577 = -((C8129 * C16721) / p + (C13972 * C16774) / C12371);
    const double C7663 =
        C16847 - (C8129 * C16725) / p - (C13972 * C16776) / C12371;
    const double C10243 = -((C10855 * C16721) / p + (C15362 * C16774) / C12371);
    const double C10419 = -((C10971 * C16721) / p + (C15416 * C16774) / C12371);
    const double C10505 = -((C10971 * C16725) / p + (C15416 * C16776) / C12371);
    const double C16880 = C13528 - C16816;
    const double C16894 = C14984 - C16830;
    const double C16905 = C16422 - C16841;
    const double C16876 = C13148 - C16812;
    const double C16893 = C14603 - C16829;
    const double C16904 = C16044 - C16840;
    const double C16865 = C12390 - C16801;
    const double C16889 = C13864 - C16825;
    const double C16901 = C15308 - C16837;
    const double C16843 = C4929 - C16775;
    const double C16882 = C7792 - C16818;
    const double C16895 = C10634 - C16831;
    const double C4614 = (C12551 * C16719) / C16720 - (C4794 * C16721) / p -
                         (C12555 * C16774) / C12371;
    const double C7489 = -((C7663 * C16721) / p + (C14025 * C16774) / C12371);
    const double C10331 = -((C10505 * C16721) / p + (C15469 * C16774) / C12371);
    const double C16922 = C16880 / C16724;
    const double C16935 = C16894 / C16724;
    const double C16944 = C16905 / C16724;
    const double C16919 = C16876 / C16724;
    const double C16934 = C16893 / C16724;
    const double C16943 = C16904 / C16724;
    const double C16913 = C16865 / C16724;
    const double C16932 = C16889 / C16724;
    const double C16941 = C16901 / C16724;
    const double C16906 = C16843 / C16724;
    const double C16927 = C16882 / C16724;
    const double C16936 = C16895 / C16724;
    const double C13591 = (C13721 * C16719) / C16720 - (C13576 * C16721) / p -
                          (C13725 * C16774) / C12371 + C16922;
    const double C13633 =
        C16922 - ((C13605 * C16725) / p + (C13765 * C16776) / C12371);
    const double C13648 =
        C16922 - ((C13619 * C16727) / p + (C13779 * C16777) / C12371);
    const double C15038 =
        C16935 - ((C15024 * C16721) / p + (C15169 * C16774) / C12371);
    const double C15081 = (C15205 * C16719) / C16720 - (C15053 * C16725) / p -
                          (C15210 * C16776) / C12371 + C16935;
    const double C15095 =
        C16935 - ((C15067 * C16727) / p + (C15224 * C16777) / C12371);
    const double C16476 =
        C16944 - ((C16462 * C16721) / p + (C16607 * C16774) / C12371);
    const double C16519 =
        C16944 - ((C16490 * C16725) / p + (C16647 * C16776) / C12371);
    const double C16533 = (C16656 * C16719) / C16720 - (C16505 * C16727) / p -
                          (C16662 * C16777) / C12371 + C16944;
    const double C13251 = (C13572 * C16719) / C16720 - (C13147 * C16721) / p -
                          (C13576 * C16774) / C12371 + C16919;
    const double C13294 =
        C16919 - ((C13183 * C16725) / p + (C13605 * C16776) / C12371);
    const double C13322 =
        C16919 - ((C13210 * C16727) / p + (C13619 * C16777) / C12371);
    const double C14707 =
        C16934 - ((C14617 * C16721) / p + (C15024 * C16774) / C12371);
    const double C14748 = (C15048 * C16719) / C16720 - (C14639 * C16725) / p -
                          (C15053 * C16776) / C12371 + C16934;
    const double C14775 =
        C16934 - ((C14666 * C16727) / p + (C15067 * C16777) / C12371);
    const double C16146 =
        C16943 - ((C16058 * C16721) / p + (C16462 * C16774) / C12371);
    const double C16187 =
        C16943 - ((C16079 * C16725) / p + (C16490 * C16776) / C12371);
    const double C16214 = (C16499 * C16719) / C16720 - (C16106 * C16727) / p -
                          (C16505 * C16777) / C12371 + C16943;
    const double C12374 = (C13143 * C16719) / C16720 - (C12375 * C16721) / p -
                          (C13147 * C16774) / C12371 + C16913;
    const double C12431 =
        C16913 - ((C12445 * C16725) / p + (C13183 * C16776) / C12371);
    const double C12486 =
        C16913 - ((C12500 * C16727) / p + (C13210 * C16777) / C12371);
    const double C13850 =
        C16932 - ((C13849 * C16721) / p + (C14617 * C16774) / C12371);
    const double C13904 = (C14634 * C16719) / C16720 - (C13918 * C16725) / p -
                          (C14639 * C16776) / C12371 + C16932;
    const double C13958 =
        C16932 - ((C13972 * C16727) / p + (C14666 * C16777) / C12371);
    const double C15294 =
        C16941 - ((C15293 * C16721) / p + (C16058 * C16774) / C12371);
    const double C15348 =
        C16941 - ((C15362 * C16725) / p + (C16079 * C16776) / C12371);
    const double C15402 =
        C16890 - (C15416 * C16727) / p - (C16106 * C16777) / C12371 + C16941;
    const double C3398 = (C12386 * C16719) / C16720 - (C4882 * C16721) / p -
                         (C12375 * C16774) / C12371 + C16906;
    const double C3784 =
        C16906 - ((C5151 * C16725) / p + (C12445 * C16776) / C12371);
    const double C4164 =
        C16906 - ((C5270 * C16727) / p + (C12500 * C16777) / C12371);
    const double C6311 =
        C16927 - ((C7748 * C16721) / p + (C13849 * C16774) / C12371);
    const double C6685 =
        C16846 - (C8013 * C16725) / p - (C13918 * C16776) / C12371 + C16927;
    const double C7053 =
        C16927 - ((C8129 * C16727) / p + (C13972 * C16777) / C12371);
    const double C9153 =
        C16936 - ((C10590 * C16721) / p + (C15293 * C16774) / C12371);
    const double C9527 =
        C16936 - ((C10855 * C16725) / p + (C15362 * C16776) / C12371);
    const double C9895 =
        C16847 - (C10971 * C16727) / p - (C15416 * C16777) / C12371 + C16936;
    const double C13266 = (C13587 * C16719) / C16720 - (C13251 * C16721) / p -
                          (C13591 * C16774) / C12371 +
                          (C13147 - (C13576 * C12369) / C12371) / p;
    const double C16744 = C13294 * C12369;
    const double C13350 = (C13183 - (C13605 * C12369) / C12371) / p -
                          ((C13294 * C16725) / p + (C13633 * C16776) / C12371);
    const double C13393 =
        C16878 - (C13294 * C16721) / p - (C13633 * C16774) / C12371;
    const double C16743 = C13322 * C12369;
    const double C13378 =
        C16877 - (C13322 * C16721) / p - (C13648 * C16774) / C12371;
    const double C13408 = (C13210 - (C13619 * C12369) / C12371) / p -
                          ((C13322 * C16727) / p + (C13648 * C16777) / C12371);
    const double C13461 = -((C13322 * C16725) / p + (C13648 * C16776) / C12371);
    const double C14721 = (C14617 - (C15024 * C12369) / C12371) / p -
                          ((C14707 * C16721) / p + (C15038 * C16774) / C12371);
    const double C16759 = C14748 * C12369;
    const double C14815 = C16878 - (C14748 * C16725) / p -
                          (C15081 * C16776) / C12371 +
                          (C14639 - (C15053 * C12369) / C12371) / p;
    const double C14843 = -((C14748 * C16721) / p + (C15081 * C16774) / C12371);
    const double C16758 = C14775 * C12369;
    const double C14829 = -((C14775 * C16721) / p + (C15095 * C16774) / C12371);
    const double C14870 = (C14666 - (C15067 * C12369) / C12371) / p -
                          ((C14775 * C16727) / p + (C15095 * C16777) / C12371);
    const double C14911 =
        C16877 - (C14775 * C16725) / p - (C15095 * C16776) / C12371;
    const double C16160 = (C16058 - (C16462 * C12369) / C12371) / p -
                          ((C16146 * C16721) / p + (C16476 * C16774) / C12371);
    const double C16770 = C16187 * C12369;
    const double C16254 = (C16079 - (C16490 * C12369) / C12371) / p -
                          ((C16187 * C16725) / p + (C16519 * C16776) / C12371);
    const double C16282 = -((C16187 * C16721) / p + (C16519 * C16774) / C12371);
    const double C16769 = C16214 * C12369;
    const double C16268 = -((C16214 * C16721) / p + (C16533 * C16774) / C12371);
    const double C16309 = C16877 - (C16214 * C16727) / p -
                          (C16533 * C16777) / C12371 +
                          (C16106 - (C16505 * C12369) / C12371) / p;
    const double C16349 = -((C16214 * C16725) / p + (C16533 * C16776) / C12371);
    const double C12611 = C16867 - (C12374 * C16721) / p -
                          (C13251 * C16774) / C12371 +
                          (C12375 - (C13147 * C12369) / C12371) / p;
    const double C12770 = -((C12374 * C16727) / p + (C13251 * C16777) / C12371);
    const double C16737 = C12431 * C12369;
    const double C12675 =
        C16869 - (C12431 * C16721) / p - (C13294 * C16774) / C12371;
    const double C12799 = (C12445 - (C13183 * C12369) / C12371) / p -
                          ((C12431 * C16725) / p + (C13294 * C16776) / C12371);
    const double C12913 = -((C12431 * C16727) / p + (C13294 * C16777) / C12371);
    const double C16738 = C12486 * C12369;
    const double C12717 =
        C16870 - (C12486 * C16721) / p - (C13322 * C16774) / C12371;
    const double C12856 = (C12500 - (C13210 * C12369) / C12371) / p -
                          ((C12486 * C16727) / p + (C13322 * C16777) / C12371);
    const double C12942 = -((C12486 * C16725) / p + (C13322 * C16776) / C12371);
    const double C14078 = (C13849 - (C14617 * C12369) / C12371) / p -
                          ((C13850 * C16721) / p + (C14707 * C16774) / C12371);
    const double C14237 = -((C13850 * C16727) / p + (C14707 * C16777) / C12371);
    const double C16753 = C13904 * C12369;
    const double C14141 = -((C13904 * C16721) / p + (C14748 * C16774) / C12371);
    const double C14264 = C16869 - (C13904 * C16725) / p -
                          (C14748 * C16776) / C12371 +
                          (C13918 - (C14639 * C12369) / C12371) / p;
    const double C14376 = -((C13904 * C16727) / p + (C14748 * C16777) / C12371);
    const double C16754 = C13958 * C12369;
    const double C14182 = -((C13958 * C16721) / p + (C14775 * C16774) / C12371);
    const double C14321 = (C13972 - (C14666 * C12369) / C12371) / p -
                          ((C13958 * C16727) / p + (C14775 * C16777) / C12371);
    const double C14404 =
        C16870 - (C13958 * C16725) / p - (C14775 * C16776) / C12371;
    const double C15522 = (C15293 - (C16058 * C12369) / C12371) / p -
                          ((C15294 * C16721) / p + (C16146 * C16774) / C12371);
    const double C15678 =
        C16867 - (C15294 * C16727) / p - (C16146 * C16777) / C12371;
    const double C16764 = C15348 * C12369;
    const double C15584 = -((C15348 * C16721) / p + (C16187 * C16774) / C12371);
    const double C15705 = (C15362 - (C16079 * C12369) / C12371) / p -
                          ((C15348 * C16725) / p + (C16187 * C16776) / C12371);
    const double C15817 =
        C16869 - (C15348 * C16727) / p - (C16187 * C16777) / C12371;
    const double C16765 = C15402 * C12369;
    const double C15625 = -((C15402 * C16721) / p + (C16214 * C16774) / C12371);
    const double C15762 = C16870 - (C15402 * C16727) / p -
                          (C16214 * C16777) / C12371 +
                          (C15416 - (C16106 * C12369) / C12371) / p;
    const double C15845 = -((C15402 * C16725) / p + (C16214 * C16776) / C12371);
    const double C3380 = C16842 - (C3398 * C16721) / p -
                         (C12374 * C16774) / C12371 +
                         (C4882 - (C12375 * C12369) / C12371) / p;
    const double C3574 = -((C3398 * C16725) / p + (C12374 * C16776) / C12371);
    const double C3670 = -((C3398 * C16727) / p + (C12374 * C16777) / C12371);
    const double C3767 =
        C16844 - (C3784 * C16721) / p - (C12431 * C16774) / C12371;
    const double C3956 = (C5151 - (C12445 * C12369) / C12371) / p -
                         ((C3784 * C16725) / p + (C12431 * C16776) / C12371);
    const double C4049 = -((C3784 * C16727) / p + (C12431 * C16777) / C12371);
    const double C4147 =
        C16845 - (C4164 * C16721) / p - (C12486 * C16774) / C12371;
    const double C4336 = -((C4164 * C16725) / p + (C12486 * C16776) / C12371);
    const double C4428 = (C5270 - (C12500 * C12369) / C12371) / p -
                         ((C4164 * C16727) / p + (C12486 * C16777) / C12371);
    const double C6294 = (C7748 - (C13849 * C12369) / C12371) / p -
                         ((C6311 * C16721) / p + (C13850 * C16774) / C12371);
    const double C6482 =
        C16842 - (C6311 * C16725) / p - (C13850 * C16776) / C12371;
    const double C6575 = -((C6311 * C16727) / p + (C13850 * C16777) / C12371);
    const double C6669 = -((C6685 * C16721) / p + (C13904 * C16774) / C12371);
    const double C6852 = C16844 - (C6685 * C16725) / p -
                         (C13904 * C16776) / C12371 +
                         (C8013 - (C13918 * C12369) / C12371) / p;
    const double C6942 = -((C6685 * C16727) / p + (C13904 * C16777) / C12371);
    const double C7037 = -((C7053 * C16721) / p + (C13958 * C16774) / C12371);
    const double C7220 =
        C16845 - (C7053 * C16725) / p - (C13958 * C16776) / C12371;
    const double C7309 = (C8129 - (C13972 * C12369) / C12371) / p -
                         ((C7053 * C16727) / p + (C13958 * C16777) / C12371);
    const double C9136 = (C10590 - (C15293 * C12369) / C12371) / p -
                         ((C9153 * C16721) / p + (C15294 * C16774) / C12371);
    const double C9324 = -((C9153 * C16725) / p + (C15294 * C16776) / C12371);
    const double C9417 =
        C16842 - (C9153 * C16727) / p - (C15294 * C16777) / C12371;
    const double C9511 = -((C9527 * C16721) / p + (C15348 * C16774) / C12371);
    const double C9694 = (C10855 - (C15362 * C12369) / C12371) / p -
                         ((C9527 * C16725) / p + (C15348 * C16776) / C12371);
    const double C9784 =
        C16844 - (C9527 * C16727) / p - (C15348 * C16777) / C12371;
    const double C9879 = -((C9895 * C16721) / p + (C15402 * C16774) / C12371);
    const double C10062 = -((C9895 * C16725) / p + (C15402 * C16776) / C12371);
    const double C10151 = C16845 - (C9895 * C16727) / p -
                          (C15402 * C16777) / C12371 +
                          (C10971 - (C15416 * C12369) / C12371) / p;
    const double C16809 = C16744 / C12371;
    const double C16808 = C16743 / C12371;
    const double C16828 = C16759 / C12371;
    const double C16827 = C16758 / C12371;
    const double C16839 = C16770 / C12371;
    const double C16838 = C16769 / C12371;
    const double C16729 = C12611 * C12369;
    const double C12626 = C16868 - (C12611 * C16721) / p -
                          (C13266 * C16774) / C12371 +
                          (3 * (C12374 - (C13251 * C12369) / C12371)) / C16724;
    const double C12660 = -((C12611 * C16725) / p + (C13266 * C16776) / C12371);
    const double C12702 = -((C12611 * C16727) / p + (C13266 * C16777) / C12371);
    const double C16790 = C16737 / C12371;
    const double C16739 = C12799 * C12369;
    const double C12798 =
        C16871 - (C12799 * C16721) / p - (C13350 * C16774) / C12371;
    const double C12957 = -((C12799 * C16727) / p + (C13350 * C16777) / C12371);
    const double C16791 = C16738 / C12371;
    const double C16740 = C12856 * C12369;
    const double C12855 =
        C16874 - (C12856 * C16721) / p - (C13408 * C16774) / C12371;
    const double C13023 = -((C12856 * C16725) / p + (C13408 * C16776) / C12371);
    const double C16752 = C14078 * C12369;
    const double C14092 = (3 * (C13850 - (C14707 * C12369) / C12371)) / C16724 -
                          ((C14078 * C16721) / p + (C14721 * C16774) / C12371);
    const double C14127 =
        C16868 - (C14078 * C16725) / p - (C14721 * C16776) / C12371;
    const double C14168 = -((C14078 * C16727) / p + (C14721 * C16777) / C12371);
    const double C16820 = C16753 / C12371;
    const double C16755 = C14264 * C12369;
    const double C14265 = -((C14264 * C16721) / p + (C14815 * C16774) / C12371);
    const double C14418 = -((C14264 * C16727) / p + (C14815 * C16777) / C12371);
    const double C16821 = C16754 / C12371;
    const double C16756 = C14321 * C12369;
    const double C14322 = -((C14321 * C16721) / p + (C14870 * C16774) / C12371);
    const double C14484 =
        C16874 - (C14321 * C16725) / p - (C14870 * C16776) / C12371;
    const double C16763 = C15522 * C12369;
    const double C15536 = (3 * (C15294 - (C16146 * C12369) / C12371)) / C16724 -
                          ((C15522 * C16721) / p + (C16160 * C16774) / C12371);
    const double C15570 = -((C15522 * C16725) / p + (C16160 * C16776) / C12371);
    const double C15611 =
        C16868 - (C15522 * C16727) / p - (C16160 * C16777) / C12371;
    const double C16833 = C16764 / C12371;
    const double C16766 = C15705 * C12369;
    const double C15706 = -((C15705 * C16721) / p + (C16254 * C16774) / C12371);
    const double C15859 =
        C16871 - (C15705 * C16727) / p - (C16254 * C16777) / C12371;
    const double C16834 = C16765 / C12371;
    const double C16767 = C15762 * C12369;
    const double C15763 = -((C15762 * C16721) / p + (C16309 * C16774) / C12371);
    const double C15925 = -((C15762 * C16725) / p + (C16309 * C16776) / C12371);
    const double C4898 = C16849 - (C3380 * C16721) / p -
                         (C12611 * C16774) / C12371 +
                         (3 * (C3398 - (C12374 * C12369) / C12371)) / C16724;
    const double C4944 = -((C3380 * C16725) / p + (C12611 * C16776) / C12371);
    const double C5003 = -((C3380 * C16727) / p + (C12611 * C16777) / C12371);
    const double C5135 = -((C3670 * C16725) / p + (C12770 * C16776) / C12371);
    const double C5445 =
        C16858 - (C3956 * C16721) / p - (C12799 * C16774) / C12371;
    const double C5605 = -((C3956 * C16727) / p + (C12799 * C16777) / C12371);
    const double C5517 = (C12909 * C16719) / C16720 - (C4049 * C16721) / p -
                         (C12913 * C16774) / C12371;
    const double C5855 =
        C16861 - (C4336 * C16721) / p - (C12942 * C16774) / C12371;
    const double C5912 =
        C16862 - (C4428 * C16721) / p - (C12856 * C16774) / C12371;
    const double C6013 = -((C4428 * C16725) / p + (C12856 * C16776) / C12371);
    const double C7763 = (3 * (C6311 - (C13850 * C12369) / C12371)) / C16724 -
                         ((C6294 * C16721) / p + (C14078 * C16774) / C12371);
    const double C7807 =
        C16849 - (C6294 * C16725) / p - (C14078 * C16776) / C12371;
    const double C7866 = -((C6294 * C16727) / p + (C14078 * C16777) / C12371);
    const double C7998 = (C14232 * C16719) / C16720 - (C6575 * C16725) / p -
                         (C14237 * C16776) / C12371;
    const double C8299 = -((C6852 * C16721) / p + (C14264 * C16774) / C12371);
    const double C8459 = -((C6852 * C16727) / p + (C14264 * C16777) / C12371);
    const double C8371 = -((C6942 * C16721) / p + (C14376 * C16774) / C12371);
    const double C8704 = -((C7220 * C16721) / p + (C14404 * C16774) / C12371);
    const double C8761 = -((C7309 * C16721) / p + (C14321 * C16774) / C12371);
    const double C8862 =
        C16862 - (C7309 * C16725) / p - (C14321 * C16776) / C12371;
    const double C10605 = (3 * (C9153 - (C15294 * C12369) / C12371)) / C16724 -
                          ((C9136 * C16721) / p + (C15522 * C16774) / C12371);
    const double C10649 = -((C9136 * C16725) / p + (C15522 * C16776) / C12371);
    const double C10708 =
        C16849 - (C9136 * C16727) / p - (C15522 * C16777) / C12371;
    const double C10840 = -((C9417 * C16725) / p + (C15678 * C16776) / C12371);
    const double C11141 = -((C9694 * C16721) / p + (C15705 * C16774) / C12371);
    const double C11301 =
        C16858 - (C9694 * C16727) / p - (C15705 * C16777) / C12371;
    const double C11213 = -((C9784 * C16721) / p + (C15817 * C16774) / C12371);
    const double C11544 = -((C10062 * C16721) / p + (C15845 * C16774) / C12371);
    const double C11601 = -((C10151 * C16721) / p + (C15762 * C16774) / C12371);
    const double C11702 = -((C10151 * C16725) / p + (C15762 * C16776) / C12371);
    const double C16873 = C12431 - C16809;
    const double C16872 = C12486 - C16808;
    const double C16892 = C13904 - C16828;
    const double C16891 = C13958 - C16827;
    const double C16903 = C15348 - C16839;
    const double C16902 = C15402 - C16838;
    const double C16785 = C16729 / C12371;
    const double C16854 = C3784 - C16790;
    const double C16792 = C16739 / C12371;
    const double C16855 = C4164 - C16791;
    const double C16793 = C16740 / C12371;
    const double C16819 = C16752 / C12371;
    const double C16884 = C6685 - C16820;
    const double C16823 = C16755 / C12371;
    const double C16885 = C7053 - C16821;
    const double C16824 = C16756 / C12371;
    const double C16832 = C16763 / C12371;
    const double C16897 = C9527 - C16833;
    const double C16835 = C16766 / C12371;
    const double C16898 = C9895 - C16834;
    const double C16836 = C16767 / C12371;
    const double C5062 = -((C4898 * C16725) / p + (C12626 * C16776) / C12371);
    const double C5091 = -((C4898 * C16727) / p + (C12626 * C16777) / C12371);
    const double C5120 = -((C5003 * C16725) / p + (C12702 * C16776) / C12371);
    const double C5576 =
        C16860 - (C5605 * C16721) / p - (C12957 * C16774) / C12371;
    const double C5998 =
        C16864 - (C6013 * C16721) / p - (C13023 * C16774) / C12371;
    const double C7925 =
        C16850 - (C7763 * C16725) / p - (C14092 * C16776) / C12371;
    const double C7954 = -((C7763 * C16727) / p + (C14092 * C16777) / C12371);
    const double C7983 =
        C16886 - (C7866 * C16725) / p - (C14168 * C16776) / C12371;
    const double C8430 = -((C8459 * C16721) / p + (C14418 * C16774) / C12371);
    const double C8847 = -((C8862 * C16721) / p + (C14484 * C16774) / C12371);
    const double C10767 = -((C10605 * C16725) / p + (C15536 * C16776) / C12371);
    const double C10796 =
        C16850 - (C10605 * C16727) / p - (C15536 * C16777) / C12371;
    const double C10825 = -((C10708 * C16725) / p + (C15611 * C16776) / C12371);
    const double C11272 = -((C11301 * C16721) / p + (C15859 * C16774) / C12371);
    const double C11687 = -((C11702 * C16721) / p + (C15925 * C16774) / C12371);
    const double C12827 = (C13389 * C16719) / C16720 - (C12675 * C16721) / p -
                          (C13393 * C16774) / C12371 + C16873 / C16724;
    const double C12885 = (3 * C16873) / C16724 -
                          ((C12799 * C16725) / p + (C13350 * C16776) / C12371);
    const double C16916 = C16872 / C16724;
    const double C13066 = (3 * C16872) / C16724 -
                          ((C12856 * C16727) / p + (C13408 * C16777) / C12371);
    const double C14294 =
        C16892 / C16724 - ((C14141 * C16721) / p + (C14843 * C16774) / C12371);
    const double C14349 = C16871 - (C14264 * C16725) / p -
                          (C14815 * C16776) / C12371 + (3 * C16892) / C16724;
    const double C16933 = C16891 / C16724;
    const double C14524 = (3 * C16891) / C16724 -
                          ((C14321 * C16727) / p + (C14870 * C16777) / C12371);
    const double C15735 =
        C16903 / C16724 - ((C15584 * C16721) / p + (C16282 * C16774) / C12371);
    const double C15790 = (3 * C16903) / C16724 -
                          ((C15705 * C16725) / p + (C16254 * C16776) / C12371);
    const double C16942 = C16902 / C16724;
    const double C15965 = C16874 - (C15762 * C16727) / p -
                          (C16309 * C16777) / C12371 + (3 * C16902) / C16724;
    const double C16851 = C3380 - C16785;
    const double C4988 = (C12671 * C16719) / C16720 - (C3767 * C16721) / p -
                         (C12675 * C16774) / C12371 + C16854 / C16724;
    const double C5502 = (3 * C16854) / C16724 -
                         ((C3956 * C16725) / p + (C12799 * C16776) / C12371);
    const double C16856 = C3956 - C16792;
    const double C16910 = C16855 / C16724;
    const double C5969 = (3 * C16855) / C16724 -
                         ((C4428 * C16727) / p + (C12856 * C16777) / C12371);
    const double C16857 = C4428 - C16793;
    const double C16883 = C6294 - C16819;
    const double C7851 =
        C16884 / C16724 - ((C6669 * C16721) / p + (C14141 * C16774) / C12371);
    const double C8356 = C16858 - (C6852 * C16725) / p -
                         (C14264 * C16776) / C12371 + (3 * C16884) / C16724;
    const double C16887 = C6852 - C16823;
    const double C16929 = C16885 / C16724;
    const double C8818 = (3 * C16885) / C16724 -
                         ((C7309 * C16727) / p + (C14321 * C16777) / C12371);
    const double C16888 = C7309 - C16824;
    const double C16896 = C9136 - C16832;
    const double C10693 =
        C16897 / C16724 - ((C9511 * C16721) / p + (C15584 * C16774) / C12371);
    const double C11198 = (3 * C16897) / C16724 -
                          ((C9694 * C16725) / p + (C15705 * C16776) / C12371);
    const double C16899 = C9694 - C16835;
    const double C16938 = C16898 / C16724;
    const double C11658 = C16862 - (C10151 * C16727) / p -
                          (C15762 * C16777) / C12371 + (3 * C16898) / C16724;
    const double C16900 = C10151 - C16836;
    const double C12813 = (C13374 * C16719) / C16720 - (C12717 * C16721) / p -
                          (C13378 * C16774) / C12371 + C16916;
    const double C12928 =
        C16916 - ((C12942 * C16725) / p + (C13461 * C16776) / C12371);
    const double C14280 =
        C16933 - ((C14182 * C16721) / p + (C14829 * C16774) / C12371);
    const double C14390 = (C14906 * C16719) / C16720 - (C14404 * C16725) / p -
                          (C14911 * C16776) / C12371 + C16933;
    const double C15720 =
        C16942 - ((C15625 * C16721) / p + (C16268 * C16774) / C12371);
    const double C15831 =
        C16942 - ((C15845 * C16725) / p + (C16349 * C16776) / C12371);
    const double C16909 = C16851 / C16724;
    const double C4914 = C16850 - (C4898 * C16721) / p -
                         (C12626 * C16774) / C12371 + (2 * C16851) / p;
    const double C5254 = -((C4988 * C16727) / p + (C12827 * C16777) / C12371);
    const double C5460 =
        C16859 - (C5502 * C16721) / p - (C12885 * C16774) / C12371;
    const double C5680 = -((C5502 * C16727) / p + (C12885 * C16777) / C12371);
    const double C16911 = C16856 / C16724;
    const double C5650 =
        (2 * C16856) / p - ((C5502 * C16725) / p + (C12885 * C16776) / C12371);
    const double C5047 = (C12713 * C16719) / C16720 - (C4147 * C16721) / p -
                         (C12717 * C16774) / C12371 + C16910;
    const double C5561 =
        C16910 - ((C4336 * C16725) / p + (C12942 * C16776) / C12371);
    const double C5927 =
        C16863 - (C5969 * C16721) / p - (C13066 * C16774) / C12371;
    const double C6072 = -((C5969 * C16725) / p + (C13066 * C16776) / C12371);
    const double C16912 = C16857 / C16724;
    const double C6145 =
        (2 * C16857) / p - ((C5969 * C16727) / p + (C13066 * C16777) / C12371);
    const double C16928 = C16883 / C16724;
    const double C7778 =
        (2 * C16883) / p - ((C7763 * C16721) / p + (C14092 * C16774) / C12371);
    const double C8114 = -((C7851 * C16727) / p + (C14294 * C16777) / C12371);
    const double C8314 = -((C8356 * C16721) / p + (C14349 * C16774) / C12371);
    const double C8533 = -((C8356 * C16727) / p + (C14349 * C16777) / C12371);
    const double C16930 = C16887 / C16724;
    const double C8503 = C16859 - (C8356 * C16725) / p -
                         (C14349 * C16776) / C12371 + (2 * C16887) / p;
    const double C7910 =
        C16929 - ((C7037 * C16721) / p + (C14182 * C16774) / C12371);
    const double C8415 =
        C16861 - (C7220 * C16725) / p - (C14404 * C16776) / C12371 + C16929;
    const double C8776 = -((C8818 * C16721) / p + (C14524 * C16774) / C12371);
    const double C8920 =
        C16863 - (C8818 * C16725) / p - (C14524 * C16776) / C12371;
    const double C16931 = C16888 / C16724;
    const double C8992 =
        (2 * C16888) / p - ((C8818 * C16727) / p + (C14524 * C16777) / C12371);
    const double C16937 = C16896 / C16724;
    const double C10620 =
        (2 * C16896) / p - ((C10605 * C16721) / p + (C15536 * C16774) / C12371);
    const double C10956 = (C15729 * C16719) / C16720 - (C10693 * C16727) / p -
                          (C15735 * C16777) / C12371;
    const double C11156 = -((C11198 * C16721) / p + (C15790 * C16774) / C12371);
    const double C11374 =
        C16859 - (C11198 * C16727) / p - (C15790 * C16777) / C12371;
    const double C16939 = C16899 / C16724;
    const double C11344 =
        (2 * C16899) / p - ((C11198 * C16725) / p + (C15790 * C16776) / C12371);
    const double C10752 =
        C16938 - ((C9879 * C16721) / p + (C15625 * C16774) / C12371);
    const double C11257 =
        C16938 - ((C10062 * C16725) / p + (C15845 * C16776) / C12371);
    const double C11616 = -((C11658 * C16721) / p + (C15965 * C16774) / C12371);
    const double C11759 = -((C11658 * C16725) / p + (C15965 * C16776) / C12371);
    const double C16940 = C16900 / C16724;
    const double C11831 = C16863 - (C11658 * C16727) / p -
                          (C15965 * C16777) / C12371 + (2 * C16900) / p;
    const double C4959 =
        C16909 - ((C4944 * C16725) / p + (C12660 * C16776) / C12371);
    const double C5018 =
        C16909 - ((C5003 * C16727) / p + (C12702 * C16777) / C12371);
    const double C5196 = (C12794 * C16719) / C16720 - (C5445 * C16721) / p -
                         (C12798 * C16774) / C12371 + C16911;
    const double C5665 =
        C16911 - ((C5605 * C16727) / p + (C12957 * C16777) / C12371);
    const double C5211 = -((C5047 * C16725) / p + (C12813 * C16776) / C12371);
    const double C5532 = (C12924 * C16719) / C16720 - (C5561 * C16721) / p -
                         (C12928 * C16774) / C12371;
    const double C5343 = (C12851 * C16719) / C16720 - (C5912 * C16721) / p -
                         (C12855 * C16774) / C12371 + C16912;
    const double C5767 =
        C16912 - ((C6013 * C16725) / p + (C13023 * C16776) / C12371);
    const double C7822 = (C14122 * C16719) / C16720 - (C7807 * C16725) / p -
                         (C14127 * C16776) / C12371 + C16928;
    const double C7881 =
        C16928 - ((C7866 * C16727) / p + (C14168 * C16777) / C12371);
    const double C8056 =
        C16930 - ((C8299 * C16721) / p + (C14265 * C16774) / C12371);
    const double C8518 =
        C16930 - ((C8459 * C16727) / p + (C14418 * C16777) / C12371);
    const double C8071 = (C14275 * C16719) / C16720 - (C7910 * C16725) / p -
                         (C14280 * C16776) / C12371;
    const double C8386 = -((C8415 * C16721) / p + (C14390 * C16774) / C12371);
    const double C8200 =
        C16931 - ((C8761 * C16721) / p + (C14322 * C16774) / C12371);
    const double C8619 =
        C16864 - (C8862 * C16725) / p - (C14484 * C16776) / C12371 + C16931;
    const double C10664 =
        C16937 - ((C10649 * C16725) / p + (C15570 * C16776) / C12371);
    const double C10723 =
        C16886 - (C10708 * C16727) / p - (C15611 * C16777) / C12371 + C16937;
    const double C10898 =
        C16939 - ((C11141 * C16721) / p + (C15706 * C16774) / C12371);
    const double C11359 =
        C16860 - (C11301 * C16727) / p - (C15859 * C16777) / C12371 + C16939;
    const double C10913 = -((C10752 * C16725) / p + (C15720 * C16776) / C12371);
    const double C11228 = -((C11257 * C16721) / p + (C15831 * C16774) / C12371);
    const double C11042 =
        C16940 - ((C11601 * C16721) / p + (C15763 * C16774) / C12371);
    const double C11459 =
        C16940 - ((C11702 * C16725) / p + (C15925 * C16776) / C12371);
    vrx[0] = C3380;
    vrx[1] = C3398;
    vrx[2] = C3574;
    vrx[3] = C3670;
    vrx[4] = C3767;
    vrx[5] = C3784;
    vrx[6] = C3956;
    vrx[7] = C4049;
    vrx[8] = C4147;
    vrx[9] = C4164;
    vrx[10] = C4336;
    vrx[11] = C4428;
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
    vrx[30] = C5151;
    vrx[31] = C5196;
    vrx[32] = C5211;
    vrx[33] = C5254;
    vrx[34] = C5270;
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
