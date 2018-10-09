/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2211_3_vr(const double ae,
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
    const double C43579 = g[256];
    const double C43598 = g[257];
    const double C43613 = g[258];
    const double C43628 = g[259];
    const double C43643 = g[260];
    const double C43735 = g[261];
    const double C43751 = g[262];
    const double C43779 = g[263];
    const double C43794 = g[264];
    const double C43838 = g[265];
    const double C43854 = g[266];
    const double C43882 = g[267];
    const double C43911 = g[268];
    const double C43940 = g[269];
    const double C43968 = g[270];
    const double C44008 = g[271];
    const double C44049 = g[272];
    const double C44117 = g[273];
    const double C44186 = g[274];
    const double C44213 = g[275];
    const double C44227 = g[276];
    const double C44293 = g[277];
    const double C44334 = g[278];
    const double C44348 = g[279];
    const double C44437 = g[280];
    const double C44466 = g[281];
    const double C44494 = g[282];
    const double C44523 = g[283];
    const double C44551 = g[284];
    const double C44566 = g[285];
    const double C44581 = g[286];
    const double C44635 = g[287];
    const double C44650 = g[288];
    const double C44692 = g[289];
    const double C44706 = g[290];
    const double C44747 = g[291];
    const double C44763 = g[292];
    const double C44778 = g[293];
    const double C44799 = g[294];
    const double C44814 = g[295];
    const double C44869 = g[296];
    const double C44897 = g[297];
    const double C44925 = g[298];
    const double C44980 = g[299];
    const double C44995 = g[300];
    const double C45128 = g[301];
    const double C45169 = g[302];
    const double C45198 = g[303];
    const double C45213 = g[304];
    const double C45242 = g[305];
    const double C45257 = g[306];
    const double C45352 = g[307];
    const double C45368 = g[308];
    const double C45389 = g[309];
    const double C45445 = g[310];
    const double C45486 = g[311];
    const double C45527 = g[312];
    const double C45542 = g[313];
    const double C45610 = g[314];
    const double C45664 = g[315];
    const double C45686 = g[316];
    const double C45755 = g[317];
    const double C45818 = g[318];
    const double C45859 = g[319];
    const double C45909 = g[320];
    const double C46133 = g[321];
    const double C46191 = g[322];
    const double C46262 = g[323];
    const double C46292 = g[324];
    const double C46751 = g[325];
    const double C46766 = g[326];
    const double C46863 = g[327];
    const double C47157 = g[328];
    const double C47361 = g[329];
    const double C47414 = g[330];
    const double C47522 = g[331];
    const double C47647 = g[332];
    const double C47750 = g[333];
    const double C47913 = g[334];
    const double C48042 = g[335];
    const double C48098 = g[336];
    const double C48113 = g[337];
    const double C48202 = g[338];
    const double C48504 = g[339];
    const double C49131 = g[340];
    const double C49884 = g[341];
    const double C49953 = g[342];
    const double C50124 = g[343];
    const double C50388 = g[344];
    const double C50533 = g[345];
    const double C43582 = p + q;
    const double C43581 = p * q;
    const double C50636 = bs[7];
    const double C50635 = bs[6];
    const double C50633 = bs[5];
    const double C50631 = bs[4];
    const double C50629 = bs[3];
    const double C50622 = bs[2];
    const double C50617 = std::pow(Pi, 2.5);
    const double C50616 = ce * de;
    const double C50615 = bs[0];
    const double C50612 = bs[1];
    const double C50606 = zP - zQ;
    const double C50605 = be * zAB;
    const double C50604 = yP - yQ;
    const double C50603 = be * yAB;
    const double C50600 = 2 * p;
    const double C50599 = xP - xQ;
    const double C50598 = be * xAB;
    const double C43583 = C43582 * p;
    const double C50618 = std::sqrt(C43582);
    const double C50614 = q * C43582;
    const double C50613 = C43581 * ce;
    const double C50597 = C43582 * C43581;
    const double C50596 = ce * C43581;
    const double C50703 = 4 * C50617;
    const double C50702 = kab * C50616;
    const double C50683 = C50606 * C43581;
    const double C50682 = C50604 * C43581;
    const double C50676 = C50599 * C43581;
    const double C50704 = C43581 * C50618;
    const double C50701 = kab * C50613;
    const double C50764 = C48113 * C50596;
    const double C50757 = C47361 * C50596;
    const double C50751 = C46766 * C50596;
    const double C50749 = C46292 * C50596;
    const double C50742 = C45909 * C50596;
    const double C50740 = C45818 * C50596;
    const double C50738 = C45664 * C50596;
    const double C50737 = C45610 * C50596;
    const double C50735 = C45542 * C50596;
    const double C50734 = C45527 * C50596;
    const double C50733 = C45486 * C50596;
    const double C50732 = C45445 * C50596;
    const double C50731 = C45368 * C50596;
    const double C50729 = C45257 * C50596;
    const double C50727 = C45198 * C50596;
    const double C50724 = C45128 * C50596;
    const double C50723 = C44995 * C50596;
    const double C50721 = C44925 * C50596;
    const double C50719 = C44869 * C50596;
    const double C50718 = C44814 * C50596;
    const double C50717 = C44799 * C50596;
    const double C50716 = C44778 * C50596;
    const double C50714 = C44747 * C50596;
    const double C50713 = C44706 * C50596;
    const double C50712 = C44692 * C50596;
    const double C50711 = C44650 * C50596;
    const double C50710 = C44581 * C50596;
    const double C50709 = C44566 * C50596;
    const double C50707 = C44523 * C50596;
    const double C50705 = C44437 * C50596;
    const double C50699 = C44348 * C50596;
    const double C50698 = C44334 * C50596;
    const double C50697 = C44293 * C50596;
    const double C50696 = C44227 * C50596;
    const double C50695 = C44213 * C50596;
    const double C50694 = C44186 * C50596;
    const double C50693 = C44049 * C50596;
    const double C50692 = C43968 * C50596;
    const double C50690 = C43882 * C50596;
    const double C50689 = C43854 * C50596;
    const double C50686 = C43779 * C50596;
    const double C50685 = C43751 * C50596;
    const double C50681 = C43643 * C50596;
    const double C50679 = C43628 * C50596;
    const double C50677 = C43598 * C50596;
    const double C50675 = C43579 * C50596;
    const double C50809 = kcd * C50702;
    const double C50808 = kcd * C50701;
    const double C50869 = C50764 / C50597;
    const double C50862 = C50757 / C50597;
    const double C50856 = C50751 / C50597;
    const double C50854 = C50749 / C50597;
    const double C50847 = C50742 / C50597;
    const double C50845 = C50740 / C50597;
    const double C50843 = C50738 / C50597;
    const double C50842 = C50737 / C50597;
    const double C50840 = C50735 / C50597;
    const double C50839 = C50734 / C50597;
    const double C50838 = C50733 / C50597;
    const double C50837 = C50732 / C50597;
    const double C50836 = C50731 / C50597;
    const double C50834 = C50729 / C50597;
    const double C50832 = C50727 / C50597;
    const double C50829 = C50724 / C50597;
    const double C50828 = C50723 / C50597;
    const double C50826 = C50721 / C50597;
    const double C50824 = C50719 / C50597;
    const double C50823 = C50718 / C50597;
    const double C50822 = C50717 / C50597;
    const double C50821 = C50716 / C50597;
    const double C50819 = C50714 / C50597;
    const double C50818 = C50713 / C50597;
    const double C50817 = C50712 / C50597;
    const double C50816 = C50711 / C50597;
    const double C50815 = C50710 / C50597;
    const double C50814 = C50709 / C50597;
    const double C50812 = C50707 / C50597;
    const double C50810 = C50705 / C50597;
    const double C50806 = C50699 / C50597;
    const double C50805 = C50698 / C50597;
    const double C50804 = C50697 / C50597;
    const double C50803 = C50696 / C50597;
    const double C50802 = C50695 / C50597;
    const double C50801 = C50694 / C50597;
    const double C50800 = C50693 / C50597;
    const double C50799 = C50692 / C50597;
    const double C50797 = C50690 / C50597;
    const double C50796 = C50689 / C50597;
    const double C50793 = C50686 / C50597;
    const double C50792 = C50685 / C50597;
    const double C50790 = C50681 / C50597;
    const double C50788 = C50679 / C50597;
    const double C50786 = C50677 / C50597;
    const double C50785 = C50675 / C50597;
    const double C50919 = C50635 * C50809;
    const double C50917 = C50633 * C50809;
    const double C50914 = C50631 * C50809;
    const double C50911 = C50629 * C50809;
    const double C50909 = C50622 * C50809;
    const double C50902 = C50612 * C50809;
    const double C50896 = C50615 * C50809;
    const double C50918 = C50636 * C50808;
    const double C50916 = C50635 * C50808;
    const double C50913 = C50633 * C50808;
    const double C50910 = C50631 * C50808;
    const double C50908 = C50629 * C50808;
    const double C50901 = C50622 * C50808;
    const double C50895 = C50612 * C50808;
    const double C45913 =
        (((C50599 * C50918) / C50614 - (xCD * C50919) / q) * C50703) / C50704;
    const double C48242 =
        (((C50604 * C50918) / C50614 - (yCD * C50919) / q) * C50703) / C50704;
    const double C50560 =
        (((C50606 * C50918) / C50614 - (zCD * C50919) / q) * C50703) / C50704;
    const double C45822 =
        (((C50599 * C50916) / C50614 - (xCD * C50917) / q) * C50703) / C50704;
    const double C48152 =
        (((C50604 * C50916) / C50614 - (yCD * C50917) / q) * C50703) / C50704;
    const double C50470 =
        (((C50606 * C50916) / C50614 - (zCD * C50917) / q) * C50703) / C50704;
    const double C45668 =
        (((C50599 * C50913) / C50614 - (xCD * C50914) / q) * C50703) / C50704;
    const double C48005 =
        (((C50604 * C50913) / C50614 - (yCD * C50914) / q) * C50703) / C50704;
    const double C50325 =
        (((C50606 * C50913) / C50614 - (zCD * C50914) / q) * C50703) / C50704;
    const double C45357 =
        (((C50599 * C50910) / C50614 - (xCD * C50911) / q) * C50703) / C50704;
    const double C47699 =
        (((C50604 * C50910) / C50614 - (yCD * C50911) / q) * C50703) / C50704;
    const double C50020 =
        (((C50606 * C50910) / C50614 - (zCD * C50911) / q) * C50703) / C50704;
    const double C44767 =
        (((C50599 * C50908) / C50614 - (xCD * C50909) / q) * C50703) / C50704;
    const double C47098 =
        (((C50604 * C50908) / C50614 - (yCD * C50909) / q) * C50703) / C50704;
    const double C49422 =
        (((C50606 * C50908) / C50614 - (zCD * C50909) / q) * C50703) / C50704;
    const double C43617 =
        (((C50599 * C50901) / C50614 - (xCD * C50902) / q) * C50703) / C50704;
    const double C45990 =
        (((C50604 * C50901) / C50614 - (yCD * C50902) / q) * C50703) / C50704;
    const double C48319 =
        (((C50606 * C50901) / C50614 - (zCD * C50902) / q) * C50703) / C50704;
    const double C31960 =
        (((C50599 * C50895) / C50614 - (xCD * C50896) / q) * C50703) / C50704;
    const double C36939 =
        (((C50604 * C50895) / C50614 - (yCD * C50896) / q) * C50703) / C50704;
    const double C41907 =
        (((C50606 * C50895) / C50614 - (zCD * C50896) / q) * C50703) / C50704;
    const double C50634 = C45822 * C43581;
    const double C45863 =
        C50847 - (C45822 * C50598) / p - (C45913 * C50676) / C43583;
    const double C45877 = -((C45822 * C50603) / p + (C45913 * C50682) / C43583);
    const double C45891 = -((C45822 * C50605) / p + (C45913 * C50683) / C43583);
    const double C50655 = C48152 * C43581;
    const double C48192 = -((C48152 * C50598) / p + (C48242 * C50676) / C43583);
    const double C48207 =
        C50847 - (C48152 * C50603) / p - (C48242 * C50682) / C43583;
    const double C48221 = -((C48152 * C50605) / p + (C48242 * C50683) / C43583);
    const double C50674 = C50470 * C43581;
    const double C50510 = -((C50470 * C50598) / p + (C50560 * C50676) / C43583);
    const double C50524 = -((C50470 * C50603) / p + (C50560 * C50682) / C43583);
    const double C50539 =
        C50847 - (C50470 * C50605) / p - (C50560 * C50683) / C43583;
    const double C50632 = C45668 * C43581;
    const double C45690 =
        C50845 - (C45668 * C50598) / p - (C45822 * C50676) / C43583;
    const double C45717 = -((C45668 * C50603) / p + (C45822 * C50682) / C43583);
    const double C45744 = -((C45668 * C50605) / p + (C45822 * C50683) / C43583);
    const double C50654 = C48005 * C43581;
    const double C48019 = -((C48005 * C50598) / p + (C48152 * C50676) / C43583);
    const double C48047 =
        C50845 - (C48005 * C50603) / p - (C48152 * C50682) / C43583;
    const double C48074 = -((C48005 * C50605) / p + (C48152 * C50683) / C43583);
    const double C50673 = C50325 * C43581;
    const double C50339 = -((C50325 * C50598) / p + (C50470 * C50676) / C43583);
    const double C50366 = -((C50325 * C50603) / p + (C50470 * C50682) / C43583);
    const double C50394 =
        C50845 - (C50325 * C50605) / p - (C50470 * C50683) / C43583;
    const double C50628 = C45357 * C43581;
    const double C45356 =
        C50843 - (C45357 * C50598) / p - (C45668 * C50676) / C43583;
    const double C45407 = -((C45357 * C50603) / p + (C45668 * C50682) / C43583);
    const double C45462 = -((C45357 * C50605) / p + (C45668 * C50683) / C43583);
    const double C50652 = C47699 * C43581;
    const double C47713 = -((C47699 * C50598) / p + (C48005 * C50676) / C43583);
    const double C47755 =
        C50843 - (C47699 * C50603) / p - (C48005 * C50682) / C43583;
    const double C47809 = -((C47699 * C50605) / p + (C48005 * C50683) / C43583);
    const double C50671 = C50020 * C43581;
    const double C50034 = -((C50020 * C50598) / p + (C50325 * C50676) / C43583);
    const double C50075 = -((C50020 * C50603) / p + (C50325 * C50682) / C43583);
    const double C50130 =
        C50843 - (C50020 * C50605) / p - (C50325 * C50683) / C43583;
    const double C50621 = C44767 * C43581;
    const double C44752 =
        C50836 - (C44767 * C50598) / p - (C45357 * C50676) / C43583;
    const double C44832 = -((C44767 * C50603) / p + (C45357 * C50682) / C43583);
    const double C44943 = -((C44767 * C50605) / p + (C45357 * C50683) / C43583);
    const double C50646 = C47098 * C43581;
    const double C47099 = -((C47098 * C50598) / p + (C47699 * C50676) / C43583);
    const double C47162 =
        C50836 - (C47098 * C50603) / p - (C47699 * C50682) / C43583;
    const double C47270 = -((C47098 * C50605) / p + (C47699 * C50683) / C43583);
    const double C50665 = C49422 * C43581;
    const double C49423 = -((C49422 * C50598) / p + (C50020 * C50676) / C43583);
    const double C49485 = -((C49422 * C50603) / p + (C50020 * C50682) / C43583);
    const double C49593 =
        C50836 - (C49422 * C50605) / p - (C50020 * C50683) / C43583;
    const double C50601 = C43617 * C43581;
    const double C43602 =
        C50821 - (C43617 * C50598) / p - (C44767 * C50676) / C43583;
    const double C43783 = -((C43617 * C50603) / p + (C44767 * C50682) / C43583);
    const double C43886 = -((C43617 * C50605) / p + (C44767 * C50683) / C43583);
    const double C50637 = C45990 * C43581;
    const double C45976 = -((C45990 * C50598) / p + (C47098 * C50676) / C43583);
    const double C46152 =
        C50821 - (C45990 * C50603) / p - (C47098 * C50682) / C43583;
    const double C46252 = -((C45990 * C50605) / p + (C47098 * C50683) / C43583);
    const double C50656 = C48319 * C43581;
    const double C48305 = -((C48319 * C50598) / p + (C49422 * C50676) / C43583);
    const double C48480 = -((C48319 * C50603) / p + (C49422 * C50682) / C43583);
    const double C48580 =
        C50821 - (C48319 * C50605) / p - (C49422 * C50683) / C43583;
    const double C27876 =
        C50790 - (C31960 * C50598) / p - (C43617 * C50676) / C43583;
    const double C29284 = -((C31960 * C50603) / p + (C43617 * C50682) / C43583);
    const double C30577 = -((C31960 * C50605) / p + (C43617 * C50683) / C43583);
    const double C32975 = -((C36939 * C50598) / p + (C45990 * C50676) / C43583);
    const double C34341 =
        C50790 - (C36939 * C50603) / p - (C45990 * C50682) / C43583;
    const double C35598 = -((C36939 * C50605) / p + (C45990 * C50683) / C43583);
    const double C37943 = -((C41907 * C50598) / p + (C48319 * C50676) / C43583);
    const double C39309 = -((C41907 * C50603) / p + (C48319 * C50682) / C43583);
    const double C40566 =
        C50790 - (C41907 * C50605) / p - (C48319 * C50683) / C43583;
    const double C50741 = C50634 / C43583;
    const double C50765 = C50655 / C43583;
    const double C50784 = C50674 / C43583;
    const double C50739 = C50632 / C43583;
    const double C50763 = C50654 / C43583;
    const double C50783 = C50673 / C43583;
    const double C50730 = C50628 / C43583;
    const double C50761 = C50652 / C43583;
    const double C50781 = C50671 / C43583;
    const double C50715 = C50621 / C43583;
    const double C50754 = C50646 / C43583;
    const double C50775 = C50665 / C43583;
    const double C50678 = C50601 / C43583;
    const double C43944 = -((C43886 * C50603) / p + (C44943 * C50682) / C43583);
    const double C50743 = C50637 / C43583;
    const double C46310 =
        C50862 - (C46252 * C50603) / p - (C47270 * C50682) / C43583;
    const double C50766 = C50656 / C43583;
    const double C48636 = -((C48580 * C50603) / p + (C49593 * C50682) / C43583);
    const double C28254 =
        C50793 - (C29284 * C50598) / p - (C43783 * C50676) / C43583;
    const double C28527 =
        C50797 - (C30577 * C50598) / p - (C43886 * C50676) / C43583;
    const double C29828 = -((C30577 * C50603) / p + (C43886 * C50682) / C43583);
    const double C33343 = -((C34341 * C50598) / p + (C46152 * C50676) / C43583);
    const double C33608 = -((C35598 * C50598) / p + (C46252 * C50676) / C43583);
    const double C34869 =
        C50797 - (C35598 * C50603) / p - (C46252 * C50682) / C43583;
    const double C38311 = -((C39309 * C50598) / p + (C48480 * C50676) / C43583);
    const double C38576 = -((C40566 * C50598) / p + (C48580 * C50676) / C43583);
    const double C39837 = -((C40566 * C50603) / p + (C48580 * C50682) / C43583);
    const double C50846 = C45668 - C50741;
    const double C50870 = C48005 - C50765;
    const double C50889 = C50325 - C50784;
    const double C50844 = C45357 - C50739;
    const double C50868 = C47699 - C50763;
    const double C50888 = C50020 - C50783;
    const double C50835 = C44767 - C50730;
    const double C50866 = C47098 - C50761;
    const double C50886 = C49422 - C50781;
    const double C50820 = C43617 - C50715;
    const double C50859 = C45990 - C50754;
    const double C50880 = C48319 - C50775;
    const double C50787 = C31960 - C50678;
    const double C50848 = C36939 - C50743;
    const double C50871 = C41907 - C50766;
    const double C29032 = (C43940 * C50596) / C50597 - (C29828 * C50598) / p -
                          (C43944 * C50676) / C43583;
    const double C34099 = -((C34869 * C50598) / p + (C46310 * C50676) / C43583);
    const double C39067 = -((C39837 * C50598) / p + (C48636 * C50676) / C43583);
    const double C50915 = C50846 / C50600;
    const double C50935 = C50870 / C50600;
    const double C50951 = C50889 / C50600;
    const double C50912 = C50844 / C50600;
    const double C50934 = C50868 / C50600;
    const double C50950 = C50888 / C50600;
    const double C50907 = C50835 / C50600;
    const double C50933 = C50866 / C50600;
    const double C50949 = C50886 / C50600;
    const double C50900 = C50820 / C50600;
    const double C50928 = C50859 / C50600;
    const double C50944 = C50880 / C50600;
    const double C50890 = C50787 / C50600;
    const double C50920 = C50848 / C50600;
    const double C50936 = C50871 / C50600;
    const double C45759 = (C45859 * C50596) / C50597 - (C45690 * C50598) / p -
                          (C45863 * C50676) / C43583 + C50915;
    const double C45773 =
        C50915 - ((C45717 * C50603) / p + (C45877 * C50682) / C43583);
    const double C45787 =
        C50915 - ((C45744 * C50605) / p + (C45891 * C50683) / C43583);
    const double C48088 =
        C50935 - ((C48019 * C50598) / p + (C48192 * C50676) / C43583);
    const double C48103 = (C48202 * C50596) / C50597 - (C48047 * C50603) / p -
                          (C48207 * C50682) / C43583 + C50935;
    const double C48118 =
        C50935 - ((C48074 * C50605) / p + (C48221 * C50683) / C43583);
    const double C50408 =
        C50951 - ((C50339 * C50598) / p + (C50510 * C50676) / C43583);
    const double C50422 =
        C50951 - ((C50366 * C50603) / p + (C50524 * C50682) / C43583);
    const double C50436 = (C50533 * C50596) / C50597 - (C50394 * C50605) / p -
                          (C50539 * C50683) / C43583 + C50951;
    const double C45393 = (C45686 * C50596) / C50597 - (C45356 * C50598) / p -
                          (C45690 * C50676) / C43583 + C50912;
    const double C45434 =
        C50912 - ((C45407 * C50603) / p + (C45717 * C50682) / C43583);
    const double C45490 =
        C50912 - ((C45462 * C50605) / p + (C45744 * C50683) / C43583);
    const double C47727 =
        C50934 - ((C47713 * C50598) / p + (C48019 * C50676) / C43583);
    const double C47769 = (C48042 * C50596) / C50597 - (C47755 * C50603) / p -
                          (C48047 * C50682) / C43583 + C50934;
    const double C47823 =
        C50934 - ((C47809 * C50605) / p + (C48074 * C50683) / C43583);
    const double C50048 =
        C50950 - ((C50034 * C50598) / p + (C50339 * C50676) / C43583);
    const double C50089 =
        C50950 - ((C50075 * C50603) / p + (C50366 * C50682) / C43583);
    const double C50144 = (C50388 * C50596) / C50597 - (C50130 * C50605) / p -
                          (C50394 * C50683) / C43583 + C50950;
    const double C44751 = (C45352 * C50596) / C50597 - (C44752 * C50598) / p -
                          (C45356 * C50676) / C43583 + C50907;
    const double C44818 =
        C50907 - ((C44832 * C50603) / p + (C45407 * C50682) / C43583);
    const double C44929 =
        C50907 - ((C44943 * C50605) / p + (C45462 * C50683) / C43583);
    const double C47113 =
        C50933 - ((C47099 * C50598) / p + (C47713 * C50676) / C43583);
    const double C47176 = (C47750 * C50596) / C50597 - (C47162 * C50603) / p -
                          (C47755 * C50682) / C43583 + C50933;
    const double C47284 =
        C50933 - ((C47270 * C50605) / p + (C47809 * C50683) / C43583);
    const double C49437 =
        C50949 - ((C49423 * C50598) / p + (C50034 * C50676) / C43583);
    const double C49499 =
        C50949 - ((C49485 * C50603) / p + (C50075 * C50682) / C43583);
    const double C49607 = (C50124 * C50596) / C50597 - (C49593 * C50605) / p -
                          (C50130 * C50683) / C43583 + C50949;
    const double C43587 = (C44763 * C50596) / C50597 - (C43602 * C50598) / p -
                          (C44752 * C50676) / C43583 + C50900;
    const double C43740 =
        C50900 - ((C43783 * C50603) / p + (C44832 * C50682) / C43583);
    const double C43843 =
        C50900 - ((C43886 * C50605) / p + (C44943 * C50683) / C43583);
    const double C45961 =
        C50928 - ((C45976 * C50598) / p + (C47099 * C50676) / C43583);
    const double C46109 = (C47157 * C50596) / C50597 - (C46152 * C50603) / p -
                          (C47162 * C50682) / C43583 + C50928;
    const double C46210 =
        C50928 - ((C46252 * C50605) / p + (C47270 * C50683) / C43583);
    const double C48290 =
        C50944 - ((C48305 * C50598) / p + (C49423 * C50676) / C43583);
    const double C48438 =
        C50944 - ((C48480 * C50603) / p + (C49485 * C50682) / C43583);
    const double C48538 =
        C50862 - (C48580 * C50605) / p - (C49593 * C50683) / C43583 + C50944;
    const double C27829 = (C43613 * C50596) / C50597 - (C27876 * C50598) / p -
                          (C43602 * C50676) / C43583 + C50890;
    const double C29164 =
        C50890 - ((C29284 * C50603) / p + (C43783 * C50682) / C43583);
    const double C30372 =
        C50890 - ((C30577 * C50605) / p + (C43886 * C50683) / C43583);
    const double C32931 =
        C50920 - ((C32975 * C50598) / p + (C45976 * C50676) / C43583);
    const double C34227 =
        C50793 - (C34341 * C50603) / p - (C46152 * C50682) / C43583 + C50920;
    const double C35399 =
        C50920 - ((C35598 * C50605) / p + (C46252 * C50683) / C43583);
    const double C37899 =
        C50936 - ((C37943 * C50598) / p + (C48305 * C50676) / C43583);
    const double C39195 =
        C50936 - ((C39309 * C50603) / p + (C48480 * C50682) / C43583);
    const double C40367 =
        C50797 - (C40566 * C50605) / p - (C48580 * C50683) / C43583 + C50936;
    const double C45531 = (C45755 * C50596) / C50597 - (C45393 * C50598) / p -
                          (C45759 * C50676) / C43583 +
                          (C45356 - (C45690 * C43581) / C43583) / p;
    const double C45546 = (C45407 - (C45717 * C43581) / C43583) / p -
                          ((C45434 * C50603) / p + (C45773 * C50682) / C43583);
    const double C50630 = C45490 * C43581;
    const double C45586 = -((C45490 * C50603) / p + (C45787 * C50682) / C43583);
    const double C45614 = (C45462 - (C45744 * C43581) / C43583) / p -
                          ((C45490 * C50605) / p + (C45787 * C50683) / C43583);
    const double C47863 = (C47713 - (C48019 * C43581) / C43583) / p -
                          ((C47727 * C50598) / p + (C48088 * C50676) / C43583);
    const double C47877 = (C48098 * C50596) / C50597 - (C47769 * C50603) / p -
                          (C48103 * C50682) / C43583 +
                          (C47755 - (C48047 * C43581) / C43583) / p;
    const double C50653 = C47823 * C43581;
    const double C47918 =
        C50869 - (C47823 * C50603) / p - (C48118 * C50682) / C43583;
    const double C47945 = (C47809 - (C48074 * C43581) / C43583) / p -
                          ((C47823 * C50605) / p + (C48118 * C50683) / C43583);
    const double C50184 = (C50034 - (C50339 * C43581) / C43583) / p -
                          ((C50048 * C50598) / p + (C50408 * C50676) / C43583);
    const double C50198 = (C50075 - (C50366 * C43581) / C43583) / p -
                          ((C50089 * C50603) / p + (C50422 * C50682) / C43583);
    const double C50672 = C50144 * C43581;
    const double C50238 = -((C50144 * C50603) / p + (C50436 * C50682) / C43583);
    const double C50265 = C50869 - (C50144 * C50605) / p -
                          (C50436 * C50683) / C43583 +
                          (C50130 - (C50394 * C43581) / C43583) / p;
    const double C44803 = (C45389 * C50596) / C50597 - (C44751 * C50598) / p -
                          (C45393 * C50676) / C43583 +
                          (C44752 - (C45356 * C43581) / C43583) / p;
    const double C50623 = C44818 * C43581;
    const double C44873 = (C44832 - (C45407 * C43581) / C43583) / p -
                          ((C44818 * C50603) / p + (C45434 * C50682) / C43583);
    const double C44901 =
        C50837 - (C44818 * C50598) / p - (C45434 * C50676) / C43583;
    const double C50624 = C44929 * C43581;
    const double C44984 =
        C50838 - (C44929 * C50598) / p - (C45490 * C50676) / C43583;
    const double C44999 = (C44943 - (C45462 * C43581) / C43583) / p -
                          ((C44929 * C50605) / p + (C45490 * C50683) / C43583);
    const double C45078 = -((C44929 * C50603) / p + (C45490 * C50682) / C43583);
    const double C47147 = (C47099 - (C47713 * C43581) / C43583) / p -
                          ((C47113 * C50598) / p + (C47727 * C50676) / C43583);
    const double C50647 = C47176 * C43581;
    const double C47229 = C50837 - (C47176 * C50603) / p -
                          (C47769 * C50682) / C43583 +
                          (C47162 - (C47755 * C43581) / C43583) / p;
    const double C47243 = -((C47176 * C50598) / p + (C47769 * C50676) / C43583);
    const double C50648 = C47284 * C43581;
    const double C47324 = -((C47284 * C50598) / p + (C47823 * C50676) / C43583);
    const double C47351 = (C47270 - (C47809 * C43581) / C43583) / p -
                          ((C47284 * C50605) / p + (C47823 * C50683) / C43583);
    const double C47419 =
        C50838 - (C47284 * C50603) / p - (C47823 * C50682) / C43583;
    const double C49471 = (C49423 - (C50034 * C43581) / C43583) / p -
                          ((C49437 * C50598) / p + (C50048 * C50676) / C43583);
    const double C50666 = C49499 * C43581;
    const double C49552 = (C49485 - (C50075 * C43581) / C43583) / p -
                          ((C49499 * C50603) / p + (C50089 * C50682) / C43583);
    const double C49566 = -((C49499 * C50598) / p + (C50089 * C50676) / C43583);
    const double C50667 = C49607 * C43581;
    const double C49647 = -((C49607 * C50598) / p + (C50144 * C50676) / C43583);
    const double C49674 = C50838 - (C49607 * C50605) / p -
                          (C50144 * C50683) / C43583 +
                          (C49593 - (C50130 * C43581) / C43583) / p;
    const double C49740 = -((C49607 * C50603) / p + (C50144 * C50682) / C43583);
    const double C43586 = C50819 - (C43587 * C50598) / p -
                          (C44751 * C50676) / C43583 +
                          (C43602 - (C44752 * C43581) / C43583) / p;
    const double C43827 = -((C43587 * C50605) / p + (C44751 * C50683) / C43583);
    const double C50607 = C43740 * C43581;
    const double C43739 =
        C50823 - (C43740 * C50598) / p - (C44818 * C50676) / C43583;
    const double C43799 = (C43783 - (C44832 * C43581) / C43583) / p -
                          ((C43740 * C50603) / p + (C44818 * C50682) / C43583);
    const double C44012 = -((C43740 * C50605) / p + (C44818 * C50683) / C43583);
    const double C50609 = C43843 * C43581;
    const double C43842 =
        C50826 - (C43843 * C50598) / p - (C44929 * C50676) / C43583;
    const double C43916 = (C43886 - (C44943 * C43581) / C43583) / p -
                          ((C43843 * C50605) / p + (C44929 * C50683) / C43583);
    const double C44106 = -((C43843 * C50603) / p + (C44929 * C50682) / C43583);
    const double C45962 = (C45976 - (C47099 * C43581) / C43583) / p -
                          ((C45961 * C50598) / p + (C47113 * C50676) / C43583);
    const double C46196 = -((C45961 * C50605) / p + (C47113 * C50683) / C43583);
    const double C50639 = C46109 * C43581;
    const double C46110 = -((C46109 * C50598) / p + (C47176 * C50676) / C43583);
    const double C46166 = C50823 - (C46109 * C50603) / p -
                          (C47176 * C50682) / C43583 +
                          (C46152 - (C47162 * C43581) / C43583) / p;
    const double C46376 = -((C46109 * C50605) / p + (C47176 * C50683) / C43583);
    const double C50641 = C46210 * C43581;
    const double C46211 = -((C46210 * C50598) / p + (C47284 * C50676) / C43583);
    const double C46281 = (C46252 - (C47270 * C43581) / C43583) / p -
                          ((C46210 * C50605) / p + (C47284 * C50683) / C43583);
    const double C46469 =
        C50826 - (C46210 * C50603) / p - (C47284 * C50682) / C43583;
    const double C48291 = (C48305 - (C49423 * C43581) / C43583) / p -
                          ((C48290 * C50598) / p + (C49437 * C50676) / C43583);
    const double C48524 =
        C50819 - (C48290 * C50605) / p - (C49437 * C50683) / C43583;
    const double C50658 = C48438 * C43581;
    const double C48439 = -((C48438 * C50598) / p + (C49499 * C50676) / C43583);
    const double C48494 = (C48480 - (C49485 * C43581) / C43583) / p -
                          ((C48438 * C50603) / p + (C49499 * C50682) / C43583);
    const double C48702 =
        C50823 - (C48438 * C50605) / p - (C49499 * C50683) / C43583;
    const double C50660 = C48538 * C43581;
    const double C48539 = -((C48538 * C50598) / p + (C49607 * C50676) / C43583);
    const double C48608 = C50826 - (C48538 * C50605) / p -
                          (C49607 * C50683) / C43583 +
                          (C48580 - (C49593 * C43581) / C43583) / p;
    const double C48795 = -((C48538 * C50603) / p + (C49607 * C50682) / C43583);
    const double C27812 = C50786 - (C27829 * C50598) / p -
                          (C43587 * C50676) / C43583 +
                          (C27876 - (C43602 * C43581) / C43583) / p;
    const double C28015 = -((C27829 * C50603) / p + (C43587 * C50682) / C43583);
    const double C28146 = -((C27829 * C50605) / p + (C43587 * C50683) / C43583);
    const double C28237 =
        C50792 - (C29164 * C50598) / p - (C43740 * C50676) / C43583;
    const double C29285 = (C29284 - (C43783 * C43581) / C43583) / p -
                          ((C29164 * C50603) / p + (C43740 * C50682) / C43583);
    const double C29373 = -((C29164 * C50605) / p + (C43740 * C50683) / C43583);
    const double C28510 =
        C50796 - (C30372 * C50598) / p - (C43843 * C50676) / C43583;
    const double C29812 = -((C30372 * C50603) / p + (C43843 * C50682) / C43583);
    const double C30578 = (C30577 - (C43886 * C43581) / C43583) / p -
                          ((C30372 * C50605) / p + (C43843 * C50683) / C43583);
    const double C32915 = (C32975 - (C45976 * C43581) / C43583) / p -
                          ((C32931 * C50598) / p + (C45961 * C50676) / C43583);
    const double C33108 =
        C50786 - (C32931 * C50603) / p - (C45961 * C50682) / C43583;
    const double C33239 = -((C32931 * C50605) / p + (C45961 * C50683) / C43583);
    const double C33327 = -((C34227 * C50598) / p + (C46109 * C50676) / C43583);
    const double C34342 = C50792 - (C34227 * C50603) / p -
                          (C46109 * C50682) / C43583 +
                          (C34341 - (C46152 * C43581) / C43583) / p;
    const double C34430 = -((C34227 * C50605) / p + (C46109 * C50683) / C43583);
    const double C33592 = -((C35399 * C50598) / p + (C46210 * C50676) / C43583);
    const double C34853 =
        C50796 - (C35399 * C50603) / p - (C46210 * C50682) / C43583;
    const double C35599 = (C35598 - (C46252 * C43581) / C43583) / p -
                          ((C35399 * C50605) / p + (C46210 * C50683) / C43583);
    const double C37883 = (C37943 - (C48305 * C43581) / C43583) / p -
                          ((C37899 * C50598) / p + (C48290 * C50676) / C43583);
    const double C38076 = -((C37899 * C50603) / p + (C48290 * C50682) / C43583);
    const double C38207 =
        C50786 - (C37899 * C50605) / p - (C48290 * C50683) / C43583;
    const double C38295 = -((C39195 * C50598) / p + (C48438 * C50676) / C43583);
    const double C39310 = (C39309 - (C48480 * C43581) / C43583) / p -
                          ((C39195 * C50603) / p + (C48438 * C50682) / C43583);
    const double C39398 =
        C50792 - (C39195 * C50605) / p - (C48438 * C50683) / C43583;
    const double C38560 = -((C40367 * C50598) / p + (C48538 * C50676) / C43583);
    const double C39821 = -((C40367 * C50603) / p + (C48538 * C50682) / C43583);
    const double C40567 = C50796 - (C40367 * C50605) / p -
                          (C48538 * C50683) / C43583 +
                          (C40566 - (C48580 * C43581) / C43583) / p;
    const double C50736 = C50630 / C43583;
    const double C50762 = C50653 / C43583;
    const double C50782 = C50672 / C43583;
    const double C50625 = C44803 * C43581;
    const double C45132 = C50839 - (C44803 * C50598) / p -
                          (C45531 * C50676) / C43583 +
                          (3 * (C44751 - (C45393 * C43581) / C43583)) / C50600;
    const double C45187 = -((C44803 * C50603) / p + (C45531 * C50682) / C43583);
    const double C45231 = -((C44803 * C50605) / p + (C45531 * C50683) / C43583);
    const double C50720 = C50623 / C43583;
    const double C50626 = C44873 * C43581;
    const double C45173 =
        C50840 - (C44873 * C50598) / p - (C45546 * C50676) / C43583;
    const double C45202 = (3 * (C44818 - (C45434 * C43581) / C43583)) / C50600 -
                          ((C44873 * C50603) / p + (C45546 * C50682) / C43583);
    const double C45301 = -((C44873 * C50605) / p + (C45546 * C50683) / C43583);
    const double C50722 = C50624 / C43583;
    const double C50627 = C44999 * C43581;
    const double C45246 =
        C50842 - (C44999 * C50598) / p - (C45614 * C50676) / C43583;
    const double C45315 = -((C44999 * C50603) / p + (C45614 * C50682) / C43583);
    const double C50649 = C47147 * C43581;
    const double C47472 = (3 * (C47113 - (C47727 * C43581) / C43583)) / C50600 -
                          ((C47147 * C50598) / p + (C47863 * C50676) / C43583);
    const double C47527 =
        C50839 - (C47147 * C50603) / p - (C47863 * C50682) / C43583;
    const double C47569 = -((C47147 * C50605) / p + (C47863 * C50683) / C43583);
    const double C50755 = C50647 / C43583;
    const double C50650 = C47229 * C43581;
    const double C47512 = -((C47229 * C50598) / p + (C47877 * C50676) / C43583);
    const double C47541 = C50840 - (C47229 * C50603) / p -
                          (C47877 * C50682) / C43583 +
                          (3 * (C47176 - (C47769 * C43581) / C43583)) / C50600;
    const double C47637 = -((C47229 * C50605) / p + (C47877 * C50683) / C43583);
    const double C50756 = C50648 / C43583;
    const double C50651 = C47351 * C43581;
    const double C47583 = -((C47351 * C50598) / p + (C47945 * C50676) / C43583);
    const double C47652 =
        C50842 - (C47351 * C50603) / p - (C47945 * C50682) / C43583;
    const double C50668 = C49471 * C43581;
    const double C49793 = (3 * (C49437 - (C50048 * C43581) / C43583)) / C50600 -
                          ((C49471 * C50598) / p + (C50184 * C50676) / C43583);
    const double C49847 = -((C49471 * C50603) / p + (C50184 * C50682) / C43583);
    const double C49890 =
        C50839 - (C49471 * C50605) / p - (C50184 * C50683) / C43583;
    const double C50776 = C50666 / C43583;
    const double C50669 = C49552 * C43581;
    const double C49833 = -((C49552 * C50598) / p + (C50198 * C50676) / C43583);
    const double C49861 = (3 * (C49499 - (C50089 * C43581) / C43583)) / C50600 -
                          ((C49552 * C50603) / p + (C50198 * C50682) / C43583);
    const double C49959 =
        C50840 - (C49552 * C50605) / p - (C50198 * C50683) / C43583;
    const double C50777 = C50667 / C43583;
    const double C50670 = C49674 * C43581;
    const double C49904 = -((C49674 * C50598) / p + (C50265 * C50676) / C43583);
    const double C49973 = -((C49674 * C50603) / p + (C50265 * C50682) / C43583);
    const double C50602 = C43586 * C43581;
    const double C43632 = C50822 - (C43586 * C50598) / p -
                          (C44803 * C50676) / C43583 +
                          (3 * (C43587 - (C44751 * C43581) / C43583)) / C50600;
    const double C43768 = -((C43586 * C50603) / p + (C44803 * C50682) / C43583);
    const double C43871 = -((C43586 * C50605) / p + (C44803 * C50683) / C43583);
    const double C50684 = C50607 / C43583;
    const double C50608 = C43799 * C43581;
    const double C43798 =
        C50824 - (C43799 * C50598) / p - (C44873 * C50676) / C43583;
    const double C44148 = -((C43799 * C50605) / p + (C44873 * C50683) / C43583);
    const double C50688 = C50609 / C43583;
    const double C50610 = C43916 * C43581;
    const double C43915 =
        C50828 - (C43916 * C50598) / p - (C44999 * C50676) / C43583;
    const double C44175 = -((C43916 * C50603) / p + (C44999 * C50682) / C43583);
    const double C50638 = C45962 * C43581;
    const double C46004 = (3 * (C45961 - (C47113 * C43581) / C43583)) / C50600 -
                          ((C45962 * C50598) / p + (C47147 * C50676) / C43583);
    const double C46138 =
        C50822 - (C45962 * C50603) / p - (C47147 * C50682) / C43583;
    const double C46238 = -((C45962 * C50605) / p + (C47147 * C50683) / C43583);
    const double C50745 = C50639 / C43583;
    const double C50640 = C46166 * C43581;
    const double C46167 = -((C46166 * C50598) / p + (C47229 * C50676) / C43583);
    const double C46510 = -((C46166 * C50605) / p + (C47229 * C50683) / C43583);
    const double C50747 = C50641 / C43583;
    const double C50642 = C46281 * C43581;
    const double C46282 = -((C46281 * C50598) / p + (C47351 * C50676) / C43583);
    const double C46537 =
        C50828 - (C46281 * C50603) / p - (C47351 * C50682) / C43583;
    const double C50657 = C48291 * C43581;
    const double C48333 = (3 * (C48290 - (C49437 * C43581) / C43583)) / C50600 -
                          ((C48291 * C50598) / p + (C49471 * C50676) / C43583);
    const double C48466 = -((C48291 * C50603) / p + (C49471 * C50682) / C43583);
    const double C48566 =
        C50822 - (C48291 * C50605) / p - (C49471 * C50683) / C43583;
    const double C50768 = C50658 / C43583;
    const double C50659 = C48494 * C43581;
    const double C48495 = -((C48494 * C50598) / p + (C49552 * C50676) / C43583);
    const double C48836 =
        C50824 - (C48494 * C50605) / p - (C49552 * C50683) / C43583;
    const double C50770 = C50660 / C43583;
    const double C50661 = C48608 * C43581;
    const double C48609 = -((C48608 * C50598) / p + (C49674 * C50676) / C43583);
    const double C48863 = -((C48608 * C50603) / p + (C49674 * C50682) / C43583);
    const double C27794 = C50785 - (C27812 * C50598) / p -
                          (C43586 * C50676) / C43583 +
                          (3 * (C27829 - (C43587 * C43581) / C43583)) / C50600;
    const double C28000 = -((C27812 * C50603) / p + (C43586 * C50682) / C43583);
    const double C28131 = -((C27812 * C50605) / p + (C43586 * C50683) / C43583);
    const double C28433 = -((C28146 * C50603) / p + (C43827 * C50682) / C43583);
    const double C29269 =
        C50799 - (C29285 * C50598) / p - (C43799 * C50676) / C43583;
    const double C29643 = -((C29285 * C50605) / p + (C43799 * C50683) / C43583);
    const double C29358 = (C44008 * C50596) / C50597 - (C29373 * C50598) / p -
                          (C44012 * C50676) / C43583;
    const double C30477 =
        C50802 - (C29812 * C50598) / p - (C44106 * C50676) / C43583;
    const double C30562 =
        C50803 - (C30578 * C50598) / p - (C43916 * C50676) / C43583;
    const double C30724 = -((C30578 * C50603) / p + (C43916 * C50682) / C43583);
    const double C32899 = (3 * (C32931 - (C45961 * C43581) / C43583)) / C50600 -
                          ((C32915 * C50598) / p + (C45962 * C50676) / C43583);
    const double C33093 =
        C50785 - (C32915 * C50603) / p - (C45962 * C50682) / C43583;
    const double C33224 = -((C32915 * C50605) / p + (C45962 * C50683) / C43583);
    const double C33518 = (C46191 * C50596) / C50597 - (C33239 * C50603) / p -
                          (C46196 * C50682) / C43583;
    const double C34326 = -((C34342 * C50598) / p + (C46166 * C50676) / C43583);
    const double C34692 = -((C34342 * C50605) / p + (C46166 * C50683) / C43583);
    const double C34415 = -((C34430 * C50598) / p + (C46376 * C50676) / C43583);
    const double C35498 = -((C34853 * C50598) / p + (C46469 * C50676) / C43583);
    const double C35583 = -((C35599 * C50598) / p + (C46281 * C50676) / C43583);
    const double C35741 =
        C50803 - (C35599 * C50603) / p - (C46281 * C50682) / C43583;
    const double C37867 = (3 * (C37899 - (C48290 * C43581) / C43583)) / C50600 -
                          ((C37883 * C50598) / p + (C48291 * C50676) / C43583);
    const double C38061 = -((C37883 * C50603) / p + (C48291 * C50682) / C43583);
    const double C38192 =
        C50785 - (C37883 * C50605) / p - (C48291 * C50683) / C43583;
    const double C38486 = -((C38207 * C50603) / p + (C48524 * C50682) / C43583);
    const double C39294 = -((C39310 * C50598) / p + (C48494 * C50676) / C43583);
    const double C39660 =
        C50799 - (C39310 * C50605) / p - (C48494 * C50683) / C43583;
    const double C39383 = -((C39398 * C50598) / p + (C48702 * C50676) / C43583);
    const double C40466 = -((C39821 * C50598) / p + (C48795 * C50676) / C43583);
    const double C40551 = -((C40567 * C50598) / p + (C48608 * C50676) / C43583);
    const double C40709 = -((C40567 * C50603) / p + (C48608 * C50682) / C43583);
    const double C50841 = C44929 - C50736;
    const double C50867 = C47284 - C50762;
    const double C50887 = C49607 - C50782;
    const double C50725 = C50625 / C43583;
    const double C50825 = C43740 - C50720;
    const double C50726 = C50626 / C43583;
    const double C50827 = C43843 - C50722;
    const double C50728 = C50627 / C43583;
    const double C50758 = C50649 / C43583;
    const double C50860 = C46109 - C50755;
    const double C50759 = C50650 / C43583;
    const double C50861 = C46210 - C50756;
    const double C50760 = C50651 / C43583;
    const double C50778 = C50668 / C43583;
    const double C50881 = C48438 - C50776;
    const double C50779 = C50669 / C43583;
    const double C50882 = C48538 - C50777;
    const double C50780 = C50670 / C43583;
    const double C50680 = C50602 / C43583;
    const double C50611 = C43632 * C43581;
    const double C44399 = -((C43632 * C50603) / p + (C45132 * C50682) / C43583);
    const double C44413 = -((C43632 * C50605) / p + (C45132 * C50683) / C43583);
    const double C50791 = C29164 - C50684;
    const double C50687 = C50608 / C43583;
    const double C50795 = C30372 - C50688;
    const double C50691 = C50610 / C43583;
    const double C50744 = C50638 / C43583;
    const double C50643 = C46004 * C43581;
    const double C46756 =
        C50829 - (C46004 * C50603) / p - (C47472 * C50682) / C43583;
    const double C46771 = -((C46004 * C50605) / p + (C47472 * C50683) / C43583);
    const double C50850 = C34227 - C50745;
    const double C50746 = C50640 / C43583;
    const double C50852 = C35399 - C50747;
    const double C50748 = C50642 / C43583;
    const double C50767 = C50657 / C43583;
    const double C50662 = C48333 * C43581;
    const double C49081 = -((C48333 * C50603) / p + (C49793 * C50682) / C43583);
    const double C49095 =
        C50829 - (C48333 * C50605) / p - (C49793 * C50683) / C43583;
    const double C50873 = C39195 - C50768;
    const double C50769 = C50659 / C43583;
    const double C50875 = C40367 - C50770;
    const double C50771 = C50661 / C43583;
    const double C27985 = -((C27794 * C50603) / p + (C43632 * C50682) / C43583);
    const double C28116 = -((C27794 * C50605) / p + (C43632 * C50683) / C43583);
    const double C28852 = -((C28131 * C50603) / p + (C43871 * C50682) / C43583);
    const double C30062 =
        C50801 - (C29643 * C50598) / p - (C44148 * C50676) / C43583;
    const double C31126 =
        C50805 - (C30724 * C50598) / p - (C44175 * C50676) / C43583;
    const double C33078 =
        C50788 - (C32899 * C50603) / p - (C46004 * C50682) / C43583;
    const double C33209 = -((C32899 * C50605) / p + (C46004 * C50683) / C43583);
    const double C33925 =
        C50854 - (C33224 * C50603) / p - (C46238 * C50682) / C43583;
    const double C35099 = -((C34692 * C50598) / p + (C46510 * C50676) / C43583);
    const double C36131 = -((C35741 * C50598) / p + (C46537 * C50676) / C43583);
    const double C38046 = -((C37867 * C50603) / p + (C48333 * C50682) / C43583);
    const double C38177 =
        C50788 - (C37867 * C50605) / p - (C48333 * C50683) / C43583;
    const double C38893 = -((C38192 * C50603) / p + (C48566 * C50682) / C43583);
    const double C40067 = -((C39660 * C50598) / p + (C48836 * C50676) / C43583);
    const double C41099 = -((C40709 * C50598) / p + (C48863 * C50676) / C43583);
    const double C45217 =
        C50841 / C50600 - ((C45078 * C50603) / p + (C45586 * C50682) / C43583);
    const double C45261 = (3 * C50841) / C50600 -
                          ((C44999 * C50605) / p + (C45614 * C50683) / C43583);
    const double C47555 = (C47913 * C50596) / C50597 - (C47419 * C50603) / p -
                          (C47918 * C50682) / C43583 + C50867 / C50600;
    const double C47597 = (3 * C50867) / C50600 -
                          ((C47351 * C50605) / p + (C47945 * C50683) / C43583);
    const double C49875 =
        C50887 / C50600 - ((C49740 * C50603) / p + (C50238 * C50682) / C43583);
    const double C49918 = C50842 - (C49674 * C50605) / p -
                          (C50265 * C50683) / C43583 + (3 * C50887) / C50600;
    const double C50830 = C43586 - C50725;
    const double C43813 = (C44897 * C50596) / C50597 - (C43739 * C50598) / p -
                          (C44901 * C50676) / C43583 + C50825 / C50600;
    const double C44053 = (3 * C50825) / C50600 -
                          ((C43799 * C50603) / p + (C44873 * C50682) / C43583);
    const double C50831 = C43799 - C50726;
    const double C50903 = C50827 / C50600;
    const double C44297 = (3 * C50827) / C50600 -
                          ((C43916 * C50605) / p + (C44999 * C50683) / C43583);
    const double C50833 = C43916 - C50728;
    const double C50863 = C45962 - C50758;
    const double C46181 =
        C50860 / C50600 - ((C46110 * C50598) / p + (C47243 * C50676) / C43583);
    const double C46416 = C50824 - (C46166 * C50603) / p -
                          (C47229 * C50682) / C43583 + (3 * C50860) / C50600;
    const double C50864 = C46166 - C50759;
    const double C50929 = C50861 / C50600;
    const double C46655 = (3 * C50861) / C50600 -
                          ((C46281 * C50605) / p + (C47351 * C50683) / C43583);
    const double C50865 = C46281 - C50760;
    const double C50883 = C48291 - C50778;
    const double C48510 =
        C50881 / C50600 - ((C48439 * C50598) / p + (C49566 * C50676) / C43583);
    const double C48742 = (3 * C50881) / C50600 -
                          ((C48494 * C50603) / p + (C49552 * C50682) / C43583);
    const double C50884 = C48494 - C50779;
    const double C50945 = C50882 / C50600;
    const double C48981 = C50828 - (C48608 * C50605) / p -
                          (C49674 * C50683) / C43583 + (3 * C50882) / C50600;
    const double C50885 = C48608 - C50780;
    const double C50789 = C27812 - C50680;
    const double C50700 = C50611 / C43583;
    const double C28205 = (C43735 * C50596) / C50597 - (C28237 * C50598) / p -
                          (C43739 * C50676) / C43583 + C50791 / C50600;
    const double C29417 = (3 * C50791) / C50600 -
                          ((C29285 * C50603) / p + (C43799 * C50682) / C43583);
    const double C50794 = C29285 - C50687;
    const double C50893 = C50795 / C50600;
    const double C30754 = (3 * C50795) / C50600 -
                          ((C30578 * C50605) / p + (C43916 * C50683) / C43583);
    const double C50798 = C30578 - C50691;
    const double C50849 = C32915 - C50744;
    const double C50750 = C50643 / C43583;
    const double C33297 =
        C50850 / C50600 - ((C33327 * C50598) / p + (C46110 * C50676) / C43583);
    const double C34473 = C50799 - (C34342 * C50603) / p -
                          (C46166 * C50682) / C43583 + (3 * C50850) / C50600;
    const double C50851 = C34342 - C50746;
    const double C50923 = C50852 / C50600;
    const double C35770 = (3 * C50852) / C50600 -
                          ((C35599 * C50605) / p + (C46281 * C50683) / C43583);
    const double C50853 = C35599 - C50748;
    const double C50872 = C37883 - C50767;
    const double C50772 = C50662 / C43583;
    const double C38265 =
        C50873 / C50600 - ((C38295 * C50598) / p + (C48439 * C50676) / C43583);
    const double C39441 = (3 * C50873) / C50600 -
                          ((C39310 * C50603) / p + (C48494 * C50682) / C43583);
    const double C50874 = C39310 - C50769;
    const double C50939 = C50875 / C50600;
    const double C40738 = C50803 - (C40567 * C50605) / p -
                          (C48608 * C50683) / C43583 + (3 * C50875) / C50600;
    const double C50876 = C40567 - C50771;
    const double C32048 = -((C28116 * C50603) / p + (C44413 * C50682) / C43583);
    const double C37027 =
        C50856 - (C33209 * C50603) / p - (C46771 * C50682) / C43583;
    const double C41995 = -((C38177 * C50603) / p + (C49095 * C50682) / C43583);
    const double C50905 = C50830 / C50600;
    const double C44352 = C50829 - (C43632 * C50598) / p -
                          (C45132 * C50676) / C43583 + (2 * C50830) / p;
    const double C50619 = C44053 * C43581;
    const double C44470 =
        C50832 - (C44053 * C50598) / p - (C45202 * C50676) / C43583;
    const double C44585 = -((C44053 * C50605) / p + (C45202 * C50683) / C43583);
    const double C50904 = C50831 / C50600;
    const double C44570 =
        (2 * C50831) / p - ((C44053 * C50603) / p + (C45202 * C50682) / C43583);
    const double C43900 = (C44980 * C50596) / C50597 - (C43842 * C50598) / p -
                          (C44984 * C50676) / C43583 + C50903;
    const double C44121 =
        C50903 - ((C44106 * C50603) / p + (C45078 * C50682) / C43583);
    const double C50620 = C44297 * C43581;
    const double C44555 =
        C50834 - (C44297 * C50598) / p - (C45261 * C50676) / C43583;
    const double C44681 = -((C44297 * C50603) / p + (C45261 * C50682) / C43583);
    const double C50906 = C50833 / C50600;
    const double C44710 =
        (2 * C50833) / p - ((C44297 * C50605) / p + (C45261 * C50683) / C43583);
    const double C50931 = C50863 / C50600;
    const double C46708 =
        (2 * C50863) / p - ((C46004 * C50598) / p + (C47472 * C50676) / C43583);
    const double C50644 = C46416 * C43581;
    const double C46826 = -((C46416 * C50598) / p + (C47541 * C50676) / C43583);
    const double C46937 = -((C46416 * C50605) / p + (C47541 * C50683) / C43583);
    const double C50930 = C50864 / C50600;
    const double C46923 = C50832 - (C46416 * C50603) / p -
                          (C47541 * C50682) / C43583 + (2 * C50864) / p;
    const double C46267 =
        C50929 - ((C46211 * C50598) / p + (C47324 * C50676) / C43583);
    const double C46483 = (C47414 * C50596) / C50597 - (C46469 * C50603) / p -
                          (C47419 * C50682) / C43583 + C50929;
    const double C50645 = C46655 * C43581;
    const double C46909 = -((C46655 * C50598) / p + (C47597 * C50676) / C43583);
    const double C47031 =
        C50834 - (C46655 * C50603) / p - (C47597 * C50682) / C43583;
    const double C50932 = C50865 / C50600;
    const double C47058 =
        (2 * C50865) / p - ((C46655 * C50605) / p + (C47597 * C50683) / C43583);
    const double C50947 = C50883 / C50600;
    const double C49034 =
        (2 * C50883) / p - ((C48333 * C50598) / p + (C49793 * C50676) / C43583);
    const double C50663 = C48742 * C43581;
    const double C49151 = -((C48742 * C50598) / p + (C49861 * C50676) / C43583);
    const double C49261 =
        C50832 - (C48742 * C50605) / p - (C49861 * C50683) / C43583;
    const double C50946 = C50884 / C50600;
    const double C49247 =
        (2 * C50884) / p - ((C48742 * C50603) / p + (C49861 * C50682) / C43583);
    const double C48594 =
        C50945 - ((C48539 * C50598) / p + (C49647 * C50676) / C43583);
    const double C48809 =
        C50945 - ((C48795 * C50603) / p + (C49740 * C50682) / C43583);
    const double C50664 = C48981 * C43581;
    const double C49233 = -((C48981 * C50598) / p + (C49918 * C50676) / C43583);
    const double C49355 = -((C48981 * C50603) / p + (C49918 * C50682) / C43583);
    const double C50948 = C50885 / C50600;
    const double C49382 = C50834 - (C48981 * C50605) / p -
                          (C49918 * C50683) / C43583 + (2 * C50885) / p;
    const double C50891 = C50789 / C50600;
    const double C27845 = C50788 - (C27794 * C50598) / p -
                          (C43632 * C50676) / C43583 + (2 * C50789) / p;
    const double C50807 = C27794 - C50700;
    const double C28418 = -((C28205 * C50605) / p + (C43813 * C50683) / C43583);
    const double C29449 =
        C50800 - (C29417 * C50598) / p - (C44053 * C50676) / C43583;
    const double C29628 = -((C29417 * C50605) / p + (C44053 * C50683) / C43583);
    const double C50892 = C50794 / C50600;
    const double C29541 =
        (2 * C50794) / p - ((C29417 * C50603) / p + (C44053 * C50682) / C43583);
    const double C28478 = (C43838 * C50596) / C50597 - (C28510 * C50598) / p -
                          (C43842 * C50676) / C43583 + C50893;
    const double C29688 =
        C50893 - ((C29812 * C50603) / p + (C44106 * C50682) / C43583);
    const double C30786 =
        C50804 - (C30754 * C50598) / p - (C44297 * C50676) / C43583;
    const double C30878 = -((C30754 * C50603) / p + (C44297 * C50682) / C43583);
    const double C50894 = C50798 / C50600;
    const double C30965 =
        (2 * C50798) / p - ((C30754 * C50605) / p + (C44297 * C50683) / C43583);
    const double C50921 = C50849 / C50600;
    const double C32946 =
        (2 * C50849) / p - ((C32899 * C50598) / p + (C46004 * C50676) / C43583);
    const double C50855 = C32899 - C50750;
    const double C33503 = -((C33297 * C50605) / p + (C46181 * C50683) / C43583);
    const double C34503 = -((C34473 * C50598) / p + (C46416 * C50676) / C43583);
    const double C34677 = -((C34473 * C50605) / p + (C46416 * C50683) / C43583);
    const double C50922 = C50851 / C50600;
    const double C34590 = C50800 - (C34473 * C50603) / p -
                          (C46416 * C50682) / C43583 + (2 * C50851) / p;
    const double C33562 =
        C50923 - ((C33592 * C50598) / p + (C46211 * C50676) / C43583);
    const double C34736 =
        C50802 - (C34853 * C50603) / p - (C46469 * C50682) / C43583 + C50923;
    const double C35800 = -((C35770 * C50598) / p + (C46655 * C50676) / C43583);
    const double C35887 =
        C50804 - (C35770 * C50603) / p - (C46655 * C50682) / C43583;
    const double C50924 = C50853 / C50600;
    const double C35974 =
        (2 * C50853) / p - ((C35770 * C50605) / p + (C46655 * C50683) / C43583);
    const double C50937 = C50872 / C50600;
    const double C37914 =
        (2 * C50872) / p - ((C37867 * C50598) / p + (C48333 * C50676) / C43583);
    const double C50877 = C37867 - C50772;
    const double C38471 = (C48504 * C50596) / C50597 - (C38265 * C50605) / p -
                          (C48510 * C50683) / C43583;
    const double C39471 = -((C39441 * C50598) / p + (C48742 * C50676) / C43583);
    const double C39645 =
        C50800 - (C39441 * C50605) / p - (C48742 * C50683) / C43583;
    const double C50938 = C50874 / C50600;
    const double C39558 =
        (2 * C50874) / p - ((C39441 * C50603) / p + (C48742 * C50682) / C43583);
    const double C38530 =
        C50939 - ((C38560 * C50598) / p + (C48539 * C50676) / C43583);
    const double C39704 =
        C50939 - ((C39821 * C50603) / p + (C48795 * C50682) / C43583);
    const double C40768 = -((C40738 * C50598) / p + (C48981 * C50676) / C43583);
    const double C40855 = -((C40738 * C50603) / p + (C48981 * C50682) / C43583);
    const double C50940 = C50876 / C50600;
    const double C40942 = C50804 - (C40738 * C50605) / p -
                          (C48981 * C50683) / C43583 + (2 * C50876) / p;
    const double C44455 =
        C50905 - ((C43768 * C50603) / p + (C45187 * C50682) / C43583);
    const double C44512 =
        C50905 - ((C43871 * C50605) / p + (C45231 * C50683) / C43583);
    const double C50706 = C50619 / C43583;
    const double C44441 = (C45169 * C50596) / C50597 - (C43798 * C50598) / p -
                          (C45173 * C50676) / C43583 + C50904;
    const double C44639 =
        C50904 - ((C44148 * C50605) / p + (C45301 * C50683) / C43583);
    const double C44498 = (C45213 * C50596) / C50597 - (C44121 * C50598) / p -
                          (C45217 * C50676) / C43583;
    const double C50708 = C50620 / C43583;
    const double C44527 = (C45242 * C50596) / C50597 - (C43915 * C50598) / p -
                          (C45246 * C50676) / C43583 + C50906;
    const double C44654 =
        C50906 - ((C44175 * C50603) / p + (C45315 * C50682) / C43583);
    const double C46812 = (C47522 * C50596) / C50597 - (C46138 * C50603) / p -
                          (C47527 * C50682) / C43583 + C50931;
    const double C46868 =
        C50931 - ((C46238 * C50605) / p + (C47569 * C50683) / C43583);
    const double C50752 = C50644 / C43583;
    const double C46798 =
        C50930 - ((C46167 * C50598) / p + (C47512 * C50676) / C43583);
    const double C46990 =
        C50930 - ((C46510 * C50605) / p + (C47637 * C50683) / C43583);
    const double C46853 = -((C46483 * C50598) / p + (C47555 * C50676) / C43583);
    const double C50753 = C50645 / C43583;
    const double C46882 =
        C50932 - ((C46282 * C50598) / p + (C47583 * C50676) / C43583);
    const double C47004 = (C47647 * C50596) / C50597 - (C46537 * C50603) / p -
                          (C47652 * C50682) / C43583 + C50932;
    const double C49137 =
        C50947 - ((C48466 * C50603) / p + (C49847 * C50682) / C43583);
    const double C49192 = (C49884 * C50596) / C50597 - (C48566 * C50605) / p -
                          (C49890 * C50683) / C43583 + C50947;
    const double C50773 = C50663 / C43583;
    const double C49122 =
        C50946 - ((C48495 * C50598) / p + (C49833 * C50676) / C43583);
    const double C49314 = (C49953 * C50596) / C50597 - (C48836 * C50605) / p -
                          (C49959 * C50683) / C43583 + C50946;
    const double C49178 = -((C48809 * C50598) / p + (C49875 * C50676) / C43583);
    const double C50774 = C50664 / C43583;
    const double C49206 =
        C50948 - ((C48609 * C50598) / p + (C49904 * C50676) / C43583);
    const double C49328 =
        C50948 - ((C48863 * C50603) / p + (C49973 * C50682) / C43583);
    const double C28238 =
        C50891 - ((C28000 * C50603) / p + (C43768 * C50682) / C43583);
    const double C28511 =
        C50891 - ((C28131 * C50605) / p + (C43871 * C50683) / C43583);
    const double C31975 = -((C27845 * C50603) / p + (C44352 * C50682) / C43583);
    const double C32004 = -((C27845 * C50605) / p + (C44352 * C50683) / C43583);
    const double C50897 = C50807 / C50600;
    const double C31945 = C50806 - (C27845 * C50598) / p -
                          (C44352 * C50676) / C43583 + (5 * C50807) / C50600;
    const double C32415 =
        C50815 - (C29628 * C50598) / p - (C44585 * C50676) / C43583;
    const double C28331 = (C43794 * C50596) / C50597 - (C29269 * C50598) / p -
                          (C43798 * C50676) / C43583 + C50892;
    const double C29813 =
        C50892 - ((C29643 * C50605) / p + (C44148 * C50683) / C43583);
    const double C32400 =
        C50814 - (C29541 * C50598) / p - (C44570 * C50676) / C43583;
    const double C32445 = -((C29541 * C50605) / p + (C44570 * C50683) / C43583);
    const double C28604 = -((C28478 * C50603) / p + (C43900 * C50682) / C43583);
    const double C29720 = (C44117 * C50596) / C50597 - (C29688 * C50598) / p -
                          (C44121 * C50676) / C43583;
    const double C32679 =
        C50817 - (C30878 * C50598) / p - (C44681 * C50676) / C43583;
    const double C28691 = (C43911 * C50596) / C50597 - (C30562 * C50598) / p -
                          (C43915 * C50676) / C43583 + C50894;
    const double C29901 =
        C50894 - ((C30724 * C50603) / p + (C44175 * C50682) / C43583);
    const double C32694 =
        C50818 - (C30965 * C50598) / p - (C44710 * C50676) / C43583;
    const double C32723 = -((C30965 * C50603) / p + (C44710 * C50682) / C43583);
    const double C33328 = (C46133 * C50596) / C50597 - (C33093 * C50603) / p -
                          (C46138 * C50682) / C43583 + C50921;
    const double C33593 =
        C50921 - ((C33224 * C50605) / p + (C46238 * C50683) / C43583);
    const double C36954 =
        C50806 - (C32946 * C50603) / p - (C46708 * C50682) / C43583;
    const double C36983 = -((C32946 * C50605) / p + (C46708 * C50683) / C43583);
    const double C50925 = C50855 / C50600;
    const double C36925 = (5 * C50855) / C50600 -
                          ((C32946 * C50598) / p + (C46708 * C50676) / C43583);
    const double C37388 = -((C34677 * C50598) / p + (C46937 * C50676) / C43583);
    const double C33416 =
        C50922 - ((C34326 * C50598) / p + (C46167 * C50676) / C43583);
    const double C34854 =
        C50922 - ((C34692 * C50605) / p + (C46510 * C50683) / C43583);
    const double C37373 = -((C34590 * C50598) / p + (C46923 * C50676) / C43583);
    const double C37419 = -((C34590 * C50605) / p + (C46923 * C50683) / C43583);
    const double C33681 = (C46262 * C50596) / C50597 - (C33562 * C50603) / p -
                          (C46267 * C50682) / C43583;
    const double C34766 = -((C34736 * C50598) / p + (C46483 * C50676) / C43583);
    const double C37650 = -((C35887 * C50598) / p + (C47031 * C50676) / C43583);
    const double C33768 =
        C50924 - ((C35583 * C50598) / p + (C46282 * C50676) / C43583);
    const double C34942 =
        C50805 - (C35741 * C50603) / p - (C46537 * C50682) / C43583 + C50924;
    const double C37665 = -((C35974 * C50598) / p + (C47058 * C50676) / C43583);
    const double C37695 =
        C50818 - (C35974 * C50603) / p - (C47058 * C50682) / C43583;
    const double C38296 =
        C50937 - ((C38061 * C50603) / p + (C48466 * C50682) / C43583);
    const double C38561 =
        C50854 - (C38192 * C50605) / p - (C48566 * C50683) / C43583 + C50937;
    const double C41922 = -((C37914 * C50603) / p + (C49034 * C50682) / C43583);
    const double C41951 =
        C50806 - (C37914 * C50605) / p - (C49034 * C50683) / C43583;
    const double C50941 = C50877 / C50600;
    const double C41893 = (5 * C50877) / C50600 -
                          ((C37914 * C50598) / p + (C49034 * C50676) / C43583);
    const double C42356 = -((C39645 * C50598) / p + (C49261 * C50676) / C43583);
    const double C38384 =
        C50938 - ((C39294 * C50598) / p + (C48495 * C50676) / C43583);
    const double C39822 =
        C50801 - (C39660 * C50605) / p - (C48836 * C50683) / C43583 + C50938;
    const double C42341 = -((C39558 * C50598) / p + (C49247 * C50676) / C43583);
    const double C42386 =
        C50814 - (C39558 * C50605) / p - (C49247 * C50683) / C43583;
    const double C38649 = -((C38530 * C50603) / p + (C48594 * C50682) / C43583);
    const double C39734 = -((C39704 * C50598) / p + (C48809 * C50676) / C43583);
    const double C42615 = -((C40855 * C50598) / p + (C49355 * C50676) / C43583);
    const double C38736 =
        C50940 - ((C40551 * C50598) / p + (C48609 * C50676) / C43583);
    const double C39910 =
        C50940 - ((C40709 * C50603) / p + (C48863 * C50682) / C43583);
    const double C42630 = -((C40942 * C50598) / p + (C49382 * C50676) / C43583);
    const double C42659 = -((C40942 * C50603) / p + (C49382 * C50682) / C43583);
    const double C50811 = C29417 - C50706;
    const double C50813 = C30754 - C50708;
    const double C50857 = C34473 - C50752;
    const double C50858 = C35770 - C50753;
    const double C50878 = C39441 - C50773;
    const double C50879 = C40738 - C50774;
    const double C32108 = -((C28238 * C50605) / p + (C44455 * C50683) / C43583);
    const double C32183 = -((C28511 * C50603) / p + (C44512 * C50682) / C43583);
    const double C32033 =
        C50897 - ((C27985 * C50603) / p + (C44399 * C50682) / C43583);
    const double C32063 =
        C50897 - ((C28116 * C50605) / p + (C44413 * C50683) / C43583);
    const double C32093 = C50810 - (C28331 * C50598) / p -
                          (C44441 * C50676) / C43583 +
                          (C29269 - (C43798 * C43581) / C43583) / p;
    const double C32138 = -((C28331 * C50605) / p + (C44441 * C50683) / C43583);
    const double C32490 = (C44635 * C50596) / C50597 - (C29813 * C50598) / p -
                          (C44639 * C50676) / C43583;
    const double C32153 = (C44494 * C50596) / C50597 - (C29720 * C50598) / p -
                          (C44498 * C50676) / C43583 +
                          (C29688 - (C44121 * C43581) / C43583) / C50600;
    const double C32198 = C50812 - (C28691 * C50598) / p -
                          (C44527 * C50676) / C43583 +
                          (C30562 - (C43915 * C43581) / C43583) / p;
    const double C32227 = -((C28691 * C50603) / p + (C44527 * C50682) / C43583);
    const double C32505 =
        C50816 - (C29901 * C50598) / p - (C44654 * C50676) / C43583;
    const double C32534 = (C30724 - (C44175 * C43581) / C43583) / p -
                          ((C29901 * C50603) / p + (C44654 * C50682) / C43583);
    const double C37086 = -((C33328 * C50605) / p + (C46812 * C50683) / C43583);
    const double C37160 = (C46863 * C50596) / C50597 - (C33593 * C50603) / p -
                          (C46868 * C50682) / C43583;
    const double C37012 = (C46751 * C50596) / C50597 - (C33078 * C50603) / p -
                          (C46756 * C50682) / C43583 + C50925;
    const double C37042 =
        C50925 - ((C33209 * C50605) / p + (C46771 * C50683) / C43583);
    const double C37071 = (C34326 - (C46167 * C43581) / C43583) / p -
                          ((C33416 * C50598) / p + (C46798 * C50676) / C43583);
    const double C37116 = -((C33416 * C50605) / p + (C46798 * C50683) / C43583);
    const double C37463 = -((C34854 * C50598) / p + (C46990 * C50676) / C43583);
    const double C37131 = (C34736 - (C46483 * C43581) / C43583) / C50600 -
                          ((C34766 * C50598) / p + (C46853 * C50676) / C43583);
    const double C37175 = (C35583 - (C46282 * C43581) / C43583) / p -
                          ((C33768 * C50598) / p + (C46882 * C50676) / C43583);
    const double C37204 =
        C50812 - (C33768 * C50603) / p - (C46882 * C50682) / C43583;
    const double C37478 = -((C34942 * C50598) / p + (C47004 * C50676) / C43583);
    const double C37508 = C50816 - (C34942 * C50603) / p -
                          (C47004 * C50682) / C43583 +
                          (C35741 - (C46537 * C43581) / C43583) / p;
    const double C42054 = (C49131 * C50596) / C50597 - (C38296 * C50605) / p -
                          (C49137 * C50683) / C43583;
    const double C42128 = -((C38561 * C50603) / p + (C49192 * C50682) / C43583);
    const double C41980 =
        C50941 - ((C38046 * C50603) / p + (C49081 * C50682) / C43583);
    const double C42010 =
        C50856 - (C38177 * C50605) / p - (C49095 * C50683) / C43583 + C50941;
    const double C42039 = (C39294 - (C48495 * C43581) / C43583) / p -
                          ((C38384 * C50598) / p + (C49122 * C50676) / C43583);
    const double C42084 =
        C50810 - (C38384 * C50605) / p - (C49122 * C50683) / C43583;
    const double C42430 = -((C39822 * C50598) / p + (C49314 * C50676) / C43583);
    const double C42099 = (C39704 - (C48809 * C43581) / C43583) / C50600 -
                          ((C39734 * C50598) / p + (C49178 * C50676) / C43583);
    const double C42143 = (C40551 - (C48609 * C43581) / C43583) / p -
                          ((C38736 * C50598) / p + (C49206 * C50676) / C43583);
    const double C42172 = -((C38736 * C50603) / p + (C49206 * C50682) / C43583);
    const double C42445 = -((C39910 * C50598) / p + (C49328 * C50676) / C43583);
    const double C42474 = (C40709 - (C48863 * C43581) / C43583) / p -
                          ((C39910 * C50603) / p + (C49328 * C50682) / C43583);
    const double C50898 = C50811 / C50600;
    const double C32430 = (5 * C50811) / C50600 -
                          ((C29541 * C50603) / p + (C44570 * C50682) / C43583);
    const double C50899 = C50813 / C50600;
    const double C32738 = (5 * C50813) / C50600 -
                          ((C30965 * C50605) / p + (C44710 * C50683) / C43583);
    const double C50926 = C50857 / C50600;
    const double C37404 = C50814 - (C34590 * C50603) / p -
                          (C46923 * C50682) / C43583 + (5 * C50857) / C50600;
    const double C50927 = C50858 / C50600;
    const double C37710 = (5 * C50858) / C50600 -
                          ((C35974 * C50605) / p + (C47058 * C50683) / C43583);
    const double C50942 = C50878 / C50600;
    const double C42371 = (5 * C50878) / C50600 -
                          ((C39558 * C50603) / p + (C49247 * C50682) / C43583);
    const double C50943 = C50879 / C50600;
    const double C42675 = C50818 - (C40942 * C50605) / p -
                          (C49382 * C50683) / C43583 + (5 * C50879) / C50600;
    const double C32123 = (C44466 * C50596) / C50597 - (C29449 * C50598) / p -
                          (C44470 * C50676) / C43583 + C50898;
    const double C32460 =
        C50898 - ((C29628 * C50605) / p + (C44585 * C50683) / C43583);
    const double C32242 = (C44551 * C50596) / C50597 - (C30786 * C50598) / p -
                          (C44555 * C50676) / C43583 + C50899;
    const double C32549 =
        C50899 - ((C30878 * C50603) / p + (C44681 * C50682) / C43583);
    const double C37101 =
        C50926 - ((C34503 * C50598) / p + (C46826 * C50676) / C43583);
    const double C37434 =
        C50926 - ((C34677 * C50605) / p + (C46937 * C50683) / C43583);
    const double C37219 =
        C50927 - ((C35800 * C50598) / p + (C46909 * C50676) / C43583);
    const double C37523 =
        C50817 - (C35887 * C50603) / p - (C47031 * C50682) / C43583 + C50927;
    const double C42069 =
        C50942 - ((C39471 * C50598) / p + (C49151 * C50676) / C43583);
    const double C42401 =
        C50815 - (C39645 * C50605) / p - (C49261 * C50683) / C43583 + C50942;
    const double C42187 =
        C50943 - ((C40768 * C50598) / p + (C49233 * C50676) / C43583);
    const double C42489 =
        C50943 - ((C40855 * C50603) / p + (C49355 * C50682) / C43583);
    vrx[0] = C27794;
    vrx[1] = C27812;
    vrx[2] = C27829;
    vrx[3] = C27845;
    vrx[4] = C27876;
    vrx[5] = C27985;
    vrx[6] = C28000;
    vrx[7] = C28015;
    vrx[8] = C28116;
    vrx[9] = C28131;
    vrx[10] = C28146;
    vrx[11] = C28205;
    vrx[12] = C28237;
    vrx[13] = C28238;
    vrx[14] = C28254;
    vrx[15] = C28331;
    vrx[16] = C28418;
    vrx[17] = C28433;
    vrx[18] = C28478;
    vrx[19] = C28510;
    vrx[20] = C28511;
    vrx[21] = C28527;
    vrx[22] = C28604;
    vrx[23] = C28691;
    vrx[24] = C28852;
    vrx[25] = C29032;
    vrx[26] = C29164;
    vrx[27] = C29269;
    vrx[28] = C29284;
    vrx[29] = C29285;
    vrx[30] = C29358;
    vrx[31] = C29373;
    vrx[32] = C29417;
    vrx[33] = C29449;
    vrx[34] = C29541;
    vrx[35] = C29628;
    vrx[36] = C29643;
    vrx[37] = C29688;
    vrx[38] = C29720;
    vrx[39] = C29812;
    vrx[40] = C29813;
    vrx[41] = C29828;
    vrx[42] = C29901;
    vrx[43] = C30062;
    vrx[44] = C30372;
    vrx[45] = C30477;
    vrx[46] = C30562;
    vrx[47] = C30577;
    vrx[48] = C30578;
    vrx[49] = C30724;
    vrx[50] = C30754;
    vrx[51] = C30786;
    vrx[52] = C30878;
    vrx[53] = C30965;
    vrx[54] = C31126;
    vrx[55] = C31945;
    vrx[56] = C31960;
    vrx[57] = C31975;
    vrx[58] = C32004;
    vrx[59] = C32033;
    vrx[60] = C32048;
    vrx[61] = C32063;
    vrx[62] = C32093;
    vrx[63] = C32108;
    vrx[64] = C32123;
    vrx[65] = C32138;
    vrx[66] = C32153;
    vrx[67] = C32183;
    vrx[68] = C32198;
    vrx[69] = C32227;
    vrx[70] = C32242;
    vrx[71] = C32400;
    vrx[72] = C32415;
    vrx[73] = C32430;
    vrx[74] = C32445;
    vrx[75] = C32460;
    vrx[76] = C32490;
    vrx[77] = C32505;
    vrx[78] = C32534;
    vrx[79] = C32549;
    vrx[80] = C32679;
    vrx[81] = C32694;
    vrx[82] = C32723;
    vrx[83] = C32738;
    vry[0] = C32899;
    vry[1] = C32915;
    vry[2] = C32931;
    vry[3] = C32946;
    vry[4] = C32975;
    vry[5] = C33078;
    vry[6] = C33093;
    vry[7] = C33108;
    vry[8] = C33209;
    vry[9] = C33224;
    vry[10] = C33239;
    vry[11] = C33297;
    vry[12] = C33327;
    vry[13] = C33328;
    vry[14] = C33343;
    vry[15] = C33416;
    vry[16] = C33503;
    vry[17] = C33518;
    vry[18] = C33562;
    vry[19] = C33592;
    vry[20] = C33593;
    vry[21] = C33608;
    vry[22] = C33681;
    vry[23] = C33768;
    vry[24] = C33925;
    vry[25] = C34099;
    vry[26] = C34227;
    vry[27] = C34326;
    vry[28] = C34341;
    vry[29] = C34342;
    vry[30] = C34415;
    vry[31] = C34430;
    vry[32] = C34473;
    vry[33] = C34503;
    vry[34] = C34590;
    vry[35] = C34677;
    vry[36] = C34692;
    vry[37] = C34736;
    vry[38] = C34766;
    vry[39] = C34853;
    vry[40] = C34854;
    vry[41] = C34869;
    vry[42] = C34942;
    vry[43] = C35099;
    vry[44] = C35399;
    vry[45] = C35498;
    vry[46] = C35583;
    vry[47] = C35598;
    vry[48] = C35599;
    vry[49] = C35741;
    vry[50] = C35770;
    vry[51] = C35800;
    vry[52] = C35887;
    vry[53] = C35974;
    vry[54] = C36131;
    vry[55] = C36925;
    vry[56] = C36939;
    vry[57] = C36954;
    vry[58] = C36983;
    vry[59] = C37012;
    vry[60] = C37027;
    vry[61] = C37042;
    vry[62] = C37071;
    vry[63] = C37086;
    vry[64] = C37101;
    vry[65] = C37116;
    vry[66] = C37131;
    vry[67] = C37160;
    vry[68] = C37175;
    vry[69] = C37204;
    vry[70] = C37219;
    vry[71] = C37373;
    vry[72] = C37388;
    vry[73] = C37404;
    vry[74] = C37419;
    vry[75] = C37434;
    vry[76] = C37463;
    vry[77] = C37478;
    vry[78] = C37508;
    vry[79] = C37523;
    vry[80] = C37650;
    vry[81] = C37665;
    vry[82] = C37695;
    vry[83] = C37710;
    vrz[0] = C37867;
    vrz[1] = C37883;
    vrz[2] = C37899;
    vrz[3] = C37914;
    vrz[4] = C37943;
    vrz[5] = C38046;
    vrz[6] = C38061;
    vrz[7] = C38076;
    vrz[8] = C38177;
    vrz[9] = C38192;
    vrz[10] = C38207;
    vrz[11] = C38265;
    vrz[12] = C38295;
    vrz[13] = C38296;
    vrz[14] = C38311;
    vrz[15] = C38384;
    vrz[16] = C38471;
    vrz[17] = C38486;
    vrz[18] = C38530;
    vrz[19] = C38560;
    vrz[20] = C38561;
    vrz[21] = C38576;
    vrz[22] = C38649;
    vrz[23] = C38736;
    vrz[24] = C38893;
    vrz[25] = C39067;
    vrz[26] = C39195;
    vrz[27] = C39294;
    vrz[28] = C39309;
    vrz[29] = C39310;
    vrz[30] = C39383;
    vrz[31] = C39398;
    vrz[32] = C39441;
    vrz[33] = C39471;
    vrz[34] = C39558;
    vrz[35] = C39645;
    vrz[36] = C39660;
    vrz[37] = C39704;
    vrz[38] = C39734;
    vrz[39] = C39821;
    vrz[40] = C39822;
    vrz[41] = C39837;
    vrz[42] = C39910;
    vrz[43] = C40067;
    vrz[44] = C40367;
    vrz[45] = C40466;
    vrz[46] = C40551;
    vrz[47] = C40566;
    vrz[48] = C40567;
    vrz[49] = C40709;
    vrz[50] = C40738;
    vrz[51] = C40768;
    vrz[52] = C40855;
    vrz[53] = C40942;
    vrz[54] = C41099;
    vrz[55] = C41893;
    vrz[56] = C41907;
    vrz[57] = C41922;
    vrz[58] = C41951;
    vrz[59] = C41980;
    vrz[60] = C41995;
    vrz[61] = C42010;
    vrz[62] = C42039;
    vrz[63] = C42054;
    vrz[64] = C42069;
    vrz[65] = C42084;
    vrz[66] = C42099;
    vrz[67] = C42128;
    vrz[68] = C42143;
    vrz[69] = C42172;
    vrz[70] = C42187;
    vrz[71] = C42341;
    vrz[72] = C42356;
    vrz[73] = C42371;
    vrz[74] = C42386;
    vrz[75] = C42401;
    vrz[76] = C42430;
    vrz[77] = C42445;
    vrz[78] = C42474;
    vrz[79] = C42489;
    vrz[80] = C42615;
    vrz[81] = C42630;
    vrz[82] = C42659;
    vrz[83] = C42675;
}
