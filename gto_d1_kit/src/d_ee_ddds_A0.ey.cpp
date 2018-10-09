/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2220_1_ints(const double ae,
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
                              double* const g)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double muab = ae * be / p;
    const double mucd = ce * de / q;
    const double rAB2 = xAB * xAB + yAB * yAB + zAB * zAB;
    const double rCD2 = xCD * xCD + yCD * yCD + zCD * zCD;
    const double kab = std::exp(-muab * rAB2);
    const double kcd = std::exp(-mucd * rCD2);
    const double C39050 = 2 * q;
    const double C40643 = de * zCD;
    const double C40642 = be * zAB;
    const double C40639 = de * yCD;
    const double C40638 = be * yAB;
    const double C40635 = de * xCD;
    const double C40634 = be * xAB;
    const double C40783 = p + q;
    const double C41640 = p * q;
    const double C41639 = std::pow(Pi, 2.5);
    const double C41634 = zP - zQ;
    const double C41632 = yP - yQ;
    const double C41628 = 2 * p;
    const double C41627 = xP - xQ;
    const double C40748 = C40642 + C40643;
    const double C40745 = C40638 + C40639;
    const double C40744 = C40634 + C40635;
    const double C41641 = std::sqrt(C40783);
    const double C41661 = C41639 * kab;
    const double C41656 = C41634 * q;
    const double C41654 = C41632 * q;
    const double C41650 = C41627 * q;
    const double C41662 = C41640 * C41641;
    const double C41679 = C41661 * kcd;
    const double C31053 = (2. * C41679 * bs[0]) / C41662;
    const double C31054 = (2. * C41679 * bs[1]) / C41662;
    const double C31839 = (2. * C41679 * bs[2]) / C41662;
    const double C32471 = (2. * C41679 * bs[3]) / C41662;
    const double C32788 = (2. * C41679 * bs[4]) / C41662;
    const double C32952 = (2. * C41679 * bs[5]) / C41662;
    const double C33049 = (2. * C41679 * bs[6]) / C41662;
    const double C40740 = C31053 / C39050;
    const double C41630 = C31054 * q;
    const double C17434 = -((C31053 * C40634) / p + (C31054 * C41650) / C40783);
    const double C19624 = -((C31053 * C40638) / p + (C31054 * C41654) / C40783);
    const double C19654 = -((C31053 * C40642) / p + (C31054 * C41656) / C40783);
    const double C41637 = C31839 * q;
    const double C30590 = -((C31054 * C40634) / p + (C31839 * C41650) / C40783);
    const double C30961 = -((C31054 * C40638) / p + (C31839 * C41654) / C40783);
    const double C30992 = -((C31054 * C40642) / p + (C31839 * C41656) / C40783);
    const double C41646 = C32471 * q;
    const double C31823 = -((C31839 * C40634) / p + (C32471 * C41650) / C40783);
    const double C34372 = -((C31839 * C40638) / p + (C32471 * C41654) / C40783);
    const double C34531 = -((C31839 * C40642) / p + (C32471 * C41656) / C40783);
    const double C41648 = C32788 * q;
    const double C32454 = -((C32471 * C40634) / p + (C32788 * C41650) / C40783);
    const double C35008 = -((C32471 * C40638) / p + (C32788 * C41654) / C40783);
    const double C37524 = -((C32471 * C40642) / p + (C32788 * C41656) / C40783);
    const double C41649 = C32952 * q;
    const double C32839 = -((C32788 * C40634) / p + (C32952 * C41650) / C40783);
    const double C35365 = -((C32788 * C40638) / p + (C32952 * C41654) / C40783);
    const double C37881 = -((C32788 * C40642) / p + (C32952 * C41656) / C40783);
    const double C32968 = -((C32952 * C40634) / p + (C33049 * C41650) / C40783);
    const double C35493 = -((C32952 * C40638) / p + (C33049 * C41654) / C40783);
    const double C38006 = -((C32952 * C40642) / p + (C33049 * C41656) / C40783);
    const double C41652 = C41630 / C40783;
    const double C40737 = C17434 / C39050;
    const double C40736 = C19624 / C39050;
    const double C40739 = C19654 / C39050;
    const double C41659 = C41637 / C40783;
    const double C17771 = -((C19624 * C40634) / p + (C30961 * C41650) / C40783);
    const double C18038 = -((C19654 * C40634) / p + (C30992 * C41650) / C40783);
    const double C19639 = -((C19654 * C40638) / p + (C30992 * C41654) / C40783);
    const double C41667 = C41646 / C40783;
    const double C30976 = -((C30992 * C40638) / p + (C34531 * C41654) / C40783);
    const double C41669 = C41648 / C40783;
    const double C41670 = C41649 / C40783;
    const double C41672 = C31053 - C41652;
    const double C41677 = C31054 - C41659;
    const double C40741 = C17771 * p;
    const double C40703 = C17771 / q;
    const double C40673 = C17771 / C39050;
    const double C40742 = C18038 * p;
    const double C40709 = C18038 / q;
    const double C40680 = C18038 / C39050;
    const double C40743 = C19639 * p;
    const double C40724 = C19639 / q;
    const double C40686 = C19639 / C39050;
    const double C41684 = C31839 - C41667;
    const double C18357 = -((C19639 * C40634) / p + (C30976 * C41650) / C40783);
    const double C41686 = C32471 - C41669;
    const double C41687 = C32788 - C41670;
    const double C41688 = C41672 / C41628;
    const double C41693 = C41677 / C41628;
    const double C39107 = -(C17434 * C40745 + C40741) / q;
    const double C39352 = -(C19624 * C40744 + C40741) / q;
    const double C39124 = -(C17434 * C40748 + C40742) / q;
    const double C39449 = -(C19654 * C40744 + C40742) / q;
    const double C39238 = -(C19624 * C40748 + C40743) / q;
    const double C39498 = -(C19654 * C40745 + C40743) / q;
    const double C41697 = C41684 / C41628;
    const double C40738 = C18357 * p;
    const double C40714 = C18357 / q;
    const double C40685 = C18357 / C39050;
    const double C41698 = C41686 / C41628;
    const double C41699 = C41687 / C41628;
    const double C17419 =
        C41688 - ((C17434 * C40634) / p + (C30590 * C41650) / C40783);
    const double C18444 =
        C41688 - ((C19624 * C40638) / p + (C30961 * C41654) / C40783);
    const double C19144 =
        C41688 - ((C19654 * C40642) / p + (C30992 * C41656) / C40783);
    const double C30574 =
        C41693 - ((C30590 * C40634) / p + (C31823 * C41650) / C40783);
    const double C30711 =
        C41693 - ((C30961 * C40638) / p + (C34372 * C41654) / C40783);
    const double C30844 =
        C41693 - ((C30992 * C40642) / p + (C34531 * C41656) / C40783);
    const double C40678 = C39124 / C39050;
    const double C40676 = C39238 / C39050;
    const double C40683 = C39498 / C39050;
    const double C31806 =
        C41697 - ((C31823 * C40634) / p + (C32454 * C41650) / C40783);
    const double C31861 =
        C41697 - ((C34372 * C40638) / p + (C35008 * C41654) / C40783);
    const double C31892 =
        C41697 - ((C34531 * C40642) / p + (C37524 * C41656) / C40783);
    const double C17076 = -(C17771 * C40748 + C40738) / q;
    const double C17239 = -(C18038 * C40745 + C40738) / q;
    const double C17284 = -(C19639 * C40744 + C40738) / q;
    const double C32551 =
        C41698 - ((C32454 * C40634) / p + (C32839 * C41650) / C40783);
    const double C32613 =
        C41698 - ((C35008 * C40638) / p + (C35365 * C41654) / C40783);
    const double C32658 =
        C41698 - ((C37524 * C40642) / p + (C37881 * C41656) / C40783);
    const double C32855 =
        C41699 - ((C32839 * C40634) / p + (C32968 * C41650) / C40783);
    const double C35381 =
        C41699 - ((C35365 * C40638) / p + (C35493 * C41654) / C40783);
    const double C35412 =
        C41699 - ((C37881 * C40642) / p + (C38006 * C41656) / C40783);
    const double C40637 = C17419 / C39050;
    const double C39058 = C40740 - (C17434 * C40744) / q - (C17419 * p) / q;
    const double C40649 = C18444 / C39050;
    const double C39173 = C40740 - (C19624 * C40745) / q - (C18444 * p) / q;
    const double C40662 = C19144 / C39050;
    const double C39287 = C40740 - (C19654 * C40748) / q - (C19144 * p) / q;
    const double C17372 = (C17434 - (C30590 * q) / C40783) / p -
                          ((C17419 * C40634) / p + (C30574 * C41650) / C40783);
    const double C17787 = -((C17419 * C40638) / p + (C30574 * C41654) / C40783);
    const double C18054 = -((C17419 * C40642) / p + (C30574 * C41656) / C40783);
    const double C41631 = C30711 * q;
    const double C17726 = -((C18444 * C40634) / p + (C30711 * C41650) / C40783);
    const double C18631 = (C19624 - (C30961 * q) / C40783) / p -
                          ((C18444 * C40638) / p + (C30711 * C41654) / C40783);
    const double C18811 = -((C18444 * C40642) / p + (C30711 * C41656) / C40783);
    const double C41633 = C30844 * q;
    const double C17993 = -((C19144 * C40634) / p + (C30844 * C41650) / C40783);
    const double C19258 = -((C19144 * C40638) / p + (C30844 * C41654) / C40783);
    const double C19333 = (C19654 - (C30992 * q) / C40783) / p -
                          ((C19144 * C40642) / p + (C30844 * C41656) / C40783);
    const double C30554 = (C30590 - (C31823 * q) / C40783) / p -
                          ((C30574 * C40634) / p + (C31806 * C41650) / C40783);
    const double C33234 = -((C30574 * C40642) / p + (C31806 * C41656) / C40783);
    const double C41644 = C31861 * q;
    const double C30606 = -((C30711 * C40634) / p + (C31861 * C41650) / C40783);
    const double C30799 = (C30961 - (C34372 * q) / C40783) / p -
                          ((C30711 * C40638) / p + (C31861 * C41654) / C40783);
    const double C30814 = -((C30711 * C40642) / p + (C31861 * C41656) / C40783);
    const double C41645 = C31892 * q;
    const double C30637 = -((C30844 * C40634) / p + (C31892 * C41650) / C40783);
    const double C30917 = -((C30844 * C40638) / p + (C31892 * C41654) / C40783);
    const double C30932 = (C30992 - (C34531 * q) / C40783) / p -
                          ((C30844 * C40642) / p + (C31892 * C41656) / C40783);
    const double C40659 = C17076 / q;
    const double C32035 = (C31823 - (C32454 * q) / C40783) / p -
                          ((C31806 * C40634) / p + (C32551 * C41650) / C40783);
    const double C32123 = (C34372 - (C35008 * q) / C40783) / p -
                          ((C31861 * C40638) / p + (C32613 * C41654) / C40783);
    const double C32169 = -((C31861 * C40634) / p + (C32613 * C41650) / C40783);
    const double C41647 = C32658 * q;
    const double C32216 = -((C31892 * C40634) / p + (C32658 * C41650) / C40783);
    const double C32263 = (C34531 - (C37524 * q) / C40783) / p -
                          ((C31892 * C40642) / p + (C32658 * C41656) / C40783);
    const double C34691 = -((C31892 * C40638) / p + (C32658 * C41654) / C40783);
    const double C32567 = (C32454 - (C32839 * q) / C40783) / p -
                          ((C32551 * C40634) / p + (C32855 * C41650) / C40783);
    const double C32673 = (C35008 - (C35365 * q) / C40783) / p -
                          ((C32613 * C40638) / p + (C35381 * C41654) / C40783);
    const double C32745 = (C37524 - (C37881 * q) / C40783) / p -
                          ((C32658 * C40642) / p + (C35412 * C41656) / C40783);
    const double C35142 = -((C32658 * C40638) / p + (C35412 * C41654) / C40783);
    const double C40684 = C39287 / C39050;
    const double C40636 = C17372 / C39050;
    const double C14522 = C17434 / q - (C17419 * C40744) / q - (C17372 * p) / q;
    const double C40698 = C17787 * p;
    const double C40672 = C17787 / C39050;
    const double C40701 = C18054 * p;
    const double C40679 = C18054 / C39050;
    const double C41653 = C41631 / C40783;
    const double C40715 = C17726 * p;
    const double C40648 = C17726 / C39050;
    const double C40688 = C18631 / C39050;
    const double C15550 = C19624 / q - (C18444 * C40745) / q - (C18631 * p) / q;
    const double C40718 = C18811 * p;
    const double C40694 = C18811 / C39050;
    const double C41655 = C41633 / C40783;
    const double C40728 = C17993 * p;
    const double C40661 = C17993 / C39050;
    const double C40730 = C19258 * p;
    const double C40690 = C19258 / C39050;
    const double C40695 = C19333 / C39050;
    const double C16419 = C19654 / q - (C19144 * C40748) / q - (C19333 * p) / q;
    const double C41629 = C30554 * q;
    const double C17387 = (3 * (C17419 - (C30574 * q) / C40783)) / C41628 -
                          ((C17372 * C40634) / p + (C30554 * C41650) / C40783);
    const double C17802 = -((C17372 * C40638) / p + (C30554 * C41654) / C40783);
    const double C18069 = -((C17372 * C40642) / p + (C30554 * C41656) / C40783);
    const double C18372 = -((C18054 * C40638) / p + (C33234 * C41654) / C40783);
    const double C41665 = C41644 / C40783;
    const double C41635 = C30799 * q;
    const double C18646 = -((C18631 * C40634) / p + (C30799 * C41650) / C40783);
    const double C19100 = -((C18631 * C40642) / p + (C30799 * C41656) / C40783);
    const double C18826 = -((C18811 * C40634) / p + (C30814 * C41650) / C40783);
    const double C41666 = C41645 / C40783;
    const double C19273 = -((C19258 * C40634) / p + (C30917 * C41650) / C40783);
    const double C41636 = C30932 * q;
    const double C19348 = -((C19333 * C40634) / p + (C30932 * C41650) / C40783);
    const double C19580 = -((C19333 * C40638) / p + (C30932 * C41654) / C40783);
    const double C41638 = C32035 * q;
    const double C31021 = (3 * (C30574 - (C31806 * q) / C40783)) / C41628 -
                          ((C30554 * C40634) / p + (C32035 * C41650) / C40783);
    const double C33632 = -((C30554 * C40638) / p + (C32035 * C41654) / C40783);
    const double C33735 = -((C30554 * C40642) / p + (C32035 * C41656) / C40783);
    const double C41642 = C32123 * q;
    const double C31234 = -((C30799 * C40634) / p + (C32123 * C41650) / C40783);
    const double C31481 = -((C30799 * C40642) / p + (C32123 * C41656) / C40783);
    const double C41668 = C41647 / C40783;
    const double C41643 = C32263 * q;
    const double C31373 = -((C30932 * C40634) / p + (C32263 * C41650) / C40783);
    const double C31704 = -((C30932 * C40638) / p + (C32263 * C41654) / C40783);
    const double C32051 = (3 * (C31806 - (C32551 * q) / C40783)) / C41628 -
                          ((C32035 * C40634) / p + (C32567 * C41650) / C40783);
    const double C34752 = -((C32035 * C40638) / p + (C32567 * C41654) / C40783);
    const double C37298 = -((C32035 * C40642) / p + (C32567 * C41656) / C40783);
    const double C32139 = (3 * (C31861 - (C32613 * q) / C40783)) / C41628 -
                          ((C32123 * C40638) / p + (C32673 * C41654) / C40783);
    const double C32232 = -((C32123 * C40634) / p + (C32673 * C41650) / C40783);
    const double C37399 = -((C32123 * C40642) / p + (C32673 * C41656) / C40783);
    const double C32324 = -((C32263 * C40634) / p + (C32745 * C41650) / C40783);
    const double C34927 = -((C32263 * C40638) / p + (C32745 * C41654) / C40783);
    const double C14666 = -(C17419 * C40745 + C40698) / q;
    const double C17016 = C40736 - (C17771 * C40744) / q - C40698 / q;
    const double C14713 = -(C17419 * C40748 + C40701) / q;
    const double C17194 = C40739 - (C18038 * C40744) / q - C40701 / q;
    const double C41673 = C18444 - C41653;
    const double C15456 = -(C18444 * C40744 + C40715) / q;
    const double C17061 = C40737 - (C17771 * C40745) / q - C40715 / q;
    const double C15580 = -(C18444 * C40748 + C40718) / q;
    const double C17328 = C40739 - (C19639 * C40745) / q - C40718 / q;
    const double C41674 = C19144 - C41655;
    const double C16296 = -(C19144 * C40744 + C40728) / q;
    const double C17255 = C40737 - (C18038 * C40748) / q - C40728 / q;
    const double C16389 = -(C19144 * C40745 + C40730) / q;
    const double C17343 = C40736 - (C19639 * C40748) / q - C40730 / q;
    const double C40667 = C16419 / C39050;
    const double C41651 = C41629 / C40783;
    const double C14504 =
        (3 * C17419) / C39050 - (C17372 * C40744) / q - (C17387 * p) / q;
    const double C40697 = C17802 * p;
    const double C40700 = C18069 * p;
    const double C40707 = C18372 * p;
    const double C41682 = C30711 - C41665;
    const double C41657 = C41635 / C40783;
    const double C40716 = C18646 * p;
    const double C40721 = C19100 * p;
    const double C40717 = C18826 * p;
    const double C41683 = C30844 - C41666;
    const double C40729 = C19273 * p;
    const double C41658 = C41636 / C40783;
    const double C40731 = C19348 * p;
    const double C40732 = C19580 * p;
    const double C41660 = C41638 / C40783;
    const double C18285 = -((C17387 * C40638) / p + (C31021 * C41654) / C40783);
    const double C18314 = -((C17387 * C40642) / p + (C31021 * C41656) / C40783);
    const double C18387 = -((C18069 * C40638) / p + (C33735 * C41654) / C40783);
    const double C41663 = C41642 / C40783;
    const double C19115 = -((C19100 * C40634) / p + (C31481 * C41650) / C40783);
    const double C41685 = C31892 - C41668;
    const double C41664 = C41643 / C40783;
    const double C19595 = -((C19580 * C40634) / p + (C31704 * C41650) / C40783);
    const double C33616 = -((C31021 * C40638) / p + (C32051 * C41654) / C40783);
    const double C33720 = -((C31021 * C40642) / p + (C32051 * C41656) / C40783);
    const double C40677 = C14713 / C39050;
    const double C17741 =
        C41673 / C41628 - ((C17726 * C40634) / p + (C30606 * C41650) / C40783);
    const double C18601 = (3 * C41673) / C41628 -
                          ((C18631 * C40638) / p + (C30799 * C41654) / C40783);
    const double C40650 = C17061 / q;
    const double C40656 = C15580 / C39050;
    const double C41690 = C41674 / C41628;
    const double C19303 = (3 * C41674) / C41628 -
                          ((C19333 * C40642) / p + (C30932 * C41656) / C40783);
    const double C40664 = C17255 / q;
    const double C40666 = C16389 / C39050;
    const double C40691 = C17343 / q;
    const double C41671 = C17372 - C41651;
    const double C3664 =
        C39058 / q - (C14522 * C40744) / q + C40637 - (C14504 * p) / q;
    const double C14651 = -(C17372 * C40745 + C40697) / q;
    const double C14793 = C40703 - (C17787 * C40744) / q - C40697 / q;
    const double C14698 = -(C17372 * C40748 + C40700) / q;
    const double C14987 = C40709 - (C18054 * C40744) / q - C40700 / q;
    const double C14923 = -(C17787 * C40748 + C40707) / q;
    const double C15085 = -(C18054 * C40745 + C40707) / q;
    const double C17105 = C40686 - (C18357 * C40744) / q - C40707 / q;
    const double C31451 = (3 * C41682) / C41628 -
                          ((C30799 * C40638) / p + (C32123 * C41654) / C40783);
    const double C36285 =
        C41682 / C41628 - ((C30606 * C40634) / p + (C32169 * C41650) / C40783);
    const double C41675 = C18631 - C41657;
    const double C15535 = C40703 - (C17726 * C40745) / q - C40716 / q;
    const double C15644 = -(C18631 * C40744 + C40716) / q;
    const double C15770 = -(C18631 * C40748 + C40721) / q;
    const double C15930 = C40724 - (C18811 * C40745) / q - C40721 / q;
    const double C15565 = -(C17726 * C40748 + C40717) / q;
    const double C15832 = -(C18811 * C40744 + C40717) / q;
    const double C17150 = C40680 - (C18357 * C40745) / q - C40717 / q;
    const double C41696 = C41683 / C41628;
    const double C31689 = (3 * C41683) / C41628 -
                          ((C30932 * C40642) / p + (C32263 * C41656) / C40783);
    const double C16374 = -(C17993 * C40745 + C40729) / q;
    const double C16463 = -(C19258 * C40744 + C40729) / q;
    const double C17165 = C40673 - (C18357 * C40748) / q - C40729 / q;
    const double C41676 = C19333 - C41658;
    const double C16404 = C40709 - (C17993 * C40748) / q - C40731 / q;
    const double C16572 = -(C19333 * C40744 + C40731) / q;
    const double C16525 = C40724 - (C19258 * C40748) / q - C40732 / q;
    const double C16668 = -(C19333 * C40745 + C40732) / q;
    const double C41678 = C30554 - C41660;
    const double C40696 = C18285 * p;
    const double C40699 = C18314 * p;
    const double C40713 = C18387 * p;
    const double C41680 = C30799 - C41663;
    const double C40727 = C19115 * p;
    const double C32185 =
        C41685 / C41628 - ((C34691 * C40638) / p + (C35142 * C41654) / C40783);
    const double C32279 = (3 * C41685) / C41628 -
                          ((C32263 * C40642) / p + (C32745 * C41656) / C40783);
    const double C41681 = C30932 - C41664;
    const double C40735 = C19595 * p;
    const double C40705 = C17741 * p;
    const double C15739 =
        (3 * C18444) / C39050 - (C18631 * C40745) / q - (C18601 * p) / q;
    const double C18008 =
        C41690 - ((C17993 * C40634) / p + (C30637 * C41650) / C40783);
    const double C18781 =
        C41690 - ((C19258 * C40638) / p + (C30917 * C41654) / C40783);
    const double C16700 =
        (3 * C19144) / C39050 - (C19333 * C40748) / q - (C19303 * p) / q;
    const double C41689 = C41671 / C41628;
    const double C17403 =
        (2 * C41671) / p - ((C17387 * C40634) / p + (C31021 * C41650) / C40783);
    const double C3727 = C39107 / q - (C14666 * C40744) / q - (C14651 * p) / q;
    const double C5156 =
        C39352 / C39050 - (C17016 * C40744) / q + C40673 - (C14793 * p) / q;
    const double C3748 = C39124 / q - (C14713 * C40744) / q - (C14698 * p) / q;
    const double C5420 =
        C39449 / C39050 - (C17194 * C40744) / q + C40680 - (C14987 * p) / q;
    const double C40647 = C14923 * p;
    const double C5477 = C40683 - (C17239 * C40744) / q - (C15085 * p) / q;
    const double C5726 = C40686 - (C17284 * C40744) / q - (C17105 * p) / q;
    const double C18616 = -((C18601 * C40634) / p + (C31451 * C41650) / C40783);
    const double C24201 = -((C18601 * C40642) / p + (C31451 * C41656) / C40783);
    const double C31250 = -((C31451 * C40634) / p + (C32139 * C41650) / C40783);
    const double C31584 = -((C31451 * C40642) / p + (C32139 * C41656) / C40783);
    const double C19071 = -((C17741 * C40642) / p + (C36285 * C41656) / C40783);
    const double C41691 = C41675 / C41628;
    const double C23753 =
        (2 * C41675) / p - ((C18601 * C40638) / p + (C31451 * C41654) / C40783);
    const double C40655 = C15535 * p;
    const double C4267 = C39238 / q - (C15580 * C40745) / q - (C15770 * p) / q;
    const double C5745 =
        C40683 - (C17328 * C40745) / q + C40686 - (C15930 * p) / q;
    const double C40658 = C15565 * p;
    const double C40682 = C17150 * p;
    const double C31466 =
        C41696 - ((C30917 * C40638) / p + (C34691 * C41654) / C40783);
    const double C33826 =
        C41696 - ((C30637 * C40634) / p + (C32216 * C41650) / C40783);
    const double C19318 = -((C19303 * C40634) / p + (C31689 * C41650) / C40783);
    const double C24442 = -((C19303 * C40638) / p + (C31689 * C41654) / C40783);
    const double C4725 = -(C16389 * C40744 + C16374 * p) / q;
    const double C40675 = C17165 * p;
    const double C41692 = C41676 / C41628;
    const double C29556 =
        (2 * C41676) / p - ((C19303 * C40642) / p + (C31689 * C41656) / C40783);
    const double C40669 = C16404 * p;
    const double C40671 = C16525 * p;
    const double C41700 = C41678 / C41628;
    const double C31037 =
        (2 * C41678) / p - ((C31021 * C40634) / p + (C32051 * C41650) / C40783);
    const double C14635 = -(C17387 * C40745 + C40696) / q;
    const double C15164 =
        (3 * C17787) / C39050 - (C17802 * C40744) / q - C40696 / q;
    const double C14682 = -(C17387 * C40748 + C40699) / q;
    const double C15254 =
        (3 * C18054) / C39050 - (C18069 * C40744) / q - C40699 / q;
    const double C15225 = -(C17802 * C40748 + C40713) / q;
    const double C15300 = -(C18069 * C40745 + C40713) / q;
    const double C15345 = C40714 - (C18372 * C40744) / q - C40713 / q;
    const double C41694 = C41680 / C41628;
    const double C31569 =
        (2 * C41680) / p - ((C31451 * C40638) / p + (C32139 * C41654) / C40783);
    const double C16069 = -(C18646 * C40748 + C40727) / q;
    const double C16144 = C40714 - (C18826 * C40745) / q - C40727 / q;
    const double C16188 = -(C19100 * C40744 + C40727) / q;
    const double C31389 = -((C31689 * C40634) / p + (C32279 * C41650) / C40783);
    const double C31762 = -((C31689 * C40638) / p + (C32279 * C41654) / C40783);
    const double C41695 = C41681 / C41628;
    const double C31777 =
        (2 * C41681) / p - ((C31689 * C40642) / p + (C32279 * C41656) / C40783);
    const double C16805 = C40714 - (C19273 * C40748) / q - C40735 / q;
    const double C16880 = -(C19348 * C40745 + C40735) / q;
    const double C16925 = -(C19580 * C40744 + C40735) / q;
    const double C40762 = C40705 / q;
    const double C4187 =
        C39173 / q - (C15550 * C40745) / q + C40649 - (C15739 * p) / q;
    const double C40712 = C18008 * p;
    const double C40726 = C18781 * p;
    const double C4705 =
        C39287 / q - (C16419 * C40748) / q + C40662 - (C16700 * p) / q;
    const double C17756 =
        C41689 - ((C17802 * C40638) / p + (C33632 * C41654) / C40783);
    const double C18023 =
        C41689 - ((C18069 * C40642) / p + (C33735 * C41656) / C40783);
    const double C14485 =
        (2 * C17372) / q - (C17387 * C40744) / q - (C17403 * p) / q;
    const double C3769 = -(C14713 * C40745 + C40647) / q;
    const double C5232 = C40676 - (C17076 * C40744) / q - C40647 / q;
    const double C40719 = C18616 * p;
    const double C40720 = C24201 * p;
    const double C40706 = C19071 * p;
    const double C19042 =
        C41691 - ((C18646 * C40634) / p + (C31234 * C41650) / C40783);
    const double C23943 =
        C41691 - ((C19100 * C40642) / p + (C31481 * C41656) / C40783);
    const double C15723 =
        (2 * C18631) / q - (C18601 * C40745) / q - (C23753 * p) / q;
    const double C4227 = -(C15550 * C40744 + C40655) / q;
    const double C5175 =
        C39107 / C39050 - (C17061 * C40745) / q + C40673 - C40655 / q;
    const double C4247 = -(C15580 * C40744 + C40658) / q;
    const double C5251 = C40678 - (C17076 * C40745) / q - C40658 / q;
    const double C5439 = C40680 - (C17239 * C40745) / q - C40682 / q;
    const double C5783 = -(C17328 * C40744 + C40682) / q;
    const double C18796 = -((C18781 * C40634) / p + (C31466 * C41650) / C40783);
    const double C31282 = -((C31466 * C40634) / p + (C32185 * C41650) / C40783);
    const double C19508 = -((C18008 * C40638) / p + (C33826 * C41654) / C40783);
    const double C40733 = C19318 * p;
    const double C40734 = C24442 * p;
    const double C5194 = C40673 - (C17076 * C40748) / q - C40675 / q;
    const double C5515 = -(C17255 * C40745 + C40675) / q;
    const double C5802 = -(C17343 * C40744 + C40675) / q;
    const double C19537 =
        C41692 - ((C19348 * C40634) / p + (C31373 * C41650) / C40783);
    const double C24672 =
        C41692 - ((C19580 * C40638) / p + (C31704 * C41654) / C40783);
    const double C16684 =
        (2 * C19333) / q - (C19303 * C40748) / q - (C29556 * p) / q;
    const double C4745 = -(C16419 * C40744 + C40669) / q;
    const double C5458 = C40678 - (C17255 * C40748) / q + C40680 - C40669 / q;
    const double C4765 = -(C16419 * C40745 + C40671) / q;
    const double C5764 = C40676 - (C17343 * C40748) / q + C40686 - C40671 / q;
    const double C33931 =
        C41700 - ((C33735 * C40642) / p + (C37298 * C41656) / C40783);
    const double C36347 =
        C41700 - ((C33632 * C40638) / p + (C34752 * C41654) / C40783);
    const double C3716 =
        (3 * C14666) / C39050 - (C14651 * C40744) / q - (C14635 * p) / q;
    const double C5147 =
        C17016 / q - (C14793 * C40744) / q + C40672 - (C15164 * p) / q;
    const double C3737 =
        (3 * C14713) / C39050 - (C14698 * C40744) / q - (C14682 * p) / q;
    const double C5411 =
        C17194 / q - (C14987 * C40744) / q + C40679 - (C15254 * p) / q;
    const double C40646 = C15225 * p;
    const double C5468 = C17239 / q - (C15085 * C40744) / q - (C15300 * p) / q;
    const double C5717 =
        C17284 / C39050 - (C17105 * C40744) / q + C40685 - (C15345 * p) / q;
    const double C31314 =
        C41694 - ((C31234 * C40634) / p + (C32232 * C41650) / C40783);
    const double C31643 =
        C41694 - ((C31481 * C40642) / p + (C37399 * C41656) / C40783);
    const double C40660 = C16069 * p;
    const double C40687 = C16144 * p;
    const double C31421 =
        C41695 - ((C31373 * C40634) / p + (C32324 * C41650) / C40783);
    const double C31659 =
        C41695 - ((C31704 * C40638) / p + (C34927 * C41654) / C40783);
    const double C40670 = C16805 * p;
    const double C13460 = -(C16668 * C40744 + C16880 * p) / q;
    const double C14890 = C40637 - (C17787 * C40745) / q - C40762;
    const double C15439 = C40649 - (C17726 * C40744) / q - C40762;
    const double C40765 = C40712 / q;
    const double C40770 = C40726 / q;
    const double C40702 = C17756 * p;
    const double C40708 = C18023 * p;
    const double C3653 = (3 * C14522) / C39050 - (C14504 * C40744) / q +
                         C40636 - (C14485 * p) / q;
    const double C15626 = -(C18601 * C40744 + C40719) / q;
    const double C16054 =
        (3 * C17726) / C39050 - (C18646 * C40745) / q - C40719 / q;
    const double C15754 = -(C18601 * C40748 + C40720) / q;
    const double C16235 =
        (3 * C18811) / C39050 - (C19100 * C40745) / q - C40720 / q;
    const double C40766 = C40706 / q;
    const double C14906 = -(C17741 * C40748 + C40706) / q;
    const double C40704 = C19042 * p;
    const double C40723 = C23943 * p;
    const double C8580 = (3 * C15550) / C39050 - (C15739 * C40745) / q +
                         C40688 - (C15723 * p) / q;
    const double C40722 = C18796 * p;
    const double C40710 = C19508 * p;
    const double C16554 = -(C19303 * C40744 + C40733) / q;
    const double C16896 =
        (3 * C17993) / C39050 - (C19348 * C40748) / q - C40733 / q;
    const double C16652 = -(C19303 * C40745 + C40734) / q;
    const double C16987 =
        (3 * C19258) / C39050 - (C19580 * C40748) / q - C40734 / q;
    const double C40711 = C19537 * p;
    const double C40725 = C24672 * p;
    const double C13441 = (3 * C16419) / C39050 - (C16700 * C40748) / q +
                          C40695 - (C16684 * p) / q;
    const double C1592 = C3716 + xAB * C3727;
    const double C1745 = C5147 + yAB * C3664;
    const double C2639 = C5147 + xAB * C5156;
    const double C1603 = C3737 + xAB * C3748;
    const double C1805 = C5411 + zAB * C3664;
    const double C2975 = C5411 + xAB * C5420;
    const double C3758 = -(C14698 * C40745 + C40646) / q;
    const double C5223 = C40659 - (C14923 * C40744) / q - C40646 / q;
    const double C1835 = C5468 + zAB * C3727;
    const double C3008 = C5468 + xAB * C5477;
    const double C2873 = C5717 + zAB * C5156;
    const double C3155 = C5717 + yAB * C5420;
    const double C3317 = C5717 + xAB * C5726;
    const double C4257 = C40659 - (C15565 * C40745) / q - C40660 / q;
    const double C8637 = -(C15770 * C40744 + C40660) / q;
    const double C5736 =
        C17239 / C39050 - (C17150 * C40745) / q + C40685 - C40687 / q;
    const double C10130 = -(C15930 * C40744 + C40687) / q;
    const double C4755 = -(C16404 * C40745 + C40670) / q;
    const double C5755 =
        C17076 / C39050 - (C17165 * C40748) / q + C40685 - C40670 / q;
    const double C9125 = -(C16525 * C40744 + C40670) / q;
    const double C2555 = C13460 + zAB * C4725;
    const double C40641 = C14890 * p;
    const double C4167 = C40649 - (C15456 * C40744) / q - (C15439 * p) / q;
    const double C15119 = C40637 - (C18054 * C40748) / q - C40765;
    const double C16279 = C40662 - (C17993 * C40744) / q - C40765;
    const double C15962 = C40649 - (C18811 * C40748) / q - C40770;
    const double C16510 = C40662 - (C19258 * C40745) / q - C40770;
    const double C40760 = C40702 / q;
    const double C40763 = C40708 / q;
    const double C1559 = C3653 + xAB * C3664;
    const double C40651 = C16054 * p;
    const double C8656 =
        (3 * C15580) / C39050 - (C15770 * C40745) / q - (C15754 * p) / q;
    const double C10096 =
        C17328 / q - (C15930 * C40745) / q + C40694 - (C16235 * p) / q;
    const double C15393 = C40679 - (C18372 * C40745) / q - C40766;
    const double C16098 = C40694 - (C18826 * C40744) / q - C40766;
    const double C40657 = C14906 * p;
    const double C40761 = C40704 / q;
    const double C40768 = C40723 / q;
    const double C2115 = C8580 + yAB * C4187;
    const double C40771 = C40722 / q;
    const double C15814 = -(C18781 * C40744 + C40722) / q;
    const double C40767 = C40710 / q;
    const double C15068 = -(C18008 * C40745 + C40710) / q;
    const double C40665 = C16896 * p;
    const double C40692 = C16987 * p;
    const double C40764 = C40711 / q;
    const double C40769 = C40725 / q;
    const double C2545 = C13441 + zAB * C4705;
    const double C1614 = C3758 + xAB * C3769;
    const double C1785 = C5223 + yAB * C3748;
    const double C2683 = C5223 + xAB * C5232;
    const double C1974 = C4257 + xAB * C4267;
    const double C2864 = C4257 + yAB * C5251;
    const double C2145 = C8637 + yAB * C4247;
    const double C2882 = C5736 + zAB * C5175;
    const double C3165 = C5736 + yAB * C5439;
    const double C3328 = C5736 + xAB * C5745;
    const double C2195 = C10130 + zAB * C4227;
    const double C3524 = C10130 + yAB * C5783;
    const double C2334 = C4755 + xAB * C4765;
    const double C3260 = C4755 + zAB * C5515;
    const double C2891 = C5755 + zAB * C5194;
    const double C3175 = C5755 + yAB * C5458;
    const double C3339 = C5755 + xAB * C5764;
    const double C2505 = C9125 + yAB * C4745;
    const double C3587 = C9125 + zAB * C5802;
    const double C40747 = C40641 / q;
    const double C40645 = C15119 * p;
    const double C4665 = C40662 - (C16296 * C40744) / q - (C16279 * p) / q;
    const double C40653 = C15962 * p;
    const double C4685 = C40662 - (C16389 * C40745) / q - (C16510 * p) / q;
    const double C14774 = C17726 / q - (C17741 * C40744) / q - C40760;
    const double C15210 = C40636 - (C17802 * C40745) / q - C40760;
    const double C14968 = C17993 / q - (C18008 * C40744) / q - C40763;
    const double C15316 = C40636 - (C18069 * C40748) / q - C40763;
    const double C4177 = C40650 - (C15535 * C40745) / q + C40648 - C40651 / q;
    const double C8618 = -(C15739 * C40744 + C40651) / q;
    const double C2155 = C8656 + yAB * C4267;
    const double C2175 = C10096 + zAB * C4187;
    const double C3506 = C10096 + yAB * C5745;
    const double C40681 = C15393 * p;
    const double C10079 = C40694 - (C15832 * C40744) / q - (C16098 * p) / q;
    const double C40754 = C40657 / q;
    const double C14873 = C17787 / q - (C17741 * C40745) / q - C40761;
    const double C16008 = C40688 - (C18646 * C40744) / q - C40761;
    const double C15914 = C19258 / q - (C18781 * C40745) / q - C40768;
    const double C16250 = C40688 - (C19100 * C40748) / q - C40768;
    const double C16159 = C40648 - (C18826 * C40748) / q - C40771;
    const double C16790 = C40661 - (C19273 * C40745) / q - C40771;
    const double C15409 = C40672 - (C18372 * C40748) / q - C40767;
    const double C16744 = C40690 - (C19273 * C40744) / q - C40767;
    const double C4715 = C40666 - (C16374 * C40744) / q - (C15068 * p) / q;
    const double C4695 = C40664 - (C16404 * C40748) / q + C40661 - C40665 / q;
    const double C13479 = -(C16700 * C40744 + C40665) / q;
    const double C9089 = C40691 - (C16525 * C40748) / q + C40690 - C40692 / q;
    const double C13498 = -(C16700 * C40745 + C40692) / q;
    const double C15102 = C18054 / q - (C18008 * C40748) / q - C40764;
    const double C16834 = C40695 - (C19348 * C40744) / q - C40764;
    const double C15946 = C18811 / q - (C18781 * C40748) / q - C40769;
    const double C16972 = C40695 - (C19580 * C40745) / q - C40769;
    const double C3685 = C40637 - (C14666 * C40745) / q - C40747;
    const double C5213 = C39173 / C39050 - (C17061 * C40744) / q - C40747;
    const double C40750 = C40645 / q;
    const double C40752 = C40653 / q;
    const double C4157 =
        C15456 / C39050 - (C15439 * C40744) / q + C40648 - (C14774 * p) / q;
    const double C40640 = C15210 * p;
    const double C4655 =
        C16296 / C39050 - (C16279 * C40744) / q + C40661 - (C14968 * p) / q;
    const double C40644 = C15316 * p;
    const double C1930 = C4177 + xAB * C4187;
    const double C2828 = C4177 + yAB * C5175;
    const double C2135 = C8618 + yAB * C4227;
    const double C40757 = C40681 / q;
    const double C2165 = C10079 + zAB * C4167;
    const double C3497 = C10079 + yAB * C5726;
    const double C4237 = C40656 - (C15565 * C40744) / q - C40754;
    const double C5242 = C40677 - (C14923 * C40745) / q - C40754;
    const double C40654 = C14873 * p;
    const double C8561 = C40688 - (C15644 * C40744) / q - (C16008 * p) / q;
    const double C9071 =
        C40666 - (C16510 * C40745) / q + C40690 - (C15914 * p) / q;
    const double C40689 = C16250 * p;
    const double C40652 = C16159 * p;
    const double C40663 = C16790 * p;
    const double C40674 = C15409 * p;
    const double C9053 = C40690 - (C16463 * C40744) / q - (C16744 * p) / q;
    const double C2312 = C4715 + xAB * C4725;
    const double C3242 = C4715 + zAB * C5477;
    const double C2301 = C4695 + xAB * C4705;
    const double C3233 = C4695 + zAB * C5458;
    const double C2565 = C13479 + zAB * C4745;
    const double C2485 = C9089 + yAB * C4705;
    const double C3569 = C9089 + zAB * C5764;
    const double C2575 = C13498 + zAB * C4765;
    const double C40668 = C15102 * p;
    const double C13403 = C40695 - (C16572 * C40744) / q - (C16834 * p) / q;
    const double C40693 = C15946 * p;
    const double C13422 = C40695 - (C16668 * C40745) / q - (C16972 * p) / q;
    const double C3706 = C40637 - (C14713 * C40748) / q - C40750;
    const double C5496 = C40684 - (C17255 * C40744) / q - C40750;
    const double C4207 = C40649 - (C15580 * C40748) / q - C40752;
    const double C5821 = C40684 - (C17343 * C40745) / q - C40752;
    const double C1919 = C4157 + xAB * C4167;
    const double C2819 = C4157 + yAB * C5156;
    const double C40746 = C40640 / q;
    const double C2279 = C4655 + xAB * C4665;
    const double C3215 = C4655 + zAB * C5420;
    const double C40749 = C40644 / q;
    const double C5430 = C40679 - (C15085 * C40745) / q - C40757;
    const double C5774 = C17328 / C39050 - (C17150 * C40744) / q - C40757;
    const double C1963 = C4237 + xAB * C4247;
    const double C2855 = C4237 + yAB * C5232;
    const double C1795 = C5242 + yAB * C3769;
    const double C2694 = C5242 + xAB * C5251;
    const double C40753 = C40654 / q;
    const double C2105 = C8561 + yAB * C4167;
    const double C2475 = C9071 + yAB * C4685;
    const double C3560 = C9071 + zAB * C5745;
    const double C40758 = C40689 / q;
    const double C40751 = C40652 / q;
    const double C10147 = -(C15962 * C40744 + C40652) / q;
    const double C4675 = C40661 - (C16374 * C40745) / q - C40663 / q;
    const double C9107 = -(C16510 * C40744 + C40663) / q;
    const double C40756 = C40674 / q;
    const double C5506 = -(C15119 * C40745 + C40674) / q;
    const double C2465 = C9053 + yAB * C4665;
    const double C3551 = C9053 + zAB * C5726;
    const double C40755 = C40668 / q;
    const double C2525 = C13403 + zAB * C4665;
    const double C40759 = C40693 / q;
    const double C2535 = C13422 + zAB * C4685;
    const double C3674 = C40636 - (C14651 * C40745) / q - C40746;
    const double C5204 = C40650 - (C14890 * C40744) / q - C40746;
    const double C3695 = C40636 - (C14698 * C40748) / q - C40749;
    const double C5487 = C40664 - (C15119 * C40744) / q - C40749;
    const double C1815 = C5430 + zAB * C3685;
    const double C2986 = C5430 + xAB * C5439;
    const double C2900 = C5774 + zAB * C5213;
    const double C3185 = C5774 + yAB * C5477;
    const double C3350 = C5774 + xAB * C5783;
    const double C4217 = C15550 / C39050 - (C15535 * C40744) / q - C40753;
    const double C5166 =
        C14666 / C39050 - (C14890 * C40745) / q + C40672 - C40753;
    const double C8599 = C40688 - (C15770 * C40748) / q - C40758;
    const double C10164 = C40691 - (C15962 * C40745) / q - C40758;
    const double C4197 = C40648 - (C15565 * C40748) / q - C40751;
    const double C5812 = C17255 / C39050 - (C17165 * C40745) / q - C40751;
    const double C2205 = C10147 + zAB * C4247;
    const double C3533 = C10147 + yAB * C5802;
    const double C2290 = C4675 + xAB * C4685;
    const double C3224 = C4675 + zAB * C5439;
    const double C2495 = C9107 + yAB * C4725;
    const double C3578 = C9107 + zAB * C5783;
    const double C5185 = C40672 - (C14923 * C40748) / q - C40756;
    const double C5793 = C17343 / C39050 - (C17165 * C40744) / q - C40756;
    const double C1855 = C5506 + zAB * C3769;
    const double C3030 = C5506 + xAB * C5515;
    const double C4735 = C40667 - (C16404 * C40744) / q - C40755;
    const double C5449 = C40677 - (C15119 * C40748) / q + C40679 - C40755;
    const double C9143 = C40667 - (C16525 * C40745) / q - C40759;
    const double C10113 = C40656 - (C15962 * C40748) / q + C40694 - C40759;
    const double C1570 = C3674 + xAB * C3685;
    const double C1775 = C5204 + yAB * C3727;
    const double C2672 = C5204 + xAB * C5213;
    const double C1581 = C3695 + xAB * C3706;
    const double C1845 = C5487 + zAB * C3748;
    const double C3019 = C5487 + xAB * C5496;
    const double C1952 = C4217 + xAB * C4227;
    const double C2846 = C4217 + yAB * C5213;
    const double C1755 = C5166 + yAB * C3685;
    const double C2650 = C5166 + xAB * C5175;
    const double C2125 = C8599 + yAB * C4207;
    const double C2215 = C10164 + zAB * C4267;
    const double C3542 = C10164 + yAB * C5821;
    const double C1941 = C4197 + xAB * C4207;
    const double C2837 = C4197 + yAB * C5194;
    const double C2918 = C5812 + zAB * C5251;
    const double C3205 = C5812 + yAB * C5515;
    const double C3372 = C5812 + xAB * C5821;
    const double C1765 = C5185 + yAB * C3706;
    const double C2661 = C5185 + xAB * C5194;
    const double C2909 = C5793 + zAB * C5232;
    const double C3195 = C5793 + yAB * C5496;
    const double C3361 = C5793 + xAB * C5802;
    const double C2323 = C4735 + xAB * C4745;
    const double C3251 = C4735 + zAB * C5496;
    const double C1825 = C5449 + zAB * C3706;
    const double C2997 = C5449 + xAB * C5458;
    const double C2515 = C9143 + yAB * C4765;
    const double C3596 = C9143 + zAB * C5821;
    const double C2185 = C10113 + zAB * C4207;
    const double C3515 = C10113 + yAB * C5764;
    g[0] = C1559;
    g[1] = C1570;
    g[2] = C1581;
    g[3] = C1592;
    g[4] = C1603;
    g[5] = C1614;
    g[6] = C1745;
    g[7] = C1755;
    g[8] = C1765;
    g[9] = C1775;
    g[10] = C1785;
    g[11] = C1795;
    g[12] = C1805;
    g[13] = C1815;
    g[14] = C1825;
    g[15] = C1835;
    g[16] = C1845;
    g[17] = C1855;
    g[18] = C1919;
    g[19] = C1930;
    g[20] = C1941;
    g[21] = C1952;
    g[22] = C1963;
    g[23] = C1974;
    g[24] = C2105;
    g[25] = C2115;
    g[26] = C2125;
    g[27] = C2135;
    g[28] = C2145;
    g[29] = C2155;
    g[30] = C2165;
    g[31] = C2175;
    g[32] = C2185;
    g[33] = C2195;
    g[34] = C2205;
    g[35] = C2215;
    g[36] = C2279;
    g[37] = C2290;
    g[38] = C2301;
    g[39] = C2312;
    g[40] = C2323;
    g[41] = C2334;
    g[42] = C2465;
    g[43] = C2475;
    g[44] = C2485;
    g[45] = C2495;
    g[46] = C2505;
    g[47] = C2515;
    g[48] = C2525;
    g[49] = C2535;
    g[50] = C2545;
    g[51] = C2555;
    g[52] = C2565;
    g[53] = C2575;
    g[54] = C2639;
    g[55] = C2650;
    g[56] = C2661;
    g[57] = C2672;
    g[58] = C2683;
    g[59] = C2694;
    g[60] = C2819;
    g[61] = C2828;
    g[62] = C2837;
    g[63] = C2846;
    g[64] = C2855;
    g[65] = C2864;
    g[66] = C2873;
    g[67] = C2882;
    g[68] = C2891;
    g[69] = C2900;
    g[70] = C2909;
    g[71] = C2918;
    g[72] = C2975;
    g[73] = C2986;
    g[74] = C2997;
    g[75] = C3008;
    g[76] = C3019;
    g[77] = C3030;
    g[78] = C3155;
    g[79] = C3165;
    g[80] = C3175;
    g[81] = C3185;
    g[82] = C3195;
    g[83] = C3205;
    g[84] = C3215;
    g[85] = C3224;
    g[86] = C3233;
    g[87] = C3242;
    g[88] = C3251;
    g[89] = C3260;
    g[90] = C3317;
    g[91] = C3328;
    g[92] = C3339;
    g[93] = C3350;
    g[94] = C3361;
    g[95] = C3372;
    g[96] = C3497;
    g[97] = C3506;
    g[98] = C3515;
    g[99] = C3524;
    g[100] = C3533;
    g[101] = C3542;
    g[102] = C3551;
    g[103] = C3560;
    g[104] = C3569;
    g[105] = C3578;
    g[106] = C3587;
    g[107] = C3596;
    g[108] = C3653;
    g[109] = C3664;
    g[110] = C3674;
    g[111] = C3685;
    g[112] = C3695;
    g[113] = C3706;
    g[114] = C3716;
    g[115] = C3727;
    g[116] = C3737;
    g[117] = C3748;
    g[118] = C3758;
    g[119] = C3769;
    g[120] = C4157;
    g[121] = C4167;
    g[122] = C4177;
    g[123] = C4187;
    g[124] = C4197;
    g[125] = C4207;
    g[126] = C4217;
    g[127] = C4227;
    g[128] = C4237;
    g[129] = C4247;
    g[130] = C4257;
    g[131] = C4267;
    g[132] = C4655;
    g[133] = C4665;
    g[134] = C4675;
    g[135] = C4685;
    g[136] = C4695;
    g[137] = C4705;
    g[138] = C4715;
    g[139] = C4725;
    g[140] = C4735;
    g[141] = C4745;
    g[142] = C4755;
    g[143] = C4765;
    g[144] = C5147;
    g[145] = C5156;
    g[146] = C5166;
    g[147] = C5175;
    g[148] = C5185;
    g[149] = C5194;
    g[150] = C5204;
    g[151] = C5213;
    g[152] = C5223;
    g[153] = C5232;
    g[154] = C5242;
    g[155] = C5251;
    g[156] = C5411;
    g[157] = C5420;
    g[158] = C5430;
    g[159] = C5439;
    g[160] = C5449;
    g[161] = C5458;
    g[162] = C5468;
    g[163] = C5477;
    g[164] = C5487;
    g[165] = C5496;
    g[166] = C5506;
    g[167] = C5515;
    g[168] = C5717;
    g[169] = C5726;
    g[170] = C5736;
    g[171] = C5745;
    g[172] = C5755;
    g[173] = C5764;
    g[174] = C5774;
    g[175] = C5783;
    g[176] = C5793;
    g[177] = C5802;
    g[178] = C5812;
    g[179] = C5821;
    g[180] = C8561;
    g[181] = C8580;
    g[182] = C8599;
    g[183] = C8618;
    g[184] = C8637;
    g[185] = C8656;
    g[186] = C9053;
    g[187] = C9071;
    g[188] = C9089;
    g[189] = C9107;
    g[190] = C9125;
    g[191] = C9143;
    g[192] = C10079;
    g[193] = C10096;
    g[194] = C10113;
    g[195] = C10130;
    g[196] = C10147;
    g[197] = C10164;
    g[198] = C13403;
    g[199] = C13422;
    g[200] = C13441;
    g[201] = C13460;
    g[202] = C13479;
    g[203] = C13498;
    g[204] = C14485;
    g[205] = C14504;
    g[206] = C14522;
    g[207] = C14635;
    g[208] = C14651;
    g[209] = C14666;
    g[210] = C14682;
    g[211] = C14698;
    g[212] = C14713;
    g[213] = C14774;
    g[214] = C14793;
    g[215] = C14873;
    g[216] = C14890;
    g[217] = C14906;
    g[218] = C14923;
    g[219] = C14968;
    g[220] = C14987;
    g[221] = C15068;
    g[222] = C15085;
    g[223] = C15102;
    g[224] = C15119;
    g[225] = C15164;
    g[226] = C15210;
    g[227] = C15225;
    g[228] = C15254;
    g[229] = C15300;
    g[230] = C15316;
    g[231] = C15345;
    g[232] = C15393;
    g[233] = C15409;
    g[234] = C15439;
    g[235] = C15456;
    g[236] = C15535;
    g[237] = C15550;
    g[238] = C15565;
    g[239] = C15580;
    g[240] = C15626;
    g[241] = C15644;
    g[242] = C15723;
    g[243] = C15739;
    g[244] = C15754;
    g[245] = C15770;
    g[246] = C15814;
    g[247] = C15832;
    g[248] = C15914;
    g[249] = C15930;
    g[250] = C15946;
    g[251] = C15962;
    g[252] = C16008;
    g[253] = C16054;
    g[254] = C16069;
    g[255] = C16098;
    g[256] = C16144;
    g[257] = C16159;
    g[258] = C16188;
    g[259] = C16235;
    g[260] = C16250;
    g[261] = C16279;
    g[262] = C16296;
    g[263] = C16374;
    g[264] = C16389;
    g[265] = C16404;
    g[266] = C16419;
    g[267] = C16463;
    g[268] = C16510;
    g[269] = C16525;
    g[270] = C16554;
    g[271] = C16572;
    g[272] = C16652;
    g[273] = C16668;
    g[274] = C16684;
    g[275] = C16700;
    g[276] = C16744;
    g[277] = C16790;
    g[278] = C16805;
    g[279] = C16834;
    g[280] = C16880;
    g[281] = C16896;
    g[282] = C16925;
    g[283] = C16972;
    g[284] = C16987;
    g[285] = C17016;
    g[286] = C17061;
    g[287] = C17076;
    g[288] = C17105;
    g[289] = C17150;
    g[290] = C17165;
    g[291] = C17194;
    g[292] = C17239;
    g[293] = C17255;
    g[294] = C17284;
    g[295] = C17328;
    g[296] = C17343;
    g[297] = C17372;
    g[298] = C17387;
    g[299] = C17403;
    g[300] = C17419;
    g[301] = C17434;
    g[302] = C17726;
    g[303] = C17741;
    g[304] = C17756;
    g[305] = C17771;
    g[306] = C17787;
    g[307] = C17802;
    g[308] = C17993;
    g[309] = C18008;
    g[310] = C18023;
    g[311] = C18038;
    g[312] = C18054;
    g[313] = C18069;
    g[314] = C18285;
    g[315] = C18314;
    g[316] = C18357;
    g[317] = C18372;
    g[318] = C18387;
    g[319] = C18444;
    g[320] = C18601;
    g[321] = C18616;
    g[322] = C18631;
    g[323] = C18646;
    g[324] = C18781;
    g[325] = C18796;
    g[326] = C18811;
    g[327] = C18826;
    g[328] = C19042;
    g[329] = C19071;
    g[330] = C19100;
    g[331] = C19115;
    g[332] = C19144;
    g[333] = C19258;
    g[334] = C19273;
    g[335] = C19303;
    g[336] = C19318;
    g[337] = C19333;
    g[338] = C19348;
    g[339] = C19508;
    g[340] = C19537;
    g[341] = C19580;
    g[342] = C19595;
    g[343] = C19624;
    g[344] = C19639;
    g[345] = C19654;
    g[346] = C23753;
    g[347] = C23943;
    g[348] = C24201;
    g[349] = C24442;
    g[350] = C24672;
    g[351] = C29556;
    g[352] = C30554;
    g[353] = C30574;
    g[354] = C30590;
    g[355] = C30606;
    g[356] = C30637;
    g[357] = C30711;
    g[358] = C30799;
    g[359] = C30814;
    g[360] = C30844;
    g[361] = C30917;
    g[362] = C30932;
    g[363] = C30961;
    g[364] = C30976;
    g[365] = C30992;
    g[366] = C31021;
    g[367] = C31037;
    g[368] = C31053;
    g[369] = C31054;
    g[370] = C31234;
    g[371] = C31250;
    g[372] = C31282;
    g[373] = C31314;
    g[374] = C31373;
    g[375] = C31389;
    g[376] = C31421;
    g[377] = C31451;
    g[378] = C31466;
    g[379] = C31481;
    g[380] = C31569;
    g[381] = C31584;
    g[382] = C31643;
    g[383] = C31659;
    g[384] = C31689;
    g[385] = C31704;
    g[386] = C31762;
    g[387] = C31777;
    g[388] = C31806;
    g[389] = C31823;
    g[390] = C31839;
    g[391] = C31861;
    g[392] = C31892;
    g[393] = C32035;
    g[394] = C32051;
    g[395] = C32123;
    g[396] = C32139;
    g[397] = C32169;
    g[398] = C32185;
    g[399] = C32216;
    g[400] = C32232;
    g[401] = C32263;
    g[402] = C32279;
    g[403] = C32324;
    g[404] = C32454;
    g[405] = C32471;
    g[406] = C32551;
    g[407] = C32567;
    g[408] = C32613;
    g[409] = C32658;
    g[410] = C32673;
    g[411] = C32745;
    g[412] = C32788;
    g[413] = C32839;
    g[414] = C32855;
    g[415] = C32952;
    g[416] = C32968;
    g[417] = C33049;
    g[418] = C33234;
    g[419] = C33616;
    g[420] = C33632;
    g[421] = C33720;
    g[422] = C33735;
    g[423] = C33826;
    g[424] = C33931;
    g[425] = C34372;
    g[426] = C34531;
    g[427] = C34691;
    g[428] = C34752;
    g[429] = C34927;
    g[430] = C35008;
    g[431] = C35142;
    g[432] = C35365;
    g[433] = C35381;
    g[434] = C35412;
    g[435] = C35493;
    g[436] = C36285;
    g[437] = C36347;
    g[438] = C37298;
    g[439] = C37399;
    g[440] = C37524;
    g[441] = C37881;
    g[442] = C38006;
}
