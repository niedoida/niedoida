/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2011_1_vr(const double ae,
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
    const double C26853 = g[1];
    const double C26996 = g[5];
    const double C27139 = g[9];
    const double C27553 = g[21];
    const double C27668 = g[24];
    const double C27684 = g[25];
    const double C27803 = g[26];
    const double C27920 = g[27];
    const double C28022 = g[28];
    const double C28066 = g[30];
    const double C28081 = g[31];
    const double C29165 = g[33];
    const double C29269 = g[34];
    const double C29453 = g[35];
    const double C30611 = g[36];
    const double C30946 = g[37];
    const double C30966 = g[38];
    const double C30967 = g[39];
    const double C30982 = g[40];
    const double C31041 = g[41];
    const double C31114 = g[42];
    const double C31172 = g[43];
    const double C31187 = g[44];
    const double C31203 = g[45];
    const double C31239 = g[46];
    const double C31283 = g[47];
    const double C31314 = g[48];
    const double C31330 = g[49];
    const double C31346 = g[50];
    const double C31405 = g[51];
    const double C31420 = g[52];
    const double C31464 = g[53];
    const double C31487 = g[54];
    const double C31575 = g[55];
    const double C31591 = g[56];
    const double C31621 = g[57];
    const double C31700 = g[58];
    const double C31744 = g[59];
    const double C31797 = g[60];
    const double C32187 = g[61];
    const double C32399 = g[62];
    const double C32444 = g[63];
    const double C32639 = g[64];
    const double C33530 = g[65];
    const double C30949 = p + q;
    const double C30948 = p * q;
    const double C33621 = bs[5];
    const double C33620 = bs[4];
    const double C33618 = bs[3];
    const double C33616 = bs[2];
    const double C33612 = std::pow(Pi, 2.5);
    const double C33609 = bs[1];
    const double C33608 = ae * be;
    const double C33607 = bs[0];
    const double C33606 = zP - zQ;
    const double C33605 = be * zAB;
    const double C33604 = yP - yQ;
    const double C33603 = be * yAB;
    const double C33602 = 2 * p;
    const double C33600 = xP - xQ;
    const double C33599 = std::pow(p, 2);
    const double C33597 = be * xAB;
    const double C33596 = ae / p;
    const double C30950 = C30949 * p;
    const double C33613 = std::sqrt(C30949);
    const double C33611 = p * C30949;
    const double C33610 = kab * C30948;
    const double C33598 = ae * C30948;
    const double C33646 = 4 * C33612;
    const double C33644 = kab * C33608;
    const double C33639 = C33606 * C30948;
    const double C33638 = C33604 * C30948;
    const double C33634 = C33600 * C30948;
    const double C33633 = C30949 * C33599;
    const double C33632 = C33596 - 1;
    const double C33647 = C30948 * C33613;
    const double C33645 = kcd * C33610;
    const double C33666 = C32444 * C33598;
    const double C33661 = C31797 * C33598;
    const double C33659 = C31700 * C33598;
    const double C33658 = C31621 * C33598;
    const double C33657 = C31591 * C33598;
    const double C33656 = C31575 * C33598;
    const double C33654 = C31464 * C33598;
    const double C33653 = C31420 * C33598;
    const double C33652 = C31405 * C33598;
    const double C33651 = C31330 * C33598;
    const double C33648 = C31239 * C33598;
    const double C33643 = C31203 * C33598;
    const double C33642 = C31172 * C33598;
    const double C33641 = C31114 * C33598;
    const double C33640 = C31041 * C33598;
    const double C33637 = C30982 * C33598;
    const double C33636 = C30967 * C33598;
    const double C33686 = kcd * C33644;
    const double C33720 = C33632 * C31203;
    const double C33713 = C33632 * C31700;
    const double C33709 = C33632 * C31464;
    const double C33706 = C33632 * C31114;
    const double C33704 = C33632 * C31041;
    const double C33702 = C33632 * C30982;
    const double C33698 = C33632 * C30967;
    const double C33696 = C33632 * C30611;
    const double C33694 = C33632 * C29269;
    const double C33692 = C33632 * C29165;
    const double C33688 = C33632 * C27684;
    const double C33684 = C33632 * C28066;
    const double C33682 = C33632 * C28022;
    const double C33680 = C33632 * C27139;
    const double C33678 = C33632 * C26996;
    const double C33676 = C33632 * C26853;
    const double C33674 = C33632 * C30966;
    const double C33715 = C33621 * C33645;
    const double C33712 = C33620 * C33645;
    const double C33708 = C33618 * C33645;
    const double C33700 = C33616 * C33645;
    const double C33687 = C33609 * C33645;
    const double C33721 = C33666 / C33633;
    const double C33714 = C33661 / C33633;
    const double C33710 = C33659 / C33633;
    const double C33707 = C33658 / C33633;
    const double C33705 = C33657 / C33633;
    const double C33703 = C33656 / C33633;
    const double C33699 = C33654 / C33633;
    const double C33697 = C33653 / C33633;
    const double C33695 = C33652 / C33633;
    const double C33693 = C33651 / C33633;
    const double C33689 = C33648 / C33633;
    const double C33685 = C33643 / C33633;
    const double C33683 = C33642 / C33633;
    const double C33681 = C33641 / C33633;
    const double C33679 = C33640 / C33633;
    const double C33677 = C33637 / C33633;
    const double C33675 = C33636 / C33633;
    const double C33740 = C33620 * C33686;
    const double C33738 = C33618 * C33686;
    const double C33735 = C33616 * C33686;
    const double C33732 = C33609 * C33686;
    const double C33729 = C33607 * C33686;
    const double C33741 = C33715 * ae;
    const double C33739 = C33712 * ae;
    const double C33736 = C33708 * ae;
    const double C33733 = C33700 * ae;
    const double C33730 = C33687 * ae;
    const double C31801 =
        -(((xAB * C33740) / p + (C33600 * C33741) / C33611) * C33646) / C33647;
    const double C32681 =
        -(((yAB * C33740) / p + (C33604 * C33741) / C33611) * C33646) / C33647;
    const double C33558 =
        -(((zAB * C33740) / p + (C33606 * C33741) / C33611) * C33646) / C33647;
    const double C31704 =
        -(((xAB * C33738) / p + (C33600 * C33739) / C33611) * C33646) / C33647;
    const double C32585 =
        -(((yAB * C33738) / p + (C33604 * C33739) / C33611) * C33646) / C33647;
    const double C33462 =
        -(((zAB * C33738) / p + (C33606 * C33739) / C33611) * C33646) / C33647;
    const double C31468 =
        -(((xAB * C33735) / p + (C33600 * C33736) / C33611) * C33646) / C33647;
    const double C32359 =
        -(((yAB * C33735) / p + (C33604 * C33736) / C33611) * C33646) / C33647;
    const double C33238 =
        -(((zAB * C33735) / p + (C33606 * C33736) / C33611) * C33646) / C33647;
    const double C30954 =
        -(((xAB * C33732) / p + (C33600 * C33733) / C33611) * C33646) / C33647;
    const double C31852 =
        -(((yAB * C33732) / p + (C33604 * C33733) / C33611) * C33646) / C33647;
    const double C32732 =
        -(((zAB * C33732) / p + (C33606 * C33733) / C33611) * C33646) / C33647;
    const double C27672 =
        -(((xAB * C33729) / p + (C33600 * C33730) / C33611) * C33646) / C33647;
    const double C28979 =
        -(((yAB * C33729) / p + (C33604 * C33730) / C33611) * C33646) / C33647;
    const double C30281 =
        -(((zAB * C33729) / p + (C33606 * C33730) / C33611) * C33646) / C33647;
    const double C33619 = C31704 * C30948;
    const double C31748 =
        C33713 - (C31704 * C33597) / p - C33714 - (C31801 * C33634) / C30950;
    const double C31763 = -((C31704 * C33603) / p + (C31801 * C33638) / C30950);
    const double C31778 = -((C31704 * C33605) / p + (C31801 * C33639) / C30950);
    const double C33626 = C32585 * C30948;
    const double C32628 = -((C32585 * C33597) / p + (C32681 * C33634) / C30950);
    const double C32644 =
        C33713 - (C32585 * C33603) / p - C33714 - (C32681 * C33638) / C30950;
    const double C32659 = -((C32585 * C33605) / p + (C32681 * C33639) / C30950);
    const double C33631 = C33462 * C30948;
    const double C33505 = -((C33462 * C33597) / p + (C33558 * C33634) / C30950);
    const double C33520 = -((C33462 * C33603) / p + (C33558 * C33638) / C30950);
    const double C33536 =
        C33713 - (C33462 * C33605) / p - C33714 - (C33558 * C33639) / C30950;
    const double C33617 = C31468 * C30948;
    const double C31491 =
        C33709 - (C31468 * C33597) / p - C33710 - (C31704 * C33634) / C30950;
    const double C31520 = -((C31468 * C33603) / p + (C31704 * C33638) / C30950);
    const double C31549 = -((C31468 * C33605) / p + (C31704 * C33639) / C30950);
    const double C33625 = C32359 * C30948;
    const double C32374 = -((C32359 * C33597) / p + (C32585 * C33634) / C30950);
    const double C32404 =
        C33709 - (C32359 * C33603) / p - C33710 - (C32585 * C33638) / C30950;
    const double C32433 = -((C32359 * C33605) / p + (C32585 * C33639) / C30950);
    const double C33630 = C33238 * C30948;
    const double C33253 = -((C33238 * C33597) / p + (C33462 * C33634) / C30950);
    const double C33282 = -((C33238 * C33603) / p + (C33462 * C33638) / C30950);
    const double C33311 =
        C33709 - (C33238 * C33605) / p - C33710 - (C33462 * C33639) / C30950;
    const double C33601 = C30954 * C30948;
    const double C30953 =
        C33698 - (C30954 * C33597) / p - C33699 - (C31468 * C33634) / C30950;
    const double C31029 = -((C30954 * C33603) / p + (C31468 * C33638) / C30950);
    const double C31102 = -((C30954 * C33605) / p + (C31468 * C33639) / C30950);
    const double C33622 = C31852 * C30948;
    const double C31853 = -((C31852 * C33597) / p + (C32359 * C33634) / C30950);
    const double C31925 =
        C33698 - (C31852 * C33603) / p - C33699 - (C32359 * C33638) / C30950;
    const double C31997 = -((C31852 * C33605) / p + (C32359 * C33639) / C30950);
    const double C33627 = C32732 * C30948;
    const double C32733 = -((C32732 * C33597) / p + (C33238 * C33634) / C30950);
    const double C32805 = -((C32732 * C33603) / p + (C33238 * C33638) / C30950);
    const double C32877 =
        C33698 - (C32732 * C33605) / p - C33699 - (C33238 * C33639) / C30950;
    const double C26857 =
        C33674 - (C27672 * C33597) / p - C33675 - (C30954 * C33634) / C30950;
    const double C27047 = -((C27672 * C33603) / p + (C30954 * C33638) / C30950);
    const double C27235 = -((C27672 * C33605) / p + (C30954 * C33639) / C30950);
    const double C28188 = -((C28979 * C33597) / p + (C31852 * C33634) / C30950);
    const double C28372 =
        C33674 - (C28979 * C33603) / p - C33675 - (C31852 * C33638) / C30950;
    const double C28556 = -((C28979 * C33605) / p + (C31852 * C33639) / C30950);
    const double C29490 = -((C30281 * C33597) / p + (C32732 * C33634) / C30950);
    const double C29674 = -((C30281 * C33603) / p + (C32732 * C33638) / C30950);
    const double C29858 =
        C33674 - (C30281 * C33605) / p - C33675 - (C32732 * C33639) / C30950;
    const double C33660 = C33619 / C30950;
    const double C33667 = C33626 / C30950;
    const double C33672 = C33631 / C30950;
    const double C33655 = C33617 / C30950;
    const double C33665 = C33625 / C30950;
    const double C33671 = C33630 / C30950;
    const double C33635 = C33601 / C30950;
    const double C31191 = -((C31102 * C33603) / p + (C31549 * C33638) / C30950);
    const double C33662 = C33622 / C30950;
    const double C32083 =
        C33720 - (C31997 * C33603) / p - C33721 - (C32433 * C33638) / C30950;
    const double C33668 = C33627 / C30950;
    const double C32963 = -((C32877 * C33603) / p + (C33311 * C33638) / C30950);
    const double C27270 =
        C33682 - (C27047 * C33597) / p - C33683 - (C31029 * C33634) / C30950;
    const double C27405 =
        C33684 - (C27235 * C33597) / p - C33685 - (C31102 * C33634) / C30950;
    const double C27540 = -((C27235 * C33603) / p + (C31102 * C33638) / C30950);
    const double C28589 = -((C28372 * C33597) / p + (C31925 * C33634) / C30950);
    const double C28720 = -((C28556 * C33597) / p + (C31997 * C33634) / C30950);
    const double C28851 =
        C33684 - (C28556 * C33603) / p - C33685 - (C31997 * C33638) / C30950;
    const double C29891 = -((C29674 * C33597) / p + (C32805 * C33634) / C30950);
    const double C30022 = -((C29858 * C33597) / p + (C32877 * C33634) / C30950);
    const double C30153 = -((C29858 * C33603) / p + (C32877 * C33638) / C30950);
    const double C33711 = C31468 - C33660;
    const double C33722 = C32359 - C33667;
    const double C33727 = C33238 - C33672;
    const double C33701 = C30954 - C33655;
    const double C33719 = C31852 - C33665;
    const double C33726 = C32732 - C33671;
    const double C33673 = C27672 - C33635;
    const double C33716 = C28979 - C33662;
    const double C33723 = C30281 - C33668;
    const double C27373 = C33632 * C27553 - (C27540 * C33597) / p -
                          (C31187 * C33598) / C33633 -
                          (C31191 * C33634) / C30950;
    const double C28689 = -((C28851 * C33597) / p + (C32083 * C33634) / C30950);
    const double C29991 = -((C30153 * C33597) / p + (C32963 * C33634) / C30950);
    const double C33737 = C33711 / C33602;
    const double C33745 = C33722 / C33602;
    const double C33749 = C33727 / C33602;
    const double C33734 = C33701 / C33602;
    const double C33744 = C33719 / C33602;
    const double C33748 = C33726 / C33602;
    const double C33728 = C33673 / C33602;
    const double C33742 = C33716 / C33602;
    const double C33746 = C33723 / C33602;
    const double C31579 = C33632 * C31487 - (C31491 * C33597) / p -
                          (C31744 * C33598) / C33633 -
                          (C31748 * C33634) / C30950 + C33737;
    const double C31595 =
        C33737 - ((C31520 * C33603) / p + (C31763 * C33638) / C30950);
    const double C31625 =
        C33737 - ((C31549 * C33605) / p + (C31778 * C33639) / C30950);
    const double C32463 =
        C33745 - ((C32374 * C33597) / p + (C32628 * C33634) / C30950);
    const double C32478 = C33632 * C32399 - (C32404 * C33603) / p -
                          (C32639 * C33598) / C33633 -
                          (C32644 * C33638) / C30950 + C33745;
    const double C32507 =
        C33745 - ((C32433 * C33605) / p + (C32659 * C33639) / C30950);
    const double C33340 =
        C33749 - ((C33253 * C33597) / p + (C33505 * C33634) / C30950);
    const double C33355 =
        C33749 - ((C33282 * C33603) / p + (C33520 * C33638) / C30950);
    const double C33384 = C33632 * C32444 - (C33311 * C33605) / p -
                          (C33530 * C33598) / C33633 -
                          (C33536 * C33639) / C30950 + C33749;
    const double C30986 = C33632 * C30946 - (C30953 * C33597) / p -
                          (C31487 * C33598) / C33633 -
                          (C31491 * C33634) / C30950 + C33734;
    const double C31045 =
        C33734 - ((C31029 * C33603) / p + (C31520 * C33638) / C30950);
    const double C31118 =
        C33734 - ((C31102 * C33605) / p + (C31549 * C33639) / C30950);
    const double C31882 =
        C33744 - ((C31853 * C33597) / p + (C32374 * C33634) / C30950);
    const double C31940 = C33632 * C31172 - (C31925 * C33603) / p -
                          (C32399 * C33598) / C33633 -
                          (C32404 * C33638) / C30950 + C33744;
    const double C32012 =
        C33744 - ((C31997 * C33605) / p + (C32433 * C33639) / C30950);
    const double C32762 =
        C33748 - ((C32733 * C33597) / p + (C33253 * C33634) / C30950);
    const double C32820 =
        C33748 - ((C32805 * C33603) / p + (C33282 * C33638) / C30950);
    const double C32892 = C33720 - (C32877 * C33605) / p - C33721 -
                          (C33311 * C33639) / C30950 + C33748;
    const double C26840 = C33632 * C27668 - (C26857 * C33597) / p -
                          (C30946 * C33598) / C33633 -
                          (C30953 * C33634) / C30950 + C33728;
    const double C26983 =
        C33728 - ((C27047 * C33603) / p + (C31029 * C33638) / C30950);
    const double C27126 =
        C33728 - ((C27235 * C33605) / p + (C31102 * C33639) / C30950);
    const double C28172 =
        C33742 - ((C28188 * C33597) / p + (C31853 * C33634) / C30950);
    const double C28311 = C33682 - (C28372 * C33603) / p - C33683 -
                          (C31925 * C33638) / C30950 + C33742;
    const double C28450 =
        C33742 - ((C28556 * C33605) / p + (C31997 * C33639) / C30950);
    const double C29474 =
        C33746 - ((C29490 * C33597) / p + (C32733 * C33634) / C30950);
    const double C29613 =
        C33746 - ((C29674 * C33603) / p + (C32805 * C33638) / C30950);
    const double C29752 = C33684 - (C29858 * C33605) / p - C33685 -
                          (C32877 * C33639) / C30950 + C33746;
    const double C31243 = C33702 - (C30986 * C33597) / p - C33703 -
                          (C31579 * C33634) / C30950 +
                          (C30953 - (C31491 * C30948) / C30950) / p;
    const double C31302 = -((C30986 * C33605) / p + (C31579 * C33639) / C30950);
    const double C33614 = C31045 * C30948;
    const double C31287 =
        C33704 - (C31045 * C33597) / p - C33705 - (C31595 * C33634) / C30950;
    const double C31334 = (C31029 - (C31520 * C30948) / C30950) / p -
                          ((C31045 * C33603) / p + (C31595 * C33638) / C30950);
    const double C31350 = -((C31045 * C33605) / p + (C31595 * C33639) / C30950);
    const double C33615 = C31118 * C30948;
    const double C31318 =
        C33706 - (C31118 * C33597) / p - C33707 - (C31625 * C33634) / C30950;
    const double C31393 = -((C31118 * C33603) / p + (C31625 * C33638) / C30950);
    const double C31424 = (C31102 - (C31549 * C30948) / C30950) / p -
                          ((C31118 * C33605) / p + (C31625 * C33639) / C30950);
    const double C32133 = (C31853 - (C32374 * C30948) / C30950) / p -
                          ((C31882 * C33597) / p + (C32463 * C33634) / C30950);
    const double C32192 = -((C31882 * C33605) / p + (C32463 * C33639) / C30950);
    const double C33623 = C31940 * C30948;
    const double C32176 = -((C31940 * C33597) / p + (C32478 * C33634) / C30950);
    const double C32222 = C33704 - (C31940 * C33603) / p - C33705 -
                          (C32478 * C33638) / C30950 +
                          (C31925 - (C32404 * C30948) / C30950) / p;
    const double C32237 = -((C31940 * C33605) / p + (C32478 * C33639) / C30950);
    const double C33624 = C32012 * C30948;
    const double C32207 = -((C32012 * C33597) / p + (C32507 * C33634) / C30950);
    const double C32280 =
        C33706 - (C32012 * C33603) / p - C33707 - (C32507 * C33638) / C30950;
    const double C32309 = (C31997 - (C32433 * C30948) / C30950) / p -
                          ((C32012 * C33605) / p + (C32507 * C33639) / C30950);
    const double C33013 = (C32733 - (C33253 * C30948) / C30950) / p -
                          ((C32762 * C33597) / p + (C33340 * C33634) / C30950);
    const double C33071 =
        C33702 - (C32762 * C33605) / p - C33703 - (C33340 * C33639) / C30950;
    const double C33628 = C32820 * C30948;
    const double C33056 = -((C32820 * C33597) / p + (C33355 * C33634) / C30950);
    const double C33101 = (C32805 - (C33282 * C30948) / C30950) / p -
                          ((C32820 * C33603) / p + (C33355 * C33638) / C30950);
    const double C33116 =
        C33704 - (C32820 * C33605) / p - C33705 - (C33355 * C33639) / C30950;
    const double C33629 = C32892 * C30948;
    const double C33086 = -((C32892 * C33597) / p + (C33384 * C33634) / C30950);
    const double C33159 = -((C32892 * C33603) / p + (C33384 * C33638) / C30950);
    const double C33188 = C33706 - (C32892 * C33605) / p - C33707 -
                          (C33384 * C33639) / C30950 +
                          (C32877 - (C33311 * C30948) / C30950) / p;
    const double C26858 = C33676 - (C26840 * C33597) / p - C33677 -
                          (C30986 * C33634) / C30950 +
                          (C26857 - (C30953 * C30948) / C30950) / p;
    const double C26907 = -((C26840 * C33603) / p + (C30986 * C33638) / C30950);
    const double C26952 = -((C26840 * C33605) / p + (C30986 * C33639) / C30950);
    const double C27000 =
        C33678 - (C26983 * C33597) / p - C33679 - (C31045 * C33634) / C30950;
    const double C27048 = (C27047 - (C31029 * C30948) / C30950) / p -
                          ((C26983 * C33603) / p + (C31045 * C33638) / C30950);
    const double C27095 = -((C26983 * C33605) / p + (C31045 * C33639) / C30950);
    const double C27143 =
        C33680 - (C27126 * C33597) / p - C33681 - (C31118 * C33634) / C30950;
    const double C27190 = -((C27126 * C33603) / p + (C31118 * C33638) / C30950);
    const double C27236 = (C27235 - (C31102 * C30948) / C30950) / p -
                          ((C27126 * C33605) / p + (C31118 * C33639) / C30950);
    const double C28189 = (C28188 - (C31853 * C30948) / C30950) / p -
                          ((C28172 * C33597) / p + (C31882 * C33634) / C30950);
    const double C28236 =
        C33676 - (C28172 * C33603) / p - C33677 - (C31882 * C33638) / C30950;
    const double C28281 = -((C28172 * C33605) / p + (C31882 * C33639) / C30950);
    const double C28327 = -((C28311 * C33597) / p + (C31940 * C33634) / C30950);
    const double C28373 = C33678 - (C28311 * C33603) / p - C33679 -
                          (C31940 * C33638) / C30950 +
                          (C28372 - (C31925 * C30948) / C30950) / p;
    const double C28420 = -((C28311 * C33605) / p + (C31940 * C33639) / C30950);
    const double C28466 = -((C28450 * C33597) / p + (C32012 * C33634) / C30950);
    const double C28511 =
        C33680 - (C28450 * C33603) / p - C33681 - (C32012 * C33638) / C30950;
    const double C28557 = (C28556 - (C31997 * C30948) / C30950) / p -
                          ((C28450 * C33605) / p + (C32012 * C33639) / C30950);
    const double C29491 = (C29490 - (C32733 * C30948) / C30950) / p -
                          ((C29474 * C33597) / p + (C32762 * C33634) / C30950);
    const double C29538 = -((C29474 * C33603) / p + (C32762 * C33638) / C30950);
    const double C29583 =
        C33676 - (C29474 * C33605) / p - C33677 - (C32762 * C33639) / C30950;
    const double C29629 = -((C29613 * C33597) / p + (C32820 * C33634) / C30950);
    const double C29675 = (C29674 - (C32805 * C30948) / C30950) / p -
                          ((C29613 * C33603) / p + (C32820 * C33638) / C30950);
    const double C29722 =
        C33678 - (C29613 * C33605) / p - C33679 - (C32820 * C33639) / C30950;
    const double C29768 = -((C29752 * C33597) / p + (C32892 * C33634) / C30950);
    const double C29813 = -((C29752 * C33603) / p + (C32892 * C33638) / C30950);
    const double C29859 = C33680 - (C29752 * C33605) / p - C33681 -
                          (C32892 * C33639) / C30950 +
                          (C29858 - (C32877 * C30948) / C30950) / p;
    const double C33649 = C33614 / C30950;
    const double C33650 = C33615 / C30950;
    const double C33663 = C33623 / C30950;
    const double C33664 = C33624 / C30950;
    const double C33669 = C33628 / C30950;
    const double C33670 = C33629 / C30950;
    const double C27688 = C33688 - (C26858 * C33597) / p - C33689 -
                          (C31243 * C33634) / C30950 +
                          (3 * (C26840 - (C30986 * C30948) / C30950)) / C33602;
    const double C27717 = -((C26858 * C33603) / p + (C31243 * C33638) / C30950);
    const double C27746 = -((C26858 * C33605) / p + (C31243 * C33639) / C30950);
    const double C27776 = -((C26952 * C33603) / p + (C31302 * C33638) / C30950);
    const double C27821 =
        C33692 - (C27048 * C33597) / p - C33693 - (C31334 * C33634) / C30950;
    const double C27893 = -((C27048 * C33605) / p + (C31334 * C33639) / C30950);
    const double C27836 = C33632 * C29453 - (C27095 * C33597) / p -
                          (C31346 * C33598) / C33633 -
                          (C31350 * C33634) / C30950;
    const double C27938 =
        C33694 - (C27190 * C33597) / p - C33695 - (C31393 * C33634) / C30950;
    const double C27953 =
        C33696 - (C27236 * C33597) / p - C33697 - (C31424 * C33634) / C30950;
    const double C27982 = -((C27236 * C33603) / p + (C31424 * C33638) / C30950);
    const double C28994 = (3 * (C28172 - (C31882 * C30948) / C30950)) / C33602 -
                          ((C28189 * C33597) / p + (C32133 * C33634) / C30950);
    const double C29023 =
        C33688 - (C28189 * C33603) / p - C33689 - (C32133 * C33638) / C30950;
    const double C29052 = -((C28189 * C33605) / p + (C32133 * C33639) / C30950);
    const double C29082 = C33632 * C28081 - (C28281 * C33603) / p -
                          (C32187 * C33598) / C33633 -
                          (C32192 * C33638) / C30950;
    const double C29126 = -((C28373 * C33597) / p + (C32222 * C33634) / C30950);
    const double C29199 = -((C28373 * C33605) / p + (C32222 * C33639) / C30950);
    const double C29141 = -((C28420 * C33597) / p + (C32237 * C33634) / C30950);
    const double C29243 = -((C28511 * C33597) / p + (C32280 * C33634) / C30950);
    const double C29258 = -((C28557 * C33597) / p + (C32309 * C33634) / C30950);
    const double C29288 =
        C33696 - (C28557 * C33603) / p - C33697 - (C32309 * C33638) / C30950;
    const double C30296 = (3 * (C29474 - (C32762 * C30948) / C30950)) / C33602 -
                          ((C29491 * C33597) / p + (C33013 * C33634) / C30950);
    const double C30325 = -((C29491 * C33603) / p + (C33013 * C33638) / C30950);
    const double C30354 =
        C33688 - (C29491 * C33605) / p - C33689 - (C33013 * C33639) / C30950;
    const double C30384 = -((C29583 * C33603) / p + (C33071 * C33638) / C30950);
    const double C30428 = -((C29675 * C33597) / p + (C33101 * C33634) / C30950);
    const double C30500 =
        C33692 - (C29675 * C33605) / p - C33693 - (C33101 * C33639) / C30950;
    const double C30443 = -((C29722 * C33597) / p + (C33116 * C33634) / C30950);
    const double C30544 = -((C29813 * C33597) / p + (C33159 * C33634) / C30950);
    const double C30559 = -((C29859 * C33597) / p + (C33188 * C33634) / C30950);
    const double C30588 = -((C29859 * C33603) / p + (C33188 * C33638) / C30950);
    const double C33690 = C26983 - C33649;
    const double C33691 = C27126 - C33650;
    const double C33717 = C28311 - C33663;
    const double C33718 = C28450 - C33664;
    const double C33724 = C29613 - C33669;
    const double C33725 = C29752 - C33670;
    const double C27761 = C33632 * C27803 - (C27000 * C33597) / p -
                          (C31283 * C33598) / C33633 -
                          (C31287 * C33634) / C30950 + C33690 / C33602;
    const double C27864 = (3 * C33690) / C33602 -
                          ((C27048 * C33603) / p + (C31334 * C33638) / C30950);
    const double C33731 = C33691 / C33602;
    const double C28010 = (3 * C33691) / C33602 -
                          ((C27236 * C33605) / p + (C31424 * C33639) / C30950);
    const double C29067 =
        C33717 / C33602 - ((C28327 * C33597) / p + (C32176 * C33634) / C30950);
    const double C29170 = C33692 - (C28373 * C33603) / p - C33693 -
                          (C32222 * C33638) / C30950 + (3 * C33717) / C33602;
    const double C33743 = C33718 / C33602;
    const double C29316 = (3 * C33718) / C33602 -
                          ((C28557 * C33605) / p + (C32309 * C33639) / C30950);
    const double C30369 =
        C33724 / C33602 - ((C29629 * C33597) / p + (C33056 * C33634) / C30950);
    const double C30471 = (3 * C33724) / C33602 -
                          ((C29675 * C33603) / p + (C33101 * C33638) / C30950);
    const double C33747 = C33725 / C33602;
    const double C30617 = C33696 - (C29859 * C33605) / p - C33697 -
                          (C33188 * C33639) / C30950 + (3 * C33725) / C33602;
    const double C27791 = C33632 * C27920 - (C27143 * C33597) / p -
                          (C31314 * C33598) / C33633 -
                          (C31318 * C33634) / C30950 + C33731;
    const double C27908 =
        C33731 - ((C27190 * C33603) / p + (C31393 * C33638) / C30950);
    const double C29097 =
        C33743 - ((C28466 * C33597) / p + (C32207 * C33634) / C30950);
    const double C29214 = C33694 - (C28511 * C33603) / p - C33695 -
                          (C32280 * C33638) / C30950 + C33743;
    const double C30399 =
        C33747 - ((C29768 * C33597) / p + (C33086 * C33634) / C30950);
    const double C30515 =
        C33747 - ((C29813 * C33603) / p + (C33159 * C33638) / C30950);
    vrx[0] = C26840;
    vrx[1] = C26857;
    vrx[2] = C26858;
    vrx[3] = C26907;
    vrx[4] = C26952;
    vrx[5] = C26983;
    vrx[6] = C27000;
    vrx[7] = C27047;
    vrx[8] = C27048;
    vrx[9] = C27095;
    vrx[10] = C27126;
    vrx[11] = C27143;
    vrx[12] = C27190;
    vrx[13] = C27235;
    vrx[14] = C27236;
    vrx[15] = C27270;
    vrx[16] = C27373;
    vrx[17] = C27405;
    vrx[18] = C27540;
    vrx[19] = C27672;
    vrx[20] = C27688;
    vrx[21] = C27717;
    vrx[22] = C27746;
    vrx[23] = C27761;
    vrx[24] = C27776;
    vrx[25] = C27791;
    vrx[26] = C27821;
    vrx[27] = C27836;
    vrx[28] = C27864;
    vrx[29] = C27893;
    vrx[30] = C27908;
    vrx[31] = C27938;
    vrx[32] = C27953;
    vrx[33] = C27982;
    vrx[34] = C28010;
    vry[0] = C28172;
    vry[1] = C28188;
    vry[2] = C28189;
    vry[3] = C28236;
    vry[4] = C28281;
    vry[5] = C28311;
    vry[6] = C28327;
    vry[7] = C28372;
    vry[8] = C28373;
    vry[9] = C28420;
    vry[10] = C28450;
    vry[11] = C28466;
    vry[12] = C28511;
    vry[13] = C28556;
    vry[14] = C28557;
    vry[15] = C28589;
    vry[16] = C28689;
    vry[17] = C28720;
    vry[18] = C28851;
    vry[19] = C28979;
    vry[20] = C28994;
    vry[21] = C29023;
    vry[22] = C29052;
    vry[23] = C29067;
    vry[24] = C29082;
    vry[25] = C29097;
    vry[26] = C29126;
    vry[27] = C29141;
    vry[28] = C29170;
    vry[29] = C29199;
    vry[30] = C29214;
    vry[31] = C29243;
    vry[32] = C29258;
    vry[33] = C29288;
    vry[34] = C29316;
    vrz[0] = C29474;
    vrz[1] = C29490;
    vrz[2] = C29491;
    vrz[3] = C29538;
    vrz[4] = C29583;
    vrz[5] = C29613;
    vrz[6] = C29629;
    vrz[7] = C29674;
    vrz[8] = C29675;
    vrz[9] = C29722;
    vrz[10] = C29752;
    vrz[11] = C29768;
    vrz[12] = C29813;
    vrz[13] = C29858;
    vrz[14] = C29859;
    vrz[15] = C29891;
    vrz[16] = C29991;
    vrz[17] = C30022;
    vrz[18] = C30153;
    vrz[19] = C30281;
    vrz[20] = C30296;
    vrz[21] = C30325;
    vrz[22] = C30354;
    vrz[23] = C30369;
    vrz[24] = C30384;
    vrz[25] = C30399;
    vrz[26] = C30428;
    vrz[27] = C30443;
    vrz[28] = C30471;
    vrz[29] = C30500;
    vrz[30] = C30515;
    vrz[31] = C30544;
    vrz[32] = C30559;
    vrz[33] = C30588;
    vrz[34] = C30617;
}
