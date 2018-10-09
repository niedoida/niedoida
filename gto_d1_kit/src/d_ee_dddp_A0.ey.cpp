/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2221_1_ints(const double ae,
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
    const double C105849 = 2 * q;
    const double C109811 = de * zCD;
    const double C109810 = be * zAB;
    const double C109807 = de * yCD;
    const double C109806 = be * yAB;
    const double C109803 = de * xCD;
    const double C109802 = be * xAB;
    const double C110161 = p + q;
    const double C111499 = p * q;
    const double C111498 = std::pow(Pi, 2.5);
    const double C111494 = zP - zQ;
    const double C111492 = yP - yQ;
    const double C111488 = xP - xQ;
    const double C111487 = 2 * p;
    const double C110072 = C109810 + C109811;
    const double C110071 = C109806 + C109807;
    const double C110070 = C109802 + C109803;
    const double C111500 = std::sqrt(C110161);
    const double C111530 = C111498 * kab;
    const double C111526 = C111494 * q;
    const double C111524 = C111492 * q;
    const double C111520 = C111488 * q;
    const double C111531 = C111499 * C111500;
    const double C111558 = C111530 * kcd;
    const double C65427 = (2. * C111558 * bs[0]) / C111531;
    const double C92801 = (2. * C111558 * bs[1]) / C111531;
    const double C94141 = (2. * C111558 * bs[2]) / C111531;
    const double C95090 = (2. * C111558 * bs[3]) / C111531;
    const double C95616 = (2. * C111558 * bs[4]) / C111531;
    const double C95898 = (2. * C111558 * bs[5]) / C111531;
    const double C96041 = (2. * C111558 * bs[6]) / C111531;
    const double C96138 = (2. * C111558 * bs[7]) / C111531;
    const double C110033 = C65427 / C105849;
    const double C111489 = C92801 * q;
    const double C61835 =
        -((C65427 * C109802) / p + (C92801 * C111520) / C110161);
    const double C65325 =
        -((C65427 * C109806) / p + (C92801 * C111524) / C110161);
    const double C65368 =
        -((C65427 * C109810) / p + (C92801 * C111526) / C110161);
    const double C111503 = C94141 * q;
    const double C92354 =
        -((C92801 * C109802) / p + (C94141 * C111520) / C110161);
    const double C92725 =
        -((C92801 * C109806) / p + (C94141 * C111524) / C110161);
    const double C92756 =
        -((C92801 * C109810) / p + (C94141 * C111526) / C110161);
    const double C111512 = C95090 * q;
    const double C94125 =
        -((C94141 * C109802) / p + (C95090 * C111520) / C110161);
    const double C97992 =
        -((C94141 * C109806) / p + (C95090 * C111524) / C110161);
    const double C98151 =
        -((C94141 * C109810) / p + (C95090 * C111526) / C110161);
    const double C111517 = C95616 * q;
    const double C95073 =
        -((C95090 * C109802) / p + (C95616 * C111520) / C110161);
    const double C98939 =
        -((C95090 * C109806) / p + (C95616 * C111524) / C110161);
    const double C102753 =
        -((C95090 * C109810) / p + (C95616 * C111526) / C110161);
    const double C111518 = C95898 * q;
    const double C95667 =
        -((C95616 * C109802) / p + (C95898 * C111520) / C110161);
    const double C99501 =
        -((C95616 * C109806) / p + (C95898 * C111524) / C110161);
    const double C103316 =
        -((C95616 * C109810) / p + (C95898 * C111526) / C110161);
    const double C111519 = C96041 * q;
    const double C95914 =
        -((C95898 * C109802) / p + (C96041 * C111520) / C110161);
    const double C99744 =
        -((C95898 * C109806) / p + (C96041 * C111524) / C110161);
    const double C103556 =
        -((C95898 * C109810) / p + (C96041 * C111526) / C110161);
    const double C96085 =
        -((C96041 * C109802) / p + (C96138 * C111520) / C110161);
    const double C99900 =
        -((C96041 * C109806) / p + (C96138 * C111524) / C110161);
    const double C103698 =
        -((C96041 * C109810) / p + (C96138 * C111526) / C110161);
    const double C111521 = C111489 / C110161;
    const double C110030 = C61835 / C105849;
    const double C109688 = -(C65427 * C110070 + C61835 * p) / q;
    const double C110029 = C65325 / C105849;
    const double C109728 = -(C65427 * C110071 + C65325 * p) / q;
    const double C110032 = C65368 / C105849;
    const double C109760 = -(C65427 * C110072 + C65368 * p) / q;
    const double C111534 = C111503 / C110161;
    const double C62382 =
        -((C65325 * C109802) / p + (C92725 * C111520) / C110161);
    const double C62802 =
        -((C65368 * C109802) / p + (C92756 * C111520) / C110161);
    const double C65353 =
        -((C65368 * C109806) / p + (C92756 * C111524) / C110161);
    const double C111543 = C111512 / C110161;
    const double C92740 =
        -((C92756 * C109806) / p + (C98151 * C111524) / C110161);
    const double C111548 = C111517 / C110161;
    const double C111549 = C111518 / C110161;
    const double C111550 = C111519 / C110161;
    const double C111551 = C65427 - C111521;
    const double C110069 = C109760 / C105849;
    const double C111561 = C92801 - C111534;
    const double C110047 = C62382 * p;
    const double C109972 = C62382 / q;
    const double C109899 = C62382 / C105849;
    const double C110055 = C62802 * p;
    const double C109980 = C62802 / q;
    const double C109924 = C62802 / C105849;
    const double C110065 = C65353 * p;
    const double C110005 = C65353 / q;
    const double C109935 = C65353 / C105849;
    const double C111570 = C94141 - C111543;
    const double C63332 =
        -((C65353 * C109802) / p + (C92740 * C111520) / C110161);
    const double C111575 = C95090 - C111548;
    const double C111576 = C95616 - C111549;
    const double C111577 = C95898 - C111550;
    const double C111578 = C111551 / C111487;
    const double C111586 = C111561 / C111487;
    const double C63433 = -(C65325 * C110070 + C110047) / q;
    const double C73940 = -(C61835 * C110071 + C110047) / q;
    const double C64574 = -(C65368 * C110070 + C110055) / q;
    const double C74263 = -(C61835 * C110072 + C110055) / q;
    const double C76640 = -(C65368 * C110071 + C110065) / q;
    const double C77356 = -(C65325 * C110072 + C110065) / q;
    const double C111592 = C111570 / C111487;
    const double C110031 = C63332 * p;
    const double C109991 = C63332 / q;
    const double C109934 = C63332 / C105849;
    const double C111595 = C111575 / C111487;
    const double C111596 = C111576 / C111487;
    const double C111597 = C111577 / C111487;
    const double C61805 =
        C111578 - ((C61835 * C109802) / p + (C92354 * C111520) / C110161);
    const double C63418 =
        C111578 - ((C65325 * C109806) / p + (C92725 * C111524) / C110161);
    const double C64559 =
        C111578 - ((C65368 * C109810) / p + (C92756 * C111526) / C110161);
    const double C92338 =
        C111586 - ((C92354 * C109802) / p + (C94125 * C111520) / C110161);
    const double C92475 =
        C111586 - ((C92725 * C109806) / p + (C97992 * C111524) / C110161);
    const double C92608 =
        C111586 - ((C92756 * C109810) / p + (C98151 * C111526) / C110161);
    const double C109920 = C74263 / C105849;
    const double C109931 = C76640 / C105849;
    const double C109918 = C77356 / C105849;
    const double C94108 =
        C111592 - ((C94125 * C109802) / p + (C95073 * C111520) / C110161);
    const double C94163 =
        C111592 - ((C97992 * C109806) / p + (C98939 * C111524) / C110161);
    const double C94194 =
        C111592 - ((C98151 * C109810) / p + (C102753 * C111526) / C110161);
    const double C61025 = -(C62382 * C110072 + C110031) / q;
    const double C61454 = -(C62802 * C110071 + C110031) / q;
    const double C61528 = -(C65353 * C110070 + C110031) / q;
    const double C95170 =
        C111595 - ((C95073 * C109802) / p + (C95667 * C111520) / C110161);
    const double C95217 =
        C111595 - ((C98939 * C109806) / p + (C99501 * C111524) / C110161);
    const double C95277 =
        C111595 - ((C102753 * C109810) / p + (C103316 * C111526) / C110161);
    const double C95683 =
        C111596 - ((C95667 * C109802) / p + (C95914 * C111520) / C110161);
    const double C99517 =
        C111596 - ((C99501 * C109806) / p + (C99744 * C111524) / C110161);
    const double C99548 =
        C111596 - ((C103316 * C109810) / p + (C103556 * C111526) / C110161);
    const double C95988 =
        C111597 - ((C95914 * C109802) / p + (C96085 * C111520) / C110161);
    const double C99804 =
        C111597 - ((C99744 * C109806) / p + (C99900 * C111524) / C110161);
    const double C103602 =
        C111597 - ((C103556 * C109810) / p + (C103698 * C111526) / C110161);
    const double C109805 = C61805 / C105849;
    const double C61788 = C110033 - (C61835 * C110070) / q - (C61805 * p) / q;
    const double C109833 = C63418 / C105849;
    const double C75534 = C110033 - (C65325 * C110071) / q - (C63418 * p) / q;
    const double C109868 = C64559 / C105849;
    const double C77413 = C110033 - (C65368 * C110072) / q - (C64559 * p) / q;
    const double C61774 =
        (C61835 - (C92354 * q) / C110161) / p -
        ((C61805 * C109802) / p + (C92338 * C111520) / C110161);
    const double C62337 =
        -((C61805 * C109806) / p + (C92338 * C111524) / C110161);
    const double C62757 =
        -((C61805 * C109810) / p + (C92338 * C111526) / C110161);
    const double C111491 = C92475 * q;
    const double C62352 =
        -((C63418 * C109802) / p + (C92475 * C111520) / C110161);
    const double C63649 =
        (C65325 - (C92725 * q) / C110161) / p -
        ((C63418 * C109806) / p + (C92475 * C111524) / C110161);
    const double C63984 =
        -((C63418 * C109810) / p + (C92475 * C111526) / C110161);
    const double C111493 = C92608 * q;
    const double C62772 =
        -((C64559 * C109802) / p + (C92608 * C111520) / C110161);
    const double C64716 =
        -((C64559 * C109806) / p + (C92608 * C111524) / C110161);
    const double C64792 =
        (C65368 - (C92756 * q) / C110161) / p -
        ((C64559 * C109810) / p + (C92608 * C111526) / C110161);
    const double C92318 =
        (C92354 - (C94125 * q) / C110161) / p -
        ((C92338 * C109802) / p + (C94108 * C111520) / C110161);
    const double C96323 =
        -((C92338 * C109810) / p + (C94108 * C111526) / C110161);
    const double C111507 = C94163 * q;
    const double C92370 =
        -((C92475 * C109802) / p + (C94163 * C111520) / C110161);
    const double C92563 =
        (C92725 - (C97992 * q) / C110161) / p -
        ((C92475 * C109806) / p + (C94163 * C111524) / C110161);
    const double C92578 =
        -((C92475 * C109810) / p + (C94163 * C111526) / C110161);
    const double C111508 = C94194 * q;
    const double C92401 =
        -((C92608 * C109802) / p + (C94194 * C111520) / C110161);
    const double C92681 =
        -((C92608 * C109806) / p + (C94194 * C111524) / C110161);
    const double C92696 =
        (C92756 - (C98151 * q) / C110161) / p -
        ((C92608 * C109810) / p + (C94194 * C111526) / C110161);
    const double C109861 = C61025 / q;
    const double C106051 = -(C74263 * C110071 + C61025 * p) / q;
    const double C109928 = C61454 / q;
    const double C94337 =
        (C94125 - (C95073 * q) / C110161) / p -
        ((C94108 * C109802) / p + (C95170 * C111520) / C110161);
    const double C94425 =
        (C97992 - (C98939 * q) / C110161) / p -
        ((C94163 * C109806) / p + (C95217 * C111524) / C110161);
    const double C94441 =
        -((C94163 * C109802) / p + (C95217 * C111520) / C110161);
    const double C111513 = C95277 * q;
    const double C94518 =
        -((C94194 * C109802) / p + (C95277 * C111520) / C110161);
    const double C94565 =
        (C98151 - (C102753 * q) / C110161) / p -
        ((C94194 * C109810) / p + (C95277 * C111526) / C110161);
    const double C98311 =
        -((C94194 * C109806) / p + (C95277 * C111524) / C110161);
    const double C95186 =
        (C95073 - (C95667 * q) / C110161) / p -
        ((C95170 * C109802) / p + (C95683 * C111520) / C110161);
    const double C95292 =
        (C98939 - (C99501 * q) / C110161) / p -
        ((C95217 * C109806) / p + (C99517 * C111524) / C110161);
    const double C95364 =
        (C102753 - (C103316 * q) / C110161) / p -
        ((C95277 * C109810) / p + (C99548 * C111526) / C110161);
    const double C99073 =
        -((C95277 * C109806) / p + (C99548 * C111524) / C110161);
    const double C95773 =
        (C95667 - (C95914 * q) / C110161) / p -
        ((C95683 * C109802) / p + (C95988 * C111520) / C110161);
    const double C95847 =
        (C99501 - (C99744 * q) / C110161) / p -
        ((C99517 * C109806) / p + (C99804 * C111524) / C110161);
    const double C95876 =
        (C103316 - (C103556 * q) / C110161) / p -
        ((C99548 * C109810) / p + (C103602 * C111526) / C110161);
    const double C109932 = C77413 / C105849;
    const double C109804 = C61774 / C105849;
    const double C54447 =
        C61835 / q - (C61805 * C110070) / q - (C61774 * p) / q;
    const double C109966 = C62337 * p;
    const double C109898 = C62337 / C105849;
    const double C109969 = C62757 * p;
    const double C109923 = C62757 / C105849;
    const double C111523 = C111491 / C110161;
    const double C109992 = C62352 * p;
    const double C109832 = C62352 / C105849;
    const double C109941 = C63649 / C105849;
    const double C57149 =
        C65325 / q - (C63418 * C110071) / q - (C63649 * p) / q;
    const double C109995 = C63984 * p;
    const double C109960 = C63984 / C105849;
    const double C111525 = C111493 / C110161;
    const double C110015 = C62772 * p;
    const double C109867 = C62772 / C105849;
    const double C110017 = C64716 * p;
    const double C109946 = C64716 / C105849;
    const double C109962 = C64792 / C105849;
    const double C59355 =
        C65368 / q - (C64559 * C110072) / q - (C64792 * p) / q;
    const double C111490 = C92318 * q;
    const double C61742 =
        (3 * (C61805 - (C92338 * q) / C110161)) / C111487 -
        ((C61774 * C109802) / p + (C92318 * C111520) / C110161);
    const double C62398 =
        -((C61774 * C109806) / p + (C92318 * C111524) / C110161);
    const double C62818 =
        -((C61774 * C109810) / p + (C92318 * C111526) / C110161);
    const double C63317 =
        -((C62757 * C109806) / p + (C96323 * C111524) / C110161);
    const double C111538 = C111507 / C110161;
    const double C111495 = C92563 * q;
    const double C63679 =
        -((C63649 * C109802) / p + (C92563 * C111520) / C110161);
    const double C64501 =
        -((C63649 * C109810) / p + (C92563 * C111526) / C110161);
    const double C64014 =
        -((C63984 * C109802) / p + (C92578 * C111520) / C110161);
    const double C111539 = C111508 / C110161;
    const double C64731 =
        -((C64716 * C109802) / p + (C92681 * C111520) / C110161);
    const double C111496 = C92696 * q;
    const double C64822 =
        -((C64792 * C109802) / p + (C92696 * C111520) / C110161);
    const double C65267 =
        -((C64792 * C109806) / p + (C92696 * C111524) / C110161);
    const double C111504 = C94337 * q;
    const double C92785 =
        (3 * (C92338 - (C94108 * q) / C110161)) / C111487 -
        ((C92318 * C109802) / p + (C94337 * C111520) / C110161);
    const double C96735 =
        -((C92318 * C109806) / p + (C94337 * C111524) / C110161);
    const double C96824 =
        -((C92318 * C109810) / p + (C94337 * C111526) / C110161);
    const double C111505 = C94425 * q;
    const double C92997 =
        -((C92563 * C109802) / p + (C94425 * C111520) / C110161);
    const double C93244 =
        -((C92563 * C109810) / p + (C94425 * C111526) / C110161);
    const double C111544 = C111513 / C110161;
    const double C111506 = C94565 * q;
    const double C93136 =
        -((C92696 * C109802) / p + (C94565 * C111520) / C110161);
    const double C93467 =
        -((C92696 * C109806) / p + (C94565 * C111524) / C110161);
    const double C111514 = C95186 * q;
    const double C94353 =
        (3 * (C94108 - (C95170 * q) / C110161)) / C111487 -
        ((C94337 * C109802) / p + (C95186 * C111520) / C110161);
    const double C98372 =
        -((C94337 * C109806) / p + (C95186 * C111524) / C110161);
    const double C102217 =
        -((C94337 * C109810) / p + (C95186 * C111526) / C110161);
    const double C111515 = C95292 * q;
    const double C94457 =
        (3 * (C94163 - (C95217 * q) / C110161)) / C111487 -
        ((C94425 * C109806) / p + (C95292 * C111524) / C110161);
    const double C94534 =
        -((C94425 * C109802) / p + (C95292 * C111520) / C110161);
    const double C102318 =
        -((C94425 * C109810) / p + (C95292 * C111526) / C110161);
    const double C111516 = C95364 * q;
    const double C94626 =
        -((C94565 * C109802) / p + (C95364 * C111520) / C110161);
    const double C98547 =
        -((C94565 * C109806) / p + (C95364 * C111524) / C110161);
    const double C95407 =
        (3 * (C95170 - (C95683 * q) / C110161)) / C111487 -
        ((C95186 * C109802) / p + (C95773 * C111520) / C110161);
    const double C103072 =
        -((C95186 * C109810) / p + (C95773 * C111526) / C110161);
    const double C95451 =
        (3 * (C95217 - (C99517 * q) / C110161)) / C111487 -
        ((C95292 * C109806) / p + (C95847 * C111524) / C110161);
    const double C95526 =
        -((C95292 * C109802) / p + (C95847 * C111520) / C110161);
    const double C103088 =
        -((C95292 * C109810) / p + (C95847 * C111526) / C110161);
    const double C95542 =
        (3 * (C95277 - (C99548 * q) / C110161)) / C111487 -
        ((C95364 * C109810) / p + (C95876 * C111526) / C110161);
    const double C95572 =
        -((C95364 * C109802) / p + (C95876 * C111520) / C110161);
    const double C99318 =
        -((C95364 * C109806) / p + (C95876 * C111524) / C110161);
    const double C105839 =
        C109688 / C105849 - (C61788 * C110070) / q + C110030 - (C54447 * p) / q;
    const double C54939 = -(C61805 * C110071 + C109966) / q;
    const double C60838 = C110029 - (C62382 * C110070) / q - C109966 / q;
    const double C55031 = -(C61805 * C110072 + C109969) / q;
    const double C61297 = C110032 - (C62802 * C110070) / q - C109969 / q;
    const double C111553 = C63418 - C111523;
    const double C56828 = -(C63418 * C110070 + C109992) / q;
    const double C60995 = C110030 - (C62382 * C110071) / q - C109992 / q;
    const double C106197 =
        C109728 / C105849 - (C75534 * C110071) / q + C110029 - (C57149 * p) / q;
    const double C57207 = -(C63418 * C110072 + C109995) / q;
    const double C61684 = C110032 - (C65353 * C110071) / q - C109995 / q;
    const double C111554 = C64559 - C111525;
    const double C58977 = -(C64559 * C110070 + C110015) / q;
    const double C61485 = C110030 - (C62802 * C110072) / q - C110015 / q;
    const double C59297 = -(C64559 * C110071 + C110017) / q;
    const double C61713 = C110029 - (C65353 * C110072) / q - C110017 / q;
    const double C109891 = C59355 / C105849;
    const double C106537 =
        C110069 - (C77413 * C110072) / q + C110032 - (C59355 * p) / q;
    const double C111522 = C111490 / C110161;
    const double C109963 = C61742 / C105849;
    const double C54430 =
        (3 * C61805) / C105849 - (C61774 * C110070) / q - (C61742 * p) / q;
    const double C109985 = C62398 / C105849;
    const double C109965 = C62398 * p;
    const double C109989 = C62818 / C105849;
    const double C109968 = C62818 * p;
    const double C110060 = C63317 / q;
    const double C109990 = C63317 / C105849;
    const double C109977 = C63317 * p;
    const double C111565 = C92475 - C111538;
    const double C111527 = C111495 / C110161;
    const double C110009 = C63679 / C105849;
    const double C109993 = C63679 * p;
    const double C110014 = C64501 / C105849;
    const double C110000 = C64501 * p;
    const double C110039 = C64014 / q;
    const double C110012 = C64014 / C105849;
    const double C109994 = C64014 * p;
    const double C111566 = C92608 - C111539;
    const double C110043 = C64731 / q;
    const double C110024 = C64731 / C105849;
    const double C110016 = C64731 * p;
    const double C111528 = C111496 / C110161;
    const double C110027 = C64822 / C105849;
    const double C110018 = C64822 * p;
    const double C110028 = C65267 / C105849;
    const double C110019 = C65267 * p;
    const double C111535 = C111504 / C110161;
    const double C111497 = C92785 * q;
    const double C63171 =
        -((C61742 * C109806) / p + (C92785 * C111524) / C110161);
    const double C63260 =
        -((C61742 * C109810) / p + (C92785 * C111526) / C110161);
    const double C63347 =
        -((C62818 * C109806) / p + (C96824 * C111524) / C110161);
    const double C111536 = C111505 / C110161;
    const double C64516 =
        -((C64501 * C109802) / p + (C93244 * C111520) / C110161);
    const double C111571 = C94194 - C111544;
    const double C111537 = C111506 / C110161;
    const double C65282 =
        -((C65267 * C109802) / p + (C93467 * C111520) / C110161);
    const double C111545 = C111514 / C110161;
    const double C111509 = C94353 * q;
    const double C96719 =
        -((C92785 * C109806) / p + (C94353 * C111524) / C110161);
    const double C96809 =
        -((C92785 * C109810) / p + (C94353 * C111526) / C110161);
    const double C111546 = C111515 / C110161;
    const double C111510 = C94457 * q;
    const double C111547 = C111516 / C110161;
    const double C98606 =
        -((C94353 * C109806) / p + (C95407 * C111524) / C110161);
    const double C102421 =
        -((C94353 * C109810) / p + (C95407 * C111526) / C110161);
    const double C94830 =
        -((C94457 * C109802) / p + (C95451 * C111520) / C110161);
    const double C102586 =
        -((C94457 * C109810) / p + (C95451 * C111526) / C110161);
    const double C109901 = C105839 / C105849;
    const double C109897 = C60838 / q;
    const double C106132 = C110029 - (C63433 * C110070) / q - (C60838 * p) / q;
    const double C109919 = C55031 / C105849;
    const double C109922 = C61297 / q;
    const double C106407 = C110032 - (C64574 * C110070) / q - (C61297 * p) / q;
    const double C62306 = C111553 / C111487 - ((C62352 * C109802) / p +
                                               (C92370 * C111520) / C110161);
    const double C63618 =
        (3 * C111553) / C111487 -
        ((C63649 * C109806) / p + (C92563 * C111524) / C110161);
    const double C109841 = C60995 / q;
    const double C105905 = C110030 - (C73940 * C110071) / q - (C60995 * p) / q;
    const double C109904 = C106197 / C105849;
    const double C109858 = C57207 / C105849;
    const double C106826 = C110069 - (C77356 * C110071) / q - (C57207 * p) / q;
    const double C109938 = C61684 / q;
    const double C106472 = C110032 - (C76640 * C110071) / q - (C61684 * p) / q;
    const double C111580 = C111554 / C111487;
    const double C64761 =
        (3 * C111554) / C111487 -
        ((C64792 * C109810) / p + (C92696 * C111526) / C110161);
    const double C109884 = C61485 / q;
    const double C105970 = C110030 - (C74263 * C110072) / q - (C61485 * p) / q;
    const double C109890 = C59297 / C105849;
    const double C110068 = C61713 * p;
    const double C109940 = C61713 / q;
    const double C109929 = C106537 / C105849;
    const double C111552 = C61774 - C111522;
    const double C15311 =
        C61788 / q - (C54447 * C110070) / q + C109805 - (C54430 * p) / q;
    const double C54924 = -(C61774 * C110071 + C109965) / q;
    const double C55142 = C109972 - (C62337 * C110070) / q - C109965 / q;
    const double C55016 = -(C61774 * C110072 + C109968) / q;
    const double C55630 = C109980 - (C62757 * C110070) / q - C109968 / q;
    const double C55535 = -(C62337 * C110072 + C109977) / q;
    const double C55961 = -(C62757 * C110071 + C109977) / q;
    const double C61068 = C109935 - (C63332 * C110070) / q - C109977 / q;
    const double C93214 =
        (3 * C111565) / C111487 -
        ((C92563 * C109806) / p + (C94425 * C111524) / C110161);
    const double C100662 = C111565 / C111487 - ((C92370 * C109802) / p +
                                                (C94441 * C111520) / C110161);
    const double C111555 = C63649 - C111527;
    const double C57134 = C109972 - (C62352 * C110071) / q - C109993 / q;
    const double C57302 = -(C63649 * C110070 + C109993) / q;
    const double C57691 = -(C63649 * C110072 + C110000) / q;
    const double C58115 = C110005 - (C63984 * C110071) / q - C110000 / q;
    const double C57192 = -(C62352 * C110072 + C109994) / q;
    const double C57784 = -(C63984 * C110070 + C109994) / q;
    const double C61225 = C109924 - (C63332 * C110071) / q - C109994 / q;
    const double C111589 = C111566 / C111487;
    const double C93452 =
        (3 * C111566) / C111487 -
        ((C92696 * C109810) / p + (C94565 * C111526) / C110161);
    const double C59282 = -(C62772 * C110071 + C110016) / q;
    const double C59414 = -(C64716 * C110070 + C110016) / q;
    const double C61254 = C109899 - (C63332 * C110072) / q - C110016 / q;
    const double C111556 = C64792 - C111528;
    const double C59340 = C109980 - (C62772 * C110072) / q - C110018 / q;
    const double C59679 = -(C64792 * C110070 + C110018) / q;
    const double C59601 = C110005 - (C64716 * C110072) / q - C110019 / q;
    const double C60008 = -(C64792 * C110071 + C110019) / q;
    const double C111562 = C92318 - C111535;
    const double C111529 = C111497 / C110161;
    const double C109964 = C63171 * p;
    const double C109967 = C63260 * p;
    const double C109988 = C63347 * p;
    const double C111563 = C92563 - C111536;
    const double C110011 = C64516 * p;
    const double C94487 = C111571 / C111487 - ((C98311 * C109806) / p +
                                               (C99073 * C111524) / C110161);
    const double C94581 =
        (3 * C111571) / C111487 -
        ((C94565 * C109810) / p + (C95364 * C111526) / C110161);
    const double C111564 = C92696 - C111537;
    const double C110026 = C65282 * p;
    const double C111572 = C94337 - C111545;
    const double C111540 = C111509 / C110161;
    const double C65876 =
        -((C63260 * C109806) / p + (C96809 * C111524) / C110161);
    const double C111573 = C94425 - C111546;
    const double C111541 = C111510 / C110161;
    const double C111574 = C94565 - C111547;
    const double C109896 = C106132 / C105849;
    const double C109921 = C106407 / C105849;
    const double C110036 = 3 * C62306;
    const double C109975 = C62306 * p;
    const double C109970 = C62306 / C105849;
    const double C109996 = C63618 / C105849;
    const double C57630 =
        (3 * C63418) / C105849 - (C63649 * C110071) / q - (C63618 * p) / q;
    const double C109907 = C105905 / C105849;
    const double C109925 = C106472 / C105849;
    const double C62726 =
        C111580 - ((C62772 * C109802) / p + (C92401 * C111520) / C110161);
    const double C63953 =
        C111580 - ((C64716 * C109806) / p + (C92681 * C111524) / C110161);
    const double C110020 = C64761 / C105849;
    const double C60070 =
        (3 * C64559) / C105849 - (C64792 * C110072) / q - (C64761 * p) / q;
    const double C109914 = C105970 / C105849;
    const double C106262 = C110029 - (C77356 * C110072) / q - C110068 / q;
    const double C107083 = -(C77413 * C110071 + C110068) / q;
    const double C111579 = C111552 / C111487;
    const double C61820 = (2 * C111552) / p - ((C61742 * C109802) / p +
                                               (C92785 * C111520) / C110161);
    const double C109900 = C15311 / C105849;
    const double C15542 =
        C73940 / q - (C54939 * C110070) / q - (C54924 * p) / q;
    const double C19291 =
        C63433 / C105849 - (C60838 * C110070) / q + C109899 - (C55142 * p) / q;
    const double C109987 = C55016 / C105849;
    const double C15584 =
        C74263 / q - (C55031 * C110070) / q - (C55016 * p) / q;
    const double C19995 =
        C64574 / C105849 - (C61297 * C110070) / q + C109924 - (C55630 * p) / q;
    const double C109915 = C55535 / q;
    const double C109827 = C55535 * p;
    const double C20204 = C109931 - (C61454 * C110070) / q - (C55961 * p) / q;
    const double C109933 = C61068 / q;
    const double C20811 = C109935 - (C61528 * C110070) / q - (C61068 * p) / q;
    const double C111501 = C93214 * q;
    const double C63664 =
        -((C63618 * C109802) / p + (C93214 * C111520) / C110161);
    const double C65978 =
        -((C63618 * C109810) / p + (C93214 * C111526) / C110161);
    const double C93028 =
        -((C93214 * C109802) / p + (C94457 * C111520) / C110161);
    const double C93347 =
        -((C93214 * C109810) / p + (C94457 * C111526) / C110161);
    const double C64458 =
        -((C62306 * C109810) / p + (C100662 * C111526) / C110161);
    const double C111581 = C111555 / C111487;
    const double C65948 = (2 * C111555) / p - ((C63618 * C109806) / p +
                                               (C93214 * C111524) / C110161);
    const double C109857 = C57134 * p;
    const double C16933 =
        C77356 / q - (C57207 * C110071) / q - (C57691 * p) / q;
    const double C20887 =
        C109931 - (C61684 * C110071) / q + C109935 - (C58115 * p) / q;
    const double C109860 = C57192 * p;
    const double C109937 = C61225 / q;
    const double C109927 = C61225 * p;
    const double C93229 =
        C111589 - ((C92681 * C109806) / p + (C98311 * C111524) / C110161);
    const double C96915 =
        C111589 - ((C92401 * C109802) / p + (C94518 * C111520) / C110161);
    const double C111502 = C93452 * q;
    const double C64807 =
        -((C64761 * C109802) / p + (C93452 * C111520) / C110161);
    const double C66362 =
        -((C64761 * C109806) / p + (C93452 * C111524) / C110161);
    const double C18201 = -(C59297 * C110070 + C59282 * p) / q;
    const double C109939 = C61254 / q;
    const double C109912 = C61254 * p;
    const double C111582 = C111556 / C111487;
    const double C66392 = (2 * C111556) / p - ((C64761 * C109810) / p +
                                               (C93452 * C111526) / C110161);
    const double C109893 = C59340 * p;
    const double C109957 = C59601 / q;
    const double C109895 = C59601 * p;
    const double C111598 = C111562 / C111487;
    const double C92816 = (2 * C111562) / p - ((C92785 * C109802) / p +
                                               (C94353 * C111520) / C110161);
    const double C111557 = C61742 - C111529;
    const double C54908 = -(C61742 * C110071 + C109964) / q;
    const double C56085 =
        (3 * C62337) / C105849 - (C62398 * C110070) / q - C109964 / q;
    const double C55000 = -(C61742 * C110072 + C109967) / q;
    const double C56323 =
        (3 * C62757) / C105849 - (C62818 * C110070) / q - C109967 / q;
    const double C56279 = -(C62398 * C110072 + C109988) / q;
    const double C56483 = -(C62818 * C110071 + C109988) / q;
    const double C56560 = C109991 - (C63317 * C110070) / q - C109988 / q;
    const double C111587 = C111563 / C111487;
    const double C93332 = (2 * C111563) / p - ((C93214 * C109806) / p +
                                               (C94457 * C111524) / C110161);
    const double C58432 = -(C63679 * C110072 + C110011) / q;
    const double C58636 = C109991 - (C64014 * C110071) / q - C110011 / q;
    const double C58712 = -(C64501 * C110070 + C110011) / q;
    const double C111511 = C94581 * q;
    const double C93152 =
        -((C93452 * C109802) / p + (C94581 * C111520) / C110161);
    const double C93525 =
        -((C93452 * C109806) / p + (C94581 * C111524) / C110161);
    const double C94925 =
        -((C94581 * C109802) / p + (C95542 * C111520) / C110161);
    const double C98830 =
        -((C94581 * C109806) / p + (C95542 * C111524) / C110161);
    const double C111588 = C111564 / C111487;
    const double C93540 = (2 * C111564) / p - ((C93452 * C109810) / p +
                                               (C94581 * C111526) / C110161);
    const double C60323 = C109991 - (C64731 * C110072) / q - C110026 / q;
    const double C60527 = -(C64822 * C110071 + C110026) / q;
    const double C60604 = -(C65267 * C110070 + C110026) / q;
    const double C94756 = (2 * C111572) / p - ((C94353 * C109802) / p +
                                               (C95407 * C111520) / C110161);
    const double C98681 = C111572 / C111487 - ((C102217 * C109810) / p +
                                               (C103072 * C111526) / C110161);
    const double C111567 = C92785 - C111540;
    const double C110046 = C65876 * p;
    const double C111593 = C111573 / C111487;
    const double C94846 = (2 * C111573) / p - ((C94457 * C109806) / p +
                                               (C95451 * C111524) / C110161);
    const double C111568 = C93214 - C111541;
    const double C111594 = C111574 / C111487;
    const double C94941 = (2 * C111574) / p - ((C94581 * C109810) / p +
                                               (C95542 * C111526) / C110161);
    const double C110131 = C110036 / C105849;
    const double C110116 = C109975 / q;
    const double C16733 =
        C75534 / q - (C57149 * C110071) / q + C109833 - (C57630 * p) / q;
    const double C110041 = 3 * C62726;
    const double C109984 = C62726 * p;
    const double C109978 = C62726 / C105849;
    const double C110062 = 3 * C63953;
    const double C110008 = C63953 * p;
    const double C110001 = C63953 / C105849;
    const double C18141 =
        C77413 / q - (C59355 * C110072) / q + C109868 - (C60070 * p) / q;
    const double C109910 = C106262 / C105849;
    const double C62367 =
        C111579 - ((C62398 * C109806) / p + (C96735 * C111524) / C110161);
    const double C62787 =
        C111579 - ((C62818 * C109810) / p + (C96824 * C111526) / C110161);
    const double C54413 =
        (2 * C61774) / q - (C61742 * C110070) / q - (C61820 * p) / q;
    const double C109834 = C19291 / q;
    const double C109871 = C19995 / q;
    const double C15605 = -(C55031 * C110071 + C109827) / q;
    const double C19538 = C109918 - (C61025 * C110070) / q - C109827 / q;
    const double C109948 = C20811 / q;
    const double C111532 = C111501 / C110161;
    const double C109997 = C63664 * p;
    const double C109999 = C65978 * p;
    const double C65993 =
        -((C65978 * C109802) / p + (C93347 * C111520) / C110161);
    const double C109976 = C64458 * p;
    const double C64369 =
        C111581 - ((C63679 * C109802) / p + (C92997 * C111520) / C110161);
    const double C66128 =
        C111581 - ((C64501 * C109810) / p + (C93244 * C111526) / C110161);
    const double C57614 =
        (2 * C63649) / q - (C63618 * C110071) / q - (C65948 * p) / q;
    const double C16873 = -(C57149 * C110070 + C109857) / q;
    const double C19367 =
        C73940 / C105849 - (C60995 * C110071) / q + C109899 - C109857 / q;
    const double C109952 = C20887 / q;
    const double C16913 = -(C57207 * C110070 + C109860) / q;
    const double C19557 = C109920 - (C61025 * C110071) / q - C109860 / q;
    const double C20071 = C109924 - (C61454 * C110071) / q - C109927 / q;
    const double C21020 = -(C61684 * C110070 + C109927) / q;
    const double C63999 =
        -((C63953 * C109802) / p + (C93229 * C111520) / C110161);
    const double C93045 =
        -((C93229 * C109802) / p + (C94487 * C111520) / C110161);
    const double C65122 =
        -((C62726 * C109806) / p + (C96915 * C111524) / C110161);
    const double C111533 = C111502 / C110161;
    const double C110021 = C64807 * p;
    const double C110022 = C66362 * p;
    const double C19443 = C109899 - (C61025 * C110072) / q - C109912 / q;
    const double C20261 = -(C61485 * C110071 + C109912) / q;
    const double C21058 = -(C61713 * C110070 + C109912) / q;
    const double C65210 =
        C111582 - ((C64822 * C109802) / p + (C93136 * C111520) / C110161);
    const double C66158 =
        C111582 - ((C65267 * C109806) / p + (C93467 * C111524) / C110161);
    const double C60054 =
        (2 * C64792) / q - (C64761 * C110072) / q - (C66392 * p) / q;
    const double C18241 = -(C59355 * C110070 + C109893) / q;
    const double C20147 =
        C109920 - (C61485 * C110072) / q + C109924 - C109893 / q;
    const double C18261 = -(C59355 * C110071 + C109895) / q;
    const double C20963 =
        C109918 - (C61713 * C110072) / q + C109935 - C109895 / q;
    const double C97020 =
        C111598 - ((C96824 * C109810) / p + (C102217 * C111526) / C110161);
    const double C100740 =
        C111598 - ((C96735 * C109806) / p + (C98372 * C111524) / C110161);
    const double C65442 =
        -((C61820 * C109806) / p + (C92816 * C111524) / C110161);
    const double C65458 =
        -((C61820 * C109810) / p + (C92816 * C111526) / C110161);
    const double C111583 = C111557 / C111487;
    const double C65411 =
        (5 * C111557) / C111487 -
        ((C61820 * C109802) / p + (C92816 * C111520) / C110161);
    const double C15531 =
        (3 * C54939) / C105849 - (C54924 * C110070) / q - (C54908 * p) / q;
    const double C19282 =
        C109897 - (C55142 * C110070) / q + C109898 - (C56085 * p) / q;
    const double C15573 =
        (3 * C55031) / C105849 - (C55016 * C110070) / q - (C55000 * p) / q;
    const double C19986 =
        C109922 - (C55630 * C110070) / q + C109923 - (C56323 * p) / q;
    const double C109826 = C56279 * p;
    const double C20195 = C109928 - (C55961 * C110070) / q - (C56483 * p) / q;
    const double C20802 =
        C61528 / C105849 - (C61068 * C110070) / q + C109934 - (C56560 * p) / q;
    const double C93077 =
        C111587 - ((C92997 * C109802) / p + (C94534 * C111520) / C110161);
    const double C93406 =
        C111587 - ((C93244 * C109810) / p + (C102318 * C111526) / C110161);
    const double C65963 =
        -((C65948 * C109802) / p + (C93332 * C111520) / C110161);
    const double C78040 =
        -((C65948 * C109810) / p + (C93332 * C111526) / C110161);
    const double C109862 = C58432 * p;
    const double C109936 = C58636 * p;
    const double C111542 = C111511 / C110161;
    const double C66377 =
        -((C66362 * C109802) / p + (C93525 * C111520) / C110161);
    const double C93184 =
        C111588 - ((C93136 * C109802) / p + (C94626 * C111520) / C110161);
    const double C93422 =
        C111588 - ((C93467 * C109806) / p + (C98547 * C111524) / C110161);
    const double C66407 =
        -((C66392 * C109802) / p + (C93540 * C111520) / C110161);
    const double C78459 =
        -((C66392 * C109806) / p + (C93540 * C111524) / C110161);
    const double C109894 = C60323 * p;
    const double C51731 = -(C60008 * C110070 + C60527 * p) / q;
    const double C97452 =
        -((C92816 * C109806) / p + (C94756 * C111524) / C110161);
    const double C97543 =
        -((C92816 * C109810) / p + (C94756 * C111526) / C110161);
    const double C111599 = C111567 / C111487;
    const double C93569 =
        (5 * C111567) / C111487 -
        ((C92816 * C109802) / p + (C94756 * C111520) / C110161);
    const double C63186 =
        (3 * C63317) / C105849 - (C63347 * C110070) / q - C110046 / q;
    const double C74057 = -(C63260 * C110071 + C110046) / q;
    const double C75279 = -(C63171 * C110072 + C110046) / q;
    const double C94877 =
        C111593 - ((C102318 * C109810) / p + (C103088 * C111526) / C110161);
    const double C94909 =
        C111593 - ((C94534 * C109802) / p + (C95526 * C111520) / C110161);
    const double C93731 =
        -((C93332 * C109802) / p + (C94846 * C111520) / C110161);
    const double C93973 =
        -((C93332 * C109810) / p + (C94846 * C111526) / C110161);
    const double C111590 = C111568 / C111487;
    const double C93884 =
        (5 * C111568) / C111487 -
        ((C93332 * C109806) / p + (C94846 * C111524) / C110161);
    const double C94893 =
        C111594 - ((C98547 * C109806) / p + (C99318 * C111524) / C110161);
    const double C94957 =
        C111594 - ((C94626 * C109802) / p + (C95572 * C111520) / C110161);
    const double C93853 =
        -((C93540 * C109802) / p + (C94941 * C111520) / C110161);
    const double C94093 =
        -((C93540 * C109806) / p + (C94941 * C111524) / C110161);
    const double C55472 = C109805 - (C62337 * C110071) / q - C110116;
    const double C56812 = C109833 - (C62352 * C110070) / q - C110116;
    const double C109838 = C16733 / C105849;
    const double C110135 = C110041 / C105849;
    const double C110119 = C109984 / q;
    const double C110145 = C110062 / C105849;
    const double C110127 = C110008 / q;
    const double C109881 = C18141 / C105849;
    const double C109971 = C62367 * p;
    const double C109979 = C62787 * p;
    const double C15300 = (3 * C54447) / C105849 - (C54430 * C110070) / q +
                          C109804 - (C54413 * p) / q;
    const double C111559 = C63618 - C111532;
    const double C57285 = -(C63618 * C110070 + C109997) / q;
    const double C58401 =
        (3 * C62352) / C105849 - (C63679 * C110071) / q - C109997 / q;
    const double C57675 = -(C63618 * C110072 + C109999) / q;
    const double C58872 =
        (3 * C63984) / C105849 - (C64501 * C110071) / q - C109999 / q;
    const double C110050 = C65993 * p;
    const double C110120 = C109976 / q;
    const double C55518 = -(C62306 * C110072 + C109976) / q;
    const double C109974 = C64369 * p;
    const double C110004 = C66128 * p;
    const double C33574 = (3 * C57149) / C105849 - (C57630 * C110071) / q +
                          C109941 - (C57614 * p) / q;
    const double C109843 = C19367 / q;
    const double C109879 = C20071 / q;
    const double C110002 = C63999 * p;
    const double C66113 =
        (C63953 - (C93229 * q) / C110161) / C111487 -
        ((C63999 * C109802) / p + (C93045 * C111520) / C110161);
    const double C109981 = C65122 * p;
    const double C111560 = C64761 - C111533;
    const double C59662 = -(C64761 * C110070 + C110021) / q;
    const double C60559 =
        (3 * C62772) / C105849 - (C64822 * C110072) / q - C110021 / q;
    const double C59992 = -(C64761 * C110071 + C110022) / q;
    const double C60795 =
        (3 * C64716) / C105849 - (C65267 * C110072) / q - C110022 / q;
    const double C109852 = C19443 / q;
    const double C109983 = C65210 * p;
    const double C110007 = C66158 * p;
    const double C51674 = (3 * C59355) / C105849 - (C60070 * C110072) / q +
                          C109962 - (C60054 * p) / q;
    const double C109888 = C20147 / q;
    const double C109956 = C20963 / q;
    const double C65744 =
        -((C62787 * C109806) / p + (C97020 * C111524) / C110161);
    const double C97602 =
        -((C97020 * C109806) / p + (C98681 * C111524) / C110161);
    const double C65609 =
        -((C62367 * C109810) / p + (C100740 * C111526) / C110161);
    const double C110034 = C65442 * p;
    const double C110035 = C65458 * p;
    const double C65579 =
        C111583 - ((C63171 * C109806) / p + (C96719 * C111524) / C110161);
    const double C65729 =
        C111583 - ((C63260 * C109810) / p + (C96809 * C111526) / C110161);
    const double C61758 =
        (5 * C61742) / C105849 - (C61820 * C110070) / q - (C65411 * p) / q;
    const double C9827 = C15531 + xAB * C15542;
    const double C109809 = C19282 * p;
    const double C10201 = C19282 + yAB * C15311;
    const double C12586 = C19282 + xAB * C19291;
    const double C9849 = C15573 + xAB * C15584;
    const double C109813 = C19986 * p;
    const double C10361 = C19986 + zAB * C15311;
    const double C13482 = C19986 + xAB * C19995;
    const double C15594 = -(C55016 * C110071 + C109826) / q;
    const double C19529 = C109861 - (C55535 * C110070) / q - C109826 / q;
    const double C10471 = C20195 + zAB * C15542;
    const double C13603 = C20195 + xAB * C20204;
    const double C109903 = C20802 * p;
    const double C13208 = C20802 + zAB * C19291;
    const double C13961 = C20802 + yAB * C19995;
    const double C14394 = C20802 + xAB * C20811;
    const double C65594 =
        (C63679 - (C92997 * q) / C110161) / p -
        ((C64369 * C109802) / p + (C93077 * C111520) / C110161);
    const double C66290 =
        -((C64369 * C109810) / p + (C93077 * C111526) / C110161);
    const double C66143 =
        -((C66128 * C109802) / p + (C93406 * C111520) / C110161);
    const double C110049 = C65963 * p;
    const double C110061 = C78040 * p;
    const double C16923 = C109861 - (C57192 * C110071) / q - C109862 / q;
    const double C33745 = -(C57691 * C110070 + C109862) / q;
    const double C20878 =
        C61454 / C105849 - (C61225 * C110071) / q + C109934 - C109936 / q;
    const double C37731 = -(C58115 * C110070 + C109936) / q;
    const double C111569 = C93452 - C111542;
    const double C110057 = C66377 * p;
    const double C65759 =
        (C64822 - (C93136 * q) / C110161) / p -
        ((C65210 * C109802) / p + (C93184 * C111520) / C110161);
    const double C66538 =
        -((C65210 * C109806) / p + (C93184 * C111524) / C110161);
    const double C66173 =
        -((C66158 * C109802) / p + (C93422 * C111520) / C110161);
    const double C78215 =
        (C65267 - (C93467 * q) / C110161) / p -
        ((C66158 * C109806) / p + (C93422 * C111524) / C110161);
    const double C110058 = C66407 * p;
    const double C110067 = C78459 * p;
    const double C18251 = -(C59340 * C110071 + C109894) / q;
    const double C20954 =
        C61025 / C105849 - (C61254 * C110072) / q + C109934 - C109894 / q;
    const double C35043 = -(C59601 * C110070 + C109894) / q;
    const double C12391 = C51731 + zAB * C18201;
    const double C97468 =
        C111599 - ((C96719 * C109806) / p + (C98606 * C111524) / C110161);
    const double C97513 =
        C111599 - ((C96809 * C109810) / p + (C102421 * C111526) / C110161);
    const double C56544 =
        C109933 - (C56560 * C110070) / q + C109990 - (C63186 * p) / q;
    const double C54955 = -(C55000 * C110071 + C75279 * p) / q;
    const double C93776 =
        -((C93406 * C109802) / p + (C94877 * C111520) / C110161);
    const double C101437 =
        (C92997 - (C94534 * q) / C110161) / p -
        ((C93077 * C109802) / p + (C94909 * C111520) / C110161);
    const double C93715 =
        C111590 - ((C93028 * C109802) / p + (C94830 * C111520) / C110161);
    const double C93928 =
        C111590 - ((C93347 * C109810) / p + (C102586 * C111526) / C110161);
    const double C93792 =
        -((C93422 * C109802) / p + (C94893 * C111520) / C110161);
    const double C94033 =
        (C93467 - (C98547 * q) / C110161) / p -
        ((C93422 * C109806) / p + (C94893 * C111524) / C110161);
    const double C97707 =
        (C93136 - (C94626 * q) / C110161) / p -
        ((C93184 * C109802) / p + (C94957 * C111520) / C110161);
    const double C109906 = C55472 / q;
    const double C109815 = C55472 * p;
    const double C109829 = C56812 / q;
    const double C16653 = C109833 - (C56828 * C110070) / q - (C56812 * p) / q;
    const double C56025 = C109805 - (C62757 * C110072) / q - C110119;
    const double C58961 = C109868 - (C62772 * C110070) / q - C110119;
    const double C58177 = C109833 - (C63984 * C110072) / q - C110127;
    const double C59572 = C109868 - (C64716 * C110071) / q - C110127;
    const double C110113 = C109971 / q;
    const double C110117 = C109979 / q;
    const double C9706 = C15300 + xAB * C15311;
    const double C15290 =
        C105839 / q - (C15311 * C110070) / q + C54447 / q - (C15300 * p) / q;
    const double C111584 = C111559 / C111487;
    const double C78024 =
        (5 * C111559) / C111487 -
        ((C65948 * C109806) / p + (C93332 * C111524) / C110161);
    const double C109842 = C58401 * p;
    const double C33764 =
        (3 * C57207) / C105849 - (C57691 * C110071) / q - (C57675 * p) / q;
    const double C37612 =
        C109938 - (C58115 * C110071) / q + C109960 - (C58872 * p) / q;
    const double C63712 = -(C65978 * C110070 + C110050) / q;
    const double C75936 = -(C63664 * C110072 + C110050) / q;
    const double C76424 =
        (3 * C64014) / C105849 - (C64516 * C110071) / q - C110050 / q;
    const double C56721 = C109923 - (C63317 * C110071) / q - C110120;
    const double C58476 = C109960 - (C64014 * C110070) / q - C110120;
    const double C109859 = C55518 * p;
    const double C110115 = C109974 / q;
    const double C110124 = C110004 / q;
    const double C11201 = C33574 + yAB * C16733;
    const double C16753 =
        C106197 / q - (C16733 * C110071) / q + C57149 / q - (C33574 * p) / q;
    const double C110130 = C110002 / q;
    const double C57767 = -(C63953 * C110070 + C110002) / q;
    const double C110051 = C66113 * p;
    const double C110121 = C109981 / q;
    const double C55944 = -(C62726 * C110071 + C109981) / q;
    const double C111585 = C111560 / C111487;
    const double C90457 =
        (5 * C111560) / C111487 -
        ((C66392 * C109810) / p + (C93540 * C111526) / C110161);
    const double C109885 = C60559 * p;
    const double C109954 = C60795 * p;
    const double C110118 = C109983 / q;
    const double C110126 = C110007 / q;
    const double C12361 = C51674 + zAB * C18141;
    const double C18181 =
        C106537 / q - (C18141 * C110072) / q + C59355 / q - (C51674 * p) / q;
    const double C110044 = C65744 * p;
    const double C110040 = C65609 * p;
    const double C61851 =
        (2 * C62398) / q - (C63171 * C110070) / q - C110034 / q;
    const double C73924 = -(C61820 * C110071 + C110034) / q;
    const double C61868 =
        (2 * C62818) / q - (C63260 * C110070) / q - C110035 / q;
    const double C74247 = -(C61820 * C110072 + C110035) / q;
    const double C110037 = C65579 * p;
    const double C110042 = C65729 * p;
    const double C54365 =
        (2 * C54430) / q - (C54413 * C110070) / q + C109963 - (C61758 * p) / q;
    const double C15332 = -(C15311 * C110071 + C109809) / q;
    const double C19272 =
        C109896 - (C19291 * C110070) / q + C109897 - C109809 / q;
    const double C15353 = -(C15311 * C110072 + C109813) / q;
    const double C19976 =
        C109921 - (C19995 * C110070) / q + C109922 - C109813 / q;
    const double C9860 = C15594 + xAB * C15605;
    const double C15563 =
        C106051 / q - (C15605 * C110070) / q - (C15594 * p) / q;
    const double C10331 = C19529 + yAB * C15584;
    const double C12729 = C19529 + xAB * C19538;
    const double C19329 = -(C19291 * C110072 + C109903) / q;
    const double C20014 = -(C19995 * C110071 + C109903) / q;
    const double C20792 = C61528 / q - (C20811 * C110070) / q - C109903 / q;
    const double C110038 = C65594 * p;
    const double C110054 = C66290 * p;
    const double C110052 = C66143 * p;
    const double C63694 = -(C65948 * C110070 + C110049) / q;
    const double C75755 =
        (2 * C63679) / q - (C63664 * C110071) / q - C110049 / q;
    const double C75816 =
        (2 * C64501) / q - (C65978 * C110071) / q - C110061 / q;
    const double C87864 = -(C65948 * C110072 + C110061) / q;
    const double C10820 = C16923 + xAB * C16933;
    const double C13190 = C16923 + yAB * C19557;
    const double C16893 = -(C16933 * C110070 + C16923 * p) / q;
    const double C11291 = C33745 + yAB * C16913;
    const double C109909 = C20878 * p;
    const double C13244 = C20878 + zAB * C19367;
    const double C14001 = C20878 + yAB * C20071;
    const double C14438 = C20878 + xAB * C20887;
    const double C11431 = C37731 + zAB * C16873;
    const double C14971 = C37731 + yAB * C21020;
    const double C111591 = C111569 / C111487;
    const double C94049 =
        (5 * C111569) / C111487 -
        ((C93540 * C109810) / p + (C94941 * C111526) / C110161);
    const double C64837 = -(C66362 * C110070 + C110057) / q;
    const double C76887 = -(C64807 * C110071 + C110057) / q;
    const double C77328 =
        (3 * C64731) / C105849 - (C65282 * C110072) / q - C110057 / q;
    const double C110045 = C65759 * p;
    const double C110059 = C66538 * p;
    const double C110053 = C66173 * p;
    const double C110064 = C78215 * p;
    const double C64854 = -(C66392 * C110070 + C110058) / q;
    const double C77095 =
        (2 * C64822) / q - (C64807 * C110072) / q - C110058 / q;
    const double C76975 = -(C66392 * C110071 + C110067) / q;
    const double C89000 =
        (2 * C65267) / q - (C66362 * C110072) / q - C110067 / q;
    const double C11780 = C18251 + xAB * C18261;
    const double C14246 = C18251 + zAB * C20261;
    const double C18221 = -(C18261 * C110070 + C18251 * p) / q;
    const double C109917 = C20954 * p;
    const double C13280 = C20954 + zAB * C19443;
    const double C14041 = C20954 + yAB * C20147;
    const double C14482 = C20954 + xAB * C20963;
    const double C12251 = C35043 + yAB * C18241;
    const double C15133 = C35043 + zAB * C21058;
    const double C109902 = C56544 * p;
    const double C15552 =
        (3 * C15605) / C105849 - (C15594 * C110070) / q - (C54955 * p) / q;
    const double C110074 = C109815 / q;
    const double C109828 = C16653 / C105849;
    const double C109930 = C56025 / q;
    const double C109821 = C56025 * p;
    const double C109864 = C58961 / q;
    const double C17981 = C109868 - (C58977 * C110070) / q - (C58961 * p) / q;
    const double C109961 = C58177 / q;
    const double C109851 = C58177 * p;
    const double C109950 = C59572 / q;
    const double C18061 = C109868 - (C59297 * C110071) / q - (C59572 * p) / q;
    const double C55124 = C62352 / q - (C62306 * C110070) / q - C110113;
    const double C56248 = C109804 - (C62398 * C110071) / q - C110113;
    const double C55612 = C62772 / q - (C62726 * C110070) / q - C110117;
    const double C56515 = C109804 - (C62818 * C110072) / q - C110117;
    const double C65933 =
        C111584 - ((C63664 * C109802) / p + (C93028 * C111520) / C110161);
    const double C78200 =
        C111584 - ((C65978 * C109810) / p + (C93347 * C111526) / C110161);
    const double C75800 =
        (5 * C63618) / C105849 - (C65948 * C110071) / q - (C78024 * p) / q;
    const double C16723 =
        C109841 - (C57134 * C110071) / q + C109832 - C109842 / q;
    const double C33707 = -(C57630 * C110070 + C109842) / q;
    const double C11301 = C33764 + yAB * C16933;
    const double C109846 = C37612 * p;
    const double C11361 = C37612 + zAB * C16733;
    const double C14908 = C37612 + yAB * C20887;
    const double C58416 =
        (3 * C57192) / C105849 - (C58432 * C110071) / q - (C75936 * p) / q;
    const double C58521 =
        C109937 - (C58636 * C110071) / q + C110012 - (C76424 * p) / q;
    const double C109926 = C56721 * p;
    const double C37544 = C109960 - (C57784 * C110070) / q - (C58476 * p) / q;
    const double C110091 = C109859 / q;
    const double C55455 = C62337 / q - (C62306 * C110071) / q - C110115;
    const double C58238 = C109941 - (C63679 * C110070) / q - C110115;
    const double C58099 = C64716 / q - (C63953 * C110071) / q - C110124;
    const double C58903 = C109941 - (C64501 * C110072) / q - C110124;
    const double C58667 = C109832 - (C64014 * C110072) / q - C110130;
    const double C60292 = C109867 - (C64731 * C110071) / q - C110130;
    const double C110140 = C110051 / q;
    const double C56753 = C109898 - (C63317 * C110072) / q - C110121;
    const double C60129 = C109946 - (C64731 * C110070) / q - C110121;
    const double C18191 = C109890 - (C59282 * C110070) / q - (C55944 * p) / q;
    const double C66347 =
        C111585 - ((C64807 * C109802) / p + (C93152 * C111520) / C110161);
    const double C78430 =
        C111585 - ((C66362 * C109806) / p + (C93525 * C111524) / C110161);
    const double C89016 =
        (5 * C64761) / C105849 - (C66392 * C110072) / q - (C90457 * p) / q;
    const double C18131 =
        C109884 - (C59340 * C110072) / q + C109867 - C109885 / q;
    const double C51769 = -(C60070 * C110070 + C109885) / q;
    const double C34953 =
        C109940 - (C59601 * C110072) / q + C109946 - C109954 / q;
    const double C51788 = -(C60070 * C110071 + C109954) / q;
    const double C56008 = C62757 / q - (C62726 * C110072) / q - C110118;
    const double C60367 = C109962 - (C64822 * C110070) / q - C110118;
    const double C58161 = C63984 / q - (C63953 * C110072) / q - C110126;
    const double C60764 = C109962 - (C65267 * C110071) / q - C110126;
    const double C110137 = C110044 / q;
    const double C74897 = -(C62787 * C110071 + C110044) / q;
    const double C110134 = C110040 / q;
    const double C74692 = -(C62367 * C110072 + C110040) / q;
    const double C56070 = (3 * C55142) / C105849 - (C56085 * C110070) / q +
                          C109985 - (C61851 * p) / q;
    const double C56308 = (3 * C55630) / C105849 - (C56323 * C110070) / q +
                          C109989 - (C61868 * p) / q;
    const double C110132 = C110037 / q;
    const double C110136 = C110042 / q;
    const double C15279 = (3 * C15311) / C105849 - (C15300 * C110070) / q +
                          C54430 / q - (C54365 * p) / q;
    const double C110133 = C110038 / q;
    const double C110141 = C110054 / q;
    const double C76468 = -(C64369 * C110072 + C110054) / q;
    const double C110144 = C110052 / q;
    const double C64029 = -(C66128 * C110070 + C110052) / q;
    const double C58284 = (3 * C57134) / C105849 - (C58401 * C110071) / q +
                          C110009 - (C75755 * p) / q;
    const double C58757 = (3 * C58115) / C105849 - (C58872 * C110071) / q +
                          C110014 - (C75816 * p) / q;
    const double C57645 =
        (2 * C57691) / q - (C57675 * C110071) / q - (C87864 * p) / q;
    const double C19405 = -(C19367 * C110072 + C109909) / q;
    const double C20090 = C109928 - (C20071 * C110071) / q - C109909 / q;
    const double C20868 = -(C20887 * C110070 + C109909) / q;
    const double C93823 =
        C111591 - ((C93152 * C109802) / p + (C94925 * C111520) / C110161);
    const double C93988 =
        C111591 - ((C93525 * C109806) / p + (C98830 * C111524) / C110161);
    const double C110025 = C77328 * p;
    const double C110138 = C110045 / q;
    const double C110143 = C110059 / q;
    const double C74985 = -(C65210 * C110071 + C110059) / q;
    const double C110148 = C110053 / q;
    const double C64046 = -(C66158 * C110070 + C110053) / q;
    const double C110147 = C110064 / q;
    const double C60470 = (3 * C59340) / C105849 - (C60559 * C110072) / q +
                          C110027 - (C77095 * p) / q;
    const double C110023 = C89000 * p;
    const double C19481 = C109861 - (C19443 * C110072) / q - C109917 / q;
    const double C20166 = -(C20147 * C110071 + C109917) / q;
    const double C20944 = -(C20963 * C110070 + C109917) / q;
    const double C19320 = -(C19282 * C110072 + C109902) / q;
    const double C20005 = -(C19986 * C110071 + C109902) / q;
    const double C20783 =
        C20811 / C105849 - (C20802 * C110070) / q + C109933 - C109902 / q;
    const double C9838 = C15552 + xAB * C15563;
    const double C15395 = C109805 - (C54939 * C110071) / q - C110074;
    const double C19500 = C75534 / C105849 - (C60995 * C110070) / q - C110074;
    const double C110078 = C109821 / q;
    const double C109863 = C17981 / C105849;
    const double C110087 = C109851 / q;
    const double C109873 = C18061 / C105849;
    const double C16643 =
        C56828 / C105849 - (C56812 * C110070) / q + C109832 - (C55124 * p) / q;
    const double C109814 = C56248 * p;
    const double C17971 =
        C58977 / C105849 - (C58961 * C110070) / q + C109867 - (C55612 * p) / q;
    const double C109820 = C56515 * p;
    const double C110048 = C65933 * p;
    const double C110063 = C78200 * p;
    const double C57377 =
        (2 * C57630) / q - (C57614 * C110071) / q + C109996 - (C75800 * p) / q;
    const double C109840 = C16723 * p;
    const double C10710 = C16723 + xAB * C16733;
    const double C13100 = C16723 + yAB * C19367;
    const double C11271 = C33707 + yAB * C16873;
    const double C16773 = -(C16733 * C110072 + C109846) / q;
    const double C20906 =
        C109925 - (C20887 * C110071) / q + C109938 - C109846 / q;
    const double C33726 = -(C33764 * C110070 + C58416 * p) / q;
    const double C109845 = C58521 * p;
    const double C110102 = C109926 / q;
    const double C109837 = C37544 * p;
    const double C11321 = C37544 + zAB * C16653;
    const double C14872 = C37544 + yAB * C20811;
    const double C16903 = C109858 - (C57192 * C110070) / q - C110091;
    const double C19548 = C109919 - (C55535 * C110071) / q - C110091;
    const double C109856 = C55455 * p;
    const double C33498 = C109941 - (C57302 * C110070) / q - (C58238 * p) / q;
    const double C34881 =
        C109890 - (C59572 * C110071) / q + C109946 - (C58099 * p) / q;
    const double C109944 = C58903 * p;
    const double C109850 = C58667 * p;
    const double C109876 = C60292 * p;
    const double C63968 = C110001 - (C63999 * C110070) / q - C110140;
    const double C74969 = C109978 - (C65122 * C110071) / q - C110140;
    const double C76512 = C109970 - (C64458 * C110072) / q - C110140;
    const double C109911 = C56753 * p;
    const double C34809 = C109946 - (C59414 * C110070) / q - (C60129 * p) / q;
    const double C11747 = C18191 + xAB * C18201;
    const double C14219 = C18191 + zAB * C20204;
    const double C110056 = C66347 * p;
    const double C110066 = C78430 * p;
    const double C59874 =
        (2 * C60070) / q - (C60054 * C110072) / q + C110020 - (C89016 * p) / q;
    const double C109883 = C18131 * p;
    const double C11714 = C18131 + xAB * C18141;
    const double C14192 = C18131 + zAB * C20147;
    const double C12411 = C51769 + zAB * C18241;
    const double C109887 = C34953 * p;
    const double C12201 = C34953 + yAB * C18141;
    const double C15088 = C34953 + zAB * C20963;
    const double C12421 = C51788 + zAB * C18261;
    const double C109892 = C56008 * p;
    const double C51522 = C109962 - (C59679 * C110070) / q - (C60367 * p) / q;
    const double C109959 = C58161 * p;
    const double C51598 = C109962 - (C60008 * C110071) / q - (C60764 * p) / q;
    const double C62833 = C110043 - (C65122 * C110070) / q - C110137;
    const double C75422 = C109985 - (C63347 * C110072) / q - C110137;
    const double C62430 = C110039 - (C64458 * C110070) / q - C110134;
    const double C75235 = C109989 - (C63347 * C110071) / q - C110134;
    const double C56263 = C109987 - (C56279 * C110071) / q - (C74692 * p) / q;
    const double C109808 = C56070 * p;
    const double C109812 = C56308 * p;
    const double C62321 = C110131 - (C62367 * C110070) / q - C110132;
    const double C74041 = C109963 - (C63171 * C110071) / q - C110132;
    const double C62741 = C110135 - (C62787 * C110070) / q - C110136;
    const double C75337 = C109963 - (C63260 * C110072) / q - C110136;
    const double C9695 = C15279 + xAB * C15290;
    const double C62413 = C63679 / q - (C64369 * C110070) / q - C110133;
    const double C74483 = C62398 / q - (C62367 * C110071) / q - C110133;
    const double C64384 = C110014 - (C64516 * C110070) / q - C110141;
    const double C74544 = C110060 - (C64458 * C110071) / q - C110141;
    const double C55488 = C109915 - (C55518 * C110071) / q - (C76468 * p) / q;
    const double C76086 = C110043 - (C63999 * C110071) / q - C110144;
    const double C76569 = C110009 - (C64516 * C110072) / q - C110144;
    const double C109844 = C58284 * p;
    const double C109943 = C58757 * p;
    const double C60233 =
        C109939 - (C60323 * C110072) / q + C110024 - C110025 / q;
    const double C60543 = -(C60559 * C110071 + C110025) / q;
    const double C62849 = C64822 / q - (C65210 * C110070) / q - C110138;
    const double C75132 = C62818 / q - (C62787 * C110072) / q - C110138;
    const double C65137 = C110028 - (C65282 * C110070) / q - C110143;
    const double C77214 = C110060 - (C65122 * C110072) / q - C110143;
    const double C76321 = C110039 - (C63999 * C110072) / q - C110148;
    const double C77170 = C110027 - (C65282 * C110071) / q - C110148;
    const double C76202 = C65267 / q - (C66158 * C110071) / q - C110147;
    const double C88233 = C64501 / q - (C66128 * C110072) / q - C110147;
    const double C109889 = C60470 * p;
    const double C60024 = -(C60054 * C110071 + C110023) / q;
    const double C60707 =
        (3 * C59601) / C105849 - (C60795 * C110072) / q + C110028 - C110023 / q;
    const double C10221 = C19320 + yAB * C15353;
    const double C12608 = C19320 + xAB * C19329;
    const double C10371 = C20005 + zAB * C15332;
    const double C13493 = C20005 + xAB * C20014;
    const double C13199 = C20783 + zAB * C19272;
    const double C13951 = C20783 + yAB * C19976;
    const double C14383 = C20783 + xAB * C20792;
    const double C109905 = C15395 / C105849;
    const double C15479 = C109805 - (C55031 * C110072) / q - C110078;
    const double C20242 = C109932 - (C61485 * C110070) / q - C110078;
    const double C16813 = C109833 - (C57207 * C110072) / q - C110087;
    const double C21077 = C109932 - (C61713 * C110071) / q - C110087;
    const double C109831 = C16643 * p;
    const double C10666 = C16643 + xAB * C16653;
    const double C13064 = C16643 + yAB * C19291;
    const double C110073 = C109814 / q;
    const double C109866 = C17971 * p;
    const double C11626 = C17971 + xAB * C17981;
    const double C14120 = C17971 + zAB * C19995;
    const double C110077 = C109820 / q;
    const double C110139 = C110048 / q;
    const double C110146 = C110063 / q;
    const double C33593 = (3 * C16733) / C105849 - (C33574 * C110071) / q +
                          C57630 / q - (C57377 * p) / q;
    const double C16713 = -(C16733 * C110070 + C109840) / q;
    const double C19386 =
        C109907 - (C19367 * C110071) / q + C109841 - C109840 / q;
    const double C11281 = C33726 + yAB * C16893;
    const double C16763 = -(C16723 * C110072 + C109845) / q;
    const double C20897 =
        C20071 / C105849 - (C20878 * C110071) / q + C109937 - C109845 / q;
    const double C37595 = -(C37612 * C110070 + C109845) / q;
    const double C20062 = C109923 - (C55961 * C110071) / q - C110102;
    const double C21011 = C61684 / C105849 - (C61225 * C110070) / q - C110102;
    const double C16693 = -(C16653 * C110072 + C109837) / q;
    const double C20830 = C109921 - (C20811 * C110071) / q - C109837 / q;
    const double C10809 = C16903 + xAB * C16913;
    const double C13181 = C16903 + yAB * C19538;
    const double C10341 = C19548 + yAB * C15605;
    const double C12740 = C19548 + xAB * C19557;
    const double C19519 =
        C106826 / C105849 - (C19557 * C110070) / q - (C19548 * p) / q;
    const double C110090 = C109856 / q;
    const double C11161 = C33498 + yAB * C16653;
    const double C16673 =
        C106132 / q - (C16653 * C110071) / q - (C33498 * p) / q;
    const double C109878 = C34881 * p;
    const double C12161 = C34881 + yAB * C18061;
    const double C15052 = C34881 + zAB * C20887;
    const double C110106 = C109944 / q;
    const double C110086 = C109850 / q;
    const double C37765 = -(C58177 * C110070 + C109850) / q;
    const double C18051 = C109867 - (C59282 * C110071) / q - C109876 / q;
    const double C35007 = -(C59572 * C110070 + C109876) / q;
    const double C57735 = C110001 - (C57767 * C110070) / q - (C63968 * p) / q;
    const double C55706 = C109978 - (C55944 * C110071) / q - (C74969 * p) / q;
    const double C109973 = C76512 * p;
    const double C110100 = C109911 / q;
    const double C20252 = -(C56025 * C110071 + C109911) / q;
    const double C109870 = C34809 * p;
    const double C12121 = C34809 + yAB * C17981;
    const double C15016 = C34809 + zAB * C20811;
    const double C110142 = C110056 / q;
    const double C110149 = C110066 / q;
    const double C51712 = (3 * C18141) / C105849 - (C51674 * C110072) / q +
                          C60070 / q - (C59874 * p) / q;
    const double C18121 = -(C18141 * C110070 + C109883) / q;
    const double C20185 =
        C109914 - (C20147 * C110072) / q + C109884 - C109883 / q;
    const double C18161 = -(C18141 * C110071 + C109887) / q;
    const double C21001 =
        C109910 - (C20963 * C110072) / q + C109940 - C109887 / q;
    const double C110099 = C109892 / q;
    const double C12281 = C51522 + zAB * C17981;
    const double C18021 =
        C106407 / q - (C17981 * C110072) / q - (C51522 * p) / q;
    const double C110112 = C109959 / q;
    const double C12321 = C51598 + zAB * C18061;
    const double C18101 =
        C106472 / q - (C18061 * C110072) / q - (C51598 * p) / q;
    const double C60114 =
        C59414 / C105849 - (C60129 * C110070) / q + C110024 - (C62833 * p) / q;
    const double C109986 = C75422 * p;
    const double C58461 =
        C57784 / C105849 - (C58476 * C110070) / q + C110012 - (C62430 * p) / q;
    const double C56368 = C109989 - (C56483 * C110071) / q - (C75235 * p) / q;
    const double C19510 =
        C19557 / q - (C19548 * C110070) / q - (C56263 * p) / q;
    const double C15321 = -(C15300 * C110071 + C109808) / q;
    const double C19263 =
        C109834 - (C19282 * C110070) / q + C55142 / q - C109808 / q;
    const double C15342 = -(C15300 * C110072 + C109812) / q;
    const double C19967 =
        C109871 - (C19986 * C110070) / q + C55630 / q - C109812 / q;
    const double C55092 =
        C109829 - (C55124 * C110070) / q + C109970 - (C62321 * p) / q;
    const double C54550 = C109963 - (C54908 * C110071) / q - (C74041 * p) / q;
    const double C55580 =
        C109864 - (C55612 * C110070) / q + C109978 - (C62741 * p) / q;
    const double C54729 = C109963 - (C55000 * C110072) / q - (C75337 * p) / q;
    const double C58223 =
        C57302 / C105849 - (C58238 * C110070) / q + C110009 - (C62413 * p) / q;
    const double C56131 =
        C54924 / C105849 - (C56248 * C110071) / q + C109985 - (C74483 * p) / q;
    const double C58696 = C110014 - (C58712 * C110070) / q - (C64384 * p) / q;
    const double C56606 =
        C55961 / C105849 - (C56721 * C110071) / q + C109990 - (C74544 * p) / q;
    const double C16883 =
        C16933 / C105849 - (C16923 * C110070) / q - (C55488 * p) / q;
    const double C60175 =
        C59282 / C105849 - (C60292 * C110071) / q + C110024 - (C76086 * p) / q;
    const double C110010 = C76569 * p;
    const double C16743 =
        C109843 - (C16723 * C110071) / q + C57134 / q - C109844 / q;
    const double C33555 = -(C33574 * C110070 + C109844) / q;
    const double C33612 = -(C33574 * C110072 + C109943) / q;
    const double C37629 =
        C109952 - (C37612 * C110071) / q + C58115 / q - C109943 / q;
    const double C109886 = C60233 * p;
    const double C51750 = -(C51788 * C110070 + C60543 * p) / q;
    const double C60352 =
        C59679 / C105849 - (C60367 * C110070) / q + C110027 - (C62849 * p) / q;
    const double C56426 =
        C109987 - (C56515 * C110072) / q + C109989 - (C75132 * p) / q;
    const double C60588 = C110028 - (C60604 * C110070) / q - (C65137 * p) / q;
    const double C109982 = C77214 * p;
    const double C110013 = C76321 * p;
    const double C60412 = C110027 - (C60527 * C110071) / q - (C77170 * p) / q;
    const double C60649 =
        C60008 / C105849 - (C60764 * C110071) / q + C110028 - (C76202 * p) / q;
    const double C110006 = C88233 * p;
    const double C18171 =
        C109888 - (C18131 * C110072) / q + C59340 / q - C109889 / q;
    const double C51655 = -(C51674 * C110070 + C109889) / q;
    const double C109958 = C60707 * p;
    const double C109913 = C15479 / C105849;
    const double C109847 = C16813 / C105849;
    const double C110082 = C109831 / q;
    const double C15384 = C109804 - (C54924 * C110071) / q - C110073;
    const double C19491 = C109841 - (C55472 * C110070) / q - C110073;
    const double C110093 = C109866 / q;
    const double C15468 = C109804 - (C55016 * C110072) / q - C110077;
    const double C20233 = C109884 - (C56025 * C110070) / q - C110077;
    const double C63633 = C109996 - (C63664 * C110070) / q - C110139;
    const double C74528 = C110131 - (C64369 * C110071) / q - C110139;
    const double C76186 = C110145 - (C66128 * C110071) / q - C110146;
    const double C87880 = C109996 - (C65978 * C110072) / q - C110146;
    const double C11211 = C33593 + yAB * C16753;
    const double C10732 = C16763 + xAB * C16773;
    const double C13118 = C16763 + yAB * C19405;
    const double C13253 = C20897 + zAB * C19386;
    const double C14011 = C20897 + yAB * C20090;
    const double C14449 = C20897 + xAB * C20906;
    const double C11351 = C37595 + zAB * C16713;
    const double C14899 = C37595 + yAB * C20868;
    const double C109819 = C20062 * p;
    const double C10401 = C20062 + zAB * C15395;
    const double C13526 = C20062 + xAB * C20071;
    const double C13307 = C21011 + zAB * C19500;
    const double C14071 = C21011 + yAB * C20204;
    const double C14515 = C21011 + xAB * C21020;
    const double C16863 = C57149 / C105849 - (C57134 * C110070) / q - C110090;
    const double C19358 =
        C54939 / C105849 - (C55472 * C110071) / q + C109898 - C110090;
    const double C110097 = C109878 / q;
    const double C33650 = C109941 - (C57691 * C110072) / q - C110106;
    const double C37782 = C109940 - (C58177 * C110071) / q - C110106;
    const double C16803 = C109832 - (C57192 * C110072) / q - C110086;
    const double C21068 = C61485 / C105849 - (C61254 * C110071) / q - C110086;
    const double C11451 = C37765 + zAB * C16913;
    const double C14989 = C37765 + yAB * C21058;
    const double C109875 = C18051 * p;
    const double C11670 = C18051 + xAB * C18061;
    const double C14156 = C18051 + zAB * C20071;
    const double C12231 = C35007 + yAB * C18201;
    const double C15115 = C35007 + zAB * C21020;
    const double C109947 = C57735 * p;
    const double C109874 = C55706 * p;
    const double C110114 = C109973 / q;
    const double C19434 = C109898 - (C55535 * C110072) / q - C110100;
    const double C21049 = C61713 / C105849 - (C61254 * C110070) / q - C110100;
    const double C10501 = C20252 + zAB * C15605;
    const double C13636 = C20252 + xAB * C20261;
    const double C20223 =
        C107083 / C105849 - (C20261 * C110070) / q - (C20252 * p) / q;
    const double C18001 = -(C17981 * C110071 + C109870) / q;
    const double C20849 = C109896 - (C20811 * C110072) / q - C109870 / q;
    const double C64776 = C110020 - (C64807 * C110070) / q - C110142;
    const double C77271 = C110135 - (C65210 * C110072) / q - C110142;
    const double C76959 = C110020 - (C66362 * C110071) / q - C110149;
    const double C88249 = C110145 - (C66158 * C110072) / q - C110149;
    const double C12381 = C51712 + zAB * C18181;
    const double C18231 = C109891 - (C59340 * C110070) / q - C110099;
    const double C20138 = C109919 - (C56025 * C110072) / q + C109923 - C110099;
    const double C35061 = C109891 - (C59601 * C110071) / q - C110112;
    const double C37680 = C109858 - (C58177 * C110072) / q + C109960 - C110112;
    const double C109869 = C60114 * p;
    const double C56189 = C109985 - (C56279 * C110072) / q - C109986 / q;
    const double C56499 = -(C56515 * C110071 + C109986) / q;
    const double C109836 = C58461 * p;
    const double C109818 = C56368 * p;
    const double C10321 = C19510 + yAB * C15563;
    const double C12718 = C19510 + xAB * C19519;
    const double C9717 = C15321 + xAB * C15332;
    const double C10191 = C19263 + yAB * C15290;
    const double C12575 = C19263 + xAB * C19272;
    const double C9728 = C15342 + xAB * C15353;
    const double C10351 = C19967 + zAB * C15290;
    const double C13471 = C19967 + xAB * C19976;
    const double C109830 = C55092 * p;
    const double C109865 = C55580 * p;
    const double C109835 = C58223 * p;
    const double C109816 = C56131 * p;
    const double C109942 = C58696 * p;
    const double C109908 = C56606 * p;
    const double C10798 = C16883 + xAB * C16893;
    const double C13172 = C16883 + yAB * C19519;
    const double C109877 = C60175 * p;
    const double C110128 = C110010 / q;
    const double C10721 = C16743 + xAB * C16753;
    const double C13109 = C16743 + yAB * C19386;
    const double C11191 = C33555 + yAB * C16713;
    const double C11221 = C33612 + yAB * C16773;
    const double C11371 = C37629 + zAB * C16753;
    const double C14917 = C37629 + yAB * C20906;
    const double C18151 = -(C18131 * C110071 + C109886) / q;
    const double C20992 =
        C19443 / C105849 - (C20954 * C110072) / q + C109939 - C109886 / q;
    const double C34935 = -(C34953 * C110070 + C109886) / q;
    const double C12401 = C51750 + zAB * C18221;
    const double C109872 = C60352 * p;
    const double C109824 = C56426 * p;
    const double C109949 = C60588 * p;
    const double C55978 = -(C56008 * C110071 + C109982) / q;
    const double C56664 =
        C55535 / C105849 - (C56753 * C110072) / q + C109990 - C109982 / q;
    const double C110129 = C110013 / q;
    const double C109880 = C60412 * p;
    const double C109953 = C60649 * p;
    const double C110125 = C110006 / q;
    const double C11736 = C18171 + xAB * C18181;
    const double C14210 = C18171 + zAB * C20185;
    const double C12351 = C51655 + zAB * C18121;
    const double C34989 =
        C109956 - (C34953 * C110072) / q + C109957 - C109958 / q;
    const double C51693 = -(C51674 * C110071 + C109958) / q;
    const double C16633 = C56828 / q - (C16653 * C110070) / q - C110082;
    const double C19310 = C109901 - (C19291 * C110071) / q - C110082;
    const double C9750 = C15384 + xAB * C15395;
    const double C15363 =
        (3 * C15395) / C105849 - (C15384 * C110070) / q - (C54550 * p) / q;
    const double C15374 =
        C105905 / q - (C15395 * C110070) / q - (C15384 * p) / q;
    const double C10311 = C19491 + yAB * C15542;
    const double C12707 = C19491 + xAB * C19500;
    const double C17961 = C58977 / q - (C17981 * C110070) / q - C110093;
    const double C20033 = C109901 - (C19995 * C110072) / q - C110093;
    const double C9794 = C15468 + xAB * C15479;
    const double C15447 =
        (3 * C15479) / C105849 - (C15468 * C110070) / q - (C54729 * p) / q;
    const double C15458 =
        C105970 / q - (C15479 * C110070) / q - (C15468 * p) / q;
    const double C10491 = C20233 + zAB * C15584;
    const double C13625 = C20233 + xAB * C20242;
    const double C57253 = C109996 - (C57285 * C110070) / q - (C63633 * p) / q;
    const double C55218 =
        C109906 - (C55455 * C110071) / q + C109970 - (C74528 * p) / q;
    const double C57859 =
        C109950 - (C58099 * C110071) / q + C110001 - (C76186 * p) / q;
    const double C109998 = C87880 * p;
    const double C15437 = -(C15395 * C110072 + C109819) / q;
    const double C20052 = C109925 - (C20071 * C110070) / q - C109819 / q;
    const double C10787 = C16863 + xAB * C16873;
    const double C13163 = C16863 + yAB * C19500;
    const double C109817 = C19358 * p;
    const double C10241 = C19358 + yAB * C15395;
    const double C12630 = C19358 + xAB * C19367;
    const double C18081 = C59297 / q - (C18061 * C110071) / q - C110097;
    const double C20925 = C109904 - (C20887 * C110072) / q - C110097;
    const double C11241 = C33650 + yAB * C16813;
    const double C16833 =
        C106262 / q - (C16813 * C110071) / q - (C33650 * p) / q;
    const double C11461 = C37782 + zAB * C16933;
    const double C14998 = C37782 + yAB * C21077;
    const double C109849 = C16803 * p;
    const double C10754 = C16803 + xAB * C16813;
    const double C13136 = C16803 + yAB * C19443;
    const double C13334 = C21068 + zAB * C19557;
    const double C14101 = C21068 + yAB * C20261;
    const double C14548 = C21068 + xAB * C21077;
    const double C21039 = -(C21077 * C110070 + C21068 * p) / q;
    const double C18041 = -(C18061 * C110070 + C109875) / q;
    const double C20109 = C109907 - (C20071 * C110072) / q - C109875 / q;
    const double C110108 = C109947 / q;
    const double C110095 = C109874 / q;
    const double C55336 = C109970 - (C55518 * C110072) / q - C110114;
    const double C56737 = C56025 / C105849 - (C56753 * C110071) / q - C110114;
    const double C109823 = C19434 * p;
    const double C10281 = C19434 + yAB * C15479;
    const double C12674 = C19434 + xAB * C19443;
    const double C13325 = C21049 + zAB * C19538;
    const double C14091 = C21049 + yAB * C20242;
    const double C14537 = C21049 + xAB * C21058;
    const double C59630 = C110020 - (C59662 * C110070) / q - (C64776 * p) / q;
    const double C55826 =
        C109930 - (C56008 * C110072) / q + C109978 - (C77271 * p) / q;
    const double C59754 = C110020 - (C59992 * C110071) / q - (C76959 * p) / q;
    const double C110003 = C88249 * p;
    const double C11769 = C18231 + xAB * C18241;
    const double C14237 = C18231 + zAB * C20242;
    const double C109825 = C20138 * p;
    const double C10441 = C20138 + zAB * C15479;
    const double C13570 = C20138 + xAB * C20147;
    const double C12261 = C35061 + yAB * C18261;
    const double C15142 = C35061 + zAB * C21077;
    const double C109855 = C37680 * p;
    const double C11401 = C37680 + zAB * C16813;
    const double C14944 = C37680 + yAB * C20963;
    const double C110105 = C109869 / q;
    const double C17991 = -(C17971 * C110071 + C109869) / q;
    const double C109822 = C56189 * p;
    const double C20214 =
        C20261 / q - (C20252 * C110070) / q - (C56499 * p) / q;
    const double C110104 = C109836 / q;
    const double C16683 = -(C16643 * C110072 + C109836) / q;
    const double C15426 = -(C15384 * C110072 + C109818) / q;
    const double C20043 = C109879 - (C20062 * C110070) / q - C109818 / q;
    const double C110081 = C109830 / q;
    const double C110092 = C109865 / q;
    const double C110083 = C109835 / q;
    const double C110075 = C109816 / q;
    const double C33536 = -(C33498 * C110072 + C109942) / q;
    const double C37561 = C109948 - (C37544 * C110071) / q - C109942 / q;
    const double C110103 = C109908 / q;
    const double C19396 = -(C19358 * C110072 + C109908) / q;
    const double C110096 = C109877 / q;
    const double C34863 = -(C34881 * C110070 + C109877) / q;
    const double C58342 = C110009 - (C58432 * C110072) / q - C110128;
    const double C58651 = C109939 - (C58667 * C110071) / q - C110128;
    const double C11725 = C18151 + xAB * C18161;
    const double C14201 = C18151 + zAB * C20166;
    const double C13298 = C20992 + zAB * C19481;
    const double C14061 = C20992 + yAB * C20185;
    const double C14504 = C20992 + xAB * C21001;
    const double C12191 = C34935 + yAB * C18121;
    const double C15079 = C34935 + zAB * C20944;
    const double C110094 = C109872 / q;
    const double C110079 = C109824 / q;
    const double C34845 = C109948 - (C34809 * C110072) / q - C109949 / q;
    const double C51541 = -(C51522 * C110071 + C109949) / q;
    const double C18211 =
        C18261 / C105849 - (C18251 * C110070) / q - (C55978 * p) / q;
    const double C109916 = C56664 * p;
    const double C58579 =
        C57192 / C105849 - (C58667 * C110072) / q + C110012 - C110129;
    const double C60307 = C59340 / C105849 - (C60323 * C110071) / q - C110129;
    const double C18091 = C109879 - (C18051 * C110072) / q - C109880 / q;
    const double C51579 = -(C51598 * C110070 + C109880) / q;
    const double C110110 = C109953 / q;
    const double C58131 = C109957 - (C58161 * C110071) / q - C110125;
    const double C58815 =
        C57691 / C105849 - (C58903 * C110072) / q + C110014 - C110125;
    const double C12221 = C34989 + yAB * C18181;
    const double C15106 = C34989 + zAB * C21001;
    const double C12371 = C51693 + zAB * C18161;
    const double C9739 = C15363 + xAB * C15374;
    const double C9783 = C15447 + xAB * C15458;
    const double C33517 =
        (3 * C16653) / C105849 - (C33498 * C110071) / q - (C57253 * p) / q;
    const double C109839 = C55218 * p;
    const double C109951 = C57859 * p;
    const double C110122 = C109998 / q;
    const double C110076 = C109817 / q;
    const double C16793 = -(C16813 * C110070 + C109849) / q;
    const double C19462 = C109914 - (C19443 * C110071) / q - C109849 / q;
    const double C34827 = C109863 - (C34809 * C110071) / q - C110108;
    const double C37578 = C109828 - (C37544 * C110072) / q - C110108;
    const double C18031 = C109873 - (C18051 * C110070) / q - C110095;
    const double C20100 = C109905 - (C20062 * C110072) / q - C110095;
    const double C109848 = C55336 * p;
    const double C21030 =
        C21077 / C105849 - (C21068 * C110070) / q - (C56737 * p) / q;
    const double C15500 = -(C15479 * C110071 + C109823) / q;
    const double C19424 = C109910 - (C19443 * C110070) / q - C109823 / q;
    const double C51560 =
        (3 * C17981) / C105849 - (C51522 * C110072) / q - (C59630 * p) / q;
    const double C109882 = C55826 * p;
    const double C51636 =
        (3 * C18061) / C105849 - (C51598 * C110072) / q - (C59754 * p) / q;
    const double C110123 = C110003 / q;
    const double C110080 = C109825 / q;
    const double C110089 = C109855 / q;
    const double C20840 = C19291 / C105849 - (C20802 * C110072) / q - C110105;
    const double C34791 = C59414 / q - (C34809 * C110070) / q - C110105;
    const double C11637 = C17991 + xAB * C18001;
    const double C14129 = C17991 + zAB * C20014;
    const double C15489 = -(C15468 * C110071 + C109822) / q;
    const double C19415 = C109852 - (C19434 * C110070) / q - C109822 / q;
    const double C10481 = C20214 + zAB * C15563;
    const double C13614 = C20214 + xAB * C20223;
    const double C20821 = C19995 / C105849 - (C20802 * C110071) / q - C110104;
    const double C37527 = C57784 / q - (C37544 * C110070) / q - C110104;
    const double C10688 = C16683 + xAB * C16693;
    const double C13082 = C16683 + yAB * C19329;
    const double C9772 = C15426 + xAB * C15437;
    const double C10391 = C20043 + zAB * C15374;
    const double C13515 = C20043 + xAB * C20052;
    const double C16623 = C109828 - (C16643 * C110070) / q + C109829 - C110081;
    const double C19301 = C109900 - (C19282 * C110071) / q - C110081;
    const double C17951 = C109863 - (C17971 * C110070) / q + C109864 - C110092;
    const double C20024 = C109900 - (C19986 * C110072) / q - C110092;
    const double C16663 = C109834 - (C16643 * C110071) / q - C110083;
    const double C33479 = C57302 / q - (C33498 * C110070) / q - C110083;
    const double C15405 = C54924 / q - (C15384 * C110071) / q - C110075;
    const double C19339 = C109843 - (C19358 * C110070) / q - C110075;
    const double C11181 = C33536 + yAB * C16693;
    const double C11331 = C37561 + zAB * C16673;
    const double C14881 = C37561 + yAB * C20830;
    const double C20081 = C55961 / q - (C20062 * C110071) / q - C110103;
    const double C20859 = C20887 / C105849 - (C20878 * C110070) / q - C110103;
    const double C10261 = C19396 + yAB * C15437;
    const double C12652 = C19396 + xAB * C19405;
    const double C18071 = C59282 / q - (C18051 * C110071) / q - C110096;
    const double C20916 = C19367 / C105849 - (C20878 * C110072) / q - C110096;
    const double C12151 = C34863 + yAB * C18041;
    const double C15043 = C34863 + zAB * C20868;
    const double C109853 = C58342 * p;
    const double C37748 = -(C37782 * C110070 + C58651 * p) / q;
    const double C18011 = C109871 - (C17971 * C110072) / q - C110094;
    const double C51503 = C59679 / q - (C51522 * C110070) / q - C110094;
    const double C15510 = C55016 / q - (C15468 * C110072) / q - C110079;
    const double C20119 = C109888 - (C20138 * C110070) / q - C110079;
    const double C12141 = C34845 + yAB * C18021;
    const double C15034 = C34845 + zAB * C20849;
    const double C12291 = C51541 + zAB * C18001;
    const double C11758 = C18211 + xAB * C18221;
    const double C14228 = C18211 + zAB * C20223;
    const double C110101 = C109916 / q;
    const double C20157 = -(C20138 * C110071 + C109916) / q;
    const double C109854 = C58579 * p;
    const double C35025 = -(C35061 * C110070 + C60307 * p) / q;
    const double C11692 = C18091 + xAB * C18101;
    const double C14174 = C18091 + zAB * C20109;
    const double C12311 = C51579 + zAB * C18041;
    const double C34917 = C109952 - (C34881 * C110072) / q - C110110;
    const double C51617 = C60008 / q - (C51598 * C110071) / q - C110110;
    const double C109945 = C58815 * p;
    const double C11171 = C33517 + yAB * C16673;
    const double C110084 = C109839 / q;
    const double C110109 = C109951 / q;
    const double C57495 = C109996 - (C57675 * C110072) / q - C110122;
    const double C58887 =
        (3 * C58177) / C105849 - (C58903 * C110071) / q - C110122;
    const double C15416 = C54939 / q - (C15395 * C110071) / q - C110076;
    const double C19348 = C109904 - (C19367 * C110070) / q - C110076;
    const double C12131 = C34827 + yAB * C18001;
    const double C15025 = C34827 + zAB * C20830;
    const double C11341 = C37578 + zAB * C16693;
    const double C14890 = C37578 + yAB * C20849;
    const double C11659 = C18031 + xAB * C18041;
    const double C14147 = C18031 + zAB * C20052;
    const double C10421 = C20100 + zAB * C15437;
    const double C13548 = C20100 + xAB * C20109;
    const double C110085 = C109848 / q;
    const double C13316 = C21030 + zAB * C19519;
    const double C14081 = C21030 + yAB * C20223;
    const double C14526 = C21030 + xAB * C21039;
    const double C12301 = C51560 + zAB * C18021;
    const double C110098 = C109882 / q;
    const double C12341 = C51636 + zAB * C18101;
    const double C57981 = C109961 - (C58161 * C110072) / q + C110001 - C110123;
    const double C60779 = C60070 / C105849 - (C60795 * C110071) / q - C110123;
    const double C15521 = C55031 / q - (C15479 * C110072) / q - C110080;
    const double C20128 = C109929 - (C20147 * C110070) / q - C110080;
    const double C16853 = C57207 / q - (C16813 * C110072) / q - C110089;
    const double C20982 = C109929 - (C20963 * C110071) / q - C110089;
    const double C13226 = C20840 + zAB * C19329;
    const double C13981 = C20840 + yAB * C20033;
    const double C14416 = C20840 + xAB * C20849;
    const double C12111 = C34791 + yAB * C17961;
    const double C15007 = C34791 + zAB * C20792;
    const double C9805 = C15489 + xAB * C15500;
    const double C10271 = C19415 + yAB * C15458;
    const double C12663 = C19415 + xAB * C19424;
    const double C13217 = C20821 + zAB * C19310;
    const double C13971 = C20821 + yAB * C20014;
    const double C14405 = C20821 + xAB * C20830;
    const double C11311 = C37527 + zAB * C16633;
    const double C14863 = C37527 + yAB * C20792;
    const double C10655 = C16623 + xAB * C16633;
    const double C13055 = C16623 + yAB * C19272;
    const double C10211 = C19301 + yAB * C15332;
    const double C12597 = C19301 + xAB * C19310;
    const double C11615 = C17951 + xAB * C17961;
    const double C14111 = C17951 + zAB * C19976;
    const double C10381 = C20024 + zAB * C15353;
    const double C13504 = C20024 + xAB * C20033;
    const double C10677 = C16663 + xAB * C16673;
    const double C13073 = C16663 + yAB * C19310;
    const double C11151 = C33479 + yAB * C16633;
    const double C10231 = C19339 + yAB * C15374;
    const double C13537 = C20081 + xAB * C20090;
    const double C13991 = C20859 + yAB * C20052;
    const double C14427 = C20859 + xAB * C20868;
    const double C11681 = C18071 + xAB * C18081;
    const double C14165 = C18071 + zAB * C20090;
    const double C13262 = C20916 + zAB * C19405;
    const double C14021 = C20916 + yAB * C20109;
    const double C14460 = C20916 + xAB * C20925;
    const double C16823 = C109852 - (C16803 * C110071) / q - C109853 / q;
    const double C33631 = -(C33650 * C110070 + C109853) / q;
    const double C11441 = C37748 + zAB * C16893;
    const double C14980 = C37748 + yAB * C21039;
    const double C11648 = C18011 + xAB * C18021;
    const double C14138 = C18011 + zAB * C20033;
    const double C12271 = C51503 + zAB * C17961;
    const double C10431 = C20119 + zAB * C15458;
    const double C19472 = C109915 - (C19434 * C110072) / q - C110101;
    const double C20935 = C20963 / C105849 - (C20954 * C110070) / q - C110101;
    const double C10451 = C20157 + zAB * C15500;
    const double C13581 = C20157 + xAB * C20166;
    const double C110088 = C109854 / q;
    const double C37663 = -(C37680 * C110070 + C109854) / q;
    const double C12241 = C35025 + yAB * C18221;
    const double C15124 = C35025 + zAB * C21039;
    const double C12181 = C34917 + yAB * C18101;
    const double C15070 = C34917 + zAB * C20925;
    const double C12331 = C51617 + zAB * C18081;
    const double C110107 = C109945 / q;
    const double C16703 = C109838 - (C16723 * C110070) / q - C110084;
    const double C19377 = C109905 - (C19358 * C110071) / q + C109906 - C110084;
    const double C34899 = C109873 - (C34881 * C110071) / q + C109950 - C110109;
    const double C37646 = C109838 - (C37612 * C110072) / q - C110109;
    const double C33669 =
        (3 * C16813) / C105849 - (C33650 * C110071) / q - (C57495 * p) / q;
    const double C9761 = C15405 + xAB * C15416;
    const double C10411 = C20081 + zAB * C15416;
    const double C12619 = C19339 + xAB * C19348;
    const double C13235 = C20859 + zAB * C19348;
    const double C16783 = C109847 - (C16803 * C110070) / q - C110085;
    const double C19453 = C109913 - (C19434 * C110071) / q - C110085;
    const double C18111 = C109881 - (C18131 * C110070) / q - C110098;
    const double C20176 = C109913 - (C20138 * C110072) / q + C109930 - C110098;
    const double C109955 = C57981 * p;
    const double C9816 = C15510 + xAB * C15521;
    const double C13559 = C20119 + xAB * C20128;
    const double C10765 = C16823 + xAB * C16833;
    const double C13145 = C16823 + yAB * C19462;
    const double C11231 = C33631 + yAB * C16793;
    const double C10301 = C19472 + yAB * C15521;
    const double C12696 = C19472 + xAB * C19481;
    const double C13271 = C20935 + zAB * C19424;
    const double C14031 = C20935 + yAB * C20128;
    const double C14471 = C20935 + xAB * C20944;
    const double C16843 = C57192 / q - (C16803 * C110072) / q - C110088;
    const double C20973 = C20147 / C105849 - (C20954 * C110071) / q - C110088;
    const double C11391 = C37663 + zAB * C16793;
    const double C14935 = C37663 + yAB * C20944;
    const double C33688 = C57691 / q - (C33650 * C110072) / q - C110107;
    const double C37697 = C109956 - (C37680 * C110071) / q - C110107;
    const double C10699 = C16703 + xAB * C16713;
    const double C13091 = C16703 + yAB * C19348;
    const double C10251 = C19377 + yAB * C15416;
    const double C12641 = C19377 + xAB * C19386;
    const double C12171 = C34899 + yAB * C18081;
    const double C15061 = C34899 + zAB * C20906;
    const double C11381 = C37646 + zAB * C16773;
    const double C14926 = C37646 + yAB * C20925;
    const double C11251 = C33669 + yAB * C16833;
    const double C10743 = C16783 + xAB * C16793;
    const double C13127 = C16783 + yAB * C19424;
    const double C10291 = C19453 + yAB * C15500;
    const double C12685 = C19453 + xAB * C19462;
    const double C11703 = C18111 + xAB * C18121;
    const double C14183 = C18111 + zAB * C20128;
    const double C10461 = C20176 + zAB * C15521;
    const double C13592 = C20176 + xAB * C20185;
    const double C110111 = C109955 / q;
    const double C10776 = C16843 + xAB * C16853;
    const double C13154 = C16843 + yAB * C19481;
    const double C13289 = C20973 + zAB * C19462;
    const double C14051 = C20973 + yAB * C20166;
    const double C14493 = C20973 + xAB * C20982;
    const double C11261 = C33688 + yAB * C16853;
    const double C11411 = C37697 + zAB * C16833;
    const double C14953 = C37697 + yAB * C20982;
    const double C34971 = C109881 - (C34953 * C110071) / q - C110111;
    const double C37714 = C109847 - (C37680 * C110072) / q + C109961 - C110111;
    const double C12211 = C34971 + yAB * C18161;
    const double C15097 = C34971 + zAB * C20982;
    const double C11421 = C37714 + zAB * C16853;
    const double C14962 = C37714 + yAB * C21001;
    g[0] = C9695;
    g[1] = C9706;
    g[2] = C9717;
    g[3] = C9728;
    g[4] = C9739;
    g[5] = C9750;
    g[6] = C9761;
    g[7] = C9772;
    g[8] = C9783;
    g[9] = C9794;
    g[10] = C9805;
    g[11] = C9816;
    g[12] = C9827;
    g[13] = C9838;
    g[14] = C9849;
    g[15] = C9860;
    g[16] = C10191;
    g[17] = C10201;
    g[18] = C10211;
    g[19] = C10221;
    g[20] = C10231;
    g[21] = C10241;
    g[22] = C10251;
    g[23] = C10261;
    g[24] = C10271;
    g[25] = C10281;
    g[26] = C10291;
    g[27] = C10301;
    g[28] = C10311;
    g[29] = C10321;
    g[30] = C10331;
    g[31] = C10341;
    g[32] = C10351;
    g[33] = C10361;
    g[34] = C10371;
    g[35] = C10381;
    g[36] = C10391;
    g[37] = C10401;
    g[38] = C10411;
    g[39] = C10421;
    g[40] = C10431;
    g[41] = C10441;
    g[42] = C10451;
    g[43] = C10461;
    g[44] = C10471;
    g[45] = C10481;
    g[46] = C10491;
    g[47] = C10501;
    g[48] = C10655;
    g[49] = C10666;
    g[50] = C10677;
    g[51] = C10688;
    g[52] = C10699;
    g[53] = C10710;
    g[54] = C10721;
    g[55] = C10732;
    g[56] = C10743;
    g[57] = C10754;
    g[58] = C10765;
    g[59] = C10776;
    g[60] = C10787;
    g[61] = C10798;
    g[62] = C10809;
    g[63] = C10820;
    g[64] = C11151;
    g[65] = C11161;
    g[66] = C11171;
    g[67] = C11181;
    g[68] = C11191;
    g[69] = C11201;
    g[70] = C11211;
    g[71] = C11221;
    g[72] = C11231;
    g[73] = C11241;
    g[74] = C11251;
    g[75] = C11261;
    g[76] = C11271;
    g[77] = C11281;
    g[78] = C11291;
    g[79] = C11301;
    g[80] = C11311;
    g[81] = C11321;
    g[82] = C11331;
    g[83] = C11341;
    g[84] = C11351;
    g[85] = C11361;
    g[86] = C11371;
    g[87] = C11381;
    g[88] = C11391;
    g[89] = C11401;
    g[90] = C11411;
    g[91] = C11421;
    g[92] = C11431;
    g[93] = C11441;
    g[94] = C11451;
    g[95] = C11461;
    g[96] = C11615;
    g[97] = C11626;
    g[98] = C11637;
    g[99] = C11648;
    g[100] = C11659;
    g[101] = C11670;
    g[102] = C11681;
    g[103] = C11692;
    g[104] = C11703;
    g[105] = C11714;
    g[106] = C11725;
    g[107] = C11736;
    g[108] = C11747;
    g[109] = C11758;
    g[110] = C11769;
    g[111] = C11780;
    g[112] = C12111;
    g[113] = C12121;
    g[114] = C12131;
    g[115] = C12141;
    g[116] = C12151;
    g[117] = C12161;
    g[118] = C12171;
    g[119] = C12181;
    g[120] = C12191;
    g[121] = C12201;
    g[122] = C12211;
    g[123] = C12221;
    g[124] = C12231;
    g[125] = C12241;
    g[126] = C12251;
    g[127] = C12261;
    g[128] = C12271;
    g[129] = C12281;
    g[130] = C12291;
    g[131] = C12301;
    g[132] = C12311;
    g[133] = C12321;
    g[134] = C12331;
    g[135] = C12341;
    g[136] = C12351;
    g[137] = C12361;
    g[138] = C12371;
    g[139] = C12381;
    g[140] = C12391;
    g[141] = C12401;
    g[142] = C12411;
    g[143] = C12421;
    g[144] = C12575;
    g[145] = C12586;
    g[146] = C12597;
    g[147] = C12608;
    g[148] = C12619;
    g[149] = C12630;
    g[150] = C12641;
    g[151] = C12652;
    g[152] = C12663;
    g[153] = C12674;
    g[154] = C12685;
    g[155] = C12696;
    g[156] = C12707;
    g[157] = C12718;
    g[158] = C12729;
    g[159] = C12740;
    g[160] = C13055;
    g[161] = C13064;
    g[162] = C13073;
    g[163] = C13082;
    g[164] = C13091;
    g[165] = C13100;
    g[166] = C13109;
    g[167] = C13118;
    g[168] = C13127;
    g[169] = C13136;
    g[170] = C13145;
    g[171] = C13154;
    g[172] = C13163;
    g[173] = C13172;
    g[174] = C13181;
    g[175] = C13190;
    g[176] = C13199;
    g[177] = C13208;
    g[178] = C13217;
    g[179] = C13226;
    g[180] = C13235;
    g[181] = C13244;
    g[182] = C13253;
    g[183] = C13262;
    g[184] = C13271;
    g[185] = C13280;
    g[186] = C13289;
    g[187] = C13298;
    g[188] = C13307;
    g[189] = C13316;
    g[190] = C13325;
    g[191] = C13334;
    g[192] = C13471;
    g[193] = C13482;
    g[194] = C13493;
    g[195] = C13504;
    g[196] = C13515;
    g[197] = C13526;
    g[198] = C13537;
    g[199] = C13548;
    g[200] = C13559;
    g[201] = C13570;
    g[202] = C13581;
    g[203] = C13592;
    g[204] = C13603;
    g[205] = C13614;
    g[206] = C13625;
    g[207] = C13636;
    g[208] = C13951;
    g[209] = C13961;
    g[210] = C13971;
    g[211] = C13981;
    g[212] = C13991;
    g[213] = C14001;
    g[214] = C14011;
    g[215] = C14021;
    g[216] = C14031;
    g[217] = C14041;
    g[218] = C14051;
    g[219] = C14061;
    g[220] = C14071;
    g[221] = C14081;
    g[222] = C14091;
    g[223] = C14101;
    g[224] = C14111;
    g[225] = C14120;
    g[226] = C14129;
    g[227] = C14138;
    g[228] = C14147;
    g[229] = C14156;
    g[230] = C14165;
    g[231] = C14174;
    g[232] = C14183;
    g[233] = C14192;
    g[234] = C14201;
    g[235] = C14210;
    g[236] = C14219;
    g[237] = C14228;
    g[238] = C14237;
    g[239] = C14246;
    g[240] = C14383;
    g[241] = C14394;
    g[242] = C14405;
    g[243] = C14416;
    g[244] = C14427;
    g[245] = C14438;
    g[246] = C14449;
    g[247] = C14460;
    g[248] = C14471;
    g[249] = C14482;
    g[250] = C14493;
    g[251] = C14504;
    g[252] = C14515;
    g[253] = C14526;
    g[254] = C14537;
    g[255] = C14548;
    g[256] = C14863;
    g[257] = C14872;
    g[258] = C14881;
    g[259] = C14890;
    g[260] = C14899;
    g[261] = C14908;
    g[262] = C14917;
    g[263] = C14926;
    g[264] = C14935;
    g[265] = C14944;
    g[266] = C14953;
    g[267] = C14962;
    g[268] = C14971;
    g[269] = C14980;
    g[270] = C14989;
    g[271] = C14998;
    g[272] = C15007;
    g[273] = C15016;
    g[274] = C15025;
    g[275] = C15034;
    g[276] = C15043;
    g[277] = C15052;
    g[278] = C15061;
    g[279] = C15070;
    g[280] = C15079;
    g[281] = C15088;
    g[282] = C15097;
    g[283] = C15106;
    g[284] = C15115;
    g[285] = C15124;
    g[286] = C15133;
    g[287] = C15142;
    g[288] = C15279;
    g[289] = C15290;
    g[290] = C15300;
    g[291] = C15311;
    g[292] = C15321;
    g[293] = C15332;
    g[294] = C15342;
    g[295] = C15353;
    g[296] = C15363;
    g[297] = C15374;
    g[298] = C15384;
    g[299] = C15395;
    g[300] = C15405;
    g[301] = C15416;
    g[302] = C15426;
    g[303] = C15437;
    g[304] = C15447;
    g[305] = C15458;
    g[306] = C15468;
    g[307] = C15479;
    g[308] = C15489;
    g[309] = C15500;
    g[310] = C15510;
    g[311] = C15521;
    g[312] = C15531;
    g[313] = C15542;
    g[314] = C15552;
    g[315] = C15563;
    g[316] = C15573;
    g[317] = C15584;
    g[318] = C15594;
    g[319] = C15605;
    g[320] = C16623;
    g[321] = C16633;
    g[322] = C16643;
    g[323] = C16653;
    g[324] = C16663;
    g[325] = C16673;
    g[326] = C16683;
    g[327] = C16693;
    g[328] = C16703;
    g[329] = C16713;
    g[330] = C16723;
    g[331] = C16733;
    g[332] = C16743;
    g[333] = C16753;
    g[334] = C16763;
    g[335] = C16773;
    g[336] = C16783;
    g[337] = C16793;
    g[338] = C16803;
    g[339] = C16813;
    g[340] = C16823;
    g[341] = C16833;
    g[342] = C16843;
    g[343] = C16853;
    g[344] = C16863;
    g[345] = C16873;
    g[346] = C16883;
    g[347] = C16893;
    g[348] = C16903;
    g[349] = C16913;
    g[350] = C16923;
    g[351] = C16933;
    g[352] = C17951;
    g[353] = C17961;
    g[354] = C17971;
    g[355] = C17981;
    g[356] = C17991;
    g[357] = C18001;
    g[358] = C18011;
    g[359] = C18021;
    g[360] = C18031;
    g[361] = C18041;
    g[362] = C18051;
    g[363] = C18061;
    g[364] = C18071;
    g[365] = C18081;
    g[366] = C18091;
    g[367] = C18101;
    g[368] = C18111;
    g[369] = C18121;
    g[370] = C18131;
    g[371] = C18141;
    g[372] = C18151;
    g[373] = C18161;
    g[374] = C18171;
    g[375] = C18181;
    g[376] = C18191;
    g[377] = C18201;
    g[378] = C18211;
    g[379] = C18221;
    g[380] = C18231;
    g[381] = C18241;
    g[382] = C18251;
    g[383] = C18261;
    g[384] = C19263;
    g[385] = C19272;
    g[386] = C19282;
    g[387] = C19291;
    g[388] = C19301;
    g[389] = C19310;
    g[390] = C19320;
    g[391] = C19329;
    g[392] = C19339;
    g[393] = C19348;
    g[394] = C19358;
    g[395] = C19367;
    g[396] = C19377;
    g[397] = C19386;
    g[398] = C19396;
    g[399] = C19405;
    g[400] = C19415;
    g[401] = C19424;
    g[402] = C19434;
    g[403] = C19443;
    g[404] = C19453;
    g[405] = C19462;
    g[406] = C19472;
    g[407] = C19481;
    g[408] = C19491;
    g[409] = C19500;
    g[410] = C19510;
    g[411] = C19519;
    g[412] = C19529;
    g[413] = C19538;
    g[414] = C19548;
    g[415] = C19557;
    g[416] = C19967;
    g[417] = C19976;
    g[418] = C19986;
    g[419] = C19995;
    g[420] = C20005;
    g[421] = C20014;
    g[422] = C20024;
    g[423] = C20033;
    g[424] = C20043;
    g[425] = C20052;
    g[426] = C20062;
    g[427] = C20071;
    g[428] = C20081;
    g[429] = C20090;
    g[430] = C20100;
    g[431] = C20109;
    g[432] = C20119;
    g[433] = C20128;
    g[434] = C20138;
    g[435] = C20147;
    g[436] = C20157;
    g[437] = C20166;
    g[438] = C20176;
    g[439] = C20185;
    g[440] = C20195;
    g[441] = C20204;
    g[442] = C20214;
    g[443] = C20223;
    g[444] = C20233;
    g[445] = C20242;
    g[446] = C20252;
    g[447] = C20261;
    g[448] = C20783;
    g[449] = C20792;
    g[450] = C20802;
    g[451] = C20811;
    g[452] = C20821;
    g[453] = C20830;
    g[454] = C20840;
    g[455] = C20849;
    g[456] = C20859;
    g[457] = C20868;
    g[458] = C20878;
    g[459] = C20887;
    g[460] = C20897;
    g[461] = C20906;
    g[462] = C20916;
    g[463] = C20925;
    g[464] = C20935;
    g[465] = C20944;
    g[466] = C20954;
    g[467] = C20963;
    g[468] = C20973;
    g[469] = C20982;
    g[470] = C20992;
    g[471] = C21001;
    g[472] = C21011;
    g[473] = C21020;
    g[474] = C21030;
    g[475] = C21039;
    g[476] = C21049;
    g[477] = C21058;
    g[478] = C21068;
    g[479] = C21077;
    g[480] = C33479;
    g[481] = C33498;
    g[482] = C33517;
    g[483] = C33536;
    g[484] = C33555;
    g[485] = C33574;
    g[486] = C33593;
    g[487] = C33612;
    g[488] = C33631;
    g[489] = C33650;
    g[490] = C33669;
    g[491] = C33688;
    g[492] = C33707;
    g[493] = C33726;
    g[494] = C33745;
    g[495] = C33764;
    g[496] = C34791;
    g[497] = C34809;
    g[498] = C34827;
    g[499] = C34845;
    g[500] = C34863;
    g[501] = C34881;
    g[502] = C34899;
    g[503] = C34917;
    g[504] = C34935;
    g[505] = C34953;
    g[506] = C34971;
    g[507] = C34989;
    g[508] = C35007;
    g[509] = C35025;
    g[510] = C35043;
    g[511] = C35061;
    g[512] = C37527;
    g[513] = C37544;
    g[514] = C37561;
    g[515] = C37578;
    g[516] = C37595;
    g[517] = C37612;
    g[518] = C37629;
    g[519] = C37646;
    g[520] = C37663;
    g[521] = C37680;
    g[522] = C37697;
    g[523] = C37714;
    g[524] = C37731;
    g[525] = C37748;
    g[526] = C37765;
    g[527] = C37782;
    g[528] = C51503;
    g[529] = C51522;
    g[530] = C51541;
    g[531] = C51560;
    g[532] = C51579;
    g[533] = C51598;
    g[534] = C51617;
    g[535] = C51636;
    g[536] = C51655;
    g[537] = C51674;
    g[538] = C51693;
    g[539] = C51712;
    g[540] = C51731;
    g[541] = C51750;
    g[542] = C51769;
    g[543] = C51788;
    g[544] = C54365;
    g[545] = C54413;
    g[546] = C54430;
    g[547] = C54447;
    g[548] = C54550;
    g[549] = C54729;
    g[550] = C54908;
    g[551] = C54924;
    g[552] = C54939;
    g[553] = C54955;
    g[554] = C55000;
    g[555] = C55016;
    g[556] = C55031;
    g[557] = C55092;
    g[558] = C55124;
    g[559] = C55142;
    g[560] = C55218;
    g[561] = C55336;
    g[562] = C55455;
    g[563] = C55472;
    g[564] = C55488;
    g[565] = C55518;
    g[566] = C55535;
    g[567] = C55580;
    g[568] = C55612;
    g[569] = C55630;
    g[570] = C55706;
    g[571] = C55826;
    g[572] = C55944;
    g[573] = C55961;
    g[574] = C55978;
    g[575] = C56008;
    g[576] = C56025;
    g[577] = C56070;
    g[578] = C56085;
    g[579] = C56131;
    g[580] = C56189;
    g[581] = C56248;
    g[582] = C56263;
    g[583] = C56279;
    g[584] = C56308;
    g[585] = C56323;
    g[586] = C56368;
    g[587] = C56426;
    g[588] = C56483;
    g[589] = C56499;
    g[590] = C56515;
    g[591] = C56544;
    g[592] = C56560;
    g[593] = C56606;
    g[594] = C56664;
    g[595] = C56721;
    g[596] = C56737;
    g[597] = C56753;
    g[598] = C56812;
    g[599] = C56828;
    g[600] = C57134;
    g[601] = C57149;
    g[602] = C57192;
    g[603] = C57207;
    g[604] = C57253;
    g[605] = C57285;
    g[606] = C57302;
    g[607] = C57377;
    g[608] = C57495;
    g[609] = C57614;
    g[610] = C57630;
    g[611] = C57645;
    g[612] = C57675;
    g[613] = C57691;
    g[614] = C57735;
    g[615] = C57767;
    g[616] = C57784;
    g[617] = C57859;
    g[618] = C57981;
    g[619] = C58099;
    g[620] = C58115;
    g[621] = C58131;
    g[622] = C58161;
    g[623] = C58177;
    g[624] = C58223;
    g[625] = C58238;
    g[626] = C58284;
    g[627] = C58342;
    g[628] = C58401;
    g[629] = C58416;
    g[630] = C58432;
    g[631] = C58461;
    g[632] = C58476;
    g[633] = C58521;
    g[634] = C58579;
    g[635] = C58636;
    g[636] = C58651;
    g[637] = C58667;
    g[638] = C58696;
    g[639] = C58712;
    g[640] = C58757;
    g[641] = C58815;
    g[642] = C58872;
    g[643] = C58887;
    g[644] = C58903;
    g[645] = C58961;
    g[646] = C58977;
    g[647] = C59282;
    g[648] = C59297;
    g[649] = C59340;
    g[650] = C59355;
    g[651] = C59414;
    g[652] = C59572;
    g[653] = C59601;
    g[654] = C59630;
    g[655] = C59662;
    g[656] = C59679;
    g[657] = C59754;
    g[658] = C59874;
    g[659] = C59992;
    g[660] = C60008;
    g[661] = C60024;
    g[662] = C60054;
    g[663] = C60070;
    g[664] = C60114;
    g[665] = C60129;
    g[666] = C60175;
    g[667] = C60233;
    g[668] = C60292;
    g[669] = C60307;
    g[670] = C60323;
    g[671] = C60352;
    g[672] = C60367;
    g[673] = C60412;
    g[674] = C60470;
    g[675] = C60527;
    g[676] = C60543;
    g[677] = C60559;
    g[678] = C60588;
    g[679] = C60604;
    g[680] = C60649;
    g[681] = C60707;
    g[682] = C60764;
    g[683] = C60779;
    g[684] = C60795;
    g[685] = C60838;
    g[686] = C60995;
    g[687] = C61025;
    g[688] = C61068;
    g[689] = C61225;
    g[690] = C61254;
    g[691] = C61297;
    g[692] = C61454;
    g[693] = C61485;
    g[694] = C61528;
    g[695] = C61684;
    g[696] = C61713;
    g[697] = C61742;
    g[698] = C61758;
    g[699] = C61774;
    g[700] = C61788;
    g[701] = C61805;
    g[702] = C61820;
    g[703] = C61835;
    g[704] = C61851;
    g[705] = C61868;
    g[706] = C62306;
    g[707] = C62321;
    g[708] = C62337;
    g[709] = C62352;
    g[710] = C62367;
    g[711] = C62382;
    g[712] = C62398;
    g[713] = C62413;
    g[714] = C62430;
    g[715] = C62726;
    g[716] = C62741;
    g[717] = C62757;
    g[718] = C62772;
    g[719] = C62787;
    g[720] = C62802;
    g[721] = C62818;
    g[722] = C62833;
    g[723] = C62849;
    g[724] = C63171;
    g[725] = C63186;
    g[726] = C63260;
    g[727] = C63317;
    g[728] = C63332;
    g[729] = C63347;
    g[730] = C63418;
    g[731] = C63433;
    g[732] = C63618;
    g[733] = C63633;
    g[734] = C63649;
    g[735] = C63664;
    g[736] = C63679;
    g[737] = C63694;
    g[738] = C63712;
    g[739] = C63953;
    g[740] = C63968;
    g[741] = C63984;
    g[742] = C63999;
    g[743] = C64014;
    g[744] = C64029;
    g[745] = C64046;
    g[746] = C64369;
    g[747] = C64384;
    g[748] = C64458;
    g[749] = C64501;
    g[750] = C64516;
    g[751] = C64559;
    g[752] = C64574;
    g[753] = C64716;
    g[754] = C64731;
    g[755] = C64761;
    g[756] = C64776;
    g[757] = C64792;
    g[758] = C64807;
    g[759] = C64822;
    g[760] = C64837;
    g[761] = C64854;
    g[762] = C65122;
    g[763] = C65137;
    g[764] = C65210;
    g[765] = C65267;
    g[766] = C65282;
    g[767] = C65325;
    g[768] = C65353;
    g[769] = C65368;
    g[770] = C65411;
    g[771] = C65427;
    g[772] = C65442;
    g[773] = C65458;
    g[774] = C65579;
    g[775] = C65594;
    g[776] = C65609;
    g[777] = C65729;
    g[778] = C65744;
    g[779] = C65759;
    g[780] = C65876;
    g[781] = C65933;
    g[782] = C65948;
    g[783] = C65963;
    g[784] = C65978;
    g[785] = C65993;
    g[786] = C66113;
    g[787] = C66128;
    g[788] = C66143;
    g[789] = C66158;
    g[790] = C66173;
    g[791] = C66290;
    g[792] = C66347;
    g[793] = C66362;
    g[794] = C66377;
    g[795] = C66392;
    g[796] = C66407;
    g[797] = C66538;
    g[798] = C73924;
    g[799] = C73940;
    g[800] = C74041;
    g[801] = C74057;
    g[802] = C74247;
    g[803] = C74263;
    g[804] = C74483;
    g[805] = C74528;
    g[806] = C74544;
    g[807] = C74692;
    g[808] = C74897;
    g[809] = C74969;
    g[810] = C74985;
    g[811] = C75132;
    g[812] = C75235;
    g[813] = C75279;
    g[814] = C75337;
    g[815] = C75422;
    g[816] = C75534;
    g[817] = C75755;
    g[818] = C75800;
    g[819] = C75816;
    g[820] = C75936;
    g[821] = C76086;
    g[822] = C76186;
    g[823] = C76202;
    g[824] = C76321;
    g[825] = C76424;
    g[826] = C76468;
    g[827] = C76512;
    g[828] = C76569;
    g[829] = C76640;
    g[830] = C76887;
    g[831] = C76959;
    g[832] = C76975;
    g[833] = C77095;
    g[834] = C77170;
    g[835] = C77214;
    g[836] = C77271;
    g[837] = C77328;
    g[838] = C77356;
    g[839] = C77413;
    g[840] = C78024;
    g[841] = C78040;
    g[842] = C78200;
    g[843] = C78215;
    g[844] = C78430;
    g[845] = C78459;
    g[846] = C87864;
    g[847] = C87880;
    g[848] = C88233;
    g[849] = C88249;
    g[850] = C89000;
    g[851] = C89016;
    g[852] = C90457;
    g[853] = C92318;
    g[854] = C92338;
    g[855] = C92354;
    g[856] = C92370;
    g[857] = C92401;
    g[858] = C92475;
    g[859] = C92563;
    g[860] = C92578;
    g[861] = C92608;
    g[862] = C92681;
    g[863] = C92696;
    g[864] = C92725;
    g[865] = C92740;
    g[866] = C92756;
    g[867] = C92785;
    g[868] = C92801;
    g[869] = C92816;
    g[870] = C92997;
    g[871] = C93028;
    g[872] = C93045;
    g[873] = C93077;
    g[874] = C93136;
    g[875] = C93152;
    g[876] = C93184;
    g[877] = C93214;
    g[878] = C93229;
    g[879] = C93244;
    g[880] = C93332;
    g[881] = C93347;
    g[882] = C93406;
    g[883] = C93422;
    g[884] = C93452;
    g[885] = C93467;
    g[886] = C93525;
    g[887] = C93540;
    g[888] = C93569;
    g[889] = C93715;
    g[890] = C93731;
    g[891] = C93776;
    g[892] = C93792;
    g[893] = C93823;
    g[894] = C93853;
    g[895] = C93884;
    g[896] = C93928;
    g[897] = C93973;
    g[898] = C93988;
    g[899] = C94033;
    g[900] = C94049;
    g[901] = C94093;
    g[902] = C94108;
    g[903] = C94125;
    g[904] = C94141;
    g[905] = C94163;
    g[906] = C94194;
    g[907] = C94337;
    g[908] = C94353;
    g[909] = C94425;
    g[910] = C94441;
    g[911] = C94457;
    g[912] = C94487;
    g[913] = C94518;
    g[914] = C94534;
    g[915] = C94565;
    g[916] = C94581;
    g[917] = C94626;
    g[918] = C94756;
    g[919] = C94830;
    g[920] = C94846;
    g[921] = C94877;
    g[922] = C94893;
    g[923] = C94909;
    g[924] = C94925;
    g[925] = C94941;
    g[926] = C94957;
    g[927] = C95073;
    g[928] = C95090;
    g[929] = C95170;
    g[930] = C95186;
    g[931] = C95217;
    g[932] = C95277;
    g[933] = C95292;
    g[934] = C95364;
    g[935] = C95407;
    g[936] = C95451;
    g[937] = C95526;
    g[938] = C95542;
    g[939] = C95572;
    g[940] = C95616;
    g[941] = C95667;
    g[942] = C95683;
    g[943] = C95773;
    g[944] = C95847;
    g[945] = C95876;
    g[946] = C95898;
    g[947] = C95914;
    g[948] = C95988;
    g[949] = C96041;
    g[950] = C96085;
    g[951] = C96138;
    g[952] = C96323;
    g[953] = C96719;
    g[954] = C96735;
    g[955] = C96809;
    g[956] = C96824;
    g[957] = C96915;
    g[958] = C97020;
    g[959] = C97452;
    g[960] = C97468;
    g[961] = C97513;
    g[962] = C97543;
    g[963] = C97602;
    g[964] = C97707;
    g[965] = C97992;
    g[966] = C98151;
    g[967] = C98311;
    g[968] = C98372;
    g[969] = C98547;
    g[970] = C98606;
    g[971] = C98681;
    g[972] = C98830;
    g[973] = C98939;
    g[974] = C99073;
    g[975] = C99318;
    g[976] = C99501;
    g[977] = C99517;
    g[978] = C99548;
    g[979] = C99744;
    g[980] = C99804;
    g[981] = C99900;
    g[982] = C100662;
    g[983] = C100740;
    g[984] = C101437;
    g[985] = C102217;
    g[986] = C102318;
    g[987] = C102421;
    g[988] = C102586;
    g[989] = C102753;
    g[990] = C103072;
    g[991] = C103088;
    g[992] = C103316;
    g[993] = C103556;
    g[994] = C103602;
    g[995] = C103698;
}
