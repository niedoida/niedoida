/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2011_2_vr(const double ae,
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
    const double C26882 = g[1];
    const double C27025 = g[5];
    const double C27168 = g[9];
    const double C27582 = g[21];
    const double C27697 = g[24];
    const double C27713 = g[25];
    const double C27832 = g[26];
    const double C27949 = g[27];
    const double C28051 = g[28];
    const double C28095 = g[30];
    const double C28110 = g[31];
    const double C29194 = g[33];
    const double C29298 = g[34];
    const double C29482 = g[35];
    const double C30640 = g[36];
    const double C30996 = g[37];
    const double C31016 = g[38];
    const double C31017 = g[39];
    const double C31032 = g[40];
    const double C31091 = g[41];
    const double C31164 = g[42];
    const double C31222 = g[43];
    const double C31237 = g[44];
    const double C31253 = g[45];
    const double C31289 = g[46];
    const double C31333 = g[47];
    const double C31364 = g[48];
    const double C31380 = g[49];
    const double C31396 = g[50];
    const double C31455 = g[51];
    const double C31470 = g[52];
    const double C31514 = g[53];
    const double C31537 = g[54];
    const double C31625 = g[55];
    const double C31641 = g[56];
    const double C31671 = g[57];
    const double C31750 = g[58];
    const double C31794 = g[59];
    const double C31847 = g[60];
    const double C32237 = g[61];
    const double C32449 = g[62];
    const double C32494 = g[63];
    const double C32689 = g[64];
    const double C33580 = g[65];
    const double C30999 = p + q;
    const double C30998 = p * q;
    const double C33691 = C31253 * be;
    const double C33686 = bs[5];
    const double C33685 = C31750 * be;
    const double C33684 = bs[4];
    const double C33682 = C31514 * be;
    const double C33681 = bs[3];
    const double C33680 = C31164 * be;
    const double C33679 = C31091 * be;
    const double C33678 = C31032 * be;
    const double C33676 = bs[2];
    const double C33675 = C31017 * be;
    const double C33674 = C30640 * be;
    const double C33673 = C29298 * be;
    const double C33672 = C29194 * be;
    const double C33669 = C27713 * be;
    const double C33667 = std::pow(Pi, 2.5);
    const double C33666 = ae * be;
    const double C33665 = bs[0];
    const double C33662 = bs[1];
    const double C33661 = C28095 * be;
    const double C33660 = C28051 * be;
    const double C33659 = C27168 * be;
    const double C33658 = C27025 * be;
    const double C33657 = zP - zQ;
    const double C33656 = be * zAB;
    const double C33655 = yP - yQ;
    const double C33654 = be * yAB;
    const double C33653 = C26882 * be;
    const double C33652 = C31016 * be;
    const double C33651 = 2 * p;
    const double C33649 = xP - xQ;
    const double C33648 = std::pow(p, 2);
    const double C33646 = be * xAB;
    const double C31000 = C30999 * p;
    const double C33668 = std::sqrt(C30999);
    const double C33664 = p * C30999;
    const double C33663 = C30998 * be;
    const double C33647 = be * C30998;
    const double C33747 = C33691 / p;
    const double C33741 = C33685 / p;
    const double C33738 = C33682 / p;
    const double C33736 = C33680 / p;
    const double C33734 = C33679 / p;
    const double C33732 = C33678 / p;
    const double C33729 = C33675 / p;
    const double C33727 = C33674 / p;
    const double C33725 = C33673 / p;
    const double C33723 = C33672 / p;
    const double C33719 = C33669 / p;
    const double C33717 = 4 * C33667;
    const double C33716 = kab * C33666;
    const double C33713 = C33661 / p;
    const double C33711 = C33660 / p;
    const double C33709 = C33659 / p;
    const double C33707 = C33658 / p;
    const double C33706 = C33657 * C30998;
    const double C33705 = C33655 * C30998;
    const double C33703 = C33653 / p;
    const double C33701 = C33652 / p;
    const double C33699 = C33649 * C30998;
    const double C33698 = C30999 * C33648;
    const double C33718 = C30998 * C33668;
    const double C33715 = kab * C33663;
    const double C33748 = C32494 * C33647;
    const double C33742 = C31847 * C33647;
    const double C33739 = C31750 * C33647;
    const double C33737 = C31671 * C33647;
    const double C33735 = C31641 * C33647;
    const double C33733 = C31625 * C33647;
    const double C33730 = C31514 * C33647;
    const double C33728 = C31470 * C33647;
    const double C33726 = C31455 * C33647;
    const double C33724 = C31380 * C33647;
    const double C33720 = C31289 * C33647;
    const double C33714 = C31253 * C33647;
    const double C33712 = C31222 * C33647;
    const double C33710 = C31164 * C33647;
    const double C33708 = C31091 * C33647;
    const double C33704 = C31032 * C33647;
    const double C33702 = C31017 * C33647;
    const double C33763 = kcd * C33716;
    const double C33762 = kcd * C33715;
    const double C33782 = C33748 / C33698;
    const double C33777 = C33742 / C33698;
    const double C33775 = C33739 / C33698;
    const double C33774 = C33737 / C33698;
    const double C33773 = C33735 / C33698;
    const double C33772 = C33733 / C33698;
    const double C33770 = C33730 / C33698;
    const double C33769 = C33728 / C33698;
    const double C33768 = C33726 / C33698;
    const double C33767 = C33724 / C33698;
    const double C33764 = C33720 / C33698;
    const double C33761 = C33714 / C33698;
    const double C33760 = C33712 / C33698;
    const double C33759 = C33710 / C33698;
    const double C33758 = C33708 / C33698;
    const double C33757 = C33704 / C33698;
    const double C33756 = C33702 / C33698;
    const double C33802 = C33684 * C33763;
    const double C33800 = C33681 * C33763;
    const double C33797 = C33676 * C33763;
    const double C33794 = C33662 * C33763;
    const double C33791 = C33665 * C33763;
    const double C33801 = C33686 * C33762;
    const double C33799 = C33684 * C33762;
    const double C33796 = C33681 * C33762;
    const double C33793 = C33676 * C33762;
    const double C33790 = C33662 * C33762;
    const double C31851 =
        -(((C33649 * C33801) / C33664 - (xAB * C33802) / p) * C33717) / C33718;
    const double C32731 =
        -(((C33655 * C33801) / C33664 - (yAB * C33802) / p) * C33717) / C33718;
    const double C33608 =
        -(((C33657 * C33801) / C33664 - (zAB * C33802) / p) * C33717) / C33718;
    const double C31754 =
        -(((C33649 * C33799) / C33664 - (xAB * C33800) / p) * C33717) / C33718;
    const double C32635 =
        -(((C33655 * C33799) / C33664 - (yAB * C33800) / p) * C33717) / C33718;
    const double C33512 =
        -(((C33657 * C33799) / C33664 - (zAB * C33800) / p) * C33717) / C33718;
    const double C31518 =
        -(((C33649 * C33796) / C33664 - (xAB * C33797) / p) * C33717) / C33718;
    const double C32409 =
        -(((C33655 * C33796) / C33664 - (yAB * C33797) / p) * C33717) / C33718;
    const double C33288 =
        -(((C33657 * C33796) / C33664 - (zAB * C33797) / p) * C33717) / C33718;
    const double C31004 =
        -(((C33649 * C33793) / C33664 - (xAB * C33794) / p) * C33717) / C33718;
    const double C31902 =
        -(((C33655 * C33793) / C33664 - (yAB * C33794) / p) * C33717) / C33718;
    const double C32782 =
        -(((C33657 * C33793) / C33664 - (zAB * C33794) / p) * C33717) / C33718;
    const double C27701 =
        -(((C33649 * C33790) / C33664 - (xAB * C33791) / p) * C33717) / C33718;
    const double C29008 =
        -(((C33655 * C33790) / C33664 - (yAB * C33791) / p) * C33717) / C33718;
    const double C30310 =
        -(((C33657 * C33790) / C33664 - (zAB * C33791) / p) * C33717) / C33718;
    const double C33683 = C31754 * C30998;
    const double C31798 =
        C33741 - (C31754 * C33646) / p - C33777 - (C31851 * C33699) / C31000;
    const double C31813 = -((C31754 * C33654) / p + (C31851 * C33705) / C31000);
    const double C31828 = -((C31754 * C33656) / p + (C31851 * C33706) / C31000);
    const double C33692 = C32635 * C30998;
    const double C32678 = -((C32635 * C33646) / p + (C32731 * C33699) / C31000);
    const double C32694 =
        C33741 - (C32635 * C33654) / p - C33777 - (C32731 * C33705) / C31000;
    const double C32709 = -((C32635 * C33656) / p + (C32731 * C33706) / C31000);
    const double C33697 = C33512 * C30998;
    const double C33555 = -((C33512 * C33646) / p + (C33608 * C33699) / C31000);
    const double C33570 = -((C33512 * C33654) / p + (C33608 * C33705) / C31000);
    const double C33586 =
        C33741 - (C33512 * C33656) / p - C33777 - (C33608 * C33706) / C31000;
    const double C33677 = C31518 * C30998;
    const double C31541 =
        C33738 - (C31518 * C33646) / p - C33775 - (C31754 * C33699) / C31000;
    const double C31570 = -((C31518 * C33654) / p + (C31754 * C33705) / C31000);
    const double C31599 = -((C31518 * C33656) / p + (C31754 * C33706) / C31000);
    const double C33690 = C32409 * C30998;
    const double C32424 = -((C32409 * C33646) / p + (C32635 * C33699) / C31000);
    const double C32454 =
        C33738 - (C32409 * C33654) / p - C33775 - (C32635 * C33705) / C31000;
    const double C32483 = -((C32409 * C33656) / p + (C32635 * C33706) / C31000);
    const double C33696 = C33288 * C30998;
    const double C33303 = -((C33288 * C33646) / p + (C33512 * C33699) / C31000);
    const double C33332 = -((C33288 * C33654) / p + (C33512 * C33705) / C31000);
    const double C33361 =
        C33738 - (C33288 * C33656) / p - C33775 - (C33512 * C33706) / C31000;
    const double C33650 = C31004 * C30998;
    const double C31003 =
        C33729 - (C31004 * C33646) / p - C33770 - (C31518 * C33699) / C31000;
    const double C31079 = -((C31004 * C33654) / p + (C31518 * C33705) / C31000);
    const double C31152 = -((C31004 * C33656) / p + (C31518 * C33706) / C31000);
    const double C33687 = C31902 * C30998;
    const double C31903 = -((C31902 * C33646) / p + (C32409 * C33699) / C31000);
    const double C31975 =
        C33729 - (C31902 * C33654) / p - C33770 - (C32409 * C33705) / C31000;
    const double C32047 = -((C31902 * C33656) / p + (C32409 * C33706) / C31000);
    const double C33693 = C32782 * C30998;
    const double C32783 = -((C32782 * C33646) / p + (C33288 * C33699) / C31000);
    const double C32855 = -((C32782 * C33654) / p + (C33288 * C33705) / C31000);
    const double C32927 =
        C33729 - (C32782 * C33656) / p - C33770 - (C33288 * C33706) / C31000;
    const double C26886 =
        C33701 - (C27701 * C33646) / p - C33756 - (C31004 * C33699) / C31000;
    const double C27076 = -((C27701 * C33654) / p + (C31004 * C33705) / C31000);
    const double C27264 = -((C27701 * C33656) / p + (C31004 * C33706) / C31000);
    const double C28217 = -((C29008 * C33646) / p + (C31902 * C33699) / C31000);
    const double C28401 =
        C33701 - (C29008 * C33654) / p - C33756 - (C31902 * C33705) / C31000;
    const double C28585 = -((C29008 * C33656) / p + (C31902 * C33706) / C31000);
    const double C29519 = -((C30310 * C33646) / p + (C32782 * C33699) / C31000);
    const double C29703 = -((C30310 * C33654) / p + (C32782 * C33705) / C31000);
    const double C29887 =
        C33701 - (C30310 * C33656) / p - C33756 - (C32782 * C33706) / C31000;
    const double C33740 = C33683 / C31000;
    const double C33749 = C33692 / C31000;
    const double C33754 = C33697 / C31000;
    const double C33731 = C33677 / C31000;
    const double C33746 = C33690 / C31000;
    const double C33753 = C33696 / C31000;
    const double C33700 = C33650 / C31000;
    const double C31241 = -((C31152 * C33654) / p + (C31599 * C33705) / C31000);
    const double C33743 = C33687 / C31000;
    const double C32133 =
        C33747 - (C32047 * C33654) / p - C33782 - (C32483 * C33705) / C31000;
    const double C33750 = C33693 / C31000;
    const double C33013 = -((C32927 * C33654) / p + (C33361 * C33705) / C31000);
    const double C27299 =
        C33711 - (C27076 * C33646) / p - C33760 - (C31079 * C33699) / C31000;
    const double C27434 =
        C33713 - (C27264 * C33646) / p - C33761 - (C31152 * C33699) / C31000;
    const double C27569 = -((C27264 * C33654) / p + (C31152 * C33705) / C31000);
    const double C28618 = -((C28401 * C33646) / p + (C31975 * C33699) / C31000);
    const double C28749 = -((C28585 * C33646) / p + (C32047 * C33699) / C31000);
    const double C28880 =
        C33713 - (C28585 * C33654) / p - C33761 - (C32047 * C33705) / C31000;
    const double C29920 = -((C29703 * C33646) / p + (C32855 * C33699) / C31000);
    const double C30051 = -((C29887 * C33646) / p + (C32927 * C33699) / C31000);
    const double C30182 = -((C29887 * C33654) / p + (C32927 * C33705) / C31000);
    const double C33776 = C31518 - C33740;
    const double C33783 = C32409 - C33749;
    const double C33788 = C33288 - C33754;
    const double C33771 = C31004 - C33731;
    const double C33781 = C31902 - C33746;
    const double C33787 = C32782 - C33753;
    const double C33755 = C27701 - C33700;
    const double C33778 = C29008 - C33743;
    const double C33784 = C30310 - C33750;
    const double C27402 = (C27582 * be) / p - (C27569 * C33646) / p -
                          (C31237 * C33647) / C33698 -
                          (C31241 * C33699) / C31000;
    const double C28718 = -((C28880 * C33646) / p + (C32133 * C33699) / C31000);
    const double C30020 = -((C30182 * C33646) / p + (C33013 * C33699) / C31000);
    const double C33798 = C33776 / C33651;
    const double C33806 = C33783 / C33651;
    const double C33810 = C33788 / C33651;
    const double C33795 = C33771 / C33651;
    const double C33805 = C33781 / C33651;
    const double C33809 = C33787 / C33651;
    const double C33789 = C33755 / C33651;
    const double C33803 = C33778 / C33651;
    const double C33807 = C33784 / C33651;
    const double C31629 = (C31537 * be) / p - (C31541 * C33646) / p -
                          (C31794 * C33647) / C33698 -
                          (C31798 * C33699) / C31000 + C33798;
    const double C31645 =
        C33798 - ((C31570 * C33654) / p + (C31813 * C33705) / C31000);
    const double C31675 =
        C33798 - ((C31599 * C33656) / p + (C31828 * C33706) / C31000);
    const double C32513 =
        C33806 - ((C32424 * C33646) / p + (C32678 * C33699) / C31000);
    const double C32528 = (C32449 * be) / p - (C32454 * C33654) / p -
                          (C32689 * C33647) / C33698 -
                          (C32694 * C33705) / C31000 + C33806;
    const double C32557 =
        C33806 - ((C32483 * C33656) / p + (C32709 * C33706) / C31000);
    const double C33390 =
        C33810 - ((C33303 * C33646) / p + (C33555 * C33699) / C31000);
    const double C33405 =
        C33810 - ((C33332 * C33654) / p + (C33570 * C33705) / C31000);
    const double C33434 = (C32494 * be) / p - (C33361 * C33656) / p -
                          (C33580 * C33647) / C33698 -
                          (C33586 * C33706) / C31000 + C33810;
    const double C31036 = (C30996 * be) / p - (C31003 * C33646) / p -
                          (C31537 * C33647) / C33698 -
                          (C31541 * C33699) / C31000 + C33795;
    const double C31095 =
        C33795 - ((C31079 * C33654) / p + (C31570 * C33705) / C31000);
    const double C31168 =
        C33795 - ((C31152 * C33656) / p + (C31599 * C33706) / C31000);
    const double C31932 =
        C33805 - ((C31903 * C33646) / p + (C32424 * C33699) / C31000);
    const double C31990 = (C31222 * be) / p - (C31975 * C33654) / p -
                          (C32449 * C33647) / C33698 -
                          (C32454 * C33705) / C31000 + C33805;
    const double C32062 =
        C33805 - ((C32047 * C33656) / p + (C32483 * C33706) / C31000);
    const double C32812 =
        C33809 - ((C32783 * C33646) / p + (C33303 * C33699) / C31000);
    const double C32870 =
        C33809 - ((C32855 * C33654) / p + (C33332 * C33705) / C31000);
    const double C32942 = C33747 - (C32927 * C33656) / p - C33782 -
                          (C33361 * C33706) / C31000 + C33809;
    const double C26869 = (C27697 * be) / p - (C26886 * C33646) / p -
                          (C30996 * C33647) / C33698 -
                          (C31003 * C33699) / C31000 + C33789;
    const double C27012 =
        C33789 - ((C27076 * C33654) / p + (C31079 * C33705) / C31000);
    const double C27155 =
        C33789 - ((C27264 * C33656) / p + (C31152 * C33706) / C31000);
    const double C28201 =
        C33803 - ((C28217 * C33646) / p + (C31903 * C33699) / C31000);
    const double C28340 = C33711 - (C28401 * C33654) / p - C33760 -
                          (C31975 * C33705) / C31000 + C33803;
    const double C28479 =
        C33803 - ((C28585 * C33656) / p + (C32047 * C33706) / C31000);
    const double C29503 =
        C33807 - ((C29519 * C33646) / p + (C32783 * C33699) / C31000);
    const double C29642 =
        C33807 - ((C29703 * C33654) / p + (C32855 * C33705) / C31000);
    const double C29781 = C33713 - (C29887 * C33656) / p - C33761 -
                          (C32927 * C33706) / C31000 + C33807;
    const double C31293 = C33732 - (C31036 * C33646) / p - C33772 -
                          (C31629 * C33699) / C31000 +
                          (C31003 - (C31541 * C30998) / C31000) / p;
    const double C31352 = -((C31036 * C33656) / p + (C31629 * C33706) / C31000);
    const double C33670 = C31095 * C30998;
    const double C31337 =
        C33734 - (C31095 * C33646) / p - C33773 - (C31645 * C33699) / C31000;
    const double C31384 = (C31079 - (C31570 * C30998) / C31000) / p -
                          ((C31095 * C33654) / p + (C31645 * C33705) / C31000);
    const double C31400 = -((C31095 * C33656) / p + (C31645 * C33706) / C31000);
    const double C33671 = C31168 * C30998;
    const double C31368 =
        C33736 - (C31168 * C33646) / p - C33774 - (C31675 * C33699) / C31000;
    const double C31443 = -((C31168 * C33654) / p + (C31675 * C33705) / C31000);
    const double C31474 = (C31152 - (C31599 * C30998) / C31000) / p -
                          ((C31168 * C33656) / p + (C31675 * C33706) / C31000);
    const double C32183 = (C31903 - (C32424 * C30998) / C31000) / p -
                          ((C31932 * C33646) / p + (C32513 * C33699) / C31000);
    const double C32242 = -((C31932 * C33656) / p + (C32513 * C33706) / C31000);
    const double C33688 = C31990 * C30998;
    const double C32226 = -((C31990 * C33646) / p + (C32528 * C33699) / C31000);
    const double C32272 = C33734 - (C31990 * C33654) / p - C33773 -
                          (C32528 * C33705) / C31000 +
                          (C31975 - (C32454 * C30998) / C31000) / p;
    const double C32287 = -((C31990 * C33656) / p + (C32528 * C33706) / C31000);
    const double C33689 = C32062 * C30998;
    const double C32257 = -((C32062 * C33646) / p + (C32557 * C33699) / C31000);
    const double C32330 =
        C33736 - (C32062 * C33654) / p - C33774 - (C32557 * C33705) / C31000;
    const double C32359 = (C32047 - (C32483 * C30998) / C31000) / p -
                          ((C32062 * C33656) / p + (C32557 * C33706) / C31000);
    const double C33063 = (C32783 - (C33303 * C30998) / C31000) / p -
                          ((C32812 * C33646) / p + (C33390 * C33699) / C31000);
    const double C33121 =
        C33732 - (C32812 * C33656) / p - C33772 - (C33390 * C33706) / C31000;
    const double C33694 = C32870 * C30998;
    const double C33106 = -((C32870 * C33646) / p + (C33405 * C33699) / C31000);
    const double C33151 = (C32855 - (C33332 * C30998) / C31000) / p -
                          ((C32870 * C33654) / p + (C33405 * C33705) / C31000);
    const double C33166 =
        C33734 - (C32870 * C33656) / p - C33773 - (C33405 * C33706) / C31000;
    const double C33695 = C32942 * C30998;
    const double C33136 = -((C32942 * C33646) / p + (C33434 * C33699) / C31000);
    const double C33209 = -((C32942 * C33654) / p + (C33434 * C33705) / C31000);
    const double C33238 = C33736 - (C32942 * C33656) / p - C33774 -
                          (C33434 * C33706) / C31000 +
                          (C32927 - (C33361 * C30998) / C31000) / p;
    const double C26887 = C33703 - (C26869 * C33646) / p - C33757 -
                          (C31036 * C33699) / C31000 +
                          (C26886 - (C31003 * C30998) / C31000) / p;
    const double C26936 = -((C26869 * C33654) / p + (C31036 * C33705) / C31000);
    const double C26981 = -((C26869 * C33656) / p + (C31036 * C33706) / C31000);
    const double C27029 =
        C33707 - (C27012 * C33646) / p - C33758 - (C31095 * C33699) / C31000;
    const double C27077 = (C27076 - (C31079 * C30998) / C31000) / p -
                          ((C27012 * C33654) / p + (C31095 * C33705) / C31000);
    const double C27124 = -((C27012 * C33656) / p + (C31095 * C33706) / C31000);
    const double C27172 =
        C33709 - (C27155 * C33646) / p - C33759 - (C31168 * C33699) / C31000;
    const double C27219 = -((C27155 * C33654) / p + (C31168 * C33705) / C31000);
    const double C27265 = (C27264 - (C31152 * C30998) / C31000) / p -
                          ((C27155 * C33656) / p + (C31168 * C33706) / C31000);
    const double C28218 = (C28217 - (C31903 * C30998) / C31000) / p -
                          ((C28201 * C33646) / p + (C31932 * C33699) / C31000);
    const double C28265 =
        C33703 - (C28201 * C33654) / p - C33757 - (C31932 * C33705) / C31000;
    const double C28310 = -((C28201 * C33656) / p + (C31932 * C33706) / C31000);
    const double C28356 = -((C28340 * C33646) / p + (C31990 * C33699) / C31000);
    const double C28402 = C33707 - (C28340 * C33654) / p - C33758 -
                          (C31990 * C33705) / C31000 +
                          (C28401 - (C31975 * C30998) / C31000) / p;
    const double C28449 = -((C28340 * C33656) / p + (C31990 * C33706) / C31000);
    const double C28495 = -((C28479 * C33646) / p + (C32062 * C33699) / C31000);
    const double C28540 =
        C33709 - (C28479 * C33654) / p - C33759 - (C32062 * C33705) / C31000;
    const double C28586 = (C28585 - (C32047 * C30998) / C31000) / p -
                          ((C28479 * C33656) / p + (C32062 * C33706) / C31000);
    const double C29520 = (C29519 - (C32783 * C30998) / C31000) / p -
                          ((C29503 * C33646) / p + (C32812 * C33699) / C31000);
    const double C29567 = -((C29503 * C33654) / p + (C32812 * C33705) / C31000);
    const double C29612 =
        C33703 - (C29503 * C33656) / p - C33757 - (C32812 * C33706) / C31000;
    const double C29658 = -((C29642 * C33646) / p + (C32870 * C33699) / C31000);
    const double C29704 = (C29703 - (C32855 * C30998) / C31000) / p -
                          ((C29642 * C33654) / p + (C32870 * C33705) / C31000);
    const double C29751 =
        C33707 - (C29642 * C33656) / p - C33758 - (C32870 * C33706) / C31000;
    const double C29797 = -((C29781 * C33646) / p + (C32942 * C33699) / C31000);
    const double C29842 = -((C29781 * C33654) / p + (C32942 * C33705) / C31000);
    const double C29888 = C33709 - (C29781 * C33656) / p - C33759 -
                          (C32942 * C33706) / C31000 +
                          (C29887 - (C32927 * C30998) / C31000) / p;
    const double C33721 = C33670 / C31000;
    const double C33722 = C33671 / C31000;
    const double C33744 = C33688 / C31000;
    const double C33745 = C33689 / C31000;
    const double C33751 = C33694 / C31000;
    const double C33752 = C33695 / C31000;
    const double C27717 = C33719 - (C26887 * C33646) / p - C33764 -
                          (C31293 * C33699) / C31000 +
                          (3 * (C26869 - (C31036 * C30998) / C31000)) / C33651;
    const double C27746 = -((C26887 * C33654) / p + (C31293 * C33705) / C31000);
    const double C27775 = -((C26887 * C33656) / p + (C31293 * C33706) / C31000);
    const double C27805 = -((C26981 * C33654) / p + (C31352 * C33705) / C31000);
    const double C27850 =
        C33723 - (C27077 * C33646) / p - C33767 - (C31384 * C33699) / C31000;
    const double C27922 = -((C27077 * C33656) / p + (C31384 * C33706) / C31000);
    const double C27865 = (C29482 * be) / p - (C27124 * C33646) / p -
                          (C31396 * C33647) / C33698 -
                          (C31400 * C33699) / C31000;
    const double C27967 =
        C33725 - (C27219 * C33646) / p - C33768 - (C31443 * C33699) / C31000;
    const double C27982 =
        C33727 - (C27265 * C33646) / p - C33769 - (C31474 * C33699) / C31000;
    const double C28011 = -((C27265 * C33654) / p + (C31474 * C33705) / C31000);
    const double C29023 = (3 * (C28201 - (C31932 * C30998) / C31000)) / C33651 -
                          ((C28218 * C33646) / p + (C32183 * C33699) / C31000);
    const double C29052 =
        C33719 - (C28218 * C33654) / p - C33764 - (C32183 * C33705) / C31000;
    const double C29081 = -((C28218 * C33656) / p + (C32183 * C33706) / C31000);
    const double C29111 = (C28110 * be) / p - (C28310 * C33654) / p -
                          (C32237 * C33647) / C33698 -
                          (C32242 * C33705) / C31000;
    const double C29155 = -((C28402 * C33646) / p + (C32272 * C33699) / C31000);
    const double C29228 = -((C28402 * C33656) / p + (C32272 * C33706) / C31000);
    const double C29170 = -((C28449 * C33646) / p + (C32287 * C33699) / C31000);
    const double C29272 = -((C28540 * C33646) / p + (C32330 * C33699) / C31000);
    const double C29287 = -((C28586 * C33646) / p + (C32359 * C33699) / C31000);
    const double C29317 =
        C33727 - (C28586 * C33654) / p - C33769 - (C32359 * C33705) / C31000;
    const double C30325 = (3 * (C29503 - (C32812 * C30998) / C31000)) / C33651 -
                          ((C29520 * C33646) / p + (C33063 * C33699) / C31000);
    const double C30354 = -((C29520 * C33654) / p + (C33063 * C33705) / C31000);
    const double C30383 =
        C33719 - (C29520 * C33656) / p - C33764 - (C33063 * C33706) / C31000;
    const double C30413 = -((C29612 * C33654) / p + (C33121 * C33705) / C31000);
    const double C30457 = -((C29704 * C33646) / p + (C33151 * C33699) / C31000);
    const double C30529 =
        C33723 - (C29704 * C33656) / p - C33767 - (C33151 * C33706) / C31000;
    const double C30472 = -((C29751 * C33646) / p + (C33166 * C33699) / C31000);
    const double C30573 = -((C29842 * C33646) / p + (C33209 * C33699) / C31000);
    const double C30588 = -((C29888 * C33646) / p + (C33238 * C33699) / C31000);
    const double C30617 = -((C29888 * C33654) / p + (C33238 * C33705) / C31000);
    const double C33765 = C27012 - C33721;
    const double C33766 = C27155 - C33722;
    const double C33779 = C28340 - C33744;
    const double C33780 = C28479 - C33745;
    const double C33785 = C29642 - C33751;
    const double C33786 = C29781 - C33752;
    const double C27790 = (C27832 * be) / p - (C27029 * C33646) / p -
                          (C31333 * C33647) / C33698 -
                          (C31337 * C33699) / C31000 + C33765 / C33651;
    const double C27893 = (3 * C33765) / C33651 -
                          ((C27077 * C33654) / p + (C31384 * C33705) / C31000);
    const double C33792 = C33766 / C33651;
    const double C28039 = (3 * C33766) / C33651 -
                          ((C27265 * C33656) / p + (C31474 * C33706) / C31000);
    const double C29096 =
        C33779 / C33651 - ((C28356 * C33646) / p + (C32226 * C33699) / C31000);
    const double C29199 = C33723 - (C28402 * C33654) / p - C33767 -
                          (C32272 * C33705) / C31000 + (3 * C33779) / C33651;
    const double C33804 = C33780 / C33651;
    const double C29345 = (3 * C33780) / C33651 -
                          ((C28586 * C33656) / p + (C32359 * C33706) / C31000);
    const double C30398 =
        C33785 / C33651 - ((C29658 * C33646) / p + (C33106 * C33699) / C31000);
    const double C30500 = (3 * C33785) / C33651 -
                          ((C29704 * C33654) / p + (C33151 * C33705) / C31000);
    const double C33808 = C33786 / C33651;
    const double C30646 = C33727 - (C29888 * C33656) / p - C33769 -
                          (C33238 * C33706) / C31000 + (3 * C33786) / C33651;
    const double C27820 = (C27949 * be) / p - (C27172 * C33646) / p -
                          (C31364 * C33647) / C33698 -
                          (C31368 * C33699) / C31000 + C33792;
    const double C27937 =
        C33792 - ((C27219 * C33654) / p + (C31443 * C33705) / C31000);
    const double C29126 =
        C33804 - ((C28495 * C33646) / p + (C32257 * C33699) / C31000);
    const double C29243 = C33725 - (C28540 * C33654) / p - C33768 -
                          (C32330 * C33705) / C31000 + C33804;
    const double C30428 =
        C33808 - ((C29797 * C33646) / p + (C33136 * C33699) / C31000);
    const double C30544 =
        C33808 - ((C29842 * C33654) / p + (C33209 * C33705) / C31000);
    vrx[0] = C26869;
    vrx[1] = C26886;
    vrx[2] = C26887;
    vrx[3] = C26936;
    vrx[4] = C26981;
    vrx[5] = C27012;
    vrx[6] = C27029;
    vrx[7] = C27076;
    vrx[8] = C27077;
    vrx[9] = C27124;
    vrx[10] = C27155;
    vrx[11] = C27172;
    vrx[12] = C27219;
    vrx[13] = C27264;
    vrx[14] = C27265;
    vrx[15] = C27299;
    vrx[16] = C27402;
    vrx[17] = C27434;
    vrx[18] = C27569;
    vrx[19] = C27701;
    vrx[20] = C27717;
    vrx[21] = C27746;
    vrx[22] = C27775;
    vrx[23] = C27790;
    vrx[24] = C27805;
    vrx[25] = C27820;
    vrx[26] = C27850;
    vrx[27] = C27865;
    vrx[28] = C27893;
    vrx[29] = C27922;
    vrx[30] = C27937;
    vrx[31] = C27967;
    vrx[32] = C27982;
    vrx[33] = C28011;
    vrx[34] = C28039;
    vry[0] = C28201;
    vry[1] = C28217;
    vry[2] = C28218;
    vry[3] = C28265;
    vry[4] = C28310;
    vry[5] = C28340;
    vry[6] = C28356;
    vry[7] = C28401;
    vry[8] = C28402;
    vry[9] = C28449;
    vry[10] = C28479;
    vry[11] = C28495;
    vry[12] = C28540;
    vry[13] = C28585;
    vry[14] = C28586;
    vry[15] = C28618;
    vry[16] = C28718;
    vry[17] = C28749;
    vry[18] = C28880;
    vry[19] = C29008;
    vry[20] = C29023;
    vry[21] = C29052;
    vry[22] = C29081;
    vry[23] = C29096;
    vry[24] = C29111;
    vry[25] = C29126;
    vry[26] = C29155;
    vry[27] = C29170;
    vry[28] = C29199;
    vry[29] = C29228;
    vry[30] = C29243;
    vry[31] = C29272;
    vry[32] = C29287;
    vry[33] = C29317;
    vry[34] = C29345;
    vrz[0] = C29503;
    vrz[1] = C29519;
    vrz[2] = C29520;
    vrz[3] = C29567;
    vrz[4] = C29612;
    vrz[5] = C29642;
    vrz[6] = C29658;
    vrz[7] = C29703;
    vrz[8] = C29704;
    vrz[9] = C29751;
    vrz[10] = C29781;
    vrz[11] = C29797;
    vrz[12] = C29842;
    vrz[13] = C29887;
    vrz[14] = C29888;
    vrz[15] = C29920;
    vrz[16] = C30020;
    vrz[17] = C30051;
    vrz[18] = C30182;
    vrz[19] = C30310;
    vrz[20] = C30325;
    vrz[21] = C30354;
    vrz[22] = C30383;
    vrz[23] = C30398;
    vrz[24] = C30413;
    vrz[25] = C30428;
    vrz[26] = C30457;
    vrz[27] = C30472;
    vrz[28] = C30500;
    vrz[29] = C30529;
    vrz[30] = C30544;
    vrz[31] = C30573;
    vrz[32] = C30588;
    vrz[33] = C30617;
    vrz[34] = C30646;
}
