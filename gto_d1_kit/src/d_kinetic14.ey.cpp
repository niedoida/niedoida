/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_32(double ae,
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
    const double C24580 = ae + be;
    const double C24582 = Pi / C24580;
    const double C24583 = std::sqrt(C24582);
    const double C24586 = std::pow(C24580, 2);
    const double C24585 = be * xAB;
    const double C24589 = 2. * C24580;
    const double C24588 = std::pow(C24585, 2);
    const double C24591 = C24583 / C24589;
    const double C24590 = C24583 * C24588;
    const double C24592 = C24590 / C24586;
    const double C24593 = C24592 + C24591;
    const double C24601 = ae * xAB;
    const double C24600 = C24593 * C24585;
    const double C24599 = 2. * C24586;
    const double C24598 = C24583 * C24585;
    const double C24603 = C24600 / C24580;
    const double C24602 = -2. * C24598;
    const double C24604 = C24602 / C24599;
    const double C24605 = C24604 - C24603;
    const double C24613 = be * yAB;
    const double C24619 = ae * yAB;
    const double C24618 = std::pow(C24613, 2);
    const double C24617 = C24583 * C24613;
    const double C24621 = C24583 * C24618;
    const double C24620 = -2. * C24617;
    const double C24623 = C24621 / C24586;
    const double C24622 = C24620 / C24599;
    const double C24624 = C24623 + C24591;
    const double C24625 = C24624 * C24613;
    const double C24626 = C24625 / C24580;
    const double C24627 = C24622 - C24626;
    const double C24630 = be * zAB;
    const double C24635 = ae * zAB;
    const double C24634 = std::pow(C24630, 2);
    const double C24633 = C24583 * C24630;
    const double C24637 = C24583 * C24634;
    const double C24636 = -2. * C24633;
    const double C24639 = C24637 / C24586;
    const double C24638 = C24636 / C24599;
    const double C24640 = C24639 + C24591;
    const double C24641 = C24640 * C24630;
    const double C24642 = C24641 / C24580;
    const double C24643 = C24638 - C24642;
    const double C24677 = C24635 * C24633;
    const double C24676 = C24619 * C24617;
    const double C24675 = C24601 * C24598;
    const double C24674 = C24640 * C24635;
    const double C24673 = 3. * C24640;
    const double C24672 = C24643 * C24635;
    const double C24671 = std::pow(C24630, 2);
    const double C24670 = C24624 * C24619;
    const double C24669 = 3. * C24624;
    const double C24668 = C24627 * C24619;
    const double C24667 = std::pow(C24613, 2);
    const double C24666 = C24583 * C24601;
    const double C24665 = ae * zAB;
    const double C24664 = ae * yAB;
    const double C24663 = C24593 * C24601;
    const double C24662 = 3. * C24593;
    const double C24661 = 2. * C24586;
    const double C24660 = C24583 * C24585;
    const double C24659 = 2. * C24580;
    const double C24658 = be * xAB;
    const double C24693 = C24677 / C24586;
    const double C24692 = C24676 / C24586;
    const double C24691 = C24675 / C24586;
    const double C24690 = C24674 / C24580;
    const double C24689 = C24673 / C24589;
    const double C24688 = C24672 / C24580;
    const double C24687 = C24583 * C24671;
    const double C24686 = C24670 / C24580;
    const double C24685 = C24669 / C24589;
    const double C24684 = C24668 / C24580;
    const double C24683 = C24583 * C24667;
    const double C24682 = C24666 / C24580;
    const double C24681 = C24663 / C24580;
    const double C24680 = C24662 / C24589;
    const double C24679 = -2. * C24660;
    const double C24678 = C24583 / C24659;
    const double C24704 = C24591 - C24693;
    const double C24703 = C24591 - C24692;
    const double C24702 = C24591 - C24691;
    const double C24701 = C24690 + C24638;
    const double C24700 = C24688 + C24689;
    const double C24699 = C24687 / C24586;
    const double C24698 = C24686 + C24622;
    const double C24697 = C24684 + C24685;
    const double C24696 = C24683 / C24586;
    const double C24695 = C24681 + C24604;
    const double C24694 = C24679 / C24661;
    const double C24706 = C24699 + C24591;
    const double C24705 = C24696 + C24591;
    const double C23522 = std::sqrt(Pi / (ae + be));
    const double C23523 = -(std::sqrt(Pi / C24580) * C24658) / C24580;
    const double C23524 =
        (C24583 * std::pow(C24658, 2)) / std::pow(C24580, 2) + C24678;
    const double C23525 =
        C24694 -
        (((C24583 * std::pow(C24585, 2)) / C24586 + C24678) * C24585) / C24580;
    const double C23526 =
        ((C24694 - (C24593 * C24585) / C24580) * ae * xAB) / C24580 + C24680;
    const double C23529 = -(C24583 * be * yAB) / C24580;
    const double C23530 =
        (((C24605 * C24601) / C24580 + C24680) * C24601) / C24580 +
        (3 * C24695 + C24605) / C24589;
    const double C23531 = -(C24583 * be * zAB) / C24580;
    const double C23753 = (C24583 * std::pow(C24664, 2)) / C24586 + C24591;
    const double C23754 = (C24583 * C24664) / C24580;
    const double C23813 = (C24583 * std::pow(C24665, 2)) / C24586 + C24591;
    const double C23814 = (C24583 * C24665) / C24580;
    const double C23880 =
        (-2. * C24583 * C24613) / C24599 - (C24705 * C24613) / C24580;
    const double C23882 = (C24583 * std::pow(C24601, 2)) / C24586 + C24591;
    const double C23982 =
        (C24697 * C24619) / C24580 + (3 * C24698 + C24627) / C24589;
    const double C24093 =
        (-2. * C24583 * C24630) / C24599 - (C24706 * C24630) / C24580;
    const double C24161 =
        (C24700 * C24635) / C24580 + (3 * C24701 + C24643) / C24589;
    const double C24271 =
        (C24695 * C24601) / C24580 + (2 * C24702 + C24593) / C24589;
    const double C24318 =
        (C24703 * C24619) / C24580 +
        ((C24583 * C24619) / C24580 - C24617 / C24580) / C24589;
    const double C24377 =
        (C24704 * C24635) / C24580 +
        ((C24583 * C24635) / C24580 - C24633 / C24580) / C24589;
    const double C24432 =
        (C24698 * C24619) / C24580 + (2 * C24703 + C24624) / C24589;
    const double C24473 =
        (C24702 * C24601) / C24580 + (C24682 - C24598 / C24580) / C24589;
    const double C24517 =
        (C24701 * C24635) / C24580 + (2 * C24704 + C24640) / C24589;
    const double C23546 = ae * C23531;
    const double C23545 = ae * C23529;
    const double C23544 = be * zAB;
    const double C23543 = be * yAB;
    const double C23542 = std::pow(ae, 2);
    const double C23541 = ae * C23526;
    const double C23540 = ae * C23524;
    const double C23539 = ae * C23525;
    const double C23538 = ae * xAB;
    const double C23537 = be * C23523;
    const double C23536 = be * C23524;
    const double C23535 = be * xAB;
    const double C23534 = ae * C23523;
    const double C23533 = ae + be;
    const double C23532 = be * C23522;
    const double C23563 = 2 * C23546;
    const double C23562 = 2 * C23545;
    const double C23561 = std::pow(C23535, 2);
    const double C23560 = C23535 / C23533;
    const double C23559 = std::pow(C23533, 2);
    const double C23558 = C23544 / C23533;
    const double C23557 = Pi / C23533;
    const double C23556 = C23543 / C23533;
    const double C23555 = 2 * C23541;
    const double C23554 = 2 * C23540;
    const double C23553 = 2 * C23539;
    const double C23552 = 2 * C23537;
    const double C23551 = 2 * C23534;
    const double C23550 = 2 * C23536;
    const double C23549 = C23534 * C23535;
    const double C23548 = 2. * C23533;
    const double C23547 = 2 * C23532;
    const double C23573 = 2. * C23559;
    const double C23572 = std::pow(C23560, 2);
    const double C23571 = std::pow(C23558, 2);
    const double C23570 = be * C23551;
    const double C23569 = std::sqrt(C23557);
    const double C23568 = 1 / C23548;
    const double C23567 = std::pow(C23556, 2);
    const double C23566 = C23551 - C23552;
    const double C23565 = 2 * C23549;
    const double C23564 = -C23547;
    const double C23583 = C23569 / C23548;
    const double C23582 = C23569 * C23561;
    const double C23581 = C23572 + C23568;
    const double C23580 = C23569 * C23535;
    const double C23579 = C23571 + C23568;
    const double C23578 = 4 * C23570;
    const double C23577 = C23567 + C23568;
    const double C23576 = C23566 / C23548;
    const double C23575 = C23565 / C23533;
    const double C23574 = C23564 / C23548;
    const double C23591 = -2. * C23580;
    const double C23590 = C23582 / C23559;
    const double C23589 = C23542 * C23581;
    const double C23588 = ae * C23580;
    const double C23587 = C23542 * C23579;
    const double C23586 = -C23578;
    const double C23585 = C23542 * C23577;
    const double C23584 = C23574 - C23575;
    const double C23603 = C23591 / C23533;
    const double C23602 = C23591 / C23573;
    const double C23601 = C23590 + C23583;
    const double C23600 = 2 * C23589;
    const double C23599 = -2 * C23588;
    const double C23598 = 2 * C23587;
    const double C23597 = be * C23584;
    const double C23596 = C23586 / C23548;
    const double C23595 = ae * C23584;
    const double C23594 = 2 * C23585;
    const double C23593 = C23584 * C23535;
    const double C23592 = 2 * C23584;
    const double C23617 = C23601 * C23538;
    const double C23616 = 3. * C23601;
    const double C23615 = C23601 * C23535;
    const double C23614 = ae * C23601;
    const double C23613 = ae - C23600;
    const double C23612 = be * C23599;
    const double C23611 = ae - C23598;
    const double C23610 = 4 * C23597;
    const double C23609 = C23595 * C23535;
    const double C23608 = 2 * C23595;
    const double C23607 = ae - C23594;
    const double C23606 = C23592 + C23554;
    const double C23605 = C23593 / C23533;
    const double C23604 = C23592 - C23550;
    const double C23631 = C23617 / C23533;
    const double C23630 = C23616 / C23548;
    const double C23629 = C23615 / C23533;
    const double C23628 = 2 * C23614;
    const double C23627 = C23613 * C23569;
    const double C23626 = C23612 / C23559;
    const double C23625 = C23611 * C23569;
    const double C23624 = C23608 - C23610;
    const double C23623 = 2 * C23609;
    const double C23622 = be * C23608;
    const double C23621 = C23607 * C23569;
    const double C23620 = C23606 / C23548;
    const double C23619 = C23576 - C23605;
    const double C23618 = C23604 / C23548;
    const double C23643 = C23631 + C23602;
    const double C23642 = C23602 - C23629;
    const double C23641 = C23628 - C23569;
    const double C23640 = C23627 / C23548;
    const double C23639 = C23627 * C23535;
    const double C23638 = be * C23619;
    const double C23637 = C23624 / C23548;
    const double C23636 = C23623 / C23533;
    const double C23635 = 6 * C23622;
    const double C23634 = C23619 * C23538;
    const double C23633 = 3 * C23619;
    const double C23632 = C23619 * C23535;
    const double C23655 = 3 * C23643;
    const double C23654 = be * C23643;
    const double C23653 = C23642 * C23538;
    const double C23652 = ae * C23642;
    const double C23651 = C23641 * be;
    const double C23650 = C23639 / C23533;
    const double C23649 = 4 * C23638;
    const double C23648 = C23596 - C23636;
    const double C23647 = -C23635;
    const double C23646 = C23634 / C23533;
    const double C23645 = C23633 + C23553;
    const double C23644 = C23632 / C23533;
    const double C23669 = C23655 + C23642;
    const double C23668 = C23654 * ae;
    const double C23667 = C23653 / C23533;
    const double C23666 = 2 * C23652;
    const double C23665 = C23651 / C23533;
    const double C23664 = C23626 - C23650;
    const double C23663 = 2 * C23648;
    const double C23662 = be * C23648;
    const double C23661 = C23648 * C23535;
    const double C23660 = ae * C23648;
    const double C23659 = C23647 / C23548;
    const double C23658 = C23646 + C23620;
    const double C23657 = C23645 / C23548;
    const double C23656 = C23618 - C23644;
    const double C23682 = C23669 / C23548;
    const double C23681 = 2 * C23668;
    const double C23680 = C23667 + C23630;
    const double C23679 = C23666 - C23603;
    const double C23678 = C23664 * C23535;
    const double C23677 = C23664 / C23533;
    const double C23676 = C23663 - C23649;
    const double C23675 = 6 * C23662;
    const double C23674 = 2 * C23660;
    const double C23673 = C23661 / C23533;
    const double C23672 = C23660 * C23535;
    const double C23671 = 3 * C23658;
    const double C23670 = C23656 * C23538;
    const double C23692 = C23680 * C23538;
    const double C23691 = be * C23680;
    const double C23690 = C23679 * be;
    const double C23689 = C23678 / C23533;
    const double C23688 = C23676 / C23548;
    const double C23687 = C23674 - C23675;
    const double C23686 = C23637 - C23673;
    const double C23685 = 2 * C23672;
    const double C23684 = C23671 + C23656;
    const double C23683 = C23670 / C23533;
    const double C23702 = C23692 / C23533;
    const double C23701 = C23691 * ae;
    const double C23700 = C23690 / C23533;
    const double C23699 = C23640 - C23689;
    const double C23698 = C23686 * C23535;
    const double C23697 = C23687 / C23548;
    const double C23696 = be * C23686;
    const double C23695 = C23685 / C23533;
    const double C23694 = C23684 + C23555;
    const double C23693 = C23683 + C23657;
    const double C23710 = C23702 + C23682;
    const double C23709 = 2 * C23701;
    const double C23708 = C23699 + C23665;
    const double C23707 = C23698 / C23533;
    const double C23706 = 6 * C23696;
    const double C23705 = C23659 - C23695;
    const double C23704 = C23694 / C23548;
    const double C23703 = C23693 * C23538;
    const double C23719 = be * C23710;
    const double C23718 = C23708 * C23538;
    const double C23717 = C23709 / C23533;
    const double C23716 = 3 * C23708;
    const double C23715 = C23708 * C23535;
    const double C23714 = C23688 - C23707;
    const double C23713 = C23705 * C23535;
    const double C23712 = 2 * C23705;
    const double C23711 = C23703 / C23533;
    const double C23726 = 2 * C23719;
    const double C23725 = C23718 + C23664;
    const double C23724 = C23716 / C23548;
    const double C23723 = C23715 / C23533;
    const double C23722 = C23713 / C23533;
    const double C23721 = C23712 - C23706;
    const double C23720 = C23711 + C23704;
    const double C23731 = C23726 - C23642;
    const double C23730 = C23725 + C23681;
    const double C23729 = C23677 - C23723;
    const double C23728 = C23697 - C23722;
    const double C23727 = C23721 / C23548;
    const double C23735 = C23731 * ae;
    const double C23734 = 3 * C23730;
    const double C23733 = C23729 + C23700;
    const double C23732 = C23728 * C23535;
    const double C23739 = C23735 / C23533;
    const double C23738 = C23734 / C23533;
    const double C23737 = C23733 * C23538;
    const double C23736 = C23732 / C23533;
    const double C23742 = C23738 + C23733;
    const double C23741 = C23737 / C23533;
    const double C23740 = C23727 - C23736;
    const double C23744 = C23742 / C23548;
    const double C23743 = C23741 + C23724;
    const double C23745 = C23743 + C23717;
    const double C23746 = C23745 * C23538;
    const double C23747 = C23746 / C23533;
    const double C23748 = C23747 + C23744;
    const double C23749 = C23748 + C23739;
    const double C23761 = C23545 * C23543;
    const double C23760 = be * C24583;
    const double C23759 = be * C23562;
    const double C23758 = ae * C23754;
    const double C23757 = ae * C24583;
    const double C23756 = C23621 / C23548;
    const double C23755 = ae * yAB;
    const double C23770 = 2 * C23761;
    const double C23769 = 2 * C23760;
    const double C23768 = 4 * C23759;
    const double C23767 = 2 * C23758;
    const double C23766 = 2. * C23757;
    const double C23765 = C23545 * C23755;
    const double C23764 = std::pow(C23755, 2);
    const double C23763 = C23569 * C23755;
    const double C23762 = C23621 * C23755;
    const double C23779 = C23770 / C23533;
    const double C23778 = -C23769;
    const double C23777 = -C23768;
    const double C23776 = C23562 + C23767;
    const double C23775 = C23766 / C23548;
    const double C23774 = 2 * C23765;
    const double C23773 = C23569 * C23764;
    const double C23772 = be * C23763;
    const double C23771 = C23762 / C23533;
    const double C23785 = C23778 / C23548;
    const double C23784 = C23777 / C23548;
    const double C23783 = C23776 / C23548;
    const double C23782 = C23774 / C23533;
    const double C23781 = C23773 / C23559;
    const double C23780 = 2 * C23772;
    const double C23789 = C23785 - C23779;
    const double C23788 = C23782 + C23775;
    const double C23787 = C23781 + C23583;
    const double C23786 = ae * C23780;
    const double C23793 = ae * C23789;
    const double C23792 = C23788 * C23755;
    const double C23791 = be * C23787;
    const double C23790 = C23786 / C23559;
    const double C23797 = C23793 * C23543;
    const double C23796 = C23792 / C23533;
    const double C23795 = 2 * C23791;
    const double C23794 = C23771 + C23790;
    const double C23801 = 2 * C23797;
    const double C23800 = C23796 + C23783;
    const double C23799 = C23795 - C23569;
    const double C23798 = C23794 * C23755;
    const double C23804 = C23801 / C23533;
    const double C23803 = C23799 * ae;
    const double C23802 = C23798 / C23533;
    const double C23807 = C23784 - C23804;
    const double C23806 = C23803 / C23533;
    const double C23805 = C23802 + C23756;
    const double C23809 = ae * C23807;
    const double C23808 = C23805 + C23806;
    const double C23821 = C23546 * C23544;
    const double C23820 = be * C24583;
    const double C23819 = be * C23563;
    const double C23818 = ae * C23814;
    const double C23817 = ae * C24583;
    const double C23816 = C23625 / C23548;
    const double C23815 = ae * zAB;
    const double C23830 = 2 * C23821;
    const double C23829 = 2 * C23820;
    const double C23828 = 4 * C23819;
    const double C23827 = 2 * C23818;
    const double C23826 = 2. * C23817;
    const double C23825 = C23546 * C23815;
    const double C23824 = std::pow(C23815, 2);
    const double C23823 = C23569 * C23815;
    const double C23822 = C23625 * C23815;
    const double C23839 = C23830 / C23533;
    const double C23838 = -C23829;
    const double C23837 = -C23828;
    const double C23836 = C23563 + C23827;
    const double C23835 = C23826 / C23548;
    const double C23834 = 2 * C23825;
    const double C23833 = C23569 * C23824;
    const double C23832 = be * C23823;
    const double C23831 = C23822 / C23533;
    const double C23845 = C23838 / C23548;
    const double C23844 = C23837 / C23548;
    const double C23843 = C23836 / C23548;
    const double C23842 = C23834 / C23533;
    const double C23841 = C23833 / C23559;
    const double C23840 = 2 * C23832;
    const double C23849 = C23845 - C23839;
    const double C23848 = C23842 + C23835;
    const double C23847 = C23841 + C23583;
    const double C23846 = ae * C23840;
    const double C23853 = ae * C23849;
    const double C23852 = C23848 * C23815;
    const double C23851 = be * C23847;
    const double C23850 = C23846 / C23559;
    const double C23857 = C23853 * C23544;
    const double C23856 = C23852 / C23533;
    const double C23855 = 2 * C23851;
    const double C23854 = C23831 + C23850;
    const double C23861 = 2 * C23857;
    const double C23860 = C23856 + C23843;
    const double C23859 = C23855 - C23569;
    const double C23858 = C23854 * C23815;
    const double C23864 = C23861 / C23533;
    const double C23863 = C23859 * ae;
    const double C23862 = C23858 / C23533;
    const double C23867 = C23844 - C23864;
    const double C23866 = C23863 / C23533;
    const double C23865 = C23862 + C23816;
    const double C23869 = ae * C23867;
    const double C23868 = C23865 + C23866;
    const double C23897 = C23809 * C23543;
    const double C23896 = 2 * C23793;
    const double C23895 = C23789 * C23543;
    const double C23894 = be * C23529;
    const double C23893 = be * C24705;
    const double C23892 = 2 * C23789;
    const double C23891 = std::pow(C23538, 2);
    const double C23890 = C23569 * C23538;
    const double C23889 = C23627 * C23538;
    const double C23888 = std::pow(C23543, 2);
    const double C23887 = C23621 * C23543;
    const double C23886 = C23569 * C23543;
    const double C23885 = ae * C24682;
    const double C23884 = ae * C23522;
    const double C23883 = C23534 * C23538;
    const double C23912 = 2 * C23897;
    const double C23911 = be * C23896;
    const double C23910 = C23895 / C23533;
    const double C23909 = 2 * C23894;
    const double C23908 = 2 * C23893;
    const double C23907 = C23569 * C23891;
    const double C23906 = be * C23890;
    const double C23905 = C23889 / C23533;
    const double C23904 = -2. * C23886;
    const double C23903 = C23569 * C23888;
    const double C23902 = C23887 / C23533;
    const double C23901 = ae * C23886;
    const double C23900 = 2 * C23885;
    const double C23899 = 2. * C23884;
    const double C23898 = 2 * C23883;
    const double C23925 = C23912 / C23533;
    const double C23924 = 6 * C23911;
    const double C23923 = C23562 - C23909;
    const double C23922 = C23892 - C23908;
    const double C23921 = C23907 / C23559;
    const double C23920 = 2 * C23906;
    const double C23919 = C23904 / C23533;
    const double C23918 = C23904 / C23573;
    const double C23917 = C23903 / C23559;
    const double C23916 = -2 * C23901;
    const double C23915 = C23551 + C23900;
    const double C23914 = C23899 / C23548;
    const double C23913 = C23898 / C23533;
    const double C23934 = -C23924;
    const double C23933 = C23923 / C23548;
    const double C23932 = C23922 / C23548;
    const double C23931 = C23921 + C23583;
    const double C23930 = ae * C23920;
    const double C23929 = C23917 + C23583;
    const double C23928 = be * C23916;
    const double C23927 = C23915 / C23548;
    const double C23926 = C23913 + C23914;
    const double C23942 = C23934 / C23548;
    const double C23941 = C23933 - C23910;
    const double C23940 = be * C23931;
    const double C23939 = C23930 / C23559;
    const double C23938 = C23929 * C23543;
    const double C23937 = ae * C23929;
    const double C23936 = C23928 / C23559;
    const double C23935 = C23926 * C23538;
    const double C23950 = C23942 - C23925;
    const double C23949 = C23941 * C23543;
    const double C23948 = 2 * C23940;
    const double C23947 = C23905 + C23939;
    const double C23946 = C23938 / C23533;
    const double C23945 = 2 * C23937;
    const double C23944 = C23936 - C23902;
    const double C23943 = C23935 / C23533;
    const double C23958 = C23949 / C23533;
    const double C23957 = C23948 - C23569;
    const double C23956 = C23947 * C23538;
    const double C23955 = C23918 - C23946;
    const double C23954 = C23945 - C23569;
    const double C23953 = C23944 * C23543;
    const double C23952 = C23944 / C23533;
    const double C23951 = C23943 + C23927;
    const double C23964 = C23932 - C23958;
    const double C23963 = C23957 * ae;
    const double C23962 = C23956 / C23533;
    const double C23961 = ae * C23955;
    const double C23960 = C23954 * be;
    const double C23959 = C23953 / C23533;
    const double C23969 = C23963 / C23533;
    const double C23968 = C23962 + C23640;
    const double C23967 = 2 * C23961;
    const double C23966 = C23960 / C23533;
    const double C23965 = C23756 - C23959;
    const double C23972 = C23968 + C23969;
    const double C23971 = C23967 - C23919;
    const double C23970 = C23965 + C23966;
    const double C23974 = C23971 * be;
    const double C23973 = C23970 * C23543;
    const double C23976 = C23974 / C23533;
    const double C23975 = C23973 / C23533;
    const double C23977 = C23952 - C23975;
    const double C23978 = C23977 + C23976;
    const double C24003 = be * C23941;
    const double C24002 = 2 * C23807;
    const double C24001 = C23950 * C23543;
    const double C24000 = be * C23807;
    const double C23999 = 2 * C23809;
    const double C23998 = C23807 * C23543;
    const double C23997 = be * C23789;
    const double C23996 = 2 * C23950;
    const double C23995 = ae * C24697;
    const double C23994 = ae * C24705;
    const double C23993 = C23941 * C23755;
    const double C23992 = ae * C23880;
    const double C23991 = 3 * C23941;
    const double C23990 = C23964 * C23755;
    const double C23989 = C23929 * C23755;
    const double C23988 = C23970 * C23755;
    const double C23987 = 3. * C23929;
    const double C23986 = C23955 * C23755;
    const double C23985 = 3 * C23970;
    const double C23984 = C23978 * C23755;
    const double C24019 = 4 * C24003;
    const double C24018 = C24001 / C23533;
    const double C24017 = 6 * C24000;
    const double C24016 = C23998 / C23533;
    const double C24015 = 4 * C23997;
    const double C24014 = 2 * C23995;
    const double C24013 = 2 * C23994;
    const double C24012 = C23993 / C23533;
    const double C24011 = 2 * C23992;
    const double C24010 = C23990 / C23533;
    const double C24009 = C23989 / C23533;
    const double C24008 = C23988 + C23944;
    const double C24007 = C23987 / C23548;
    const double C24006 = C23986 / C23533;
    const double C24005 = C23985 / C23548;
    const double C24004 = C23984 / C23533;
    const double C24027 = C24002 - C24019;
    const double C24026 = C23999 - C24017;
    const double C24025 = C23896 - C24015;
    const double C24024 = C23892 + C24013;
    const double C24023 = C23991 + C24011;
    const double C24022 = C24009 + C23918;
    const double C24021 = C24006 + C24007;
    const double C24020 = C24004 + C24005;
    const double C24036 = C24027 / C23548;
    const double C24035 = C24026 / C23548;
    const double C24034 = C24025 / C23548;
    const double C24033 = C24024 / C23548;
    const double C24032 = C24023 / C23548;
    const double C24031 = 3 * C24022;
    const double C24030 = C24021 * C23755;
    const double C24029 = be * C24022;
    const double C24028 = be * C24021;
    const double C24044 = C24035 - C24018;
    const double C24043 = C24034 - C24016;
    const double C24042 = C24012 + C24033;
    const double C24041 = C24010 + C24032;
    const double C24040 = C24031 + C23955;
    const double C24039 = C24030 / C23533;
    const double C24038 = C24029 * ae;
    const double C24037 = C24028 * ae;
    const double C24052 = C24043 * C23543;
    const double C24051 = C24044 * C23543;
    const double C24050 = be * C24043;
    const double C24049 = 3 * C24042;
    const double C24048 = C24041 * C23755;
    const double C24047 = C24040 / C23548;
    const double C24046 = 2 * C24038;
    const double C24045 = 2 * C24037;
    const double C24060 = C24052 / C23533;
    const double C24059 = C24051 / C23533;
    const double C24058 = 6 * C24050;
    const double C24057 = C24049 + C23964;
    const double C24056 = C24048 / C23533;
    const double C24055 = C24039 + C24047;
    const double C24054 = C24008 + C24046;
    const double C24053 = C24045 / C23533;
    const double C24066 = C24036 - C24060;
    const double C24065 = C23996 - C24058;
    const double C24064 = C24057 + C24014;
    const double C24063 = be * C24055;
    const double C24062 = 3 * C24054;
    const double C24061 = C24020 + C24053;
    const double C24071 = C24065 / C23548;
    const double C24070 = C24064 / C23548;
    const double C24069 = 2 * C24063;
    const double C24068 = C24062 / C23533;
    const double C24067 = C24061 * C23755;
    const double C24076 = C24071 - C24059;
    const double C24075 = C24056 + C24070;
    const double C24074 = C24069 - C23955;
    const double C24073 = C24068 + C23978;
    const double C24072 = C24067 / C23533;
    const double C24078 = C24074 * ae;
    const double C24077 = C24073 / C23548;
    const double C24080 = C24078 / C23533;
    const double C24079 = C24072 + C24077;
    const double C24081 = C24079 + C24080;
    const double C24103 = C23869 * C23544;
    const double C24102 = 2 * C23853;
    const double C24101 = C23849 * C23544;
    const double C24100 = be * C23531;
    const double C24099 = be * C24706;
    const double C24098 = 2 * C23849;
    const double C24097 = std::pow(C23544, 2);
    const double C24096 = C23625 * C23544;
    const double C24095 = C23569 * C23544;
    const double C24112 = 2 * C24103;
    const double C24111 = be * C24102;
    const double C24110 = C24101 / C23533;
    const double C24109 = 2 * C24100;
    const double C24108 = 2 * C24099;
    const double C24107 = -2. * C24095;
    const double C24106 = C23569 * C24097;
    const double C24105 = C24096 / C23533;
    const double C24104 = ae * C24095;
    const double C24120 = C24112 / C23533;
    const double C24119 = 6 * C24111;
    const double C24118 = C23563 - C24109;
    const double C24117 = C24098 - C24108;
    const double C24116 = C24107 / C23533;
    const double C24115 = C24107 / C23573;
    const double C24114 = C24106 / C23559;
    const double C24113 = -2 * C24104;
    const double C24125 = -C24119;
    const double C24124 = C24118 / C23548;
    const double C24123 = C24117 / C23548;
    const double C24122 = C24114 + C23583;
    const double C24121 = be * C24113;
    const double C24130 = C24125 / C23548;
    const double C24129 = C24124 - C24110;
    const double C24128 = C24122 * C23544;
    const double C24127 = ae * C24122;
    const double C24126 = C24121 / C23559;
    const double C24135 = C24130 - C24120;
    const double C24134 = C24129 * C23544;
    const double C24133 = C24128 / C23533;
    const double C24132 = 2 * C24127;
    const double C24131 = C24126 - C24105;
    const double C24140 = C24134 / C23533;
    const double C24139 = C24115 - C24133;
    const double C24138 = C24132 - C23569;
    const double C24137 = C24131 * C23544;
    const double C24136 = C24131 / C23533;
    const double C24144 = C24123 - C24140;
    const double C24143 = ae * C24139;
    const double C24142 = C24138 * be;
    const double C24141 = C24137 / C23533;
    const double C24147 = 2 * C24143;
    const double C24146 = C24142 / C23533;
    const double C24145 = C23816 - C24141;
    const double C24149 = C24147 - C24116;
    const double C24148 = C24145 + C24146;
    const double C24151 = C24149 * be;
    const double C24150 = C24148 * C23544;
    const double C24153 = C24151 / C23533;
    const double C24152 = C24150 / C23533;
    const double C24154 = C24136 - C24152;
    const double C24155 = C24154 + C24153;
    const double C24182 = be * C24129;
    const double C24181 = 2 * C23867;
    const double C24180 = C24135 * C23544;
    const double C24179 = be * C23867;
    const double C24178 = 2 * C23869;
    const double C24177 = C23867 * C23544;
    const double C24176 = be * C23849;
    const double C24175 = 2 * C24135;
    const double C24174 = ae * C24700;
    const double C24173 = ae * C24706;
    const double C24172 = C24129 * C23815;
    const double C24171 = ae * C24093;
    const double C24170 = 3 * C24129;
    const double C24169 = C24144 * C23815;
    const double C24168 = C24122 * C23815;
    const double C24167 = C24148 * C23815;
    const double C24166 = 3. * C24122;
    const double C24165 = C24139 * C23815;
    const double C24164 = 3 * C24148;
    const double C24163 = C24155 * C23815;
    const double C24198 = 4 * C24182;
    const double C24197 = C24180 / C23533;
    const double C24196 = 6 * C24179;
    const double C24195 = C24177 / C23533;
    const double C24194 = 4 * C24176;
    const double C24193 = 2 * C24174;
    const double C24192 = 2 * C24173;
    const double C24191 = C24172 / C23533;
    const double C24190 = 2 * C24171;
    const double C24189 = C24169 / C23533;
    const double C24188 = C24168 / C23533;
    const double C24187 = C24167 + C24131;
    const double C24186 = C24166 / C23548;
    const double C24185 = C24165 / C23533;
    const double C24184 = C24164 / C23548;
    const double C24183 = C24163 / C23533;
    const double C24206 = C24181 - C24198;
    const double C24205 = C24178 - C24196;
    const double C24204 = C24102 - C24194;
    const double C24203 = C24098 + C24192;
    const double C24202 = C24170 + C24190;
    const double C24201 = C24188 + C24115;
    const double C24200 = C24185 + C24186;
    const double C24199 = C24183 + C24184;
    const double C24215 = C24206 / C23548;
    const double C24214 = C24205 / C23548;
    const double C24213 = C24204 / C23548;
    const double C24212 = C24203 / C23548;
    const double C24211 = C24202 / C23548;
    const double C24210 = 3 * C24201;
    const double C24209 = C24200 * C23815;
    const double C24208 = be * C24201;
    const double C24207 = be * C24200;
    const double C24223 = C24214 - C24197;
    const double C24222 = C24213 - C24195;
    const double C24221 = C24191 + C24212;
    const double C24220 = C24189 + C24211;
    const double C24219 = C24210 + C24139;
    const double C24218 = C24209 / C23533;
    const double C24217 = C24208 * ae;
    const double C24216 = C24207 * ae;
    const double C24231 = C24222 * C23544;
    const double C24230 = C24223 * C23544;
    const double C24229 = be * C24222;
    const double C24228 = 3 * C24221;
    const double C24227 = C24220 * C23815;
    const double C24226 = C24219 / C23548;
    const double C24225 = 2 * C24217;
    const double C24224 = 2 * C24216;
    const double C24239 = C24231 / C23533;
    const double C24238 = C24230 / C23533;
    const double C24237 = 6 * C24229;
    const double C24236 = C24228 + C24144;
    const double C24235 = C24227 / C23533;
    const double C24234 = C24218 + C24226;
    const double C24233 = C24187 + C24225;
    const double C24232 = C24224 / C23533;
    const double C24245 = C24215 - C24239;
    const double C24244 = C24175 - C24237;
    const double C24243 = C24236 + C24193;
    const double C24242 = be * C24234;
    const double C24241 = 3 * C24233;
    const double C24240 = C24199 + C24232;
    const double C24250 = C24244 / C23548;
    const double C24249 = C24243 / C23548;
    const double C24248 = 2 * C24242;
    const double C24247 = C24241 / C23533;
    const double C24246 = C24240 * C23815;
    const double C24255 = C24250 - C24238;
    const double C24254 = C24235 + C24249;
    const double C24253 = C24248 - C24139;
    const double C24252 = C24247 + C24155;
    const double C24251 = C24246 / C23533;
    const double C24257 = C24253 * ae;
    const double C24256 = C24252 / C23548;
    const double C24259 = C24257 / C23533;
    const double C24258 = C24251 + C24256;
    const double C24260 = C24258 + C24259;
    const double C24279 = C23643 * C23538;
    const double C24278 = C23538 * C23580;
    const double C24277 = C23664 * C23538;
    const double C24276 = C23538 * C23730;
    const double C24275 = ae * C24695;
    const double C24274 = 4. * C23534;
    const double C24273 = C23584 * C23538;
    const double C24272 = C23658 * C23538;
    const double C24287 = C24279 / C23533;
    const double C24286 = C24278 / C23559;
    const double C24285 = C24277 / C23533;
    const double C24284 = C24276 / C23559;
    const double C24283 = 2 * C24275;
    const double C24282 = C24274 / C23548;
    const double C24281 = C24273 / C23533;
    const double C24280 = C24272 / C23533;
    const double C24290 = C23583 - C24286;
    const double C24289 = C24285 + C23640;
    const double C24288 = C24281 + C24282;
    const double C24293 = 2 * C24290;
    const double C24292 = be * C24290;
    const double C24291 = 2 * C24288;
    const double C24296 = C24293 + C23601;
    const double C24295 = C24292 * ae;
    const double C24294 = C24291 + C23619;
    const double C24299 = C24296 / C23548;
    const double C24298 = 2 * C24295;
    const double C24297 = C24294 + C24283;
    const double C24302 = C24287 + C24299;
    const double C24301 = C24298 / C23533;
    const double C24300 = C24297 / C23548;
    const double C24305 = be * C24302;
    const double C24304 = C24289 + C24301;
    const double C24303 = C24280 + C24300;
    const double C24307 = 2 * C24305;
    const double C24306 = 2 * C24304;
    const double C24309 = C24307 - C23601;
    const double C24308 = C24306 + C23708;
    const double C24311 = C24309 * ae;
    const double C24310 = C24308 / C23548;
    const double C24313 = C24311 / C23533;
    const double C24312 = C24284 + C24310;
    const double C24314 = C24312 + C24313;
    const double C24328 = ae * C24703;
    const double C24327 = C23788 + C23789;
    const double C24326 = 4. * C23545;
    const double C24325 = C23789 * C23755;
    const double C24324 = C23886 / C23533;
    const double C24323 = C23763 / C23533;
    const double C24322 = C23794 + C23944;
    const double C24321 = C23755 * C23886;
    const double C24320 = C23944 * C23755;
    const double C24335 = 2 * C24328;
    const double C24334 = C24326 / C23548;
    const double C24333 = C24325 / C23533;
    const double C24332 = C24323 - C24324;
    const double C24331 = C24322 / C23548;
    const double C24330 = C24321 / C23559;
    const double C24329 = C24320 / C23533;
    const double C24340 = C24327 + C24335;
    const double C24339 = C24333 + C24334;
    const double C24338 = C24332 / C23548;
    const double C24337 = C23583 - C24330;
    const double C24336 = C24329 + C23756;
    const double C24344 = C24340 / C23548;
    const double C24343 = C24339 * C23755;
    const double C24342 = C24337 * C23755;
    const double C24341 = be * C24337;
    const double C24347 = C24343 / C23533;
    const double C24346 = C24342 / C23533;
    const double C24345 = C24341 * ae;
    const double C24350 = C24347 + C24344;
    const double C24349 = C24346 + C24338;
    const double C24348 = 2 * C24345;
    const double C24352 = be * C24349;
    const double C24351 = C24348 / C23533;
    const double C24354 = 2 * C24352;
    const double C24353 = C24336 + C24351;
    const double C24356 = C24354 + C24324;
    const double C24355 = C24353 * C23755;
    const double C24358 = C24356 * ae;
    const double C24357 = C24355 / C23533;
    const double C24360 = C24358 / C23533;
    const double C24359 = C24357 + C24331;
    const double C24361 = C24359 + C24360;
    const double C24387 = ae * C24704;
    const double C24386 = C23848 + C23849;
    const double C24385 = 4. * C23546;
    const double C24384 = C23849 * C23815;
    const double C24383 = C24095 / C23533;
    const double C24382 = C23823 / C23533;
    const double C24381 = C23854 + C24131;
    const double C24380 = C23815 * C24095;
    const double C24379 = C24131 * C23815;
    const double C24394 = 2 * C24387;
    const double C24393 = C24385 / C23548;
    const double C24392 = C24384 / C23533;
    const double C24391 = C24382 - C24383;
    const double C24390 = C24381 / C23548;
    const double C24389 = C24380 / C23559;
    const double C24388 = C24379 / C23533;
    const double C24399 = C24386 + C24394;
    const double C24398 = C24392 + C24393;
    const double C24397 = C24391 / C23548;
    const double C24396 = C23583 - C24389;
    const double C24395 = C24388 + C23816;
    const double C24403 = C24399 / C23548;
    const double C24402 = C24398 * C23815;
    const double C24401 = C24396 * C23815;
    const double C24400 = be * C24396;
    const double C24406 = C24402 / C23533;
    const double C24405 = C24401 / C23533;
    const double C24404 = C24400 * ae;
    const double C24409 = C24406 + C24403;
    const double C24408 = C24405 + C24397;
    const double C24407 = 2 * C24404;
    const double C24411 = be * C24408;
    const double C24410 = C24407 / C23533;
    const double C24413 = 2 * C24411;
    const double C24412 = C24395 + C24410;
    const double C24415 = C24413 + C24383;
    const double C24414 = C24412 * C23815;
    const double C24417 = C24415 * ae;
    const double C24416 = C24414 / C23533;
    const double C24419 = C24417 / C23533;
    const double C24418 = C24416 + C24390;
    const double C24420 = C24418 + C24419;
    const double C24440 = ae * C24698;
    const double C24439 = 2 * C24339;
    const double C24438 = C24042 * C23755;
    const double C24437 = 2 * C24337;
    const double C24436 = C24022 * C23755;
    const double C24435 = 2 * C24353;
    const double C24434 = C23755 * C24054;
    const double C24447 = 2 * C24440;
    const double C24446 = C24439 + C23941;
    const double C24445 = C24438 / C23533;
    const double C24444 = C24437 + C23929;
    const double C24443 = C24436 / C23533;
    const double C24442 = C24435 + C23970;
    const double C24441 = C24434 / C23559;
    const double C24450 = C24446 + C24447;
    const double C24449 = C24444 / C23548;
    const double C24448 = C24442 / C23548;
    const double C24453 = C24450 / C23548;
    const double C24452 = C24443 + C24449;
    const double C24451 = C24441 + C24448;
    const double C24455 = C24445 + C24453;
    const double C24454 = be * C24452;
    const double C24456 = 2 * C24454;
    const double C24457 = C24456 - C23929;
    const double C24458 = C24457 * ae;
    const double C24459 = C24458 / C23533;
    const double C24460 = C24451 + C24459;
    const double C24481 = C23580 / C23533;
    const double C24480 = C23890 / C23533;
    const double C24479 = C24290 * C23538;
    const double C24478 = C23947 + C23664;
    const double C24477 = C24304 * C23538;
    const double C24476 = ae * C24702;
    const double C24475 = C23926 + C23584;
    const double C24474 = C24288 * C23538;
    const double C24487 = C24480 - C24481;
    const double C24486 = C24479 / C23533;
    const double C24485 = C24478 / C23548;
    const double C24484 = C24477 / C23533;
    const double C24483 = 2 * C24476;
    const double C24482 = C24474 / C23533;
    const double C24490 = C24487 / C23548;
    const double C24489 = C24484 + C24485;
    const double C24488 = C24475 + C24483;
    const double C24492 = C24486 + C24490;
    const double C24491 = C24488 / C23548;
    const double C24494 = be * C24492;
    const double C24493 = C24482 + C24491;
    const double C24495 = 2 * C24494;
    const double C24496 = C24495 + C24481;
    const double C24497 = C24496 * ae;
    const double C24498 = C24497 / C23533;
    const double C24499 = C24489 + C24498;
    const double C24525 = ae * C24701;
    const double C24524 = 2 * C24398;
    const double C24523 = C24221 * C23815;
    const double C24522 = 2 * C24396;
    const double C24521 = C24201 * C23815;
    const double C24520 = 2 * C24412;
    const double C24519 = C23815 * C24233;
    const double C24532 = 2 * C24525;
    const double C24531 = C24524 + C24129;
    const double C24530 = C24523 / C23533;
    const double C24529 = C24522 + C24122;
    const double C24528 = C24521 / C23533;
    const double C24527 = C24520 + C24148;
    const double C24526 = C24519 / C23559;
    const double C24535 = C24531 + C24532;
    const double C24534 = C24529 / C23548;
    const double C24533 = C24527 / C23548;
    const double C24538 = C24535 / C23548;
    const double C24537 = C24528 + C24534;
    const double C24536 = C24526 + C24533;
    const double C24540 = C24530 + C24538;
    const double C24539 = be * C24537;
    const double C24541 = 2 * C24539;
    const double C24542 = C24541 - C24122;
    const double C24543 = C24542 * ae;
    const double C24544 = C24543 / C23533;
    const double C24545 = C24536 + C24544;
    const double C24768 = ae * C24129;
    const double C24767 = C24222 * C23815;
    const double C24766 = C24197 - C24214;
    const double C24765 = C23695 - C23659;
    const double C24764 = 4 * C23595;
    const double C24763 = C23648 * C23538;
    const double C24762 = ae * C23941;
    const double C24761 = C24043 * C23755;
    const double C24760 = C24018 - C24035;
    const double C24759 = 4 * C23853;
    const double C24758 = C23867 * C23815;
    const double C24757 = 6 * C23869;
    const double C24756 = C24135 * C23815;
    const double C24755 = C24120 - C24130;
    const double C24754 = 4 * C23793;
    const double C24753 = C23807 * C23755;
    const double C24752 = 6 * C23809;
    const double C24751 = C23950 * C23755;
    const double C24750 = C23722 - C23697;
    const double C24749 = C23925 - C23942;
    const double C24748 = ae * C23619;
    const double C24747 = C23686 * C23538;
    const double C24746 = 6 * C23660;
    const double C24745 = C23705 * C23538;
    const double C24744 = ae * C24222;
    const double C24743 = C24223 * C23815;
    const double C24742 = ae * C24245;
    const double C24741 = 3 * C24223;
    const double C24740 = C24255 * C23815;
    const double C24739 = C24238 - C24250;
    const double C24738 = ae * C24043;
    const double C24737 = C24044 * C23755;
    const double C24736 = ae * C24066;
    const double C24735 = 3 * C24044;
    const double C24734 = C24076 * C23755;
    const double C24733 = -2 * C23660;
    const double C24732 = C24059 - C24071;
    const double C24731 = ae * C23551;
    const double C24730 = C23595 * C23538;
    const double C24729 = ae * C23608;
    const double C24728 = C23660 * C23538;
    const double C24727 = -2 * C23869;
    const double C24726 = ae * C23563;
    const double C24725 = C23853 * C23815;
    const double C24724 = ae * C24102;
    const double C24723 = C23869 * C23815;
    const double C24722 = ae * C23562;
    const double C24721 = C23793 * C23755;
    const double C24720 = ae * C23896;
    const double C24719 = C23809 * C23755;
    const double C24718 = C23736 - C23727;
    const double C24717 = C23785 - C23839;
    const double C24716 = -2 * C23809;
    const double C24715 = ae * C23686;
    const double C24714 = C23728 * C23538;
    const double C24713 = ae * C23714;
    const double C24712 = 3 * C23728;
    const double C24711 = C23740 * C23538;
    const double C24811 = 4 * C24768;
    const double C24810 = C24767 / C23533;
    const double C24809 = C23608 + C24764;
    const double C24808 = C24763 / C23533;
    const double C24807 = 4 * C24762;
    const double C24806 = C24761 / C23533;
    const double C24805 = C24102 + C24759;
    const double C24804 = C24758 / C23533;
    const double C24803 = C24178 + C24757;
    const double C24802 = C24756 / C23533;
    const double C24801 = C23896 + C24754;
    const double C24800 = C24753 / C23533;
    const double C24799 = C23999 + C24752;
    const double C24798 = C24751 / C23533;
    const double C24797 = 4 * C24748;
    const double C24796 = C24747 / C23533;
    const double C24795 = C23674 + C24746;
    const double C24794 = C24745 / C23533;
    const double C24793 = 6 * C24744;
    const double C24792 = C24743 / C23533;
    const double C24791 = 6 * C24742;
    const double C24790 = C24740 / C23533;
    const double C24789 = 6 * C24738;
    const double C24788 = C24737 / C23533;
    const double C24787 = 6 * C24736;
    const double C24786 = C24734 / C23533;
    const double C24785 = 4. * C24731;
    const double C24784 = 2 * C24730;
    const double C24783 = 6. * C24729;
    const double C24782 = 2 * C24728;
    const double C24781 = 4. * C24726;
    const double C24780 = 2 * C24725;
    const double C24779 = 6. * C24724;
    const double C24778 = 2 * C24723;
    const double C24777 = 4. * C24722;
    const double C24776 = 2 * C24721;
    const double C24775 = 6. * C24720;
    const double C24774 = 2 * C24719;
    const double C24773 = ae * C24717;
    const double C24772 = 6 * C24715;
    const double C24771 = C24714 / C23533;
    const double C24770 = 6 * C24713;
    const double C24769 = C24711 / C23533;
    const double C24839 = C24181 + C24811;
    const double C24838 = C24809 / C23548;
    const double C24837 = C24002 + C24807;
    const double C24836 = C24805 / C23548;
    const double C24835 = C24803 / C23548;
    const double C24834 = C24801 / C23548;
    const double C24833 = C24799 / C23548;
    const double C24832 = C23663 + C24797;
    const double C24831 = C24795 / C23548;
    const double C24830 = C24175 + C24793;
    const double C24829 = C24741 + C24791;
    const double C24828 = C23996 + C24789;
    const double C24827 = C24735 + C24787;
    const double C24826 = C24785 / C23548;
    const double C24825 = C24784 / C23533;
    const double C24824 = C24783 / C23548;
    const double C24823 = C24782 / C23533;
    const double C24822 = C24781 / C23548;
    const double C24821 = C24780 / C23533;
    const double C24820 = C24779 / C23548;
    const double C24819 = C24778 / C23533;
    const double C24818 = C24777 / C23548;
    const double C24817 = C24776 / C23533;
    const double C24816 = C24775 / C23548;
    const double C24815 = C24774 / C23533;
    const double C24814 = C24773 * C23544;
    const double C24813 = C23712 + C24772;
    const double C24812 = C24712 + C24770;
    const double C24861 = C24839 / C23548;
    const double C24860 = C24808 + C24838;
    const double C24859 = C24837 / C23548;
    const double C24858 = C24804 + C24836;
    const double C24857 = C24802 + C24835;
    const double C24856 = C24800 + C24834;
    const double C24855 = C24798 + C24833;
    const double C24854 = C24832 / C23548;
    const double C24853 = C24794 + C24831;
    const double C24852 = C24830 / C23548;
    const double C24851 = C24829 / C23548;
    const double C24850 = C24828 / C23548;
    const double C24849 = C24827 / C23548;
    const double C24848 = C24825 + C24826;
    const double C24847 = C24823 + C24824;
    const double C24846 = C24821 + C24822;
    const double C24845 = C24819 + C24820;
    const double C24844 = C24817 + C24818;
    const double C24843 = C24815 + C24816;
    const double C24842 = 2 * C24814;
    const double C24841 = C24813 / C23548;
    const double C24840 = C24812 / C23548;
    const double C24889 = C24810 + C24861;
    const double C24888 = 2 * C24857;
    const double C24887 = ae * C24860;
    const double C24886 = C24847 + C23705;
    const double C24885 = C24853 * C23538;
    const double C24884 = C24806 + C24859;
    const double C24883 = 2 * C24855;
    const double C24882 = ae * C24858;
    const double C24881 = C24845 + C24135;
    const double C24880 = C24857 * C23815;
    const double C24879 = ae * C24856;
    const double C24878 = C24843 + C23950;
    const double C24877 = C24855 * C23755;
    const double C24876 = C24796 + C24854;
    const double C24875 = 2 * C24853;
    const double C24874 = C24792 + C24852;
    const double C24873 = C24790 + C24851;
    const double C24872 = C24788 + C24850;
    const double C24871 = C24786 + C24849;
    const double C24870 = ae * C24848;
    const double C24869 = C24847 * C23538;
    const double C24868 = ae * C24846;
    const double C24867 = C24845 * C23815;
    const double C24866 = ae * C24844;
    const double C24865 = C24843 * C23755;
    const double C24864 = C24842 / C23533;
    const double C24863 = C24771 + C24841;
    const double C24862 = C24769 + C24840;
    const double C24911 = ae * C24889;
    const double C24910 = C24888 + C24223;
    const double C24909 = C24874 * C23815;
    const double C24908 = 6 * C24887;
    const double C24907 = C24885 / C23533;
    const double C24906 = ae * C24884;
    const double C24905 = C24883 + C24044;
    const double C24904 = C24872 * C23755;
    const double C24903 = 6 * C24882;
    const double C24902 = C24880 / C23533;
    const double C24901 = 6 * C24879;
    const double C24900 = C24877 / C23533;
    const double C24899 = ae * C24876;
    const double C24898 = C24875 + C23728;
    const double C24897 = C24863 * C23538;
    const double C24896 = 6 * C24870;
    const double C24895 = C24869 / C23533;
    const double C24894 = 6 * C24868;
    const double C24893 = C24867 / C23533;
    const double C24892 = 6 * C24866;
    const double C24891 = C24865 / C23533;
    const double C24890 = C23844 - C24864;
    const double C24924 = 6 * C24911;
    const double C24923 = C24909 / C23533;
    const double C24922 = C24886 + C24908;
    const double C24921 = 6 * C24906;
    const double C24920 = C24904 / C23533;
    const double C24919 = C24881 + C24903;
    const double C24918 = C24878 + C24901;
    const double C24917 = 6 * C24899;
    const double C24916 = C24897 / C23533;
    const double C24915 = C23674 + C24896;
    const double C24914 = C24178 + C24894;
    const double C24913 = C23999 + C24892;
    const double C24912 = ae * C24890;
    const double C24934 = C24910 + C24924;
    const double C24933 = C24922 / C23548;
    const double C24932 = C24905 + C24921;
    const double C24931 = C24919 / C23548;
    const double C24930 = C24918 / C23548;
    const double C24929 = C24898 + C24917;
    const double C24928 = C24915 / C23548;
    const double C24927 = C24914 / C23548;
    const double C24926 = C24913 / C23548;
    const double C24925 = -2 * C24912;
    const double C24943 = C24934 / C23548;
    const double C24942 = C24907 + C24933;
    const double C24941 = C24932 / C23548;
    const double C24940 = C24902 + C24931;
    const double C24939 = C24900 + C24930;
    const double C24938 = C24929 / C23548;
    const double C24937 = C24895 + C24928;
    const double C24936 = C24893 + C24927;
    const double C24935 = C24891 + C24926;
    const double C24946 = C24923 + C24943;
    const double C24945 = C24920 + C24941;
    const double C24944 = C24916 + C24938;
    const double gx300200 = C23720 * C23621 * C24583 -
                            (((C24862 * C23538) / C23533 +
                              (3 * C24863 + C23740 +
                               6 * ae *
                                   ((C23714 * C23538) / C23533 +
                                    (3 * C23686 + 4 * ae * C23656) / C23548)) /
                                  C23548) *
                             std::pow(C24583, 2)) /
                                2.0 +
                            C23720 * C24583 * C23625;
    const double gx300020 = (C24583 * C23753 * C24718) / 2.0 +
                            C23656 * C23808 * C24583 + C23656 * C23753 * C23625;
    const double gx300002 = (C23813 * C24583 * C24718) / 2.0 +
                            C23656 * C23621 * C23813 + C23656 * C24583 * C23868;
    const double gx300110 = C23693 * C23794 * C24583 -
                            (C24583 * C23754 * C24862) / 2.0 +
                            C23693 * C23754 * C23625;
    const double gx300101 = C23693 * C23621 * C23814 -
                            (C23814 * C24583 * C24862) / 2.0 +
                            C23693 * C24583 * C23854;
    const double gx300011 = (C23814 * C23754 * C24718) / 2.0 +
                            C23656 * C23794 * C23814 + C23656 * C23754 * C23854;
    const double gx030200 = C23951 * C23978 * C24583 -
                            (C24583 * C23880 * C24937) / 2.0 +
                            C23951 * C23880 * C23625;
    const double gx030020 = (C24583 * C23982 * C24733) / 2.0 +
                            2 * C23534 * C24081 * C24583 +
                            2 * C23534 * C23982 * C23625;
    const double gx030002 = (C23813 * C23880 * C24733) / 2.0 +
                            2 * C23534 * C23978 * C23813 +
                            2 * C23534 * C23880 * C23868;
    const double gx030110 = C23926 * C24061 * C24583 -
                            (C24583 * C24697 * C24847) / 2.0 +
                            C23926 * C24697 * C23625;
    const double gx030101 = C23926 * C23978 * C23814 -
                            (C23814 * C23880 * C24847) / 2.0 +
                            C23926 * C23880 * C23854;
    const double gx030011 = (C23814 * C24697 * C24733) / 2.0 +
                            2 * C23534 * C24061 * C23814 +
                            2 * C23534 * C24697 * C23854;
    const double gx003200 = C23951 * C23621 * C24093 -
                            (C24093 * C24583 * C24937) / 2.0 +
                            C23951 * C24583 * C24155;
    const double gx003020 = (C24093 * C23753 * C24733) / 2.0 +
                            2 * C23534 * C23808 * C24093 +
                            2 * C23534 * C23753 * C24155;
    const double gx003002 = (C24161 * C24583 * C24733) / 2.0 +
                            2 * C23534 * C23621 * C24161 +
                            2 * C23534 * C24583 * C24260;
    const double gx003110 = C23926 * C23794 * C24093 -
                            (C24093 * C23754 * C24847) / 2.0 +
                            C23926 * C23754 * C24155;
    const double gx003101 = C23926 * C23621 * C24700 -
                            (C24700 * C24583 * C24847) / 2.0 +
                            C23926 * C24583 * C24240;
    const double gx003011 = (C24700 * C23754 * C24733) / 2.0 +
                            2 * C23534 * C23794 * C24700 +
                            2 * C23534 * C23754 * C24240;
    const double gx210200 = C24303 * C23944 * C24583 -
                            (C24583 * C23529 * C24944) / 2.0 +
                            C24303 * C23529 * C23625;
    const double gx210020 = (C24583 * C24318 * C24750) / 2.0 +
                            C23619 * C24361 * C24583 + C23619 * C24318 * C23625;
    const double gx210002 = (C23813 * C23529 * C24750) / 2.0 +
                            C23619 * C23944 * C23813 + C23619 * C23529 * C23868;
    const double gx210110 = C23658 * C24353 * C24583 -
                            (C24583 * C24703 * C24863) / 2.0 +
                            C23658 * C24703 * C23625;
    const double gx210101 = C23658 * C23944 * C23814 -
                            (C23814 * C23529 * C24863) / 2.0 +
                            C23658 * C23529 * C23854;
    const double gx210011 = (C23814 * C24703 * C24750) / 2.0 +
                            C23619 * C24353 * C23814 + C23619 * C24703 * C23854;
    const double gx201200 = C24303 * C23621 * C23531 -
                            (C23531 * C24583 * C24944) / 2.0 +
                            C24303 * C24583 * C24131;
    const double gx201020 = (C23531 * C23753 * C24750) / 2.0 +
                            C23619 * C23808 * C23531 + C23619 * C23753 * C24131;
    const double gx201002 = (C24377 * C24583 * C24750) / 2.0 +
                            C23619 * C23621 * C24377 + C23619 * C24583 * C24420;
    const double gx201110 = C23658 * C23794 * C23531 -
                            (C23531 * C23754 * C24863) / 2.0 +
                            C23658 * C23754 * C24131;
    const double gx201101 = C23658 * C23621 * C24704 -
                            (C24704 * C24583 * C24863) / 2.0 +
                            C23658 * C24583 * C24412;
    const double gx201011 = (C24704 * C23754 * C24750) / 2.0 +
                            C23619 * C23794 * C24704 + C23619 * C23754 * C24412;
    const double gx021200 = C23951 * C23970 * C23531 -
                            (C23531 * C24705 * C24937) / 2.0 +
                            C23951 * C24705 * C24131;
    const double gx021020 = (C23531 * C24432 * C24733) / 2.0 +
                            2 * C23534 * C24460 * C23531 +
                            2 * C23534 * C24432 * C24131;
    const double gx021002 = (C24377 * C24705 * C24733) / 2.0 +
                            2 * C23534 * C23970 * C24377 +
                            2 * C23534 * C24705 * C24420;
    const double gx021110 = (C23531 * C23926 * C24054) / C23533 -
                            (C23531 * C24698 * C24847) / 2.0 +
                            C23926 * C24698 * C24131;
    const double gx021101 = C23926 * C23970 * C24704 -
                            (C24704 * C24705 * C24847) / 2.0 +
                            C23926 * C24705 * C24412;
    const double gx021011 = (C24704 * C24698 * C24733) / 2.0 +
                            (C24704 * 2 * C23534 * C24054) / C23533 +
                            2 * C23534 * C24698 * C24412;
    const double gx120200 = C24493 * C23970 * C24583 -
                            (C24583 * C24705 * C24942) / 2.0 +
                            C24493 * C24705 * C23625;
    const double gx120020 = (C24583 * C24432 * C24765) / 2.0 +
                            C23584 * C24460 * C24583 + C23584 * C24432 * C23625;
    const double gx120002 = (C23813 * C24705 * C24765) / 2.0 +
                            C23584 * C23970 * C23813 + C23584 * C24705 * C23868;
    const double gx120110 = (C24583 * C24288 * C24054) / C23533 -
                            (C24583 * C24698 * C24853) / 2.0 +
                            C24288 * C24698 * C23625;
    const double gx120101 = C24288 * C23970 * C23814 -
                            (C23814 * C24705 * C24853) / 2.0 +
                            C24288 * C24705 * C23854;
    const double gx120011 = (C23814 * C24698 * C24765) / 2.0 +
                            (C23814 * C23584 * C24054) / C23533 +
                            C23584 * C24698 * C23854;
    const double gx102200 = C24493 * C23621 * C24706 -
                            (C24706 * C24583 * C24942) / 2.0 +
                            C24493 * C24583 * C24148;
    const double gx102020 = (C24706 * C23753 * C24765) / 2.0 +
                            C23584 * C23808 * C24706 + C23584 * C23753 * C24148;
    const double gx102002 = (C24517 * C24583 * C24765) / 2.0 +
                            C23584 * C23621 * C24517 + C23584 * C24583 * C24545;
    const double gx102110 = C24288 * C23794 * C24706 -
                            (C24706 * C23754 * C24853) / 2.0 +
                            C24288 * C23754 * C24148;
    const double gx102101 = C24288 * C23621 * C24701 -
                            (C24701 * C24583 * C24853) / 2.0 +
                            (C24288 * C24583 * C24233) / C23533;
    const double gx102011 = (C24701 * C23754 * C24765) / 2.0 +
                            C23584 * C23794 * C24701 +
                            (C23584 * C23754 * C24233) / C23533;
    const double gx012200 = C23951 * C23944 * C24706 -
                            (C24706 * C23529 * C24937) / 2.0 +
                            C23951 * C23529 * C24148;
    const double gx012020 = (C24706 * C24318 * C24733) / 2.0 +
                            2 * C23534 * C24361 * C24706 +
                            2 * C23534 * C24318 * C24148;
    const double gx012002 = (C24517 * C23529 * C24733) / 2.0 +
                            2 * C23534 * C23944 * C24517 +
                            2 * C23534 * C23529 * C24545;
    const double gx012110 = C23926 * C24353 * C24706 -
                            (C24706 * C24703 * C24847) / 2.0 +
                            C23926 * C24703 * C24148;
    const double gx012101 = C23926 * C23944 * C24701 -
                            (C24701 * C23529 * C24847) / 2.0 +
                            (C23926 * C23529 * C24233) / C23533;
    const double gx012011 = (C24701 * C24703 * C24733) / 2.0 +
                            2 * C23534 * C24353 * C24701 +
                            (2 * C23534 * C24703 * C24233) / C23533;
    const double gx111200 = C24493 * C23944 * C23531 -
                            (C23531 * C23529 * C24942) / 2.0 +
                            C24493 * C23529 * C24131;
    const double gx111020 = (C23531 * C24318 * C24765) / 2.0 +
                            C23584 * C24361 * C23531 + C23584 * C24318 * C24131;
    const double gx111002 = (C24377 * C23529 * C24765) / 2.0 +
                            C23584 * C23944 * C24377 + C23584 * C23529 * C24420;
    const double gx111110 = C24288 * C24353 * C23531 -
                            (C23531 * C24703 * C24853) / 2.0 +
                            C24288 * C24703 * C24131;
    const double gx111101 = C24288 * C23944 * C24704 -
                            (C24704 * C23529 * C24853) / 2.0 +
                            C24288 * C23529 * C24412;
    const double gx111011 = (C24704 * C24703 * C24765) / 2.0 +
                            C23584 * C24353 * C24704 + C23584 * C24703 * C24412;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gx210110 - std::sqrt(15. / 8.0) * gx030110);
    gx[(Ai + 0) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(135. / 8.0) * gx210011 - std::sqrt(15. / 8.0) * gx030011);
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(1.25 / 8.0) * gx030200 + std::sqrt(1.25 / 8.0) * gx030020 -
         std::sqrt(5.0 / 8.0) * gx030002 - std::sqrt(11.25 / 8.0) * gx210200 -
         std::sqrt(11.25 / 8.0) * gx210020 + std::sqrt(45. / 8.0) * gx210002);
    gx[(Ai + 0) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(135. / 8.0) * gx210101 - std::sqrt(15. / 8.0) * gx030101);
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(3.75 / 8.0) * gx030020 - std::sqrt(3.75 / 8.0) * gx030200 +
         std::sqrt(33.75 / 8.0) * gx210200 - std::sqrt(33.75 / 8.0) * gx210020);
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(45.) * gx111110;
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gx111011;
    gx[(Ai + 1) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(15.0) * gx111002 -
              (std::sqrt(3.75) * gx111020 + std::sqrt(3.75) * gx111200));
    gx[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(45.) * gx111101;
    gx[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(11.25) * gx111200 - std::sqrt(11.25) * gx111020);
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        -cc * (std::sqrt(18.) * gx012110 + std::sqrt(9. / 8.0) * gx210110 +
               std::sqrt(9. / 8.0) * gx030110);
    gx[(Ai + 2) * matrix_size + Bi + 1] +=
        -cc * (std::sqrt(18.) * gx012011 + std::sqrt(9. / 8.0) * gx210011 +
               std::sqrt(9. / 8.0) * gx030011);
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gx030200 + std::sqrt(0.75 / 8.0) * gx030020 -
         std::sqrt(3.0 / 8.0) * gx030002 + std::sqrt(0.75 / 8.0) * gx210200 +
         std::sqrt(0.75 / 8.0) * gx210020 - std::sqrt(3.0 / 8.0) * gx210002 +
         std::sqrt(1.5) * gx012200 + std::sqrt(1.5) * gx012020 -
         std::sqrt(6.0) * gx012002);
    gx[(Ai + 2) * matrix_size + Bi + 3] +=
        -cc * (std::sqrt(18.) * gx012101 + std::sqrt(9. / 8.0) * gx210101 +
               std::sqrt(9. / 8.0) * gx030101);
    gx[(Ai + 2) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(2.25 / 8.0) * gx030020 - std::sqrt(2.25 / 8.0) * gx030200 -
         std::sqrt(2.25 / 8.0) * gx210200 + std::sqrt(2.25 / 8.0) * gx210020 -
         std::sqrt(4.5) * gx012200 + std::sqrt(4.5) * gx012020);
    gx[(Ai + 3) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(3.0) * gx003110 - std::sqrt(6.75) * gx201110 -
              std::sqrt(6.75) * gx021110);
    gx[(Ai + 3) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(3.0) * gx003011 - std::sqrt(6.75) * gx201011 -
              std::sqrt(6.75) * gx021011);
    gx[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gx003200 - 0.5 * gx003020 + gx003002 + 0.75 * gx201200 +
              0.75 * gx201020 - 1.5 * gx201002 + 0.75 * gx021200 +
              0.75 * gx021020 - 1.5 * gx021002);
    gx[(Ai + 3) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gx003101 - std::sqrt(6.75) * gx201101 -
              std::sqrt(6.75) * gx021101);
    gx[(Ai + 3) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gx003200 - std::sqrt(0.75) * gx003020 -
              std::sqrt(1.6875) * gx201200 + std::sqrt(1.6875) * gx201020 -
              std::sqrt(1.6875) * gx021200 + std::sqrt(1.6875) * gx021020);
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(18.) * gx102110 - (std::sqrt(9. / 8.0) * gx120110 +
                                           std::sqrt(9. / 8.0) * gx300110));
    gx[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(18.) * gx102011 - (std::sqrt(9. / 8.0) * gx120011 +
                                           std::sqrt(9. / 8.0) * gx300011));
    gx[(Ai + 4) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gx300200 + std::sqrt(0.75 / 8.0) * gx300020 -
         std::sqrt(3.0 / 8.0) * gx300002 + std::sqrt(0.75 / 8.0) * gx120200 +
         std::sqrt(0.75 / 8.0) * gx120020 - std::sqrt(3.0 / 8.0) * gx120002 -
         std::sqrt(1.5) * gx102200 - std::sqrt(1.5) * gx102020 +
         std::sqrt(6.0) * gx102002);
    gx[(Ai + 4) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(18.) * gx102101 - (std::sqrt(9. / 8.0) * gx120101 +
                                           std::sqrt(9. / 8.0) * gx300101));
    gx[(Ai + 4) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(2.25 / 8.0) * gx300020 - std::sqrt(2.25 / 8.0) * gx300200 -
         std::sqrt(2.25 / 8.0) * gx120200 + std::sqrt(2.25 / 8.0) * gx120020 +
         std::sqrt(4.5) * gx102200 - std::sqrt(4.5) * gx102020);
    gx[(Ai + 5) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(22.5) * gx201110 - std::sqrt(22.5) * gx021110);
    gx[(Ai + 5) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(22.5) * gx201011 - std::sqrt(22.5) * gx021011);
    gx[(Ai + 5) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(7.5) * gx201002 -
              (std::sqrt(1.875) * gx201020 + std::sqrt(1.875) * gx201200) +
              std::sqrt(1.875) * gx021200 + std::sqrt(1.875) * gx021020 -
              std::sqrt(7.5) * gx021002);
    gx[(Ai + 5) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(22.5) * gx201101 - std::sqrt(22.5) * gx021101);
    gx[(Ai + 5) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(5.625) * gx201200 - std::sqrt(5.625) * gx201020 -
              std::sqrt(5.625) * gx021200 + std::sqrt(5.625) * gx021020);
    gx[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(15. / 8.0) * gx300110 + std::sqrt(135. / 8.0) * gx120110);
    gx[(Ai + 6) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(15. / 8.0) * gx300011 + std::sqrt(135. / 8.0) * gx120011);
    gx[(Ai + 6) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx300002 -
         (std::sqrt(1.25 / 8.0) * gx300020 + std::sqrt(1.25 / 8.0) * gx300200) -
         std::sqrt(11.25 / 8.0) * gx120200 - std::sqrt(11.25 / 8.0) * gx120020 +
         std::sqrt(45.0 / 8.0) * gx120002);
    gx[(Ai + 6) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(15. / 8.0) * gx300101 + std::sqrt(135. / 8.0) * gx120101);
    gx[(Ai + 6) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(3.75 / 8.0) * gx300200 - std::sqrt(3.75 / 8.0) * gx300020 +
         std::sqrt(33.75 / 8.0) * gx120200 - std::sqrt(33.75 / 8.0) * gx120020);
    const double gy300200 = C23749 * C23562 * C24583 +
                            (C24583 * C23530 * C24716) / 2.0 +
                            C23530 * C23562 * C23625;
    const double gy300020 = C23733 * C23800 * C24583 -
                            (C24583 * C23525 * C24935) / 2.0 +
                            C23525 * C23800 * C23625;
    const double gy300002 = C23733 * C23562 * C23813 +
                            (C23813 * C23525 * C24716) / 2.0 +
                            C23525 * C23562 * C23868;
    const double gy300110 = C23745 * C23788 * C24583 -
                            (C24583 * C23526 * C24843) / 2.0 +
                            C23526 * C23788 * C23625;
    const double gy300101 = C23745 * C23562 * C23814 +
                            (C23814 * C23526 * C24716) / 2.0 +
                            C23526 * C23562 * C23854;
    const double gy300011 = C23733 * C23788 * C23814 -
                            (C23814 * C23525 * C24843) / 2.0 +
                            C23525 * C23788 * C23854;
    const double gy030200 = C23972 * C23964 * C24583 +
                            (C24583 * C23882 * C24732) / 2.0 +
                            C23882 * C23964 * C23625;
    const double gy030020 = C23627 * C24075 * C24583 -
                            (C24583 * C23522 *
                             ((C24871 * C23755) / C23533 +
                              (3 * C24872 + C24076 +
                               6 * ae *
                                   ((C24066 * C23755) / C23533 +
                                    (3 * C24043 + 4 * ae * C23964) / C23548)) /
                                  C23548)) /
                                2.0 +
                            C23522 * C24075 * C23625;
    const double gy030002 = C23627 * C23964 * C23813 +
                            (C23813 * C23522 * C24732) / 2.0 +
                            C23522 * C23964 * C23868;
    const double gy030110 = C23947 * C24041 * C24583 -
                            (C24583 * C24682 * C24871) / 2.0 +
                            C24682 * C24041 * C23625;
    const double gy030101 = C23947 * C23964 * C23814 +
                            (C23814 * C24682 * C24732) / 2.0 +
                            C24682 * C23964 * C23854;
    const double gy030011 = C23627 * C24041 * C23814 -
                            (C23814 * C23522 * C24871) / 2.0 +
                            C23522 * C24041 * C23854;
    const double gy003200 = C23972 * C23562 * C24093 +
                            (C24093 * C23882 * C24716) / 2.0 +
                            C23882 * C23562 * C24155;
    const double gy003020 = C23627 * C23800 * C24093 -
                            (C24093 * C23522 * C24935) / 2.0 +
                            C23522 * C23800 * C24155;
    const double gy003002 = C23627 * C23562 * C24161 +
                            (C24161 * C23522 * C24716) / 2.0 +
                            C23522 * C23562 * C24260;
    const double gy003110 = C23947 * C23788 * C24093 -
                            (C24093 * C24682 * C24843) / 2.0 +
                            C24682 * C23788 * C24155;
    const double gy003101 = C23947 * C23562 * C24700 +
                            (C24700 * C24682 * C24716) / 2.0 +
                            C24682 * C23562 * C24240;
    const double gy003011 = C23627 * C23788 * C24700 -
                            (C24700 * C23522 * C24843) / 2.0 +
                            C23522 * C23788 * C24240;
    const double gy210200 = C24314 * C23789 * C24583 +
                            (C24583 * C24271 * C24749) / 2.0 +
                            C24271 * C23789 * C23625;
    const double gy210020 = C23708 * C24350 * C24583 -
                            (C24583 * C23524 * C24939) / 2.0 +
                            C23524 * C24350 * C23625;
    const double gy210002 = C23708 * C23789 * C23813 +
                            (C23813 * C23524 * C24749) / 2.0 +
                            C23524 * C23789 * C23868;
    const double gy210110 = (C24583 * C24339 * C23730) / C23533 -
                            (C24583 * C24695 * C24855) / 2.0 +
                            C24695 * C24339 * C23625;
    const double gy210101 = (C23814 * C23789 * C23730) / C23533 +
                            (C23814 * C24695 * C24749) / 2.0 +
                            C24695 * C23789 * C23854;
    const double gy210011 = C23708 * C24339 * C23814 -
                            (C23814 * C23524 * C24855) / 2.0 +
                            C23524 * C24339 * C23854;
    const double gy201200 = C24314 * C23562 * C23531 +
                            (C23531 * C24271 * C24716) / 2.0 +
                            C24271 * C23562 * C24131;
    const double gy201020 = C23708 * C23800 * C23531 -
                            (C23531 * C23524 * C24935) / 2.0 +
                            C23524 * C23800 * C24131;
    const double gy201002 = C23708 * C23562 * C24377 +
                            (C24377 * C23524 * C24716) / 2.0 +
                            C23524 * C23562 * C24420;
    const double gy201110 = (C23531 * C23788 * C23730) / C23533 -
                            (C23531 * C24695 * C24843) / 2.0 +
                            C24695 * C23788 * C24131;
    const double gy201101 = (C24704 * 2 * C23545 * C23730) / C23533 +
                            (C24704 * C24695 * C24716) / 2.0 +
                            C24695 * C23562 * C24412;
    const double gy201011 = C23708 * C23788 * C24704 -
                            (C24704 * C23524 * C24843) / 2.0 +
                            C23524 * C23788 * C24412;
    const double gy021200 = C23972 * C23941 * C23531 +
                            (C23531 * C23882 * C24760) / 2.0 +
                            C23882 * C23941 * C24131;
    const double gy021020 = C23627 * C24455 * C23531 -
                            (C23531 * C23522 * C24945) / 2.0 +
                            C23522 * C24455 * C24131;
    const double gy021002 = C23627 * C23941 * C24377 +
                            (C24377 * C23522 * C24760) / 2.0 +
                            C23522 * C23941 * C24420;
    const double gy021110 = C23947 * C24042 * C23531 -
                            (C23531 * C24682 * C24872) / 2.0 +
                            C24682 * C24042 * C24131;
    const double gy021101 = C23947 * C23941 * C24704 +
                            (C24704 * C24682 * C24760) / 2.0 +
                            C24682 * C23941 * C24412;
    const double gy021011 = C23627 * C24042 * C24704 -
                            (C24704 * C23522 * C24872) / 2.0 +
                            C23522 * C24042 * C24412;
    const double gy120200 = C24499 * C23941 * C24583 +
                            (C24583 * C24473 * C24760) / 2.0 +
                            C24473 * C23941 * C23625;
    const double gy120020 = C23664 * C24455 * C24583 -
                            (C24583 * C23523 * C24945) / 2.0 +
                            C23523 * C24455 * C23625;
    const double gy120002 = C23664 * C23941 * C23813 +
                            (C23813 * C23523 * C24760) / 2.0 +
                            C23523 * C23941 * C23868;
    const double gy120110 = C24304 * C24042 * C24583 -
                            (C24583 * C24702 * C24872) / 2.0 +
                            C24702 * C24042 * C23625;
    const double gy120101 = C24304 * C23941 * C23814 +
                            (C23814 * C24702 * C24760) / 2.0 +
                            C24702 * C23941 * C23854;
    const double gy120011 = C23664 * C24042 * C23814 -
                            (C23814 * C23523 * C24872) / 2.0 +
                            C23523 * C24042 * C23854;
    const double gy102200 = C24499 * C23562 * C24706 +
                            (C24706 * C24473 * C24716) / 2.0 +
                            C24473 * C23562 * C24148;
    const double gy102020 = C23664 * C23800 * C24706 -
                            (C24706 * C23523 * C24935) / 2.0 +
                            C23523 * C23800 * C24148;
    const double gy102002 = C23664 * C23562 * C24517 +
                            (C24517 * C23523 * C24716) / 2.0 +
                            C23523 * C23562 * C24545;
    const double gy102110 = C24304 * C23788 * C24706 -
                            (C24706 * C24702 * C24843) / 2.0 +
                            C24702 * C23788 * C24148;
    const double gy102101 = C24304 * C23562 * C24701 +
                            (C24701 * C24702 * C24716) / 2.0 +
                            (C24702 * C23562 * C24233) / C23533;
    const double gy102011 = C23664 * C23788 * C24701 -
                            (C24701 * C23523 * C24843) / 2.0 +
                            (C23523 * C23788 * C24233) / C23533;
    const double gy012200 = C23972 * C23789 * C24706 +
                            (C24706 * C23882 * C24749) / 2.0 +
                            C23882 * C23789 * C24148;
    const double gy012020 = C23627 * C24350 * C24706 -
                            (C24706 * C23522 * C24939) / 2.0 +
                            C23522 * C24350 * C24148;
    const double gy012002 = C23627 * C23789 * C24517 +
                            (C24517 * C23522 * C24749) / 2.0 +
                            C23522 * C23789 * C24545;
    const double gy012110 = C23947 * C24339 * C24706 -
                            (C24706 * C24682 * C24855) / 2.0 +
                            C24682 * C24339 * C24148;
    const double gy012101 = C23947 * C23789 * C24701 +
                            (C24701 * C24682 * C24749) / 2.0 +
                            (C24682 * C23789 * C24233) / C23533;
    const double gy012011 = C23627 * C24339 * C24701 -
                            (C24701 * C23522 * C24855) / 2.0 +
                            (C23522 * C24339 * C24233) / C23533;
    const double gy111200 = C24499 * C23789 * C23531 +
                            (C23531 * C24473 * C24749) / 2.0 +
                            C24473 * C23789 * C24131;
    const double gy111020 = C23664 * C24350 * C23531 -
                            (C23531 * C23523 * C24939) / 2.0 +
                            C23523 * C24350 * C24131;
    const double gy111002 = C23664 * C23789 * C24377 +
                            (C24377 * C23523 * C24749) / 2.0 +
                            C23523 * C23789 * C24420;
    const double gy111110 = C24304 * C24339 * C23531 -
                            (C23531 * C24702 * C24855) / 2.0 +
                            C24702 * C24339 * C24131;
    const double gy111101 = C24304 * C23789 * C24704 +
                            (C24704 * C24702 * C24749) / 2.0 +
                            C24702 * C23789 * C24412;
    const double gy111011 = C23664 * C24339 * C24704 -
                            (C24704 * C23523 * C24855) / 2.0 +
                            C23523 * C24339 * C24412;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gy210110 - std::sqrt(15. / 8.0) * gy030110);
    gy[(Ai + 0) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(135. / 8.0) * gy210011 - std::sqrt(15. / 8.0) * gy030011);
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(1.25 / 8.0) * gy030200 + std::sqrt(1.25 / 8.0) * gy030020 -
         std::sqrt(5.0 / 8.0) * gy030002 - std::sqrt(11.25 / 8.0) * gy210200 -
         std::sqrt(11.25 / 8.0) * gy210020 + std::sqrt(45. / 8.0) * gy210002);
    gy[(Ai + 0) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(135. / 8.0) * gy210101 - std::sqrt(15. / 8.0) * gy030101);
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(3.75 / 8.0) * gy030020 - std::sqrt(3.75 / 8.0) * gy030200 +
         std::sqrt(33.75 / 8.0) * gy210200 - std::sqrt(33.75 / 8.0) * gy210020);
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(45.) * gy111110;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gy111011;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(15.0) * gy111002 -
              (std::sqrt(3.75) * gy111020 + std::sqrt(3.75) * gy111200));
    gy[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(45.) * gy111101;
    gy[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(11.25) * gy111200 - std::sqrt(11.25) * gy111020);
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        -cc * (std::sqrt(18.) * gy012110 + std::sqrt(9. / 8.0) * gy210110 +
               std::sqrt(9. / 8.0) * gy030110);
    gy[(Ai + 2) * matrix_size + Bi + 1] +=
        -cc * (std::sqrt(18.) * gy012011 + std::sqrt(9. / 8.0) * gy210011 +
               std::sqrt(9. / 8.0) * gy030011);
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gy030200 + std::sqrt(0.75 / 8.0) * gy030020 -
         std::sqrt(3.0 / 8.0) * gy030002 + std::sqrt(0.75 / 8.0) * gy210200 +
         std::sqrt(0.75 / 8.0) * gy210020 - std::sqrt(3.0 / 8.0) * gy210002 +
         std::sqrt(1.5) * gy012200 + std::sqrt(1.5) * gy012020 -
         std::sqrt(6.0) * gy012002);
    gy[(Ai + 2) * matrix_size + Bi + 3] +=
        -cc * (std::sqrt(18.) * gy012101 + std::sqrt(9. / 8.0) * gy210101 +
               std::sqrt(9. / 8.0) * gy030101);
    gy[(Ai + 2) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(2.25 / 8.0) * gy030020 - std::sqrt(2.25 / 8.0) * gy030200 -
         std::sqrt(2.25 / 8.0) * gy210200 + std::sqrt(2.25 / 8.0) * gy210020 -
         std::sqrt(4.5) * gy012200 + std::sqrt(4.5) * gy012020);
    gy[(Ai + 3) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(3.0) * gy003110 - std::sqrt(6.75) * gy201110 -
              std::sqrt(6.75) * gy021110);
    gy[(Ai + 3) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(3.0) * gy003011 - std::sqrt(6.75) * gy201011 -
              std::sqrt(6.75) * gy021011);
    gy[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gy003200 - 0.5 * gy003020 + gy003002 + 0.75 * gy201200 +
              0.75 * gy201020 - 1.5 * gy201002 + 0.75 * gy021200 +
              0.75 * gy021020 - 1.5 * gy021002);
    gy[(Ai + 3) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gy003101 - std::sqrt(6.75) * gy201101 -
              std::sqrt(6.75) * gy021101);
    gy[(Ai + 3) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gy003200 - std::sqrt(0.75) * gy003020 -
              std::sqrt(1.6875) * gy201200 + std::sqrt(1.6875) * gy201020 -
              std::sqrt(1.6875) * gy021200 + std::sqrt(1.6875) * gy021020);
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(18.) * gy102110 - (std::sqrt(9. / 8.0) * gy120110 +
                                           std::sqrt(9. / 8.0) * gy300110));
    gy[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(18.) * gy102011 - (std::sqrt(9. / 8.0) * gy120011 +
                                           std::sqrt(9. / 8.0) * gy300011));
    gy[(Ai + 4) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gy300200 + std::sqrt(0.75 / 8.0) * gy300020 -
         std::sqrt(3.0 / 8.0) * gy300002 + std::sqrt(0.75 / 8.0) * gy120200 +
         std::sqrt(0.75 / 8.0) * gy120020 - std::sqrt(3.0 / 8.0) * gy120002 -
         std::sqrt(1.5) * gy102200 - std::sqrt(1.5) * gy102020 +
         std::sqrt(6.0) * gy102002);
    gy[(Ai + 4) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(18.) * gy102101 - (std::sqrt(9. / 8.0) * gy120101 +
                                           std::sqrt(9. / 8.0) * gy300101));
    gy[(Ai + 4) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(2.25 / 8.0) * gy300020 - std::sqrt(2.25 / 8.0) * gy300200 -
         std::sqrt(2.25 / 8.0) * gy120200 + std::sqrt(2.25 / 8.0) * gy120020 +
         std::sqrt(4.5) * gy102200 - std::sqrt(4.5) * gy102020);
    gy[(Ai + 5) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(22.5) * gy201110 - std::sqrt(22.5) * gy021110);
    gy[(Ai + 5) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(22.5) * gy201011 - std::sqrt(22.5) * gy021011);
    gy[(Ai + 5) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(7.5) * gy201002 -
              (std::sqrt(1.875) * gy201020 + std::sqrt(1.875) * gy201200) +
              std::sqrt(1.875) * gy021200 + std::sqrt(1.875) * gy021020 -
              std::sqrt(7.5) * gy021002);
    gy[(Ai + 5) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(22.5) * gy201101 - std::sqrt(22.5) * gy021101);
    gy[(Ai + 5) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(5.625) * gy201200 - std::sqrt(5.625) * gy201020 -
              std::sqrt(5.625) * gy021200 + std::sqrt(5.625) * gy021020);
    gy[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(15. / 8.0) * gy300110 + std::sqrt(135. / 8.0) * gy120110);
    gy[(Ai + 6) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(15. / 8.0) * gy300011 + std::sqrt(135. / 8.0) * gy120011);
    gy[(Ai + 6) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy300002 -
         (std::sqrt(1.25 / 8.0) * gy300020 + std::sqrt(1.25 / 8.0) * gy300200) -
         std::sqrt(11.25 / 8.0) * gy120200 - std::sqrt(11.25 / 8.0) * gy120020 +
         std::sqrt(45.0 / 8.0) * gy120002);
    gy[(Ai + 6) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(15. / 8.0) * gy300101 + std::sqrt(135. / 8.0) * gy120101);
    gy[(Ai + 6) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(3.75 / 8.0) * gy300200 - std::sqrt(3.75 / 8.0) * gy300020 +
         std::sqrt(33.75 / 8.0) * gy120200 - std::sqrt(33.75 / 8.0) * gy120020);
    const double gz300200 = C23749 * C24583 * C23563 +
                            C23530 * C23621 * C23563 +
                            (C23530 * C24583 * C24925) / 2.0;
    const double gz300020 = C23733 * C23753 * C23563 +
                            C23525 * C23808 * C23563 +
                            (C23525 * C23753 * C24925) / 2.0;
    const double gz300002 = C23733 * C24583 * C23860 +
                            C23525 * C23621 * C23860 -
                            (C23525 * C24583 * C24936) / 2.0;
    const double gz300110 = C23745 * C23754 * C23563 +
                            C23526 * C23794 * C23563 +
                            (C23526 * C23754 * C24727) / 2.0;
    const double gz300101 = C23745 * C24583 * C23848 +
                            C23526 * C23621 * C23848 -
                            (C23526 * C24583 * C24845) / 2.0;
    const double gz300011 = C23733 * C23754 * C23848 +
                            C23525 * C23794 * C23848 -
                            (C23525 * C23754 * C24845) / 2.0;
    const double gz030200 = C23972 * C23880 * C23563 +
                            C23882 * C23978 * C23563 +
                            (C23882 * C23880 * C24727) / 2.0;
    const double gz030020 = C23627 * C23982 * C23563 +
                            C23522 * C24081 * C23563 +
                            (C23522 * C23982 * C24727) / 2.0;
    const double gz030002 = C23627 * C23880 * C23860 +
                            C23522 * C23978 * C23860 -
                            (C23522 * C23880 * C24936) / 2.0;
    const double gz030110 = C23947 * C24697 * C23563 +
                            C24682 * C24061 * C23563 +
                            (C24682 * C24697 * C24727) / 2.0;
    const double gz030101 = C23947 * C23880 * C23848 +
                            C24682 * C23978 * C23848 -
                            (C24682 * C23880 * C24845) / 2.0;
    const double gz030011 = C23627 * C24697 * C23848 +
                            C23522 * C24061 * C23848 -
                            (C23522 * C24697 * C24845) / 2.0;
    const double gz003200 = C23972 * C24583 * C24144 +
                            C23882 * C23621 * C24144 +
                            (C23882 * C24583 * C24739) / 2.0;
    const double gz003020 = C23627 * C23753 * C24144 +
                            C23522 * C23808 * C24144 +
                            (C23522 * C23753 * C24739) / 2.0;
    const double gz003002 = C23627 * C24583 * C24254 +
                            C23522 * C23621 * C24254 -
                            (C23522 * C24583 *
                             ((C24873 * C23815) / C23533 +
                              (3 * C24874 + C24255 +
                               6 * ae *
                                   ((C24245 * C23815) / C23533 +
                                    (3 * C24222 + 4 * ae * C24144) / C23548)) /
                                  C23548)) /
                                2.0;
    const double gz003110 = C23947 * C23754 * C24144 +
                            C24682 * C23794 * C24144 +
                            (C24682 * C23754 * C24739) / 2.0;
    const double gz003101 = C23947 * C24583 * C24220 +
                            C24682 * C23621 * C24220 -
                            (C24682 * C24583 * C24873) / 2.0;
    const double gz003011 = C23627 * C23754 * C24220 +
                            C23522 * C23794 * C24220 -
                            (C23522 * C23754 * C24873) / 2.0;
    const double gz210200 = C24314 * C23529 * C23563 +
                            C24271 * C23944 * C23563 +
                            (C24271 * C23529 * C24727) / 2.0;
    const double gz210020 = C23708 * C24318 * C23563 +
                            C23524 * C24361 * C23563 +
                            (C23524 * C24318 * C24727) / 2.0;
    const double gz210002 = C23708 * C23529 * C23860 +
                            C23524 * C23944 * C23860 -
                            (C23524 * C23529 * C24936) / 2.0;
    const double gz210110 = (2 * C23546 * C24703 * C23730) / C23533 +
                            C24695 * C24353 * C23563 +
                            (C24695 * C24703 * C24727) / 2.0;
    const double gz210101 = (C23848 * C23529 * C23730) / C23533 +
                            C24695 * C23944 * C23848 -
                            (C24695 * C23529 * C24845) / 2.0;
    const double gz210011 = C23708 * C24703 * C23848 +
                            C23524 * C24353 * C23848 -
                            (C23524 * C24703 * C24845) / 2.0;
    const double gz201200 = C24314 * C24583 * C23849 +
                            C24271 * C23621 * C23849 +
                            (C24271 * C24583 * C24755) / 2.0;
    const double gz201020 = C23708 * C23753 * C23849 +
                            C23524 * C23808 * C23849 +
                            (C23524 * C23753 * C24755) / 2.0;
    const double gz201002 = C23708 * C24583 * C24409 +
                            C23524 * C23621 * C24409 -
                            (C23524 * C24583 * C24940) / 2.0;
    const double gz201110 = (C23849 * C23754 * C23730) / C23533 +
                            C24695 * C23794 * C23849 +
                            (C24695 * C23754 * C24755) / 2.0;
    const double gz201101 = (C24398 * C24583 * C23730) / C23533 +
                            C24695 * C23621 * C24398 -
                            (C24695 * C24583 * C24857) / 2.0;
    const double gz201011 = C23708 * C23754 * C24398 +
                            C23524 * C23794 * C24398 -
                            (C23524 * C23754 * C24857) / 2.0;
    const double gz021200 = C23972 * C24705 * C23849 +
                            C23882 * C23970 * C23849 +
                            (C23882 * C24705 * C24755) / 2.0;
    const double gz021020 = C23627 * C24432 * C23849 +
                            C23522 * C24460 * C23849 +
                            (C23522 * C24432 * C24755) / 2.0;
    const double gz021002 = C23627 * C24705 * C24409 +
                            C23522 * C23970 * C24409 -
                            (C23522 * C24705 * C24940) / 2.0;
    const double gz021110 = C23947 * C24698 * C23849 +
                            (C23849 * C24682 * C24054) / C23533 +
                            (C24682 * C24698 * C24755) / 2.0;
    const double gz021101 = C23947 * C24705 * C24398 +
                            C24682 * C23970 * C24398 -
                            (C24682 * C24705 * C24857) / 2.0;
    const double gz021011 = C23627 * C24698 * C24398 +
                            (C24398 * C23522 * C24054) / C23533 -
                            (C23522 * C24698 * C24857) / 2.0;
    const double gz120200 = C24499 * C24705 * C23563 +
                            C24473 * C23970 * C23563 +
                            (C24473 * C24705 * C24727) / 2.0;
    const double gz120020 = C23664 * C24432 * C23563 +
                            C23523 * C24460 * C23563 +
                            (C23523 * C24432 * C24727) / 2.0;
    const double gz120002 = C23664 * C24705 * C23860 +
                            C23523 * C23970 * C23860 -
                            (C23523 * C24705 * C24936) / 2.0;
    const double gz120110 = C24304 * C24698 * C23563 +
                            (2 * C23546 * C24702 * C24054) / C23533 +
                            (C24702 * C24698 * C24727) / 2.0;
    const double gz120101 = C24304 * C24705 * C23848 +
                            C24702 * C23970 * C23848 -
                            (C24702 * C24705 * C24845) / 2.0;
    const double gz120011 = C23664 * C24698 * C23848 +
                            (C23848 * C23523 * C24054) / C23533 -
                            (C23523 * C24698 * C24845) / 2.0;
    const double gz102200 = C24499 * C24583 * C24129 +
                            C24473 * C23621 * C24129 +
                            (C24473 * C24583 * C24766) / 2.0;
    const double gz102020 = C23664 * C23753 * C24129 +
                            C23523 * C23808 * C24129 +
                            (C23523 * C23753 * C24766) / 2.0;
    const double gz102002 = C23664 * C24583 * C24540 +
                            C23523 * C23621 * C24540 -
                            (C23523 * C24583 * C24946) / 2.0;
    const double gz102110 = C24304 * C23754 * C24129 +
                            C24702 * C23794 * C24129 +
                            (C24702 * C23754 * C24766) / 2.0;
    const double gz102101 = C24304 * C24583 * C24221 +
                            C24702 * C23621 * C24221 -
                            (C24702 * C24583 * C24874) / 2.0;
    const double gz102011 = C23664 * C23754 * C24221 +
                            C23523 * C23794 * C24221 -
                            (C23523 * C23754 * C24874) / 2.0;
    const double gz012200 = C23972 * C23529 * C24129 +
                            C23882 * C23944 * C24129 +
                            (C23882 * C23529 * C24766) / 2.0;
    const double gz012020 = C23627 * C24318 * C24129 +
                            C23522 * C24361 * C24129 +
                            (C23522 * C24318 * C24766) / 2.0;
    const double gz012002 = C23627 * C23529 * C24540 +
                            C23522 * C23944 * C24540 -
                            (C23522 * C23529 * C24946) / 2.0;
    const double gz012110 = C23947 * C24703 * C24129 +
                            C24682 * C24353 * C24129 +
                            (C24682 * C24703 * C24766) / 2.0;
    const double gz012101 = C23947 * C23529 * C24221 +
                            C24682 * C23944 * C24221 -
                            (C24682 * C23529 * C24874) / 2.0;
    const double gz012011 = C23627 * C24703 * C24221 +
                            C23522 * C24353 * C24221 -
                            (C23522 * C24703 * C24874) / 2.0;
    const double gz111200 = C24499 * C23529 * C23849 +
                            C24473 * C23944 * C23849 +
                            (C24473 * C23529 * C24755) / 2.0;
    const double gz111020 = C23664 * C24318 * C23849 +
                            C23523 * C24361 * C23849 +
                            (C23523 * C24318 * C24755) / 2.0;
    const double gz111002 = C23664 * C23529 * C24409 +
                            C23523 * C23944 * C24409 -
                            (C23523 * C23529 * C24940) / 2.0;
    const double gz111110 = C24304 * C24703 * C23849 +
                            C24702 * C24353 * C23849 +
                            (C24702 * C24703 * C24755) / 2.0;
    const double gz111101 = C24304 * C23529 * C24398 +
                            C24702 * C23944 * C24398 -
                            (C24702 * C23529 * C24857) / 2.0;
    const double gz111011 = C23664 * C24703 * C24398 +
                            C23523 * C24353 * C24398 -
                            (C23523 * C24703 * C24857) / 2.0;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gz210110 - std::sqrt(15. / 8.0) * gz030110);
    gz[(Ai + 0) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(135. / 8.0) * gz210011 - std::sqrt(15. / 8.0) * gz030011);
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(1.25 / 8.0) * gz030200 + std::sqrt(1.25 / 8.0) * gz030020 -
         std::sqrt(5.0 / 8.0) * gz030002 - std::sqrt(11.25 / 8.0) * gz210200 -
         std::sqrt(11.25 / 8.0) * gz210020 + std::sqrt(45. / 8.0) * gz210002);
    gz[(Ai + 0) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(135. / 8.0) * gz210101 - std::sqrt(15. / 8.0) * gz030101);
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(3.75 / 8.0) * gz030020 - std::sqrt(3.75 / 8.0) * gz030200 +
         std::sqrt(33.75 / 8.0) * gz210200 - std::sqrt(33.75 / 8.0) * gz210020);
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(45.) * gz111110;
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gz111011;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(15.0) * gz111002 -
              (std::sqrt(3.75) * gz111020 + std::sqrt(3.75) * gz111200));
    gz[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(45.) * gz111101;
    gz[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(11.25) * gz111200 - std::sqrt(11.25) * gz111020);
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        -cc * (std::sqrt(18.) * gz012110 + std::sqrt(9. / 8.0) * gz210110 +
               std::sqrt(9. / 8.0) * gz030110);
    gz[(Ai + 2) * matrix_size + Bi + 1] +=
        -cc * (std::sqrt(18.) * gz012011 + std::sqrt(9. / 8.0) * gz210011 +
               std::sqrt(9. / 8.0) * gz030011);
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gz030200 + std::sqrt(0.75 / 8.0) * gz030020 -
         std::sqrt(3.0 / 8.0) * gz030002 + std::sqrt(0.75 / 8.0) * gz210200 +
         std::sqrt(0.75 / 8.0) * gz210020 - std::sqrt(3.0 / 8.0) * gz210002 +
         std::sqrt(1.5) * gz012200 + std::sqrt(1.5) * gz012020 -
         std::sqrt(6.0) * gz012002);
    gz[(Ai + 2) * matrix_size + Bi + 3] +=
        -cc * (std::sqrt(18.) * gz012101 + std::sqrt(9. / 8.0) * gz210101 +
               std::sqrt(9. / 8.0) * gz030101);
    gz[(Ai + 2) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(2.25 / 8.0) * gz030020 - std::sqrt(2.25 / 8.0) * gz030200 -
         std::sqrt(2.25 / 8.0) * gz210200 + std::sqrt(2.25 / 8.0) * gz210020 -
         std::sqrt(4.5) * gz012200 + std::sqrt(4.5) * gz012020);
    gz[(Ai + 3) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(3.0) * gz003110 - std::sqrt(6.75) * gz201110 -
              std::sqrt(6.75) * gz021110);
    gz[(Ai + 3) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(3.0) * gz003011 - std::sqrt(6.75) * gz201011 -
              std::sqrt(6.75) * gz021011);
    gz[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gz003200 - 0.5 * gz003020 + gz003002 + 0.75 * gz201200 +
              0.75 * gz201020 - 1.5 * gz201002 + 0.75 * gz021200 +
              0.75 * gz021020 - 1.5 * gz021002);
    gz[(Ai + 3) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gz003101 - std::sqrt(6.75) * gz201101 -
              std::sqrt(6.75) * gz021101);
    gz[(Ai + 3) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gz003200 - std::sqrt(0.75) * gz003020 -
              std::sqrt(1.6875) * gz201200 + std::sqrt(1.6875) * gz201020 -
              std::sqrt(1.6875) * gz021200 + std::sqrt(1.6875) * gz021020);
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(18.) * gz102110 - (std::sqrt(9. / 8.0) * gz120110 +
                                           std::sqrt(9. / 8.0) * gz300110));
    gz[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(18.) * gz102011 - (std::sqrt(9. / 8.0) * gz120011 +
                                           std::sqrt(9. / 8.0) * gz300011));
    gz[(Ai + 4) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gz300200 + std::sqrt(0.75 / 8.0) * gz300020 -
         std::sqrt(3.0 / 8.0) * gz300002 + std::sqrt(0.75 / 8.0) * gz120200 +
         std::sqrt(0.75 / 8.0) * gz120020 - std::sqrt(3.0 / 8.0) * gz120002 -
         std::sqrt(1.5) * gz102200 - std::sqrt(1.5) * gz102020 +
         std::sqrt(6.0) * gz102002);
    gz[(Ai + 4) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(18.) * gz102101 - (std::sqrt(9. / 8.0) * gz120101 +
                                           std::sqrt(9. / 8.0) * gz300101));
    gz[(Ai + 4) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(2.25 / 8.0) * gz300020 - std::sqrt(2.25 / 8.0) * gz300200 -
         std::sqrt(2.25 / 8.0) * gz120200 + std::sqrt(2.25 / 8.0) * gz120020 +
         std::sqrt(4.5) * gz102200 - std::sqrt(4.5) * gz102020);
    gz[(Ai + 5) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(22.5) * gz201110 - std::sqrt(22.5) * gz021110);
    gz[(Ai + 5) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(22.5) * gz201011 - std::sqrt(22.5) * gz021011);
    gz[(Ai + 5) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(7.5) * gz201002 -
              (std::sqrt(1.875) * gz201020 + std::sqrt(1.875) * gz201200) +
              std::sqrt(1.875) * gz021200 + std::sqrt(1.875) * gz021020 -
              std::sqrt(7.5) * gz021002);
    gz[(Ai + 5) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(22.5) * gz201101 - std::sqrt(22.5) * gz021101);
    gz[(Ai + 5) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(5.625) * gz201200 - std::sqrt(5.625) * gz201020 -
              std::sqrt(5.625) * gz021200 + std::sqrt(5.625) * gz021020);
    gz[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(15. / 8.0) * gz300110 + std::sqrt(135. / 8.0) * gz120110);
    gz[(Ai + 6) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(15. / 8.0) * gz300011 + std::sqrt(135. / 8.0) * gz120011);
    gz[(Ai + 6) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz300002 -
         (std::sqrt(1.25 / 8.0) * gz300020 + std::sqrt(1.25 / 8.0) * gz300200) -
         std::sqrt(11.25 / 8.0) * gz120200 - std::sqrt(11.25 / 8.0) * gz120020 +
         std::sqrt(45.0 / 8.0) * gz120002);
    gz[(Ai + 6) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(15. / 8.0) * gz300101 + std::sqrt(135. / 8.0) * gz120101);
    gz[(Ai + 6) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(3.75 / 8.0) * gz300200 - std::sqrt(3.75 / 8.0) * gz300020 +
         std::sqrt(33.75 / 8.0) * gz120200 - std::sqrt(33.75 / 8.0) * gz120020);
}

// Automatically generated, do not edit
