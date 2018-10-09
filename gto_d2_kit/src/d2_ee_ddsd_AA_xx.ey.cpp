/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ddsd_AA_xx.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
#pragma GCC optimize("O0")

void second_derivative_ee_2202_11_11(const double ae,
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
                                     double* const d2ee)
{
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double C31606 = 0 * ae;
    const double C31605 = ae * be;
    const double C31604 = 0 * be;
    const double C31603 = 0 * be;
    const double C31602 = xA - xB;
    const double C31601 = ae + be;
    const double C31600 = 0 * be;
    const double C31707 = 0 * be;
    const double C31819 = p + q;
    const double C31818 = p * q;
    const double C31824 = xP - xQ;
    const double C31823 = bs[2];
    const double C31831 = std::pow(ae, 2);
    const double C31829 = bs[3];
    const double C31842 = bs[4];
    const double C31863 = bs[5];
    const double C31896 = bs[6];
    const double C31942 = bs[7];
    const double C31997 = yP - yQ;
    const double C32056 = zP - zQ;
    const double C123 = bs[0];
    const double C32539 = ce + de;
    const double C32538 = ce * de;
    const double C32537 = xC - xD;
    const double C32551 = yC - yD;
    const double C32565 = zC - zD;
    const double C32595 = yA - yB;
    const double C32607 = zA - zB;
    const double C31615 = 2 * C31605;
    const double C31612 = -2 * C31604;
    const double C31609 = -2 * C31603;
    const double C31614 = C31605 * C31602;
    const double C31613 = C31602 * C31604;
    const double C31610 = C31602 * C31603;
    const double C32503 = C31602 * be;
    const double C32502 = C31602 * ae;
    const double C32501 = std::pow(C31602, 2);
    const double C31616 = C31606 / C31601;
    const double C31611 = C31604 / C31601;
    const double C31608 = 2 * C31601;
    const double C31607 = std::pow(C31601, 2);
    const double C31709 = C31707 / C31601;
    const double C31820 = 2 * C31818;
    const double C31832 = C31824 * ae;
    const double C31828 = std::pow(C31824, 2);
    const double C32023 = std::pow(C31997, 2);
    const double C32082 = std::pow(C32056, 2);
    const double C32815 = 2 * C32539;
    const double C32814 = std::pow(C32539, 2);
    const double C32540 = std::pow(C32537, 2);
    const double C32813 = C32537 * ce;
    const double C32552 = std::pow(C32551, 2);
    const double C32816 = C32551 * ce;
    const double C32566 = std::pow(C32565, 2);
    const double C32817 = C32565 * ce;
    const double C32596 = std::pow(C32595, 2);
    const double C32651 = C32595 * be;
    const double C32649 = C32595 * ae;
    const double C32608 = std::pow(C32607, 2);
    const double C32691 = C32607 * be;
    const double C32689 = C32607 * ae;
    const double C31621 = ae * C31612;
    const double C31618 = ae * C31609;
    const double C31622 = C31613 / C31601;
    const double C31619 = C31610 / C31601;
    const double C32802 = std::pow(C32502, 2);
    const double C32504 = C32501 * C31605;
    const double C32515 = std::pow(C31608, -1);
    const double C32809 = std::pow(C31608, -2);
    const double C31620 = 2 * C31607;
    const double C31617 = C31607 * C31608;
    const double C31705 = 4 * C31607;
    const double C31822 = C31820 / C31819;
    const double C137 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C31820 / C31819, 2) -
          (bs[1] * C31820) / C31819) *
         std::pow(ae, 2)) /
        C31607;
    const double C124 = -(C31824 * bs[1] * C31820) / C31819;
    const double C229 = -(C31997 * bs[1] * C31820) / C31819;
    const double C334 = -(C32056 * bs[1] * C31820) / C31819;
    const double C31834 = C31829 * C31832;
    const double C31845 = C31842 * C31832;
    const double C31868 = C31863 * C31832;
    const double C31904 = C31896 * C31832;
    const double C31953 = C31942 * C31832;
    const double C130 = (-(bs[1] * C31832 * C31820) / C31819) / C31601;
    const double C31844 = C31828 * C31842;
    const double C31867 = C31828 * C31863;
    const double C31903 = C31828 * C31896;
    const double C31952 = C31828 * C31942;
    const double C32849 = std::pow(C32815, -2);
    const double C32847 = std::pow(C32815, -1);
    const double C32541 = C32540 * C32538;
    const double C32553 = C32552 * C32538;
    const double C32567 = C32566 * C32538;
    const double C32597 = C32596 * C31605;
    const double C32818 = std::pow(C32649, 2);
    const double C32609 = C32608 * C31605;
    const double C32820 = std::pow(C32689, 2);
    const double C31627 = C31602 * C31621;
    const double C31628 = 0 - C31622;
    const double C31624 = 0 - C31619;
    const double C32505 = C32504 / C31601;
    const double C31633 = C31604 / C31620;
    const double C31629 = C31603 / C31620;
    const double C31625 = C31600 / C31620;
    const double C31630 = C31621 / C31617;
    const double C31626 = C31618 / C31617;
    const double C32812 = 4 * C31617;
    const double C31708 = C31601 * C31705;
    const double C31825 = std::pow(C31822, 2);
    const double C31830 = -C31822;
    const double C31843 = std::pow(C31822, 4);
    const double C31897 = std::pow(C31822, 6);
    const double C32542 = C32541 / C32539;
    const double C32554 = C32553 / C32539;
    const double C32568 = C32567 / C32539;
    const double C32598 = C32597 / C31601;
    const double C32610 = C32609 / C31601;
    const double C31636 = C31627 / C31607;
    const double C31637 = C31628 * ae;
    const double C31635 = C31624 * ae;
    const double C32506 = -C32505;
    const double C31827 = C31823 * C31825;
    const double C138 = (2 * ae * C31825 * C31823 * C31824 * ae +
                         C31824 *
                             (C31823 * C31825 + std::pow(C31824, 2) * bs[3] *
                                                    std::pow(-C31822, 3)) *
                             std::pow(ae, 2)) /
                        C31607;
    const double C131 = (C31824 * C31825 * C31823 * C31832) / C31601 -
                        (ae * bs[1] * C31820) / (C31819 * C31601);
    const double C239 = (C31997 * C31825 * C31823 * C31832) / C31601;
    const double C344 = (C32056 * C31825 * C31823 * C31832) / C31601;
    const double C31833 = std::pow(C31830, 3);
    const double C31864 = std::pow(C31830, 5);
    const double C31943 = std::pow(C31830, 7);
    const double C31849 = C31843 * C31845;
    const double C31848 = C31844 * C31843;
    const double C31862 = C31842 * C31843;
    const double C31909 = C31897 * C31904;
    const double C31908 = C31903 * C31897;
    const double C31941 = C31896 * C31897;
    const double C32543 = -C32542;
    const double C32555 = -C32554;
    const double C32569 = -C32568;
    const double C32599 = -C32598;
    const double C32611 = -C32610;
    const double C31642 = C31637 / C31601;
    const double C31641 = C31635 / C31601;
    const double C32507 = std::exp(C32506);
    const double C31835 = C31827 * ae;
    const double C125 = C31827 * C31828 - (bs[1] * C31820) / C31819;
    const double C228 = C31997 * C31824 * C31827;
    const double C230 = C31827 * C32023 - (bs[1] * C31820) / C31819;
    const double C333 = C32056 * C31824 * C31827;
    const double C335 = C31827 * C32082 - (bs[1] * C31820) / C31819;
    const double C638 = C32056 * C31997 * C31827;
    const double C31836 = C31833 * C31834;
    const double C31841 = C31829 * C31833;
    const double C249 =
        (C31997 * (C31827 + C31828 * C31829 * C31833) * C31831) / C31607;
    const double C354 =
        (C32056 * (C31827 + C31828 * C31829 * C31833) * C31831) / C31607;
    const double C31873 = C31864 * C31868;
    const double C31872 = C31867 * C31864;
    const double C31895 = C31863 * C31864;
    const double C31959 = C31943 * C31953;
    const double C31958 = C31952 * C31943;
    const double C31852 = C31824 * C31849;
    const double C31861 = ae * C31849;
    const double C32354 = C31997 * C31849;
    const double C31871 = C31862 * C31828;
    const double C31870 = C31824 * C31862;
    const double C31869 = C31862 * ae;
    const double C32457 = C31862 * C32023;
    const double C32460 = C31997 * C31862;
    const double C32481 = C31862 * C32082;
    const double C32484 = C32056 * C31862;
    const double C31913 = C31824 * C31909;
    const double C31940 = ae * C31909;
    const double C32038 = C31909 * C32023;
    const double C32097 = C31909 * C32082;
    const double C32116 = C31997 * C31909;
    const double C32135 = C32056 * C31909;
    const double C31956 = C31941 * C31828;
    const double C31955 = C31824 * C31941;
    const double C31954 = C31941 * ae;
    const double C32544 = std::exp(C32543);
    const double C32556 = std::exp(C32555);
    const double C32570 = std::exp(C32569);
    const double C32600 = std::exp(C32599);
    const double C32612 = std::exp(C32611);
    const double C31647 = C31642 - C31629;
    const double C31646 = C31641 - C31625;
    const double C31623 = C31614 * C32507;
    const double C32509 = C32507 * C32502;
    const double C32508 = C32507 / C31608;
    const double C32517 = C32515 * C32507;
    const double C32805 = C32507 * C32503;
    const double C32845 = C32809 * C32507;
    const double C32839 = C32507 * C32802;
    const double C31837 = C31824 * C31836;
    const double C240 = (C31825 * C31823 * C31832 + C31836 * C32023) / C31601;
    const double C345 = (C31825 * C31823 * C31832 + C31836 * C32082) / C31601;
    const double C643 = (C32056 * C31997 * C31836) / C31601;
    const double C925 =
        (2 * C31997 * C31836 + C31997 * (C31836 + C31849 * C32023)) / C31601;
    const double C1110 = (C32056 * (C31836 + C31849 * C32023)) / C31601;
    const double C1111 = (C31997 * C31836 + C31997 * C31849 * C32082) / C31601;
    const double C2022 =
        (2 * C32056 * C31836 + C32056 * (C31836 + C31849 * C32082)) / C31601;
    const double C31847 = C31824 * C31841;
    const double C31846 = C31841 * ae;
    const double C31851 = C31841 + C31848;
    const double C32451 = C31997 * C31841;
    const double C126 =
        2 * C31824 * C31827 + C31824 * (C31827 + C31841 * C31828);
    const double C227 = C31997 * (C31827 + C31841 * C31828);
    const double C332 = C32056 * (C31827 + C31841 * C31828);
    const double C919 =
        2 * C31997 * C31827 + C31997 * (C31827 + C31841 * C32023);
    const double C920 =
        3 * (C31827 + C31841 * C32023) +
        C31997 * (2 * C31997 * C31841 + C31997 * (C31841 + C31862 * C32023));
    const double C1101 = C32056 * (C31827 + C31841 * C32023);
    const double C1102 = C31997 * C31827 + C31997 * C31841 * C32082;
    const double C1105 =
        C31827 + C31841 * C32023 + (C31841 + C31862 * C32023) * C32082;
    const double C1630 =
        C32056 * (2 * C31997 * C31841 + C31997 * (C31841 + C31862 * C32023));
    const double C2016 =
        2 * C32056 * C31827 + C32056 * (C31827 + C31841 * C32082);
    const double C2017 =
        3 * (C31827 + C31841 * C32082) +
        C32056 * (2 * C32056 * C31841 + C32056 * (C31841 + C31862 * C32082));
    const double C6343 = C32507 * C249;
    const double C7140 = C32507 * C354;
    const double C31877 = C31824 * C31873;
    const double C31894 = ae * C31873;
    const double C31999 = C31997 * C31873;
    const double C32058 = C32056 * C31873;
    const double C32358 = C31873 * C32023;
    const double C32377 = C31873 * C32082;
    const double C926 =
        (3 * (C31836 + C31849 * C32023) +
         C31997 * (2 * C31997 * C31849 + C31997 * (C31849 + C31873 * C32023))) /
        C31601;
    const double C1114 =
        (C31836 + C31849 * C32023 + (C31849 + C31873 * C32023) * C32082) /
        C31601;
    const double C1633 =
        (C32056 * (2 * C31997 * C31849 + C31997 * (C31849 + C31873 * C32023))) /
        C31601;
    const double C2023 =
        (3 * (C31836 + C31849 * C32082) +
         C32056 * (2 * C32056 * C31849 + C32056 * (C31849 + C31873 * C32082))) /
        C31601;
    const double C31876 = C31862 + C31872;
    const double C31907 = C31895 * C31828;
    const double C31906 = C31824 * C31895;
    const double C31905 = C31895 * ae;
    const double C31912 = C31895 + C31908;
    const double C32461 = C31895 * C32023;
    const double C32485 = C31895 * C32082;
    const double C32496 = C31997 * C31895;
    const double C31963 = C31824 * C31959;
    const double C31962 = C31941 + C31958;
    const double C31866 = 2 * C31861;
    const double C31875 = C31841 + C31871;
    const double C31874 = C31870 * ae;
    const double C31900 = 2 * C31870;
    const double C32453 = C31997 * C31870;
    const double C32458 = C31841 + C32457;
    const double C32462 = 2 * C32460;
    const double C32482 = C31841 + C32481;
    const double C32486 = 2 * C32484;
    const double C31951 = 2 * C31940;
    const double C32043 = C31873 + C32038;
    const double C32102 = C31873 + C32097;
    const double C32123 = ae * C32116;
    const double C32164 = C32056 * C32116;
    const double C32386 = C32116 * C32082;
    const double C32142 = ae * C32135;
    const double C31961 = C31895 + C31956;
    const double C31960 = C31955 * ae;
    const double C32848 = C32544 * C32813;
    const double C110 =
        (C32544 * std::pow(C32813, 2)) / C32814 + C32544 / C32815;
    const double C112 = C32849 * C32544;
    const double C455 = C32847 * C32544;
    const double C32850 = C32556 * C32816;
    const double C221 =
        (C32556 * std::pow(C32816, 2)) / C32814 + C32556 / C32815;
    const double C223 = C32849 * C32556;
    const double C453 = C32847 * C32556;
    const double C32851 = C32570 * C32817;
    const double C327 =
        (C32570 * std::pow(C32817, 2)) / C32814 + C32570 / C32815;
    const double C329 = C32849 * C32570;
    const double C547 = C32847 * C32570;
    const double C32650 = C32600 / C31608;
    const double C32652 = C32600 * C32649;
    const double C32659 = C32515 * C32600;
    const double C32825 = C32600 * C32651;
    const double C32854 = C32809 * C32600;
    const double C32852 = C32600 * C32818;
    const double C32690 = C32612 / C31608;
    const double C32692 = C32612 * C32689;
    const double C32699 = C32515 * C32612;
    const double C32832 = C32612 * C32691;
    const double C32857 = C32809 * C32612;
    const double C32855 = C32612 * C32820;
    const double C31655 = C31647 / C31608;
    const double C31652 = C31602 * C31647;
    const double C31651 = 2 * C31647;
    const double C31650 = C31646 + C31611;
    const double C31634 = C31623 / C31607;
    const double C31632 = 2 * C31623;
    const double C31631 = -4 * C31623;
    const double C32510 = C32509 * C32503;
    const double C32516 = C32509 / C31620;
    const double C32806 = C32515 * C32509;
    const double C32804 = C32509 / C31601;
    const double C768 = (C32507 * std::pow(C32503, 2)) / C31607 + C32508;
    const double C32518 = C32517 * C32503;
    const double C32822 = C32517 / C31705;
    const double C32810 = C32502 * C32517;
    const double C32808 = 2 * C32517;
    const double C105 = C32517 / C32812;
    const double C17964 = C32517 / C31608;
    const double C32841 = C32805 / C31601;
    const double C769 = (-2 * C32515 * C32805) / C31601;
    const double C32868 = C32839 / C31607;
    const double C31838 = C31837 + C31835;
    const double C31850 = C31847 * ae;
    const double C231 = C31824 * C31827 + C31847 * C32023;
    const double C336 = C31824 * C31827 + C31847 * C32082;
    const double C639 = C32056 * C31997 * C31847;
    const double C918 =
        2 * C31997 * C31847 + C31997 * (C31847 + C31870 * C32023);
    const double C1100 = C32056 * (C31847 + C31870 * C32023);
    const double C1103 = C31997 * C31847 + C31997 * C31870 * C32082;
    const double C2015 =
        2 * C32056 * C31847 + C32056 * (C31847 + C31870 * C32082);
    const double C31854 = C31852 + C31846;
    const double C31853 = C31851 * C31831;
    const double C2565 =
        2 * C32056 * C32451 + C32056 * (C32451 + C31997 * C31862 * C32082);
    const double C7130 =
        3 * (C32451 + C32460 * C32082) +
        C32056 * (2 * C32056 * C32460 +
                  C32056 * (C32460 + C31997 * C31895 * C32082));
    const double C31880 = C31877 + C31869;
    const double C31902 = 2 * C31894;
    const double C32005 = ae * C31999;
    const double C32361 = 2 * C31999;
    const double C2568 =
        (2 * C32056 * C32354 + C32056 * (C32354 + C31999 * C32082)) / C31601;
    const double C7133 =
        (3 * (C32354 + C31999 * C32082) +
         C32056 * (2 * C32056 * C31999 + C32056 * (C31999 + C32116 * C32082))) /
        C31601;
    const double C32064 = ae * C32058;
    const double C32380 = 2 * C32058;
    const double C32359 = C31849 + C32358;
    const double C32378 = C31849 + C32377;
    const double C31879 = C31876 * C31831;
    const double C31911 = C31862 + C31907;
    const double C31910 = C31906 * ae;
    const double C31947 = 2 * C31906;
    const double C32470 = C31906 * C32023;
    const double C32491 = C31997 * C31906;
    const double C32493 = C31906 * C32082;
    const double C921 =
        3 * (C31847 + C31870 * C32023) +
        C31997 * (2 * C31997 * C31870 + C31997 * (C31870 + C31906 * C32023));
    const double C1106 =
        C31847 + C31870 * C32023 + (C31870 + C31906 * C32023) * C32082;
    const double C1631 =
        C32056 * (2 * C31997 * C31870 + C31997 * (C31870 + C31906 * C32023));
    const double C2018 =
        3 * (C31847 + C31870 * C32082) +
        C32056 * (2 * C32056 * C31870 + C32056 * (C31870 + C31906 * C32082));
    const double C31917 = C31913 + C31905;
    const double C31916 = C31912 * C31831;
    const double C32463 = C31862 + C32461;
    const double C32487 = C31862 + C32485;
    const double C32497 = C32496 * C32082;
    const double C31967 = C31963 + C31954;
    const double C31966 = C31962 * C31831;
    const double C31878 = C31875 * ae;
    const double C127 = 3 * (C31827 + C31841 * C31828) +
                        C31824 * (2 * C31847 + C31824 * C31875);
    const double C226 = C31997 * (2 * C31847 + C31824 * C31875);
    const double C232 = C31827 + C31841 * C31828 + C31875 * C32023;
    const double C331 = C32056 * (2 * C31847 + C31824 * C31875);
    const double C337 = C31827 + C31841 * C31828 + C31875 * C32082;
    const double C640 = C32056 * C31997 * C31875;
    const double C2566 =
        2 * C32056 * C32453 + C32056 * (C32453 + C31997 * C31906 * C32082);
    const double C6335 =
        4 * (2 * C32451 + C31997 * C32458) +
        C31997 * (3 * C32458 + C31997 * (2 * C31997 * C31862 +
                                         C31997 * (C31862 + C31895 * C32023)));
    const double C12216 =
        4 * (2 * C32056 * C31841 + C32056 * C32482) +
        C32056 * (3 * C32482 + C32056 * (2 * C32056 * C31862 +
                                         C32056 * (C31862 + C31895 * C32082)));
    const double C32048 = ae * C32043;
    const double C32362 = C31997 * C32043;
    const double C32107 = ae * C32102;
    const double C32381 = C32056 * C32102;
    const double C32129 = 2 * C32123;
    const double C32169 = ae * C32164;
    const double C32387 = C31999 + C32386;
    const double C32148 = 2 * C32142;
    const double C31965 = C31824 * C31961;
    const double C31964 = C31961 * ae;
    const double C111 = (2 * C32847 * C32848) / C32539;
    const double C454 = C32848 / C32539;
    const double C222 = (2 * C32847 * C32850) / C32539;
    const double C452 = C32850 / C32539;
    const double C328 = (2 * C32847 * C32851) / C32539;
    const double C546 = C32851 / C32539;
    const double C5347 = (C32600 * std::pow(C32651, 2)) / C31607 + C32650;
    const double C32653 = C32652 * C32651;
    const double C32658 = C32652 / C31620;
    const double C32823 = C32652 / C31601;
    const double C32819 = C32515 * C32652;
    const double C32660 = C32659 * C32651;
    const double C32831 = C32659 / C31705;
    const double C32829 = C32649 * C32659;
    const double C32828 = 2 * C32659;
    const double C6255 = C32659 / C32812;
    const double C17967 = C32659 / C31608;
    const double C32859 = C32825 / C31601;
    const double C5348 = (-2 * C32515 * C32825) / C31601;
    const double C32873 = C32852 / C31607;
    const double C10454 = (C32612 * std::pow(C32691, 2)) / C31607 + C32690;
    const double C32693 = C32692 * C32691;
    const double C32698 = C32692 / C31620;
    const double C32824 = C32692 / C31601;
    const double C32821 = C32515 * C32692;
    const double C32700 = C32699 * C32691;
    const double C32838 = C32699 / C31705;
    const double C32836 = C32689 * C32699;
    const double C32835 = 2 * C32699;
    const double C12088 = C32699 / C32812;
    const double C24588 = C32699 / C31608;
    const double C32864 = C32832 / C31601;
    const double C10455 = (-2 * C32515 * C32832) / C31601;
    const double C32875 = C32855 / C31607;
    const double C31659 = C31652 + 0;
    const double C31657 = C31636 + C31651;
    const double C31658 = C31650 / C31608;
    const double C31640 = C31616 - C31634;
    const double C31639 = C31602 * C31632;
    const double C779 =
        ((-C31632 / C31601) / C31608 - (0 * be) / C31601) / C31608 -
        (0 * be) / C31601;
    const double C6257 = -C31632 / C31601;
    const double C15952 = (-C31632 / C31601) / C31608 - (0 * be) / C31601;
    const double C31638 = C31631 / C31601;
    const double C32511 = C32510 / C31607;
    const double C32842 = 2 * C32806;
    const double C7895 = C32804 * C249;
    const double C8967 = C32804 * C354;
    const double C937 = C768 * C249;
    const double C2034 = C768 * C354;
    const double C32519 = C32518 / C31601;
    const double C32846 = C32810 / C31620;
    const double C32869 = C32804 - C32841;
    const double C15943 = -C32841;
    const double C32883 = C32868 + C32508;
    const double C31839 = ae * C31838;
    const double C132 =
        (C31825 * C31823 * C31832 + C31824 * C31838 + C31824 * C31827 * ae) /
        C31601;
    const double C238 = (C31997 * C31838) / C31601;
    const double C343 = (C32056 * C31838) / C31601;
    const double C31856 = ae * C31854;
    const double C31855 = C31824 * C31854;
    const double C31865 = 2 * C31854;
    const double C32017 = C31997 * C31854;
    const double C32076 = C32056 * C31854;
    const double C241 = (C31838 + C31854 * C32023) / C31601;
    const double C346 = (C31838 + C31854 * C32082) / C31601;
    const double C248 =
        (2 * ae * C31997 * C31836 + C31824 * C31997 * C31853) / C31607;
    const double C250 = ((C31827 + C31828 * C31829 * C31833) * C31831 +
                         C31853 * std::pow(C31997, 2)) /
                        C31607;
    const double C353 =
        (2 * ae * C32056 * C31836 + C31824 * C32056 * C31853) / C31607;
    const double C355 = ((C31827 + C31828 * C31829 * C31833) * C31831 +
                         C31853 * std::pow(C32056, 2)) /
                        C31607;
    const double C648 = (C32056 * C31997 * C31853) / C31607;
    const double C31883 = ae * C31880;
    const double C31882 = C31824 * C31880;
    const double C31899 = 2 * C31880;
    const double C31998 = C31997 * C31880;
    const double C32025 = C31880 * C32023;
    const double C32057 = C32056 * C31880;
    const double C32084 = C31880 * C32082;
    const double C32010 = 2 * C32005;
    const double C32069 = 2 * C32064;
    const double C6337 =
        (4 * (2 * C32354 + C31997 * C32359) +
         C31997 * (3 * C32359 + C31997 * (2 * C31999 + C31997 * C32043))) /
        C31601;
    const double C7132 =
        (2 * C32056 * C32359 + C32056 * (C32359 + C32043 * C32082)) / C31601;
    const double C7134 =
        (3 * (C32359 + C32043 * C32082) +
         C32056 * (2 * C32056 * C32043 +
                   C32056 * (C32043 + (C31909 + C31959 * C32023) * C32082))) /
        C31601;
    const double C12218 =
        (4 * (2 * C32056 * C31849 + C32056 * C32378) +
         C32056 * (3 * C32378 + C32056 * (2 * C32058 + C32056 * C32102))) /
        C31601;
    const double C31881 = C31824 * C31879;
    const double C32013 = C31997 * C31879;
    const double C32072 = C32056 * C31879;
    const double C251 = (2 * ae * (C31836 + C31849 * C32023) +
                         C31824 * (C31853 + C31879 * C32023)) /
                        C31607;
    const double C356 = (2 * ae * (C31836 + C31849 * C32082) +
                         C31824 * (C31853 + C31879 * C32082)) /
                        C31607;
    const double C931 =
        (2 * C31997 * C31853 + C31997 * (C31853 + C31879 * C32023)) / C31607;
    const double C1119 = (C32056 * (C31853 + C31879 * C32023)) / C31607;
    const double C2028 =
        (2 * C32056 * C31853 + C32056 * (C31853 + C31879 * C32082)) / C31607;
    const double C31915 = C31824 * C31911;
    const double C31914 = C31911 * ae;
    const double C31948 = 3 * C31911;
    const double C32455 = C31997 * C31911;
    const double C917 =
        2 * C31997 * C31875 + C31997 * (C31875 + C31911 * C32023);
    const double C922 =
        3 * (C31875 + C31911 * C32023) +
        C31997 * (2 * C31997 * C31911 + C31997 * (C31911 + C31961 * C32023));
    const double C1099 = C32056 * (C31875 + C31911 * C32023);
    const double C1104 = C31997 * C31875 + C31997 * C31911 * C32082;
    const double C1107 =
        C31875 + C31911 * C32023 + (C31911 + C31961 * C32023) * C32082;
    const double C1632 =
        C32056 * (2 * C31997 * C31911 + C31997 * (C31911 + C31961 * C32023));
    const double C2014 =
        2 * C32056 * C31875 + C32056 * (C31875 + C31911 * C32082);
    const double C2019 =
        3 * (C31875 + C31911 * C32082) +
        C32056 * (2 * C32056 * C31911 + C32056 * (C31911 + C31961 * C32082));
    const double C32471 = C31870 + C32470;
    const double C12316 =
        3 * (C32453 + C32491 * C32082) +
        C32056 * (2 * C32056 * C32491 +
                  C32056 * (C32491 + C31997 * C31955 * C32082));
    const double C32494 = C31870 + C32493;
    const double C31922 = ae * C31917;
    const double C31920 = C31824 * C31917;
    const double C31946 = 2 * C31917;
    const double C32003 = C31997 * C31917;
    const double C32031 = C31917 * C32023;
    const double C32062 = C32056 * C31917;
    const double C32090 = C31917 * C32082;
    const double C31919 = C31824 * C31916;
    const double C32000 = C31997 * C31916;
    const double C32029 = C31916 * C32023;
    const double C32059 = C32056 * C31916;
    const double C32088 = C31916 * C32082;
    const double C32464 = C31997 * C32463;
    const double C7129 =
        2 * C32056 * C32458 + C32056 * (C32458 + C32463 * C32082);
    const double C7131 =
        3 * (C32458 + C32463 * C32082) +
        C32056 * (2 * C32056 * C32463 +
                  C32056 * (C32463 + (C31895 + C31941 * C32023) * C32082));
    const double C32488 = C32056 * C32487;
    const double C32498 = C32460 + C32497;
    const double C31973 = ae * C31967;
    const double C31970 = C31824 * C31967;
    const double C32042 = C31967 * C32023;
    const double C32101 = C31967 * C32082;
    const double C32121 = C31997 * C31967;
    const double C32140 = C32056 * C31967;
    const double C31969 = C31824 * C31966;
    const double C32039 = C31966 * C32023;
    const double C32098 = C31966 * C32082;
    const double C32117 = C31997 * C31966;
    const double C32136 = C32056 * C31966;
    const double C32053 = 2 * C32048;
    const double C32363 = C32361 + C32362;
    const double C32112 = 2 * C32107;
    const double C32382 = C32380 + C32381;
    const double C32174 = 2 * C32169;
    const double C12499 =
        (4 * (2 * C32056 * C31999 + C32056 * C32387) +
         C32056 * (3 * C32387 +
                   C32056 * (2 * C32164 +
                             C32056 * (C32116 + C31997 * C31959 * C32082)))) /
        C31601;
    const double C31968 = C31947 + C31965;
    const double C32654 = C32653 / C31607;
    const double C32853 = 2 * C32819;
    const double C32661 = C32660 / C31601;
    const double C32862 = C32829 / C31620;
    const double C32877 = C32823 - C32859;
    const double C15105 = -C32859;
    const double C32886 = C32873 + C32650;
    const double C32694 = C32693 / C31607;
    const double C32856 = 2 * C32821;
    const double C32701 = C32700 / C31601;
    const double C32867 = C32836 / C31620;
    const double C32880 = C32824 - C32864;
    const double C21058 = -C32864;
    const double C32887 = C32875 + C32690;
    const double C31665 = C31659 * be;
    const double C31664 = C31657 * be;
    const double C7773 = C31640 * C131;
    const double C31645 = C31602 * C31640;
    const double C31644 = 2 * C31640;
    const double C31706 = C31640 / C31608;
    const double C31643 = C31639 / C31601;
    const double C6268 = C6257 * C131;
    const double C6263 = C6257 * C926;
    const double C6262 = C6257 * C925;
    const double C6261 = C6257 * C240;
    const double C6260 = C6257 * C239;
    const double C6259 = C6257 * C130;
    const double C6452 = C6257 * C1114;
    const double C6451 = C6257 * C1111;
    const double C6450 = C6257 * C345;
    const double C6449 = C6257 * C344;
    const double C6448 = C6257 * C643;
    const double C6447 = C6257 * C1110;
    const double C6446 = C6257 * C1633;
    const double C7153 = C6257 * C7133;
    const double C7152 = C6257 * C2023;
    const double C7150 = C6257 * C2022;
    const double C7147 = C6257 * C2568;
    const double C15955 = C15952 * C131;
    const double C32512 = C32508 - C32511;
    const double C32870 = C32842 / C31601;
    const double C32520 = C32516 - C32519;
    const double C32884 = C32869 / C31608;
    const double C16077 = C15943 * C249;
    const double C17171 = C15943 * C354;
    const double C5495 = C32883 * C249;
    const double C10688 = C32883 * C354;
    const double C139 =
        ((C31827 + C31828 * C31829 * C31833) * C31831 + C31839 + C31839 +
         C31824 *
             (2 * ae * C31836 +
              C31824 *
                  (C31829 * C31833 + C31828 * bs[4] * std::pow(C31822, 4)) *
                  C31831)) /
        C31607;
    const double C783 = C779 * C132;
    const double C6269 = C6257 * C132;
    const double C7786 = C31640 * C132;
    const double C15968 = C15952 * C132;
    const double C6267 = C6257 * C238;
    const double C7775 = C31640 * C238;
    const double C15957 = C15952 * C238;
    const double C6650 = C6257 * C343;
    const double C8046 = C31640 * C343;
    const double C16228 = C15952 * C343;
    const double C31857 = C31836 + C31855;
    const double C32018 = ae * C32017;
    const double C644 = (C32056 * C32017) / C31601;
    const double C32077 = ae * C32076;
    const double C6266 = C6257 * C241;
    const double C7777 = C31640 * C241;
    const double C15959 = C15952 * C241;
    const double C6877 = C6257 * C346;
    const double C8049 = C31640 * C346;
    const double C16231 = C15952 * C346;
    const double C939 = C769 * C248;
    const double C1295 = C768 * C248;
    const double C5823 = C32883 * C248;
    const double C6541 = C32507 * C248;
    const double C7897 = C32517 * C248;
    const double C8187 = C32804 * C248;
    const double C16079 = C32517 * C248;
    const double C16369 = C15943 * C248;
    const double C943 = C768 * C250;
    const double C5501 = C32883 * C250;
    const double C6345 = C32507 * C250;
    const double C7899 = C32804 * C250;
    const double C16081 = C15943 * C250;
    const double C2036 = C769 * C353;
    const double C2388 = C768 * C353;
    const double C7496 = C32507 * C353;
    const double C8969 = C32517 * C353;
    const double C9421 = C32804 * C353;
    const double C11036 = C32883 * C353;
    const double C17173 = C32517 * C353;
    const double C17631 = C15943 * C353;
    const double C2040 = C768 * C355;
    const double C7142 = C32507 * C355;
    const double C8981 = C32804 * C355;
    const double C10694 = C32883 * C355;
    const double C17175 = C15943 * C355;
    const double C1651 = C768 * C648;
    const double C6167 = C32883 * C648;
    const double C6747 = C32507 * C648;
    const double C8497 = C32804 * C648;
    const double C16679 = C15943 * C648;
    const double C31893 = C31879 + C31883;
    const double C31885 = C31849 + C31882;
    const double C32004 = ae * C31998;
    const double C32155 = C32056 * C31998;
    const double C32177 = 2 * C31998;
    const double C1112 = (C32017 + C31998 * C32082) / C31601;
    const double C32026 = C31854 + C32025;
    const double C32063 = ae * C32057;
    const double C32231 = 2 * C32057;
    const double C32085 = C31854 + C32084;
    const double C6351 = C6257 * C6337;
    const double C7144 = C6257 * C7132;
    const double C7154 = C6257 * C7134;
    const double C12226 = C6257 * C12218;
    const double C31884 = C31866 + C31881;
    const double C649 =
        (2 * ae * C32056 * C31997 * C31849 + C31824 * C32056 * C32013) / C31607;
    const double C1120 = (C31997 * C31853 + C32013 * C32082) / C31607;
    const double C945 = C769 * C251;
    const double C1301 = C768 * C251;
    const double C5829 = C32883 * C251;
    const double C6543 = C32507 * C251;
    const double C7901 = C32517 * C251;
    const double C8191 = C32804 * C251;
    const double C16083 = C32517 * C251;
    const double C16373 = C15943 * C251;
    const double C2042 = C769 * C356;
    const double C2394 = C768 * C356;
    const double C7498 = C32507 * C356;
    const double C8979 = C32517 * C356;
    const double C11042 = C32883 * C356;
    const double C13375 = C32804 * C356;
    const double C17177 = C32517 * C356;
    const double C17635 = C15943 * C356;
    const double C956 = C768 * C931;
    const double C5514 = C32883 * C931;
    const double C6347 = C32507 * C931;
    const double C7903 = C32804 * C931;
    const double C16085 = C15943 * C931;
    const double C1645 = C768 * C1119;
    const double C6161 = C32883 * C1119;
    const double C6745 = C32507 * C1119;
    const double C8493 = C32804 * C1119;
    const double C16675 = C15943 * C1119;
    const double C2053 = C768 * C2028;
    const double C7151 = C32507 * C2028;
    const double C10707 = C32883 * C2028;
    const double C12959 = C32804 * C2028;
    const double C17190 = C15943 * C2028;
    const double C31918 = C31900 + C31915;
    const double C2567 =
        2 * C32056 * C32455 + C32056 * (C32455 + C31997 * C31961 * C32082);
    const double C6536 =
        4 * (2 * C32453 + C31997 * C32471) +
        C31997 * (3 * C32471 + C31997 * (2 * C31997 * C31906 +
                                         C31997 * (C31906 + C31955 * C32023)));
    const double C6646 =
        C32056 * (3 * C32471 + C31997 * (2 * C31997 * C31906 +
                                         C31997 * (C31906 + C31955 * C32023)));
    const double C7315 =
        2 * C32453 + C31997 * C32471 +
        (2 * C31997 * C31906 + C31997 * (C31906 + C31955 * C32023)) * C32082;
    const double C7491 =
        2 * C32056 * C32471 +
        C32056 * (C32471 + (C31906 + C31955 * C32023) * C32082);
    const double C12402 =
        4 * (2 * C32056 * C31870 + C32056 * C32494) +
        C32056 * (3 * C32494 + C32056 * (2 * C32056 * C31906 +
                                         C32056 * (C31906 + C31955 * C32082)));
    const double C31939 = C31916 + C31922;
    const double C31924 = C31873 + C31920;
    const double C32009 = ae * C32003;
    const double C32160 = C32056 * C32003;
    const double C32187 = 2 * C32003;
    const double C32201 = C32003 * C32082;
    const double C32034 = C31880 + C32031;
    const double C32068 = ae * C32062;
    const double C32241 = 2 * C32062;
    const double C32093 = C31880 + C32090;
    const double C31923 = C31902 + C31919;
    const double C32006 = C31824 * C32000;
    const double C32158 = C32056 * C32000;
    const double C32211 = 2 * C32000;
    const double C1121 = (2 * ae * (C31997 * C31849 + C31999 * C32082) +
                          C31824 * (C32013 + C32000 * C32082)) /
                         C31607;
    const double C2571 =
        (2 * C32056 * C32013 + C32056 * (C32013 + C32000 * C32082)) / C31607;
    const double C32032 = C31879 + C32029;
    const double C32065 = C31824 * C32059;
    const double C32257 = 2 * C32059;
    const double C32091 = C31879 + C32088;
    const double C32465 = C32462 + C32464;
    const double C32489 = C32486 + C32488;
    const double C12498 =
        4 * (2 * C32056 * C32460 + C32056 * C32498) +
        C32056 * (3 * C32498 +
                  C32056 * (2 * C32056 * C32496 +
                            C32056 * (C32496 + C31997 * C31941 * C32082)));
    const double C31975 = C31909 + C31970;
    const double C32047 = C31917 + C32042;
    const double C32106 = C31917 + C32101;
    const double C32128 = ae * C32121;
    const double C32168 = C32056 * C32121;
    const double C32250 = C32121 * C32082;
    const double C32147 = ae * C32140;
    const double C31974 = C31951 + C31969;
    const double C32044 = C31916 + C32039;
    const double C32103 = C31916 + C32098;
    const double C32124 = C31824 * C32117;
    const double C32165 = C32056 * C32117;
    const double C32248 = C32117 * C32082;
    const double C32143 = C31824 * C32136;
    const double C6338 =
        (5 * (3 * C32359 + C31997 * C32363) +
         C31997 * (4 * C32363 +
                   C31997 * (3 * C32043 +
                             C31997 * (2 * C32116 +
                                       C31997 * (C31909 + C31959 * C32023))))) /
        C31601;
    const double C6438 = (C32056 * (3 * C32359 + C31997 * C32363)) / C31601;
    const double C6439 =
        (2 * C32354 + C31997 * C32359 + C32363 * C32082) / C31601;
    const double C6440 =
        (3 * C32359 + C31997 * C32363 +
         (3 * C32043 +
          C31997 * (2 * C32116 + C31997 * (C31909 + C31959 * C32023))) *
             C32082) /
        C31601;
    const double C6737 =
        (C32056 * (4 * C32363 +
                   C31997 * (3 * C32043 +
                             C31997 * (2 * C32116 +
                                       C31997 * (C31909 + C31959 * C32023))))) /
        C31601;
    const double C7654 =
        (2 * C32056 * C32363 +
         C32056 * (C32363 + (2 * C32116 + C31997 * (C31909 + C31959 * C32023)) *
                                C32082)) /
        C31601;
    const double C12219 =
        (5 * (3 * C32378 + C32056 * C32382) +
         C32056 * (4 * C32382 +
                   C32056 * (3 * C32102 +
                             C32056 * (2 * C32135 +
                                       C32056 * (C31909 + C31959 * C32082))))) /
        C31601;
    const double C12504 = C6257 * C12499;
    const double C31972 = C31824 * C31968;
    const double C31971 = C31968 * ae;
    const double C32655 = C32650 - C32654;
    const double C32874 = C32853 / C31601;
    const double C32662 = C32658 - C32661;
    const double C32888 = C32877 / C31608;
    const double C32695 = C32690 - C32694;
    const double C32876 = C32856 / C31601;
    const double C32702 = C32698 - C32701;
    const double C32890 = C32880 / C31608;
    const double C31670 = C31665 / C31601;
    const double C31669 = C31664 / C31601;
    const double C31649 = C31645 + C32517;
    const double C31710 = C31706 - C31709;
    const double C5355 = C31706 + (0 * ae) / C31601;
    const double C31648 = C32507 - C31643;
    const double C18132 = C32512 * C931;
    const double C18119 = C32512 * C250;
    const double C18113 = C32512 * C249;
    const double C18447 = C32512 * C251;
    const double C18441 = C32512 * C248;
    const double C18785 = C32512 * C648;
    const double C18779 = C32512 * C1119;
    const double C19268 = C32512 * C355;
    const double C19252 = C32512 * C354;
    const double C19706 = C32512 * C353;
    const double C24819 = C32512 * C2028;
    const double C25126 = C32512 * C356;
    const double C32803 = C32512 * C32502;
    const double C32844 = C32808 + C32512;
    const double C5503 = C32870 * C251;
    const double C5497 = C32870 * C248;
    const double C10696 = C32870 * C356;
    const double C10690 = C32870 * C353;
    const double C18121 = C32520 * C251;
    const double C18115 = C32520 * C248;
    const double C19266 = C32520 * C356;
    const double C19254 = C32520 * C353;
    const double C32811 = C32520 / C31608;
    const double C32807 = C32520 * C32502;
    const double C2690 = C32884 - (C32512 * C32503) / C31601;
    const double C31858 = C31857 + C31850;
    const double C247 =
        (C31997 * C31853 + C32018 + C32018 +
         C31824 * (2 * ae * C31997 * C31849 + C31824 * C32013)) /
        C31607;
    const double C6651 = C6257 * C644;
    const double C8044 = C31640 * C644;
    const double C16226 = C15952 * C644;
    const double C352 =
        (C32056 * C31853 + C32077 + C32077 +
         C31824 * (2 * ae * C32056 * C31849 + C31824 * C32072)) /
        C31607;
    const double C31901 = C31893 + C31883;
    const double C31886 = C31885 + C31874;
    const double C32156 = ae * C32155;
    const double C6876 = C6257 * C1112;
    const double C8051 = C31640 * C1112;
    const double C16233 = C15952 * C1112;
    const double C32027 = ae * C32026;
    const double C924 = (2 * C32017 + C31997 * C32026) / C31601;
    const double C1109 = (C32056 * C32026) / C31601;
    const double C32086 = ae * C32085;
    const double C2021 = (2 * C32076 + C32056 * C32085) / C31601;
    const double C1649 = C769 * C649;
    const double C4829 = C768 * C649;
    const double C6165 = C32870 * C649;
    const double C7321 = C32507 * C649;
    const double C8495 = C32517 * C649;
    const double C9207 = C32804 * C649;
    const double C16677 = C32517 * C649;
    const double C17415 = C15943 * C649;
    const double C18783 = C32520 * C649;
    const double C19497 = C32512 * C649;
    const double C26945 = C32883 * C649;
    const double C2576 = C768 * C1120;
    const double C6997 = C32507 * C1120;
    const double C8977 = C32804 * C1120;
    const double C11215 = C32883 * C1120;
    const double C17005 = C15943 * C1120;
    const double C19262 = C32512 * C1120;
    const double C31921 = C31918 * ae;
    const double C128 = 4 * (2 * C31847 + C31824 * C31875) +
                        C31824 * (3 * C31875 + C31824 * C31918);
    const double C225 = C31997 * (3 * C31875 + C31824 * C31918);
    const double C233 = 2 * C31847 + C31824 * C31875 + C31918 * C32023;
    const double C330 = C32056 * (3 * C31875 + C31824 * C31918);
    const double C338 = 2 * C31847 + C31824 * C31875 + C31918 * C32082;
    const double C641 = C32056 * C31997 * C31918;
    const double C1290 =
        2 * C31997 * C31918 + C31997 * (C31918 + C31968 * C32023);
    const double C1472 = C32056 * (C31918 + C31968 * C32023);
    const double C2231 = C31997 * C31918 + C31997 * C31968 * C32082;
    const double C2383 =
        2 * C32056 * C31918 + C32056 * (C31918 + C31968 * C32082);
    const double C31950 = C31939 + C31922;
    const double C31926 = C31924 + C31910;
    const double C32115 = C32000 + C32009;
    const double C32162 = ae * C32160;
    const double C32268 = 2 * C32160;
    const double C32202 = C31998 + C32201;
    const double C32036 = ae * C32034;
    const double C32178 = C31997 * C32034;
    const double C32186 = 3 * C32034;
    const double C32194 = C32056 * C32034;
    const double C1115 = (C32026 + C32034 * C32082) / C31601;
    const double C32134 = C32059 + C32068;
    const double C32095 = ae * C32093;
    const double C32232 = C32056 * C32093;
    const double C32240 = 3 * C32093;
    const double C31925 = C31824 * C31923;
    const double C31938 = 2 * C31923;
    const double C32011 = C32010 + C32006;
    const double C2578 = C769 * C1121;
    const double C7323 = C32507 * C1121;
    const double C8975 = C32517 * C1121;
    const double C11217 = C32870 * C1121;
    const double C13171 = C32804 * C1121;
    const double C17007 = C32517 * C1121;
    const double C17419 = C15943 * C1121;
    const double C19260 = C32520 * C1121;
    const double C7148 = C32507 * C2571;
    const double C12955 = C32804 * C2571;
    const double C17184 = C15943 * C2571;
    const double C930 =
        (2 * ae * (2 * C31997 * C31849 + C31997 * (C31849 + C31873 * C32023)) +
         C31824 * (2 * C32013 + C31997 * C32032)) /
        C31607;
    const double C932 = (3 * (C31853 + C31879 * C32023) +
                         C31997 * (2 * C32013 + C31997 * C32032)) /
                        C31607;
    const double C1118 = (2 * ae * C32056 * (C31849 + C31873 * C32023) +
                          C31824 * C32056 * C32032) /
                         C31607;
    const double C1123 = (C31853 + C31879 * C32023 + C32032 * C32082) / C31607;
    const double C1636 = (C32056 * (2 * C32013 + C31997 * C32032)) / C31607;
    const double C32070 = C32069 + C32065;
    const double C2027 =
        (2 * ae * (2 * C32056 * C31849 + C32056 * (C31849 + C31873 * C32082)) +
         C31824 * (2 * C32072 + C32056 * C32091)) /
        C31607;
    const double C2029 = (3 * (C31853 + C31879 * C32082) +
                          C32056 * (2 * C32072 + C32056 * C32091)) /
                         C31607;
    const double C6336 =
        5 * (3 * C32458 + C31997 * C32465) +
        C31997 * (4 * C32465 +
                  C31997 * (3 * C32463 +
                            C31997 * (2 * C31997 * C31895 +
                                      C31997 * (C31895 + C31941 * C32023))));
    const double C6435 = C32056 * (3 * C32458 + C31997 * C32465);
    const double C6436 = 2 * C32451 + C31997 * C32458 + C32465 * C32082;
    const double C6437 =
        3 * C32458 + C31997 * C32465 +
        (3 * C32463 +
         C31997 * (2 * C31997 * C31895 + C31997 * (C31895 + C31941 * C32023))) *
            C32082;
    const double C6736 =
        C32056 * (4 * C32465 +
                  C31997 * (3 * C32463 +
                            C31997 * (2 * C31997 * C31895 +
                                      C31997 * (C31895 + C31941 * C32023))));
    const double C7653 =
        2 * C32056 * C32465 +
        C32056 * (C32465 +
                  (2 * C31997 * C31895 + C31997 * (C31895 + C31941 * C32023)) *
                      C32082);
    const double C12217 =
        5 * (3 * C32482 + C32056 * C32489) +
        C32056 * (4 * C32489 +
                  C32056 * (3 * C32487 +
                            C32056 * (2 * C32056 * C31895 +
                                      C32056 * (C31895 + C31941 * C32082))));
    const double C31978 = C31975 + C31960;
    const double C32052 = ae * C32047;
    const double C32188 = C31997 * C32047;
    const double C32207 = C32047 * C32082;
    const double C32222 = C32056 * C32047;
    const double C32111 = ae * C32106;
    const double C32242 = C32056 * C32106;
    const double C32173 = ae * C32168;
    const double C32253 = C32003 + C32250;
    const double C31977 = C31824 * C31974;
    const double C32049 = C31824 * C32044;
    const double C32212 = C31997 * C32044;
    const double C32220 = C32056 * C32044;
    const double C933 =
        (2 * ae *
             (3 * (C31849 + C31873 * C32023) +
              C31997 * (2 * C31999 + C31997 * C32043)) +
         C31824 * (3 * C32032 + C31997 * (2 * C32000 + C31997 * C32044))) /
        C31607;
    const double C1124 =
        (2 * ae * (C31849 + C31873 * C32023 + C32043 * C32082) +
         C31824 * (C32032 + C32044 * C32082)) /
        C31607;
    const double C6648 =
        (2 * ae * C32056 *
             (3 * C32043 +
              C31997 * (2 * C32116 + C31997 * (C31909 + C31959 * C32023))) +
         C31824 * C32056 *
             (3 * C32044 +
              C31997 *
                  (2 * C32117 +
                   C31997 * (C31966 + (C31942 * C31943 +
                                       C31828 * bs[8] * std::pow(C31822, 8)) *
                                          C31831 * C32023)))) /
        C31607;
    const double C7135 =
        (2 * C32056 * C32032 + C32056 * (C32032 + C32044 * C32082)) / C31607;
    const double C32108 = C31824 * C32103;
    const double C32258 = C32056 * C32103;
    const double C2030 =
        (2 * ae *
             (3 * (C31849 + C31873 * C32082) +
              C32056 * (2 * C32058 + C32056 * C32102)) +
         C31824 * (3 * C32091 + C32056 * (2 * C32059 + C32056 * C32103))) /
        C31607;
    const double C32130 = C32129 + C32124;
    const double C32170 = C31824 * C32165;
    const double C32251 = C32000 + C32248;
    const double C32149 = C32148 + C32143;
    const double C6353 = C6257 * C6338;
    const double C6445 = C6257 * C6438;
    const double C6453 = C6257 * C6439;
    const double C6454 = C6257 * C6440;
    const double C6748 = C6257 * C6737;
    const double C7663 = C6257 * C7654;
    const double C12228 = C6257 * C12219;
    const double C31976 = C31948 + C31972;
    const double C32826 = C32655 * C32649;
    const double C32861 = C32828 + C32655;
    const double C32830 = C32662 / C31608;
    const double C32827 = C32662 * C32649;
    const double C7763 = C32888 - (C32655 * C32651) / C31601;
    const double C32833 = C32695 * C32689;
    const double C32866 = C32835 + C32695;
    const double C32837 = C32702 / C31608;
    const double C32834 = C32702 * C32689;
    const double C13680 = C32890 - (C32695 * C32691) / C31601;
    const double C31677 = C31658 - C31670;
    const double C31676 = C31626 - C31669;
    const double C31656 = C31649 * be;
    const double C17977 = C31710 * C132;
    const double C31711 = 2 * C31710;
    const double C122 =
        (C31710 / C31608 + (0 * ae) / C31601) / C31608 - (0 * be) / C31601;
    const double C2703 = C31710 / C31608 - (0 * be) / C31601;
    const double C15114 = C31710 / C31608 + (0 * ae) / C31601;
    const double C5359 = C5355 * C132;
    const double C31654 = C31648 * ae;
    const double C31653 = C31648 * C31615;
    const double C775 =
        ((-C31603 / C31601) / C31608 - (C31628 * be) / C31601) / C31608 -
        ((C31602 * ((-C31611) / C31608 - (C31648 * be) / C31601) + C15943) *
         be) /
            C31601 +
        (-C31632 / C31601) / C31608 - (0 * be) / C31601;
    const double C777 =
        ((-C31611) / C31608 - (C31648 * be) / C31601) / C31608 -
        ((C31602 * ((-C31632 / C31601) / C31608 - (0 * be) / C31601) + C32517) *
         be) /
            C31601;
    const double C15950 = (-C31611) / C31608 - (C31648 * be) / C31601;
    const double C32840 = C32803 / C31601;
    const double C32871 = C32844 / C31608;
    const double C32872 = C32846 + C32811;
    const double C2692 = C32811 - C32518 / C31620;
    const double C32843 = C32807 / C31601;
    const double C2846 = C2690 * C250;
    const double C2828 = C2690 * C249;
    const double C3120 = C2690 * C248;
    const double C3418 = C2690 * C648;
    const double C3750 = C2690 * C355;
    const double C3736 = C2690 * C354;
    const double C4040 = C2690 * C353;
    const double C31859 = ae * C31858;
    const double C133 =
        (2 * C31838 + C31824 * C31858 + (C31827 + C31841 * C31828) * ae) /
        C31601;
    const double C237 = (C31997 * C31858) / C31601;
    const double C342 = (C32056 * C31858) / C31601;
    const double C941 = C32845 * C247;
    const double C1297 = C769 * C247;
    const double C5499 = C32845 * C247;
    const double C5825 = C32870 * C247;
    const double C8189 = C32517 * C247;
    const double C16371 = C32517 * C247;
    const double C18117 = C17964 * C247;
    const double C18443 = C32520 * C247;
    const double C2038 = C32845 * C352;
    const double C2390 = C769 * C352;
    const double C9423 = C32517 * C352;
    const double C10692 = C32845 * C352;
    const double C11038 = C32870 * C352;
    const double C17633 = C32517 * C352;
    const double C19256 = C17964 * C352;
    const double C19708 = C32520 * C352;
    const double C31888 = ae * C31886;
    const double C31887 = C31824 * C31886;
    const double C31898 = 3 * C31886;
    const double C32014 = C31997 * C31886;
    const double C32073 = C32056 * C31886;
    const double C242 = (C31858 + C31886 * C32023) / C31601;
    const double C347 = (C31858 + C31886 * C32082) / C31601;
    const double C650 =
        (C32056 * C32013 + C32156 + C32156 +
         C31824 * (2 * ae * C32056 * C31999 + C31824 * C32056 * C32000)) /
        C31607;
    const double C252 = (C31853 + C31879 * C32023 + C32027 + C32027 +
                         C31824 * (2 * ae * (C31849 + C31873 * C32023) +
                                   C31824 * (C31879 + C31916 * C32023))) /
                        C31607;
    const double C6265 = C6257 * C924;
    const double C7779 = C31640 * C924;
    const double C15961 = C15952 * C924;
    const double C6652 = C6257 * C1109;
    const double C8042 = C31640 * C1109;
    const double C16224 = C15952 * C1109;
    const double C357 = (C31853 + C31879 * C32082 + C32086 + C32086 +
                         C31824 * (2 * ae * (C31849 + C31873 * C32082) +
                                   C31824 * (C31879 + C31916 * C32082))) /
                        C31607;
    const double C7499 = C6257 * C2021;
    const double C8983 = C31640 * C2021;
    const double C17186 = C15952 * C2021;
    const double C31929 = ae * C31926;
    const double C31928 = C31824 * C31926;
    const double C31945 = 3 * C31926;
    const double C32002 = C31997 * C31926;
    const double C32030 = C31926 * C32023;
    const double C32061 = C32056 * C31926;
    const double C32089 = C31926 * C32082;
    const double C32122 = C32115 + C32009;
    const double C32203 = ae * C32202;
    const double C2569 = (2 * C32155 + C32056 * C32202) / C31601;
    const double C32179 = C32177 + C32178;
    const double C32195 = ae * C32194;
    const double C6875 = C6257 * C1115;
    const double C8053 = C31640 * C1115;
    const double C16235 = C15952 * C1115;
    const double C32141 = C32134 + C32068;
    const double C32233 = C32231 + C32232;
    const double C31927 = C31901 + C31925;
    const double C953 = C769 * C930;
    const double C5511 = C32870 * C930;
    const double C6545 = C32507 * C930;
    const double C7905 = C32517 * C930;
    const double C8195 = C32804 * C930;
    const double C16087 = C32517 * C930;
    const double C16377 = C15943 * C930;
    const double C18129 = C32520 * C930;
    const double C6349 = C32507 * C932;
    const double C7911 = C32804 * C932;
    const double C16093 = C15943 * C932;
    const double C1643 = C769 * C1118;
    const double C6159 = C32870 * C1118;
    const double C7326 = C32507 * C1118;
    const double C8491 = C32517 * C1118;
    const double C9211 = C32804 * C1118;
    const double C16673 = C32517 * C1118;
    const double C18777 = C32520 * C1118;
    const double C20563 = C15943 * C1118;
    const double C7001 = C32507 * C1123;
    const double C8973 = C32804 * C1123;
    const double C17011 = C15943 * C1123;
    const double C6743 = C32507 * C1636;
    const double C8489 = C32804 * C1636;
    const double C16671 = C15943 * C1636;
    const double C2050 = C769 * C2027;
    const double C10704 = C32870 * C2027;
    const double C12407 = C32507 * C2027;
    const double C12957 = C32517 * C2027;
    const double C14157 = C32804 * C2027;
    const double C17187 = C32517 * C2027;
    const double C23316 = C15943 * C2027;
    const double C24817 = C32520 * C2027;
    const double C12224 = C32507 * C2029;
    const double C13887 = C32804 * C2029;
    const double C23046 = C15943 * C2029;
    const double C31982 = ae * C31978;
    const double C31981 = C31824 * C31978;
    const double C32041 = C31978 * C32023;
    const double C32100 = C31978 * C32082;
    const double C32120 = C31997 * C31978;
    const double C32139 = C32056 * C31978;
    const double C32189 = C32187 + C32188;
    const double C32208 = C32034 + C32207;
    const double C32224 = ae * C32222;
    const double C32243 = C32241 + C32242;
    const double C32255 = ae * C32253;
    const double C32269 = C32056 * C32253;
    const double C31980 = C31950 + C31977;
    const double C32054 = C32053 + C32049;
    const double C32216 = C32211 + C32212;
    const double C7137 =
        (3 * (C32032 + C32044 * C32082) +
         C32056 * (2 * C32220 +
                   C32056 * (C32044 +
                             (C31966 + (C31942 * C31943 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31831 * C32023) *
                                 C32082))) /
        C31607;
    const double C7493 =
        (2 * ae *
             (2 * C32056 * C32043 +
              C32056 * (C32043 + (C31909 + C31959 * C32023) * C32082)) +
         C31824 * (2 * C32220 +
                   C32056 * (C32044 +
                             (C31966 + (C31942 * C31943 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31831 * C32023) *
                                 C32082))) /
        C31607;
    const double C6547 = C32507 * C933;
    const double C7908 = C32517 * C933;
    const double C16090 = C32517 * C933;
    const double C7328 = C32507 * C1124;
    const double C8971 = C32517 * C1124;
    const double C17009 = C32517 * C1124;
    const double C7145 = C32507 * C7135;
    const double C32113 = C32112 + C32108;
    const double C32262 = C32257 + C32258;
    const double C12409 = C32507 * C2030;
    const double C13885 = C32517 * C2030;
    const double C23044 = C32517 * C2030;
    const double C32131 = C31824 * C32130;
    const double C32175 = C32174 + C32170;
    const double C2572 =
        (2 * ae * (2 * C32056 * C31999 + C32056 * (C31999 + C32116 * C32082)) +
         C31824 * (2 * C32158 + C32056 * C32251)) /
        C31607;
    const double C7136 = (3 * (C32013 + C32000 * C32082) +
                          C32056 * (2 * C32158 + C32056 * C32251)) /
                         C31607;
    const double C12318 =
        (2 * ae *
             (3 * (C31999 + C32116 * C32082) +
              C32056 *
                  (2 * C32164 + C32056 * (C32116 + C31997 * C31959 * C32082))) +
         C31824 * (3 * C32251 +
                   C32056 * (2 * C32165 +
                             C32056 * (C32117 + C31997 *
                                                    (C31942 * C31943 +
                                                     C31828 * bs[8] *
                                                         std::pow(C31822, 8)) *
                                                    C31831 * C32082)))) /
        C31607;
    const double C12500 =
        (4 * (2 * C32158 + C32056 * C32251) +
         C32056 * (3 * C32251 +
                   C32056 * (2 * C32165 +
                             C32056 * (C32117 + C31997 *
                                                    (C31942 * C31943 +
                                                     C31828 * bs[8] *
                                                         std::pow(C31822, 8)) *
                                                    C31831 * C32082)))) /
        C31607;
    const double C32150 = C31824 * C32149;
    const double C31979 = C31976 * ae;
    const double C129 = 5 * (3 * C31875 + C31824 * C31918) +
                        C31824 * (4 * C31918 + C31824 * C31976);
    const double C234 = 3 * C31875 + C31824 * C31918 + C31976 * C32023;
    const double C339 = 3 * C31875 + C31824 * C31918 + C31976 * C32082;
    const double C456 = C31997 * (4 * C31918 + C31824 * C31976);
    const double C548 = C32056 * (4 * C31918 + C31824 * C31976);
    const double C642 = C32056 * C31997 * C31976;
    const double C32858 = C32826 / C31601;
    const double C32878 = C32861 / C31608;
    const double C32879 = C32862 + C32830;
    const double C7765 = C32830 - C32660 / C31620;
    const double C32860 = C32827 / C31601;
    const double C32863 = C32833 / C31601;
    const double C32881 = C32866 / C31608;
    const double C32882 = C32867 + C32837;
    const double C13682 = C32837 - C32700 / C31620;
    const double C32865 = C32834 / C31601;
    const double C31663 = C31656 / C31601;
    const double C31661 = C31654 / C31601;
    const double C31662 = C31653 / C31620;
    const double C31660 = C31602 * C31653;
    const double C121 = (-C31653 / C31601) / (4 * C31607 * std::pow(C31608, 2));
    const double C778 = (-C31653 / C31601) / C31705;
    const double C2702 = (-C31653 / C31601) / (4 * C31617);
    const double C5354 = (-C31653 / C31601) / C31705;
    const double C6256 = -C31653 / C31601;
    const double C7769 = (-C31653 / C31601) / C31608;
    const double C15113 = (-C31653 / C31601) / (4 * C31617);
    const double C15951 = (-C31653 / C31601) / C31608;
    const double C17972 = (-C31653 / C31601) / C31705;
    const double C799 = C775 * C132;
    const double C798 = C775 * C131;
    const double C795 = C775 * C238;
    const double C792 = C775 * C241;
    const double C787 = C775 * C240;
    const double C784 = C775 * C239;
    const double C781 = C775 * C130;
    const double C957 = C775 * C926;
    const double C955 = C775 * C925;
    const double C1142 = C775 * C1114;
    const double C1139 = C775 * C1111;
    const double C1136 = C775 * C345;
    const double C1135 = C775 * C344;
    const double C1132 = C775 * C643;
    const double C1129 = C775 * C1110;
    const double C1306 = C775 * C924;
    const double C1482 = C775 * C1109;
    const double C1479 = C775 * C644;
    const double C1476 = C775 * C343;
    const double C1652 = C775 * C1633;
    const double C1788 = C775 * C346;
    const double C2054 = C775 * C2023;
    const double C2052 = C775 * C2022;
    const double C2235 = C775 * C1112;
    const double C2399 = C775 * C2021;
    const double C2581 = C775 * C2568;
    const double C797 = C777 * C132;
    const double C788 = C777 * C241;
    const double C785 = C777 * C238;
    const double C782 = C777 * C131;
    const double C952 = C777 * C924;
    const double C1143 = C777 * C1115;
    const double C1140 = C777 * C1112;
    const double C1137 = C777 * C346;
    const double C1134 = C777 * C343;
    const double C1131 = C777 * C644;
    const double C1128 = C777 * C1109;
    const double C2049 = C777 * C2021;
    const double C15970 = C15950 * C132;
    const double C15969 = C15950 * C131;
    const double C15967 = C15950 * C238;
    const double C15965 = C15950 * C241;
    const double C15963 = C15950 * C924;
    const double C15960 = C15950 * C925;
    const double C15958 = C15950 * C240;
    const double C15956 = C15950 * C239;
    const double C15954 = C15950 * C130;
    const double C16094 = C15950 * C6337;
    const double C16092 = C15950 * C926;
    const double C16236 = C15950 * C6439;
    const double C16234 = C15950 * C1114;
    const double C16232 = C15950 * C1111;
    const double C16230 = C15950 * C345;
    const double C16229 = C15950 * C344;
    const double C16227 = C15950 * C643;
    const double C16225 = C15950 * C1110;
    const double C16223 = C15950 * C1633;
    const double C16534 = C15950 * C1109;
    const double C16532 = C15950 * C644;
    const double C16530 = C15950 * C343;
    const double C16680 = C15950 * C6438;
    const double C16849 = C15950 * C346;
    const double C16847 = C15950 * C1112;
    const double C17193 = C15950 * C7133;
    const double C17191 = C15950 * C2023;
    const double C17189 = C15950 * C2022;
    const double C17183 = C15950 * C2568;
    const double C17422 = C15950 * C1115;
    const double C17638 = C15950 * C2021;
    const double C17851 = C15950 * C7132;
    const double C23047 = C15950 * C12218;
    const double C32892 = C32840 + C32884;
    const double C2691 = C32871 - (C32520 * C32503) / C31601;
    const double C15243 = C32872 * C247;
    const double C21266 = C32872 * C352;
    const double C104 = C32872 / C31608 - C32518 / C31708;
    const double C2832 = C2692 * C247;
    const double C3740 = C2692 * C352;
    const double C32885 = C32843 + C32871;
    const double C140 =
        (2 * (2 * ae * C31836 + C31824 * C31853) + C31859 + C31859 +
         C31824 * (C31853 + C31856 + C31856 +
                   C31824 * (2 * ae * C31849 +
                             C31824 *
                                 (C31842 * C31843 +
                                  C31828 * bs[5] * std::pow(C31830, 5)) *
                                 C31831))) /
        C31607;
    const double C800 = C777 * C133;
    const double C796 = C779 * C133;
    const double C2708 = C2703 * C133;
    const double C5372 = C5355 * C133;
    const double C7789 = C31640 * C133;
    const double C15119 = C15114 * C133;
    const double C15971 = C15952 * C133;
    const double C17990 = C31710 * C133;
    const double C802 = C775 * C237;
    const double C794 = C777 * C237;
    const double C786 = C779 * C237;
    const double C5362 = C5355 * C237;
    const double C6270 = C6257 * C237;
    const double C7784 = C31640 * C237;
    const double C15972 = C15950 * C237;
    const double C15966 = C15952 * C237;
    const double C17980 = C31710 * C237;
    const double C1133 = C779 * C342;
    const double C1477 = C777 * C342;
    const double C1789 = C775 * C342;
    const double C5664 = C5355 * C342;
    const double C6878 = C6257 * C342;
    const double C8349 = C31640 * C342;
    const double C16531 = C15952 * C342;
    const double C16850 = C15950 * C342;
    const double C18282 = C31710 * C342;
    const double C31889 = C31865 + C31887;
    const double C32015 = ae * C32014;
    const double C645 = (C32056 * C32014) / C31601;
    const double C32074 = ae * C32073;
    const double C805 = C775 * C242;
    const double C791 = C777 * C242;
    const double C789 = C779 * C242;
    const double C5365 = C5355 * C242;
    const double C6271 = C6257 * C242;
    const double C7782 = C31640 * C242;
    const double C15974 = C15950 * C242;
    const double C15964 = C15952 * C242;
    const double C17983 = C31710 * C242;
    const double C1138 = C779 * C347;
    const double C1792 = C775 * C347;
    const double C1787 = C777 * C347;
    const double C5669 = C5355 * C347;
    const double C6879 = C6257 * C347;
    const double C9425 = C31640 * C347;
    const double C16852 = C15950 * C347;
    const double C16848 = C15952 * C347;
    const double C18287 = C31710 * C347;
    const double C1647 = C32845 * C650;
    const double C3414 = C2692 * C650;
    const double C4831 = C769 * C650;
    const double C6163 = C32845 * C650;
    const double C9209 = C32517 * C650;
    const double C15825 = C32872 * C650;
    const double C17417 = C32517 * C650;
    const double C18781 = C17964 * C650;
    const double C19499 = C32520 * C650;
    const double C26947 = C32870 * C650;
    const double C947 = C32845 * C252;
    const double C1303 = C769 * C252;
    const double C2840 = C2692 * C252;
    const double C5505 = C32845 * C252;
    const double C5831 = C32870 * C252;
    const double C8193 = C32517 * C252;
    const double C15251 = C32872 * C252;
    const double C16375 = C32517 * C252;
    const double C18123 = C17964 * C252;
    const double C18449 = C32520 * C252;
    const double C2044 = C32845 * C357;
    const double C2396 = C769 * C357;
    const double C3746 = C2692 * C357;
    const double C10698 = C32845 * C357;
    const double C11044 = C32870 * C357;
    const double C13377 = C32517 * C357;
    const double C17637 = C32517 * C357;
    const double C19264 = C17964 * C357;
    const double C21272 = C32872 * C357;
    const double C25128 = C32520 * C357;
    const double C31949 = C31938 + C31929;
    const double C31930 = C31899 + C31928;
    const double C32008 = ae * C32002;
    const double C32159 = C32056 * C32002;
    const double C32213 = 2 * C32002;
    const double C1113 = (C32014 + C32002 * C32082) / C31601;
    const double C32033 = C31886 + C32030;
    const double C32067 = ae * C32061;
    const double C32259 = 2 * C32061;
    const double C32092 = C31886 + C32089;
    const double C1122 = (C32013 + C32000 * C32082 + C32203 + C32203 +
                          C31824 * (2 * ae * (C31999 + C32116 * C32082) +
                                    C31824 * (C32000 + C32117 * C32082))) /
                         C31607;
    const double C2582 = C777 * C2569;
    const double C7500 = C6257 * C2569;
    const double C8985 = C31640 * C2569;
    const double C17180 = C15952 * C2569;
    const double C17640 = C15950 * C2569;
    const double C32180 = ae * C32179;
    const double C927 = (3 * C32026 + C31997 * C32179) / C31601;
    const double C1634 = (C32056 * C32179) / C31601;
    const double C1117 =
        (C32056 * C32032 + C32195 + C32195 +
         C31824 * (2 * ae * C32056 * C32043 + C31824 * C32056 * C32044)) /
        C31607;
    const double C32234 = ae * C32233;
    const double C2024 = (3 * C32085 + C32056 * C32233) / C31601;
    const double C31984 = C31946 + C31981;
    const double C32046 = C31926 + C32041;
    const double C32105 = C31926 + C32100;
    const double C32127 = ae * C32120;
    const double C32167 = C32056 * C32120;
    const double C32249 = C32120 * C32082;
    const double C32146 = ae * C32139;
    const double C32190 = C31997 * C32189;
    const double C32215 = ae * C32189;
    const double C32228 = C32056 * C32189;
    const double C7316 = (C32179 + C32189 * C32082) / C31601;
    const double C32209 = ae * C32208;
    const double C7492 = (2 * C32194 + C32056 * C32208) / C31601;
    const double C32244 = C32056 * C32243;
    const double C32261 = ae * C32243;
    const double C32270 = C32268 + C32269;
    const double C31983 = C31824 * C31980;
    const double C1637 = (2 * ae * C32056 * (2 * C31999 + C31997 * C32043) +
                          C31824 * C32056 * C32216) /
                         C31607;
    const double C6339 = (4 * (2 * C32013 + C31997 * C32032) +
                          C31997 * (3 * C32032 + C31997 * C32216)) /
                         C31607;
    const double C6340 =
        (5 * (3 * C32032 + C31997 * C32216) +
         C31997 *
             (4 * C32216 +
              C31997 * (3 * C32044 +
                        C31997 * (2 * C32117 +
                                  C31997 * (C31966 + (C31942 * C31943 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31831 * C32023))))) /
        C31607;
    const double C6441 = (C32056 * (3 * C32032 + C31997 * C32216)) / C31607;
    const double C6442 =
        (2 * C32013 + C31997 * C32032 + C32216 * C32082) / C31607;
    const double C6443 =
        (3 * C32032 + C31997 * C32216 +
         (3 * C32044 +
          C31997 * (2 * C32117 +
                    C31997 * (C31966 + (C31942 * C31943 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31831 * C32023))) *
             C32082) /
        C31607;
    const double C6538 =
        (2 * ae *
             (4 * (2 * C31999 + C31997 * C32043) +
              C31997 * (3 * C32043 +
                        C31997 * (2 * C32116 +
                                  C31997 * (C31909 + C31959 * C32023)))) +
         C31824 *
             (4 * C32216 +
              C31997 * (3 * C32044 +
                        C31997 * (2 * C32117 +
                                  C31997 * (C31966 + (C31942 * C31943 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31831 * C32023))))) /
        C31607;
    const double C6738 =
        (C32056 *
         (4 * C32216 +
          C31997 * (3 * C32044 +
                    C31997 * (2 * C32117 +
                              C31997 * (C31966 +
                                        (C31942 * C31943 +
                                         C31828 * bs[8] * std::pow(C31822, 8)) *
                                            C31831 * C32023))))) /
        C31607;
    const double C7317 =
        (2 * ae *
             (2 * C31999 + C31997 * C32043 +
              (2 * C32116 + C31997 * (C31909 + C31959 * C32023)) * C32082) +
         C31824 * (C32216 +
                   (2 * C32117 +
                    C31997 * (C31966 + (C31942 * C31943 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31831 * C32023)) *
                       C32082)) /
        C31607;
    const double C7655 =
        (2 * C32056 * C32216 +
         C32056 * (C32216 +
                   (2 * C32117 +
                    C31997 * (C31966 + (C31942 * C31943 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31831 * C32023)) *
                       C32082)) /
        C31607;
    const double C12220 = (4 * (2 * C32072 + C32056 * C32091) +
                           C32056 * (3 * C32091 + C32056 * C32262)) /
                          C31607;
    const double C12221 =
        (5 * (3 * C32091 + C32056 * C32262) +
         C32056 *
             (4 * C32262 +
              C32056 * (3 * C32103 +
                        C32056 * (2 * C32136 +
                                  C32056 * (C31966 + (C31942 * C31943 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31831 * C32082))))) /
        C31607;
    const double C12404 =
        (2 * ae *
             (4 * (2 * C32058 + C32056 * C32102) +
              C32056 * (3 * C32102 +
                        C32056 * (2 * C32135 +
                                  C32056 * (C31909 + C31959 * C32082)))) +
         C31824 *
             (4 * C32262 +
              C32056 * (3 * C32103 +
                        C32056 * (2 * C32136 +
                                  C32056 * (C31966 + (C31942 * C31943 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31831 * C32082))))) /
        C31607;
    const double C32132 = C32122 + C32131;
    const double C12953 = C32517 * C2572;
    const double C14735 = C32507 * C2572;
    const double C17181 = C32517 * C2572;
    const double C12503 = C32507 * C7136;
    const double C32151 = C32141 + C32150;
    const double C32893 = C32858 + C32888;
    const double C7764 = C32878 - (C32662 * C32651) / C31601;
    const double C6254 = C32879 / C31608 - C32660 / C31708;
    const double C32889 = C32860 + C32878;
    const double C32894 = C32863 + C32890;
    const double C13681 = C32881 - (C32702 * C32691) / C31601;
    const double C12087 = C32882 / C31608 - C32700 / C31708;
    const double C32891 = C32865 + C32881;
    const double C31667 = C31661 - C31633;
    const double C31668 = C31660 / C31620;
    const double C31666 = C31660 / C31601;
    const double C948 = C778 * C917;
    const double C946 = C778 * C232;
    const double C940 = C778 * C227;
    const double C1304 = C778 * C233;
    const double C1298 = C778 * C226;
    const double C1646 = C778 * C640;
    const double C1640 = C778 * C1099;
    const double C2045 = C778 * C2014;
    const double C2043 = C778 * C337;
    const double C2037 = C778 * C332;
    const double C2397 = C778 * C338;
    const double C2391 = C778 * C331;
    const double C2579 = C778 * C1104;
    const double C4832 = C778 * C641;
    const double C2835 = C2702 * C233;
    const double C2833 = C2702 * C226;
    const double C3125 = C2702 * C225;
    const double C3411 = C2702 * C641;
    const double C3743 = C2702 * C338;
    const double C3741 = C2702 * C331;
    const double C4045 = C2702 * C330;
    const double C5506 = C5354 * C917;
    const double C5504 = C5354 * C232;
    const double C5498 = C5354 * C227;
    const double C5832 = C5354 * C233;
    const double C5826 = C5354 * C226;
    const double C6162 = C5354 * C640;
    const double C6156 = C5354 * C1099;
    const double C10699 = C5354 * C2014;
    const double C10697 = C5354 * C337;
    const double C10691 = C5354 * C332;
    const double C11045 = C5354 * C338;
    const double C11039 = C5354 * C331;
    const double C11218 = C5354 * C1104;
    const double C26948 = C5354 * C641;
    const double C6350 = C6256 * C6335;
    const double C6348 = C6256 * C920;
    const double C6346 = C6256 * C919;
    const double C6344 = C6256 * C230;
    const double C6342 = C6256 * C229;
    const double C6546 = C6256 * C921;
    const double C6544 = C6256 * C918;
    const double C6542 = C6256 * C231;
    const double C6540 = C6256 * C228;
    const double C6746 = C6256 * C638;
    const double C6744 = C6256 * C1101;
    const double C6742 = C6256 * C1630;
    const double C6740 = C6256 * C6435;
    const double C7002 = C6256 * C6436;
    const double C7000 = C6256 * C1105;
    const double C6996 = C6256 * C1102;
    const double C7149 = C6256 * C2016;
    const double C7146 = C6256 * C2565;
    const double C7143 = C6256 * C7129;
    const double C7141 = C6256 * C335;
    const double C7139 = C6256 * C334;
    const double C7327 = C6256 * C1106;
    const double C7325 = C6256 * C1100;
    const double C7322 = C6256 * C1103;
    const double C7320 = C6256 * C639;
    const double C7497 = C6256 * C336;
    const double C7495 = C6256 * C333;
    const double C10073 = C6256 * C1631;
    const double C12225 = C6256 * C12216;
    const double C12223 = C6256 * C2017;
    const double C12408 = C6256 * C2018;
    const double C12406 = C6256 * C2015;
    const double C12502 = C6256 * C7130;
    const double C14734 = C6256 * C2566;
    const double C7906 = C7769 * C921;
    const double C7904 = C7769 * C918;
    const double C7900 = C7769 * C231;
    const double C7896 = C7769 * C228;
    const double C8196 = C7769 * C917;
    const double C8192 = C7769 * C232;
    const double C8188 = C7769 * C227;
    const double C8494 = C7769 * C639;
    const double C8490 = C7769 * C1100;
    const double C8486 = C7769 * C1631;
    const double C8978 = C7769 * C336;
    const double C8974 = C7769 * C1103;
    const double C8970 = C7769 * C1106;
    const double C8968 = C7769 * C333;
    const double C9212 = C7769 * C1099;
    const double C9208 = C7769 * C640;
    const double C9422 = C7769 * C332;
    const double C12956 = C7769 * C2015;
    const double C12952 = C7769 * C2566;
    const double C13172 = C7769 * C1104;
    const double C13376 = C7769 * C337;
    const double C13884 = C7769 * C2018;
    const double C14158 = C7769 * C2014;
    const double C15246 = C15113 * C233;
    const double C15244 = C15113 * C226;
    const double C15536 = C15113 * C225;
    const double C15822 = C15113 * C641;
    const double C21269 = C15113 * C338;
    const double C21267 = C15113 * C331;
    const double C21571 = C15113 * C330;
    const double C16088 = C15951 * C921;
    const double C16086 = C15951 * C918;
    const double C16082 = C15951 * C231;
    const double C16078 = C15951 * C228;
    const double C16378 = C15951 * C917;
    const double C16374 = C15951 * C232;
    const double C16370 = C15951 * C227;
    const double C16676 = C15951 * C639;
    const double C16672 = C15951 * C1100;
    const double C16668 = C15951 * C1631;
    const double C17008 = C15951 * C1106;
    const double C17006 = C15951 * C1103;
    const double C17185 = C15951 * C2015;
    const double C17179 = C15951 * C2566;
    const double C17176 = C15951 * C336;
    const double C17172 = C15951 * C333;
    const double C17420 = C15951 * C1104;
    const double C17416 = C15951 * C640;
    const double C17636 = C15951 * C337;
    const double C17632 = C15951 * C332;
    const double C20564 = C15951 * C1099;
    const double C23043 = C15951 * C2018;
    const double C23317 = C15951 * C2014;
    const double C18124 = C17972 * C917;
    const double C18122 = C17972 * C232;
    const double C18116 = C17972 * C227;
    const double C18450 = C17972 * C233;
    const double C18444 = C17972 * C226;
    const double C18780 = C17972 * C640;
    const double C18774 = C17972 * C1099;
    const double C19263 = C17972 * C337;
    const double C19257 = C17972 * C1104;
    const double C19255 = C17972 * C332;
    const double C19500 = C17972 * C641;
    const double C19709 = C17972 * C331;
    const double C24814 = C17972 * C2014;
    const double C25129 = C17972 * C338;
    const double C15257 = C32892 * C250;
    const double C15239 = C32892 * C249;
    const double C15531 = C32892 * C248;
    const double C15829 = C32892 * C648;
    const double C21276 = C32892 * C355;
    const double C21262 = C32892 * C354;
    const double C21566 = C32892 * C353;
    const double C101 =
        (C32883 + 2 * C32512) / C31608 - (C32892 * C32503) / C31601;
    const double C2843 = C2691 * C251;
    const double C2830 = C2691 * C248;
    const double C3122 = C2691 * C247;
    const double C3416 = C2691 * C649;
    const double C3748 = C2691 * C356;
    const double C3738 = C2691 * C353;
    const double C4042 = C2691 * C352;
    const double C15254 = C32885 * C251;
    const double C15241 = C32885 * C248;
    const double C15533 = C32885 * C247;
    const double C15827 = C32885 * C649;
    const double C21274 = C32885 * C356;
    const double C21264 = C32885 * C353;
    const double C21568 = C32885 * C352;
    const double C102 =
        (C32870 + 2 * C32520 + C32892) / C31608 - (C32885 * C32503) / C31601;
    const double C103 = (C32845 + C32517 / C31601 + C32885) / C31608 -
                        (C32872 * C32503) / C31601;
    const double C31890 = C31889 + C31878;
    const double C246 =
        (2 * (2 * ae * C31997 * C31849 + C31824 * C32013) + C32015 + C32015 +
         C31824 * (C32013 + C32004 + C32004 + C31824 * C32011)) /
        C31607;
    const double C1130 = C779 * C645;
    const double C1480 = C777 * C645;
    const double C4339 = C775 * C645;
    const double C5661 = C5355 * C645;
    const double C6880 = C6257 * C645;
    const double C8351 = C31640 * C645;
    const double C16533 = C15952 * C645;
    const double C16854 = C15950 * C645;
    const double C18279 = C31710 * C645;
    const double C351 =
        (2 * (2 * ae * C32056 * C31849 + C31824 * C32072) + C32074 + C32074 +
         C31824 * (C32072 + C32063 + C32063 + C31824 * C32070)) /
        C31607;
    const double C31957 = C31949 + C31929;
    const double C31931 = C31930 + C31914;
    const double C32161 = ae * C32159;
    const double C1141 = C779 * C1113;
    const double C2236 = C777 * C1113;
    const double C5672 = C5355 * C1113;
    const double C6881 = C6257 * C1113;
    const double C9427 = C31640 * C1113;
    const double C16856 = C15950 * C1113;
    const double C16846 = C15952 * C1113;
    const double C18290 = C31710 * C1113;
    const double C32035 = ae * C32033;
    const double C923 = (2 * C32014 + C31997 * C32033) / C31601;
    const double C1108 = (C32056 * C32033) / C31601;
    const double C32094 = ae * C32092;
    const double C2020 = (2 * C32073 + C32056 * C32092) / C31601;
    const double C2580 = C32845 * C1122;
    const double C11219 = C32845 * C1122;
    const double C13173 = C32517 * C1122;
    const double C17421 = C32517 * C1122;
    const double C19258 = C17964 * C1122;
    const double C929 = (2 * C32013 + C31997 * C32032 + C32180 + C32180 +
                         C31824 * (2 * ae * (2 * C31999 + C31997 * C32043) +
                                   C31824 * (2 * C32000 + C31997 * C32044))) /
                        C31607;
    const double C958 = C777 * C927;
    const double C6264 = C6257 * C927;
    const double C7907 = C31640 * C927;
    const double C16089 = C15952 * C927;
    const double C16380 = C15950 * C927;
    const double C1653 = C777 * C1634;
    const double C6653 = C6257 * C1634;
    const double C8040 = C31640 * C1634;
    const double C16222 = C15952 * C1634;
    const double C16536 = C15950 * C1634;
    const double C1641 = C32845 * C1117;
    const double C6157 = C32845 * C1117;
    const double C9213 = C32517 * C1117;
    const double C18775 = C17964 * C1117;
    const double C20565 = C32517 * C1117;
    const double C2026 = (2 * C32072 + C32056 * C32091 + C32234 + C32234 +
                          C31824 * (2 * ae * (2 * C32058 + C32056 * C32102) +
                                    C31824 * (2 * C32059 + C32056 * C32103))) /
                         C31607;
    const double C2055 = C777 * C2024;
    const double C12090 = C6257 * C2024;
    const double C12961 = C31640 * C2024;
    const double C17192 = C15952 * C2024;
    const double C23319 = C15950 * C2024;
    const double C31986 = C31984 + C31964;
    const double C32051 = ae * C32046;
    const double C32214 = C31997 * C32046;
    const double C32221 = C32056 * C32046;
    const double C1116 = (C32033 + C32046 * C32082) / C31601;
    const double C32110 = ae * C32105;
    const double C32260 = C32056 * C32105;
    const double C32172 = ae * C32167;
    const double C32252 = C32002 + C32249;
    const double C32191 = C32186 + C32190;
    const double C32229 = ae * C32228;
    const double C7329 = C6257 * C7316;
    const double C8055 = C31640 * C7316;
    const double C16237 = C15952 * C7316;
    const double C1125 =
        (C32032 + C32044 * C32082 + C32209 + C32209 +
         C31824 * (2 * ae * (C32043 + (C31909 + C31959 * C32023) * C32082) +
                   C31824 * (C32044 +
                             (C31966 + (C31942 * C31943 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31831 * C32023) *
                                 C32082))) /
        C31607;
    const double C7501 = C6257 * C7492;
    const double C8987 = C31640 * C7492;
    const double C17852 = C15952 * C7492;
    const double C32245 = C32240 + C32244;
    const double C32271 = ae * C32270;
    const double C12317 = (3 * C32202 + C32056 * C32270) / C31601;
    const double C8487 = C32517 * C1637;
    const double C10074 = C32507 * C1637;
    const double C16669 = C32517 * C1637;
    const double C6352 = C32507 * C6339;
    const double C6741 = C32507 * C6441;
    const double C7003 = C32507 * C6442;
    const double C12227 = C32507 * C12220;
    const double C6251 =
        (C32886 + 2 * C32655) / C31608 - (C32893 * C32651) / C31601;
    const double C6252 =
        (C32874 + 2 * C32662 + C32893) / C31608 - (C32889 * C32651) / C31601;
    const double C6253 = (C32854 + C32659 / C31601 + C32889) / C31608 -
                         (C32879 * C32651) / C31601;
    const double C12084 =
        (C32887 + 2 * C32695) / C31608 - (C32894 * C32691) / C31601;
    const double C12085 =
        (C32876 + 2 * C32702 + C32894) / C31608 - (C32891 * C32691) / C31601;
    const double C12086 = (C32857 + C32699 / C31601 + C32891) / C31608 -
                          (C32882 * C32691) / C31601;
    const double C7792 = C31667 * C242;
    const double C7790 = C31667 * C237;
    const double C7788 = C31667 * C132;
    const double C7787 = C31667 * C131;
    const double C7785 = C31667 * C238;
    const double C7783 = C31667 * C241;
    const double C7781 = C31667 * C924;
    const double C7778 = C31667 * C925;
    const double C7776 = C31667 * C240;
    const double C7774 = C31667 * C239;
    const double C7772 = C31667 * C130;
    const double C7912 = C31667 * C6337;
    const double C7910 = C31667 * C926;
    const double C8054 = C31667 * C6439;
    const double C8052 = C31667 * C1114;
    const double C8050 = C31667 * C1111;
    const double C8048 = C31667 * C345;
    const double C8047 = C31667 * C344;
    const double C8045 = C31667 * C643;
    const double C8043 = C31667 * C1110;
    const double C8041 = C31667 * C1633;
    const double C8198 = C31667 * C927;
    const double C8354 = C31667 * C1634;
    const double C8352 = C31667 * C1109;
    const double C8350 = C31667 * C644;
    const double C8348 = C31667 * C343;
    const double C8498 = C31667 * C6438;
    const double C8666 = C31667 * C645;
    const double C8664 = C31667 * C342;
    const double C8986 = C31667 * C7132;
    const double C8984 = C31667 * C2568;
    const double C8982 = C31667 * C2022;
    const double C9428 = C31667 * C1115;
    const double C9426 = C31667 * C1112;
    const double C9424 = C31667 * C346;
    const double C12656 = C31667 * C1113;
    const double C12654 = C31667 * C347;
    const double C12962 = C31667 * C7133;
    const double C12960 = C31667 * C2023;
    const double C13380 = C31667 * C2569;
    const double C13378 = C31667 * C2021;
    const double C13888 = C31667 * C12218;
    const double C14160 = C31667 * C2024;
    const double C31675 = C31667 / C31608;
    const double C31673 = C31602 * C31667;
    const double C31672 = 2 * C31667;
    const double C31674 = C31644 - C31668;
    const double C31671 = C31638 - C31666;
    const double C965 = C946 + C789;
    const double C962 = C940 + C786;
    const double C2062 = C2043 + C1138;
    const double C2059 = C2037 + C1133;
    const double C5523 = C5504 + C5365;
    const double C5520 = C5498 + C5362;
    const double C10716 = C10697 + C5669;
    const double C10713 = C10691 + C5664;
    const double C6358 = C6350 + C6351;
    const double C6357 = C6348 + C6263;
    const double C6356 = C6346 + C6262;
    const double C6355 = C6344 + C6261;
    const double C6354 = C6342 + C6260;
    const double C6551 = C6544 + C6265;
    const double C6550 = C6542 + C6266;
    const double C6549 = C6540 + C6267;
    const double C6752 = C6746 + C6448;
    const double C6751 = C6744 + C6447;
    const double C6750 = C6742 + C6446;
    const double C6749 = C6740 + C6445;
    const double C7009 = C7002 + C6453;
    const double C7008 = C7000 + C6452;
    const double C7006 = C6996 + C6451;
    const double C7159 = C7149 + C7150;
    const double C7158 = C7146 + C7147;
    const double C7157 = C7143 + C7144;
    const double C7156 = C7141 + C6450;
    const double C7155 = C7139 + C6449;
    const double C7333 = C7327 + C6875;
    const double C7332 = C7325 + C6652;
    const double C7331 = C7322 + C6876;
    const double C7330 = C7320 + C6651;
    const double C7503 = C7497 + C6877;
    const double C7502 = C7495 + C6650;
    const double C12230 = C12225 + C12226;
    const double C12229 = C12223 + C7152;
    const double C12411 = C12406 + C7499;
    const double C12505 = C12502 + C7153;
    const double C14736 = C14734 + C7500;
    const double C7919 = C7904 + C7779;
    const double C7917 = C7900 + C7777;
    const double C7915 = C7896 + C7775;
    const double C8203 = C8192 + C7782;
    const double C8201 = C8188 + C7784;
    const double C8504 = C8494 + C8044;
    const double C8502 = C8490 + C8042;
    const double C8994 = C8978 + C8049;
    const double C8992 = C8974 + C8051;
    const double C8990 = C8970 + C8053;
    const double C8989 = C8968 + C8046;
    const double C9431 = C9422 + C8349;
    const double C12966 = C12956 + C8983;
    const double C12964 = C12952 + C8985;
    const double C13383 = C13376 + C9425;
    const double C16101 = C16086 + C15961;
    const double C16099 = C16082 + C15959;
    const double C16097 = C16078 + C15957;
    const double C16385 = C16374 + C15964;
    const double C16383 = C16370 + C15966;
    const double C16686 = C16676 + C16226;
    const double C16684 = C16672 + C16224;
    const double C17014 = C17008 + C16235;
    const double C17013 = C17006 + C16233;
    const double C17201 = C17185 + C17186;
    const double C17199 = C17179 + C17180;
    const double C17198 = C17176 + C16231;
    const double C17196 = C17172 + C16228;
    const double C17645 = C17636 + C16848;
    const double C17643 = C17632 + C16531;
    const double C18141 = C18122 + C17983;
    const double C18138 = C18116 + C17980;
    const double C19281 = C19263 + C18287;
    const double C19277 = C19255 + C18282;
    const double C31891 = ae * C31890;
    const double C134 =
        (3 * C31858 + C31824 * C31890 + (2 * C31847 + C31824 * C31875) * ae) /
        C31601;
    const double C236 = (C31997 * C31890) / C31601;
    const double C341 = (C32056 * C31890) / C31601;
    const double C1299 = C32845 * C246;
    const double C2834 = C32822 * C246;
    const double C3124 = C2692 * C246;
    const double C5827 = C32845 * C246;
    const double C15245 = C32822 * C246;
    const double C15535 = C32872 * C246;
    const double C18445 = C17964 * C246;
    const double C1658 = C1646 + C1130;
    const double C6174 = C6162 + C5661;
    const double C9215 = C9208 + C8351;
    const double C17425 = C17416 + C16533;
    const double C18792 = C18780 + C18279;
    const double C2392 = C32845 * C351;
    const double C3742 = C32822 * C351;
    const double C4044 = C2692 * C351;
    const double C11040 = C32845 * C351;
    const double C19710 = C17964 * C351;
    const double C21268 = C32822 * C351;
    const double C21570 = C32872 * C351;
    const double C31985 = C31957 + C31983;
    const double C31933 = ae * C31931;
    const double C31932 = C31824 * C31931;
    const double C31944 = 4 * C31931;
    const double C32001 = C31997 * C31931;
    const double C32060 = C32056 * C31931;
    const double C243 = (C31890 + C31931 * C32023) / C31601;
    const double C348 = (C31890 + C31931 * C32082) / C31601;
    const double C651 =
        (2 * (2 * ae * C32056 * C31999 + C31824 * C32158) + C32161 + C32161 +
         C31824 *
             (C32158 + C32162 + C32162 +
              C31824 * (2 * ae * C32056 * C32116 + C31824 * C32056 * C32117))) /
        C31607;
    const double C2586 = C2579 + C1141;
    const double C11225 = C11218 + C5672;
    const double C13175 = C13172 + C9427;
    const double C17427 = C17420 + C16846;
    const double C19278 = C19257 + C18290;
    const double C253 =
        (2 * (2 * ae * (C31849 + C31873 * C32023) + C31824 * C32032) + C32035 +
         C32035 +
         C31824 * (C32032 + C32036 + C32036 +
                   C31824 * (2 * ae * (C31873 + C31909 * C32023) +
                             C31824 * (C31916 + C31966 * C32023)))) /
        C31607;
    const double C949 = C779 * C923;
    const double C1307 = C777 * C923;
    const double C5507 = C5355 * C923;
    const double C6272 = C6257 * C923;
    const double C7794 = C31667 * C923;
    const double C7780 = C31640 * C923;
    const double C15976 = C15950 * C923;
    const double C15962 = C15952 * C923;
    const double C18125 = C31710 * C923;
    const double C1127 = C779 * C1108;
    const double C1483 = C777 * C1108;
    const double C5658 = C5355 * C1108;
    const double C6882 = C6257 * C1108;
    const double C8353 = C31640 * C1108;
    const double C8668 = C31667 * C1108;
    const double C16535 = C15952 * C1108;
    const double C18276 = C31710 * C1108;
    const double C20070 = C15950 * C1108;
    const double C358 =
        (2 * (2 * ae * (C31849 + C31873 * C32082) + C31824 * C32091) + C32094 +
         C32094 +
         C31824 * (C32091 + C32095 + C32095 +
                   C31824 * (2 * ae * (C31873 + C31909 * C32082) +
                             C31824 * (C31916 + C31966 * C32082)))) /
        C31607;
    const double C2046 = C779 * C2020;
    const double C2400 = C777 * C2020;
    const double C10700 = C5355 * C2020;
    const double C12091 = C6257 * C2020;
    const double C13379 = C31640 * C2020;
    const double C13685 = C31667 * C2020;
    const double C17639 = C15952 * C2020;
    const double C19271 = C31710 * C2020;
    const double C22844 = C15950 * C2020;
    const double C950 = C32845 * C929;
    const double C5508 = C32845 * C929;
    const double C8197 = C32517 * C929;
    const double C16379 = C32517 * C929;
    const double C18126 = C17964 * C929;
    const double C6552 = C6546 + C6264;
    const double C7920 = C7906 + C7907;
    const double C16102 = C16088 + C16089;
    const double C10075 = C10073 + C6653;
    const double C8500 = C8486 + C8040;
    const double C16682 = C16668 + C16222;
    const double C2047 = C32845 * C2026;
    const double C10701 = C32845 * C2026;
    const double C14159 = C32517 * C2026;
    const double C23318 = C32517 * C2026;
    const double C24815 = C17964 * C2026;
    const double C12412 = C12408 + C12090;
    const double C13890 = C13884 + C12961;
    const double C23049 = C23043 + C17192;
    const double C31988 = ae * C31986;
    const double C31987 = C31824 * C31986;
    const double C32040 = C31986 * C32023;
    const double C32099 = C31986 * C32082;
    const double C32119 = C31997 * C31986;
    const double C32138 = C32056 * C31986;
    const double C32217 = C32213 + C32214;
    const double C32223 = ae * C32221;
    const double C1144 = C779 * C1116;
    const double C5675 = C5355 * C1116;
    const double C6883 = C6257 * C1116;
    const double C9429 = C31640 * C1116;
    const double C17423 = C15952 * C1116;
    const double C18293 = C31710 * C1116;
    const double C32263 = C32259 + C32260;
    const double C32254 = ae * C32252;
    const double C2570 = (2 * C32159 + C32056 * C32252) / C31601;
    const double C32192 = ae * C32191;
    const double C6537 = (4 * C32179 + C31997 * C32191) / C31601;
    const double C6647 = (C32056 * C32191) / C31601;
    const double C1638 =
        (C32056 * C32216 + C32229 + C32229 +
         C31824 *
             (2 * ae * C32056 *
                  (2 * C32116 + C31997 * (C31909 + C31959 * C32023)) +
              C31824 * C32056 *
                  (2 * C32117 +
                   C31997 * (C31966 + (C31942 * C31943 +
                                       C31828 * bs[8] * std::pow(C31822, 8)) *
                                          C31831 * C32023)))) /
        C31607;
    const double C32246 = ae * C32245;
    const double C12403 = (4 * C32233 + C32056 * C32245) / C31601;
    const double C2573 =
        (2 * C32158 + C32056 * C32251 + C32271 + C32271 +
         C31824 *
             (2 * ae *
                  (2 * C32164 + C32056 * (C32116 + C31997 * C31959 * C32082)) +
              C31824 * (2 * C32165 +
                        C32056 * (C32117 +
                                  C31997 *
                                      (C31942 * C31943 +
                                       C31828 * bs[8] * std::pow(C31822, 8)) *
                                      C31831 * C32082)))) /
        C31607;
    const double C12320 = C6257 * C12317;
    const double C12963 = C31640 * C12317;
    const double C17194 = C15952 * C12317;
    const double C31681 = C31675 - C31663;
    const double C5353 = C31675 + (C31649 * ae) / C31601;
    const double C31679 = C31673 + C32804;
    const double C31680 = C31674 * be;
    const double C31678 = C31671 * ae;
    const double C774 = (-(be * C31612) / C31607) / C31608 -
                        ((2 * ((-C31611) / C31608 - (C31648 * be) / C31601) -
                          (C31602 * C31671 * be) / C31601) *
                         be) /
                            C31601 -
                        C31662;
    const double C776 =
        (-(C31671 * be) / C31601) / C31608 -
        ((2 * ((-C31632 / C31601) / C31608 - (0 * be) / C31601) - C31668) *
         be) /
            C31601;
    const double C15949 = -(C31671 * be) / C31601;
    const double C974 = C965 + C789;
    const double C971 = C962 + C786;
    const double C2071 = C2062 + C1138;
    const double C2068 = C2059 + C1133;
    const double C5532 = C5523 + C5365;
    const double C5529 = C5520 + C5362;
    const double C10725 = C10716 + C5669;
    const double C10722 = C10713 + C5664;
    const double C6363 = C6358 + C6351;
    const double C6362 = C6357 + C6263;
    const double C6361 = C6356 + C6262;
    const double C6360 = C6355 + C6261;
    const double C6359 = C6354 + C6260;
    const double C6555 = C6551 + C6265;
    const double C6554 = C6550 + C6266;
    const double C6553 = C6549 + C6267;
    const double C6756 = C6752 + C6448;
    const double C6755 = C6751 + C6447;
    const double C6754 = C6750 + C6446;
    const double C6753 = C6749 + C6445;
    const double C7012 = C7009 + C6453;
    const double C7011 = C7008 + C6452;
    const double C7010 = C7006 + C6451;
    const double C7164 = C7159 + C7150;
    const double C7163 = C7158 + C7147;
    const double C7162 = C7157 + C7144;
    const double C7161 = C7156 + C6450;
    const double C7160 = C7155 + C6449;
    const double C7337 = C7333 + C6875;
    const double C7336 = C7332 + C6652;
    const double C7335 = C7331 + C6876;
    const double C7334 = C7330 + C6651;
    const double C7505 = C7503 + C6877;
    const double C7504 = C7502 + C6650;
    const double C12232 = C12230 + C12226;
    const double C12231 = C12229 + C7152;
    const double C12413 = C12411 + C7499;
    const double C12506 = C12505 + C7153;
    const double C14737 = C14736 + C7500;
    const double C7927 = C7919 + C7779;
    const double C7925 = C7917 + C7777;
    const double C7923 = C7915 + C7775;
    const double C8209 = C8203 + C7782;
    const double C8207 = C8201 + C7784;
    const double C8510 = C8504 + C8044;
    const double C8508 = C8502 + C8042;
    const double C9002 = C8994 + C8049;
    const double C9000 = C8992 + C8051;
    const double C8998 = C8990 + C8053;
    const double C8997 = C8989 + C8046;
    const double C9433 = C9431 + C8349;
    const double C12970 = C12966 + C8983;
    const double C12968 = C12964 + C8985;
    const double C13385 = C13383 + C9425;
    const double C16109 = C16101 + C15961;
    const double C16107 = C16099 + C15959;
    const double C16105 = C16097 + C15957;
    const double C16391 = C16385 + C15964;
    const double C16389 = C16383 + C15966;
    const double C16692 = C16686 + C16226;
    const double C16690 = C16684 + C16224;
    const double C17018 = C17014 + C16235;
    const double C17017 = C17013 + C16233;
    const double C17209 = C17201 + C17186;
    const double C17207 = C17199 + C17180;
    const double C17206 = C17198 + C16231;
    const double C17204 = C17196 + C16228;
    const double C17649 = C17645 + C16848;
    const double C17647 = C17643 + C16531;
    const double C18150 = C18141 + C17983;
    const double C18147 = C18138 + C17980;
    const double C19290 = C19281 + C18287;
    const double C19286 = C19277 + C18282;
    const double C141 =
        (3 * (C31853 + C31856 + C31856 + C31824 * C31884) + C31891 + C31891 +
         C31824 *
             (2 * C31884 + C31888 + C31888 +
              C31824 * (C31879 + C31883 + C31883 +
                        C31824 * (2 * ae * C31873 +
                                  C31824 *
                                      (C31863 * C31864 +
                                       C31828 * bs[6] * std::pow(C31822, 6)) *
                                      C31831)))) /
        C31607;
    const double C149 = C122 * C134;
    const double C801 = C779 * C134;
    const double C2717 = C2703 * C134;
    const double C5377 = C5355 * C134;
    const double C15128 = C15114 * C134;
    const double C17995 = C31710 * C134;
    const double C803 = C777 * C236;
    const double C793 = C779 * C236;
    const double C2712 = C2703 * C236;
    const double C5369 = C5355 * C236;
    const double C7791 = C31640 * C236;
    const double C15123 = C15114 * C236;
    const double C15973 = C15952 * C236;
    const double C17987 = C31710 * C236;
    const double C1478 = C779 * C341;
    const double C1790 = C777 * C341;
    const double C2977 = C2703 * C341;
    const double C6003 = C5355 * C341;
    const double C8665 = C31640 * C341;
    const double C15388 = C15114 * C341;
    const double C16851 = C15952 * C341;
    const double C18621 = C31710 * C341;
    const double C1664 = C1658 + C1130;
    const double C6180 = C6174 + C5661;
    const double C9219 = C9215 + C8351;
    const double C17429 = C17425 + C16533;
    const double C18798 = C18792 + C18279;
    const double C31934 = C31898 + C31932;
    const double C32007 = ae * C32001;
    const double C646 = (C32056 * C32001) / C31601;
    const double C32066 = ae * C32060;
    const double C806 = C777 * C243;
    const double C790 = C779 * C243;
    const double C2836 = C2703 * C243;
    const double C5366 = C5355 * C243;
    const double C7793 = C31640 * C243;
    const double C15247 = C15114 * C243;
    const double C15975 = C15952 * C243;
    const double C17984 = C31710 * C243;
    const double C1793 = C777 * C348;
    const double C1786 = C779 * C348;
    const double C2984 = C2703 * C348;
    const double C10458 = C5355 * C348;
    const double C12655 = C31640 * C348;
    const double C15395 = C15114 * C348;
    const double C16853 = C15952 * C348;
    const double C19713 = C31710 * C348;
    const double C3412 = C32822 * C651;
    const double C4833 = C32845 * C651;
    const double C15823 = C32822 * C651;
    const double C19501 = C17964 * C651;
    const double C26949 = C32845 * C651;
    const double C2589 = C2586 + C1141;
    const double C11228 = C11225 + C5672;
    const double C13177 = C13175 + C9427;
    const double C17431 = C17427 + C16846;
    const double C19287 = C19278 + C18290;
    const double C1305 = C32845 * C253;
    const double C2837 = C32822 * C253;
    const double C5833 = C32845 * C253;
    const double C15248 = C32822 * C253;
    const double C18451 = C17964 * C253;
    const double C966 = C948 + C949;
    const double C5524 = C5506 + C5507;
    const double C8205 = C8196 + C7780;
    const double C16387 = C16378 + C15962;
    const double C18142 = C18124 + C18125;
    const double C1655 = C1640 + C1127;
    const double C6171 = C6156 + C5658;
    const double C9217 = C9212 + C8353;
    const double C20567 = C20564 + C16535;
    const double C18789 = C18774 + C18276;
    const double C2398 = C32845 * C358;
    const double C3744 = C32822 * C358;
    const double C11046 = C32845 * C358;
    const double C21270 = C32822 * C358;
    const double C25130 = C17964 * C358;
    const double C2063 = C2045 + C2046;
    const double C10717 = C10699 + C10700;
    const double C14163 = C14158 + C13379;
    const double C23322 = C23317 + C17639;
    const double C24824 = C24814 + C19271;
    const double C6556 = C6552 + C6264;
    const double C7928 = C7920 + C7907;
    const double C16110 = C16102 + C16089;
    const double C10076 = C10075 + C6653;
    const double C8506 = C8500 + C8040;
    const double C16688 = C16682 + C16222;
    const double C12414 = C12412 + C12090;
    const double C13892 = C13890 + C12961;
    const double C23051 = C23049 + C17192;
    const double C31989 = C31945 + C31987;
    const double C32045 = C31931 + C32040;
    const double C32104 = C31931 + C32099;
    const double C32126 = ae * C32119;
    const double C32166 = C32056 * C32119;
    const double C2232 = (C32001 + C32119 * C32082) / C31601;
    const double C32145 = ae * C32138;
    const double C32218 = ae * C32217;
    const double C928 = (3 * C32033 + C31997 * C32217) / C31601;
    const double C1635 = (C32056 * C32217) / C31601;
    const double C1474 =
        (2 * (2 * ae * C32056 * C32043 + C31824 * C32220) + C32223 + C32223 +
         C31824 *
             (C32220 + C32224 + C32224 +
              C31824 * (2 * ae * C32056 * (C31909 + C31959 * C32023) +
                        C31824 * C32056 *
                            (C31966 + (C31942 * C31943 +
                                       C31828 * bs[8] * std::pow(C31822, 8)) *
                                          C31831 * C32023)))) /
        C31607;
    const double C32264 = ae * C32263;
    const double C2025 = (3 * C32092 + C32056 * C32263) / C31601;
    const double C2233 =
        (2 * (2 * ae * (C31999 + C32116 * C32082) + C31824 * C32251) + C32254 +
         C32254 +
         C31824 * (C32251 + C32255 + C32255 +
                   C31824 * (2 * ae * (C32116 + C31997 * C31959 * C32082) +
                             C31824 * (C32117 + C31997 *
                                                    (C31942 * C31943 +
                                                     C31828 * bs[8] *
                                                         std::pow(C31822, 8)) *
                                                    C31831 * C32082)))) /
        C31607;
    const double C2583 = C779 * C2570;
    const double C11222 = C5355 * C2570;
    const double C13381 = C31640 * C2570;
    const double C14396 = C6257 * C2570;
    const double C17641 = C15952 * C2570;
    const double C19274 = C31710 * C2570;
    const double C934 =
        (3 * C32032 + C31997 * (2 * C32000 + C31997 * C32044) + C32192 +
         C32192 +
         C31824 *
             (2 * ae *
                  (3 * C32043 +
                   C31997 *
                       (2 * C32116 + C31997 * (C31909 + C31959 * C32023))) +
              C31824 * (3 * C32044 +
                        C31997 * (2 * C32117 +
                                  C31997 * (C31966 + (C31942 * C31943 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31831 * C32023))))) /
        C31607;
    const double C6548 = C6257 * C6537;
    const double C7913 = C31640 * C6537;
    const double C16095 = C15952 * C6537;
    const double C6654 = C6257 * C6647;
    const double C8499 = C31640 * C6647;
    const double C16681 = C15952 * C6647;
    const double C2031 =
        (3 * C32091 + C32056 * (2 * C32059 + C32056 * C32103) + C32246 +
         C32246 +
         C31824 *
             (2 * ae *
                  (3 * C32102 +
                   C32056 *
                       (2 * C32135 + C32056 * (C31909 + C31959 * C32082))) +
              C31824 * (3 * C32103 +
                        C32056 * (2 * C32136 +
                                  C32056 * (C31966 + (C31942 * C31943 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31831 * C32082))))) /
        C31607;
    const double C12410 = C6257 * C12403;
    const double C13889 = C31640 * C12403;
    const double C23048 = C15952 * C12403;
    const double C18000 = C31681 * C243;
    const double C17997 = C31681 * C236;
    const double C17994 = C31681 * C133;
    const double C17991 = C31681 * C132;
    const double C17988 = C31681 * C237;
    const double C17985 = C31681 * C242;
    const double C17982 = C31681 * C241;
    const double C17979 = C31681 * C238;
    const double C17976 = C31681 * C131;
    const double C18134 = C31681 * C927;
    const double C18128 = C31681 * C924;
    const double C18292 = C31681 * C1115;
    const double C18289 = C31681 * C1112;
    const double C18286 = C31681 * C346;
    const double C18283 = C31681 * C343;
    const double C18280 = C31681 * C644;
    const double C18277 = C31681 * C1109;
    const double C18453 = C31681 * C923;
    const double C18626 = C31681 * C1108;
    const double C18623 = C31681 * C645;
    const double C18620 = C31681 * C342;
    const double C18787 = C31681 * C1634;
    const double C18954 = C31681 * C341;
    const double C19273 = C31681 * C2569;
    const double C19270 = C31681 * C2021;
    const double C19715 = C31681 * C1113;
    const double C19712 = C31681 * C347;
    const double C24591 = C31681 * C348;
    const double C24821 = C31681 * C2024;
    const double C25132 = C31681 * C2020;
    const double C120 =
        (C31681 / C31608 + ((C31602 * C31710 + C17964) * ae) / C31601) /
            C31608 -
        ((C31602 * (C31710 / C31608 + (0 * ae) / C31601) + C32822) * be) /
            C31601;
    const double C2701 =
        C31681 / C31608 - ((C31602 * C31710 + C17964) * be) / C31601;
    const double C15112 =
        C31681 / C31608 + ((C31602 * C31710 + C17964) * ae) / C31601;
    const double C5382 = C5353 * C243;
    const double C5379 = C5353 * C236;
    const double C5376 = C5353 * C133;
    const double C5373 = C5353 * C132;
    const double C5370 = C5353 * C237;
    const double C5367 = C5353 * C242;
    const double C5364 = C5353 * C241;
    const double C5361 = C5353 * C238;
    const double C5358 = C5353 * C131;
    const double C5516 = C5353 * C927;
    const double C5510 = C5353 * C924;
    const double C5674 = C5353 * C1115;
    const double C5671 = C5353 * C1112;
    const double C5668 = C5353 * C346;
    const double C5665 = C5353 * C343;
    const double C5662 = C5353 * C644;
    const double C5659 = C5353 * C1109;
    const double C5835 = C5353 * C923;
    const double C6008 = C5353 * C1108;
    const double C6005 = C5353 * C645;
    const double C6002 = C5353 * C342;
    const double C6169 = C5353 * C1634;
    const double C10465 = C5353 * C348;
    const double C10462 = C5353 * C341;
    const double C10459 = C5353 * C347;
    const double C10709 = C5353 * C2024;
    const double C10703 = C5353 * C2021;
    const double C10887 = C5353 * C1113;
    const double C11048 = C5353 * C2020;
    const double C11221 = C5353 * C2569;
    const double C31683 = C31679 * be;
    const double C5351 = C31655 + (C31679 * ae) / C31601 + C31640;
    const double C31685 = C31680 / C31601;
    const double C31684 = C31678 / C31620;
    const double C31682 = C31602 * C31678;
    const double C7767 = C31678 / C31601;
    const double C954 = C774 * C919;
    const double C942 = C774 * C230;
    const double C936 = C774 * C229;
    const double C1300 = C774 * C231;
    const double C1294 = C774 * C228;
    const double C1650 = C774 * C638;
    const double C1644 = C774 * C1101;
    const double C2051 = C774 * C2016;
    const double C2039 = C774 * C335;
    const double C2033 = C774 * C334;
    const double C2393 = C774 * C336;
    const double C2387 = C774 * C333;
    const double C2575 = C774 * C1102;
    const double C4828 = C774 * C639;
    const double C951 = C776 * C918;
    const double C944 = C776 * C231;
    const double C938 = C776 * C228;
    const double C1302 = C776 * C232;
    const double C1296 = C776 * C227;
    const double C1648 = C776 * C639;
    const double C1642 = C776 * C1100;
    const double C2048 = C776 * C2015;
    const double C2041 = C776 * C336;
    const double C2035 = C776 * C333;
    const double C2395 = C776 * C337;
    const double C2389 = C776 * C332;
    const double C2577 = C776 * C1103;
    const double C4830 = C776 * C640;
    const double C16091 = C15949 * C920;
    const double C16084 = C15949 * C919;
    const double C16080 = C15949 * C230;
    const double C16076 = C15949 * C229;
    const double C16376 = C15949 * C918;
    const double C16372 = C15949 * C231;
    const double C16368 = C15949 * C228;
    const double C16678 = C15949 * C638;
    const double C16674 = C15949 * C1101;
    const double C16670 = C15949 * C1630;
    const double C17010 = C15949 * C1105;
    const double C17004 = C15949 * C1102;
    const double C17188 = C15949 * C2016;
    const double C17182 = C15949 * C2565;
    const double C17174 = C15949 * C335;
    const double C17170 = C15949 * C334;
    const double C17418 = C15949 * C1103;
    const double C17414 = C15949 * C639;
    const double C17634 = C15949 * C336;
    const double C17630 = C15949 * C333;
    const double C20562 = C15949 * C1100;
    const double C23045 = C15949 * C2017;
    const double C23315 = C15949 * C2015;
    const double C983 = C974 + C947;
    const double C980 = C971 + C941;
    const double C2080 = C2071 + C2044;
    const double C2077 = C2068 + C2038;
    const double C5541 = C5532 + C5505;
    const double C5538 = C5529 + C5499;
    const double C10734 = C10725 + C10698;
    const double C10731 = C10722 + C10692;
    const double C6368 = C6363 + C6352;
    const double C6367 = C6362 + C6349;
    const double C6366 = C6361 + C6347;
    const double C6365 = C6360 + C6345;
    const double C6364 = C6359 + C6343;
    const double C6559 = C6555 + C6545;
    const double C6558 = C6554 + C6543;
    const double C6557 = C6553 + C6541;
    const double C6760 = C6756 + C6747;
    const double C6759 = C6755 + C6745;
    const double C6758 = C6754 + C6743;
    const double C6757 = C6753 + C6741;
    const double C7015 = C7012 + C7003;
    const double C7014 = C7011 + C7001;
    const double C7013 = C7010 + C6997;
    const double C7169 = C7164 + C7151;
    const double C7168 = C7163 + C7148;
    const double C7167 = C7162 + C7145;
    const double C7166 = C7161 + C7142;
    const double C7165 = C7160 + C7140;
    const double C7341 = C7337 + C7328;
    const double C7340 = C7336 + C7326;
    const double C7339 = C7335 + C7323;
    const double C7338 = C7334 + C7321;
    const double C7507 = C7505 + C7498;
    const double C7506 = C7504 + C7496;
    const double C12234 = C12232 + C12227;
    const double C12233 = C12231 + C12224;
    const double C12415 = C12413 + C12407;
    const double C12507 = C12506 + C12503;
    const double C14738 = C14737 + C14735;
    const double C7935 = C7927 + C7905;
    const double C7933 = C7925 + C7901;
    const double C7931 = C7923 + C7897;
    const double C8215 = C8209 + C8193;
    const double C8213 = C8207 + C8189;
    const double C8516 = C8510 + C8495;
    const double C8514 = C8508 + C8491;
    const double C9010 = C9002 + C8979;
    const double C9008 = C9000 + C8975;
    const double C9006 = C8998 + C8971;
    const double C9005 = C8997 + C8969;
    const double C9435 = C9433 + C9423;
    const double C12974 = C12970 + C12957;
    const double C12972 = C12968 + C12953;
    const double C13387 = C13385 + C13377;
    const double C16117 = C16109 + C16087;
    const double C16115 = C16107 + C16083;
    const double C16113 = C16105 + C16079;
    const double C16397 = C16391 + C16375;
    const double C16395 = C16389 + C16371;
    const double C16698 = C16692 + C16677;
    const double C16696 = C16690 + C16673;
    const double C17022 = C17018 + C17009;
    const double C17021 = C17017 + C17007;
    const double C17217 = C17209 + C17187;
    const double C17215 = C17207 + C17181;
    const double C17214 = C17206 + C17177;
    const double C17212 = C17204 + C17173;
    const double C17653 = C17649 + C17637;
    const double C17651 = C17647 + C17633;
    const double C18159 = C18150 + C18123;
    const double C18156 = C18147 + C18117;
    const double C19299 = C19290 + C19264;
    const double C19295 = C19286 + C19256;
    const double C1311 = C1298 + C793;
    const double C2854 = C2833 + C2712;
    const double C5839 = C5826 + C5369;
    const double C15265 = C15244 + C15123;
    const double C18457 = C18444 + C17987;
    const double C2404 = C2391 + C1478;
    const double C3758 = C3741 + C2977;
    const double C11052 = C11039 + C6003;
    const double C21284 = C21267 + C15388;
    const double C19719 = C19709 + C18621;
    const double C1670 = C1664 + C1647;
    const double C6186 = C6180 + C6163;
    const double C9223 = C9219 + C9209;
    const double C17433 = C17429 + C17417;
    const double C18804 = C18798 + C18781;
    const double C31935 = C31934 + C31921;
    const double C245 =
        (3 * (C31997 * C31879 + C32004 + C32004 + C31824 * C32011) + C32007 +
         C32007 +
         C31824 * (2 * C32011 + C32008 + C32008 +
                   C31824 * (C32000 + C32009 + C32009 +
                             C31824 * (2 * ae * C31997 * C31909 +
                                       C31824 * C31997 * C31966)))) /
        C31607;
    const double C1481 = C779 * C646;
    const double C2973 = C2703 * C646;
    const double C4340 = C777 * C646;
    const double C6006 = C5355 * C646;
    const double C8667 = C31640 * C646;
    const double C15384 = C15114 * C646;
    const double C16855 = C15952 * C646;
    const double C18624 = C31710 * C646;
    const double C18957 = C31681 * C646;
    const double C26456 = C5353 * C646;
    const double C350 =
        (3 * (C32056 * C31879 + C32063 + C32063 + C31824 * C32070) + C32066 +
         C32066 +
         C31824 * (2 * C32070 + C32067 + C32067 +
                   C31824 * (C32059 + C32068 + C32068 +
                             C31824 * (2 * ae * C32056 * C31909 +
                                       C31824 * C32056 * C31966)))) /
        C31607;
    const double C1314 = C1304 + C790;
    const double C2855 = C2835 + C2836;
    const double C5842 = C5832 + C5366;
    const double C15266 = C15246 + C15247;
    const double C18460 = C18450 + C17984;
    const double C2407 = C2397 + C1786;
    const double C3759 = C3743 + C2984;
    const double C11055 = C11045 + C10458;
    const double C21285 = C21269 + C15395;
    const double C25136 = C25129 + C19713;
    const double C2592 = C2589 + C2580;
    const double C11231 = C11228 + C11219;
    const double C13179 = C13177 + C13173;
    const double C17435 = C17431 + C17421;
    const double C19296 = C19287 + C19258;
    const double C975 = C966 + C949;
    const double C5533 = C5524 + C5507;
    const double C8211 = C8205 + C7780;
    const double C16393 = C16387 + C15962;
    const double C18151 = C18142 + C18125;
    const double C1661 = C1655 + C1127;
    const double C6177 = C6171 + C5658;
    const double C9221 = C9217 + C8353;
    const double C20569 = C20567 + C16535;
    const double C18795 = C18789 + C18276;
    const double C2072 = C2063 + C2046;
    const double C10726 = C10717 + C10700;
    const double C14165 = C14163 + C13379;
    const double C23324 = C23322 + C17639;
    const double C24827 = C24824 + C19271;
    const double C6560 = C6556 + C6547;
    const double C7936 = C7928 + C7908;
    const double C16118 = C16110 + C16090;
    const double C10077 = C10076 + C10074;
    const double C8512 = C8506 + C8487;
    const double C16694 = C16688 + C16669;
    const double C12416 = C12414 + C12409;
    const double C13894 = C13892 + C13885;
    const double C23053 = C23051 + C23044;
    const double C31990 = C31989 + C31971;
    const double C32050 = ae * C32045;
    const double C1291 = (2 * C32001 + C31997 * C32045) / C31601;
    const double C1473 = (C32056 * C32045) / C31601;
    const double C32109 = ae * C32104;
    const double C2384 = (2 * C32060 + C32056 * C32104) / C31601;
    const double C32171 = ae * C32166;
    const double C2237 = C779 * C2232;
    const double C2988 = C2703 * C2232;
    const double C10888 = C5355 * C2232;
    const double C12657 = C31640 * C2232;
    const double C15399 = C15114 * C2232;
    const double C16857 = C15952 * C2232;
    const double C19716 = C31710 * C2232;
    const double C1292 =
        (2 * (2 * ae * (2 * C31999 + C31997 * C32043) + C31824 * C32216) +
         C32218 + C32218 +
         C31824 *
             (C32216 + C32215 + C32215 +
              C31824 *
                  (2 * ae * (2 * C32116 + C31997 * (C31909 + C31959 * C32023)) +
                   C31824 * (2 * C32117 +
                             C31997 * (C31966 +
                                       (C31942 * C31943 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31831 * C32023))))) /
        C31607;
    const double C959 = C779 * C928;
    const double C5517 = C5355 * C928;
    const double C6273 = C6257 * C928;
    const double C8199 = C31640 * C928;
    const double C16381 = C15952 * C928;
    const double C18135 = C31710 * C928;
    const double C1654 = C779 * C1635;
    const double C6170 = C5355 * C1635;
    const double C8355 = C31640 * C1635;
    const double C9731 = C6257 * C1635;
    const double C16537 = C15952 * C1635;
    const double C18788 = C31710 * C1635;
    const double C2385 =
        (2 * (2 * ae * (2 * C32058 + C32056 * C32102) + C31824 * C32262) +
         C32264 + C32264 +
         C31824 *
             (C32262 + C32261 + C32261 +
              C31824 *
                  (2 * ae * (2 * C32135 + C32056 * (C31909 + C31959 * C32082)) +
                   C31824 * (2 * C32136 +
                             C32056 * (C31966 +
                                       (C31942 * C31943 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31831 * C32082))))) /
        C31607;
    const double C2056 = C779 * C2025;
    const double C10710 = C5355 * C2025;
    const double C12092 = C6257 * C2025;
    const double C14161 = C31640 * C2025;
    const double C23320 = C15952 * C2025;
    const double C24822 = C31710 * C2025;
    const double C151 = C120 * C134;
    const double C148 = C120 * C133;
    const double C264 = C120 * C243;
    const double C257 = C120 * C236;
    const double C369 = C120 * C348;
    const double C362 = C120 * C341;
    const double C657 = C120 * C646;
    const double C2723 = C2701 * C134;
    const double C2718 = C2701 * C133;
    const double C2714 = C2701 * C236;
    const double C2711 = C2701 * C237;
    const double C2707 = C2701 * C132;
    const double C2849 = C2701 * C923;
    const double C2839 = C2701 * C242;
    const double C2987 = C2701 * C1113;
    const double C2983 = C2701 * C347;
    const double C2978 = C2701 * C342;
    const double C2974 = C2701 * C645;
    const double C3129 = C2701 * C243;
    const double C3279 = C2701 * C646;
    const double C3275 = C2701 * C341;
    const double C3421 = C2701 * C1108;
    const double C3753 = C2701 * C2020;
    const double C4049 = C2701 * C348;
    const double C15134 = C15112 * C134;
    const double C15129 = C15112 * C133;
    const double C15125 = C15112 * C236;
    const double C15122 = C15112 * C237;
    const double C15118 = C15112 * C132;
    const double C15260 = C15112 * C923;
    const double C15250 = C15112 * C242;
    const double C15398 = C15112 * C1113;
    const double C15394 = C15112 * C347;
    const double C15389 = C15112 * C342;
    const double C15385 = C15112 * C645;
    const double C15540 = C15112 * C243;
    const double C15690 = C15112 * C646;
    const double C15686 = C15112 * C341;
    const double C15832 = C15112 * C1108;
    const double C21279 = C15112 * C2020;
    const double C21575 = C15112 * C348;
    const double C31687 = C31683 / C31601;
    const double C5381 = C5351 * C242;
    const double C5378 = C5351 * C237;
    const double C5375 = C5351 * C132;
    const double C5374 = C5351 * C131;
    const double C5371 = C5351 * C238;
    const double C5368 = C5351 * C241;
    const double C5363 = C5351 * C240;
    const double C5360 = C5351 * C239;
    const double C5357 = C5351 * C130;
    const double C5515 = C5351 * C926;
    const double C5513 = C5351 * C925;
    const double C5673 = C5351 * C1114;
    const double C5670 = C5351 * C1111;
    const double C5667 = C5351 * C345;
    const double C5666 = C5351 * C344;
    const double C5663 = C5351 * C643;
    const double C5660 = C5351 * C1110;
    const double C5834 = C5351 * C924;
    const double C6007 = C5351 * C1109;
    const double C6004 = C5351 * C644;
    const double C6001 = C5351 * C343;
    const double C6168 = C5351 * C1633;
    const double C10464 = C5351 * C347;
    const double C10461 = C5351 * C342;
    const double C10460 = C5351 * C346;
    const double C10708 = C5351 * C2023;
    const double C10706 = C5351 * C2022;
    const double C10886 = C5351 * C1112;
    const double C11047 = C5351 * C2021;
    const double C11220 = C5351 * C2568;
    const double C26455 = C5351 * C645;
    const double C31688 = C31684 - C31685;
    const double C5352 = C31684 + (C31674 * ae) / C31601;
    const double C31686 = C31682 / C31601;
    const double C7909 = C7767 * C920;
    const double C7902 = C7767 * C919;
    const double C7898 = C7767 * C230;
    const double C7894 = C7767 * C229;
    const double C8194 = C7767 * C918;
    const double C8190 = C7767 * C231;
    const double C8186 = C7767 * C228;
    const double C8496 = C7767 * C638;
    const double C8492 = C7767 * C1101;
    const double C8488 = C7767 * C1630;
    const double C8980 = C7767 * C335;
    const double C8976 = C7767 * C1102;
    const double C8972 = C7767 * C1105;
    const double C8966 = C7767 * C334;
    const double C9210 = C7767 * C1100;
    const double C9206 = C7767 * C639;
    const double C9420 = C7767 * C333;
    const double C12958 = C7767 * C2016;
    const double C12954 = C7767 * C2565;
    const double C13170 = C7767 * C1103;
    const double C13374 = C7767 * C336;
    const double C13886 = C7767 * C2017;
    const double C14156 = C7767 * C2015;
    const double C968 = C954 + C955;
    const double C963 = C942 + C787;
    const double C960 = C936 + C784;
    const double C1312 = C1300 + C792;
    const double C1309 = C1294 + C795;
    const double C1660 = C1650 + C1132;
    const double C1657 = C1644 + C1129;
    const double C2065 = C2051 + C2052;
    const double C2060 = C2039 + C1136;
    const double C2057 = C2033 + C1135;
    const double C2405 = C2393 + C1788;
    const double C2402 = C2387 + C1476;
    const double C2584 = C2575 + C1139;
    const double C4834 = C4828 + C1479;
    const double C967 = C951 + C952;
    const double C964 = C944 + C788;
    const double C961 = C938 + C785;
    const double C1313 = C1302 + C791;
    const double C1310 = C1296 + C794;
    const double C1659 = C1648 + C1131;
    const double C1656 = C1642 + C1128;
    const double C2064 = C2048 + C2049;
    const double C2061 = C2041 + C1137;
    const double C2058 = C2035 + C1134;
    const double C2406 = C2395 + C1787;
    const double C2403 = C2389 + C1477;
    const double C2585 = C2577 + C1140;
    const double C4835 = C4830 + C1480;
    const double C16103 = C16091 + C16092;
    const double C16100 = C16084 + C15960;
    const double C16098 = C16080 + C15958;
    const double C16096 = C16076 + C15956;
    const double C16386 = C16376 + C15963;
    const double C16384 = C16372 + C15965;
    const double C16382 = C16368 + C15967;
    const double C16687 = C16678 + C16227;
    const double C16685 = C16674 + C16225;
    const double C16683 = C16670 + C16223;
    const double C17015 = C17010 + C16234;
    const double C17012 = C17004 + C16232;
    const double C17202 = C17188 + C17189;
    const double C17200 = C17182 + C17183;
    const double C17197 = C17174 + C16230;
    const double C17195 = C17170 + C16229;
    const double C17426 = C17418 + C16847;
    const double C17424 = C17414 + C16532;
    const double C17644 = C17634 + C16849;
    const double C17642 = C17630 + C16530;
    const double C20566 = C20562 + C16534;
    const double C23050 = C23045 + C17191;
    const double C23321 = C23315 + C17638;
    const double C6373 = C6368 * C32612;
    const double C6372 = C6367 * C32612;
    const double C9837 = C6367 * C32824;
    const double C27554 = C6367 * C21058;
    const double C6371 = C6366 * C32612;
    const double C7005 = C6366 * C32887;
    const double C9834 = C6366 * C32824;
    const double C11460 = C6366 * C10454;
    const double C27551 = C6366 * C21058;
    const double C31028 = C6366 * C32695;
    const double C6370 = C6365 * C32612;
    const double C6998 = C6365 * C32887;
    const double C9832 = C6365 * C32824;
    const double C11455 = C6365 * C10454;
    const double C14502 = C6365 * C13680;
    const double C27549 = C6365 * C21058;
    const double C28260 = C6365 * C32894;
    const double C31023 = C6365 * C32695;
    const double C6369 = C6364 * C32612;
    const double C6994 = C6364 * C32887;
    const double C9830 = C6364 * C32824;
    const double C11452 = C6364 * C10454;
    const double C14495 = C6364 * C13680;
    const double C27547 = C6364 * C21058;
    const double C28253 = C6364 * C32894;
    const double C31020 = C6364 * C32695;
    const double C6563 = C6559 * C32612;
    const double C10072 = C6559 * C32824;
    const double C27789 = C6559 * C21058;
    const double C6562 = C6558 * C32612;
    const double C7324 = C6558 * C32887;
    const double C10070 = C6558 * C32824;
    const double C11722 = C6558 * C10454;
    const double C27787 = C6558 * C21058;
    const double C31290 = C6558 * C32695;
    const double C6561 = C6557 * C32612;
    const double C7319 = C6557 * C32887;
    const double C10068 = C6557 * C32824;
    const double C11719 = C6557 * C10454;
    const double C14731 = C6557 * C13680;
    const double C27785 = C6557 * C21058;
    const double C28489 = C6557 * C32894;
    const double C31287 = C6557 * C32695;
    const double C6764 = C6760 * C32612;
    const double C6995 = C6760 * C32876;
    const double C7662 = C6760 * C32887;
    const double C9831 = C6760 * C32699;
    const double C10344 = C6760 * C32824;
    const double C11453 = C6760 * C10455;
    const double C12022 = C6760 * C10454;
    const double C14496 = C6760 * C13681;
    const double C15003 = C6760 * C13680;
    const double C27548 = C6760 * C32699;
    const double C28056 = C6760 * C21058;
    const double C28254 = C6760 * C32891;
    const double C28756 = C6760 * C32894;
    const double C31021 = C6760 * C32702;
    const double C31590 = C6760 * C32695;
    const double C6763 = C6759 * C32612;
    const double C6999 = C6759 * C32876;
    const double C7659 = C6759 * C32887;
    const double C9833 = C6759 * C32699;
    const double C10342 = C6759 * C32824;
    const double C11456 = C6759 * C10455;
    const double C12019 = C6759 * C10454;
    const double C14501 = C6759 * C13681;
    const double C27550 = C6759 * C32699;
    const double C28054 = C6759 * C21058;
    const double C28259 = C6759 * C32891;
    const double C31024 = C6759 * C32702;
    const double C31587 = C6759 * C32695;
    const double C6762 = C6758 * C32612;
    const double C7004 = C6758 * C32876;
    const double C9835 = C6758 * C32699;
    const double C10340 = C6758 * C32824;
    const double C11459 = C6758 * C10455;
    const double C27552 = C6758 * C32699;
    const double C28052 = C6758 * C21058;
    const double C31027 = C6758 * C32702;
    const double C6761 = C6757 * C32612;
    const double C9836 = C6757 * C32699;
    const double C27553 = C6757 * C32699;
    const double C7018 = C7015 * C32857;
    const double C10339 = C7015 * C32699;
    const double C11458 = C7015 * C32857;
    const double C28051 = C7015 * C32699;
    const double C31026 = C7015 * C24588;
    const double C7017 = C7014 * C32857;
    const double C7658 = C7014 * C32876;
    const double C10341 = C7014 * C32699;
    const double C11457 = C7014 * C32857;
    const double C12018 = C7014 * C10455;
    const double C14500 = C7014 * C13682;
    const double C28053 = C7014 * C32699;
    const double C28258 = C7014 * C32882;
    const double C31025 = C7014 * C24588;
    const double C31586 = C7014 * C32702;
    const double C7016 = C7013 * C32857;
    const double C7661 = C7013 * C32876;
    const double C10343 = C7013 * C32699;
    const double C11454 = C7013 * C32857;
    const double C12021 = C7013 * C10455;
    const double C14497 = C7013 * C13682;
    const double C15002 = C7013 * C13681;
    const double C28055 = C7013 * C32699;
    const double C28255 = C7013 * C32882;
    const double C28755 = C7013 * C32891;
    const double C31022 = C7013 * C24588;
    const double C31589 = C7013 * C32702;
    const double C7660 = C7168 * C32857;
    const double C12020 = C7168 * C32857;
    const double C14498 = C7168 * C32838;
    const double C15001 = C7168 * C13682;
    const double C28256 = C7168 * C32838;
    const double C28754 = C7168 * C32882;
    const double C31588 = C7168 * C24588;
    const double C7657 = C7167 * C32857;
    const double C12017 = C7167 * C32857;
    const double C14499 = C7167 * C32838;
    const double C28257 = C7167 * C32838;
    const double C31585 = C7167 * C24588;
    const double C7345 = C7341 * C32857;
    const double C11724 = C7341 * C32857;
    const double C31292 = C7341 * C24588;
    const double C7344 = C7340 * C32876;
    const double C10071 = C7340 * C32699;
    const double C11723 = C7340 * C10455;
    const double C27788 = C7340 * C32699;
    const double C31291 = C7340 * C32702;
    const double C7343 = C7339 * C32857;
    const double C11721 = C7339 * C32857;
    const double C14733 = C7339 * C13682;
    const double C28491 = C7339 * C32882;
    const double C31289 = C7339 * C24588;
    const double C7342 = C7338 * C32876;
    const double C10069 = C7338 * C32699;
    const double C11720 = C7338 * C10455;
    const double C14732 = C7338 * C13681;
    const double C27786 = C7338 * C32699;
    const double C28490 = C7338 * C32891;
    const double C31288 = C7338 * C32702;
    const double C15000 = C12507 * C32838;
    const double C28753 = C12507 * C32838;
    const double C14739 = C14738 * C32838;
    const double C28492 = C14738 * C32838;
    const double C1317 = C1311 + C793;
    const double C2862 = C2854 + C2712;
    const double C5845 = C5839 + C5369;
    const double C15273 = C15265 + C15123;
    const double C18463 = C18457 + C17987;
    const double C2410 = C2404 + C1478;
    const double C3766 = C3758 + C2977;
    const double C11058 = C11052 + C6003;
    const double C21292 = C21284 + C15388;
    const double C19722 = C19719 + C18621;
    const double C31936 = ae * C31935;
    const double C135 =
        (4 * C31890 + C31824 * C31935 + (3 * C31875 + C31824 * C31918) * ae) /
        C31601;
    const double C235 = (C31997 * C31935) / C31601;
    const double C340 = (C32056 * C31935) / C31601;
    const double C3126 = C32822 * C245;
    const double C15537 = C32822 * C245;
    const double C4836 = C4832 + C1481;
    const double C3423 = C3411 + C2973;
    const double C26952 = C26948 + C6006;
    const double C15834 = C15822 + C15384;
    const double C19504 = C19500 + C18624;
    const double C4046 = C32822 * C350;
    const double C21572 = C32822 * C350;
    const double C1320 = C1314 + C790;
    const double C2863 = C2855 + C2836;
    const double C5848 = C5842 + C5366;
    const double C15274 = C15266 + C15247;
    const double C18466 = C18460 + C17984;
    const double C2413 = C2407 + C1786;
    const double C3767 = C3759 + C2984;
    const double C11061 = C11055 + C10458;
    const double C21293 = C21285 + C15395;
    const double C25139 = C25136 + C19713;
    const double C984 = C975 + C950;
    const double C5542 = C5533 + C5508;
    const double C8217 = C8211 + C8197;
    const double C16399 = C16393 + C16379;
    const double C18160 = C18151 + C18126;
    const double C1667 = C1661 + C1641;
    const double C6183 = C6177 + C6157;
    const double C9225 = C9221 + C9213;
    const double C20571 = C20569 + C20565;
    const double C18801 = C18795 + C18775;
    const double C2081 = C2072 + C2047;
    const double C10735 = C10726 + C10701;
    const double C14167 = C14165 + C14159;
    const double C23326 = C23324 + C23318;
    const double C24830 = C24827 + C24815;
    const double C6564 = C6560 * C32612;
    const double C10078 = C10077 * C32699;
    const double C27790 = C10077 * C32699;
    const double C31992 = ae * C31990;
    const double C31991 = C31824 * C31990;
    const double C32118 = C31997 * C31990;
    const double C32137 = C32056 * C31990;
    const double C244 = (C31935 + C31990 * C32023) / C31601;
    const double C349 = (C31935 + C31990 * C32082) / C31601;
    const double C254 =
        (3 * (C32032 + C32036 + C32036 + C31824 * C32054) + C32050 + C32050 +
         C31824 *
             (2 * C32054 + C32051 + C32051 +
              C31824 * (C32044 + C32052 + C32052 +
                        C31824 * (2 * ae * (C31909 + C31959 * C32023) +
                                  C31824 * (C31966 + (C31942 * C31943 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31831 * C32023))))) /
        C31607;
    const double C1308 = C779 * C1291;
    const double C2850 = C2703 * C1291;
    const double C5836 = C5355 * C1291;
    const double C7795 = C31640 * C1291;
    const double C15261 = C15114 * C1291;
    const double C15977 = C15952 * C1291;
    const double C18454 = C31710 * C1291;
    const double C1484 = C779 * C1473;
    const double C3422 = C2703 * C1473;
    const double C6009 = C5355 * C1473;
    const double C8669 = C31640 * C1473;
    const double C15833 = C15114 * C1473;
    const double C18627 = C31710 * C1473;
    const double C20071 = C15952 * C1473;
    const double C359 =
        (3 * (C32091 + C32095 + C32095 + C31824 * C32113) + C32109 + C32109 +
         C31824 *
             (2 * C32113 + C32110 + C32110 +
              C31824 * (C32103 + C32111 + C32111 +
                        C31824 * (2 * ae * (C31909 + C31959 * C32082) +
                                  C31824 * (C31966 + (C31942 * C31943 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31831 * C32082))))) /
        C31607;
    const double C2401 = C779 * C2384;
    const double C3754 = C2703 * C2384;
    const double C11049 = C5355 * C2384;
    const double C13686 = C31640 * C2384;
    const double C21280 = C15114 * C2384;
    const double C22845 = C15952 * C2384;
    const double C25133 = C31710 * C2384;
    const double C652 =
        (3 * (C32158 + C32162 + C32162 + C31824 * C32175) + C32171 + C32171 +
         C31824 *
             (2 * C32175 + C32172 + C32172 +
              C31824 * (C32165 + C32173 + C32173 +
                        C31824 * (2 * ae * C32056 * C31997 * C31959 +
                                  C31824 * C32056 * C31997 *
                                      (C31942 * C31943 +
                                       C31828 * bs[8] * std::pow(C31822, 8)) *
                                      C31831)))) /
        C31607;
    const double C31690 = C31655 - C31687;
    const double C18127 = C31688 * C918;
    const double C18120 = C31688 * C231;
    const double C18114 = C31688 * C228;
    const double C18448 = C31688 * C232;
    const double C18442 = C31688 * C227;
    const double C18782 = C31688 * C639;
    const double C18776 = C31688 * C1100;
    const double C19265 = C31688 * C336;
    const double C19259 = C31688 * C1103;
    const double C19253 = C31688 * C333;
    const double C19498 = C31688 * C640;
    const double C19707 = C31688 * C332;
    const double C24816 = C31688 * C2015;
    const double C25127 = C31688 * C337;
    const double C119 =
        (C31688 / C31608 + ((C31711 - C31660 / C31708) * ae) / C31601) /
            C31608 -
        ((2 * (C31710 / C31608 + (0 * ae) / C31601) -
          C31660 / (C31601 * 4 * C31617)) *
         be) /
            C31601;
    const double C2700 =
        C31688 / C31608 - ((C31711 - C31660 / C31708) * be) / C31601;
    const double C15111 =
        C31688 / C31608 + ((C31711 - C31660 / C31708) * ae) / C31601;
    const double C5509 = C5352 * C918;
    const double C5502 = C5352 * C231;
    const double C5496 = C5352 * C228;
    const double C5830 = C5352 * C232;
    const double C5824 = C5352 * C227;
    const double C6164 = C5352 * C639;
    const double C6158 = C5352 * C1100;
    const double C10702 = C5352 * C2015;
    const double C10695 = C5352 * C336;
    const double C10689 = C5352 * C333;
    const double C11043 = C5352 * C337;
    const double C11037 = C5352 * C332;
    const double C11216 = C5352 * C1103;
    const double C26946 = C5352 * C640;
    const double C31689 = C31686 + C31672;
    const double C7921 = C7909 + C7910;
    const double C7918 = C7902 + C7778;
    const double C7916 = C7898 + C7776;
    const double C7914 = C7894 + C7774;
    const double C8204 = C8194 + C7781;
    const double C8202 = C8190 + C7783;
    const double C8200 = C8186 + C7785;
    const double C8505 = C8496 + C8045;
    const double C8503 = C8492 + C8043;
    const double C8501 = C8488 + C8041;
    const double C8995 = C8980 + C8048;
    const double C8993 = C8976 + C8050;
    const double C8991 = C8972 + C8052;
    const double C8988 = C8966 + C8047;
    const double C9216 = C9210 + C8352;
    const double C9214 = C9206 + C8350;
    const double C9430 = C9420 + C8348;
    const double C12967 = C12958 + C8982;
    const double C12965 = C12954 + C8984;
    const double C13174 = C13170 + C9426;
    const double C13382 = C13374 + C9424;
    const double C13891 = C13886 + C12960;
    const double C14162 = C14156 + C13378;
    const double C977 = C968 + C955;
    const double C972 = C963 + C787;
    const double C969 = C960 + C784;
    const double C1318 = C1312 + C792;
    const double C1315 = C1309 + C795;
    const double C1666 = C1660 + C1132;
    const double C1663 = C1657 + C1129;
    const double C2074 = C2065 + C2052;
    const double C2069 = C2060 + C1136;
    const double C2066 = C2057 + C1135;
    const double C2411 = C2405 + C1788;
    const double C2408 = C2402 + C1476;
    const double C2587 = C2584 + C1139;
    const double C4837 = C4834 + C1479;
    const double C976 = C967 + C952;
    const double C973 = C964 + C788;
    const double C970 = C961 + C785;
    const double C1319 = C1313 + C791;
    const double C1316 = C1310 + C794;
    const double C1665 = C1659 + C1131;
    const double C1662 = C1656 + C1128;
    const double C2073 = C2064 + C2049;
    const double C2070 = C2061 + C1137;
    const double C2067 = C2058 + C1134;
    const double C2412 = C2406 + C1787;
    const double C2409 = C2403 + C1477;
    const double C2588 = C2585 + C1140;
    const double C4838 = C4835 + C1480;
    const double C16111 = C16103 + C16092;
    const double C16108 = C16100 + C15960;
    const double C16106 = C16098 + C15958;
    const double C16104 = C16096 + C15956;
    const double C16392 = C16386 + C15963;
    const double C16390 = C16384 + C15965;
    const double C16388 = C16382 + C15967;
    const double C16693 = C16687 + C16227;
    const double C16691 = C16685 + C16225;
    const double C16689 = C16683 + C16223;
    const double C17019 = C17015 + C16234;
    const double C17016 = C17012 + C16232;
    const double C17210 = C17202 + C17189;
    const double C17208 = C17200 + C17183;
    const double C17205 = C17197 + C16230;
    const double C17203 = C17195 + C16229;
    const double C17430 = C17426 + C16847;
    const double C17428 = C17424 + C16532;
    const double C17648 = C17644 + C16849;
    const double C17646 = C17642 + C16530;
    const double C20568 = C20566 + C16534;
    const double C23052 = C23050 + C17191;
    const double C23323 = C23321 + C17638;
    const double C7007 = C6998 + C6999;
    const double C9838 = C9832 + C9833;
    const double C11461 = C11455 + C11456;
    const double C27555 = C27549 + C27550;
    const double C31029 = C31023 + C31024;
    const double C9839 = C9834 + C9835;
    const double C27556 = C27551 + C27552;
    const double C1323 = C1317 + C1299;
    const double C2870 = C2862 + C2834;
    const double C5851 = C5845 + C5827;
    const double C15281 = C15273 + C15245;
    const double C18469 = C18463 + C18445;
    const double C2416 = C2410 + C2392;
    const double C3774 = C3766 + C3742;
    const double C11064 = C11058 + C11040;
    const double C21300 = C21292 + C21268;
    const double C19725 = C19722 + C19710;
    const double C142 =
        (4 * (2 * C31884 + C31888 + C31888 + C31824 * C31927) + C31936 +
         C31936 +
         C31824 * (3 * C31927 + C31933 + C31933 +
                   C31824 * (2 * C31923 + C31929 + C31929 +
                             C31824 * (C31916 + C31922 + C31922 +
                                       C31824 * (2 * ae * C31909 +
                                                 C31824 *
                                                     (C31896 * C31897 +
                                                      C31828 * bs[7] *
                                                          std::pow(C31830, 7)) *
                                                     C31831))))) /
        C31607;
    const double C158 = C120 * C135;
    const double C150 = C122 * C135;
    const double C2724 = C2703 * C135;
    const double C15135 = C15114 * C135;
    const double C256 = C122 * C235;
    const double C463 = C120 * C235;
    const double C804 = C779 * C235;
    const double C2727 = C2701 * C235;
    const double C2713 = C2703 * C235;
    const double C5380 = C5355 * C235;
    const double C15138 = C15112 * C235;
    const double C15124 = C15114 * C235;
    const double C17998 = C31710 * C235;
    const double C361 = C122 * C340;
    const double C555 = C120 * C340;
    const double C1791 = C779 * C340;
    const double C3276 = C2703 * C340;
    const double C3537 = C2701 * C340;
    const double C10463 = C5355 * C340;
    const double C15687 = C15114 * C340;
    const double C18955 = C31710 * C340;
    const double C21063 = C15112 * C340;
    const double C4839 = C4836 + C1481;
    const double C3427 = C3423 + C2973;
    const double C26955 = C26952 + C6006;
    const double C15838 = C15834 + C15384;
    const double C19507 = C19504 + C18624;
    const double C1326 = C1320 + C1305;
    const double C2871 = C2863 + C2837;
    const double C5854 = C5848 + C5833;
    const double C15282 = C15274 + C15248;
    const double C18472 = C18466 + C18451;
    const double C2419 = C2413 + C2398;
    const double C3775 = C3767 + C3744;
    const double C11067 = C11061 + C11046;
    const double C21301 = C21293 + C21270;
    const double C25142 = C25139 + C25130;
    const double C31993 = C31944 + C31991;
    const double C32125 = ae * C32118;
    const double C647 = (C32056 * C32118) / C31601;
    const double C32144 = ae * C32137;
    const double C265 = C122 * C244;
    const double C807 = C779 * C244;
    const double C3130 = C2703 * C244;
    const double C5383 = C5355 * C244;
    const double C15541 = C15114 * C244;
    const double C18001 = C31710 * C244;
    const double C370 = C122 * C349;
    const double C1794 = C779 * C349;
    const double C4050 = C2703 * C349;
    const double C10466 = C5355 * C349;
    const double C21576 = C15114 * C349;
    const double C24592 = C31710 * C349;
    const double C31692 = C31690 + C31640;
    const double C18143 = C18127 + C18128;
    const double C18140 = C18120 + C17982;
    const double C18137 = C18114 + C17979;
    const double C18459 = C18448 + C17985;
    const double C18456 = C18442 + C17988;
    const double C18793 = C18782 + C18280;
    const double C18790 = C18776 + C18277;
    const double C19282 = C19265 + C18286;
    const double C19279 = C19259 + C18289;
    const double C19276 = C19253 + C18283;
    const double C19503 = C19498 + C18623;
    const double C19718 = C19707 + C18620;
    const double C24825 = C24816 + C19270;
    const double C25135 = C25127 + C19712;
    const double C2838 = C2700 * C232;
    const double C2831 = C2700 * C227;
    const double C3123 = C2700 * C226;
    const double C3413 = C2700 * C640;
    const double C3745 = C2700 * C337;
    const double C3739 = C2700 * C332;
    const double C4043 = C2700 * C331;
    const double C15249 = C15111 * C232;
    const double C15242 = C15111 * C227;
    const double C15534 = C15111 * C226;
    const double C15824 = C15111 * C640;
    const double C21271 = C15111 * C337;
    const double C21265 = C15111 * C332;
    const double C21569 = C15111 * C331;
    const double C5525 = C5509 + C5510;
    const double C5522 = C5502 + C5364;
    const double C5519 = C5496 + C5361;
    const double C5841 = C5830 + C5367;
    const double C5838 = C5824 + C5370;
    const double C6175 = C6164 + C5662;
    const double C6172 = C6158 + C5659;
    const double C10718 = C10702 + C10703;
    const double C10715 = C10695 + C5668;
    const double C10712 = C10689 + C5665;
    const double C11054 = C11043 + C10459;
    const double C11051 = C11037 + C6002;
    const double C11224 = C11216 + C5671;
    const double C26951 = C26946 + C6005;
    const double C31691 = C31689 * be;
    const double C5350 = C31630 + (C31689 * ae) / C31601 - C31662;
    const double C7929 = C7921 + C7910;
    const double C7926 = C7918 + C7778;
    const double C7924 = C7916 + C7776;
    const double C7922 = C7914 + C7774;
    const double C8210 = C8204 + C7781;
    const double C8208 = C8202 + C7783;
    const double C8206 = C8200 + C7785;
    const double C8511 = C8505 + C8045;
    const double C8509 = C8503 + C8043;
    const double C8507 = C8501 + C8041;
    const double C9003 = C8995 + C8048;
    const double C9001 = C8993 + C8050;
    const double C8999 = C8991 + C8052;
    const double C8996 = C8988 + C8047;
    const double C9220 = C9216 + C8352;
    const double C9218 = C9214 + C8350;
    const double C9432 = C9430 + C8348;
    const double C12971 = C12967 + C8982;
    const double C12969 = C12965 + C8984;
    const double C13176 = C13174 + C9426;
    const double C13384 = C13382 + C9424;
    const double C13893 = C13891 + C12960;
    const double C14164 = C14162 + C13378;
    const double C986 = C977 + C956;
    const double C981 = C972 + C943;
    const double C978 = C969 + C937;
    const double C1324 = C1318 + C1301;
    const double C1321 = C1315 + C1295;
    const double C1672 = C1666 + C1651;
    const double C1669 = C1663 + C1645;
    const double C2083 = C2074 + C2053;
    const double C2078 = C2069 + C2040;
    const double C2075 = C2066 + C2034;
    const double C2417 = C2411 + C2394;
    const double C2414 = C2408 + C2388;
    const double C2590 = C2587 + C2576;
    const double C4840 = C4837 + C4829;
    const double C985 = C976 + C953;
    const double C982 = C973 + C945;
    const double C979 = C970 + C939;
    const double C1325 = C1319 + C1303;
    const double C1322 = C1316 + C1297;
    const double C1671 = C1665 + C1649;
    const double C1668 = C1662 + C1643;
    const double C2082 = C2073 + C2050;
    const double C2079 = C2070 + C2042;
    const double C2076 = C2067 + C2036;
    const double C2418 = C2412 + C2396;
    const double C2415 = C2409 + C2390;
    const double C2591 = C2588 + C2578;
    const double C4841 = C4838 + C4831;
    const double C16119 = C16111 + C16093;
    const double C16116 = C16108 + C16085;
    const double C16114 = C16106 + C16081;
    const double C16112 = C16104 + C16077;
    const double C16398 = C16392 + C16377;
    const double C16396 = C16390 + C16373;
    const double C16394 = C16388 + C16369;
    const double C16699 = C16693 + C16679;
    const double C16697 = C16691 + C16675;
    const double C16695 = C16689 + C16671;
    const double C17023 = C17019 + C17011;
    const double C17020 = C17016 + C17005;
    const double C17218 = C17210 + C17190;
    const double C17216 = C17208 + C17184;
    const double C17213 = C17205 + C17175;
    const double C17211 = C17203 + C17171;
    const double C17434 = C17430 + C17419;
    const double C17432 = C17428 + C17415;
    const double C17652 = C17648 + C17635;
    const double C17650 = C17646 + C17631;
    const double C20570 = C20568 + C20563;
    const double C23054 = C23052 + C23046;
    const double C23325 = C23323 + C23316;
    const double C7019 = C7007 + C7017;
    const double C11462 = C11461 + C11457;
    const double C31030 = C31029 + C31025;
    const double C3134 = C3125 + C2713;
    const double C15545 = C15536 + C15124;
    const double C4054 = C4045 + C3276;
    const double C21580 = C21571 + C15687;
    const double C4842 = C4839 + C4833;
    const double C3431 = C3427 + C3412;
    const double C26958 = C26955 + C26949;
    const double C15842 = C15838 + C15823;
    const double C19510 = C19507 + C19501;
    const double C31994 = C31993 + C31979;
    const double C458 =
        (4 * (2 * C32011 + C32008 + C32008 + C31824 * C32132) + C32125 +
         C32125 +
         C31824 * (3 * C32132 + C32126 + C32126 +
                   C31824 * (2 * C32130 + C32127 + C32127 +
                             C31824 * (C32117 + C32128 + C32128 +
                                       C31824 * (2 * ae * C31997 * C31959 +
                                                 C31824 * C31997 *
                                                     (C31942 * C31943 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                     C31831))))) /
        C31607;
    const double C658 = C122 * C647;
    const double C3280 = C2703 * C647;
    const double C4341 = C779 * C647;
    const double C15691 = C15114 * C647;
    const double C18958 = C31710 * C647;
    const double C26457 = C5355 * C647;
    const double C550 =
        (4 * (2 * C32070 + C32067 + C32067 + C31824 * C32151) + C32144 +
         C32144 +
         C31824 * (3 * C32151 + C32145 + C32145 +
                   C31824 * (2 * C32149 + C32146 + C32146 +
                             C31824 * (C32136 + C32147 + C32147 +
                                       C31824 * (2 * ae * C32056 * C31959 +
                                                 C31824 * C32056 *
                                                     (C31942 * C31943 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                     C31831))))) /
        C31607;
    const double C17999 = C31692 * C242;
    const double C17996 = C31692 * C237;
    const double C17993 = C31692 * C132;
    const double C17992 = C31692 * C131;
    const double C17989 = C31692 * C238;
    const double C17986 = C31692 * C241;
    const double C17981 = C31692 * C240;
    const double C17978 = C31692 * C239;
    const double C17975 = C31692 * C130;
    const double C18133 = C31692 * C926;
    const double C18131 = C31692 * C925;
    const double C18291 = C31692 * C1114;
    const double C18288 = C31692 * C1111;
    const double C18285 = C31692 * C345;
    const double C18284 = C31692 * C344;
    const double C18281 = C31692 * C643;
    const double C18278 = C31692 * C1110;
    const double C18452 = C31692 * C924;
    const double C18625 = C31692 * C1109;
    const double C18622 = C31692 * C644;
    const double C18619 = C31692 * C343;
    const double C18786 = C31692 * C1633;
    const double C18956 = C31692 * C645;
    const double C18953 = C31692 * C342;
    const double C19272 = C31692 * C2568;
    const double C19269 = C31692 * C2022;
    const double C19714 = C31692 * C1112;
    const double C19711 = C31692 * C346;
    const double C24590 = C31692 * C347;
    const double C24820 = C31692 * C2023;
    const double C25131 = C31692 * C2021;
    const double C114 =
        (((((0 - (C31602 * C31600) / C31601) * ae) / C31601 -
           (0 * be) / C31620 + (2 * C31603) / C31601) /
              C31608 -
          ((C31602 * C31650 + 0) * be) / C31601 + C31629 - C31642) /
             C31608 +
         ((C31602 * C31677 + 0) * ae) / C31601) /
            C31608 -
        ((C31602 * (C31677 / C31608 +
                    ((C31602 * C31692 + C32512) * ae) / C31601 + C31681) +
          C32892) *
         be) /
            C31601 +
        C31692 / C31608 + ((C31602 * C31681 + C32520) * ae) / C31601 +
        2 * (C31640 / C31608 - (0 * be) / C31601);
    const double C116 =
        (C31677 / C31608 + ((C31602 * C31692 + C32512) * ae) / C31601 +
         C31681) /
            C31608 -
        ((C31602 * (C31692 / C31608 +
                    ((C31602 * C31681 + C32520) * ae) / C31601 + C31711) +
          C32885) *
         be) /
            C31601 +
        2 * (C31681 / C31608 + ((C31602 * C31710 + C17964) * ae) / C31601);
    const double C118 =
        (C31692 / C31608 + ((C31602 * C31681 + C32520) * ae) / C31601 +
         C31711) /
            C31608 -
        ((C31602 *
              (C31681 / C31608 + ((C31602 * C31710 + C17964) * ae) / C31601) +
          C32872) *
         be) /
            C31601 +
        3 * (C31710 / C31608 + (0 * ae) / C31601);
    const double C2697 =
        C31677 / C31608 - ((C31602 * C31692 + C32512) * be) / C31601 + C31681;
    const double C2699 =
        C31692 / C31608 - ((C31602 * C31681 + C32520) * be) / C31601 + C31711;
    const double C15108 =
        C31677 / C31608 + ((C31602 * C31692 + C32512) * ae) / C31601 + C31681;
    const double C15110 =
        C31692 / C31608 + ((C31602 * C31681 + C32520) * ae) / C31601 + C31711;
    const double C18152 = C18143 + C18128;
    const double C18149 = C18140 + C17982;
    const double C18146 = C18137 + C17979;
    const double C18465 = C18459 + C17985;
    const double C18462 = C18456 + C17988;
    const double C18799 = C18793 + C18280;
    const double C18796 = C18790 + C18277;
    const double C19291 = C19282 + C18286;
    const double C19288 = C19279 + C18289;
    const double C19285 = C19276 + C18283;
    const double C19506 = C19503 + C18623;
    const double C19721 = C19718 + C18620;
    const double C24828 = C24825 + C19270;
    const double C25138 = C25135 + C19712;
    const double C2856 = C2838 + C2839;
    const double C2853 = C2831 + C2711;
    const double C3133 = C3123 + C2714;
    const double C3424 = C3413 + C2974;
    const double C3760 = C3745 + C2983;
    const double C3757 = C3739 + C2978;
    const double C4053 = C4043 + C3275;
    const double C15267 = C15249 + C15250;
    const double C15264 = C15242 + C15122;
    const double C15544 = C15534 + C15125;
    const double C15835 = C15824 + C15385;
    const double C21286 = C21271 + C15394;
    const double C21283 = C21265 + C15389;
    const double C21579 = C21569 + C15686;
    const double C5534 = C5525 + C5510;
    const double C5531 = C5522 + C5364;
    const double C5528 = C5519 + C5361;
    const double C5847 = C5841 + C5367;
    const double C5844 = C5838 + C5370;
    const double C6181 = C6175 + C5662;
    const double C6178 = C6172 + C5659;
    const double C10727 = C10718 + C10703;
    const double C10724 = C10715 + C5668;
    const double C10721 = C10712 + C5665;
    const double C11060 = C11054 + C10459;
    const double C11057 = C11051 + C6002;
    const double C11227 = C11224 + C5671;
    const double C26954 = C26951 + C6005;
    const double C31693 = C31691 / C31601;
    const double C5512 = C5350 * C919;
    const double C5500 = C5350 * C230;
    const double C5494 = C5350 * C229;
    const double C5828 = C5350 * C231;
    const double C5822 = C5350 * C228;
    const double C6166 = C5350 * C638;
    const double C6160 = C5350 * C1101;
    const double C10705 = C5350 * C2016;
    const double C10693 = C5350 * C335;
    const double C10687 = C5350 * C334;
    const double C11041 = C5350 * C336;
    const double C11035 = C5350 * C333;
    const double C11214 = C5350 * C1102;
    const double C26944 = C5350 * C639;
    const double C7937 = C7929 + C7911;
    const double C7934 = C7926 + C7903;
    const double C7932 = C7924 + C7899;
    const double C7930 = C7922 + C7895;
    const double C8216 = C8210 + C8195;
    const double C8214 = C8208 + C8191;
    const double C8212 = C8206 + C8187;
    const double C8517 = C8511 + C8497;
    const double C8515 = C8509 + C8493;
    const double C8513 = C8507 + C8489;
    const double C9011 = C9003 + C8981;
    const double C9009 = C9001 + C8977;
    const double C9007 = C8999 + C8973;
    const double C9004 = C8996 + C8967;
    const double C9224 = C9220 + C9211;
    const double C9222 = C9218 + C9207;
    const double C9434 = C9432 + C9421;
    const double C12975 = C12971 + C12959;
    const double C12973 = C12969 + C12955;
    const double C13178 = C13176 + C13171;
    const double C13386 = C13384 + C13375;
    const double C13895 = C13893 + C13887;
    const double C14166 = C14164 + C14157;
    const double C987 = C981 + C982;
    const double C5232 = C1671 + C1672;
    const double C5231 = C1672 + C1671;
    const double C2084 = C2078 + C2079;
    const double C16121 = C16116 + C16117;
    const double C16120 = C16114 + C16115;
    const double C17850 = C16698 + C16699;
    const double C17848 = C16699 + C16698;
    const double C20219 = C16697 + C16696;
    const double C20960 = C16696 + C16697;
    const double C17178 = C17020 + C17021;
    const double C17849 = C17021 + C17020;
    const double C23042 = C17218 + C17217;
    const double C17219 = C17213 + C17214;
    const double C3138 = C3134 + C2713;
    const double C15549 = C15545 + C15124;
    const double C4058 = C4054 + C3276;
    const double C21584 = C21580 + C15687;
    const double C31995 = ae * C31994;
    const double C136 =
        (5 * C31935 + C31824 * C31994 + (4 * C31918 + C31824 * C31976) * ae) /
        C31601;
    const double C457 = (C31997 * C31994) / C31601;
    const double C549 = (C32056 * C31994) / C31601;
    const double C155 = C114 * C132;
    const double C154 = C114 * C131;
    const double C145 = C114 * C130;
    const double C261 = C114 * C240;
    const double C260 = C114 * C239;
    const double C366 = C114 * C345;
    const double C365 = C114 * C344;
    const double C460 = C114 * C238;
    const double C552 = C114 * C343;
    const double C654 = C114 * C643;
    const double C156 = C116 * C133;
    const double C153 = C116 * C132;
    const double C146 = C116 * C131;
    const double C262 = C116 * C241;
    const double C259 = C116 * C238;
    const double C367 = C116 * C346;
    const double C364 = C116 * C343;
    const double C461 = C116 * C237;
    const double C553 = C116 * C342;
    const double C655 = C116 * C644;
    const double C157 = C118 * C134;
    const double C152 = C118 * C133;
    const double C147 = C118 * C132;
    const double C263 = C118 * C242;
    const double C258 = C118 * C237;
    const double C368 = C118 * C347;
    const double C363 = C118 * C342;
    const double C462 = C118 * C236;
    const double C554 = C118 * C341;
    const double C656 = C118 * C645;
    const double C2725 = C2697 * C237;
    const double C2721 = C2697 * C132;
    const double C2720 = C2697 * C131;
    const double C2716 = C2697 * C238;
    const double C2709 = C2697 * C239;
    const double C2705 = C2697 * C130;
    const double C2847 = C2697 * C925;
    const double C2845 = C2697 * C240;
    const double C2985 = C2697 * C1111;
    const double C2981 = C2697 * C345;
    const double C2980 = C2697 * C344;
    const double C2976 = C2697 * C643;
    const double C3127 = C2697 * C241;
    const double C3277 = C2697 * C644;
    const double C3273 = C2697 * C343;
    const double C3419 = C2697 * C1110;
    const double C3535 = C2697 * C342;
    const double C3751 = C2697 * C2022;
    const double C4047 = C2697 * C346;
    const double C2726 = C2699 * C236;
    const double C2722 = C2699 * C133;
    const double C2719 = C2699 * C132;
    const double C2715 = C2699 * C237;
    const double C2710 = C2699 * C238;
    const double C2706 = C2699 * C131;
    const double C2848 = C2699 * C924;
    const double C2842 = C2699 * C241;
    const double C2986 = C2699 * C1112;
    const double C2982 = C2699 * C346;
    const double C2979 = C2699 * C343;
    const double C2975 = C2699 * C644;
    const double C3128 = C2699 * C242;
    const double C3278 = C2699 * C645;
    const double C3274 = C2699 * C342;
    const double C3420 = C2699 * C1109;
    const double C3536 = C2699 * C341;
    const double C3752 = C2699 * C2021;
    const double C4048 = C2699 * C347;
    const double C15136 = C15108 * C237;
    const double C15132 = C15108 * C132;
    const double C15131 = C15108 * C131;
    const double C15127 = C15108 * C238;
    const double C15120 = C15108 * C239;
    const double C15116 = C15108 * C130;
    const double C15258 = C15108 * C925;
    const double C15256 = C15108 * C240;
    const double C15396 = C15108 * C1111;
    const double C15392 = C15108 * C345;
    const double C15391 = C15108 * C344;
    const double C15387 = C15108 * C643;
    const double C15538 = C15108 * C241;
    const double C15688 = C15108 * C644;
    const double C15684 = C15108 * C343;
    const double C15830 = C15108 * C1110;
    const double C21061 = C15108 * C342;
    const double C21277 = C15108 * C2022;
    const double C21573 = C15108 * C346;
    const double C15137 = C15110 * C236;
    const double C15133 = C15110 * C133;
    const double C15130 = C15110 * C132;
    const double C15126 = C15110 * C237;
    const double C15121 = C15110 * C238;
    const double C15117 = C15110 * C131;
    const double C15259 = C15110 * C924;
    const double C15253 = C15110 * C241;
    const double C15397 = C15110 * C1112;
    const double C15393 = C15110 * C346;
    const double C15390 = C15110 * C343;
    const double C15386 = C15110 * C644;
    const double C15539 = C15110 * C242;
    const double C15689 = C15110 * C645;
    const double C15685 = C15110 * C342;
    const double C15831 = C15110 * C1109;
    const double C21062 = C15110 * C341;
    const double C21278 = C15110 * C2021;
    const double C21574 = C15110 * C347;
    const double C18161 = C18152 + C18129;
    const double C18158 = C18149 + C18121;
    const double C18155 = C18146 + C18115;
    const double C18471 = C18465 + C18449;
    const double C18468 = C18462 + C18443;
    const double C18805 = C18799 + C18783;
    const double C18802 = C18796 + C18777;
    const double C19300 = C19291 + C19266;
    const double C19297 = C19288 + C19260;
    const double C19294 = C19285 + C19254;
    const double C19509 = C19506 + C19499;
    const double C19724 = C19721 + C19708;
    const double C24831 = C24828 + C24817;
    const double C25141 = C25138 + C25128;
    const double C2864 = C2856 + C2839;
    const double C2861 = C2853 + C2711;
    const double C3137 = C3133 + C2714;
    const double C3428 = C3424 + C2974;
    const double C3768 = C3760 + C2983;
    const double C3765 = C3757 + C2978;
    const double C4057 = C4053 + C3275;
    const double C15275 = C15267 + C15250;
    const double C15272 = C15264 + C15122;
    const double C15548 = C15544 + C15125;
    const double C15839 = C15835 + C15385;
    const double C21294 = C21286 + C15394;
    const double C21291 = C21283 + C15389;
    const double C21583 = C21579 + C15686;
    const double C5543 = C5534 + C5511;
    const double C5540 = C5531 + C5503;
    const double C5537 = C5528 + C5497;
    const double C5853 = C5847 + C5831;
    const double C5850 = C5844 + C5825;
    const double C6187 = C6181 + C6165;
    const double C6184 = C6178 + C6159;
    const double C10736 = C10727 + C10704;
    const double C10733 = C10724 + C10696;
    const double C10730 = C10721 + C10690;
    const double C11066 = C11060 + C11044;
    const double C11063 = C11057 + C11038;
    const double C11230 = C11227 + C11217;
    const double C26957 = C26954 + C26947;
    const double C31694 = C31630 - C31693;
    const double C5526 = C5512 + C5513;
    const double C5521 = C5500 + C5363;
    const double C5518 = C5494 + C5360;
    const double C5840 = C5828 + C5368;
    const double C5837 = C5822 + C5371;
    const double C6176 = C6166 + C5663;
    const double C6173 = C6160 + C5660;
    const double C10719 = C10705 + C10706;
    const double C10714 = C10693 + C5667;
    const double C10711 = C10687 + C5666;
    const double C11053 = C11041 + C10460;
    const double C11050 = C11035 + C6001;
    const double C11223 = C11214 + C5670;
    const double C26950 = C26944 + C6004;
    const double C7939 = C7934 + C7935;
    const double C7938 = C7932 + C7933;
    const double C9632 = C8516 + C8517;
    const double C9630 = C8517 + C8516;
    const double C8817 = C8515 + C8514;
    const double C9631 = C8514 + C8515;
    const double C12950 = C9011 + C9010;
    const double C12951 = C9009 + C9008;
    const double C13582 = C9008 + C9009;
    const double C13883 = C12975 + C12974;
    const double C988 = C987 + C983;
    const double C5234 = C1670 + C5232;
    const double C5233 = C5231 + C1670;
    const double C2085 = C2084 + C2080;
    const double C16123 = C16121 * C32612;
    const double C16122 = C16120 * C32612;
    const double C20218 = C16120 * C32824;
    const double C22011 = C16120 * C21058;
    const double C20220 = C20219 * C32699;
    const double C22012 = C20219 * C32699;
    const double C3142 = C3138 + C3126;
    const double C15553 = C15549 + C15537;
    const double C4062 = C4058 + C4046;
    const double C21588 = C21584 + C21572;
    const double C143 =
        (5 * (3 * C31927 + C31933 + C31933 + C31824 * C31985) + C31995 +
         C31995 +
         C31824 *
             (4 * C31985 + C31992 + C31992 +
              C31824 *
                  (3 * C31980 + C31988 + C31988 +
                   C31824 * (2 * C31974 + C31982 + C31982 +
                             C31824 * (C31966 + C31973 + C31973 +
                                       C31824 * (2 * ae * C31959 +
                                                 C31824 *
                                                     (C31942 * C31943 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                     C31831)))))) /
        C31607;
    const double C159 = C122 * C136;
    const double C464 = C122 * C457;
    const double C2728 = C2703 * C457;
    const double C15139 = C15114 * C457;
    const double C556 = C122 * C549;
    const double C3538 = C2703 * C549;
    const double C21064 = C15114 * C549;
    const double C2872 = C2864 + C2840;
    const double C2869 = C2861 + C2832;
    const double C3141 = C3137 + C3124;
    const double C3432 = C3428 + C3414;
    const double C3776 = C3768 + C3746;
    const double C3773 = C3765 + C3740;
    const double C4061 = C4057 + C4044;
    const double C15283 = C15275 + C15251;
    const double C15280 = C15272 + C15243;
    const double C15552 = C15548 + C15535;
    const double C15843 = C15839 + C15825;
    const double C21302 = C21294 + C21272;
    const double C21299 = C21291 + C21266;
    const double C21587 = C21583 + C21570;
    const double C31695 = C31694 - C31662;
    const double C5535 = C5526 + C5513;
    const double C5530 = C5521 + C5363;
    const double C5527 = C5518 + C5360;
    const double C5846 = C5840 + C5368;
    const double C5843 = C5837 + C5371;
    const double C6182 = C6176 + C5663;
    const double C6179 = C6173 + C5660;
    const double C10728 = C10719 + C10706;
    const double C10723 = C10714 + C5667;
    const double C10720 = C10711 + C5666;
    const double C11059 = C11053 + C10460;
    const double C11056 = C11050 + C6001;
    const double C11226 = C11223 + C5670;
    const double C26953 = C26950 + C6004;
    const double C7941 = C7939 * C32612;
    const double C7940 = C7938 * C32612;
    const double C8816 = C7938 * C32824;
    const double C29049 = C7938 * C21058;
    const double C8818 = C8817 * C32699;
    const double C29050 = C8817 * C32699;
    const double C989 = C988 * C32612;
    const double C20221 = C20218 + C20220;
    const double C22013 = C22011 + C22012;
    const double C18130 = C31695 * C919;
    const double C18118 = C31695 * C230;
    const double C18112 = C31695 * C229;
    const double C18446 = C31695 * C231;
    const double C18440 = C31695 * C228;
    const double C18784 = C31695 * C638;
    const double C18778 = C31695 * C1101;
    const double C19267 = C31695 * C335;
    const double C19261 = C31695 * C1102;
    const double C19251 = C31695 * C334;
    const double C19496 = C31695 * C639;
    const double C19705 = C31695 * C333;
    const double C24818 = C31695 * C2016;
    const double C25125 = C31695 * C336;
    const double C113 =
        (((ae * -2 * C31600) / C31617 -
          (((C31602 * C31618) / C31607 + 2 * C31650) * be) / C31601 -
          C31621 / C31607) /
             C31608 +
         ((C31602 * C31676 + 2 * C31677) * ae) / C31601) /
            C31608 -
        ((C31602 * (C31676 / C31608 +
                    ((C31602 * C31695 + 2 * C31692) * ae) / C31601 + C31688) +
          2 * (C31677 / C31608 + ((C31602 * C31692 + C32512) * ae) / C31601 +
               C31681)) *
         be) /
            C31601 +
        C31695 / C31608 + ((C31602 * C31688 + 2 * C31681) * ae) / C31601 +
        (-2 * C31653) / (C31601 * 4 * C31607);
    const double C115 =
        (C31676 / C31608 + ((C31602 * C31695 + 2 * C31692) * ae) / C31601 +
         C31688) /
            C31608 -
        ((C31602 * (C31695 / C31608 +
                    ((C31602 * C31688 + 2 * C31681) * ae) / C31601 +
                    (-2 * C31653) / C31708) +
          2 * (C31692 / C31608 + ((C31602 * C31681 + C32520) * ae) / C31601 +
               C31711)) *
         be) /
            C31601 +
        2 * (C31688 / C31608 + ((C31711 - C31660 / C31708) * ae) / C31601);
    const double C117 =
        (C31695 / C31608 + ((C31602 * C31688 + 2 * C31681) * ae) / C31601 +
         (-2 * C31653) / C31708) /
            C31608 -
        ((C31602 *
              (C31688 / C31608 + ((C31711 - C31660 / C31708) * ae) / C31601) +
          2 * (C31681 / C31608 + ((C31602 * C31710 + C17964) * ae) / C31601)) *
         be) /
            C31601 +
        (-3 * C31653) / (C31601 * 4 * C31617);
    const double C2696 = C31676 / C31608 -
                         ((C31602 * C31695 + 2 * C31692) * be) / C31601 +
                         C31688;
    const double C2698 = C31695 / C31608 -
                         ((C31602 * C31688 + 2 * C31681) * be) / C31601 +
                         (-2 * C31653) / C31708;
    const double C15107 = C31676 / C31608 +
                          ((C31602 * C31695 + 2 * C31692) * ae) / C31601 +
                          C31688;
    const double C15109 = C31695 / C31608 +
                          ((C31602 * C31688 + 2 * C31681) * ae) / C31601 +
                          (-2 * C31653) / C31708;
    const double C5544 = C5535 + C5514;
    const double C5539 = C5530 + C5501;
    const double C5536 = C5527 + C5495;
    const double C5852 = C5846 + C5829;
    const double C5849 = C5843 + C5823;
    const double C6188 = C6182 + C6167;
    const double C6185 = C6179 + C6161;
    const double C10737 = C10728 + C10707;
    const double C10732 = C10723 + C10694;
    const double C10729 = C10720 + C10688;
    const double C11065 = C11059 + C11042;
    const double C11062 = C11056 + C11036;
    const double C11229 = C11226 + C11215;
    const double C26956 = C26953 + C26945;
    const double C8819 = C8816 + C8818;
    const double C29051 = C29049 + C29050;
    const double C18144 = C18130 + C18131;
    const double C18139 = C18118 + C17981;
    const double C18136 = C18112 + C17978;
    const double C18458 = C18446 + C17986;
    const double C18455 = C18440 + C17989;
    const double C18794 = C18784 + C18281;
    const double C18791 = C18778 + C18278;
    const double C19283 = C19267 + C18285;
    const double C19280 = C19261 + C18288;
    const double C19275 = C19251 + C18284;
    const double C19502 = C19496 + C18622;
    const double C19717 = C19705 + C18619;
    const double C24826 = C24818 + C19269;
    const double C25134 = C25125 + C19711;
    const double C2844 = C2696 * C230;
    const double C2827 = C2696 * C229;
    const double C3119 = C2696 * C228;
    const double C3417 = C2696 * C638;
    const double C3749 = C2696 * C335;
    const double C3735 = C2696 * C334;
    const double C4039 = C2696 * C333;
    const double C2841 = C2698 * C231;
    const double C2829 = C2698 * C228;
    const double C3121 = C2698 * C227;
    const double C3415 = C2698 * C639;
    const double C3747 = C2698 * C336;
    const double C3737 = C2698 * C333;
    const double C4041 = C2698 * C332;
    const double C15255 = C15107 * C230;
    const double C15238 = C15107 * C229;
    const double C15530 = C15107 * C228;
    const double C15828 = C15107 * C638;
    const double C21275 = C15107 * C335;
    const double C21261 = C15107 * C334;
    const double C21565 = C15107 * C333;
    const double C15252 = C15109 * C231;
    const double C15240 = C15109 * C228;
    const double C15532 = C15109 * C227;
    const double C15826 = C15109 * C639;
    const double C21273 = C15109 * C336;
    const double C21263 = C15109 * C333;
    const double C21567 = C15109 * C332;
    const double C5545 = C5539 + C5540;
    const double C27348 = C6187 + C6188;
    const double C27347 = C6188 + C6187;
    const double C10738 = C10732 + C10733;
    const double C18153 = C18144 + C18131;
    const double C18148 = C18139 + C17981;
    const double C18145 = C18136 + C17978;
    const double C18464 = C18458 + C17986;
    const double C18461 = C18455 + C17989;
    const double C18800 = C18794 + C18281;
    const double C18797 = C18791 + C18278;
    const double C19292 = C19283 + C18285;
    const double C19289 = C19280 + C18288;
    const double C19284 = C19275 + C18284;
    const double C19505 = C19502 + C18622;
    const double C19720 = C19717 + C18619;
    const double C24829 = C24826 + C19269;
    const double C25137 = C25134 + C19711;
    const double C2858 = C2844 + C2845;
    const double C2851 = C2827 + C2709;
    const double C3131 = C3119 + C2716;
    const double C3426 = C3417 + C2976;
    const double C3762 = C3749 + C2981;
    const double C3755 = C3735 + C2980;
    const double C4051 = C4039 + C3273;
    const double C2857 = C2841 + C2842;
    const double C2852 = C2829 + C2710;
    const double C3132 = C3121 + C2715;
    const double C3425 = C3415 + C2975;
    const double C3761 = C3747 + C2982;
    const double C3756 = C3737 + C2979;
    const double C4052 = C4041 + C3274;
    const double C15269 = C15255 + C15256;
    const double C15262 = C15238 + C15120;
    const double C15542 = C15530 + C15127;
    const double C15837 = C15828 + C15387;
    const double C21288 = C21275 + C15392;
    const double C21281 = C21261 + C15391;
    const double C21577 = C21565 + C15684;
    const double C15268 = C15252 + C15253;
    const double C15263 = C15240 + C15121;
    const double C15543 = C15532 + C15126;
    const double C15836 = C15826 + C15386;
    const double C21287 = C21273 + C15393;
    const double C21282 = C21263 + C15390;
    const double C21578 = C21567 + C15685;
    const double C5546 = C5545 + C5541;
    const double C27350 = C6186 + C27348;
    const double C27349 = C27347 + C6186;
    const double C10739 = C10738 + C10734;
    const double C18162 = C18153 + C18132;
    const double C18157 = C18148 + C18119;
    const double C18154 = C18145 + C18113;
    const double C18470 = C18464 + C18447;
    const double C18467 = C18461 + C18441;
    const double C18806 = C18800 + C18785;
    const double C18803 = C18797 + C18779;
    const double C19301 = C19292 + C19268;
    const double C19298 = C19289 + C19262;
    const double C19293 = C19284 + C19252;
    const double C19508 = C19505 + C19497;
    const double C19723 = C19720 + C19706;
    const double C24832 = C24829 + C24819;
    const double C25140 = C25137 + C25126;
    const double C2866 = C2858 + C2845;
    const double C2859 = C2851 + C2709;
    const double C3135 = C3131 + C2716;
    const double C3430 = C3426 + C2976;
    const double C3770 = C3762 + C2981;
    const double C3763 = C3755 + C2980;
    const double C4055 = C4051 + C3273;
    const double C2865 = C2857 + C2842;
    const double C2860 = C2852 + C2710;
    const double C3136 = C3132 + C2715;
    const double C3429 = C3425 + C2975;
    const double C3769 = C3761 + C2982;
    const double C3764 = C3756 + C2979;
    const double C4056 = C4052 + C3274;
    const double C15277 = C15269 + C15256;
    const double C15270 = C15262 + C15120;
    const double C15546 = C15542 + C15127;
    const double C15841 = C15837 + C15387;
    const double C21296 = C21288 + C15392;
    const double C21289 = C21281 + C15391;
    const double C21581 = C21577 + C15684;
    const double C15276 = C15268 + C15253;
    const double C15271 = C15263 + C15121;
    const double C15547 = C15543 + C15126;
    const double C15840 = C15836 + C15386;
    const double C21295 = C21287 + C15393;
    const double C21290 = C21282 + C15390;
    const double C21582 = C21578 + C15685;
    const double C5547 = C5546 * C32612;
    const double C18163 = C18157 + C18158;
    const double C19921 = C18805 + C18806;
    const double C19920 = C18806 + C18805;
    const double C24813 = C19301 + C19300;
    const double C2874 = C2866 + C2846;
    const double C2867 = C2859 + C2828;
    const double C3139 = C3135 + C3120;
    const double C3434 = C3430 + C3418;
    const double C3778 = C3770 + C3750;
    const double C3771 = C3763 + C3736;
    const double C4059 = C4055 + C4040;
    const double C2873 = C2865 + C2843;
    const double C2868 = C2860 + C2830;
    const double C3140 = C3136 + C3122;
    const double C3433 = C3429 + C3416;
    const double C3777 = C3769 + C3748;
    const double C3772 = C3764 + C3738;
    const double C4060 = C4056 + C4042;
    const double C15285 = C15277 + C15257;
    const double C15278 = C15270 + C15239;
    const double C15550 = C15546 + C15531;
    const double C15845 = C15841 + C15829;
    const double C21304 = C21296 + C21276;
    const double C21297 = C21289 + C21262;
    const double C21585 = C21581 + C21566;
    const double C15284 = C15276 + C15254;
    const double C15279 = C15271 + C15241;
    const double C15551 = C15547 + C15533;
    const double C15844 = C15840 + C15827;
    const double C21303 = C21295 + C21274;
    const double C21298 = C21290 + C21264;
    const double C21586 = C21582 + C21568;
    const double C18164 = C18163 + C18159;
    const double C19923 = C18804 + C19921;
    const double C19922 = C19920 + C18804;
    const double C24823 = C24813 + C19299;
    const double C18165 = C18164 * C32612;
    d2ee[0] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
             C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 + C17977 +
             C17964 * C139) *
                C32612 * C32655 +
            (C18154 + C18155 + C18156) * C32612 * C32662 + C18165 * C17967) *
               C32570 * C452 -
           ((C18160 + C18161 + C18162) * C32612 * C17967 +
            (C18159 + C18158 + C18157) * C32612 * C32662 +
            (C18156 + C18155 + C18154) * C32612 * C32655) *
               C32570 * C453) *
              C454 +
          (((C18467 + C18468 + C18469) * C32612 * C32655 +
            (C18470 + C18471 + C18472) * C32612 * C32662 +
            (C31695 * C918 + C18452 + C18452 + C32512 * C930 + C31688 * C917 +
             C18453 + C18453 + C32520 * C929 + C17972 * C1290 + C18454 +
             C18454 + C17964 * C1292) *
                C32612 * C17967) *
               C32570 * C453 -
           ((C18472 + C18471 + C18470) * C32612 * C17967 +
            (C18469 + C18468 + C18467) * C32612 * C32662 +
            (C17972 * C126 + C17990 + C17990 + C17964 * C140 + C31688 * C125 +
             C17991 + C17991 + C32520 * C139 + C31695 * C124 + C17992 + C17992 +
             C32512 * C138) *
                C32612 * C32655) *
               C32570 * C452) *
              C455)) /
        (p * q * std::sqrt(p + q));
    d2ee[1] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
             C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 + C17977 +
             C17964 * C139) *
                C32612 * C32655 +
            (C18154 + C18155 + C18156) * C32612 * C32662 + C18165 * C17967) *
               C546 -
           ((C18801 + C18802 + C18803) * C32612 * C17967 +
            (C18804 + C18805 + C18806) * C32612 * C32662 +
            (C17972 * C332 + C18282 + C18282 + C17964 * C352 + C31688 * C333 +
             C18283 + C18283 + C32520 * C353 + C31695 * C334 + C18284 + C18284 +
             C32512 * C354) *
                C32612 * C32655) *
               C547) *
              C452 +
          (((C18806 + C18805 + C18804) * C32612 * C32655 +
            (C18803 + C18802 + C18801) * C32612 * C32662 +
            (C31695 * C1630 + C18786 + C18786 + C32512 * C1636 +
             C31688 * C1631 + C18787 + C18787 + C32520 * C1637 +
             C17972 * C1632 + C18788 + C18788 + C17964 * C1638) *
                C32612 * C17967) *
               C547 -
           ((C18160 + C18161 + C18162) * C32612 * C17967 +
            (C18159 + C18158 + C18157) * C32612 * C32662 +
            (C18156 + C18155 + C18154) * C32612 * C32655) *
               C546) *
              C453) *
         C32544) /
        (p * q * std::sqrt(p + q));
    d2ee[2] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
            C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 + C17977 +
            C17964 * C139) *
               C32612 * C32655 +
           (C18154 + C18155 + C18156) * C32612 * C32662 + C18165 * C17967) *
              C32570 * C221 -
          ((C18160 + C18161 + C18162) * C32612 * C17967 +
           (C18159 + C18158 + C18157) * C32612 * C32662 +
           (C18156 + C18155 + C18154) * C32612 * C32655) *
              C32570 * C222 +
          (C18165 * C32655 + (C18162 + C18161 + C18160) * C32612 * C32662 +
           (C31695 * C920 + C18133 + C18133 + C32512 * C932 + C31688 * C921 +
            C18134 + C18134 + C32520 * C933 + C17972 * C922 + C18135 + C18135 +
            C17964 * C934) *
               C32612 * C17967) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
            C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 + C17977 +
            C17964 * C139) *
               C32612 * C32655 +
           (C31695 * C229 + C17978 + C17978 + C32512 * C249 + C31688 * C228 +
            C17979 + C17979 + C32520 * C248 + C17972 * C227 + C17980 + C17980 +
            C17964 * C247) *
               C32612 * C32662 +
           (C31695 * C230 + C17981 + C17981 + C32512 * C250 + C31688 * C231 +
            C17982 + C17982 + C32520 * C251 + C17972 * C232 + C17983 + C17983 +
            C17964 * C252) *
               C32612 * C17967) *
              C32570 * C32556 * C110 -
          ((C17972 * C233 + C17984 + C17984 + C17964 * C253 + C31688 * C232 +
            C17985 + C17985 + C32520 * C252 + C31695 * C231 + C17986 + C17986 +
            C32512 * C251) *
               C32612 * C17967 +
           (C17972 * C226 + C17987 + C17987 + C17964 * C246 + C31688 * C227 +
            C17988 + C17988 + C32520 * C247 + C31695 * C228 + C17989 + C17989 +
            C32512 * C248) *
               C32612 * C32662 +
           (C17972 * C126 + C17990 + C17990 + C17964 * C140 + C31688 * C125 +
            C17991 + C17991 + C32520 * C139 + C31695 * C124 + C17992 + C17992 +
            C32512 * C138) *
               C32612 * C32655) *
              C32570 * C32556 * C111 +
          ((C31695 * C125 + C17993 + C17993 + C32512 * C139 + C31688 * C126 +
            C17994 + C17994 + C32520 * C140 + C17972 * C127 + C17995 + C17995 +
            C17964 * C141) *
               C32612 * C32655 +
           (C31695 * C227 + C17996 + C17996 + C32512 * C247 + C31688 * C226 +
            C17997 + C17997 + C32520 * C246 + C17972 * C225 + C17998 + C17998 +
            C17964 * C245) *
               C32612 * C32662 +
           (C31695 * C232 + C17999 + C17999 + C32512 * C252 + C31688 * C233 +
            C18000 + C18000 + C32520 * C253 + C17972 * C234 + C18001 + C18001 +
            C17964 * C254) *
               C32612 * C17967) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
            C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 + C17977 +
            C17964 * C139) *
               C32612 * C32655 +
           (C18154 + C18155 + C18156) * C32612 * C32662 + C18165 * C17967) *
              C327 -
          ((C17972 * C1099 + C18276 + C18276 + C17964 * C1117 + C31688 * C1100 +
            C18277 + C18277 + C32520 * C1118 + C31695 * C1101 + C18278 +
            C18278 + C32512 * C1119) *
               C32612 * C17967 +
           (C17972 * C640 + C18279 + C18279 + C17964 * C650 + C31688 * C639 +
            C18280 + C18280 + C32520 * C649 + C31695 * C638 + C18281 + C18281 +
            C32512 * C648) *
               C32612 * C32662 +
           (C17972 * C332 + C18282 + C18282 + C17964 * C352 + C31688 * C333 +
            C18283 + C18283 + C32520 * C353 + C31695 * C334 + C18284 + C18284 +
            C32512 * C354) *
               C32612 * C32655) *
              C328 +
          ((C31695 * C335 + C18285 + C18285 + C32512 * C355 + C31688 * C336 +
            C18286 + C18286 + C32520 * C356 + C17972 * C337 + C18287 + C18287 +
            C17964 * C357) *
               C32612 * C32655 +
           (C31695 * C1102 + C18288 + C18288 + C32512 * C1120 + C31688 * C1103 +
            C18289 + C18289 + C32520 * C1121 + C17972 * C1104 + C18290 +
            C18290 + C17964 * C1122) *
               C32612 * C32662 +
           (C31695 * C1105 + C18291 + C18291 + C32512 * C1123 + C31688 * C1106 +
            C18292 + C18292 + C32520 * C1124 + C17972 * C1107 + C18293 +
            C18293 + C17964 * C1125) *
               C32612 * C17967) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[3] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
             C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 + C17977 +
             C17964 * C139) *
                C32612 * C32655 +
            (C18154 + C18155 + C18156) * C32612 * C32662 + C18165 * C17967) *
               C546 -
           ((C17972 * C1099 + C18276 + C18276 + C17964 * C1117 +
             C31688 * C1100 + C18277 + C18277 + C32520 * C1118 +
             C31695 * C1101 + C18278 + C18278 + C32512 * C1119) *
                C32612 * C17967 +
            (C17972 * C640 + C18279 + C18279 + C17964 * C650 + C31688 * C639 +
             C18280 + C18280 + C32520 * C649 + C31695 * C638 + C18281 + C18281 +
             C32512 * C648) *
                C32612 * C32662 +
            (C17972 * C332 + C18282 + C18282 + C17964 * C352 + C31688 * C333 +
             C18283 + C18283 + C32520 * C353 + C31695 * C334 + C18284 + C18284 +
             C32512 * C354) *
                C32612 * C32655) *
               C547) *
              C32556 * C454 +
          (((C31695 * C333 + C18619 + C18619 + C32512 * C353 + C31688 * C332 +
             C18620 + C18620 + C32520 * C352 + C17972 * C331 + C18621 + C18621 +
             C17964 * C351) *
                C32612 * C32655 +
            (C31695 * C639 + C18622 + C18622 + C32512 * C649 + C31688 * C640 +
             C18623 + C18623 + C32520 * C650 + C17972 * C641 + C18624 + C18624 +
             C17964 * C651) *
                C32612 * C32662 +
            (C31695 * C1100 + C18625 + C18625 + C32512 * C1118 +
             C31688 * C1099 + C18626 + C18626 + C32520 * C1117 +
             C17972 * C1472 + C18627 + C18627 + C17964 * C1474) *
                C32612 * C17967) *
               C547 -
           ((C18472 + C18471 + C18470) * C32612 * C17967 +
            (C18469 + C18468 + C18467) * C32612 * C32662 +
            (C17972 * C126 + C17990 + C17990 + C17964 * C140 + C31688 * C125 +
             C17991 + C17991 + C32520 * C139 + C31695 * C124 + C17992 + C17992 +
             C32512 * C138) *
                C32612 * C32655) *
               C546) *
              C32556 * C455)) /
        (p * q * std::sqrt(p + q));
    d2ee[4] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
            C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 + C17977 +
            C17964 * C139) *
               C32612 * C32655 +
           (C31695 * C229 + C17978 + C17978 + C32512 * C249 + C31688 * C228 +
            C17979 + C17979 + C32520 * C248 + C17972 * C227 + C17980 + C17980 +
            C17964 * C247) *
               C32612 * C32662 +
           (C31695 * C230 + C17981 + C17981 + C32512 * C250 + C31688 * C231 +
            C17982 + C17982 + C32520 * C251 + C17972 * C232 + C17983 + C17983 +
            C17964 * C252) *
               C32612 * C17967) *
              C32570 * C32556 * C110 -
          ((C17972 * C233 + C17984 + C17984 + C17964 * C253 + C31688 * C232 +
            C17985 + C17985 + C32520 * C252 + C31695 * C231 + C17986 + C17986 +
            C32512 * C251) *
               C32612 * C17967 +
           (C17972 * C226 + C17987 + C17987 + C17964 * C246 + C31688 * C227 +
            C17988 + C17988 + C32520 * C247 + C31695 * C228 + C17989 + C17989 +
            C32512 * C248) *
               C32612 * C32662 +
           (C17972 * C126 + C17990 + C17990 + C17964 * C140 + C31688 * C125 +
            C17991 + C17991 + C32520 * C139 + C31695 * C124 + C17992 + C17992 +
            C32512 * C138) *
               C32612 * C32655) *
              C32570 * C32556 * C111 +
          ((C31695 * C125 + C17993 + C17993 + C32512 * C139 + C31688 * C126 +
            C17994 + C17994 + C32520 * C140 + C17972 * C127 + C17995 + C17995 +
            C17964 * C141) *
               C32612 * C32655 +
           (C31695 * C227 + C17996 + C17996 + C32512 * C247 + C31688 * C226 +
            C17997 + C17997 + C32520 * C246 + C17972 * C225 + C17998 + C17998 +
            C17964 * C245) *
               C32612 * C32662 +
           (C31695 * C232 + C17999 + C17999 + C32512 * C252 + C31688 * C233 +
            C18000 + C18000 + C32520 * C253 + C17972 * C234 + C18001 + C18001 +
            C17964 * C254) *
               C32612 * C17967) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
            C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 + C17977 +
            C17964 * C139) *
               C32612 * C32655 +
           (C18154 + C18155 + C18156) * C32612 * C32662 + C18165 * C17967) *
              C32570 * C221 -
          ((C18160 + C18161 + C18162) * C32612 * C17967 +
           (C18159 + C18158 + C18157) * C32612 * C32662 +
           (C18156 + C18155 + C18154) * C32612 * C32655) *
              C32570 * C222 +
          (C18165 * C32655 + (C18162 + C18161 + C18160) * C32612 * C32662 +
           (C31695 * C920 + C18133 + C18133 + C32512 * C932 + C31688 * C921 +
            C18134 + C18134 + C32520 * C933 + C17972 * C922 + C18135 + C18135 +
            C17964 * C934) *
               C32612 * C17967) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[5] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
              C15955 + C15955 + C32517 * C138) *
                 C32824 +
             (C17211 + C17212) * C32699) *
                C32655 +
            ((C16112 + C16113) * C32824 + C17848 * C32699) * C32662 +
            C20221 * C17967) *
               C32570 * C452 -
           (((C16694 + C16695) * C32699 + (C16117 + C16116) * C32824) * C17967 +
            ((C16696 + C16697) * C32699 + (C16115 + C16114) * C32824) * C32662 +
            (C17850 * C32699 + (C16113 + C16112) * C32824) * C32655) *
               C32570 * C453) *
              C454 +
          ((((C16394 + C16395) * C32824 + (C17432 + C17433) * C32699) * C32655 +
            ((C16396 + C16397) * C32824 + (C20570 + C20571) * C32699) * C32662 +
            ((C16398 + C16399) * C32824 +
             (C15949 * C1631 + C16536 + C16536 + C15943 * C1637 +
              C15951 * C1632 + C16537 + C16537 + C32517 * C1638) *
                 C32699) *
                C17967) *
               C32570 * C453 -
           (((C20571 + C20570) * C32699 + (C16397 + C16396) * C32824) * C17967 +
            ((C17433 + C17432) * C32699 + (C16395 + C16394) * C32824) * C32662 +
            ((C17651 + C17650) * C32699 +
             (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
              C15969 + C15969 + C15943 * C138) *
                 C32824) *
                C32655) *
               C32570 * C452) *
              C455)) /
        (p * q * std::sqrt(p + q));
    d2ee[6] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
              C15955 + C15955 + C32517 * C138) *
                 C32824 +
             (C17211 + C17212) * C32699) *
                C32655 +
            ((C16112 + C16113) * C32824 + C17848 * C32699) * C32662 +
            C20221 * C17967) *
               C546 -
           (((C17022 + C17023) * C32699 + C20960 * C32824) * C17967 +
            (C17849 * C32699 + C17850 * C32824) * C32662 +
            ((C17214 + C17213) * C32699 + (C17212 + C17211) * C32824) *
                C32655) *
               C547) *
              C452 +
          (((C17848 * C32824 + C17178 * C32699) * C32655 +
            (C20219 * C32824 + (C17023 + C17022) * C32699) * C32662 +
            ((C16695 + C16694) * C32824 +
             (C15949 * C6436 + C16236 + C16236 + C15943 * C6442 +
              C15951 * C7315 + C16237 + C16237 + C32517 * C7317) *
                 C32699) *
                C17967) *
               C547 -
           (((C16694 + C16695) * C32699 + (C16117 + C16116) * C32824) * C17967 +
            (C20960 * C32699 + (C16115 + C16114) * C32824) * C32662 +
            (C17850 * C32699 + (C16113 + C16112) * C32824) * C32655) *
               C546) *
              C453) *
         C32544) /
        (p * q * std::sqrt(p + q));
    d2ee[7] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32824 +
            (C17211 + C17212) * C32699) *
               C32655 +
           ((C16112 + C16113) * C32824 + C17848 * C32699) * C32662 +
           C20221 * C17967) *
              C32570 * C221 -
          (((C16694 + C16695) * C32699 + (C16117 + C16116) * C32824) * C17967 +
           ((C16696 + C16697) * C32699 + (C16115 + C16114) * C32824) * C32662 +
           (C17850 * C32699 + (C16113 + C16112) * C32824) * C32655) *
              C32570 * C222 +
          (C20221 * C32655 +
           (C16121 * C32824 + (C16695 + C16694) * C32699) * C32662 +
           ((C16119 + C16118) * C32824 +
            (C15949 * C6435 + C16680 + C16680 + C15943 * C6441 +
             C15951 * C6646 + C16681 + C16681 + C32517 * C6648) *
                C32699) *
               C17967) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32824 +
            (C17211 + C17212) * C32699) *
               C32655 +
           ((C16112 + C16113) * C32824 + C17848 * C32699) * C32662 +
           (C16120 * C32824 + (C16697 + C16696) * C32699) * C17967) *
              C32570 * C32556 * C110 -
          (((C15951 * C1099 + C16535 + C16535 + C32517 * C1117 +
             C15949 * C1100 + C16534 + C16534 + C15943 * C1118) *
                C32699 +
            (C16397 + C16396) * C32824) *
               C17967 +
           ((C17433 + C17432) * C32699 + (C16395 + C16394) * C32824) * C32662 +
           ((C17651 + C17650) * C32699 +
            (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
             C15969 + C15969 + C15943 * C138) *
                C32824) *
               C32655) *
              C32570 * C32556 * C111 +
          (((C15949 * C125 + C15970 + C15970 + C15943 * C139 + C15951 * C126 +
             C15971 + C15971 + C32517 * C140) *
                C32824 +
            (C15949 * C332 + C16850 + C16850 + C15943 * C352 + C15951 * C331 +
             C16851 + C16851 + C32517 * C351) *
                C32699) *
               C32655 +
           ((C15949 * C227 + C15972 + C15972 + C15943 * C247 + C15951 * C226 +
             C15973 + C15973 + C32517 * C246) *
                C32824 +
            (C15949 * C640 + C16854 + C16854 + C15943 * C650 + C15951 * C641 +
             C16855 + C16855 + C32517 * C651) *
                C32699) *
               C32662 +
           ((C15949 * C232 + C15974 + C15974 + C15943 * C252 + C15951 * C233 +
             C15975 + C15975 + C32517 * C253) *
                C32824 +
            (C15949 * C1099 + C20070 + C20070 + C15943 * C1117 +
             C15951 * C1472 + C20071 + C20071 + C32517 * C1474) *
                C32699) *
               C17967) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32824 +
            (C17211 + C17212) * C32699) *
               C32655 +
           ((C16112 + C16113) * C32824 + C17848 * C32699) * C32662 +
           C20221 * C17967) *
              C327 -
          (((C17022 + C17023) * C32699 + (C16696 + C16697) * C32824) * C17967 +
           (C17849 * C32699 + C17850 * C32824) * C32662 +
           ((C17214 + C17213) * C32699 + (C17212 + C17211) * C32824) * C32655) *
              C328 +
          ((C17219 * C32824 + (C17218 + C17217) * C32699) * C32655 +
           (C17178 * C32824 + (C17216 + C17215) * C32699) * C32662 +
           ((C17023 + C17022) * C32824 +
            (C15949 * C7129 + C17851 + C17851 + C15943 * C7135 +
             C15951 * C7491 + C17852 + C17852 + C32517 * C7493) *
                C32699) *
               C17967) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[8] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
              C15955 + C15955 + C32517 * C138) *
                 C32824 +
             (C17211 + C17212) * C32699) *
                C32655 +
            ((C16112 + C16113) * C32824 + C17848 * C32699) * C32662 +
            C20221 * C17967) *
               C546 -
           (((C17022 + C17023) * C32699 + (C16696 + C16697) * C32824) * C17967 +
            (C17849 * C32699 + C17850 * C32824) * C32662 +
            ((C17214 + C17213) * C32699 + (C17212 + C17211) * C32824) *
                C32655) *
               C547) *
              C32556 * C454 +
          ((((C17650 + C17651) * C32824 + (C17652 + C17653) * C32699) * C32655 +
            ((C17432 + C17433) * C32824 + (C17434 + C17435) * C32699) * C32662 +
            ((C20570 + C20571) * C32824 +
             (C15949 * C1106 + C17422 + C17422 + C15943 * C1124 +
              C15951 * C1107 + C17423 + C17423 + C32517 * C1125) *
                 C32699) *
                C17967) *
               C547 -
           (((C20571 + C20570) * C32699 + (C16397 + C16396) * C32824) * C17967 +
            ((C17433 + C17432) * C32699 + (C16395 + C16394) * C32824) * C32662 +
            ((C17651 + C17650) * C32699 +
             (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
              C15969 + C15969 + C15943 * C138) *
                 C32824) *
                C32655) *
               C546) *
              C32556 * C455)) /
        (p * q * std::sqrt(p + q));
    d2ee[9] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32824 +
            (C17211 + C17212) * C32699) *
               C32655 +
           ((C16112 + C16113) * C32824 + C17848 * C32699) * C32662 +
           (C16120 * C32824 + (C16697 + C16696) * C32699) * C17967) *
              C32570 * C32556 * C110 -
          (((C15951 * C1099 + C16535 + C16535 + C32517 * C1117 +
             C15949 * C1100 + C16534 + C16534 + C15943 * C1118) *
                C32699 +
            (C16397 + C16396) * C32824) *
               C17967 +
           ((C17433 + C17432) * C32699 + (C16395 + C16394) * C32824) * C32662 +
           ((C17651 + C17650) * C32699 +
            (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
             C15969 + C15969 + C15943 * C138) *
                C32824) *
               C32655) *
              C32570 * C32556 * C111 +
          (((C15949 * C125 + C15970 + C15970 + C15943 * C139 + C15951 * C126 +
             C15971 + C15971 + C32517 * C140) *
                C32824 +
            (C15949 * C332 + C16850 + C16850 + C15943 * C352 + C15951 * C331 +
             C16851 + C16851 + C32517 * C351) *
                C32699) *
               C32655 +
           ((C15949 * C227 + C15972 + C15972 + C15943 * C247 + C15951 * C226 +
             C15973 + C15973 + C32517 * C246) *
                C32824 +
            (C15949 * C640 + C16854 + C16854 + C15943 * C650 + C15951 * C641 +
             C16855 + C16855 + C32517 * C651) *
                C32699) *
               C32662 +
           ((C15949 * C232 + C15974 + C15974 + C15943 * C252 + C15951 * C233 +
             C15975 + C15975 + C32517 * C253) *
                C32824 +
            (C15949 * C1099 + C20070 + C20070 + C15943 * C1117 +
             C15951 * C1472 + C20071 + C20071 + C32517 * C1474) *
                C32699) *
               C17967) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32824 +
            (C17211 + C17212) * C32699) *
               C32655 +
           ((C16112 + C16113) * C32824 + C17848 * C32699) * C32662 +
           C20221 * C17967) *
              C32570 * C221 -
          (((C16694 + C16695) * C32699 + (C16117 + C16116) * C32824) * C17967 +
           ((C16696 + C16697) * C32699 + (C16115 + C16114) * C32824) * C32662 +
           (C17850 * C32699 + (C16113 + C16112) * C32824) * C32655) *
              C32570 * C222 +
          (C20221 * C32655 +
           (C16121 * C32824 + (C16695 + C16694) * C32699) * C32662 +
           ((C16119 + C16118) * C32824 +
            (C15949 * C6435 + C16680 + C16680 + C15943 * C6441 +
             C15951 * C6646 + C16681 + C16681 + C32517 * C6648) *
                C32699) *
               C17967) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[10] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32612 * C32893 +
            (C16112 + C16113) * C32612 * C32889 + C16122 * C32879 +
            C16123 * C32831) *
               C32570 * C452 -
           ((C16118 + C16119) * C32612 * C32831 +
            (C16117 + C16116) * C32612 * C32879 +
            (C16115 + C16114) * C32612 * C32889 +
            (C16113 + C16112) * C32612 * C32893) *
               C32570 * C453) *
              C454 +
          (((C16394 + C16395) * C32612 * C32893 +
            (C16396 + C16397) * C32612 * C32889 +
            (C16398 + C16399) * C32612 * C32879 +
            (C15949 * C921 + C16380 + C16380 + C15943 * C933 + C15951 * C922 +
             C16381 + C16381 + C32517 * C934) *
                C32612 * C32831) *
               C32570 * C453 -
           ((C16399 + C16398) * C32612 * C32831 +
            (C16397 + C16396) * C32612 * C32879 +
            (C16395 + C16394) * C32612 * C32889 +
            (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
             C15969 + C15969 + C15943 * C138) *
                C32612 * C32893) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
             C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
             C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
                C32612 * C15105 +
            (C15278 + C15279 + C15280 + C15281) * C32612 * C32659) *
               C32570 * C452 -
           ((C15282 + C15283 + C15284 + C15285) * C32612 * C32659 +
            (C15281 + C15280 + C15279 + C15278) * C32612 * C15105) *
               C32570 * C453) *
              C454 +
          (((C15550 + C15551 + C15552 + C15553) * C32612 * C15105 +
            (C15107 * C231 + C15538 + C15538 + C32892 * C251 + C15109 * C232 +
             C15539 + C15539 + C32885 * C252 + C15111 * C233 + C15540 + C15540 +
             C32872 * C253 + C15113 * C234 + C15541 + C15541 + C32822 * C254) *
                C32612 * C32659) *
               C32570 * C453 -
           ((C15553 + C15552 + C15551 + C15550) * C32612 * C32659 +
            (C15113 * C127 + C15128 + C15128 + C32822 * C141 + C15111 * C126 +
             C15129 + C15129 + C32872 * C140 + C15109 * C125 + C15130 + C15130 +
             C32885 * C139 + C15107 * C124 + C15131 + C15131 + C32892 * C138) *
                C32612 * C15105) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
              C15955 + C15955 + C32517 * C138) *
                 C32887 +
             (C17211 + C17212) * C32876 + C17219 * C32857) *
                C15105 +
            ((C16112 + C16113) * C32887 + (C16699 + C16698) * C32876 +
             C17178 * C32857) *
                C32659) *
               C32570 * C452 -
           (((C17022 + C17023) * C32857 + (C16696 + C16697) * C32876 +
             (C16115 + C16114) * C32887) *
                C32659 +
            ((C17021 + C17020) * C32857 + (C16698 + C16699) * C32876 +
             (C16113 + C16112) * C32887) *
                C15105) *
               C32570 * C453) *
              C454 +
          ((((C16394 + C16395) * C32887 + (C17432 + C17433) * C32876 +
             (C17434 + C17435) * C32857) *
                C15105 +
            ((C16396 + C16397) * C32887 +
             (C15949 * C1100 + C16534 + C16534 + C15943 * C1118 +
              C15951 * C1099 + C16535 + C16535 + C32517 * C1117) *
                 C32876 +
             (C15949 * C1106 + C17422 + C17422 + C15943 * C1124 +
              C15951 * C1107 + C17423 + C17423 + C32517 * C1125) *
                 C32857) *
                C32659) *
               C32570 * C453 -
           (((C17435 + C17434) * C32857 + (C17433 + C17432) * C32876 +
             (C16395 + C16394) * C32887) *
                C32659 +
            ((C15951 * C337 + C16848 + C16848 + C32517 * C357 + C15949 * C336 +
              C16849 + C16849 + C15943 * C356) *
                 C32857 +
             (C15951 * C332 + C16531 + C16531 + C32517 * C352 + C15949 * C333 +
              C16530 + C16530 + C15943 * C353) *
                 C32876 +
             (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
              C15969 + C15969 + C15943 * C138) *
                 C32887) *
                C15105) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[11] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32612 * C32893 +
            (C16112 + C16113) * C32612 * C32889 + C16122 * C32879 +
            C16123 * C32831) *
               C546 -
           ((C16694 + C16695) * C32612 * C32831 +
            (C16696 + C16697) * C32612 * C32879 +
            (C16698 + C16699) * C32612 * C32889 +
            (C15951 * C333 + C16228 + C16228 + C32517 * C353 + C15949 * C334 +
             C16229 + C16229 + C15943 * C354) *
                C32612 * C32893) *
               C547) *
              C452 +
          (((C16699 + C16698) * C32612 * C32893 +
            (C16697 + C16696) * C32612 * C32889 +
            (C16695 + C16694) * C32612 * C32879 +
            (C15949 * C6435 + C16680 + C16680 + C15943 * C6441 +
             C15951 * C6646 + C16681 + C16681 + C32517 * C6648) *
                C32612 * C32831) *
               C547 -
           ((C16118 + C16119) * C32612 * C32831 +
            (C16117 + C16116) * C32612 * C32879 +
            (C16115 + C16114) * C32612 * C32889 +
            (C16113 + C16112) * C32612 * C32893) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
             C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
             C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
                C32612 * C15105 +
            (C15278 + C15279 + C15280 + C15281) * C32612 * C32659) *
               C546 -
           ((C15842 + C15843 + C15844 + C15845) * C32612 * C32659 +
            (C15113 * C331 + C15388 + C15388 + C32822 * C351 + C15111 * C332 +
             C15389 + C15389 + C32872 * C352 + C15109 * C333 + C15390 + C15390 +
             C32885 * C353 + C15107 * C334 + C15391 + C15391 + C32892 * C354) *
                C32612 * C15105) *
               C547) *
              C452 +
          (((C15845 + C15844 + C15843 + C15842) * C32612 * C15105 +
            (C15107 * C1101 + C15830 + C15830 + C32892 * C1119 +
             C15109 * C1100 + C15831 + C15831 + C32885 * C1118 +
             C15111 * C1099 + C15832 + C15832 + C32872 * C1117 +
             C15113 * C1472 + C15833 + C15833 + C32822 * C1474) *
                C32612 * C32659) *
               C547 -
           ((C15282 + C15283 + C15284 + C15285) * C32612 * C32659 +
            (C15281 + C15280 + C15279 + C15278) * C32612 * C15105) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
              C15955 + C15955 + C32517 * C138) *
                 C32887 +
             (C17211 + C17212) * C32876 + C17219 * C32857) *
                C15105 +
            ((C16112 + C16113) * C32887 + C17848 * C32876 + C17178 * C32857) *
                C32659) *
               C546 -
           (((C17215 + C17216) * C32857 + C17849 * C32876 + C17850 * C32887) *
                C32659 +
            ((C17217 + C17218) * C32857 + (C17214 + C17213) * C32876 +
             (C17212 + C17211) * C32887) *
                C15105) *
               C547) *
              C452 +
          (((C17848 * C32887 + C17178 * C32876 + (C17216 + C17215) * C32857) *
                C15105 +
            ((C16697 + C16696) * C32887 + (C17023 + C17022) * C32876 +
             (C15949 * C7129 + C17851 + C17851 + C15943 * C7135 +
              C15951 * C7491 + C17852 + C17852 + C32517 * C7493) *
                 C32857) *
                C32659) *
               C547 -
           (((C17022 + C17023) * C32857 + (C16696 + C16697) * C32876 +
             (C16115 + C16114) * C32887) *
                C32659 +
            (C17849 * C32857 + C17850 * C32876 + (C16113 + C16112) * C32887) *
                C15105) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[12] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C15107 * C123 + C15116 + C15116 + C32892 * C137 +
                C15109 * C124 + C15117 + C15117 + C32885 * C138 +
                C15111 * C125 + C15118 + C15118 + C32872 * C139 +
                C15113 * C126 + C15119 + C15119 + C32822 * C140) *
                   C32612 * C15105 +
               (C15107 * C229 + C15120 + C15120 + C32892 * C249 +
                C15109 * C228 + C15121 + C15121 + C32885 * C248 +
                C15111 * C227 + C15122 + C15122 + C32872 * C247 +
                C15113 * C226 + C15123 + C15123 + C32822 * C246) *
                   C32612 * C32659) *
                  C32570 * C32556 * C110 -
              ((C15113 * C225 + C15124 + C15124 + C32822 * C245 +
                C15111 * C226 + C15125 + C15125 + C32872 * C246 +
                C15109 * C227 + C15126 + C15126 + C32885 * C247 +
                C15107 * C228 + C15127 + C15127 + C32892 * C248) *
                   C32612 * C32659 +
               (C15113 * C127 + C15128 + C15128 + C32822 * C141 +
                C15111 * C126 + C15129 + C15129 + C32872 * C140 +
                C15109 * C125 + C15130 + C15130 + C32885 * C139 +
                C15107 * C124 + C15131 + C15131 + C32892 * C138) *
                   C32612 * C15105) *
                  C32570 * C32556 * C111 +
              ((C15107 * C125 + C15132 + C15132 + C32892 * C139 +
                C15109 * C126 + C15133 + C15133 + C32885 * C140 +
                C15111 * C127 + C15134 + C15134 + C32872 * C141 +
                C15113 * C128 + C15135 + C15135 + C32822 * C142) *
                   C32612 * C15105 +
               (C15107 * C227 + C15136 + C15136 + C32892 * C247 +
                C15109 * C226 + C15137 + C15137 + C32885 * C246 +
                C15111 * C225 + C15138 + C15138 + C32872 * C245 +
                C15113 * C456 + C15139 + C15139 + C32822 * C458) *
                   C32612 * C32659) *
                  C32570 * C32556 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C15107 * C123 + C15116 + C15116 + C32892 * C137 +
                C15109 * C124 + C15117 + C15117 + C32885 * C138 +
                C15111 * C125 + C15118 + C15118 + C32872 * C139 +
                C15113 * C126 + C15119 + C15119 + C32822 * C140) *
                   C32612 * C15105 +
               (C15278 + C15279 + C15280 + C15281) * C32612 * C32659) *
                  C32570 * C221 -
              ((C15282 + C15283 + C15284 + C15285) * C32612 * C32659 +
               (C15281 + C15280 + C15279 + C15278) * C32612 * C15105) *
                  C32570 * C222 +
              ((C15285 + C15284 + C15283 + C15282) * C32612 * C15105 +
               (C15107 * C919 + C15258 + C15258 + C32892 * C931 +
                C15109 * C918 + C15259 + C15259 + C32885 * C930 +
                C15111 * C917 + C15260 + C15260 + C32872 * C929 +
                C15113 * C1290 + C15261 + C15261 + C32822 * C1292) *
                   C32612 * C32659) *
                  C32570 * C223) *
             C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
            C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
            C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
               C32612 * C15105 +
           (C15278 + C15279 + C15280 + C15281) * C32612 * C32659) *
              C327 -
          ((C15113 * C641 + C15384 + C15384 + C32822 * C651 + C15111 * C640 +
            C15385 + C15385 + C32872 * C650 + C15109 * C639 + C15386 + C15386 +
            C32885 * C649 + C15107 * C638 + C15387 + C15387 + C32892 * C648) *
               C32612 * C32659 +
           (C15113 * C331 + C15388 + C15388 + C32822 * C351 + C15111 * C332 +
            C15389 + C15389 + C32872 * C352 + C15109 * C333 + C15390 + C15390 +
            C32885 * C353 + C15107 * C334 + C15391 + C15391 + C32892 * C354) *
               C32612 * C15105) *
              C328 +
          ((C15107 * C335 + C15392 + C15392 + C32892 * C355 + C15109 * C336 +
            C15393 + C15393 + C32885 * C356 + C15111 * C337 + C15394 + C15394 +
            C32872 * C357 + C15113 * C338 + C15395 + C15395 + C32822 * C358) *
               C32612 * C15105 +
           (C15107 * C1102 + C15396 + C15396 + C32892 * C1120 + C15109 * C1103 +
            C15397 + C15397 + C32885 * C1121 + C15111 * C1104 + C15398 +
            C15398 + C32872 * C1122 + C15113 * C2231 + C15399 + C15399 +
            C32822 * C2233) *
               C32612 * C32659) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
            C15955 + C15955 + C32517 * C138) *
               C32612 * C32893 +
           (C15949 * C229 + C15956 + C15956 + C15943 * C249 + C15951 * C228 +
            C15957 + C15957 + C32517 * C248) *
               C32612 * C32889 +
           (C15949 * C230 + C15958 + C15958 + C15943 * C250 + C15951 * C231 +
            C15959 + C15959 + C32517 * C251) *
               C32612 * C32879 +
           (C15949 * C919 + C15960 + C15960 + C15943 * C931 + C15951 * C918 +
            C15961 + C15961 + C32517 * C930) *
               C32612 * C32831) *
              C32570 * C32556 * C110 -
          ((C15951 * C917 + C15962 + C15962 + C32517 * C929 + C15949 * C918 +
            C15963 + C15963 + C15943 * C930) *
               C32612 * C32831 +
           (C15951 * C232 + C15964 + C15964 + C32517 * C252 + C15949 * C231 +
            C15965 + C15965 + C15943 * C251) *
               C32612 * C32879 +
           (C15951 * C227 + C15966 + C15966 + C32517 * C247 + C15949 * C228 +
            C15967 + C15967 + C15943 * C248) *
               C32612 * C32889 +
           (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
            C15969 + C15969 + C15943 * C138) *
               C32612 * C32893) *
              C32570 * C32556 * C111 +
          ((C15949 * C125 + C15970 + C15970 + C15943 * C139 + C15951 * C126 +
            C15971 + C15971 + C32517 * C140) *
               C32612 * C32893 +
           (C15949 * C227 + C15972 + C15972 + C15943 * C247 + C15951 * C226 +
            C15973 + C15973 + C32517 * C246) *
               C32612 * C32889 +
           (C15949 * C232 + C15974 + C15974 + C15943 * C252 + C15951 * C233 +
            C15975 + C15975 + C32517 * C253) *
               C32612 * C32879 +
           (C15949 * C917 + C15976 + C15976 + C15943 * C929 + C15951 * C1290 +
            C15977 + C15977 + C32517 * C1292) *
               C32612 * C32831) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
            C15955 + C15955 + C32517 * C138) *
               C32612 * C32893 +
           (C16112 + C16113) * C32612 * C32889 + C16122 * C32879 +
           C16123 * C32831) *
              C32570 * C221 -
          ((C16118 + C16119) * C32612 * C32831 +
           (C16117 + C16116) * C32612 * C32879 +
           (C16115 + C16114) * C32612 * C32889 +
           (C16113 + C16112) * C32612 * C32893) *
              C32570 * C222 +
          (C16122 * C32893 + C16123 * C32889 +
           (C16119 + C16118) * C32612 * C32879 +
           (C15949 * C6335 + C16094 + C16094 + C15943 * C6339 + C15951 * C6536 +
            C16095 + C16095 + C32517 * C6538) *
               C32612 * C32831) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
            C15955 + C15955 + C32517 * C138) *
               C32612 * C32893 +
           (C16112 + C16113) * C32612 * C32889 + C16122 * C32879 +
           C16123 * C32831) *
              C327 -
          ((C15951 * C1631 + C16222 + C16222 + C32517 * C1637 + C15949 * C1630 +
            C16223 + C16223 + C15943 * C1636) *
               C32612 * C32831 +
           (C15951 * C1100 + C16224 + C16224 + C32517 * C1118 + C15949 * C1101 +
            C16225 + C16225 + C15943 * C1119) *
               C32612 * C32879 +
           (C15951 * C639 + C16226 + C16226 + C32517 * C649 + C15949 * C638 +
            C16227 + C16227 + C15943 * C648) *
               C32612 * C32889 +
           (C15951 * C333 + C16228 + C16228 + C32517 * C353 + C15949 * C334 +
            C16229 + C16229 + C15943 * C354) *
               C32612 * C32893) *
              C328 +
          ((C15949 * C335 + C16230 + C16230 + C15943 * C355 + C15951 * C336 +
            C16231 + C16231 + C32517 * C356) *
               C32612 * C32893 +
           (C15949 * C1102 + C16232 + C16232 + C15943 * C1120 + C15951 * C1103 +
            C16233 + C16233 + C32517 * C1121) *
               C32612 * C32889 +
           (C15949 * C1105 + C16234 + C16234 + C15943 * C1123 + C15951 * C1106 +
            C16235 + C16235 + C32517 * C1124) *
               C32612 * C32879 +
           (C15949 * C6436 + C16236 + C16236 + C15943 * C6442 + C15951 * C7315 +
            C16237 + C16237 + C32517 * C7317) *
               C32612 * C32831) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32887 +
            (C15949 * C334 + C16229 + C16229 + C15943 * C354 + C15951 * C333 +
             C16228 + C16228 + C32517 * C353) *
                C32876 +
            (C15949 * C335 + C16230 + C16230 + C15943 * C355 + C15951 * C336 +
             C16231 + C16231 + C32517 * C356) *
                C32857) *
               C15105 +
           ((C16112 + C16113) * C32887 + (C16699 + C16698) * C32876 +
            (C15949 * C1102 + C16232 + C16232 + C15943 * C1120 +
             C15951 * C1103 + C16233 + C16233 + C32517 * C1121) *
                C32857) *
               C32659) *
              C32570 * C32556 * C110 -
          (((C15951 * C1104 + C16846 + C16846 + C32517 * C1122 +
             C15949 * C1103 + C16847 + C16847 + C15943 * C1121) *
                C32857 +
            (C15951 * C640 + C16533 + C16533 + C32517 * C650 + C15949 * C639 +
             C16532 + C16532 + C15943 * C649) *
                C32876 +
            (C16395 + C16394) * C32887) *
               C32659 +
           ((C15951 * C337 + C16848 + C16848 + C32517 * C357 + C15949 * C336 +
             C16849 + C16849 + C15943 * C356) *
                C32857 +
            (C15951 * C332 + C16531 + C16531 + C32517 * C352 + C15949 * C333 +
             C16530 + C16530 + C15943 * C353) *
                C32876 +
            (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
             C15969 + C15969 + C15943 * C138) *
                C32887) *
               C15105) *
              C32570 * C32556 * C111 +
          (((C15949 * C125 + C15970 + C15970 + C15943 * C139 + C15951 * C126 +
             C15971 + C15971 + C32517 * C140) *
                C32887 +
            (C15949 * C332 + C16850 + C16850 + C15943 * C352 + C15951 * C331 +
             C16851 + C16851 + C32517 * C351) *
                C32876 +
            (C15949 * C337 + C16852 + C16852 + C15943 * C357 + C15951 * C338 +
             C16853 + C16853 + C32517 * C358) *
                C32857) *
               C15105 +
           ((C15949 * C227 + C15972 + C15972 + C15943 * C247 + C15951 * C226 +
             C15973 + C15973 + C32517 * C246) *
                C32887 +
            (C15949 * C640 + C16854 + C16854 + C15943 * C650 + C15951 * C641 +
             C16855 + C16855 + C32517 * C651) *
                C32876 +
            (C15949 * C1104 + C16856 + C16856 + C15943 * C1122 +
             C15951 * C2231 + C16857 + C16857 + C32517 * C2233) *
                C32857) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32887 +
            (C15949 * C334 + C16229 + C16229 + C15943 * C354 + C15951 * C333 +
             C16228 + C16228 + C32517 * C353) *
                C32876 +
            (C15949 * C335 + C16230 + C16230 + C15943 * C355 + C15951 * C336 +
             C16231 + C16231 + C32517 * C356) *
                C32857) *
               C15105 +
           ((C16112 + C16113) * C32887 + (C16699 + C16698) * C32876 +
            (C17020 + C17021) * C32857) *
               C32659) *
              C32570 * C221 -
          (((C17022 + C17023) * C32857 + (C16696 + C16697) * C32876 +
            (C16115 + C16114) * C32887) *
               C32659 +
           ((C17021 + C17020) * C32857 + (C16698 + C16699) * C32876 +
            (C16113 + C16112) * C32887) *
               C15105) *
              C32570 * C222 +
          ((C16120 * C32887 + (C16697 + C16696) * C32876 +
            (C17023 + C17022) * C32857) *
               C15105 +
           (C16121 * C32887 + (C16695 + C16694) * C32876 +
            (C15949 * C6436 + C16236 + C16236 + C15943 * C6442 +
             C15951 * C7315 + C16237 + C16237 + C32517 * C7317) *
                C32857) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32887 +
            (C17211 + C17212) * C32876 + C17219 * C32857) *
               C15105 +
           ((C16112 + C16113) * C32887 + (C16699 + C16698) * C32876 +
            C17178 * C32857) *
               C32659) *
              C327 -
          (((C17215 + C17216) * C32857 + (C17021 + C17020) * C32876 +
            (C16698 + C16699) * C32887) *
               C32659 +
           ((C17217 + C17218) * C32857 + (C17214 + C17213) * C32876 +
            (C17212 + C17211) * C32887) *
               C15105) *
              C328 +
          ((C17219 * C32887 + (C17218 + C17217) * C32876 +
            (C15949 * C2017 + C17191 + C17191 + C15943 * C2029 +
             C15951 * C2018 + C17192 + C17192 + C32517 * C2030) *
                C32857) *
               C15105 +
           (C17178 * C32887 + (C17216 + C17215) * C32876 +
            (C15949 * C7130 + C17193 + C17193 + C15943 * C7136 +
             C15951 * C12316 + C17194 + C17194 + C32517 * C12318) *
                C32857) *
               C32659) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[13] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32612 * C32893 +
            (C16112 + C16113) * C32612 * C32889 + C16122 * C32879 +
            C16123 * C32831) *
               C546 -
           ((C15951 * C1631 + C16222 + C16222 + C32517 * C1637 +
             C15949 * C1630 + C16223 + C16223 + C15943 * C1636) *
                C32612 * C32831 +
            (C15951 * C1100 + C16224 + C16224 + C32517 * C1118 +
             C15949 * C1101 + C16225 + C16225 + C15943 * C1119) *
                C32612 * C32879 +
            (C15951 * C639 + C16226 + C16226 + C32517 * C649 + C15949 * C638 +
             C16227 + C16227 + C15943 * C648) *
                C32612 * C32889 +
            (C15951 * C333 + C16228 + C16228 + C32517 * C353 + C15949 * C334 +
             C16229 + C16229 + C15943 * C354) *
                C32612 * C32893) *
               C547) *
              C32556 * C454 +
          (((C15949 * C333 + C16530 + C16530 + C15943 * C353 + C15951 * C332 +
             C16531 + C16531 + C32517 * C352) *
                C32612 * C32893 +
            (C15949 * C639 + C16532 + C16532 + C15943 * C649 + C15951 * C640 +
             C16533 + C16533 + C32517 * C650) *
                C32612 * C32889 +
            (C15949 * C1100 + C16534 + C16534 + C15943 * C1118 +
             C15951 * C1099 + C16535 + C16535 + C32517 * C1117) *
                C32612 * C32879 +
            (C15949 * C1631 + C16536 + C16536 + C15943 * C1637 +
             C15951 * C1632 + C16537 + C16537 + C32517 * C1638) *
                C32612 * C32831) *
               C547 -
           ((C16399 + C16398) * C32612 * C32831 +
            (C16397 + C16396) * C32612 * C32879 +
            (C16395 + C16394) * C32612 * C32889 +
            (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
             C15969 + C15969 + C15943 * C138) *
                C32612 * C32893) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
             C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
             C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
                C32612 * C15105 +
            (C15278 + C15279 + C15280 + C15281) * C32612 * C32659) *
               C546 -
           ((C15113 * C641 + C15384 + C15384 + C32822 * C651 + C15111 * C640 +
             C15385 + C15385 + C32872 * C650 + C15109 * C639 + C15386 + C15386 +
             C32885 * C649 + C15107 * C638 + C15387 + C15387 + C32892 * C648) *
                C32612 * C32659 +
            (C15113 * C331 + C15388 + C15388 + C32822 * C351 + C15111 * C332 +
             C15389 + C15389 + C32872 * C352 + C15109 * C333 + C15390 + C15390 +
             C32885 * C353 + C15107 * C334 + C15391 + C15391 + C32892 * C354) *
                C32612 * C15105) *
               C547) *
              C32556 * C454 +
          (((C15107 * C333 + C15684 + C15684 + C32892 * C353 + C15109 * C332 +
             C15685 + C15685 + C32885 * C352 + C15111 * C331 + C15686 + C15686 +
             C32872 * C351 + C15113 * C330 + C15687 + C15687 + C32822 * C350) *
                C32612 * C15105 +
            (C15107 * C639 + C15688 + C15688 + C32892 * C649 + C15109 * C640 +
             C15689 + C15689 + C32885 * C650 + C15111 * C641 + C15690 + C15690 +
             C32872 * C651 + C15113 * C642 + C15691 + C15691 + C32822 * C652) *
                C32612 * C32659) *
               C547 -
           ((C15553 + C15552 + C15551 + C15550) * C32612 * C32659 +
            (C15113 * C127 + C15128 + C15128 + C32822 * C141 + C15111 * C126 +
             C15129 + C15129 + C32872 * C140 + C15109 * C125 + C15130 + C15130 +
             C32885 * C139 + C15107 * C124 + C15131 + C15131 + C32892 * C138) *
                C32612 * C15105) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
              C15955 + C15955 + C32517 * C138) *
                 C32887 +
             (C17211 + C17212) * C32876 + C17219 * C32857) *
                C15105 +
            ((C16112 + C16113) * C32887 + (C16699 + C16698) * C32876 +
             C17178 * C32857) *
                C32659) *
               C546 -
           (((C17215 + C17216) * C32857 + (C17021 + C17020) * C32876 +
             (C16698 + C16699) * C32887) *
                C32659 +
            ((C17217 + C17218) * C32857 + (C17214 + C17213) * C32876 +
             (C17212 + C17211) * C32887) *
                C15105) *
               C547) *
              C32556 * C454 +
          ((((C17650 + C17651) * C32887 + (C17652 + C17653) * C32876 +
             (C15949 * C2015 + C17638 + C17638 + C15943 * C2027 +
              C15951 * C2014 + C17639 + C17639 + C32517 * C2026) *
                 C32857) *
                C15105 +
            ((C17432 + C17433) * C32887 + (C17434 + C17435) * C32876 +
             (C15949 * C2566 + C17640 + C17640 + C15943 * C2572 +
              C15951 * C2567 + C17641 + C17641 + C32517 * C2573) *
                 C32857) *
                C32659) *
               C547 -
           (((C17435 + C17434) * C32857 + (C17433 + C17432) * C32876 +
             (C16395 + C16394) * C32887) *
                C32659 +
            ((C17653 + C17652) * C32857 + (C17651 + C17650) * C32876 +
             (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
              C15969 + C15969 + C15943 * C138) *
                 C32887) *
                C15105) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[14] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
            C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
            C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
               C32612 * C15105 +
           (C15278 + C15279 + C15280 + C15281) * C32612 * C32659) *
              C32570 * C221 -
          ((C15282 + C15283 + C15284 + C15285) * C32612 * C32659 +
           (C15281 + C15280 + C15279 + C15278) * C32612 * C15105) *
              C32570 * C222 +
          ((C15285 + C15284 + C15283 + C15282) * C32612 * C15105 +
           (C15107 * C919 + C15258 + C15258 + C32892 * C931 + C15109 * C918 +
            C15259 + C15259 + C32885 * C930 + C15111 * C917 + C15260 + C15260 +
            C32872 * C929 + C15113 * C1290 + C15261 + C15261 + C32822 * C1292) *
               C32612 * C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
            C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
            C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
               C32612 * C15105 +
           (C15107 * C229 + C15120 + C15120 + C32892 * C249 + C15109 * C228 +
            C15121 + C15121 + C32885 * C248 + C15111 * C227 + C15122 + C15122 +
            C32872 * C247 + C15113 * C226 + C15123 + C15123 + C32822 * C246) *
               C32612 * C32659) *
              C32570 * C32556 * C110 -
          ((C15113 * C225 + C15124 + C15124 + C32822 * C245 + C15111 * C226 +
            C15125 + C15125 + C32872 * C246 + C15109 * C227 + C15126 + C15126 +
            C32885 * C247 + C15107 * C228 + C15127 + C15127 + C32892 * C248) *
               C32612 * C32659 +
           (C15113 * C127 + C15128 + C15128 + C32822 * C141 + C15111 * C126 +
            C15129 + C15129 + C32872 * C140 + C15109 * C125 + C15130 + C15130 +
            C32885 * C139 + C15107 * C124 + C15131 + C15131 + C32892 * C138) *
               C32612 * C15105) *
              C32570 * C32556 * C111 +
          ((C15107 * C125 + C15132 + C15132 + C32892 * C139 + C15109 * C126 +
            C15133 + C15133 + C32885 * C140 + C15111 * C127 + C15134 + C15134 +
            C32872 * C141 + C15113 * C128 + C15135 + C15135 + C32822 * C142) *
               C32612 * C15105 +
           (C15107 * C227 + C15136 + C15136 + C32892 * C247 + C15109 * C226 +
            C15137 + C15137 + C32885 * C246 + C15111 * C225 + C15138 + C15138 +
            C32872 * C245 + C15113 * C456 + C15139 + C15139 + C32822 * C458) *
               C32612 * C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
            C15955 + C15955 + C32517 * C138) *
               C32612 * C32893 +
           (C15949 * C229 + C15956 + C15956 + C15943 * C249 + C15951 * C228 +
            C15957 + C15957 + C32517 * C248) *
               C32612 * C32889 +
           (C15949 * C230 + C15958 + C15958 + C15943 * C250 + C15951 * C231 +
            C15959 + C15959 + C32517 * C251) *
               C32612 * C32879 +
           (C15949 * C919 + C15960 + C15960 + C15943 * C931 + C15951 * C918 +
            C15961 + C15961 + C32517 * C930) *
               C32612 * C32831) *
              C32570 * C32556 * C110 -
          ((C15951 * C917 + C15962 + C15962 + C32517 * C929 + C15949 * C918 +
            C15963 + C15963 + C15943 * C930) *
               C32612 * C32831 +
           (C15951 * C232 + C15964 + C15964 + C32517 * C252 + C15949 * C231 +
            C15965 + C15965 + C15943 * C251) *
               C32612 * C32879 +
           (C15951 * C227 + C15966 + C15966 + C32517 * C247 + C15949 * C228 +
            C15967 + C15967 + C15943 * C248) *
               C32612 * C32889 +
           (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
            C15969 + C15969 + C15943 * C138) *
               C32612 * C32893) *
              C32570 * C32556 * C111 +
          ((C15949 * C125 + C15970 + C15970 + C15943 * C139 + C15951 * C126 +
            C15971 + C15971 + C32517 * C140) *
               C32612 * C32893 +
           (C15949 * C227 + C15972 + C15972 + C15943 * C247 + C15951 * C226 +
            C15973 + C15973 + C32517 * C246) *
               C32612 * C32889 +
           (C15949 * C232 + C15974 + C15974 + C15943 * C252 + C15951 * C233 +
            C15975 + C15975 + C32517 * C253) *
               C32612 * C32879 +
           (C15949 * C917 + C15976 + C15976 + C15943 * C929 + C15951 * C1290 +
            C15977 + C15977 + C32517 * C1292) *
               C32612 * C32831) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
            C15955 + C15955 + C32517 * C138) *
               C32612 * C32893 +
           (C16112 + C16113) * C32612 * C32889 + C16122 * C32879 +
           C16123 * C32831) *
              C32570 * C221 -
          ((C16118 + C16119) * C32612 * C32831 +
           (C16117 + C16116) * C32612 * C32879 +
           (C16115 + C16114) * C32612 * C32889 +
           (C16113 + C16112) * C32612 * C32893) *
              C32570 * C222 +
          (C16122 * C32893 + C16123 * C32889 +
           (C16119 + C16118) * C32612 * C32879 +
           (C15949 * C6335 + C16094 + C16094 + C15943 * C6339 + C15951 * C6536 +
            C16095 + C16095 + C32517 * C6538) *
               C32612 * C32831) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32887 +
            (C15949 * C334 + C16229 + C16229 + C15943 * C354 + C15951 * C333 +
             C16228 + C16228 + C32517 * C353) *
                C32876 +
            (C15949 * C335 + C16230 + C16230 + C15943 * C355 + C15951 * C336 +
             C16231 + C16231 + C32517 * C356) *
                C32857) *
               C15105 +
           ((C16112 + C16113) * C32887 + (C16699 + C16698) * C32876 +
            (C15949 * C1102 + C16232 + C16232 + C15943 * C1120 +
             C15951 * C1103 + C16233 + C16233 + C32517 * C1121) *
                C32857) *
               C32659) *
              C32570 * C32556 * C110 -
          (((C15951 * C1104 + C16846 + C16846 + C32517 * C1122 +
             C15949 * C1103 + C16847 + C16847 + C15943 * C1121) *
                C32857 +
            (C15951 * C640 + C16533 + C16533 + C32517 * C650 + C15949 * C639 +
             C16532 + C16532 + C15943 * C649) *
                C32876 +
            (C16395 + C16394) * C32887) *
               C32659 +
           ((C15951 * C337 + C16848 + C16848 + C32517 * C357 + C15949 * C336 +
             C16849 + C16849 + C15943 * C356) *
                C32857 +
            (C15951 * C332 + C16531 + C16531 + C32517 * C352 + C15949 * C333 +
             C16530 + C16530 + C15943 * C353) *
                C32876 +
            (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
             C15969 + C15969 + C15943 * C138) *
                C32887) *
               C15105) *
              C32570 * C32556 * C111 +
          (((C15949 * C125 + C15970 + C15970 + C15943 * C139 + C15951 * C126 +
             C15971 + C15971 + C32517 * C140) *
                C32887 +
            (C15949 * C332 + C16850 + C16850 + C15943 * C352 + C15951 * C331 +
             C16851 + C16851 + C32517 * C351) *
                C32876 +
            (C15949 * C337 + C16852 + C16852 + C15943 * C357 + C15951 * C338 +
             C16853 + C16853 + C32517 * C358) *
                C32857) *
               C15105 +
           ((C15949 * C227 + C15972 + C15972 + C15943 * C247 + C15951 * C226 +
             C15973 + C15973 + C32517 * C246) *
                C32887 +
            (C15949 * C640 + C16854 + C16854 + C15943 * C650 + C15951 * C641 +
             C16855 + C16855 + C32517 * C651) *
                C32876 +
            (C15949 * C1104 + C16856 + C16856 + C15943 * C1122 +
             C15951 * C2231 + C16857 + C16857 + C32517 * C2233) *
                C32857) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32887 +
            (C15949 * C334 + C16229 + C16229 + C15943 * C354 + C15951 * C333 +
             C16228 + C16228 + C32517 * C353) *
                C32876 +
            (C15949 * C335 + C16230 + C16230 + C15943 * C355 + C15951 * C336 +
             C16231 + C16231 + C32517 * C356) *
                C32857) *
               C15105 +
           ((C16112 + C16113) * C32887 + (C16699 + C16698) * C32876 +
            (C17020 + C17021) * C32857) *
               C32659) *
              C32570 * C221 -
          (((C17022 + C17023) * C32857 + (C16696 + C16697) * C32876 +
            (C16115 + C16114) * C32887) *
               C32659 +
           ((C17021 + C17020) * C32857 + (C16698 + C16699) * C32876 +
            (C16113 + C16112) * C32887) *
               C15105) *
              C32570 * C222 +
          ((C16120 * C32887 + (C16697 + C16696) * C32876 +
            (C17023 + C17022) * C32857) *
               C15105 +
           (C16121 * C32887 + (C16695 + C16694) * C32876 +
            (C15949 * C6436 + C16236 + C16236 + C15943 * C6442 +
             C15951 * C7315 + C16237 + C16237 + C32517 * C7317) *
                C32857) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[15] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C31695 * C123 + C17975 + C17975 + C32512 * C137 +
                      C31688 * C124 + C17976 + C17976 + C32520 * C138 +
                      C17972 * C125 + C17977 + C17977 + C17964 * C139) *
                         C32824 +
                     (C19293 + C19294 + C19295) * C32699) *
                        C15105 +
                    ((C18154 + C18155 + C18156) * C32824 +
                     (C18806 + C18805 + C18804) * C32699) *
                        C32659) *
                       C32570 * C452 -
                   (((C18801 + C18802 + C18803) * C32699 +
                     (C18159 + C18158 + C18157) * C32824) *
                        C32659 +
                    ((C18804 + C18805 + C18806) * C32699 +
                     (C18156 + C18155 + C18154) * C32824) *
                        C15105) *
                       C32570 * C453) *
                      C454 +
                  ((((C18467 + C18468 + C18469) * C32824 +
                     (C19508 + C19509 + C19510) * C32699) *
                        C15105 +
                    ((C18470 + C18471 + C18472) * C32824 +
                     (C31695 * C1100 + C18625 + C18625 + C32512 * C1118 +
                      C31688 * C1099 + C18626 + C18626 + C32520 * C1117 +
                      C17972 * C1472 + C18627 + C18627 + C17964 * C1474) *
                         C32699) *
                        C32659) *
                       C32570 * C453 -
                   (((C19510 + C19509 + C19508) * C32699 +
                     (C18469 + C18468 + C18467) * C32824) *
                        C32659 +
                    ((C17972 * C331 + C18621 + C18621 + C17964 * C351 +
                      C31688 * C332 + C18620 + C18620 + C32520 * C352 +
                      C31695 * C333 + C18619 + C18619 + C32512 * C353) *
                         C32699 +
                     (C17972 * C126 + C17990 + C17990 + C17964 * C140 +
                      C31688 * C125 + C17991 + C17991 + C32520 * C139 +
                      C31695 * C124 + C17992 + C17992 + C32512 * C138) *
                         C32824) *
                        C15105) *
                       C32570 * C452) *
                      C455)) /
                (p * q * std::sqrt(p + q));
    d2ee[16] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
              C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 +
              C17977 + C17964 * C139) *
                 C32824 +
             (C19293 + C19294 + C19295) * C32699) *
                C15105 +
            ((C18154 + C18155 + C18156) * C32824 + C19922 * C32699) * C32659) *
               C546 -
           (((C19296 + C19297 + C19298) * C32699 + C19923 * C32824) * C32659 +
            ((C19299 + C19300 + C19301) * C32699 +
             (C19295 + C19294 + C19293) * C32824) *
                C15105) *
               C547) *
              C452 +
          (((C19922 * C32824 + (C19298 + C19297 + C19296) * C32699) * C15105 +
            ((C18803 + C18802 + C18801) * C32824 +
             (C31695 * C1105 + C18291 + C18291 + C32512 * C1123 +
              C31688 * C1106 + C18292 + C18292 + C32520 * C1124 +
              C17972 * C1107 + C18293 + C18293 + C17964 * C1125) *
                 C32699) *
                C32659) *
               C547 -
           (((C18801 + C18802 + C18803) * C32699 +
             (C18159 + C18158 + C18157) * C32824) *
                C32659 +
            (C19923 * C32699 + (C18156 + C18155 + C18154) * C32824) * C15105) *
               C546) *
              C453) *
         C32544) /
        (p * q * std::sqrt(p + q));
    d2ee[17] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
             C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 + C17977 +
             C17964 * C139) *
                C32824 +
            (C31695 * C334 + C18284 + C18284 + C32512 * C354 + C31688 * C333 +
             C18283 + C18283 + C32520 * C353 + C17972 * C332 + C18282 + C18282 +
             C17964 * C352) *
                C32699) *
               C15105 +
           ((C18154 + C18155 + C18156) * C32824 +
            (C18806 + C18805 + C18804) * C32699) *
               C32659) *
              C32570 * C221 -
          (((C18801 + C18802 + C18803) * C32699 +
            (C18159 + C18158 + C18157) * C32824) *
               C32659 +
           ((C18804 + C18805 + C18806) * C32699 +
            (C18156 + C18155 + C18154) * C32824) *
               C15105) *
              C32570 * C222 +
          ((C18164 * C32824 + (C18803 + C18802 + C18801) * C32699) * C15105 +
           ((C18162 + C18161 + C18160) * C32824 +
            (C31695 * C1630 + C18786 + C18786 + C32512 * C1636 +
             C31688 * C1631 + C18787 + C18787 + C32520 * C1637 +
             C17972 * C1632 + C18788 + C18788 + C17964 * C1638) *
                C32699) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
             C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 + C17977 +
             C17964 * C139) *
                C32824 +
            (C31695 * C334 + C18284 + C18284 + C32512 * C354 + C31688 * C333 +
             C18283 + C18283 + C32520 * C353 + C17972 * C332 + C18282 + C18282 +
             C17964 * C352) *
                C32699) *
               C15105 +
           ((C18154 + C18155 + C18156) * C32824 +
            (C18806 + C18805 + C18804) * C32699) *
               C32659) *
              C32570 * C32556 * C110 -
          (((C17972 * C641 + C18624 + C18624 + C17964 * C651 + C31688 * C640 +
             C18623 + C18623 + C32520 * C650 + C31695 * C639 + C18622 + C18622 +
             C32512 * C649) *
                C32699 +
            (C18469 + C18468 + C18467) * C32824) *
               C32659 +
           ((C17972 * C331 + C18621 + C18621 + C17964 * C351 + C31688 * C332 +
             C18620 + C18620 + C32520 * C352 + C31695 * C333 + C18619 + C18619 +
             C32512 * C353) *
                C32699 +
            (C17972 * C126 + C17990 + C17990 + C17964 * C140 + C31688 * C125 +
             C17991 + C17991 + C32520 * C139 + C31695 * C124 + C17992 + C17992 +
             C32512 * C138) *
                C32824) *
               C15105) *
              C32570 * C32556 * C111 +
          (((C31695 * C125 + C17993 + C17993 + C32512 * C139 + C31688 * C126 +
             C17994 + C17994 + C32520 * C140 + C17972 * C127 + C17995 + C17995 +
             C17964 * C141) *
                C32824 +
            (C31695 * C332 + C18953 + C18953 + C32512 * C352 + C31688 * C331 +
             C18954 + C18954 + C32520 * C351 + C17972 * C330 + C18955 + C18955 +
             C17964 * C350) *
                C32699) *
               C15105 +
           ((C31695 * C227 + C17996 + C17996 + C32512 * C247 + C31688 * C226 +
             C17997 + C17997 + C32520 * C246 + C17972 * C225 + C17998 + C17998 +
             C17964 * C245) *
                C32824 +
            (C31695 * C640 + C18956 + C18956 + C32512 * C650 + C31688 * C641 +
             C18957 + C18957 + C32520 * C651 + C17972 * C642 + C18958 + C18958 +
             C17964 * C652) *
                C32699) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
             C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 + C17977 +
             C17964 * C139) *
                C32824 +
            (C19293 + C19294 + C19295) * C32699) *
               C15105 +
           ((C18154 + C18155 + C18156) * C32824 +
            (C18806 + C18805 + C18804) * C32699) *
               C32659) *
              C327 -
          (((C19296 + C19297 + C19298) * C32699 +
            (C18804 + C18805 + C18806) * C32824) *
               C32659 +
           ((C19299 + C19300 + C19301) * C32699 +
            (C19295 + C19294 + C19293) * C32824) *
               C15105) *
              C328 +
          (((C19301 + C19300 + C19299) * C32824 +
            (C31695 * C2016 + C19269 + C19269 + C32512 * C2028 +
             C31688 * C2015 + C19270 + C19270 + C32520 * C2027 +
             C17972 * C2014 + C19271 + C19271 + C17964 * C2026) *
                C32699) *
               C15105 +
           ((C19298 + C19297 + C19296) * C32824 +
            (C31695 * C2565 + C19272 + C19272 + C32512 * C2571 +
             C31688 * C2566 + C19273 + C19273 + C32520 * C2572 +
             C17972 * C2567 + C19274 + C19274 + C17964 * C2573) *
                C32699) *
               C32659) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[18] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C31695 * C123 + C17975 + C17975 + C32512 * C137 +
                      C31688 * C124 + C17976 + C17976 + C32520 * C138 +
                      C17972 * C125 + C17977 + C17977 + C17964 * C139) *
                         C32824 +
                     (C19293 + C19294 + C19295) * C32699) *
                        C15105 +
                    ((C18154 + C18155 + C18156) * C32824 +
                     (C18806 + C18805 + C18804) * C32699) *
                        C32659) *
                       C546 -
                   (((C19296 + C19297 + C19298) * C32699 +
                     (C18804 + C18805 + C18806) * C32824) *
                        C32659 +
                    ((C19299 + C19300 + C19301) * C32699 +
                     (C19295 + C19294 + C19293) * C32824) *
                        C15105) *
                       C547) *
                      C32556 * C454 +
                  ((((C19723 + C19724 + C19725) * C32824 +
                     (C31695 * C336 + C19711 + C19711 + C32512 * C356 +
                      C31688 * C337 + C19712 + C19712 + C32520 * C357 +
                      C17972 * C338 + C19713 + C19713 + C17964 * C358) *
                         C32699) *
                        C15105 +
                    ((C19508 + C19509 + C19510) * C32824 +
                     (C31695 * C1103 + C19714 + C19714 + C32512 * C1121 +
                      C31688 * C1104 + C19715 + C19715 + C32520 * C1122 +
                      C17972 * C2231 + C19716 + C19716 + C17964 * C2233) *
                         C32699) *
                        C32659) *
                       C547 -
                   (((C19510 + C19509 + C19508) * C32699 +
                     (C18469 + C18468 + C18467) * C32824) *
                        C32659 +
                    ((C19725 + C19724 + C19723) * C32699 +
                     (C17972 * C126 + C17990 + C17990 + C17964 * C140 +
                      C31688 * C125 + C17991 + C17991 + C32520 * C139 +
                      C31695 * C124 + C17992 + C17992 + C32512 * C138) *
                         C32824) *
                        C15105) *
                       C546) *
                      C32556 * C455)) /
                (p * q * std::sqrt(p + q));
    d2ee[19] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
             C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 + C17977 +
             C17964 * C139) *
                C32824 +
            (C31695 * C334 + C18284 + C18284 + C32512 * C354 + C31688 * C333 +
             C18283 + C18283 + C32520 * C353 + C17972 * C332 + C18282 + C18282 +
             C17964 * C352) *
                C32699) *
               C15105 +
           ((C18154 + C18155 + C18156) * C32824 +
            (C18806 + C18805 + C18804) * C32699) *
               C32659) *
              C32570 * C32556 * C110 -
          (((C17972 * C641 + C18624 + C18624 + C17964 * C651 + C31688 * C640 +
             C18623 + C18623 + C32520 * C650 + C31695 * C639 + C18622 + C18622 +
             C32512 * C649) *
                C32699 +
            (C18469 + C18468 + C18467) * C32824) *
               C32659 +
           ((C17972 * C331 + C18621 + C18621 + C17964 * C351 + C31688 * C332 +
             C18620 + C18620 + C32520 * C352 + C31695 * C333 + C18619 + C18619 +
             C32512 * C353) *
                C32699 +
            (C17972 * C126 + C17990 + C17990 + C17964 * C140 + C31688 * C125 +
             C17991 + C17991 + C32520 * C139 + C31695 * C124 + C17992 + C17992 +
             C32512 * C138) *
                C32824) *
               C15105) *
              C32570 * C32556 * C111 +
          (((C31695 * C125 + C17993 + C17993 + C32512 * C139 + C31688 * C126 +
             C17994 + C17994 + C32520 * C140 + C17972 * C127 + C17995 + C17995 +
             C17964 * C141) *
                C32824 +
            (C31695 * C332 + C18953 + C18953 + C32512 * C352 + C31688 * C331 +
             C18954 + C18954 + C32520 * C351 + C17972 * C330 + C18955 + C18955 +
             C17964 * C350) *
                C32699) *
               C15105 +
           ((C31695 * C227 + C17996 + C17996 + C32512 * C247 + C31688 * C226 +
             C17997 + C17997 + C32520 * C246 + C17972 * C225 + C17998 + C17998 +
             C17964 * C245) *
                C32824 +
            (C31695 * C640 + C18956 + C18956 + C32512 * C650 + C31688 * C641 +
             C18957 + C18957 + C32520 * C651 + C17972 * C642 + C18958 + C18958 +
             C17964 * C652) *
                C32699) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
             C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 + C17977 +
             C17964 * C139) *
                C32824 +
            (C31695 * C334 + C18284 + C18284 + C32512 * C354 + C31688 * C333 +
             C18283 + C18283 + C32520 * C353 + C17972 * C332 + C18282 + C18282 +
             C17964 * C352) *
                C32699) *
               C15105 +
           ((C18154 + C18155 + C18156) * C32824 +
            (C18806 + C18805 + C18804) * C32699) *
               C32659) *
              C32570 * C221 -
          (((C18801 + C18802 + C18803) * C32699 +
            (C18159 + C18158 + C18157) * C32824) *
               C32659 +
           ((C18804 + C18805 + C18806) * C32699 +
            (C18156 + C18155 + C18154) * C32824) *
               C15105) *
              C32570 * C222 +
          ((C18164 * C32824 + (C18803 + C18802 + C18801) * C32699) * C15105 +
           ((C18162 + C18161 + C18160) * C32824 +
            (C31695 * C1630 + C18786 + C18786 + C32512 * C1636 +
             C31688 * C1631 + C18787 + C18787 + C32520 * C1637 +
             C17972 * C1632 + C18788 + C18788 + C17964 * C1638) *
                C32699) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[20] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
             C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
             C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
                C32612 * C15105 +
            (C15278 + C15279 + C15280 + C15281) * C32612 * C32659) *
               C32570 * C452 -
           ((C15282 + C15283 + C15284 + C15285) * C32612 * C32659 +
            (C15281 + C15280 + C15279 + C15278) * C32612 * C15105) *
               C32570 * C453) *
              C454 +
          (((C15550 + C15551 + C15552 + C15553) * C32612 * C15105 +
            (C15107 * C231 + C15538 + C15538 + C32892 * C251 + C15109 * C232 +
             C15539 + C15539 + C32885 * C252 + C15111 * C233 + C15540 + C15540 +
             C32872 * C253 + C15113 * C234 + C15541 + C15541 + C32822 * C254) *
                C32612 * C32659) *
               C32570 * C453 -
           ((C15553 + C15552 + C15551 + C15550) * C32612 * C32659 +
            (C15113 * C127 + C15128 + C15128 + C32822 * C141 + C15111 * C126 +
             C15129 + C15129 + C32872 * C140 + C15109 * C125 + C15130 + C15130 +
             C32885 * C139 + C15107 * C124 + C15131 + C15131 + C32892 * C138) *
                C32612 * C15105) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32612 * C32893 +
            (C16112 + C16113) * C32612 * C32889 + C16122 * C32879 +
            C16123 * C32831) *
               C32570 * C452 -
           ((C16118 + C16119) * C32612 * C32831 +
            (C16117 + C16116) * C32612 * C32879 +
            (C16115 + C16114) * C32612 * C32889 +
            (C16113 + C16112) * C32612 * C32893) *
               C32570 * C453) *
              C454 +
          (((C16394 + C16395) * C32612 * C32893 +
            (C16396 + C16397) * C32612 * C32889 +
            (C16398 + C16399) * C32612 * C32879 +
            (C15949 * C921 + C16380 + C16380 + C15943 * C933 + C15951 * C922 +
             C16381 + C16381 + C32517 * C934) *
                C32612 * C32831) *
               C32570 * C453 -
           ((C16399 + C16398) * C32612 * C32831 +
            (C16397 + C16396) * C32612 * C32879 +
            (C16395 + C16394) * C32612 * C32889 +
            (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
             C15969 + C15969 + C15943 * C138) *
                C32612 * C32893) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[21] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
             C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
             C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
                C32612 * C15105 +
            (C15278 + C15279 + C15280 + C15281) * C32612 * C32659) *
               C546 -
           ((C15842 + C15843 + C15844 + C15845) * C32612 * C32659 +
            (C15113 * C331 + C15388 + C15388 + C32822 * C351 + C15111 * C332 +
             C15389 + C15389 + C32872 * C352 + C15109 * C333 + C15390 + C15390 +
             C32885 * C353 + C15107 * C334 + C15391 + C15391 + C32892 * C354) *
                C32612 * C15105) *
               C547) *
              C452 +
          (((C15845 + C15844 + C15843 + C15842) * C32612 * C15105 +
            (C15107 * C1101 + C15830 + C15830 + C32892 * C1119 +
             C15109 * C1100 + C15831 + C15831 + C32885 * C1118 +
             C15111 * C1099 + C15832 + C15832 + C32872 * C1117 +
             C15113 * C1472 + C15833 + C15833 + C32822 * C1474) *
                C32612 * C32659) *
               C547 -
           ((C15282 + C15283 + C15284 + C15285) * C32612 * C32659 +
            (C15281 + C15280 + C15279 + C15278) * C32612 * C15105) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32612 * C32893 +
            (C16112 + C16113) * C32612 * C32889 + C16122 * C32879 +
            C16123 * C32831) *
               C546 -
           ((C16694 + C16695) * C32612 * C32831 +
            (C16696 + C16697) * C32612 * C32879 +
            (C16698 + C16699) * C32612 * C32889 +
            (C15951 * C333 + C16228 + C16228 + C32517 * C353 + C15949 * C334 +
             C16229 + C16229 + C15943 * C354) *
                C32612 * C32893) *
               C547) *
              C452 +
          (((C16699 + C16698) * C32612 * C32893 +
            (C16697 + C16696) * C32612 * C32889 +
            (C16695 + C16694) * C32612 * C32879 +
            (C15949 * C6435 + C16680 + C16680 + C15943 * C6441 +
             C15951 * C6646 + C16681 + C16681 + C32517 * C6648) *
                C32612 * C32831) *
               C547 -
           ((C16118 + C16119) * C32612 * C32831 +
            (C16117 + C16116) * C32612 * C32879 +
            (C16115 + C16114) * C32612 * C32889 +
            (C16113 + C16112) * C32612 * C32893) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[22] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
            C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
            C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
               C32612 * C15105 +
           (C15278 + C15279 + C15280 + C15281) * C32612 * C32659) *
              C32570 * C221 -
          ((C15282 + C15283 + C15284 + C15285) * C32612 * C32659 +
           (C15281 + C15280 + C15279 + C15278) * C32612 * C15105) *
              C32570 * C222 +
          ((C15285 + C15284 + C15283 + C15282) * C32612 * C15105 +
           (C15107 * C919 + C15258 + C15258 + C32892 * C931 + C15109 * C918 +
            C15259 + C15259 + C32885 * C930 + C15111 * C917 + C15260 + C15260 +
            C32872 * C929 + C15113 * C1290 + C15261 + C15261 + C32822 * C1292) *
               C32612 * C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
            C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
            C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
               C32612 * C15105 +
           (C15107 * C229 + C15120 + C15120 + C32892 * C249 + C15109 * C228 +
            C15121 + C15121 + C32885 * C248 + C15111 * C227 + C15122 + C15122 +
            C32872 * C247 + C15113 * C226 + C15123 + C15123 + C32822 * C246) *
               C32612 * C32659) *
              C32570 * C32556 * C110 -
          ((C15113 * C225 + C15124 + C15124 + C32822 * C245 + C15111 * C226 +
            C15125 + C15125 + C32872 * C246 + C15109 * C227 + C15126 + C15126 +
            C32885 * C247 + C15107 * C228 + C15127 + C15127 + C32892 * C248) *
               C32612 * C32659 +
           (C15113 * C127 + C15128 + C15128 + C32822 * C141 + C15111 * C126 +
            C15129 + C15129 + C32872 * C140 + C15109 * C125 + C15130 + C15130 +
            C32885 * C139 + C15107 * C124 + C15131 + C15131 + C32892 * C138) *
               C32612 * C15105) *
              C32570 * C32556 * C111 +
          ((C15107 * C125 + C15132 + C15132 + C32892 * C139 + C15109 * C126 +
            C15133 + C15133 + C32885 * C140 + C15111 * C127 + C15134 + C15134 +
            C32872 * C141 + C15113 * C128 + C15135 + C15135 + C32822 * C142) *
               C32612 * C15105 +
           (C15107 * C227 + C15136 + C15136 + C32892 * C247 + C15109 * C226 +
            C15137 + C15137 + C32885 * C246 + C15111 * C225 + C15138 + C15138 +
            C32872 * C245 + C15113 * C456 + C15139 + C15139 + C32822 * C458) *
               C32612 * C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
            C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
            C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
               C32612 * C15105 +
           (C15278 + C15279 + C15280 + C15281) * C32612 * C32659) *
              C327 -
          ((C15113 * C641 + C15384 + C15384 + C32822 * C651 + C15111 * C640 +
            C15385 + C15385 + C32872 * C650 + C15109 * C639 + C15386 + C15386 +
            C32885 * C649 + C15107 * C638 + C15387 + C15387 + C32892 * C648) *
               C32612 * C32659 +
           (C15113 * C331 + C15388 + C15388 + C32822 * C351 + C15111 * C332 +
            C15389 + C15389 + C32872 * C352 + C15109 * C333 + C15390 + C15390 +
            C32885 * C353 + C15107 * C334 + C15391 + C15391 + C32892 * C354) *
               C32612 * C15105) *
              C328 +
          ((C15107 * C335 + C15392 + C15392 + C32892 * C355 + C15109 * C336 +
            C15393 + C15393 + C32885 * C356 + C15111 * C337 + C15394 + C15394 +
            C32872 * C357 + C15113 * C338 + C15395 + C15395 + C32822 * C358) *
               C32612 * C15105 +
           (C15107 * C1102 + C15396 + C15396 + C32892 * C1120 + C15109 * C1103 +
            C15397 + C15397 + C32885 * C1121 + C15111 * C1104 + C15398 +
            C15398 + C32872 * C1122 + C15113 * C2231 + C15399 + C15399 +
            C32822 * C2233) *
               C32612 * C32659) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
            C15955 + C15955 + C32517 * C138) *
               C32612 * C32893 +
           (C15949 * C229 + C15956 + C15956 + C15943 * C249 + C15951 * C228 +
            C15957 + C15957 + C32517 * C248) *
               C32612 * C32889 +
           (C15949 * C230 + C15958 + C15958 + C15943 * C250 + C15951 * C231 +
            C15959 + C15959 + C32517 * C251) *
               C32612 * C32879 +
           (C15949 * C919 + C15960 + C15960 + C15943 * C931 + C15951 * C918 +
            C15961 + C15961 + C32517 * C930) *
               C32612 * C32831) *
              C32570 * C32556 * C110 -
          ((C15951 * C917 + C15962 + C15962 + C32517 * C929 + C15949 * C918 +
            C15963 + C15963 + C15943 * C930) *
               C32612 * C32831 +
           (C15951 * C232 + C15964 + C15964 + C32517 * C252 + C15949 * C231 +
            C15965 + C15965 + C15943 * C251) *
               C32612 * C32879 +
           (C15951 * C227 + C15966 + C15966 + C32517 * C247 + C15949 * C228 +
            C15967 + C15967 + C15943 * C248) *
               C32612 * C32889 +
           (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
            C15969 + C15969 + C15943 * C138) *
               C32612 * C32893) *
              C32570 * C32556 * C111 +
          ((C15949 * C125 + C15970 + C15970 + C15943 * C139 + C15951 * C126 +
            C15971 + C15971 + C32517 * C140) *
               C32612 * C32893 +
           (C15949 * C227 + C15972 + C15972 + C15943 * C247 + C15951 * C226 +
            C15973 + C15973 + C32517 * C246) *
               C32612 * C32889 +
           (C15949 * C232 + C15974 + C15974 + C15943 * C252 + C15951 * C233 +
            C15975 + C15975 + C32517 * C253) *
               C32612 * C32879 +
           (C15949 * C917 + C15976 + C15976 + C15943 * C929 + C15951 * C1290 +
            C15977 + C15977 + C32517 * C1292) *
               C32612 * C32831) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
            C15955 + C15955 + C32517 * C138) *
               C32612 * C32893 +
           (C16112 + C16113) * C32612 * C32889 + C16122 * C32879 +
           C16123 * C32831) *
              C32570 * C221 -
          ((C16118 + C16119) * C32612 * C32831 +
           (C16117 + C16116) * C32612 * C32879 +
           (C16115 + C16114) * C32612 * C32889 +
           (C16113 + C16112) * C32612 * C32893) *
              C32570 * C222 +
          (C16122 * C32893 + C16123 * C32889 +
           (C16119 + C16118) * C32612 * C32879 +
           (C15949 * C6335 + C16094 + C16094 + C15943 * C6339 + C15951 * C6536 +
            C16095 + C16095 + C32517 * C6538) *
               C32612 * C32831) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
            C15955 + C15955 + C32517 * C138) *
               C32612 * C32893 +
           (C16112 + C16113) * C32612 * C32889 + C16122 * C32879 +
           C16123 * C32831) *
              C327 -
          ((C15951 * C1631 + C16222 + C16222 + C32517 * C1637 + C15949 * C1630 +
            C16223 + C16223 + C15943 * C1636) *
               C32612 * C32831 +
           (C15951 * C1100 + C16224 + C16224 + C32517 * C1118 + C15949 * C1101 +
            C16225 + C16225 + C15943 * C1119) *
               C32612 * C32879 +
           (C15951 * C639 + C16226 + C16226 + C32517 * C649 + C15949 * C638 +
            C16227 + C16227 + C15943 * C648) *
               C32612 * C32889 +
           (C15951 * C333 + C16228 + C16228 + C32517 * C353 + C15949 * C334 +
            C16229 + C16229 + C15943 * C354) *
               C32612 * C32893) *
              C328 +
          ((C15949 * C335 + C16230 + C16230 + C15943 * C355 + C15951 * C336 +
            C16231 + C16231 + C32517 * C356) *
               C32612 * C32893 +
           (C15949 * C1102 + C16232 + C16232 + C15943 * C1120 + C15951 * C1103 +
            C16233 + C16233 + C32517 * C1121) *
               C32612 * C32889 +
           (C15949 * C1105 + C16234 + C16234 + C15943 * C1123 + C15951 * C1106 +
            C16235 + C16235 + C32517 * C1124) *
               C32612 * C32879 +
           (C15949 * C6436 + C16236 + C16236 + C15943 * C6442 + C15951 * C7315 +
            C16237 + C16237 + C32517 * C7317) *
               C32612 * C32831) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[23] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
             C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
             C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
                C32612 * C15105 +
            (C15278 + C15279 + C15280 + C15281) * C32612 * C32659) *
               C546 -
           ((C15113 * C641 + C15384 + C15384 + C32822 * C651 + C15111 * C640 +
             C15385 + C15385 + C32872 * C650 + C15109 * C639 + C15386 + C15386 +
             C32885 * C649 + C15107 * C638 + C15387 + C15387 + C32892 * C648) *
                C32612 * C32659 +
            (C15113 * C331 + C15388 + C15388 + C32822 * C351 + C15111 * C332 +
             C15389 + C15389 + C32872 * C352 + C15109 * C333 + C15390 + C15390 +
             C32885 * C353 + C15107 * C334 + C15391 + C15391 + C32892 * C354) *
                C32612 * C15105) *
               C547) *
              C32556 * C454 +
          (((C15107 * C333 + C15684 + C15684 + C32892 * C353 + C15109 * C332 +
             C15685 + C15685 + C32885 * C352 + C15111 * C331 + C15686 + C15686 +
             C32872 * C351 + C15113 * C330 + C15687 + C15687 + C32822 * C350) *
                C32612 * C15105 +
            (C15107 * C639 + C15688 + C15688 + C32892 * C649 + C15109 * C640 +
             C15689 + C15689 + C32885 * C650 + C15111 * C641 + C15690 + C15690 +
             C32872 * C651 + C15113 * C642 + C15691 + C15691 + C32822 * C652) *
                C32612 * C32659) *
               C547 -
           ((C15553 + C15552 + C15551 + C15550) * C32612 * C32659 +
            (C15113 * C127 + C15128 + C15128 + C32822 * C141 + C15111 * C126 +
             C15129 + C15129 + C32872 * C140 + C15109 * C125 + C15130 + C15130 +
             C32885 * C139 + C15107 * C124 + C15131 + C15131 + C32892 * C138) *
                C32612 * C15105) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32612 * C32893 +
            (C16112 + C16113) * C32612 * C32889 + C16122 * C32879 +
            C16123 * C32831) *
               C546 -
           ((C15951 * C1631 + C16222 + C16222 + C32517 * C1637 +
             C15949 * C1630 + C16223 + C16223 + C15943 * C1636) *
                C32612 * C32831 +
            (C15951 * C1100 + C16224 + C16224 + C32517 * C1118 +
             C15949 * C1101 + C16225 + C16225 + C15943 * C1119) *
                C32612 * C32879 +
            (C15951 * C639 + C16226 + C16226 + C32517 * C649 + C15949 * C638 +
             C16227 + C16227 + C15943 * C648) *
                C32612 * C32889 +
            (C15951 * C333 + C16228 + C16228 + C32517 * C353 + C15949 * C334 +
             C16229 + C16229 + C15943 * C354) *
                C32612 * C32893) *
               C547) *
              C32556 * C454 +
          (((C15949 * C333 + C16530 + C16530 + C15943 * C353 + C15951 * C332 +
             C16531 + C16531 + C32517 * C352) *
                C32612 * C32893 +
            (C15949 * C639 + C16532 + C16532 + C15943 * C649 + C15951 * C640 +
             C16533 + C16533 + C32517 * C650) *
                C32612 * C32889 +
            (C15949 * C1100 + C16534 + C16534 + C15943 * C1118 +
             C15951 * C1099 + C16535 + C16535 + C32517 * C1117) *
                C32612 * C32879 +
            (C15949 * C1631 + C16536 + C16536 + C15943 * C1637 +
             C15951 * C1632 + C16537 + C16537 + C32517 * C1638) *
                C32612 * C32831) *
               C547 -
           ((C16399 + C16398) * C32612 * C32831 +
            (C16397 + C16396) * C32612 * C32879 +
            (C16395 + C16394) * C32612 * C32889 +
            (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
             C15969 + C15969 + C15943 * C138) *
                C32612 * C32893) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[24] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
            C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
            C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
               C32612 * C15105 +
           (C15107 * C229 + C15120 + C15120 + C32892 * C249 + C15109 * C228 +
            C15121 + C15121 + C32885 * C248 + C15111 * C227 + C15122 + C15122 +
            C32872 * C247 + C15113 * C226 + C15123 + C15123 + C32822 * C246) *
               C32612 * C32659) *
              C32570 * C32556 * C110 -
          ((C15113 * C225 + C15124 + C15124 + C32822 * C245 + C15111 * C226 +
            C15125 + C15125 + C32872 * C246 + C15109 * C227 + C15126 + C15126 +
            C32885 * C247 + C15107 * C228 + C15127 + C15127 + C32892 * C248) *
               C32612 * C32659 +
           (C15113 * C127 + C15128 + C15128 + C32822 * C141 + C15111 * C126 +
            C15129 + C15129 + C32872 * C140 + C15109 * C125 + C15130 + C15130 +
            C32885 * C139 + C15107 * C124 + C15131 + C15131 + C32892 * C138) *
               C32612 * C15105) *
              C32570 * C32556 * C111 +
          ((C15107 * C125 + C15132 + C15132 + C32892 * C139 + C15109 * C126 +
            C15133 + C15133 + C32885 * C140 + C15111 * C127 + C15134 + C15134 +
            C32872 * C141 + C15113 * C128 + C15135 + C15135 + C32822 * C142) *
               C32612 * C15105 +
           (C15107 * C227 + C15136 + C15136 + C32892 * C247 + C15109 * C226 +
            C15137 + C15137 + C32885 * C246 + C15111 * C225 + C15138 + C15138 +
            C32872 * C245 + C15113 * C456 + C15139 + C15139 + C32822 * C458) *
               C32612 * C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
            C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
            C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
               C32612 * C15105 +
           (C15278 + C15279 + C15280 + C15281) * C32612 * C32659) *
              C32570 * C221 -
          ((C15282 + C15283 + C15284 + C15285) * C32612 * C32659 +
           (C15281 + C15280 + C15279 + C15278) * C32612 * C15105) *
              C32570 * C222 +
          ((C15285 + C15284 + C15283 + C15282) * C32612 * C15105 +
           (C15107 * C919 + C15258 + C15258 + C32892 * C931 + C15109 * C918 +
            C15259 + C15259 + C32885 * C930 + C15111 * C917 + C15260 + C15260 +
            C32872 * C929 + C15113 * C1290 + C15261 + C15261 + C32822 * C1292) *
               C32612 * C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
            C15955 + C15955 + C32517 * C138) *
               C32612 * C32893 +
           (C15949 * C229 + C15956 + C15956 + C15943 * C249 + C15951 * C228 +
            C15957 + C15957 + C32517 * C248) *
               C32612 * C32889 +
           (C15949 * C230 + C15958 + C15958 + C15943 * C250 + C15951 * C231 +
            C15959 + C15959 + C32517 * C251) *
               C32612 * C32879 +
           (C15949 * C919 + C15960 + C15960 + C15943 * C931 + C15951 * C918 +
            C15961 + C15961 + C32517 * C930) *
               C32612 * C32831) *
              C32570 * C32556 * C110 -
          ((C15951 * C917 + C15962 + C15962 + C32517 * C929 + C15949 * C918 +
            C15963 + C15963 + C15943 * C930) *
               C32612 * C32831 +
           (C15951 * C232 + C15964 + C15964 + C32517 * C252 + C15949 * C231 +
            C15965 + C15965 + C15943 * C251) *
               C32612 * C32879 +
           (C15951 * C227 + C15966 + C15966 + C32517 * C247 + C15949 * C228 +
            C15967 + C15967 + C15943 * C248) *
               C32612 * C32889 +
           (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
            C15969 + C15969 + C15943 * C138) *
               C32612 * C32893) *
              C32570 * C32556 * C111 +
          ((C15949 * C125 + C15970 + C15970 + C15943 * C139 + C15951 * C126 +
            C15971 + C15971 + C32517 * C140) *
               C32612 * C32893 +
           (C15949 * C227 + C15972 + C15972 + C15943 * C247 + C15951 * C226 +
            C15973 + C15973 + C32517 * C246) *
               C32612 * C32889 +
           (C15949 * C232 + C15974 + C15974 + C15943 * C252 + C15951 * C233 +
            C15975 + C15975 + C32517 * C253) *
               C32612 * C32879 +
           (C15949 * C917 + C15976 + C15976 + C15943 * C929 + C15951 * C1290 +
            C15977 + C15977 + C32517 * C1292) *
               C32612 * C32831) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
            C15955 + C15955 + C32517 * C138) *
               C32612 * C32893 +
           (C16112 + C16113) * C32612 * C32889 + C16122 * C32879 +
           C16123 * C32831) *
              C32570 * C221 -
          ((C16118 + C16119) * C32612 * C32831 +
           (C16117 + C16116) * C32612 * C32879 +
           (C16115 + C16114) * C32612 * C32889 +
           (C16113 + C16112) * C32612 * C32893) *
              C32570 * C222 +
          (C16122 * C32893 + C16123 * C32889 +
           (C16119 + C16118) * C32612 * C32879 +
           (C15949 * C6335 + C16094 + C16094 + C15943 * C6339 + C15951 * C6536 +
            C16095 + C16095 + C32517 * C6538) *
               C32612 * C32831) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[25] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
              C7773 + C7773 + C32517 * C138) *
                 C21058 +
             (C9004 + C9005) * C32699) *
                C32655 +
            ((C7930 + C7931) * C21058 + C9630 * C32699) * C32662 +
            C29051 * C17967) *
               C32570 * C452 -
           (((C8512 + C8513) * C32699 + (C7935 + C7934) * C21058) * C17967 +
            (C9631 * C32699 + (C7933 + C7932) * C21058) * C32662 +
            (C9632 * C32699 + (C7931 + C7930) * C21058) * C32655) *
               C32570 * C453) *
              C454 +
          ((((C8212 + C8213) * C21058 + (C9222 + C9223) * C32699) * C32655 +
            ((C8214 + C8215) * C21058 + (C9224 + C9225) * C32699) * C32662 +
            ((C8216 + C8217) * C21058 +
             (C7767 * C1631 + C8354 + C8354 + C32804 * C1637 + C7769 * C1632 +
              C8355 + C8355 + C32517 * C1638) *
                 C32699) *
                C17967) *
               C32570 * C453 -
           (((C9225 + C9224) * C32699 + (C8215 + C8214) * C21058) * C17967 +
            ((C9223 + C9222) * C32699 + (C8213 + C8212) * C21058) * C32662 +
            ((C9435 + C9434) * C32699 +
             (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
              C7787 + C7787 + C32804 * C138) *
                 C21058) *
                C32655) *
               C32570 * C452) *
              C455)) /
        (p * q * std::sqrt(p + q));
    d2ee[26] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
              C7773 + C7773 + C32517 * C138) *
                 C21058 +
             (C9004 + C9005) * C32699) *
                C32655 +
            ((C7930 + C7931) * C21058 + C9630 * C32699) * C32662 +
            C29051 * C17967) *
               C546 -
           (((C9006 + C9007) * C32699 + C9631 * C21058) * C17967 +
            (C13582 * C32699 + C9632 * C21058) * C32662 +
            ((C9010 + C9011) * C32699 + (C9005 + C9004) * C21058) * C32655) *
               C547) *
              C452 +
          (((C9630 * C21058 + C12951 * C32699) * C32655 +
            (C8817 * C21058 + (C9007 + C9006) * C32699) * C32662 +
            ((C8513 + C8512) * C21058 +
             (C7767 * C6436 + C8054 + C8054 + C32804 * C6442 + C7769 * C7315 +
              C8055 + C8055 + C32517 * C7317) *
                 C32699) *
                C17967) *
               C547 -
           (((C8512 + C8513) * C32699 + (C7935 + C7934) * C21058) * C17967 +
            (C9631 * C32699 + (C7933 + C7932) * C21058) * C32662 +
            (C9632 * C32699 + (C7931 + C7930) * C21058) * C32655) *
               C546) *
              C453) *
         C32544) /
        (p * q * std::sqrt(p + q));
    d2ee[27] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C21058 +
            (C9004 + C9005) * C32699) *
               C32655 +
           ((C7930 + C7931) * C21058 + C9630 * C32699) * C32662 +
           C29051 * C17967) *
              C32570 * C221 -
          (((C8512 + C8513) * C32699 + (C7935 + C7934) * C21058) * C17967 +
           (C9631 * C32699 + (C7933 + C7932) * C21058) * C32662 +
           (C9632 * C32699 + (C7931 + C7930) * C21058) * C32655) *
              C32570 * C222 +
          (C29051 * C32655 +
           (C7939 * C21058 + (C8513 + C8512) * C32699) * C32662 +
           ((C7937 + C7936) * C21058 +
            (C7767 * C6435 + C8498 + C8498 + C32804 * C6441 + C7769 * C6646 +
             C8499 + C8499 + C32517 * C6648) *
                C32699) *
               C17967) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C21058 +
            (C9004 + C9005) * C32699) *
               C32655 +
           ((C7930 + C7931) * C21058 + C9630 * C32699) * C32662 +
           (C7938 * C21058 + C8817 * C32699) * C17967) *
              C32570 * C32556 * C110 -
          (((C9225 + C9224) * C32699 + (C8215 + C8214) * C21058) * C17967 +
           ((C9223 + C9222) * C32699 + (C8213 + C8212) * C21058) * C32662 +
           ((C9435 + C9434) * C32699 +
            (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
             C7787 + C7787 + C32804 * C138) *
                C21058) *
               C32655) *
              C32570 * C32556 * C111 +
          (((C7767 * C125 + C7788 + C7788 + C32804 * C139 + C7769 * C126 +
             C7789 + C7789 + C32517 * C140) *
                C21058 +
            (C7767 * C332 + C8664 + C8664 + C32804 * C352 + C7769 * C331 +
             C8665 + C8665 + C32517 * C351) *
                C32699) *
               C32655 +
           ((C7767 * C227 + C7790 + C7790 + C32804 * C247 + C7769 * C226 +
             C7791 + C7791 + C32517 * C246) *
                C21058 +
            (C7767 * C640 + C8666 + C8666 + C32804 * C650 + C7769 * C641 +
             C8667 + C8667 + C32517 * C651) *
                C32699) *
               C32662 +
           ((C7767 * C232 + C7792 + C7792 + C32804 * C252 + C7769 * C233 +
             C7793 + C7793 + C32517 * C253) *
                C21058 +
            (C7767 * C1099 + C8668 + C8668 + C32804 * C1117 + C7769 * C1472 +
             C8669 + C8669 + C32517 * C1474) *
                C32699) *
               C17967) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C21058 +
            (C9004 + C9005) * C32699) *
               C32655 +
           ((C7930 + C7931) * C21058 + C9630 * C32699) * C32662 +
           C29051 * C17967) *
              C327 -
          (((C9006 + C9007) * C32699 + C9631 * C21058) * C17967 +
           (C13582 * C32699 + C9632 * C21058) * C32662 +
           ((C9010 + C9011) * C32699 + (C9005 + C9004) * C21058) * C32655) *
              C328 +
          ((C12950 * C21058 + C13883 * C32699) * C32655 +
           (C12951 * C21058 + (C12973 + C12972) * C32699) * C32662 +
           ((C9007 + C9006) * C21058 +
            (C7767 * C7129 + C8986 + C8986 + C32804 * C7135 + C7769 * C7491 +
             C8987 + C8987 + C32517 * C7493) *
                C32699) *
               C17967) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[28] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
              C7773 + C7773 + C32517 * C138) *
                 C21058 +
             (C9004 + C9005) * C32699) *
                C32655 +
            ((C7930 + C7931) * C21058 + C9630 * C32699) * C32662 +
            C29051 * C17967) *
               C546 -
           (((C9006 + C9007) * C32699 + C9631 * C21058) * C17967 +
            (C13582 * C32699 + C9632 * C21058) * C32662 +
            ((C9010 + C9011) * C32699 + (C9005 + C9004) * C21058) * C32655) *
               C547) *
              C32556 * C454 +
          ((((C9434 + C9435) * C21058 + (C13386 + C13387) * C32699) * C32655 +
            ((C9222 + C9223) * C21058 + (C13178 + C13179) * C32699) * C32662 +
            ((C9224 + C9225) * C21058 +
             (C7767 * C1106 + C9428 + C9428 + C32804 * C1124 + C7769 * C1107 +
              C9429 + C9429 + C32517 * C1125) *
                 C32699) *
                C17967) *
               C547 -
           (((C9225 + C9224) * C32699 + (C8215 + C8214) * C21058) * C17967 +
            ((C9223 + C9222) * C32699 + (C8213 + C8212) * C21058) * C32662 +
            ((C9435 + C9434) * C32699 +
             (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
              C7787 + C7787 + C32804 * C138) *
                 C21058) *
                C32655) *
               C546) *
              C32556 * C455)) /
        (p * q * std::sqrt(p + q));
    d2ee[29] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C21058 +
            (C9004 + C9005) * C32699) *
               C32655 +
           ((C7930 + C7931) * C21058 + C9630 * C32699) * C32662 +
           (C7938 * C21058 + C8817 * C32699) * C17967) *
              C32570 * C32556 * C110 -
          (((C9225 + C9224) * C32699 + (C8215 + C8214) * C21058) * C17967 +
           ((C9223 + C9222) * C32699 + (C8213 + C8212) * C21058) * C32662 +
           ((C9435 + C9434) * C32699 +
            (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
             C7787 + C7787 + C32804 * C138) *
                C21058) *
               C32655) *
              C32570 * C32556 * C111 +
          (((C7767 * C125 + C7788 + C7788 + C32804 * C139 + C7769 * C126 +
             C7789 + C7789 + C32517 * C140) *
                C21058 +
            (C7767 * C332 + C8664 + C8664 + C32804 * C352 + C7769 * C331 +
             C8665 + C8665 + C32517 * C351) *
                C32699) *
               C32655 +
           ((C7767 * C227 + C7790 + C7790 + C32804 * C247 + C7769 * C226 +
             C7791 + C7791 + C32517 * C246) *
                C21058 +
            (C7767 * C640 + C8666 + C8666 + C32804 * C650 + C7769 * C641 +
             C8667 + C8667 + C32517 * C651) *
                C32699) *
               C32662 +
           ((C7767 * C232 + C7792 + C7792 + C32804 * C252 + C7769 * C233 +
             C7793 + C7793 + C32517 * C253) *
                C21058 +
            (C7767 * C1099 + C8668 + C8668 + C32804 * C1117 + C7769 * C1472 +
             C8669 + C8669 + C32517 * C1474) *
                C32699) *
               C17967) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C21058 +
            (C9004 + C9005) * C32699) *
               C32655 +
           ((C7930 + C7931) * C21058 + C9630 * C32699) * C32662 +
           C29051 * C17967) *
              C32570 * C221 -
          (((C8512 + C8513) * C32699 + (C7935 + C7934) * C21058) * C17967 +
           (C9631 * C32699 + (C7933 + C7932) * C21058) * C32662 +
           (C9632 * C32699 + (C7931 + C7930) * C21058) * C32655) *
              C32570 * C222 +
          (C29051 * C32655 +
           (C7939 * C21058 + (C8513 + C8512) * C32699) * C32662 +
           ((C7937 + C7936) * C21058 +
            (C7767 * C6435 + C8498 + C8498 + C32804 * C6441 + C7769 * C6646 +
             C8499 + C8499 + C32517 * C6648) *
                C32699) *
               C17967) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[30] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32695 +
             C7165 * C32702 + C7166 * C24588) *
                C32655 +
            (C31020 + C31021 + C31022) * C32662 + C31030 * C17967) *
               C32570 * C452 -
           ((C31026 + C31027 + C31028) * C17967 +
            (C31025 + C31024 + C31023) * C32662 +
            (C31022 + C31021 + C31020) * C32655) *
               C32570 * C453) *
              C454 +
          (((C31287 + C31288 + C31289) * C32655 +
            (C31290 + C31291 + C31292) * C32662 +
            (C6559 * C32695 + C10077 * C32702 +
             (C6256 * C7315 + C7329 + C7329 + C32507 * C7317) * C24588) *
                C17967) *
               C32570 * C453 -
           ((C31292 + C31291 + C31290) * C17967 +
            (C31289 + C31288 + C31287) * C32662 +
            (C7507 * C24588 + C7506 * C32702 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32695) *
                C32655) *
               C32570 * C452) *
              C455)) /
        (p * q * std::sqrt(p + q));
    d2ee[31] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32695 +
             C7165 * C32702 + C7166 * C24588) *
                C32655 +
            (C31020 + C31021 + C31022) * C32662 + C31030 * C17967) *
               C546 -
           ((C31585 + C31586 + C31587) * C17967 +
            (C31588 + C31589 + C31590) * C32662 +
            (C7169 * C24588 + C7166 * C32702 + C7165 * C32695) * C32655) *
               C547) *
              C452 +
          (((C31590 + C31589 + C31588) * C32655 +
            (C31587 + C31586 + C31585) * C32662 +
            (C6758 * C32695 + C7015 * C32702 +
             (C6256 * C7653 + C7663 + C7663 + C32507 * C7655) * C24588) *
                C17967) *
               C547 -
           ((C31026 + C31027 + C31028) * C17967 +
            (C31025 + C31024 + C31023) * C32662 +
            (C31022 + C31021 + C31020) * C32655) *
               C546) *
              C453) *
         C32544) /
        (p * q * std::sqrt(p + q));
    d2ee[32] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32695 +
            C7165 * C32702 + C7166 * C24588) *
               C32655 +
           (C31020 + C31021 + C31022) * C32662 + C31030 * C17967) *
              C32570 * C221 -
          ((C31026 + C31027 + C31028) * C17967 +
           (C31025 + C31024 + C31023) * C32662 +
           (C31022 + C31021 + C31020) * C32655) *
              C32570 * C222 +
          (C31030 * C32655 + (C31028 + C31027 + C31026) * C32662 +
           (C6367 * C32695 + C6757 * C32702 +
            (C6256 * C6437 + C6454 + C6454 + C32507 * C6443) * C24588) *
               C17967) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32695 +
            C7165 * C32702 + C7166 * C24588) *
               C32655 +
           (C6364 * C32695 + C6760 * C32702 + C7013 * C24588) * C32662 +
           (C6365 * C32695 + C6759 * C32702 + C7014 * C24588) * C17967) *
              C32570 * C32556 * C110 -
          ((C7341 * C24588 + C7340 * C32702 + C6558 * C32695) * C17967 +
           (C7339 * C24588 + C7338 * C32702 + C6557 * C32695) * C32662 +
           (C7507 * C24588 + C7506 * C32702 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32695) *
               C32655) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32695 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C32702 +
            (C6256 * C337 + C6879 + C6879 + C32507 * C357) * C24588) *
               C32655 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32695 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C32702 +
            (C6256 * C1104 + C6881 + C6881 + C32507 * C1122) * C24588) *
               C32662 +
           ((C6256 * C232 + C6271 + C6271 + C32507 * C252) * C32695 +
            (C6256 * C1099 + C6882 + C6882 + C32507 * C1117) * C32702 +
            (C6256 * C1107 + C6883 + C6883 + C32507 * C1125) * C24588) *
               C17967) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32695 +
            C7165 * C32702 + C7166 * C24588) *
               C32655 +
           (C31020 + C31021 + C31022) * C32662 + C31030 * C17967) *
              C327 -
          ((C7167 * C24588 + C7014 * C32702 + C6759 * C32695) * C17967 +
           (C7168 * C24588 + C7013 * C32702 + C6760 * C32695) * C32662 +
           (C7169 * C24588 + C7166 * C32702 + C7165 * C32695) * C32655) *
              C328 +
          ((C7166 * C32695 + C7169 * C32702 + C12233 * C24588) * C32655 +
           (C7013 * C32695 + C7168 * C32702 + C12507 * C24588) * C32662 +
           (C7014 * C32695 + C7167 * C32702 +
            (C6256 * C7131 + C7154 + C7154 + C32507 * C7137) * C24588) *
               C17967) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[33] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32695 +
             C7165 * C32702 + C7166 * C24588) *
                C32655 +
            (C31020 + C31021 + C31022) * C32662 + C31030 * C17967) *
               C546 -
           ((C7167 * C24588 + C7014 * C32702 + C6759 * C32695) * C17967 +
            (C7168 * C24588 + C7013 * C32702 + C6760 * C32695) * C32662 +
            (C7169 * C24588 + C7166 * C32702 + C7165 * C32695) * C32655) *
               C547) *
              C32556 * C454 +
          (((C7506 * C32695 + C7507 * C32702 + C12415 * C24588) * C32655 +
            (C7338 * C32695 + C7339 * C32702 + C14738 * C24588) * C32662 +
            (C7340 * C32695 + C7341 * C32702 +
             (C6256 * C7491 + C7501 + C7501 + C32507 * C7493) * C24588) *
                C17967) *
               C547 -
           ((C31292 + C31291 + C31290) * C17967 +
            (C31289 + C31288 + C31287) * C32662 +
            (C7507 * C24588 + C7506 * C32702 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32695) *
                C32655) *
               C546) *
              C32556 * C455)) /
        (p * q * std::sqrt(p + q));
    d2ee[34] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32695 +
            C7165 * C32702 + C7166 * C24588) *
               C32655 +
           (C6364 * C32695 + C6760 * C32702 + C7013 * C24588) * C32662 +
           (C6365 * C32695 + C6759 * C32702 + C7014 * C24588) * C17967) *
              C32570 * C32556 * C110 -
          ((C7341 * C24588 + C7340 * C32702 + C6558 * C32695) * C17967 +
           (C7339 * C24588 + C7338 * C32702 + C6557 * C32695) * C32662 +
           (C7507 * C24588 + C7506 * C32702 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32695) *
               C32655) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32695 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C32702 +
            (C6256 * C337 + C6879 + C6879 + C32507 * C357) * C24588) *
               C32655 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32695 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C32702 +
            (C6256 * C1104 + C6881 + C6881 + C32507 * C1122) * C24588) *
               C32662 +
           ((C6256 * C232 + C6271 + C6271 + C32507 * C252) * C32695 +
            (C6256 * C1099 + C6882 + C6882 + C32507 * C1117) * C32702 +
            (C6256 * C1107 + C6883 + C6883 + C32507 * C1125) * C24588) *
               C17967) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32695 +
            C7165 * C32702 + C7166 * C24588) *
               C32655 +
           (C31020 + C31021 + C31022) * C32662 + C31030 * C17967) *
              C32570 * C221 -
          ((C31026 + C31027 + C31028) * C17967 +
           (C31025 + C31024 + C31023) * C32662 +
           (C31022 + C31021 + C31020) * C32655) *
              C32570 * C222 +
          (C31030 * C32655 + (C31028 + C31027 + C31026) * C32662 +
           (C6367 * C32695 + C6757 * C32702 +
            (C6256 * C6437 + C6454 + C6454 + C32507 * C6443) * C24588) *
               C17967) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[35] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C21058 +
             C7165 * C32699) *
                C32893 +
            (C27547 + C27548) * C32889 + C27555 * C32879 + C27556 * C32831) *
               C32570 * C452 -
           ((C27553 + C27554) * C32831 + (C27552 + C27551) * C32879 +
            (C27550 + C27549) * C32889 + (C27548 + C27547) * C32893) *
               C32570 * C453) *
              C454 +
          (((C27785 + C27786) * C32893 + (C27787 + C27788) * C32889 +
            (C27789 + C27790) * C32879 +
            (C6560 * C21058 +
             (C6256 * C6646 + C6654 + C6654 + C32507 * C6648) * C32699) *
                C32831) *
               C32570 * C453 -
           ((C27790 + C27789) * C32831 + (C27788 + C27787) * C32879 +
            (C27786 + C27785) * C32889 +
            (C7506 * C32699 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C21058) *
                C32893) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
              C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
              C32845 * C139) *
                 C21058 +
             (C10729 + C10730 + C10731) * C32699) *
                C15105 +
            ((C5536 + C5537 + C5538) * C21058 +
             (C6188 + C6187 + C6186) * C32699) *
                C32659) *
               C32570 * C452 -
           (((C6183 + C6184 + C6185) * C32699 +
             (C5541 + C5540 + C5539) * C21058) *
                C32659 +
            ((C6186 + C6187 + C6188) * C32699 +
             (C5538 + C5537 + C5536) * C21058) *
                C15105) *
               C32570 * C453) *
              C454 +
          ((((C5849 + C5850 + C5851) * C21058 +
             (C26956 + C26957 + C26958) * C32699) *
                C15105 +
            ((C5852 + C5853 + C5854) * C21058 +
             (C5350 * C1100 + C6007 + C6007 + C32883 * C1118 + C5352 * C1099 +
              C6008 + C6008 + C32870 * C1117 + C5354 * C1472 + C6009 + C6009 +
              C32845 * C1474) *
                 C32699) *
                C32659) *
               C32570 * C453 -
           (((C26958 + C26957 + C26956) * C32699 +
             (C5851 + C5850 + C5849) * C21058) *
                C32659 +
            ((C11064 + C11063 + C11062) * C32699 +
             (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
              C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
              C32883 * C138) *
                 C21058) *
                C15105) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32894 +
             C7165 * C32891 + C7166 * C32882 + C7169 * C32838) *
                C15105 +
            (C28253 + C28254 + C28255 + C28256) * C32659) *
               C32570 * C452 -
           ((C28257 + C28258 + C28259 + C28260) * C32659 +
            (C28256 + C28255 + C28254 + C28253) * C15105) *
               C32570 * C453) *
              C454 +
          (((C28489 + C28490 + C28491 + C28492) * C15105 +
            (C6558 * C32894 + C7340 * C32891 + C7341 * C32882 +
             (C6256 * C7491 + C7501 + C7501 + C32507 * C7493) * C32838) *
                C32659) *
               C32570 * C453 -
           ((C28492 + C28491 + C28490 + C28489) * C32659 +
            (C12415 * C32838 + C7507 * C32882 + C7506 * C32891 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32894) *
                C15105) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[36] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C21058 +
             C7165 * C32699) *
                C32893 +
            (C27547 + C27548) * C32889 + C27555 * C32879 + C27556 * C32831) *
               C546 -
           ((C28051 + C28052) * C32831 + (C28053 + C28054) * C32879 +
            (C28055 + C28056) * C32889 +
            (C7166 * C32699 + C7165 * C21058) * C32893) *
               C547) *
              C452 +
          (((C28056 + C28055) * C32893 + (C28054 + C28053) * C32889 +
            (C28052 + C28051) * C32879 +
            (C6757 * C21058 +
             (C6256 * C6437 + C6454 + C6454 + C32507 * C6443) * C32699) *
                C32831) *
               C547 -
           ((C27553 + C27554) * C32831 + (C27552 + C27551) * C32879 +
            (C27550 + C27549) * C32889 + (C27548 + C27547) * C32893) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
              C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
              C32845 * C139) *
                 C21058 +
             (C10729 + C10730 + C10731) * C32699) *
                C15105 +
            ((C5536 + C5537 + C5538) * C21058 + C27349 * C32699) * C32659) *
               C546 -
           (((C11231 + C11230 + C11229) * C32699 + C27350 * C21058) * C32659 +
            ((C10734 + C10733 + C10732) * C32699 +
             (C10731 + C10730 + C10729) * C21058) *
                C15105) *
               C547) *
              C452 +
          (((C27349 * C21058 + (C11229 + C11230 + C11231) * C32699) * C15105 +
            ((C6185 + C6184 + C6183) * C21058 +
             (C5350 * C1105 + C5673 + C5673 + C32883 * C1123 + C5352 * C1106 +
              C5674 + C5674 + C32870 * C1124 + C5354 * C1107 + C5675 + C5675 +
              C32845 * C1125) *
                 C32699) *
                C32659) *
               C547 -
           (((C6183 + C6184 + C6185) * C32699 +
             (C5541 + C5540 + C5539) * C21058) *
                C32659 +
            (C27350 * C32699 + (C5538 + C5537 + C5536) * C21058) * C15105) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32894 +
             C7165 * C32891 + C7166 * C32882 + C7169 * C32838) *
                C15105 +
            (C28253 + C28254 + C28255 + C28256) * C32659) *
               C546 -
           ((C28753 + C28754 + C28755 + C28756) * C32659 +
            (C12233 * C32838 + C7169 * C32882 + C7166 * C32891 +
             C7165 * C32894) *
                C15105) *
               C547) *
              C452 +
          (((C28756 + C28755 + C28754 + C28753) * C15105 +
            (C6759 * C32894 + C7014 * C32891 + C7167 * C32882 +
             (C6256 * C7131 + C7154 + C7154 + C32507 * C7137) * C32838) *
                C32659) *
               C547 -
           ((C28257 + C28258 + C28259 + C28260) * C32659 +
            (C28256 + C28255 + C28254 + C28253) * C15105) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[37] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
                 C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
                 C32845 * C139) *
                    C21058 +
                (C10729 + C10730 + C10731) * C32699) *
                   C15105 +
               ((C5536 + C5537 + C5538) * C21058 +
                (C6188 + C6187 + C6186) * C32699) *
                   C32659) *
                  C32570 * C32556 * C110 -
              (((C5354 * C641 + C6006 + C6006 + C32845 * C651 + C5352 * C640 +
                 C6005 + C6005 + C32870 * C650 + C5350 * C639 + C6004 + C6004 +
                 C32883 * C649) *
                    C32699 +
                (C5851 + C5850 + C5849) * C21058) *
                   C32659 +
               ((C11064 + C11063 + C11062) * C32699 +
                (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
                 C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
                 C32883 * C138) *
                    C21058) *
                   C15105) *
                  C32570 * C32556 * C111 +
              (((C5350 * C125 + C5375 + C5375 + C32883 * C139 + C5352 * C126 +
                 C5376 + C5376 + C32870 * C140 + C5354 * C127 + C5377 + C5377 +
                 C32845 * C141) *
                    C21058 +
                (C5350 * C332 + C10461 + C10461 + C32883 * C352 + C5352 * C331 +
                 C10462 + C10462 + C32870 * C351 + C5354 * C330 + C10463 +
                 C10463 + C32845 * C350) *
                    C32699) *
                   C15105 +
               ((C5350 * C227 + C5378 + C5378 + C32883 * C247 + C5352 * C226 +
                 C5379 + C5379 + C32870 * C246 + C5354 * C225 + C5380 + C5380 +
                 C32845 * C245) *
                    C21058 +
                (C5350 * C640 + C26455 + C26455 + C32883 * C650 + C5352 * C641 +
                 C26456 + C26456 + C32870 * C651 + C5354 * C642 + C26457 +
                 C26457 + C32845 * C652) *
                    C32699) *
                   C32659) *
                  C32570 * C32556 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
                 C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
                 C32845 * C139) *
                    C21058 +
                (C10729 + C10730 + C10731) * C32699) *
                   C15105 +
               ((C5536 + C5537 + C5538) * C21058 +
                (C6188 + C6187 + C6186) * C32699) *
                   C32659) *
                  C32570 * C221 -
              (((C6183 + C6184 + C6185) * C32699 +
                (C5541 + C5540 + C5539) * C21058) *
                   C32659 +
               ((C6186 + C6187 + C6188) * C32699 +
                (C5538 + C5537 + C5536) * C21058) *
                   C15105) *
                  C32570 * C222 +
              ((C5546 * C21058 + (C6185 + C6184 + C6183) * C32699) * C15105 +
               ((C5544 + C5543 + C5542) * C21058 +
                (C5350 * C1630 + C6168 + C6168 + C32883 * C1636 +
                 C5352 * C1631 + C6169 + C6169 + C32870 * C1637 +
                 C5354 * C1632 + C6170 + C6170 + C32845 * C1638) *
                    C32699) *
                   C32659) *
                  C32570 * C223) *
             C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C21058 +
            (C10729 + C10730 + C10731) * C32699) *
               C15105 +
           ((C5536 + C5537 + C5538) * C21058 +
            (C6188 + C6187 + C6186) * C32699) *
               C32659) *
              C327 -
          (((C11231 + C11230 + C11229) * C32699 +
            (C6186 + C6187 + C6188) * C21058) *
               C32659 +
           ((C10734 + C10733 + C10732) * C32699 +
            (C10731 + C10730 + C10729) * C21058) *
               C15105) *
              C328 +
          ((C10739 * C21058 + (C10737 + C10736 + C10735) * C32699) * C15105 +
           ((C11229 + C11230 + C11231) * C21058 +
            (C5350 * C2565 + C11220 + C11220 + C32883 * C2571 + C5352 * C2566 +
             C11221 + C11221 + C32870 * C2572 + C5354 * C2567 + C11222 +
             C11222 + C32845 * C2573) *
                C32699) *
               C32659) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C21058 +
            C7165 * C32699) *
               C32893 +
           (C6364 * C21058 + C6760 * C32699) * C32889 +
           (C6365 * C21058 + C6759 * C32699) * C32879 +
           (C6366 * C21058 + C6758 * C32699) * C32831) *
              C32570 * C32556 * C110 -
          ((C10077 * C32699 + C6559 * C21058) * C32831 +
           (C7340 * C32699 + C6558 * C21058) * C32879 +
           (C7338 * C32699 + C6557 * C21058) * C32889 +
           (C7506 * C32699 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C21058) *
               C32893) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C21058 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C32699) *
               C32893 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C21058 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C32699) *
               C32889 +
           ((C6256 * C232 + C6271 + C6271 + C32507 * C252) * C21058 +
            (C6256 * C1099 + C6882 + C6882 + C32507 * C1117) * C32699) *
               C32879 +
           ((C6256 * C917 + C6272 + C6272 + C32507 * C929) * C21058 +
            (C6256 * C1632 + C9731 + C9731 + C32507 * C1638) * C32699) *
               C32831) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C21058 +
            C7165 * C32699) *
               C32893 +
           (C27547 + C27548) * C32889 + C27555 * C32879 + C27556 * C32831) *
              C32570 * C221 -
          ((C27553 + C27554) * C32831 + (C27552 + C27551) * C32879 +
           (C27550 + C27549) * C32889 + (C27548 + C27547) * C32893) *
              C32570 * C222 +
          (C27555 * C32893 + C27556 * C32889 + (C27554 + C27553) * C32879 +
           (C6368 * C21058 +
            (C6256 * C6736 + C6748 + C6748 + C32507 * C6738) * C32699) *
               C32831) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C21058 +
            C7165 * C32699) *
               C32893 +
           (C27547 + C27548) * C32889 + C27555 * C32879 + C27556 * C32831) *
              C327 -
          ((C7015 * C32699 + C6758 * C21058) * C32831 +
           (C7014 * C32699 + C6759 * C21058) * C32879 +
           (C7013 * C32699 + C6760 * C21058) * C32889 +
           (C7166 * C32699 + C7165 * C21058) * C32893) *
              C328 +
          ((C7166 * C21058 + C7169 * C32699) * C32893 +
           (C7013 * C21058 + C7168 * C32699) * C32889 +
           (C7014 * C21058 + C7167 * C32699) * C32879 +
           (C7015 * C21058 +
            (C6256 * C7653 + C7663 + C7663 + C32507 * C7655) * C32699) *
               C32831) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32894 +
            C7165 * C32891 + C7166 * C32882 + C7169 * C32838) *
               C15105 +
           (C6364 * C32894 + C6760 * C32891 + C7013 * C32882 + C7168 * C32838) *
               C32659) *
              C32570 * C32556 * C110 -
          ((C14738 * C32838 + C7339 * C32882 + C7338 * C32891 +
            C6557 * C32894) *
               C32659 +
           (C12415 * C32838 + C7507 * C32882 + C7506 * C32891 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32894) *
               C15105) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32894 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C32891 +
            (C6256 * C337 + C6879 + C6879 + C32507 * C357) * C32882 +
            (C6256 * C2014 + C12091 + C12091 + C32507 * C2026) * C32838) *
               C15105 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32894 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C32891 +
            (C6256 * C1104 + C6881 + C6881 + C32507 * C1122) * C32882 +
            (C6256 * C2567 + C14396 + C14396 + C32507 * C2573) * C32838) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32894 +
            C7165 * C32891 + C7166 * C32882 + C7169 * C32838) *
               C15105 +
           (C28253 + C28254 + C28255 + C28256) * C32659) *
              C32570 * C221 -
          ((C28257 + C28258 + C28259 + C28260) * C32659 +
           (C28256 + C28255 + C28254 + C28253) * C15105) *
              C32570 * C222 +
          ((C28260 + C28259 + C28258 + C28257) * C15105 +
           (C6366 * C32894 + C6758 * C32891 + C7015 * C32882 +
            (C6256 * C7653 + C7663 + C7663 + C32507 * C7655) * C32838) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32894 +
            C7165 * C32891 + C7166 * C32882 + C7169 * C32838) *
               C15105 +
           (C28253 + C28254 + C28255 + C28256) * C32659) *
              C327 -
          ((C12507 * C32838 + C7168 * C32882 + C7013 * C32891 +
            C6760 * C32894) *
               C32659 +
           (C12233 * C32838 + C7169 * C32882 + C7166 * C32891 +
            C7165 * C32894) *
               C15105) *
              C328 +
          ((C7166 * C32894 + C7169 * C32891 + C12233 * C32882 +
            C12234 * C32838) *
               C15105 +
           (C7013 * C32894 + C7168 * C32891 + C12507 * C32882 +
            (C6256 * C12498 + C12504 + C12504 + C32507 * C12500) * C32838) *
               C32659) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[38] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C21058 +
             C7165 * C32699) *
                C32893 +
            (C27547 + C27548) * C32889 + C27555 * C32879 + C27556 * C32831) *
               C546 -
           ((C7015 * C32699 + C6758 * C21058) * C32831 +
            (C7014 * C32699 + C6759 * C21058) * C32879 +
            (C7013 * C32699 + C6760 * C21058) * C32889 +
            (C7166 * C32699 + C7165 * C21058) * C32893) *
               C547) *
              C32556 * C454 +
          (((C7506 * C21058 + C7507 * C32699) * C32893 +
            (C7338 * C21058 + C7339 * C32699) * C32889 +
            (C7340 * C21058 + C7341 * C32699) * C32879 +
            (C10077 * C21058 +
             (C6256 * C7315 + C7329 + C7329 + C32507 * C7317) * C32699) *
                C32831) *
               C547 -
           ((C27790 + C27789) * C32831 + (C27788 + C27787) * C32879 +
            (C27786 + C27785) * C32889 +
            (C7506 * C32699 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C21058) *
                C32893) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
              C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
              C32845 * C139) *
                 C21058 +
             (C10729 + C10730 + C10731) * C32699) *
                C15105 +
            ((C5536 + C5537 + C5538) * C21058 +
             (C6188 + C6187 + C6186) * C32699) *
                C32659) *
               C546 -
           (((C11231 + C11230 + C11229) * C32699 +
             (C6186 + C6187 + C6188) * C21058) *
                C32659 +
            ((C10734 + C10733 + C10732) * C32699 +
             (C10731 + C10730 + C10729) * C21058) *
                C15105) *
               C547) *
              C32556 * C454 +
          ((((C11062 + C11063 + C11064) * C21058 +
             (C11065 + C11066 + C11067) * C32699) *
                C15105 +
            ((C26956 + C26957 + C26958) * C21058 +
             (C5350 * C1103 + C10886 + C10886 + C32883 * C1121 + C5352 * C1104 +
              C10887 + C10887 + C32870 * C1122 + C5354 * C2231 + C10888 +
              C10888 + C32845 * C2233) *
                 C32699) *
                C32659) *
               C547 -
           (((C26958 + C26957 + C26956) * C32699 +
             (C5851 + C5850 + C5849) * C21058) *
                C32659 +
            ((C11064 + C11063 + C11062) * C32699 +
             (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
              C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
              C32883 * C138) *
                 C21058) *
                C15105) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32894 +
             C7165 * C32891 + C7166 * C32882 + C7169 * C32838) *
                C15105 +
            (C28253 + C28254 + C28255 + C28256) * C32659) *
               C546 -
           ((C12507 * C32838 + C7168 * C32882 + C7013 * C32891 +
             C6760 * C32894) *
                C32659 +
            (C12233 * C32838 + C7169 * C32882 + C7166 * C32891 +
             C7165 * C32894) *
                C15105) *
               C547) *
              C32556 * C454 +
          (((C7506 * C32894 + C7507 * C32891 + C12415 * C32882 +
             C12416 * C32838) *
                C15105 +
            (C7338 * C32894 + C7339 * C32891 + C14738 * C32882 +
             (C6256 * C12316 + C12320 + C12320 + C32507 * C12318) * C32838) *
                C32659) *
               C547 -
           ((C28492 + C28491 + C28490 + C28489) * C32659 +
            (C12415 * C32838 + C7507 * C32882 + C7506 * C32891 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32894) *
                C15105) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[39] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C21058 +
            (C10729 + C10730 + C10731) * C32699) *
               C15105 +
           ((C5536 + C5537 + C5538) * C21058 +
            (C6188 + C6187 + C6186) * C32699) *
               C32659) *
              C32570 * C221 -
          (((C6183 + C6184 + C6185) * C32699 +
            (C5541 + C5540 + C5539) * C21058) *
               C32659 +
           ((C6186 + C6187 + C6188) * C32699 +
            (C5538 + C5537 + C5536) * C21058) *
               C15105) *
              C32570 * C222 +
          ((C5546 * C21058 + (C6185 + C6184 + C6183) * C32699) * C15105 +
           ((C5544 + C5543 + C5542) * C21058 +
            (C5350 * C1630 + C6168 + C6168 + C32883 * C1636 + C5352 * C1631 +
             C6169 + C6169 + C32870 * C1637 + C5354 * C1632 + C6170 + C6170 +
             C32845 * C1638) *
                C32699) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C21058 +
            (C10729 + C10730 + C10731) * C32699) *
               C15105 +
           ((C5536 + C5537 + C5538) * C21058 +
            (C6188 + C6187 + C6186) * C32699) *
               C32659) *
              C32570 * C32556 * C110 -
          (((C5354 * C641 + C6006 + C6006 + C32845 * C651 + C5352 * C640 +
             C6005 + C6005 + C32870 * C650 + C5350 * C639 + C6004 + C6004 +
             C32883 * C649) *
                C32699 +
            (C5851 + C5850 + C5849) * C21058) *
               C32659 +
           ((C11064 + C11063 + C11062) * C32699 +
            (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
             C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
             C32883 * C138) *
                C21058) *
               C15105) *
              C32570 * C32556 * C111 +
          (((C5350 * C125 + C5375 + C5375 + C32883 * C139 + C5352 * C126 +
             C5376 + C5376 + C32870 * C140 + C5354 * C127 + C5377 + C5377 +
             C32845 * C141) *
                C21058 +
            (C5350 * C332 + C10461 + C10461 + C32883 * C352 + C5352 * C331 +
             C10462 + C10462 + C32870 * C351 + C5354 * C330 + C10463 + C10463 +
             C32845 * C350) *
                C32699) *
               C15105 +
           ((C5350 * C227 + C5378 + C5378 + C32883 * C247 + C5352 * C226 +
             C5379 + C5379 + C32870 * C246 + C5354 * C225 + C5380 + C5380 +
             C32845 * C245) *
                C21058 +
            (C5350 * C640 + C26455 + C26455 + C32883 * C650 + C5352 * C641 +
             C26456 + C26456 + C32870 * C651 + C5354 * C642 + C26457 + C26457 +
             C32845 * C652) *
                C32699) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C21058 +
            C7165 * C32699) *
               C32893 +
           (C6364 * C21058 + C6760 * C32699) * C32889 +
           (C6365 * C21058 + C6759 * C32699) * C32879 +
           (C6366 * C21058 + C6758 * C32699) * C32831) *
              C32570 * C32556 * C110 -
          ((C10077 * C32699 + C6559 * C21058) * C32831 +
           (C7340 * C32699 + C6558 * C21058) * C32879 +
           (C7338 * C32699 + C6557 * C21058) * C32889 +
           (C7506 * C32699 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C21058) *
               C32893) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C21058 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C32699) *
               C32893 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C21058 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C32699) *
               C32889 +
           ((C6256 * C232 + C6271 + C6271 + C32507 * C252) * C21058 +
            (C6256 * C1099 + C6882 + C6882 + C32507 * C1117) * C32699) *
               C32879 +
           ((C6256 * C917 + C6272 + C6272 + C32507 * C929) * C21058 +
            (C6256 * C1632 + C9731 + C9731 + C32507 * C1638) * C32699) *
               C32831) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C21058 +
            C7165 * C32699) *
               C32893 +
           (C27547 + C27548) * C32889 + C27555 * C32879 + C27556 * C32831) *
              C32570 * C221 -
          ((C27553 + C27554) * C32831 + (C27552 + C27551) * C32879 +
           (C27550 + C27549) * C32889 + (C27548 + C27547) * C32893) *
              C32570 * C222 +
          (C27555 * C32893 + C27556 * C32889 + (C27554 + C27553) * C32879 +
           (C6368 * C21058 +
            (C6256 * C6736 + C6748 + C6748 + C32507 * C6738) * C32699) *
               C32831) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32894 +
            C7165 * C32891 + C7166 * C32882 + C7169 * C32838) *
               C15105 +
           (C6364 * C32894 + C6760 * C32891 + C7013 * C32882 + C7168 * C32838) *
               C32659) *
              C32570 * C32556 * C110 -
          ((C14738 * C32838 + C7339 * C32882 + C7338 * C32891 +
            C6557 * C32894) *
               C32659 +
           (C12415 * C32838 + C7507 * C32882 + C7506 * C32891 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32894) *
               C15105) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32894 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C32891 +
            (C6256 * C337 + C6879 + C6879 + C32507 * C357) * C32882 +
            (C6256 * C2014 + C12091 + C12091 + C32507 * C2026) * C32838) *
               C15105 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32894 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C32891 +
            (C6256 * C1104 + C6881 + C6881 + C32507 * C1122) * C32882 +
            (C6256 * C2567 + C14396 + C14396 + C32507 * C2573) * C32838) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32894 +
            C7165 * C32891 + C7166 * C32882 + C7169 * C32838) *
               C15105 +
           (C28253 + C28254 + C28255 + C28256) * C32659) *
              C32570 * C221 -
          ((C28257 + C28258 + C28259 + C28260) * C32659 +
           (C28256 + C28255 + C28254 + C28253) * C15105) *
              C32570 * C222 +
          ((C28260 + C28259 + C28258 + C28257) * C15105 +
           (C6366 * C32894 + C6758 * C32891 + C7015 * C32882 +
            (C6256 * C7653 + C7663 + C7663 + C32507 * C7655) * C32838) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[40] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
              C7773 + C7773 + C32517 * C138) *
                 C32695 +
             (C9004 + C9005) * C32702 + C12950 * C24588) *
                C15105 +
            ((C7930 + C7931) * C32695 + C9630 * C32702 + C12951 * C24588) *
                C32659) *
               C32570 * C452 -
           (((C9006 + C9007) * C24588 + C9631 * C32702 +
             (C7933 + C7932) * C32695) *
                C32659 +
            (C13582 * C24588 + C9632 * C32702 + (C7931 + C7930) * C32695) *
                C15105) *
               C32570 * C453) *
              C454 +
          ((((C8212 + C8213) * C32695 + (C9222 + C9223) * C32702 +
             (C13178 + C13179) * C24588) *
                C15105 +
            ((C8214 + C8215) * C32695 + (C9224 + C9225) * C32702 +
             (C7767 * C1106 + C9428 + C9428 + C32804 * C1124 + C7769 * C1107 +
              C9429 + C9429 + C32517 * C1125) *
                 C24588) *
                C32659) *
               C32570 * C453 -
           (((C13179 + C13178) * C24588 + (C9223 + C9222) * C32702 +
             (C8213 + C8212) * C32695) *
                C32659 +
            ((C13387 + C13386) * C24588 + (C9435 + C9434) * C32702 +
             (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
              C7787 + C7787 + C32804 * C138) *
                 C32695) *
                C15105) *
               C32570 * C452) *
              C455)) /
        (p * q * std::sqrt(p + q));
    d2ee[41] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
              C7773 + C7773 + C32517 * C138) *
                 C32695 +
             (C9004 + C9005) * C32702 + C12950 * C24588) *
                C15105 +
            ((C7930 + C7931) * C32695 + C9630 * C32702 + C12951 * C24588) *
                C32659) *
               C546 -
           (((C12972 + C12973) * C24588 + C13582 * C32702 + C9632 * C32695) *
                C32659 +
            ((C12974 + C12975) * C24588 + (C9010 + C9011) * C32702 +
             (C9005 + C9004) * C32695) *
                C15105) *
               C547) *
              C452 +
          (((C9630 * C32695 + C12951 * C32702 + (C12973 + C12972) * C24588) *
                C15105 +
            (C8817 * C32695 + (C9007 + C9006) * C32702 +
             (C7767 * C7129 + C8986 + C8986 + C32804 * C7135 + C7769 * C7491 +
              C8987 + C8987 + C32517 * C7493) *
                 C24588) *
                C32659) *
               C547 -
           (((C9006 + C9007) * C24588 + C9631 * C32702 +
             (C7933 + C7932) * C32695) *
                C32659 +
            (C13582 * C24588 + C9632 * C32702 + (C7931 + C7930) * C32695) *
                C15105) *
               C546) *
              C453) *
         C32544) /
        (p * q * std::sqrt(p + q));
    d2ee[42] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32695 +
            (C9004 + C9005) * C32702 + C12950 * C24588) *
               C15105 +
           ((C7930 + C7931) * C32695 + C9630 * C32702 + C12951 * C24588) *
               C32659) *
              C32570 * C221 -
          (((C9006 + C9007) * C24588 + C9631 * C32702 +
            (C7933 + C7932) * C32695) *
               C32659 +
           (C13582 * C24588 + C9632 * C32702 + (C7931 + C7930) * C32695) *
               C15105) *
              C32570 * C222 +
          ((C7938 * C32695 + C8817 * C32702 + (C9007 + C9006) * C24588) *
               C15105 +
           (C7939 * C32695 + (C8513 + C8512) * C32702 +
            (C7767 * C6436 + C8054 + C8054 + C32804 * C6442 + C7769 * C7315 +
             C8055 + C8055 + C32517 * C7317) *
                C24588) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32695 +
            (C9004 + C9005) * C32702 + C12950 * C24588) *
               C15105 +
           ((C7930 + C7931) * C32695 + C9630 * C32702 + C12951 * C24588) *
               C32659) *
              C32570 * C32556 * C110 -
          (((C13179 + C13178) * C24588 + (C9223 + C9222) * C32702 +
            (C8213 + C8212) * C32695) *
               C32659 +
           ((C13387 + C13386) * C24588 + (C9435 + C9434) * C32702 +
            (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
             C7787 + C7787 + C32804 * C138) *
                C32695) *
               C15105) *
              C32570 * C32556 * C111 +
          (((C7767 * C125 + C7788 + C7788 + C32804 * C139 + C7769 * C126 +
             C7789 + C7789 + C32517 * C140) *
                C32695 +
            (C7767 * C332 + C8664 + C8664 + C32804 * C352 + C7769 * C331 +
             C8665 + C8665 + C32517 * C351) *
                C32702 +
            (C7767 * C337 + C12654 + C12654 + C32804 * C357 + C7769 * C338 +
             C12655 + C12655 + C32517 * C358) *
                C24588) *
               C15105 +
           ((C7767 * C227 + C7790 + C7790 + C32804 * C247 + C7769 * C226 +
             C7791 + C7791 + C32517 * C246) *
                C32695 +
            (C7767 * C640 + C8666 + C8666 + C32804 * C650 + C7769 * C641 +
             C8667 + C8667 + C32517 * C651) *
                C32702 +
            (C7767 * C1104 + C12656 + C12656 + C32804 * C1122 + C7769 * C2231 +
             C12657 + C12657 + C32517 * C2233) *
                C24588) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32695 +
            (C9004 + C9005) * C32702 + C12950 * C24588) *
               C15105 +
           ((C7930 + C7931) * C32695 + C9630 * C32702 + C12951 * C24588) *
               C32659) *
              C327 -
          (((C12972 + C12973) * C24588 + C13582 * C32702 + C9632 * C32695) *
               C32659 +
           ((C12974 + C12975) * C24588 + (C9010 + C9011) * C32702 +
            (C9005 + C9004) * C32695) *
               C15105) *
              C328 +
          ((C12950 * C32695 + C13883 * C32702 + (C13895 + C13894) * C24588) *
               C15105 +
           (C12951 * C32695 + (C12973 + C12972) * C32702 +
            (C7767 * C7130 + C12962 + C12962 + C32804 * C7136 + C7769 * C12316 +
             C12963 + C12963 + C32517 * C12318) *
                C24588) *
               C32659) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[43] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
              C7773 + C7773 + C32517 * C138) *
                 C32695 +
             (C9004 + C9005) * C32702 + C12950 * C24588) *
                C15105 +
            ((C7930 + C7931) * C32695 + C9630 * C32702 + C12951 * C24588) *
                C32659) *
               C546 -
           (((C12972 + C12973) * C24588 + C13582 * C32702 + C9632 * C32695) *
                C32659 +
            ((C12974 + C12975) * C24588 + (C9010 + C9011) * C32702 +
             (C9005 + C9004) * C32695) *
                C15105) *
               C547) *
              C32556 * C454 +
          ((((C9434 + C9435) * C32695 + (C13386 + C13387) * C32702 +
             (C14166 + C14167) * C24588) *
                C15105 +
            ((C9222 + C9223) * C32695 + (C13178 + C13179) * C32702 +
             (C7767 * C2566 + C13380 + C13380 + C32804 * C2572 + C7769 * C2567 +
              C13381 + C13381 + C32517 * C2573) *
                 C24588) *
                C32659) *
               C547 -
           (((C13179 + C13178) * C24588 + (C9223 + C9222) * C32702 +
             (C8213 + C8212) * C32695) *
                C32659 +
            ((C13387 + C13386) * C24588 + (C9435 + C9434) * C32702 +
             (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
              C7787 + C7787 + C32804 * C138) *
                 C32695) *
                C15105) *
               C546) *
              C32556 * C455)) /
        (p * q * std::sqrt(p + q));
    d2ee[44] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32695 +
            (C9004 + C9005) * C32702 + C12950 * C24588) *
               C15105 +
           ((C7930 + C7931) * C32695 + C9630 * C32702 + C12951 * C24588) *
               C32659) *
              C32570 * C32556 * C110 -
          (((C13179 + C13178) * C24588 + (C9223 + C9222) * C32702 +
            (C8213 + C8212) * C32695) *
               C32659 +
           ((C13387 + C13386) * C24588 + (C9435 + C9434) * C32702 +
            (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
             C7787 + C7787 + C32804 * C138) *
                C32695) *
               C15105) *
              C32570 * C32556 * C111 +
          (((C7767 * C125 + C7788 + C7788 + C32804 * C139 + C7769 * C126 +
             C7789 + C7789 + C32517 * C140) *
                C32695 +
            (C7767 * C332 + C8664 + C8664 + C32804 * C352 + C7769 * C331 +
             C8665 + C8665 + C32517 * C351) *
                C32702 +
            (C7767 * C337 + C12654 + C12654 + C32804 * C357 + C7769 * C338 +
             C12655 + C12655 + C32517 * C358) *
                C24588) *
               C15105 +
           ((C7767 * C227 + C7790 + C7790 + C32804 * C247 + C7769 * C226 +
             C7791 + C7791 + C32517 * C246) *
                C32695 +
            (C7767 * C640 + C8666 + C8666 + C32804 * C650 + C7769 * C641 +
             C8667 + C8667 + C32517 * C651) *
                C32702 +
            (C7767 * C1104 + C12656 + C12656 + C32804 * C1122 + C7769 * C2231 +
             C12657 + C12657 + C32517 * C2233) *
                C24588) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32695 +
            (C9004 + C9005) * C32702 + C12950 * C24588) *
               C15105 +
           ((C7930 + C7931) * C32695 + C9630 * C32702 + C12951 * C24588) *
               C32659) *
              C32570 * C221 -
          (((C9006 + C9007) * C24588 + C9631 * C32702 +
            (C7933 + C7932) * C32695) *
               C32659 +
           (C13582 * C24588 + C9632 * C32702 + (C7931 + C7930) * C32695) *
               C15105) *
              C32570 * C222 +
          ((C7938 * C32695 + C8817 * C32702 + (C9007 + C9006) * C24588) *
               C15105 +
           (C7939 * C32695 + (C8513 + C8512) * C32702 +
            (C7767 * C6436 + C8054 + C8054 + C32804 * C6442 + C7769 * C7315 +
             C8055 + C8055 + C32517 * C7317) *
                C24588) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[45] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
              C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
              C32845 * C139) *
                 C21058 +
             (C10729 + C10730 + C10731) * C32699) *
                C15105 +
            ((C5536 + C5537 + C5538) * C21058 +
             (C6188 + C6187 + C6186) * C32699) *
                C32659) *
               C32570 * C452 -
           (((C6183 + C6184 + C6185) * C32699 +
             (C5541 + C5540 + C5539) * C21058) *
                C32659 +
            ((C6186 + C6187 + C6188) * C32699 +
             (C5538 + C5537 + C5536) * C21058) *
                C15105) *
               C32570 * C453) *
              C454 +
          ((((C5849 + C5850 + C5851) * C21058 +
             (C26956 + C26957 + C26958) * C32699) *
                C15105 +
            ((C5852 + C5853 + C5854) * C21058 +
             (C5350 * C1100 + C6007 + C6007 + C32883 * C1118 + C5352 * C1099 +
              C6008 + C6008 + C32870 * C1117 + C5354 * C1472 + C6009 + C6009 +
              C32845 * C1474) *
                 C32699) *
                C32659) *
               C32570 * C453 -
           (((C26958 + C26957 + C26956) * C32699 +
             (C5851 + C5850 + C5849) * C21058) *
                C32659 +
            ((C11064 + C11063 + C11062) * C32699 +
             (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
              C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
              C32883 * C138) *
                 C21058) *
                C15105) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C21058 +
             C7165 * C32699) *
                C32893 +
            (C27547 + C27548) * C32889 + C27555 * C32879 + C27556 * C32831) *
               C32570 * C452 -
           ((C27553 + C27554) * C32831 + (C27552 + C27551) * C32879 +
            (C27550 + C27549) * C32889 + (C27548 + C27547) * C32893) *
               C32570 * C453) *
              C454 +
          (((C27785 + C27786) * C32893 + (C27787 + C27788) * C32889 +
            (C27789 + C27790) * C32879 +
            (C6560 * C21058 +
             (C6256 * C6646 + C6654 + C6654 + C32507 * C6648) * C32699) *
                C32831) *
               C32570 * C453 -
           ((C27790 + C27789) * C32831 + (C27788 + C27787) * C32879 +
            (C27786 + C27785) * C32889 +
            (C7506 * C32699 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C21058) *
                C32893) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[46] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
              C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
              C32845 * C139) *
                 C21058 +
             (C10729 + C10730 + C10731) * C32699) *
                C15105 +
            ((C5536 + C5537 + C5538) * C21058 + C27349 * C32699) * C32659) *
               C546 -
           (((C11231 + C11230 + C11229) * C32699 + C27350 * C21058) * C32659 +
            ((C10734 + C10733 + C10732) * C32699 +
             (C10731 + C10730 + C10729) * C21058) *
                C15105) *
               C547) *
              C452 +
          (((C27349 * C21058 + (C11229 + C11230 + C11231) * C32699) * C15105 +
            ((C6185 + C6184 + C6183) * C21058 +
             (C5350 * C1105 + C5673 + C5673 + C32883 * C1123 + C5352 * C1106 +
              C5674 + C5674 + C32870 * C1124 + C5354 * C1107 + C5675 + C5675 +
              C32845 * C1125) *
                 C32699) *
                C32659) *
               C547 -
           (((C6183 + C6184 + C6185) * C32699 +
             (C5541 + C5540 + C5539) * C21058) *
                C32659 +
            (C27350 * C32699 + (C5538 + C5537 + C5536) * C21058) * C15105) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C21058 +
             C7165 * C32699) *
                C32893 +
            (C27547 + C27548) * C32889 + C27555 * C32879 + C27556 * C32831) *
               C546 -
           ((C28051 + C28052) * C32831 + (C28053 + C28054) * C32879 +
            (C28055 + C28056) * C32889 +
            (C7166 * C32699 + C7165 * C21058) * C32893) *
               C547) *
              C452 +
          (((C28056 + C28055) * C32893 + (C28054 + C28053) * C32889 +
            (C28052 + C28051) * C32879 +
            (C6757 * C21058 +
             (C6256 * C6437 + C6454 + C6454 + C32507 * C6443) * C32699) *
                C32831) *
               C547 -
           ((C27553 + C27554) * C32831 + (C27552 + C27551) * C32879 +
            (C27550 + C27549) * C32889 + (C27548 + C27547) * C32893) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[47] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C21058 +
            (C10729 + C10730 + C10731) * C32699) *
               C15105 +
           ((C5536 + C5537 + C5538) * C21058 +
            (C6188 + C6187 + C6186) * C32699) *
               C32659) *
              C32570 * C221 -
          (((C6183 + C6184 + C6185) * C32699 +
            (C5541 + C5540 + C5539) * C21058) *
               C32659 +
           ((C6186 + C6187 + C6188) * C32699 +
            (C5538 + C5537 + C5536) * C21058) *
               C15105) *
              C32570 * C222 +
          ((C5546 * C21058 + (C6185 + C6184 + C6183) * C32699) * C15105 +
           ((C5544 + C5543 + C5542) * C21058 +
            (C5350 * C1630 + C6168 + C6168 + C32883 * C1636 + C5352 * C1631 +
             C6169 + C6169 + C32870 * C1637 + C5354 * C1632 + C6170 + C6170 +
             C32845 * C1638) *
                C32699) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C21058 +
            (C10729 + C10730 + C10731) * C32699) *
               C15105 +
           ((C5536 + C5537 + C5538) * C21058 +
            (C6188 + C6187 + C6186) * C32699) *
               C32659) *
              C32570 * C32556 * C110 -
          (((C5354 * C641 + C6006 + C6006 + C32845 * C651 + C5352 * C640 +
             C6005 + C6005 + C32870 * C650 + C5350 * C639 + C6004 + C6004 +
             C32883 * C649) *
                C32699 +
            (C5851 + C5850 + C5849) * C21058) *
               C32659 +
           ((C11064 + C11063 + C11062) * C32699 +
            (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
             C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
             C32883 * C138) *
                C21058) *
               C15105) *
              C32570 * C32556 * C111 +
          (((C5350 * C125 + C5375 + C5375 + C32883 * C139 + C5352 * C126 +
             C5376 + C5376 + C32870 * C140 + C5354 * C127 + C5377 + C5377 +
             C32845 * C141) *
                C21058 +
            (C5350 * C332 + C10461 + C10461 + C32883 * C352 + C5352 * C331 +
             C10462 + C10462 + C32870 * C351 + C5354 * C330 + C10463 + C10463 +
             C32845 * C350) *
                C32699) *
               C15105 +
           ((C5350 * C227 + C5378 + C5378 + C32883 * C247 + C5352 * C226 +
             C5379 + C5379 + C32870 * C246 + C5354 * C225 + C5380 + C5380 +
             C32845 * C245) *
                C21058 +
            (C5350 * C640 + C26455 + C26455 + C32883 * C650 + C5352 * C641 +
             C26456 + C26456 + C32870 * C651 + C5354 * C642 + C26457 + C26457 +
             C32845 * C652) *
                C32699) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C21058 +
            (C10729 + C10730 + C10731) * C32699) *
               C15105 +
           ((C5536 + C5537 + C5538) * C21058 +
            (C6188 + C6187 + C6186) * C32699) *
               C32659) *
              C327 -
          (((C11231 + C11230 + C11229) * C32699 +
            (C6186 + C6187 + C6188) * C21058) *
               C32659 +
           ((C10734 + C10733 + C10732) * C32699 +
            (C10731 + C10730 + C10729) * C21058) *
               C15105) *
              C328 +
          ((C10739 * C21058 + (C10737 + C10736 + C10735) * C32699) * C15105 +
           ((C11229 + C11230 + C11231) * C21058 +
            (C5350 * C2565 + C11220 + C11220 + C32883 * C2571 + C5352 * C2566 +
             C11221 + C11221 + C32870 * C2572 + C5354 * C2567 + C11222 +
             C11222 + C32845 * C2573) *
                C32699) *
               C32659) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C21058 +
            C7165 * C32699) *
               C32893 +
           (C6364 * C21058 + C6760 * C32699) * C32889 +
           (C6365 * C21058 + C6759 * C32699) * C32879 +
           (C6366 * C21058 + C6758 * C32699) * C32831) *
              C32570 * C32556 * C110 -
          ((C10077 * C32699 + C6559 * C21058) * C32831 +
           (C7340 * C32699 + C6558 * C21058) * C32879 +
           (C7338 * C32699 + C6557 * C21058) * C32889 +
           (C7506 * C32699 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C21058) *
               C32893) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C21058 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C32699) *
               C32893 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C21058 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C32699) *
               C32889 +
           ((C6256 * C232 + C6271 + C6271 + C32507 * C252) * C21058 +
            (C6256 * C1099 + C6882 + C6882 + C32507 * C1117) * C32699) *
               C32879 +
           ((C6256 * C917 + C6272 + C6272 + C32507 * C929) * C21058 +
            (C6256 * C1632 + C9731 + C9731 + C32507 * C1638) * C32699) *
               C32831) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C21058 +
            C7165 * C32699) *
               C32893 +
           (C27547 + C27548) * C32889 + C27555 * C32879 + C27556 * C32831) *
              C32570 * C221 -
          ((C27553 + C27554) * C32831 + (C27552 + C27551) * C32879 +
           (C27550 + C27549) * C32889 + (C27548 + C27547) * C32893) *
              C32570 * C222 +
          (C27555 * C32893 + C27556 * C32889 + (C27554 + C27553) * C32879 +
           (C6368 * C21058 +
            (C6256 * C6736 + C6748 + C6748 + C32507 * C6738) * C32699) *
               C32831) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C21058 +
            C7165 * C32699) *
               C32893 +
           (C27547 + C27548) * C32889 + C27555 * C32879 + C27556 * C32831) *
              C327 -
          ((C7015 * C32699 + C6758 * C21058) * C32831 +
           (C7014 * C32699 + C6759 * C21058) * C32879 +
           (C7013 * C32699 + C6760 * C21058) * C32889 +
           (C7166 * C32699 + C7165 * C21058) * C32893) *
              C328 +
          ((C7166 * C21058 + C7169 * C32699) * C32893 +
           (C7013 * C21058 + C7168 * C32699) * C32889 +
           (C7014 * C21058 + C7167 * C32699) * C32879 +
           (C7015 * C21058 +
            (C6256 * C7653 + C7663 + C7663 + C32507 * C7655) * C32699) *
               C32831) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[48] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
              C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
              C32845 * C139) *
                 C21058 +
             (C10729 + C10730 + C10731) * C32699) *
                C15105 +
            ((C5536 + C5537 + C5538) * C21058 +
             (C6188 + C6187 + C6186) * C32699) *
                C32659) *
               C546 -
           (((C11231 + C11230 + C11229) * C32699 +
             (C6186 + C6187 + C6188) * C21058) *
                C32659 +
            ((C10734 + C10733 + C10732) * C32699 +
             (C10731 + C10730 + C10729) * C21058) *
                C15105) *
               C547) *
              C32556 * C454 +
          ((((C11062 + C11063 + C11064) * C21058 +
             (C11065 + C11066 + C11067) * C32699) *
                C15105 +
            ((C26956 + C26957 + C26958) * C21058 +
             (C5350 * C1103 + C10886 + C10886 + C32883 * C1121 + C5352 * C1104 +
              C10887 + C10887 + C32870 * C1122 + C5354 * C2231 + C10888 +
              C10888 + C32845 * C2233) *
                 C32699) *
                C32659) *
               C547 -
           (((C26958 + C26957 + C26956) * C32699 +
             (C5851 + C5850 + C5849) * C21058) *
                C32659 +
            ((C11064 + C11063 + C11062) * C32699 +
             (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
              C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
              C32883 * C138) *
                 C21058) *
                C15105) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C21058 +
             C7165 * C32699) *
                C32893 +
            (C27547 + C27548) * C32889 + C27555 * C32879 + C27556 * C32831) *
               C546 -
           ((C7015 * C32699 + C6758 * C21058) * C32831 +
            (C7014 * C32699 + C6759 * C21058) * C32879 +
            (C7013 * C32699 + C6760 * C21058) * C32889 +
            (C7166 * C32699 + C7165 * C21058) * C32893) *
               C547) *
              C32556 * C454 +
          (((C7506 * C21058 + C7507 * C32699) * C32893 +
            (C7338 * C21058 + C7339 * C32699) * C32889 +
            (C7340 * C21058 + C7341 * C32699) * C32879 +
            (C10077 * C21058 +
             (C6256 * C7315 + C7329 + C7329 + C32507 * C7317) * C32699) *
                C32831) *
               C547 -
           ((C27790 + C27789) * C32831 + (C27788 + C27787) * C32879 +
            (C27786 + C27785) * C32889 +
            (C7506 * C32699 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C21058) *
                C32893) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[49] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C21058 +
            (C10729 + C10730 + C10731) * C32699) *
               C15105 +
           ((C5536 + C5537 + C5538) * C21058 +
            (C6188 + C6187 + C6186) * C32699) *
               C32659) *
              C32570 * C32556 * C110 -
          (((C5354 * C641 + C6006 + C6006 + C32845 * C651 + C5352 * C640 +
             C6005 + C6005 + C32870 * C650 + C5350 * C639 + C6004 + C6004 +
             C32883 * C649) *
                C32699 +
            (C5851 + C5850 + C5849) * C21058) *
               C32659 +
           ((C11064 + C11063 + C11062) * C32699 +
            (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
             C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
             C32883 * C138) *
                C21058) *
               C15105) *
              C32570 * C32556 * C111 +
          (((C5350 * C125 + C5375 + C5375 + C32883 * C139 + C5352 * C126 +
             C5376 + C5376 + C32870 * C140 + C5354 * C127 + C5377 + C5377 +
             C32845 * C141) *
                C21058 +
            (C5350 * C332 + C10461 + C10461 + C32883 * C352 + C5352 * C331 +
             C10462 + C10462 + C32870 * C351 + C5354 * C330 + C10463 + C10463 +
             C32845 * C350) *
                C32699) *
               C15105 +
           ((C5350 * C227 + C5378 + C5378 + C32883 * C247 + C5352 * C226 +
             C5379 + C5379 + C32870 * C246 + C5354 * C225 + C5380 + C5380 +
             C32845 * C245) *
                C21058 +
            (C5350 * C640 + C26455 + C26455 + C32883 * C650 + C5352 * C641 +
             C26456 + C26456 + C32870 * C651 + C5354 * C642 + C26457 + C26457 +
             C32845 * C652) *
                C32699) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C21058 +
            (C10729 + C10730 + C10731) * C32699) *
               C15105 +
           ((C5536 + C5537 + C5538) * C21058 +
            (C6188 + C6187 + C6186) * C32699) *
               C32659) *
              C32570 * C221 -
          (((C6183 + C6184 + C6185) * C32699 +
            (C5541 + C5540 + C5539) * C21058) *
               C32659 +
           ((C6186 + C6187 + C6188) * C32699 +
            (C5538 + C5537 + C5536) * C21058) *
               C15105) *
              C32570 * C222 +
          ((C5546 * C21058 + (C6185 + C6184 + C6183) * C32699) * C15105 +
           ((C5544 + C5543 + C5542) * C21058 +
            (C5350 * C1630 + C6168 + C6168 + C32883 * C1636 + C5352 * C1631 +
             C6169 + C6169 + C32870 * C1637 + C5354 * C1632 + C6170 + C6170 +
             C32845 * C1638) *
                C32699) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C21058 +
            C7165 * C32699) *
               C32893 +
           (C6364 * C21058 + C6760 * C32699) * C32889 +
           (C6365 * C21058 + C6759 * C32699) * C32879 +
           (C6366 * C21058 + C6758 * C32699) * C32831) *
              C32570 * C32556 * C110 -
          ((C10077 * C32699 + C6559 * C21058) * C32831 +
           (C7340 * C32699 + C6558 * C21058) * C32879 +
           (C7338 * C32699 + C6557 * C21058) * C32889 +
           (C7506 * C32699 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C21058) *
               C32893) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C21058 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C32699) *
               C32893 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C21058 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C32699) *
               C32889 +
           ((C6256 * C232 + C6271 + C6271 + C32507 * C252) * C21058 +
            (C6256 * C1099 + C6882 + C6882 + C32507 * C1117) * C32699) *
               C32879 +
           ((C6256 * C917 + C6272 + C6272 + C32507 * C929) * C21058 +
            (C6256 * C1632 + C9731 + C9731 + C32507 * C1638) * C32699) *
               C32831) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C21058 +
            C7165 * C32699) *
               C32893 +
           (C27547 + C27548) * C32889 + C27555 * C32879 + C27556 * C32831) *
              C32570 * C221 -
          ((C27553 + C27554) * C32831 + (C27552 + C27551) * C32879 +
           (C27550 + C27549) * C32889 + (C27548 + C27547) * C32893) *
              C32570 * C222 +
          (C27555 * C32893 + C27556 * C32889 + (C27554 + C27553) * C32879 +
           (C6368 * C21058 +
            (C6256 * C6736 + C6748 + C6748 + C32507 * C6738) * C32699) *
               C32831) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[50] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32612 * C7763 +
            (C7930 + C7931) * C32612 * C7764 + C7940 * C7765 + C7941 * C32831) *
               C32570 * C452 -
           ((C7936 + C7937) * C32612 * C32831 +
            (C7935 + C7934) * C32612 * C7765 +
            (C7933 + C7932) * C32612 * C7764 +
            (C7931 + C7930) * C32612 * C7763) *
               C32570 * C453) *
              C454 +
          (((C8212 + C8213) * C32612 * C7763 +
            (C8214 + C8215) * C32612 * C7764 +
            (C8216 + C8217) * C32612 * C7765 +
            (C7767 * C921 + C8198 + C8198 + C32804 * C933 + C7769 * C922 +
             C8199 + C8199 + C32517 * C934) *
                C32612 * C32831) *
               C32570 * C453 -
           ((C8217 + C8216) * C32612 * C32831 +
            (C8215 + C8214) * C32612 * C7765 +
            (C8213 + C8212) * C32612 * C7764 +
            (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
             C7787 + C7787 + C32804 * C138) *
                C32612 * C7763) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 +
             C2706 + C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 +
             C2692 * C139 + C2702 * C126 + C2708 + C2708 + C32822 * C140) *
                C32612 * C32823 +
            (C2867 + C2868 + C2869 + C2870) * C32612 * C32659) *
               C32570 * C452 -
           ((C2871 + C2872 + C2873 + C2874) * C32612 * C32659 +
            (C2870 + C2869 + C2868 + C2867) * C32612 * C32823) *
               C32570 * C453) *
              C454 +
          (((C3139 + C3140 + C3141 + C3142) * C32612 * C32823 +
            (C2696 * C231 + C3127 + C3127 + C2690 * C251 + C2698 * C232 +
             C3128 + C3128 + C2691 * C252 + C2700 * C233 + C3129 + C3129 +
             C2692 * C253 + C2702 * C234 + C3130 + C3130 + C32822 * C254) *
                C32612 * C32659) *
               C32570 * C453 -
           ((C3142 + C3141 + C3140 + C3139) * C32612 * C32659 +
            (C2702 * C127 + C2717 + C2717 + C32822 * C141 + C2700 * C126 +
             C2718 + C2718 + C2692 * C140 + C2698 * C125 + C2719 + C2719 +
             C2691 * C139 + C2696 * C124 + C2720 + C2720 + C2690 * C138) *
                C32612 * C32823) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
              C7773 + C7773 + C32517 * C138) *
                 C10454 +
             (C9004 + C9005) * C10455 + C12950 * C32857) *
                C32823 +
            ((C7930 + C7931) * C10454 + C9630 * C10455 + C12951 * C32857) *
                C32659) *
               C32570 * C452 -
           (((C9006 + C9007) * C32857 + C9631 * C10455 +
             (C7933 + C7932) * C10454) *
                C32659 +
            ((C9008 + C9009) * C32857 + C9632 * C10455 +
             (C7931 + C7930) * C10454) *
                C32823) *
               C32570 * C453) *
              C454 +
          ((((C8212 + C8213) * C10454 + (C9222 + C9223) * C10455 +
             (C13178 + C13179) * C32857) *
                C32823 +
            ((C8214 + C8215) * C10454 + (C9224 + C9225) * C10455 +
             (C7767 * C1106 + C9428 + C9428 + C32804 * C1124 + C7769 * C1107 +
              C9429 + C9429 + C32517 * C1125) *
                 C32857) *
                C32659) *
               C32570 * C453 -
           (((C13179 + C13178) * C32857 + (C9223 + C9222) * C10455 +
             (C8213 + C8212) * C10454) *
                C32659 +
            ((C7769 * C337 + C9425 + C9425 + C32517 * C357 + C7767 * C336 +
              C9424 + C9424 + C32804 * C356) *
                 C32857 +
             (C9435 + C9434) * C10455 +
             (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
              C7787 + C7787 + C32804 * C138) *
                 C10454) *
                C32823) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[51] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32612 * C7763 +
            (C7930 + C7931) * C32612 * C7764 + C7940 * C7765 + C7941 * C32831) *
               C546 -
           ((C8512 + C8513) * C32612 * C32831 +
            (C8514 + C8515) * C32612 * C7765 +
            (C8516 + C8517) * C32612 * C7764 +
            (C7769 * C333 + C8046 + C8046 + C32517 * C353 + C7767 * C334 +
             C8047 + C8047 + C32804 * C354) *
                C32612 * C7763) *
               C547) *
              C452 +
          (((C8517 + C8516) * C32612 * C7763 +
            (C8515 + C8514) * C32612 * C7764 +
            (C8513 + C8512) * C32612 * C7765 +
            (C7767 * C6435 + C8498 + C8498 + C32804 * C6441 + C7769 * C6646 +
             C8499 + C8499 + C32517 * C6648) *
                C32612 * C32831) *
               C547 -
           ((C7936 + C7937) * C32612 * C32831 +
            (C7935 + C7934) * C32612 * C7765 +
            (C7933 + C7932) * C32612 * C7764 +
            (C7931 + C7930) * C32612 * C7763) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 +
             C2706 + C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 +
             C2692 * C139 + C2702 * C126 + C2708 + C2708 + C32822 * C140) *
                C32612 * C32823 +
            (C2867 + C2868 + C2869 + C2870) * C32612 * C32659) *
               C546 -
           ((C3431 + C3432 + C3433 + C3434) * C32612 * C32659 +
            (C2702 * C331 + C2977 + C2977 + C32822 * C351 + C2700 * C332 +
             C2978 + C2978 + C2692 * C352 + C2698 * C333 + C2979 + C2979 +
             C2691 * C353 + C2696 * C334 + C2980 + C2980 + C2690 * C354) *
                C32612 * C32823) *
               C547) *
              C452 +
          (((C3434 + C3433 + C3432 + C3431) * C32612 * C32823 +
            (C2696 * C1101 + C3419 + C3419 + C2690 * C1119 + C2698 * C1100 +
             C3420 + C3420 + C2691 * C1118 + C2700 * C1099 + C3421 + C3421 +
             C2692 * C1117 + C2702 * C1472 + C3422 + C3422 + C32822 * C1474) *
                C32612 * C32659) *
               C547 -
           ((C2871 + C2872 + C2873 + C2874) * C32612 * C32659 +
            (C2870 + C2869 + C2868 + C2867) * C32612 * C32823) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
              C7773 + C7773 + C32517 * C138) *
                 C10454 +
             (C9004 + C9005) * C10455 + C12950 * C32857) *
                C32823 +
            ((C7930 + C7931) * C10454 + C9630 * C10455 + C12951 * C32857) *
                C32659) *
               C546 -
           (((C12972 + C12973) * C32857 + C13582 * C10455 + C9632 * C10454) *
                C32659 +
            ((C12974 + C12975) * C32857 + (C9010 + C9011) * C10455 +
             (C9005 + C9004) * C10454) *
                C32823) *
               C547) *
              C452 +
          (((C9630 * C10454 + C12951 * C10455 + (C12973 + C12972) * C32857) *
                C32823 +
            (C8817 * C10454 + (C9007 + C9006) * C10455 +
             (C7767 * C7129 + C8986 + C8986 + C32804 * C7135 + C7769 * C7491 +
              C8987 + C8987 + C32517 * C7493) *
                 C32857) *
                C32659) *
               C547 -
           (((C9006 + C9007) * C32857 + C9631 * C10455 +
             (C7933 + C7932) * C10454) *
                C32659 +
            (C13582 * C32857 + C9632 * C10455 + (C7931 + C7930) * C10454) *
                C32823) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[52] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 +
                C2706 + C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 +
                C2692 * C139 + C2702 * C126 + C2708 + C2708 + C32822 * C140) *
                   C32612 * C32823 +
               (C2696 * C229 + C2709 + C2709 + C2690 * C249 + C2698 * C228 +
                C2710 + C2710 + C2691 * C248 + C2700 * C227 + C2711 + C2711 +
                C2692 * C247 + C2702 * C226 + C2712 + C2712 + C32822 * C246) *
                   C32612 * C32659) *
                  C32570 * C32556 * C110 -
              ((C2702 * C225 + C2713 + C2713 + C32822 * C245 + C2700 * C226 +
                C2714 + C2714 + C2692 * C246 + C2698 * C227 + C2715 + C2715 +
                C2691 * C247 + C2696 * C228 + C2716 + C2716 + C2690 * C248) *
                   C32612 * C32659 +
               (C2702 * C127 + C2717 + C2717 + C32822 * C141 + C2700 * C126 +
                C2718 + C2718 + C2692 * C140 + C2698 * C125 + C2719 + C2719 +
                C2691 * C139 + C2696 * C124 + C2720 + C2720 + C2690 * C138) *
                   C32612 * C32823) *
                  C32570 * C32556 * C111 +
              ((C2696 * C125 + C2721 + C2721 + C2690 * C139 + C2698 * C126 +
                C2722 + C2722 + C2691 * C140 + C2700 * C127 + C2723 + C2723 +
                C2692 * C141 + C2702 * C128 + C2724 + C2724 + C32822 * C142) *
                   C32612 * C32823 +
               (C2696 * C227 + C2725 + C2725 + C2690 * C247 + C2698 * C226 +
                C2726 + C2726 + C2691 * C246 + C2700 * C225 + C2727 + C2727 +
                C2692 * C245 + C2702 * C456 + C2728 + C2728 + C32822 * C458) *
                   C32612 * C32659) *
                  C32570 * C32556 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 +
                C2706 + C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 +
                C2692 * C139 + C2702 * C126 + C2708 + C2708 + C32822 * C140) *
                   C32612 * C32823 +
               (C2867 + C2868 + C2869 + C2870) * C32612 * C32659) *
                  C32570 * C221 -
              ((C2871 + C2872 + C2873 + C2874) * C32612 * C32659 +
               (C2870 + C2869 + C2868 + C2867) * C32612 * C32823) *
                  C32570 * C222 +
              ((C2874 + C2873 + C2872 + C2871) * C32612 * C32823 +
               (C2696 * C919 + C2847 + C2847 + C2690 * C931 + C2698 * C918 +
                C2848 + C2848 + C2691 * C930 + C2700 * C917 + C2849 + C2849 +
                C2692 * C929 + C2702 * C1290 + C2850 + C2850 + C32822 * C1292) *
                   C32612 * C32659) *
                  C32570 * C223) *
             C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 + C2706 +
            C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 + C2692 * C139 +
            C2702 * C126 + C2708 + C2708 + C32822 * C140) *
               C32612 * C32823 +
           (C2867 + C2868 + C2869 + C2870) * C32612 * C32659) *
              C327 -
          ((C2702 * C641 + C2973 + C2973 + C32822 * C651 + C2700 * C640 +
            C2974 + C2974 + C2692 * C650 + C2698 * C639 + C2975 + C2975 +
            C2691 * C649 + C2696 * C638 + C2976 + C2976 + C2690 * C648) *
               C32612 * C32659 +
           (C2702 * C331 + C2977 + C2977 + C32822 * C351 + C2700 * C332 +
            C2978 + C2978 + C2692 * C352 + C2698 * C333 + C2979 + C2979 +
            C2691 * C353 + C2696 * C334 + C2980 + C2980 + C2690 * C354) *
               C32612 * C32823) *
              C328 +
          ((C2696 * C335 + C2981 + C2981 + C2690 * C355 + C2698 * C336 + C2982 +
            C2982 + C2691 * C356 + C2700 * C337 + C2983 + C2983 + C2692 * C357 +
            C2702 * C338 + C2984 + C2984 + C32822 * C358) *
               C32612 * C32823 +
           (C2696 * C1102 + C2985 + C2985 + C2690 * C1120 + C2698 * C1103 +
            C2986 + C2986 + C2691 * C1121 + C2700 * C1104 + C2987 + C2987 +
            C2692 * C1122 + C2702 * C2231 + C2988 + C2988 + C32822 * C2233) *
               C32612 * C32659) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
            C7773 + C7773 + C32517 * C138) *
               C32612 * C7763 +
           (C7767 * C229 + C7774 + C7774 + C32804 * C249 + C7769 * C228 +
            C7775 + C7775 + C32517 * C248) *
               C32612 * C7764 +
           (C7767 * C230 + C7776 + C7776 + C32804 * C250 + C7769 * C231 +
            C7777 + C7777 + C32517 * C251) *
               C32612 * C7765 +
           (C7767 * C919 + C7778 + C7778 + C32804 * C931 + C7769 * C918 +
            C7779 + C7779 + C32517 * C930) *
               C32612 * C32831) *
              C32570 * C32556 * C110 -
          ((C7769 * C917 + C7780 + C7780 + C32517 * C929 + C7767 * C918 +
            C7781 + C7781 + C32804 * C930) *
               C32612 * C32831 +
           (C7769 * C232 + C7782 + C7782 + C32517 * C252 + C7767 * C231 +
            C7783 + C7783 + C32804 * C251) *
               C32612 * C7765 +
           (C7769 * C227 + C7784 + C7784 + C32517 * C247 + C7767 * C228 +
            C7785 + C7785 + C32804 * C248) *
               C32612 * C7764 +
           (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
            C7787 + C7787 + C32804 * C138) *
               C32612 * C7763) *
              C32570 * C32556 * C111 +
          ((C7767 * C125 + C7788 + C7788 + C32804 * C139 + C7769 * C126 +
            C7789 + C7789 + C32517 * C140) *
               C32612 * C7763 +
           (C7767 * C227 + C7790 + C7790 + C32804 * C247 + C7769 * C226 +
            C7791 + C7791 + C32517 * C246) *
               C32612 * C7764 +
           (C7767 * C232 + C7792 + C7792 + C32804 * C252 + C7769 * C233 +
            C7793 + C7793 + C32517 * C253) *
               C32612 * C7765 +
           (C7767 * C917 + C7794 + C7794 + C32804 * C929 + C7769 * C1290 +
            C7795 + C7795 + C32517 * C1292) *
               C32612 * C32831) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
            C7773 + C7773 + C32517 * C138) *
               C32612 * C7763 +
           (C7930 + C7931) * C32612 * C7764 + C7940 * C7765 + C7941 * C32831) *
              C32570 * C221 -
          ((C7936 + C7937) * C32612 * C32831 +
           (C7935 + C7934) * C32612 * C7765 + (C7933 + C7932) * C32612 * C7764 +
           (C7931 + C7930) * C32612 * C7763) *
              C32570 * C222 +
          (C7940 * C7763 + C7941 * C7764 + (C7937 + C7936) * C32612 * C7765 +
           (C7767 * C6335 + C7912 + C7912 + C32804 * C6339 + C7769 * C6536 +
            C7913 + C7913 + C32517 * C6538) *
               C32612 * C32831) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
            C7773 + C7773 + C32517 * C138) *
               C32612 * C7763 +
           (C7930 + C7931) * C32612 * C7764 + C7940 * C7765 + C7941 * C32831) *
              C327 -
          ((C7769 * C1631 + C8040 + C8040 + C32517 * C1637 + C7767 * C1630 +
            C8041 + C8041 + C32804 * C1636) *
               C32612 * C32831 +
           (C7769 * C1100 + C8042 + C8042 + C32517 * C1118 + C7767 * C1101 +
            C8043 + C8043 + C32804 * C1119) *
               C32612 * C7765 +
           (C7769 * C639 + C8044 + C8044 + C32517 * C649 + C7767 * C638 +
            C8045 + C8045 + C32804 * C648) *
               C32612 * C7764 +
           (C7769 * C333 + C8046 + C8046 + C32517 * C353 + C7767 * C334 +
            C8047 + C8047 + C32804 * C354) *
               C32612 * C7763) *
              C328 +
          ((C7767 * C335 + C8048 + C8048 + C32804 * C355 + C7769 * C336 +
            C8049 + C8049 + C32517 * C356) *
               C32612 * C7763 +
           (C7767 * C1102 + C8050 + C8050 + C32804 * C1120 + C7769 * C1103 +
            C8051 + C8051 + C32517 * C1121) *
               C32612 * C7764 +
           (C7767 * C1105 + C8052 + C8052 + C32804 * C1123 + C7769 * C1106 +
            C8053 + C8053 + C32517 * C1124) *
               C32612 * C7765 +
           (C7767 * C6436 + C8054 + C8054 + C32804 * C6442 + C7769 * C7315 +
            C8055 + C8055 + C32517 * C7317) *
               C32612 * C32831) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C10454 +
            (C9004 + C9005) * C10455 + (C9011 + C9010) * C32857) *
               C32823 +
           ((C7930 + C7931) * C10454 + C9630 * C10455 +
            (C9009 + C9008) * C32857) *
               C32659) *
              C32570 * C32556 * C110 -
          (((C7769 * C1104 + C9427 + C9427 + C32517 * C1122 + C7767 * C1103 +
             C9426 + C9426 + C32804 * C1121) *
                C32857 +
            (C9223 + C9222) * C10455 + (C8213 + C8212) * C10454) *
               C32659 +
           ((C7769 * C337 + C9425 + C9425 + C32517 * C357 + C7767 * C336 +
             C9424 + C9424 + C32804 * C356) *
                C32857 +
            (C9435 + C9434) * C10455 +
            (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
             C7787 + C7787 + C32804 * C138) *
                C10454) *
               C32823) *
              C32570 * C32556 * C111 +
          (((C7767 * C125 + C7788 + C7788 + C32804 * C139 + C7769 * C126 +
             C7789 + C7789 + C32517 * C140) *
                C10454 +
            (C7767 * C332 + C8664 + C8664 + C32804 * C352 + C7769 * C331 +
             C8665 + C8665 + C32517 * C351) *
                C10455 +
            (C7767 * C337 + C12654 + C12654 + C32804 * C357 + C7769 * C338 +
             C12655 + C12655 + C32517 * C358) *
                C32857) *
               C32823 +
           ((C7767 * C227 + C7790 + C7790 + C32804 * C247 + C7769 * C226 +
             C7791 + C7791 + C32517 * C246) *
                C10454 +
            (C7767 * C640 + C8666 + C8666 + C32804 * C650 + C7769 * C641 +
             C8667 + C8667 + C32517 * C651) *
                C10455 +
            (C7767 * C1104 + C12656 + C12656 + C32804 * C1122 + C7769 * C2231 +
             C12657 + C12657 + C32517 * C2233) *
                C32857) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C10454 +
            (C9004 + C9005) * C10455 + (C9011 + C9010) * C32857) *
               C32823 +
           ((C7930 + C7931) * C10454 + C9630 * C10455 +
            (C9009 + C9008) * C32857) *
               C32659) *
              C32570 * C221 -
          (((C9006 + C9007) * C32857 + C9631 * C10455 +
            (C7933 + C7932) * C10454) *
               C32659 +
           ((C9008 + C9009) * C32857 + C9632 * C10455 +
            (C7931 + C7930) * C10454) *
               C32823) *
              C32570 * C222 +
          ((C7938 * C10454 + C8817 * C10455 + (C9007 + C9006) * C32857) *
               C32823 +
           (C7939 * C10454 + (C8513 + C8512) * C10455 +
            (C7767 * C6436 + C8054 + C8054 + C32804 * C6442 + C7769 * C7315 +
             C8055 + C8055 + C32517 * C7317) *
                C32857) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C10454 +
            (C9004 + C9005) * C10455 + C12950 * C32857) *
               C32823 +
           ((C7930 + C7931) * C10454 + C9630 * C10455 + C12951 * C32857) *
               C32659) *
              C327 -
          (((C12972 + C12973) * C32857 + (C9008 + C9009) * C10455 +
            C9632 * C10454) *
               C32659 +
           ((C12974 + C12975) * C32857 + (C9010 + C9011) * C10455 +
            (C9005 + C9004) * C10454) *
               C32823) *
              C328 +
          ((C12950 * C10454 + (C12975 + C12974) * C10455 +
            (C7767 * C2017 + C12960 + C12960 + C32804 * C2029 + C7769 * C2018 +
             C12961 + C12961 + C32517 * C2030) *
                C32857) *
               C32823 +
           (C12951 * C10454 + (C12973 + C12972) * C10455 +
            (C7767 * C7130 + C12962 + C12962 + C32804 * C7136 + C7769 * C12316 +
             C12963 + C12963 + C32517 * C12318) *
                C32857) *
               C32659) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[53] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32612 * C7763 +
            (C7930 + C7931) * C32612 * C7764 + C7940 * C7765 + C7941 * C32831) *
               C546 -
           ((C7769 * C1631 + C8040 + C8040 + C32517 * C1637 + C7767 * C1630 +
             C8041 + C8041 + C32804 * C1636) *
                C32612 * C32831 +
            (C7769 * C1100 + C8042 + C8042 + C32517 * C1118 + C7767 * C1101 +
             C8043 + C8043 + C32804 * C1119) *
                C32612 * C7765 +
            (C7769 * C639 + C8044 + C8044 + C32517 * C649 + C7767 * C638 +
             C8045 + C8045 + C32804 * C648) *
                C32612 * C7764 +
            (C7769 * C333 + C8046 + C8046 + C32517 * C353 + C7767 * C334 +
             C8047 + C8047 + C32804 * C354) *
                C32612 * C7763) *
               C547) *
              C32556 * C454 +
          (((C7767 * C333 + C8348 + C8348 + C32804 * C353 + C7769 * C332 +
             C8349 + C8349 + C32517 * C352) *
                C32612 * C7763 +
            (C7767 * C639 + C8350 + C8350 + C32804 * C649 + C7769 * C640 +
             C8351 + C8351 + C32517 * C650) *
                C32612 * C7764 +
            (C7767 * C1100 + C8352 + C8352 + C32804 * C1118 + C7769 * C1099 +
             C8353 + C8353 + C32517 * C1117) *
                C32612 * C7765 +
            (C7767 * C1631 + C8354 + C8354 + C32804 * C1637 + C7769 * C1632 +
             C8355 + C8355 + C32517 * C1638) *
                C32612 * C32831) *
               C547 -
           ((C8217 + C8216) * C32612 * C32831 +
            (C8215 + C8214) * C32612 * C7765 +
            (C8213 + C8212) * C32612 * C7764 +
            (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
             C7787 + C7787 + C32804 * C138) *
                C32612 * C7763) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 +
             C2706 + C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 +
             C2692 * C139 + C2702 * C126 + C2708 + C2708 + C32822 * C140) *
                C32612 * C32823 +
            (C2867 + C2868 + C2869 + C2870) * C32612 * C32659) *
               C546 -
           ((C2702 * C641 + C2973 + C2973 + C32822 * C651 + C2700 * C640 +
             C2974 + C2974 + C2692 * C650 + C2698 * C639 + C2975 + C2975 +
             C2691 * C649 + C2696 * C638 + C2976 + C2976 + C2690 * C648) *
                C32612 * C32659 +
            (C2702 * C331 + C2977 + C2977 + C32822 * C351 + C2700 * C332 +
             C2978 + C2978 + C2692 * C352 + C2698 * C333 + C2979 + C2979 +
             C2691 * C353 + C2696 * C334 + C2980 + C2980 + C2690 * C354) *
                C32612 * C32823) *
               C547) *
              C32556 * C454 +
          (((C2696 * C333 + C3273 + C3273 + C2690 * C353 + C2698 * C332 +
             C3274 + C3274 + C2691 * C352 + C2700 * C331 + C3275 + C3275 +
             C2692 * C351 + C2702 * C330 + C3276 + C3276 + C32822 * C350) *
                C32612 * C32823 +
            (C2696 * C639 + C3277 + C3277 + C2690 * C649 + C2698 * C640 +
             C3278 + C3278 + C2691 * C650 + C2700 * C641 + C3279 + C3279 +
             C2692 * C651 + C2702 * C642 + C3280 + C3280 + C32822 * C652) *
                C32612 * C32659) *
               C547 -
           ((C3142 + C3141 + C3140 + C3139) * C32612 * C32659 +
            (C2702 * C127 + C2717 + C2717 + C32822 * C141 + C2700 * C126 +
             C2718 + C2718 + C2692 * C140 + C2698 * C125 + C2719 + C2719 +
             C2691 * C139 + C2696 * C124 + C2720 + C2720 + C2690 * C138) *
                C32612 * C32823) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
              C7773 + C7773 + C32517 * C138) *
                 C10454 +
             (C9004 + C9005) * C10455 + C12950 * C32857) *
                C32823 +
            ((C7930 + C7931) * C10454 + C9630 * C10455 + C12951 * C32857) *
                C32659) *
               C546 -
           (((C12972 + C12973) * C32857 + (C9008 + C9009) * C10455 +
             C9632 * C10454) *
                C32659 +
            ((C12974 + C12975) * C32857 + (C9010 + C9011) * C10455 +
             (C9005 + C9004) * C10454) *
                C32823) *
               C547) *
              C32556 * C454 +
          ((((C9434 + C9435) * C10454 + (C13386 + C13387) * C10455 +
             (C7767 * C2015 + C13378 + C13378 + C32804 * C2027 + C7769 * C2014 +
              C13379 + C13379 + C32517 * C2026) *
                 C32857) *
                C32823 +
            ((C9222 + C9223) * C10454 + (C13178 + C13179) * C10455 +
             (C7767 * C2566 + C13380 + C13380 + C32804 * C2572 + C7769 * C2567 +
              C13381 + C13381 + C32517 * C2573) *
                 C32857) *
                C32659) *
               C547 -
           (((C13179 + C13178) * C32857 + (C9223 + C9222) * C10455 +
             (C8213 + C8212) * C10454) *
                C32659 +
            ((C13387 + C13386) * C32857 + (C9435 + C9434) * C10455 +
             (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
              C7787 + C7787 + C32804 * C138) *
                 C10454) *
                C32823) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[54] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 + C2706 +
            C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 + C2692 * C139 +
            C2702 * C126 + C2708 + C2708 + C32822 * C140) *
               C32612 * C32823 +
           (C2867 + C2868 + C2869 + C2870) * C32612 * C32659) *
              C32570 * C221 -
          ((C2871 + C2872 + C2873 + C2874) * C32612 * C32659 +
           (C2870 + C2869 + C2868 + C2867) * C32612 * C32823) *
              C32570 * C222 +
          ((C2874 + C2873 + C2872 + C2871) * C32612 * C32823 +
           (C2696 * C919 + C2847 + C2847 + C2690 * C931 + C2698 * C918 + C2848 +
            C2848 + C2691 * C930 + C2700 * C917 + C2849 + C2849 + C2692 * C929 +
            C2702 * C1290 + C2850 + C2850 + C32822 * C1292) *
               C32612 * C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 + C2706 +
            C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 + C2692 * C139 +
            C2702 * C126 + C2708 + C2708 + C32822 * C140) *
               C32612 * C32823 +
           (C2696 * C229 + C2709 + C2709 + C2690 * C249 + C2698 * C228 + C2710 +
            C2710 + C2691 * C248 + C2700 * C227 + C2711 + C2711 + C2692 * C247 +
            C2702 * C226 + C2712 + C2712 + C32822 * C246) *
               C32612 * C32659) *
              C32570 * C32556 * C110 -
          ((C2702 * C225 + C2713 + C2713 + C32822 * C245 + C2700 * C226 +
            C2714 + C2714 + C2692 * C246 + C2698 * C227 + C2715 + C2715 +
            C2691 * C247 + C2696 * C228 + C2716 + C2716 + C2690 * C248) *
               C32612 * C32659 +
           (C2702 * C127 + C2717 + C2717 + C32822 * C141 + C2700 * C126 +
            C2718 + C2718 + C2692 * C140 + C2698 * C125 + C2719 + C2719 +
            C2691 * C139 + C2696 * C124 + C2720 + C2720 + C2690 * C138) *
               C32612 * C32823) *
              C32570 * C32556 * C111 +
          ((C2696 * C125 + C2721 + C2721 + C2690 * C139 + C2698 * C126 + C2722 +
            C2722 + C2691 * C140 + C2700 * C127 + C2723 + C2723 + C2692 * C141 +
            C2702 * C128 + C2724 + C2724 + C32822 * C142) *
               C32612 * C32823 +
           (C2696 * C227 + C2725 + C2725 + C2690 * C247 + C2698 * C226 + C2726 +
            C2726 + C2691 * C246 + C2700 * C225 + C2727 + C2727 + C2692 * C245 +
            C2702 * C456 + C2728 + C2728 + C32822 * C458) *
               C32612 * C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
            C7773 + C7773 + C32517 * C138) *
               C32612 * C7763 +
           (C7767 * C229 + C7774 + C7774 + C32804 * C249 + C7769 * C228 +
            C7775 + C7775 + C32517 * C248) *
               C32612 * C7764 +
           (C7767 * C230 + C7776 + C7776 + C32804 * C250 + C7769 * C231 +
            C7777 + C7777 + C32517 * C251) *
               C32612 * C7765 +
           (C7767 * C919 + C7778 + C7778 + C32804 * C931 + C7769 * C918 +
            C7779 + C7779 + C32517 * C930) *
               C32612 * C32831) *
              C32570 * C32556 * C110 -
          ((C7769 * C917 + C7780 + C7780 + C32517 * C929 + C7767 * C918 +
            C7781 + C7781 + C32804 * C930) *
               C32612 * C32831 +
           (C7769 * C232 + C7782 + C7782 + C32517 * C252 + C7767 * C231 +
            C7783 + C7783 + C32804 * C251) *
               C32612 * C7765 +
           (C7769 * C227 + C7784 + C7784 + C32517 * C247 + C7767 * C228 +
            C7785 + C7785 + C32804 * C248) *
               C32612 * C7764 +
           (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
            C7787 + C7787 + C32804 * C138) *
               C32612 * C7763) *
              C32570 * C32556 * C111 +
          ((C7767 * C125 + C7788 + C7788 + C32804 * C139 + C7769 * C126 +
            C7789 + C7789 + C32517 * C140) *
               C32612 * C7763 +
           (C7767 * C227 + C7790 + C7790 + C32804 * C247 + C7769 * C226 +
            C7791 + C7791 + C32517 * C246) *
               C32612 * C7764 +
           (C7767 * C232 + C7792 + C7792 + C32804 * C252 + C7769 * C233 +
            C7793 + C7793 + C32517 * C253) *
               C32612 * C7765 +
           (C7767 * C917 + C7794 + C7794 + C32804 * C929 + C7769 * C1290 +
            C7795 + C7795 + C32517 * C1292) *
               C32612 * C32831) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
            C7773 + C7773 + C32517 * C138) *
               C32612 * C7763 +
           (C7930 + C7931) * C32612 * C7764 + C7940 * C7765 + C7941 * C32831) *
              C32570 * C221 -
          ((C7936 + C7937) * C32612 * C32831 +
           (C7935 + C7934) * C32612 * C7765 + (C7933 + C7932) * C32612 * C7764 +
           (C7931 + C7930) * C32612 * C7763) *
              C32570 * C222 +
          (C7940 * C7763 + C7941 * C7764 + (C7937 + C7936) * C32612 * C7765 +
           (C7767 * C6335 + C7912 + C7912 + C32804 * C6339 + C7769 * C6536 +
            C7913 + C7913 + C32517 * C6538) *
               C32612 * C32831) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C10454 +
            (C9004 + C9005) * C10455 + (C9011 + C9010) * C32857) *
               C32823 +
           ((C7930 + C7931) * C10454 + C9630 * C10455 +
            (C9009 + C9008) * C32857) *
               C32659) *
              C32570 * C32556 * C110 -
          (((C7769 * C1104 + C9427 + C9427 + C32517 * C1122 + C7767 * C1103 +
             C9426 + C9426 + C32804 * C1121) *
                C32857 +
            (C9223 + C9222) * C10455 + (C8213 + C8212) * C10454) *
               C32659 +
           ((C7769 * C337 + C9425 + C9425 + C32517 * C357 + C7767 * C336 +
             C9424 + C9424 + C32804 * C356) *
                C32857 +
            (C9435 + C9434) * C10455 +
            (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
             C7787 + C7787 + C32804 * C138) *
                C10454) *
               C32823) *
              C32570 * C32556 * C111 +
          (((C7767 * C125 + C7788 + C7788 + C32804 * C139 + C7769 * C126 +
             C7789 + C7789 + C32517 * C140) *
                C10454 +
            (C7767 * C332 + C8664 + C8664 + C32804 * C352 + C7769 * C331 +
             C8665 + C8665 + C32517 * C351) *
                C10455 +
            (C7767 * C337 + C12654 + C12654 + C32804 * C357 + C7769 * C338 +
             C12655 + C12655 + C32517 * C358) *
                C32857) *
               C32823 +
           ((C7767 * C227 + C7790 + C7790 + C32804 * C247 + C7769 * C226 +
             C7791 + C7791 + C32517 * C246) *
                C10454 +
            (C7767 * C640 + C8666 + C8666 + C32804 * C650 + C7769 * C641 +
             C8667 + C8667 + C32517 * C651) *
                C10455 +
            (C7767 * C1104 + C12656 + C12656 + C32804 * C1122 + C7769 * C2231 +
             C12657 + C12657 + C32517 * C2233) *
                C32857) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C10454 +
            (C9004 + C9005) * C10455 + (C9011 + C9010) * C32857) *
               C32823 +
           ((C7930 + C7931) * C10454 + C9630 * C10455 +
            (C9009 + C9008) * C32857) *
               C32659) *
              C32570 * C221 -
          (((C9006 + C9007) * C32857 + C9631 * C10455 +
            (C7933 + C7932) * C10454) *
               C32659 +
           ((C9008 + C9009) * C32857 + C9632 * C10455 +
            (C7931 + C7930) * C10454) *
               C32823) *
              C32570 * C222 +
          ((C7938 * C10454 + C8817 * C10455 + (C9007 + C9006) * C32857) *
               C32823 +
           (C7939 * C10454 + (C8513 + C8512) * C10455 +
            (C7767 * C6436 + C8054 + C8054 + C32804 * C6442 + C7769 * C7315 +
             C8055 + C8055 + C32517 * C7317) *
                C32857) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[55] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32824 +
             C7165 * C32699) *
                C7763 +
            (C9830 + C9831) * C7764 + C9838 * C7765 + C9839 * C32831) *
               C32570 * C452 -
           ((C9836 + C9837) * C32831 + (C9835 + C9834) * C7765 +
            (C9833 + C9832) * C7764 + (C9831 + C9830) * C7763) *
               C32570 * C453) *
              C454 +
          (((C10068 + C10069) * C7763 + (C10070 + C10071) * C7764 +
            (C10072 + C10078) * C7765 +
            (C6560 * C32824 +
             (C6256 * C6646 + C6654 + C6654 + C32507 * C6648) * C32699) *
                C32831) *
               C32570 * C453 -
           ((C10078 + C10072) * C32831 + (C10071 + C10070) * C7765 +
            (C10069 + C10068) * C7764 +
            (C7506 * C32699 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32824) *
                C7763) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
              C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                 C32824 +
             (C2075 + C2076 + C2077) * C32699) *
                C32823 +
            ((C978 + C979 + C980) * C32824 + (C1672 + C1671 + C1670) * C32699) *
                C32659) *
               C32570 * C452 -
           (((C1667 + C1668 + C1669) * C32699 + (C983 + C982 + C981) * C32824) *
                C32659 +
            ((C1670 + C1671 + C1672) * C32699 + (C980 + C979 + C978) * C32824) *
                C32823) *
               C32570 * C453) *
              C454 +
          ((((C1321 + C1322 + C1323) * C32824 +
             (C4840 + C4841 + C4842) * C32699) *
                C32823 +
            ((C1324 + C1325 + C1326) * C32824 +
             (C774 * C1100 + C1482 + C1482 + C768 * C1118 + C776 * C1099 +
              C1483 + C1483 + C769 * C1117 + C778 * C1472 + C1484 + C1484 +
              C32845 * C1474) *
                 C32699) *
                C32659) *
               C32570 * C453 -
           (((C4842 + C4841 + C4840) * C32699 +
             (C1323 + C1322 + C1321) * C32824) *
                C32659 +
            ((C2416 + C2415 + C2414) * C32699 +
             (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
              C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                 C32824) *
                C32823) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C13680 +
             C7165 * C13681 + C7166 * C13682 + C7169 * C32838) *
                C32823 +
            (C14495 + C14496 + C14497 + C14498) * C32659) *
               C32570 * C452 -
           ((C14499 + C14500 + C14501 + C14502) * C32659 +
            (C14498 + C14497 + C14496 + C14495) * C32823) *
               C32570 * C453) *
              C454 +
          (((C14731 + C14732 + C14733 + C14739) * C32823 +
            (C6558 * C13680 + C7340 * C13681 + C7341 * C13682 +
             (C6256 * C7491 + C7501 + C7501 + C32507 * C7493) * C32838) *
                C32659) *
               C32570 * C453 -
           ((C14739 + C14733 + C14732 + C14731) * C32659 +
            (C12415 * C32838 + C7507 * C13682 + C7506 * C13681 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C13680) *
                C32823) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[56] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32824 +
             C7165 * C32699) *
                C7763 +
            (C9830 + C9831) * C7764 + C9838 * C7765 + C9839 * C32831) *
               C546 -
           ((C10339 + C10340) * C32831 + (C10341 + C10342) * C7765 +
            (C10343 + C10344) * C7764 +
            (C7166 * C32699 + C7165 * C32824) * C7763) *
               C547) *
              C452 +
          (((C10344 + C10343) * C7763 + (C10342 + C10341) * C7764 +
            (C10340 + C10339) * C7765 +
            (C6757 * C32824 +
             (C6256 * C6437 + C6454 + C6454 + C32507 * C6443) * C32699) *
                C32831) *
               C547 -
           ((C9836 + C9837) * C32831 + (C9835 + C9834) * C7765 +
            (C9833 + C9832) * C7764 + (C9831 + C9830) * C7763) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
              C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                 C32824 +
             (C2075 + C2076 + C2077) * C32699) *
                C32823 +
            ((C978 + C979 + C980) * C32824 + C5233 * C32699) * C32659) *
               C546 -
           (((C2592 + C2591 + C2590) * C32699 + C5234 * C32824) * C32659 +
            ((C2080 + C2079 + C2078) * C32699 +
             (C2077 + C2076 + C2075) * C32824) *
                C32823) *
               C547) *
              C452 +
          (((C5233 * C32824 + (C2590 + C2591 + C2592) * C32699) * C32823 +
            ((C1669 + C1668 + C1667) * C32824 +
             (C774 * C1105 + C1142 + C1142 + C768 * C1123 + C776 * C1106 +
              C1143 + C1143 + C769 * C1124 + C778 * C1107 + C1144 + C1144 +
              C32845 * C1125) *
                 C32699) *
                C32659) *
               C547 -
           (((C1667 + C1668 + C1669) * C32699 + (C983 + C982 + C981) * C32824) *
                C32659 +
            (C5234 * C32699 + (C980 + C979 + C978) * C32824) * C32823) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C13680 +
             C7165 * C13681 + C7166 * C13682 + C7169 * C32838) *
                C32823 +
            (C14495 + C14496 + C14497 + C14498) * C32659) *
               C546 -
           ((C15000 + C15001 + C15002 + C15003) * C32659 +
            (C12233 * C32838 + C7169 * C13682 + C7166 * C13681 +
             C7165 * C13680) *
                C32823) *
               C547) *
              C452 +
          (((C15003 + C15002 + C15001 + C15000) * C32823 +
            (C6759 * C13680 + C7014 * C13681 + C7167 * C13682 +
             (C6256 * C7131 + C7154 + C7154 + C32507 * C7137) * C32838) *
                C32659) *
               C547 -
           ((C14499 + C14500 + C14501 + C14502) * C32659 +
            (C14498 + C14497 + C14496 + C14495) * C32823) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[57] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
                 C782 + C769 * C138 + C778 * C125 + C783 + C783 +
                 C32845 * C139) *
                    C32824 +
                (C2075 + C2076 + C2077) * C32699) *
                   C32823 +
               ((C978 + C979 + C980) * C32824 +
                (C1672 + C1671 + C1670) * C32699) *
                   C32659) *
                  C32570 * C32556 * C110 -
              (((C778 * C641 + C1481 + C1481 + C32845 * C651 + C776 * C640 +
                 C1480 + C1480 + C769 * C650 + C774 * C639 + C1479 + C1479 +
                 C768 * C649) *
                    C32699 +
                (C1323 + C1322 + C1321) * C32824) *
                   C32659 +
               ((C2416 + C2415 + C2414) * C32699 +
                (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 +
                 C797 + C797 + C769 * C139 + C774 * C124 + C798 + C798 +
                 C768 * C138) *
                    C32824) *
                   C32823) *
                  C32570 * C32556 * C111 +
              (((C774 * C125 + C799 + C799 + C768 * C139 + C776 * C126 + C800 +
                 C800 + C769 * C140 + C778 * C127 + C801 + C801 +
                 C32845 * C141) *
                    C32824 +
                (C774 * C332 + C1789 + C1789 + C768 * C352 + C776 * C331 +
                 C1790 + C1790 + C769 * C351 + C778 * C330 + C1791 + C1791 +
                 C32845 * C350) *
                    C32699) *
                   C32823 +
               ((C774 * C227 + C802 + C802 + C768 * C247 + C776 * C226 + C803 +
                 C803 + C769 * C246 + C778 * C225 + C804 + C804 +
                 C32845 * C245) *
                    C32824 +
                (C774 * C640 + C4339 + C4339 + C768 * C650 + C776 * C641 +
                 C4340 + C4340 + C769 * C651 + C778 * C642 + C4341 + C4341 +
                 C32845 * C652) *
                    C32699) *
                   C32659) *
                  C32570 * C32556 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
                 C782 + C769 * C138 + C778 * C125 + C783 + C783 +
                 C32845 * C139) *
                    C32824 +
                (C2075 + C2076 + C2077) * C32699) *
                   C32823 +
               ((C978 + C979 + C980) * C32824 +
                (C1672 + C1671 + C1670) * C32699) *
                   C32659) *
                  C32570 * C221 -
              (((C1667 + C1668 + C1669) * C32699 +
                (C983 + C982 + C981) * C32824) *
                   C32659 +
               ((C1670 + C1671 + C1672) * C32699 +
                (C980 + C979 + C978) * C32824) *
                   C32823) *
                  C32570 * C222 +
              ((C988 * C32824 + (C1669 + C1668 + C1667) * C32699) * C32823 +
               ((C986 + C985 + C984) * C32824 +
                (C774 * C1630 + C1652 + C1652 + C768 * C1636 + C776 * C1631 +
                 C1653 + C1653 + C769 * C1637 + C778 * C1632 + C1654 + C1654 +
                 C32845 * C1638) *
                    C32699) *
                   C32659) *
                  C32570 * C223) *
             C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32824 +
            (C2075 + C2076 + C2077) * C32699) *
               C32823 +
           ((C978 + C979 + C980) * C32824 + (C1672 + C1671 + C1670) * C32699) *
               C32659) *
              C327 -
          (((C2592 + C2591 + C2590) * C32699 +
            (C1670 + C1671 + C1672) * C32824) *
               C32659 +
           ((C2080 + C2079 + C2078) * C32699 +
            (C2077 + C2076 + C2075) * C32824) *
               C32823) *
              C328 +
          ((C2085 * C32824 + (C2083 + C2082 + C2081) * C32699) * C32823 +
           ((C2590 + C2591 + C2592) * C32824 +
            (C774 * C2565 + C2581 + C2581 + C768 * C2571 + C776 * C2566 +
             C2582 + C2582 + C769 * C2572 + C778 * C2567 + C2583 + C2583 +
             C32845 * C2573) *
                C32699) *
               C32659) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32824 +
            C7165 * C32699) *
               C7763 +
           (C6364 * C32824 + C6760 * C32699) * C7764 +
           (C6365 * C32824 + C6759 * C32699) * C7765 +
           (C6366 * C32824 + C6758 * C32699) * C32831) *
              C32570 * C32556 * C110 -
          (((C6256 * C1631 + C6653 + C6653 + C32507 * C1637) * C32699 +
            C6559 * C32824) *
               C32831 +
           (C7340 * C32699 + C6558 * C32824) * C7765 +
           (C7338 * C32699 + C6557 * C32824) * C7764 +
           (C7506 * C32699 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32824) *
               C7763) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32824 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C32699) *
               C7763 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32824 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C32699) *
               C7764 +
           ((C6256 * C232 + C6271 + C6271 + C32507 * C252) * C32824 +
            (C6256 * C1099 + C6882 + C6882 + C32507 * C1117) * C32699) *
               C7765 +
           ((C6256 * C917 + C6272 + C6272 + C32507 * C929) * C32824 +
            (C6256 * C1632 + C9731 + C9731 + C32507 * C1638) * C32699) *
               C32831) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32824 +
            C7165 * C32699) *
               C7763 +
           (C9830 + C9831) * C7764 + C9838 * C7765 + C9839 * C32831) *
              C32570 * C221 -
          ((C9836 + C9837) * C32831 + (C9835 + C9834) * C7765 +
           (C9833 + C9832) * C7764 + (C9831 + C9830) * C7763) *
              C32570 * C222 +
          (C9838 * C7763 + C9839 * C7764 + (C9837 + C9836) * C7765 +
           (C6368 * C32824 +
            (C6256 * C6736 + C6748 + C6748 + C32507 * C6738) * C32699) *
               C32831) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32824 +
            C7165 * C32699) *
               C7763 +
           (C9830 + C9831) * C7764 + C9838 * C7765 + C9839 * C32831) *
              C327 -
          ((C7015 * C32699 + C6758 * C32824) * C32831 +
           (C7014 * C32699 + C6759 * C32824) * C7765 +
           (C7013 * C32699 + C6760 * C32824) * C7764 +
           (C7166 * C32699 + C7165 * C32824) * C7763) *
              C328 +
          ((C7166 * C32824 + C7169 * C32699) * C7763 +
           (C7013 * C32824 + C7168 * C32699) * C7764 +
           (C7014 * C32824 + C7167 * C32699) * C7765 +
           (C7015 * C32824 +
            (C6256 * C7653 + C7663 + C7663 + C32507 * C7655) * C32699) *
               C32831) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C13680 +
            C7165 * C13681 + C7166 * C13682 + C7169 * C32838) *
               C32823 +
           (C6364 * C13680 + C6760 * C13681 + C7013 * C13682 + C7168 * C32838) *
               C32659) *
              C32570 * C32556 * C110 -
          (((C6256 * C2566 + C7500 + C7500 + C32507 * C2572) * C32838 +
            C7339 * C13682 + C7338 * C13681 + C6557 * C13680) *
               C32659 +
           (C12415 * C32838 + C7507 * C13682 + C7506 * C13681 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C13680) *
               C32823) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C13680 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C13681 +
            (C6256 * C337 + C6879 + C6879 + C32507 * C357) * C13682 +
            (C6256 * C2014 + C12091 + C12091 + C32507 * C2026) * C32838) *
               C32823 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C13680 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C13681 +
            (C6256 * C1104 + C6881 + C6881 + C32507 * C1122) * C13682 +
            (C6256 * C2567 + C14396 + C14396 + C32507 * C2573) * C32838) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C13680 +
            C7165 * C13681 + C7166 * C13682 + C7169 * C32838) *
               C32823 +
           (C14495 + C14496 + C14497 + C14498) * C32659) *
              C32570 * C221 -
          ((C14499 + C14500 + C14501 + C14502) * C32659 +
           (C14498 + C14497 + C14496 + C14495) * C32823) *
              C32570 * C222 +
          ((C14502 + C14501 + C14500 + C14499) * C32823 +
           (C6366 * C13680 + C6758 * C13681 + C7015 * C13682 +
            (C6256 * C7653 + C7663 + C7663 + C32507 * C7655) * C32838) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C13680 +
            C7165 * C13681 + C7166 * C13682 + C7169 * C32838) *
               C32823 +
           (C14495 + C14496 + C14497 + C14498) * C32659) *
              C327 -
          ((C12507 * C32838 + C7168 * C13682 + C7013 * C13681 +
            C6760 * C13680) *
               C32659 +
           (C12233 * C32838 + C7169 * C13682 + C7166 * C13681 +
            C7165 * C13680) *
               C32823) *
              C328 +
          ((C7166 * C13680 + C7169 * C13681 + C12233 * C13682 +
            C12234 * C32838) *
               C32823 +
           (C7013 * C13680 + C7168 * C13681 + C12507 * C13682 +
            (C6256 * C12498 + C12504 + C12504 + C32507 * C12500) * C32838) *
               C32659) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[58] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32824 +
             C7165 * C32699) *
                C7763 +
            (C9830 + C9831) * C7764 + C9838 * C7765 + C9839 * C32831) *
               C546 -
           ((C7015 * C32699 + C6758 * C32824) * C32831 +
            (C7014 * C32699 + C6759 * C32824) * C7765 +
            (C7013 * C32699 + C6760 * C32824) * C7764 +
            (C7166 * C32699 + C7165 * C32824) * C7763) *
               C547) *
              C32556 * C454 +
          (((C7506 * C32824 + C7507 * C32699) * C7763 +
            (C7338 * C32824 + C7339 * C32699) * C7764 +
            (C7340 * C32824 + C7341 * C32699) * C7765 +
            (C10077 * C32824 +
             (C6256 * C7315 + C7329 + C7329 + C32507 * C7317) * C32699) *
                C32831) *
               C547 -
           ((C10078 + C10072) * C32831 + (C10071 + C10070) * C7765 +
            (C10069 + C10068) * C7764 +
            (C7506 * C32699 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32824) *
                C7763) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
              C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                 C32824 +
             (C2075 + C2076 + C2077) * C32699) *
                C32823 +
            ((C978 + C979 + C980) * C32824 + (C1672 + C1671 + C1670) * C32699) *
                C32659) *
               C546 -
           (((C2592 + C2591 + C2590) * C32699 +
             (C1670 + C1671 + C1672) * C32824) *
                C32659 +
            ((C2080 + C2079 + C2078) * C32699 +
             (C2077 + C2076 + C2075) * C32824) *
                C32823) *
               C547) *
              C32556 * C454 +
          ((((C2414 + C2415 + C2416) * C32824 +
             (C2417 + C2418 + C2419) * C32699) *
                C32823 +
            ((C4840 + C4841 + C4842) * C32824 +
             (C774 * C1103 + C2235 + C2235 + C768 * C1121 + C776 * C1104 +
              C2236 + C2236 + C769 * C1122 + C778 * C2231 + C2237 + C2237 +
              C32845 * C2233) *
                 C32699) *
                C32659) *
               C547 -
           (((C4842 + C4841 + C4840) * C32699 +
             (C1323 + C1322 + C1321) * C32824) *
                C32659 +
            ((C2416 + C2415 + C2414) * C32699 +
             (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
              C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                 C32824) *
                C32823) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C13680 +
             C7165 * C13681 + C7166 * C13682 + C7169 * C32838) *
                C32823 +
            (C14495 + C14496 + C14497 + C14498) * C32659) *
               C546 -
           ((C12507 * C32838 + C7168 * C13682 + C7013 * C13681 +
             C6760 * C13680) *
                C32659 +
            (C12233 * C32838 + C7169 * C13682 + C7166 * C13681 +
             C7165 * C13680) *
                C32823) *
               C547) *
              C32556 * C454 +
          (((C7506 * C13680 + C7507 * C13681 + C12415 * C13682 +
             C12416 * C32838) *
                C32823 +
            (C7338 * C13680 + C7339 * C13681 + C14738 * C13682 +
             (C6256 * C12316 + C12320 + C12320 + C32507 * C12318) * C32838) *
                C32659) *
               C547 -
           ((C14739 + C14733 + C14732 + C14731) * C32659 +
            (C12415 * C32838 + C7507 * C13682 + C7506 * C13681 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C13680) *
                C32823) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[59] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32824 +
            (C2075 + C2076 + C2077) * C32699) *
               C32823 +
           ((C978 + C979 + C980) * C32824 + (C1672 + C1671 + C1670) * C32699) *
               C32659) *
              C32570 * C221 -
          (((C1667 + C1668 + C1669) * C32699 + (C983 + C982 + C981) * C32824) *
               C32659 +
           ((C1670 + C1671 + C1672) * C32699 + (C980 + C979 + C978) * C32824) *
               C32823) *
              C32570 * C222 +
          ((C988 * C32824 + (C1669 + C1668 + C1667) * C32699) * C32823 +
           ((C986 + C985 + C984) * C32824 +
            (C774 * C1630 + C1652 + C1652 + C768 * C1636 + C776 * C1631 +
             C1653 + C1653 + C769 * C1637 + C778 * C1632 + C1654 + C1654 +
             C32845 * C1638) *
                C32699) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32824 +
            (C2075 + C2076 + C2077) * C32699) *
               C32823 +
           ((C978 + C979 + C980) * C32824 + (C1672 + C1671 + C1670) * C32699) *
               C32659) *
              C32570 * C32556 * C110 -
          (((C778 * C641 + C1481 + C1481 + C32845 * C651 + C776 * C640 + C1480 +
             C1480 + C769 * C650 + C774 * C639 + C1479 + C1479 + C768 * C649) *
                C32699 +
            (C1323 + C1322 + C1321) * C32824) *
               C32659 +
           ((C2416 + C2415 + C2414) * C32699 +
            (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
             C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                C32824) *
               C32823) *
              C32570 * C32556 * C111 +
          (((C774 * C125 + C799 + C799 + C768 * C139 + C776 * C126 + C800 +
             C800 + C769 * C140 + C778 * C127 + C801 + C801 + C32845 * C141) *
                C32824 +
            (C774 * C332 + C1789 + C1789 + C768 * C352 + C776 * C331 + C1790 +
             C1790 + C769 * C351 + C778 * C330 + C1791 + C1791 +
             C32845 * C350) *
                C32699) *
               C32823 +
           ((C774 * C227 + C802 + C802 + C768 * C247 + C776 * C226 + C803 +
             C803 + C769 * C246 + C778 * C225 + C804 + C804 + C32845 * C245) *
                C32824 +
            (C774 * C640 + C4339 + C4339 + C768 * C650 + C776 * C641 + C4340 +
             C4340 + C769 * C651 + C778 * C642 + C4341 + C4341 +
             C32845 * C652) *
                C32699) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32824 +
            C7165 * C32699) *
               C7763 +
           (C6364 * C32824 + C6760 * C32699) * C7764 +
           (C6365 * C32824 + C6759 * C32699) * C7765 +
           (C6366 * C32824 + C6758 * C32699) * C32831) *
              C32570 * C32556 * C110 -
          (((C6256 * C1631 + C6653 + C6653 + C32507 * C1637) * C32699 +
            C6559 * C32824) *
               C32831 +
           (C7340 * C32699 + C6558 * C32824) * C7765 +
           (C7338 * C32699 + C6557 * C32824) * C7764 +
           (C7506 * C32699 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32824) *
               C7763) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32824 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C32699) *
               C7763 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32824 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C32699) *
               C7764 +
           ((C6256 * C232 + C6271 + C6271 + C32507 * C252) * C32824 +
            (C6256 * C1099 + C6882 + C6882 + C32507 * C1117) * C32699) *
               C7765 +
           ((C6256 * C917 + C6272 + C6272 + C32507 * C929) * C32824 +
            (C6256 * C1632 + C9731 + C9731 + C32507 * C1638) * C32699) *
               C32831) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32824 +
            C7165 * C32699) *
               C7763 +
           (C9830 + C9831) * C7764 + C9838 * C7765 + C9839 * C32831) *
              C32570 * C221 -
          ((C9836 + C9837) * C32831 + (C9835 + C9834) * C7765 +
           (C9833 + C9832) * C7764 + (C9831 + C9830) * C7763) *
              C32570 * C222 +
          (C9838 * C7763 + C9839 * C7764 + (C9837 + C9836) * C7765 +
           (C6368 * C32824 +
            (C6256 * C6736 + C6748 + C6748 + C32507 * C6738) * C32699) *
               C32831) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C13680 +
            C7165 * C13681 + C7166 * C13682 + C7169 * C32838) *
               C32823 +
           (C6364 * C13680 + C6760 * C13681 + C7013 * C13682 + C7168 * C32838) *
               C32659) *
              C32570 * C32556 * C110 -
          (((C6256 * C2566 + C7500 + C7500 + C32507 * C2572) * C32838 +
            C7339 * C13682 + C7338 * C13681 + C6557 * C13680) *
               C32659 +
           (C12415 * C32838 + C7507 * C13682 + C7506 * C13681 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C13680) *
               C32823) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C13680 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C13681 +
            (C6256 * C337 + C6879 + C6879 + C32507 * C357) * C13682 +
            (C6256 * C2014 + C12091 + C12091 + C32507 * C2026) * C32838) *
               C32823 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C13680 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C13681 +
            (C6256 * C1104 + C6881 + C6881 + C32507 * C1122) * C13682 +
            (C6256 * C2567 + C14396 + C14396 + C32507 * C2573) * C32838) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C13680 +
            C7165 * C13681 + C7166 * C13682 + C7169 * C32838) *
               C32823 +
           (C14495 + C14496 + C14497 + C14498) * C32659) *
              C32570 * C221 -
          ((C14499 + C14500 + C14501 + C14502) * C32659 +
           (C14498 + C14497 + C14496 + C14495) * C32823) *
              C32570 * C222 +
          ((C14502 + C14501 + C14500 + C14499) * C32823 +
           (C6366 * C13680 + C6758 * C13681 + C7015 * C13682 +
            (C6256 * C7653 + C7663 + C7663 + C32507 * C7655) * C32838) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[60] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
                C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
                C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
                C149 + C105 * C141) *
                   C32612 * C32600 * C32570 * C452 -
               (C121 * C225 + C256 + C256 + C105 * C245 + C119 * C226 + C257 +
                C257 + C104 * C246 + C117 * C227 + C258 + C258 + C103 * C247 +
                C115 * C228 + C259 + C259 + C102 * C248 + C113 * C229 + C260 +
                C260 + C101 * C249) *
                   C32612 * C32600 * C32570 * C453) *
                  C454 +
              ((C113 * C228 + C460 + C460 + C101 * C248 + C115 * C227 + C461 +
                C461 + C102 * C247 + C117 * C226 + C462 + C462 + C103 * C246 +
                C119 * C225 + C463 + C463 + C104 * C245 + C121 * C456 + C464 +
                C464 + C105 * C458) *
                   C32612 * C32600 * C32570 * C453 -
               (C121 * C128 + C150 + C150 + C105 * C142 + C119 * C127 + C151 +
                C151 + C104 * C141 + C117 * C126 + C152 + C152 + C103 * C140 +
                C115 * C125 + C153 + C153 + C102 * C139 + C113 * C124 + C154 +
                C154 + C101 * C138) *
                   C32612 * C32600 * C32570 * C452) *
                  C455) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
                 C782 + C769 * C138 + C778 * C125 + C783 + C783 +
                 C32845 * C139) *
                    C32612 * C32886 +
                (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
                   C32570 * C452 -
               ((C984 + C985 + C986) * C32612 * C32854 +
                (C983 + C982 + C981) * C32612 * C32874 +
                (C980 + C979 + C978) * C32612 * C32886) *
                   C32570 * C453) *
                  C454 +
              (((C1321 + C1322 + C1323) * C32612 * C32886 +
                (C1324 + C1325 + C1326) * C32612 * C32874 +
                (C774 * C918 + C1306 + C1306 + C768 * C930 + C776 * C917 +
                 C1307 + C1307 + C769 * C929 + C778 * C1290 + C1308 + C1308 +
                 C32845 * C1292) *
                    C32612 * C32854) *
                   C32570 * C453 -
               ((C1326 + C1325 + C1324) * C32612 * C32854 +
                (C1323 + C1322 + C1321) * C32612 * C32874 +
                (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 +
                 C797 + C797 + C769 * C139 + C774 * C124 + C798 + C798 +
                 C768 * C138) *
                    C32612 * C32886) *
                   C32570 * C452) *
                  C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32887 +
            (C2075 + C2076 + C2077) * C32876 + C2085 * C32857) *
               C32600 * C32570 * C452 -
           ((C778 * C1104 + C1141 + C1141 + C32845 * C1122 + C776 * C1103 +
             C1140 + C1140 + C769 * C1121 + C774 * C1102 + C1139 + C1139 +
             C768 * C1120) *
                C32857 +
            (C1670 + C1671 + C1672) * C32876 + (C980 + C979 + C978) * C32887) *
               C32600 * C32570 * C453) *
              C454 +
          (((C1321 + C1322 + C1323) * C32887 +
            (C774 * C639 + C1479 + C1479 + C768 * C649 + C776 * C640 + C1480 +
             C1480 + C769 * C650 + C778 * C641 + C1481 + C1481 +
             C32845 * C651) *
                C32876 +
            (C774 * C1103 + C2235 + C2235 + C768 * C1121 + C776 * C1104 +
             C2236 + C2236 + C769 * C1122 + C778 * C2231 + C2237 + C2237 +
             C32845 * C2233) *
                C32857) *
               C32600 * C32570 * C453 -
           ((C778 * C338 + C1786 + C1786 + C32845 * C358 + C776 * C337 + C1787 +
             C1787 + C769 * C357 + C774 * C336 + C1788 + C1788 + C768 * C356) *
                C32857 +
            (C778 * C331 + C1478 + C1478 + C32845 * C351 + C776 * C332 + C1477 +
             C1477 + C769 * C352 + C774 * C333 + C1476 + C1476 + C768 * C353) *
                C32876 +
            (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
             C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                C32887) *
               C32600 * C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C32612 * C5347 +
            (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
               C32570 * C452 -
           ((C5542 + C5543 + C5544) * C32612 * C32854 +
            (C5541 + C5540 + C5539) * C32612 * C5348 +
            (C5538 + C5537 + C5536) * C32612 * C5347) *
               C32570 * C453) *
              C454 +
          (((C5849 + C5850 + C5851) * C32612 * C5347 +
            (C5852 + C5853 + C5854) * C32612 * C5348 +
            (C5350 * C918 + C5834 + C5834 + C32883 * C930 + C5352 * C917 +
             C5835 + C5835 + C32870 * C929 + C5354 * C1290 + C5836 + C5836 +
             C32845 * C1292) *
                C32612 * C32854) *
               C32570 * C453 -
           ((C5854 + C5853 + C5852) * C32612 * C32854 +
            (C5851 + C5850 + C5849) * C32612 * C5348 +
            (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
             C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
             C32883 * C138) *
                C32612 * C5347) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
            C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
               C32570 * C452 -
           (C6373 * C6255 + C6372 * C6254 + C6371 * C6253 + C6370 * C6252 +
            C6369 * C6251) *
               C32570 * C453) *
              C454 +
          ((C6561 * C6251 + C6562 * C6252 + C6563 * C6253 + C6564 * C6254 +
            (C6256 * C6536 + C6548 + C6548 + C32507 * C6538) * C32612 * C6255) *
               C32570 * C453 -
           (C6564 * C6255 + C6563 * C6254 + C6562 * C6253 + C6561 * C6252 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32612 * C6251) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32887 +
             C7165 * C32876 + C7166 * C32857) *
                C5347 +
            (C6994 + C6995 + C7016) * C5348 + C7019 * C32854) *
               C32570 * C452 -
           ((C7018 + C7004 + C7005) * C32854 + (C7017 + C6999 + C6998) * C5348 +
            (C7016 + C6995 + C6994) * C5347) *
               C32570 * C453) *
              C454 +
          (((C7319 + C7342 + C7343) * C5347 + (C7324 + C7344 + C7345) * C5348 +
            (C6559 * C32887 +
             (C6256 * C1631 + C6653 + C6653 + C32507 * C1637) * C32876 +
             (C6256 * C7315 + C7329 + C7329 + C32507 * C7317) * C32857) *
                C32854) *
               C32570 * C453 -
           ((C7345 + C7344 + C7324) * C32854 + (C7343 + C7342 + C7319) * C5348 +
            ((C6256 * C336 + C6877 + C6877 + C32507 * C356) * C32857 +
             (C6256 * C333 + C6650 + C6650 + C32507 * C353) * C32876 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32887) *
                C5347) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C10454 +
            (C10729 + C10730 + C10731) * C10455 + C10739 * C32857) *
               C32600 * C32570 * C452 -
           ((C5354 * C1104 + C5672 + C5672 + C32845 * C1122 + C5352 * C1103 +
             C5671 + C5671 + C32870 * C1121 + C5350 * C1102 + C5670 + C5670 +
             C32883 * C1120) *
                C32857 +
            (C6186 + C6187 + C6188) * C10455 +
            (C5538 + C5537 + C5536) * C10454) *
               C32600 * C32570 * C453) *
              C454 +
          (((C5849 + C5850 + C5851) * C10454 +
            (C5350 * C639 + C6004 + C6004 + C32883 * C649 + C5352 * C640 +
             C6005 + C6005 + C32870 * C650 + C5354 * C641 + C6006 + C6006 +
             C32845 * C651) *
                C10455 +
            (C5350 * C1103 + C10886 + C10886 + C32883 * C1121 + C5352 * C1104 +
             C10887 + C10887 + C32870 * C1122 + C5354 * C2231 + C10888 +
             C10888 + C32845 * C2233) *
                C32857) *
               C32600 * C32570 * C453 -
           ((C5354 * C338 + C10458 + C10458 + C32845 * C358 + C5352 * C337 +
             C10459 + C10459 + C32870 * C357 + C5350 * C336 + C10460 + C10460 +
             C32883 * C356) *
                C32857 +
            (C5354 * C331 + C6003 + C6003 + C32845 * C351 + C5352 * C332 +
             C6002 + C6002 + C32870 * C352 + C5350 * C333 + C6001 + C6001 +
             C32883 * C353) *
                C10455 +
            (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
             C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
             C32883 * C138) *
                C10454) *
               C32600 * C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C10454 +
             C7165 * C10455 + C7166 * C32857) *
                C32886 +
            (C11452 + C11453 + C11454) * C32874 + C11462 * C32854) *
               C32570 * C452 -
           ((C11458 + C11459 + C11460) * C32854 +
            (C11457 + C11456 + C11455) * C32874 +
            (C11454 + C11453 + C11452) * C32886) *
               C32570 * C453) *
              C454 +
          (((C11719 + C11720 + C11721) * C32886 +
            (C11722 + C11723 + C11724) * C32874 +
            (C6559 * C10454 + C10077 * C10455 +
             (C6256 * C7315 + C7329 + C7329 + C32507 * C7317) * C32857) *
                C32854) *
               C32570 * C453 -
           ((C11724 + C11723 + C11722) * C32854 +
            (C11721 + C11720 + C11719) * C32874 +
            (C7507 * C32857 + C7506 * C10455 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C10454) *
                C32886) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C12084 +
            C7165 * C12085 + C7166 * C12086 + C7169 * C12087 +
            C12233 * C12088) *
               C32600 * C32570 * C452 -
           ((C6256 * C7130 + C7153 + C7153 + C32507 * C7136) * C12088 +
            C7168 * C12087 + C7013 * C12086 + C6760 * C12085 + C6364 * C12084) *
               C32600 * C32570 * C453) *
              C454 +
          ((C6557 * C12084 + C7338 * C12085 + C7339 * C12086 +
            (C6256 * C2566 + C7500 + C7500 + C32507 * C2572) * C12087 +
            (C6256 * C12316 + C12320 + C12320 + C32507 * C12318) * C12088) *
               C32600 * C32570 * C453 -
           ((C6256 * C2018 + C12090 + C12090 + C32507 * C2030) * C12088 +
            (C6256 * C2015 + C7499 + C7499 + C32507 * C2027) * C12087 +
            C7507 * C12086 + C7506 * C12085 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C12084) *
               C32600 * C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[61] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
                C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
                C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
                C149 + C105 * C141) *
                   C32612 * C32600 * C546 -
               (C121 * C330 + C361 + C361 + C105 * C350 + C119 * C331 + C362 +
                C362 + C104 * C351 + C117 * C332 + C363 + C363 + C103 * C352 +
                C115 * C333 + C364 + C364 + C102 * C353 + C113 * C334 + C365 +
                C365 + C101 * C354) *
                   C32612 * C32600 * C547) *
                  C452 +
              ((C113 * C638 + C654 + C654 + C101 * C648 + C115 * C639 + C655 +
                C655 + C102 * C649 + C117 * C640 + C656 + C656 + C103 * C650 +
                C119 * C641 + C657 + C657 + C104 * C651 + C121 * C642 + C658 +
                C658 + C105 * C652) *
                   C32612 * C32600 * C547 -
               (C121 * C225 + C256 + C256 + C105 * C245 + C119 * C226 + C257 +
                C257 + C104 * C246 + C117 * C227 + C258 + C258 + C103 * C247 +
                C115 * C228 + C259 + C259 + C102 * C248 + C113 * C229 + C260 +
                C260 + C101 * C249) *
                   C32612 * C32600 * C546) *
                  C453) *
             C32544 +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
                 C782 + C769 * C138 + C778 * C125 + C783 + C783 +
                 C32845 * C139) *
                    C32612 * C32886 +
                (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
                   C546 -
               ((C1667 + C1668 + C1669) * C32612 * C32854 +
                (C1670 + C1671 + C1672) * C32612 * C32874 +
                (C778 * C332 + C1133 + C1133 + C32845 * C352 + C776 * C333 +
                 C1134 + C1134 + C769 * C353 + C774 * C334 + C1135 + C1135 +
                 C768 * C354) *
                    C32612 * C32886) *
                   C547) *
                  C452 +
              (((C1672 + C1671 + C1670) * C32612 * C32886 +
                (C1669 + C1668 + C1667) * C32612 * C32874 +
                (C774 * C1630 + C1652 + C1652 + C768 * C1636 + C776 * C1631 +
                 C1653 + C1653 + C769 * C1637 + C778 * C1632 + C1654 + C1654 +
                 C32845 * C1638) *
                    C32612 * C32854) *
                   C547 -
               ((C984 + C985 + C986) * C32612 * C32854 +
                (C983 + C982 + C981) * C32612 * C32874 +
                (C980 + C979 + C978) * C32612 * C32886) *
                   C546) *
                  C453) *
             C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32887 +
            (C2075 + C2076 + C2077) * C32876 + C2085 * C32857) *
               C32600 * C546 -
           ((C2081 + C2082 + C2083) * C32857 +
            (C2080 + C2079 + C2078) * C32876 +
            (C2077 + C2076 + C2075) * C32887) *
               C32600 * C547) *
              C452 +
          (((C1672 + C1671 + C1670) * C32887 +
            (C2590 + C2591 + C2592) * C32876 +
            (C774 * C2565 + C2581 + C2581 + C768 * C2571 + C776 * C2566 +
             C2582 + C2582 + C769 * C2572 + C778 * C2567 + C2583 + C2583 +
             C32845 * C2573) *
                C32857) *
               C32600 * C547 -
           ((C2592 + C2591 + C2590) * C32857 +
            (C1670 + C1671 + C1672) * C32876 + (C980 + C979 + C978) * C32887) *
               C32600 * C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C32612 * C5347 +
            (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
               C546 -
           ((C6183 + C6184 + C6185) * C32612 * C32854 +
            (C6186 + C6187 + C6188) * C32612 * C5348 +
            (C5354 * C332 + C5664 + C5664 + C32845 * C352 + C5352 * C333 +
             C5665 + C5665 + C32870 * C353 + C5350 * C334 + C5666 + C5666 +
             C32883 * C354) *
                C32612 * C5347) *
               C547) *
              C452 +
          (((C6188 + C6187 + C6186) * C32612 * C5347 +
            (C6185 + C6184 + C6183) * C32612 * C5348 +
            (C5350 * C1630 + C6168 + C6168 + C32883 * C1636 + C5352 * C1631 +
             C6169 + C6169 + C32870 * C1637 + C5354 * C1632 + C6170 + C6170 +
             C32845 * C1638) *
                C32612 * C32854) *
               C547 -
           ((C5542 + C5543 + C5544) * C32612 * C32854 +
            (C5541 + C5540 + C5539) * C32612 * C5348 +
            (C5538 + C5537 + C5536) * C32612 * C5347) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
            C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
               C546 -
           (C6761 * C6255 + C6762 * C6254 + C6763 * C6253 + C6764 * C6252 +
            (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32612 * C6251) *
               C547) *
              C452 +
          ((C6764 * C6251 + C6763 * C6252 + C6762 * C6253 + C6761 * C6254 +
            (C6256 * C6736 + C6748 + C6748 + C32507 * C6738) * C32612 * C6255) *
               C547 -
           (C6373 * C6255 + C6372 * C6254 + C6371 * C6253 + C6370 * C6252 +
            C6369 * C6251) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32887 +
             C7165 * C32876 + C7166 * C32857) *
                C5347 +
            (C6994 + C6995 + C7016) * C5348 + C7019 * C32854) *
               C546 -
           ((C7657 + C7658 + C7659) * C32854 + (C7660 + C7661 + C7662) * C5348 +
            (C7169 * C32857 + C7166 * C32876 + C7165 * C32887) * C5347) *
               C547) *
              C452 +
          (((C7662 + C7661 + C7660) * C5347 + (C7659 + C7658 + C7657) * C5348 +
            (C6758 * C32887 + C7015 * C32876 +
             (C6256 * C7653 + C7663 + C7663 + C32507 * C7655) * C32857) *
                C32854) *
               C547 -
           ((C7018 + C7004 + C7005) * C32854 + (C7017 + C6999 + C6998) * C5348 +
            (C7016 + C6995 + C6994) * C5347) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C10454 +
            (C10729 + C10730 + C10731) * C10455 + C10739 * C32857) *
               C32600 * C546 -
           ((C10735 + C10736 + C10737) * C32857 +
            (C10734 + C10733 + C10732) * C10455 +
            (C10731 + C10730 + C10729) * C10454) *
               C32600 * C547) *
              C452 +
          (((C6188 + C6187 + C6186) * C10454 +
            (C11229 + C11230 + C11231) * C10455 +
            (C5350 * C2565 + C11220 + C11220 + C32883 * C2571 + C5352 * C2566 +
             C11221 + C11221 + C32870 * C2572 + C5354 * C2567 + C11222 +
             C11222 + C32845 * C2573) *
                C32857) *
               C32600 * C547 -
           ((C11231 + C11230 + C11229) * C32857 +
            (C6186 + C6187 + C6188) * C10455 +
            (C5538 + C5537 + C5536) * C10454) *
               C32600 * C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C10454 +
             C7165 * C10455 + C7166 * C32857) *
                C32886 +
            (C11452 + C11453 + C11454) * C32874 + C11462 * C32854) *
               C546 -
           ((C12017 + C12018 + C12019) * C32854 +
            (C12020 + C12021 + C12022) * C32874 +
            (C7169 * C32857 + C7166 * C10455 + C7165 * C10454) * C32886) *
               C547) *
              C452 +
          (((C12022 + C12021 + C12020) * C32886 +
            (C12019 + C12018 + C12017) * C32874 +
            (C6758 * C10454 + C7015 * C10455 +
             (C6256 * C7653 + C7663 + C7663 + C32507 * C7655) * C32857) *
                C32854) *
               C547 -
           ((C11458 + C11459 + C11460) * C32854 +
            (C11457 + C11456 + C11455) * C32874 +
            (C11454 + C11453 + C11452) * C32886) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C12084 +
            C7165 * C12085 + C7166 * C12086 + C7169 * C12087 +
            C12233 * C12088) *
               C32600 * C546 -
           (C12234 * C12088 + C12233 * C12087 + C7169 * C12086 +
            C7166 * C12085 + C7165 * C12084) *
               C32600 * C547) *
              C452 +
          ((C6760 * C12084 + C7013 * C12085 + C7168 * C12086 + C12507 * C12087 +
            (C6256 * C12498 + C12504 + C12504 + C32507 * C12500) * C12088) *
               C32600 * C547 -
           (C12507 * C12088 + C7168 * C12087 + C7013 * C12086 + C6760 * C12085 +
            C6364 * C12084) *
               C32600 * C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[62] +=
        (-0.25 * std::pow(Pi, 2.5) *
             ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
               C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
               C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
               C149 + C105 * C141) *
                  C32612 * C32600 * C32570 * C32556 * C110 -
              (C121 * C128 + C150 + C150 + C105 * C142 + C119 * C127 + C151 +
               C151 + C104 * C141 + C117 * C126 + C152 + C152 + C103 * C140 +
               C115 * C125 + C153 + C153 + C102 * C139 + C113 * C124 + C154 +
               C154 + C101 * C138) *
                  C32612 * C32600 * C32570 * C32556 * C111 +
              (C113 * C125 + C155 + C155 + C101 * C139 + C115 * C126 + C156 +
               C156 + C102 * C140 + C117 * C127 + C157 + C157 + C103 * C141 +
               C119 * C128 + C158 + C158 + C104 * C142 + C121 * C129 + C159 +
               C159 + C105 * C143) *
                  C32612 * C32600 * C32570 * C32556 * C112) -
         0.25 * std::pow(Pi, 2.5) *
             ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
               C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
               C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
               C149 + C105 * C141) *
                  C32612 * C32600 * C32570 * C221 -
              (C121 * C225 + C256 + C256 + C105 * C245 + C119 * C226 + C257 +
               C257 + C104 * C246 + C117 * C227 + C258 + C258 + C103 * C247 +
               C115 * C228 + C259 + C259 + C102 * C248 + C113 * C229 + C260 +
               C260 + C101 * C249) *
                  C32612 * C32600 * C32570 * C222 +
              (C113 * C230 + C261 + C261 + C101 * C250 + C115 * C231 + C262 +
               C262 + C102 * C251 + C117 * C232 + C263 + C263 + C103 * C252 +
               C119 * C233 + C264 + C264 + C104 * C253 + C121 * C234 + C265 +
               C265 + C105 * C254) *
                  C32612 * C32600 * C32570 * C223) *
             C32544 +
         0.5 * std::pow(Pi, 2.5) *
             ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
               C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
               C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
               C149 + C105 * C141) *
                  C32612 * C32600 * C327 -
              (C121 * C330 + C361 + C361 + C105 * C350 + C119 * C331 + C362 +
               C362 + C104 * C351 + C117 * C332 + C363 + C363 + C103 * C352 +
               C115 * C333 + C364 + C364 + C102 * C353 + C113 * C334 + C365 +
               C365 + C101 * C354) *
                  C32612 * C32600 * C328 +
              (C113 * C335 + C366 + C366 + C101 * C355 + C115 * C336 + C367 +
               C367 + C102 * C356 + C117 * C337 + C368 + C368 + C103 * C357 +
               C119 * C338 + C369 + C369 + C104 * C358 + C121 * C339 + C370 +
               C370 + C105 * C359) *
                  C32612 * C32600 * C329) *
             C32556 * C32544 -
         0.25 * std::pow(Pi, 2.5) *
             (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
                C782 + C769 * C138 + C778 * C125 + C783 + C783 +
                C32845 * C139) *
                   C32612 * C32886 +
               (C774 * C229 + C784 + C784 + C768 * C249 + C776 * C228 + C785 +
                C785 + C769 * C248 + C778 * C227 + C786 + C786 +
                C32845 * C247) *
                   C32612 * C32874 +
               (C774 * C230 + C787 + C787 + C768 * C250 + C776 * C231 + C788 +
                C788 + C769 * C251 + C778 * C232 + C789 + C789 +
                C32845 * C252) *
                   C32612 * C32854) *
                  C32570 * C32556 * C110 -
              ((C778 * C233 + C790 + C790 + C32845 * C253 + C776 * C232 + C791 +
                C791 + C769 * C252 + C774 * C231 + C792 + C792 + C768 * C251) *
                   C32612 * C32854 +
               (C778 * C226 + C793 + C793 + C32845 * C246 + C776 * C227 + C794 +
                C794 + C769 * C247 + C774 * C228 + C795 + C795 + C768 * C248) *
                   C32612 * C32874 +
               (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
                C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                   C32612 * C32886) *
                  C32570 * C32556 * C111 +
              ((C774 * C125 + C799 + C799 + C768 * C139 + C776 * C126 + C800 +
                C800 + C769 * C140 + C778 * C127 + C801 + C801 +
                C32845 * C141) *
                   C32612 * C32886 +
               (C774 * C227 + C802 + C802 + C768 * C247 + C776 * C226 + C803 +
                C803 + C769 * C246 + C778 * C225 + C804 + C804 +
                C32845 * C245) *
                   C32612 * C32874 +
               (C774 * C232 + C805 + C805 + C768 * C252 + C776 * C233 + C806 +
                C806 + C769 * C253 + C778 * C234 + C807 + C807 +
                C32845 * C254) *
                   C32612 * C32854) *
                  C32570 * C32556 * C112) -
         0.25 * std::pow(Pi, 2.5) *
             (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
                C782 + C769 * C138 + C778 * C125 + C783 + C783 +
                C32845 * C139) *
                   C32612 * C32886 +
               (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
                  C32570 * C221 -
              ((C984 + C985 + C986) * C32612 * C32854 +
               (C983 + C982 + C981) * C32612 * C32874 +
               (C980 + C979 + C978) * C32612 * C32886) *
                  C32570 * C222 +
              (C989 * C32886 + (C986 + C985 + C984) * C32612 * C32874 +
               (C774 * C920 + C957 + C957 + C768 * C932 + C776 * C921 + C958 +
                C958 + C769 * C933 + C778 * C922 + C959 + C959 +
                C32845 * C934) *
                   C32612 * C32854) *
                  C32570 * C223) *
             C32544 +
         0.5 * std::pow(Pi, 2.5) *
             (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
                C782 + C769 * C138 + C778 * C125 + C783 + C783 +
                C32845 * C139) *
                   C32612 * C32886 +
               (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
                  C327 -
              ((C778 * C1099 + C1127 + C1127 + C32845 * C1117 + C776 * C1100 +
                C1128 + C1128 + C769 * C1118 + C774 * C1101 + C1129 + C1129 +
                C768 * C1119) *
                   C32612 * C32854 +
               (C778 * C640 + C1130 + C1130 + C32845 * C650 + C776 * C639 +
                C1131 + C1131 + C769 * C649 + C774 * C638 + C1132 + C1132 +
                C768 * C648) *
                   C32612 * C32874 +
               (C778 * C332 + C1133 + C1133 + C32845 * C352 + C776 * C333 +
                C1134 + C1134 + C769 * C353 + C774 * C334 + C1135 + C1135 +
                C768 * C354) *
                   C32612 * C32886) *
                  C328 +
              ((C774 * C335 + C1136 + C1136 + C768 * C355 + C776 * C336 +
                C1137 + C1137 + C769 * C356 + C778 * C337 + C1138 + C1138 +
                C32845 * C357) *
                   C32612 * C32886 +
               (C774 * C1102 + C1139 + C1139 + C768 * C1120 + C776 * C1103 +
                C1140 + C1140 + C769 * C1121 + C778 * C1104 + C1141 + C1141 +
                C32845 * C1122) *
                   C32612 * C32874 +
               (C774 * C1105 + C1142 + C1142 + C768 * C1123 + C776 * C1106 +
                C1143 + C1143 + C769 * C1124 + C778 * C1107 + C1144 + C1144 +
                C32845 * C1125) *
                   C32612 * C32854) *
                  C329) *
             C32556 * C32544 +
         0.5 * std::pow(Pi, 2.5) *
             (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
                C782 + C769 * C138 + C778 * C125 + C783 + C783 +
                C32845 * C139) *
                   C32887 +
               (C774 * C334 + C1135 + C1135 + C768 * C354 + C776 * C333 +
                C1134 + C1134 + C769 * C353 + C778 * C332 + C1133 + C1133 +
                C32845 * C352) *
                   C32876 +
               (C774 * C335 + C1136 + C1136 + C768 * C355 + C776 * C336 +
                C1137 + C1137 + C769 * C356 + C778 * C337 + C1138 + C1138 +
                C32845 * C357) *
                   C32857) *
                  C32600 * C32570 * C32556 * C110 -
              ((C778 * C338 + C1786 + C1786 + C32845 * C358 + C776 * C337 +
                C1787 + C1787 + C769 * C357 + C774 * C336 + C1788 + C1788 +
                C768 * C356) *
                   C32857 +
               (C778 * C331 + C1478 + C1478 + C32845 * C351 + C776 * C332 +
                C1477 + C1477 + C769 * C352 + C774 * C333 + C1476 + C1476 +
                C768 * C353) *
                   C32876 +
               (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
                C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                   C32887) *
                  C32600 * C32570 * C32556 * C111 +
              ((C774 * C125 + C799 + C799 + C768 * C139 + C776 * C126 + C800 +
                C800 + C769 * C140 + C778 * C127 + C801 + C801 +
                C32845 * C141) *
                   C32887 +
               (C774 * C332 + C1789 + C1789 + C768 * C352 + C776 * C331 +
                C1790 + C1790 + C769 * C351 + C778 * C330 + C1791 + C1791 +
                C32845 * C350) *
                   C32876 +
               (C774 * C337 + C1792 + C1792 + C768 * C357 + C776 * C338 +
                C1793 + C1793 + C769 * C358 + C778 * C339 + C1794 + C1794 +
                C32845 * C359) *
                   C32857) *
                  C32600 * C32570 * C32556 * C112) +
         0.5 * std::pow(Pi, 2.5) *
             (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
                C782 + C769 * C138 + C778 * C125 + C783 + C783 +
                C32845 * C139) *
                   C32887 +
               (C774 * C334 + C1135 + C1135 + C768 * C354 + C776 * C333 +
                C1134 + C1134 + C769 * C353 + C778 * C332 + C1133 + C1133 +
                C32845 * C352) *
                   C32876 +
               (C774 * C335 + C1136 + C1136 + C768 * C355 + C776 * C336 +
                C1137 + C1137 + C769 * C356 + C778 * C337 + C1138 + C1138 +
                C32845 * C357) *
                   C32857) *
                  C32600 * C32570 * C221 -
              ((C778 * C1104 + C1141 + C1141 + C32845 * C1122 + C776 * C1103 +
                C1140 + C1140 + C769 * C1121 + C774 * C1102 + C1139 + C1139 +
                C768 * C1120) *
                   C32857 +
               (C1670 + C1671 + C1672) * C32876 +
               (C980 + C979 + C978) * C32887) *
                  C32600 * C32570 * C222 +
              (C988 * C32887 + (C1669 + C1668 + C1667) * C32876 +
               (C774 * C1105 + C1142 + C1142 + C768 * C1123 + C776 * C1106 +
                C1143 + C1143 + C769 * C1124 + C778 * C1107 + C1144 + C1144 +
                C32845 * C1125) *
                   C32857) *
                  C32600 * C32570 * C223) *
             C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32887 +
           (C2075 + C2076 + C2077) * C32876 + C2085 * C32857) *
              C32600 * C327 -
          ((C2081 + C2082 + C2083) * C32857 + (C2080 + C2079 + C2078) * C32876 +
           (C2077 + C2076 + C2075) * C32887) *
              C32600 * C328 +
          (C2085 * C32887 + (C2083 + C2082 + C2081) * C32876 +
           (C774 * C2017 + C2054 + C2054 + C768 * C2029 + C776 * C2018 + C2055 +
            C2055 + C769 * C2030 + C778 * C2019 + C2056 + C2056 +
            C32845 * C2031) *
               C32857) *
              C32600 * C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5350 * C229 + C5360 + C5360 + C32883 * C249 + C5352 * C228 +
            C5361 + C5361 + C32870 * C248 + C5354 * C227 + C5362 + C5362 +
            C32845 * C247) *
               C32612 * C5348 +
           (C5350 * C230 + C5363 + C5363 + C32883 * C250 + C5352 * C231 +
            C5364 + C5364 + C32870 * C251 + C5354 * C232 + C5365 + C5365 +
            C32845 * C252) *
               C32612 * C32854) *
              C32570 * C32556 * C110 -
          ((C5354 * C233 + C5366 + C5366 + C32845 * C253 + C5352 * C232 +
            C5367 + C5367 + C32870 * C252 + C5350 * C231 + C5368 + C5368 +
            C32883 * C251) *
               C32612 * C32854 +
           (C5354 * C226 + C5369 + C5369 + C32845 * C246 + C5352 * C227 +
            C5370 + C5370 + C32870 * C247 + C5350 * C228 + C5371 + C5371 +
            C32883 * C248) *
               C32612 * C5348 +
           (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
            C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
            C32883 * C138) *
               C32612 * C5347) *
              C32570 * C32556 * C111 +
          ((C5350 * C125 + C5375 + C5375 + C32883 * C139 + C5352 * C126 +
            C5376 + C5376 + C32870 * C140 + C5354 * C127 + C5377 + C5377 +
            C32845 * C141) *
               C32612 * C5347 +
           (C5350 * C227 + C5378 + C5378 + C32883 * C247 + C5352 * C226 +
            C5379 + C5379 + C32870 * C246 + C5354 * C225 + C5380 + C5380 +
            C32845 * C245) *
               C32612 * C5348 +
           (C5350 * C232 + C5381 + C5381 + C32883 * C252 + C5352 * C233 +
            C5382 + C5382 + C32870 * C253 + C5354 * C234 + C5383 + C5383 +
            C32845 * C254) *
               C32612 * C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
              C32570 * C221 -
          ((C5542 + C5543 + C5544) * C32612 * C32854 +
           (C5541 + C5540 + C5539) * C32612 * C5348 +
           (C5538 + C5537 + C5536) * C32612 * C5347) *
              C32570 * C222 +
          (C5547 * C5347 + (C5544 + C5543 + C5542) * C32612 * C5348 +
           (C5350 * C920 + C5515 + C5515 + C32883 * C932 + C5352 * C921 +
            C5516 + C5516 + C32870 * C933 + C5354 * C922 + C5517 + C5517 +
            C32845 * C934) *
               C32612 * C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
              C327 -
          ((C5354 * C1099 + C5658 + C5658 + C32845 * C1117 + C5352 * C1100 +
            C5659 + C5659 + C32870 * C1118 + C5350 * C1101 + C5660 + C5660 +
            C32883 * C1119) *
               C32612 * C32854 +
           (C5354 * C640 + C5661 + C5661 + C32845 * C650 + C5352 * C639 +
            C5662 + C5662 + C32870 * C649 + C5350 * C638 + C5663 + C5663 +
            C32883 * C648) *
               C32612 * C5348 +
           (C5354 * C332 + C5664 + C5664 + C32845 * C352 + C5352 * C333 +
            C5665 + C5665 + C32870 * C353 + C5350 * C334 + C5666 + C5666 +
            C32883 * C354) *
               C32612 * C5347) *
              C328 +
          ((C5350 * C335 + C5667 + C5667 + C32883 * C355 + C5352 * C336 +
            C5668 + C5668 + C32870 * C356 + C5354 * C337 + C5669 + C5669 +
            C32845 * C357) *
               C32612 * C5347 +
           (C5350 * C1102 + C5670 + C5670 + C32883 * C1120 + C5352 * C1103 +
            C5671 + C5671 + C32870 * C1121 + C5354 * C1104 + C5672 + C5672 +
            C32845 * C1122) *
               C32612 * C5348 +
           (C5350 * C1105 + C5673 + C5673 + C32883 * C1123 + C5352 * C1106 +
            C5674 + C5674 + C32870 * C1124 + C5354 * C1107 + C5675 + C5675 +
            C32845 * C1125) *
               C32612 * C32854) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           (C6256 * C229 + C6260 + C6260 + C32507 * C249) * C32612 * C6252 +
           (C6256 * C230 + C6261 + C6261 + C32507 * C250) * C32612 * C6253 +
           (C6256 * C919 + C6262 + C6262 + C32507 * C931) * C32612 * C6254 +
           (C6256 * C920 + C6263 + C6263 + C32507 * C932) * C32612 * C6255) *
              C32570 * C32556 * C110 -
          ((C6256 * C921 + C6264 + C6264 + C32507 * C933) * C32612 * C6255 +
           (C6256 * C918 + C6265 + C6265 + C32507 * C930) * C32612 * C6254 +
           (C6256 * C231 + C6266 + C6266 + C32507 * C251) * C32612 * C6253 +
           (C6256 * C228 + C6267 + C6267 + C32507 * C248) * C32612 * C6252 +
           (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32612 * C6251) *
              C32570 * C32556 * C111 +
          ((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32612 * C6251 +
           (C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32612 * C6252 +
           (C6256 * C232 + C6271 + C6271 + C32507 * C252) * C32612 * C6253 +
           (C6256 * C917 + C6272 + C6272 + C32507 * C929) * C32612 * C6254 +
           (C6256 * C922 + C6273 + C6273 + C32507 * C934) * C32612 * C6255) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
              C32570 * C221 -
          (C6373 * C6255 + C6372 * C6254 + C6371 * C6253 + C6370 * C6252 +
           C6369 * C6251) *
              C32570 * C222 +
          (C6370 * C6251 + C6371 * C6252 + C6372 * C6253 + C6373 * C6254 +
           (C6256 * C6336 + C6353 + C6353 + C32507 * C6340) * C32612 * C6255) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
              C327 -
          ((C6256 * C6435 + C6445 + C6445 + C32507 * C6441) * C32612 * C6255 +
           (C6256 * C1630 + C6446 + C6446 + C32507 * C1636) * C32612 * C6254 +
           (C6256 * C1101 + C6447 + C6447 + C32507 * C1119) * C32612 * C6253 +
           (C6256 * C638 + C6448 + C6448 + C32507 * C648) * C32612 * C6252 +
           (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32612 * C6251) *
              C328 +
          ((C6256 * C335 + C6450 + C6450 + C32507 * C355) * C32612 * C6251 +
           (C6256 * C1102 + C6451 + C6451 + C32507 * C1120) * C32612 * C6252 +
           (C6256 * C1105 + C6452 + C6452 + C32507 * C1123) * C32612 * C6253 +
           (C6256 * C6436 + C6453 + C6453 + C32507 * C6442) * C32612 * C6254 +
           (C6256 * C6437 + C6454 + C6454 + C32507 * C6443) * C32612 * C6255) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32887 +
            (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32876 +
            (C6256 * C335 + C6450 + C6450 + C32507 * C355) * C32857) *
               C5347 +
           (C6364 * C32887 + C6760 * C32876 +
            (C6256 * C1102 + C6451 + C6451 + C32507 * C1120) * C32857) *
               C5348 +
           (C6365 * C32887 + C6759 * C32876 +
            (C6256 * C1105 + C6452 + C6452 + C32507 * C1123) * C32857) *
               C32854) *
              C32570 * C32556 * C110 -
          (((C6256 * C1106 + C6875 + C6875 + C32507 * C1124) * C32857 +
            (C6256 * C1100 + C6652 + C6652 + C32507 * C1118) * C32876 +
            C6558 * C32887) *
               C32854 +
           ((C6256 * C1103 + C6876 + C6876 + C32507 * C1121) * C32857 +
            (C6256 * C639 + C6651 + C6651 + C32507 * C649) * C32876 +
            C6557 * C32887) *
               C5348 +
           ((C6256 * C336 + C6877 + C6877 + C32507 * C356) * C32857 +
            (C6256 * C333 + C6650 + C6650 + C32507 * C353) * C32876 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32887) *
               C5347) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32887 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C32876 +
            (C6256 * C337 + C6879 + C6879 + C32507 * C357) * C32857) *
               C5347 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32887 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C32876 +
            (C6256 * C1104 + C6881 + C6881 + C32507 * C1122) * C32857) *
               C5348 +
           ((C6256 * C232 + C6271 + C6271 + C32507 * C252) * C32887 +
            (C6256 * C1099 + C6882 + C6882 + C32507 * C1117) * C32876 +
            (C6256 * C1107 + C6883 + C6883 + C32507 * C1125) * C32857) *
               C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32887 +
            (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32876 +
            (C6256 * C335 + C6450 + C6450 + C32507 * C355) * C32857) *
               C5347 +
           (C6994 + C6995 + C7016) * C5348 + C7019 * C32854) *
              C32570 * C221 -
          ((C7018 + C7004 + C7005) * C32854 + (C7017 + C6999 + C6998) * C5348 +
           (C7016 + C6995 + C6994) * C5347) *
              C32570 * C222 +
          (C7019 * C5347 + (C7005 + C7004 + C7018) * C5348 +
           (C6367 * C32887 + C6757 * C32876 +
            (C6256 * C6437 + C6454 + C6454 + C32507 * C6443) * C32857) *
               C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32887 +
            C7165 * C32876 + C7166 * C32857) *
               C5347 +
           (C6994 + C6995 + C7016) * C5348 + C7019 * C32854) *
              C327 -
          ((C7167 * C32857 + C7014 * C32876 + C6759 * C32887) * C32854 +
           (C7168 * C32857 + C7013 * C32876 + C6760 * C32887) * C5348 +
           (C7169 * C32857 + C7166 * C32876 + C7165 * C32887) * C5347) *
              C328 +
          ((C7166 * C32887 + C7169 * C32876 +
            (C6256 * C2017 + C7152 + C7152 + C32507 * C2029) * C32857) *
               C5347 +
           (C7013 * C32887 + C7168 * C32876 +
            (C6256 * C7130 + C7153 + C7153 + C32507 * C7136) * C32857) *
               C5348 +
           (C7014 * C32887 + C7167 * C32876 +
            (C6256 * C7131 + C7154 + C7154 + C32507 * C7137) * C32857) *
               C32854) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C10454 +
           (C5350 * C334 + C5666 + C5666 + C32883 * C354 + C5352 * C333 +
            C5665 + C5665 + C32870 * C353 + C5354 * C332 + C5664 + C5664 +
            C32845 * C352) *
               C10455 +
           (C5350 * C335 + C5667 + C5667 + C32883 * C355 + C5352 * C336 +
            C5668 + C5668 + C32870 * C356 + C5354 * C337 + C5669 + C5669 +
            C32845 * C357) *
               C32857) *
              C32600 * C32570 * C32556 * C110 -
          ((C5354 * C338 + C10458 + C10458 + C32845 * C358 + C5352 * C337 +
            C10459 + C10459 + C32870 * C357 + C5350 * C336 + C10460 + C10460 +
            C32883 * C356) *
               C32857 +
           (C5354 * C331 + C6003 + C6003 + C32845 * C351 + C5352 * C332 +
            C6002 + C6002 + C32870 * C352 + C5350 * C333 + C6001 + C6001 +
            C32883 * C353) *
               C10455 +
           (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
            C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
            C32883 * C138) *
               C10454) *
              C32600 * C32570 * C32556 * C111 +
          ((C5350 * C125 + C5375 + C5375 + C32883 * C139 + C5352 * C126 +
            C5376 + C5376 + C32870 * C140 + C5354 * C127 + C5377 + C5377 +
            C32845 * C141) *
               C10454 +
           (C5350 * C332 + C10461 + C10461 + C32883 * C352 + C5352 * C331 +
            C10462 + C10462 + C32870 * C351 + C5354 * C330 + C10463 + C10463 +
            C32845 * C350) *
               C10455 +
           (C5350 * C337 + C10464 + C10464 + C32883 * C357 + C5352 * C338 +
            C10465 + C10465 + C32870 * C358 + C5354 * C339 + C10466 + C10466 +
            C32845 * C359) *
               C32857) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C10454 +
           (C5350 * C334 + C5666 + C5666 + C32883 * C354 + C5352 * C333 +
            C5665 + C5665 + C32870 * C353 + C5354 * C332 + C5664 + C5664 +
            C32845 * C352) *
               C10455 +
           (C5350 * C335 + C5667 + C5667 + C32883 * C355 + C5352 * C336 +
            C5668 + C5668 + C32870 * C356 + C5354 * C337 + C5669 + C5669 +
            C32845 * C357) *
               C32857) *
              C32600 * C32570 * C221 -
          ((C5354 * C1104 + C5672 + C5672 + C32845 * C1122 + C5352 * C1103 +
            C5671 + C5671 + C32870 * C1121 + C5350 * C1102 + C5670 + C5670 +
            C32883 * C1120) *
               C32857 +
           (C6186 + C6187 + C6188) * C10455 +
           (C5538 + C5537 + C5536) * C10454) *
              C32600 * C32570 * C222 +
          (C5546 * C10454 + (C6185 + C6184 + C6183) * C10455 +
           (C5350 * C1105 + C5673 + C5673 + C32883 * C1123 + C5352 * C1106 +
            C5674 + C5674 + C32870 * C1124 + C5354 * C1107 + C5675 + C5675 +
            C32845 * C1125) *
               C32857) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C10454 +
           (C10729 + C10730 + C10731) * C10455 + C10739 * C32857) *
              C32600 * C327 -
          ((C10735 + C10736 + C10737) * C32857 +
           (C10734 + C10733 + C10732) * C10455 +
           (C10731 + C10730 + C10729) * C10454) *
              C32600 * C328 +
          (C10739 * C10454 + (C10737 + C10736 + C10735) * C10455 +
           (C5350 * C2017 + C10708 + C10708 + C32883 * C2029 + C5352 * C2018 +
            C10709 + C10709 + C32870 * C2030 + C5354 * C2019 + C10710 + C10710 +
            C32845 * C2031) *
               C32857) *
              C32600 * C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C10454 +
            C7165 * C10455 + C7166 * C32857) *
               C32886 +
           (C6364 * C10454 + C6760 * C10455 + C7013 * C32857) * C32874 +
           (C6365 * C10454 + C6759 * C10455 + C7014 * C32857) * C32854) *
              C32570 * C32556 * C110 -
          ((C7341 * C32857 + C7340 * C10455 + C6558 * C10454) * C32854 +
           (C7339 * C32857 + C7338 * C10455 + C6557 * C10454) * C32874 +
           (C7507 * C32857 + C7506 * C10455 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C10454) *
               C32886) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C10454 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C10455 +
            (C6256 * C337 + C6879 + C6879 + C32507 * C357) * C32857) *
               C32886 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C10454 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C10455 +
            (C6256 * C1104 + C6881 + C6881 + C32507 * C1122) * C32857) *
               C32874 +
           ((C6256 * C232 + C6271 + C6271 + C32507 * C252) * C10454 +
            (C6256 * C1099 + C6882 + C6882 + C32507 * C1117) * C10455 +
            (C6256 * C1107 + C6883 + C6883 + C32507 * C1125) * C32857) *
               C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C10454 +
            C7165 * C10455 + C7166 * C32857) *
               C32886 +
           (C11452 + C11453 + C11454) * C32874 + C11462 * C32854) *
              C32570 * C221 -
          ((C11458 + C11459 + C11460) * C32854 +
           (C11457 + C11456 + C11455) * C32874 +
           (C11454 + C11453 + C11452) * C32886) *
              C32570 * C222 +
          (C11462 * C32886 + (C11460 + C11459 + C11458) * C32874 +
           (C6367 * C10454 + C6757 * C10455 +
            (C6256 * C6437 + C6454 + C6454 + C32507 * C6443) * C32857) *
               C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C10454 +
            C7165 * C10455 + C7166 * C32857) *
               C32886 +
           (C11452 + C11453 + C11454) * C32874 + C11462 * C32854) *
              C327 -
          ((C7167 * C32857 + C7014 * C10455 + C6759 * C10454) * C32854 +
           (C7168 * C32857 + C7013 * C10455 + C6760 * C10454) * C32874 +
           (C7169 * C32857 + C7166 * C10455 + C7165 * C10454) * C32886) *
              C328 +
          ((C7166 * C10454 + C7169 * C10455 +
            (C6256 * C2017 + C7152 + C7152 + C32507 * C2029) * C32857) *
               C32886 +
           (C7013 * C10454 + C7168 * C10455 +
            (C6256 * C7130 + C7153 + C7153 + C32507 * C7136) * C32857) *
               C32874 +
           (C7014 * C10454 + C7167 * C10455 +
            (C6256 * C7131 + C7154 + C7154 + C32507 * C7137) * C32857) *
               C32854) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C12084 +
           C7165 * C12085 + C7166 * C12086 + C7169 * C12087 +
           (C6256 * C2017 + C7152 + C7152 + C32507 * C2029) * C12088) *
              C32600 * C32570 * C32556 * C110 -
          ((C6256 * C2018 + C12090 + C12090 + C32507 * C2030) * C12088 +
           (C6256 * C2015 + C7499 + C7499 + C32507 * C2027) * C12087 +
           C7507 * C12086 + C7506 * C12085 +
           (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C12084) *
              C32600 * C32570 * C32556 * C111 +
          ((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C12084 +
           (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C12085 +
           (C6256 * C337 + C6879 + C6879 + C32507 * C357) * C12086 +
           (C6256 * C2014 + C12091 + C12091 + C32507 * C2026) * C12087 +
           (C6256 * C2019 + C12092 + C12092 + C32507 * C2031) * C12088) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C12084 +
           C7165 * C12085 + C7166 * C12086 + C7169 * C12087 +
           (C6256 * C2017 + C7152 + C7152 + C32507 * C2029) * C12088) *
              C32600 * C32570 * C221 -
          ((C6256 * C7130 + C7153 + C7153 + C32507 * C7136) * C12088 +
           C7168 * C12087 + C7013 * C12086 + C6760 * C12085 + C6364 * C12084) *
              C32600 * C32570 * C222 +
          (C6365 * C12084 + C6759 * C12085 + C7014 * C12086 + C7167 * C12087 +
           (C6256 * C7131 + C7154 + C7154 + C32507 * C7137) * C12088) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C12084 +
           C7165 * C12085 + C7166 * C12086 + C7169 * C12087 + C12233 * C12088) *
              C32600 * C327 -
          (C12234 * C12088 + C12233 * C12087 + C7169 * C12086 + C7166 * C12085 +
           C7165 * C12084) *
              C32600 * C328 +
          (C7166 * C12084 + C7169 * C12085 + C12233 * C12086 + C12234 * C12087 +
           (C6256 * C12217 + C12228 + C12228 + C32507 * C12221) * C12088) *
              C32600 * C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[63] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
                C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
                C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
                C149 + C105 * C141) *
                   C32612 * C32600 * C546 -
               (C121 * C330 + C361 + C361 + C105 * C350 + C119 * C331 + C362 +
                C362 + C104 * C351 + C117 * C332 + C363 + C363 + C103 * C352 +
                C115 * C333 + C364 + C364 + C102 * C353 + C113 * C334 + C365 +
                C365 + C101 * C354) *
                   C32612 * C32600 * C547) *
                  C32556 * C454 +
              ((C113 * C333 + C552 + C552 + C101 * C353 + C115 * C332 + C553 +
                C553 + C102 * C352 + C117 * C331 + C554 + C554 + C103 * C351 +
                C119 * C330 + C555 + C555 + C104 * C350 + C121 * C548 + C556 +
                C556 + C105 * C550) *
                   C32612 * C32600 * C547 -
               (C121 * C128 + C150 + C150 + C105 * C142 + C119 * C127 + C151 +
                C151 + C104 * C141 + C117 * C126 + C152 + C152 + C103 * C140 +
                C115 * C125 + C153 + C153 + C102 * C139 + C113 * C124 + C154 +
                C154 + C101 * C138) *
                   C32612 * C32600 * C546) *
                  C32556 * C455) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
                 C782 + C769 * C138 + C778 * C125 + C783 + C783 +
                 C32845 * C139) *
                    C32612 * C32886 +
                (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
                   C546 -
               ((C778 * C1099 + C1127 + C1127 + C32845 * C1117 + C776 * C1100 +
                 C1128 + C1128 + C769 * C1118 + C774 * C1101 + C1129 + C1129 +
                 C768 * C1119) *
                    C32612 * C32854 +
                (C778 * C640 + C1130 + C1130 + C32845 * C650 + C776 * C639 +
                 C1131 + C1131 + C769 * C649 + C774 * C638 + C1132 + C1132 +
                 C768 * C648) *
                    C32612 * C32874 +
                (C778 * C332 + C1133 + C1133 + C32845 * C352 + C776 * C333 +
                 C1134 + C1134 + C769 * C353 + C774 * C334 + C1135 + C1135 +
                 C768 * C354) *
                    C32612 * C32886) *
                   C547) *
                  C32556 * C454 +
              (((C774 * C333 + C1476 + C1476 + C768 * C353 + C776 * C332 +
                 C1477 + C1477 + C769 * C352 + C778 * C331 + C1478 + C1478 +
                 C32845 * C351) *
                    C32612 * C32886 +
                (C774 * C639 + C1479 + C1479 + C768 * C649 + C776 * C640 +
                 C1480 + C1480 + C769 * C650 + C778 * C641 + C1481 + C1481 +
                 C32845 * C651) *
                    C32612 * C32874 +
                (C774 * C1100 + C1482 + C1482 + C768 * C1118 + C776 * C1099 +
                 C1483 + C1483 + C769 * C1117 + C778 * C1472 + C1484 + C1484 +
                 C32845 * C1474) *
                    C32612 * C32854) *
                   C547 -
               ((C1326 + C1325 + C1324) * C32612 * C32854 +
                (C1323 + C1322 + C1321) * C32612 * C32874 +
                (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 +
                 C797 + C797 + C769 * C139 + C774 * C124 + C798 + C798 +
                 C768 * C138) *
                    C32612 * C32886) *
                   C546) *
                  C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32887 +
            (C2075 + C2076 + C2077) * C32876 + C2085 * C32857) *
               C32600 * C546 -
           ((C2081 + C2082 + C2083) * C32857 +
            (C2080 + C2079 + C2078) * C32876 +
            (C2077 + C2076 + C2075) * C32887) *
               C32600 * C547) *
              C32556 * C454 +
          (((C2414 + C2415 + C2416) * C32887 +
            (C2417 + C2418 + C2419) * C32876 +
            (C774 * C2015 + C2399 + C2399 + C768 * C2027 + C776 * C2014 +
             C2400 + C2400 + C769 * C2026 + C778 * C2383 + C2401 + C2401 +
             C32845 * C2385) *
                C32857) *
               C32600 * C547 -
           ((C2419 + C2418 + C2417) * C32857 +
            (C2416 + C2415 + C2414) * C32876 +
            (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
             C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                C32887) *
               C32600 * C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C32612 * C5347 +
            (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
               C546 -
           ((C5354 * C1099 + C5658 + C5658 + C32845 * C1117 + C5352 * C1100 +
             C5659 + C5659 + C32870 * C1118 + C5350 * C1101 + C5660 + C5660 +
             C32883 * C1119) *
                C32612 * C32854 +
            (C5354 * C640 + C5661 + C5661 + C32845 * C650 + C5352 * C639 +
             C5662 + C5662 + C32870 * C649 + C5350 * C638 + C5663 + C5663 +
             C32883 * C648) *
                C32612 * C5348 +
            (C5354 * C332 + C5664 + C5664 + C32845 * C352 + C5352 * C333 +
             C5665 + C5665 + C32870 * C353 + C5350 * C334 + C5666 + C5666 +
             C32883 * C354) *
                C32612 * C5347) *
               C547) *
              C32556 * C454 +
          (((C5350 * C333 + C6001 + C6001 + C32883 * C353 + C5352 * C332 +
             C6002 + C6002 + C32870 * C352 + C5354 * C331 + C6003 + C6003 +
             C32845 * C351) *
                C32612 * C5347 +
            (C5350 * C639 + C6004 + C6004 + C32883 * C649 + C5352 * C640 +
             C6005 + C6005 + C32870 * C650 + C5354 * C641 + C6006 + C6006 +
             C32845 * C651) *
                C32612 * C5348 +
            (C5350 * C1100 + C6007 + C6007 + C32883 * C1118 + C5352 * C1099 +
             C6008 + C6008 + C32870 * C1117 + C5354 * C1472 + C6009 + C6009 +
             C32845 * C1474) *
                C32612 * C32854) *
               C547 -
           ((C5854 + C5853 + C5852) * C32612 * C32854 +
            (C5851 + C5850 + C5849) * C32612 * C5348 +
            (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
             C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
             C32883 * C138) *
                C32612 * C5347) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
            C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
               C546 -
           ((C6256 * C6435 + C6445 + C6445 + C32507 * C6441) * C32612 * C6255 +
            (C6256 * C1630 + C6446 + C6446 + C32507 * C1636) * C32612 * C6254 +
            (C6256 * C1101 + C6447 + C6447 + C32507 * C1119) * C32612 * C6253 +
            (C6256 * C638 + C6448 + C6448 + C32507 * C648) * C32612 * C6252 +
            (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32612 * C6251) *
               C547) *
              C32556 * C454 +
          (((C6256 * C333 + C6650 + C6650 + C32507 * C353) * C32612 * C6251 +
            (C6256 * C639 + C6651 + C6651 + C32507 * C649) * C32612 * C6252 +
            (C6256 * C1100 + C6652 + C6652 + C32507 * C1118) * C32612 * C6253 +
            (C6256 * C1631 + C6653 + C6653 + C32507 * C1637) * C32612 * C6254 +
            (C6256 * C6646 + C6654 + C6654 + C32507 * C6648) * C32612 * C6255) *
               C547 -
           (C6564 * C6255 + C6563 * C6254 + C6562 * C6253 + C6561 * C6252 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32612 * C6251) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32887 +
             C7165 * C32876 + C7166 * C32857) *
                C5347 +
            (C6994 + C6995 + C7016) * C5348 + C7019 * C32854) *
               C546 -
           ((C7167 * C32857 + C7014 * C32876 + C6759 * C32887) * C32854 +
            (C7168 * C32857 + C7013 * C32876 + C6760 * C32887) * C5348 +
            (C7169 * C32857 + C7166 * C32876 + C7165 * C32887) * C5347) *
               C547) *
              C32556 * C454 +
          (((C7506 * C32887 + C7507 * C32876 +
             (C6256 * C2015 + C7499 + C7499 + C32507 * C2027) * C32857) *
                C5347 +
            (C7338 * C32887 + C7339 * C32876 +
             (C6256 * C2566 + C7500 + C7500 + C32507 * C2572) * C32857) *
                C5348 +
            (C7340 * C32887 + C7341 * C32876 +
             (C6256 * C7491 + C7501 + C7501 + C32507 * C7493) * C32857) *
                C32854) *
               C547 -
           ((C7345 + C7344 + C7324) * C32854 + (C7343 + C7342 + C7319) * C5348 +
            (C7507 * C32857 + C7506 * C32876 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32887) *
                C5347) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C10454 +
            (C10729 + C10730 + C10731) * C10455 + C10739 * C32857) *
               C32600 * C546 -
           ((C10735 + C10736 + C10737) * C32857 +
            (C10734 + C10733 + C10732) * C10455 +
            (C10731 + C10730 + C10729) * C10454) *
               C32600 * C547) *
              C32556 * C454 +
          (((C11062 + C11063 + C11064) * C10454 +
            (C11065 + C11066 + C11067) * C10455 +
            (C5350 * C2015 + C11047 + C11047 + C32883 * C2027 + C5352 * C2014 +
             C11048 + C11048 + C32870 * C2026 + C5354 * C2383 + C11049 +
             C11049 + C32845 * C2385) *
                C32857) *
               C32600 * C547 -
           ((C11067 + C11066 + C11065) * C32857 +
            (C11064 + C11063 + C11062) * C10455 +
            (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
             C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
             C32883 * C138) *
                C10454) *
               C32600 * C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C10454 +
             C7165 * C10455 + C7166 * C32857) *
                C32886 +
            (C11452 + C11453 + C11454) * C32874 + C11462 * C32854) *
               C546 -
           ((C7167 * C32857 + C7014 * C10455 + C6759 * C10454) * C32854 +
            (C7168 * C32857 + C7013 * C10455 + C6760 * C10454) * C32874 +
            (C7169 * C32857 + C7166 * C10455 + C7165 * C10454) * C32886) *
               C547) *
              C32556 * C454 +
          (((C7506 * C10454 + C7507 * C10455 +
             (C6256 * C2015 + C7499 + C7499 + C32507 * C2027) * C32857) *
                C32886 +
            (C7338 * C10454 + C7339 * C10455 +
             (C6256 * C2566 + C7500 + C7500 + C32507 * C2572) * C32857) *
                C32874 +
            (C7340 * C10454 + C7341 * C10455 +
             (C6256 * C7491 + C7501 + C7501 + C32507 * C7493) * C32857) *
                C32854) *
               C547 -
           ((C11724 + C11723 + C11722) * C32854 +
            (C11721 + C11720 + C11719) * C32874 +
            (C7507 * C32857 + C7506 * C10455 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C10454) *
                C32886) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C12084 +
            C7165 * C12085 + C7166 * C12086 + C7169 * C12087 +
            C12233 * C12088) *
               C32600 * C546 -
           (C12234 * C12088 + C12233 * C12087 + C7169 * C12086 +
            C7166 * C12085 + C7165 * C12084) *
               C32600 * C547) *
              C32556 * C454 +
          ((C7506 * C12084 + C7507 * C12085 + C12415 * C12086 +
            C12416 * C12087 +
            (C6256 * C12402 + C12410 + C12410 + C32507 * C12404) * C12088) *
               C32600 * C547 -
           (C12416 * C12088 + C12415 * C12087 + C7507 * C12086 +
            C7506 * C12085 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C12084) *
               C32600 * C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[64] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 + C146 +
           C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 + C119 * C126 +
           C148 + C148 + C104 * C140 + C121 * C127 + C149 + C149 +
           C105 * C141) *
              C32612 * C32600 * C32570 * C32556 * C110 -
          (C121 * C128 + C150 + C150 + C105 * C142 + C119 * C127 + C151 + C151 +
           C104 * C141 + C117 * C126 + C152 + C152 + C103 * C140 + C115 * C125 +
           C153 + C153 + C102 * C139 + C113 * C124 + C154 + C154 +
           C101 * C138) *
              C32612 * C32600 * C32570 * C32556 * C111 +
          (C113 * C125 + C155 + C155 + C101 * C139 + C115 * C126 + C156 + C156 +
           C102 * C140 + C117 * C127 + C157 + C157 + C103 * C141 + C119 * C128 +
           C158 + C158 + C104 * C142 + C121 * C129 + C159 + C159 +
           C105 * C143) *
              C32612 * C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 + C146 +
           C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 + C119 * C126 +
           C148 + C148 + C104 * C140 + C121 * C127 + C149 + C149 +
           C105 * C141) *
              C32612 * C32600 * C32570 * C221 -
          (C121 * C225 + C256 + C256 + C105 * C245 + C119 * C226 + C257 + C257 +
           C104 * C246 + C117 * C227 + C258 + C258 + C103 * C247 + C115 * C228 +
           C259 + C259 + C102 * C248 + C113 * C229 + C260 + C260 +
           C101 * C249) *
              C32612 * C32600 * C32570 * C222 +
          (C113 * C230 + C261 + C261 + C101 * C250 + C115 * C231 + C262 + C262 +
           C102 * C251 + C117 * C232 + C263 + C263 + C103 * C252 + C119 * C233 +
           C264 + C264 + C104 * C253 + C121 * C234 + C265 + C265 +
           C105 * C254) *
              C32612 * C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32612 * C32886 +
           (C774 * C229 + C784 + C784 + C768 * C249 + C776 * C228 + C785 +
            C785 + C769 * C248 + C778 * C227 + C786 + C786 + C32845 * C247) *
               C32612 * C32874 +
           (C774 * C230 + C787 + C787 + C768 * C250 + C776 * C231 + C788 +
            C788 + C769 * C251 + C778 * C232 + C789 + C789 + C32845 * C252) *
               C32612 * C32854) *
              C32570 * C32556 * C110 -
          ((C778 * C233 + C790 + C790 + C32845 * C253 + C776 * C232 + C791 +
            C791 + C769 * C252 + C774 * C231 + C792 + C792 + C768 * C251) *
               C32612 * C32854 +
           (C778 * C226 + C793 + C793 + C32845 * C246 + C776 * C227 + C794 +
            C794 + C769 * C247 + C774 * C228 + C795 + C795 + C768 * C248) *
               C32612 * C32874 +
           (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
            C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
               C32612 * C32886) *
              C32570 * C32556 * C111 +
          ((C774 * C125 + C799 + C799 + C768 * C139 + C776 * C126 + C800 +
            C800 + C769 * C140 + C778 * C127 + C801 + C801 + C32845 * C141) *
               C32612 * C32886 +
           (C774 * C227 + C802 + C802 + C768 * C247 + C776 * C226 + C803 +
            C803 + C769 * C246 + C778 * C225 + C804 + C804 + C32845 * C245) *
               C32612 * C32874 +
           (C774 * C232 + C805 + C805 + C768 * C252 + C776 * C233 + C806 +
            C806 + C769 * C253 + C778 * C234 + C807 + C807 + C32845 * C254) *
               C32612 * C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32612 * C32886 +
           (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
              C32570 * C221 -
          ((C984 + C985 + C986) * C32612 * C32854 +
           (C983 + C982 + C981) * C32612 * C32874 +
           (C980 + C979 + C978) * C32612 * C32886) *
              C32570 * C222 +
          (C989 * C32886 + (C986 + C985 + C984) * C32612 * C32874 +
           (C774 * C920 + C957 + C957 + C768 * C932 + C776 * C921 + C958 +
            C958 + C769 * C933 + C778 * C922 + C959 + C959 + C32845 * C934) *
               C32612 * C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32887 +
           (C774 * C334 + C1135 + C1135 + C768 * C354 + C776 * C333 + C1134 +
            C1134 + C769 * C353 + C778 * C332 + C1133 + C1133 + C32845 * C352) *
               C32876 +
           (C774 * C335 + C1136 + C1136 + C768 * C355 + C776 * C336 + C1137 +
            C1137 + C769 * C356 + C778 * C337 + C1138 + C1138 + C32845 * C357) *
               C32857) *
              C32600 * C32570 * C32556 * C110 -
          ((C778 * C338 + C1786 + C1786 + C32845 * C358 + C776 * C337 + C1787 +
            C1787 + C769 * C357 + C774 * C336 + C1788 + C1788 + C768 * C356) *
               C32857 +
           (C778 * C331 + C1478 + C1478 + C32845 * C351 + C776 * C332 + C1477 +
            C1477 + C769 * C352 + C774 * C333 + C1476 + C1476 + C768 * C353) *
               C32876 +
           (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
            C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
               C32887) *
              C32600 * C32570 * C32556 * C111 +
          ((C774 * C125 + C799 + C799 + C768 * C139 + C776 * C126 + C800 +
            C800 + C769 * C140 + C778 * C127 + C801 + C801 + C32845 * C141) *
               C32887 +
           (C774 * C332 + C1789 + C1789 + C768 * C352 + C776 * C331 + C1790 +
            C1790 + C769 * C351 + C778 * C330 + C1791 + C1791 + C32845 * C350) *
               C32876 +
           (C774 * C337 + C1792 + C1792 + C768 * C357 + C776 * C338 + C1793 +
            C1793 + C769 * C358 + C778 * C339 + C1794 + C1794 + C32845 * C359) *
               C32857) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32887 +
           (C774 * C334 + C1135 + C1135 + C768 * C354 + C776 * C333 + C1134 +
            C1134 + C769 * C353 + C778 * C332 + C1133 + C1133 + C32845 * C352) *
               C32876 +
           (C774 * C335 + C1136 + C1136 + C768 * C355 + C776 * C336 + C1137 +
            C1137 + C769 * C356 + C778 * C337 + C1138 + C1138 + C32845 * C357) *
               C32857) *
              C32600 * C32570 * C221 -
          ((C778 * C1104 + C1141 + C1141 + C32845 * C1122 + C776 * C1103 +
            C1140 + C1140 + C769 * C1121 + C774 * C1102 + C1139 + C1139 +
            C768 * C1120) *
               C32857 +
           (C1670 + C1671 + C1672) * C32876 + (C980 + C979 + C978) * C32887) *
              C32600 * C32570 * C222 +
          (C988 * C32887 + (C1669 + C1668 + C1667) * C32876 +
           (C774 * C1105 + C1142 + C1142 + C768 * C1123 + C776 * C1106 + C1143 +
            C1143 + C769 * C1124 + C778 * C1107 + C1144 + C1144 +
            C32845 * C1125) *
               C32857) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5350 * C229 + C5360 + C5360 + C32883 * C249 + C5352 * C228 +
            C5361 + C5361 + C32870 * C248 + C5354 * C227 + C5362 + C5362 +
            C32845 * C247) *
               C32612 * C5348 +
           (C5350 * C230 + C5363 + C5363 + C32883 * C250 + C5352 * C231 +
            C5364 + C5364 + C32870 * C251 + C5354 * C232 + C5365 + C5365 +
            C32845 * C252) *
               C32612 * C32854) *
              C32570 * C32556 * C110 -
          ((C5354 * C233 + C5366 + C5366 + C32845 * C253 + C5352 * C232 +
            C5367 + C5367 + C32870 * C252 + C5350 * C231 + C5368 + C5368 +
            C32883 * C251) *
               C32612 * C32854 +
           (C5354 * C226 + C5369 + C5369 + C32845 * C246 + C5352 * C227 +
            C5370 + C5370 + C32870 * C247 + C5350 * C228 + C5371 + C5371 +
            C32883 * C248) *
               C32612 * C5348 +
           (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
            C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
            C32883 * C138) *
               C32612 * C5347) *
              C32570 * C32556 * C111 +
          ((C5350 * C125 + C5375 + C5375 + C32883 * C139 + C5352 * C126 +
            C5376 + C5376 + C32870 * C140 + C5354 * C127 + C5377 + C5377 +
            C32845 * C141) *
               C32612 * C5347 +
           (C5350 * C227 + C5378 + C5378 + C32883 * C247 + C5352 * C226 +
            C5379 + C5379 + C32870 * C246 + C5354 * C225 + C5380 + C5380 +
            C32845 * C245) *
               C32612 * C5348 +
           (C5350 * C232 + C5381 + C5381 + C32883 * C252 + C5352 * C233 +
            C5382 + C5382 + C32870 * C253 + C5354 * C234 + C5383 + C5383 +
            C32845 * C254) *
               C32612 * C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
              C32570 * C221 -
          ((C5542 + C5543 + C5544) * C32612 * C32854 +
           (C5541 + C5540 + C5539) * C32612 * C5348 +
           (C5538 + C5537 + C5536) * C32612 * C5347) *
              C32570 * C222 +
          (C5547 * C5347 + (C5544 + C5543 + C5542) * C32612 * C5348 +
           (C5350 * C920 + C5515 + C5515 + C32883 * C932 + C5352 * C921 +
            C5516 + C5516 + C32870 * C933 + C5354 * C922 + C5517 + C5517 +
            C32845 * C934) *
               C32612 * C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           (C6256 * C229 + C6260 + C6260 + C32507 * C249) * C32612 * C6252 +
           (C6256 * C230 + C6261 + C6261 + C32507 * C250) * C32612 * C6253 +
           (C6256 * C919 + C6262 + C6262 + C32507 * C931) * C32612 * C6254 +
           (C6256 * C920 + C6263 + C6263 + C32507 * C932) * C32612 * C6255) *
              C32570 * C32556 * C110 -
          ((C6256 * C921 + C6264 + C6264 + C32507 * C933) * C32612 * C6255 +
           (C6256 * C918 + C6265 + C6265 + C32507 * C930) * C32612 * C6254 +
           (C6256 * C231 + C6266 + C6266 + C32507 * C251) * C32612 * C6253 +
           (C6256 * C228 + C6267 + C6267 + C32507 * C248) * C32612 * C6252 +
           (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32612 * C6251) *
              C32570 * C32556 * C111 +
          ((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32612 * C6251 +
           (C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32612 * C6252 +
           (C6256 * C232 + C6271 + C6271 + C32507 * C252) * C32612 * C6253 +
           (C6256 * C917 + C6272 + C6272 + C32507 * C929) * C32612 * C6254 +
           (C6256 * C922 + C6273 + C6273 + C32507 * C934) * C32612 * C6255) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
              C32570 * C221 -
          (C6373 * C6255 + C6372 * C6254 + C6371 * C6253 + C6370 * C6252 +
           C6369 * C6251) *
              C32570 * C222 +
          (C6370 * C6251 + C6371 * C6252 + C6372 * C6253 + C6373 * C6254 +
           (C6256 * C6336 + C6353 + C6353 + C32507 * C6340) * C32612 * C6255) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32887 +
            (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32876 +
            (C6256 * C335 + C6450 + C6450 + C32507 * C355) * C32857) *
               C5347 +
           (C6364 * C32887 + C6760 * C32876 +
            (C6256 * C1102 + C6451 + C6451 + C32507 * C1120) * C32857) *
               C5348 +
           (C6365 * C32887 + C6759 * C32876 +
            (C6256 * C1105 + C6452 + C6452 + C32507 * C1123) * C32857) *
               C32854) *
              C32570 * C32556 * C110 -
          (((C6256 * C1106 + C6875 + C6875 + C32507 * C1124) * C32857 +
            (C6256 * C1100 + C6652 + C6652 + C32507 * C1118) * C32876 +
            C6558 * C32887) *
               C32854 +
           ((C6256 * C1103 + C6876 + C6876 + C32507 * C1121) * C32857 +
            (C6256 * C639 + C6651 + C6651 + C32507 * C649) * C32876 +
            C6557 * C32887) *
               C5348 +
           ((C6256 * C336 + C6877 + C6877 + C32507 * C356) * C32857 +
            (C6256 * C333 + C6650 + C6650 + C32507 * C353) * C32876 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32887) *
               C5347) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32887 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C32876 +
            (C6256 * C337 + C6879 + C6879 + C32507 * C357) * C32857) *
               C5347 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32887 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C32876 +
            (C6256 * C1104 + C6881 + C6881 + C32507 * C1122) * C32857) *
               C5348 +
           ((C6256 * C232 + C6271 + C6271 + C32507 * C252) * C32887 +
            (C6256 * C1099 + C6882 + C6882 + C32507 * C1117) * C32876 +
            (C6256 * C1107 + C6883 + C6883 + C32507 * C1125) * C32857) *
               C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32887 +
            (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32876 +
            (C6256 * C335 + C6450 + C6450 + C32507 * C355) * C32857) *
               C5347 +
           (C6994 + C6995 + C7016) * C5348 + C7019 * C32854) *
              C32570 * C221 -
          ((C7018 + C7004 + C7005) * C32854 + (C7017 + C6999 + C6998) * C5348 +
           (C7016 + C6995 + C6994) * C5347) *
              C32570 * C222 +
          (C7019 * C5347 + (C7005 + C7004 + C7018) * C5348 +
           (C6367 * C32887 + C6757 * C32876 +
            (C6256 * C6437 + C6454 + C6454 + C32507 * C6443) * C32857) *
               C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C10454 +
           (C5350 * C334 + C5666 + C5666 + C32883 * C354 + C5352 * C333 +
            C5665 + C5665 + C32870 * C353 + C5354 * C332 + C5664 + C5664 +
            C32845 * C352) *
               C10455 +
           (C5350 * C335 + C5667 + C5667 + C32883 * C355 + C5352 * C336 +
            C5668 + C5668 + C32870 * C356 + C5354 * C337 + C5669 + C5669 +
            C32845 * C357) *
               C32857) *
              C32600 * C32570 * C32556 * C110 -
          ((C5354 * C338 + C10458 + C10458 + C32845 * C358 + C5352 * C337 +
            C10459 + C10459 + C32870 * C357 + C5350 * C336 + C10460 + C10460 +
            C32883 * C356) *
               C32857 +
           (C5354 * C331 + C6003 + C6003 + C32845 * C351 + C5352 * C332 +
            C6002 + C6002 + C32870 * C352 + C5350 * C333 + C6001 + C6001 +
            C32883 * C353) *
               C10455 +
           (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
            C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
            C32883 * C138) *
               C10454) *
              C32600 * C32570 * C32556 * C111 +
          ((C5350 * C125 + C5375 + C5375 + C32883 * C139 + C5352 * C126 +
            C5376 + C5376 + C32870 * C140 + C5354 * C127 + C5377 + C5377 +
            C32845 * C141) *
               C10454 +
           (C5350 * C332 + C10461 + C10461 + C32883 * C352 + C5352 * C331 +
            C10462 + C10462 + C32870 * C351 + C5354 * C330 + C10463 + C10463 +
            C32845 * C350) *
               C10455 +
           (C5350 * C337 + C10464 + C10464 + C32883 * C357 + C5352 * C338 +
            C10465 + C10465 + C32870 * C358 + C5354 * C339 + C10466 + C10466 +
            C32845 * C359) *
               C32857) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C10454 +
           (C5350 * C334 + C5666 + C5666 + C32883 * C354 + C5352 * C333 +
            C5665 + C5665 + C32870 * C353 + C5354 * C332 + C5664 + C5664 +
            C32845 * C352) *
               C10455 +
           (C5350 * C335 + C5667 + C5667 + C32883 * C355 + C5352 * C336 +
            C5668 + C5668 + C32870 * C356 + C5354 * C337 + C5669 + C5669 +
            C32845 * C357) *
               C32857) *
              C32600 * C32570 * C221 -
          ((C5354 * C1104 + C5672 + C5672 + C32845 * C1122 + C5352 * C1103 +
            C5671 + C5671 + C32870 * C1121 + C5350 * C1102 + C5670 + C5670 +
            C32883 * C1120) *
               C32857 +
           (C6186 + C6187 + C6188) * C10455 +
           (C5538 + C5537 + C5536) * C10454) *
              C32600 * C32570 * C222 +
          (C5546 * C10454 + (C6185 + C6184 + C6183) * C10455 +
           (C5350 * C1105 + C5673 + C5673 + C32883 * C1123 + C5352 * C1106 +
            C5674 + C5674 + C32870 * C1124 + C5354 * C1107 + C5675 + C5675 +
            C32845 * C1125) *
               C32857) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C10454 +
            C7165 * C10455 + C7166 * C32857) *
               C32886 +
           (C6364 * C10454 + C6760 * C10455 + C7013 * C32857) * C32874 +
           (C6365 * C10454 + C6759 * C10455 + C7014 * C32857) * C32854) *
              C32570 * C32556 * C110 -
          ((C7341 * C32857 + C7340 * C10455 + C6558 * C10454) * C32854 +
           (C7339 * C32857 + C7338 * C10455 + C6557 * C10454) * C32874 +
           (C7507 * C32857 + C7506 * C10455 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C10454) *
               C32886) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C10454 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C10455 +
            (C6256 * C337 + C6879 + C6879 + C32507 * C357) * C32857) *
               C32886 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C10454 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C10455 +
            (C6256 * C1104 + C6881 + C6881 + C32507 * C1122) * C32857) *
               C32874 +
           ((C6256 * C232 + C6271 + C6271 + C32507 * C252) * C10454 +
            (C6256 * C1099 + C6882 + C6882 + C32507 * C1117) * C10455 +
            (C6256 * C1107 + C6883 + C6883 + C32507 * C1125) * C32857) *
               C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C10454 +
            C7165 * C10455 + C7166 * C32857) *
               C32886 +
           (C11452 + C11453 + C11454) * C32874 + C11462 * C32854) *
              C32570 * C221 -
          ((C11458 + C11459 + C11460) * C32854 +
           (C11457 + C11456 + C11455) * C32874 +
           (C11454 + C11453 + C11452) * C32886) *
              C32570 * C222 +
          (C11462 * C32886 + (C11460 + C11459 + C11458) * C32874 +
           (C6367 * C10454 + C6757 * C10455 +
            (C6256 * C6437 + C6454 + C6454 + C32507 * C6443) * C32857) *
               C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C12084 +
           C7165 * C12085 + C7166 * C12086 + C7169 * C12087 +
           (C6256 * C2017 + C7152 + C7152 + C32507 * C2029) * C12088) *
              C32600 * C32570 * C32556 * C110 -
          ((C6256 * C2018 + C12090 + C12090 + C32507 * C2030) * C12088 +
           (C6256 * C2015 + C7499 + C7499 + C32507 * C2027) * C12087 +
           C7507 * C12086 + C7506 * C12085 +
           (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C12084) *
              C32600 * C32570 * C32556 * C111 +
          ((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C12084 +
           (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C12085 +
           (C6256 * C337 + C6879 + C6879 + C32507 * C357) * C12086 +
           (C6256 * C2014 + C12091 + C12091 + C32507 * C2026) * C12087 +
           (C6256 * C2019 + C12092 + C12092 + C32507 * C2031) * C12088) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C12084 +
           C7165 * C12085 + C7166 * C12086 + C7169 * C12087 +
           (C6256 * C2017 + C7152 + C7152 + C32507 * C2029) * C12088) *
              C32600 * C32570 * C221 -
          ((C6256 * C7130 + C7153 + C7153 + C32507 * C7136) * C12088 +
           C7168 * C12087 + C7013 * C12086 + C6760 * C12085 + C6364 * C12084) *
              C32600 * C32570 * C222 +
          (C6365 * C12084 + C6759 * C12085 + C7014 * C12086 + C7167 * C12087 +
           (C6256 * C7131 + C7154 + C7154 + C32507 * C7137) * C12088) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[65] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
              C7773 + C7773 + C32517 * C138) *
                 C32824 +
             (C9004 + C9005) * C32699) *
                C5347 +
            ((C7930 + C7931) * C32824 + (C8517 + C8516) * C32699) * C5348 +
            C8819 * C32854) *
               C32570 * C452 -
           (((C8512 + C8513) * C32699 + (C7935 + C7934) * C32824) * C32854 +
            ((C8514 + C8515) * C32699 + (C7933 + C7932) * C32824) * C5348 +
            ((C8516 + C8517) * C32699 + (C7931 + C7930) * C32824) * C5347) *
               C32570 * C453) *
              C454 +
          ((((C8212 + C8213) * C32824 + (C9222 + C9223) * C32699) * C5347 +
            ((C8214 + C8215) * C32824 + (C9224 + C9225) * C32699) * C5348 +
            ((C8216 + C8217) * C32824 +
             (C7767 * C1631 + C8354 + C8354 + C32804 * C1637 + C7769 * C1632 +
              C8355 + C8355 + C32517 * C1638) *
                 C32699) *
                C32854) *
               C32570 * C453 -
           (((C9225 + C9224) * C32699 + (C8215 + C8214) * C32824) * C32854 +
            ((C9223 + C9222) * C32699 + (C8213 + C8212) * C32824) * C5348 +
            ((C7769 * C332 + C8349 + C8349 + C32517 * C352 + C7767 * C333 +
              C8348 + C8348 + C32804 * C353) *
                 C32699 +
             (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
              C7787 + C7787 + C32804 * C138) *
                 C32824) *
                C5347) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 +
             C2706 + C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 +
             C2692 * C139 + C2702 * C126 + C2708 + C2708 + C32822 * C140) *
                C32824 +
            (C3771 + C3772 + C3773 + C3774) * C32699) *
               C32600 * C32570 * C452 -
           ((C3431 + C3432 + C3433 + C3434) * C32699 +
            (C2870 + C2869 + C2868 + C2867) * C32824) *
               C32600 * C32570 * C453) *
              C454 +
          (((C3139 + C3140 + C3141 + C3142) * C32824 +
            (C2696 * C639 + C3277 + C3277 + C2690 * C649 + C2698 * C640 +
             C3278 + C3278 + C2691 * C650 + C2700 * C641 + C3279 + C3279 +
             C2692 * C651 + C2702 * C642 + C3280 + C3280 + C32822 * C652) *
                C32699) *
               C32600 * C32570 * C453 -
           ((C2702 * C330 + C3276 + C3276 + C32822 * C350 + C2700 * C331 +
             C3275 + C3275 + C2692 * C351 + C2698 * C332 + C3274 + C3274 +
             C2691 * C352 + C2696 * C333 + C3273 + C3273 + C2690 * C353) *
                C32699 +
            (C2702 * C127 + C2717 + C2717 + C32822 * C141 + C2700 * C126 +
             C2718 + C2718 + C2692 * C140 + C2698 * C125 + C2719 + C2719 +
             C2691 * C139 + C2696 * C124 + C2720 + C2720 + C2690 * C138) *
                C32824) *
               C32600 * C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C13680 +
            (C9004 + C9005) * C13681 + C12950 * C13682 + C13883 * C32838) *
               C32600 * C32570 * C452 -
           ((C12972 + C12973) * C32838 + C13582 * C13682 + C9632 * C13681 +
            (C7931 + C7930) * C13680) *
               C32600 * C32570 * C453) *
              C454 +
          (((C8212 + C8213) * C13680 + (C9222 + C9223) * C13681 +
            (C13178 + C13179) * C13682 +
            (C7767 * C2566 + C13380 + C13380 + C32804 * C2572 + C7769 * C2567 +
             C13381 + C13381 + C32517 * C2573) *
                C32838) *
               C32600 * C32570 * C453 -
           ((C7769 * C2014 + C13379 + C13379 + C32517 * C2026 + C7767 * C2015 +
             C13378 + C13378 + C32804 * C2027) *
                C32838 +
            (C13387 + C13386) * C13682 + (C9435 + C9434) * C13681 +
            (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
             C7787 + C7787 + C32804 * C138) *
                C13680) *
               C32600 * C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[66] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
              C7773 + C7773 + C32517 * C138) *
                 C32824 +
             (C9004 + C9005) * C32699) *
                C5347 +
            ((C7930 + C7931) * C32824 + C9630 * C32699) * C5348 +
            C8819 * C32854) *
               C546 -
           (((C9006 + C9007) * C32699 + C9631 * C32824) * C32854 +
            ((C9008 + C9009) * C32699 + C9632 * C32824) * C5348 +
            ((C9010 + C9011) * C32699 + (C9005 + C9004) * C32824) * C5347) *
               C547) *
              C452 +
          (((C9630 * C32824 + (C9009 + C9008) * C32699) * C5347 +
            (C8817 * C32824 + (C9007 + C9006) * C32699) * C5348 +
            ((C8513 + C8512) * C32824 +
             (C7767 * C6436 + C8054 + C8054 + C32804 * C6442 + C7769 * C7315 +
              C8055 + C8055 + C32517 * C7317) *
                 C32699) *
                C32854) *
               C547 -
           (((C8512 + C8513) * C32699 + (C7935 + C7934) * C32824) * C32854 +
            (C9631 * C32699 + (C7933 + C7932) * C32824) * C5348 +
            (C9632 * C32699 + (C7931 + C7930) * C32824) * C5347) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 +
             C2706 + C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 +
             C2692 * C139 + C2702 * C126 + C2708 + C2708 + C32822 * C140) *
                C32824 +
            (C3771 + C3772 + C3773 + C3774) * C32699) *
               C32600 * C546 -
           ((C3775 + C3776 + C3777 + C3778) * C32699 +
            (C3774 + C3773 + C3772 + C3771) * C32824) *
               C32600 * C547) *
              C452 +
          (((C3434 + C3433 + C3432 + C3431) * C32824 +
            (C2696 * C1102 + C2985 + C2985 + C2690 * C1120 + C2698 * C1103 +
             C2986 + C2986 + C2691 * C1121 + C2700 * C1104 + C2987 + C2987 +
             C2692 * C1122 + C2702 * C2231 + C2988 + C2988 + C32822 * C2233) *
                C32699) *
               C32600 * C547 -
           ((C3431 + C3432 + C3433 + C3434) * C32699 +
            (C2870 + C2869 + C2868 + C2867) * C32824) *
               C32600 * C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C13680 +
            (C9004 + C9005) * C13681 + C12950 * C13682 + C13883 * C32838) *
               C32600 * C546 -
           ((C13894 + C13895) * C32838 + (C12974 + C12975) * C13682 +
            (C9010 + C9011) * C13681 + (C9005 + C9004) * C13680) *
               C32600 * C547) *
              C452 +
          ((C9630 * C13680 + C12951 * C13681 + (C12973 + C12972) * C13682 +
            (C7767 * C7130 + C12962 + C12962 + C32804 * C7136 + C7769 * C12316 +
             C12963 + C12963 + C32517 * C12318) *
                C32838) *
               C32600 * C547 -
           ((C12972 + C12973) * C32838 + C13582 * C13682 + C9632 * C13681 +
            (C7931 + C7930) * C13680) *
               C32600 * C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[67] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 +
                C2706 + C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 +
                C2692 * C139 + C2702 * C126 + C2708 + C2708 + C32822 * C140) *
                   C32824 +
               (C2696 * C334 + C2980 + C2980 + C2690 * C354 + C2698 * C333 +
                C2979 + C2979 + C2691 * C353 + C2700 * C332 + C2978 + C2978 +
                C2692 * C352 + C2702 * C331 + C2977 + C2977 + C32822 * C351) *
                   C32699) *
                  C32600 * C32570 * C32556 * C110 -
              ((C2702 * C330 + C3276 + C3276 + C32822 * C350 + C2700 * C331 +
                C3275 + C3275 + C2692 * C351 + C2698 * C332 + C3274 + C3274 +
                C2691 * C352 + C2696 * C333 + C3273 + C3273 + C2690 * C353) *
                   C32699 +
               (C2702 * C127 + C2717 + C2717 + C32822 * C141 + C2700 * C126 +
                C2718 + C2718 + C2692 * C140 + C2698 * C125 + C2719 + C2719 +
                C2691 * C139 + C2696 * C124 + C2720 + C2720 + C2690 * C138) *
                   C32824) *
                  C32600 * C32570 * C32556 * C111 +
              ((C2696 * C125 + C2721 + C2721 + C2690 * C139 + C2698 * C126 +
                C2722 + C2722 + C2691 * C140 + C2700 * C127 + C2723 + C2723 +
                C2692 * C141 + C2702 * C128 + C2724 + C2724 + C32822 * C142) *
                   C32824 +
               (C2696 * C332 + C3535 + C3535 + C2690 * C352 + C2698 * C331 +
                C3536 + C3536 + C2691 * C351 + C2700 * C330 + C3537 + C3537 +
                C2692 * C350 + C2702 * C548 + C3538 + C3538 + C32822 * C550) *
                   C32699) *
                  C32600 * C32570 * C32556 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 +
                C2706 + C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 +
                C2692 * C139 + C2702 * C126 + C2708 + C2708 + C32822 * C140) *
                   C32824 +
               (C2696 * C334 + C2980 + C2980 + C2690 * C354 + C2698 * C333 +
                C2979 + C2979 + C2691 * C353 + C2700 * C332 + C2978 + C2978 +
                C2692 * C352 + C2702 * C331 + C2977 + C2977 + C32822 * C351) *
                   C32699) *
                  C32600 * C32570 * C221 -
              ((C3431 + C3432 + C3433 + C3434) * C32699 +
               (C2870 + C2869 + C2868 + C2867) * C32824) *
                  C32600 * C32570 * C222 +
              ((C2874 + C2873 + C2872 + C2871) * C32824 +
               (C2696 * C1101 + C3419 + C3419 + C2690 * C1119 + C2698 * C1100 +
                C3420 + C3420 + C2691 * C1118 + C2700 * C1099 + C3421 + C3421 +
                C2692 * C1117 + C2702 * C1472 + C3422 + C3422 +
                C32822 * C1474) *
                   C32699) *
                  C32600 * C32570 * C223) *
             C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 + C2706 +
            C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 + C2692 * C139 +
            C2702 * C126 + C2708 + C2708 + C32822 * C140) *
               C32824 +
           (C3771 + C3772 + C3773 + C3774) * C32699) *
              C32600 * C327 -
          ((C3775 + C3776 + C3777 + C3778) * C32699 +
           (C3774 + C3773 + C3772 + C3771) * C32824) *
              C32600 * C328 +
          ((C3778 + C3777 + C3776 + C3775) * C32824 +
           (C2696 * C2016 + C3751 + C3751 + C2690 * C2028 + C2698 * C2015 +
            C3752 + C3752 + C2691 * C2027 + C2700 * C2014 + C3753 + C3753 +
            C2692 * C2026 + C2702 * C2383 + C3754 + C3754 + C32822 * C2385) *
               C32699) *
              C32600 * C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32824 +
            (C7767 * C334 + C8047 + C8047 + C32804 * C354 + C7769 * C333 +
             C8046 + C8046 + C32517 * C353) *
                C32699) *
               C5347 +
           ((C7930 + C7931) * C32824 + (C8517 + C8516) * C32699) * C5348 +
           (C7938 * C32824 + (C8515 + C8514) * C32699) * C32854) *
              C32570 * C32556 * C110 -
          (((C7769 * C1099 + C8353 + C8353 + C32517 * C1117 + C7767 * C1100 +
             C8352 + C8352 + C32804 * C1118) *
                C32699 +
            (C8215 + C8214) * C32824) *
               C32854 +
           ((C7769 * C640 + C8351 + C8351 + C32517 * C650 + C7767 * C639 +
             C8350 + C8350 + C32804 * C649) *
                C32699 +
            (C8213 + C8212) * C32824) *
               C5348 +
           ((C7769 * C332 + C8349 + C8349 + C32517 * C352 + C7767 * C333 +
             C8348 + C8348 + C32804 * C353) *
                C32699 +
            (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
             C7787 + C7787 + C32804 * C138) *
                C32824) *
               C5347) *
              C32570 * C32556 * C111 +
          (((C7767 * C125 + C7788 + C7788 + C32804 * C139 + C7769 * C126 +
             C7789 + C7789 + C32517 * C140) *
                C32824 +
            (C7767 * C332 + C8664 + C8664 + C32804 * C352 + C7769 * C331 +
             C8665 + C8665 + C32517 * C351) *
                C32699) *
               C5347 +
           ((C7767 * C227 + C7790 + C7790 + C32804 * C247 + C7769 * C226 +
             C7791 + C7791 + C32517 * C246) *
                C32824 +
            (C7767 * C640 + C8666 + C8666 + C32804 * C650 + C7769 * C641 +
             C8667 + C8667 + C32517 * C651) *
                C32699) *
               C5348 +
           ((C7767 * C232 + C7792 + C7792 + C32804 * C252 + C7769 * C233 +
             C7793 + C7793 + C32517 * C253) *
                C32824 +
            (C7767 * C1099 + C8668 + C8668 + C32804 * C1117 + C7769 * C1472 +
             C8669 + C8669 + C32517 * C1474) *
                C32699) *
               C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32824 +
            (C7767 * C334 + C8047 + C8047 + C32804 * C354 + C7769 * C333 +
             C8046 + C8046 + C32517 * C353) *
                C32699) *
               C5347 +
           ((C7930 + C7931) * C32824 + (C8517 + C8516) * C32699) * C5348 +
           C8819 * C32854) *
              C32570 * C221 -
          (((C8512 + C8513) * C32699 + (C7935 + C7934) * C32824) * C32854 +
           ((C8514 + C8515) * C32699 + (C7933 + C7932) * C32824) * C5348 +
           ((C8516 + C8517) * C32699 + (C7931 + C7930) * C32824) * C5347) *
              C32570 * C222 +
          (C8819 * C5347 + (C7939 * C32824 + (C8513 + C8512) * C32699) * C5348 +
           ((C7937 + C7936) * C32824 +
            (C7767 * C6435 + C8498 + C8498 + C32804 * C6441 + C7769 * C6646 +
             C8499 + C8499 + C32517 * C6648) *
                C32699) *
               C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32824 +
            (C9004 + C9005) * C32699) *
               C5347 +
           ((C7930 + C7931) * C32824 + (C8517 + C8516) * C32699) * C5348 +
           C8819 * C32854) *
              C327 -
          (((C9006 + C9007) * C32699 + (C8514 + C8515) * C32824) * C32854 +
           ((C9008 + C9009) * C32699 + (C8516 + C8517) * C32824) * C5348 +
           ((C9010 + C9011) * C32699 + (C9005 + C9004) * C32824) * C5347) *
              C328 +
          (((C9011 + C9010) * C32824 +
            (C7767 * C2016 + C8982 + C8982 + C32804 * C2028 + C7769 * C2015 +
             C8983 + C8983 + C32517 * C2027) *
                C32699) *
               C5347 +
           ((C9009 + C9008) * C32824 +
            (C7767 * C2565 + C8984 + C8984 + C32804 * C2571 + C7769 * C2566 +
             C8985 + C8985 + C32517 * C2572) *
                C32699) *
               C5348 +
           ((C9007 + C9006) * C32824 +
            (C7767 * C7129 + C8986 + C8986 + C32804 * C7135 + C7769 * C7491 +
             C8987 + C8987 + C32517 * C7493) *
                C32699) *
               C32854) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
            C7773 + C7773 + C32517 * C138) *
               C13680 +
           (C9004 + C9005) * C13681 + C12950 * C13682 +
           (C12975 + C12974) * C32838) *
              C32600 * C32570 * C32556 * C110 -
          ((C7769 * C2014 + C13379 + C13379 + C32517 * C2026 + C7767 * C2015 +
            C13378 + C13378 + C32804 * C2027) *
               C32838 +
           (C13387 + C13386) * C13682 + (C9435 + C9434) * C13681 +
           (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
            C7787 + C7787 + C32804 * C138) *
               C13680) *
              C32600 * C32570 * C32556 * C111 +
          ((C7767 * C125 + C7788 + C7788 + C32804 * C139 + C7769 * C126 +
            C7789 + C7789 + C32517 * C140) *
               C13680 +
           (C7767 * C332 + C8664 + C8664 + C32804 * C352 + C7769 * C331 +
            C8665 + C8665 + C32517 * C351) *
               C13681 +
           (C7767 * C337 + C12654 + C12654 + C32804 * C357 + C7769 * C338 +
            C12655 + C12655 + C32517 * C358) *
               C13682 +
           (C7767 * C2014 + C13685 + C13685 + C32804 * C2026 + C7769 * C2383 +
            C13686 + C13686 + C32517 * C2385) *
               C32838) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
            C7773 + C7773 + C32517 * C138) *
               C13680 +
           (C9004 + C9005) * C13681 + C12950 * C13682 +
           (C12975 + C12974) * C32838) *
              C32600 * C32570 * C221 -
          ((C12972 + C12973) * C32838 + C13582 * C13682 + C9632 * C13681 +
           (C7931 + C7930) * C13680) *
              C32600 * C32570 * C222 +
          (C7938 * C13680 + C8817 * C13681 + (C9007 + C9006) * C13682 +
           (C7767 * C7129 + C8986 + C8986 + C32804 * C7135 + C7769 * C7491 +
            C8987 + C8987 + C32517 * C7493) *
               C32838) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
            C7773 + C7773 + C32517 * C138) *
               C13680 +
           (C9004 + C9005) * C13681 + C12950 * C13682 + C13883 * C32838) *
              C32600 * C327 -
          ((C13894 + C13895) * C32838 + (C12974 + C12975) * C13682 +
           (C9010 + C9011) * C13681 + (C9005 + C9004) * C13680) *
              C32600 * C328 +
          (C12950 * C13680 + C13883 * C13681 + (C13895 + C13894) * C13682 +
           (C7767 * C12216 + C13888 + C13888 + C32804 * C12220 +
            C7769 * C12402 + C13889 + C13889 + C32517 * C12404) *
               C32838) *
              C32600 * C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[68] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
              C7773 + C7773 + C32517 * C138) *
                 C32824 +
             (C9004 + C9005) * C32699) *
                C5347 +
            ((C7930 + C7931) * C32824 + (C8517 + C8516) * C32699) * C5348 +
            C8819 * C32854) *
               C546 -
           (((C9006 + C9007) * C32699 + (C8514 + C8515) * C32824) * C32854 +
            ((C9008 + C9009) * C32699 + (C8516 + C8517) * C32824) * C5348 +
            ((C9010 + C9011) * C32699 + (C9005 + C9004) * C32824) * C5347) *
               C547) *
              C32556 * C454 +
          ((((C9434 + C9435) * C32824 +
             (C7767 * C336 + C9424 + C9424 + C32804 * C356 + C7769 * C337 +
              C9425 + C9425 + C32517 * C357) *
                 C32699) *
                C5347 +
            ((C9222 + C9223) * C32824 +
             (C7767 * C1103 + C9426 + C9426 + C32804 * C1121 + C7769 * C1104 +
              C9427 + C9427 + C32517 * C1122) *
                 C32699) *
                C5348 +
            ((C9224 + C9225) * C32824 +
             (C7767 * C1106 + C9428 + C9428 + C32804 * C1124 + C7769 * C1107 +
              C9429 + C9429 + C32517 * C1125) *
                 C32699) *
                C32854) *
               C547 -
           (((C9225 + C9224) * C32699 + (C8215 + C8214) * C32824) * C32854 +
            ((C9223 + C9222) * C32699 + (C8213 + C8212) * C32824) * C5348 +
            ((C9435 + C9434) * C32699 +
             (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
              C7787 + C7787 + C32804 * C138) *
                 C32824) *
                C5347) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 +
             C2706 + C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 +
             C2692 * C139 + C2702 * C126 + C2708 + C2708 + C32822 * C140) *
                C32824 +
            (C3771 + C3772 + C3773 + C3774) * C32699) *
               C32600 * C546 -
           ((C3775 + C3776 + C3777 + C3778) * C32699 +
            (C3774 + C3773 + C3772 + C3771) * C32824) *
               C32600 * C547) *
              C32556 * C454 +
          (((C4059 + C4060 + C4061 + C4062) * C32824 +
            (C2696 * C336 + C4047 + C4047 + C2690 * C356 + C2698 * C337 +
             C4048 + C4048 + C2691 * C357 + C2700 * C338 + C4049 + C4049 +
             C2692 * C358 + C2702 * C339 + C4050 + C4050 + C32822 * C359) *
                C32699) *
               C32600 * C547 -
           ((C4062 + C4061 + C4060 + C4059) * C32699 +
            (C2702 * C127 + C2717 + C2717 + C32822 * C141 + C2700 * C126 +
             C2718 + C2718 + C2692 * C140 + C2698 * C125 + C2719 + C2719 +
             C2691 * C139 + C2696 * C124 + C2720 + C2720 + C2690 * C138) *
                C32824) *
               C32600 * C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C13680 +
            (C9004 + C9005) * C13681 + C12950 * C13682 + C13883 * C32838) *
               C32600 * C546 -
           ((C13894 + C13895) * C32838 + (C12974 + C12975) * C13682 +
            (C9010 + C9011) * C13681 + (C9005 + C9004) * C13680) *
               C32600 * C547) *
              C32556 * C454 +
          (((C9434 + C9435) * C13680 + (C13386 + C13387) * C13681 +
            (C14166 + C14167) * C13682 +
            (C7767 * C2018 + C14160 + C14160 + C32804 * C2030 + C7769 * C2019 +
             C14161 + C14161 + C32517 * C2031) *
                C32838) *
               C32600 * C547 -
           ((C14167 + C14166) * C32838 + (C13387 + C13386) * C13682 +
            (C9435 + C9434) * C13681 +
            (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
             C7787 + C7787 + C32804 * C138) *
                C13680) *
               C32600 * C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[69] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 + C2706 +
            C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 + C2692 * C139 +
            C2702 * C126 + C2708 + C2708 + C32822 * C140) *
               C32824 +
           (C2696 * C334 + C2980 + C2980 + C2690 * C354 + C2698 * C333 + C2979 +
            C2979 + C2691 * C353 + C2700 * C332 + C2978 + C2978 + C2692 * C352 +
            C2702 * C331 + C2977 + C2977 + C32822 * C351) *
               C32699) *
              C32600 * C32570 * C221 -
          ((C3431 + C3432 + C3433 + C3434) * C32699 +
           (C2870 + C2869 + C2868 + C2867) * C32824) *
              C32600 * C32570 * C222 +
          ((C2874 + C2873 + C2872 + C2871) * C32824 +
           (C2696 * C1101 + C3419 + C3419 + C2690 * C1119 + C2698 * C1100 +
            C3420 + C3420 + C2691 * C1118 + C2700 * C1099 + C3421 + C3421 +
            C2692 * C1117 + C2702 * C1472 + C3422 + C3422 + C32822 * C1474) *
               C32699) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 + C2706 +
            C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 + C2692 * C139 +
            C2702 * C126 + C2708 + C2708 + C32822 * C140) *
               C32824 +
           (C2696 * C334 + C2980 + C2980 + C2690 * C354 + C2698 * C333 + C2979 +
            C2979 + C2691 * C353 + C2700 * C332 + C2978 + C2978 + C2692 * C352 +
            C2702 * C331 + C2977 + C2977 + C32822 * C351) *
               C32699) *
              C32600 * C32570 * C32556 * C110 -
          ((C2702 * C330 + C3276 + C3276 + C32822 * C350 + C2700 * C331 +
            C3275 + C3275 + C2692 * C351 + C2698 * C332 + C3274 + C3274 +
            C2691 * C352 + C2696 * C333 + C3273 + C3273 + C2690 * C353) *
               C32699 +
           (C2702 * C127 + C2717 + C2717 + C32822 * C141 + C2700 * C126 +
            C2718 + C2718 + C2692 * C140 + C2698 * C125 + C2719 + C2719 +
            C2691 * C139 + C2696 * C124 + C2720 + C2720 + C2690 * C138) *
               C32824) *
              C32600 * C32570 * C32556 * C111 +
          ((C2696 * C125 + C2721 + C2721 + C2690 * C139 + C2698 * C126 + C2722 +
            C2722 + C2691 * C140 + C2700 * C127 + C2723 + C2723 + C2692 * C141 +
            C2702 * C128 + C2724 + C2724 + C32822 * C142) *
               C32824 +
           (C2696 * C332 + C3535 + C3535 + C2690 * C352 + C2698 * C331 + C3536 +
            C3536 + C2691 * C351 + C2700 * C330 + C3537 + C3537 + C2692 * C350 +
            C2702 * C548 + C3538 + C3538 + C32822 * C550) *
               C32699) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32824 +
            (C7767 * C334 + C8047 + C8047 + C32804 * C354 + C7769 * C333 +
             C8046 + C8046 + C32517 * C353) *
                C32699) *
               C5347 +
           ((C7930 + C7931) * C32824 + (C8517 + C8516) * C32699) * C5348 +
           (C7938 * C32824 + (C8515 + C8514) * C32699) * C32854) *
              C32570 * C32556 * C110 -
          (((C7769 * C1099 + C8353 + C8353 + C32517 * C1117 + C7767 * C1100 +
             C8352 + C8352 + C32804 * C1118) *
                C32699 +
            (C8215 + C8214) * C32824) *
               C32854 +
           ((C7769 * C640 + C8351 + C8351 + C32517 * C650 + C7767 * C639 +
             C8350 + C8350 + C32804 * C649) *
                C32699 +
            (C8213 + C8212) * C32824) *
               C5348 +
           ((C7769 * C332 + C8349 + C8349 + C32517 * C352 + C7767 * C333 +
             C8348 + C8348 + C32804 * C353) *
                C32699 +
            (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
             C7787 + C7787 + C32804 * C138) *
                C32824) *
               C5347) *
              C32570 * C32556 * C111 +
          (((C7767 * C125 + C7788 + C7788 + C32804 * C139 + C7769 * C126 +
             C7789 + C7789 + C32517 * C140) *
                C32824 +
            (C7767 * C332 + C8664 + C8664 + C32804 * C352 + C7769 * C331 +
             C8665 + C8665 + C32517 * C351) *
                C32699) *
               C5347 +
           ((C7767 * C227 + C7790 + C7790 + C32804 * C247 + C7769 * C226 +
             C7791 + C7791 + C32517 * C246) *
                C32824 +
            (C7767 * C640 + C8666 + C8666 + C32804 * C650 + C7769 * C641 +
             C8667 + C8667 + C32517 * C651) *
                C32699) *
               C5348 +
           ((C7767 * C232 + C7792 + C7792 + C32804 * C252 + C7769 * C233 +
             C7793 + C7793 + C32517 * C253) *
                C32824 +
            (C7767 * C1099 + C8668 + C8668 + C32804 * C1117 + C7769 * C1472 +
             C8669 + C8669 + C32517 * C1474) *
                C32699) *
               C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32824 +
            (C7767 * C334 + C8047 + C8047 + C32804 * C354 + C7769 * C333 +
             C8046 + C8046 + C32517 * C353) *
                C32699) *
               C5347 +
           ((C7930 + C7931) * C32824 + (C8517 + C8516) * C32699) * C5348 +
           C8819 * C32854) *
              C32570 * C221 -
          (((C8512 + C8513) * C32699 + (C7935 + C7934) * C32824) * C32854 +
           ((C8514 + C8515) * C32699 + (C7933 + C7932) * C32824) * C5348 +
           ((C8516 + C8517) * C32699 + (C7931 + C7930) * C32824) * C5347) *
              C32570 * C222 +
          (C8819 * C5347 + (C7939 * C32824 + (C8513 + C8512) * C32699) * C5348 +
           ((C7937 + C7936) * C32824 +
            (C7767 * C6435 + C8498 + C8498 + C32804 * C6441 + C7769 * C6646 +
             C8499 + C8499 + C32517 * C6648) *
                C32699) *
               C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
            C7773 + C7773 + C32517 * C138) *
               C13680 +
           (C9004 + C9005) * C13681 + C12950 * C13682 +
           (C12975 + C12974) * C32838) *
              C32600 * C32570 * C32556 * C110 -
          ((C7769 * C2014 + C13379 + C13379 + C32517 * C2026 + C7767 * C2015 +
            C13378 + C13378 + C32804 * C2027) *
               C32838 +
           (C13387 + C13386) * C13682 + (C9435 + C9434) * C13681 +
           (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
            C7787 + C7787 + C32804 * C138) *
               C13680) *
              C32600 * C32570 * C32556 * C111 +
          ((C7767 * C125 + C7788 + C7788 + C32804 * C139 + C7769 * C126 +
            C7789 + C7789 + C32517 * C140) *
               C13680 +
           (C7767 * C332 + C8664 + C8664 + C32804 * C352 + C7769 * C331 +
            C8665 + C8665 + C32517 * C351) *
               C13681 +
           (C7767 * C337 + C12654 + C12654 + C32804 * C357 + C7769 * C338 +
            C12655 + C12655 + C32517 * C358) *
               C13682 +
           (C7767 * C2014 + C13685 + C13685 + C32804 * C2026 + C7769 * C2383 +
            C13686 + C13686 + C32517 * C2385) *
               C32838) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
            C7773 + C7773 + C32517 * C138) *
               C13680 +
           (C9004 + C9005) * C13681 + C12950 * C13682 +
           (C12975 + C12974) * C32838) *
              C32600 * C32570 * C221 -
          ((C12972 + C12973) * C32838 + C13582 * C13682 + C9632 * C13681 +
           (C7931 + C7930) * C13680) *
              C32600 * C32570 * C222 +
          (C7938 * C13680 + C8817 * C13681 + (C9007 + C9006) * C13682 +
           (C7767 * C7129 + C8986 + C8986 + C32804 * C7135 + C7769 * C7491 +
            C8987 + C8987 + C32517 * C7493) *
               C32838) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[70] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32612 * C32886 +
            (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
               C32570 * C452 -
           ((C984 + C985 + C986) * C32612 * C32854 +
            (C983 + C982 + C981) * C32612 * C32874 +
            (C980 + C979 + C978) * C32612 * C32886) *
               C32570 * C453) *
              C454 +
          (((C1321 + C1322 + C1323) * C32612 * C32886 +
            (C1324 + C1325 + C1326) * C32612 * C32874 +
            (C774 * C918 + C1306 + C1306 + C768 * C930 + C776 * C917 + C1307 +
             C1307 + C769 * C929 + C778 * C1290 + C1308 + C1308 +
             C32845 * C1292) *
                C32612 * C32854) *
               C32570 * C453 -
           ((C1326 + C1325 + C1324) * C32612 * C32854 +
            (C1323 + C1322 + C1321) * C32612 * C32874 +
            (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
             C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                C32612 * C32886) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
            C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
            C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
            C149 + C105 * C141) *
               C32612 * C32600 * C32570 * C452 -
           (C121 * C225 + C256 + C256 + C105 * C245 + C119 * C226 + C257 +
            C257 + C104 * C246 + C117 * C227 + C258 + C258 + C103 * C247 +
            C115 * C228 + C259 + C259 + C102 * C248 + C113 * C229 + C260 +
            C260 + C101 * C249) *
               C32612 * C32600 * C32570 * C453) *
              C454 +
          ((C113 * C228 + C460 + C460 + C101 * C248 + C115 * C227 + C461 +
            C461 + C102 * C247 + C117 * C226 + C462 + C462 + C103 * C246 +
            C119 * C225 + C463 + C463 + C104 * C245 + C121 * C456 + C464 +
            C464 + C105 * C458) *
               C32612 * C32600 * C32570 * C453 -
           (C121 * C128 + C150 + C150 + C105 * C142 + C119 * C127 + C151 +
            C151 + C104 * C141 + C117 * C126 + C152 + C152 + C103 * C140 +
            C115 * C125 + C153 + C153 + C102 * C139 + C113 * C124 + C154 +
            C154 + C101 * C138) *
               C32612 * C32600 * C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C32612 * C5347 +
            (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
               C32570 * C452 -
           ((C5542 + C5543 + C5544) * C32612 * C32854 +
            (C5541 + C5540 + C5539) * C32612 * C5348 +
            (C5538 + C5537 + C5536) * C32612 * C5347) *
               C32570 * C453) *
              C454 +
          (((C5849 + C5850 + C5851) * C32612 * C5347 +
            (C5852 + C5853 + C5854) * C32612 * C5348 +
            (C5350 * C918 + C5834 + C5834 + C32883 * C930 + C5352 * C917 +
             C5835 + C5835 + C32870 * C929 + C5354 * C1290 + C5836 + C5836 +
             C32845 * C1292) *
                C32612 * C32854) *
               C32570 * C453 -
           ((C5854 + C5853 + C5852) * C32612 * C32854 +
            (C5851 + C5850 + C5849) * C32612 * C5348 +
            (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
             C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
             C32883 * C138) *
                C32612 * C5347) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
            C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
               C32570 * C452 -
           (C6373 * C6255 + C6372 * C6254 + C6371 * C6253 + C6370 * C6252 +
            C6369 * C6251) *
               C32570 * C453) *
              C454 +
          ((C6561 * C6251 + C6562 * C6252 + C6563 * C6253 + C6564 * C6254 +
            (C6256 * C6536 + C6548 + C6548 + C32507 * C6538) * C32612 * C6255) *
               C32570 * C453 -
           (C6564 * C6255 + C6563 * C6254 + C6562 * C6253 + C6561 * C6252 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32612 * C6251) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C10454 +
            (C10729 + C10730 + C10731) * C10455 + C10739 * C32857) *
               C32600 * C32570 * C452 -
           ((C5354 * C1104 + C5672 + C5672 + C32845 * C1122 + C5352 * C1103 +
             C5671 + C5671 + C32870 * C1121 + C5350 * C1102 + C5670 + C5670 +
             C32883 * C1120) *
                C32857 +
            (C6186 + C6187 + C6188) * C10455 +
            (C5538 + C5537 + C5536) * C10454) *
               C32600 * C32570 * C453) *
              C454 +
          (((C5849 + C5850 + C5851) * C10454 +
            (C5350 * C639 + C6004 + C6004 + C32883 * C649 + C5352 * C640 +
             C6005 + C6005 + C32870 * C650 + C5354 * C641 + C6006 + C6006 +
             C32845 * C651) *
                C10455 +
            (C5350 * C1103 + C10886 + C10886 + C32883 * C1121 + C5352 * C1104 +
             C10887 + C10887 + C32870 * C1122 + C5354 * C2231 + C10888 +
             C10888 + C32845 * C2233) *
                C32857) *
               C32600 * C32570 * C453 -
           ((C5354 * C338 + C10458 + C10458 + C32845 * C358 + C5352 * C337 +
             C10459 + C10459 + C32870 * C357 + C5350 * C336 + C10460 + C10460 +
             C32883 * C356) *
                C32857 +
            (C5354 * C331 + C6003 + C6003 + C32845 * C351 + C5352 * C332 +
             C6002 + C6002 + C32870 * C352 + C5350 * C333 + C6001 + C6001 +
             C32883 * C353) *
                C10455 +
            (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
             C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
             C32883 * C138) *
                C10454) *
               C32600 * C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C10454 +
             C7165 * C10455 + C7166 * C32857) *
                C32886 +
            (C11452 + C11453 + C11454) * C32874 + C11462 * C32854) *
               C32570 * C452 -
           ((C11458 + C11459 + C11460) * C32854 +
            (C11457 + C11456 + C11455) * C32874 +
            (C11454 + C11453 + C11452) * C32886) *
               C32570 * C453) *
              C454 +
          (((C11719 + C11720 + C11721) * C32886 +
            (C11722 + C11723 + C11724) * C32874 +
            (C6559 * C10454 + C10077 * C10455 +
             (C6256 * C7315 + C7329 + C7329 + C32507 * C7317) * C32857) *
                C32854) *
               C32570 * C453 -
           ((C11724 + C11723 + C11722) * C32854 +
            (C11721 + C11720 + C11719) * C32874 +
            (C7507 * C32857 + C7506 * C10455 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C10454) *
                C32886) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[71] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32612 * C32886 +
            (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
               C546 -
           ((C1667 + C1668 + C1669) * C32612 * C32854 +
            (C1670 + C1671 + C1672) * C32612 * C32874 +
            (C778 * C332 + C1133 + C1133 + C32845 * C352 + C776 * C333 + C1134 +
             C1134 + C769 * C353 + C774 * C334 + C1135 + C1135 + C768 * C354) *
                C32612 * C32886) *
               C547) *
              C452 +
          (((C1672 + C1671 + C1670) * C32612 * C32886 +
            (C1669 + C1668 + C1667) * C32612 * C32874 +
            (C774 * C1630 + C1652 + C1652 + C768 * C1636 + C776 * C1631 +
             C1653 + C1653 + C769 * C1637 + C778 * C1632 + C1654 + C1654 +
             C32845 * C1638) *
                C32612 * C32854) *
               C547 -
           ((C984 + C985 + C986) * C32612 * C32854 +
            (C983 + C982 + C981) * C32612 * C32874 +
            (C980 + C979 + C978) * C32612 * C32886) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
            C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
            C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
            C149 + C105 * C141) *
               C32612 * C32600 * C546 -
           (C121 * C330 + C361 + C361 + C105 * C350 + C119 * C331 + C362 +
            C362 + C104 * C351 + C117 * C332 + C363 + C363 + C103 * C352 +
            C115 * C333 + C364 + C364 + C102 * C353 + C113 * C334 + C365 +
            C365 + C101 * C354) *
               C32612 * C32600 * C547) *
              C452 +
          ((C113 * C638 + C654 + C654 + C101 * C648 + C115 * C639 + C655 +
            C655 + C102 * C649 + C117 * C640 + C656 + C656 + C103 * C650 +
            C119 * C641 + C657 + C657 + C104 * C651 + C121 * C642 + C658 +
            C658 + C105 * C652) *
               C32612 * C32600 * C547 -
           (C121 * C225 + C256 + C256 + C105 * C245 + C119 * C226 + C257 +
            C257 + C104 * C246 + C117 * C227 + C258 + C258 + C103 * C247 +
            C115 * C228 + C259 + C259 + C102 * C248 + C113 * C229 + C260 +
            C260 + C101 * C249) *
               C32612 * C32600 * C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C32612 * C5347 +
            (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
               C546 -
           ((C6183 + C6184 + C6185) * C32612 * C32854 +
            (C6186 + C6187 + C6188) * C32612 * C5348 +
            (C5354 * C332 + C5664 + C5664 + C32845 * C352 + C5352 * C333 +
             C5665 + C5665 + C32870 * C353 + C5350 * C334 + C5666 + C5666 +
             C32883 * C354) *
                C32612 * C5347) *
               C547) *
              C452 +
          (((C6188 + C6187 + C6186) * C32612 * C5347 +
            (C6185 + C6184 + C6183) * C32612 * C5348 +
            (C5350 * C1630 + C6168 + C6168 + C32883 * C1636 + C5352 * C1631 +
             C6169 + C6169 + C32870 * C1637 + C5354 * C1632 + C6170 + C6170 +
             C32845 * C1638) *
                C32612 * C32854) *
               C547 -
           ((C5542 + C5543 + C5544) * C32612 * C32854 +
            (C5541 + C5540 + C5539) * C32612 * C5348 +
            (C5538 + C5537 + C5536) * C32612 * C5347) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
            C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
               C546 -
           (C6761 * C6255 + C6762 * C6254 + C6763 * C6253 + C6764 * C6252 +
            (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32612 * C6251) *
               C547) *
              C452 +
          ((C6764 * C6251 + C6763 * C6252 + C6762 * C6253 + C6761 * C6254 +
            (C6256 * C6736 + C6748 + C6748 + C32507 * C6738) * C32612 * C6255) *
               C547 -
           (C6373 * C6255 + C6372 * C6254 + C6371 * C6253 + C6370 * C6252 +
            C6369 * C6251) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C10454 +
            (C10729 + C10730 + C10731) * C10455 + C10739 * C32857) *
               C32600 * C546 -
           ((C10735 + C10736 + C10737) * C32857 +
            (C10734 + C10733 + C10732) * C10455 +
            (C10731 + C10730 + C10729) * C10454) *
               C32600 * C547) *
              C452 +
          (((C6188 + C6187 + C6186) * C10454 +
            (C11229 + C11230 + C11231) * C10455 +
            (C5350 * C2565 + C11220 + C11220 + C32883 * C2571 + C5352 * C2566 +
             C11221 + C11221 + C32870 * C2572 + C5354 * C2567 + C11222 +
             C11222 + C32845 * C2573) *
                C32857) *
               C32600 * C547 -
           ((C11231 + C11230 + C11229) * C32857 +
            (C6186 + C6187 + C6188) * C10455 +
            (C5538 + C5537 + C5536) * C10454) *
               C32600 * C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C10454 +
             C7165 * C10455 + C7166 * C32857) *
                C32886 +
            (C11452 + C11453 + C11454) * C32874 + C11462 * C32854) *
               C546 -
           ((C12017 + C12018 + C12019) * C32854 +
            (C12020 + C12021 + C12022) * C32874 +
            (C7169 * C32857 + C7166 * C10455 + C7165 * C10454) * C32886) *
               C547) *
              C452 +
          (((C12022 + C12021 + C12020) * C32886 +
            (C12019 + C12018 + C12017) * C32874 +
            (C6758 * C10454 + C7015 * C10455 +
             (C6256 * C7653 + C7663 + C7663 + C32507 * C7655) * C32857) *
                C32854) *
               C547 -
           ((C11458 + C11459 + C11460) * C32854 +
            (C11457 + C11456 + C11455) * C32874 +
            (C11454 + C11453 + C11452) * C32886) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[72] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
               C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
               C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
               C149 + C105 * C141) *
                  C32612 * C32600 * C32570 * C32556 * C110 -
              (C121 * C128 + C150 + C150 + C105 * C142 + C119 * C127 + C151 +
               C151 + C104 * C141 + C117 * C126 + C152 + C152 + C103 * C140 +
               C115 * C125 + C153 + C153 + C102 * C139 + C113 * C124 + C154 +
               C154 + C101 * C138) *
                  C32612 * C32600 * C32570 * C32556 * C111 +
              (C113 * C125 + C155 + C155 + C101 * C139 + C115 * C126 + C156 +
               C156 + C102 * C140 + C117 * C127 + C157 + C157 + C103 * C141 +
               C119 * C128 + C158 + C158 + C104 * C142 + C121 * C129 + C159 +
               C159 + C105 * C143) *
                  C32612 * C32600 * C32570 * C32556 * C112) +
         std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
               C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
               C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
               C149 + C105 * C141) *
                  C32612 * C32600 * C32570 * C221 -
              (C121 * C225 + C256 + C256 + C105 * C245 + C119 * C226 + C257 +
               C257 + C104 * C246 + C117 * C227 + C258 + C258 + C103 * C247 +
               C115 * C228 + C259 + C259 + C102 * C248 + C113 * C229 + C260 +
               C260 + C101 * C249) *
                  C32612 * C32600 * C32570 * C222 +
              (C113 * C230 + C261 + C261 + C101 * C250 + C115 * C231 + C262 +
               C262 + C102 * C251 + C117 * C232 + C263 + C263 + C103 * C252 +
               C119 * C233 + C264 + C264 + C104 * C253 + C121 * C234 + C265 +
               C265 + C105 * C254) *
                  C32612 * C32600 * C32570 * C223) *
             C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 + C146 +
           C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 + C119 * C126 +
           C148 + C148 + C104 * C140 + C121 * C127 + C149 + C149 +
           C105 * C141) *
              C32612 * C32600 * C327 -
          (C121 * C330 + C361 + C361 + C105 * C350 + C119 * C331 + C362 + C362 +
           C104 * C351 + C117 * C332 + C363 + C363 + C103 * C352 + C115 * C333 +
           C364 + C364 + C102 * C353 + C113 * C334 + C365 + C365 +
           C101 * C354) *
              C32612 * C32600 * C328 +
          (C113 * C335 + C366 + C366 + C101 * C355 + C115 * C336 + C367 + C367 +
           C102 * C356 + C117 * C337 + C368 + C368 + C103 * C357 + C119 * C338 +
           C369 + C369 + C104 * C358 + C121 * C339 + C370 + C370 +
           C105 * C359) *
              C32612 * C32600 * C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32612 * C32886 +
           (C774 * C229 + C784 + C784 + C768 * C249 + C776 * C228 + C785 +
            C785 + C769 * C248 + C778 * C227 + C786 + C786 + C32845 * C247) *
               C32612 * C32874 +
           (C774 * C230 + C787 + C787 + C768 * C250 + C776 * C231 + C788 +
            C788 + C769 * C251 + C778 * C232 + C789 + C789 + C32845 * C252) *
               C32612 * C32854) *
              C32570 * C32556 * C110 -
          ((C778 * C233 + C790 + C790 + C32845 * C253 + C776 * C232 + C791 +
            C791 + C769 * C252 + C774 * C231 + C792 + C792 + C768 * C251) *
               C32612 * C32854 +
           (C778 * C226 + C793 + C793 + C32845 * C246 + C776 * C227 + C794 +
            C794 + C769 * C247 + C774 * C228 + C795 + C795 + C768 * C248) *
               C32612 * C32874 +
           (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
            C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
               C32612 * C32886) *
              C32570 * C32556 * C111 +
          ((C774 * C125 + C799 + C799 + C768 * C139 + C776 * C126 + C800 +
            C800 + C769 * C140 + C778 * C127 + C801 + C801 + C32845 * C141) *
               C32612 * C32886 +
           (C774 * C227 + C802 + C802 + C768 * C247 + C776 * C226 + C803 +
            C803 + C769 * C246 + C778 * C225 + C804 + C804 + C32845 * C245) *
               C32612 * C32874 +
           (C774 * C232 + C805 + C805 + C768 * C252 + C776 * C233 + C806 +
            C806 + C769 * C253 + C778 * C234 + C807 + C807 + C32845 * C254) *
               C32612 * C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32612 * C32886 +
           (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
              C32570 * C221 -
          ((C984 + C985 + C986) * C32612 * C32854 +
           (C983 + C982 + C981) * C32612 * C32874 +
           (C980 + C979 + C978) * C32612 * C32886) *
              C32570 * C222 +
          (C989 * C32886 + (C986 + C985 + C984) * C32612 * C32874 +
           (C774 * C920 + C957 + C957 + C768 * C932 + C776 * C921 + C958 +
            C958 + C769 * C933 + C778 * C922 + C959 + C959 + C32845 * C934) *
               C32612 * C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32612 * C32886 +
           (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
              C327 -
          ((C778 * C1099 + C1127 + C1127 + C32845 * C1117 + C776 * C1100 +
            C1128 + C1128 + C769 * C1118 + C774 * C1101 + C1129 + C1129 +
            C768 * C1119) *
               C32612 * C32854 +
           (C778 * C640 + C1130 + C1130 + C32845 * C650 + C776 * C639 + C1131 +
            C1131 + C769 * C649 + C774 * C638 + C1132 + C1132 + C768 * C648) *
               C32612 * C32874 +
           (C778 * C332 + C1133 + C1133 + C32845 * C352 + C776 * C333 + C1134 +
            C1134 + C769 * C353 + C774 * C334 + C1135 + C1135 + C768 * C354) *
               C32612 * C32886) *
              C328 +
          ((C774 * C335 + C1136 + C1136 + C768 * C355 + C776 * C336 + C1137 +
            C1137 + C769 * C356 + C778 * C337 + C1138 + C1138 + C32845 * C357) *
               C32612 * C32886 +
           (C774 * C1102 + C1139 + C1139 + C768 * C1120 + C776 * C1103 + C1140 +
            C1140 + C769 * C1121 + C778 * C1104 + C1141 + C1141 +
            C32845 * C1122) *
               C32612 * C32874 +
           (C774 * C1105 + C1142 + C1142 + C768 * C1123 + C776 * C1106 + C1143 +
            C1143 + C769 * C1124 + C778 * C1107 + C1144 + C1144 +
            C32845 * C1125) *
               C32612 * C32854) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5350 * C229 + C5360 + C5360 + C32883 * C249 + C5352 * C228 +
            C5361 + C5361 + C32870 * C248 + C5354 * C227 + C5362 + C5362 +
            C32845 * C247) *
               C32612 * C5348 +
           (C5350 * C230 + C5363 + C5363 + C32883 * C250 + C5352 * C231 +
            C5364 + C5364 + C32870 * C251 + C5354 * C232 + C5365 + C5365 +
            C32845 * C252) *
               C32612 * C32854) *
              C32570 * C32556 * C110 -
          ((C5354 * C233 + C5366 + C5366 + C32845 * C253 + C5352 * C232 +
            C5367 + C5367 + C32870 * C252 + C5350 * C231 + C5368 + C5368 +
            C32883 * C251) *
               C32612 * C32854 +
           (C5354 * C226 + C5369 + C5369 + C32845 * C246 + C5352 * C227 +
            C5370 + C5370 + C32870 * C247 + C5350 * C228 + C5371 + C5371 +
            C32883 * C248) *
               C32612 * C5348 +
           (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
            C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
            C32883 * C138) *
               C32612 * C5347) *
              C32570 * C32556 * C111 +
          ((C5350 * C125 + C5375 + C5375 + C32883 * C139 + C5352 * C126 +
            C5376 + C5376 + C32870 * C140 + C5354 * C127 + C5377 + C5377 +
            C32845 * C141) *
               C32612 * C5347 +
           (C5350 * C227 + C5378 + C5378 + C32883 * C247 + C5352 * C226 +
            C5379 + C5379 + C32870 * C246 + C5354 * C225 + C5380 + C5380 +
            C32845 * C245) *
               C32612 * C5348 +
           (C5350 * C232 + C5381 + C5381 + C32883 * C252 + C5352 * C233 +
            C5382 + C5382 + C32870 * C253 + C5354 * C234 + C5383 + C5383 +
            C32845 * C254) *
               C32612 * C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
              C32570 * C221 -
          ((C5542 + C5543 + C5544) * C32612 * C32854 +
           (C5541 + C5540 + C5539) * C32612 * C5348 +
           (C5538 + C5537 + C5536) * C32612 * C5347) *
              C32570 * C222 +
          (C5547 * C5347 + (C5544 + C5543 + C5542) * C32612 * C5348 +
           (C5350 * C920 + C5515 + C5515 + C32883 * C932 + C5352 * C921 +
            C5516 + C5516 + C32870 * C933 + C5354 * C922 + C5517 + C5517 +
            C32845 * C934) *
               C32612 * C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
              C327 -
          ((C5354 * C1099 + C5658 + C5658 + C32845 * C1117 + C5352 * C1100 +
            C5659 + C5659 + C32870 * C1118 + C5350 * C1101 + C5660 + C5660 +
            C32883 * C1119) *
               C32612 * C32854 +
           (C5354 * C640 + C5661 + C5661 + C32845 * C650 + C5352 * C639 +
            C5662 + C5662 + C32870 * C649 + C5350 * C638 + C5663 + C5663 +
            C32883 * C648) *
               C32612 * C5348 +
           (C5354 * C332 + C5664 + C5664 + C32845 * C352 + C5352 * C333 +
            C5665 + C5665 + C32870 * C353 + C5350 * C334 + C5666 + C5666 +
            C32883 * C354) *
               C32612 * C5347) *
              C328 +
          ((C5350 * C335 + C5667 + C5667 + C32883 * C355 + C5352 * C336 +
            C5668 + C5668 + C32870 * C356 + C5354 * C337 + C5669 + C5669 +
            C32845 * C357) *
               C32612 * C5347 +
           (C5350 * C1102 + C5670 + C5670 + C32883 * C1120 + C5352 * C1103 +
            C5671 + C5671 + C32870 * C1121 + C5354 * C1104 + C5672 + C5672 +
            C32845 * C1122) *
               C32612 * C5348 +
           (C5350 * C1105 + C5673 + C5673 + C32883 * C1123 + C5352 * C1106 +
            C5674 + C5674 + C32870 * C1124 + C5354 * C1107 + C5675 + C5675 +
            C32845 * C1125) *
               C32612 * C32854) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           (C6256 * C229 + C6260 + C6260 + C32507 * C249) * C32612 * C6252 +
           (C6256 * C230 + C6261 + C6261 + C32507 * C250) * C32612 * C6253 +
           (C6256 * C919 + C6262 + C6262 + C32507 * C931) * C32612 * C6254 +
           (C6256 * C920 + C6263 + C6263 + C32507 * C932) * C32612 * C6255) *
              C32570 * C32556 * C110 -
          ((C6256 * C921 + C6264 + C6264 + C32507 * C933) * C32612 * C6255 +
           (C6256 * C918 + C6265 + C6265 + C32507 * C930) * C32612 * C6254 +
           (C6256 * C231 + C6266 + C6266 + C32507 * C251) * C32612 * C6253 +
           (C6256 * C228 + C6267 + C6267 + C32507 * C248) * C32612 * C6252 +
           (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32612 * C6251) *
              C32570 * C32556 * C111 +
          ((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32612 * C6251 +
           (C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32612 * C6252 +
           (C6256 * C232 + C6271 + C6271 + C32507 * C252) * C32612 * C6253 +
           (C6256 * C917 + C6272 + C6272 + C32507 * C929) * C32612 * C6254 +
           (C6256 * C922 + C6273 + C6273 + C32507 * C934) * C32612 * C6255) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
              C32570 * C221 -
          (C6373 * C6255 + C6372 * C6254 + C6371 * C6253 + C6370 * C6252 +
           C6369 * C6251) *
              C32570 * C222 +
          (C6370 * C6251 + C6371 * C6252 + C6372 * C6253 + C6373 * C6254 +
           (C6256 * C6336 + C6353 + C6353 + C32507 * C6340) * C32612 * C6255) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
              C327 -
          ((C6256 * C6435 + C6445 + C6445 + C32507 * C6441) * C32612 * C6255 +
           (C6256 * C1630 + C6446 + C6446 + C32507 * C1636) * C32612 * C6254 +
           (C6256 * C1101 + C6447 + C6447 + C32507 * C1119) * C32612 * C6253 +
           (C6256 * C638 + C6448 + C6448 + C32507 * C648) * C32612 * C6252 +
           (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32612 * C6251) *
              C328 +
          ((C6256 * C335 + C6450 + C6450 + C32507 * C355) * C32612 * C6251 +
           (C6256 * C1102 + C6451 + C6451 + C32507 * C1120) * C32612 * C6252 +
           (C6256 * C1105 + C6452 + C6452 + C32507 * C1123) * C32612 * C6253 +
           (C6256 * C6436 + C6453 + C6453 + C32507 * C6442) * C32612 * C6254 +
           (C6256 * C6437 + C6454 + C6454 + C32507 * C6443) * C32612 * C6255) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C10454 +
           (C5350 * C334 + C5666 + C5666 + C32883 * C354 + C5352 * C333 +
            C5665 + C5665 + C32870 * C353 + C5354 * C332 + C5664 + C5664 +
            C32845 * C352) *
               C10455 +
           (C5350 * C335 + C5667 + C5667 + C32883 * C355 + C5352 * C336 +
            C5668 + C5668 + C32870 * C356 + C5354 * C337 + C5669 + C5669 +
            C32845 * C357) *
               C32857) *
              C32600 * C32570 * C32556 * C110 -
          ((C5354 * C338 + C10458 + C10458 + C32845 * C358 + C5352 * C337 +
            C10459 + C10459 + C32870 * C357 + C5350 * C336 + C10460 + C10460 +
            C32883 * C356) *
               C32857 +
           (C5354 * C331 + C6003 + C6003 + C32845 * C351 + C5352 * C332 +
            C6002 + C6002 + C32870 * C352 + C5350 * C333 + C6001 + C6001 +
            C32883 * C353) *
               C10455 +
           (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
            C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
            C32883 * C138) *
               C10454) *
              C32600 * C32570 * C32556 * C111 +
          ((C5350 * C125 + C5375 + C5375 + C32883 * C139 + C5352 * C126 +
            C5376 + C5376 + C32870 * C140 + C5354 * C127 + C5377 + C5377 +
            C32845 * C141) *
               C10454 +
           (C5350 * C332 + C10461 + C10461 + C32883 * C352 + C5352 * C331 +
            C10462 + C10462 + C32870 * C351 + C5354 * C330 + C10463 + C10463 +
            C32845 * C350) *
               C10455 +
           (C5350 * C337 + C10464 + C10464 + C32883 * C357 + C5352 * C338 +
            C10465 + C10465 + C32870 * C358 + C5354 * C339 + C10466 + C10466 +
            C32845 * C359) *
               C32857) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C10454 +
           (C5350 * C334 + C5666 + C5666 + C32883 * C354 + C5352 * C333 +
            C5665 + C5665 + C32870 * C353 + C5354 * C332 + C5664 + C5664 +
            C32845 * C352) *
               C10455 +
           (C5350 * C335 + C5667 + C5667 + C32883 * C355 + C5352 * C336 +
            C5668 + C5668 + C32870 * C356 + C5354 * C337 + C5669 + C5669 +
            C32845 * C357) *
               C32857) *
              C32600 * C32570 * C221 -
          ((C5354 * C1104 + C5672 + C5672 + C32845 * C1122 + C5352 * C1103 +
            C5671 + C5671 + C32870 * C1121 + C5350 * C1102 + C5670 + C5670 +
            C32883 * C1120) *
               C32857 +
           (C6186 + C6187 + C6188) * C10455 +
           (C5538 + C5537 + C5536) * C10454) *
              C32600 * C32570 * C222 +
          (C5546 * C10454 + (C6185 + C6184 + C6183) * C10455 +
           (C5350 * C1105 + C5673 + C5673 + C32883 * C1123 + C5352 * C1106 +
            C5674 + C5674 + C32870 * C1124 + C5354 * C1107 + C5675 + C5675 +
            C32845 * C1125) *
               C32857) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C10454 +
           (C10729 + C10730 + C10731) * C10455 + C10739 * C32857) *
              C32600 * C327 -
          ((C10735 + C10736 + C10737) * C32857 +
           (C10734 + C10733 + C10732) * C10455 +
           (C10731 + C10730 + C10729) * C10454) *
              C32600 * C328 +
          (C10739 * C10454 + (C10737 + C10736 + C10735) * C10455 +
           (C5350 * C2017 + C10708 + C10708 + C32883 * C2029 + C5352 * C2018 +
            C10709 + C10709 + C32870 * C2030 + C5354 * C2019 + C10710 + C10710 +
            C32845 * C2031) *
               C32857) *
              C32600 * C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C10454 +
            C7165 * C10455 + C7166 * C32857) *
               C32886 +
           (C6364 * C10454 + C6760 * C10455 + C7013 * C32857) * C32874 +
           (C6365 * C10454 + C6759 * C10455 + C7014 * C32857) * C32854) *
              C32570 * C32556 * C110 -
          ((C7341 * C32857 + C7340 * C10455 + C6558 * C10454) * C32854 +
           (C7339 * C32857 + C7338 * C10455 + C6557 * C10454) * C32874 +
           (C7507 * C32857 + C7506 * C10455 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C10454) *
               C32886) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C10454 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C10455 +
            (C6256 * C337 + C6879 + C6879 + C32507 * C357) * C32857) *
               C32886 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C10454 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C10455 +
            (C6256 * C1104 + C6881 + C6881 + C32507 * C1122) * C32857) *
               C32874 +
           ((C6256 * C232 + C6271 + C6271 + C32507 * C252) * C10454 +
            (C6256 * C1099 + C6882 + C6882 + C32507 * C1117) * C10455 +
            (C6256 * C1107 + C6883 + C6883 + C32507 * C1125) * C32857) *
               C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C10454 +
            C7165 * C10455 + C7166 * C32857) *
               C32886 +
           (C11452 + C11453 + C11454) * C32874 + C11462 * C32854) *
              C32570 * C221 -
          ((C11458 + C11459 + C11460) * C32854 +
           (C11457 + C11456 + C11455) * C32874 +
           (C11454 + C11453 + C11452) * C32886) *
              C32570 * C222 +
          (C11462 * C32886 + (C11460 + C11459 + C11458) * C32874 +
           (C6367 * C10454 + C6757 * C10455 +
            (C6256 * C6437 + C6454 + C6454 + C32507 * C6443) * C32857) *
               C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C10454 +
            C7165 * C10455 + C7166 * C32857) *
               C32886 +
           (C11452 + C11453 + C11454) * C32874 + C11462 * C32854) *
              C327 -
          ((C7167 * C32857 + C7014 * C10455 + C6759 * C10454) * C32854 +
           (C7168 * C32857 + C7013 * C10455 + C6760 * C10454) * C32874 +
           (C7169 * C32857 + C7166 * C10455 + C7165 * C10454) * C32886) *
              C328 +
          ((C7166 * C10454 + C7169 * C10455 +
            (C6256 * C2017 + C7152 + C7152 + C32507 * C2029) * C32857) *
               C32886 +
           (C7013 * C10454 + C7168 * C10455 +
            (C6256 * C7130 + C7153 + C7153 + C32507 * C7136) * C32857) *
               C32874 +
           (C7014 * C10454 + C7167 * C10455 +
            (C6256 * C7131 + C7154 + C7154 + C32507 * C7137) * C32857) *
               C32854) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[73] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32612 * C32886 +
            (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
               C546 -
           ((C778 * C1099 + C1127 + C1127 + C32845 * C1117 + C776 * C1100 +
             C1128 + C1128 + C769 * C1118 + C774 * C1101 + C1129 + C1129 +
             C768 * C1119) *
                C32612 * C32854 +
            (C778 * C640 + C1130 + C1130 + C32845 * C650 + C776 * C639 + C1131 +
             C1131 + C769 * C649 + C774 * C638 + C1132 + C1132 + C768 * C648) *
                C32612 * C32874 +
            (C778 * C332 + C1133 + C1133 + C32845 * C352 + C776 * C333 + C1134 +
             C1134 + C769 * C353 + C774 * C334 + C1135 + C1135 + C768 * C354) *
                C32612 * C32886) *
               C547) *
              C32556 * C454 +
          (((C774 * C333 + C1476 + C1476 + C768 * C353 + C776 * C332 + C1477 +
             C1477 + C769 * C352 + C778 * C331 + C1478 + C1478 +
             C32845 * C351) *
                C32612 * C32886 +
            (C774 * C639 + C1479 + C1479 + C768 * C649 + C776 * C640 + C1480 +
             C1480 + C769 * C650 + C778 * C641 + C1481 + C1481 +
             C32845 * C651) *
                C32612 * C32874 +
            (C774 * C1100 + C1482 + C1482 + C768 * C1118 + C776 * C1099 +
             C1483 + C1483 + C769 * C1117 + C778 * C1472 + C1484 + C1484 +
             C32845 * C1474) *
                C32612 * C32854) *
               C547 -
           ((C1326 + C1325 + C1324) * C32612 * C32854 +
            (C1323 + C1322 + C1321) * C32612 * C32874 +
            (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
             C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                C32612 * C32886) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
            C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
            C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
            C149 + C105 * C141) *
               C32612 * C32600 * C546 -
           (C121 * C330 + C361 + C361 + C105 * C350 + C119 * C331 + C362 +
            C362 + C104 * C351 + C117 * C332 + C363 + C363 + C103 * C352 +
            C115 * C333 + C364 + C364 + C102 * C353 + C113 * C334 + C365 +
            C365 + C101 * C354) *
               C32612 * C32600 * C547) *
              C32556 * C454 +
          ((C113 * C333 + C552 + C552 + C101 * C353 + C115 * C332 + C553 +
            C553 + C102 * C352 + C117 * C331 + C554 + C554 + C103 * C351 +
            C119 * C330 + C555 + C555 + C104 * C350 + C121 * C548 + C556 +
            C556 + C105 * C550) *
               C32612 * C32600 * C547 -
           (C121 * C128 + C150 + C150 + C105 * C142 + C119 * C127 + C151 +
            C151 + C104 * C141 + C117 * C126 + C152 + C152 + C103 * C140 +
            C115 * C125 + C153 + C153 + C102 * C139 + C113 * C124 + C154 +
            C154 + C101 * C138) *
               C32612 * C32600 * C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C32612 * C5347 +
            (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
               C546 -
           ((C5354 * C1099 + C5658 + C5658 + C32845 * C1117 + C5352 * C1100 +
             C5659 + C5659 + C32870 * C1118 + C5350 * C1101 + C5660 + C5660 +
             C32883 * C1119) *
                C32612 * C32854 +
            (C5354 * C640 + C5661 + C5661 + C32845 * C650 + C5352 * C639 +
             C5662 + C5662 + C32870 * C649 + C5350 * C638 + C5663 + C5663 +
             C32883 * C648) *
                C32612 * C5348 +
            (C5354 * C332 + C5664 + C5664 + C32845 * C352 + C5352 * C333 +
             C5665 + C5665 + C32870 * C353 + C5350 * C334 + C5666 + C5666 +
             C32883 * C354) *
                C32612 * C5347) *
               C547) *
              C32556 * C454 +
          (((C5350 * C333 + C6001 + C6001 + C32883 * C353 + C5352 * C332 +
             C6002 + C6002 + C32870 * C352 + C5354 * C331 + C6003 + C6003 +
             C32845 * C351) *
                C32612 * C5347 +
            (C5350 * C639 + C6004 + C6004 + C32883 * C649 + C5352 * C640 +
             C6005 + C6005 + C32870 * C650 + C5354 * C641 + C6006 + C6006 +
             C32845 * C651) *
                C32612 * C5348 +
            (C5350 * C1100 + C6007 + C6007 + C32883 * C1118 + C5352 * C1099 +
             C6008 + C6008 + C32870 * C1117 + C5354 * C1472 + C6009 + C6009 +
             C32845 * C1474) *
                C32612 * C32854) *
               C547 -
           ((C5854 + C5853 + C5852) * C32612 * C32854 +
            (C5851 + C5850 + C5849) * C32612 * C5348 +
            (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
             C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
             C32883 * C138) *
                C32612 * C5347) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
            C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
               C546 -
           ((C6256 * C6435 + C6445 + C6445 + C32507 * C6441) * C32612 * C6255 +
            (C6256 * C1630 + C6446 + C6446 + C32507 * C1636) * C32612 * C6254 +
            (C6256 * C1101 + C6447 + C6447 + C32507 * C1119) * C32612 * C6253 +
            (C6256 * C638 + C6448 + C6448 + C32507 * C648) * C32612 * C6252 +
            (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32612 * C6251) *
               C547) *
              C32556 * C454 +
          (((C6256 * C333 + C6650 + C6650 + C32507 * C353) * C32612 * C6251 +
            (C6256 * C639 + C6651 + C6651 + C32507 * C649) * C32612 * C6252 +
            (C6256 * C1100 + C6652 + C6652 + C32507 * C1118) * C32612 * C6253 +
            (C6256 * C1631 + C6653 + C6653 + C32507 * C1637) * C32612 * C6254 +
            (C6256 * C6646 + C6654 + C6654 + C32507 * C6648) * C32612 * C6255) *
               C547 -
           (C6564 * C6255 + C6563 * C6254 + C6562 * C6253 + C6561 * C6252 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32612 * C6251) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C10454 +
            (C10729 + C10730 + C10731) * C10455 + C10739 * C32857) *
               C32600 * C546 -
           ((C10735 + C10736 + C10737) * C32857 +
            (C10734 + C10733 + C10732) * C10455 +
            (C10731 + C10730 + C10729) * C10454) *
               C32600 * C547) *
              C32556 * C454 +
          (((C11062 + C11063 + C11064) * C10454 +
            (C11065 + C11066 + C11067) * C10455 +
            (C5350 * C2015 + C11047 + C11047 + C32883 * C2027 + C5352 * C2014 +
             C11048 + C11048 + C32870 * C2026 + C5354 * C2383 + C11049 +
             C11049 + C32845 * C2385) *
                C32857) *
               C32600 * C547 -
           ((C11067 + C11066 + C11065) * C32857 +
            (C11064 + C11063 + C11062) * C10455 +
            (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
             C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
             C32883 * C138) *
                C10454) *
               C32600 * C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C10454 +
             C7165 * C10455 + C7166 * C32857) *
                C32886 +
            (C11452 + C11453 + C11454) * C32874 + C11462 * C32854) *
               C546 -
           ((C7167 * C32857 + C7014 * C10455 + C6759 * C10454) * C32854 +
            (C7168 * C32857 + C7013 * C10455 + C6760 * C10454) * C32874 +
            (C7169 * C32857 + C7166 * C10455 + C7165 * C10454) * C32886) *
               C547) *
              C32556 * C454 +
          (((C7506 * C10454 + C7507 * C10455 +
             (C6256 * C2015 + C7499 + C7499 + C32507 * C2027) * C32857) *
                C32886 +
            (C7338 * C10454 + C7339 * C10455 +
             (C6256 * C2566 + C7500 + C7500 + C32507 * C2572) * C32857) *
                C32874 +
            (C7340 * C10454 + C7341 * C10455 +
             (C6256 * C7491 + C7501 + C7501 + C32507 * C7493) * C32857) *
                C32854) *
               C547 -
           ((C11724 + C11723 + C11722) * C32854 +
            (C11721 + C11720 + C11719) * C32874 +
            (C7507 * C32857 + C7506 * C10455 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C10454) *
                C32886) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[74] +=
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 + C146 +
           C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 + C119 * C126 +
           C148 + C148 + C104 * C140 + C121 * C127 + C149 + C149 +
           C105 * C141) *
              C32612 * C32600 * C32570 * C221 -
          (C121 * C225 + C256 + C256 + C105 * C245 + C119 * C226 + C257 + C257 +
           C104 * C246 + C117 * C227 + C258 + C258 + C103 * C247 + C115 * C228 +
           C259 + C259 + C102 * C248 + C113 * C229 + C260 + C260 +
           C101 * C249) *
              C32612 * C32600 * C32570 * C222 +
          (C113 * C230 + C261 + C261 + C101 * C250 + C115 * C231 + C262 + C262 +
           C102 * C251 + C117 * C232 + C263 + C263 + C103 * C252 + C119 * C233 +
           C264 + C264 + C104 * C253 + C121 * C234 + C265 + C265 +
           C105 * C254) *
              C32612 * C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 + C146 +
           C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 + C119 * C126 +
           C148 + C148 + C104 * C140 + C121 * C127 + C149 + C149 +
           C105 * C141) *
              C32612 * C32600 * C32570 * C32556 * C110 -
          (C121 * C128 + C150 + C150 + C105 * C142 + C119 * C127 + C151 + C151 +
           C104 * C141 + C117 * C126 + C152 + C152 + C103 * C140 + C115 * C125 +
           C153 + C153 + C102 * C139 + C113 * C124 + C154 + C154 +
           C101 * C138) *
              C32612 * C32600 * C32570 * C32556 * C111 +
          (C113 * C125 + C155 + C155 + C101 * C139 + C115 * C126 + C156 + C156 +
           C102 * C140 + C117 * C127 + C157 + C157 + C103 * C141 + C119 * C128 +
           C158 + C158 + C104 * C142 + C121 * C129 + C159 + C159 +
           C105 * C143) *
              C32612 * C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32612 * C32886 +
           (C774 * C229 + C784 + C784 + C768 * C249 + C776 * C228 + C785 +
            C785 + C769 * C248 + C778 * C227 + C786 + C786 + C32845 * C247) *
               C32612 * C32874 +
           (C774 * C230 + C787 + C787 + C768 * C250 + C776 * C231 + C788 +
            C788 + C769 * C251 + C778 * C232 + C789 + C789 + C32845 * C252) *
               C32612 * C32854) *
              C32570 * C32556 * C110 -
          ((C778 * C233 + C790 + C790 + C32845 * C253 + C776 * C232 + C791 +
            C791 + C769 * C252 + C774 * C231 + C792 + C792 + C768 * C251) *
               C32612 * C32854 +
           (C778 * C226 + C793 + C793 + C32845 * C246 + C776 * C227 + C794 +
            C794 + C769 * C247 + C774 * C228 + C795 + C795 + C768 * C248) *
               C32612 * C32874 +
           (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
            C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
               C32612 * C32886) *
              C32570 * C32556 * C111 +
          ((C774 * C125 + C799 + C799 + C768 * C139 + C776 * C126 + C800 +
            C800 + C769 * C140 + C778 * C127 + C801 + C801 + C32845 * C141) *
               C32612 * C32886 +
           (C774 * C227 + C802 + C802 + C768 * C247 + C776 * C226 + C803 +
            C803 + C769 * C246 + C778 * C225 + C804 + C804 + C32845 * C245) *
               C32612 * C32874 +
           (C774 * C232 + C805 + C805 + C768 * C252 + C776 * C233 + C806 +
            C806 + C769 * C253 + C778 * C234 + C807 + C807 + C32845 * C254) *
               C32612 * C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32612 * C32886 +
           (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
              C32570 * C221 -
          ((C984 + C985 + C986) * C32612 * C32854 +
           (C983 + C982 + C981) * C32612 * C32874 +
           (C980 + C979 + C978) * C32612 * C32886) *
              C32570 * C222 +
          (C989 * C32886 + (C986 + C985 + C984) * C32612 * C32874 +
           (C774 * C920 + C957 + C957 + C768 * C932 + C776 * C921 + C958 +
            C958 + C769 * C933 + C778 * C922 + C959 + C959 + C32845 * C934) *
               C32612 * C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5350 * C229 + C5360 + C5360 + C32883 * C249 + C5352 * C228 +
            C5361 + C5361 + C32870 * C248 + C5354 * C227 + C5362 + C5362 +
            C32845 * C247) *
               C32612 * C5348 +
           (C5350 * C230 + C5363 + C5363 + C32883 * C250 + C5352 * C231 +
            C5364 + C5364 + C32870 * C251 + C5354 * C232 + C5365 + C5365 +
            C32845 * C252) *
               C32612 * C32854) *
              C32570 * C32556 * C110 -
          ((C5354 * C233 + C5366 + C5366 + C32845 * C253 + C5352 * C232 +
            C5367 + C5367 + C32870 * C252 + C5350 * C231 + C5368 + C5368 +
            C32883 * C251) *
               C32612 * C32854 +
           (C5354 * C226 + C5369 + C5369 + C32845 * C246 + C5352 * C227 +
            C5370 + C5370 + C32870 * C247 + C5350 * C228 + C5371 + C5371 +
            C32883 * C248) *
               C32612 * C5348 +
           (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
            C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
            C32883 * C138) *
               C32612 * C5347) *
              C32570 * C32556 * C111 +
          ((C5350 * C125 + C5375 + C5375 + C32883 * C139 + C5352 * C126 +
            C5376 + C5376 + C32870 * C140 + C5354 * C127 + C5377 + C5377 +
            C32845 * C141) *
               C32612 * C5347 +
           (C5350 * C227 + C5378 + C5378 + C32883 * C247 + C5352 * C226 +
            C5379 + C5379 + C32870 * C246 + C5354 * C225 + C5380 + C5380 +
            C32845 * C245) *
               C32612 * C5348 +
           (C5350 * C232 + C5381 + C5381 + C32883 * C252 + C5352 * C233 +
            C5382 + C5382 + C32870 * C253 + C5354 * C234 + C5383 + C5383 +
            C32845 * C254) *
               C32612 * C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
              C32570 * C221 -
          ((C5542 + C5543 + C5544) * C32612 * C32854 +
           (C5541 + C5540 + C5539) * C32612 * C5348 +
           (C5538 + C5537 + C5536) * C32612 * C5347) *
              C32570 * C222 +
          (C5547 * C5347 + (C5544 + C5543 + C5542) * C32612 * C5348 +
           (C5350 * C920 + C5515 + C5515 + C32883 * C932 + C5352 * C921 +
            C5516 + C5516 + C32870 * C933 + C5354 * C922 + C5517 + C5517 +
            C32845 * C934) *
               C32612 * C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           (C6256 * C229 + C6260 + C6260 + C32507 * C249) * C32612 * C6252 +
           (C6256 * C230 + C6261 + C6261 + C32507 * C250) * C32612 * C6253 +
           (C6256 * C919 + C6262 + C6262 + C32507 * C931) * C32612 * C6254 +
           (C6256 * C920 + C6263 + C6263 + C32507 * C932) * C32612 * C6255) *
              C32570 * C32556 * C110 -
          ((C6256 * C921 + C6264 + C6264 + C32507 * C933) * C32612 * C6255 +
           (C6256 * C918 + C6265 + C6265 + C32507 * C930) * C32612 * C6254 +
           (C6256 * C231 + C6266 + C6266 + C32507 * C251) * C32612 * C6253 +
           (C6256 * C228 + C6267 + C6267 + C32507 * C248) * C32612 * C6252 +
           (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32612 * C6251) *
              C32570 * C32556 * C111 +
          ((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32612 * C6251 +
           (C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32612 * C6252 +
           (C6256 * C232 + C6271 + C6271 + C32507 * C252) * C32612 * C6253 +
           (C6256 * C917 + C6272 + C6272 + C32507 * C929) * C32612 * C6254 +
           (C6256 * C922 + C6273 + C6273 + C32507 * C934) * C32612 * C6255) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
              C32570 * C221 -
          (C6373 * C6255 + C6372 * C6254 + C6371 * C6253 + C6370 * C6252 +
           C6369 * C6251) *
              C32570 * C222 +
          (C6370 * C6251 + C6371 * C6252 + C6372 * C6253 + C6373 * C6254 +
           (C6256 * C6336 + C6353 + C6353 + C32507 * C6340) * C32612 * C6255) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C10454 +
           (C5350 * C334 + C5666 + C5666 + C32883 * C354 + C5352 * C333 +
            C5665 + C5665 + C32870 * C353 + C5354 * C332 + C5664 + C5664 +
            C32845 * C352) *
               C10455 +
           (C5350 * C335 + C5667 + C5667 + C32883 * C355 + C5352 * C336 +
            C5668 + C5668 + C32870 * C356 + C5354 * C337 + C5669 + C5669 +
            C32845 * C357) *
               C32857) *
              C32600 * C32570 * C32556 * C110 -
          ((C5354 * C338 + C10458 + C10458 + C32845 * C358 + C5352 * C337 +
            C10459 + C10459 + C32870 * C357 + C5350 * C336 + C10460 + C10460 +
            C32883 * C356) *
               C32857 +
           (C5354 * C331 + C6003 + C6003 + C32845 * C351 + C5352 * C332 +
            C6002 + C6002 + C32870 * C352 + C5350 * C333 + C6001 + C6001 +
            C32883 * C353) *
               C10455 +
           (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
            C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
            C32883 * C138) *
               C10454) *
              C32600 * C32570 * C32556 * C111 +
          ((C5350 * C125 + C5375 + C5375 + C32883 * C139 + C5352 * C126 +
            C5376 + C5376 + C32870 * C140 + C5354 * C127 + C5377 + C5377 +
            C32845 * C141) *
               C10454 +
           (C5350 * C332 + C10461 + C10461 + C32883 * C352 + C5352 * C331 +
            C10462 + C10462 + C32870 * C351 + C5354 * C330 + C10463 + C10463 +
            C32845 * C350) *
               C10455 +
           (C5350 * C337 + C10464 + C10464 + C32883 * C357 + C5352 * C338 +
            C10465 + C10465 + C32870 * C358 + C5354 * C339 + C10466 + C10466 +
            C32845 * C359) *
               C32857) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C10454 +
           (C5350 * C334 + C5666 + C5666 + C32883 * C354 + C5352 * C333 +
            C5665 + C5665 + C32870 * C353 + C5354 * C332 + C5664 + C5664 +
            C32845 * C352) *
               C10455 +
           (C5350 * C335 + C5667 + C5667 + C32883 * C355 + C5352 * C336 +
            C5668 + C5668 + C32870 * C356 + C5354 * C337 + C5669 + C5669 +
            C32845 * C357) *
               C32857) *
              C32600 * C32570 * C221 -
          ((C5354 * C1104 + C5672 + C5672 + C32845 * C1122 + C5352 * C1103 +
            C5671 + C5671 + C32870 * C1121 + C5350 * C1102 + C5670 + C5670 +
            C32883 * C1120) *
               C32857 +
           (C6186 + C6187 + C6188) * C10455 +
           (C5538 + C5537 + C5536) * C10454) *
              C32600 * C32570 * C222 +
          (C5546 * C10454 + (C6185 + C6184 + C6183) * C10455 +
           (C5350 * C1105 + C5673 + C5673 + C32883 * C1123 + C5352 * C1106 +
            C5674 + C5674 + C32870 * C1124 + C5354 * C1107 + C5675 + C5675 +
            C32845 * C1125) *
               C32857) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C10454 +
            C7165 * C10455 + C7166 * C32857) *
               C32886 +
           (C6364 * C10454 + C6760 * C10455 + C7013 * C32857) * C32874 +
           (C6365 * C10454 + C6759 * C10455 + C7014 * C32857) * C32854) *
              C32570 * C32556 * C110 -
          ((C7341 * C32857 + C7340 * C10455 + C6558 * C10454) * C32854 +
           (C7339 * C32857 + C7338 * C10455 + C6557 * C10454) * C32874 +
           (C7507 * C32857 + C7506 * C10455 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C10454) *
               C32886) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C10454 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C10455 +
            (C6256 * C337 + C6879 + C6879 + C32507 * C357) * C32857) *
               C32886 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C10454 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C10455 +
            (C6256 * C1104 + C6881 + C6881 + C32507 * C1122) * C32857) *
               C32874 +
           ((C6256 * C232 + C6271 + C6271 + C32507 * C252) * C10454 +
            (C6256 * C1099 + C6882 + C6882 + C32507 * C1117) * C10455 +
            (C6256 * C1107 + C6883 + C6883 + C32507 * C1125) * C32857) *
               C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C10454 +
            C7165 * C10455 + C7166 * C32857) *
               C32886 +
           (C11452 + C11453 + C11454) * C32874 + C11462 * C32854) *
              C32570 * C221 -
          ((C11458 + C11459 + C11460) * C32854 +
           (C11457 + C11456 + C11455) * C32874 +
           (C11454 + C11453 + C11452) * C32886) *
              C32570 * C222 +
          (C11462 * C32886 + (C11460 + C11459 + C11458) * C32874 +
           (C6367 * C10454 + C6757 * C10455 +
            (C6256 * C6437 + C6454 + C6454 + C32507 * C6443) * C32857) *
               C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[75] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
              C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 +
              C17977 + C17964 * C139) *
                 C21058 +
             (C19293 + C19294 + C19295) * C32699) *
                C32823 +
            ((C18154 + C18155 + C18156) * C21058 + C19922 * C32699) * C32659) *
               C32570 * C452 -
           (((C18801 + C18802 + C18803) * C32699 +
             (C18159 + C18158 + C18157) * C21058) *
                C32659 +
            (C19923 * C32699 + (C18156 + C18155 + C18154) * C21058) * C32823) *
               C32570 * C453) *
              C454 +
          ((((C18467 + C18468 + C18469) * C21058 +
             (C19508 + C19509 + C19510) * C32699) *
                C32823 +
            ((C18470 + C18471 + C18472) * C21058 +
             (C31695 * C1100 + C18625 + C18625 + C32512 * C1118 +
              C31688 * C1099 + C18626 + C18626 + C32520 * C1117 +
              C17972 * C1472 + C18627 + C18627 + C17964 * C1474) *
                 C32699) *
                C32659) *
               C32570 * C453 -
           (((C19510 + C19509 + C19508) * C32699 +
             (C18469 + C18468 + C18467) * C21058) *
                C32659 +
            ((C19725 + C19724 + C19723) * C32699 +
             (C17972 * C126 + C17990 + C17990 + C17964 * C140 + C31688 * C125 +
              C17991 + C17991 + C32520 * C139 + C31695 * C124 + C17992 +
              C17992 + C32512 * C138) *
                 C21058) *
                C32823) *
               C32570 * C452) *
              C455)) /
        (p * q * std::sqrt(p + q));
    d2ee[76] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
              C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 +
              C17977 + C17964 * C139) *
                 C21058 +
             (C19293 + C19294 + C19295) * C32699) *
                C32823 +
            ((C18154 + C18155 + C18156) * C21058 + C19922 * C32699) * C32659) *
               C546 -
           (((C19296 + C19297 + C19298) * C32699 + C19923 * C21058) * C32659 +
            ((C19299 + C19300 + C19301) * C32699 +
             (C19295 + C19294 + C19293) * C21058) *
                C32823) *
               C547) *
              C452 +
          (((C19922 * C21058 + (C19298 + C19297 + C19296) * C32699) * C32823 +
            ((C18803 + C18802 + C18801) * C21058 +
             (C31695 * C1105 + C18291 + C18291 + C32512 * C1123 +
              C31688 * C1106 + C18292 + C18292 + C32520 * C1124 +
              C17972 * C1107 + C18293 + C18293 + C17964 * C1125) *
                 C32699) *
                C32659) *
               C547 -
           (((C18801 + C18802 + C18803) * C32699 +
             (C18159 + C18158 + C18157) * C21058) *
                C32659 +
            (C19923 * C32699 + (C18156 + C18155 + C18154) * C21058) * C32823) *
               C546) *
              C453) *
         C32544) /
        (p * q * std::sqrt(p + q));
    d2ee[77] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
             C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 + C17977 +
             C17964 * C139) *
                C21058 +
            (C19293 + C19294 + C19295) * C32699) *
               C32823 +
           ((C18154 + C18155 + C18156) * C21058 + C19922 * C32699) * C32659) *
              C32570 * C221 -
          (((C18801 + C18802 + C18803) * C32699 +
            (C18159 + C18158 + C18157) * C21058) *
               C32659 +
           (C19923 * C32699 + (C18156 + C18155 + C18154) * C21058) * C32823) *
              C32570 * C222 +
          ((C18164 * C21058 + (C18803 + C18802 + C18801) * C32699) * C32823 +
           ((C18162 + C18161 + C18160) * C21058 +
            (C31695 * C1630 + C18786 + C18786 + C32512 * C1636 +
             C31688 * C1631 + C18787 + C18787 + C32520 * C1637 +
             C17972 * C1632 + C18788 + C18788 + C17964 * C1638) *
                C32699) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
             C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 + C17977 +
             C17964 * C139) *
                C21058 +
            (C19293 + C19294 + C19295) * C32699) *
               C32823 +
           ((C18154 + C18155 + C18156) * C21058 + C19922 * C32699) * C32659) *
              C32570 * C32556 * C110 -
          (((C19510 + C19509 + C19508) * C32699 +
            (C18469 + C18468 + C18467) * C21058) *
               C32659 +
           ((C19725 + C19724 + C19723) * C32699 +
            (C17972 * C126 + C17990 + C17990 + C17964 * C140 + C31688 * C125 +
             C17991 + C17991 + C32520 * C139 + C31695 * C124 + C17992 + C17992 +
             C32512 * C138) *
                C21058) *
               C32823) *
              C32570 * C32556 * C111 +
          (((C31695 * C125 + C17993 + C17993 + C32512 * C139 + C31688 * C126 +
             C17994 + C17994 + C32520 * C140 + C17972 * C127 + C17995 + C17995 +
             C17964 * C141) *
                C21058 +
            (C31695 * C332 + C18953 + C18953 + C32512 * C352 + C31688 * C331 +
             C18954 + C18954 + C32520 * C351 + C17972 * C330 + C18955 + C18955 +
             C17964 * C350) *
                C32699) *
               C32823 +
           ((C31695 * C227 + C17996 + C17996 + C32512 * C247 + C31688 * C226 +
             C17997 + C17997 + C32520 * C246 + C17972 * C225 + C17998 + C17998 +
             C17964 * C245) *
                C21058 +
            (C31695 * C640 + C18956 + C18956 + C32512 * C650 + C31688 * C641 +
             C18957 + C18957 + C32520 * C651 + C17972 * C642 + C18958 + C18958 +
             C17964 * C652) *
                C32699) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
             C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 + C17977 +
             C17964 * C139) *
                C21058 +
            (C19293 + C19294 + C19295) * C32699) *
               C32823 +
           ((C18154 + C18155 + C18156) * C21058 + C19922 * C32699) * C32659) *
              C327 -
          (((C19296 + C19297 + C19298) * C32699 + C19923 * C21058) * C32659 +
           ((C19299 + C19300 + C19301) * C32699 +
            (C19295 + C19294 + C19293) * C21058) *
               C32823) *
              C328 +
          (((C19301 + C19300 + C19299) * C21058 +
            (C31695 * C2016 + C19269 + C19269 + C32512 * C2028 +
             C31688 * C2015 + C19270 + C19270 + C32520 * C2027 +
             C17972 * C2014 + C19271 + C19271 + C17964 * C2026) *
                C32699) *
               C32823 +
           ((C19298 + C19297 + C19296) * C21058 +
            (C31695 * C2565 + C19272 + C19272 + C32512 * C2571 +
             C31688 * C2566 + C19273 + C19273 + C32520 * C2572 +
             C17972 * C2567 + C19274 + C19274 + C17964 * C2573) *
                C32699) *
               C32659) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[78] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
              C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 +
              C17977 + C17964 * C139) *
                 C21058 +
             (C19293 + C19294 + C19295) * C32699) *
                C32823 +
            ((C18154 + C18155 + C18156) * C21058 + C19922 * C32699) * C32659) *
               C546 -
           (((C19296 + C19297 + C19298) * C32699 + C19923 * C21058) * C32659 +
            ((C19299 + C19300 + C19301) * C32699 +
             (C19295 + C19294 + C19293) * C21058) *
                C32823) *
               C547) *
              C32556 * C454 +
          ((((C19723 + C19724 + C19725) * C21058 +
             (C31695 * C336 + C19711 + C19711 + C32512 * C356 + C31688 * C337 +
              C19712 + C19712 + C32520 * C357 + C17972 * C338 + C19713 +
              C19713 + C17964 * C358) *
                 C32699) *
                C32823 +
            ((C19508 + C19509 + C19510) * C21058 +
             (C31695 * C1103 + C19714 + C19714 + C32512 * C1121 +
              C31688 * C1104 + C19715 + C19715 + C32520 * C1122 +
              C17972 * C2231 + C19716 + C19716 + C17964 * C2233) *
                 C32699) *
                C32659) *
               C547 -
           (((C19510 + C19509 + C19508) * C32699 +
             (C18469 + C18468 + C18467) * C21058) *
                C32659 +
            ((C19725 + C19724 + C19723) * C32699 +
             (C17972 * C126 + C17990 + C17990 + C17964 * C140 + C31688 * C125 +
              C17991 + C17991 + C32520 * C139 + C31695 * C124 + C17992 +
              C17992 + C32512 * C138) *
                 C21058) *
                C32823) *
               C546) *
              C32556 * C455)) /
        (p * q * std::sqrt(p + q));
    d2ee[79] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
             C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 + C17977 +
             C17964 * C139) *
                C21058 +
            (C19293 + C19294 + C19295) * C32699) *
               C32823 +
           ((C18154 + C18155 + C18156) * C21058 + C19922 * C32699) * C32659) *
              C32570 * C32556 * C110 -
          (((C19510 + C19509 + C19508) * C32699 +
            (C18469 + C18468 + C18467) * C21058) *
               C32659 +
           ((C19725 + C19724 + C19723) * C32699 +
            (C17972 * C126 + C17990 + C17990 + C17964 * C140 + C31688 * C125 +
             C17991 + C17991 + C32520 * C139 + C31695 * C124 + C17992 + C17992 +
             C32512 * C138) *
                C21058) *
               C32823) *
              C32570 * C32556 * C111 +
          (((C31695 * C125 + C17993 + C17993 + C32512 * C139 + C31688 * C126 +
             C17994 + C17994 + C32520 * C140 + C17972 * C127 + C17995 + C17995 +
             C17964 * C141) *
                C21058 +
            (C31695 * C332 + C18953 + C18953 + C32512 * C352 + C31688 * C331 +
             C18954 + C18954 + C32520 * C351 + C17972 * C330 + C18955 + C18955 +
             C17964 * C350) *
                C32699) *
               C32823 +
           ((C31695 * C227 + C17996 + C17996 + C32512 * C247 + C31688 * C226 +
             C17997 + C17997 + C32520 * C246 + C17972 * C225 + C17998 + C17998 +
             C17964 * C245) *
                C21058 +
            (C31695 * C640 + C18956 + C18956 + C32512 * C650 + C31688 * C641 +
             C18957 + C18957 + C32520 * C651 + C17972 * C642 + C18958 + C18958 +
             C17964 * C652) *
                C32699) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31695 * C123 + C17975 + C17975 + C32512 * C137 + C31688 * C124 +
             C17976 + C17976 + C32520 * C138 + C17972 * C125 + C17977 + C17977 +
             C17964 * C139) *
                C21058 +
            (C19293 + C19294 + C19295) * C32699) *
               C32823 +
           ((C18154 + C18155 + C18156) * C21058 + C19922 * C32699) * C32659) *
              C32570 * C221 -
          (((C18801 + C18802 + C18803) * C32699 +
            (C18159 + C18158 + C18157) * C21058) *
               C32659 +
           (C19923 * C32699 + (C18156 + C18155 + C18154) * C21058) * C32823) *
              C32570 * C222 +
          ((C18164 * C21058 + (C18803 + C18802 + C18801) * C32699) * C32823 +
           ((C18162 + C18161 + C18160) * C21058 +
            (C31695 * C1630 + C18786 + C18786 + C32512 * C1636 +
             C31688 * C1631 + C18787 + C18787 + C32520 * C1637 +
             C17972 * C1632 + C18788 + C18788 + C17964 * C1638) *
                C32699) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[80] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
              C15955 + C15955 + C32517 * C138) *
                 C32695 +
             (C17211 + C17212) * C32702 + C17219 * C24588) *
                C32823 +
            ((C16112 + C16113) * C32695 + C17848 * C32702 + C17178 * C24588) *
                C32659) *
               C32570 * C452 -
           (((C17022 + C17023) * C24588 + C20960 * C32702 +
             (C16115 + C16114) * C32695) *
                C32659 +
            (C17849 * C24588 + C17850 * C32702 + (C16113 + C16112) * C32695) *
                C32823) *
               C32570 * C453) *
              C454 +
          ((((C16394 + C16395) * C32695 + (C17432 + C17433) * C32702 +
             (C17434 + C17435) * C24588) *
                C32823 +
            ((C16396 + C16397) * C32695 + (C20570 + C20571) * C32702 +
             (C15949 * C1106 + C17422 + C17422 + C15943 * C1124 +
              C15951 * C1107 + C17423 + C17423 + C32517 * C1125) *
                 C24588) *
                C32659) *
               C32570 * C453 -
           (((C17435 + C17434) * C24588 + (C17433 + C17432) * C32702 +
             (C16395 + C16394) * C32695) *
                C32659 +
            ((C17653 + C17652) * C24588 + (C17651 + C17650) * C32702 +
             (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
              C15969 + C15969 + C15943 * C138) *
                 C32695) *
                C32823) *
               C32570 * C452) *
              C455)) /
        (p * q * std::sqrt(p + q));
    d2ee[81] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
              C15955 + C15955 + C32517 * C138) *
                 C32695 +
             (C17211 + C17212) * C32702 + C17219 * C24588) *
                C32823 +
            ((C16112 + C16113) * C32695 + C17848 * C32702 + C17178 * C24588) *
                C32659) *
               C546 -
           (((C17215 + C17216) * C24588 + C17849 * C32702 + C17850 * C32695) *
                C32659 +
            ((C17217 + C17218) * C24588 + (C17214 + C17213) * C32702 +
             (C17212 + C17211) * C32695) *
                C32823) *
               C547) *
              C452 +
          (((C17848 * C32695 + C17178 * C32702 + (C17216 + C17215) * C24588) *
                C32823 +
            (C20219 * C32695 + (C17023 + C17022) * C32702 +
             (C15949 * C7129 + C17851 + C17851 + C15943 * C7135 +
              C15951 * C7491 + C17852 + C17852 + C32517 * C7493) *
                 C24588) *
                C32659) *
               C547 -
           (((C17022 + C17023) * C24588 + C20960 * C32702 +
             (C16115 + C16114) * C32695) *
                C32659 +
            (C17849 * C24588 + C17850 * C32702 + (C16113 + C16112) * C32695) *
                C32823) *
               C546) *
              C453) *
         C32544) /
        (p * q * std::sqrt(p + q));
    d2ee[82] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32695 +
            (C17211 + C17212) * C32702 + C17219 * C24588) *
               C32823 +
           ((C16112 + C16113) * C32695 + C17848 * C32702 + C17178 * C24588) *
               C32659) *
              C32570 * C221 -
          (((C17022 + C17023) * C24588 + C20960 * C32702 +
            (C16115 + C16114) * C32695) *
               C32659 +
           (C17849 * C24588 + C17850 * C32702 + (C16113 + C16112) * C32695) *
               C32823) *
              C32570 * C222 +
          ((C16120 * C32695 + C20219 * C32702 + (C17023 + C17022) * C24588) *
               C32823 +
           (C16121 * C32695 + (C16695 + C16694) * C32702 +
            (C15949 * C6436 + C16236 + C16236 + C15943 * C6442 +
             C15951 * C7315 + C16237 + C16237 + C32517 * C7317) *
                C24588) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32695 +
            (C17211 + C17212) * C32702 + C17219 * C24588) *
               C32823 +
           ((C16112 + C16113) * C32695 + C17848 * C32702 + C17178 * C24588) *
               C32659) *
              C32570 * C32556 * C110 -
          (((C17435 + C17434) * C24588 + (C17433 + C17432) * C32702 +
            (C16395 + C16394) * C32695) *
               C32659 +
           ((C17653 + C17652) * C24588 + (C17651 + C17650) * C32702 +
            (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
             C15969 + C15969 + C15943 * C138) *
                C32695) *
               C32823) *
              C32570 * C32556 * C111 +
          (((C15949 * C125 + C15970 + C15970 + C15943 * C139 + C15951 * C126 +
             C15971 + C15971 + C32517 * C140) *
                C32695 +
            (C15949 * C332 + C16850 + C16850 + C15943 * C352 + C15951 * C331 +
             C16851 + C16851 + C32517 * C351) *
                C32702 +
            (C15949 * C337 + C16852 + C16852 + C15943 * C357 + C15951 * C338 +
             C16853 + C16853 + C32517 * C358) *
                C24588) *
               C32823 +
           ((C15949 * C227 + C15972 + C15972 + C15943 * C247 + C15951 * C226 +
             C15973 + C15973 + C32517 * C246) *
                C32695 +
            (C15949 * C640 + C16854 + C16854 + C15943 * C650 + C15951 * C641 +
             C16855 + C16855 + C32517 * C651) *
                C32702 +
            (C15949 * C1104 + C16856 + C16856 + C15943 * C1122 +
             C15951 * C2231 + C16857 + C16857 + C32517 * C2233) *
                C24588) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32695 +
            (C17211 + C17212) * C32702 + C17219 * C24588) *
               C32823 +
           ((C16112 + C16113) * C32695 + C17848 * C32702 + C17178 * C24588) *
               C32659) *
              C327 -
          (((C17215 + C17216) * C24588 + C17849 * C32702 + C17850 * C32695) *
               C32659 +
           ((C17217 + C17218) * C24588 + (C17214 + C17213) * C32702 +
            (C17212 + C17211) * C32695) *
               C32823) *
              C328 +
          ((C17219 * C32695 + C23042 * C32702 + (C23054 + C23053) * C24588) *
               C32823 +
           (C17178 * C32695 + (C17216 + C17215) * C32702 +
            (C15949 * C7130 + C17193 + C17193 + C15943 * C7136 +
             C15951 * C12316 + C17194 + C17194 + C32517 * C12318) *
                C24588) *
               C32659) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[83] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
              C15955 + C15955 + C32517 * C138) *
                 C32695 +
             (C17211 + C17212) * C32702 + C17219 * C24588) *
                C32823 +
            ((C16112 + C16113) * C32695 + C17848 * C32702 + C17178 * C24588) *
                C32659) *
               C546 -
           (((C17215 + C17216) * C24588 + C17849 * C32702 + C17850 * C32695) *
                C32659 +
            ((C17217 + C17218) * C24588 + (C17214 + C17213) * C32702 +
             (C17212 + C17211) * C32695) *
                C32823) *
               C547) *
              C32556 * C454 +
          ((((C17650 + C17651) * C32695 + (C17652 + C17653) * C32702 +
             (C23325 + C23326) * C24588) *
                C32823 +
            ((C17432 + C17433) * C32695 + (C17434 + C17435) * C32702 +
             (C15949 * C2566 + C17640 + C17640 + C15943 * C2572 +
              C15951 * C2567 + C17641 + C17641 + C32517 * C2573) *
                 C24588) *
                C32659) *
               C547 -
           (((C17435 + C17434) * C24588 + (C17433 + C17432) * C32702 +
             (C16395 + C16394) * C32695) *
                C32659 +
            ((C17653 + C17652) * C24588 + (C17651 + C17650) * C32702 +
             (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
              C15969 + C15969 + C15943 * C138) *
                 C32695) *
                C32823) *
               C546) *
              C32556 * C455)) /
        (p * q * std::sqrt(p + q));
    d2ee[84] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32695 +
            (C17211 + C17212) * C32702 + C17219 * C24588) *
               C32823 +
           ((C16112 + C16113) * C32695 + C17848 * C32702 + C17178 * C24588) *
               C32659) *
              C32570 * C32556 * C110 -
          (((C17435 + C17434) * C24588 + (C17433 + C17432) * C32702 +
            (C16395 + C16394) * C32695) *
               C32659 +
           ((C17653 + C17652) * C24588 + (C17651 + C17650) * C32702 +
            (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
             C15969 + C15969 + C15943 * C138) *
                C32695) *
               C32823) *
              C32570 * C32556 * C111 +
          (((C15949 * C125 + C15970 + C15970 + C15943 * C139 + C15951 * C126 +
             C15971 + C15971 + C32517 * C140) *
                C32695 +
            (C15949 * C332 + C16850 + C16850 + C15943 * C352 + C15951 * C331 +
             C16851 + C16851 + C32517 * C351) *
                C32702 +
            (C15949 * C337 + C16852 + C16852 + C15943 * C357 + C15951 * C338 +
             C16853 + C16853 + C32517 * C358) *
                C24588) *
               C32823 +
           ((C15949 * C227 + C15972 + C15972 + C15943 * C247 + C15951 * C226 +
             C15973 + C15973 + C32517 * C246) *
                C32695 +
            (C15949 * C640 + C16854 + C16854 + C15943 * C650 + C15951 * C641 +
             C16855 + C16855 + C32517 * C651) *
                C32702 +
            (C15949 * C1104 + C16856 + C16856 + C15943 * C1122 +
             C15951 * C2231 + C16857 + C16857 + C32517 * C2233) *
                C24588) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32695 +
            (C17211 + C17212) * C32702 + C17219 * C24588) *
               C32823 +
           ((C16112 + C16113) * C32695 + C17848 * C32702 + C17178 * C24588) *
               C32659) *
              C32570 * C221 -
          (((C17022 + C17023) * C24588 + C20960 * C32702 +
            (C16115 + C16114) * C32695) *
               C32659 +
           (C17849 * C24588 + C17850 * C32702 + (C16113 + C16112) * C32695) *
               C32823) *
              C32570 * C222 +
          ((C16120 * C32695 + C20219 * C32702 + (C17023 + C17022) * C24588) *
               C32823 +
           (C16121 * C32695 + (C16695 + C16694) * C32702 +
            (C15949 * C6436 + C16236 + C16236 + C15943 * C6442 +
             C15951 * C7315 + C16237 + C16237 + C32517 * C7317) *
                C24588) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[85] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
              C15955 + C15955 + C32517 * C138) *
                 C21058 +
             (C17211 + C17212) * C32699) *
                C32886 +
            ((C16112 + C16113) * C21058 + C17848 * C32699) * C32874 +
            C22013 * C32854) *
               C32570 * C452 -
           (((C16694 + C16695) * C32699 + (C16117 + C16116) * C21058) * C32854 +
            (C20960 * C32699 + (C16115 + C16114) * C21058) * C32874 +
            (C17850 * C32699 + (C16113 + C16112) * C21058) * C32886) *
               C32570 * C453) *
              C454 +
          ((((C16394 + C16395) * C21058 + (C17432 + C17433) * C32699) * C32886 +
            ((C16396 + C16397) * C21058 + (C20570 + C20571) * C32699) * C32874 +
            ((C16398 + C16399) * C21058 +
             (C15949 * C1631 + C16536 + C16536 + C15943 * C1637 +
              C15951 * C1632 + C16537 + C16537 + C32517 * C1638) *
                 C32699) *
                C32854) *
               C32570 * C453 -
           (((C20571 + C20570) * C32699 + (C16397 + C16396) * C21058) * C32854 +
            ((C17433 + C17432) * C32699 + (C16395 + C16394) * C21058) * C32874 +
            ((C17651 + C17650) * C32699 +
             (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
              C15969 + C15969 + C15943 * C138) *
                 C21058) *
                C32886) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
             C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
             C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
                C21058 +
            (C21297 + C21298 + C21299 + C21300) * C32699) *
               C32600 * C32570 * C452 -
           ((C15842 + C15843 + C15844 + C15845) * C32699 +
            (C15281 + C15280 + C15279 + C15278) * C21058) *
               C32600 * C32570 * C453) *
              C454 +
          (((C15550 + C15551 + C15552 + C15553) * C21058 +
            (C15107 * C639 + C15688 + C15688 + C32892 * C649 + C15109 * C640 +
             C15689 + C15689 + C32885 * C650 + C15111 * C641 + C15690 + C15690 +
             C32872 * C651 + C15113 * C642 + C15691 + C15691 + C32822 * C652) *
                C32699) *
               C32600 * C32570 * C453 -
           ((C15113 * C330 + C15687 + C15687 + C32822 * C350 + C15111 * C331 +
             C15686 + C15686 + C32872 * C351 + C15109 * C332 + C15685 + C15685 +
             C32885 * C352 + C15107 * C333 + C15684 + C15684 + C32892 * C353) *
                C32699 +
            (C15113 * C127 + C15128 + C15128 + C32822 * C141 + C15111 * C126 +
             C15129 + C15129 + C32872 * C140 + C15109 * C125 + C15130 + C15130 +
             C32885 * C139 + C15107 * C124 + C15131 + C15131 + C32892 * C138) *
                C21058) *
               C32600 * C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32894 +
            (C17211 + C17212) * C32891 + C17219 * C32882 + C23042 * C32838) *
               C32600 * C32570 * C452 -
           ((C17215 + C17216) * C32838 + C17849 * C32882 + C17850 * C32891 +
            (C16113 + C16112) * C32894) *
               C32600 * C32570 * C453) *
              C454 +
          (((C16394 + C16395) * C32894 + (C17432 + C17433) * C32891 +
            (C17434 + C17435) * C32882 +
            (C15949 * C2566 + C17640 + C17640 + C15943 * C2572 +
             C15951 * C2567 + C17641 + C17641 + C32517 * C2573) *
                C32838) *
               C32600 * C32570 * C453 -
           ((C15951 * C2014 + C17639 + C17639 + C32517 * C2026 +
             C15949 * C2015 + C17638 + C17638 + C15943 * C2027) *
                C32838 +
            (C17653 + C17652) * C32882 + (C17651 + C17650) * C32891 +
            (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
             C15969 + C15969 + C15943 * C138) *
                C32894) *
               C32600 * C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[86] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
              C15955 + C15955 + C32517 * C138) *
                 C21058 +
             (C17211 + C17212) * C32699) *
                C32886 +
            ((C16112 + C16113) * C21058 + C17848 * C32699) * C32874 +
            C22013 * C32854) *
               C546 -
           (((C17022 + C17023) * C32699 + C20960 * C21058) * C32854 +
            (C17849 * C32699 + C17850 * C21058) * C32874 +
            ((C17214 + C17213) * C32699 + (C17212 + C17211) * C21058) *
                C32886) *
               C547) *
              C452 +
          (((C17848 * C21058 + C17178 * C32699) * C32886 +
            (C20219 * C21058 + (C17023 + C17022) * C32699) * C32874 +
            ((C16695 + C16694) * C21058 +
             (C15949 * C6436 + C16236 + C16236 + C15943 * C6442 +
              C15951 * C7315 + C16237 + C16237 + C32517 * C7317) *
                 C32699) *
                C32854) *
               C547 -
           (((C16694 + C16695) * C32699 + (C16117 + C16116) * C21058) * C32854 +
            (C20960 * C32699 + (C16115 + C16114) * C21058) * C32874 +
            (C17850 * C32699 + (C16113 + C16112) * C21058) * C32886) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
             C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
             C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
                C21058 +
            (C21297 + C21298 + C21299 + C21300) * C32699) *
               C32600 * C546 -
           ((C21301 + C21302 + C21303 + C21304) * C32699 +
            (C21300 + C21299 + C21298 + C21297) * C21058) *
               C32600 * C547) *
              C452 +
          (((C15845 + C15844 + C15843 + C15842) * C21058 +
            (C15107 * C1102 + C15396 + C15396 + C32892 * C1120 +
             C15109 * C1103 + C15397 + C15397 + C32885 * C1121 +
             C15111 * C1104 + C15398 + C15398 + C32872 * C1122 +
             C15113 * C2231 + C15399 + C15399 + C32822 * C2233) *
                C32699) *
               C32600 * C547 -
           ((C15842 + C15843 + C15844 + C15845) * C32699 +
            (C15281 + C15280 + C15279 + C15278) * C21058) *
               C32600 * C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32894 +
            (C17211 + C17212) * C32891 + C17219 * C32882 + C23042 * C32838) *
               C32600 * C546 -
           ((C23053 + C23054) * C32838 + (C17217 + C17218) * C32882 +
            (C17214 + C17213) * C32891 + (C17212 + C17211) * C32894) *
               C32600 * C547) *
              C452 +
          ((C17848 * C32894 + C17178 * C32891 + (C17216 + C17215) * C32882 +
            (C15949 * C7130 + C17193 + C17193 + C15943 * C7136 +
             C15951 * C12316 + C17194 + C17194 + C32517 * C12318) *
                C32838) *
               C32600 * C547 -
           ((C17215 + C17216) * C32838 + C17849 * C32882 + C17850 * C32891 +
            (C16113 + C16112) * C32894) *
               C32600 * C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[87] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C15107 * C123 + C15116 + C15116 + C32892 * C137 +
                C15109 * C124 + C15117 + C15117 + C32885 * C138 +
                C15111 * C125 + C15118 + C15118 + C32872 * C139 +
                C15113 * C126 + C15119 + C15119 + C32822 * C140) *
                   C21058 +
               (C15107 * C334 + C15391 + C15391 + C32892 * C354 +
                C15109 * C333 + C15390 + C15390 + C32885 * C353 +
                C15111 * C332 + C15389 + C15389 + C32872 * C352 +
                C15113 * C331 + C15388 + C15388 + C32822 * C351) *
                   C32699) *
                  C32600 * C32570 * C32556 * C110 -
              ((C15113 * C330 + C15687 + C15687 + C32822 * C350 +
                C15111 * C331 + C15686 + C15686 + C32872 * C351 +
                C15109 * C332 + C15685 + C15685 + C32885 * C352 +
                C15107 * C333 + C15684 + C15684 + C32892 * C353) *
                   C32699 +
               (C15113 * C127 + C15128 + C15128 + C32822 * C141 +
                C15111 * C126 + C15129 + C15129 + C32872 * C140 +
                C15109 * C125 + C15130 + C15130 + C32885 * C139 +
                C15107 * C124 + C15131 + C15131 + C32892 * C138) *
                   C21058) *
                  C32600 * C32570 * C32556 * C111 +
              ((C15107 * C125 + C15132 + C15132 + C32892 * C139 +
                C15109 * C126 + C15133 + C15133 + C32885 * C140 +
                C15111 * C127 + C15134 + C15134 + C32872 * C141 +
                C15113 * C128 + C15135 + C15135 + C32822 * C142) *
                   C21058 +
               (C15107 * C332 + C21061 + C21061 + C32892 * C352 +
                C15109 * C331 + C21062 + C21062 + C32885 * C351 +
                C15111 * C330 + C21063 + C21063 + C32872 * C350 +
                C15113 * C548 + C21064 + C21064 + C32822 * C550) *
                   C32699) *
                  C32600 * C32570 * C32556 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C15107 * C123 + C15116 + C15116 + C32892 * C137 +
                C15109 * C124 + C15117 + C15117 + C32885 * C138 +
                C15111 * C125 + C15118 + C15118 + C32872 * C139 +
                C15113 * C126 + C15119 + C15119 + C32822 * C140) *
                   C21058 +
               (C15107 * C334 + C15391 + C15391 + C32892 * C354 +
                C15109 * C333 + C15390 + C15390 + C32885 * C353 +
                C15111 * C332 + C15389 + C15389 + C32872 * C352 +
                C15113 * C331 + C15388 + C15388 + C32822 * C351) *
                   C32699) *
                  C32600 * C32570 * C221 -
              ((C15842 + C15843 + C15844 + C15845) * C32699 +
               (C15281 + C15280 + C15279 + C15278) * C21058) *
                  C32600 * C32570 * C222 +
              ((C15285 + C15284 + C15283 + C15282) * C21058 +
               (C15107 * C1101 + C15830 + C15830 + C32892 * C1119 +
                C15109 * C1100 + C15831 + C15831 + C32885 * C1118 +
                C15111 * C1099 + C15832 + C15832 + C32872 * C1117 +
                C15113 * C1472 + C15833 + C15833 + C32822 * C1474) *
                   C32699) *
                  C32600 * C32570 * C223) *
             C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
            C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
            C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
               C21058 +
           (C21297 + C21298 + C21299 + C21300) * C32699) *
              C32600 * C327 -
          ((C21301 + C21302 + C21303 + C21304) * C32699 +
           (C21300 + C21299 + C21298 + C21297) * C21058) *
              C32600 * C328 +
          ((C21304 + C21303 + C21302 + C21301) * C21058 +
           (C15107 * C2016 + C21277 + C21277 + C32892 * C2028 + C15109 * C2015 +
            C21278 + C21278 + C32885 * C2027 + C15111 * C2014 + C21279 +
            C21279 + C32872 * C2026 + C15113 * C2383 + C21280 + C21280 +
            C32822 * C2385) *
               C32699) *
              C32600 * C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C21058 +
            (C17211 + C17212) * C32699) *
               C32886 +
           ((C16112 + C16113) * C21058 + C17848 * C32699) * C32874 +
           (C16120 * C21058 + C20219 * C32699) * C32854) *
              C32570 * C32556 * C110 -
          (((C20571 + C20570) * C32699 + (C16397 + C16396) * C21058) * C32854 +
           ((C17433 + C17432) * C32699 + (C16395 + C16394) * C21058) * C32874 +
           ((C17651 + C17650) * C32699 +
            (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
             C15969 + C15969 + C15943 * C138) *
                C21058) *
               C32886) *
              C32570 * C32556 * C111 +
          (((C15949 * C125 + C15970 + C15970 + C15943 * C139 + C15951 * C126 +
             C15971 + C15971 + C32517 * C140) *
                C21058 +
            (C15949 * C332 + C16850 + C16850 + C15943 * C352 + C15951 * C331 +
             C16851 + C16851 + C32517 * C351) *
                C32699) *
               C32886 +
           ((C15949 * C227 + C15972 + C15972 + C15943 * C247 + C15951 * C226 +
             C15973 + C15973 + C32517 * C246) *
                C21058 +
            (C15949 * C640 + C16854 + C16854 + C15943 * C650 + C15951 * C641 +
             C16855 + C16855 + C32517 * C651) *
                C32699) *
               C32874 +
           ((C15949 * C232 + C15974 + C15974 + C15943 * C252 + C15951 * C233 +
             C15975 + C15975 + C32517 * C253) *
                C21058 +
            (C15949 * C1099 + C20070 + C20070 + C15943 * C1117 +
             C15951 * C1472 + C20071 + C20071 + C32517 * C1474) *
                C32699) *
               C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C21058 +
            (C17211 + C17212) * C32699) *
               C32886 +
           ((C16112 + C16113) * C21058 + C17848 * C32699) * C32874 +
           C22013 * C32854) *
              C32570 * C221 -
          (((C16694 + C16695) * C32699 + (C16117 + C16116) * C21058) * C32854 +
           (C20960 * C32699 + (C16115 + C16114) * C21058) * C32874 +
           (C17850 * C32699 + (C16113 + C16112) * C21058) * C32886) *
              C32570 * C222 +
          (C22013 * C32886 +
           (C16121 * C21058 + (C16695 + C16694) * C32699) * C32874 +
           ((C16119 + C16118) * C21058 +
            (C15949 * C6435 + C16680 + C16680 + C15943 * C6441 +
             C15951 * C6646 + C16681 + C16681 + C32517 * C6648) *
                C32699) *
               C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C21058 +
            (C17211 + C17212) * C32699) *
               C32886 +
           ((C16112 + C16113) * C21058 + C17848 * C32699) * C32874 +
           C22013 * C32854) *
              C327 -
          (((C17022 + C17023) * C32699 + C20960 * C21058) * C32854 +
           (C17849 * C32699 + C17850 * C21058) * C32874 +
           ((C17214 + C17213) * C32699 + (C17212 + C17211) * C21058) * C32886) *
              C328 +
          ((C17219 * C21058 + (C17218 + C17217) * C32699) * C32886 +
           (C17178 * C21058 + (C17216 + C17215) * C32699) * C32874 +
           ((C17023 + C17022) * C21058 +
            (C15949 * C7129 + C17851 + C17851 + C15943 * C7135 +
             C15951 * C7491 + C17852 + C17852 + C32517 * C7493) *
                C32699) *
               C32854) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
            C15955 + C15955 + C32517 * C138) *
               C32894 +
           (C17211 + C17212) * C32891 + C17219 * C32882 +
           (C17218 + C17217) * C32838) *
              C32600 * C32570 * C32556 * C110 -
          ((C15951 * C2014 + C17639 + C17639 + C32517 * C2026 + C15949 * C2015 +
            C17638 + C17638 + C15943 * C2027) *
               C32838 +
           (C17653 + C17652) * C32882 + (C17651 + C17650) * C32891 +
           (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
            C15969 + C15969 + C15943 * C138) *
               C32894) *
              C32600 * C32570 * C32556 * C111 +
          ((C15949 * C125 + C15970 + C15970 + C15943 * C139 + C15951 * C126 +
            C15971 + C15971 + C32517 * C140) *
               C32894 +
           (C15949 * C332 + C16850 + C16850 + C15943 * C352 + C15951 * C331 +
            C16851 + C16851 + C32517 * C351) *
               C32891 +
           (C15949 * C337 + C16852 + C16852 + C15943 * C357 + C15951 * C338 +
            C16853 + C16853 + C32517 * C358) *
               C32882 +
           (C15949 * C2014 + C22844 + C22844 + C15943 * C2026 + C15951 * C2383 +
            C22845 + C22845 + C32517 * C2385) *
               C32838) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
            C15955 + C15955 + C32517 * C138) *
               C32894 +
           (C17211 + C17212) * C32891 + C17219 * C32882 +
           (C17218 + C17217) * C32838) *
              C32600 * C32570 * C221 -
          ((C17215 + C17216) * C32838 + C17849 * C32882 + C17850 * C32891 +
           (C16113 + C16112) * C32894) *
              C32600 * C32570 * C222 +
          (C16120 * C32894 + C20219 * C32891 + (C17023 + C17022) * C32882 +
           (C15949 * C7129 + C17851 + C17851 + C15943 * C7135 + C15951 * C7491 +
            C17852 + C17852 + C32517 * C7493) *
               C32838) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
            C15955 + C15955 + C32517 * C138) *
               C32894 +
           (C17211 + C17212) * C32891 + C17219 * C32882 + C23042 * C32838) *
              C32600 * C327 -
          ((C23053 + C23054) * C32838 + (C17217 + C17218) * C32882 +
           (C17214 + C17213) * C32891 + (C17212 + C17211) * C32894) *
              C32600 * C328 +
          (C17219 * C32894 + C23042 * C32891 + (C23054 + C23053) * C32882 +
           (C15949 * C12216 + C23047 + C23047 + C15943 * C12220 +
            C15951 * C12402 + C23048 + C23048 + C32517 * C12404) *
               C32838) *
              C32600 * C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[88] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
              C15955 + C15955 + C32517 * C138) *
                 C21058 +
             (C17211 + C17212) * C32699) *
                C32886 +
            ((C16112 + C16113) * C21058 + C17848 * C32699) * C32874 +
            C22013 * C32854) *
               C546 -
           (((C17022 + C17023) * C32699 + C20960 * C21058) * C32854 +
            (C17849 * C32699 + C17850 * C21058) * C32874 +
            ((C17214 + C17213) * C32699 + (C17212 + C17211) * C21058) *
                C32886) *
               C547) *
              C32556 * C454 +
          ((((C17650 + C17651) * C21058 + (C17652 + C17653) * C32699) * C32886 +
            ((C17432 + C17433) * C21058 + (C17434 + C17435) * C32699) * C32874 +
            ((C20570 + C20571) * C21058 +
             (C15949 * C1106 + C17422 + C17422 + C15943 * C1124 +
              C15951 * C1107 + C17423 + C17423 + C32517 * C1125) *
                 C32699) *
                C32854) *
               C547 -
           (((C20571 + C20570) * C32699 + (C16397 + C16396) * C21058) * C32854 +
            ((C17433 + C17432) * C32699 + (C16395 + C16394) * C21058) * C32874 +
            ((C17651 + C17650) * C32699 +
             (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
              C15969 + C15969 + C15943 * C138) *
                 C21058) *
                C32886) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
             C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
             C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
                C21058 +
            (C21297 + C21298 + C21299 + C21300) * C32699) *
               C32600 * C546 -
           ((C21301 + C21302 + C21303 + C21304) * C32699 +
            (C21300 + C21299 + C21298 + C21297) * C21058) *
               C32600 * C547) *
              C32556 * C454 +
          (((C21585 + C21586 + C21587 + C21588) * C21058 +
            (C15107 * C336 + C21573 + C21573 + C32892 * C356 + C15109 * C337 +
             C21574 + C21574 + C32885 * C357 + C15111 * C338 + C21575 + C21575 +
             C32872 * C358 + C15113 * C339 + C21576 + C21576 + C32822 * C359) *
                C32699) *
               C32600 * C547 -
           ((C21588 + C21587 + C21586 + C21585) * C32699 +
            (C15113 * C127 + C15128 + C15128 + C32822 * C141 + C15111 * C126 +
             C15129 + C15129 + C32872 * C140 + C15109 * C125 + C15130 + C15130 +
             C32885 * C139 + C15107 * C124 + C15131 + C15131 + C32892 * C138) *
                C21058) *
               C32600 * C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C32894 +
            (C17211 + C17212) * C32891 + C17219 * C32882 + C23042 * C32838) *
               C32600 * C546 -
           ((C23053 + C23054) * C32838 + (C17217 + C17218) * C32882 +
            (C17214 + C17213) * C32891 + (C17212 + C17211) * C32894) *
               C32600 * C547) *
              C32556 * C454 +
          (((C17650 + C17651) * C32894 + (C17652 + C17653) * C32891 +
            (C23325 + C23326) * C32882 +
            (C15949 * C2018 + C23319 + C23319 + C15943 * C2030 +
             C15951 * C2019 + C23320 + C23320 + C32517 * C2031) *
                C32838) *
               C32600 * C547 -
           ((C23326 + C23325) * C32838 + (C17653 + C17652) * C32882 +
            (C17651 + C17650) * C32891 +
            (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
             C15969 + C15969 + C15943 * C138) *
                C32894) *
               C32600 * C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[89] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
            C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
            C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
               C21058 +
           (C15107 * C334 + C15391 + C15391 + C32892 * C354 + C15109 * C333 +
            C15390 + C15390 + C32885 * C353 + C15111 * C332 + C15389 + C15389 +
            C32872 * C352 + C15113 * C331 + C15388 + C15388 + C32822 * C351) *
               C32699) *
              C32600 * C32570 * C221 -
          ((C15842 + C15843 + C15844 + C15845) * C32699 +
           (C15281 + C15280 + C15279 + C15278) * C21058) *
              C32600 * C32570 * C222 +
          ((C15285 + C15284 + C15283 + C15282) * C21058 +
           (C15107 * C1101 + C15830 + C15830 + C32892 * C1119 + C15109 * C1100 +
            C15831 + C15831 + C32885 * C1118 + C15111 * C1099 + C15832 +
            C15832 + C32872 * C1117 + C15113 * C1472 + C15833 + C15833 +
            C32822 * C1474) *
               C32699) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
            C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
            C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
               C21058 +
           (C15107 * C334 + C15391 + C15391 + C32892 * C354 + C15109 * C333 +
            C15390 + C15390 + C32885 * C353 + C15111 * C332 + C15389 + C15389 +
            C32872 * C352 + C15113 * C331 + C15388 + C15388 + C32822 * C351) *
               C32699) *
              C32600 * C32570 * C32556 * C110 -
          ((C15113 * C330 + C15687 + C15687 + C32822 * C350 + C15111 * C331 +
            C15686 + C15686 + C32872 * C351 + C15109 * C332 + C15685 + C15685 +
            C32885 * C352 + C15107 * C333 + C15684 + C15684 + C32892 * C353) *
               C32699 +
           (C15113 * C127 + C15128 + C15128 + C32822 * C141 + C15111 * C126 +
            C15129 + C15129 + C32872 * C140 + C15109 * C125 + C15130 + C15130 +
            C32885 * C139 + C15107 * C124 + C15131 + C15131 + C32892 * C138) *
               C21058) *
              C32600 * C32570 * C32556 * C111 +
          ((C15107 * C125 + C15132 + C15132 + C32892 * C139 + C15109 * C126 +
            C15133 + C15133 + C32885 * C140 + C15111 * C127 + C15134 + C15134 +
            C32872 * C141 + C15113 * C128 + C15135 + C15135 + C32822 * C142) *
               C21058 +
           (C15107 * C332 + C21061 + C21061 + C32892 * C352 + C15109 * C331 +
            C21062 + C21062 + C32885 * C351 + C15111 * C330 + C21063 + C21063 +
            C32872 * C350 + C15113 * C548 + C21064 + C21064 + C32822 * C550) *
               C32699) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C21058 +
            (C17211 + C17212) * C32699) *
               C32886 +
           ((C16112 + C16113) * C21058 + C17848 * C32699) * C32874 +
           (C16120 * C21058 + C20219 * C32699) * C32854) *
              C32570 * C32556 * C110 -
          (((C20571 + C20570) * C32699 + (C16397 + C16396) * C21058) * C32854 +
           ((C17433 + C17432) * C32699 + (C16395 + C16394) * C21058) * C32874 +
           ((C17651 + C17650) * C32699 +
            (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
             C15969 + C15969 + C15943 * C138) *
                C21058) *
               C32886) *
              C32570 * C32556 * C111 +
          (((C15949 * C125 + C15970 + C15970 + C15943 * C139 + C15951 * C126 +
             C15971 + C15971 + C32517 * C140) *
                C21058 +
            (C15949 * C332 + C16850 + C16850 + C15943 * C352 + C15951 * C331 +
             C16851 + C16851 + C32517 * C351) *
                C32699) *
               C32886 +
           ((C15949 * C227 + C15972 + C15972 + C15943 * C247 + C15951 * C226 +
             C15973 + C15973 + C32517 * C246) *
                C21058 +
            (C15949 * C640 + C16854 + C16854 + C15943 * C650 + C15951 * C641 +
             C16855 + C16855 + C32517 * C651) *
                C32699) *
               C32874 +
           ((C15949 * C232 + C15974 + C15974 + C15943 * C252 + C15951 * C233 +
             C15975 + C15975 + C32517 * C253) *
                C21058 +
            (C15949 * C1099 + C20070 + C20070 + C15943 * C1117 +
             C15951 * C1472 + C20071 + C20071 + C32517 * C1474) *
                C32699) *
               C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C21058 +
            (C17211 + C17212) * C32699) *
               C32886 +
           ((C16112 + C16113) * C21058 + C17848 * C32699) * C32874 +
           C22013 * C32854) *
              C32570 * C221 -
          (((C16694 + C16695) * C32699 + (C16117 + C16116) * C21058) * C32854 +
           (C20960 * C32699 + (C16115 + C16114) * C21058) * C32874 +
           (C17850 * C32699 + (C16113 + C16112) * C21058) * C32886) *
              C32570 * C222 +
          (C22013 * C32886 +
           (C16121 * C21058 + (C16695 + C16694) * C32699) * C32874 +
           ((C16119 + C16118) * C21058 +
            (C15949 * C6435 + C16680 + C16680 + C15943 * C6441 +
             C15951 * C6646 + C16681 + C16681 + C32517 * C6648) *
                C32699) *
               C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
            C15955 + C15955 + C32517 * C138) *
               C32894 +
           (C17211 + C17212) * C32891 + C17219 * C32882 +
           (C17218 + C17217) * C32838) *
              C32600 * C32570 * C32556 * C110 -
          ((C15951 * C2014 + C17639 + C17639 + C32517 * C2026 + C15949 * C2015 +
            C17638 + C17638 + C15943 * C2027) *
               C32838 +
           (C17653 + C17652) * C32882 + (C17651 + C17650) * C32891 +
           (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
            C15969 + C15969 + C15943 * C138) *
               C32894) *
              C32600 * C32570 * C32556 * C111 +
          ((C15949 * C125 + C15970 + C15970 + C15943 * C139 + C15951 * C126 +
            C15971 + C15971 + C32517 * C140) *
               C32894 +
           (C15949 * C332 + C16850 + C16850 + C15943 * C352 + C15951 * C331 +
            C16851 + C16851 + C32517 * C351) *
               C32891 +
           (C15949 * C337 + C16852 + C16852 + C15943 * C357 + C15951 * C338 +
            C16853 + C16853 + C32517 * C358) *
               C32882 +
           (C15949 * C2014 + C22844 + C22844 + C15943 * C2026 + C15951 * C2383 +
            C22845 + C22845 + C32517 * C2385) *
               C32838) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
            C15955 + C15955 + C32517 * C138) *
               C32894 +
           (C17211 + C17212) * C32891 + C17219 * C32882 +
           (C17218 + C17217) * C32838) *
              C32600 * C32570 * C221 -
          ((C17215 + C17216) * C32838 + C17849 * C32882 + C17850 * C32891 +
           (C16113 + C16112) * C32894) *
              C32600 * C32570 * C222 +
          (C16120 * C32894 + C20219 * C32891 + (C17023 + C17022) * C32882 +
           (C15949 * C7129 + C17851 + C17851 + C15943 * C7135 + C15951 * C7491 +
            C17852 + C17852 + C32517 * C7493) *
               C32838) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[90] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 ((((C31695 * C123 + C17975 + C17975 + C32512 * C137 +
                     C31688 * C124 + C17976 + C17976 + C32520 * C138 +
                     C17972 * C125 + C17977 + C17977 + C17964 * C139) *
                        C32695 +
                    (C19293 + C19294 + C19295) * C32702 + C24823 * C24588) *
                       C32600 * C32570 * C452 -
                   ((C19296 + C19297 + C19298) * C24588 + C19923 * C32702 +
                    (C18156 + C18155 + C18154) * C32695) *
                       C32600 * C32570 * C453) *
                      C454 +
                  (((C18467 + C18468 + C18469) * C32695 +
                    (C19508 + C19509 + C19510) * C32702 +
                    (C31695 * C1103 + C19714 + C19714 + C32512 * C1121 +
                     C31688 * C1104 + C19715 + C19715 + C32520 * C1122 +
                     C17972 * C2231 + C19716 + C19716 + C17964 * C2233) *
                        C24588) *
                       C32600 * C32570 * C453 -
                   ((C17972 * C338 + C19713 + C19713 + C17964 * C358 +
                     C31688 * C337 + C19712 + C19712 + C32520 * C357 +
                     C31695 * C336 + C19711 + C19711 + C32512 * C356) *
                        C24588 +
                    (C19725 + C19724 + C19723) * C32702 +
                    (C17972 * C126 + C17990 + C17990 + C17964 * C140 +
                     C31688 * C125 + C17991 + C17991 + C32520 * C139 +
                     C31695 * C124 + C17992 + C17992 + C32512 * C138) *
                        C32695) *
                       C32600 * C32570 * C452) *
                      C455)) /
                (p * q * std::sqrt(p + q));
    d2ee[91] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 ((((C31695 * C123 + C17975 + C17975 + C32512 * C137 +
                     C31688 * C124 + C17976 + C17976 + C32520 * C138 +
                     C17972 * C125 + C17977 + C17977 + C17964 * C139) *
                        C32695 +
                    (C19293 + C19294 + C19295) * C32702 + C24823 * C24588) *
                       C32600 * C546 -
                   ((C24830 + C24831 + C24832) * C24588 +
                    (C19299 + C19300 + C19301) * C32702 +
                    (C19295 + C19294 + C19293) * C32695) *
                       C32600 * C547) *
                      C452 +
                  ((C19922 * C32695 + (C19298 + C19297 + C19296) * C32702 +
                    (C31695 * C2565 + C19272 + C19272 + C32512 * C2571 +
                     C31688 * C2566 + C19273 + C19273 + C32520 * C2572 +
                     C17972 * C2567 + C19274 + C19274 + C17964 * C2573) *
                        C24588) *
                       C32600 * C547 -
                   ((C19296 + C19297 + C19298) * C24588 + C19923 * C32702 +
                    (C18156 + C18155 + C18154) * C32695) *
                       C32600 * C546) *
                      C453) *
                 C32544) /
                (p * q * std::sqrt(p + q));
    d2ee[92] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((C31695 * C123 + C17975 + C17975 + C32512 * C137 +
                    C31688 * C124 + C17976 + C17976 + C32520 * C138 +
                    C17972 * C125 + C17977 + C17977 + C17964 * C139) *
                       C32695 +
                   (C19293 + C19294 + C19295) * C32702 +
                   (C19301 + C19300 + C19299) * C24588) *
                      C32600 * C32570 * C221 -
                  ((C19296 + C19297 + C19298) * C24588 + C19923 * C32702 +
                   (C18156 + C18155 + C18154) * C32695) *
                      C32600 * C32570 * C222 +
                  (C18164 * C32695 + (C18803 + C18802 + C18801) * C32702 +
                   (C31695 * C1105 + C18291 + C18291 + C32512 * C1123 +
                    C31688 * C1106 + C18292 + C18292 + C32520 * C1124 +
                    C17972 * C1107 + C18293 + C18293 + C17964 * C1125) *
                       C24588) *
                      C32600 * C32570 * C223) *
                 C32544) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((C31695 * C123 + C17975 + C17975 + C32512 * C137 +
                    C31688 * C124 + C17976 + C17976 + C32520 * C138 +
                    C17972 * C125 + C17977 + C17977 + C17964 * C139) *
                       C32695 +
                   (C19293 + C19294 + C19295) * C32702 +
                   (C19301 + C19300 + C19299) * C24588) *
                      C32600 * C32570 * C32556 * C110 -
                  ((C17972 * C338 + C19713 + C19713 + C17964 * C358 +
                    C31688 * C337 + C19712 + C19712 + C32520 * C357 +
                    C31695 * C336 + C19711 + C19711 + C32512 * C356) *
                       C24588 +
                   (C19725 + C19724 + C19723) * C32702 +
                   (C17972 * C126 + C17990 + C17990 + C17964 * C140 +
                    C31688 * C125 + C17991 + C17991 + C32520 * C139 +
                    C31695 * C124 + C17992 + C17992 + C32512 * C138) *
                       C32695) *
                      C32600 * C32570 * C32556 * C111 +
                  ((C31695 * C125 + C17993 + C17993 + C32512 * C139 +
                    C31688 * C126 + C17994 + C17994 + C32520 * C140 +
                    C17972 * C127 + C17995 + C17995 + C17964 * C141) *
                       C32695 +
                   (C31695 * C332 + C18953 + C18953 + C32512 * C352 +
                    C31688 * C331 + C18954 + C18954 + C32520 * C351 +
                    C17972 * C330 + C18955 + C18955 + C17964 * C350) *
                       C32702 +
                   (C31695 * C337 + C24590 + C24590 + C32512 * C357 +
                    C31688 * C338 + C24591 + C24591 + C32520 * C358 +
                    C17972 * C339 + C24592 + C24592 + C17964 * C359) *
                       C24588) *
                      C32600 * C32570 * C32556 * C112)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 (((C31695 * C123 + C17975 + C17975 + C32512 * C137 +
                    C31688 * C124 + C17976 + C17976 + C32520 * C138 +
                    C17972 * C125 + C17977 + C17977 + C17964 * C139) *
                       C32695 +
                   (C19293 + C19294 + C19295) * C32702 + C24823 * C24588) *
                      C32600 * C327 -
                  ((C24830 + C24831 + C24832) * C24588 +
                   (C19299 + C19300 + C19301) * C32702 +
                   (C19295 + C19294 + C19293) * C32695) *
                      C32600 * C328 +
                  (C24823 * C32695 + (C24832 + C24831 + C24830) * C32702 +
                   (C31695 * C2017 + C24820 + C24820 + C32512 * C2029 +
                    C31688 * C2018 + C24821 + C24821 + C32520 * C2030 +
                    C17972 * C2019 + C24822 + C24822 + C17964 * C2031) *
                       C24588) *
                      C32600 * C329) *
                 C32556 * C32544) /
                    (p * q * std::sqrt(p + q));
    d2ee[93] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 ((((C31695 * C123 + C17975 + C17975 + C32512 * C137 +
                     C31688 * C124 + C17976 + C17976 + C32520 * C138 +
                     C17972 * C125 + C17977 + C17977 + C17964 * C139) *
                        C32695 +
                    (C19293 + C19294 + C19295) * C32702 + C24823 * C24588) *
                       C32600 * C546 -
                   ((C24830 + C24831 + C24832) * C24588 +
                    (C19299 + C19300 + C19301) * C32702 +
                    (C19295 + C19294 + C19293) * C32695) *
                       C32600 * C547) *
                      C32556 * C454 +
                  (((C19723 + C19724 + C19725) * C32695 +
                    (C25140 + C25141 + C25142) * C32702 +
                    (C31695 * C2015 + C25131 + C25131 + C32512 * C2027 +
                     C31688 * C2014 + C25132 + C25132 + C32520 * C2026 +
                     C17972 * C2383 + C25133 + C25133 + C17964 * C2385) *
                        C24588) *
                       C32600 * C547 -
                   ((C25142 + C25141 + C25140) * C24588 +
                    (C19725 + C19724 + C19723) * C32702 +
                    (C17972 * C126 + C17990 + C17990 + C17964 * C140 +
                     C31688 * C125 + C17991 + C17991 + C32520 * C139 +
                     C31695 * C124 + C17992 + C17992 + C32512 * C138) *
                        C32695) *
                       C32600 * C546) *
                      C32556 * C455)) /
                (p * q * std::sqrt(p + q));
    d2ee[94] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((C31695 * C123 + C17975 + C17975 + C32512 * C137 +
                    C31688 * C124 + C17976 + C17976 + C32520 * C138 +
                    C17972 * C125 + C17977 + C17977 + C17964 * C139) *
                       C32695 +
                   (C19293 + C19294 + C19295) * C32702 +
                   (C19301 + C19300 + C19299) * C24588) *
                      C32600 * C32570 * C32556 * C110 -
                  ((C17972 * C338 + C19713 + C19713 + C17964 * C358 +
                    C31688 * C337 + C19712 + C19712 + C32520 * C357 +
                    C31695 * C336 + C19711 + C19711 + C32512 * C356) *
                       C24588 +
                   (C19725 + C19724 + C19723) * C32702 +
                   (C17972 * C126 + C17990 + C17990 + C17964 * C140 +
                    C31688 * C125 + C17991 + C17991 + C32520 * C139 +
                    C31695 * C124 + C17992 + C17992 + C32512 * C138) *
                       C32695) *
                      C32600 * C32570 * C32556 * C111 +
                  ((C31695 * C125 + C17993 + C17993 + C32512 * C139 +
                    C31688 * C126 + C17994 + C17994 + C32520 * C140 +
                    C17972 * C127 + C17995 + C17995 + C17964 * C141) *
                       C32695 +
                   (C31695 * C332 + C18953 + C18953 + C32512 * C352 +
                    C31688 * C331 + C18954 + C18954 + C32520 * C351 +
                    C17972 * C330 + C18955 + C18955 + C17964 * C350) *
                       C32702 +
                   (C31695 * C337 + C24590 + C24590 + C32512 * C357 +
                    C31688 * C338 + C24591 + C24591 + C32520 * C358 +
                    C17972 * C339 + C24592 + C24592 + C17964 * C359) *
                       C24588) *
                      C32600 * C32570 * C32556 * C112)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((C31695 * C123 + C17975 + C17975 + C32512 * C137 +
                    C31688 * C124 + C17976 + C17976 + C32520 * C138 +
                    C17972 * C125 + C17977 + C17977 + C17964 * C139) *
                       C32695 +
                   (C19293 + C19294 + C19295) * C32702 +
                   (C19301 + C19300 + C19299) * C24588) *
                      C32600 * C32570 * C221 -
                  ((C19296 + C19297 + C19298) * C24588 + C19923 * C32702 +
                   (C18156 + C18155 + C18154) * C32695) *
                      C32600 * C32570 * C222 +
                  (C18164 * C32695 + (C18803 + C18802 + C18801) * C32702 +
                   (C31695 * C1105 + C18291 + C18291 + C32512 * C1123 +
                    C31688 * C1106 + C18292 + C18292 + C32520 * C1124 +
                    C17972 * C1107 + C18293 + C18293 + C17964 * C1125) *
                       C24588) *
                      C32600 * C32570 * C223) *
                 C32544) /
                    (p * q * std::sqrt(p + q));
    d2ee[95] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
             C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
             C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
                C21058 +
            (C21297 + C21298 + C21299 + C21300) * C32699) *
               C32600 * C32570 * C452 -
           ((C15842 + C15843 + C15844 + C15845) * C32699 +
            (C15281 + C15280 + C15279 + C15278) * C21058) *
               C32600 * C32570 * C453) *
              C454 +
          (((C15550 + C15551 + C15552 + C15553) * C21058 +
            (C15107 * C639 + C15688 + C15688 + C32892 * C649 + C15109 * C640 +
             C15689 + C15689 + C32885 * C650 + C15111 * C641 + C15690 + C15690 +
             C32872 * C651 + C15113 * C642 + C15691 + C15691 + C32822 * C652) *
                C32699) *
               C32600 * C32570 * C453 -
           ((C15113 * C330 + C15687 + C15687 + C32822 * C350 + C15111 * C331 +
             C15686 + C15686 + C32872 * C351 + C15109 * C332 + C15685 + C15685 +
             C32885 * C352 + C15107 * C333 + C15684 + C15684 + C32892 * C353) *
                C32699 +
            (C15113 * C127 + C15128 + C15128 + C32822 * C141 + C15111 * C126 +
             C15129 + C15129 + C32872 * C140 + C15109 * C125 + C15130 + C15130 +
             C32885 * C139 + C15107 * C124 + C15131 + C15131 + C32892 * C138) *
                C21058) *
               C32600 * C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
              C15955 + C15955 + C32517 * C138) *
                 C21058 +
             (C17211 + C17212) * C32699) *
                C32886 +
            ((C16112 + C16113) * C21058 + C17848 * C32699) * C32874 +
            C22013 * C32854) *
               C32570 * C452 -
           (((C16694 + C16695) * C32699 + (C16117 + C16116) * C21058) * C32854 +
            (C20960 * C32699 + (C16115 + C16114) * C21058) * C32874 +
            (C17850 * C32699 + (C16113 + C16112) * C21058) * C32886) *
               C32570 * C453) *
              C454 +
          ((((C16394 + C16395) * C21058 + (C17432 + C17433) * C32699) * C32886 +
            ((C16396 + C16397) * C21058 + (C20570 + C20571) * C32699) * C32874 +
            ((C16398 + C16399) * C21058 +
             (C15949 * C1631 + C16536 + C16536 + C15943 * C1637 +
              C15951 * C1632 + C16537 + C16537 + C32517 * C1638) *
                 C32699) *
                C32854) *
               C32570 * C453 -
           (((C20571 + C20570) * C32699 + (C16397 + C16396) * C21058) * C32854 +
            ((C17433 + C17432) * C32699 + (C16395 + C16394) * C21058) * C32874 +
            ((C17651 + C17650) * C32699 +
             (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
              C15969 + C15969 + C15943 * C138) *
                 C21058) *
                C32886) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[96] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
             C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
             C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
                C21058 +
            (C21297 + C21298 + C21299 + C21300) * C32699) *
               C32600 * C546 -
           ((C21301 + C21302 + C21303 + C21304) * C32699 +
            (C21300 + C21299 + C21298 + C21297) * C21058) *
               C32600 * C547) *
              C452 +
          (((C15845 + C15844 + C15843 + C15842) * C21058 +
            (C15107 * C1102 + C15396 + C15396 + C32892 * C1120 +
             C15109 * C1103 + C15397 + C15397 + C32885 * C1121 +
             C15111 * C1104 + C15398 + C15398 + C32872 * C1122 +
             C15113 * C2231 + C15399 + C15399 + C32822 * C2233) *
                C32699) *
               C32600 * C547 -
           ((C15842 + C15843 + C15844 + C15845) * C32699 +
            (C15281 + C15280 + C15279 + C15278) * C21058) *
               C32600 * C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
              C15955 + C15955 + C32517 * C138) *
                 C21058 +
             (C17211 + C17212) * C32699) *
                C32886 +
            ((C16112 + C16113) * C21058 + C17848 * C32699) * C32874 +
            C22013 * C32854) *
               C546 -
           (((C17022 + C17023) * C32699 + C20960 * C21058) * C32854 +
            (C17849 * C32699 + C17850 * C21058) * C32874 +
            ((C17214 + C17213) * C32699 + (C17212 + C17211) * C21058) *
                C32886) *
               C547) *
              C452 +
          (((C17848 * C21058 + C17178 * C32699) * C32886 +
            (C20219 * C21058 + (C17023 + C17022) * C32699) * C32874 +
            ((C16695 + C16694) * C21058 +
             (C15949 * C6436 + C16236 + C16236 + C15943 * C6442 +
              C15951 * C7315 + C16237 + C16237 + C32517 * C7317) *
                 C32699) *
                C32854) *
               C547 -
           (((C16694 + C16695) * C32699 + (C16117 + C16116) * C21058) * C32854 +
            (C20960 * C32699 + (C16115 + C16114) * C21058) * C32874 +
            (C17850 * C32699 + (C16113 + C16112) * C21058) * C32886) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[97] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
            C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
            C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
               C21058 +
           (C15107 * C334 + C15391 + C15391 + C32892 * C354 + C15109 * C333 +
            C15390 + C15390 + C32885 * C353 + C15111 * C332 + C15389 + C15389 +
            C32872 * C352 + C15113 * C331 + C15388 + C15388 + C32822 * C351) *
               C32699) *
              C32600 * C32570 * C221 -
          ((C15842 + C15843 + C15844 + C15845) * C32699 +
           (C15281 + C15280 + C15279 + C15278) * C21058) *
              C32600 * C32570 * C222 +
          ((C15285 + C15284 + C15283 + C15282) * C21058 +
           (C15107 * C1101 + C15830 + C15830 + C32892 * C1119 + C15109 * C1100 +
            C15831 + C15831 + C32885 * C1118 + C15111 * C1099 + C15832 +
            C15832 + C32872 * C1117 + C15113 * C1472 + C15833 + C15833 +
            C32822 * C1474) *
               C32699) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
            C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
            C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
               C21058 +
           (C15107 * C334 + C15391 + C15391 + C32892 * C354 + C15109 * C333 +
            C15390 + C15390 + C32885 * C353 + C15111 * C332 + C15389 + C15389 +
            C32872 * C352 + C15113 * C331 + C15388 + C15388 + C32822 * C351) *
               C32699) *
              C32600 * C32570 * C32556 * C110 -
          ((C15113 * C330 + C15687 + C15687 + C32822 * C350 + C15111 * C331 +
            C15686 + C15686 + C32872 * C351 + C15109 * C332 + C15685 + C15685 +
            C32885 * C352 + C15107 * C333 + C15684 + C15684 + C32892 * C353) *
               C32699 +
           (C15113 * C127 + C15128 + C15128 + C32822 * C141 + C15111 * C126 +
            C15129 + C15129 + C32872 * C140 + C15109 * C125 + C15130 + C15130 +
            C32885 * C139 + C15107 * C124 + C15131 + C15131 + C32892 * C138) *
               C21058) *
              C32600 * C32570 * C32556 * C111 +
          ((C15107 * C125 + C15132 + C15132 + C32892 * C139 + C15109 * C126 +
            C15133 + C15133 + C32885 * C140 + C15111 * C127 + C15134 + C15134 +
            C32872 * C141 + C15113 * C128 + C15135 + C15135 + C32822 * C142) *
               C21058 +
           (C15107 * C332 + C21061 + C21061 + C32892 * C352 + C15109 * C331 +
            C21062 + C21062 + C32885 * C351 + C15111 * C330 + C21063 + C21063 +
            C32872 * C350 + C15113 * C548 + C21064 + C21064 + C32822 * C550) *
               C32699) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
            C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
            C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
               C21058 +
           (C21297 + C21298 + C21299 + C21300) * C32699) *
              C32600 * C327 -
          ((C21301 + C21302 + C21303 + C21304) * C32699 +
           (C21300 + C21299 + C21298 + C21297) * C21058) *
              C32600 * C328 +
          ((C21304 + C21303 + C21302 + C21301) * C21058 +
           (C15107 * C2016 + C21277 + C21277 + C32892 * C2028 + C15109 * C2015 +
            C21278 + C21278 + C32885 * C2027 + C15111 * C2014 + C21279 +
            C21279 + C32872 * C2026 + C15113 * C2383 + C21280 + C21280 +
            C32822 * C2385) *
               C32699) *
              C32600 * C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C21058 +
            (C17211 + C17212) * C32699) *
               C32886 +
           ((C16112 + C16113) * C21058 + C17848 * C32699) * C32874 +
           (C16120 * C21058 + C20219 * C32699) * C32854) *
              C32570 * C32556 * C110 -
          (((C20571 + C20570) * C32699 + (C16397 + C16396) * C21058) * C32854 +
           ((C17433 + C17432) * C32699 + (C16395 + C16394) * C21058) * C32874 +
           ((C17651 + C17650) * C32699 +
            (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
             C15969 + C15969 + C15943 * C138) *
                C21058) *
               C32886) *
              C32570 * C32556 * C111 +
          (((C15949 * C125 + C15970 + C15970 + C15943 * C139 + C15951 * C126 +
             C15971 + C15971 + C32517 * C140) *
                C21058 +
            (C15949 * C332 + C16850 + C16850 + C15943 * C352 + C15951 * C331 +
             C16851 + C16851 + C32517 * C351) *
                C32699) *
               C32886 +
           ((C15949 * C227 + C15972 + C15972 + C15943 * C247 + C15951 * C226 +
             C15973 + C15973 + C32517 * C246) *
                C21058 +
            (C15949 * C640 + C16854 + C16854 + C15943 * C650 + C15951 * C641 +
             C16855 + C16855 + C32517 * C651) *
                C32699) *
               C32874 +
           ((C15949 * C232 + C15974 + C15974 + C15943 * C252 + C15951 * C233 +
             C15975 + C15975 + C32517 * C253) *
                C21058 +
            (C15949 * C1099 + C20070 + C20070 + C15943 * C1117 +
             C15951 * C1472 + C20071 + C20071 + C32517 * C1474) *
                C32699) *
               C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C21058 +
            (C17211 + C17212) * C32699) *
               C32886 +
           ((C16112 + C16113) * C21058 + C17848 * C32699) * C32874 +
           C22013 * C32854) *
              C32570 * C221 -
          (((C16694 + C16695) * C32699 + (C16117 + C16116) * C21058) * C32854 +
           (C20960 * C32699 + (C16115 + C16114) * C21058) * C32874 +
           (C17850 * C32699 + (C16113 + C16112) * C21058) * C32886) *
              C32570 * C222 +
          (C22013 * C32886 +
           (C16121 * C21058 + (C16695 + C16694) * C32699) * C32874 +
           ((C16119 + C16118) * C21058 +
            (C15949 * C6435 + C16680 + C16680 + C15943 * C6441 +
             C15951 * C6646 + C16681 + C16681 + C32517 * C6648) *
                C32699) *
               C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C21058 +
            (C17211 + C17212) * C32699) *
               C32886 +
           ((C16112 + C16113) * C21058 + C17848 * C32699) * C32874 +
           C22013 * C32854) *
              C327 -
          (((C17022 + C17023) * C32699 + C20960 * C21058) * C32854 +
           (C17849 * C32699 + C17850 * C21058) * C32874 +
           ((C17214 + C17213) * C32699 + (C17212 + C17211) * C21058) * C32886) *
              C328 +
          ((C17219 * C21058 + (C17218 + C17217) * C32699) * C32886 +
           (C17178 * C21058 + (C17216 + C17215) * C32699) * C32874 +
           ((C17023 + C17022) * C21058 +
            (C15949 * C7129 + C17851 + C17851 + C15943 * C7135 +
             C15951 * C7491 + C17852 + C17852 + C32517 * C7493) *
                C32699) *
               C32854) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[98] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
             C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
             C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
                C21058 +
            (C21297 + C21298 + C21299 + C21300) * C32699) *
               C32600 * C546 -
           ((C21301 + C21302 + C21303 + C21304) * C32699 +
            (C21300 + C21299 + C21298 + C21297) * C21058) *
               C32600 * C547) *
              C32556 * C454 +
          (((C21585 + C21586 + C21587 + C21588) * C21058 +
            (C15107 * C336 + C21573 + C21573 + C32892 * C356 + C15109 * C337 +
             C21574 + C21574 + C32885 * C357 + C15111 * C338 + C21575 + C21575 +
             C32872 * C358 + C15113 * C339 + C21576 + C21576 + C32822 * C359) *
                C32699) *
               C32600 * C547 -
           ((C21588 + C21587 + C21586 + C21585) * C32699 +
            (C15113 * C127 + C15128 + C15128 + C32822 * C141 + C15111 * C126 +
             C15129 + C15129 + C32872 * C140 + C15109 * C125 + C15130 + C15130 +
             C32885 * C139 + C15107 * C124 + C15131 + C15131 + C32892 * C138) *
                C21058) *
               C32600 * C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
              C15955 + C15955 + C32517 * C138) *
                 C21058 +
             (C17211 + C17212) * C32699) *
                C32886 +
            ((C16112 + C16113) * C21058 + C17848 * C32699) * C32874 +
            C22013 * C32854) *
               C546 -
           (((C17022 + C17023) * C32699 + C20960 * C21058) * C32854 +
            (C17849 * C32699 + C17850 * C21058) * C32874 +
            ((C17214 + C17213) * C32699 + (C17212 + C17211) * C21058) *
                C32886) *
               C547) *
              C32556 * C454 +
          ((((C17650 + C17651) * C21058 + (C17652 + C17653) * C32699) * C32886 +
            ((C17432 + C17433) * C21058 + (C17434 + C17435) * C32699) * C32874 +
            ((C20570 + C20571) * C21058 +
             (C15949 * C1106 + C17422 + C17422 + C15943 * C1124 +
              C15951 * C1107 + C17423 + C17423 + C32517 * C1125) *
                 C32699) *
                C32854) *
               C547 -
           (((C20571 + C20570) * C32699 + (C16397 + C16396) * C21058) * C32854 +
            ((C17433 + C17432) * C32699 + (C16395 + C16394) * C21058) * C32874 +
            ((C17651 + C17650) * C32699 +
             (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
              C15969 + C15969 + C15943 * C138) *
                 C21058) *
                C32886) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[99] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
            C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
            C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
               C21058 +
           (C15107 * C334 + C15391 + C15391 + C32892 * C354 + C15109 * C333 +
            C15390 + C15390 + C32885 * C353 + C15111 * C332 + C15389 + C15389 +
            C32872 * C352 + C15113 * C331 + C15388 + C15388 + C32822 * C351) *
               C32699) *
              C32600 * C32570 * C32556 * C110 -
          ((C15113 * C330 + C15687 + C15687 + C32822 * C350 + C15111 * C331 +
            C15686 + C15686 + C32872 * C351 + C15109 * C332 + C15685 + C15685 +
            C32885 * C352 + C15107 * C333 + C15684 + C15684 + C32892 * C353) *
               C32699 +
           (C15113 * C127 + C15128 + C15128 + C32822 * C141 + C15111 * C126 +
            C15129 + C15129 + C32872 * C140 + C15109 * C125 + C15130 + C15130 +
            C32885 * C139 + C15107 * C124 + C15131 + C15131 + C32892 * C138) *
               C21058) *
              C32600 * C32570 * C32556 * C111 +
          ((C15107 * C125 + C15132 + C15132 + C32892 * C139 + C15109 * C126 +
            C15133 + C15133 + C32885 * C140 + C15111 * C127 + C15134 + C15134 +
            C32872 * C141 + C15113 * C128 + C15135 + C15135 + C32822 * C142) *
               C21058 +
           (C15107 * C332 + C21061 + C21061 + C32892 * C352 + C15109 * C331 +
            C21062 + C21062 + C32885 * C351 + C15111 * C330 + C21063 + C21063 +
            C32872 * C350 + C15113 * C548 + C21064 + C21064 + C32822 * C550) *
               C32699) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C15107 * C123 + C15116 + C15116 + C32892 * C137 + C15109 * C124 +
            C15117 + C15117 + C32885 * C138 + C15111 * C125 + C15118 + C15118 +
            C32872 * C139 + C15113 * C126 + C15119 + C15119 + C32822 * C140) *
               C21058 +
           (C15107 * C334 + C15391 + C15391 + C32892 * C354 + C15109 * C333 +
            C15390 + C15390 + C32885 * C353 + C15111 * C332 + C15389 + C15389 +
            C32872 * C352 + C15113 * C331 + C15388 + C15388 + C32822 * C351) *
               C32699) *
              C32600 * C32570 * C221 -
          ((C15842 + C15843 + C15844 + C15845) * C32699 +
           (C15281 + C15280 + C15279 + C15278) * C21058) *
              C32600 * C32570 * C222 +
          ((C15285 + C15284 + C15283 + C15282) * C21058 +
           (C15107 * C1101 + C15830 + C15830 + C32892 * C1119 + C15109 * C1100 +
            C15831 + C15831 + C32885 * C1118 + C15111 * C1099 + C15832 +
            C15832 + C32872 * C1117 + C15113 * C1472 + C15833 + C15833 +
            C32822 * C1474) *
               C32699) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C21058 +
            (C17211 + C17212) * C32699) *
               C32886 +
           ((C16112 + C16113) * C21058 + C17848 * C32699) * C32874 +
           (C16120 * C21058 + C20219 * C32699) * C32854) *
              C32570 * C32556 * C110 -
          (((C20571 + C20570) * C32699 + (C16397 + C16396) * C21058) * C32854 +
           ((C17433 + C17432) * C32699 + (C16395 + C16394) * C21058) * C32874 +
           ((C17651 + C17650) * C32699 +
            (C15951 * C125 + C15968 + C15968 + C32517 * C139 + C15949 * C124 +
             C15969 + C15969 + C15943 * C138) *
                C21058) *
               C32886) *
              C32570 * C32556 * C111 +
          (((C15949 * C125 + C15970 + C15970 + C15943 * C139 + C15951 * C126 +
             C15971 + C15971 + C32517 * C140) *
                C21058 +
            (C15949 * C332 + C16850 + C16850 + C15943 * C352 + C15951 * C331 +
             C16851 + C16851 + C32517 * C351) *
                C32699) *
               C32886 +
           ((C15949 * C227 + C15972 + C15972 + C15943 * C247 + C15951 * C226 +
             C15973 + C15973 + C32517 * C246) *
                C21058 +
            (C15949 * C640 + C16854 + C16854 + C15943 * C650 + C15951 * C641 +
             C16855 + C16855 + C32517 * C651) *
                C32699) *
               C32874 +
           ((C15949 * C232 + C15974 + C15974 + C15943 * C252 + C15951 * C233 +
             C15975 + C15975 + C32517 * C253) *
                C21058 +
            (C15949 * C1099 + C20070 + C20070 + C15943 * C1117 +
             C15951 * C1472 + C20071 + C20071 + C32517 * C1474) *
                C32699) *
               C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C15949 * C123 + C15954 + C15954 + C15943 * C137 + C15951 * C124 +
             C15955 + C15955 + C32517 * C138) *
                C21058 +
            (C17211 + C17212) * C32699) *
               C32886 +
           ((C16112 + C16113) * C21058 + C17848 * C32699) * C32874 +
           C22013 * C32854) *
              C32570 * C221 -
          (((C16694 + C16695) * C32699 + (C16117 + C16116) * C21058) * C32854 +
           (C20960 * C32699 + (C16115 + C16114) * C21058) * C32874 +
           (C17850 * C32699 + (C16113 + C16112) * C21058) * C32886) *
              C32570 * C222 +
          (C22013 * C32886 +
           (C16121 * C21058 + (C16695 + C16694) * C32699) * C32874 +
           ((C16119 + C16118) * C21058 +
            (C15949 * C6435 + C16680 + C16680 + C15943 * C6441 +
             C15951 * C6646 + C16681 + C16681 + C32517 * C6648) *
                C32699) *
               C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[100] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 +
             C2706 + C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 +
             C2692 * C139 + C2702 * C126 + C2708 + C2708 + C32822 * C140) *
                C32612 * C32823 +
            (C2867 + C2868 + C2869 + C2870) * C32612 * C32659) *
               C32570 * C452 -
           ((C2871 + C2872 + C2873 + C2874) * C32612 * C32659 +
            (C2870 + C2869 + C2868 + C2867) * C32612 * C32823) *
               C32570 * C453) *
              C454 +
          (((C3139 + C3140 + C3141 + C3142) * C32612 * C32823 +
            (C2696 * C231 + C3127 + C3127 + C2690 * C251 + C2698 * C232 +
             C3128 + C3128 + C2691 * C252 + C2700 * C233 + C3129 + C3129 +
             C2692 * C253 + C2702 * C234 + C3130 + C3130 + C32822 * C254) *
                C32612 * C32659) *
               C32570 * C453 -
           ((C3142 + C3141 + C3140 + C3139) * C32612 * C32659 +
            (C2702 * C127 + C2717 + C2717 + C32822 * C141 + C2700 * C126 +
             C2718 + C2718 + C2692 * C140 + C2698 * C125 + C2719 + C2719 +
             C2691 * C139 + C2696 * C124 + C2720 + C2720 + C2690 * C138) *
                C32612 * C32823) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32612 * C7763 +
            (C7930 + C7931) * C32612 * C7764 + C7940 * C7765 + C7941 * C32831) *
               C32570 * C452 -
           ((C7936 + C7937) * C32612 * C32831 +
            (C7935 + C7934) * C32612 * C7765 +
            (C7933 + C7932) * C32612 * C7764 +
            (C7931 + C7930) * C32612 * C7763) *
               C32570 * C453) *
              C454 +
          (((C8212 + C8213) * C32612 * C7763 +
            (C8214 + C8215) * C32612 * C7764 +
            (C8216 + C8217) * C32612 * C7765 +
            (C7767 * C921 + C8198 + C8198 + C32804 * C933 + C7769 * C922 +
             C8199 + C8199 + C32517 * C934) *
                C32612 * C32831) *
               C32570 * C453 -
           ((C8217 + C8216) * C32612 * C32831 +
            (C8215 + C8214) * C32612 * C7765 +
            (C8213 + C8212) * C32612 * C7764 +
            (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
             C7787 + C7787 + C32804 * C138) *
                C32612 * C7763) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[101] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 +
             C2706 + C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 +
             C2692 * C139 + C2702 * C126 + C2708 + C2708 + C32822 * C140) *
                C32612 * C32823 +
            (C2867 + C2868 + C2869 + C2870) * C32612 * C32659) *
               C546 -
           ((C3431 + C3432 + C3433 + C3434) * C32612 * C32659 +
            (C2702 * C331 + C2977 + C2977 + C32822 * C351 + C2700 * C332 +
             C2978 + C2978 + C2692 * C352 + C2698 * C333 + C2979 + C2979 +
             C2691 * C353 + C2696 * C334 + C2980 + C2980 + C2690 * C354) *
                C32612 * C32823) *
               C547) *
              C452 +
          (((C3434 + C3433 + C3432 + C3431) * C32612 * C32823 +
            (C2696 * C1101 + C3419 + C3419 + C2690 * C1119 + C2698 * C1100 +
             C3420 + C3420 + C2691 * C1118 + C2700 * C1099 + C3421 + C3421 +
             C2692 * C1117 + C2702 * C1472 + C3422 + C3422 + C32822 * C1474) *
                C32612 * C32659) *
               C547 -
           ((C2871 + C2872 + C2873 + C2874) * C32612 * C32659 +
            (C2870 + C2869 + C2868 + C2867) * C32612 * C32823) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32612 * C7763 +
            (C7930 + C7931) * C32612 * C7764 + C7940 * C7765 + C7941 * C32831) *
               C546 -
           ((C8512 + C8513) * C32612 * C32831 +
            (C8514 + C8515) * C32612 * C7765 +
            (C8516 + C8517) * C32612 * C7764 +
            (C7769 * C333 + C8046 + C8046 + C32517 * C353 + C7767 * C334 +
             C8047 + C8047 + C32804 * C354) *
                C32612 * C7763) *
               C547) *
              C452 +
          (((C8517 + C8516) * C32612 * C7763 +
            (C8515 + C8514) * C32612 * C7764 +
            (C8513 + C8512) * C32612 * C7765 +
            (C7767 * C6435 + C8498 + C8498 + C32804 * C6441 + C7769 * C6646 +
             C8499 + C8499 + C32517 * C6648) *
                C32612 * C32831) *
               C547 -
           ((C7936 + C7937) * C32612 * C32831 +
            (C7935 + C7934) * C32612 * C7765 +
            (C7933 + C7932) * C32612 * C7764 +
            (C7931 + C7930) * C32612 * C7763) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[102] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 + C2706 +
            C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 + C2692 * C139 +
            C2702 * C126 + C2708 + C2708 + C32822 * C140) *
               C32612 * C32823 +
           (C2867 + C2868 + C2869 + C2870) * C32612 * C32659) *
              C32570 * C221 -
          ((C2871 + C2872 + C2873 + C2874) * C32612 * C32659 +
           (C2870 + C2869 + C2868 + C2867) * C32612 * C32823) *
              C32570 * C222 +
          ((C2874 + C2873 + C2872 + C2871) * C32612 * C32823 +
           (C2696 * C919 + C2847 + C2847 + C2690 * C931 + C2698 * C918 + C2848 +
            C2848 + C2691 * C930 + C2700 * C917 + C2849 + C2849 + C2692 * C929 +
            C2702 * C1290 + C2850 + C2850 + C32822 * C1292) *
               C32612 * C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 + C2706 +
            C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 + C2692 * C139 +
            C2702 * C126 + C2708 + C2708 + C32822 * C140) *
               C32612 * C32823 +
           (C2696 * C229 + C2709 + C2709 + C2690 * C249 + C2698 * C228 + C2710 +
            C2710 + C2691 * C248 + C2700 * C227 + C2711 + C2711 + C2692 * C247 +
            C2702 * C226 + C2712 + C2712 + C32822 * C246) *
               C32612 * C32659) *
              C32570 * C32556 * C110 -
          ((C2702 * C225 + C2713 + C2713 + C32822 * C245 + C2700 * C226 +
            C2714 + C2714 + C2692 * C246 + C2698 * C227 + C2715 + C2715 +
            C2691 * C247 + C2696 * C228 + C2716 + C2716 + C2690 * C248) *
               C32612 * C32659 +
           (C2702 * C127 + C2717 + C2717 + C32822 * C141 + C2700 * C126 +
            C2718 + C2718 + C2692 * C140 + C2698 * C125 + C2719 + C2719 +
            C2691 * C139 + C2696 * C124 + C2720 + C2720 + C2690 * C138) *
               C32612 * C32823) *
              C32570 * C32556 * C111 +
          ((C2696 * C125 + C2721 + C2721 + C2690 * C139 + C2698 * C126 + C2722 +
            C2722 + C2691 * C140 + C2700 * C127 + C2723 + C2723 + C2692 * C141 +
            C2702 * C128 + C2724 + C2724 + C32822 * C142) *
               C32612 * C32823 +
           (C2696 * C227 + C2725 + C2725 + C2690 * C247 + C2698 * C226 + C2726 +
            C2726 + C2691 * C246 + C2700 * C225 + C2727 + C2727 + C2692 * C245 +
            C2702 * C456 + C2728 + C2728 + C32822 * C458) *
               C32612 * C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 + C2706 +
            C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 + C2692 * C139 +
            C2702 * C126 + C2708 + C2708 + C32822 * C140) *
               C32612 * C32823 +
           (C2867 + C2868 + C2869 + C2870) * C32612 * C32659) *
              C327 -
          ((C2702 * C641 + C2973 + C2973 + C32822 * C651 + C2700 * C640 +
            C2974 + C2974 + C2692 * C650 + C2698 * C639 + C2975 + C2975 +
            C2691 * C649 + C2696 * C638 + C2976 + C2976 + C2690 * C648) *
               C32612 * C32659 +
           (C2702 * C331 + C2977 + C2977 + C32822 * C351 + C2700 * C332 +
            C2978 + C2978 + C2692 * C352 + C2698 * C333 + C2979 + C2979 +
            C2691 * C353 + C2696 * C334 + C2980 + C2980 + C2690 * C354) *
               C32612 * C32823) *
              C328 +
          ((C2696 * C335 + C2981 + C2981 + C2690 * C355 + C2698 * C336 + C2982 +
            C2982 + C2691 * C356 + C2700 * C337 + C2983 + C2983 + C2692 * C357 +
            C2702 * C338 + C2984 + C2984 + C32822 * C358) *
               C32612 * C32823 +
           (C2696 * C1102 + C2985 + C2985 + C2690 * C1120 + C2698 * C1103 +
            C2986 + C2986 + C2691 * C1121 + C2700 * C1104 + C2987 + C2987 +
            C2692 * C1122 + C2702 * C2231 + C2988 + C2988 + C32822 * C2233) *
               C32612 * C32659) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
            C7773 + C7773 + C32517 * C138) *
               C32612 * C7763 +
           (C7767 * C229 + C7774 + C7774 + C32804 * C249 + C7769 * C228 +
            C7775 + C7775 + C32517 * C248) *
               C32612 * C7764 +
           (C7767 * C230 + C7776 + C7776 + C32804 * C250 + C7769 * C231 +
            C7777 + C7777 + C32517 * C251) *
               C32612 * C7765 +
           (C7767 * C919 + C7778 + C7778 + C32804 * C931 + C7769 * C918 +
            C7779 + C7779 + C32517 * C930) *
               C32612 * C32831) *
              C32570 * C32556 * C110 -
          ((C7769 * C917 + C7780 + C7780 + C32517 * C929 + C7767 * C918 +
            C7781 + C7781 + C32804 * C930) *
               C32612 * C32831 +
           (C7769 * C232 + C7782 + C7782 + C32517 * C252 + C7767 * C231 +
            C7783 + C7783 + C32804 * C251) *
               C32612 * C7765 +
           (C7769 * C227 + C7784 + C7784 + C32517 * C247 + C7767 * C228 +
            C7785 + C7785 + C32804 * C248) *
               C32612 * C7764 +
           (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
            C7787 + C7787 + C32804 * C138) *
               C32612 * C7763) *
              C32570 * C32556 * C111 +
          ((C7767 * C125 + C7788 + C7788 + C32804 * C139 + C7769 * C126 +
            C7789 + C7789 + C32517 * C140) *
               C32612 * C7763 +
           (C7767 * C227 + C7790 + C7790 + C32804 * C247 + C7769 * C226 +
            C7791 + C7791 + C32517 * C246) *
               C32612 * C7764 +
           (C7767 * C232 + C7792 + C7792 + C32804 * C252 + C7769 * C233 +
            C7793 + C7793 + C32517 * C253) *
               C32612 * C7765 +
           (C7767 * C917 + C7794 + C7794 + C32804 * C929 + C7769 * C1290 +
            C7795 + C7795 + C32517 * C1292) *
               C32612 * C32831) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
            C7773 + C7773 + C32517 * C138) *
               C32612 * C7763 +
           (C7930 + C7931) * C32612 * C7764 + C7940 * C7765 + C7941 * C32831) *
              C32570 * C221 -
          ((C7936 + C7937) * C32612 * C32831 +
           (C7935 + C7934) * C32612 * C7765 + (C7933 + C7932) * C32612 * C7764 +
           (C7931 + C7930) * C32612 * C7763) *
              C32570 * C222 +
          (C7940 * C7763 + C7941 * C7764 + (C7937 + C7936) * C32612 * C7765 +
           (C7767 * C6335 + C7912 + C7912 + C32804 * C6339 + C7769 * C6536 +
            C7913 + C7913 + C32517 * C6538) *
               C32612 * C32831) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
            C7773 + C7773 + C32517 * C138) *
               C32612 * C7763 +
           (C7930 + C7931) * C32612 * C7764 + C7940 * C7765 + C7941 * C32831) *
              C327 -
          ((C7769 * C1631 + C8040 + C8040 + C32517 * C1637 + C7767 * C1630 +
            C8041 + C8041 + C32804 * C1636) *
               C32612 * C32831 +
           (C7769 * C1100 + C8042 + C8042 + C32517 * C1118 + C7767 * C1101 +
            C8043 + C8043 + C32804 * C1119) *
               C32612 * C7765 +
           (C7769 * C639 + C8044 + C8044 + C32517 * C649 + C7767 * C638 +
            C8045 + C8045 + C32804 * C648) *
               C32612 * C7764 +
           (C7769 * C333 + C8046 + C8046 + C32517 * C353 + C7767 * C334 +
            C8047 + C8047 + C32804 * C354) *
               C32612 * C7763) *
              C328 +
          ((C7767 * C335 + C8048 + C8048 + C32804 * C355 + C7769 * C336 +
            C8049 + C8049 + C32517 * C356) *
               C32612 * C7763 +
           (C7767 * C1102 + C8050 + C8050 + C32804 * C1120 + C7769 * C1103 +
            C8051 + C8051 + C32517 * C1121) *
               C32612 * C7764 +
           (C7767 * C1105 + C8052 + C8052 + C32804 * C1123 + C7769 * C1106 +
            C8053 + C8053 + C32517 * C1124) *
               C32612 * C7765 +
           (C7767 * C6436 + C8054 + C8054 + C32804 * C6442 + C7769 * C7315 +
            C8055 + C8055 + C32517 * C7317) *
               C32612 * C32831) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[103] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 +
             C2706 + C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 +
             C2692 * C139 + C2702 * C126 + C2708 + C2708 + C32822 * C140) *
                C32612 * C32823 +
            (C2867 + C2868 + C2869 + C2870) * C32612 * C32659) *
               C546 -
           ((C2702 * C641 + C2973 + C2973 + C32822 * C651 + C2700 * C640 +
             C2974 + C2974 + C2692 * C650 + C2698 * C639 + C2975 + C2975 +
             C2691 * C649 + C2696 * C638 + C2976 + C2976 + C2690 * C648) *
                C32612 * C32659 +
            (C2702 * C331 + C2977 + C2977 + C32822 * C351 + C2700 * C332 +
             C2978 + C2978 + C2692 * C352 + C2698 * C333 + C2979 + C2979 +
             C2691 * C353 + C2696 * C334 + C2980 + C2980 + C2690 * C354) *
                C32612 * C32823) *
               C547) *
              C32556 * C454 +
          (((C2696 * C333 + C3273 + C3273 + C2690 * C353 + C2698 * C332 +
             C3274 + C3274 + C2691 * C352 + C2700 * C331 + C3275 + C3275 +
             C2692 * C351 + C2702 * C330 + C3276 + C3276 + C32822 * C350) *
                C32612 * C32823 +
            (C2696 * C639 + C3277 + C3277 + C2690 * C649 + C2698 * C640 +
             C3278 + C3278 + C2691 * C650 + C2700 * C641 + C3279 + C3279 +
             C2692 * C651 + C2702 * C642 + C3280 + C3280 + C32822 * C652) *
                C32612 * C32659) *
               C547 -
           ((C3142 + C3141 + C3140 + C3139) * C32612 * C32659 +
            (C2702 * C127 + C2717 + C2717 + C32822 * C141 + C2700 * C126 +
             C2718 + C2718 + C2692 * C140 + C2698 * C125 + C2719 + C2719 +
             C2691 * C139 + C2696 * C124 + C2720 + C2720 + C2690 * C138) *
                C32612 * C32823) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32612 * C7763 +
            (C7930 + C7931) * C32612 * C7764 + C7940 * C7765 + C7941 * C32831) *
               C546 -
           ((C7769 * C1631 + C8040 + C8040 + C32517 * C1637 + C7767 * C1630 +
             C8041 + C8041 + C32804 * C1636) *
                C32612 * C32831 +
            (C7769 * C1100 + C8042 + C8042 + C32517 * C1118 + C7767 * C1101 +
             C8043 + C8043 + C32804 * C1119) *
                C32612 * C7765 +
            (C7769 * C639 + C8044 + C8044 + C32517 * C649 + C7767 * C638 +
             C8045 + C8045 + C32804 * C648) *
                C32612 * C7764 +
            (C7769 * C333 + C8046 + C8046 + C32517 * C353 + C7767 * C334 +
             C8047 + C8047 + C32804 * C354) *
                C32612 * C7763) *
               C547) *
              C32556 * C454 +
          (((C7767 * C333 + C8348 + C8348 + C32804 * C353 + C7769 * C332 +
             C8349 + C8349 + C32517 * C352) *
                C32612 * C7763 +
            (C7767 * C639 + C8350 + C8350 + C32804 * C649 + C7769 * C640 +
             C8351 + C8351 + C32517 * C650) *
                C32612 * C7764 +
            (C7767 * C1100 + C8352 + C8352 + C32804 * C1118 + C7769 * C1099 +
             C8353 + C8353 + C32517 * C1117) *
                C32612 * C7765 +
            (C7767 * C1631 + C8354 + C8354 + C32804 * C1637 + C7769 * C1632 +
             C8355 + C8355 + C32517 * C1638) *
                C32612 * C32831) *
               C547 -
           ((C8217 + C8216) * C32612 * C32831 +
            (C8215 + C8214) * C32612 * C7765 +
            (C8213 + C8212) * C32612 * C7764 +
            (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
             C7787 + C7787 + C32804 * C138) *
                C32612 * C7763) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[104] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 + C2706 +
            C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 + C2692 * C139 +
            C2702 * C126 + C2708 + C2708 + C32822 * C140) *
               C32612 * C32823 +
           (C2696 * C229 + C2709 + C2709 + C2690 * C249 + C2698 * C228 + C2710 +
            C2710 + C2691 * C248 + C2700 * C227 + C2711 + C2711 + C2692 * C247 +
            C2702 * C226 + C2712 + C2712 + C32822 * C246) *
               C32612 * C32659) *
              C32570 * C32556 * C110 -
          ((C2702 * C225 + C2713 + C2713 + C32822 * C245 + C2700 * C226 +
            C2714 + C2714 + C2692 * C246 + C2698 * C227 + C2715 + C2715 +
            C2691 * C247 + C2696 * C228 + C2716 + C2716 + C2690 * C248) *
               C32612 * C32659 +
           (C2702 * C127 + C2717 + C2717 + C32822 * C141 + C2700 * C126 +
            C2718 + C2718 + C2692 * C140 + C2698 * C125 + C2719 + C2719 +
            C2691 * C139 + C2696 * C124 + C2720 + C2720 + C2690 * C138) *
               C32612 * C32823) *
              C32570 * C32556 * C111 +
          ((C2696 * C125 + C2721 + C2721 + C2690 * C139 + C2698 * C126 + C2722 +
            C2722 + C2691 * C140 + C2700 * C127 + C2723 + C2723 + C2692 * C141 +
            C2702 * C128 + C2724 + C2724 + C32822 * C142) *
               C32612 * C32823 +
           (C2696 * C227 + C2725 + C2725 + C2690 * C247 + C2698 * C226 + C2726 +
            C2726 + C2691 * C246 + C2700 * C225 + C2727 + C2727 + C2692 * C245 +
            C2702 * C456 + C2728 + C2728 + C32822 * C458) *
               C32612 * C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 + C2706 +
            C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 + C2692 * C139 +
            C2702 * C126 + C2708 + C2708 + C32822 * C140) *
               C32612 * C32823 +
           (C2867 + C2868 + C2869 + C2870) * C32612 * C32659) *
              C32570 * C221 -
          ((C2871 + C2872 + C2873 + C2874) * C32612 * C32659 +
           (C2870 + C2869 + C2868 + C2867) * C32612 * C32823) *
              C32570 * C222 +
          ((C2874 + C2873 + C2872 + C2871) * C32612 * C32823 +
           (C2696 * C919 + C2847 + C2847 + C2690 * C931 + C2698 * C918 + C2848 +
            C2848 + C2691 * C930 + C2700 * C917 + C2849 + C2849 + C2692 * C929 +
            C2702 * C1290 + C2850 + C2850 + C32822 * C1292) *
               C32612 * C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
            C7773 + C7773 + C32517 * C138) *
               C32612 * C7763 +
           (C7767 * C229 + C7774 + C7774 + C32804 * C249 + C7769 * C228 +
            C7775 + C7775 + C32517 * C248) *
               C32612 * C7764 +
           (C7767 * C230 + C7776 + C7776 + C32804 * C250 + C7769 * C231 +
            C7777 + C7777 + C32517 * C251) *
               C32612 * C7765 +
           (C7767 * C919 + C7778 + C7778 + C32804 * C931 + C7769 * C918 +
            C7779 + C7779 + C32517 * C930) *
               C32612 * C32831) *
              C32570 * C32556 * C110 -
          ((C7769 * C917 + C7780 + C7780 + C32517 * C929 + C7767 * C918 +
            C7781 + C7781 + C32804 * C930) *
               C32612 * C32831 +
           (C7769 * C232 + C7782 + C7782 + C32517 * C252 + C7767 * C231 +
            C7783 + C7783 + C32804 * C251) *
               C32612 * C7765 +
           (C7769 * C227 + C7784 + C7784 + C32517 * C247 + C7767 * C228 +
            C7785 + C7785 + C32804 * C248) *
               C32612 * C7764 +
           (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
            C7787 + C7787 + C32804 * C138) *
               C32612 * C7763) *
              C32570 * C32556 * C111 +
          ((C7767 * C125 + C7788 + C7788 + C32804 * C139 + C7769 * C126 +
            C7789 + C7789 + C32517 * C140) *
               C32612 * C7763 +
           (C7767 * C227 + C7790 + C7790 + C32804 * C247 + C7769 * C226 +
            C7791 + C7791 + C32517 * C246) *
               C32612 * C7764 +
           (C7767 * C232 + C7792 + C7792 + C32804 * C252 + C7769 * C233 +
            C7793 + C7793 + C32517 * C253) *
               C32612 * C7765 +
           (C7767 * C917 + C7794 + C7794 + C32804 * C929 + C7769 * C1290 +
            C7795 + C7795 + C32517 * C1292) *
               C32612 * C32831) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
            C7773 + C7773 + C32517 * C138) *
               C32612 * C7763 +
           (C7930 + C7931) * C32612 * C7764 + C7940 * C7765 + C7941 * C32831) *
              C32570 * C221 -
          ((C7936 + C7937) * C32612 * C32831 +
           (C7935 + C7934) * C32612 * C7765 + (C7933 + C7932) * C32612 * C7764 +
           (C7931 + C7930) * C32612 * C7763) *
              C32570 * C222 +
          (C7940 * C7763 + C7941 * C7764 + (C7937 + C7936) * C32612 * C7765 +
           (C7767 * C6335 + C7912 + C7912 + C32804 * C6339 + C7769 * C6536 +
            C7913 + C7913 + C32517 * C6538) *
               C32612 * C32831) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[105] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
              C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                 C32824 +
             (C2075 + C2076 + C2077) * C32699) *
                C32823 +
            ((C978 + C979 + C980) * C32824 + (C1672 + C1671 + C1670) * C32699) *
                C32659) *
               C32570 * C452 -
           (((C1667 + C1668 + C1669) * C32699 + (C983 + C982 + C981) * C32824) *
                C32659 +
            ((C1670 + C1671 + C1672) * C32699 + (C980 + C979 + C978) * C32824) *
                C32823) *
               C32570 * C453) *
              C454 +
          ((((C1321 + C1322 + C1323) * C32824 +
             (C4840 + C4841 + C4842) * C32699) *
                C32823 +
            ((C1324 + C1325 + C1326) * C32824 +
             (C774 * C1100 + C1482 + C1482 + C768 * C1118 + C776 * C1099 +
              C1483 + C1483 + C769 * C1117 + C778 * C1472 + C1484 + C1484 +
              C32845 * C1474) *
                 C32699) *
                C32659) *
               C32570 * C453 -
           (((C4842 + C4841 + C4840) * C32699 +
             (C1323 + C1322 + C1321) * C32824) *
                C32659 +
            ((C2416 + C2415 + C2414) * C32699 +
             (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
              C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                 C32824) *
                C32823) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32824 +
             C7165 * C32699) *
                C7763 +
            (C9830 + C9831) * C7764 + C9838 * C7765 + C9839 * C32831) *
               C32570 * C452 -
           ((C9836 + C9837) * C32831 + (C9835 + C9834) * C7765 +
            (C9833 + C9832) * C7764 + (C9831 + C9830) * C7763) *
               C32570 * C453) *
              C454 +
          (((C10068 + C10069) * C7763 + (C10070 + C10071) * C7764 +
            (C10072 + C10078) * C7765 +
            (C6560 * C32824 +
             (C6256 * C6646 + C6654 + C6654 + C32507 * C6648) * C32699) *
                C32831) *
               C32570 * C453 -
           ((C10078 + C10072) * C32831 + (C10071 + C10070) * C7765 +
            (C10069 + C10068) * C7764 +
            (C7506 * C32699 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32824) *
                C7763) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[106] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
              C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                 C32824 +
             (C2075 + C2076 + C2077) * C32699) *
                C32823 +
            ((C978 + C979 + C980) * C32824 + C5233 * C32699) * C32659) *
               C546 -
           (((C2592 + C2591 + C2590) * C32699 + C5234 * C32824) * C32659 +
            ((C2080 + C2079 + C2078) * C32699 +
             (C2077 + C2076 + C2075) * C32824) *
                C32823) *
               C547) *
              C452 +
          (((C5233 * C32824 + (C2590 + C2591 + C2592) * C32699) * C32823 +
            ((C1669 + C1668 + C1667) * C32824 +
             (C774 * C1105 + C1142 + C1142 + C768 * C1123 + C776 * C1106 +
              C1143 + C1143 + C769 * C1124 + C778 * C1107 + C1144 + C1144 +
              C32845 * C1125) *
                 C32699) *
                C32659) *
               C547 -
           (((C1667 + C1668 + C1669) * C32699 + (C983 + C982 + C981) * C32824) *
                C32659 +
            (C5234 * C32699 + (C980 + C979 + C978) * C32824) * C32823) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32824 +
             C7165 * C32699) *
                C7763 +
            (C9830 + C9831) * C7764 + C9838 * C7765 + C9839 * C32831) *
               C546 -
           ((C10339 + C10340) * C32831 + (C10341 + C10342) * C7765 +
            (C10343 + C10344) * C7764 +
            (C7166 * C32699 + C7165 * C32824) * C7763) *
               C547) *
              C452 +
          (((C10344 + C10343) * C7763 + (C10342 + C10341) * C7764 +
            (C10340 + C10339) * C7765 +
            (C6757 * C32824 +
             (C6256 * C6437 + C6454 + C6454 + C32507 * C6443) * C32699) *
                C32831) *
               C547 -
           ((C9836 + C9837) * C32831 + (C9835 + C9834) * C7765 +
            (C9833 + C9832) * C7764 + (C9831 + C9830) * C7763) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[107] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32824 +
            (C2075 + C2076 + C2077) * C32699) *
               C32823 +
           ((C978 + C979 + C980) * C32824 + (C1672 + C1671 + C1670) * C32699) *
               C32659) *
              C32570 * C221 -
          (((C1667 + C1668 + C1669) * C32699 + (C983 + C982 + C981) * C32824) *
               C32659 +
           ((C1670 + C1671 + C1672) * C32699 + (C980 + C979 + C978) * C32824) *
               C32823) *
              C32570 * C222 +
          ((C988 * C32824 + (C1669 + C1668 + C1667) * C32699) * C32823 +
           ((C986 + C985 + C984) * C32824 +
            (C774 * C1630 + C1652 + C1652 + C768 * C1636 + C776 * C1631 +
             C1653 + C1653 + C769 * C1637 + C778 * C1632 + C1654 + C1654 +
             C32845 * C1638) *
                C32699) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32824 +
            (C2075 + C2076 + C2077) * C32699) *
               C32823 +
           ((C978 + C979 + C980) * C32824 + (C1672 + C1671 + C1670) * C32699) *
               C32659) *
              C32570 * C32556 * C110 -
          (((C778 * C641 + C1481 + C1481 + C32845 * C651 + C776 * C640 + C1480 +
             C1480 + C769 * C650 + C774 * C639 + C1479 + C1479 + C768 * C649) *
                C32699 +
            (C1323 + C1322 + C1321) * C32824) *
               C32659 +
           ((C2416 + C2415 + C2414) * C32699 +
            (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
             C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                C32824) *
               C32823) *
              C32570 * C32556 * C111 +
          (((C774 * C125 + C799 + C799 + C768 * C139 + C776 * C126 + C800 +
             C800 + C769 * C140 + C778 * C127 + C801 + C801 + C32845 * C141) *
                C32824 +
            (C774 * C332 + C1789 + C1789 + C768 * C352 + C776 * C331 + C1790 +
             C1790 + C769 * C351 + C778 * C330 + C1791 + C1791 +
             C32845 * C350) *
                C32699) *
               C32823 +
           ((C774 * C227 + C802 + C802 + C768 * C247 + C776 * C226 + C803 +
             C803 + C769 * C246 + C778 * C225 + C804 + C804 + C32845 * C245) *
                C32824 +
            (C774 * C640 + C4339 + C4339 + C768 * C650 + C776 * C641 + C4340 +
             C4340 + C769 * C651 + C778 * C642 + C4341 + C4341 +
             C32845 * C652) *
                C32699) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32824 +
            (C2075 + C2076 + C2077) * C32699) *
               C32823 +
           ((C978 + C979 + C980) * C32824 + (C1672 + C1671 + C1670) * C32699) *
               C32659) *
              C327 -
          (((C2592 + C2591 + C2590) * C32699 +
            (C1670 + C1671 + C1672) * C32824) *
               C32659 +
           ((C2080 + C2079 + C2078) * C32699 +
            (C2077 + C2076 + C2075) * C32824) *
               C32823) *
              C328 +
          ((C2085 * C32824 + (C2083 + C2082 + C2081) * C32699) * C32823 +
           ((C2590 + C2591 + C2592) * C32824 +
            (C774 * C2565 + C2581 + C2581 + C768 * C2571 + C776 * C2566 +
             C2582 + C2582 + C769 * C2572 + C778 * C2567 + C2583 + C2583 +
             C32845 * C2573) *
                C32699) *
               C32659) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32824 +
            C7165 * C32699) *
               C7763 +
           (C6364 * C32824 + C6760 * C32699) * C7764 +
           (C6365 * C32824 + C6759 * C32699) * C7765 +
           (C6366 * C32824 + C6758 * C32699) * C32831) *
              C32570 * C32556 * C110 -
          (((C6256 * C1631 + C6653 + C6653 + C32507 * C1637) * C32699 +
            C6559 * C32824) *
               C32831 +
           (C7340 * C32699 + C6558 * C32824) * C7765 +
           (C7338 * C32699 + C6557 * C32824) * C7764 +
           (C7506 * C32699 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32824) *
               C7763) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32824 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C32699) *
               C7763 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32824 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C32699) *
               C7764 +
           ((C6256 * C232 + C6271 + C6271 + C32507 * C252) * C32824 +
            (C6256 * C1099 + C6882 + C6882 + C32507 * C1117) * C32699) *
               C7765 +
           ((C6256 * C917 + C6272 + C6272 + C32507 * C929) * C32824 +
            (C6256 * C1632 + C9731 + C9731 + C32507 * C1638) * C32699) *
               C32831) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32824 +
            C7165 * C32699) *
               C7763 +
           (C9830 + C9831) * C7764 + C9838 * C7765 + C9839 * C32831) *
              C32570 * C221 -
          ((C9836 + C9837) * C32831 + (C9835 + C9834) * C7765 +
           (C9833 + C9832) * C7764 + (C9831 + C9830) * C7763) *
              C32570 * C222 +
          (C9838 * C7763 + C9839 * C7764 + (C9837 + C9836) * C7765 +
           (C6368 * C32824 +
            (C6256 * C6736 + C6748 + C6748 + C32507 * C6738) * C32699) *
               C32831) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32824 +
            C7165 * C32699) *
               C7763 +
           (C9830 + C9831) * C7764 + C9838 * C7765 + C9839 * C32831) *
              C327 -
          ((C7015 * C32699 + C6758 * C32824) * C32831 +
           (C7014 * C32699 + C6759 * C32824) * C7765 +
           (C7013 * C32699 + C6760 * C32824) * C7764 +
           (C7166 * C32699 + C7165 * C32824) * C7763) *
              C328 +
          ((C7166 * C32824 + C7169 * C32699) * C7763 +
           (C7013 * C32824 + C7168 * C32699) * C7764 +
           (C7014 * C32824 + C7167 * C32699) * C7765 +
           (C7015 * C32824 +
            (C6256 * C7653 + C7663 + C7663 + C32507 * C7655) * C32699) *
               C32831) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[108] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
              C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                 C32824 +
             (C2075 + C2076 + C2077) * C32699) *
                C32823 +
            ((C978 + C979 + C980) * C32824 + (C1672 + C1671 + C1670) * C32699) *
                C32659) *
               C546 -
           (((C2592 + C2591 + C2590) * C32699 +
             (C1670 + C1671 + C1672) * C32824) *
                C32659 +
            ((C2080 + C2079 + C2078) * C32699 +
             (C2077 + C2076 + C2075) * C32824) *
                C32823) *
               C547) *
              C32556 * C454 +
          ((((C2414 + C2415 + C2416) * C32824 +
             (C2417 + C2418 + C2419) * C32699) *
                C32823 +
            ((C4840 + C4841 + C4842) * C32824 +
             (C774 * C1103 + C2235 + C2235 + C768 * C1121 + C776 * C1104 +
              C2236 + C2236 + C769 * C1122 + C778 * C2231 + C2237 + C2237 +
              C32845 * C2233) *
                 C32699) *
                C32659) *
               C547 -
           (((C4842 + C4841 + C4840) * C32699 +
             (C1323 + C1322 + C1321) * C32824) *
                C32659 +
            ((C2416 + C2415 + C2414) * C32699 +
             (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
              C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                 C32824) *
                C32823) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32824 +
             C7165 * C32699) *
                C7763 +
            (C9830 + C9831) * C7764 + C9838 * C7765 + C9839 * C32831) *
               C546 -
           ((C7015 * C32699 + C6758 * C32824) * C32831 +
            (C7014 * C32699 + C6759 * C32824) * C7765 +
            (C7013 * C32699 + C6760 * C32824) * C7764 +
            (C7166 * C32699 + C7165 * C32824) * C7763) *
               C547) *
              C32556 * C454 +
          (((C7506 * C32824 + C7507 * C32699) * C7763 +
            (C7338 * C32824 + C7339 * C32699) * C7764 +
            (C7340 * C32824 + C7341 * C32699) * C7765 +
            (C10077 * C32824 +
             (C6256 * C7315 + C7329 + C7329 + C32507 * C7317) * C32699) *
                C32831) *
               C547 -
           ((C10078 + C10072) * C32831 + (C10071 + C10070) * C7765 +
            (C10069 + C10068) * C7764 +
            (C7506 * C32699 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32824) *
                C7763) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[109] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32824 +
            (C2075 + C2076 + C2077) * C32699) *
               C32823 +
           ((C978 + C979 + C980) * C32824 + (C1672 + C1671 + C1670) * C32699) *
               C32659) *
              C32570 * C32556 * C110 -
          (((C778 * C641 + C1481 + C1481 + C32845 * C651 + C776 * C640 + C1480 +
             C1480 + C769 * C650 + C774 * C639 + C1479 + C1479 + C768 * C649) *
                C32699 +
            (C1323 + C1322 + C1321) * C32824) *
               C32659 +
           ((C2416 + C2415 + C2414) * C32699 +
            (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
             C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                C32824) *
               C32823) *
              C32570 * C32556 * C111 +
          (((C774 * C125 + C799 + C799 + C768 * C139 + C776 * C126 + C800 +
             C800 + C769 * C140 + C778 * C127 + C801 + C801 + C32845 * C141) *
                C32824 +
            (C774 * C332 + C1789 + C1789 + C768 * C352 + C776 * C331 + C1790 +
             C1790 + C769 * C351 + C778 * C330 + C1791 + C1791 +
             C32845 * C350) *
                C32699) *
               C32823 +
           ((C774 * C227 + C802 + C802 + C768 * C247 + C776 * C226 + C803 +
             C803 + C769 * C246 + C778 * C225 + C804 + C804 + C32845 * C245) *
                C32824 +
            (C774 * C640 + C4339 + C4339 + C768 * C650 + C776 * C641 + C4340 +
             C4340 + C769 * C651 + C778 * C642 + C4341 + C4341 +
             C32845 * C652) *
                C32699) *
               C32659) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32824 +
            (C2075 + C2076 + C2077) * C32699) *
               C32823 +
           ((C978 + C979 + C980) * C32824 + (C1672 + C1671 + C1670) * C32699) *
               C32659) *
              C32570 * C221 -
          (((C1667 + C1668 + C1669) * C32699 + (C983 + C982 + C981) * C32824) *
               C32659 +
           ((C1670 + C1671 + C1672) * C32699 + (C980 + C979 + C978) * C32824) *
               C32823) *
              C32570 * C222 +
          ((C988 * C32824 + (C1669 + C1668 + C1667) * C32699) * C32823 +
           ((C986 + C985 + C984) * C32824 +
            (C774 * C1630 + C1652 + C1652 + C768 * C1636 + C776 * C1631 +
             C1653 + C1653 + C769 * C1637 + C778 * C1632 + C1654 + C1654 +
             C32845 * C1638) *
                C32699) *
               C32659) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32824 +
            C7165 * C32699) *
               C7763 +
           (C6364 * C32824 + C6760 * C32699) * C7764 +
           (C6365 * C32824 + C6759 * C32699) * C7765 +
           (C6366 * C32824 + C6758 * C32699) * C32831) *
              C32570 * C32556 * C110 -
          (((C6256 * C1631 + C6653 + C6653 + C32507 * C1637) * C32699 +
            C6559 * C32824) *
               C32831 +
           (C7340 * C32699 + C6558 * C32824) * C7765 +
           (C7338 * C32699 + C6557 * C32824) * C7764 +
           (C7506 * C32699 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32824) *
               C7763) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32824 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C32699) *
               C7763 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32824 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C32699) *
               C7764 +
           ((C6256 * C232 + C6271 + C6271 + C32507 * C252) * C32824 +
            (C6256 * C1099 + C6882 + C6882 + C32507 * C1117) * C32699) *
               C7765 +
           ((C6256 * C917 + C6272 + C6272 + C32507 * C929) * C32824 +
            (C6256 * C1632 + C9731 + C9731 + C32507 * C1638) * C32699) *
               C32831) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32824 +
            C7165 * C32699) *
               C7763 +
           (C9830 + C9831) * C7764 + C9838 * C7765 + C9839 * C32831) *
              C32570 * C221 -
          ((C9836 + C9837) * C32831 + (C9835 + C9834) * C7765 +
           (C9833 + C9832) * C7764 + (C9831 + C9830) * C7763) *
              C32570 * C222 +
          (C9838 * C7763 + C9839 * C7764 + (C9837 + C9836) * C7765 +
           (C6368 * C32824 +
            (C6256 * C6736 + C6748 + C6748 + C32507 * C6738) * C32699) *
               C32831) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[110] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32612 * C32886 +
            (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
               C32570 * C452 -
           ((C984 + C985 + C986) * C32612 * C32854 +
            (C983 + C982 + C981) * C32612 * C32874 +
            (C980 + C979 + C978) * C32612 * C32886) *
               C32570 * C453) *
              C454 +
          (((C1321 + C1322 + C1323) * C32612 * C32886 +
            (C1324 + C1325 + C1326) * C32612 * C32874 +
            (C774 * C918 + C1306 + C1306 + C768 * C930 + C776 * C917 + C1307 +
             C1307 + C769 * C929 + C778 * C1290 + C1308 + C1308 +
             C32845 * C1292) *
                C32612 * C32854) *
               C32570 * C453 -
           ((C1326 + C1325 + C1324) * C32612 * C32854 +
            (C1323 + C1322 + C1321) * C32612 * C32874 +
            (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
             C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                C32612 * C32886) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
            C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
            C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
            C149 + C105 * C141) *
               C32612 * C32600 * C32570 * C452 -
           (C121 * C225 + C256 + C256 + C105 * C245 + C119 * C226 + C257 +
            C257 + C104 * C246 + C117 * C227 + C258 + C258 + C103 * C247 +
            C115 * C228 + C259 + C259 + C102 * C248 + C113 * C229 + C260 +
            C260 + C101 * C249) *
               C32612 * C32600 * C32570 * C453) *
              C454 +
          ((C113 * C228 + C460 + C460 + C101 * C248 + C115 * C227 + C461 +
            C461 + C102 * C247 + C117 * C226 + C462 + C462 + C103 * C246 +
            C119 * C225 + C463 + C463 + C104 * C245 + C121 * C456 + C464 +
            C464 + C105 * C458) *
               C32612 * C32600 * C32570 * C453 -
           (C121 * C128 + C150 + C150 + C105 * C142 + C119 * C127 + C151 +
            C151 + C104 * C141 + C117 * C126 + C152 + C152 + C103 * C140 +
            C115 * C125 + C153 + C153 + C102 * C139 + C113 * C124 + C154 +
            C154 + C101 * C138) *
               C32612 * C32600 * C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32887 +
            (C2075 + C2076 + C2077) * C32876 + C2085 * C32857) *
               C32600 * C32570 * C452 -
           ((C778 * C1104 + C1141 + C1141 + C32845 * C1122 + C776 * C1103 +
             C1140 + C1140 + C769 * C1121 + C774 * C1102 + C1139 + C1139 +
             C768 * C1120) *
                C32857 +
            (C1670 + C1671 + C1672) * C32876 + (C980 + C979 + C978) * C32887) *
               C32600 * C32570 * C453) *
              C454 +
          (((C1321 + C1322 + C1323) * C32887 +
            (C774 * C639 + C1479 + C1479 + C768 * C649 + C776 * C640 + C1480 +
             C1480 + C769 * C650 + C778 * C641 + C1481 + C1481 +
             C32845 * C651) *
                C32876 +
            (C774 * C1103 + C2235 + C2235 + C768 * C1121 + C776 * C1104 +
             C2236 + C2236 + C769 * C1122 + C778 * C2231 + C2237 + C2237 +
             C32845 * C2233) *
                C32857) *
               C32600 * C32570 * C453 -
           ((C778 * C338 + C1786 + C1786 + C32845 * C358 + C776 * C337 + C1787 +
             C1787 + C769 * C357 + C774 * C336 + C1788 + C1788 + C768 * C356) *
                C32857 +
            (C778 * C331 + C1478 + C1478 + C32845 * C351 + C776 * C332 + C1477 +
             C1477 + C769 * C352 + C774 * C333 + C1476 + C1476 + C768 * C353) *
                C32876 +
            (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
             C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                C32887) *
               C32600 * C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C32612 * C5347 +
            (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
               C32570 * C452 -
           ((C5542 + C5543 + C5544) * C32612 * C32854 +
            (C5541 + C5540 + C5539) * C32612 * C5348 +
            (C5538 + C5537 + C5536) * C32612 * C5347) *
               C32570 * C453) *
              C454 +
          (((C5849 + C5850 + C5851) * C32612 * C5347 +
            (C5852 + C5853 + C5854) * C32612 * C5348 +
            (C5350 * C918 + C5834 + C5834 + C32883 * C930 + C5352 * C917 +
             C5835 + C5835 + C32870 * C929 + C5354 * C1290 + C5836 + C5836 +
             C32845 * C1292) *
                C32612 * C32854) *
               C32570 * C453 -
           ((C5854 + C5853 + C5852) * C32612 * C32854 +
            (C5851 + C5850 + C5849) * C32612 * C5348 +
            (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
             C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
             C32883 * C138) *
                C32612 * C5347) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
            C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
               C32570 * C452 -
           (C6373 * C6255 + C6372 * C6254 + C6371 * C6253 + C6370 * C6252 +
            C6369 * C6251) *
               C32570 * C453) *
              C454 +
          ((C6561 * C6251 + C6562 * C6252 + C6563 * C6253 + C6564 * C6254 +
            (C6256 * C6536 + C6548 + C6548 + C32507 * C6538) * C32612 * C6255) *
               C32570 * C453 -
           (C6564 * C6255 + C6563 * C6254 + C6562 * C6253 + C6561 * C6252 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32612 * C6251) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32887 +
             C7165 * C32876 + C7166 * C32857) *
                C5347 +
            (C6994 + C6995 + C7016) * C5348 + C7019 * C32854) *
               C32570 * C452 -
           ((C7018 + C7004 + C7005) * C32854 + (C7017 + C6999 + C6998) * C5348 +
            (C7016 + C6995 + C6994) * C5347) *
               C32570 * C453) *
              C454 +
          (((C7319 + C7342 + C7343) * C5347 + (C7324 + C7344 + C7345) * C5348 +
            (C6559 * C32887 +
             (C6256 * C1631 + C6653 + C6653 + C32507 * C1637) * C32876 +
             (C6256 * C7315 + C7329 + C7329 + C32507 * C7317) * C32857) *
                C32854) *
               C32570 * C453 -
           ((C7345 + C7344 + C7324) * C32854 + (C7343 + C7342 + C7319) * C5348 +
            ((C6256 * C336 + C6877 + C6877 + C32507 * C356) * C32857 +
             (C6256 * C333 + C6650 + C6650 + C32507 * C353) * C32876 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32887) *
                C5347) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[111] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32612 * C32886 +
            (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
               C546 -
           ((C1667 + C1668 + C1669) * C32612 * C32854 +
            (C1670 + C1671 + C1672) * C32612 * C32874 +
            (C778 * C332 + C1133 + C1133 + C32845 * C352 + C776 * C333 + C1134 +
             C1134 + C769 * C353 + C774 * C334 + C1135 + C1135 + C768 * C354) *
                C32612 * C32886) *
               C547) *
              C452 +
          (((C1672 + C1671 + C1670) * C32612 * C32886 +
            (C1669 + C1668 + C1667) * C32612 * C32874 +
            (C774 * C1630 + C1652 + C1652 + C768 * C1636 + C776 * C1631 +
             C1653 + C1653 + C769 * C1637 + C778 * C1632 + C1654 + C1654 +
             C32845 * C1638) *
                C32612 * C32854) *
               C547 -
           ((C984 + C985 + C986) * C32612 * C32854 +
            (C983 + C982 + C981) * C32612 * C32874 +
            (C980 + C979 + C978) * C32612 * C32886) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
            C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
            C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
            C149 + C105 * C141) *
               C32612 * C32600 * C546 -
           (C121 * C330 + C361 + C361 + C105 * C350 + C119 * C331 + C362 +
            C362 + C104 * C351 + C117 * C332 + C363 + C363 + C103 * C352 +
            C115 * C333 + C364 + C364 + C102 * C353 + C113 * C334 + C365 +
            C365 + C101 * C354) *
               C32612 * C32600 * C547) *
              C452 +
          ((C113 * C638 + C654 + C654 + C101 * C648 + C115 * C639 + C655 +
            C655 + C102 * C649 + C117 * C640 + C656 + C656 + C103 * C650 +
            C119 * C641 + C657 + C657 + C104 * C651 + C121 * C642 + C658 +
            C658 + C105 * C652) *
               C32612 * C32600 * C547 -
           (C121 * C225 + C256 + C256 + C105 * C245 + C119 * C226 + C257 +
            C257 + C104 * C246 + C117 * C227 + C258 + C258 + C103 * C247 +
            C115 * C228 + C259 + C259 + C102 * C248 + C113 * C229 + C260 +
            C260 + C101 * C249) *
               C32612 * C32600 * C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32887 +
            (C2075 + C2076 + C2077) * C32876 + C2085 * C32857) *
               C32600 * C546 -
           ((C2081 + C2082 + C2083) * C32857 +
            (C2080 + C2079 + C2078) * C32876 +
            (C2077 + C2076 + C2075) * C32887) *
               C32600 * C547) *
              C452 +
          (((C1672 + C1671 + C1670) * C32887 +
            (C2590 + C2591 + C2592) * C32876 +
            (C774 * C2565 + C2581 + C2581 + C768 * C2571 + C776 * C2566 +
             C2582 + C2582 + C769 * C2572 + C778 * C2567 + C2583 + C2583 +
             C32845 * C2573) *
                C32857) *
               C32600 * C547 -
           ((C2592 + C2591 + C2590) * C32857 +
            (C1670 + C1671 + C1672) * C32876 + (C980 + C979 + C978) * C32887) *
               C32600 * C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C32612 * C5347 +
            (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
               C546 -
           ((C6183 + C6184 + C6185) * C32612 * C32854 +
            (C6186 + C6187 + C6188) * C32612 * C5348 +
            (C5354 * C332 + C5664 + C5664 + C32845 * C352 + C5352 * C333 +
             C5665 + C5665 + C32870 * C353 + C5350 * C334 + C5666 + C5666 +
             C32883 * C354) *
                C32612 * C5347) *
               C547) *
              C452 +
          (((C6188 + C6187 + C6186) * C32612 * C5347 +
            (C6185 + C6184 + C6183) * C32612 * C5348 +
            (C5350 * C1630 + C6168 + C6168 + C32883 * C1636 + C5352 * C1631 +
             C6169 + C6169 + C32870 * C1637 + C5354 * C1632 + C6170 + C6170 +
             C32845 * C1638) *
                C32612 * C32854) *
               C547 -
           ((C5542 + C5543 + C5544) * C32612 * C32854 +
            (C5541 + C5540 + C5539) * C32612 * C5348 +
            (C5538 + C5537 + C5536) * C32612 * C5347) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
            C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
               C546 -
           (C6761 * C6255 + C6762 * C6254 + C6763 * C6253 + C6764 * C6252 +
            (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32612 * C6251) *
               C547) *
              C452 +
          ((C6764 * C6251 + C6763 * C6252 + C6762 * C6253 + C6761 * C6254 +
            (C6256 * C6736 + C6748 + C6748 + C32507 * C6738) * C32612 * C6255) *
               C547 -
           (C6373 * C6255 + C6372 * C6254 + C6371 * C6253 + C6370 * C6252 +
            C6369 * C6251) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32887 +
             C7165 * C32876 + C7166 * C32857) *
                C5347 +
            (C6994 + C6995 + C7016) * C5348 + C7019 * C32854) *
               C546 -
           ((C7657 + C7658 + C7659) * C32854 + (C7660 + C7661 + C7662) * C5348 +
            (C7169 * C32857 + C7166 * C32876 + C7165 * C32887) * C5347) *
               C547) *
              C452 +
          (((C7662 + C7661 + C7660) * C5347 + (C7659 + C7658 + C7657) * C5348 +
            (C6758 * C32887 + C7015 * C32876 +
             (C6256 * C7653 + C7663 + C7663 + C32507 * C7655) * C32857) *
                C32854) *
               C547 -
           ((C7018 + C7004 + C7005) * C32854 + (C7017 + C6999 + C6998) * C5348 +
            (C7016 + C6995 + C6994) * C5347) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[112] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
               C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
               C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
               C149 + C105 * C141) *
                  C32612 * C32600 * C32570 * C32556 * C110 -
              (C121 * C128 + C150 + C150 + C105 * C142 + C119 * C127 + C151 +
               C151 + C104 * C141 + C117 * C126 + C152 + C152 + C103 * C140 +
               C115 * C125 + C153 + C153 + C102 * C139 + C113 * C124 + C154 +
               C154 + C101 * C138) *
                  C32612 * C32600 * C32570 * C32556 * C111 +
              (C113 * C125 + C155 + C155 + C101 * C139 + C115 * C126 + C156 +
               C156 + C102 * C140 + C117 * C127 + C157 + C157 + C103 * C141 +
               C119 * C128 + C158 + C158 + C104 * C142 + C121 * C129 + C159 +
               C159 + C105 * C143) *
                  C32612 * C32600 * C32570 * C32556 * C112) +
         std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
               C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
               C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
               C149 + C105 * C141) *
                  C32612 * C32600 * C32570 * C221 -
              (C121 * C225 + C256 + C256 + C105 * C245 + C119 * C226 + C257 +
               C257 + C104 * C246 + C117 * C227 + C258 + C258 + C103 * C247 +
               C115 * C228 + C259 + C259 + C102 * C248 + C113 * C229 + C260 +
               C260 + C101 * C249) *
                  C32612 * C32600 * C32570 * C222 +
              (C113 * C230 + C261 + C261 + C101 * C250 + C115 * C231 + C262 +
               C262 + C102 * C251 + C117 * C232 + C263 + C263 + C103 * C252 +
               C119 * C233 + C264 + C264 + C104 * C253 + C121 * C234 + C265 +
               C265 + C105 * C254) *
                  C32612 * C32600 * C32570 * C223) *
             C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 + C146 +
           C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 + C119 * C126 +
           C148 + C148 + C104 * C140 + C121 * C127 + C149 + C149 +
           C105 * C141) *
              C32612 * C32600 * C327 -
          (C121 * C330 + C361 + C361 + C105 * C350 + C119 * C331 + C362 + C362 +
           C104 * C351 + C117 * C332 + C363 + C363 + C103 * C352 + C115 * C333 +
           C364 + C364 + C102 * C353 + C113 * C334 + C365 + C365 +
           C101 * C354) *
              C32612 * C32600 * C328 +
          (C113 * C335 + C366 + C366 + C101 * C355 + C115 * C336 + C367 + C367 +
           C102 * C356 + C117 * C337 + C368 + C368 + C103 * C357 + C119 * C338 +
           C369 + C369 + C104 * C358 + C121 * C339 + C370 + C370 +
           C105 * C359) *
              C32612 * C32600 * C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32612 * C32886 +
           (C774 * C229 + C784 + C784 + C768 * C249 + C776 * C228 + C785 +
            C785 + C769 * C248 + C778 * C227 + C786 + C786 + C32845 * C247) *
               C32612 * C32874 +
           (C774 * C230 + C787 + C787 + C768 * C250 + C776 * C231 + C788 +
            C788 + C769 * C251 + C778 * C232 + C789 + C789 + C32845 * C252) *
               C32612 * C32854) *
              C32570 * C32556 * C110 -
          ((C778 * C233 + C790 + C790 + C32845 * C253 + C776 * C232 + C791 +
            C791 + C769 * C252 + C774 * C231 + C792 + C792 + C768 * C251) *
               C32612 * C32854 +
           (C778 * C226 + C793 + C793 + C32845 * C246 + C776 * C227 + C794 +
            C794 + C769 * C247 + C774 * C228 + C795 + C795 + C768 * C248) *
               C32612 * C32874 +
           (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
            C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
               C32612 * C32886) *
              C32570 * C32556 * C111 +
          ((C774 * C125 + C799 + C799 + C768 * C139 + C776 * C126 + C800 +
            C800 + C769 * C140 + C778 * C127 + C801 + C801 + C32845 * C141) *
               C32612 * C32886 +
           (C774 * C227 + C802 + C802 + C768 * C247 + C776 * C226 + C803 +
            C803 + C769 * C246 + C778 * C225 + C804 + C804 + C32845 * C245) *
               C32612 * C32874 +
           (C774 * C232 + C805 + C805 + C768 * C252 + C776 * C233 + C806 +
            C806 + C769 * C253 + C778 * C234 + C807 + C807 + C32845 * C254) *
               C32612 * C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32612 * C32886 +
           (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
              C32570 * C221 -
          ((C984 + C985 + C986) * C32612 * C32854 +
           (C983 + C982 + C981) * C32612 * C32874 +
           (C980 + C979 + C978) * C32612 * C32886) *
              C32570 * C222 +
          (C989 * C32886 + (C986 + C985 + C984) * C32612 * C32874 +
           (C774 * C920 + C957 + C957 + C768 * C932 + C776 * C921 + C958 +
            C958 + C769 * C933 + C778 * C922 + C959 + C959 + C32845 * C934) *
               C32612 * C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32612 * C32886 +
           (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
              C327 -
          ((C778 * C1099 + C1127 + C1127 + C32845 * C1117 + C776 * C1100 +
            C1128 + C1128 + C769 * C1118 + C774 * C1101 + C1129 + C1129 +
            C768 * C1119) *
               C32612 * C32854 +
           (C778 * C640 + C1130 + C1130 + C32845 * C650 + C776 * C639 + C1131 +
            C1131 + C769 * C649 + C774 * C638 + C1132 + C1132 + C768 * C648) *
               C32612 * C32874 +
           (C778 * C332 + C1133 + C1133 + C32845 * C352 + C776 * C333 + C1134 +
            C1134 + C769 * C353 + C774 * C334 + C1135 + C1135 + C768 * C354) *
               C32612 * C32886) *
              C328 +
          ((C774 * C335 + C1136 + C1136 + C768 * C355 + C776 * C336 + C1137 +
            C1137 + C769 * C356 + C778 * C337 + C1138 + C1138 + C32845 * C357) *
               C32612 * C32886 +
           (C774 * C1102 + C1139 + C1139 + C768 * C1120 + C776 * C1103 + C1140 +
            C1140 + C769 * C1121 + C778 * C1104 + C1141 + C1141 +
            C32845 * C1122) *
               C32612 * C32874 +
           (C774 * C1105 + C1142 + C1142 + C768 * C1123 + C776 * C1106 + C1143 +
            C1143 + C769 * C1124 + C778 * C1107 + C1144 + C1144 +
            C32845 * C1125) *
               C32612 * C32854) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32887 +
           (C774 * C334 + C1135 + C1135 + C768 * C354 + C776 * C333 + C1134 +
            C1134 + C769 * C353 + C778 * C332 + C1133 + C1133 + C32845 * C352) *
               C32876 +
           (C774 * C335 + C1136 + C1136 + C768 * C355 + C776 * C336 + C1137 +
            C1137 + C769 * C356 + C778 * C337 + C1138 + C1138 + C32845 * C357) *
               C32857) *
              C32600 * C32570 * C32556 * C110 -
          ((C778 * C338 + C1786 + C1786 + C32845 * C358 + C776 * C337 + C1787 +
            C1787 + C769 * C357 + C774 * C336 + C1788 + C1788 + C768 * C356) *
               C32857 +
           (C778 * C331 + C1478 + C1478 + C32845 * C351 + C776 * C332 + C1477 +
            C1477 + C769 * C352 + C774 * C333 + C1476 + C1476 + C768 * C353) *
               C32876 +
           (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
            C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
               C32887) *
              C32600 * C32570 * C32556 * C111 +
          ((C774 * C125 + C799 + C799 + C768 * C139 + C776 * C126 + C800 +
            C800 + C769 * C140 + C778 * C127 + C801 + C801 + C32845 * C141) *
               C32887 +
           (C774 * C332 + C1789 + C1789 + C768 * C352 + C776 * C331 + C1790 +
            C1790 + C769 * C351 + C778 * C330 + C1791 + C1791 + C32845 * C350) *
               C32876 +
           (C774 * C337 + C1792 + C1792 + C768 * C357 + C776 * C338 + C1793 +
            C1793 + C769 * C358 + C778 * C339 + C1794 + C1794 + C32845 * C359) *
               C32857) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32887 +
           (C774 * C334 + C1135 + C1135 + C768 * C354 + C776 * C333 + C1134 +
            C1134 + C769 * C353 + C778 * C332 + C1133 + C1133 + C32845 * C352) *
               C32876 +
           (C774 * C335 + C1136 + C1136 + C768 * C355 + C776 * C336 + C1137 +
            C1137 + C769 * C356 + C778 * C337 + C1138 + C1138 + C32845 * C357) *
               C32857) *
              C32600 * C32570 * C221 -
          ((C778 * C1104 + C1141 + C1141 + C32845 * C1122 + C776 * C1103 +
            C1140 + C1140 + C769 * C1121 + C774 * C1102 + C1139 + C1139 +
            C768 * C1120) *
               C32857 +
           (C1670 + C1671 + C1672) * C32876 + (C980 + C979 + C978) * C32887) *
              C32600 * C32570 * C222 +
          (C988 * C32887 + (C1669 + C1668 + C1667) * C32876 +
           (C774 * C1105 + C1142 + C1142 + C768 * C1123 + C776 * C1106 + C1143 +
            C1143 + C769 * C1124 + C778 * C1107 + C1144 + C1144 +
            C32845 * C1125) *
               C32857) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32887 +
           (C2075 + C2076 + C2077) * C32876 + C2085 * C32857) *
              C32600 * C327 -
          ((C2081 + C2082 + C2083) * C32857 + (C2080 + C2079 + C2078) * C32876 +
           (C2077 + C2076 + C2075) * C32887) *
              C32600 * C328 +
          (C2085 * C32887 + (C2083 + C2082 + C2081) * C32876 +
           (C774 * C2017 + C2054 + C2054 + C768 * C2029 + C776 * C2018 + C2055 +
            C2055 + C769 * C2030 + C778 * C2019 + C2056 + C2056 +
            C32845 * C2031) *
               C32857) *
              C32600 * C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5350 * C229 + C5360 + C5360 + C32883 * C249 + C5352 * C228 +
            C5361 + C5361 + C32870 * C248 + C5354 * C227 + C5362 + C5362 +
            C32845 * C247) *
               C32612 * C5348 +
           (C5350 * C230 + C5363 + C5363 + C32883 * C250 + C5352 * C231 +
            C5364 + C5364 + C32870 * C251 + C5354 * C232 + C5365 + C5365 +
            C32845 * C252) *
               C32612 * C32854) *
              C32570 * C32556 * C110 -
          ((C5354 * C233 + C5366 + C5366 + C32845 * C253 + C5352 * C232 +
            C5367 + C5367 + C32870 * C252 + C5350 * C231 + C5368 + C5368 +
            C32883 * C251) *
               C32612 * C32854 +
           (C5354 * C226 + C5369 + C5369 + C32845 * C246 + C5352 * C227 +
            C5370 + C5370 + C32870 * C247 + C5350 * C228 + C5371 + C5371 +
            C32883 * C248) *
               C32612 * C5348 +
           (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
            C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
            C32883 * C138) *
               C32612 * C5347) *
              C32570 * C32556 * C111 +
          ((C5350 * C125 + C5375 + C5375 + C32883 * C139 + C5352 * C126 +
            C5376 + C5376 + C32870 * C140 + C5354 * C127 + C5377 + C5377 +
            C32845 * C141) *
               C32612 * C5347 +
           (C5350 * C227 + C5378 + C5378 + C32883 * C247 + C5352 * C226 +
            C5379 + C5379 + C32870 * C246 + C5354 * C225 + C5380 + C5380 +
            C32845 * C245) *
               C32612 * C5348 +
           (C5350 * C232 + C5381 + C5381 + C32883 * C252 + C5352 * C233 +
            C5382 + C5382 + C32870 * C253 + C5354 * C234 + C5383 + C5383 +
            C32845 * C254) *
               C32612 * C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
              C32570 * C221 -
          ((C5542 + C5543 + C5544) * C32612 * C32854 +
           (C5541 + C5540 + C5539) * C32612 * C5348 +
           (C5538 + C5537 + C5536) * C32612 * C5347) *
              C32570 * C222 +
          (C5547 * C5347 + (C5544 + C5543 + C5542) * C32612 * C5348 +
           (C5350 * C920 + C5515 + C5515 + C32883 * C932 + C5352 * C921 +
            C5516 + C5516 + C32870 * C933 + C5354 * C922 + C5517 + C5517 +
            C32845 * C934) *
               C32612 * C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
              C327 -
          ((C5354 * C1099 + C5658 + C5658 + C32845 * C1117 + C5352 * C1100 +
            C5659 + C5659 + C32870 * C1118 + C5350 * C1101 + C5660 + C5660 +
            C32883 * C1119) *
               C32612 * C32854 +
           (C5354 * C640 + C5661 + C5661 + C32845 * C650 + C5352 * C639 +
            C5662 + C5662 + C32870 * C649 + C5350 * C638 + C5663 + C5663 +
            C32883 * C648) *
               C32612 * C5348 +
           (C5354 * C332 + C5664 + C5664 + C32845 * C352 + C5352 * C333 +
            C5665 + C5665 + C32870 * C353 + C5350 * C334 + C5666 + C5666 +
            C32883 * C354) *
               C32612 * C5347) *
              C328 +
          ((C5350 * C335 + C5667 + C5667 + C32883 * C355 + C5352 * C336 +
            C5668 + C5668 + C32870 * C356 + C5354 * C337 + C5669 + C5669 +
            C32845 * C357) *
               C32612 * C5347 +
           (C5350 * C1102 + C5670 + C5670 + C32883 * C1120 + C5352 * C1103 +
            C5671 + C5671 + C32870 * C1121 + C5354 * C1104 + C5672 + C5672 +
            C32845 * C1122) *
               C32612 * C5348 +
           (C5350 * C1105 + C5673 + C5673 + C32883 * C1123 + C5352 * C1106 +
            C5674 + C5674 + C32870 * C1124 + C5354 * C1107 + C5675 + C5675 +
            C32845 * C1125) *
               C32612 * C32854) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           (C6256 * C229 + C6260 + C6260 + C32507 * C249) * C32612 * C6252 +
           (C6256 * C230 + C6261 + C6261 + C32507 * C250) * C32612 * C6253 +
           (C6256 * C919 + C6262 + C6262 + C32507 * C931) * C32612 * C6254 +
           (C6256 * C920 + C6263 + C6263 + C32507 * C932) * C32612 * C6255) *
              C32570 * C32556 * C110 -
          ((C6256 * C921 + C6264 + C6264 + C32507 * C933) * C32612 * C6255 +
           (C6256 * C918 + C6265 + C6265 + C32507 * C930) * C32612 * C6254 +
           (C6256 * C231 + C6266 + C6266 + C32507 * C251) * C32612 * C6253 +
           (C6256 * C228 + C6267 + C6267 + C32507 * C248) * C32612 * C6252 +
           (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32612 * C6251) *
              C32570 * C32556 * C111 +
          ((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32612 * C6251 +
           (C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32612 * C6252 +
           (C6256 * C232 + C6271 + C6271 + C32507 * C252) * C32612 * C6253 +
           (C6256 * C917 + C6272 + C6272 + C32507 * C929) * C32612 * C6254 +
           (C6256 * C922 + C6273 + C6273 + C32507 * C934) * C32612 * C6255) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
              C32570 * C221 -
          (C6373 * C6255 + C6372 * C6254 + C6371 * C6253 + C6370 * C6252 +
           C6369 * C6251) *
              C32570 * C222 +
          (C6370 * C6251 + C6371 * C6252 + C6372 * C6253 + C6373 * C6254 +
           (C6256 * C6336 + C6353 + C6353 + C32507 * C6340) * C32612 * C6255) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
              C327 -
          ((C6256 * C6435 + C6445 + C6445 + C32507 * C6441) * C32612 * C6255 +
           (C6256 * C1630 + C6446 + C6446 + C32507 * C1636) * C32612 * C6254 +
           (C6256 * C1101 + C6447 + C6447 + C32507 * C1119) * C32612 * C6253 +
           (C6256 * C638 + C6448 + C6448 + C32507 * C648) * C32612 * C6252 +
           (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32612 * C6251) *
              C328 +
          ((C6256 * C335 + C6450 + C6450 + C32507 * C355) * C32612 * C6251 +
           (C6256 * C1102 + C6451 + C6451 + C32507 * C1120) * C32612 * C6252 +
           (C6256 * C1105 + C6452 + C6452 + C32507 * C1123) * C32612 * C6253 +
           (C6256 * C6436 + C6453 + C6453 + C32507 * C6442) * C32612 * C6254 +
           (C6256 * C6437 + C6454 + C6454 + C32507 * C6443) * C32612 * C6255) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32887 +
            (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32876 +
            (C6256 * C335 + C6450 + C6450 + C32507 * C355) * C32857) *
               C5347 +
           (C6364 * C32887 + C6760 * C32876 +
            (C6256 * C1102 + C6451 + C6451 + C32507 * C1120) * C32857) *
               C5348 +
           (C6365 * C32887 + C6759 * C32876 +
            (C6256 * C1105 + C6452 + C6452 + C32507 * C1123) * C32857) *
               C32854) *
              C32570 * C32556 * C110 -
          (((C6256 * C1106 + C6875 + C6875 + C32507 * C1124) * C32857 +
            (C6256 * C1100 + C6652 + C6652 + C32507 * C1118) * C32876 +
            C6558 * C32887) *
               C32854 +
           ((C6256 * C1103 + C6876 + C6876 + C32507 * C1121) * C32857 +
            (C6256 * C639 + C6651 + C6651 + C32507 * C649) * C32876 +
            C6557 * C32887) *
               C5348 +
           ((C6256 * C336 + C6877 + C6877 + C32507 * C356) * C32857 +
            (C6256 * C333 + C6650 + C6650 + C32507 * C353) * C32876 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32887) *
               C5347) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32887 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C32876 +
            (C6256 * C337 + C6879 + C6879 + C32507 * C357) * C32857) *
               C5347 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32887 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C32876 +
            (C6256 * C1104 + C6881 + C6881 + C32507 * C1122) * C32857) *
               C5348 +
           ((C6256 * C232 + C6271 + C6271 + C32507 * C252) * C32887 +
            (C6256 * C1099 + C6882 + C6882 + C32507 * C1117) * C32876 +
            (C6256 * C1107 + C6883 + C6883 + C32507 * C1125) * C32857) *
               C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32887 +
            (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32876 +
            (C6256 * C335 + C6450 + C6450 + C32507 * C355) * C32857) *
               C5347 +
           (C6994 + C6995 + C7016) * C5348 + C7019 * C32854) *
              C32570 * C221 -
          ((C7018 + C7004 + C7005) * C32854 + (C7017 + C6999 + C6998) * C5348 +
           (C7016 + C6995 + C6994) * C5347) *
              C32570 * C222 +
          (C7019 * C5347 + (C7005 + C7004 + C7018) * C5348 +
           (C6367 * C32887 + C6757 * C32876 +
            (C6256 * C6437 + C6454 + C6454 + C32507 * C6443) * C32857) *
               C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32887 +
            C7165 * C32876 + C7166 * C32857) *
               C5347 +
           (C6994 + C6995 + C7016) * C5348 + C7019 * C32854) *
              C327 -
          ((C7167 * C32857 + C7014 * C32876 + C6759 * C32887) * C32854 +
           (C7168 * C32857 + C7013 * C32876 + C6760 * C32887) * C5348 +
           (C7169 * C32857 + C7166 * C32876 + C7165 * C32887) * C5347) *
              C328 +
          ((C7166 * C32887 + C7169 * C32876 +
            (C6256 * C2017 + C7152 + C7152 + C32507 * C2029) * C32857) *
               C5347 +
           (C7013 * C32887 + C7168 * C32876 +
            (C6256 * C7130 + C7153 + C7153 + C32507 * C7136) * C32857) *
               C5348 +
           (C7014 * C32887 + C7167 * C32876 +
            (C6256 * C7131 + C7154 + C7154 + C32507 * C7137) * C32857) *
               C32854) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[113] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32612 * C32886 +
            (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
               C546 -
           ((C778 * C1099 + C1127 + C1127 + C32845 * C1117 + C776 * C1100 +
             C1128 + C1128 + C769 * C1118 + C774 * C1101 + C1129 + C1129 +
             C768 * C1119) *
                C32612 * C32854 +
            (C778 * C640 + C1130 + C1130 + C32845 * C650 + C776 * C639 + C1131 +
             C1131 + C769 * C649 + C774 * C638 + C1132 + C1132 + C768 * C648) *
                C32612 * C32874 +
            (C778 * C332 + C1133 + C1133 + C32845 * C352 + C776 * C333 + C1134 +
             C1134 + C769 * C353 + C774 * C334 + C1135 + C1135 + C768 * C354) *
                C32612 * C32886) *
               C547) *
              C32556 * C454 +
          (((C774 * C333 + C1476 + C1476 + C768 * C353 + C776 * C332 + C1477 +
             C1477 + C769 * C352 + C778 * C331 + C1478 + C1478 +
             C32845 * C351) *
                C32612 * C32886 +
            (C774 * C639 + C1479 + C1479 + C768 * C649 + C776 * C640 + C1480 +
             C1480 + C769 * C650 + C778 * C641 + C1481 + C1481 +
             C32845 * C651) *
                C32612 * C32874 +
            (C774 * C1100 + C1482 + C1482 + C768 * C1118 + C776 * C1099 +
             C1483 + C1483 + C769 * C1117 + C778 * C1472 + C1484 + C1484 +
             C32845 * C1474) *
                C32612 * C32854) *
               C547 -
           ((C1326 + C1325 + C1324) * C32612 * C32854 +
            (C1323 + C1322 + C1321) * C32612 * C32874 +
            (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
             C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                C32612 * C32886) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
            C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
            C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
            C149 + C105 * C141) *
               C32612 * C32600 * C546 -
           (C121 * C330 + C361 + C361 + C105 * C350 + C119 * C331 + C362 +
            C362 + C104 * C351 + C117 * C332 + C363 + C363 + C103 * C352 +
            C115 * C333 + C364 + C364 + C102 * C353 + C113 * C334 + C365 +
            C365 + C101 * C354) *
               C32612 * C32600 * C547) *
              C32556 * C454 +
          ((C113 * C333 + C552 + C552 + C101 * C353 + C115 * C332 + C553 +
            C553 + C102 * C352 + C117 * C331 + C554 + C554 + C103 * C351 +
            C119 * C330 + C555 + C555 + C104 * C350 + C121 * C548 + C556 +
            C556 + C105 * C550) *
               C32612 * C32600 * C547 -
           (C121 * C128 + C150 + C150 + C105 * C142 + C119 * C127 + C151 +
            C151 + C104 * C141 + C117 * C126 + C152 + C152 + C103 * C140 +
            C115 * C125 + C153 + C153 + C102 * C139 + C113 * C124 + C154 +
            C154 + C101 * C138) *
               C32612 * C32600 * C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32887 +
            (C2075 + C2076 + C2077) * C32876 + C2085 * C32857) *
               C32600 * C546 -
           ((C2081 + C2082 + C2083) * C32857 +
            (C2080 + C2079 + C2078) * C32876 +
            (C2077 + C2076 + C2075) * C32887) *
               C32600 * C547) *
              C32556 * C454 +
          (((C2414 + C2415 + C2416) * C32887 +
            (C2417 + C2418 + C2419) * C32876 +
            (C774 * C2015 + C2399 + C2399 + C768 * C2027 + C776 * C2014 +
             C2400 + C2400 + C769 * C2026 + C778 * C2383 + C2401 + C2401 +
             C32845 * C2385) *
                C32857) *
               C32600 * C547 -
           ((C2419 + C2418 + C2417) * C32857 +
            (C2416 + C2415 + C2414) * C32876 +
            (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
             C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                C32887) *
               C32600 * C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C32612 * C5347 +
            (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
               C546 -
           ((C5354 * C1099 + C5658 + C5658 + C32845 * C1117 + C5352 * C1100 +
             C5659 + C5659 + C32870 * C1118 + C5350 * C1101 + C5660 + C5660 +
             C32883 * C1119) *
                C32612 * C32854 +
            (C5354 * C640 + C5661 + C5661 + C32845 * C650 + C5352 * C639 +
             C5662 + C5662 + C32870 * C649 + C5350 * C638 + C5663 + C5663 +
             C32883 * C648) *
                C32612 * C5348 +
            (C5354 * C332 + C5664 + C5664 + C32845 * C352 + C5352 * C333 +
             C5665 + C5665 + C32870 * C353 + C5350 * C334 + C5666 + C5666 +
             C32883 * C354) *
                C32612 * C5347) *
               C547) *
              C32556 * C454 +
          (((C5350 * C333 + C6001 + C6001 + C32883 * C353 + C5352 * C332 +
             C6002 + C6002 + C32870 * C352 + C5354 * C331 + C6003 + C6003 +
             C32845 * C351) *
                C32612 * C5347 +
            (C5350 * C639 + C6004 + C6004 + C32883 * C649 + C5352 * C640 +
             C6005 + C6005 + C32870 * C650 + C5354 * C641 + C6006 + C6006 +
             C32845 * C651) *
                C32612 * C5348 +
            (C5350 * C1100 + C6007 + C6007 + C32883 * C1118 + C5352 * C1099 +
             C6008 + C6008 + C32870 * C1117 + C5354 * C1472 + C6009 + C6009 +
             C32845 * C1474) *
                C32612 * C32854) *
               C547 -
           ((C5854 + C5853 + C5852) * C32612 * C32854 +
            (C5851 + C5850 + C5849) * C32612 * C5348 +
            (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
             C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
             C32883 * C138) *
                C32612 * C5347) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
            C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
               C546 -
           ((C6256 * C6435 + C6445 + C6445 + C32507 * C6441) * C32612 * C6255 +
            (C6256 * C1630 + C6446 + C6446 + C32507 * C1636) * C32612 * C6254 +
            (C6256 * C1101 + C6447 + C6447 + C32507 * C1119) * C32612 * C6253 +
            (C6256 * C638 + C6448 + C6448 + C32507 * C648) * C32612 * C6252 +
            (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32612 * C6251) *
               C547) *
              C32556 * C454 +
          (((C6256 * C333 + C6650 + C6650 + C32507 * C353) * C32612 * C6251 +
            (C6256 * C639 + C6651 + C6651 + C32507 * C649) * C32612 * C6252 +
            (C6256 * C1100 + C6652 + C6652 + C32507 * C1118) * C32612 * C6253 +
            (C6256 * C1631 + C6653 + C6653 + C32507 * C1637) * C32612 * C6254 +
            (C6256 * C6646 + C6654 + C6654 + C32507 * C6648) * C32612 * C6255) *
               C547 -
           (C6564 * C6255 + C6563 * C6254 + C6562 * C6253 + C6561 * C6252 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32612 * C6251) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32887 +
             C7165 * C32876 + C7166 * C32857) *
                C5347 +
            (C6994 + C6995 + C7016) * C5348 + C7019 * C32854) *
               C546 -
           ((C7167 * C32857 + C7014 * C32876 + C6759 * C32887) * C32854 +
            (C7168 * C32857 + C7013 * C32876 + C6760 * C32887) * C5348 +
            (C7169 * C32857 + C7166 * C32876 + C7165 * C32887) * C5347) *
               C547) *
              C32556 * C454 +
          (((C7506 * C32887 + C7507 * C32876 +
             (C6256 * C2015 + C7499 + C7499 + C32507 * C2027) * C32857) *
                C5347 +
            (C7338 * C32887 + C7339 * C32876 +
             (C6256 * C2566 + C7500 + C7500 + C32507 * C2572) * C32857) *
                C5348 +
            (C7340 * C32887 + C7341 * C32876 +
             (C6256 * C7491 + C7501 + C7501 + C32507 * C7493) * C32857) *
                C32854) *
               C547 -
           ((C7345 + C7344 + C7324) * C32854 + (C7343 + C7342 + C7319) * C5348 +
            (C7507 * C32857 + C7506 * C32876 +
             (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32887) *
                C5347) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[114] +=
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 + C146 +
           C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 + C119 * C126 +
           C148 + C148 + C104 * C140 + C121 * C127 + C149 + C149 +
           C105 * C141) *
              C32612 * C32600 * C32570 * C221 -
          (C121 * C225 + C256 + C256 + C105 * C245 + C119 * C226 + C257 + C257 +
           C104 * C246 + C117 * C227 + C258 + C258 + C103 * C247 + C115 * C228 +
           C259 + C259 + C102 * C248 + C113 * C229 + C260 + C260 +
           C101 * C249) *
              C32612 * C32600 * C32570 * C222 +
          (C113 * C230 + C261 + C261 + C101 * C250 + C115 * C231 + C262 + C262 +
           C102 * C251 + C117 * C232 + C263 + C263 + C103 * C252 + C119 * C233 +
           C264 + C264 + C104 * C253 + C121 * C234 + C265 + C265 +
           C105 * C254) *
              C32612 * C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 + C146 +
           C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 + C119 * C126 +
           C148 + C148 + C104 * C140 + C121 * C127 + C149 + C149 +
           C105 * C141) *
              C32612 * C32600 * C32570 * C32556 * C110 -
          (C121 * C128 + C150 + C150 + C105 * C142 + C119 * C127 + C151 + C151 +
           C104 * C141 + C117 * C126 + C152 + C152 + C103 * C140 + C115 * C125 +
           C153 + C153 + C102 * C139 + C113 * C124 + C154 + C154 +
           C101 * C138) *
              C32612 * C32600 * C32570 * C32556 * C111 +
          (C113 * C125 + C155 + C155 + C101 * C139 + C115 * C126 + C156 + C156 +
           C102 * C140 + C117 * C127 + C157 + C157 + C103 * C141 + C119 * C128 +
           C158 + C158 + C104 * C142 + C121 * C129 + C159 + C159 +
           C105 * C143) *
              C32612 * C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32612 * C32886 +
           (C774 * C229 + C784 + C784 + C768 * C249 + C776 * C228 + C785 +
            C785 + C769 * C248 + C778 * C227 + C786 + C786 + C32845 * C247) *
               C32612 * C32874 +
           (C774 * C230 + C787 + C787 + C768 * C250 + C776 * C231 + C788 +
            C788 + C769 * C251 + C778 * C232 + C789 + C789 + C32845 * C252) *
               C32612 * C32854) *
              C32570 * C32556 * C110 -
          ((C778 * C233 + C790 + C790 + C32845 * C253 + C776 * C232 + C791 +
            C791 + C769 * C252 + C774 * C231 + C792 + C792 + C768 * C251) *
               C32612 * C32854 +
           (C778 * C226 + C793 + C793 + C32845 * C246 + C776 * C227 + C794 +
            C794 + C769 * C247 + C774 * C228 + C795 + C795 + C768 * C248) *
               C32612 * C32874 +
           (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
            C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
               C32612 * C32886) *
              C32570 * C32556 * C111 +
          ((C774 * C125 + C799 + C799 + C768 * C139 + C776 * C126 + C800 +
            C800 + C769 * C140 + C778 * C127 + C801 + C801 + C32845 * C141) *
               C32612 * C32886 +
           (C774 * C227 + C802 + C802 + C768 * C247 + C776 * C226 + C803 +
            C803 + C769 * C246 + C778 * C225 + C804 + C804 + C32845 * C245) *
               C32612 * C32874 +
           (C774 * C232 + C805 + C805 + C768 * C252 + C776 * C233 + C806 +
            C806 + C769 * C253 + C778 * C234 + C807 + C807 + C32845 * C254) *
               C32612 * C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32612 * C32886 +
           (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
              C32570 * C221 -
          ((C984 + C985 + C986) * C32612 * C32854 +
           (C983 + C982 + C981) * C32612 * C32874 +
           (C980 + C979 + C978) * C32612 * C32886) *
              C32570 * C222 +
          (C989 * C32886 + (C986 + C985 + C984) * C32612 * C32874 +
           (C774 * C920 + C957 + C957 + C768 * C932 + C776 * C921 + C958 +
            C958 + C769 * C933 + C778 * C922 + C959 + C959 + C32845 * C934) *
               C32612 * C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32887 +
           (C774 * C334 + C1135 + C1135 + C768 * C354 + C776 * C333 + C1134 +
            C1134 + C769 * C353 + C778 * C332 + C1133 + C1133 + C32845 * C352) *
               C32876 +
           (C774 * C335 + C1136 + C1136 + C768 * C355 + C776 * C336 + C1137 +
            C1137 + C769 * C356 + C778 * C337 + C1138 + C1138 + C32845 * C357) *
               C32857) *
              C32600 * C32570 * C32556 * C110 -
          ((C778 * C338 + C1786 + C1786 + C32845 * C358 + C776 * C337 + C1787 +
            C1787 + C769 * C357 + C774 * C336 + C1788 + C1788 + C768 * C356) *
               C32857 +
           (C778 * C331 + C1478 + C1478 + C32845 * C351 + C776 * C332 + C1477 +
            C1477 + C769 * C352 + C774 * C333 + C1476 + C1476 + C768 * C353) *
               C32876 +
           (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
            C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
               C32887) *
              C32600 * C32570 * C32556 * C111 +
          ((C774 * C125 + C799 + C799 + C768 * C139 + C776 * C126 + C800 +
            C800 + C769 * C140 + C778 * C127 + C801 + C801 + C32845 * C141) *
               C32887 +
           (C774 * C332 + C1789 + C1789 + C768 * C352 + C776 * C331 + C1790 +
            C1790 + C769 * C351 + C778 * C330 + C1791 + C1791 + C32845 * C350) *
               C32876 +
           (C774 * C337 + C1792 + C1792 + C768 * C357 + C776 * C338 + C1793 +
            C1793 + C769 * C358 + C778 * C339 + C1794 + C1794 + C32845 * C359) *
               C32857) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32887 +
           (C774 * C334 + C1135 + C1135 + C768 * C354 + C776 * C333 + C1134 +
            C1134 + C769 * C353 + C778 * C332 + C1133 + C1133 + C32845 * C352) *
               C32876 +
           (C774 * C335 + C1136 + C1136 + C768 * C355 + C776 * C336 + C1137 +
            C1137 + C769 * C356 + C778 * C337 + C1138 + C1138 + C32845 * C357) *
               C32857) *
              C32600 * C32570 * C221 -
          ((C778 * C1104 + C1141 + C1141 + C32845 * C1122 + C776 * C1103 +
            C1140 + C1140 + C769 * C1121 + C774 * C1102 + C1139 + C1139 +
            C768 * C1120) *
               C32857 +
           (C1670 + C1671 + C1672) * C32876 + (C980 + C979 + C978) * C32887) *
              C32600 * C32570 * C222 +
          (C988 * C32887 + (C1669 + C1668 + C1667) * C32876 +
           (C774 * C1105 + C1142 + C1142 + C768 * C1123 + C776 * C1106 + C1143 +
            C1143 + C769 * C1124 + C778 * C1107 + C1144 + C1144 +
            C32845 * C1125) *
               C32857) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5350 * C229 + C5360 + C5360 + C32883 * C249 + C5352 * C228 +
            C5361 + C5361 + C32870 * C248 + C5354 * C227 + C5362 + C5362 +
            C32845 * C247) *
               C32612 * C5348 +
           (C5350 * C230 + C5363 + C5363 + C32883 * C250 + C5352 * C231 +
            C5364 + C5364 + C32870 * C251 + C5354 * C232 + C5365 + C5365 +
            C32845 * C252) *
               C32612 * C32854) *
              C32570 * C32556 * C110 -
          ((C5354 * C233 + C5366 + C5366 + C32845 * C253 + C5352 * C232 +
            C5367 + C5367 + C32870 * C252 + C5350 * C231 + C5368 + C5368 +
            C32883 * C251) *
               C32612 * C32854 +
           (C5354 * C226 + C5369 + C5369 + C32845 * C246 + C5352 * C227 +
            C5370 + C5370 + C32870 * C247 + C5350 * C228 + C5371 + C5371 +
            C32883 * C248) *
               C32612 * C5348 +
           (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
            C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
            C32883 * C138) *
               C32612 * C5347) *
              C32570 * C32556 * C111 +
          ((C5350 * C125 + C5375 + C5375 + C32883 * C139 + C5352 * C126 +
            C5376 + C5376 + C32870 * C140 + C5354 * C127 + C5377 + C5377 +
            C32845 * C141) *
               C32612 * C5347 +
           (C5350 * C227 + C5378 + C5378 + C32883 * C247 + C5352 * C226 +
            C5379 + C5379 + C32870 * C246 + C5354 * C225 + C5380 + C5380 +
            C32845 * C245) *
               C32612 * C5348 +
           (C5350 * C232 + C5381 + C5381 + C32883 * C252 + C5352 * C233 +
            C5382 + C5382 + C32870 * C253 + C5354 * C234 + C5383 + C5383 +
            C32845 * C254) *
               C32612 * C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
              C32570 * C221 -
          ((C5542 + C5543 + C5544) * C32612 * C32854 +
           (C5541 + C5540 + C5539) * C32612 * C5348 +
           (C5538 + C5537 + C5536) * C32612 * C5347) *
              C32570 * C222 +
          (C5547 * C5347 + (C5544 + C5543 + C5542) * C32612 * C5348 +
           (C5350 * C920 + C5515 + C5515 + C32883 * C932 + C5352 * C921 +
            C5516 + C5516 + C32870 * C933 + C5354 * C922 + C5517 + C5517 +
            C32845 * C934) *
               C32612 * C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           (C6256 * C229 + C6260 + C6260 + C32507 * C249) * C32612 * C6252 +
           (C6256 * C230 + C6261 + C6261 + C32507 * C250) * C32612 * C6253 +
           (C6256 * C919 + C6262 + C6262 + C32507 * C931) * C32612 * C6254 +
           (C6256 * C920 + C6263 + C6263 + C32507 * C932) * C32612 * C6255) *
              C32570 * C32556 * C110 -
          ((C6256 * C921 + C6264 + C6264 + C32507 * C933) * C32612 * C6255 +
           (C6256 * C918 + C6265 + C6265 + C32507 * C930) * C32612 * C6254 +
           (C6256 * C231 + C6266 + C6266 + C32507 * C251) * C32612 * C6253 +
           (C6256 * C228 + C6267 + C6267 + C32507 * C248) * C32612 * C6252 +
           (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32612 * C6251) *
              C32570 * C32556 * C111 +
          ((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32612 * C6251 +
           (C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32612 * C6252 +
           (C6256 * C232 + C6271 + C6271 + C32507 * C252) * C32612 * C6253 +
           (C6256 * C917 + C6272 + C6272 + C32507 * C929) * C32612 * C6254 +
           (C6256 * C922 + C6273 + C6273 + C32507 * C934) * C32612 * C6255) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
              C32570 * C221 -
          (C6373 * C6255 + C6372 * C6254 + C6371 * C6253 + C6370 * C6252 +
           C6369 * C6251) *
              C32570 * C222 +
          (C6370 * C6251 + C6371 * C6252 + C6372 * C6253 + C6373 * C6254 +
           (C6256 * C6336 + C6353 + C6353 + C32507 * C6340) * C32612 * C6255) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32887 +
            (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32876 +
            (C6256 * C335 + C6450 + C6450 + C32507 * C355) * C32857) *
               C5347 +
           (C6364 * C32887 + C6760 * C32876 +
            (C6256 * C1102 + C6451 + C6451 + C32507 * C1120) * C32857) *
               C5348 +
           (C6365 * C32887 + C6759 * C32876 +
            (C6256 * C1105 + C6452 + C6452 + C32507 * C1123) * C32857) *
               C32854) *
              C32570 * C32556 * C110 -
          (((C6256 * C1106 + C6875 + C6875 + C32507 * C1124) * C32857 +
            (C6256 * C1100 + C6652 + C6652 + C32507 * C1118) * C32876 +
            C6558 * C32887) *
               C32854 +
           ((C6256 * C1103 + C6876 + C6876 + C32507 * C1121) * C32857 +
            (C6256 * C639 + C6651 + C6651 + C32507 * C649) * C32876 +
            C6557 * C32887) *
               C5348 +
           ((C6256 * C336 + C6877 + C6877 + C32507 * C356) * C32857 +
            (C6256 * C333 + C6650 + C6650 + C32507 * C353) * C32876 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32887) *
               C5347) *
              C32570 * C32556 * C111 +
          (((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32887 +
            (C6256 * C332 + C6878 + C6878 + C32507 * C352) * C32876 +
            (C6256 * C337 + C6879 + C6879 + C32507 * C357) * C32857) *
               C5347 +
           ((C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32887 +
            (C6256 * C640 + C6880 + C6880 + C32507 * C650) * C32876 +
            (C6256 * C1104 + C6881 + C6881 + C32507 * C1122) * C32857) *
               C5348 +
           ((C6256 * C232 + C6271 + C6271 + C32507 * C252) * C32887 +
            (C6256 * C1099 + C6882 + C6882 + C32507 * C1117) * C32876 +
            (C6256 * C1107 + C6883 + C6883 + C32507 * C1125) * C32857) *
               C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32887 +
            (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32876 +
            (C6256 * C335 + C6450 + C6450 + C32507 * C355) * C32857) *
               C5347 +
           (C6994 + C6995 + C7016) * C5348 + C7019 * C32854) *
              C32570 * C221 -
          ((C7018 + C7004 + C7005) * C32854 + (C7017 + C6999 + C6998) * C5348 +
           (C7016 + C6995 + C6994) * C5347) *
              C32570 * C222 +
          (C7019 * C5347 + (C7005 + C7004 + C7018) * C5348 +
           (C6367 * C32887 + C6757 * C32876 +
            (C6256 * C6437 + C6454 + C6454 + C32507 * C6443) * C32857) *
               C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[115] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 +
             C2706 + C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 +
             C2692 * C139 + C2702 * C126 + C2708 + C2708 + C32822 * C140) *
                C32824 +
            (C3771 + C3772 + C3773 + C3774) * C32699) *
               C32600 * C32570 * C452 -
           ((C3431 + C3432 + C3433 + C3434) * C32699 +
            (C2870 + C2869 + C2868 + C2867) * C32824) *
               C32600 * C32570 * C453) *
              C454 +
          (((C3139 + C3140 + C3141 + C3142) * C32824 +
            (C2696 * C639 + C3277 + C3277 + C2690 * C649 + C2698 * C640 +
             C3278 + C3278 + C2691 * C650 + C2700 * C641 + C3279 + C3279 +
             C2692 * C651 + C2702 * C642 + C3280 + C3280 + C32822 * C652) *
                C32699) *
               C32600 * C32570 * C453 -
           ((C2702 * C330 + C3276 + C3276 + C32822 * C350 + C2700 * C331 +
             C3275 + C3275 + C2692 * C351 + C2698 * C332 + C3274 + C3274 +
             C2691 * C352 + C2696 * C333 + C3273 + C3273 + C2690 * C353) *
                C32699 +
            (C2702 * C127 + C2717 + C2717 + C32822 * C141 + C2700 * C126 +
             C2718 + C2718 + C2692 * C140 + C2698 * C125 + C2719 + C2719 +
             C2691 * C139 + C2696 * C124 + C2720 + C2720 + C2690 * C138) *
                C32824) *
               C32600 * C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
              C7773 + C7773 + C32517 * C138) *
                 C32824 +
             (C9004 + C9005) * C32699) *
                C5347 +
            ((C7930 + C7931) * C32824 + (C8517 + C8516) * C32699) * C5348 +
            C8819 * C32854) *
               C32570 * C452 -
           (((C8512 + C8513) * C32699 + (C7935 + C7934) * C32824) * C32854 +
            ((C8514 + C8515) * C32699 + (C7933 + C7932) * C32824) * C5348 +
            ((C8516 + C8517) * C32699 + (C7931 + C7930) * C32824) * C5347) *
               C32570 * C453) *
              C454 +
          ((((C8212 + C8213) * C32824 + (C9222 + C9223) * C32699) * C5347 +
            ((C8214 + C8215) * C32824 + (C9224 + C9225) * C32699) * C5348 +
            ((C8216 + C8217) * C32824 +
             (C7767 * C1631 + C8354 + C8354 + C32804 * C1637 + C7769 * C1632 +
              C8355 + C8355 + C32517 * C1638) *
                 C32699) *
                C32854) *
               C32570 * C453 -
           (((C9225 + C9224) * C32699 + (C8215 + C8214) * C32824) * C32854 +
            ((C9223 + C9222) * C32699 + (C8213 + C8212) * C32824) * C5348 +
            ((C7769 * C332 + C8349 + C8349 + C32517 * C352 + C7767 * C333 +
              C8348 + C8348 + C32804 * C353) *
                 C32699 +
             (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
              C7787 + C7787 + C32804 * C138) *
                 C32824) *
                C5347) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[116] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 +
             C2706 + C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 +
             C2692 * C139 + C2702 * C126 + C2708 + C2708 + C32822 * C140) *
                C32824 +
            (C3771 + C3772 + C3773 + C3774) * C32699) *
               C32600 * C546 -
           ((C3775 + C3776 + C3777 + C3778) * C32699 +
            (C3774 + C3773 + C3772 + C3771) * C32824) *
               C32600 * C547) *
              C452 +
          (((C3434 + C3433 + C3432 + C3431) * C32824 +
            (C2696 * C1102 + C2985 + C2985 + C2690 * C1120 + C2698 * C1103 +
             C2986 + C2986 + C2691 * C1121 + C2700 * C1104 + C2987 + C2987 +
             C2692 * C1122 + C2702 * C2231 + C2988 + C2988 + C32822 * C2233) *
                C32699) *
               C32600 * C547 -
           ((C3431 + C3432 + C3433 + C3434) * C32699 +
            (C2870 + C2869 + C2868 + C2867) * C32824) *
               C32600 * C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
              C7773 + C7773 + C32517 * C138) *
                 C32824 +
             (C9004 + C9005) * C32699) *
                C5347 +
            ((C7930 + C7931) * C32824 + C9630 * C32699) * C5348 +
            C8819 * C32854) *
               C546 -
           (((C9006 + C9007) * C32699 + C9631 * C32824) * C32854 +
            ((C9008 + C9009) * C32699 + C9632 * C32824) * C5348 +
            ((C9010 + C9011) * C32699 + (C9005 + C9004) * C32824) * C5347) *
               C547) *
              C452 +
          (((C9630 * C32824 + (C9009 + C9008) * C32699) * C5347 +
            (C8817 * C32824 + (C9007 + C9006) * C32699) * C5348 +
            ((C8513 + C8512) * C32824 +
             (C7767 * C6436 + C8054 + C8054 + C32804 * C6442 + C7769 * C7315 +
              C8055 + C8055 + C32517 * C7317) *
                 C32699) *
                C32854) *
               C547 -
           (((C8512 + C8513) * C32699 + (C7935 + C7934) * C32824) * C32854 +
            (C9631 * C32699 + (C7933 + C7932) * C32824) * C5348 +
            (C9632 * C32699 + (C7931 + C7930) * C32824) * C5347) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[117] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 + C2706 +
            C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 + C2692 * C139 +
            C2702 * C126 + C2708 + C2708 + C32822 * C140) *
               C32824 +
           (C2696 * C334 + C2980 + C2980 + C2690 * C354 + C2698 * C333 + C2979 +
            C2979 + C2691 * C353 + C2700 * C332 + C2978 + C2978 + C2692 * C352 +
            C2702 * C331 + C2977 + C2977 + C32822 * C351) *
               C32699) *
              C32600 * C32570 * C221 -
          ((C3431 + C3432 + C3433 + C3434) * C32699 +
           (C2870 + C2869 + C2868 + C2867) * C32824) *
              C32600 * C32570 * C222 +
          ((C2874 + C2873 + C2872 + C2871) * C32824 +
           (C2696 * C1101 + C3419 + C3419 + C2690 * C1119 + C2698 * C1100 +
            C3420 + C3420 + C2691 * C1118 + C2700 * C1099 + C3421 + C3421 +
            C2692 * C1117 + C2702 * C1472 + C3422 + C3422 + C32822 * C1474) *
               C32699) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 + C2706 +
            C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 + C2692 * C139 +
            C2702 * C126 + C2708 + C2708 + C32822 * C140) *
               C32824 +
           (C2696 * C334 + C2980 + C2980 + C2690 * C354 + C2698 * C333 + C2979 +
            C2979 + C2691 * C353 + C2700 * C332 + C2978 + C2978 + C2692 * C352 +
            C2702 * C331 + C2977 + C2977 + C32822 * C351) *
               C32699) *
              C32600 * C32570 * C32556 * C110 -
          ((C2702 * C330 + C3276 + C3276 + C32822 * C350 + C2700 * C331 +
            C3275 + C3275 + C2692 * C351 + C2698 * C332 + C3274 + C3274 +
            C2691 * C352 + C2696 * C333 + C3273 + C3273 + C2690 * C353) *
               C32699 +
           (C2702 * C127 + C2717 + C2717 + C32822 * C141 + C2700 * C126 +
            C2718 + C2718 + C2692 * C140 + C2698 * C125 + C2719 + C2719 +
            C2691 * C139 + C2696 * C124 + C2720 + C2720 + C2690 * C138) *
               C32824) *
              C32600 * C32570 * C32556 * C111 +
          ((C2696 * C125 + C2721 + C2721 + C2690 * C139 + C2698 * C126 + C2722 +
            C2722 + C2691 * C140 + C2700 * C127 + C2723 + C2723 + C2692 * C141 +
            C2702 * C128 + C2724 + C2724 + C32822 * C142) *
               C32824 +
           (C2696 * C332 + C3535 + C3535 + C2690 * C352 + C2698 * C331 + C3536 +
            C3536 + C2691 * C351 + C2700 * C330 + C3537 + C3537 + C2692 * C350 +
            C2702 * C548 + C3538 + C3538 + C32822 * C550) *
               C32699) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 + C2706 +
            C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 + C2692 * C139 +
            C2702 * C126 + C2708 + C2708 + C32822 * C140) *
               C32824 +
           (C3771 + C3772 + C3773 + C3774) * C32699) *
              C32600 * C327 -
          ((C3775 + C3776 + C3777 + C3778) * C32699 +
           (C3774 + C3773 + C3772 + C3771) * C32824) *
              C32600 * C328 +
          ((C3778 + C3777 + C3776 + C3775) * C32824 +
           (C2696 * C2016 + C3751 + C3751 + C2690 * C2028 + C2698 * C2015 +
            C3752 + C3752 + C2691 * C2027 + C2700 * C2014 + C3753 + C3753 +
            C2692 * C2026 + C2702 * C2383 + C3754 + C3754 + C32822 * C2385) *
               C32699) *
              C32600 * C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32824 +
            (C7767 * C334 + C8047 + C8047 + C32804 * C354 + C7769 * C333 +
             C8046 + C8046 + C32517 * C353) *
                C32699) *
               C5347 +
           ((C7930 + C7931) * C32824 + (C8517 + C8516) * C32699) * C5348 +
           (C7938 * C32824 + (C8515 + C8514) * C32699) * C32854) *
              C32570 * C32556 * C110 -
          (((C7769 * C1099 + C8353 + C8353 + C32517 * C1117 + C7767 * C1100 +
             C8352 + C8352 + C32804 * C1118) *
                C32699 +
            (C8215 + C8214) * C32824) *
               C32854 +
           ((C7769 * C640 + C8351 + C8351 + C32517 * C650 + C7767 * C639 +
             C8350 + C8350 + C32804 * C649) *
                C32699 +
            (C8213 + C8212) * C32824) *
               C5348 +
           ((C7769 * C332 + C8349 + C8349 + C32517 * C352 + C7767 * C333 +
             C8348 + C8348 + C32804 * C353) *
                C32699 +
            (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
             C7787 + C7787 + C32804 * C138) *
                C32824) *
               C5347) *
              C32570 * C32556 * C111 +
          (((C7767 * C125 + C7788 + C7788 + C32804 * C139 + C7769 * C126 +
             C7789 + C7789 + C32517 * C140) *
                C32824 +
            (C7767 * C332 + C8664 + C8664 + C32804 * C352 + C7769 * C331 +
             C8665 + C8665 + C32517 * C351) *
                C32699) *
               C5347 +
           ((C7767 * C227 + C7790 + C7790 + C32804 * C247 + C7769 * C226 +
             C7791 + C7791 + C32517 * C246) *
                C32824 +
            (C7767 * C640 + C8666 + C8666 + C32804 * C650 + C7769 * C641 +
             C8667 + C8667 + C32517 * C651) *
                C32699) *
               C5348 +
           ((C7767 * C232 + C7792 + C7792 + C32804 * C252 + C7769 * C233 +
             C7793 + C7793 + C32517 * C253) *
                C32824 +
            (C7767 * C1099 + C8668 + C8668 + C32804 * C1117 + C7769 * C1472 +
             C8669 + C8669 + C32517 * C1474) *
                C32699) *
               C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32824 +
            (C7767 * C334 + C8047 + C8047 + C32804 * C354 + C7769 * C333 +
             C8046 + C8046 + C32517 * C353) *
                C32699) *
               C5347 +
           ((C7930 + C7931) * C32824 + (C8517 + C8516) * C32699) * C5348 +
           C8819 * C32854) *
              C32570 * C221 -
          (((C8512 + C8513) * C32699 + (C7935 + C7934) * C32824) * C32854 +
           ((C8514 + C8515) * C32699 + (C7933 + C7932) * C32824) * C5348 +
           ((C8516 + C8517) * C32699 + (C7931 + C7930) * C32824) * C5347) *
              C32570 * C222 +
          (C8819 * C5347 + (C7939 * C32824 + (C8513 + C8512) * C32699) * C5348 +
           ((C7937 + C7936) * C32824 +
            (C7767 * C6435 + C8498 + C8498 + C32804 * C6441 + C7769 * C6646 +
             C8499 + C8499 + C32517 * C6648) *
                C32699) *
               C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32824 +
            (C9004 + C9005) * C32699) *
               C5347 +
           ((C7930 + C7931) * C32824 + (C8517 + C8516) * C32699) * C5348 +
           C8819 * C32854) *
              C327 -
          (((C9006 + C9007) * C32699 + (C8514 + C8515) * C32824) * C32854 +
           ((C9008 + C9009) * C32699 + (C8516 + C8517) * C32824) * C5348 +
           ((C9010 + C9011) * C32699 + (C9005 + C9004) * C32824) * C5347) *
              C328 +
          (((C9011 + C9010) * C32824 +
            (C7767 * C2016 + C8982 + C8982 + C32804 * C2028 + C7769 * C2015 +
             C8983 + C8983 + C32517 * C2027) *
                C32699) *
               C5347 +
           ((C9009 + C9008) * C32824 +
            (C7767 * C2565 + C8984 + C8984 + C32804 * C2571 + C7769 * C2566 +
             C8985 + C8985 + C32517 * C2572) *
                C32699) *
               C5348 +
           ((C9007 + C9006) * C32824 +
            (C7767 * C7129 + C8986 + C8986 + C32804 * C7135 + C7769 * C7491 +
             C8987 + C8987 + C32517 * C7493) *
                C32699) *
               C32854) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[118] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 +
             C2706 + C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 +
             C2692 * C139 + C2702 * C126 + C2708 + C2708 + C32822 * C140) *
                C32824 +
            (C3771 + C3772 + C3773 + C3774) * C32699) *
               C32600 * C546 -
           ((C3775 + C3776 + C3777 + C3778) * C32699 +
            (C3774 + C3773 + C3772 + C3771) * C32824) *
               C32600 * C547) *
              C32556 * C454 +
          (((C4059 + C4060 + C4061 + C4062) * C32824 +
            (C2696 * C336 + C4047 + C4047 + C2690 * C356 + C2698 * C337 +
             C4048 + C4048 + C2691 * C357 + C2700 * C338 + C4049 + C4049 +
             C2692 * C358 + C2702 * C339 + C4050 + C4050 + C32822 * C359) *
                C32699) *
               C32600 * C547 -
           ((C4062 + C4061 + C4060 + C4059) * C32699 +
            (C2702 * C127 + C2717 + C2717 + C32822 * C141 + C2700 * C126 +
             C2718 + C2718 + C2692 * C140 + C2698 * C125 + C2719 + C2719 +
             C2691 * C139 + C2696 * C124 + C2720 + C2720 + C2690 * C138) *
                C32824) *
               C32600 * C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
              C7773 + C7773 + C32517 * C138) *
                 C32824 +
             (C9004 + C9005) * C32699) *
                C5347 +
            ((C7930 + C7931) * C32824 + (C8517 + C8516) * C32699) * C5348 +
            C8819 * C32854) *
               C546 -
           (((C9006 + C9007) * C32699 + (C8514 + C8515) * C32824) * C32854 +
            ((C9008 + C9009) * C32699 + (C8516 + C8517) * C32824) * C5348 +
            ((C9010 + C9011) * C32699 + (C9005 + C9004) * C32824) * C5347) *
               C547) *
              C32556 * C454 +
          ((((C9434 + C9435) * C32824 +
             (C7767 * C336 + C9424 + C9424 + C32804 * C356 + C7769 * C337 +
              C9425 + C9425 + C32517 * C357) *
                 C32699) *
                C5347 +
            ((C9222 + C9223) * C32824 +
             (C7767 * C1103 + C9426 + C9426 + C32804 * C1121 + C7769 * C1104 +
              C9427 + C9427 + C32517 * C1122) *
                 C32699) *
                C5348 +
            ((C9224 + C9225) * C32824 +
             (C7767 * C1106 + C9428 + C9428 + C32804 * C1124 + C7769 * C1107 +
              C9429 + C9429 + C32517 * C1125) *
                 C32699) *
                C32854) *
               C547 -
           (((C9225 + C9224) * C32699 + (C8215 + C8214) * C32824) * C32854 +
            ((C9223 + C9222) * C32699 + (C8213 + C8212) * C32824) * C5348 +
            ((C9435 + C9434) * C32699 +
             (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
              C7787 + C7787 + C32804 * C138) *
                 C32824) *
                C5347) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[119] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 + C2706 +
            C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 + C2692 * C139 +
            C2702 * C126 + C2708 + C2708 + C32822 * C140) *
               C32824 +
           (C2696 * C334 + C2980 + C2980 + C2690 * C354 + C2698 * C333 + C2979 +
            C2979 + C2691 * C353 + C2700 * C332 + C2978 + C2978 + C2692 * C352 +
            C2702 * C331 + C2977 + C2977 + C32822 * C351) *
               C32699) *
              C32600 * C32570 * C32556 * C110 -
          ((C2702 * C330 + C3276 + C3276 + C32822 * C350 + C2700 * C331 +
            C3275 + C3275 + C2692 * C351 + C2698 * C332 + C3274 + C3274 +
            C2691 * C352 + C2696 * C333 + C3273 + C3273 + C2690 * C353) *
               C32699 +
           (C2702 * C127 + C2717 + C2717 + C32822 * C141 + C2700 * C126 +
            C2718 + C2718 + C2692 * C140 + C2698 * C125 + C2719 + C2719 +
            C2691 * C139 + C2696 * C124 + C2720 + C2720 + C2690 * C138) *
               C32824) *
              C32600 * C32570 * C32556 * C111 +
          ((C2696 * C125 + C2721 + C2721 + C2690 * C139 + C2698 * C126 + C2722 +
            C2722 + C2691 * C140 + C2700 * C127 + C2723 + C2723 + C2692 * C141 +
            C2702 * C128 + C2724 + C2724 + C32822 * C142) *
               C32824 +
           (C2696 * C332 + C3535 + C3535 + C2690 * C352 + C2698 * C331 + C3536 +
            C3536 + C2691 * C351 + C2700 * C330 + C3537 + C3537 + C2692 * C350 +
            C2702 * C548 + C3538 + C3538 + C32822 * C550) *
               C32699) *
              C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C2696 * C123 + C2705 + C2705 + C2690 * C137 + C2698 * C124 + C2706 +
            C2706 + C2691 * C138 + C2700 * C125 + C2707 + C2707 + C2692 * C139 +
            C2702 * C126 + C2708 + C2708 + C32822 * C140) *
               C32824 +
           (C2696 * C334 + C2980 + C2980 + C2690 * C354 + C2698 * C333 + C2979 +
            C2979 + C2691 * C353 + C2700 * C332 + C2978 + C2978 + C2692 * C352 +
            C2702 * C331 + C2977 + C2977 + C32822 * C351) *
               C32699) *
              C32600 * C32570 * C221 -
          ((C3431 + C3432 + C3433 + C3434) * C32699 +
           (C2870 + C2869 + C2868 + C2867) * C32824) *
              C32600 * C32570 * C222 +
          ((C2874 + C2873 + C2872 + C2871) * C32824 +
           (C2696 * C1101 + C3419 + C3419 + C2690 * C1119 + C2698 * C1100 +
            C3420 + C3420 + C2691 * C1118 + C2700 * C1099 + C3421 + C3421 +
            C2692 * C1117 + C2702 * C1472 + C3422 + C3422 + C32822 * C1474) *
               C32699) *
              C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32824 +
            (C7767 * C334 + C8047 + C8047 + C32804 * C354 + C7769 * C333 +
             C8046 + C8046 + C32517 * C353) *
                C32699) *
               C5347 +
           ((C7930 + C7931) * C32824 + (C8517 + C8516) * C32699) * C5348 +
           (C7938 * C32824 + (C8515 + C8514) * C32699) * C32854) *
              C32570 * C32556 * C110 -
          (((C7769 * C1099 + C8353 + C8353 + C32517 * C1117 + C7767 * C1100 +
             C8352 + C8352 + C32804 * C1118) *
                C32699 +
            (C8215 + C8214) * C32824) *
               C32854 +
           ((C7769 * C640 + C8351 + C8351 + C32517 * C650 + C7767 * C639 +
             C8350 + C8350 + C32804 * C649) *
                C32699 +
            (C8213 + C8212) * C32824) *
               C5348 +
           ((C7769 * C332 + C8349 + C8349 + C32517 * C352 + C7767 * C333 +
             C8348 + C8348 + C32804 * C353) *
                C32699 +
            (C7769 * C125 + C7786 + C7786 + C32517 * C139 + C7767 * C124 +
             C7787 + C7787 + C32804 * C138) *
                C32824) *
               C5347) *
              C32570 * C32556 * C111 +
          (((C7767 * C125 + C7788 + C7788 + C32804 * C139 + C7769 * C126 +
             C7789 + C7789 + C32517 * C140) *
                C32824 +
            (C7767 * C332 + C8664 + C8664 + C32804 * C352 + C7769 * C331 +
             C8665 + C8665 + C32517 * C351) *
                C32699) *
               C5347 +
           ((C7767 * C227 + C7790 + C7790 + C32804 * C247 + C7769 * C226 +
             C7791 + C7791 + C32517 * C246) *
                C32824 +
            (C7767 * C640 + C8666 + C8666 + C32804 * C650 + C7769 * C641 +
             C8667 + C8667 + C32517 * C651) *
                C32699) *
               C5348 +
           ((C7767 * C232 + C7792 + C7792 + C32804 * C252 + C7769 * C233 +
             C7793 + C7793 + C32517 * C253) *
                C32824 +
            (C7767 * C1099 + C8668 + C8668 + C32804 * C1117 + C7769 * C1472 +
             C8669 + C8669 + C32517 * C1474) *
                C32699) *
               C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C7767 * C123 + C7772 + C7772 + C32804 * C137 + C7769 * C124 +
             C7773 + C7773 + C32517 * C138) *
                C32824 +
            (C7767 * C334 + C8047 + C8047 + C32804 * C354 + C7769 * C333 +
             C8046 + C8046 + C32517 * C353) *
                C32699) *
               C5347 +
           ((C7930 + C7931) * C32824 + (C8517 + C8516) * C32699) * C5348 +
           C8819 * C32854) *
              C32570 * C221 -
          (((C8512 + C8513) * C32699 + (C7935 + C7934) * C32824) * C32854 +
           ((C8514 + C8515) * C32699 + (C7933 + C7932) * C32824) * C5348 +
           ((C8516 + C8517) * C32699 + (C7931 + C7930) * C32824) * C5347) *
              C32570 * C222 +
          (C8819 * C5347 + (C7939 * C32824 + (C8513 + C8512) * C32699) * C5348 +
           ((C7937 + C7936) * C32824 +
            (C7767 * C6435 + C8498 + C8498 + C32804 * C6441 + C7769 * C6646 +
             C8499 + C8499 + C32517 * C6648) *
                C32699) *
               C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[120] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
            C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
            C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
            C149 + C105 * C141) *
               C32612 * C32600 * C32570 * C452 -
           (C121 * C225 + C256 + C256 + C105 * C245 + C119 * C226 + C257 +
            C257 + C104 * C246 + C117 * C227 + C258 + C258 + C103 * C247 +
            C115 * C228 + C259 + C259 + C102 * C248 + C113 * C229 + C260 +
            C260 + C101 * C249) *
               C32612 * C32600 * C32570 * C453) *
              C454 +
          ((C113 * C228 + C460 + C460 + C101 * C248 + C115 * C227 + C461 +
            C461 + C102 * C247 + C117 * C226 + C462 + C462 + C103 * C246 +
            C119 * C225 + C463 + C463 + C104 * C245 + C121 * C456 + C464 +
            C464 + C105 * C458) *
               C32612 * C32600 * C32570 * C453 -
           (C121 * C128 + C150 + C150 + C105 * C142 + C119 * C127 + C151 +
            C151 + C104 * C141 + C117 * C126 + C152 + C152 + C103 * C140 +
            C115 * C125 + C153 + C153 + C102 * C139 + C113 * C124 + C154 +
            C154 + C101 * C138) *
               C32612 * C32600 * C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32612 * C32886 +
            (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
               C32570 * C452 -
           ((C984 + C985 + C986) * C32612 * C32854 +
            (C983 + C982 + C981) * C32612 * C32874 +
            (C980 + C979 + C978) * C32612 * C32886) *
               C32570 * C453) *
              C454 +
          (((C1321 + C1322 + C1323) * C32612 * C32886 +
            (C1324 + C1325 + C1326) * C32612 * C32874 +
            (C774 * C918 + C1306 + C1306 + C768 * C930 + C776 * C917 + C1307 +
             C1307 + C769 * C929 + C778 * C1290 + C1308 + C1308 +
             C32845 * C1292) *
                C32612 * C32854) *
               C32570 * C453 -
           ((C1326 + C1325 + C1324) * C32612 * C32854 +
            (C1323 + C1322 + C1321) * C32612 * C32874 +
            (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
             C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                C32612 * C32886) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C32612 * C5347 +
            (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
               C32570 * C452 -
           ((C5542 + C5543 + C5544) * C32612 * C32854 +
            (C5541 + C5540 + C5539) * C32612 * C5348 +
            (C5538 + C5537 + C5536) * C32612 * C5347) *
               C32570 * C453) *
              C454 +
          (((C5849 + C5850 + C5851) * C32612 * C5347 +
            (C5852 + C5853 + C5854) * C32612 * C5348 +
            (C5350 * C918 + C5834 + C5834 + C32883 * C930 + C5352 * C917 +
             C5835 + C5835 + C32870 * C929 + C5354 * C1290 + C5836 + C5836 +
             C32845 * C1292) *
                C32612 * C32854) *
               C32570 * C453 -
           ((C5854 + C5853 + C5852) * C32612 * C32854 +
            (C5851 + C5850 + C5849) * C32612 * C5348 +
            (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
             C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
             C32883 * C138) *
                C32612 * C5347) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
            C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
               C32570 * C452 -
           (C6373 * C6255 + C6372 * C6254 + C6371 * C6253 + C6370 * C6252 +
            C6369 * C6251) *
               C32570 * C453) *
              C454 +
          ((C6561 * C6251 + C6562 * C6252 + C6563 * C6253 + C6564 * C6254 +
            (C6256 * C6536 + C6548 + C6548 + C32507 * C6538) * C32612 * C6255) *
               C32570 * C453 -
           (C6564 * C6255 + C6563 * C6254 + C6562 * C6253 + C6561 * C6252 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32612 * C6251) *
               C32570 * C452) *
              C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[121] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
            C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
            C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
            C149 + C105 * C141) *
               C32612 * C32600 * C546 -
           (C121 * C330 + C361 + C361 + C105 * C350 + C119 * C331 + C362 +
            C362 + C104 * C351 + C117 * C332 + C363 + C363 + C103 * C352 +
            C115 * C333 + C364 + C364 + C102 * C353 + C113 * C334 + C365 +
            C365 + C101 * C354) *
               C32612 * C32600 * C547) *
              C452 +
          ((C113 * C638 + C654 + C654 + C101 * C648 + C115 * C639 + C655 +
            C655 + C102 * C649 + C117 * C640 + C656 + C656 + C103 * C650 +
            C119 * C641 + C657 + C657 + C104 * C651 + C121 * C642 + C658 +
            C658 + C105 * C652) *
               C32612 * C32600 * C547 -
           (C121 * C225 + C256 + C256 + C105 * C245 + C119 * C226 + C257 +
            C257 + C104 * C246 + C117 * C227 + C258 + C258 + C103 * C247 +
            C115 * C228 + C259 + C259 + C102 * C248 + C113 * C229 + C260 +
            C260 + C101 * C249) *
               C32612 * C32600 * C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32612 * C32886 +
            (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
               C546 -
           ((C1667 + C1668 + C1669) * C32612 * C32854 +
            (C1670 + C1671 + C1672) * C32612 * C32874 +
            (C778 * C332 + C1133 + C1133 + C32845 * C352 + C776 * C333 + C1134 +
             C1134 + C769 * C353 + C774 * C334 + C1135 + C1135 + C768 * C354) *
                C32612 * C32886) *
               C547) *
              C452 +
          (((C1672 + C1671 + C1670) * C32612 * C32886 +
            (C1669 + C1668 + C1667) * C32612 * C32874 +
            (C774 * C1630 + C1652 + C1652 + C768 * C1636 + C776 * C1631 +
             C1653 + C1653 + C769 * C1637 + C778 * C1632 + C1654 + C1654 +
             C32845 * C1638) *
                C32612 * C32854) *
               C547 -
           ((C984 + C985 + C986) * C32612 * C32854 +
            (C983 + C982 + C981) * C32612 * C32874 +
            (C980 + C979 + C978) * C32612 * C32886) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C32612 * C5347 +
            (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
               C546 -
           ((C6183 + C6184 + C6185) * C32612 * C32854 +
            (C6186 + C6187 + C6188) * C32612 * C5348 +
            (C5354 * C332 + C5664 + C5664 + C32845 * C352 + C5352 * C333 +
             C5665 + C5665 + C32870 * C353 + C5350 * C334 + C5666 + C5666 +
             C32883 * C354) *
                C32612 * C5347) *
               C547) *
              C452 +
          (((C6188 + C6187 + C6186) * C32612 * C5347 +
            (C6185 + C6184 + C6183) * C32612 * C5348 +
            (C5350 * C1630 + C6168 + C6168 + C32883 * C1636 + C5352 * C1631 +
             C6169 + C6169 + C32870 * C1637 + C5354 * C1632 + C6170 + C6170 +
             C32845 * C1638) *
                C32612 * C32854) *
               C547 -
           ((C5542 + C5543 + C5544) * C32612 * C32854 +
            (C5541 + C5540 + C5539) * C32612 * C5348 +
            (C5538 + C5537 + C5536) * C32612 * C5347) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
            C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
               C546 -
           (C6761 * C6255 + C6762 * C6254 + C6763 * C6253 + C6764 * C6252 +
            (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32612 * C6251) *
               C547) *
              C452 +
          ((C6764 * C6251 + C6763 * C6252 + C6762 * C6253 + C6761 * C6254 +
            (C6256 * C6736 + C6748 + C6748 + C32507 * C6738) * C32612 * C6255) *
               C547 -
           (C6373 * C6255 + C6372 * C6254 + C6371 * C6253 + C6370 * C6252 +
            C6369 * C6251) *
               C546) *
              C453) *
         C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[122] +=
        (-std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 + C146 +
           C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 + C119 * C126 +
           C148 + C148 + C104 * C140 + C121 * C127 + C149 + C149 +
           C105 * C141) *
              C32612 * C32600 * C32570 * C221 -
          (C121 * C225 + C256 + C256 + C105 * C245 + C119 * C226 + C257 + C257 +
           C104 * C246 + C117 * C227 + C258 + C258 + C103 * C247 + C115 * C228 +
           C259 + C259 + C102 * C248 + C113 * C229 + C260 + C260 +
           C101 * C249) *
              C32612 * C32600 * C32570 * C222 +
          (C113 * C230 + C261 + C261 + C101 * C250 + C115 * C231 + C262 + C262 +
           C102 * C251 + C117 * C232 + C263 + C263 + C103 * C252 + C119 * C233 +
           C264 + C264 + C104 * C253 + C121 * C234 + C265 + C265 +
           C105 * C254) *
              C32612 * C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 + C146 +
           C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 + C119 * C126 +
           C148 + C148 + C104 * C140 + C121 * C127 + C149 + C149 +
           C105 * C141) *
              C32612 * C32600 * C32570 * C32556 * C110 -
          (C121 * C128 + C150 + C150 + C105 * C142 + C119 * C127 + C151 + C151 +
           C104 * C141 + C117 * C126 + C152 + C152 + C103 * C140 + C115 * C125 +
           C153 + C153 + C102 * C139 + C113 * C124 + C154 + C154 +
           C101 * C138) *
              C32612 * C32600 * C32570 * C32556 * C111 +
          (C113 * C125 + C155 + C155 + C101 * C139 + C115 * C126 + C156 + C156 +
           C102 * C140 + C117 * C127 + C157 + C157 + C103 * C141 + C119 * C128 +
           C158 + C158 + C104 * C142 + C121 * C129 + C159 + C159 +
           C105 * C143) *
              C32612 * C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 + C146 +
           C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 + C119 * C126 +
           C148 + C148 + C104 * C140 + C121 * C127 + C149 + C149 +
           C105 * C141) *
              C32612 * C32600 * C327 -
          (C121 * C330 + C361 + C361 + C105 * C350 + C119 * C331 + C362 + C362 +
           C104 * C351 + C117 * C332 + C363 + C363 + C103 * C352 + C115 * C333 +
           C364 + C364 + C102 * C353 + C113 * C334 + C365 + C365 +
           C101 * C354) *
              C32612 * C32600 * C328 +
          (C113 * C335 + C366 + C366 + C101 * C355 + C115 * C336 + C367 + C367 +
           C102 * C356 + C117 * C337 + C368 + C368 + C103 * C357 + C119 * C338 +
           C369 + C369 + C104 * C358 + C121 * C339 + C370 + C370 +
           C105 * C359) *
              C32612 * C32600 * C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32612 * C32886 +
           (C774 * C229 + C784 + C784 + C768 * C249 + C776 * C228 + C785 +
            C785 + C769 * C248 + C778 * C227 + C786 + C786 + C32845 * C247) *
               C32612 * C32874 +
           (C774 * C230 + C787 + C787 + C768 * C250 + C776 * C231 + C788 +
            C788 + C769 * C251 + C778 * C232 + C789 + C789 + C32845 * C252) *
               C32612 * C32854) *
              C32570 * C32556 * C110 -
          ((C778 * C233 + C790 + C790 + C32845 * C253 + C776 * C232 + C791 +
            C791 + C769 * C252 + C774 * C231 + C792 + C792 + C768 * C251) *
               C32612 * C32854 +
           (C778 * C226 + C793 + C793 + C32845 * C246 + C776 * C227 + C794 +
            C794 + C769 * C247 + C774 * C228 + C795 + C795 + C768 * C248) *
               C32612 * C32874 +
           (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
            C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
               C32612 * C32886) *
              C32570 * C32556 * C111 +
          ((C774 * C125 + C799 + C799 + C768 * C139 + C776 * C126 + C800 +
            C800 + C769 * C140 + C778 * C127 + C801 + C801 + C32845 * C141) *
               C32612 * C32886 +
           (C774 * C227 + C802 + C802 + C768 * C247 + C776 * C226 + C803 +
            C803 + C769 * C246 + C778 * C225 + C804 + C804 + C32845 * C245) *
               C32612 * C32874 +
           (C774 * C232 + C805 + C805 + C768 * C252 + C776 * C233 + C806 +
            C806 + C769 * C253 + C778 * C234 + C807 + C807 + C32845 * C254) *
               C32612 * C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32612 * C32886 +
           (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
              C32570 * C221 -
          ((C984 + C985 + C986) * C32612 * C32854 +
           (C983 + C982 + C981) * C32612 * C32874 +
           (C980 + C979 + C978) * C32612 * C32886) *
              C32570 * C222 +
          (C989 * C32886 + (C986 + C985 + C984) * C32612 * C32874 +
           (C774 * C920 + C957 + C957 + C768 * C932 + C776 * C921 + C958 +
            C958 + C769 * C933 + C778 * C922 + C959 + C959 + C32845 * C934) *
               C32612 * C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32612 * C32886 +
           (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
              C327 -
          ((C778 * C1099 + C1127 + C1127 + C32845 * C1117 + C776 * C1100 +
            C1128 + C1128 + C769 * C1118 + C774 * C1101 + C1129 + C1129 +
            C768 * C1119) *
               C32612 * C32854 +
           (C778 * C640 + C1130 + C1130 + C32845 * C650 + C776 * C639 + C1131 +
            C1131 + C769 * C649 + C774 * C638 + C1132 + C1132 + C768 * C648) *
               C32612 * C32874 +
           (C778 * C332 + C1133 + C1133 + C32845 * C352 + C776 * C333 + C1134 +
            C1134 + C769 * C353 + C774 * C334 + C1135 + C1135 + C768 * C354) *
               C32612 * C32886) *
              C328 +
          ((C774 * C335 + C1136 + C1136 + C768 * C355 + C776 * C336 + C1137 +
            C1137 + C769 * C356 + C778 * C337 + C1138 + C1138 + C32845 * C357) *
               C32612 * C32886 +
           (C774 * C1102 + C1139 + C1139 + C768 * C1120 + C776 * C1103 + C1140 +
            C1140 + C769 * C1121 + C778 * C1104 + C1141 + C1141 +
            C32845 * C1122) *
               C32612 * C32874 +
           (C774 * C1105 + C1142 + C1142 + C768 * C1123 + C776 * C1106 + C1143 +
            C1143 + C769 * C1124 + C778 * C1107 + C1144 + C1144 +
            C32845 * C1125) *
               C32612 * C32854) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5350 * C229 + C5360 + C5360 + C32883 * C249 + C5352 * C228 +
            C5361 + C5361 + C32870 * C248 + C5354 * C227 + C5362 + C5362 +
            C32845 * C247) *
               C32612 * C5348 +
           (C5350 * C230 + C5363 + C5363 + C32883 * C250 + C5352 * C231 +
            C5364 + C5364 + C32870 * C251 + C5354 * C232 + C5365 + C5365 +
            C32845 * C252) *
               C32612 * C32854) *
              C32570 * C32556 * C110 -
          ((C5354 * C233 + C5366 + C5366 + C32845 * C253 + C5352 * C232 +
            C5367 + C5367 + C32870 * C252 + C5350 * C231 + C5368 + C5368 +
            C32883 * C251) *
               C32612 * C32854 +
           (C5354 * C226 + C5369 + C5369 + C32845 * C246 + C5352 * C227 +
            C5370 + C5370 + C32870 * C247 + C5350 * C228 + C5371 + C5371 +
            C32883 * C248) *
               C32612 * C5348 +
           (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
            C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
            C32883 * C138) *
               C32612 * C5347) *
              C32570 * C32556 * C111 +
          ((C5350 * C125 + C5375 + C5375 + C32883 * C139 + C5352 * C126 +
            C5376 + C5376 + C32870 * C140 + C5354 * C127 + C5377 + C5377 +
            C32845 * C141) *
               C32612 * C5347 +
           (C5350 * C227 + C5378 + C5378 + C32883 * C247 + C5352 * C226 +
            C5379 + C5379 + C32870 * C246 + C5354 * C225 + C5380 + C5380 +
            C32845 * C245) *
               C32612 * C5348 +
           (C5350 * C232 + C5381 + C5381 + C32883 * C252 + C5352 * C233 +
            C5382 + C5382 + C32870 * C253 + C5354 * C234 + C5383 + C5383 +
            C32845 * C254) *
               C32612 * C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
              C32570 * C221 -
          ((C5542 + C5543 + C5544) * C32612 * C32854 +
           (C5541 + C5540 + C5539) * C32612 * C5348 +
           (C5538 + C5537 + C5536) * C32612 * C5347) *
              C32570 * C222 +
          (C5547 * C5347 + (C5544 + C5543 + C5542) * C32612 * C5348 +
           (C5350 * C920 + C5515 + C5515 + C32883 * C932 + C5352 * C921 +
            C5516 + C5516 + C32870 * C933 + C5354 * C922 + C5517 + C5517 +
            C32845 * C934) *
               C32612 * C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
              C327 -
          ((C5354 * C1099 + C5658 + C5658 + C32845 * C1117 + C5352 * C1100 +
            C5659 + C5659 + C32870 * C1118 + C5350 * C1101 + C5660 + C5660 +
            C32883 * C1119) *
               C32612 * C32854 +
           (C5354 * C640 + C5661 + C5661 + C32845 * C650 + C5352 * C639 +
            C5662 + C5662 + C32870 * C649 + C5350 * C638 + C5663 + C5663 +
            C32883 * C648) *
               C32612 * C5348 +
           (C5354 * C332 + C5664 + C5664 + C32845 * C352 + C5352 * C333 +
            C5665 + C5665 + C32870 * C353 + C5350 * C334 + C5666 + C5666 +
            C32883 * C354) *
               C32612 * C5347) *
              C328 +
          ((C5350 * C335 + C5667 + C5667 + C32883 * C355 + C5352 * C336 +
            C5668 + C5668 + C32870 * C356 + C5354 * C337 + C5669 + C5669 +
            C32845 * C357) *
               C32612 * C5347 +
           (C5350 * C1102 + C5670 + C5670 + C32883 * C1120 + C5352 * C1103 +
            C5671 + C5671 + C32870 * C1121 + C5354 * C1104 + C5672 + C5672 +
            C32845 * C1122) *
               C32612 * C5348 +
           (C5350 * C1105 + C5673 + C5673 + C32883 * C1123 + C5352 * C1106 +
            C5674 + C5674 + C32870 * C1124 + C5354 * C1107 + C5675 + C5675 +
            C32845 * C1125) *
               C32612 * C32854) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           (C6256 * C229 + C6260 + C6260 + C32507 * C249) * C32612 * C6252 +
           (C6256 * C230 + C6261 + C6261 + C32507 * C250) * C32612 * C6253 +
           (C6256 * C919 + C6262 + C6262 + C32507 * C931) * C32612 * C6254 +
           (C6256 * C920 + C6263 + C6263 + C32507 * C932) * C32612 * C6255) *
              C32570 * C32556 * C110 -
          ((C6256 * C921 + C6264 + C6264 + C32507 * C933) * C32612 * C6255 +
           (C6256 * C918 + C6265 + C6265 + C32507 * C930) * C32612 * C6254 +
           (C6256 * C231 + C6266 + C6266 + C32507 * C251) * C32612 * C6253 +
           (C6256 * C228 + C6267 + C6267 + C32507 * C248) * C32612 * C6252 +
           (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32612 * C6251) *
              C32570 * C32556 * C111 +
          ((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32612 * C6251 +
           (C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32612 * C6252 +
           (C6256 * C232 + C6271 + C6271 + C32507 * C252) * C32612 * C6253 +
           (C6256 * C917 + C6272 + C6272 + C32507 * C929) * C32612 * C6254 +
           (C6256 * C922 + C6273 + C6273 + C32507 * C934) * C32612 * C6255) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
              C32570 * C221 -
          (C6373 * C6255 + C6372 * C6254 + C6371 * C6253 + C6370 * C6252 +
           C6369 * C6251) *
              C32570 * C222 +
          (C6370 * C6251 + C6371 * C6252 + C6372 * C6253 + C6373 * C6254 +
           (C6256 * C6336 + C6353 + C6353 + C32507 * C6340) * C32612 * C6255) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
              C327 -
          ((C6256 * C6435 + C6445 + C6445 + C32507 * C6441) * C32612 * C6255 +
           (C6256 * C1630 + C6446 + C6446 + C32507 * C1636) * C32612 * C6254 +
           (C6256 * C1101 + C6447 + C6447 + C32507 * C1119) * C32612 * C6253 +
           (C6256 * C638 + C6448 + C6448 + C32507 * C648) * C32612 * C6252 +
           (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32612 * C6251) *
              C328 +
          ((C6256 * C335 + C6450 + C6450 + C32507 * C355) * C32612 * C6251 +
           (C6256 * C1102 + C6451 + C6451 + C32507 * C1120) * C32612 * C6252 +
           (C6256 * C1105 + C6452 + C6452 + C32507 * C1123) * C32612 * C6253 +
           (C6256 * C6436 + C6453 + C6453 + C32507 * C6442) * C32612 * C6254 +
           (C6256 * C6437 + C6454 + C6454 + C32507 * C6443) * C32612 * C6255) *
              C329) *
         C32556 * C32544) /
            (p * q * std::sqrt(p + q));
    d2ee[123] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 +
            C146 + C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 +
            C119 * C126 + C148 + C148 + C104 * C140 + C121 * C127 + C149 +
            C149 + C105 * C141) *
               C32612 * C32600 * C546 -
           (C121 * C330 + C361 + C361 + C105 * C350 + C119 * C331 + C362 +
            C362 + C104 * C351 + C117 * C332 + C363 + C363 + C103 * C352 +
            C115 * C333 + C364 + C364 + C102 * C353 + C113 * C334 + C365 +
            C365 + C101 * C354) *
               C32612 * C32600 * C547) *
              C32556 * C454 +
          ((C113 * C333 + C552 + C552 + C101 * C353 + C115 * C332 + C553 +
            C553 + C102 * C352 + C117 * C331 + C554 + C554 + C103 * C351 +
            C119 * C330 + C555 + C555 + C104 * C350 + C121 * C548 + C556 +
            C556 + C105 * C550) *
               C32612 * C32600 * C547 -
           (C121 * C128 + C150 + C150 + C105 * C142 + C119 * C127 + C151 +
            C151 + C104 * C141 + C117 * C126 + C152 + C152 + C103 * C140 +
            C115 * C125 + C153 + C153 + C102 * C139 + C113 * C124 + C154 +
            C154 + C101 * C138) *
               C32612 * C32600 * C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
             C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
                C32612 * C32886 +
            (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
               C546 -
           ((C778 * C1099 + C1127 + C1127 + C32845 * C1117 + C776 * C1100 +
             C1128 + C1128 + C769 * C1118 + C774 * C1101 + C1129 + C1129 +
             C768 * C1119) *
                C32612 * C32854 +
            (C778 * C640 + C1130 + C1130 + C32845 * C650 + C776 * C639 + C1131 +
             C1131 + C769 * C649 + C774 * C638 + C1132 + C1132 + C768 * C648) *
                C32612 * C32874 +
            (C778 * C332 + C1133 + C1133 + C32845 * C352 + C776 * C333 + C1134 +
             C1134 + C769 * C353 + C774 * C334 + C1135 + C1135 + C768 * C354) *
                C32612 * C32886) *
               C547) *
              C32556 * C454 +
          (((C774 * C333 + C1476 + C1476 + C768 * C353 + C776 * C332 + C1477 +
             C1477 + C769 * C352 + C778 * C331 + C1478 + C1478 +
             C32845 * C351) *
                C32612 * C32886 +
            (C774 * C639 + C1479 + C1479 + C768 * C649 + C776 * C640 + C1480 +
             C1480 + C769 * C650 + C778 * C641 + C1481 + C1481 +
             C32845 * C651) *
                C32612 * C32874 +
            (C774 * C1100 + C1482 + C1482 + C768 * C1118 + C776 * C1099 +
             C1483 + C1483 + C769 * C1117 + C778 * C1472 + C1484 + C1484 +
             C32845 * C1474) *
                C32612 * C32854) *
               C547 -
           ((C1326 + C1325 + C1324) * C32612 * C32854 +
            (C1323 + C1322 + C1321) * C32612 * C32874 +
            (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
             C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
                C32612 * C32886) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
             C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
             C32845 * C139) *
                C32612 * C5347 +
            (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
               C546 -
           ((C5354 * C1099 + C5658 + C5658 + C32845 * C1117 + C5352 * C1100 +
             C5659 + C5659 + C32870 * C1118 + C5350 * C1101 + C5660 + C5660 +
             C32883 * C1119) *
                C32612 * C32854 +
            (C5354 * C640 + C5661 + C5661 + C32845 * C650 + C5352 * C639 +
             C5662 + C5662 + C32870 * C649 + C5350 * C638 + C5663 + C5663 +
             C32883 * C648) *
                C32612 * C5348 +
            (C5354 * C332 + C5664 + C5664 + C32845 * C352 + C5352 * C333 +
             C5665 + C5665 + C32870 * C353 + C5350 * C334 + C5666 + C5666 +
             C32883 * C354) *
                C32612 * C5347) *
               C547) *
              C32556 * C454 +
          (((C5350 * C333 + C6001 + C6001 + C32883 * C353 + C5352 * C332 +
             C6002 + C6002 + C32870 * C352 + C5354 * C331 + C6003 + C6003 +
             C32845 * C351) *
                C32612 * C5347 +
            (C5350 * C639 + C6004 + C6004 + C32883 * C649 + C5352 * C640 +
             C6005 + C6005 + C32870 * C650 + C5354 * C641 + C6006 + C6006 +
             C32845 * C651) *
                C32612 * C5348 +
            (C5350 * C1100 + C6007 + C6007 + C32883 * C1118 + C5352 * C1099 +
             C6008 + C6008 + C32870 * C1117 + C5354 * C1472 + C6009 + C6009 +
             C32845 * C1474) *
                C32612 * C32854) *
               C547 -
           ((C5854 + C5853 + C5852) * C32612 * C32854 +
            (C5851 + C5850 + C5849) * C32612 * C5348 +
            (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
             C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
             C32883 * C138) *
                C32612 * C5347) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
            C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
               C546 -
           ((C6256 * C6435 + C6445 + C6445 + C32507 * C6441) * C32612 * C6255 +
            (C6256 * C1630 + C6446 + C6446 + C32507 * C1636) * C32612 * C6254 +
            (C6256 * C1101 + C6447 + C6447 + C32507 * C1119) * C32612 * C6253 +
            (C6256 * C638 + C6448 + C6448 + C32507 * C648) * C32612 * C6252 +
            (C6256 * C334 + C6449 + C6449 + C32507 * C354) * C32612 * C6251) *
               C547) *
              C32556 * C454 +
          (((C6256 * C333 + C6650 + C6650 + C32507 * C353) * C32612 * C6251 +
            (C6256 * C639 + C6651 + C6651 + C32507 * C649) * C32612 * C6252 +
            (C6256 * C1100 + C6652 + C6652 + C32507 * C1118) * C32612 * C6253 +
            (C6256 * C1631 + C6653 + C6653 + C32507 * C1637) * C32612 * C6254 +
            (C6256 * C6646 + C6654 + C6654 + C32507 * C6648) * C32612 * C6255) *
               C547 -
           (C6564 * C6255 + C6563 * C6254 + C6562 * C6253 + C6561 * C6252 +
            (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32612 * C6251) *
               C546) *
              C32556 * C455)) /
            (p * q * std::sqrt(p + q));
    d2ee[124] +=
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 + C146 +
           C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 + C119 * C126 +
           C148 + C148 + C104 * C140 + C121 * C127 + C149 + C149 +
           C105 * C141) *
              C32612 * C32600 * C32570 * C32556 * C110 -
          (C121 * C128 + C150 + C150 + C105 * C142 + C119 * C127 + C151 + C151 +
           C104 * C141 + C117 * C126 + C152 + C152 + C103 * C140 + C115 * C125 +
           C153 + C153 + C102 * C139 + C113 * C124 + C154 + C154 +
           C101 * C138) *
              C32612 * C32600 * C32570 * C32556 * C111 +
          (C113 * C125 + C155 + C155 + C101 * C139 + C115 * C126 + C156 + C156 +
           C102 * C140 + C117 * C127 + C157 + C157 + C103 * C141 + C119 * C128 +
           C158 + C158 + C104 * C142 + C121 * C129 + C159 + C159 +
           C105 * C143) *
              C32612 * C32600 * C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C123 + C145 + C145 + C101 * C137 + C115 * C124 + C146 + C146 +
           C102 * C138 + C117 * C125 + C147 + C147 + C103 * C139 + C119 * C126 +
           C148 + C148 + C104 * C140 + C121 * C127 + C149 + C149 +
           C105 * C141) *
              C32612 * C32600 * C32570 * C221 -
          (C121 * C225 + C256 + C256 + C105 * C245 + C119 * C226 + C257 + C257 +
           C104 * C246 + C117 * C227 + C258 + C258 + C103 * C247 + C115 * C228 +
           C259 + C259 + C102 * C248 + C113 * C229 + C260 + C260 +
           C101 * C249) *
              C32612 * C32600 * C32570 * C222 +
          (C113 * C230 + C261 + C261 + C101 * C250 + C115 * C231 + C262 + C262 +
           C102 * C251 + C117 * C232 + C263 + C263 + C103 * C252 + C119 * C233 +
           C264 + C264 + C104 * C253 + C121 * C234 + C265 + C265 +
           C105 * C254) *
              C32612 * C32600 * C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32612 * C32886 +
           (C774 * C229 + C784 + C784 + C768 * C249 + C776 * C228 + C785 +
            C785 + C769 * C248 + C778 * C227 + C786 + C786 + C32845 * C247) *
               C32612 * C32874 +
           (C774 * C230 + C787 + C787 + C768 * C250 + C776 * C231 + C788 +
            C788 + C769 * C251 + C778 * C232 + C789 + C789 + C32845 * C252) *
               C32612 * C32854) *
              C32570 * C32556 * C110 -
          ((C778 * C233 + C790 + C790 + C32845 * C253 + C776 * C232 + C791 +
            C791 + C769 * C252 + C774 * C231 + C792 + C792 + C768 * C251) *
               C32612 * C32854 +
           (C778 * C226 + C793 + C793 + C32845 * C246 + C776 * C227 + C794 +
            C794 + C769 * C247 + C774 * C228 + C795 + C795 + C768 * C248) *
               C32612 * C32874 +
           (C778 * C126 + C796 + C796 + C32845 * C140 + C776 * C125 + C797 +
            C797 + C769 * C139 + C774 * C124 + C798 + C798 + C768 * C138) *
               C32612 * C32886) *
              C32570 * C32556 * C111 +
          ((C774 * C125 + C799 + C799 + C768 * C139 + C776 * C126 + C800 +
            C800 + C769 * C140 + C778 * C127 + C801 + C801 + C32845 * C141) *
               C32612 * C32886 +
           (C774 * C227 + C802 + C802 + C768 * C247 + C776 * C226 + C803 +
            C803 + C769 * C246 + C778 * C225 + C804 + C804 + C32845 * C245) *
               C32612 * C32874 +
           (C774 * C232 + C805 + C805 + C768 * C252 + C776 * C233 + C806 +
            C806 + C769 * C253 + C778 * C234 + C807 + C807 + C32845 * C254) *
               C32612 * C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C774 * C123 + C781 + C781 + C768 * C137 + C776 * C124 + C782 +
            C782 + C769 * C138 + C778 * C125 + C783 + C783 + C32845 * C139) *
               C32612 * C32886 +
           (C978 + C979 + C980) * C32612 * C32874 + C989 * C32854) *
              C32570 * C221 -
          ((C984 + C985 + C986) * C32612 * C32854 +
           (C983 + C982 + C981) * C32612 * C32874 +
           (C980 + C979 + C978) * C32612 * C32886) *
              C32570 * C222 +
          (C989 * C32886 + (C986 + C985 + C984) * C32612 * C32874 +
           (C774 * C920 + C957 + C957 + C768 * C932 + C776 * C921 + C958 +
            C958 + C769 * C933 + C778 * C922 + C959 + C959 + C32845 * C934) *
               C32612 * C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5350 * C229 + C5360 + C5360 + C32883 * C249 + C5352 * C228 +
            C5361 + C5361 + C32870 * C248 + C5354 * C227 + C5362 + C5362 +
            C32845 * C247) *
               C32612 * C5348 +
           (C5350 * C230 + C5363 + C5363 + C32883 * C250 + C5352 * C231 +
            C5364 + C5364 + C32870 * C251 + C5354 * C232 + C5365 + C5365 +
            C32845 * C252) *
               C32612 * C32854) *
              C32570 * C32556 * C110 -
          ((C5354 * C233 + C5366 + C5366 + C32845 * C253 + C5352 * C232 +
            C5367 + C5367 + C32870 * C252 + C5350 * C231 + C5368 + C5368 +
            C32883 * C251) *
               C32612 * C32854 +
           (C5354 * C226 + C5369 + C5369 + C32845 * C246 + C5352 * C227 +
            C5370 + C5370 + C32870 * C247 + C5350 * C228 + C5371 + C5371 +
            C32883 * C248) *
               C32612 * C5348 +
           (C5354 * C126 + C5372 + C5372 + C32845 * C140 + C5352 * C125 +
            C5373 + C5373 + C32870 * C139 + C5350 * C124 + C5374 + C5374 +
            C32883 * C138) *
               C32612 * C5347) *
              C32570 * C32556 * C111 +
          ((C5350 * C125 + C5375 + C5375 + C32883 * C139 + C5352 * C126 +
            C5376 + C5376 + C32870 * C140 + C5354 * C127 + C5377 + C5377 +
            C32845 * C141) *
               C32612 * C5347 +
           (C5350 * C227 + C5378 + C5378 + C32883 * C247 + C5352 * C226 +
            C5379 + C5379 + C32870 * C246 + C5354 * C225 + C5380 + C5380 +
            C32845 * C245) *
               C32612 * C5348 +
           (C5350 * C232 + C5381 + C5381 + C32883 * C252 + C5352 * C233 +
            C5382 + C5382 + C32870 * C253 + C5354 * C234 + C5383 + C5383 +
            C32845 * C254) *
               C32612 * C32854) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C5350 * C123 + C5357 + C5357 + C32883 * C137 + C5352 * C124 +
            C5358 + C5358 + C32870 * C138 + C5354 * C125 + C5359 + C5359 +
            C32845 * C139) *
               C32612 * C5347 +
           (C5536 + C5537 + C5538) * C32612 * C5348 + C5547 * C32854) *
              C32570 * C221 -
          ((C5542 + C5543 + C5544) * C32612 * C32854 +
           (C5541 + C5540 + C5539) * C32612 * C5348 +
           (C5538 + C5537 + C5536) * C32612 * C5347) *
              C32570 * C222 +
          (C5547 * C5347 + (C5544 + C5543 + C5542) * C32612 * C5348 +
           (C5350 * C920 + C5515 + C5515 + C32883 * C932 + C5352 * C921 +
            C5516 + C5516 + C32870 * C933 + C5354 * C922 + C5517 + C5517 +
            C32845 * C934) *
               C32612 * C32854) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           (C6256 * C229 + C6260 + C6260 + C32507 * C249) * C32612 * C6252 +
           (C6256 * C230 + C6261 + C6261 + C32507 * C250) * C32612 * C6253 +
           (C6256 * C919 + C6262 + C6262 + C32507 * C931) * C32612 * C6254 +
           (C6256 * C920 + C6263 + C6263 + C32507 * C932) * C32612 * C6255) *
              C32570 * C32556 * C110 -
          ((C6256 * C921 + C6264 + C6264 + C32507 * C933) * C32612 * C6255 +
           (C6256 * C918 + C6265 + C6265 + C32507 * C930) * C32612 * C6254 +
           (C6256 * C231 + C6266 + C6266 + C32507 * C251) * C32612 * C6253 +
           (C6256 * C228 + C6267 + C6267 + C32507 * C248) * C32612 * C6252 +
           (C6256 * C124 + C6268 + C6268 + C32507 * C138) * C32612 * C6251) *
              C32570 * C32556 * C111 +
          ((C6256 * C125 + C6269 + C6269 + C32507 * C139) * C32612 * C6251 +
           (C6256 * C227 + C6270 + C6270 + C32507 * C247) * C32612 * C6252 +
           (C6256 * C232 + C6271 + C6271 + C32507 * C252) * C32612 * C6253 +
           (C6256 * C917 + C6272 + C6272 + C32507 * C929) * C32612 * C6254 +
           (C6256 * C922 + C6273 + C6273 + C32507 * C934) * C32612 * C6255) *
              C32570 * C32556 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C6256 * C123 + C6259 + C6259 + C32507 * C137) * C32612 * C6251 +
           C6369 * C6252 + C6370 * C6253 + C6371 * C6254 + C6372 * C6255) *
              C32570 * C221 -
          (C6373 * C6255 + C6372 * C6254 + C6371 * C6253 + C6370 * C6252 +
           C6369 * C6251) *
              C32570 * C222 +
          (C6370 * C6251 + C6371 * C6252 + C6372 * C6253 + C6373 * C6254 +
           (C6256 * C6336 + C6353 + C6353 + C32507 * C6340) * C32612 * C6255) *
              C32570 * C223) *
         C32544) /
            (p * q * std::sqrt(p + q));
}
