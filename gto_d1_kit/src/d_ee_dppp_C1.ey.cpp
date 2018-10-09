/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2111_3_vr(const double ae,
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
    const double C18145 = g[136];
    const double C18164 = g[137];
    const double C18179 = g[138];
    const double C18194 = g[139];
    const double C18260 = g[140];
    const double C18275 = g[141];
    const double C18305 = g[142];
    const double C18320 = g[143];
    const double C18336 = g[144];
    const double C18363 = g[145];
    const double C18404 = g[146];
    const double C18485 = g[147];
    const double C18512 = g[148];
    const double C18539 = g[149];
    const double C18606 = g[150];
    const double C18621 = g[151];
    const double C18710 = g[152];
    const double C18753 = g[153];
    const double C18768 = g[154];
    const double C18783 = g[155];
    const double C18798 = g[156];
    const double C18866 = g[157];
    const double C18880 = g[158];
    const double C18921 = g[159];
    const double C18937 = g[160];
    const double C18958 = g[161];
    const double C18986 = g[162];
    const double C19041 = g[163];
    const double C19135 = g[164];
    const double C19176 = g[165];
    const double C19191 = g[166];
    const double C19206 = g[167];
    const double C19221 = g[168];
    const double C19302 = g[169];
    const double C19324 = g[170];
    const double C19393 = g[171];
    const double C19422 = g[172];
    const double C19436 = g[173];
    const double C19484 = g[174];
    const double C19525 = g[175];
    const double C19575 = g[176];
    const double C19760 = g[177];
    const double C20129 = g[178];
    const double C20144 = g[179];
    const double C20200 = g[180];
    const double C20439 = g[181];
    const double C20574 = g[182];
    const double C20710 = g[183];
    const double C20799 = g[184];
    const double C20983 = g[185];
    const double C21626 = g[186];
    const double C22263 = g[187];
    const double C22434 = g[188];
    const double C18148 = p + q;
    const double C18147 = p * q;
    const double C22528 = bs[6];
    const double C22527 = bs[5];
    const double C22525 = bs[4];
    const double C22523 = bs[3];
    const double C22520 = bs[2];
    const double C22515 = std::pow(Pi, 2.5);
    const double C22514 = ce * de;
    const double C22513 = bs[0];
    const double C22510 = bs[1];
    const double C22506 = zP - zQ;
    const double C22505 = be * zAB;
    const double C22504 = yP - yQ;
    const double C22503 = be * yAB;
    const double C22502 = 2 * p;
    const double C22500 = xP - xQ;
    const double C22499 = be * xAB;
    const double C18149 = C18148 * p;
    const double C22516 = std::sqrt(C18148);
    const double C22512 = q * C18148;
    const double C22511 = C18147 * ce;
    const double C22498 = C18148 * C18147;
    const double C22497 = ce * C18147;
    const double C22571 = 4 * C22515;
    const double C22570 = kab * C22514;
    const double C22557 = C22506 * C18147;
    const double C22556 = C22504 * C18147;
    const double C22552 = C22500 * C18147;
    const double C22572 = C18147 * C22516;
    const double C22569 = kab * C22511;
    const double C22604 = C20574 * C22497;
    const double C22600 = C20144 * C22497;
    const double C22595 = C19575 * C22497;
    const double C22593 = C19484 * C22497;
    const double C22592 = C19436 * C22497;
    const double C22591 = C19422 * C22497;
    const double C22589 = C19302 * C22497;
    const double C22588 = C19221 * C22497;
    const double C22585 = C19176 * C22497;
    const double C22584 = C19135 * C22497;
    const double C22583 = C19041 * C22497;
    const double C22582 = C18986 * C22497;
    const double C22581 = C18958 * C22497;
    const double C22580 = C18937 * C22497;
    const double C22578 = C18880 * C22497;
    const double C22577 = C18866 * C22497;
    const double C22576 = C18783 * C22497;
    const double C22575 = C18768 * C22497;
    const double C22567 = C18621 * C22497;
    const double C22566 = C18539 * C22497;
    const double C22565 = C18512 * C22497;
    const double C22564 = C18485 * C22497;
    const double C22563 = C18363 * C22497;
    const double C22562 = C18336 * C22497;
    const double C22560 = C18305 * C22497;
    const double C22558 = C18260 * C22497;
    const double C22555 = C18194 * C22497;
    const double C22554 = C18179 * C22497;
    const double C22551 = C18145 * C22497;
    const double C22636 = kcd * C22570;
    const double C22635 = kcd * C22569;
    const double C22668 = C22604 / C22498;
    const double C22664 = C22600 / C22498;
    const double C22659 = C22595 / C22498;
    const double C22657 = C22593 / C22498;
    const double C22656 = C22592 / C22498;
    const double C22655 = C22591 / C22498;
    const double C22653 = C22589 / C22498;
    const double C22652 = C22588 / C22498;
    const double C22649 = C22585 / C22498;
    const double C22648 = C22584 / C22498;
    const double C22647 = C22583 / C22498;
    const double C22646 = C22582 / C22498;
    const double C22645 = C22581 / C22498;
    const double C22644 = C22580 / C22498;
    const double C22642 = C22578 / C22498;
    const double C22641 = C22577 / C22498;
    const double C22640 = C22576 / C22498;
    const double C22639 = C22575 / C22498;
    const double C22633 = C22567 / C22498;
    const double C22632 = C22566 / C22498;
    const double C22631 = C22565 / C22498;
    const double C22630 = C22564 / C22498;
    const double C22629 = C22563 / C22498;
    const double C22628 = C22562 / C22498;
    const double C22626 = C22560 / C22498;
    const double C22624 = C22558 / C22498;
    const double C22623 = C22555 / C22498;
    const double C22622 = C22554 / C22498;
    const double C22620 = C22551 / C22498;
    const double C22704 = C22527 * C22636;
    const double C22702 = C22525 * C22636;
    const double C22699 = C22523 * C22636;
    const double C22696 = C22520 * C22636;
    const double C22693 = C22510 * C22636;
    const double C22687 = C22513 * C22636;
    const double C22703 = C22528 * C22635;
    const double C22701 = C22527 * C22635;
    const double C22698 = C22525 * C22635;
    const double C22695 = C22523 * C22635;
    const double C22692 = C22520 * C22635;
    const double C22686 = C22510 * C22635;
    const double C19579 =
        (((C22500 * C22703) / C22512 - (xCD * C22704) / q) * C22571) / C22572;
    const double C21023 =
        (((C22504 * C22703) / C22512 - (yCD * C22704) / q) * C22571) / C22572;
    const double C22461 =
        (((C22506 * C22703) / C22512 - (zCD * C22704) / q) * C22571) / C22572;
    const double C19488 =
        (((C22500 * C22701) / C22512 - (xCD * C22702) / q) * C22571) / C22572;
    const double C20933 =
        (((C22504 * C22701) / C22512 - (yCD * C22702) / q) * C22571) / C22572;
    const double C22371 =
        (((C22506 * C22701) / C22512 - (zCD * C22702) / q) * C22571) / C22572;
    const double C19306 =
        (((C22500 * C22698) / C22512 - (xCD * C22699) / q) * C22571) / C22572;
    const double C20762 =
        (((C22504 * C22698) / C22512 - (yCD * C22699) / q) * C22571) / C22572;
    const double C22200 =
        (((C22506 * C22698) / C22512 - (zCD * C22699) / q) * C22571) / C22572;
    const double C18926 =
        (((C22500 * C22695) / C22512 - (xCD * C22696) / q) * C22571) / C22572;
    const double C20381 =
        (((C22504 * C22695) / C22512 - (yCD * C22696) / q) * C22571) / C22572;
    const double C21822 =
        (((C22506 * C22695) / C22512 - (zCD * C22696) / q) * C22571) / C22572;
    const double C18168 =
        (((C22500 * C22692) / C22512 - (xCD * C22693) / q) * C22571) / C22572;
    const double C19642 =
        (((C22504 * C22692) / C22512 - (yCD * C22693) / q) * C22571) / C22572;
    const double C21086 =
        (((C22506 * C22692) / C22512 - (zCD * C22693) / q) * C22571) / C22572;
    const double C11477 =
        (((C22500 * C22686) / C22512 - (xCD * C22687) / q) * C22571) / C22572;
    const double C14278 =
        (((C22504 * C22686) / C22512 - (yCD * C22687) / q) * C22571) / C22572;
    const double C17072 =
        (((C22506 * C22686) / C22512 - (zCD * C22687) / q) * C22571) / C22572;
    const double C22526 = C19488 * C18147;
    const double C19529 =
        C22659 - (C19488 * C22499) / p - (C19579 * C22552) / C18149;
    const double C19543 = -((C19488 * C22503) / p + (C19579 * C22556) / C18149);
    const double C19557 = -((C19488 * C22505) / p + (C19579 * C22557) / C18149);
    const double C22539 = C20933 * C18147;
    const double C20973 = -((C20933 * C22499) / p + (C21023 * C22552) / C18149);
    const double C20988 =
        C22659 - (C20933 * C22503) / p - (C21023 * C22556) / C18149;
    const double C21002 = -((C20933 * C22505) / p + (C21023 * C22557) / C18149);
    const double C22550 = C22371 * C18147;
    const double C22411 = -((C22371 * C22499) / p + (C22461 * C22552) / C18149);
    const double C22425 = -((C22371 * C22503) / p + (C22461 * C22556) / C18149);
    const double C22440 =
        C22659 - (C22371 * C22505) / p - (C22461 * C22557) / C18149;
    const double C22524 = C19306 * C18147;
    const double C19328 =
        C22657 - (C19306 * C22499) / p - (C19488 * C22552) / C18149;
    const double C19342 = -((C19306 * C22503) / p + (C19488 * C22556) / C18149);
    const double C19369 = -((C19306 * C22505) / p + (C19488 * C22557) / C18149);
    const double C22538 = C20762 * C18147;
    const double C20776 = -((C20762 * C22499) / p + (C20933 * C22552) / C18149);
    const double C20804 =
        C22657 - (C20762 * C22503) / p - (C20933 * C22556) / C18149;
    const double C20831 = -((C20762 * C22505) / p + (C20933 * C22557) / C18149);
    const double C22549 = C22200 * C18147;
    const double C22214 = -((C22200 * C22499) / p + (C22371 * C22552) / C18149);
    const double C22241 = -((C22200 * C22503) / p + (C22371 * C22556) / C18149);
    const double C22269 =
        C22657 - (C22200 * C22505) / p - (C22371 * C22557) / C18149;
    const double C22519 = C18926 * C18147;
    const double C18925 =
        C22653 - (C18926 * C22499) / p - (C19306 * C22552) / C18149;
    const double C19004 = -((C18926 * C22503) / p + (C19306 * C22556) / C18149);
    const double C19059 = -((C18926 * C22505) / p + (C19306 * C22557) / C18149);
    const double C22535 = C20381 * C18147;
    const double C20395 = -((C20381 * C22499) / p + (C20762 * C22552) / C18149);
    const double C20444 =
        C22653 - (C20381 * C22503) / p - (C20762 * C22556) / C18149;
    const double C20498 = -((C20381 * C22505) / p + (C20762 * C22557) / C18149);
    const double C22546 = C21822 * C18147;
    const double C21836 = -((C21822 * C22499) / p + (C22200 * C22552) / C18149);
    const double C21884 = -((C21822 * C22503) / p + (C22200 * C22556) / C18149);
    const double C21938 =
        C22653 - (C21822 * C22505) / p - (C22200 * C22557) / C18149;
    const double C22501 = C18168 * C18147;
    const double C18153 =
        C22644 - (C18168 * C22499) / p - (C18926 * C22552) / C18149;
    const double C18264 = -((C18168 * C22503) / p + (C18926 * C22556) / C18149);
    const double C18309 = -((C18168 * C22505) / p + (C18926 * C22557) / C18149);
    const double C22529 = C19642 * C18147;
    const double C19627 = -((C19642 * C22499) / p + (C20381 * C22552) / C18149);
    const double C19735 =
        C22644 - (C19642 * C22503) / p - (C20381 * C22556) / C18149;
    const double C19779 = -((C19642 * C22505) / p + (C20381 * C22557) / C18149);
    const double C22540 = C21086 * C18147;
    const double C21071 = -((C21086 * C22499) / p + (C21822 * C22552) / C18149);
    const double C21179 = -((C21086 * C22503) / p + (C21822 * C22556) / C18149);
    const double C21222 =
        C22644 - (C21086 * C22505) / p - (C21822 * C22557) / C18149;
    const double C9350 =
        C22623 - (C11477 * C22499) / p - (C18168 * C22552) / C18149;
    const double C9987 = -((C11477 * C22503) / p + (C18168 * C22556) / C18149);
    const double C10621 = -((C11477 * C22505) / p + (C18168 * C22557) / C18149);
    const double C12213 = -((C14278 * C22499) / p + (C19642 * C22552) / C18149);
    const double C12830 =
        C22623 - (C14278 * C22503) / p - (C19642 * C22556) / C18149;
    const double C13448 = -((C14278 * C22505) / p + (C19642 * C22557) / C18149);
    const double C15007 = -((C17072 * C22499) / p + (C21086 * C22552) / C18149);
    const double C15624 = -((C17072 * C22503) / p + (C21086 * C22556) / C18149);
    const double C16242 =
        C22623 - (C17072 * C22505) / p - (C21086 * C22557) / C18149;
    const double C22594 = C22526 / C18149;
    const double C22608 = C22539 / C18149;
    const double C22619 = C22550 / C18149;
    const double C22590 = C22524 / C18149;
    const double C22607 = C22538 / C18149;
    const double C22618 = C22549 / C18149;
    const double C22579 = C22519 / C18149;
    const double C22603 = C22535 / C18149;
    const double C22615 = C22546 / C18149;
    const double C22553 = C22501 / C18149;
    const double C18610 = -((C18309 * C22503) / p + (C19059 * C22556) / C18149);
    const double C22596 = C22529 / C18149;
    const double C20072 =
        C22668 - (C19779 * C22503) / p - (C20498 * C22556) / C18149;
    const double C22609 = C22540 / C18149;
    const double C21515 = -((C21222 * C22503) / p + (C21938 * C22556) / C18149);
    const double C9593 =
        C22624 - (C9987 * C22499) / p - (C18264 * C22552) / C18149;
    const double C9730 =
        C22626 - (C10621 * C22499) / p - (C18309 * C22552) / C18149;
    const double C10320 = -((C10621 * C22503) / p + (C18309 * C22556) / C18149);
    const double C12450 = -((C12830 * C22499) / p + (C19735 * C22552) / C18149);
    const double C12583 = -((C13448 * C22499) / p + (C19779 * C22552) / C18149);
    const double C13155 =
        C22626 - (C13448 * C22503) / p - (C19779 * C22556) / C18149;
    const double C15244 = -((C15624 * C22499) / p + (C21179 * C22552) / C18149);
    const double C15377 = -((C16242 * C22499) / p + (C21222 * C22552) / C18149);
    const double C15949 = -((C16242 * C22503) / p + (C21222 * C22556) / C18149);
    const double C22658 = C19306 - C22594;
    const double C22672 = C20762 - C22608;
    const double C22683 = C22200 - C22619;
    const double C22654 = C18926 - C22590;
    const double C22671 = C20381 - C22607;
    const double C22682 = C21822 - C22618;
    const double C22643 = C18168 - C22579;
    const double C22667 = C19642 - C22603;
    const double C22679 = C21086 - C22615;
    const double C22621 = C11477 - C22553;
    const double C22660 = C14278 - C22596;
    const double C22673 = C17072 - C22609;
    const double C11039 = (C18606 * C22497) / C22498 - (C10320 * C22499) / p -
                          (C18610 * C22552) / C18149;
    const double C13854 = -((C13155 * C22499) / p + (C20072 * C22552) / C18149);
    const double C16648 = -((C15949 * C22499) / p + (C21515 * C22552) / C18149);
    const double C22700 = C22658 / C22502;
    const double C22713 = C22672 / C22502;
    const double C22722 = C22683 / C22502;
    const double C22697 = C22654 / C22502;
    const double C22712 = C22671 / C22502;
    const double C22721 = C22682 / C22502;
    const double C22691 = C22643 / C22502;
    const double C22710 = C22667 / C22502;
    const double C22719 = C22679 / C22502;
    const double C22684 = C22621 / C22502;
    const double C22705 = C22660 / C22502;
    const double C22714 = C22673 / C22502;
    const double C19397 = (C19525 * C22497) / C22498 - (C19328 * C22499) / p -
                          (C19529 * C22552) / C18149 + C22700;
    const double C19411 =
        C22700 - ((C19342 * C22503) / p + (C19543 * C22556) / C18149);
    const double C19440 =
        C22700 - ((C19369 * C22505) / p + (C19557 * C22557) / C18149);
    const double C20845 =
        C22713 - ((C20776 * C22499) / p + (C20973 * C22552) / C18149);
    const double C20859 = (C20983 * C22497) / C22498 - (C20804 * C22503) / p -
                          (C20988 * C22556) / C18149 + C22713;
    const double C20886 =
        C22713 - ((C20831 * C22505) / p + (C21002 * C22557) / C18149);
    const double C22283 =
        C22722 - ((C22214 * C22499) / p + (C22411 * C22552) / C18149);
    const double C22297 =
        C22722 - ((C22241 * C22503) / p + (C22425 * C22556) / C18149);
    const double C22324 = (C22434 * C22497) / C22498 - (C22269 * C22505) / p -
                          (C22440 * C22557) / C18149 + C22722;
    const double C18962 = (C19324 * C22497) / C22498 - (C18925 * C22499) / p -
                          (C19328 * C22552) / C18149 + C22697;
    const double C18990 =
        C22697 - ((C19004 * C22503) / p + (C19342 * C22556) / C18149);
    const double C19045 =
        C22697 - ((C19059 * C22505) / p + (C19369 * C22557) / C18149);
    const double C20416 =
        C22712 - ((C20395 * C22499) / p + (C20776 * C22552) / C18149);
    const double C20458 = (C20799 * C22497) / C22498 - (C20444 * C22503) / p -
                          (C20804 * C22556) / C18149 + C22712;
    const double C20512 =
        C22712 - ((C20498 * C22505) / p + (C20831 * C22557) / C18149);
    const double C21857 =
        C22721 - ((C21836 * C22499) / p + (C22214 * C22552) / C18149);
    const double C21898 =
        C22721 - ((C21884 * C22503) / p + (C22241 * C22556) / C18149);
    const double C21952 = (C22263 * C22497) / C22498 - (C21938 * C22505) / p -
                          (C22269 * C22557) / C18149 + C22721;
    const double C18152 = (C18921 * C22497) / C22498 - (C18153 * C22499) / p -
                          (C18925 * C22552) / C18149 + C22691;
    const double C18280 =
        C22691 - ((C18264 * C22503) / p + (C19004 * C22556) / C18149);
    const double C18325 =
        C22691 - ((C18309 * C22505) / p + (C19059 * C22557) / C18149);
    const double C19628 =
        C22710 - ((C19627 * C22499) / p + (C20395 * C22552) / C18149);
    const double C19749 = (C20439 * C22497) / C22498 - (C19735 * C22503) / p -
                          (C20444 * C22556) / C18149 + C22710;
    const double C19793 =
        C22710 - ((C19779 * C22505) / p + (C20498 * C22557) / C18149);
    const double C21072 =
        C22719 - ((C21071 * C22499) / p + (C21836 * C22552) / C18149);
    const double C21193 =
        C22719 - ((C21179 * C22503) / p + (C21884 * C22556) / C18149);
    const double C21236 =
        C22668 - (C21222 * C22505) / p - (C21938 * C22557) / C18149 + C22719;
    const double C9318 = (C18164 * C22497) / C22498 - (C9350 * C22499) / p -
                         (C18153 * C22552) / C18149 + C22684;
    const double C9867 =
        C22684 - ((C9987 * C22503) / p + (C18264 * C22556) / C18149);
    const double C10412 =
        C22684 - ((C10621 * C22505) / p + (C18309 * C22557) / C18149);
    const double C12183 =
        C22705 - ((C12213 * C22499) / p + (C19627 * C22552) / C18149);
    const double C12716 =
        C22624 - (C12830 * C22503) / p - (C19735 * C22556) / C18149 + C22705;
    const double C13245 =
        C22705 - ((C13448 * C22505) / p + (C19779 * C22557) / C18149);
    const double C14977 =
        C22714 - ((C15007 * C22499) / p + (C21071 * C22552) / C18149);
    const double C15510 =
        C22714 - ((C15624 * C22503) / p + (C21179 * C22556) / C18149);
    const double C16039 =
        C22626 - (C16242 * C22505) / p - (C21222 * C22557) / C18149 + C22714;
    const double C19139 = (C19393 * C22497) / C22498 - (C18962 * C22499) / p -
                          (C19397 * C22552) / C18149 +
                          (C18925 - (C19328 * C18147) / C18149) / p;
    const double C22521 = C18990 * C18147;
    const double C19180 = (C19004 - (C19342 * C18147) / C18149) / p -
                          ((C18990 * C22503) / p + (C19411 * C22556) / C18149);
    const double C19195 =
        C22655 - (C18990 * C22499) / p - (C19411 * C22552) / C18149;
    const double C22522 = C19045 * C18147;
    const double C19210 =
        C22656 - (C19045 * C22499) / p - (C19440 * C22552) / C18149;
    const double C19225 = (C19059 - (C19369 * C18147) / C18149) / p -
                          ((C19045 * C22505) / p + (C19440 * C22557) / C18149);
    const double C19265 = -((C19045 * C22503) / p + (C19440 * C22556) / C18149);
    const double C20592 = (C20395 - (C20776 * C18147) / C18149) / p -
                          ((C20416 * C22499) / p + (C20845 * C22552) / C18149);
    const double C22536 = C20458 * C18147;
    const double C20632 = C22655 - (C20458 * C22503) / p -
                          (C20859 * C22556) / C18149 +
                          (C20444 - (C20804 * C18147) / C18149) / p;
    const double C20646 = -((C20458 * C22499) / p + (C20859 * C22552) / C18149);
    const double C22537 = C20512 * C18147;
    const double C20660 = -((C20512 * C22499) / p + (C20886 * C22552) / C18149);
    const double C20674 = (C20498 - (C20831 * C18147) / C18149) / p -
                          ((C20512 * C22505) / p + (C20886 * C22557) / C18149);
    const double C20715 =
        C22656 - (C20512 * C22503) / p - (C20886 * C22556) / C18149;
    const double C22031 = (C21836 - (C22214 * C18147) / C18149) / p -
                          ((C21857 * C22499) / p + (C22283 * C22552) / C18149);
    const double C22547 = C21898 * C18147;
    const double C22071 = (C21884 - (C22241 * C18147) / C18149) / p -
                          ((C21898 * C22503) / p + (C22297 * C22556) / C18149);
    const double C22085 = -((C21898 * C22499) / p + (C22297 * C22552) / C18149);
    const double C22548 = C21952 * C18147;
    const double C22099 = -((C21952 * C22499) / p + (C22324 * C22552) / C18149);
    const double C22113 = C22656 - (C21952 * C22505) / p -
                          (C22324 * C22557) / C18149 +
                          (C21938 - (C22269 * C18147) / C18149) / p;
    const double C22153 = -((C21952 * C22503) / p + (C22324 * C22556) / C18149);
    const double C18183 = C22645 - (C18152 * C22499) / p -
                          (C18962 * C22552) / C18149 +
                          (C18153 - (C18925 * C18147) / C18149) / p;
    const double C18294 = -((C18152 * C22505) / p + (C18962 * C22557) / C18149);
    const double C22507 = C18280 * C18147;
    const double C18279 =
        C22646 - (C18280 * C22499) / p - (C18990 * C22552) / C18149;
    const double C18367 = (C18264 - (C19004 * C18147) / C18149) / p -
                          ((C18280 * C22503) / p + (C18990 * C22556) / C18149);
    const double C18408 = -((C18280 * C22505) / p + (C18990 * C22557) / C18149);
    const double C22508 = C18325 * C18147;
    const double C18324 =
        C22647 - (C18325 * C22499) / p - (C19045 * C22552) / C18149;
    const double C18474 = -((C18325 * C22503) / p + (C19045 * C22556) / C18149);
    const double C18543 = (C18309 - (C19059 * C18147) / C18149) / p -
                          ((C18325 * C22505) / p + (C19045 * C22557) / C18149);
    const double C19656 = (C19627 - (C20395 * C18147) / C18149) / p -
                          ((C19628 * C22499) / p + (C20416 * C22552) / C18149);
    const double C19765 = -((C19628 * C22505) / p + (C20416 * C22557) / C18149);
    const double C22530 = C19749 * C18147;
    const double C19750 = -((C19749 * C22499) / p + (C20458 * C22552) / C18149);
    const double C19834 = C22646 - (C19749 * C22503) / p -
                          (C20458 * C22556) / C18149 +
                          (C19735 - (C20444 * C18147) / C18149) / p;
    const double C19874 = -((C19749 * C22505) / p + (C20458 * C22557) / C18149);
    const double C22531 = C19793 * C18147;
    const double C19794 = -((C19793 * C22499) / p + (C20512 * C22552) / C18149);
    const double C19940 =
        C22647 - (C19793 * C22503) / p - (C20512 * C22556) / C18149;
    const double C20006 = (C19779 - (C20498 * C18147) / C18149) / p -
                          ((C19793 * C22505) / p + (C20512 * C22557) / C18149);
    const double C21100 = (C21071 - (C21836 * C18147) / C18149) / p -
                          ((C21072 * C22499) / p + (C21857 * C22552) / C18149);
    const double C21208 =
        C22645 - (C21072 * C22505) / p - (C21857 * C22557) / C18149;
    const double C22541 = C21193 * C18147;
    const double C21194 = -((C21193 * C22499) / p + (C21898 * C22552) / C18149);
    const double C21277 = (C21179 - (C21884 * C18147) / C18149) / p -
                          ((C21193 * C22503) / p + (C21898 * C22556) / C18149);
    const double C21317 =
        C22646 - (C21193 * C22505) / p - (C21898 * C22557) / C18149;
    const double C22542 = C21236 * C18147;
    const double C21237 = -((C21236 * C22499) / p + (C21952 * C22552) / C18149);
    const double C21383 = -((C21236 * C22503) / p + (C21952 * C22556) / C18149);
    const double C21449 = C22647 - (C21236 * C22505) / p -
                          (C21952 * C22557) / C18149 +
                          (C21222 - (C21938 * C18147) / C18149) / p;
    const double C9300 = C22620 - (C9318 * C22499) / p -
                         (C18152 * C22552) / C18149 +
                         (C9350 - (C18153 * C18147) / C18149) / p;
    const double C9444 = -((C9318 * C22503) / p + (C18152 * C22556) / C18149);
    const double C9532 = -((C9318 * C22505) / p + (C18152 * C22557) / C18149);
    const double C9850 =
        C22628 - (C9867 * C22499) / p - (C18280 * C22552) / C18149;
    const double C9988 = (C9987 - (C18264 * C18147) / C18149) / p -
                         ((C9867 * C22503) / p + (C18280 * C22556) / C18149);
    const double C10078 = -((C9867 * C22505) / p + (C18280 * C22557) / C18149);
    const double C10395 =
        C22630 - (C10412 * C22499) / p - (C18325 * C22552) / C18149;
    const double C10533 = -((C10412 * C22503) / p + (C18325 * C22556) / C18149);
    const double C10622 = (C10621 - (C18309 * C18147) / C18149) / p -
                          ((C10412 * C22505) / p + (C18325 * C22557) / C18149);
    const double C12166 = (C12213 - (C19627 * C18147) / C18149) / p -
                          ((C12183 * C22499) / p + (C19628 * C22552) / C18149);
    const double C12303 =
        C22620 - (C12183 * C22503) / p - (C19628 * C22556) / C18149;
    const double C12391 = -((C12183 * C22505) / p + (C19628 * C22557) / C18149);
    const double C12700 = -((C12716 * C22499) / p + (C19749 * C22552) / C18149);
    const double C12831 = C22628 - (C12716 * C22503) / p -
                          (C19749 * C22556) / C18149 +
                          (C12830 - (C19735 * C18147) / C18149) / p;
    const double C12921 = -((C12716 * C22505) / p + (C19749 * C22557) / C18149);
    const double C13229 = -((C13245 * C22499) / p + (C19793 * C22552) / C18149);
    const double C13360 =
        C22630 - (C13245 * C22503) / p - (C19793 * C22556) / C18149;
    const double C13449 = (C13448 - (C19779 * C18147) / C18149) / p -
                          ((C13245 * C22505) / p + (C19793 * C22557) / C18149);
    const double C14960 = (C15007 - (C21071 * C18147) / C18149) / p -
                          ((C14977 * C22499) / p + (C21072 * C22552) / C18149);
    const double C15097 = -((C14977 * C22503) / p + (C21072 * C22556) / C18149);
    const double C15185 =
        C22620 - (C14977 * C22505) / p - (C21072 * C22557) / C18149;
    const double C15494 = -((C15510 * C22499) / p + (C21193 * C22552) / C18149);
    const double C15625 = (C15624 - (C21179 * C18147) / C18149) / p -
                          ((C15510 * C22503) / p + (C21193 * C22556) / C18149);
    const double C15715 =
        C22628 - (C15510 * C22505) / p - (C21193 * C22557) / C18149;
    const double C16023 = -((C16039 * C22499) / p + (C21236 * C22552) / C18149);
    const double C16154 = -((C16039 * C22503) / p + (C21236 * C22556) / C18149);
    const double C16243 = C22630 - (C16039 * C22505) / p -
                          (C21236 * C22557) / C18149 +
                          (C16242 - (C21222 * C18147) / C18149) / p;
    const double C22586 = C22521 / C18149;
    const double C22587 = C22522 / C18149;
    const double C22605 = C22536 / C18149;
    const double C22606 = C22537 / C18149;
    const double C22616 = C22547 / C18149;
    const double C22617 = C22548 / C18149;
    const double C22509 = C18183 * C18147;
    const double C18625 = C22648 - (C18183 * C22499) / p -
                          (C19139 * C22552) / C18149 +
                          (3 * (C18152 - (C18962 * C18147) / C18149)) / C22502;
    const double C18672 = -((C18183 * C22503) / p + (C19139 * C22556) / C18149);
    const double C18686 = -((C18183 * C22505) / p + (C19139 * C22557) / C18149);
    const double C22559 = C22507 / C18149;
    const double C22517 = C18367 * C18147;
    const double C18714 =
        C22649 - (C18367 * C22499) / p - (C19180 * C22552) / C18149;
    const double C18787 = -((C18367 * C22505) / p + (C19180 * C22557) / C18149);
    const double C22561 = C22508 / C18149;
    const double C22518 = C18543 * C18147;
    const double C18757 =
        C22652 - (C18543 * C22499) / p - (C19225 * C22552) / C18149;
    const double C18855 = -((C18543 * C22503) / p + (C19225 * C22556) / C18149);
    const double C22532 = C19656 * C18147;
    const double C20086 = (3 * (C19628 - (C20416 * C18147) / C18149)) / C22502 -
                          ((C19656 * C22499) / p + (C20592 * C22552) / C18149);
    const double C20134 =
        C22648 - (C19656 * C22503) / p - (C20592 * C22556) / C18149;
    const double C20149 = -((C19656 * C22505) / p + (C20592 * C22557) / C18149);
    const double C22597 = C22530 / C18149;
    const double C22533 = C19834 * C18147;
    const double C20176 = -((C19834 * C22499) / p + (C20632 * C22552) / C18149);
    const double C20247 = -((C19834 * C22505) / p + (C20632 * C22557) / C18149);
    const double C22598 = C22531 / C18149;
    const double C22534 = C20006 * C18147;
    const double C20219 = -((C20006 * C22499) / p + (C20674 * C22552) / C18149);
    const double C20314 =
        C22652 - (C20006 * C22503) / p - (C20674 * C22556) / C18149;
    const double C22543 = C21100 * C18147;
    const double C21529 = (3 * (C21072 - (C21857 * C18147) / C18149)) / C22502 -
                          ((C21100 * C22499) / p + (C22031 * C22552) / C18149);
    const double C21576 = -((C21100 * C22503) / p + (C22031 * C22556) / C18149);
    const double C21590 =
        C22648 - (C21100 * C22505) / p - (C22031 * C22557) / C18149;
    const double C22610 = C22541 / C18149;
    const double C22544 = C21277 * C18147;
    const double C21617 = -((C21277 * C22499) / p + (C22071 * C22552) / C18149);
    const double C21688 =
        C22649 - (C21277 * C22505) / p - (C22071 * C22557) / C18149;
    const double C22611 = C22542 / C18149;
    const double C22545 = C21449 * C18147;
    const double C21660 = -((C21449 * C22499) / p + (C22113 * C22552) / C18149);
    const double C21755 = -((C21449 * C22503) / p + (C22113 * C22556) / C18149);
    const double C9334 = C22622 - (C9300 * C22499) / p -
                         (C18183 * C22552) / C18149 +
                         (3 * (C9318 - (C18152 * C18147) / C18149)) / C22502;
    const double C9429 = -((C9300 * C22503) / p + (C18183 * C22556) / C18149);
    const double C9517 = -((C9300 * C22505) / p + (C18183 * C22557) / C18149);
    const double C9683 = -((C9532 * C22503) / p + (C18294 * C22556) / C18149);
    const double C9972 =
        C22629 - (C9988 * C22499) / p - (C18367 * C22552) / C18149;
    const double C10228 = -((C9988 * C22505) / p + (C18367 * C22557) / C18149);
    const double C10063 = (C18404 * C22497) / C22498 - (C10078 * C22499) / p -
                          (C18408 * C22552) / C18149;
    const double C10518 =
        C22631 - (C10533 * C22499) / p - (C18474 * C22552) / C18149;
    const double C10606 =
        C22632 - (C10622 * C22499) / p - (C18543 * C22552) / C18149;
    const double C10771 = -((C10622 * C22503) / p + (C18543 * C22556) / C18149);
    const double C12198 = (3 * (C12183 - (C19628 * C18147) / C18149)) / C22502 -
                          ((C12166 * C22499) / p + (C19656 * C22552) / C18149);
    const double C12288 =
        C22622 - (C12166 * C22503) / p - (C19656 * C22556) / C18149;
    const double C12376 = -((C12166 * C22505) / p + (C19656 * C22557) / C18149);
    const double C12538 = (C19760 * C22497) / C22498 - (C12391 * C22503) / p -
                          (C19765 * C22556) / C18149;
    const double C12815 = -((C12831 * C22499) / p + (C19834 * C22552) / C18149);
    const double C13067 = -((C12831 * C22505) / p + (C19834 * C22557) / C18149);
    const double C12906 = -((C12921 * C22499) / p + (C19874 * C22552) / C18149);
    const double C13345 = -((C13360 * C22499) / p + (C19940 * C22552) / C18149);
    const double C13433 = -((C13449 * C22499) / p + (C20006 * C22552) / C18149);
    const double C13594 =
        C22632 - (C13449 * C22503) / p - (C20006 * C22556) / C18149;
    const double C14992 = (3 * (C14977 - (C21072 * C18147) / C18149)) / C22502 -
                          ((C14960 * C22499) / p + (C21100 * C22552) / C18149);
    const double C15082 = -((C14960 * C22503) / p + (C21100 * C22556) / C18149);
    const double C15170 =
        C22622 - (C14960 * C22505) / p - (C21100 * C22557) / C18149;
    const double C15332 = -((C15185 * C22503) / p + (C21208 * C22556) / C18149);
    const double C15609 = -((C15625 * C22499) / p + (C21277 * C22552) / C18149);
    const double C15861 =
        C22629 - (C15625 * C22505) / p - (C21277 * C22557) / C18149;
    const double C15700 = -((C15715 * C22499) / p + (C21317 * C22552) / C18149);
    const double C16139 = -((C16154 * C22499) / p + (C21383 * C22552) / C18149);
    const double C16227 = -((C16243 * C22499) / p + (C21449 * C22552) / C18149);
    const double C16388 = -((C16243 * C22503) / p + (C21449 * C22556) / C18149);
    const double C22650 = C18280 - C22586;
    const double C22651 = C18325 - C22587;
    const double C22669 = C19749 - C22605;
    const double C22670 = C19793 - C22606;
    const double C22680 = C21193 - C22616;
    const double C22681 = C21236 - C22617;
    const double C22568 = C22509 / C18149;
    const double C22625 = C9867 - C22559;
    const double C22573 = C22517 / C18149;
    const double C22627 = C10412 - C22561;
    const double C22574 = C22518 / C18149;
    const double C22599 = C22532 / C18149;
    const double C22661 = C12716 - C22597;
    const double C22601 = C22533 / C18149;
    const double C22662 = C13245 - C22598;
    const double C22602 = C22534 / C18149;
    const double C22612 = C22543 / C18149;
    const double C22674 = C15510 - C22610;
    const double C22613 = C22544 / C18149;
    const double C22675 = C16039 - C22611;
    const double C22614 = C22545 / C18149;
    const double C11492 = -((C9334 * C22503) / p + (C18625 * C22556) / C18149);
    const double C11521 = -((C9334 * C22505) / p + (C18625 * C22557) / C18149);
    const double C11565 = -((C9517 * C22503) / p + (C18686 * C22556) / C18149);
    const double C11756 =
        C22640 - (C10228 * C22499) / p - (C18787 * C22552) / C18149;
    const double C11961 =
        C22641 - (C10771 * C22499) / p - (C18855 * C22552) / C18149;
    const double C14293 =
        C22633 - (C12198 * C22503) / p - (C20086 * C22556) / C18149;
    const double C14322 = -((C12198 * C22505) / p + (C20086 * C22557) / C18149);
    const double C14366 =
        C22664 - (C12376 * C22503) / p - (C20149 * C22556) / C18149;
    const double C14554 = -((C13067 * C22499) / p + (C20247 * C22552) / C18149);
    const double C14758 = -((C13594 * C22499) / p + (C20314 * C22552) / C18149);
    const double C17087 = -((C14992 * C22503) / p + (C21529 * C22556) / C18149);
    const double C17116 =
        C22633 - (C14992 * C22505) / p - (C21529 * C22557) / C18149;
    const double C17160 = -((C15170 * C22503) / p + (C21590 * C22556) / C18149);
    const double C17348 = -((C15861 * C22499) / p + (C21688 * C22552) / C18149);
    const double C17550 = -((C16388 * C22499) / p + (C21755 * C22552) / C18149);
    const double C18728 = (C19191 * C22497) / C22498 - (C18279 * C22499) / p -
                          (C19195 * C22552) / C18149 + C22650 / C22502;
    const double C18772 = (3 * C22650) / C22502 -
                          ((C18367 * C22503) / p + (C19180 * C22556) / C18149);
    const double C22694 = C22651 / C22502;
    const double C18884 = (3 * C22651) / C22502 -
                          ((C18543 * C22505) / p + (C19225 * C22557) / C18149);
    const double C20190 =
        C22669 / C22502 - ((C19750 * C22499) / p + (C20646 * C22552) / C18149);
    const double C20233 = C22649 - (C19834 * C22503) / p -
                          (C20632 * C22556) / C18149 + (3 * C22669) / C22502;
    const double C22711 = C22670 / C22502;
    const double C20341 = (3 * C22670) / C22502 -
                          ((C20006 * C22505) / p + (C20674 * C22557) / C18149);
    const double C21632 =
        C22680 / C22502 - ((C21194 * C22499) / p + (C22085 * C22552) / C18149);
    const double C21674 = (3 * C22680) / C22502 -
                          ((C21277 * C22503) / p + (C22071 * C22556) / C18149);
    const double C22720 = C22681 / C22502;
    const double C21782 = C22652 - (C21449 * C22505) / p -
                          (C22113 * C22557) / C18149 + (3 * C22681) / C22502;
    const double C22634 = C9300 - C22568;
    const double C9638 = (C18275 * C22497) / C22498 - (C9850 * C22499) / p -
                         (C18279 * C22552) / C18149 + C22625 / C22502;
    const double C10183 = (3 * C22625) / C22502 -
                          ((C9988 * C22503) / p + (C18367 * C22556) / C18149);
    const double C22637 = C9988 - C22573;
    const double C22685 = C22627 / C22502;
    const double C10906 = (3 * C22627) / C22502 -
                          ((C10622 * C22505) / p + (C18543 * C22557) / C18149);
    const double C22638 = C10622 - C22574;
    const double C22663 = C12166 - C22599;
    const double C12493 =
        C22661 / C22502 - ((C12700 * C22499) / p + (C19750 * C22552) / C18149);
    const double C13022 = C22629 - (C12831 * C22503) / p -
                          (C19834 * C22556) / C18149 + (3 * C22661) / C22502;
    const double C22665 = C12831 - C22601;
    const double C22706 = C22662 / C22502;
    const double C13725 = (3 * C22662) / C22502 -
                          ((C13449 * C22505) / p + (C20006 * C22557) / C18149);
    const double C22666 = C13449 - C22602;
    const double C22676 = C14960 - C22612;
    const double C15287 =
        C22674 / C22502 - ((C15494 * C22499) / p + (C21194 * C22552) / C18149);
    const double C15816 = (3 * C22674) / C22502 -
                          ((C15625 * C22503) / p + (C21277 * C22556) / C18149);
    const double C22677 = C15625 - C22613;
    const double C22715 = C22675 / C22502;
    const double C16519 = C22632 - (C16243 * C22505) / p -
                          (C21449 * C22557) / C18149 + (3 * C22675) / C22502;
    const double C22678 = C16243 - C22614;
    const double C18742 = (C19206 * C22497) / C22498 - (C18324 * C22499) / p -
                          (C19210 * C22552) / C18149 + C22694;
    const double C18802 =
        C22694 - ((C18474 * C22503) / p + (C19265 * C22556) / C18149);
    const double C20205 =
        C22711 - ((C19794 * C22499) / p + (C20660 * C22552) / C18149);
    const double C20261 = (C20710 * C22497) / C22498 - (C19940 * C22503) / p -
                          (C20715 * C22556) / C18149 + C22711;
    const double C21646 =
        C22720 - ((C21237 * C22499) / p + (C22099 * C22552) / C18149);
    const double C21702 =
        C22720 - ((C21383 * C22503) / p + (C22153 * C22556) / C18149);
    const double C22688 = C22634 / C22502;
    const double C11462 = C22633 - (C9334 * C22499) / p -
                          (C18625 * C22552) / C18149 + (2 * C22634) / p;
    const double C11625 = -((C9638 * C22505) / p + (C18728 * C22557) / C18149);
    const double C11728 =
        C22639 - (C10183 * C22499) / p - (C18772 * C22552) / C18149;
    const double C11830 = -((C10183 * C22505) / p + (C18772 * C22557) / C18149);
    const double C22689 = C22637 / C22502;
    const double C11815 =
        (2 * C22637) / p - ((C10183 * C22503) / p + (C18772 * C22556) / C18149);
    const double C9819 = (C18320 * C22497) / C22498 - (C10395 * C22499) / p -
                         (C18324 * C22552) / C18149 + C22685;
    const double C10364 =
        C22685 - ((C10533 * C22503) / p + (C18474 * C22556) / C18149);
    const double C11976 =
        C22642 - (C10906 * C22499) / p - (C18884 * C22552) / C18149;
    const double C12033 = -((C10906 * C22503) / p + (C18884 * C22556) / C18149);
    const double C22690 = C22638 / C22502;
    const double C12091 =
        (2 * C22638) / p - ((C10906 * C22505) / p + (C18884 * C22557) / C18149);
    const double C22707 = C22663 / C22502;
    const double C14264 =
        (2 * C22663) / p - ((C12198 * C22499) / p + (C20086 * C22552) / C18149);
    const double C14425 = -((C12493 * C22505) / p + (C20190 * C22557) / C18149);
    const double C14526 = -((C13022 * C22499) / p + (C20233 * C22552) / C18149);
    const double C14628 = -((C13022 * C22505) / p + (C20233 * C22557) / C18149);
    const double C22708 = C22665 / C22502;
    const double C14613 = C22639 - (C13022 * C22503) / p -
                          (C20233 * C22556) / C18149 + (2 * C22665) / p;
    const double C12670 =
        C22706 - ((C13229 * C22499) / p + (C19794 * C22552) / C18149);
    const double C13199 =
        C22631 - (C13360 * C22503) / p - (C19940 * C22556) / C18149 + C22706;
    const double C14773 = -((C13725 * C22499) / p + (C20341 * C22552) / C18149);
    const double C14830 =
        C22642 - (C13725 * C22503) / p - (C20341 * C22556) / C18149;
    const double C22709 = C22666 / C22502;
    const double C14888 =
        (2 * C22666) / p - ((C13725 * C22505) / p + (C20341 * C22557) / C18149);
    const double C22716 = C22676 / C22502;
    const double C17058 =
        (2 * C22676) / p - ((C14992 * C22499) / p + (C21529 * C22552) / C18149);
    const double C17219 = (C21626 * C22497) / C22498 - (C15287 * C22505) / p -
                          (C21632 * C22557) / C18149;
    const double C17320 = -((C15816 * C22499) / p + (C21674 * C22552) / C18149);
    const double C17421 =
        C22639 - (C15816 * C22505) / p - (C21674 * C22557) / C18149;
    const double C22717 = C22677 / C22502;
    const double C17406 =
        (2 * C22677) / p - ((C15816 * C22503) / p + (C21674 * C22556) / C18149);
    const double C15464 =
        C22715 - ((C16023 * C22499) / p + (C21237 * C22552) / C18149);
    const double C15993 =
        C22715 - ((C16154 * C22503) / p + (C21383 * C22556) / C18149);
    const double C17565 = -((C16519 * C22499) / p + (C21782 * C22552) / C18149);
    const double C17621 = -((C16519 * C22503) / p + (C21782 * C22556) / C18149);
    const double C22718 = C22678 / C22502;
    const double C17679 = C22642 - (C16519 * C22505) / p -
                          (C21782 * C22557) / C18149 + (2 * C22678) / p;
    const double C11550 =
        C22688 - ((C9429 * C22503) / p + (C18672 * C22556) / C18149);
    const double C11580 =
        C22688 - ((C9517 * C22505) / p + (C18686 * C22557) / C18149);
    const double C11610 = (C18710 * C22497) / C22498 - (C9972 * C22499) / p -
                          (C18714 * C22552) / C18149 + C22689;
    const double C11845 =
        C22689 - ((C10228 * C22505) / p + (C18787 * C22557) / C18149);
    const double C11640 = -((C9819 * C22503) / p + (C18742 * C22556) / C18149);
    const double C11785 = (C18798 * C22497) / C22498 - (C10364 * C22499) / p -
                          (C18802 * C22552) / C18149;
    const double C11698 = (C18753 * C22497) / C22498 - (C10606 * C22499) / p -
                          (C18757 * C22552) / C18149 + C22690;
    const double C11903 =
        C22690 - ((C10771 * C22503) / p + (C18855 * C22556) / C18149);
    const double C14351 = (C20129 * C22497) / C22498 - (C12288 * C22503) / p -
                          (C20134 * C22556) / C18149 + C22707;
    const double C14381 =
        C22707 - ((C12376 * C22505) / p + (C20149 * C22557) / C18149);
    const double C14410 =
        C22708 - ((C12815 * C22499) / p + (C20176 * C22552) / C18149);
    const double C14643 =
        C22708 - ((C13067 * C22505) / p + (C20247 * C22557) / C18149);
    const double C14440 = (C20200 * C22497) / C22498 - (C12670 * C22503) / p -
                          (C20205 * C22556) / C18149;
    const double C14583 = -((C13199 * C22499) / p + (C20261 * C22552) / C18149);
    const double C14497 =
        C22709 - ((C13433 * C22499) / p + (C20219 * C22552) / C18149);
    const double C14701 =
        C22641 - (C13594 * C22503) / p - (C20314 * C22556) / C18149 + C22709;
    const double C17145 =
        C22716 - ((C15082 * C22503) / p + (C21576 * C22556) / C18149);
    const double C17175 =
        C22664 - (C15170 * C22505) / p - (C21590 * C22557) / C18149 + C22716;
    const double C17204 =
        C22717 - ((C15609 * C22499) / p + (C21617 * C22552) / C18149);
    const double C17436 =
        C22640 - (C15861 * C22505) / p - (C21688 * C22557) / C18149 + C22717;
    const double C17234 = -((C15464 * C22503) / p + (C21646 * C22556) / C18149);
    const double C17377 = -((C15993 * C22499) / p + (C21702 * C22552) / C18149);
    const double C17291 =
        C22718 - ((C16227 * C22499) / p + (C21660 * C22552) / C18149);
    const double C17493 =
        C22718 - ((C16388 * C22503) / p + (C21755 * C22556) / C18149);
    vrx[0] = C9300;
    vrx[1] = C9318;
    vrx[2] = C9334;
    vrx[3] = C9350;
    vrx[4] = C9429;
    vrx[5] = C9444;
    vrx[6] = C9517;
    vrx[7] = C9532;
    vrx[8] = C9593;
    vrx[9] = C9638;
    vrx[10] = C9683;
    vrx[11] = C9730;
    vrx[12] = C9819;
    vrx[13] = C9850;
    vrx[14] = C9867;
    vrx[15] = C9972;
    vrx[16] = C9987;
    vrx[17] = C9988;
    vrx[18] = C10063;
    vrx[19] = C10078;
    vrx[20] = C10183;
    vrx[21] = C10228;
    vrx[22] = C10320;
    vrx[23] = C10364;
    vrx[24] = C10395;
    vrx[25] = C10412;
    vrx[26] = C10518;
    vrx[27] = C10533;
    vrx[28] = C10606;
    vrx[29] = C10621;
    vrx[30] = C10622;
    vrx[31] = C10771;
    vrx[32] = C10906;
    vrx[33] = C11039;
    vrx[34] = C11462;
    vrx[35] = C11477;
    vrx[36] = C11492;
    vrx[37] = C11521;
    vrx[38] = C11550;
    vrx[39] = C11565;
    vrx[40] = C11580;
    vrx[41] = C11610;
    vrx[42] = C11625;
    vrx[43] = C11640;
    vrx[44] = C11698;
    vrx[45] = C11728;
    vrx[46] = C11756;
    vrx[47] = C11785;
    vrx[48] = C11815;
    vrx[49] = C11830;
    vrx[50] = C11845;
    vrx[51] = C11903;
    vrx[52] = C11961;
    vrx[53] = C11976;
    vrx[54] = C12033;
    vrx[55] = C12091;
    vry[0] = C12166;
    vry[1] = C12183;
    vry[2] = C12198;
    vry[3] = C12213;
    vry[4] = C12288;
    vry[5] = C12303;
    vry[6] = C12376;
    vry[7] = C12391;
    vry[8] = C12450;
    vry[9] = C12493;
    vry[10] = C12538;
    vry[11] = C12583;
    vry[12] = C12670;
    vry[13] = C12700;
    vry[14] = C12716;
    vry[15] = C12815;
    vry[16] = C12830;
    vry[17] = C12831;
    vry[18] = C12906;
    vry[19] = C12921;
    vry[20] = C13022;
    vry[21] = C13067;
    vry[22] = C13155;
    vry[23] = C13199;
    vry[24] = C13229;
    vry[25] = C13245;
    vry[26] = C13345;
    vry[27] = C13360;
    vry[28] = C13433;
    vry[29] = C13448;
    vry[30] = C13449;
    vry[31] = C13594;
    vry[32] = C13725;
    vry[33] = C13854;
    vry[34] = C14264;
    vry[35] = C14278;
    vry[36] = C14293;
    vry[37] = C14322;
    vry[38] = C14351;
    vry[39] = C14366;
    vry[40] = C14381;
    vry[41] = C14410;
    vry[42] = C14425;
    vry[43] = C14440;
    vry[44] = C14497;
    vry[45] = C14526;
    vry[46] = C14554;
    vry[47] = C14583;
    vry[48] = C14613;
    vry[49] = C14628;
    vry[50] = C14643;
    vry[51] = C14701;
    vry[52] = C14758;
    vry[53] = C14773;
    vry[54] = C14830;
    vry[55] = C14888;
    vrz[0] = C14960;
    vrz[1] = C14977;
    vrz[2] = C14992;
    vrz[3] = C15007;
    vrz[4] = C15082;
    vrz[5] = C15097;
    vrz[6] = C15170;
    vrz[7] = C15185;
    vrz[8] = C15244;
    vrz[9] = C15287;
    vrz[10] = C15332;
    vrz[11] = C15377;
    vrz[12] = C15464;
    vrz[13] = C15494;
    vrz[14] = C15510;
    vrz[15] = C15609;
    vrz[16] = C15624;
    vrz[17] = C15625;
    vrz[18] = C15700;
    vrz[19] = C15715;
    vrz[20] = C15816;
    vrz[21] = C15861;
    vrz[22] = C15949;
    vrz[23] = C15993;
    vrz[24] = C16023;
    vrz[25] = C16039;
    vrz[26] = C16139;
    vrz[27] = C16154;
    vrz[28] = C16227;
    vrz[29] = C16242;
    vrz[30] = C16243;
    vrz[31] = C16388;
    vrz[32] = C16519;
    vrz[33] = C16648;
    vrz[34] = C17058;
    vrz[35] = C17072;
    vrz[36] = C17087;
    vrz[37] = C17116;
    vrz[38] = C17145;
    vrz[39] = C17160;
    vrz[40] = C17175;
    vrz[41] = C17204;
    vrz[42] = C17219;
    vrz[43] = C17234;
    vrz[44] = C17291;
    vrz[45] = C17320;
    vrz[46] = C17348;
    vrz[47] = C17377;
    vrz[48] = C17406;
    vrz[49] = C17421;
    vrz[50] = C17436;
    vrz[51] = C17493;
    vrz[52] = C17550;
    vrz[53] = C17565;
    vrz[54] = C17621;
    vrz[55] = C17679;
}
