/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_20(double ae,
                         double be,
                         double cc,
                         double xAB,
                         double yAB,
                         double zAB,
                         double* const gx,
                         double* const gy,
                         double* const gz,
                         std::size_t matrix_size,
                         std::size_t Ai,
                         std::size_t Bi)
{
    const double C6749 = ae + be;
    const double C6752 = Pi / C6749;
    const double C6753 = std::sqrt(C6752);
    const double C6764 = be * zAB;
    const double C6763 = 2. * C6749;
    const double C6762 = std::pow(C6749, 2);
    const double C6761 = be * yAB;
    const double C6760 = be * xAB;
    const double C6759 = Pi / C6749;
    const double C6758 = ae + be;
    const double C6767 = C6753 / C6763;
    const double C6766 = std::sqrt(C6759);
    const double C6765 = Pi / C6758;
    const double C6768 = std::sqrt(C6765);
    const double C6546 = -(C6766 * C6760) / C6749;
    const double C6547 = -(C6766 * C6761) / C6749;
    const double C6548 = (C6753 * std::pow(C6760, 2)) / C6762 + C6767;
    const double C6549 = -(C6753 * C6764) / C6749;
    const double C6638 = (C6753 * std::pow(C6761, 2)) / C6762 + C6767;
    const double C6689 = (C6753 * std::pow(C6764, 2)) / C6762 + C6767;
    const double C6559 = ae * C6549;
    const double C6558 = ae * C6547;
    const double C6557 = be * zAB;
    const double C6556 = be * yAB;
    const double C6555 = std::pow(ae, 2);
    const double C6554 = be * C6546;
    const double C6553 = be * xAB;
    const double C6552 = ae * C6546;
    const double C6551 = ae + be;
    const double C6550 = be * C6768;
    const double C6572 = 2 * C6559;
    const double C6571 = 2 * C6558;
    const double C6570 = std::pow(C6553, 2);
    const double C6569 = std::pow(C6551, 2);
    const double C6568 = C6553 / C6551;
    const double C6567 = C6557 / C6551;
    const double C6566 = Pi / C6551;
    const double C6565 = C6556 / C6551;
    const double C6564 = 2 * C6554;
    const double C6563 = 2 * C6552;
    const double C6562 = C6552 * C6553;
    const double C6561 = 2. * C6551;
    const double C6560 = 2 * C6550;
    const double C6581 = std::pow(C6568, 2);
    const double C6580 = std::pow(C6567, 2);
    const double C6579 = std::sqrt(C6566);
    const double C6578 = 1 / C6561;
    const double C6577 = std::pow(C6565, 2);
    const double C6576 = C6563 - C6564;
    const double C6575 = be * C6563;
    const double C6574 = 2 * C6562;
    const double C6573 = -C6560;
    const double C6591 = C6579 / C6561;
    const double C6590 = C6579 * C6570;
    const double C6589 = C6579 * C6553;
    const double C6588 = C6581 + C6578;
    const double C6587 = C6580 + C6578;
    const double C6586 = C6577 + C6578;
    const double C6585 = C6576 / C6561;
    const double C6584 = 4 * C6575;
    const double C6583 = C6574 / C6551;
    const double C6582 = C6573 / C6561;
    const double C6598 = C6590 / C6569;
    const double C6597 = ae * C6589;
    const double C6596 = C6555 * C6588;
    const double C6595 = C6555 * C6587;
    const double C6594 = C6555 * C6586;
    const double C6593 = -C6584;
    const double C6592 = C6582 - C6583;
    const double C6606 = C6598 + C6591;
    const double C6605 = -2 * C6597;
    const double C6604 = 2 * C6596;
    const double C6603 = 2 * C6595;
    const double C6602 = 2 * C6594;
    const double C6601 = C6592 * C6553;
    const double C6600 = C6593 / C6561;
    const double C6599 = ae * C6592;
    const double C6613 = ae * C6606;
    const double C6612 = be * C6605;
    const double C6611 = ae - C6604;
    const double C6610 = ae - C6603;
    const double C6609 = ae - C6602;
    const double C6608 = C6601 / C6551;
    const double C6607 = C6599 * C6553;
    const double C6620 = 2 * C6613;
    const double C6619 = C6612 / C6569;
    const double C6618 = C6611 * C6579;
    const double C6617 = C6610 * C6579;
    const double C6616 = C6609 * C6579;
    const double C6615 = C6585 - C6608;
    const double C6614 = 2 * C6607;
    const double C6624 = C6620 - C6579;
    const double C6623 = C6618 * C6553;
    const double C6622 = C6618 / C6561;
    const double C6621 = C6614 / C6551;
    const double C6627 = C6624 * be;
    const double C6626 = C6623 / C6551;
    const double C6625 = C6600 - C6621;
    const double C6630 = C6627 / C6551;
    const double C6629 = C6619 - C6626;
    const double C6628 = ae * C6625;
    const double C6631 = C6629 * C6553;
    const double C6632 = C6631 / C6551;
    const double C6633 = C6622 - C6632;
    const double C6634 = C6633 + C6630;
    const double C6646 = be * C6571;
    const double C6645 = C6558 * C6556;
    const double C6644 = be * C6768;
    const double C6643 = be * C6547;
    const double C6642 = std::pow(C6556, 2);
    const double C6641 = C6616 * C6556;
    const double C6640 = C6579 * C6556;
    const double C6639 = C6616 / C6561;
    const double C6653 = 4 * C6646;
    const double C6652 = 2 * C6645;
    const double C6651 = 2 * C6644;
    const double C6650 = 2 * C6643;
    const double C6649 = C6579 * C6642;
    const double C6648 = C6641 / C6551;
    const double C6647 = ae * C6640;
    const double C6659 = -C6653;
    const double C6658 = C6652 / C6551;
    const double C6657 = -C6651;
    const double C6656 = C6571 - C6650;
    const double C6655 = C6649 / C6569;
    const double C6654 = -2 * C6647;
    const double C6664 = C6659 / C6561;
    const double C6663 = C6657 / C6561;
    const double C6662 = C6656 / C6561;
    const double C6661 = C6655 + C6591;
    const double C6660 = be * C6654;
    const double C6667 = C6663 - C6658;
    const double C6666 = ae * C6661;
    const double C6665 = C6660 / C6569;
    const double C6671 = ae * C6667;
    const double C6670 = C6667 * C6556;
    const double C6669 = 2 * C6666;
    const double C6668 = C6665 - C6648;
    const double C6675 = C6671 * C6556;
    const double C6674 = C6670 / C6551;
    const double C6673 = C6669 - C6579;
    const double C6672 = C6668 * C6556;
    const double C6679 = 2 * C6675;
    const double C6678 = C6662 - C6674;
    const double C6677 = C6673 * be;
    const double C6676 = C6672 / C6551;
    const double C6682 = C6679 / C6551;
    const double C6681 = C6677 / C6551;
    const double C6680 = C6639 - C6676;
    const double C6684 = C6664 - C6682;
    const double C6683 = C6680 + C6681;
    const double C6685 = ae * C6684;
    const double C6697 = be * C6572;
    const double C6696 = C6559 * C6557;
    const double C6695 = be * C6768;
    const double C6694 = be * C6549;
    const double C6693 = std::pow(C6557, 2);
    const double C6692 = C6617 * C6557;
    const double C6691 = C6579 * C6557;
    const double C6690 = C6617 / C6561;
    const double C6704 = 4 * C6697;
    const double C6703 = 2 * C6696;
    const double C6702 = 2 * C6695;
    const double C6701 = 2 * C6694;
    const double C6700 = C6579 * C6693;
    const double C6699 = C6692 / C6551;
    const double C6698 = ae * C6691;
    const double C6710 = -C6704;
    const double C6709 = C6703 / C6551;
    const double C6708 = -C6702;
    const double C6707 = C6572 - C6701;
    const double C6706 = C6700 / C6569;
    const double C6705 = -2 * C6698;
    const double C6715 = C6710 / C6561;
    const double C6714 = C6708 / C6561;
    const double C6713 = C6707 / C6561;
    const double C6712 = C6706 + C6591;
    const double C6711 = be * C6705;
    const double C6718 = C6714 - C6709;
    const double C6717 = ae * C6712;
    const double C6716 = C6711 / C6569;
    const double C6722 = ae * C6718;
    const double C6721 = C6718 * C6557;
    const double C6720 = 2 * C6717;
    const double C6719 = C6716 - C6699;
    const double C6726 = C6722 * C6557;
    const double C6725 = C6721 / C6551;
    const double C6724 = C6720 - C6579;
    const double C6723 = C6719 * C6557;
    const double C6730 = 2 * C6726;
    const double C6729 = C6713 - C6725;
    const double C6728 = C6724 * be;
    const double C6727 = C6723 / C6551;
    const double C6733 = C6730 / C6551;
    const double C6732 = C6728 / C6551;
    const double C6731 = C6690 - C6727;
    const double C6735 = C6715 - C6733;
    const double C6734 = C6731 + C6732;
    const double C6736 = ae * C6735;
    const double C6781 = C6736 * C6557;
    const double C6780 = 2 * C6722;
    const double C6779 = -2 * C6685;
    const double C6778 = C6685 * C6556;
    const double C6777 = 2 * C6671;
    const double C6776 = -2 * C6628;
    const double C6775 = C6582 - C6709;
    const double C6774 = C6628 * C6553;
    const double C6773 = 2 * C6599;
    const double C6788 = 2 * C6781;
    const double C6787 = be * C6780;
    const double C6786 = 2 * C6778;
    const double C6785 = be * C6777;
    const double C6784 = ae * C6775;
    const double C6783 = 2 * C6774;
    const double C6782 = be * C6773;
    const double C6795 = C6788 / C6551;
    const double C6794 = 6 * C6787;
    const double C6793 = C6786 / C6551;
    const double C6792 = 6 * C6785;
    const double C6791 = C6784 * C6557;
    const double C6790 = C6783 / C6551;
    const double C6789 = 6 * C6782;
    const double C6799 = -C6794;
    const double C6798 = -C6792;
    const double C6797 = 2 * C6791;
    const double C6796 = -C6789;
    const double C6803 = C6799 / C6561;
    const double C6802 = C6798 / C6561;
    const double C6801 = C6797 / C6551;
    const double C6800 = C6796 / C6561;
    const double C6807 = C6795 - C6803;
    const double C6806 = C6793 - C6802;
    const double C6805 = C6790 - C6800;
    const double C6804 = C6715 - C6801;
    const double C6808 = ae * C6804;
    const double C6809 = -2 * C6808;
    const double gx200000 = ((((C6800 - C6790) * C6553) / C6551 -
                              (2 * C6628 - 6 * be * C6625) / C6561) *
                             std::pow(C6768, 2)) /
                                2.0 +
                            C6615 * C6616 * C6768 + C6615 * C6768 * C6617;
    const double gx020000 = (C6768 * C6638 * C6776) / 2.0 +
                            2 * C6552 * C6683 * C6768 +
                            2 * C6552 * C6638 * C6617;
    const double gx002000 = (C6689 * C6768 * C6776) / 2.0 +
                            2 * C6552 * C6616 * C6689 +
                            2 * C6552 * C6768 * C6734;
    const double gx110000 = (C6768 * C6547 * C6805) / 2.0 +
                            C6592 * C6668 * C6768 + C6592 * C6547 * C6617;
    const double gx101000 = (C6549 * C6768 * C6805) / 2.0 +
                            C6592 * C6616 * C6549 + C6592 * C6768 * C6719;
    const double gx011000 = (C6549 * C6547 * C6776) / 2.0 +
                            2 * C6552 * C6668 * C6549 +
                            2 * C6552 * C6547 * C6719;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx110000;
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx011000;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        cc * (-0.5 * gx200000 - 0.5 * gx020000 + gx002000);
    gx[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx101000;
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(0.75) * gx200000 - std::sqrt(0.75) * gx020000);
    const double gy200000 =
        C6634 * C6571 * C6768 +
        (C6768 * C6548 * -2 * ae *
         (C6664 - (2 * ae * (C6582 - C6658) * C6556) / C6551)) /
            2.0 +
        C6548 * C6571 * C6617;
    const double gy020000 = C6618 * C6678 * C6768 +
                            ((((C6802 - C6793) * C6556) / C6551 -
                              (2 * C6685 - 6 * be * C6684) / C6561) *
                             std::pow(C6768, 2)) /
                                2.0 +
                            C6768 * C6678 * C6617;
    const double gy002000 = C6618 * C6571 * C6689 +
                            (C6689 * C6768 * C6779) / 2.0 +
                            C6768 * C6571 * C6734;
    const double gy110000 = C6629 * C6667 * C6768 +
                            (C6768 * C6546 * C6806) / 2.0 +
                            C6546 * C6667 * C6617;
    const double gy101000 = C6629 * C6571 * C6549 +
                            (C6549 * C6546 * C6779) / 2.0 +
                            C6546 * C6571 * C6719;
    const double gy011000 = C6618 * C6667 * C6549 +
                            (C6549 * C6768 * C6806) / 2.0 +
                            C6768 * C6667 * C6719;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy110000;
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy011000;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        cc * (-0.5 * gy200000 - 0.5 * gy020000 + gy002000);
    gy[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy101000;
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(0.75) * gy200000 - std::sqrt(0.75) * gy020000);
    const double gz200000 = C6634 * C6768 * C6572 + C6548 * C6616 * C6572 +
                            (C6548 * C6768 * C6809) / 2.0;
    const double gz020000 = C6618 * C6638 * C6572 + C6768 * C6683 * C6572 +
                            (C6768 * C6638 * C6809) / 2.0;
    const double gz002000 =
        C6618 * C6768 * C6729 + C6768 * C6616 * C6729 +
        (std::pow(C6768, 2) * (((C6803 - C6795) * C6557) / C6551 -
                               (2 * C6736 - 6 * be * C6735) / C6561)) /
            2.0;
    const double gz110000 = C6629 * C6547 * C6572 + C6546 * C6668 * C6572 +
                            (C6546 * C6547 * -2 * C6736) / 2.0;
    const double gz101000 = C6629 * C6768 * C6718 + C6546 * C6616 * C6718 +
                            (C6546 * C6768 * C6807) / 2.0;
    const double gz011000 = C6618 * C6547 * C6718 + C6768 * C6668 * C6718 +
                            (C6768 * C6547 * C6807) / 2.0;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz110000;
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz011000;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        cc * (-0.5 * gz200000 - 0.5 * gz020000 + gz002000);
    gz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz101000;
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(0.75) * gz200000 - std::sqrt(0.75) * gz020000);
}

// Automatically generated, do not edit
