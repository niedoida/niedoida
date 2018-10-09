/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2121_2_vr(const double ae,
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
    const double C21625 = g[184];
    const double C21673 = g[187];
    const double C21688 = g[188];
    const double C21703 = g[189];
    const double C22135 = g[194];
    const double C22330 = g[197];
    const double C22361 = g[199];
    const double C22521 = g[201];
    const double C22536 = g[202];
    const double C22551 = g[203];
    const double C22891 = g[207];
    const double C22906 = g[208];
    const double C23075 = g[211];
    const double C23251 = g[214];
    const double C23266 = g[215];
    const double C23281 = g[216];
    const double C23618 = g[220];
    const double C23738 = g[223];
    const double C23753 = g[224];
    const double C23887 = g[226];
    const double C23944 = g[228];
    const double C24002 = g[230];
    const double C24045 = g[231];
    const double C24061 = g[232];
    const double C24076 = g[233];
    const double C24092 = g[234];
    const double C24213 = g[235];
    const double C24317 = g[237];
    const double C24361 = g[238];
    const double C24479 = g[240];
    const double C24494 = g[241];
    const double C24509 = g[242];
    const double C24613 = g[244];
    const double C24628 = g[245];
    const double C24687 = g[247];
    const double C24774 = g[248];
    const double C24833 = g[250];
    const double C24848 = g[251];
    const double C31554 = g[283];
    const double C31570 = g[284];
    const double C31658 = g[285];
    const double C31816 = g[286];
    const double C31888 = g[287];
    const double C38884 = g[293];
    const double C39984 = g[294];
    const double C40004 = g[295];
    const double C40048 = g[296];
    const double C40107 = g[297];
    const double C40166 = g[298];
    const double C40181 = g[299];
    const double C40197 = g[300];
    const double C40226 = g[301];
    const double C40242 = g[302];
    const double C40257 = g[303];
    const double C40323 = g[304];
    const double C40354 = g[305];
    const double C40441 = g[306];
    const double C40502 = g[307];
    const double C40519 = g[308];
    const double C40534 = g[309];
    const double C40550 = g[310];
    const double C40580 = g[311];
    const double C40611 = g[312];
    const double C40698 = g[313];
    const double C40713 = g[314];
    const double C40728 = g[315];
    const double C40758 = g[316];
    const double C40815 = g[317];
    const double C40874 = g[318];
    const double C40935 = g[319];
    const double C40965 = g[320];
    const double C40995 = g[321];
    const double C41025 = g[322];
    const double C41041 = g[323];
    const double C41057 = g[324];
    const double C41073 = g[325];
    const double C41089 = g[326];
    const double C41176 = g[327];
    const double C41191 = g[328];
    const double C41235 = g[329];
    const double C41252 = g[330];
    const double C41346 = g[331];
    const double C41362 = g[332];
    const double C41392 = g[333];
    const double C41422 = g[334];
    const double C41452 = g[335];
    const double C41482 = g[336];
    const double C41498 = g[337];
    const double C41514 = g[338];
    const double C41643 = g[339];
    const double C41673 = g[340];
    const double C41733 = g[341];
    const double C41749 = g[342];
    const double C41765 = g[343];
    const double C41781 = g[344];
    const double C41883 = g[345];
    const double C41934 = g[346];
    const double C41950 = g[347];
    const double C42011 = g[348];
    const double C42027 = g[349];
    const double C42070 = g[350];
    const double C42086 = g[351];
    const double C42130 = g[352];
    const double C42224 = g[353];
    const double C42240 = g[354];
    const double C42314 = g[355];
    const double C42381 = g[356];
    const double C42425 = g[357];
    const double C42478 = g[358];
    const double C42840 = g[359];
    const double C42929 = g[360];
    const double C42944 = g[361];
    const double C42990 = g[362];
    const double C43381 = g[363];
    const double C43442 = g[364];
    const double C43473 = g[365];
    const double C43786 = g[366];
    const double C43845 = g[367];
    const double C44078 = g[368];
    const double C44194 = g[369];
    const double C44342 = g[370];
    const double C44466 = g[371];
    const double C44656 = g[372];
    const double C44779 = g[373];
    const double C44825 = g[374];
    const double C44856 = g[375];
    const double C44936 = g[376];
    const double C45497 = g[377];
    const double C45903 = g[378];
    const double C46710 = g[379];
    const double C46814 = g[380];
    const double C46968 = g[381];
    const double C47280 = g[382];
    const double C47435 = g[383];
    const double C39987 = p + q;
    const double C39986 = p * q;
    const double C47605 = C42011 * be;
    const double C47596 = C40197 * be;
    const double C47592 = C24092 * be;
    const double C47588 = C22361 * be;
    const double C47583 = bs[7];
    const double C47582 = C42381 * be;
    const double C47581 = bs[6];
    const double C47579 = C42224 * be;
    const double C47578 = bs[5];
    const double C47576 = C41883 * be;
    const double C47575 = bs[4];
    const double C47573 = C41514 * be;
    const double C47572 = C41452 * be;
    const double C47571 = C41362 * be;
    const double C47570 = C41392 * be;
    const double C47569 = C41422 * be;
    const double C47567 = bs[3];
    const double C47566 = C41252 * be;
    const double C47565 = C40728 * be;
    const double C47564 = C40550 * be;
    const double C47560 = C40257 * be;
    const double C47559 = C40713 * be;
    const double C47556 = C40519 * be;
    const double C47555 = C40107 * be;
    const double C47554 = C40048 * be;
    const double C47553 = C40226 * be;
    const double C47552 = C39984 * be;
    const double C47551 = bs[2];
    const double C47550 = C40242 * be;
    const double C47548 = C38884 * be;
    const double C47547 = C31888 * be;
    const double C47546 = C31816 * be;
    const double C47545 = C31570 * be;
    const double C47544 = C31554 * be;
    const double C47541 = C24687 * be;
    const double C47540 = C24361 * be;
    const double C47538 = C24045 * be;
    const double C47537 = C24774 * be;
    const double C47536 = C24833 * be;
    const double C47535 = C23738 * be;
    const double C47534 = C23618 * be;
    const double C47533 = C24509 * be;
    const double C47532 = C24479 * be;
    const double C47531 = C22891 * be;
    const double C47525 = std::pow(Pi, 2.5);
    const double C47524 = ae * be;
    const double C47523 = bs[0];
    const double C47520 = bs[1];
    const double C47518 = C21688 * be;
    const double C47517 = C24061 * be;
    const double C47516 = C21625 * be;
    const double C47515 = C24002 * be;
    const double C47514 = C23887 * be;
    const double C47513 = C23266 * be;
    const double C47512 = C22536 * be;
    const double C47511 = zP - zQ;
    const double C47510 = be * zAB;
    const double C47509 = yP - yQ;
    const double C47508 = be * yAB;
    const double C47507 = 2 * p;
    const double C47505 = xP - xQ;
    const double C47504 = std::pow(p, 2);
    const double C47502 = be * xAB;
    const double C47501 = C21673 * be;
    const double C39988 = C39987 * p;
    const double C47526 = std::sqrt(C39987);
    const double C47522 = p * C39987;
    const double C47521 = C39986 * be;
    const double C47503 = be * C39986;
    const double C47761 = C47605 / p;
    const double C47751 = C47596 / p;
    const double C47746 = C47592 / p;
    const double C47741 = C47588 / p;
    const double C47735 = C47582 / p;
    const double C47732 = C47579 / p;
    const double C47729 = C47576 / p;
    const double C47726 = C47573 / p;
    const double C47724 = C47572 / p;
    const double C47722 = C47571 / p;
    const double C47720 = C47570 / p;
    const double C47718 = C47569 / p;
    const double C47715 = C47566 / p;
    const double C47713 = C47565 / p;
    const double C47711 = C47564 / p;
    const double C47706 = C47560 / p;
    const double C47704 = C47559 / p;
    const double C47700 = C47556 / p;
    const double C47698 = C47555 / p;
    const double C47696 = C47554 / p;
    const double C47694 = C47553 / p;
    const double C47692 = C47552 / p;
    const double C47690 = C47550 / p;
    const double C47687 = C47548 / p;
    const double C47685 = C47547 / p;
    const double C47683 = C47546 / p;
    const double C47681 = C47545 / p;
    const double C47679 = C47544 / p;
    const double C47675 = C47541 / p;
    const double C47673 = C47540 / p;
    const double C47670 = C47538 / p;
    const double C47668 = C47537 / p;
    const double C47666 = C47536 / p;
    const double C47664 = C47535 / p;
    const double C47662 = C47534 / p;
    const double C47660 = C47533 / p;
    const double C47658 = C47532 / p;
    const double C47656 = C47531 / p;
    const double C47650 = 4 * C47525;
    const double C47649 = kab * C47524;
    const double C47645 = C47518 / p;
    const double C47643 = C47517 / p;
    const double C47641 = C47516 / p;
    const double C47639 = C47515 / p;
    const double C47637 = C47514 / p;
    const double C47635 = C47513 / p;
    const double C47633 = C47512 / p;
    const double C47632 = C47511 * C39986;
    const double C47631 = C47509 * C39986;
    const double C47629 = C47505 * C39986;
    const double C47628 = C39987 * C47504;
    const double C47626 = C47501 / p;
    const double C47651 = C39986 * C47526;
    const double C47648 = kab * C47521;
    const double C47762 = C44856 * C47503;
    const double C47752 = C43845 * C47503;
    const double C47747 = C43473 * C47503;
    const double C47742 = C42929 * C47503;
    const double C47736 = C42478 * C47503;
    const double C47733 = C42381 * C47503;
    const double C47730 = C42224 * C47503;
    const double C47727 = C42130 * C47503;
    const double C47725 = C42086 * C47503;
    const double C47723 = C42070 * C47503;
    const double C47721 = C42027 * C47503;
    const double C47719 = C42011 * C47503;
    const double C47716 = C41883 * C47503;
    const double C47714 = C41781 * C47503;
    const double C47712 = C41749 * C47503;
    const double C47707 = C41643 * C47503;
    const double C47705 = C41514 * C47503;
    const double C47701 = C41452 * C47503;
    const double C47699 = C41422 * C47503;
    const double C47697 = C41392 * C47503;
    const double C47695 = C41362 * C47503;
    const double C47693 = C41346 * C47503;
    const double C47691 = C41252 * C47503;
    const double C47688 = C41191 * C47503;
    const double C47686 = C41176 * C47503;
    const double C47684 = C41089 * C47503;
    const double C47682 = C41057 * C47503;
    const double C47680 = C41041 * C47503;
    const double C47676 = C40935 * C47503;
    const double C47674 = C40874 * C47503;
    const double C47671 = C40815 * C47503;
    const double C47669 = C40758 * C47503;
    const double C47667 = C40728 * C47503;
    const double C47665 = C40713 * C47503;
    const double C47663 = C40698 * C47503;
    const double C47661 = C40611 * C47503;
    const double C47659 = C40550 * C47503;
    const double C47657 = C40519 * C47503;
    const double C47646 = C40257 * C47503;
    const double C47644 = C40242 * C47503;
    const double C47642 = C40226 * C47503;
    const double C47640 = C40197 * C47503;
    const double C47638 = C40166 * C47503;
    const double C47636 = C40107 * C47503;
    const double C47634 = C40048 * C47503;
    const double C47627 = C39984 * C47503;
    const double C47794 = kcd * C47649;
    const double C47793 = kcd * C47648;
    const double C47867 = C47762 / C47628;
    const double C47858 = C47752 / C47628;
    const double C47854 = C47747 / C47628;
    const double C47850 = C47742 / C47628;
    const double C47845 = C47736 / C47628;
    const double C47843 = C47733 / C47628;
    const double C47841 = C47730 / C47628;
    const double C47839 = C47727 / C47628;
    const double C47838 = C47725 / C47628;
    const double C47837 = C47723 / C47628;
    const double C47836 = C47721 / C47628;
    const double C47835 = C47719 / C47628;
    const double C47833 = C47716 / C47628;
    const double C47832 = C47714 / C47628;
    const double C47831 = C47712 / C47628;
    const double C47827 = C47707 / C47628;
    const double C47826 = C47705 / C47628;
    const double C47823 = C47701 / C47628;
    const double C47822 = C47699 / C47628;
    const double C47821 = C47697 / C47628;
    const double C47820 = C47695 / C47628;
    const double C47819 = C47693 / C47628;
    const double C47818 = C47691 / C47628;
    const double C47816 = C47688 / C47628;
    const double C47815 = C47686 / C47628;
    const double C47814 = C47684 / C47628;
    const double C47813 = C47682 / C47628;
    const double C47812 = C47680 / C47628;
    const double C47809 = C47676 / C47628;
    const double C47808 = C47674 / C47628;
    const double C47806 = C47671 / C47628;
    const double C47805 = C47669 / C47628;
    const double C47804 = C47667 / C47628;
    const double C47803 = C47665 / C47628;
    const double C47802 = C47663 / C47628;
    const double C47801 = C47661 / C47628;
    const double C47800 = C47659 / C47628;
    const double C47799 = C47657 / C47628;
    const double C47791 = C47646 / C47628;
    const double C47790 = C47644 / C47628;
    const double C47789 = C47642 / C47628;
    const double C47788 = C47640 / C47628;
    const double C47787 = C47638 / C47628;
    const double C47786 = C47636 / C47628;
    const double C47785 = C47634 / C47628;
    const double C47783 = C47627 / C47628;
    const double C47917 = C47581 * C47794;
    const double C47915 = C47578 * C47794;
    const double C47912 = C47575 * C47794;
    const double C47909 = C47567 * C47794;
    const double C47906 = C47551 * C47794;
    const double C47900 = C47520 * C47794;
    const double C47890 = C47523 * C47794;
    const double C47916 = C47583 * C47793;
    const double C47914 = C47581 * C47793;
    const double C47911 = C47578 * C47793;
    const double C47908 = C47575 * C47793;
    const double C47905 = C47567 * C47793;
    const double C47899 = C47551 * C47793;
    const double C47889 = C47520 * C47793;
    const double C42482 =
        -(((C47505 * C47916) / C47522 - (xAB * C47917) / p) * C47650) / C47651;
    const double C44978 =
        -(((C47509 * C47916) / C47522 - (yAB * C47917) / p) * C47650) / C47651;
    const double C47463 =
        -(((C47511 * C47916) / C47522 - (zAB * C47917) / p) * C47650) / C47651;
    const double C42385 =
        -(((C47505 * C47914) / C47522 - (xAB * C47915) / p) * C47650) / C47651;
    const double C44882 =
        -(((C47509 * C47914) / C47522 - (yAB * C47915) / p) * C47650) / C47651;
    const double C47367 =
        -(((C47511 * C47914) / C47522 - (zAB * C47915) / p) * C47650) / C47651;
    const double C42228 =
        -(((C47505 * C47911) / C47522 - (xAB * C47912) / p) * C47650) / C47651;
    const double C44725 =
        -(((C47509 * C47911) / C47522 - (yAB * C47912) / p) * C47650) / C47651;
    const double C47212 =
        -(((C47511 * C47911) / C47522 - (zAB * C47912) / p) * C47650) / C47651;
    const double C41887 =
        -(((C47505 * C47908) / C47522 - (xAB * C47909) / p) * C47650) / C47651;
    const double C44397 =
        -(((C47509 * C47908) / C47522 - (yAB * C47909) / p) * C47650) / C47651;
    const double C46885 =
        -(((C47511 * C47908) / C47522 - (zAB * C47909) / p) * C47650) / C47651;
    const double C41240 =
        -(((C47505 * C47905) / C47522 - (xAB * C47906) / p) * C47650) / C47651;
    const double C43753 =
        -(((C47509 * C47905) / C47522 - (yAB * C47906) / p) * C47650) / C47651;
    const double C46244 =
        -(((C47511 * C47905) / C47522 - (zAB * C47906) / p) * C47650) / C47651;
    const double C40008 =
        -(((C47505 * C47899) / C47522 - (xAB * C47900) / p) * C47650) / C47651;
    const double C42549 =
        -(((C47509 * C47899) / C47522 - (yAB * C47900) / p) * C47650) / C47651;
    const double C45045 =
        -(((C47511 * C47899) / C47522 - (zAB * C47900) / p) * C47650) / C47651;
    const double C21707 =
        -(((C47505 * C47889) / C47522 - (xAB * C47890) / p) * C47650) / C47651;
    const double C28746 =
        -(((C47509 * C47889) / C47522 - (yAB * C47890) / p) * C47650) / C47651;
    const double C35759 =
        -(((C47511 * C47889) / C47522 - (zAB * C47890) / p) * C47650) / C47651;
    const double C47580 = C42385 * C39986;
    const double C42429 =
        C47735 - (C42385 * C47502) / p - C47845 - (C42482 * C47629) / C39988;
    const double C42444 = -((C42385 * C47508) / p + (C42482 * C47631) / C39988);
    const double C42459 = -((C42385 * C47510) / p + (C42482 * C47632) / C39988);
    const double C47606 = C44882 * C39986;
    const double C44925 = -((C44882 * C47502) / p + (C44978 * C47629) / C39988);
    const double C44941 =
        C47735 - (C44882 * C47508) / p - C47845 - (C44978 * C47631) / C39988;
    const double C44956 = -((C44882 * C47510) / p + (C44978 * C47632) / C39988);
    const double C47625 = C47367 * C39986;
    const double C47410 = -((C47367 * C47502) / p + (C47463 * C47629) / C39988);
    const double C47425 = -((C47367 * C47508) / p + (C47463 * C47631) / C39988);
    const double C47441 =
        C47735 - (C47367 * C47510) / p - C47845 - (C47463 * C47632) / C39988;
    const double C47577 = C42228 * C39986;
    const double C42244 =
        C47732 - (C42228 * C47502) / p - C47843 - (C42385 * C47629) / C39988;
    const double C42287 = -((C42228 * C47508) / p + (C42385 * C47631) / C39988);
    const double C42302 = -((C42228 * C47510) / p + (C42385 * C47632) / C39988);
    const double C47604 = C44725 * C39986;
    const double C44740 = -((C44725 * C47502) / p + (C44882 * C47629) / C39988);
    const double C44784 =
        C47732 - (C44725 * C47508) / p - C47843 - (C44882 * C47631) / C39988;
    const double C44799 = -((C44725 * C47510) / p + (C44882 * C47632) / C39988);
    const double C47624 = C47212 * C39986;
    const double C47227 = -((C47212 * C47502) / p + (C47367 * C47629) / C39988);
    const double C47270 = -((C47212 * C47508) / p + (C47367 * C47631) / C39988);
    const double C47286 =
        C47732 - (C47212 * C47510) / p - C47843 - (C47367 * C47632) / C39988;
    const double C47568 = C41887 * C39986;
    const double C41938 =
        C47729 - (C41887 * C47502) / p - C47841 - (C42228 * C47629) / C39988;
    const double C41969 = -((C41887 * C47508) / p + (C42228 * C47631) / C39988);
    const double C41984 = -((C41887 * C47510) / p + (C42228 * C47632) / C39988);
    const double C47602 = C44397 * C39986;
    const double C44440 = -((C44397 * C47502) / p + (C44725 * C47629) / C39988);
    const double C44471 =
        C47729 - (C44397 * C47508) / p - C47841 - (C44725 * C47631) / C39988;
    const double C44486 = -((C44397 * C47510) / p + (C44725 * C47632) / C39988);
    const double C47622 = C46885 * C39986;
    const double C46928 = -((C46885 * C47502) / p + (C47212 * C47629) / C39988);
    const double C46958 = -((C46885 * C47508) / p + (C47212 * C47631) / C39988);
    const double C46974 =
        C47729 - (C46885 * C47510) / p - C47841 - (C47212 * C47632) / C39988;
    const double C47549 = C41240 * C39986;
    const double C41239 =
        C47715 - (C41240 * C47502) / p - C47833 - (C41887 * C47629) / C39988;
    const double C41277 = -((C41240 * C47508) / p + (C41887 * C47631) / C39988);
    const double C41306 = -((C41240 * C47510) / p + (C41887 * C47632) / C39988);
    const double C47595 = C43753 * C39986;
    const double C43768 = -((C43753 * C47502) / p + (C44397 * C47629) / C39988);
    const double C43791 =
        C47715 - (C43753 * C47508) / p - C47833 - (C44397 * C47631) / C39988;
    const double C43820 = -((C43753 * C47510) / p + (C44397 * C47632) / C39988);
    const double C47616 = C46244 * C39986;
    const double C46259 = -((C46244 * C47502) / p + (C46885 * C47629) / C39988);
    const double C46281 = -((C46244 * C47508) / p + (C46885 * C47631) / C39988);
    const double C46310 =
        C47715 - (C46244 * C47510) / p - C47833 - (C46885 * C47632) / C39988;
    const double C47506 = C40008 * C39986;
    const double C39992 =
        C47690 - (C40008 * C47502) / p - C47818 - (C41240 * C47629) / C39988;
    const double C40067 = -((C40008 * C47508) / p + (C41240 * C47631) / C39988);
    const double C40126 = -((C40008 * C47510) / p + (C41240 * C47632) / C39988);
    const double C47584 = C42549 * C39986;
    const double C42533 = -((C42549 * C47502) / p + (C43753 * C47629) / C39988);
    const double C42607 =
        C47690 - (C42549 * C47508) / p - C47818 - (C43753 * C47631) / C39988;
    const double C42665 = -((C42549 * C47510) / p + (C43753 * C47632) / C39988);
    const double C47607 = C45045 * C39986;
    const double C45029 = -((C45045 * C47502) / p + (C46244 * C47629) / C39988);
    const double C45103 = -((C45045 * C47508) / p + (C46244 * C47631) / C39988);
    const double C45161 =
        C47690 - (C45045 * C47510) / p - C47818 - (C46244 * C47632) / C39988;
    const double C21661 =
        C47643 - (C21707 * C47502) / p - C47790 - (C40008 * C47629) / C39988;
    const double C22123 = -((C21707 * C47508) / p + (C40008 * C47631) / C39988);
    const double C22349 = -((C21707 * C47510) / p + (C40008 * C47632) / C39988);
    const double C28703 = -((C28746 * C47502) / p + (C42549 * C47629) / C39988);
    const double C29164 =
        C47643 - (C28746 * C47508) / p - C47790 - (C42549 * C47631) / C39988;
    const double C29388 = -((C28746 * C47510) / p + (C42549 * C47632) / C39988);
    const double C35716 = -((C35759 * C47502) / p + (C45045 * C47629) / C39988);
    const double C36171 = -((C35759 * C47508) / p + (C45045 * C47631) / C39988);
    const double C36392 =
        C47643 - (C35759 * C47510) / p - C47790 - (C45045 * C47632) / C39988;
    const double C47734 = C47580 / C39988;
    const double C47763 = C47606 / C39988;
    const double C47782 = C47625 / C39988;
    const double C47731 = C47577 / C39988;
    const double C47760 = C47604 / C39988;
    const double C47781 = C47624 / C39988;
    const double C47717 = C47568 / C39988;
    const double C47758 = C47602 / C39988;
    const double C47779 = C47622 / C39988;
    const double C47689 = C47549 / C39988;
    const double C47750 = C47595 / C39988;
    const double C47773 = C47616 / C39988;
    const double C47630 = C47506 / C39988;
    const double C40185 = -((C40126 * C47508) / p + (C41306 * C47631) / C39988);
    const double C47737 = C47584 / C39988;
    const double C42722 =
        C47751 - (C42665 * C47508) / p - C47858 - (C43820 * C47631) / C39988;
    const double C47764 = C47607 / C39988;
    const double C45218 = -((C45161 * C47508) / p + (C46310 * C47631) / C39988);
    const double C20717 =
        C47637 - (C22123 * C47502) / p - C47787 - (C40067 * C47629) / C39988;
    const double C21185 =
        C47639 - (C22349 * C47502) / p - C47788 - (C40126 * C47629) / C39988;
    const double C21415 = -((C22349 * C47508) / p + (C40126 * C47631) / C39988);
    const double C27777 = -((C29164 * C47502) / p + (C42607 * C47629) / C39988);
    const double C28235 = -((C29388 * C47502) / p + (C42665 * C47629) / C39988);
    const double C28462 =
        C47639 - (C29388 * C47508) / p - C47788 - (C42665 * C47631) / C39988;
    const double C34790 = -((C36171 * C47502) / p + (C45103 * C47629) / C39988);
    const double C35248 = -((C36392 * C47502) / p + (C45161 * C47629) / C39988);
    const double C35475 = -((C36392 * C47508) / p + (C45161 * C47631) / C39988);
    const double C47844 = C42228 - C47734;
    const double C47868 = C44725 - C47763;
    const double C47887 = C47212 - C47782;
    const double C47842 = C41887 - C47731;
    const double C47866 = C44397 - C47760;
    const double C47886 = C46885 - C47781;
    const double C47834 = C41240 - C47717;
    const double C47864 = C43753 - C47758;
    const double C47884 = C46244 - C47779;
    const double C47817 = C40008 - C47689;
    const double C47857 = C42549 - C47750;
    const double C47878 = C45045 - C47773;
    const double C47784 = C21707 - C47630;
    const double C47846 = C28746 - C47737;
    const double C47869 = C35759 - C47764;
    const double C20950 = (C23944 * be) / p - (C21415 * C47502) / p -
                          (C40181 * C47503) / C47628 -
                          (C40185 * C47629) / C39988;
    const double C28006 = -((C28462 * C47502) / p + (C42722 * C47629) / C39988);
    const double C35019 = -((C35475 * C47502) / p + (C45218 * C47629) / C39988);
    const double C47913 = C47844 / C47507;
    const double C47933 = C47868 / C47507;
    const double C47949 = C47887 / C47507;
    const double C47910 = C47842 / C47507;
    const double C47932 = C47866 / C47507;
    const double C47948 = C47886 / C47507;
    const double C47907 = C47834 / C47507;
    const double C47931 = C47864 / C47507;
    const double C47947 = C47884 / C47507;
    const double C47898 = C47817 / C47507;
    const double C47926 = C47857 / C47507;
    const double C47942 = C47878 / C47507;
    const double C47888 = C47784 / C47507;
    const double C47918 = C47846 / C47507;
    const double C47934 = C47869 / C47507;
    const double C42318 = (C42240 * be) / p - (C42244 * C47502) / p -
                          (C42425 * C47503) / C47628 -
                          (C42429 * C47629) / C39988 + C47913;
    const double C42333 =
        C47913 - ((C42287 * C47508) / p + (C42444 * C47631) / C39988);
    const double C42348 =
        C47913 - ((C42302 * C47510) / p + (C42459 * C47632) / C39988);
    const double C44814 =
        C47933 - ((C44740 * C47502) / p + (C44925 * C47629) / C39988);
    const double C44830 = (C44779 * be) / p - (C44784 * C47508) / p -
                          (C44936 * C47503) / C47628 -
                          (C44941 * C47631) / C39988 + C47933;
    const double C44845 =
        C47933 - ((C44799 * C47510) / p + (C44956 * C47632) / C39988);
    const double C47301 =
        C47949 - ((C47227 * C47502) / p + (C47410 * C47629) / C39988);
    const double C47316 =
        C47949 - ((C47270 * C47508) / p + (C47425 * C47631) / C39988);
    const double C47331 = (C47280 * be) / p - (C47286 * C47510) / p -
                          (C47435 * C47503) / C47628 -
                          (C47441 * C47632) / C39988 + C47949;
    const double C41954 = (C41934 * be) / p - (C41938 * C47502) / p -
                          (C42240 * C47503) / C47628 -
                          (C42244 * C47629) / C39988 + C47910;
    const double C41999 =
        C47910 - ((C41969 * C47508) / p + (C42287 * C47631) / C39988);
    const double C42015 =
        C47910 - ((C41984 * C47510) / p + (C42302 * C47632) / C39988);
    const double C44455 =
        C47932 - ((C44440 * C47502) / p + (C44740 * C47629) / C39988);
    const double C44501 = (C44466 * be) / p - (C44471 * C47508) / p -
                          (C44779 * C47503) / C47628 -
                          (C44784 * C47631) / C39988 + C47932;
    const double C44516 =
        C47932 - ((C44486 * C47510) / p + (C44799 * C47632) / C39988);
    const double C46943 =
        C47948 - ((C46928 * C47502) / p + (C47227 * C47629) / C39988);
    const double C46989 =
        C47948 - ((C46958 * C47508) / p + (C47270 * C47631) / C39988);
    const double C47004 = (C46968 * be) / p - (C46974 * C47510) / p -
                          (C47280 * C47503) / C47628 -
                          (C47286 * C47632) / C39988 + C47948;
    const double C41350 = (C41235 * be) / p - (C41239 * C47502) / p -
                          (C41934 * C47503) / C47628 -
                          (C41938 * C47629) / C39988 + C47907;
    const double C41396 =
        C47907 - ((C41277 * C47508) / p + (C41969 * C47631) / C39988);
    const double C41426 =
        C47907 - ((C41306 * C47510) / p + (C41984 * C47632) / C39988);
    const double C43864 =
        C47931 - ((C43768 * C47502) / p + (C44440 * C47629) / C39988);
    const double C43908 = (C43786 * be) / p - (C43791 * C47508) / p -
                          (C44466 * C47503) / C47628 -
                          (C44471 * C47631) / C39988 + C47931;
    const double C43937 =
        C47931 - ((C43820 * C47510) / p + (C44486 * C47632) / C39988);
    const double C46353 =
        C47947 - ((C46259 * C47502) / p + (C46928 * C47629) / C39988);
    const double C46397 =
        C47947 - ((C46281 * C47508) / p + (C46958 * C47631) / C39988);
    const double C46426 = (C43845 * be) / p - (C46310 * C47510) / p -
                          (C46968 * C47503) / C47628 -
                          (C46974 * C47632) / C39988 + C47947;
    const double C39991 = (C40004 * be) / p - (C39992 * C47502) / p -
                          (C41235 * C47503) / C47628 -
                          (C41239 * C47629) / C39988 + C47898;
    const double C40052 =
        C47898 - ((C40067 * C47508) / p + (C41277 * C47631) / C39988);
    const double C40111 =
        C47898 - ((C40126 * C47510) / p + (C41306 * C47632) / C39988);
    const double C42534 =
        C47926 - ((C42533 * C47502) / p + (C43768 * C47629) / C39988);
    const double C42592 = (C40166 * be) / p - (C42607 * C47508) / p -
                          (C43786 * C47503) / C47628 -
                          (C43791 * C47631) / C39988 + C47926;
    const double C42650 =
        C47926 - ((C42665 * C47510) / p + (C43820 * C47632) / C39988);
    const double C45030 =
        C47942 - ((C45029 * C47502) / p + (C46259 * C47629) / C39988);
    const double C45088 =
        C47942 - ((C45103 * C47508) / p + (C46281 * C47631) / C39988);
    const double C45146 = C47751 - (C45161 * C47510) / p - C47858 -
                          (C46310 * C47632) / C39988 + C47942;
    const double C17829 = (C21703 * be) / p - (C21661 * C47502) / p -
                          (C40004 * C47503) / C47628 -
                          (C39992 * C47629) / C39988 + C47888;
    const double C18810 =
        C47888 - ((C22123 * C47508) / p + (C40067 * C47631) / C39988);
    const double C19783 =
        C47888 - ((C22349 * C47510) / p + (C40126 * C47632) / C39988);
    const double C24959 =
        C47918 - ((C28703 * C47502) / p + (C42533 * C47629) / C39988);
    const double C25916 = C47637 - (C29164 * C47508) / p - C47787 -
                          (C42607 * C47631) / C39988 + C47918;
    const double C26865 =
        C47918 - ((C29388 * C47510) / p + (C42665 * C47632) / C39988);
    const double C31972 =
        C47934 - ((C35716 * C47502) / p + (C45029 * C47629) / C39988);
    const double C32929 =
        C47934 - ((C36171 * C47508) / p + (C45103 * C47631) / C39988);
    const double C33878 = C47639 - (C36392 * C47510) / p - C47788 -
                          (C45161 * C47632) / C39988 + C47934;
    const double C42074 =
        (C41950 * be) / p - (C41954 * C47502) / p - (C42314 * C47503) / C47628 -
        (C42318 * C47629) / C39988 + (C41938 - (C42244 * C39986) / C39988) / p;
    const double C42090 = (C41969 - (C42287 * C39986) / C39988) / p -
                          ((C41999 * C47508) / p + (C42333 * C47631) / C39988);
    const double C47574 = C42015 * C39986;
    const double C42134 = (C41984 - (C42302 * C39986) / C39988) / p -
                          ((C42015 * C47510) / p + (C42348 * C47632) / C39988);
    const double C42163 = -((C42015 * C47508) / p + (C42348 * C47631) / C39988);
    const double C44573 = (C44440 - (C44740 * C39986) / C39988) / p -
                          ((C44455 * C47502) / p + (C44814 * C47629) / C39988);
    const double C44588 =
        (C42027 * be) / p - (C44501 * C47508) / p - (C44825 * C47503) / C47628 -
        (C44830 * C47631) / C39988 + (C44471 - (C44784 * C39986) / C39988) / p;
    const double C47603 = C44516 * C39986;
    const double C44631 = (C44486 - (C44799 * C39986) / C39988) / p -
                          ((C44516 * C47510) / p + (C44845 * C47632) / C39988);
    const double C44661 =
        C47761 - (C44516 * C47508) / p - C47867 - (C44845 * C47631) / C39988;
    const double C47061 = (C46928 - (C47227 * C39986) / C39988) / p -
                          ((C46943 * C47502) / p + (C47301 * C47629) / C39988);
    const double C47076 = (C46958 - (C47270 * C39986) / C39988) / p -
                          ((C46989 * C47508) / p + (C47316 * C47631) / C39988);
    const double C47623 = C47004 * C39986;
    const double C47119 = C47761 - (C47004 * C47510) / p - C47867 -
                          (C47331 * C47632) / C39988 +
                          (C46974 - (C47286 * C39986) / C39988) / p;
    const double C47148 = -((C47004 * C47508) / p + (C47331 * C47631) / C39988);
    const double C41366 =
        (C41346 * be) / p - (C41350 * C47502) / p - (C41950 * C47503) / C47628 -
        (C41954 * C47629) / C39988 + (C41239 - (C41938 * C39986) / C39988) / p;
    const double C47558 = C41396 * C39986;
    const double C41456 = (C41277 - (C41969 * C39986) / C39988) / p -
                          ((C41396 * C47508) / p + (C41999 * C47631) / C39988);
    const double C41502 =
        C47720 - (C41396 * C47502) / p - C47836 - (C41999 * C47629) / C39988;
    const double C47557 = C41426 * C39986;
    const double C41486 =
        C47718 - (C41426 * C47502) / p - C47835 - (C42015 * C47629) / C39988;
    const double C41518 = (C41306 - (C41984 * C39986) / C39988) / p -
                          ((C41426 * C47510) / p + (C42015 * C47632) / C39988);
    const double C41575 = -((C41426 * C47508) / p + (C42015 * C47631) / C39988);
    const double C43879 = (C43768 - (C44440 * C39986) / C39988) / p -
                          ((C43864 * C47502) / p + (C44455 * C47629) / C39988);
    const double C47598 = C43908 * C39986;
    const double C43980 = C47720 - (C43908 * C47508) / p - C47836 -
                          (C44501 * C47631) / C39988 +
                          (C43791 - (C44471 * C39986) / C39988) / p;
    const double C44010 = -((C43908 * C47502) / p + (C44501 * C47629) / C39988);
    const double C47597 = C43937 * C39986;
    const double C43995 = -((C43937 * C47502) / p + (C44516 * C47629) / C39988);
    const double C44039 = (C43820 - (C44486 * C39986) / C39988) / p -
                          ((C43937 * C47510) / p + (C44516 * C47632) / C39988);
    const double C44083 =
        C47718 - (C43937 * C47508) / p - C47835 - (C44516 * C47631) / C39988;
    const double C46368 = (C46259 - (C46928 * C39986) / C39988) / p -
                          ((C46353 * C47502) / p + (C46943 * C47629) / C39988);
    const double C47618 = C46397 * C39986;
    const double C46469 = (C46281 - (C46958 * C39986) / C39988) / p -
                          ((C46397 * C47508) / p + (C46989 * C47631) / C39988);
    const double C46499 = -((C46397 * C47502) / p + (C46989 * C47629) / C39988);
    const double C47617 = C46426 * C39986;
    const double C46484 = -((C46426 * C47502) / p + (C47004 * C47629) / C39988);
    const double C46528 = C47718 - (C46426 * C47510) / p - C47835 -
                          (C47004 * C47632) / C39988 +
                          (C46310 - (C46974 * C39986) / C39988) / p;
    const double C46571 = -((C46426 * C47508) / p + (C47004 * C47631) / C39988);
    const double C40230 = C47692 - (C39991 * C47502) / p - C47819 -
                          (C41350 * C47629) / C39988 +
                          (C39992 - (C41239 * C39986) / C39988) / p;
    const double C40415 = -((C39991 * C47510) / p + (C41350 * C47632) / C39988);
    const double C47527 = C40052 * C39986;
    const double C40327 =
        C47696 - (C40052 * C47502) / p - C47821 - (C41396 * C47629) / C39988;
    const double C40446 = (C40067 - (C41277 * C39986) / C39988) / p -
                          ((C40052 * C47508) / p + (C41396 * C47631) / C39988);
    const double C40538 = -((C40052 * C47510) / p + (C41396 * C47632) / C39988);
    const double C47528 = C40111 * C39986;
    const double C40358 =
        C47698 - (C40111 * C47502) / p - C47822 - (C41426 * C47629) / C39988;
    const double C40507 = (C40126 - (C41306 * C39986) / C39988) / p -
                          ((C40111 * C47510) / p + (C41426 * C47632) / C39988);
    const double C40599 = -((C40111 * C47508) / p + (C41426 * C47631) / C39988);
    const double C42765 = (C42533 - (C43768 * C39986) / C39988) / p -
                          ((C42534 * C47502) / p + (C43864 * C47629) / C39988);
    const double C42949 = -((C42534 * C47510) / p + (C43864 * C47632) / C39988);
    const double C47586 = C42592 * C39986;
    const double C42860 = -((C42592 * C47502) / p + (C43908 * C47629) / C39988);
    const double C42978 = C47696 - (C42592 * C47508) / p - C47821 -
                          (C43908 * C47631) / C39988 +
                          (C42607 - (C43791 * C39986) / C39988) / p;
    const double C43069 = -((C42592 * C47510) / p + (C43908 * C47632) / C39988);
    const double C47587 = C42650 * C39986;
    const double C42890 = -((C42650 * C47502) / p + (C43937 * C47629) / C39988);
    const double C43039 = (C42665 - (C43820 * C39986) / C39988) / p -
                          ((C42650 * C47510) / p + (C43937 * C47632) / C39988);
    const double C43128 =
        C47698 - (C42650 * C47508) / p - C47822 - (C43937 * C47631) / C39988;
    const double C45261 = (C45029 - (C46259 * C39986) / C39988) / p -
                          ((C45030 * C47502) / p + (C46353 * C47629) / C39988);
    const double C45442 =
        C47692 - (C45030 * C47510) / p - C47819 - (C46353 * C47632) / C39988;
    const double C47609 = C45088 * C39986;
    const double C45355 = -((C45088 * C47502) / p + (C46397 * C47629) / C39988);
    const double C45471 = (C45103 - (C46281 * C39986) / C39988) / p -
                          ((C45088 * C47508) / p + (C46397 * C47631) / C39988);
    const double C45562 =
        C47696 - (C45088 * C47510) / p - C47821 - (C46397 * C47632) / C39988;
    const double C47610 = C45146 * C39986;
    const double C45385 = -((C45146 * C47502) / p + (C46426 * C47629) / C39988);
    const double C45532 = C47698 - (C45146 * C47510) / p - C47822 -
                          (C46426 * C47632) / C39988 +
                          (C45161 - (C46310 * C39986) / C39988) / p;
    const double C45621 = -((C45146 * C47508) / p + (C46426 * C47631) / C39988);
    const double C17811 = C47626 - (C17829 * C47502) / p - C47783 -
                          (C39991 * C47629) / C39988 +
                          (C21661 - (C39992 * C39986) / C39988) / p;
    const double C18287 = -((C17829 * C47508) / p + (C39991 * C47631) / C39988);
    const double C18534 = -((C17829 * C47510) / p + (C39991 * C47632) / C39988);
    const double C18793 =
        C47633 - (C18810 * C47502) / p - C47785 - (C40052 * C47629) / C39988;
    const double C19263 = (C22123 - (C40067 * C39986) / C39988) / p -
                          ((C18810 * C47508) / p + (C40052 * C47631) / C39988);
    const double C19507 = -((C18810 * C47510) / p + (C40052 * C47632) / C39988);
    const double C19766 =
        C47635 - (C19783 * C47502) / p - C47786 - (C40111 * C47629) / C39988;
    const double C20236 = -((C19783 * C47508) / p + (C40111 * C47631) / C39988);
    const double C20476 = (C22349 - (C40126 * C39986) / C39988) / p -
                          ((C19783 * C47510) / p + (C40111 * C47632) / C39988);
    const double C24942 = (C28703 - (C42533 * C39986) / C39988) / p -
                          ((C24959 * C47502) / p + (C42534 * C47629) / C39988);
    const double C25408 =
        C47626 - (C24959 * C47508) / p - C47783 - (C42534 * C47631) / C39988;
    const double C25648 = -((C24959 * C47510) / p + (C42534 * C47632) / C39988);
    const double C25900 = -((C25916 * C47502) / p + (C42592 * C47629) / C39988);
    const double C26360 = C47633 - (C25916 * C47508) / p - C47785 -
                          (C42592 * C47631) / C39988 +
                          (C29164 - (C42607 * C39986) / C39988) / p;
    const double C26597 = -((C25916 * C47510) / p + (C42592 * C47632) / C39988);
    const double C26849 = -((C26865 * C47502) / p + (C42650 * C47629) / C39988);
    const double C27309 =
        C47635 - (C26865 * C47508) / p - C47786 - (C42650 * C47631) / C39988;
    const double C27542 = (C29388 - (C42665 * C39986) / C39988) / p -
                          ((C26865 * C47510) / p + (C42650 * C47632) / C39988);
    const double C31955 = (C35716 - (C45029 * C39986) / C39988) / p -
                          ((C31972 * C47502) / p + (C45030 * C47629) / C39988);
    const double C32421 = -((C31972 * C47508) / p + (C45030 * C47631) / C39988);
    const double C32661 =
        C47626 - (C31972 * C47510) / p - C47783 - (C45030 * C47632) / C39988;
    const double C32913 = -((C32929 * C47502) / p + (C45088 * C47629) / C39988);
    const double C33373 = (C36171 - (C45103 * C39986) / C39988) / p -
                          ((C32929 * C47508) / p + (C45088 * C47631) / C39988);
    const double C33610 =
        C47633 - (C32929 * C47510) / p - C47785 - (C45088 * C47632) / C39988;
    const double C33862 = -((C33878 * C47502) / p + (C45146 * C47629) / C39988);
    const double C34322 = -((C33878 * C47508) / p + (C45146 * C47631) / C39988);
    const double C34555 = C47635 - (C33878 * C47510) / p - C47786 -
                          (C45146 * C47632) / C39988 +
                          (C36392 - (C45161 * C39986) / C39988) / p;
    const double C47728 = C47574 / C39988;
    const double C47759 = C47603 / C39988;
    const double C47780 = C47623 / C39988;
    const double C47561 = C41366 * C39986;
    const double C41647 = C47722 - (C41366 * C47502) / p - C47837 -
                          (C42074 * C47629) / C39988 +
                          (3 * (C41350 - (C41954 * C39986) / C39988)) / C47507;
    const double C41692 = -((C41366 * C47508) / p + (C42074 * C47631) / C39988);
    const double C41721 = -((C41366 * C47510) / p + (C42074 * C47632) / C39988);
    const double C47703 = C47558 / C39988;
    const double C47562 = C41456 * C39986;
    const double C41677 =
        C47724 - (C41456 * C47502) / p - C47838 - (C42090 * C47629) / C39988;
    const double C41753 = (3 * (C41396 - (C41999 * C39986) / C39988)) / C47507 -
                          ((C41456 * C47508) / p + (C42090 * C47631) / C39988);
    const double C41828 = -((C41456 * C47510) / p + (C42090 * C47632) / C39988);
    const double C47702 = C47557 / C39988;
    const double C47563 = C41518 * C39986;
    const double C41737 =
        C47726 - (C41518 * C47502) / p - C47839 - (C42134 * C47629) / C39988;
    const double C41843 = -((C41518 * C47508) / p + (C42134 * C47631) / C39988);
    const double C47599 = C43879 * C39986;
    const double C44154 = (3 * (C43864 - (C44455 * C39986) / C39988)) / C47507 -
                          ((C43879 * C47502) / p + (C44573 * C47629) / C39988);
    const double C44199 =
        C47722 - (C43879 * C47508) / p - C47837 - (C44573 * C47631) / C39988;
    const double C44228 = -((C43879 * C47510) / p + (C44573 * C47632) / C39988);
    const double C47754 = C47598 / C39988;
    const double C47600 = C43980 * C39986;
    const double C44183 = -((C43980 * C47502) / p + (C44588 * C47629) / C39988);
    const double C44258 = C47724 - (C43980 * C47508) / p - C47838 -
                          (C44588 * C47631) / C39988 +
                          (3 * (C43908 - (C44501 * C39986) / C39988)) / C47507;
    const double C44331 = -((C43980 * C47510) / p + (C44588 * C47632) / C39988);
    const double C47753 = C47597 / C39988;
    const double C47601 = C44039 * C39986;
    const double C44243 = -((C44039 * C47502) / p + (C44631 * C47629) / C39988);
    const double C44347 =
        C47726 - (C44039 * C47508) / p - C47839 - (C44631 * C47631) / C39988;
    const double C47619 = C46368 * C39986;
    const double C46642 = (3 * (C46353 - (C46943 * C39986) / C39988)) / C47507 -
                          ((C46368 * C47502) / p + (C47061 * C47629) / C39988);
    const double C46686 = -((C46368 * C47508) / p + (C47061 * C47631) / C39988);
    const double C46716 =
        C47722 - (C46368 * C47510) / p - C47837 - (C47061 * C47632) / C39988;
    const double C47775 = C47618 / C39988;
    const double C47620 = C46469 * C39986;
    const double C46671 = -((C46469 * C47502) / p + (C47076 * C47629) / C39988);
    const double C46746 = (3 * (C46397 - (C46989 * C39986) / C39988)) / C47507 -
                          ((C46469 * C47508) / p + (C47076 * C47631) / C39988);
    const double C46820 =
        C47724 - (C46469 * C47510) / p - C47838 - (C47076 * C47632) / C39988;
    const double C47774 = C47617 / C39988;
    const double C47621 = C46528 * C39986;
    const double C46731 = -((C46528 * C47502) / p + (C47119 * C47629) / C39988);
    const double C46835 = -((C46528 * C47508) / p + (C47119 * C47631) / C39988);
    const double C47519 = C40230 * C39986;
    const double C40261 = C47694 - (C40230 * C47502) / p - C47820 -
                          (C41366 * C47629) / C39988 +
                          (3 * (C39991 - (C41350 * C39986) / C39988)) / C47507;
    const double C40311 = -((C40230 * C47508) / p + (C41366 * C47631) / C39988);
    const double C40342 = -((C40230 * C47510) / p + (C41366 * C47632) / C39988);
    const double C47652 = C47527 / C39988;
    const double C47529 = C40446 * C39986;
    const double C40445 =
        C47700 - (C40446 * C47502) / p - C47823 - (C41456 * C47629) / C39988;
    const double C40615 = -((C40446 * C47510) / p + (C41456 * C47632) / C39988);
    const double C47653 = C47528 / C39988;
    const double C47530 = C40507 * C39986;
    const double C40506 =
        C47704 - (C40507 * C47502) / p - C47826 - (C41518 * C47629) / C39988;
    const double C40686 = -((C40507 * C47508) / p + (C41518 * C47631) / C39988);
    const double C47585 = C42765 * C39986;
    const double C42794 = (3 * (C42534 - (C43864 * C39986) / C39988)) / C47507 -
                          ((C42765 * C47502) / p + (C43879 * C47629) / C39988);
    const double C42845 =
        C47694 - (C42765 * C47508) / p - C47820 - (C43879 * C47631) / C39988;
    const double C42875 = -((C42765 * C47510) / p + (C43879 * C47632) / C39988);
    const double C47739 = C47586 / C39988;
    const double C47589 = C42978 * C39986;
    const double C42979 = -((C42978 * C47502) / p + (C43980 * C47629) / C39988);
    const double C43143 = -((C42978 * C47510) / p + (C43980 * C47632) / C39988);
    const double C47740 = C47587 / C39988;
    const double C47590 = C43039 * C39986;
    const double C43040 = -((C43039 * C47502) / p + (C44039 * C47629) / C39988);
    const double C43214 =
        C47704 - (C43039 * C47508) / p - C47826 - (C44039 * C47631) / C39988;
    const double C47608 = C45261 * C39986;
    const double C45290 = (3 * (C45030 - (C46353 * C39986) / C39988)) / C47507 -
                          ((C45261 * C47502) / p + (C46368 * C47629) / C39988);
    const double C45340 = -((C45261 * C47508) / p + (C46368 * C47631) / C39988);
    const double C45370 =
        C47694 - (C45261 * C47510) / p - C47820 - (C46368 * C47632) / C39988;
    const double C47766 = C47609 / C39988;
    const double C47611 = C45471 * C39986;
    const double C45472 = -((C45471 * C47502) / p + (C46469 * C47629) / C39988);
    const double C45636 =
        C47700 - (C45471 * C47510) / p - C47823 - (C46469 * C47632) / C39988;
    const double C47767 = C47610 / C39988;
    const double C47612 = C45532 * C39986;
    const double C45533 = -((C45532 * C47502) / p + (C46528 * C47629) / C39988);
    const double C45707 = -((C45532 * C47508) / p + (C46528 * C47631) / C39988);
    const double C21629 = C47641 - (C17811 * C47502) / p - C47789 -
                          (C40230 * C47629) / C39988 +
                          (3 * (C17829 - (C39991 * C39986) / C39988)) / C47507;
    const double C21723 = -((C17811 * C47508) / p + (C40230 * C47631) / C39988);
    const double C21740 = -((C17811 * C47510) / p + (C40230 * C47632) / C39988);
    const double C22092 = -((C18534 * C47508) / p + (C40415 * C47631) / C39988);
    const double C22570 =
        C47656 - (C19263 * C47502) / p - C47799 - (C40446 * C47629) / C39988;
    const double C22879 = -((C19263 * C47510) / p + (C40446 * C47632) / C39988);
    const double C22602 = (C23075 * be) / p - (C19507 * C47502) / p -
                          (C40534 * C47503) / C47628 -
                          (C40538 * C47629) / C39988;
    const double C23300 =
        C47662 - (C20236 * C47502) / p - C47802 - (C40599 * C47629) / C39988;
    const double C23317 =
        C47664 - (C20476 * C47502) / p - C47803 - (C40507 * C47629) / C39988;
    const double C23606 = -((C20476 * C47508) / p + (C40507 * C47631) / C39988);
    const double C28673 = (3 * (C24959 - (C42534 * C39986) / C39988)) / C47507 -
                          ((C24942 * C47502) / p + (C42765 * C47629) / C39988);
    const double C28761 =
        C47641 - (C24942 * C47508) / p - C47789 - (C42765 * C47631) / C39988;
    const double C28777 = -((C24942 * C47510) / p + (C42765 * C47632) / C39988);
    const double C29135 = (C22330 * be) / p - (C25648 * C47508) / p -
                          (C42944 * C47503) / C47628 -
                          (C42949 * C47631) / C39988;
    const double C29605 = -((C26360 * C47502) / p + (C42978 * C47629) / C39988);
    const double C29916 = -((C26360 * C47510) / p + (C42978 * C47632) / C39988);
    const double C29635 = -((C26597 * C47502) / p + (C43069 * C47629) / C39988);
    const double C30331 = -((C27309 * C47502) / p + (C43128 * C47629) / C39988);
    const double C30347 = -((C27542 * C47502) / p + (C43039 * C47629) / C39988);
    const double C30639 =
        C47664 - (C27542 * C47508) / p - C47803 - (C43039 * C47631) / C39988;
    const double C35686 = (3 * (C31972 - (C45030 * C39986) / C39988)) / C47507 -
                          ((C31955 * C47502) / p + (C45261 * C47629) / C39988);
    const double C35774 = -((C31955 * C47508) / p + (C45261 * C47631) / C39988);
    const double C35790 =
        C47641 - (C31955 * C47510) / p - C47789 - (C45261 * C47632) / C39988;
    const double C36142 = -((C32661 * C47508) / p + (C45442 * C47631) / C39988);
    const double C36607 = -((C33373 * C47502) / p + (C45471 * C47629) / C39988);
    const double C36914 =
        C47656 - (C33373 * C47510) / p - C47799 - (C45471 * C47632) / C39988;
    const double C36637 = -((C33610 * C47502) / p + (C45562 * C47629) / C39988);
    const double C37327 = -((C34322 * C47502) / p + (C45621 * C47629) / C39988);
    const double C37343 = -((C34555 * C47502) / p + (C45532 * C47629) / C39988);
    const double C37631 = -((C34555 * C47508) / p + (C45532 * C47631) / C39988);
    const double C47840 = C41426 - C47728;
    const double C47865 = C43937 - C47759;
    const double C47885 = C46426 - C47780;
    const double C47708 = C47561 / C39988;
    const double C47825 = C40052 - C47703;
    const double C47709 = C47562 / C39988;
    const double C47824 = C40111 - C47702;
    const double C47710 = C47563 / C39988;
    const double C47755 = C47599 / C39988;
    const double C47860 = C42592 - C47754;
    const double C47756 = C47600 / C39988;
    const double C47859 = C42650 - C47753;
    const double C47757 = C47601 / C39988;
    const double C47776 = C47619 / C39988;
    const double C47880 = C45088 - C47775;
    const double C47777 = C47620 / C39988;
    const double C47879 = C45146 - C47774;
    const double C47778 = C47621 / C39988;
    const double C47647 = C47519 / C39988;
    const double C47539 = C40261 * C39986;
    const double C40862 = -((C40261 * C47508) / p + (C41647 * C47631) / C39988);
    const double C40908 = -((C40261 * C47510) / p + (C41647 * C47632) / C39988);
    const double C47795 = C18810 - C47652;
    const double C47654 = C47529 / C39988;
    const double C47796 = C19783 - C47653;
    const double C47655 = C47530 / C39988;
    const double C47738 = C47585 / C39988;
    const double C47591 = C42794 * C39986;
    const double C43386 =
        C47706 - (C42794 * C47508) / p - C47827 - (C44154 * C47631) / C39988;
    const double C43431 = -((C42794 * C47510) / p + (C44154 * C47632) / C39988);
    const double C47848 = C25916 - C47739;
    const double C47743 = C47589 / C39988;
    const double C47849 = C26865 - C47740;
    const double C47744 = C47590 / C39988;
    const double C47765 = C47608 / C39988;
    const double C47613 = C45290 * C39986;
    const double C45878 = -((C45290 * C47508) / p + (C46642 * C47631) / C39988);
    const double C45924 =
        C47706 - (C45290 * C47510) / p - C47827 - (C46642 * C47632) / C39988;
    const double C47871 = C32929 - C47766;
    const double C47768 = C47611 / C39988;
    const double C47872 = C33878 - C47767;
    const double C47769 = C47612 / C39988;
    const double C21990 = -((C21629 * C47508) / p + (C40261 * C47631) / C39988);
    const double C22048 = -((C21629 * C47510) / p + (C40261 * C47632) / C39988);
    const double C22077 = -((C21740 * C47508) / p + (C40342 * C47631) / C39988);
    const double C22850 =
        C47660 - (C22879 * C47502) / p - C47801 - (C40615 * C47629) / C39988;
    const double C23591 =
        C47668 - (C23606 * C47502) / p - C47805 - (C40686 * C47629) / C39988;
    const double C29031 =
        C47645 - (C28673 * C47508) / p - C47791 - (C42794 * C47631) / C39988;
    const double C29091 = -((C28673 * C47510) / p + (C42794 * C47632) / C39988);
    const double C29120 =
        C47741 - (C28777 * C47508) / p - C47850 - (C42875 * C47631) / C39988;
    const double C29887 = -((C29916 * C47502) / p + (C43143 * C47629) / C39988);
    const double C30624 = -((C30639 * C47502) / p + (C43214 * C47629) / C39988);
    const double C36040 = -((C35686 * C47508) / p + (C45290 * C47631) / C39988);
    const double C36098 =
        C47645 - (C35686 * C47510) / p - C47791 - (C45290 * C47632) / C39988;
    const double C36127 = -((C35790 * C47508) / p + (C45370 * C47631) / C39988);
    const double C36885 = -((C36914 * C47502) / p + (C45636 * C47629) / C39988);
    const double C37616 = -((C37631 * C47502) / p + (C45707 * C47629) / C39988);
    const double C41769 =
        C47840 / C47507 - ((C41575 * C47508) / p + (C42163 * C47631) / C39988);
    const double C41785 = (3 * C47840) / C47507 -
                          ((C41518 * C47510) / p + (C42134 * C47632) / C39988);
    const double C44273 = (C44078 * be) / p - (C44083 * C47508) / p -
                          (C44656 * C47503) / C47628 -
                          (C44661 * C47631) / C39988 + C47865 / C47507;
    const double C44288 = (3 * C47865) / C47507 -
                          ((C44039 * C47510) / p + (C44631 * C47632) / C39988);
    const double C46761 =
        C47885 / C47507 - ((C46571 * C47508) / p + (C47148 * C47631) / C39988);
    const double C46776 = C47726 - (C46528 * C47510) / p - C47839 -
                          (C47119 * C47632) / C39988 + (3 * C47885) / C47507;
    const double C47828 = C40230 - C47708;
    const double C40476 = (C40323 * be) / p - (C40327 * C47502) / p -
                          (C41498 * C47503) / C47628 -
                          (C41502 * C47629) / C39988 + C47825 / C47507;
    const double C40554 = (3 * C47825) / C47507 -
                          ((C40446 * C47508) / p + (C41456 * C47631) / C39988);
    const double C47829 = C40446 - C47709;
    const double C47901 = C47824 / C47507;
    const double C40732 = (3 * C47824) / C47507 -
                          ((C40507 * C47510) / p + (C41518 * C47632) / C39988);
    const double C47830 = C40507 - C47710;
    const double C47861 = C42765 - C47755;
    const double C43010 =
        C47860 / C47507 - ((C42860 * C47502) / p + (C44010 * C47629) / C39988);
    const double C43084 = C47700 - (C42978 * C47508) / p - C47823 -
                          (C43980 * C47631) / C39988 + (3 * C47860) / C47507;
    const double C47862 = C42978 - C47756;
    const double C47927 = C47859 / C47507;
    const double C43257 = (3 * C47859) / C47507 -
                          ((C43039 * C47510) / p + (C44039 * C47632) / C39988);
    const double C47863 = C43039 - C47757;
    const double C47881 = C45261 - C47776;
    const double C45503 =
        C47880 / C47507 - ((C45355 * C47502) / p + (C46499 * C47629) / C39988);
    const double C45577 = (3 * C47880) / C47507 -
                          ((C45471 * C47508) / p + (C46469 * C47631) / C39988);
    const double C47882 = C45471 - C47777;
    const double C47943 = C47879 / C47507;
    const double C45750 = C47704 - (C45532 * C47510) / p - C47826 -
                          (C46528 * C47632) / C39988 + (3 * C47879) / C47507;
    const double C47883 = C45532 - C47778;
    const double C47792 = C17811 - C47647;
    const double C47672 = C47539 / C39988;
    const double C21828 = (C22521 * be) / p - (C18793 * C47502) / p -
                          (C40323 * C47503) / C47628 -
                          (C40327 * C47629) / C39988 + C47795 / C47507;
    const double C22674 = (3 * C47795) / C47507 -
                          ((C19263 * C47508) / p + (C40446 * C47631) / C39988);
    const double C47797 = C19263 - C47654;
    const double C47892 = C47796 / C47507;
    const double C23504 = (3 * C47796) / C47507 -
                          ((C20476 * C47510) / p + (C40507 * C47632) / C39988);
    const double C47798 = C20476 - C47655;
    const double C47847 = C24942 - C47738;
    const double C47745 = C47591 / C39988;
    const double C28867 =
        C47848 / C47507 - ((C25900 * C47502) / p + (C42860 * C47629) / C39988);
    const double C29707 = C47656 - (C26360 * C47508) / p - C47799 -
                          (C42978 * C47631) / C39988 + (3 * C47848) / C47507;
    const double C47851 = C26360 - C47743;
    const double C47920 = C47849 / C47507;
    const double C30536 = (3 * C47849) / C47507 -
                          ((C27542 * C47510) / p + (C43039 * C47632) / C39988);
    const double C47852 = C27542 - C47744;
    const double C47870 = C31955 - C47765;
    const double C47770 = C47613 / C39988;
    const double C35878 =
        C47871 / C47507 - ((C32913 * C47502) / p + (C45355 * C47629) / C39988);
    const double C36709 = (3 * C47871) / C47507 -
                          ((C33373 * C47508) / p + (C45471 * C47631) / C39988);
    const double C47873 = C33373 - C47768;
    const double C47936 = C47872 / C47507;
    const double C37529 = C47664 - (C34555 * C47510) / p - C47803 -
                          (C45532 * C47632) / C39988 + (3 * C47872) / C47507;
    const double C47874 = C34555 - C47769;
    const double C24201 = -((C22048 * C47508) / p + (C40908 * C47631) / C39988);
    const double C31226 =
        C47746 - (C29091 * C47508) / p - C47854 - (C43431 * C47631) / C39988;
    const double C38213 = -((C36098 * C47508) / p + (C45924 * C47631) / C39988);
    const double C47903 = C47828 / C47507;
    const double C40819 = C47706 - (C40261 * C47502) / p - C47827 -
                          (C41647 * C47629) / C39988 + (2 * C47828) / p;
    const double C47542 = C40554 * C39986;
    const double C40969 =
        C47711 - (C40554 * C47502) / p - C47831 - (C41753 * C47629) / C39988;
    const double C41061 = -((C40554 * C47510) / p + (C41753 * C47632) / C39988);
    const double C47902 = C47829 / C47507;
    const double C41045 =
        (2 * C47829) / p - ((C40554 * C47508) / p + (C41753 * C47631) / C39988);
    const double C40461 = (C40354 * be) / p - (C40358 * C47502) / p -
                          (C41482 * C47503) / C47628 -
                          (C41486 * C47629) / C39988 + C47901;
    const double C40584 =
        C47901 - ((C40599 * C47508) / p + (C41575 * C47631) / C39988);
    const double C47543 = C40732 * C39986;
    const double C41029 =
        C47713 - (C40732 * C47502) / p - C47832 - (C41785 * C47629) / C39988;
    const double C41164 = -((C40732 * C47508) / p + (C41785 * C47631) / C39988);
    const double C47904 = C47830 / C47507;
    const double C41195 =
        (2 * C47830) / p - ((C40732 * C47510) / p + (C41785 * C47632) / C39988);
    const double C47929 = C47861 / C47507;
    const double C43342 =
        (2 * C47861) / p - ((C42794 * C47502) / p + (C44154 * C47629) / C39988);
    const double C47593 = C43084 * C39986;
    const double C43492 = -((C43084 * C47502) / p + (C44258 * C47629) / C39988);
    const double C43580 = -((C43084 * C47510) / p + (C44258 * C47632) / C39988);
    const double C47928 = C47862 / C47507;
    const double C43565 = C47711 - (C43084 * C47508) / p - C47831 -
                          (C44258 * C47631) / C39988 + (2 * C47862) / p;
    const double C42995 =
        C47927 - ((C42890 * C47502) / p + (C43995 * C47629) / C39988);
    const double C43113 = (C40698 * be) / p - (C43128 * C47508) / p -
                          (C44078 * C47503) / C47628 -
                          (C44083 * C47631) / C39988 + C47927;
    const double C47594 = C43257 * C39986;
    const double C43550 = -((C43257 * C47502) / p + (C44288 * C47629) / C39988);
    const double C43681 =
        C47713 - (C43257 * C47508) / p - C47832 - (C44288 * C47631) / C39988;
    const double C47930 = C47863 / C47507;
    const double C43710 =
        (2 * C47863) / p - ((C43257 * C47510) / p + (C44288 * C47632) / C39988);
    const double C47945 = C47881 / C47507;
    const double C45835 =
        (2 * C47881) / p - ((C45290 * C47502) / p + (C46642 * C47629) / C39988);
    const double C47614 = C45577 * C39986;
    const double C45983 = -((C45577 * C47502) / p + (C46746 * C47629) / C39988);
    const double C46071 =
        C47711 - (C45577 * C47510) / p - C47831 - (C46746 * C47632) / C39988;
    const double C47944 = C47882 / C47507;
    const double C46056 =
        (2 * C47882) / p - ((C45577 * C47508) / p + (C46746 * C47631) / C39988);
    const double C45487 =
        C47943 - ((C45385 * C47502) / p + (C46484 * C47629) / C39988);
    const double C45606 =
        C47943 - ((C45621 * C47508) / p + (C46571 * C47631) / C39988);
    const double C47615 = C45750 * C39986;
    const double C46041 = -((C45750 * C47502) / p + (C46776 * C47629) / C39988);
    const double C46172 = -((C45750 * C47508) / p + (C46776 * C47631) / C39988);
    const double C47946 = C47883 / C47507;
    const double C46201 = C47713 - (C45750 * C47510) / p - C47832 -
                          (C46776 * C47632) / C39988 + (2 * C47883) / p;
    const double C47891 = C47792 / C47507;
    const double C21692 = C47645 - (C21629 * C47502) / p - C47791 -
                          (C40261 * C47629) / C39988 + (2 * C47792) / p;
    const double C47807 = C21629 - C47672;
    const double C22318 = -((C21828 * C47510) / p + (C40476 * C47632) / C39988);
    const double C22632 =
        C47658 - (C22674 * C47502) / p - C47800 - (C40554 * C47629) / C39988;
    const double C23063 = -((C22674 * C47510) / p + (C40554 * C47632) / C39988);
    const double C47893 = C47797 / C47507;
    const double C22958 =
        (2 * C47797) / p - ((C22674 * C47508) / p + (C40554 * C47631) / C39988);
    const double C21945 = (C23251 * be) / p - (C19766 * C47502) / p -
                          (C40354 * C47503) / C47628 -
                          (C40358 * C47629) / C39988 + C47892;
    const double C22776 =
        C47892 - ((C20236 * C47508) / p + (C40599 * C47631) / C39988);
    const double C23462 =
        C47666 - (C23504 * C47502) / p - C47804 - (C40732 * C47629) / C39988;
    const double C23697 = -((C23504 * C47508) / p + (C40732 * C47631) / C39988);
    const double C47894 = C47798 / C47507;
    const double C23832 =
        (2 * C47798) / p - ((C23504 * C47510) / p + (C40732 * C47632) / C39988);
    const double C47919 = C47847 / C47507;
    const double C28732 =
        (2 * C47847) / p - ((C28673 * C47502) / p + (C42794 * C47629) / C39988);
    const double C47853 = C28673 - C47745;
    const double C29359 = -((C28867 * C47510) / p + (C43010 * C47632) / C39988);
    const double C29665 = -((C29707 * C47502) / p + (C43084 * C47629) / C39988);
    const double C30099 = -((C29707 * C47510) / p + (C43084 * C47632) / C39988);
    const double C47921 = C47851 / C47507;
    const double C29991 = C47658 - (C29707 * C47508) / p - C47800 -
                          (C43084 * C47631) / C39988 + (2 * C47851) / p;
    const double C28986 =
        C47920 - ((C26849 * C47502) / p + (C42890 * C47629) / C39988);
    const double C29812 = C47662 - (C27309 * C47508) / p - C47802 -
                          (C43128 * C47631) / C39988 + C47920;
    const double C30494 = -((C30536 * C47502) / p + (C43257 * C47629) / C39988);
    const double C30728 =
        C47666 - (C30536 * C47508) / p - C47804 - (C43257 * C47631) / C39988;
    const double C47922 = C47852 / C47507;
    const double C30862 =
        (2 * C47852) / p - ((C30536 * C47510) / p + (C43257 * C47632) / C39988);
    const double C47935 = C47870 / C47507;
    const double C35745 =
        (2 * C47870) / p - ((C35686 * C47502) / p + (C45290 * C47629) / C39988);
    const double C47875 = C35686 - C47770;
    const double C36363 = (C22551 * be) / p - (C35878 * C47510) / p -
                          (C45497 * C47503) / C47628 -
                          (C45503 * C47632) / C39988;
    const double C36667 = -((C36709 * C47502) / p + (C45577 * C47629) / C39988);
    const double C37096 =
        C47658 - (C36709 * C47510) / p - C47800 - (C45577 * C47632) / C39988;
    const double C47937 = C47873 / C47507;
    const double C36989 =
        (2 * C47873) / p - ((C36709 * C47508) / p + (C45577 * C47631) / C39988);
    const double C35995 =
        C47936 - ((C33862 * C47502) / p + (C45385 * C47629) / C39988);
    const double C36811 =
        C47936 - ((C34322 * C47508) / p + (C45621 * C47631) / C39988);
    const double C37487 = -((C37529 * C47502) / p + (C45750 * C47629) / C39988);
    const double C37719 = -((C37529 * C47508) / p + (C45750 * C47631) / C39988);
    const double C47938 = C47874 / C47507;
    const double C37852 = C47666 - (C37529 * C47510) / p - C47804 -
                          (C45750 * C47632) / C39988 + (2 * C47874) / p;
    const double C40893 =
        C47903 - ((C40311 * C47508) / p + (C41692 * C47631) / C39988);
    const double C40923 =
        C47903 - ((C40342 * C47510) / p + (C41721 * C47632) / C39988);
    const double C47677 = C47542 / C39988;
    const double C40878 = (C40441 * be) / p - (C40445 * C47502) / p -
                          (C41673 * C47503) / C47628 -
                          (C41677 * C47629) / C39988 + C47902;
    const double C41077 =
        C47902 - ((C40615 * C47510) / p + (C41828 * C47632) / C39988);
    const double C40999 = (C40580 * be) / p - (C40584 * C47502) / p -
                          (C41765 * C47503) / C47628 -
                          (C41769 * C47629) / C39988;
    const double C47678 = C47543 / C39988;
    const double C40939 = (C40502 * be) / p - (C40506 * C47502) / p -
                          (C41733 * C47503) / C47628 -
                          (C41737 * C47629) / C39988 + C47904;
    const double C41093 =
        C47904 - ((C40686 * C47508) / p + (C41843 * C47631) / C39988);
    const double C43416 = (C42840 * be) / p - (C42845 * C47508) / p -
                          (C44194 * C47503) / C47628 -
                          (C44199 * C47631) / C39988 + C47929;
    const double C43447 =
        C47929 - ((C42875 * C47510) / p + (C44228 * C47632) / C39988);
    const double C47748 = C47593 / C39988;
    const double C43401 =
        C47928 - ((C42979 * C47502) / p + (C44183 * C47629) / C39988);
    const double C43595 =
        C47928 - ((C43143 * C47510) / p + (C44331 * C47632) / C39988);
    const double C43521 = -((C43113 * C47502) / p + (C44273 * C47629) / C39988);
    const double C47749 = C47594 / C39988;
    const double C43462 =
        C47930 - ((C43040 * C47502) / p + (C44243 * C47629) / C39988);
    const double C43610 = (C40758 * be) / p - (C43214 * C47508) / p -
                          (C44342 * C47503) / C47628 -
                          (C44347 * C47631) / C39988 + C47930;
    const double C45909 =
        C47945 - ((C45340 * C47508) / p + (C46686 * C47631) / C39988);
    const double C45939 = (C42929 * be) / p - (C45370 * C47510) / p -
                          (C46710 * C47503) / C47628 -
                          (C46716 * C47632) / C39988 + C47945;
    const double C47771 = C47614 / C39988;
    const double C45893 =
        C47944 - ((C45472 * C47502) / p + (C46671 * C47629) / C39988);
    const double C46086 = (C40611 * be) / p - (C45636 * C47510) / p -
                          (C46814 * C47503) / C47628 -
                          (C46820 * C47632) / C39988 + C47944;
    const double C46012 = -((C45606 * C47502) / p + (C46761 * C47629) / C39988);
    const double C47772 = C47615 / C39988;
    const double C45954 =
        C47946 - ((C45533 * C47502) / p + (C46731 * C47629) / C39988);
    const double C46101 =
        C47946 - ((C45707 * C47508) / p + (C46835 * C47631) / C39988);
    const double C21799 =
        C47891 - ((C21723 * C47508) / p + (C40311 * C47631) / C39988);
    const double C21916 =
        C47891 - ((C21740 * C47510) / p + (C40342 * C47632) / C39988);
    const double C24080 = -((C21692 * C47508) / p + (C40819 * C47631) / C39988);
    const double C24096 = -((C21692 * C47510) / p + (C40819 * C47632) / C39988);
    const double C47895 = C47807 / C47507;
    const double C24049 = C47670 - (C21692 * C47502) / p - C47806 -
                          (C40819 * C47629) / C39988 + (5 * C47807) / C47507;
    const double C24423 =
        C47681 - (C23063 * C47502) / p - C47813 - (C41061 * C47629) / C39988;
    const double C22185 = (C22906 * be) / p - (C22570 * C47502) / p -
                          (C40441 * C47503) / C47628 -
                          (C40445 * C47629) / C39988 + C47893;
    const double C23003 =
        C47893 - ((C22879 * C47510) / p + (C40615 * C47632) / C39988);
    const double C24394 =
        C47679 - (C22958 * C47502) / p - C47812 - (C41045 * C47629) / C39988;
    const double C24557 = -((C22958 * C47510) / p + (C41045 * C47632) / C39988);
    const double C22230 = -((C21945 * C47508) / p + (C40461 * C47631) / C39988);
    const double C22747 = (C24613 * be) / p - (C22776 * C47502) / p -
                          (C40580 * C47503) / C47628 -
                          (C40584 * C47629) / C39988;
    const double C24733 =
        C47685 - (C23697 * C47502) / p - C47815 - (C41164 * C47629) / C39988;
    const double C22438 = (C23753 * be) / p - (C23317 * C47502) / p -
                          (C40502 * C47503) / C47628 -
                          (C40506 * C47629) / C39988 + C47894;
    const double C23182 =
        C47894 - ((C23606 * C47508) / p + (C40686 * C47631) / C39988);
    const double C24748 =
        C47687 - (C23832 * C47502) / p - C47816 - (C41195 * C47629) / C39988;
    const double C24821 = -((C23832 * C47508) / p + (C41195 * C47631) / C39988);
    const double C28838 = (C22135 * be) / p - (C28761 * C47508) / p -
                          (C42840 * C47503) / C47628 -
                          (C42845 * C47631) / C39988 + C47919;
    const double C28957 =
        C47919 - ((C28777 * C47510) / p + (C42875 * C47632) / C39988);
    const double C31106 =
        C47670 - (C28732 * C47508) / p - C47806 - (C43342 * C47631) / C39988;
    const double C31121 = -((C28732 * C47510) / p + (C43342 * C47632) / C39988);
    const double C47923 = C47853 / C47507;
    const double C31077 = (5 * C47853) / C47507 -
                          ((C28732 * C47502) / p + (C43342 * C47629) / C39988);
    const double C31443 = -((C30099 * C47502) / p + (C43580 * C47629) / C39988);
    const double C29223 =
        C47921 - ((C29605 * C47502) / p + (C42979 * C47629) / C39988);
    const double C30038 =
        C47921 - ((C29916 * C47510) / p + (C43143 * C47632) / C39988);
    const double C31414 = -((C29991 * C47502) / p + (C43565 * C47629) / C39988);
    const double C31575 = -((C29991 * C47510) / p + (C43565 * C47632) / C39988);
    const double C29270 = (C23281 * be) / p - (C28986 * C47508) / p -
                          (C42990 * C47503) / C47628 -
                          (C42995 * C47631) / C39988;
    const double C29783 = -((C29812 * C47502) / p + (C43113 * C47629) / C39988);
    const double C31748 = -((C30728 * C47502) / p + (C43681 * C47629) / C39988);
    const double C29476 =
        C47922 - ((C30347 * C47502) / p + (C43040 * C47629) / C39988);
    const double C30216 = C47668 - (C30639 * C47508) / p - C47805 -
                          (C43214 * C47631) / C39988 + C47922;
    const double C31763 = -((C30862 * C47502) / p + (C43710 * C47629) / C39988);
    const double C31835 =
        C47687 - (C30862 * C47508) / p - C47816 - (C43710 * C47631) / C39988;
    const double C35849 =
        C47935 - ((C35774 * C47508) / p + (C45340 * C47631) / C39988);
    const double C35966 = C47741 - (C35790 * C47510) / p - C47850 -
                          (C45370 * C47632) / C39988 + C47935;
    const double C38093 = -((C35745 * C47508) / p + (C45835 * C47631) / C39988);
    const double C38108 =
        C47670 - (C35745 * C47510) / p - C47806 - (C45835 * C47632) / C39988;
    const double C47939 = C47875 / C47507;
    const double C38064 = (5 * C47875) / C47507 -
                          ((C35745 * C47502) / p + (C45835 * C47629) / C39988);
    const double C38430 = -((C37096 * C47502) / p + (C46071 * C47629) / C39988);
    const double C36230 =
        C47937 - ((C36607 * C47502) / p + (C45472 * C47629) / C39988);
    const double C37034 = C47660 - (C36914 * C47510) / p - C47801 -
                          (C45636 * C47632) / C39988 + C47937;
    const double C38401 = -((C36989 * C47502) / p + (C46056 * C47629) / C39988);
    const double C38560 =
        C47679 - (C36989 * C47510) / p - C47812 - (C46056 * C47632) / C39988;
    const double C36275 = -((C35995 * C47508) / p + (C45487 * C47631) / C39988);
    const double C36782 = -((C36811 * C47502) / p + (C45606 * C47629) / C39988);
    const double C38732 = -((C37719 * C47502) / p + (C46172 * C47629) / C39988);
    const double C36479 =
        C47938 - ((C37343 * C47502) / p + (C45533 * C47629) / C39988);
    const double C37212 =
        C47938 - ((C37631 * C47508) / p + (C45707 * C47631) / C39988);
    const double C38747 = -((C37852 * C47502) / p + (C46201 * C47629) / C39988);
    const double C38818 = -((C37852 * C47508) / p + (C46201 * C47631) / C39988);
    const double C47810 = C22674 - C47677;
    const double C47811 = C23504 - C47678;
    const double C47855 = C29707 - C47748;
    const double C47856 = C30536 - C47749;
    const double C47876 = C36709 - C47771;
    const double C47877 = C37529 - C47772;
    const double C24141 = -((C21799 * C47510) / p + (C40893 * C47632) / C39988);
    const double C24171 = -((C21916 * C47508) / p + (C40923 * C47631) / C39988);
    const double C24111 =
        C47895 - ((C21990 * C47508) / p + (C40862 * C47631) / C39988);
    const double C24156 =
        C47895 - ((C22048 * C47510) / p + (C40908 * C47632) / C39988);
    const double C24126 = C47673 - (C22185 * C47502) / p - C47808 -
                          (C40878 * C47629) / C39988 +
                          (C22570 - (C40445 * C39986) / C39988) / p;
    const double C24261 = -((C22185 * C47510) / p + (C40878 * C47632) / C39988);
    const double C24438 = (C31658 * be) / p - (C23003 * C47502) / p -
                          (C41073 * C47503) / C47628 -
                          (C41077 * C47629) / C39988;
    const double C24276 = (C24628 * be) / p - (C22747 * C47502) / p -
                          (C40995 * C47503) / C47628 -
                          (C40999 * C47629) / C39988 +
                          (C22776 - (C40584 * C39986) / C39988) / C47507;
    const double C24186 = C47675 - (C22438 * C47502) / p - C47809 -
                          (C40939 * C47629) / C39988 +
                          (C23317 - (C40506 * C39986) / C39988) / p;
    const double C24291 = -((C22438 * C47508) / p + (C40939 * C47631) / C39988);
    const double C24453 =
        C47683 - (C23182 * C47502) / p - C47814 - (C41093 * C47629) / C39988;
    const double C24587 = (C23606 - (C40686 * C39986) / C39988) / p -
                          ((C23182 * C47508) / p + (C41093 * C47631) / C39988);
    const double C31166 = -((C28838 * C47510) / p + (C43416 * C47632) / C39988);
    const double C31196 = (C24317 * be) / p - (C28957 * C47508) / p -
                          (C43442 * C47503) / C47628 -
                          (C43447 * C47631) / C39988;
    const double C31136 = (C24076 * be) / p - (C29031 * C47508) / p -
                          (C43381 * C47503) / C47628 -
                          (C43386 * C47631) / C39988 + C47923;
    const double C31181 =
        C47923 - ((C29091 * C47510) / p + (C43431 * C47632) / C39988);
    const double C31151 = (C29605 - (C42979 * C39986) / C39988) / p -
                          ((C29223 * C47502) / p + (C43401 * C47629) / C39988);
    const double C31284 = -((C29223 * C47510) / p + (C43401 * C47632) / C39988);
    const double C31458 = -((C30038 * C47502) / p + (C43595 * C47629) / C39988);
    const double C31299 = (C29812 - (C43113 * C39986) / C39988) / C47507 -
                          ((C29783 * C47502) / p + (C43521 * C47629) / C39988);
    const double C31211 = (C30347 - (C43040 * C39986) / C39988) / p -
                          ((C29476 * C47502) / p + (C43462 * C47629) / C39988);
    const double C31314 =
        C47675 - (C29476 * C47508) / p - C47809 - (C43462 * C47631) / C39988;
    const double C31473 = -((C30216 * C47502) / p + (C43610 * C47629) / C39988);
    const double C31605 = C47683 - (C30216 * C47508) / p - C47814 -
                          (C43610 * C47631) / C39988 +
                          (C30639 - (C43214 * C39986) / C39988) / p;
    const double C38153 = (C24213 * be) / p - (C35849 * C47510) / p -
                          (C45903 * C47503) / C47628 -
                          (C45909 * C47632) / C39988;
    const double C38183 = -((C35966 * C47508) / p + (C45939 * C47631) / C39988);
    const double C38123 =
        C47939 - ((C36040 * C47508) / p + (C45878 * C47631) / C39988);
    const double C38168 = C47746 - (C36098 * C47510) / p - C47854 -
                          (C45924 * C47632) / C39988 + C47939;
    const double C38138 = (C36607 - (C45472 * C39986) / C39988) / p -
                          ((C36230 * C47502) / p + (C45893 * C47629) / C39988);
    const double C38271 =
        C47673 - (C36230 * C47510) / p - C47808 - (C45893 * C47632) / C39988;
    const double C38445 = -((C37034 * C47502) / p + (C46086 * C47629) / C39988);
    const double C38286 = (C36811 - (C45606 * C39986) / C39988) / C47507 -
                          ((C36782 * C47502) / p + (C46012 * C47629) / C39988);
    const double C38198 = (C37343 - (C45533 * C39986) / C39988) / p -
                          ((C36479 * C47502) / p + (C45954 * C47629) / C39988);
    const double C38301 = -((C36479 * C47508) / p + (C45954 * C47631) / C39988);
    const double C38460 = -((C37212 * C47502) / p + (C46101 * C47629) / C39988);
    const double C38590 = (C37631 - (C45707 * C39986) / C39988) / p -
                          ((C37212 * C47508) / p + (C46101 * C47631) / C39988);
    const double C47896 = C47810 / C47507;
    const double C24542 = (5 * C47810) / C47507 -
                          ((C22958 * C47508) / p + (C41045 * C47631) / C39988);
    const double C47897 = C47811 / C47507;
    const double C24894 = (5 * C47811) / C47507 -
                          ((C23832 * C47510) / p + (C41195 * C47632) / C39988);
    const double C47924 = C47855 / C47507;
    const double C31559 = C47679 - (C29991 * C47508) / p - C47812 -
                          (C43565 * C47631) / C39988 + (5 * C47855) / C47507;
    const double C47925 = C47856 / C47507;
    const double C31907 = (5 * C47856) / C47507 -
                          ((C30862 * C47510) / p + (C43710 * C47632) / C39988);
    const double C47940 = C47876 / C47507;
    const double C38545 = (5 * C47876) / C47507 -
                          ((C36989 * C47508) / p + (C46056 * C47631) / C39988);
    const double C47941 = C47877 / C47507;
    const double C38890 = C47687 - (C37852 * C47510) / p - C47816 -
                          (C46201 * C47632) / C39988 + (5 * C47877) / C47507;
    const double C24246 = (C24494 * be) / p - (C22632 * C47502) / p -
                          (C40965 * C47503) / C47628 -
                          (C40969 * C47629) / C39988 + C47896;
    const double C24572 =
        C47896 - ((C23063 * C47510) / p + (C41061 * C47632) / C39988);
    const double C24349 = (C24848 * be) / p - (C23462 * C47502) / p -
                          (C41025 * C47503) / C47628 -
                          (C41029 * C47629) / C39988 + C47897;
    const double C24660 =
        C47897 - ((C23697 * C47508) / p + (C41164 * C47631) / C39988);
    const double C31269 =
        C47924 - ((C29665 * C47502) / p + (C43492 * C47629) / C39988);
    const double C31590 =
        C47924 - ((C30099 * C47510) / p + (C43580 * C47632) / C39988);
    const double C31371 =
        C47925 - ((C30494 * C47502) / p + (C43550 * C47629) / C39988);
    const double C31677 = C47685 - (C30728 * C47508) / p - C47815 -
                          (C43681 * C47631) / C39988 + C47925;
    const double C38256 =
        C47940 - ((C36667 * C47502) / p + (C45983 * C47629) / C39988);
    const double C38575 = C47681 - (C37096 * C47510) / p - C47813 -
                          (C46071 * C47632) / C39988 + C47940;
    const double C38358 =
        C47941 - ((C37487 * C47502) / p + (C46041 * C47629) / C39988);
    const double C38661 =
        C47941 - ((C37719 * C47508) / p + (C46172 * C47631) / C39988);
    vrx[0] = C17811;
    vrx[1] = C17829;
    vrx[2] = C18287;
    vrx[3] = C18534;
    vrx[4] = C18793;
    vrx[5] = C18810;
    vrx[6] = C19263;
    vrx[7] = C19507;
    vrx[8] = C19766;
    vrx[9] = C19783;
    vrx[10] = C20236;
    vrx[11] = C20476;
    vrx[12] = C20717;
    vrx[13] = C20950;
    vrx[14] = C21185;
    vrx[15] = C21415;
    vrx[16] = C21629;
    vrx[17] = C21661;
    vrx[18] = C21692;
    vrx[19] = C21707;
    vrx[20] = C21723;
    vrx[21] = C21740;
    vrx[22] = C21799;
    vrx[23] = C21828;
    vrx[24] = C21916;
    vrx[25] = C21945;
    vrx[26] = C21990;
    vrx[27] = C22048;
    vrx[28] = C22077;
    vrx[29] = C22092;
    vrx[30] = C22123;
    vrx[31] = C22185;
    vrx[32] = C22230;
    vrx[33] = C22318;
    vrx[34] = C22349;
    vrx[35] = C22438;
    vrx[36] = C22570;
    vrx[37] = C22602;
    vrx[38] = C22632;
    vrx[39] = C22674;
    vrx[40] = C22747;
    vrx[41] = C22776;
    vrx[42] = C22850;
    vrx[43] = C22879;
    vrx[44] = C22958;
    vrx[45] = C23003;
    vrx[46] = C23063;
    vrx[47] = C23182;
    vrx[48] = C23300;
    vrx[49] = C23317;
    vrx[50] = C23462;
    vrx[51] = C23504;
    vrx[52] = C23591;
    vrx[53] = C23606;
    vrx[54] = C23697;
    vrx[55] = C23832;
    vrx[56] = C24049;
    vrx[57] = C24080;
    vrx[58] = C24096;
    vrx[59] = C24111;
    vrx[60] = C24126;
    vrx[61] = C24141;
    vrx[62] = C24156;
    vrx[63] = C24171;
    vrx[64] = C24186;
    vrx[65] = C24201;
    vrx[66] = C24246;
    vrx[67] = C24261;
    vrx[68] = C24276;
    vrx[69] = C24291;
    vrx[70] = C24349;
    vrx[71] = C24394;
    vrx[72] = C24423;
    vrx[73] = C24438;
    vrx[74] = C24453;
    vrx[75] = C24542;
    vrx[76] = C24557;
    vrx[77] = C24572;
    vrx[78] = C24587;
    vrx[79] = C24660;
    vrx[80] = C24733;
    vrx[81] = C24748;
    vrx[82] = C24821;
    vrx[83] = C24894;
    vry[0] = C24942;
    vry[1] = C24959;
    vry[2] = C25408;
    vry[3] = C25648;
    vry[4] = C25900;
    vry[5] = C25916;
    vry[6] = C26360;
    vry[7] = C26597;
    vry[8] = C26849;
    vry[9] = C26865;
    vry[10] = C27309;
    vry[11] = C27542;
    vry[12] = C27777;
    vry[13] = C28006;
    vry[14] = C28235;
    vry[15] = C28462;
    vry[16] = C28673;
    vry[17] = C28703;
    vry[18] = C28732;
    vry[19] = C28746;
    vry[20] = C28761;
    vry[21] = C28777;
    vry[22] = C28838;
    vry[23] = C28867;
    vry[24] = C28957;
    vry[25] = C28986;
    vry[26] = C29031;
    vry[27] = C29091;
    vry[28] = C29120;
    vry[29] = C29135;
    vry[30] = C29164;
    vry[31] = C29223;
    vry[32] = C29270;
    vry[33] = C29359;
    vry[34] = C29388;
    vry[35] = C29476;
    vry[36] = C29605;
    vry[37] = C29635;
    vry[38] = C29665;
    vry[39] = C29707;
    vry[40] = C29783;
    vry[41] = C29812;
    vry[42] = C29887;
    vry[43] = C29916;
    vry[44] = C29991;
    vry[45] = C30038;
    vry[46] = C30099;
    vry[47] = C30216;
    vry[48] = C30331;
    vry[49] = C30347;
    vry[50] = C30494;
    vry[51] = C30536;
    vry[52] = C30624;
    vry[53] = C30639;
    vry[54] = C30728;
    vry[55] = C30862;
    vry[56] = C31077;
    vry[57] = C31106;
    vry[58] = C31121;
    vry[59] = C31136;
    vry[60] = C31151;
    vry[61] = C31166;
    vry[62] = C31181;
    vry[63] = C31196;
    vry[64] = C31211;
    vry[65] = C31226;
    vry[66] = C31269;
    vry[67] = C31284;
    vry[68] = C31299;
    vry[69] = C31314;
    vry[70] = C31371;
    vry[71] = C31414;
    vry[72] = C31443;
    vry[73] = C31458;
    vry[74] = C31473;
    vry[75] = C31559;
    vry[76] = C31575;
    vry[77] = C31590;
    vry[78] = C31605;
    vry[79] = C31677;
    vry[80] = C31748;
    vry[81] = C31763;
    vry[82] = C31835;
    vry[83] = C31907;
    vrz[0] = C31955;
    vrz[1] = C31972;
    vrz[2] = C32421;
    vrz[3] = C32661;
    vrz[4] = C32913;
    vrz[5] = C32929;
    vrz[6] = C33373;
    vrz[7] = C33610;
    vrz[8] = C33862;
    vrz[9] = C33878;
    vrz[10] = C34322;
    vrz[11] = C34555;
    vrz[12] = C34790;
    vrz[13] = C35019;
    vrz[14] = C35248;
    vrz[15] = C35475;
    vrz[16] = C35686;
    vrz[17] = C35716;
    vrz[18] = C35745;
    vrz[19] = C35759;
    vrz[20] = C35774;
    vrz[21] = C35790;
    vrz[22] = C35849;
    vrz[23] = C35878;
    vrz[24] = C35966;
    vrz[25] = C35995;
    vrz[26] = C36040;
    vrz[27] = C36098;
    vrz[28] = C36127;
    vrz[29] = C36142;
    vrz[30] = C36171;
    vrz[31] = C36230;
    vrz[32] = C36275;
    vrz[33] = C36363;
    vrz[34] = C36392;
    vrz[35] = C36479;
    vrz[36] = C36607;
    vrz[37] = C36637;
    vrz[38] = C36667;
    vrz[39] = C36709;
    vrz[40] = C36782;
    vrz[41] = C36811;
    vrz[42] = C36885;
    vrz[43] = C36914;
    vrz[44] = C36989;
    vrz[45] = C37034;
    vrz[46] = C37096;
    vrz[47] = C37212;
    vrz[48] = C37327;
    vrz[49] = C37343;
    vrz[50] = C37487;
    vrz[51] = C37529;
    vrz[52] = C37616;
    vrz[53] = C37631;
    vrz[54] = C37719;
    vrz[55] = C37852;
    vrz[56] = C38064;
    vrz[57] = C38093;
    vrz[58] = C38108;
    vrz[59] = C38123;
    vrz[60] = C38138;
    vrz[61] = C38153;
    vrz[62] = C38168;
    vrz[63] = C38183;
    vrz[64] = C38198;
    vrz[65] = C38213;
    vrz[66] = C38256;
    vrz[67] = C38271;
    vrz[68] = C38286;
    vrz[69] = C38301;
    vrz[70] = C38358;
    vrz[71] = C38401;
    vrz[72] = C38430;
    vrz[73] = C38445;
    vrz[74] = C38460;
    vrz[75] = C38545;
    vrz[76] = C38560;
    vrz[77] = C38575;
    vrz[78] = C38590;
    vrz[79] = C38661;
    vrz[80] = C38732;
    vrz[81] = C38747;
    vrz[82] = C38818;
    vrz[83] = C38890;
}
