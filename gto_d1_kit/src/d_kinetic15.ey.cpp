/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_33(double ae,
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
    const double C33067 = ae + be;
    const double C33069 = Pi / C33067;
    const double C33070 = std::sqrt(C33069);
    const double C33073 = std::pow(C33067, 2);
    const double C33072 = be * xAB;
    const double C33076 = 2. * C33067;
    const double C33075 = std::pow(C33072, 2);
    const double C33078 = C33070 / C33076;
    const double C33077 = C33070 * C33075;
    const double C33079 = C33077 / C33073;
    const double C33080 = C33079 + C33078;
    const double C33086 = ae * xAB;
    const double C33085 = C33080 * C33072;
    const double C33084 = 2. * C33073;
    const double C33083 = C33070 * C33072;
    const double C33088 = C33085 / C33067;
    const double C33087 = -2. * C33083;
    const double C33089 = C33087 / C33084;
    const double C33090 = C33089 - C33088;
    const double C33097 = C33080 * C33086;
    const double C33096 = 3. * C33080;
    const double C33095 = C33090 * C33086;
    const double C33100 = C33097 / C33067;
    const double C33099 = C33096 / C33076;
    const double C33098 = C33095 / C33067;
    const double C33102 = C33100 + C33089;
    const double C33101 = C33098 + C33099;
    const double C33105 = ae * yAB;
    const double C33109 = ae * zAB;
    const double C33115 = be * yAB;
    const double C33120 = std::pow(C33115, 2);
    const double C33119 = C33070 * C33115;
    const double C33122 = C33070 * C33120;
    const double C33121 = -2. * C33119;
    const double C33124 = C33122 / C33073;
    const double C33123 = C33121 / C33084;
    const double C33125 = C33124 + C33078;
    const double C33128 = C33125 * C33105;
    const double C33127 = 3. * C33125;
    const double C33126 = C33125 * C33115;
    const double C33131 = C33128 / C33067;
    const double C33130 = C33127 / C33076;
    const double C33129 = C33126 / C33067;
    const double C33133 = C33131 + C33123;
    const double C33132 = C33123 - C33129;
    const double C33134 = C33132 * C33105;
    const double C33135 = C33134 / C33067;
    const double C33136 = C33135 + C33130;
    const double C33141 = be * zAB;
    const double C33145 = std::pow(C33141, 2);
    const double C33144 = C33070 * C33141;
    const double C33147 = C33070 * C33145;
    const double C33146 = -2. * C33144;
    const double C33149 = C33147 / C33073;
    const double C33148 = C33146 / C33084;
    const double C33150 = C33149 + C33078;
    const double C33153 = C33150 * C33109;
    const double C33152 = 3. * C33150;
    const double C33151 = C33150 * C33141;
    const double C33156 = C33153 / C33067;
    const double C33155 = C33152 / C33076;
    const double C33154 = C33151 / C33067;
    const double C33158 = C33156 + C33148;
    const double C33157 = C33148 - C33154;
    const double C33159 = C33157 * C33109;
    const double C33160 = C33159 / C33067;
    const double C33161 = C33160 + C33155;
    const double C33168 = C33086 * C33083;
    const double C33169 = C33168 / C33073;
    const double C33170 = C33078 - C33169;
    const double C33172 = C33105 * C33119;
    const double C33173 = C33172 / C33073;
    const double C33174 = C33078 - C33173;
    const double C33178 = C33109 * C33144;
    const double C33179 = C33178 / C33073;
    const double C33180 = C33078 - C33179;
    const double C33220 = 2 * C33180;
    const double C33219 = C33144 / C33067;
    const double C33218 = C33180 * C33109;
    const double C33217 = 2 * C33174;
    const double C33216 = C33119 / C33067;
    const double C33215 = C33174 * C33105;
    const double C33214 = C33083 / C33067;
    const double C33213 = C33170 * C33086;
    const double C33212 = 2 * C33170;
    const double C33211 = C33158 * C33109;
    const double C33210 = 3 * C33158;
    const double C33209 = C33161 * C33109;
    const double C33208 = std::pow(C33141, 2);
    const double C33207 = C33133 * C33105;
    const double C33206 = 3 * C33133;
    const double C33205 = C33136 * C33105;
    const double C33204 = std::pow(C33115, 2);
    const double C33203 = std::pow(C33086, 2);
    const double C33202 = C33070 * C33086;
    const double C33201 = C33070 * C33109;
    const double C33200 = std::pow(C33109, 2);
    const double C33199 = C33070 * C33105;
    const double C33198 = std::pow(C33105, 2);
    const double C33197 = C33086 * C33083;
    const double C33196 = C33102 * C33086;
    const double C33195 = 3. * C33080;
    const double C33194 = ae * xAB;
    const double C33193 = 2. * C33073;
    const double C33192 = C33070 * C33072;
    const double C33191 = 2. * C33067;
    const double C33190 = be * xAB;
    const double C33244 = C33220 + C33150;
    const double C33243 = C33217 + C33125;
    const double C33242 = C33218 / C33067;
    const double C33241 = C33215 / C33067;
    const double C33240 = C33213 / C33067;
    const double C33239 = C33211 / C33067;
    const double C33238 = C33210 + C33157;
    const double C33237 = C33209 / C33067;
    const double C33236 = C33070 * C33208;
    const double C33235 = C33207 / C33067;
    const double C33234 = C33206 + C33132;
    const double C33233 = C33205 / C33067;
    const double C33232 = C33070 * C33204;
    const double C33231 = C33070 * C33203;
    const double C33230 = C33202 / C33067;
    const double C33229 = C33201 / C33067;
    const double C33228 = C33070 * C33200;
    const double C33227 = C33199 / C33067;
    const double C33226 = C33070 * C33198;
    const double C33225 = C33197 / C33073;
    const double C33224 = C33196 / C33067;
    const double C33223 = C33195 / C33076;
    const double C33222 = -2. * C33192;
    const double C33221 = C33070 / C33191;
    const double C33258 = C33244 / C33076;
    const double C33257 = C33243 / C33076;
    const double C33256 = C33229 - C33219;
    const double C33255 = C33227 - C33216;
    const double C33254 = C33230 - C33214;
    const double C33253 = C33238 / C33076;
    const double C33252 = C33236 / C33073;
    const double C33251 = C33234 / C33076;
    const double C33250 = C33232 / C33073;
    const double C33249 = C33231 / C33073;
    const double C33248 = C33228 / C33073;
    const double C33247 = C33226 / C33073;
    const double C33246 = C33078 - C33225;
    const double C33245 = C33222 / C33193;
    const double C33271 = C33239 + C33258;
    const double C33270 = C33235 + C33257;
    const double C33269 = C33256 / C33076;
    const double C33268 = C33255 / C33076;
    const double C33267 = C33254 / C33076;
    const double C33266 = C33237 + C33253;
    const double C33265 = C33252 + C33078;
    const double C33264 = C33233 + C33251;
    const double C33263 = C33250 + C33078;
    const double C33262 = C33249 + C33078;
    const double C33261 = C33248 + C33078;
    const double C33260 = C33247 + C33078;
    const double C33259 = 2 * C33246;
    const double C33275 = C33242 + C33269;
    const double C33274 = C33241 + C33268;
    const double C33273 = C33240 + C33267;
    const double C33272 = C33259 + C33080;
    const double C33276 = C33272 / C33076;
    const double C33277 = C33224 + C33276;
    const double C31431 = std::sqrt(Pi / (ae + be));
    const double C31432 = -(std::sqrt(Pi / C33067) * C33190) / C33067;
    const double C31433 =
        (C33070 * std::pow(C33190, 2)) / std::pow(C33067, 2) + C33221;
    const double C31434 =
        C33245 -
        (((C33070 * std::pow(C33072, 2)) / C33073 + C33221) * C33072) / C33067;
    const double C31435 =
        ((C33245 - (C33080 * C33072) / C33067) * C33194) / C33067 + C33223;
    const double C31436 = (C33080 * C33194) / C33067 + C33245;
    const double C31437 =
        (((C33090 * C33086) / C33067 + C33223) * C33086) / C33067 +
        (3 * ((C33080 * C33086) / C33067 + C33089) + C33090) / C33076;
    const double C31440 = -(C33070 * be * yAB) / C33067;
    const double C31441 =
        (((C33101 * C33086) / C33067 + (3 * C33102 + C33090) / C33076) *
         C33086) /
            C33067 +
        (3 * C33277 + 2 * C33101) / C33076;
    const double C31442 = -(C33070 * be * zAB) / C33067;
    const double C31767 = (C33260 * C33105) / C33067 + (2. * C33199) / C33084;
    const double C31864 = (C33261 * C33109) / C33067 + (2. * C33201) / C33084;
    const double C31977 =
        (-2. * C33070 * C33115) / C33084 - (C33263 * C33115) / C33067;
    const double C31979 = (C33262 * C33086) / C33067 + (2. * C33202) / C33084;
    const double C32113 =
        (C33264 * C33105) / C33067 +
        (3 * (C33235 +
              (2 * (C33078 - (C33105 * C33119) / C33073) + C33125) / C33076) +
         2 * C33136) /
            C33076;
    const double C32337 =
        (-2. * C33070 * C33141) / C33084 - (C33265 * C33141) / C33067;
    const double C32404 =
        (C33266 * C33109) / C33067 +
        (3 * (C33239 +
              (2 * (C33078 - (C33109 * C33144) / C33073) + C33150) / C33076) +
         2 * C33161) /
            C33076;
    const double C32628 =
        ((C33224 + (C33212 + C33080) / C33076) * C33086) / C33067 +
        (2 * C33273 + 2 * C33102) / C33076;
    const double C32701 =
        (C33274 * C33105) / C33067 + (C33260 + C33217) / C33076;
    const double C32789 =
        (C33275 * C33109) / C33067 + (C33261 + C33220) / C33076;
    const double C32873 =
        (C33270 * C33105) / C33067 + (2 * C33274 + 2 * C33133) / C33076;
    const double C32926 =
        (C33273 * C33086) / C33067 + (C33262 + C33212) / C33076;
    const double C32976 =
        (C33271 * C33109) / C33067 + (2 * C33275 + 2 * C33158) / C33076;
    const double C31459 = ae * C31442;
    const double C31458 = ae * C31440;
    const double C31457 = be * zAB;
    const double C31456 = be * yAB;
    const double C31455 = std::pow(ae, 2);
    const double C31454 = ae * C31437;
    const double C31453 = ae * C31436;
    const double C31452 = ae * C31435;
    const double C31451 = ae * C31433;
    const double C31450 = ae * C31434;
    const double C31449 = ae * xAB;
    const double C31448 = be * C31432;
    const double C31447 = be * C31433;
    const double C31446 = be * xAB;
    const double C31445 = ae * C31432;
    const double C31444 = ae + be;
    const double C31443 = be * C31431;
    const double C31479 = 2 * C31459;
    const double C31478 = 2 * C31458;
    const double C31477 = std::pow(C31446, 2);
    const double C31476 = C31446 / C31444;
    const double C31475 = std::pow(C31444, 2);
    const double C31474 = C31457 / C31444;
    const double C31473 = Pi / C31444;
    const double C31472 = C31456 / C31444;
    const double C31471 = 2 * C31454;
    const double C31470 = 2 * C31453;
    const double C31469 = 4. * C31445;
    const double C31468 = 2 * C31452;
    const double C31467 = 2 * C31451;
    const double C31466 = 2 * C31450;
    const double C31465 = 2 * C31448;
    const double C31464 = 2 * C31445;
    const double C31463 = 2 * C31447;
    const double C31462 = C31445 * C31446;
    const double C31461 = 2. * C31444;
    const double C31460 = 2 * C31443;
    const double C31490 = 2. * C31475;
    const double C31489 = std::pow(C31476, 2);
    const double C31488 = std::pow(C31474, 2);
    const double C31487 = be * C31464;
    const double C31486 = std::sqrt(C31473);
    const double C31485 = 1 / C31461;
    const double C31484 = std::pow(C31472, 2);
    const double C31483 = C31469 / C31461;
    const double C31482 = C31464 - C31465;
    const double C31481 = 2 * C31462;
    const double C31480 = -C31460;
    const double C31500 = C31486 / C31461;
    const double C31499 = C31486 * C31477;
    const double C31498 = C31489 + C31485;
    const double C31497 = C31486 * C31446;
    const double C31496 = C31488 + C31485;
    const double C31495 = 4 * C31487;
    const double C31494 = C31484 + C31485;
    const double C31493 = C31482 / C31461;
    const double C31492 = C31481 / C31444;
    const double C31491 = C31480 / C31461;
    const double C31509 = C31449 * C31497;
    const double C31508 = -2. * C31497;
    const double C31507 = C31499 / C31475;
    const double C31506 = C31455 * C31498;
    const double C31505 = ae * C31497;
    const double C31504 = C31455 * C31496;
    const double C31503 = -C31495;
    const double C31502 = C31455 * C31494;
    const double C31501 = C31491 - C31492;
    const double C31523 = C31509 / C31475;
    const double C31522 = C31508 / C31444;
    const double C31521 = C31508 / C31490;
    const double C31520 = C31507 + C31500;
    const double C31519 = 2 * C31506;
    const double C31518 = -2 * C31505;
    const double C31517 = 2 * C31504;
    const double C31516 = be * C31501;
    const double C31515 = C31503 / C31461;
    const double C31514 = ae * C31501;
    const double C31513 = 2 * C31502;
    const double C31512 = C31501 * C31449;
    const double C31511 = C31501 * C31446;
    const double C31510 = 2 * C31501;
    const double C31539 = C31500 - C31523;
    const double C31538 = C31520 * C31449;
    const double C31537 = 3. * C31520;
    const double C31536 = C31520 * C31446;
    const double C31535 = ae * C31520;
    const double C31534 = ae - C31519;
    const double C31533 = be * C31518;
    const double C31532 = ae - C31517;
    const double C31531 = 4 * C31516;
    const double C31530 = C31514 * C31446;
    const double C31529 = 2 * C31514;
    const double C31528 = ae - C31513;
    const double C31527 = C31512 / C31444;
    const double C31526 = C31510 + C31467;
    const double C31525 = C31511 / C31444;
    const double C31524 = C31510 - C31463;
    const double C31556 = 2 * C31539;
    const double C31555 = be * C31539;
    const double C31554 = C31538 / C31444;
    const double C31553 = C31537 / C31461;
    const double C31552 = C31536 / C31444;
    const double C31551 = 2 * C31535;
    const double C31550 = C31534 * C31486;
    const double C31549 = C31533 / C31475;
    const double C31548 = C31532 * C31486;
    const double C31547 = C31529 - C31531;
    const double C31546 = 2 * C31530;
    const double C31545 = be * C31529;
    const double C31544 = C31528 * C31486;
    const double C31543 = C31527 + C31483;
    const double C31542 = C31526 / C31461;
    const double C31541 = C31493 - C31525;
    const double C31540 = C31524 / C31461;
    const double C31572 = C31556 + C31520;
    const double C31571 = C31555 * ae;
    const double C31570 = C31554 + C31521;
    const double C31569 = C31521 - C31552;
    const double C31568 = C31551 - C31486;
    const double C31567 = C31550 / C31461;
    const double C31566 = C31550 * C31446;
    const double C31565 = ae * C31541;
    const double C31564 = be * C31541;
    const double C31563 = C31547 / C31461;
    const double C31562 = C31546 / C31444;
    const double C31561 = 6 * C31545;
    const double C31560 = 2 * C31543;
    const double C31559 = C31541 * C31449;
    const double C31558 = 3 * C31541;
    const double C31557 = C31541 * C31446;
    const double C31589 = C31572 / C31461;
    const double C31588 = C31570 * C31449;
    const double C31587 = 2 * C31571;
    const double C31586 = 3 * C31570;
    const double C31585 = be * C31570;
    const double C31584 = C31569 * C31449;
    const double C31583 = ae * C31569;
    const double C31582 = C31568 * be;
    const double C31581 = C31566 / C31444;
    const double C31580 = 4 * C31565;
    const double C31579 = 4 * C31564;
    const double C31578 = C31515 - C31562;
    const double C31577 = -C31561;
    const double C31576 = C31560 + C31541;
    const double C31575 = C31559 / C31444;
    const double C31574 = C31558 + C31466;
    const double C31573 = C31557 / C31444;
    const double C31606 = C31588 / C31444;
    const double C31605 = C31587 / C31444;
    const double C31604 = C31586 + C31569;
    const double C31603 = C31585 * ae;
    const double C31602 = C31584 / C31444;
    const double C31601 = 2 * C31583;
    const double C31600 = C31582 / C31444;
    const double C31599 = C31549 - C31581;
    const double C31598 = 2 * C31578;
    const double C31597 = be * C31578;
    const double C31596 = C31578 * C31446;
    const double C31595 = ae * C31578;
    const double C31594 = C31577 / C31461;
    const double C31593 = C31576 + C31470;
    const double C31592 = C31575 + C31542;
    const double C31591 = C31574 / C31461;
    const double C31590 = C31540 - C31573;
    const double C31625 = C31606 + C31589;
    const double C31624 = C31599 * C31449;
    const double C31623 = C31604 / C31461;
    const double C31622 = 2 * C31603;
    const double C31621 = C31602 + C31553;
    const double C31620 = C31601 - C31522;
    const double C31619 = C31599 * C31446;
    const double C31618 = C31599 / C31444;
    const double C31617 = C31598 + C31580;
    const double C31616 = ae * C31590;
    const double C31615 = C31598 - C31579;
    const double C31614 = 6 * C31597;
    const double C31613 = 2 * C31595;
    const double C31612 = C31596 / C31444;
    const double C31611 = C31595 * C31446;
    const double C31610 = C31593 / C31461;
    const double C31609 = C31592 * C31449;
    const double C31608 = 3 * C31592;
    const double C31607 = C31590 * C31449;
    const double C31642 = 2 * C31621;
    const double C31641 = 3 * C31625;
    const double C31640 = be * C31625;
    const double C31639 = C31624 / C31444;
    const double C31638 = C31621 * C31449;
    const double C31637 = be * C31621;
    const double C31636 = C31620 * be;
    const double C31635 = C31619 / C31444;
    const double C31634 = C31617 / C31461;
    const double C31633 = 4 * C31616;
    const double C31632 = C31615 / C31461;
    const double C31631 = C31613 - C31614;
    const double C31630 = C31563 - C31612;
    const double C31629 = 2 * C31611;
    const double C31628 = C31609 / C31444;
    const double C31627 = C31608 + C31590;
    const double C31626 = C31607 / C31444;
    const double C31659 = C31641 + C31642;
    const double C31658 = 2 * C31640;
    const double C31657 = C31639 + C31567;
    const double C31656 = C31638 / C31444;
    const double C31655 = C31637 * ae;
    const double C31654 = C31636 / C31444;
    const double C31653 = C31567 - C31635;
    const double C31652 = C31630 * C31449;
    const double C31651 = 3 * C31630;
    const double C31650 = ae * C31630;
    const double C31649 = C31630 * C31446;
    const double C31648 = C31631 / C31461;
    const double C31647 = be * C31630;
    const double C31646 = C31629 / C31444;
    const double C31645 = C31628 + C31610;
    const double C31644 = C31627 + C31468;
    const double C31643 = C31626 + C31591;
    const double C31675 = C31659 / C31461;
    const double C31674 = C31658 - C31520;
    const double C31673 = C31657 + C31605;
    const double C31672 = C31656 + C31623;
    const double C31671 = 2 * C31655;
    const double C31670 = C31653 + C31600;
    const double C31669 = C31652 / C31444;
    const double C31668 = C31651 + C31633;
    const double C31667 = 6 * C31650;
    const double C31666 = C31649 / C31444;
    const double C31665 = 6 * C31647;
    const double C31664 = C31594 - C31646;
    const double C31663 = 2 * C31643;
    const double C31662 = 3 * C31645;
    const double C31661 = C31644 / C31461;
    const double C31660 = C31643 * C31449;
    const double C31690 = C31672 * C31449;
    const double C31689 = C31674 * ae;
    const double C31688 = 2 * C31673;
    const double C31687 = be * C31672;
    const double C31686 = C31670 * C31449;
    const double C31685 = C31671 / C31444;
    const double C31684 = 3 * C31670;
    const double C31683 = C31670 * C31446;
    const double C31682 = C31669 + C31634;
    const double C31681 = C31668 / C31461;
    const double C31680 = C31632 - C31666;
    const double C31679 = C31664 * C31446;
    const double C31678 = 2 * C31664;
    const double C31677 = C31662 + C31663;
    const double C31676 = C31660 / C31444;
    const double C31704 = C31690 / C31444;
    const double C31703 = C31689 / C31444;
    const double C31702 = C31688 + C31670;
    const double C31701 = 2 * C31687;
    const double C31700 = C31686 + C31599;
    const double C31699 = C31684 / C31461;
    const double C31698 = C31683 / C31444;
    const double C31697 = C31680 * C31449;
    const double C31696 = C31678 + C31667;
    const double C31695 = ae * C31680;
    const double C31694 = C31679 / C31444;
    const double C31693 = C31678 - C31665;
    const double C31692 = C31677 + C31471;
    const double C31691 = C31676 + C31661;
    const double C31716 = C31704 + C31675;
    const double C31715 = C31702 / C31461;
    const double C31714 = C31701 - C31569;
    const double C31713 = C31700 + C31622;
    const double C31712 = C31618 - C31698;
    const double C31711 = C31697 / C31444;
    const double C31710 = C31696 / C31461;
    const double C31709 = 6 * C31695;
    const double C31708 = C31648 - C31694;
    const double C31707 = C31693 / C31461;
    const double C31706 = C31692 / C31461;
    const double C31705 = C31691 * C31449;
    const double C31726 = be * C31716;
    const double C31725 = C31449 * C31713;
    const double C31724 = C31714 * ae;
    const double C31723 = 3 * C31713;
    const double C31722 = C31712 + C31654;
    const double C31721 = C31711 + C31681;
    const double C31720 = C31708 * C31449;
    const double C31719 = 3 * C31708;
    const double C31718 = C31708 * C31446;
    const double C31717 = C31705 / C31444;
    const double C31735 = 2 * C31726;
    const double C31734 = C31725 / C31475;
    const double C31733 = C31724 / C31444;
    const double C31732 = C31723 / C31444;
    const double C31731 = C31722 * C31449;
    const double C31730 = C31720 / C31444;
    const double C31729 = C31719 + C31709;
    const double C31728 = C31718 / C31444;
    const double C31727 = C31717 + C31706;
    const double C31742 = C31735 - C31642;
    const double C31741 = C31734 + C31715;
    const double C31740 = C31732 + C31722;
    const double C31739 = C31731 / C31444;
    const double C31738 = C31730 + C31710;
    const double C31737 = C31729 / C31461;
    const double C31736 = C31707 - C31728;
    const double C31747 = C31742 * ae;
    const double C31746 = C31741 + C31703;
    const double C31745 = C31740 / C31461;
    const double C31744 = C31739 + C31699;
    const double C31743 = C31736 * C31449;
    const double C31751 = C31747 / C31444;
    const double C31750 = 3 * C31746;
    const double C31749 = C31744 + C31685;
    const double C31748 = C31743 / C31444;
    const double C31754 = 2 * C31749;
    const double C31753 = C31749 * C31449;
    const double C31752 = C31748 + C31737;
    const double C31756 = C31750 + C31754;
    const double C31755 = C31753 / C31444;
    const double C31758 = C31756 / C31461;
    const double C31757 = C31755 + C31745;
    const double C31759 = C31757 + C31733;
    const double C31760 = C31759 * C31449;
    const double C31761 = C31760 / C31444;
    const double C31762 = C31761 + C31758;
    const double C31763 = C31762 + C31751;
    const double C31778 = ae * C31478;
    const double C31777 = C31458 * C31456;
    const double C31776 = be * C33070;
    const double C31775 = be * C31478;
    const double C31774 = ae * C33260;
    const double C31773 = ae * C33227;
    const double C31772 = ae * C33070;
    const double C31771 = C31544 / C31461;
    const double C31770 = ae * yAB;
    const double C31789 = 4. * C31778;
    const double C31788 = 2 * C31777;
    const double C31787 = 2 * C31776;
    const double C31786 = 4 * C31775;
    const double C31785 = 2 * C31774;
    const double C31784 = 2 * C31773;
    const double C31783 = 2. * C31772;
    const double C31782 = C31458 * C31770;
    const double C31781 = std::pow(C31770, 2);
    const double C31780 = C31486 * C31770;
    const double C31779 = C31544 * C31770;
    const double C31800 = C31789 / C31461;
    const double C31799 = C31788 / C31444;
    const double C31798 = -C31787;
    const double C31797 = -C31786;
    const double C31796 = C31478 + C31784;
    const double C31795 = C31783 / C31461;
    const double C31794 = 2 * C31782;
    const double C31793 = 2. * C31780;
    const double C31792 = C31486 * C31781;
    const double C31791 = be * C31780;
    const double C31790 = C31779 / C31444;
    const double C31808 = C31798 / C31461;
    const double C31807 = C31797 / C31461;
    const double C31806 = C31796 / C31461;
    const double C31805 = C31794 / C31444;
    const double C31804 = C31793 / C31444;
    const double C31803 = C31793 / C31490;
    const double C31802 = C31792 / C31475;
    const double C31801 = 2 * C31791;
    const double C31812 = C31808 - C31799;
    const double C31811 = C31805 + C31795;
    const double C31810 = C31802 + C31500;
    const double C31809 = ae * C31801;
    const double C31818 = ae * C31812;
    const double C31817 = 2 * C31811;
    const double C31816 = C31811 * C31770;
    const double C31815 = C31810 * C31770;
    const double C31814 = be * C31810;
    const double C31813 = C31809 / C31475;
    const double C31826 = C31818 * C31770;
    const double C31825 = 2 * C31818;
    const double C31824 = C31818 * C31456;
    const double C31823 = C31817 + C31785;
    const double C31822 = C31816 / C31444;
    const double C31821 = C31815 / C31444;
    const double C31820 = 2 * C31814;
    const double C31819 = C31790 + C31813;
    const double C31834 = 2 * C31826;
    const double C31833 = ae * C31825;
    const double C31832 = 2 * C31824;
    const double C31831 = C31823 / C31461;
    const double C31830 = C31822 + C31806;
    const double C31829 = C31821 + C31803;
    const double C31828 = C31820 - C31486;
    const double C31827 = C31819 * C31770;
    const double C31841 = C31834 / C31444;
    const double C31840 = 6. * C31833;
    const double C31839 = C31832 / C31444;
    const double C31838 = C31830 * C31770;
    const double C31837 = be * C31829;
    const double C31836 = C31828 * ae;
    const double C31835 = C31827 / C31444;
    const double C31848 = C31841 + C31800;
    const double C31847 = C31840 / C31461;
    const double C31846 = C31807 - C31839;
    const double C31845 = C31838 / C31444;
    const double C31844 = 2 * C31837;
    const double C31843 = C31836 / C31444;
    const double C31842 = C31835 + C31771;
    const double C31852 = ae * C31846;
    const double C31851 = C31845 + C31831;
    const double C31850 = C31844 - C31804;
    const double C31849 = C31842 + C31843;
    const double C31855 = C31852 * C31770;
    const double C31854 = C31850 * ae;
    const double C31853 = C31849 * C31770;
    const double C31857 = 2 * C31855;
    const double C31856 = C31853 + C31819;
    const double C31859 = C31857 / C31444;
    const double C31858 = C31856 + C31854;
    const double C31860 = C31859 + C31847;
    const double C31875 = ae * C31479;
    const double C31874 = C31459 * C31457;
    const double C31873 = be * C33070;
    const double C31872 = be * C31479;
    const double C31871 = ae * C33261;
    const double C31870 = ae * C33229;
    const double C31869 = ae * C33070;
    const double C31868 = C31548 / C31461;
    const double C31867 = ae * zAB;
    const double C31886 = 4. * C31875;
    const double C31885 = 2 * C31874;
    const double C31884 = 2 * C31873;
    const double C31883 = 4 * C31872;
    const double C31882 = 2 * C31871;
    const double C31881 = 2 * C31870;
    const double C31880 = 2. * C31869;
    const double C31879 = C31459 * C31867;
    const double C31878 = std::pow(C31867, 2);
    const double C31877 = C31486 * C31867;
    const double C31876 = C31548 * C31867;
    const double C31897 = C31886 / C31461;
    const double C31896 = C31885 / C31444;
    const double C31895 = -C31884;
    const double C31894 = -C31883;
    const double C31893 = C31479 + C31881;
    const double C31892 = C31880 / C31461;
    const double C31891 = 2 * C31879;
    const double C31890 = 2. * C31877;
    const double C31889 = C31486 * C31878;
    const double C31888 = be * C31877;
    const double C31887 = C31876 / C31444;
    const double C31905 = C31895 / C31461;
    const double C31904 = C31894 / C31461;
    const double C31903 = C31893 / C31461;
    const double C31902 = C31891 / C31444;
    const double C31901 = C31890 / C31444;
    const double C31900 = C31890 / C31490;
    const double C31899 = C31889 / C31475;
    const double C31898 = 2 * C31888;
    const double C31909 = C31905 - C31896;
    const double C31908 = C31902 + C31892;
    const double C31907 = C31899 + C31500;
    const double C31906 = ae * C31898;
    const double C31915 = ae * C31909;
    const double C31914 = 2 * C31908;
    const double C31913 = C31908 * C31867;
    const double C31912 = C31907 * C31867;
    const double C31911 = be * C31907;
    const double C31910 = C31906 / C31475;
    const double C31923 = C31915 * C31867;
    const double C31922 = 2 * C31915;
    const double C31921 = C31915 * C31457;
    const double C31920 = C31914 + C31882;
    const double C31919 = C31913 / C31444;
    const double C31918 = C31912 / C31444;
    const double C31917 = 2 * C31911;
    const double C31916 = C31887 + C31910;
    const double C31931 = 2 * C31923;
    const double C31930 = ae * C31922;
    const double C31929 = 2 * C31921;
    const double C31928 = C31920 / C31461;
    const double C31927 = C31919 + C31903;
    const double C31926 = C31918 + C31900;
    const double C31925 = C31917 - C31486;
    const double C31924 = C31916 * C31867;
    const double C31938 = C31931 / C31444;
    const double C31937 = 6. * C31930;
    const double C31936 = C31929 / C31444;
    const double C31935 = C31927 * C31867;
    const double C31934 = be * C31926;
    const double C31933 = C31925 * ae;
    const double C31932 = C31924 / C31444;
    const double C31945 = C31938 + C31897;
    const double C31944 = C31937 / C31461;
    const double C31943 = C31904 - C31936;
    const double C31942 = C31935 / C31444;
    const double C31941 = 2 * C31934;
    const double C31940 = C31933 / C31444;
    const double C31939 = C31932 + C31868;
    const double C31949 = ae * C31943;
    const double C31948 = C31942 + C31928;
    const double C31947 = C31941 - C31901;
    const double C31946 = C31939 + C31940;
    const double C31952 = C31949 * C31867;
    const double C31951 = C31947 * ae;
    const double C31950 = C31946 * C31867;
    const double C31954 = 2 * C31952;
    const double C31953 = C31950 + C31916;
    const double C31956 = C31954 / C31444;
    const double C31955 = C31953 + C31951;
    const double C31957 = C31956 + C31944;
    const double C31999 = C31852 * C31456;
    const double C31998 = be * C31825;
    const double C31997 = std::pow(C31449, 2);
    const double C31996 = C31486 * C31449;
    const double C31995 = C31550 * C31449;
    const double C31994 = C31812 * C31456;
    const double C31993 = be * C31440;
    const double C31992 = be * C33263;
    const double C31991 = 2 * C31812;
    const double C31990 = ae * C31464;
    const double C31989 = C31514 * C31449;
    const double C31988 = ae * C31529;
    const double C31987 = C31595 * C31449;
    const double C31986 = std::pow(C31456, 2);
    const double C31985 = C31544 * C31456;
    const double C31984 = C31486 * C31456;
    const double C31983 = ae * C33262;
    const double C31982 = ae * C33230;
    const double C31981 = ae * C31431;
    const double C31980 = C31445 * C31449;
    const double C32020 = 2 * C31999;
    const double C32019 = 6 * C31998;
    const double C32018 = 2. * C31996;
    const double C32017 = C31486 * C31997;
    const double C32016 = be * C31996;
    const double C32015 = C31995 / C31444;
    const double C32014 = C31994 / C31444;
    const double C32013 = 2 * C31993;
    const double C32012 = 2 * C31992;
    const double C32011 = 4. * C31990;
    const double C32010 = 2 * C31989;
    const double C32009 = 6. * C31988;
    const double C32008 = 2 * C31987;
    const double C32007 = -2. * C31984;
    const double C32006 = C31486 * C31986;
    const double C32005 = C31985 / C31444;
    const double C32004 = ae * C31984;
    const double C32003 = 2 * C31983;
    const double C32002 = 2 * C31982;
    const double C32001 = 2. * C31981;
    const double C32000 = 2 * C31980;
    const double C32039 = C32020 / C31444;
    const double C32038 = -C32019;
    const double C32037 = C32018 / C31444;
    const double C32036 = C32018 / C31490;
    const double C32035 = C32017 / C31475;
    const double C32034 = 2 * C32016;
    const double C32033 = C31478 - C32013;
    const double C32032 = C31991 - C32012;
    const double C32031 = C32011 / C31461;
    const double C32030 = C32010 / C31444;
    const double C32029 = C32009 / C31461;
    const double C32028 = C32008 / C31444;
    const double C32027 = C32007 / C31444;
    const double C32026 = C32007 / C31490;
    const double C32025 = C32006 / C31475;
    const double C32024 = -2 * C32004;
    const double C32023 = C31464 + C32002;
    const double C32022 = C32001 / C31461;
    const double C32021 = C32000 / C31444;
    const double C32050 = C32038 / C31461;
    const double C32049 = C32035 + C31500;
    const double C32048 = ae * C32034;
    const double C32047 = C32033 / C31461;
    const double C32046 = C32032 / C31461;
    const double C32045 = C32030 + C32031;
    const double C32044 = C32028 + C32029;
    const double C32043 = C32025 + C31500;
    const double C32042 = be * C32024;
    const double C32041 = C32023 / C31461;
    const double C32040 = C32021 + C32022;
    const double C32060 = C32050 - C32039;
    const double C32059 = C32049 * C31449;
    const double C32058 = be * C32049;
    const double C32057 = C32048 / C31475;
    const double C32056 = C32047 - C32014;
    const double C32055 = C32043 * C31456;
    const double C32054 = ae * C32043;
    const double C32053 = C32042 / C31475;
    const double C32052 = 2 * C32040;
    const double C32051 = C32040 * C31449;
    const double C32069 = C32059 / C31444;
    const double C32068 = 2 * C32058;
    const double C32067 = C32015 + C32057;
    const double C32066 = C32056 * C31456;
    const double C32065 = C32055 / C31444;
    const double C32064 = 2 * C32054;
    const double C32063 = C32053 - C32005;
    const double C32062 = C32052 + C32003;
    const double C32061 = C32051 / C31444;
    const double C32079 = C32069 + C32036;
    const double C32078 = C32068 - C31486;
    const double C32077 = C32067 * C31449;
    const double C32076 = C32066 / C31444;
    const double C32075 = C32026 - C32065;
    const double C32074 = C32064 - C31486;
    const double C32073 = C32063 * C31456;
    const double C32072 = C32063 / C31444;
    const double C32071 = C32062 / C31461;
    const double C32070 = C32061 + C32041;
    const double C32087 = be * C32079;
    const double C32086 = C32078 * ae;
    const double C32085 = C32077 / C31444;
    const double C32084 = C32046 - C32076;
    const double C32083 = ae * C32075;
    const double C32082 = C32074 * be;
    const double C32081 = C32073 / C31444;
    const double C32080 = C32070 * C31449;
    const double C32094 = 2 * C32087;
    const double C32093 = C32086 / C31444;
    const double C32092 = C32085 + C31567;
    const double C32091 = 2 * C32083;
    const double C32090 = C32082 / C31444;
    const double C32089 = C31771 - C32081;
    const double C32088 = C32080 / C31444;
    const double C32099 = C32094 - C32037;
    const double C32098 = C32092 + C32093;
    const double C32097 = C32091 - C32027;
    const double C32096 = C32089 + C32090;
    const double C32095 = C32088 + C32071;
    const double C32103 = C32099 * ae;
    const double C32102 = C32098 * C31449;
    const double C32101 = C32097 * be;
    const double C32100 = C32096 * C31456;
    const double C32106 = C32102 + C32067;
    const double C32105 = C32101 / C31444;
    const double C32104 = C32100 / C31444;
    const double C32108 = C32106 + C32103;
    const double C32107 = C32072 - C32104;
    const double C32109 = C32107 + C32105;
    const double C32144 = ae * C32056;
    const double C32143 = ae * C32084;
    const double C32142 = be * C32056;
    const double C32141 = 2 * C31846;
    const double C32140 = C32060 * C31456;
    const double C32139 = be * C31846;
    const double C32138 = 2 * C31852;
    const double C32137 = C31846 * C31456;
    const double C32136 = be * C31812;
    const double C32135 = 2 * C32060;
    const double C32134 = ae * C33264;
    const double C32133 = ae * C33133;
    const double C32132 = 4. * C31458;
    const double C32131 = C31812 * C31770;
    const double C32130 = ae * C33136;
    const double C32129 = ae * C33263;
    const double C32128 = C32056 * C31770;
    const double C32127 = ae * C31977;
    const double C32126 = 3 * C32056;
    const double C32125 = C32084 * C31770;
    const double C32124 = C31770 * C31984;
    const double C32123 = C32063 * C31770;
    const double C32122 = C32043 * C31770;
    const double C32121 = C32096 * C31770;
    const double C32120 = 3. * C32043;
    const double C32119 = C32075 * C31770;
    const double C32118 = 3 * C32096;
    const double C32117 = C32109 * C31770;
    const double C32168 = 4 * C32144;
    const double C32167 = 4 * C32143;
    const double C32166 = 4 * C32142;
    const double C32165 = C32140 / C31444;
    const double C32164 = 6 * C32139;
    const double C32163 = C32137 / C31444;
    const double C32162 = 4 * C32136;
    const double C32161 = 2 * C32134;
    const double C32160 = 2 * C32133;
    const double C32159 = C32132 / C31461;
    const double C32158 = C32131 / C31444;
    const double C32157 = 2 * C32130;
    const double C32156 = 2 * C32129;
    const double C32155 = C32128 / C31444;
    const double C32154 = 2 * C32127;
    const double C32153 = C32125 / C31444;
    const double C32152 = C32124 / C31475;
    const double C32151 = C32123 / C31444;
    const double C32150 = C32122 / C31444;
    const double C32149 = C32121 + C32063;
    const double C32148 = C32120 / C31461;
    const double C32147 = C32119 / C31444;
    const double C32146 = C32118 / C31461;
    const double C32145 = C32117 / C31444;
    const double C32180 = C32141 + C32168;
    const double C32179 = C32141 - C32166;
    const double C32178 = C32138 - C32164;
    const double C32177 = C31825 - C32162;
    const double C32176 = C32158 + C32159;
    const double C32175 = C31991 + C32156;
    const double C32174 = C32126 + C32154;
    const double C32173 = C31500 - C32152;
    const double C32172 = C32151 + C31771;
    const double C32171 = C32150 + C32026;
    const double C32170 = C32147 + C32148;
    const double C32169 = C32145 + C32146;
    const double C32195 = C32180 / C31461;
    const double C32194 = C32179 / C31461;
    const double C32193 = C32178 / C31461;
    const double C32192 = C32177 / C31461;
    const double C32191 = 2 * C32176;
    const double C32190 = C32175 / C31461;
    const double C32189 = C32174 / C31461;
    const double C32188 = 2 * C32170;
    const double C32187 = 2 * C32173;
    const double C32186 = C32171 * C31770;
    const double C32185 = be * C32173;
    const double C32184 = 3 * C32171;
    const double C32183 = C32170 * C31770;
    const double C32182 = be * C32171;
    const double C32181 = be * C32170;
    const double C32207 = C32193 - C32165;
    const double C32206 = C32192 - C32163;
    const double C32205 = C32191 + C32056;
    const double C32204 = C32155 + C32190;
    const double C32203 = C32153 + C32189;
    const double C32202 = C32187 + C32043;
    const double C32201 = C32186 / C31444;
    const double C32200 = C32185 * ae;
    const double C32199 = C32184 + C32075;
    const double C32198 = C32183 / C31444;
    const double C32197 = C32182 * ae;
    const double C32196 = C32181 * ae;
    const double C32225 = C32206 * C31770;
    const double C32224 = 3 * C32206;
    const double C32223 = ae * C32206;
    const double C32222 = C32207 * C31770;
    const double C32221 = C32206 * C31456;
    const double C32220 = 3 * C32207;
    const double C32219 = C32207 * C31456;
    const double C32218 = be * C32206;
    const double C32217 = 2 * C32203;
    const double C32216 = C32205 + C32160;
    const double C32215 = C32204 * C31770;
    const double C32214 = 3 * C32204;
    const double C32213 = C32203 * C31770;
    const double C32212 = C32202 / C31461;
    const double C32211 = 2 * C32200;
    const double C32210 = C32199 / C31461;
    const double C32209 = 2 * C32197;
    const double C32208 = 2 * C32196;
    const double C32241 = C32225 / C31444;
    const double C32240 = C32224 + C32167;
    const double C32239 = 6 * C32223;
    const double C32238 = C32222 / C31444;
    const double C32237 = C32221 / C31444;
    const double C32236 = C32219 / C31444;
    const double C32235 = 6 * C32218;
    const double C32234 = C32216 / C31461;
    const double C32233 = C32215 / C31444;
    const double C32232 = C32214 + C32084;
    const double C32231 = C32213 / C31444;
    const double C32230 = C32201 + C32212;
    const double C32229 = C32211 / C31444;
    const double C32228 = C32198 + C32210;
    const double C32227 = C32149 + C32209;
    const double C32226 = C32208 / C31444;
    const double C32256 = C32241 + C32195;
    const double C32255 = C32240 / C31461;
    const double C32254 = C32135 + C32239;
    const double C32253 = C32194 - C32237;
    const double C32252 = C32135 - C32235;
    const double C32251 = C32233 + C32234;
    const double C32250 = C32232 + C32157;
    const double C32249 = 3 * C32230;
    const double C32248 = C32228 * C31770;
    const double C32247 = be * C32230;
    const double C32246 = C32172 + C32229;
    const double C32245 = C31770 * C32227;
    const double C32244 = be * C32228;
    const double C32243 = 3 * C32227;
    const double C32242 = C32169 + C32226;
    const double C32271 = C32253 * C31770;
    const double C32270 = C32254 / C31461;
    const double C32269 = ae * C32253;
    const double C32268 = C32252 / C31461;
    const double C32267 = 3 * C32251;
    const double C32266 = C32250 / C31461;
    const double C32265 = C32249 + C32188;
    const double C32264 = C32248 / C31444;
    const double C32263 = 2 * C32242;
    const double C32262 = 2 * C32247;
    const double C32261 = 2 * C32246;
    const double C32260 = C32245 / C31475;
    const double C32259 = 2 * C32244;
    const double C32258 = C32243 / C31444;
    const double C32257 = C32242 * C31770;
    const double C32283 = C32271 / C31444;
    const double C32282 = C32238 + C32270;
    const double C32281 = 6 * C32269;
    const double C32280 = C32268 - C32236;
    const double C32279 = C32267 + C32217;
    const double C32278 = C32231 + C32266;
    const double C32277 = C32265 / C31461;
    const double C32276 = C32262 - C32043;
    const double C32275 = C32261 + C32096;
    const double C32274 = C32259 - C32075;
    const double C32273 = C32258 + C32109;
    const double C32272 = C32257 / C31444;
    const double C32293 = C32283 + C32255;
    const double C32292 = C32220 + C32281;
    const double C32291 = C32280 * C31770;
    const double C32290 = C32279 + C32161;
    const double C32289 = C32278 * C31770;
    const double C32288 = C32264 + C32277;
    const double C32287 = C32276 * ae;
    const double C32286 = C32275 / C31461;
    const double C32285 = C32274 * ae;
    const double C32284 = C32273 / C31461;
    const double C32302 = C32292 / C31461;
    const double C32301 = C32291 / C31444;
    const double C32300 = C32290 / C31461;
    const double C32299 = C32289 / C31444;
    const double C32298 = be * C32288;
    const double C32297 = C32287 / C31444;
    const double C32296 = C32260 + C32286;
    const double C32295 = C32285 / C31444;
    const double C32294 = C32272 + C32284;
    const double C32307 = C32301 + C32302;
    const double C32306 = C32299 + C32300;
    const double C32305 = 2 * C32298;
    const double C32304 = C32296 + C32297;
    const double C32303 = C32294 + C32295;
    const double C32310 = C32305 - C32188;
    const double C32309 = 3 * C32304;
    const double C32308 = C32303 * C31770;
    const double C32313 = C32310 * ae;
    const double C32312 = C32309 + C32263;
    const double C32311 = C32308 / C31444;
    const double C32315 = C32313 / C31444;
    const double C32314 = C32312 / C31461;
    const double C32316 = C32311 + C32314;
    const double C32317 = C32316 + C32315;
    const double C32347 = C31949 * C31457;
    const double C32346 = be * C31922;
    const double C32345 = C31909 * C31457;
    const double C32344 = be * C31442;
    const double C32343 = be * C33265;
    const double C32342 = 2 * C31909;
    const double C32341 = std::pow(C31457, 2);
    const double C32340 = C31548 * C31457;
    const double C32339 = C31486 * C31457;
    const double C32356 = 2 * C32347;
    const double C32355 = 6 * C32346;
    const double C32354 = C32345 / C31444;
    const double C32353 = 2 * C32344;
    const double C32352 = 2 * C32343;
    const double C32351 = -2. * C32339;
    const double C32350 = C31486 * C32341;
    const double C32349 = C32340 / C31444;
    const double C32348 = ae * C32339;
    const double C32364 = C32356 / C31444;
    const double C32363 = -C32355;
    const double C32362 = C31479 - C32353;
    const double C32361 = C32342 - C32352;
    const double C32360 = C32351 / C31444;
    const double C32359 = C32351 / C31490;
    const double C32358 = C32350 / C31475;
    const double C32357 = -2 * C32348;
    const double C32369 = C32363 / C31461;
    const double C32368 = C32362 / C31461;
    const double C32367 = C32361 / C31461;
    const double C32366 = C32358 + C31500;
    const double C32365 = be * C32357;
    const double C32374 = C32369 - C32364;
    const double C32373 = C32368 - C32354;
    const double C32372 = C32366 * C31457;
    const double C32371 = ae * C32366;
    const double C32370 = C32365 / C31475;
    const double C32378 = C32373 * C31457;
    const double C32377 = C32372 / C31444;
    const double C32376 = 2 * C32371;
    const double C32375 = C32370 - C32349;
    const double C32383 = C32378 / C31444;
    const double C32382 = C32359 - C32377;
    const double C32381 = C32376 - C31486;
    const double C32380 = C32375 * C31457;
    const double C32379 = C32375 / C31444;
    const double C32387 = C32367 - C32383;
    const double C32386 = ae * C32382;
    const double C32385 = C32381 * be;
    const double C32384 = C32380 / C31444;
    const double C32390 = 2 * C32386;
    const double C32389 = C32385 / C31444;
    const double C32388 = C31868 - C32384;
    const double C32392 = C32390 - C32360;
    const double C32391 = C32388 + C32389;
    const double C32394 = C32392 * be;
    const double C32393 = C32391 * C31457;
    const double C32396 = C32394 / C31444;
    const double C32395 = C32393 / C31444;
    const double C32397 = C32379 - C32395;
    const double C32398 = C32397 + C32396;
    const double C32435 = ae * C32373;
    const double C32434 = ae * C32387;
    const double C32433 = be * C32373;
    const double C32432 = 2 * C31943;
    const double C32431 = C32374 * C31457;
    const double C32430 = be * C31943;
    const double C32429 = 2 * C31949;
    const double C32428 = C31943 * C31457;
    const double C32427 = be * C31909;
    const double C32426 = 2 * C32374;
    const double C32425 = ae * C33266;
    const double C32424 = ae * C33158;
    const double C32423 = 4. * C31459;
    const double C32422 = C31909 * C31867;
    const double C32421 = ae * C33161;
    const double C32420 = ae * C33265;
    const double C32419 = C32373 * C31867;
    const double C32418 = ae * C32337;
    const double C32417 = 3 * C32373;
    const double C32416 = C32387 * C31867;
    const double C32415 = C31867 * C32339;
    const double C32414 = C32375 * C31867;
    const double C32413 = C32366 * C31867;
    const double C32412 = C32391 * C31867;
    const double C32411 = 3. * C32366;
    const double C32410 = C32382 * C31867;
    const double C32409 = 3 * C32391;
    const double C32408 = C32398 * C31867;
    const double C32459 = 4 * C32435;
    const double C32458 = 4 * C32434;
    const double C32457 = 4 * C32433;
    const double C32456 = C32431 / C31444;
    const double C32455 = 6 * C32430;
    const double C32454 = C32428 / C31444;
    const double C32453 = 4 * C32427;
    const double C32452 = 2 * C32425;
    const double C32451 = 2 * C32424;
    const double C32450 = C32423 / C31461;
    const double C32449 = C32422 / C31444;
    const double C32448 = 2 * C32421;
    const double C32447 = 2 * C32420;
    const double C32446 = C32419 / C31444;
    const double C32445 = 2 * C32418;
    const double C32444 = C32416 / C31444;
    const double C32443 = C32415 / C31475;
    const double C32442 = C32414 / C31444;
    const double C32441 = C32413 / C31444;
    const double C32440 = C32412 + C32375;
    const double C32439 = C32411 / C31461;
    const double C32438 = C32410 / C31444;
    const double C32437 = C32409 / C31461;
    const double C32436 = C32408 / C31444;
    const double C32471 = C32432 + C32459;
    const double C32470 = C32432 - C32457;
    const double C32469 = C32429 - C32455;
    const double C32468 = C31922 - C32453;
    const double C32467 = C32449 + C32450;
    const double C32466 = C32342 + C32447;
    const double C32465 = C32417 + C32445;
    const double C32464 = C31500 - C32443;
    const double C32463 = C32442 + C31868;
    const double C32462 = C32441 + C32359;
    const double C32461 = C32438 + C32439;
    const double C32460 = C32436 + C32437;
    const double C32486 = C32471 / C31461;
    const double C32485 = C32470 / C31461;
    const double C32484 = C32469 / C31461;
    const double C32483 = C32468 / C31461;
    const double C32482 = 2 * C32467;
    const double C32481 = C32466 / C31461;
    const double C32480 = C32465 / C31461;
    const double C32479 = 2 * C32461;
    const double C32478 = 2 * C32464;
    const double C32477 = C32462 * C31867;
    const double C32476 = be * C32464;
    const double C32475 = 3 * C32462;
    const double C32474 = C32461 * C31867;
    const double C32473 = be * C32462;
    const double C32472 = be * C32461;
    const double C32498 = C32484 - C32456;
    const double C32497 = C32483 - C32454;
    const double C32496 = C32482 + C32373;
    const double C32495 = C32446 + C32481;
    const double C32494 = C32444 + C32480;
    const double C32493 = C32478 + C32366;
    const double C32492 = C32477 / C31444;
    const double C32491 = C32476 * ae;
    const double C32490 = C32475 + C32382;
    const double C32489 = C32474 / C31444;
    const double C32488 = C32473 * ae;
    const double C32487 = C32472 * ae;
    const double C32516 = C32497 * C31867;
    const double C32515 = 3 * C32497;
    const double C32514 = ae * C32497;
    const double C32513 = C32498 * C31867;
    const double C32512 = C32497 * C31457;
    const double C32511 = 3 * C32498;
    const double C32510 = C32498 * C31457;
    const double C32509 = be * C32497;
    const double C32508 = 2 * C32494;
    const double C32507 = C32496 + C32451;
    const double C32506 = C32495 * C31867;
    const double C32505 = 3 * C32495;
    const double C32504 = C32494 * C31867;
    const double C32503 = C32493 / C31461;
    const double C32502 = 2 * C32491;
    const double C32501 = C32490 / C31461;
    const double C32500 = 2 * C32488;
    const double C32499 = 2 * C32487;
    const double C32532 = C32516 / C31444;
    const double C32531 = C32515 + C32458;
    const double C32530 = 6 * C32514;
    const double C32529 = C32513 / C31444;
    const double C32528 = C32512 / C31444;
    const double C32527 = C32510 / C31444;
    const double C32526 = 6 * C32509;
    const double C32525 = C32507 / C31461;
    const double C32524 = C32506 / C31444;
    const double C32523 = C32505 + C32387;
    const double C32522 = C32504 / C31444;
    const double C32521 = C32492 + C32503;
    const double C32520 = C32502 / C31444;
    const double C32519 = C32489 + C32501;
    const double C32518 = C32440 + C32500;
    const double C32517 = C32499 / C31444;
    const double C32547 = C32532 + C32486;
    const double C32546 = C32531 / C31461;
    const double C32545 = C32426 + C32530;
    const double C32544 = C32485 - C32528;
    const double C32543 = C32426 - C32526;
    const double C32542 = C32524 + C32525;
    const double C32541 = C32523 + C32448;
    const double C32540 = 3 * C32521;
    const double C32539 = C32519 * C31867;
    const double C32538 = be * C32521;
    const double C32537 = C32463 + C32520;
    const double C32536 = C31867 * C32518;
    const double C32535 = be * C32519;
    const double C32534 = 3 * C32518;
    const double C32533 = C32460 + C32517;
    const double C32562 = C32544 * C31867;
    const double C32561 = C32545 / C31461;
    const double C32560 = ae * C32544;
    const double C32559 = C32543 / C31461;
    const double C32558 = 3 * C32542;
    const double C32557 = C32541 / C31461;
    const double C32556 = C32540 + C32479;
    const double C32555 = C32539 / C31444;
    const double C32554 = 2 * C32533;
    const double C32553 = 2 * C32538;
    const double C32552 = 2 * C32537;
    const double C32551 = C32536 / C31475;
    const double C32550 = 2 * C32535;
    const double C32549 = C32534 / C31444;
    const double C32548 = C32533 * C31867;
    const double C32574 = C32562 / C31444;
    const double C32573 = C32529 + C32561;
    const double C32572 = 6 * C32560;
    const double C32571 = C32559 - C32527;
    const double C32570 = C32558 + C32508;
    const double C32569 = C32522 + C32557;
    const double C32568 = C32556 / C31461;
    const double C32567 = C32553 - C32366;
    const double C32566 = C32552 + C32391;
    const double C32565 = C32550 - C32382;
    const double C32564 = C32549 + C32398;
    const double C32563 = C32548 / C31444;
    const double C32584 = C32574 + C32546;
    const double C32583 = C32511 + C32572;
    const double C32582 = C32571 * C31867;
    const double C32581 = C32570 + C32452;
    const double C32580 = C32569 * C31867;
    const double C32579 = C32555 + C32568;
    const double C32578 = C32567 * ae;
    const double C32577 = C32566 / C31461;
    const double C32576 = C32565 * ae;
    const double C32575 = C32564 / C31461;
    const double C32593 = C32583 / C31461;
    const double C32592 = C32582 / C31444;
    const double C32591 = C32581 / C31461;
    const double C32590 = C32580 / C31444;
    const double C32589 = be * C32579;
    const double C32588 = C32578 / C31444;
    const double C32587 = C32551 + C32577;
    const double C32586 = C32576 / C31444;
    const double C32585 = C32563 + C32575;
    const double C32598 = C32592 + C32593;
    const double C32597 = C32590 + C32591;
    const double C32596 = 2 * C32589;
    const double C32595 = C32587 + C32588;
    const double C32594 = C32585 + C32586;
    const double C32601 = C32596 - C32479;
    const double C32600 = 3 * C32595;
    const double C32599 = C32594 * C31867;
    const double C32604 = C32601 * ae;
    const double C32603 = C32600 + C32554;
    const double C32602 = C32599 / C31444;
    const double C32606 = C32604 / C31444;
    const double C32605 = C32603 / C31461;
    const double C32607 = C32602 + C32605;
    const double C32608 = C32607 + C32606;
    const double C32647 = 2 * C31570;
    const double C32646 = C31625 * C31449;
    const double C32645 = 2 * C31713;
    const double C32644 = C31497 / C31444;
    const double C32643 = C31996 / C31444;
    const double C32642 = C31539 * C31449;
    const double C32641 = C32067 + C31599;
    const double C32640 = C31673 * C31449;
    const double C32639 = C31746 * C31449;
    const double C32638 = 4 * C31514;
    const double C32637 = C31578 * C31449;
    const double C32636 = 6 * C31595;
    const double C32635 = C31664 * C31449;
    const double C32634 = ae * C33277;
    const double C32633 = 2 * C31592;
    const double C32632 = ae * C33246;
    const double C32631 = C32040 + C31501;
    const double C32630 = C31543 * C31449;
    const double C32629 = C31645 * C31449;
    const double C32662 = C32646 / C31444;
    const double C32661 = C32645 / C31444;
    const double C32660 = C32643 - C32644;
    const double C32659 = C32642 / C31444;
    const double C32658 = C32641 / C31461;
    const double C32657 = C32640 / C31444;
    const double C32656 = C32639 / C31444;
    const double C32655 = C31529 + C32638;
    const double C32654 = C32637 / C31444;
    const double C32653 = C31613 + C32636;
    const double C32652 = C32635 / C31444;
    const double C32651 = 2 * C32634;
    const double C32650 = 2 * C32632;
    const double C32649 = C32630 / C31444;
    const double C32648 = C32629 / C31444;
    const double C32667 = C32660 / C31461;
    const double C32666 = C32657 + C32658;
    const double C32665 = C32655 / C31461;
    const double C32664 = C32653 / C31461;
    const double C32663 = C32631 + C32650;
    const double C32671 = C32659 + C32667;
    const double C32670 = C32654 + C32665;
    const double C32669 = C32652 + C32664;
    const double C32668 = C32663 / C31461;
    const double C32674 = 2 * C32671;
    const double C32673 = be * C32671;
    const double C32672 = C32649 + C32668;
    const double C32677 = C32674 + C32647;
    const double C32676 = 2 * C32673;
    const double C32675 = 2 * C32672;
    const double C32680 = C32677 / C31461;
    const double C32679 = C32676 + C32644;
    const double C32678 = C32675 + C32633;
    const double C32683 = C32662 + C32680;
    const double C32682 = C32679 * ae;
    const double C32681 = C32678 + C32651;
    const double C32686 = be * C32683;
    const double C32685 = C32682 / C31444;
    const double C32684 = C32681 / C31461;
    const double C32689 = 2 * C32686;
    const double C32688 = C32666 + C32685;
    const double C32687 = C32648 + C32684;
    const double C32691 = C32689 - C32647;
    const double C32690 = 2 * C32688;
    const double C32693 = C32691 * ae;
    const double C32692 = C32690 + C32661;
    const double C32695 = C32693 / C31444;
    const double C32694 = C32692 / C31461;
    const double C32696 = C32656 + C32694;
    const double C32697 = C32696 + C32695;
    const double C32719 = 4 * C31818;
    const double C32718 = C31846 * C31770;
    const double C32717 = 6 * C31852;
    const double C32716 = C32060 * C31770;
    const double C32715 = ae * C33274;
    const double C32714 = C31830 + C32191;
    const double C32713 = ae * C33174;
    const double C32712 = C31811 + C31812;
    const double C32711 = C32176 * C31770;
    const double C32710 = C31810 + C32187;
    const double C32709 = C31849 + C32261;
    const double C32708 = C31984 / C31444;
    const double C32707 = C31780 / C31444;
    const double C32706 = C32173 * C31770;
    const double C32705 = C31819 + C32063;
    const double C32704 = C32246 * C31770;
    const double C32732 = C31825 + C32719;
    const double C32731 = C32718 / C31444;
    const double C32730 = C32138 + C32717;
    const double C32729 = C32716 / C31444;
    const double C32728 = 2 * C32715;
    const double C32727 = 2 * C32713;
    const double C32726 = C32711 / C31444;
    const double C32725 = C32710 / C31461;
    const double C32724 = C32709 / C31461;
    const double C32723 = C32707 - C32708;
    const double C32722 = C32706 / C31444;
    const double C32721 = C32705 / C31461;
    const double C32720 = C32704 / C31444;
    const double C32738 = C32732 / C31461;
    const double C32737 = C32730 / C31461;
    const double C32736 = C32714 + C32728;
    const double C32735 = C32712 + C32727;
    const double C32734 = C32723 / C31461;
    const double C32733 = C32720 + C32721;
    const double C32743 = C32731 + C32738;
    const double C32742 = C32729 + C32737;
    const double C32741 = C32736 / C31461;
    const double C32740 = C32735 / C31461;
    const double C32739 = C32722 + C32734;
    const double C32746 = C32726 + C32740;
    const double C32745 = C32739 * C31770;
    const double C32744 = be * C32739;
    const double C32749 = C32746 * C31770;
    const double C32748 = C32745 / C31444;
    const double C32747 = 2 * C32744;
    const double C32752 = C32749 / C31444;
    const double C32751 = C32748 + C32725;
    const double C32750 = C32747 + C32708;
    const double C32755 = C32752 + C32741;
    const double C32754 = be * C32751;
    const double C32753 = C32750 * ae;
    const double C32757 = 2 * C32754;
    const double C32756 = C32753 / C31444;
    const double C32759 = C32757 - C32187;
    const double C32758 = C32733 + C32756;
    const double C32761 = C32759 * ae;
    const double C32760 = C32758 * C31770;
    const double C32763 = C32761 / C31444;
    const double C32762 = C32760 / C31444;
    const double C32764 = C32762 + C32724;
    const double C32765 = C32764 + C32763;
    const double C32807 = 4 * C31915;
    const double C32806 = C31943 * C31867;
    const double C32805 = 6 * C31949;
    const double C32804 = C32374 * C31867;
    const double C32803 = ae * C33275;
    const double C32802 = C31927 + C32482;
    const double C32801 = ae * C33180;
    const double C32800 = C31908 + C31909;
    const double C32799 = C32467 * C31867;
    const double C32798 = C31907 + C32478;
    const double C32797 = C31946 + C32552;
    const double C32796 = C32339 / C31444;
    const double C32795 = C31877 / C31444;
    const double C32794 = C32464 * C31867;
    const double C32793 = C31916 + C32375;
    const double C32792 = C32537 * C31867;
    const double C32820 = C31922 + C32807;
    const double C32819 = C32806 / C31444;
    const double C32818 = C32429 + C32805;
    const double C32817 = C32804 / C31444;
    const double C32816 = 2 * C32803;
    const double C32815 = 2 * C32801;
    const double C32814 = C32799 / C31444;
    const double C32813 = C32798 / C31461;
    const double C32812 = C32797 / C31461;
    const double C32811 = C32795 - C32796;
    const double C32810 = C32794 / C31444;
    const double C32809 = C32793 / C31461;
    const double C32808 = C32792 / C31444;
    const double C32826 = C32820 / C31461;
    const double C32825 = C32818 / C31461;
    const double C32824 = C32802 + C32816;
    const double C32823 = C32800 + C32815;
    const double C32822 = C32811 / C31461;
    const double C32821 = C32808 + C32809;
    const double C32831 = C32819 + C32826;
    const double C32830 = C32817 + C32825;
    const double C32829 = C32824 / C31461;
    const double C32828 = C32823 / C31461;
    const double C32827 = C32810 + C32822;
    const double C32834 = C32814 + C32828;
    const double C32833 = C32827 * C31867;
    const double C32832 = be * C32827;
    const double C32837 = C32834 * C31867;
    const double C32836 = C32833 / C31444;
    const double C32835 = 2 * C32832;
    const double C32840 = C32837 / C31444;
    const double C32839 = C32836 + C32813;
    const double C32838 = C32835 + C32796;
    const double C32843 = C32840 + C32829;
    const double C32842 = be * C32839;
    const double C32841 = C32838 * ae;
    const double C32845 = 2 * C32842;
    const double C32844 = C32841 / C31444;
    const double C32847 = C32845 - C32478;
    const double C32846 = C32821 + C32844;
    const double C32849 = C32847 * ae;
    const double C32848 = C32846 * C31867;
    const double C32851 = C32849 / C31444;
    const double C32850 = C32848 / C31444;
    const double C32852 = C32850 + C32812;
    const double C32853 = C32852 + C32851;
    const double C32884 = ae * C33270;
    const double C32883 = 2 * C32204;
    const double C32882 = 2 * C32746;
    const double C32881 = C32251 * C31770;
    const double C32880 = 2 * C32171;
    const double C32879 = 2 * C32739;
    const double C32878 = C32230 * C31770;
    const double C32877 = 2 * C32227;
    const double C32876 = 2 * C32758;
    const double C32875 = C32304 * C31770;
    const double C32891 = 2 * C32884;
    const double C32890 = C32882 + C32883;
    const double C32889 = C32881 / C31444;
    const double C32888 = C32879 + C32880;
    const double C32887 = C32878 / C31444;
    const double C32886 = C32877 / C31444;
    const double C32885 = C32875 / C31444;
    const double C32894 = C32890 + C32891;
    const double C32893 = C32888 / C31461;
    const double C32892 = C32876 + C32886;
    const double C32897 = C32894 / C31461;
    const double C32896 = C32887 + C32893;
    const double C32895 = C32892 / C31461;
    const double C32900 = C32889 + C32897;
    const double C32899 = be * C32896;
    const double C32898 = C32885 + C32895;
    const double C32901 = 2 * C32899;
    const double C32902 = C32901 - C32880;
    const double C32903 = C32902 * ae;
    const double C32904 = C32903 / C31444;
    const double C32905 = C32898 + C32904;
    const double C32933 = C32049 + C31556;
    const double C32932 = C32671 * C31449;
    const double C32931 = C32098 + C31688;
    const double C32930 = C32688 * C31449;
    const double C32929 = ae * C33273;
    const double C32928 = C32070 + C31560;
    const double C32927 = C32672 * C31449;
    const double C32939 = C32933 / C31461;
    const double C32938 = C32932 / C31444;
    const double C32937 = C32931 / C31461;
    const double C32936 = C32930 / C31444;
    const double C32935 = 2 * C32929;
    const double C32934 = C32927 / C31444;
    const double C32942 = C32938 + C32939;
    const double C32941 = C32936 + C32937;
    const double C32940 = C32928 + C32935;
    const double C32944 = be * C32942;
    const double C32943 = C32940 / C31461;
    const double C32946 = 2 * C32944;
    const double C32945 = C32934 + C32943;
    const double C32947 = C32946 - C31556;
    const double C32948 = C32947 * ae;
    const double C32949 = C32948 / C31444;
    const double C32950 = C32941 + C32949;
    const double C32987 = ae * C33271;
    const double C32986 = 2 * C32495;
    const double C32985 = 2 * C32834;
    const double C32984 = C32542 * C31867;
    const double C32983 = 2 * C32462;
    const double C32982 = 2 * C32827;
    const double C32981 = C32521 * C31867;
    const double C32980 = 2 * C32518;
    const double C32979 = 2 * C32846;
    const double C32978 = C32595 * C31867;
    const double C32994 = 2 * C32987;
    const double C32993 = C32985 + C32986;
    const double C32992 = C32984 / C31444;
    const double C32991 = C32982 + C32983;
    const double C32990 = C32981 / C31444;
    const double C32989 = C32980 / C31444;
    const double C32988 = C32978 / C31444;
    const double C32997 = C32993 + C32994;
    const double C32996 = C32991 / C31461;
    const double C32995 = C32979 + C32989;
    const double C33000 = C32997 / C31461;
    const double C32999 = C32990 + C32996;
    const double C32998 = C32995 / C31461;
    const double C33003 = C32992 + C33000;
    const double C33002 = be * C32999;
    const double C33001 = C32988 + C32998;
    const double C33004 = 2 * C33002;
    const double C33005 = C33004 - C32983;
    const double C33006 = C33005 * ae;
    const double C33007 = C33006 / C31444;
    const double C33008 = C33001 + C33007;
    const double C33357 = ae * C32495;
    const double C33356 = 2 * C32831;
    const double C33355 = C32547 * C31867;
    const double C33354 = 2 * C32573;
    const double C33353 = C32456 - C32484;
    const double C33352 = C31646 - C31594;
    const double C33351 = ae * C31543;
    const double C33350 = C32045 + C31578;
    const double C33349 = C32670 * C31449;
    const double C33348 = ae * C32204;
    const double C33347 = 2 * C32743;
    const double C33346 = C32256 * C31770;
    const double C33345 = 2 * C32282;
    const double C33344 = C32165 - C32193;
    const double C33343 = ae * C32467;
    const double C33342 = C31945 + C31943;
    const double C33341 = C32831 * C31867;
    const double C33340 = ae * C32831;
    const double C33339 = C31957 + C32374;
    const double C33338 = C32830 * C31867;
    const double C33337 = C32364 - C32369;
    const double C33336 = ae * C32176;
    const double C33335 = C31848 + C31846;
    const double C33334 = C32743 * C31770;
    const double C33333 = ae * C32743;
    const double C33332 = C31860 + C32060;
    const double C33331 = C32742 * C31770;
    const double C33330 = C31694 - C31648;
    const double C33329 = C32039 - C32050;
    const double C33328 = ae * C31592;
    const double C33327 = 2 * C32670;
    const double C33326 = C31682 * C31449;
    const double C33325 = 2 * C31738;
    const double C33324 = ae * C32670;
    const double C33323 = C32044 + C31664;
    const double C33322 = C32669 * C31449;
    const double C33321 = ae * C32547;
    const double C33320 = 2 * C32830;
    const double C33319 = C32573 * C31867;
    const double C33318 = ae * C32584;
    const double C33317 = 3 * C32573;
    const double C33316 = C32598 * C31867;
    const double C33315 = C32527 - C32559;
    const double C33314 = ae * C32256;
    const double C33313 = 2 * C32742;
    const double C33312 = C32282 * C31770;
    const double C33311 = ae * C32293;
    const double C33310 = 3 * C32282;
    const double C33309 = C32307 * C31770;
    const double C33308 = -2 * C31595;
    const double C33307 = C32236 - C32268;
    const double C33306 = ae * C32040;
    const double C33305 = C32045 * C31449;
    const double C33304 = 2 * C32044;
    const double C33303 = ae * C32045;
    const double C33302 = C32044 * C31449;
    const double C33301 = -2 * C31949;
    const double C33300 = ae * C31908;
    const double C33299 = C31945 * C31867;
    const double C33298 = 2 * C31957;
    const double C33297 = ae * C31945;
    const double C33296 = C31957 * C31867;
    const double C33295 = ae * C31811;
    const double C33294 = C31848 * C31770;
    const double C33293 = 2 * C31860;
    const double C33292 = ae * C31848;
    const double C33291 = C31860 * C31770;
    const double C33290 = C31728 - C31707;
    const double C33289 = C31808 - C31896;
    const double C33288 = -2 * C31852;
    const double C33287 = ae * C31682;
    const double C33286 = 2 * C32669;
    const double C33285 = C31738 * C31449;
    const double C33284 = ae * C31721;
    const double C33283 = 3 * C31738;
    const double C33282 = C31752 * C31449;
    const double C33409 = 4 * C33357;
    const double C33408 = C33356 + C32497;
    const double C33407 = C33355 / C31444;
    const double C33406 = 4 * C33351;
    const double C33405 = C33349 / C31444;
    const double C33404 = 4 * C33348;
    const double C33403 = C33347 + C32206;
    const double C33402 = C33346 / C31444;
    const double C33401 = 4 * C33343;
    const double C33400 = C33341 / C31444;
    const double C33399 = 6 * C33340;
    const double C33398 = C33338 / C31444;
    const double C33397 = 4 * C33336;
    const double C33396 = C33334 / C31444;
    const double C33395 = 6 * C33333;
    const double C33394 = C33331 / C31444;
    const double C33393 = 4 * C33328;
    const double C33392 = C33327 + C31630;
    const double C33391 = C33326 / C31444;
    const double C33390 = 6 * C33324;
    const double C33389 = C33322 / C31444;
    const double C33388 = 6 * C33321;
    const double C33387 = C33320 + C32498;
    const double C33386 = C33319 / C31444;
    const double C33385 = 6 * C33318;
    const double C33384 = C33317 + C32571;
    const double C33383 = C33316 / C31444;
    const double C33382 = 6 * C33314;
    const double C33381 = C33313 + C32207;
    const double C33380 = C33312 / C31444;
    const double C33379 = 6 * C33311;
    const double C33378 = C33310 + C32280;
    const double C33377 = C33309 / C31444;
    const double C33376 = 4 * C33306;
    const double C33375 = C33305 / C31444;
    const double C33374 = 6 * C33303;
    const double C33373 = C33302 / C31444;
    const double C33372 = 4 * C33300;
    const double C33371 = C33299 / C31444;
    const double C33370 = 6 * C33297;
    const double C33369 = C33296 / C31444;
    const double C33368 = 4 * C33295;
    const double C33367 = C33294 / C31444;
    const double C33366 = 6 * C33292;
    const double C33365 = C33291 / C31444;
    const double C33364 = ae * C33289;
    const double C33363 = 6 * C33287;
    const double C33362 = C33286 + C31708;
    const double C33361 = C33285 / C31444;
    const double C33360 = 6 * C33284;
    const double C33359 = C33283 + C31736;
    const double C33358 = C33282 / C31444;
    const double C33431 = C33408 + C33409;
    const double C33430 = C33350 + C33406;
    const double C33429 = C33403 + C33404;
    const double C33428 = C33342 + C33401;
    const double C33427 = C33339 + C33399;
    const double C33426 = C33335 + C33397;
    const double C33425 = C33332 + C33395;
    const double C33424 = C33392 + C33393;
    const double C33423 = C33323 + C33390;
    const double C33422 = C33387 + C33388;
    const double C33421 = C33384 + C33385;
    const double C33420 = C33381 + C33382;
    const double C33419 = C33378 + C33379;
    const double C33418 = C31529 + C33376;
    const double C33417 = C31613 + C33374;
    const double C33416 = C31922 + C33372;
    const double C33415 = C32429 + C33370;
    const double C33414 = C31825 + C33368;
    const double C33413 = C32138 + C33366;
    const double C33412 = C33364 * C31457;
    const double C33411 = C33362 + C33363;
    const double C33410 = C33359 + C33360;
    const double C33453 = C33431 / C31461;
    const double C33452 = C33430 / C31461;
    const double C33451 = C33429 / C31461;
    const double C33450 = C33428 / C31461;
    const double C33449 = C33427 / C31461;
    const double C33448 = C33426 / C31461;
    const double C33447 = C33425 / C31461;
    const double C33446 = C33424 / C31461;
    const double C33445 = C33423 / C31461;
    const double C33444 = C33422 / C31461;
    const double C33443 = C33421 / C31461;
    const double C33442 = C33420 / C31461;
    const double C33441 = C33419 / C31461;
    const double C33440 = C33418 / C31461;
    const double C33439 = C33417 / C31461;
    const double C33438 = C33416 / C31461;
    const double C33437 = C33415 / C31461;
    const double C33436 = C33414 / C31461;
    const double C33435 = C33413 / C31461;
    const double C33434 = 2 * C33412;
    const double C33433 = C33411 / C31461;
    const double C33432 = C33410 / C31461;
    const double C33475 = C33407 + C33453;
    const double C33474 = C33405 + C33452;
    const double C33473 = C33402 + C33451;
    const double C33472 = C33400 + C33450;
    const double C33471 = C33398 + C33449;
    const double C33470 = C33396 + C33448;
    const double C33469 = C33394 + C33447;
    const double C33468 = C33391 + C33446;
    const double C33467 = C33389 + C33445;
    const double C33466 = C33386 + C33444;
    const double C33465 = C33383 + C33443;
    const double C33464 = C33380 + C33442;
    const double C33463 = C33377 + C33441;
    const double C33462 = C33375 + C33440;
    const double C33461 = C33373 + C33439;
    const double C33460 = C33371 + C33438;
    const double C33459 = C33369 + C33437;
    const double C33458 = C33367 + C33436;
    const double C33457 = C33365 + C33435;
    const double C33456 = C33434 / C31444;
    const double C33455 = C33361 + C33433;
    const double C33454 = C33358 + C33432;
    const double C33500 = ae * C33475;
    const double C33499 = 2 * C33471;
    const double C33498 = C33466 * C31867;
    const double C33497 = ae * C33474;
    const double C33496 = C33461 + C33286;
    const double C33495 = C33467 * C31449;
    const double C33494 = ae * C33473;
    const double C33493 = 2 * C33469;
    const double C33492 = C33464 * C31770;
    const double C33491 = ae * C33472;
    const double C33490 = C33459 + C33320;
    const double C33489 = C33471 * C31867;
    const double C33488 = ae * C33470;
    const double C33487 = C33457 + C33313;
    const double C33486 = C33469 * C31770;
    const double C33485 = ae * C33468;
    const double C33484 = 2 * C33467;
    const double C33483 = C33455 * C31449;
    const double C33482 = ae * C33462;
    const double C33481 = C33461 * C31449;
    const double C33480 = ae * C33460;
    const double C33479 = C33459 * C31867;
    const double C33478 = ae * C33458;
    const double C33477 = C33457 * C31770;
    const double C33476 = C31904 - C33456;
    const double C33522 = 6 * C33500;
    const double C33521 = C33499 + C33354;
    const double C33520 = C33498 / C31444;
    const double C33519 = 6 * C33497;
    const double C33518 = C33495 / C31444;
    const double C33517 = 6 * C33494;
    const double C33516 = C33493 + C33345;
    const double C33515 = C33492 / C31444;
    const double C33514 = 6 * C33491;
    const double C33513 = C33489 / C31444;
    const double C33512 = 6 * C33488;
    const double C33511 = C33486 / C31444;
    const double C33510 = 6 * C33485;
    const double C33509 = C33484 + C33325;
    const double C33508 = C33483 / C31444;
    const double C33507 = 6 * C33482;
    const double C33506 = C33481 / C31444;
    const double C33505 = 6 * C33480;
    const double C33504 = C33479 / C31444;
    const double C33503 = 6 * C33478;
    const double C33502 = C33477 / C31444;
    const double C33501 = ae * C33476;
    const double C33532 = C33521 + C33522;
    const double C33531 = C33496 + C33519;
    const double C33530 = C33516 + C33517;
    const double C33529 = C33490 + C33514;
    const double C33528 = C33487 + C33512;
    const double C33527 = C33509 + C33510;
    const double C33526 = C33304 + C33507;
    const double C33525 = C33298 + C33505;
    const double C33524 = C33293 + C33503;
    const double C33523 = -2 * C33501;
    const double C33541 = C33532 / C31461;
    const double C33540 = C33531 / C31461;
    const double C33539 = C33530 / C31461;
    const double C33538 = C33529 / C31461;
    const double C33537 = C33528 / C31461;
    const double C33536 = C33527 / C31461;
    const double C33535 = C33526 / C31461;
    const double C33534 = C33525 / C31461;
    const double C33533 = C33524 / C31461;
    const double C33550 = C33520 + C33541;
    const double C33549 = C33518 + C33540;
    const double C33548 = C33515 + C33539;
    const double C33547 = C33513 + C33538;
    const double C33546 = C33511 + C33537;
    const double C33545 = C33508 + C33536;
    const double C33544 = C33506 + C33535;
    const double C33543 = C33504 + C33534;
    const double C33542 = C33502 + C33533;
    const double gx300300 =
        C31727 * C31544 * C33070 -
        (((C33454 * C31449) / C31444 +
          (3 * C33455 + 2 * C31752 +
           6 * ae *
               ((C31721 * C31449) / C31444 +
                (3 * C31682 + C31680 + 4 * ae * C31643) / C31461)) /
              C31461) *
         std::pow(C33070, 2)) /
            2.0 +
        C31727 * C33070 * C31548;
    const double gx300030 = (C33070 * C31767 * C33290) / 2.0 +
                            (C33070 * C31590 * C31858) / C31444 +
                            C31590 * C31767 * C31548;
    const double gx300003 = (C31864 * C33070 * C33290) / 2.0 +
                            C31590 * C31544 * C31864 +
                            (C31590 * C33070 * C31955) / C31444;
    const double gx300210 = C31691 * C31819 * C33070 -
                            (C33070 * C33227 * C33454) / 2.0 +
                            C31691 * C33227 * C31548;
    const double gx300201 = C31691 * C31544 * C33229 -
                            (C33229 * C33070 * C33454) / 2.0 +
                            C31691 * C33070 * C31916;
    const double gx300021 = (C33229 * C33260 * C33290) / 2.0 +
                            C31590 * C31849 * C33229 + C31590 * C33260 * C31916;
    const double gx300120 = C31643 * C31849 * C33070 -
                            (C33070 * C33260 * C31752) / 2.0 +
                            C31643 * C33260 * C31548;
    const double gx300102 = C31643 * C31544 * C33261 -
                            (C33261 * C33070 * C31752) / 2.0 +
                            C31643 * C33070 * C31946;
    const double gx300012 = (C33261 * C33227 * C33290) / 2.0 +
                            C31590 * C31819 * C33261 + C31590 * C33227 * C31946;
    const double gx300111 = C31643 * C31819 * C33229 -
                            (C33229 * C33227 * C31752) / 2.0 +
                            C31643 * C33227 * C31916;
    const double gx030300 = C32095 * C32109 * C33070 -
                            (C33070 * C31977 * C33544) / 2.0 +
                            C32095 * C31977 * C31548;
    const double gx030030 = (C33070 * C32113 * C33308) / 2.0 +
                            2 * C31445 * C32317 * C33070 +
                            2 * C31445 * C32113 * C31548;
    const double gx030003 = (C31864 * C31977 * C33308) / 2.0 +
                            2 * C31445 * C32109 * C31864 +
                            (2 * C31445 * C31977 * C31955) / C31444;
    const double gx030210 = C32070 * C32242 * C33070 -
                            (C33070 * C33136 * C33461) / 2.0 +
                            C32070 * C33136 * C31548;
    const double gx030201 = C32070 * C32109 * C33229 -
                            (C33229 * C31977 * C33461) / 2.0 +
                            C32070 * C31977 * C31916;
    const double gx030021 = (C33229 * C33264 * C33308) / 2.0 +
                            2 * C31445 * C32303 * C33229 +
                            2 * C31445 * C33264 * C31916;
    const double gx030120 = C32040 * C32303 * C33070 -
                            (C33070 * C33264 * C32044) / 2.0 +
                            C32040 * C33264 * C31548;
    const double gx030102 = C32040 * C32109 * C33261 -
                            (C33261 * C31977 * C32044) / 2.0 +
                            C32040 * C31977 * C31946;
    const double gx030012 = (C33261 * C33136 * C33308) / 2.0 +
                            2 * C31445 * C32242 * C33261 +
                            2 * C31445 * C33136 * C31946;
    const double gx030111 = C32040 * C32242 * C33229 -
                            (C33229 * C33136 * C32044) / 2.0 +
                            C32040 * C33136 * C31916;
    const double gx003300 = C32095 * C31544 * C32337 -
                            (C32337 * C33070 * C33544) / 2.0 +
                            C32095 * C33070 * C32398;
    const double gx003030 = (C32337 * C31767 * C33308) / 2.0 +
                            (C32337 * 2 * C31445 * C31858) / C31444 +
                            2 * C31445 * C31767 * C32398;
    const double gx003003 = (C32404 * C33070 * C33308) / 2.0 +
                            2 * C31445 * C31544 * C32404 +
                            2 * C31445 * C33070 * C32608;
    const double gx003210 = C32070 * C31819 * C32337 -
                            (C32337 * C33227 * C33461) / 2.0 +
                            C32070 * C33227 * C32398;
    const double gx003201 = C32070 * C31544 * C33161 -
                            (C33161 * C33070 * C33461) / 2.0 +
                            C32070 * C33070 * C32533;
    const double gx003021 = (C33161 * C33260 * C33308) / 2.0 +
                            2 * C31445 * C31849 * C33161 +
                            2 * C31445 * C33260 * C32533;
    const double gx003120 = C32040 * C31849 * C32337 -
                            (C32337 * C33260 * C32044) / 2.0 +
                            C32040 * C33260 * C32398;
    const double gx003102 = C32040 * C31544 * C33266 -
                            (C33266 * C33070 * C32044) / 2.0 +
                            C32040 * C33070 * C32594;
    const double gx003012 = (C33266 * C33227 * C33308) / 2.0 +
                            2 * C31445 * C31819 * C33266 +
                            2 * C31445 * C33227 * C32594;
    const double gx003111 = C32040 * C31819 * C33161 -
                            (C33161 * C33227 * C32044) / 2.0 +
                            C32040 * C33227 * C32533;
    const double gx210300 = C32687 * C32063 * C33070 -
                            (C33070 * C31440 * C33545) / 2.0 +
                            C32687 * C31440 * C31548;
    const double gx210030 = (C33070 * C32701 * C33330) / 2.0 +
                            C31541 * C32765 * C33070 + C31541 * C32701 * C31548;
    const double gx210003 = (C31864 * C31440 * C33330) / 2.0 +
                            C31541 * C32063 * C31864 +
                            (C31541 * C31440 * C31955) / C31444;
    const double gx210210 = C31645 * C32246 * C33070 -
                            (C33070 * C33174 * C33455) / 2.0 +
                            C31645 * C33174 * C31548;
    const double gx210201 = C31645 * C32063 * C33229 -
                            (C33229 * C31440 * C33455) / 2.0 +
                            C31645 * C31440 * C31916;
    const double gx210021 = (C33229 * C33274 * C33330) / 2.0 +
                            C31541 * C32758 * C33229 + C31541 * C33274 * C31916;
    const double gx210120 = C31592 * C32758 * C33070 -
                            (C33070 * C33274 * C31738) / 2.0 +
                            C31592 * C33274 * C31548;
    const double gx210102 = C31592 * C32063 * C33261 -
                            (C33261 * C31440 * C31738) / 2.0 +
                            C31592 * C31440 * C31946;
    const double gx210012 = (C33261 * C33174 * C33330) / 2.0 +
                            C31541 * C32246 * C33261 + C31541 * C33174 * C31946;
    const double gx210111 = C31592 * C32246 * C33229 -
                            (C33229 * C33174 * C31738) / 2.0 +
                            C31592 * C33174 * C31916;
    const double gx201300 = C32687 * C31544 * C31442 -
                            (C31442 * C33070 * C33545) / 2.0 +
                            C32687 * C33070 * C32375;
    const double gx201030 = (C31442 * C31767 * C33330) / 2.0 +
                            (C31442 * C31541 * C31858) / C31444 +
                            C31541 * C31767 * C32375;
    const double gx201003 = (C32789 * C33070 * C33330) / 2.0 +
                            C31541 * C31544 * C32789 + C31541 * C33070 * C32853;
    const double gx201210 = C31645 * C31819 * C31442 -
                            (C31442 * C33227 * C33455) / 2.0 +
                            C31645 * C33227 * C32375;
    const double gx201201 = C31645 * C31544 * C33180 -
                            (C33180 * C33070 * C33455) / 2.0 +
                            C31645 * C33070 * C32537;
    const double gx201021 = (C33180 * C33260 * C33330) / 2.0 +
                            C31541 * C31849 * C33180 + C31541 * C33260 * C32537;
    const double gx201120 = C31592 * C31849 * C31442 -
                            (C31442 * C33260 * C31738) / 2.0 +
                            C31592 * C33260 * C32375;
    const double gx201102 = C31592 * C31544 * C33275 -
                            (C33275 * C33070 * C31738) / 2.0 +
                            C31592 * C33070 * C32846;
    const double gx201012 = (C33275 * C33227 * C33330) / 2.0 +
                            C31541 * C31819 * C33275 + C31541 * C33227 * C32846;
    const double gx201111 = C31592 * C31819 * C33180 -
                            (C33180 * C33227 * C31738) / 2.0 +
                            C31592 * C33227 * C32537;
    const double gx021300 = C32095 * C32096 * C31442 -
                            (C31442 * C33263 * C33544) / 2.0 +
                            C32095 * C33263 * C32375;
    const double gx021030 = (C31442 * C32873 * C33308) / 2.0 +
                            2 * C31445 * C32905 * C31442 +
                            2 * C31445 * C32873 * C32375;
    const double gx021003 = (C32789 * C33263 * C33308) / 2.0 +
                            2 * C31445 * C32096 * C32789 +
                            2 * C31445 * C33263 * C32853;
    const double gx021210 = (C31442 * C32070 * C32227) / C31444 -
                            (C31442 * C33133 * C33461) / 2.0 +
                            C32070 * C33133 * C32375;
    const double gx021201 = C32070 * C32096 * C33180 -
                            (C33180 * C33263 * C33461) / 2.0 +
                            C32070 * C33263 * C32537;
    const double gx021021 = (C33180 * C33270 * C33308) / 2.0 +
                            2 * C31445 * C32304 * C33180 +
                            2 * C31445 * C33270 * C32537;
    const double gx021120 = C32040 * C32304 * C31442 -
                            (C31442 * C33270 * C32044) / 2.0 +
                            C32040 * C33270 * C32375;
    const double gx021102 = C32040 * C32096 * C33275 -
                            (C33275 * C33263 * C32044) / 2.0 +
                            C32040 * C33263 * C32846;
    const double gx021012 = (C33275 * C33133 * C33308) / 2.0 +
                            (C33275 * 2 * C31445 * C32227) / C31444 +
                            2 * C31445 * C33133 * C32846;
    const double gx021111 = (C33180 * C32040 * C32227) / C31444 -
                            (C33180 * C33133 * C32044) / 2.0 +
                            C32040 * C33133 * C32537;
    const double gx120300 = C32945 * C32096 * C33070 -
                            (C33070 * C33263 * C33549) / 2.0 +
                            C32945 * C33263 * C31548;
    const double gx120030 = (C33070 * C32873 * C33352) / 2.0 +
                            C31501 * C32905 * C33070 + C31501 * C32873 * C31548;
    const double gx120003 = (C31864 * C33263 * C33352) / 2.0 +
                            C31501 * C32096 * C31864 +
                            (C31501 * C33263 * C31955) / C31444;
    const double gx120210 = (C33070 * C32672 * C32227) / C31444 -
                            (C33070 * C33133 * C33467) / 2.0 +
                            C32672 * C33133 * C31548;
    const double gx120201 = C32672 * C32096 * C33229 -
                            (C33229 * C33263 * C33467) / 2.0 +
                            C32672 * C33263 * C31916;
    const double gx120021 = (C33229 * C33270 * C33352) / 2.0 +
                            C31501 * C32304 * C33229 + C31501 * C33270 * C31916;
    const double gx120120 = C31543 * C32304 * C33070 -
                            (C33070 * C33270 * C32669) / 2.0 +
                            C31543 * C33270 * C31548;
    const double gx120102 = C31543 * C32096 * C33261 -
                            (C33261 * C33263 * C32669) / 2.0 +
                            C31543 * C33263 * C31946;
    const double gx120012 = (C33261 * C33133 * C33352) / 2.0 +
                            (C33261 * C31501 * C32227) / C31444 +
                            C31501 * C33133 * C31946;
    const double gx120111 = (C33229 * C31543 * C32227) / C31444 -
                            (C33229 * C33133 * C32669) / 2.0 +
                            C31543 * C33133 * C31916;
    const double gx102300 = C32945 * C31544 * C33265 -
                            (C33265 * C33070 * C33549) / 2.0 +
                            C32945 * C33070 * C32391;
    const double gx102030 = (C33265 * C31767 * C33352) / 2.0 +
                            (C33265 * C31501 * C31858) / C31444 +
                            C31501 * C31767 * C32391;
    const double gx102003 = (C32976 * C33070 * C33352) / 2.0 +
                            C31501 * C31544 * C32976 + C31501 * C33070 * C33008;
    const double gx102210 = C32672 * C31819 * C33265 -
                            (C33265 * C33227 * C33467) / 2.0 +
                            C32672 * C33227 * C32391;
    const double gx102201 = C32672 * C31544 * C33158 -
                            (C33158 * C33070 * C33467) / 2.0 +
                            (C32672 * C33070 * C32518) / C31444;
    const double gx102021 = (C33158 * C33260 * C33352) / 2.0 +
                            C31501 * C31849 * C33158 +
                            (C31501 * C33260 * C32518) / C31444;
    const double gx102120 = C31543 * C31849 * C33265 -
                            (C33265 * C33260 * C32669) / 2.0 +
                            C31543 * C33260 * C32391;
    const double gx102102 = C31543 * C31544 * C33271 -
                            (C33271 * C33070 * C32669) / 2.0 +
                            C31543 * C33070 * C32595;
    const double gx102012 = (C33271 * C33227 * C33352) / 2.0 +
                            C31501 * C31819 * C33271 + C31501 * C33227 * C32595;
    const double gx102111 = C31543 * C31819 * C33158 -
                            (C33158 * C33227 * C32669) / 2.0 +
                            (C31543 * C33227 * C32518) / C31444;
    const double gx012300 = C32095 * C32063 * C33265 -
                            (C33265 * C31440 * C33544) / 2.0 +
                            C32095 * C31440 * C32391;
    const double gx012030 = (C33265 * C32701 * C33308) / 2.0 +
                            2 * C31445 * C32765 * C33265 +
                            2 * C31445 * C32701 * C32391;
    const double gx012003 = (C32976 * C31440 * C33308) / 2.0 +
                            2 * C31445 * C32063 * C32976 +
                            2 * C31445 * C31440 * C33008;
    const double gx012210 = C32070 * C32246 * C33265 -
                            (C33265 * C33174 * C33461) / 2.0 +
                            C32070 * C33174 * C32391;
    const double gx012201 = C32070 * C32063 * C33158 -
                            (C33158 * C31440 * C33461) / 2.0 +
                            (C32070 * C31440 * C32518) / C31444;
    const double gx012021 = (C33158 * C33274 * C33308) / 2.0 +
                            2 * C31445 * C32758 * C33158 +
                            (2 * C31445 * C33274 * C32518) / C31444;
    const double gx012120 = C32040 * C32758 * C33265 -
                            (C33265 * C33274 * C32044) / 2.0 +
                            C32040 * C33274 * C32391;
    const double gx012102 = C32040 * C32063 * C33271 -
                            (C33271 * C31440 * C32044) / 2.0 +
                            C32040 * C31440 * C32595;
    const double gx012012 = (C33271 * C33174 * C33308) / 2.0 +
                            2 * C31445 * C32246 * C33271 +
                            2 * C31445 * C33174 * C32595;
    const double gx012111 = C32040 * C32246 * C33158 -
                            (C33158 * C33174 * C32044) / 2.0 +
                            (C32040 * C33174 * C32518) / C31444;
    const double gx111300 = C32945 * C32063 * C31442 -
                            (C31442 * C31440 * C33549) / 2.0 +
                            C32945 * C31440 * C32375;
    const double gx111030 = (C31442 * C32701 * C33352) / 2.0 +
                            C31501 * C32765 * C31442 + C31501 * C32701 * C32375;
    const double gx111003 = (C32789 * C31440 * C33352) / 2.0 +
                            C31501 * C32063 * C32789 + C31501 * C31440 * C32853;
    const double gx111210 = C32672 * C32246 * C31442 -
                            (C31442 * C33174 * C33467) / 2.0 +
                            C32672 * C33174 * C32375;
    const double gx111201 = C32672 * C32063 * C33180 -
                            (C33180 * C31440 * C33467) / 2.0 +
                            C32672 * C31440 * C32537;
    const double gx111021 = (C33180 * C33274 * C33352) / 2.0 +
                            C31501 * C32758 * C33180 + C31501 * C33274 * C32537;
    const double gx111120 = C31543 * C32758 * C31442 -
                            (C31442 * C33274 * C32669) / 2.0 +
                            C31543 * C33274 * C32375;
    const double gx111102 = C31543 * C32063 * C33275 -
                            (C33275 * C31440 * C32669) / 2.0 +
                            C31543 * C31440 * C32846;
    const double gx111012 = (C33275 * C33174 * C33352) / 2.0 +
                            C31501 * C32246 * C33275 + C31501 * C33174 * C32846;
    const double gx111111 = C31543 * C32246 * C33180 -
                            (C33180 * C33174 * C32669) / 2.0 +
                            C31543 * C33174 * C32537;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(25. / 64.) * gx030030 - std::sqrt(225. / 64.) * gx030210 -
         std::sqrt(225. / 64.) * gx210030 + std::sqrt(2025. / 64.) * gx210210);
    gx[(Ai + 0) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(675. / 8.0) * gx210111 - std::sqrt(75. / 8.0) * gx030111);
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(15. / 64.) * gx030030 + std::sqrt(15. / 64.) * gx030210 +
         std::sqrt(30. / 8.0) * gx030012 - std::sqrt(135. / 64.) * gx210030 -
         std::sqrt(135. / 64.) * gx210210 - std::sqrt(270. / 8.0) * gx210012);
    gx[(Ai + 0) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(11.25 / 8.0) * gx030201 - std::sqrt(5.0 / 8.0) * gx030003 +
         std::sqrt(11.25 / 8.0) * gx030021 + std::sqrt(45. / 8.0) * gx210003 -
         std::sqrt(101.25 / 8.0) * gx210201 -
         std::sqrt(101.25 / 8.0) * gx210021);
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(15. / 64.) * gx030300 + std::sqrt(15. / 64.) * gx030120 -
         std::sqrt(30. / 8.0) * gx030102 - std::sqrt(135. / 64.) * gx210300 -
         std::sqrt(135. / 64.) * gx210120 + std::sqrt(270. / 8.0) * gx210102);
    gx[(Ai + 0) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(37.5 / 8.0) * gx030021 - std::sqrt(37.5 / 8.0) * gx030201 +
         std::sqrt(337.5 / 8.0) * gx210201 - std::sqrt(337.5 / 8.0) * gx210021);
    gx[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(225. / 64.) * gx210300 -
         (std::sqrt(225. / 64.) * gx030120 + std::sqrt(25. / 64.) * gx030300) +
         std::sqrt(2025. / 64.) * gx210120);
    gx[(Ai + 1) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(675. / 8.0) * gx111210 - std::sqrt(75. / 8.0) * gx111030);
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(225.) * gx111111;
    gx[(Ai + 1) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(90.) * gx111012 + std::sqrt(45. / 8.0) * gx111210 +
               std::sqrt(45. / 8.0) * gx111030);
    gx[(Ai + 1) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(15.0) * gx111003 - std::sqrt(33.75) * gx111201 -
              std::sqrt(33.75) * gx111021);
    gx[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(90.) * gx111102 - (std::sqrt(45. / 8.0) * gx111120 +
                                           std::sqrt(45. / 8.0) * gx111300));
    gx[(Ai + 1) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(112.5) * gx111201 - std::sqrt(112.5) * gx111021);
    gx[(Ai + 1) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(75. / 8.0) * gx111300 + std::sqrt(675. / 8.0) * gx111120);
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(15. / 64.) * gx030030 - std::sqrt(135. / 64.) * gx030210 +
         std::sqrt(15. / 64.) * gx210030 - std::sqrt(135. / 64.) * gx210210 +
         std::sqrt(30. / 8.0) * gx012030 - std::sqrt(270. / 8.0) * gx012210);
    gx[(Ai + 2) * matrix_size + Bi + 1] +=
        -cc * (std::sqrt(90.) * gx012111 + std::sqrt(45. / 8.0) * gx210111 +
               std::sqrt(45. / 8.0) * gx030111);
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(9. / 64.) * gx030030 + std::sqrt(9. / 64.) * gx030210 +
              std::sqrt(18. / 8.0) * gx030012 + std::sqrt(9. / 64.) * gx210030 +
              std::sqrt(9. / 64.) * gx210210 + std::sqrt(18. / 8.0) * gx210012 +
              std::sqrt(18. / 8.0) * gx012030 +
              std::sqrt(18. / 8.0) * gx012210 + std::sqrt(36.) * gx012012);
    gx[(Ai + 2) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(6.75 / 8.0) * gx030201 - std::sqrt(3.0 / 8.0) * gx030003 +
         std::sqrt(6.75 / 8.0) * gx030021 - std::sqrt(3.0 / 8.0) * gx210003 +
         std::sqrt(6.75 / 8.0) * gx210201 + std::sqrt(6.75 / 8.0) * gx210021 -
         std::sqrt(6.0) * gx012003 + std::sqrt(13.5) * gx012201 +
         std::sqrt(13.5) * gx012021);
    gx[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(9. / 64.) * gx030300 + std::sqrt(9. / 64.) * gx030120 -
              std::sqrt(18. / 8.0) * gx030102 + std::sqrt(9. / 64.) * gx210300 +
              std::sqrt(9. / 64.) * gx210120 - std::sqrt(18. / 8.0) * gx210102 +
              std::sqrt(18. / 8.0) * gx012300 +
              std::sqrt(18. / 8.0) * gx012120 - std::sqrt(36.) * gx012102);
    gx[(Ai + 2) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(22.5 / 8.0) * gx030021 - std::sqrt(22.5 / 8.0) * gx030201 -
         std::sqrt(22.5 / 8.0) * gx210201 + std::sqrt(22.5 / 8.0) * gx210021 -
         std::sqrt(45.) * gx012201 + std::sqrt(45.) * gx012021);
    gx[(Ai + 2) * matrix_size + Bi + 6] +=
        -cc *
        (std::sqrt(270. / 8.0) * gx012120 + std::sqrt(30. / 8.0) * gx012300 +
         std::sqrt(135. / 64.) * gx210120 + std::sqrt(15. / 64.) * gx210300 +
         std::sqrt(135. / 64.) * gx030120 + std::sqrt(15. / 64.) * gx030300);
    gx[(Ai + 3) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gx003210 - std::sqrt(5.0 / 8.0) * gx003030 +
         std::sqrt(11.25 / 8.0) * gx201030 -
         std::sqrt(101.25 / 8.0) * gx201210 +
         std::sqrt(11.25 / 8.0) * gx021030 -
         std::sqrt(101.25 / 8.0) * gx021210);
    gx[(Ai + 3) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(15.0) * gx003111 - std::sqrt(33.75) * gx201111 -
              std::sqrt(33.75) * gx021111);
    gx[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(6.75 / 8.0) * gx201030 -
              (std::sqrt(6.0) * gx003012 + std::sqrt(3.0 / 8.0) * gx003210 +
               std::sqrt(3.0 / 8.0) * gx003030) +
              std::sqrt(6.75 / 8.0) * gx201210 + std::sqrt(13.5) * gx201012 +
              std::sqrt(6.75 / 8.0) * gx021030 +
              std::sqrt(6.75 / 8.0) * gx021210 + std::sqrt(13.5) * gx021012);
    gx[(Ai + 3) * matrix_size + Bi + 3] +=
        cc * (gx003003 - 1.5 * gx003201 - 1.5 * gx003021 - 1.5 * gx201003 +
              2.25 * gx201201 + 2.25 * gx201021 - 1.5 * gx021003 +
              2.25 * gx021201 + 2.25 * gx021021);
    gx[(Ai + 3) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(6.0) * gx003102 -
         (std::sqrt(3.0 / 8.0) * gx003120 + std::sqrt(3.0 / 8.0) * gx003300) +
         std::sqrt(6.75 / 8.0) * gx201300 + std::sqrt(6.75 / 8.0) * gx201120 -
         std::sqrt(13.5) * gx201102 + std::sqrt(6.75 / 8.0) * gx021300 +
         std::sqrt(6.75 / 8.0) * gx021120 - std::sqrt(13.5) * gx021102);
    gx[(Ai + 3) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gx003201 - std::sqrt(7.5) * gx003021 -
              std::sqrt(16.875) * gx201201 + std::sqrt(16.875) * gx201021 -
              std::sqrt(16.875) * gx021201 + std::sqrt(16.875) * gx021021);
    gx[(Ai + 3) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx003300 + std::sqrt(45.0 / 8.0) * gx003120 -
         std::sqrt(11.25 / 8.0) * gx201300 -
         std::sqrt(101.25 / 8.0) * gx201120 -
         std::sqrt(11.25 / 8.0) * gx021300 -
         std::sqrt(101.25 / 8.0) * gx021120);
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(15. / 64.) * gx300030 - std::sqrt(135. / 64.) * gx300210 +
         std::sqrt(15. / 64.) * gx120030 - std::sqrt(135. / 64.) * gx120210 -
         std::sqrt(30. / 8.0) * gx102030 + std::sqrt(270. / 8.0) * gx102210);
    gx[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(90.) * gx102111 - (std::sqrt(45. / 8.0) * gx120111 +
                                           std::sqrt(45. / 8.0) * gx300111));
    gx[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(9. / 64.) * gx300030 + std::sqrt(9. / 64.) * gx300210 +
              std::sqrt(18. / 8.0) * gx300012 + std::sqrt(9. / 64.) * gx120030 +
              std::sqrt(9. / 64.) * gx120210 + std::sqrt(18. / 8.0) * gx120012 -
              std::sqrt(18. / 8.0) * gx102030 -
              std::sqrt(18. / 8.0) * gx102210 - std::sqrt(36.) * gx102012);
    gx[(Ai + 4) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(6.75 / 8.0) * gx300201 - std::sqrt(3.0 / 8.0) * gx300003 +
         std::sqrt(6.75 / 8.0) * gx300021 - std::sqrt(3.0 / 8.0) * gx120003 +
         std::sqrt(6.75 / 8.0) * gx120201 + std::sqrt(6.75 / 8.0) * gx120021 +
         std::sqrt(6.0) * gx102003 - std::sqrt(13.5) * gx102201 -
         std::sqrt(13.5) * gx102021);
    gx[(Ai + 4) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(9. / 64.) * gx300300 + std::sqrt(9. / 64.) * gx300120 -
              std::sqrt(18. / 8.0) * gx300102 + std::sqrt(9. / 64.) * gx120300 +
              std::sqrt(9. / 64.) * gx120120 - std::sqrt(18. / 8.0) * gx120102 -
              std::sqrt(18. / 8.0) * gx102300 -
              std::sqrt(18. / 8.0) * gx102120 + std::sqrt(36.) * gx102102);
    gx[(Ai + 4) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(22.5 / 8.0) * gx300021 - std::sqrt(22.5 / 8.0) * gx300201 -
         std::sqrt(22.5 / 8.0) * gx120201 + std::sqrt(22.5 / 8.0) * gx120021 +
         std::sqrt(45.) * gx102201 - std::sqrt(45.) * gx102021);
    gx[(Ai + 4) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(30. / 8.0) * gx102300 -
         (std::sqrt(135. / 64.) * gx120120 + std::sqrt(15. / 64.) * gx120300 +
          std::sqrt(135. / 64.) * gx300120 + std::sqrt(15. / 64.) * gx300300) +
         std::sqrt(270. / 8.0) * gx102120);
    gx[(Ai + 5) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(337.5 / 8.0) * gx201210 - std::sqrt(37.5 / 8.0) * gx201030 +
         std::sqrt(37.5 / 8.0) * gx021030 - std::sqrt(337.5 / 8.0) * gx021210);
    gx[(Ai + 5) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(112.5) * gx201111 - std::sqrt(112.5) * gx021111);
    gx[(Ai + 5) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(22.5 / 8.0) * gx021030 -
              (std::sqrt(45.) * gx201012 + std::sqrt(22.5 / 8.0) * gx201210 +
               std::sqrt(22.5 / 8.0) * gx201030) +
              std::sqrt(22.5 / 8.0) * gx021210 + std::sqrt(45.) * gx021012);
    gx[(Ai + 5) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(7.5) * gx201003 - std::sqrt(16.875) * gx201201 -
              std::sqrt(16.875) * gx201021 - std::sqrt(7.5) * gx021003 +
              std::sqrt(16.875) * gx021201 + std::sqrt(16.875) * gx021021);
    gx[(Ai + 5) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(45.) * gx201102 -
         (std::sqrt(22.5 / 8.0) * gx201120 + std::sqrt(22.5 / 8.0) * gx201300) +
         std::sqrt(22.5 / 8.0) * gx021300 + std::sqrt(22.5 / 8.0) * gx021120 -
         std::sqrt(45.) * gx021102);
    gx[(Ai + 5) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(56.25) * gx201201 - std::sqrt(56.25) * gx201021 -
              std::sqrt(56.25) * gx021201 + std::sqrt(56.25) * gx021021);
    gx[(Ai + 5) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(37.5 / 8.0) * gx201300 + std::sqrt(337.5 / 8.0) * gx201120 -
         std::sqrt(37.5 / 8.0) * gx021300 - std::sqrt(337.5 / 8.0) * gx021120);
    gx[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(225. / 64.) * gx300210 - std::sqrt(25. / 64.) * gx300030 -
         std::sqrt(225. / 64.) * gx120030 + std::sqrt(2025. / 64.) * gx120210);
    gx[(Ai + 6) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(75. / 8.0) * gx300111 + std::sqrt(675. / 8.0) * gx120111);
    gx[(Ai + 6) * matrix_size + Bi + 2] +=
        -cc *
        (std::sqrt(270. / 8.0) * gx120012 + std::sqrt(135. / 64.) * gx120210 +
         std::sqrt(135. / 64.) * gx120030 + std::sqrt(30. / 8.0) * gx300012 +
         std::sqrt(15. / 64.) * gx300210 + std::sqrt(15. / 64.) * gx300030);
    gx[(Ai + 6) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx300003 - std::sqrt(11.25 / 8.0) * gx300201 -
         std::sqrt(11.25 / 8.0) * gx300021 + std::sqrt(45.0 / 8.0) * gx120003 -
         std::sqrt(101.25 / 8.0) * gx120201 -
         std::sqrt(101.25 / 8.0) * gx120021);
    gx[(Ai + 6) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(30. / 8.0) * gx300102 -
         (std::sqrt(15. / 64.) * gx300120 + std::sqrt(15. / 64.) * gx300300) -
         std::sqrt(135. / 64.) * gx120300 - std::sqrt(135. / 64.) * gx120120 +
         std::sqrt(270. / 8.0) * gx120102);
    gx[(Ai + 6) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(37.5 / 8.0) * gx300201 - std::sqrt(37.5 / 8.0) * gx300021 +
         std::sqrt(337.5 / 8.0) * gx120201 - std::sqrt(337.5 / 8.0) * gx120021);
    gx[(Ai + 6) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(25. / 64.) * gx300300 + std::sqrt(225. / 64.) * gx300120 +
         std::sqrt(225. / 64.) * gx120300 + std::sqrt(2025. / 64.) * gx120120);
    const double gy300300 = C31763 * C31478 * C33070 +
                            (C33070 * C31441 * C33288) / 2.0 +
                            C31441 * C31478 * C31548;
    const double gy300030 = C31722 * C31851 * C33070 -
                            (C33070 * C31434 * C33542) / 2.0 +
                            C31434 * C31851 * C31548;
    const double gy300003 = C31722 * C31478 * C31864 +
                            (C31864 * C31434 * C33288) / 2.0 +
                            (C31434 * C31478 * C31955) / C31444;
    const double gy300210 = C31759 * C31811 * C33070 -
                            (C33070 * C31437 * C31860) / 2.0 +
                            C31437 * C31811 * C31548;
    const double gy300201 = C31759 * C31478 * C33229 +
                            (C33229 * C31437 * C33288) / 2.0 +
                            C31437 * C31478 * C31916;
    const double gy300021 = C31722 * C31830 * C33229 -
                            (C33229 * C31434 * C33457) / 2.0 +
                            C31434 * C31830 * C31916;
    const double gy300120 = C31749 * C31830 * C33070 -
                            (C33070 * C31435 * C33457) / 2.0 +
                            C31435 * C31830 * C31548;
    const double gy300102 = C31749 * C31478 * C33261 +
                            (C33261 * C31435 * C33288) / 2.0 +
                            C31435 * C31478 * C31946;
    const double gy300012 = C31722 * C31811 * C33261 -
                            (C33261 * C31434 * C31860) / 2.0 +
                            C31434 * C31811 * C31946;
    const double gy300111 = C31749 * C31811 * C33229 -
                            (C33229 * C31435 * C31860) / 2.0 +
                            C31435 * C31811 * C31916;
    const double gy030300 = (C33070 * C32084 * C32108) / C31444 +
                            (C33070 * C31979 * C33307) / 2.0 +
                            C31979 * C32084 * C31548;
    const double gy030030 =
        C31550 * C32306 * C33070 -
        (C33070 * C31431 *
         ((C33463 * C31770) / C31444 +
          (3 * C33464 + 2 * C32307 +
           6 * ae *
               ((C32293 * C31770) / C31444 +
                (3 * C32256 + C32253 + 4 * ae * C32203) / C31461)) /
              C31461)) /
            2.0 +
        C31431 * C32306 * C31548;
    const double gy030003 = C31550 * C32084 * C31864 +
                            (C31864 * C31431 * C33307) / 2.0 +
                            (C31431 * C32084 * C31955) / C31444;
    const double gy030210 = C32098 * C32203 * C33070 -
                            (C33070 * C33262 * C32307) / 2.0 +
                            C33262 * C32203 * C31548;
    const double gy030201 = C32098 * C32084 * C33229 +
                            (C33229 * C33262 * C33307) / 2.0 +
                            C33262 * C32084 * C31916;
    const double gy030021 = C31550 * C32278 * C33229 -
                            (C33229 * C31431 * C33463) / 2.0 +
                            C31431 * C32278 * C31916;
    const double gy030120 = C32067 * C32278 * C33070 -
                            (C33070 * C33230 * C33463) / 2.0 +
                            C33230 * C32278 * C31548;
    const double gy030102 = C32067 * C32084 * C33261 +
                            (C33261 * C33230 * C33307) / 2.0 +
                            C33230 * C32084 * C31946;
    const double gy030012 = C31550 * C32203 * C33261 -
                            (C33261 * C31431 * C32307) / 2.0 +
                            C31431 * C32203 * C31946;
    const double gy030111 = C32067 * C32203 * C33229 -
                            (C33229 * C33230 * C32307) / 2.0 +
                            C33230 * C32203 * C31916;
    const double gy003300 = (C32337 * 2 * C31458 * C32108) / C31444 +
                            (C32337 * C31979 * C33288) / 2.0 +
                            C31979 * C31478 * C32398;
    const double gy003030 = C31550 * C31851 * C32337 -
                            (C32337 * C31431 * C33542) / 2.0 +
                            C31431 * C31851 * C32398;
    const double gy003003 = C31550 * C31478 * C32404 +
                            (C32404 * C31431 * C33288) / 2.0 +
                            C31431 * C31478 * C32608;
    const double gy003210 = C32098 * C31811 * C32337 -
                            (C32337 * C33262 * C31860) / 2.0 +
                            C33262 * C31811 * C32398;
    const double gy003201 = C32098 * C31478 * C33161 +
                            (C33161 * C33262 * C33288) / 2.0 +
                            C33262 * C31478 * C32533;
    const double gy003021 = C31550 * C31830 * C33161 -
                            (C33161 * C31431 * C33457) / 2.0 +
                            C31431 * C31830 * C32533;
    const double gy003120 = C32067 * C31830 * C32337 -
                            (C32337 * C33230 * C33457) / 2.0 +
                            C33230 * C31830 * C32398;
    const double gy003102 = C32067 * C31478 * C33266 +
                            (C33266 * C33230 * C33288) / 2.0 +
                            C33230 * C31478 * C32594;
    const double gy003012 = C31550 * C31811 * C33266 -
                            (C33266 * C31431 * C31860) / 2.0 +
                            C31431 * C31811 * C32594;
    const double gy003111 = C32067 * C31811 * C33161 -
                            (C33161 * C33230 * C31860) / 2.0 +
                            C33230 * C31811 * C32533;
    const double gy210300 = C32697 * C31812 * C33070 +
                            (C33070 * C32628 * C33329) / 2.0 +
                            C32628 * C31812 * C31548;
    const double gy210030 = C31670 * C32755 * C33070 -
                            (C33070 * C31433 * C33546) / 2.0 +
                            C31433 * C32755 * C31548;
    const double gy210003 = C31670 * C31812 * C31864 +
                            (C31864 * C31433 * C33329) / 2.0 +
                            (C31433 * C31812 * C31955) / C31444;
    const double gy210210 = C31746 * C32176 * C33070 -
                            (C33070 * C33277 * C32742) / 2.0 +
                            C33277 * C32176 * C31548;
    const double gy210201 = C31746 * C31812 * C33229 +
                            (C33229 * C33277 * C33329) / 2.0 +
                            C33277 * C31812 * C31916;
    const double gy210021 = C31670 * C32746 * C33229 -
                            (C33229 * C31433 * C33469) / 2.0 +
                            C31433 * C32746 * C31916;
    const double gy210120 = (C33070 * C32746 * C31713) / C31444 -
                            (C33070 * C31436 * C33469) / 2.0 +
                            C31436 * C32746 * C31548;
    const double gy210102 = (C33261 * C31812 * C31713) / C31444 +
                            (C33261 * C31436 * C33329) / 2.0 +
                            C31436 * C31812 * C31946;
    const double gy210012 = C31670 * C32176 * C33261 -
                            (C33261 * C31433 * C32742) / 2.0 +
                            C31433 * C32176 * C31946;
    const double gy210111 = (C33229 * C32176 * C31713) / C31444 -
                            (C33229 * C31436 * C32742) / 2.0 +
                            C31436 * C32176 * C31916;
    const double gy201300 = C32697 * C31478 * C31442 +
                            (C31442 * C32628 * C33288) / 2.0 +
                            C32628 * C31478 * C32375;
    const double gy201030 = C31670 * C31851 * C31442 -
                            (C31442 * C31433 * C33542) / 2.0 +
                            C31433 * C31851 * C32375;
    const double gy201003 = C31670 * C31478 * C32789 +
                            (C32789 * C31433 * C33288) / 2.0 +
                            C31433 * C31478 * C32853;
    const double gy201210 = C31746 * C31811 * C31442 -
                            (C31442 * C33277 * C31860) / 2.0 +
                            C33277 * C31811 * C32375;
    const double gy201201 = C31746 * C31478 * C33180 +
                            (C33180 * C33277 * C33288) / 2.0 +
                            C33277 * C31478 * C32537;
    const double gy201021 = C31670 * C31830 * C33180 -
                            (C33180 * C31433 * C33457) / 2.0 +
                            C31433 * C31830 * C32537;
    const double gy201120 = (C31442 * C31830 * C31713) / C31444 -
                            (C31442 * C31436 * C33457) / 2.0 +
                            C31436 * C31830 * C32375;
    const double gy201102 = (C33275 * 2 * C31458 * C31713) / C31444 +
                            (C33275 * C31436 * C33288) / 2.0 +
                            C31436 * C31478 * C32846;
    const double gy201012 = C31670 * C31811 * C33275 -
                            (C33275 * C31433 * C31860) / 2.0 +
                            C31433 * C31811 * C32846;
    const double gy201111 = (C33180 * C31811 * C31713) / C31444 -
                            (C33180 * C31436 * C31860) / 2.0 +
                            C31436 * C31811 * C32537;
    const double gy021300 = (C31442 * C32056 * C32108) / C31444 +
                            (C31442 * C31979 * C33344) / 2.0 +
                            C31979 * C32056 * C32375;
    const double gy021030 = C31550 * C32900 * C31442 -
                            (C31442 * C31431 * C33548) / 2.0 +
                            C31431 * C32900 * C32375;
    const double gy021003 = C31550 * C32056 * C32789 +
                            (C32789 * C31431 * C33344) / 2.0 +
                            C31431 * C32056 * C32853;
    const double gy021210 = C32098 * C32204 * C31442 -
                            (C31442 * C33262 * C32282) / 2.0 +
                            C33262 * C32204 * C32375;
    const double gy021201 = C32098 * C32056 * C33180 +
                            (C33180 * C33262 * C33344) / 2.0 +
                            C33262 * C32056 * C32537;
    const double gy021021 = C31550 * C32251 * C33180 -
                            (C33180 * C31431 * C33464) / 2.0 +
                            C31431 * C32251 * C32537;
    const double gy021120 = C32067 * C32251 * C31442 -
                            (C31442 * C33230 * C33464) / 2.0 +
                            C33230 * C32251 * C32375;
    const double gy021102 = C32067 * C32056 * C33275 +
                            (C33275 * C33230 * C33344) / 2.0 +
                            C33230 * C32056 * C32846;
    const double gy021012 = C31550 * C32204 * C33275 -
                            (C33275 * C31431 * C32282) / 2.0 +
                            C31431 * C32204 * C32846;
    const double gy021111 = C32067 * C32204 * C33180 -
                            (C33180 * C33230 * C32282) / 2.0 +
                            C33230 * C32204 * C32537;
    const double gy120300 = C32950 * C32056 * C33070 +
                            (C33070 * C32926 * C33344) / 2.0 +
                            C32926 * C32056 * C31548;
    const double gy120030 = C31599 * C32900 * C33070 -
                            (C33070 * C31432 * C33548) / 2.0 +
                            C31432 * C32900 * C31548;
    const double gy120003 = C31599 * C32056 * C31864 +
                            (C31864 * C31432 * C33344) / 2.0 +
                            (C31432 * C32056 * C31955) / C31444;
    const double gy120210 = C32688 * C32204 * C33070 -
                            (C33070 * C33273 * C32282) / 2.0 +
                            C33273 * C32204 * C31548;
    const double gy120201 = C32688 * C32056 * C33229 +
                            (C33229 * C33273 * C33344) / 2.0 +
                            C33273 * C32056 * C31916;
    const double gy120021 = C31599 * C32251 * C33229 -
                            (C33229 * C31432 * C33464) / 2.0 +
                            C31432 * C32251 * C31916;
    const double gy120120 = C31673 * C32251 * C33070 -
                            (C33070 * C33246 * C33464) / 2.0 +
                            C33246 * C32251 * C31548;
    const double gy120102 = C31673 * C32056 * C33261 +
                            (C33261 * C33246 * C33344) / 2.0 +
                            C33246 * C32056 * C31946;
    const double gy120012 = C31599 * C32204 * C33261 -
                            (C33261 * C31432 * C32282) / 2.0 +
                            C31432 * C32204 * C31946;
    const double gy120111 = C31673 * C32204 * C33229 -
                            (C33229 * C33246 * C32282) / 2.0 +
                            C33246 * C32204 * C31916;
    const double gy102300 = C32950 * C31478 * C33265 +
                            (C33265 * C32926 * C33288) / 2.0 +
                            C32926 * C31478 * C32391;
    const double gy102030 = C31599 * C31851 * C33265 -
                            (C33265 * C31432 * C33542) / 2.0 +
                            C31432 * C31851 * C32391;
    const double gy102003 = C31599 * C31478 * C32976 +
                            (C32976 * C31432 * C33288) / 2.0 +
                            C31432 * C31478 * C33008;
    const double gy102210 = C32688 * C31811 * C33265 -
                            (C33265 * C33273 * C31860) / 2.0 +
                            C33273 * C31811 * C32391;
    const double gy102201 = C32688 * C31478 * C33158 +
                            (C33158 * C33273 * C33288) / 2.0 +
                            (C33273 * C31478 * C32518) / C31444;
    const double gy102021 = C31599 * C31830 * C33158 -
                            (C33158 * C31432 * C33457) / 2.0 +
                            (C31432 * C31830 * C32518) / C31444;
    const double gy102120 = C31673 * C31830 * C33265 -
                            (C33265 * C33246 * C33457) / 2.0 +
                            C33246 * C31830 * C32391;
    const double gy102102 = C31673 * C31478 * C33271 +
                            (C33271 * C33246 * C33288) / 2.0 +
                            C33246 * C31478 * C32595;
    const double gy102012 = C31599 * C31811 * C33271 -
                            (C33271 * C31432 * C31860) / 2.0 +
                            C31432 * C31811 * C32595;
    const double gy102111 = C31673 * C31811 * C33158 -
                            (C33158 * C33246 * C31860) / 2.0 +
                            (C33246 * C31811 * C32518) / C31444;
    const double gy012300 = (C33265 * C31812 * C32108) / C31444 +
                            (C33265 * C31979 * C33329) / 2.0 +
                            C31979 * C31812 * C32391;
    const double gy012030 = C31550 * C32755 * C33265 -
                            (C33265 * C31431 * C33546) / 2.0 +
                            C31431 * C32755 * C32391;
    const double gy012003 = C31550 * C31812 * C32976 +
                            (C32976 * C31431 * C33329) / 2.0 +
                            C31431 * C31812 * C33008;
    const double gy012210 = C32098 * C32176 * C33265 -
                            (C33265 * C33262 * C32742) / 2.0 +
                            C33262 * C32176 * C32391;
    const double gy012201 = C32098 * C31812 * C33158 +
                            (C33158 * C33262 * C33329) / 2.0 +
                            (C33262 * C31812 * C32518) / C31444;
    const double gy012021 = C31550 * C32746 * C33158 -
                            (C33158 * C31431 * C33469) / 2.0 +
                            (C31431 * C32746 * C32518) / C31444;
    const double gy012120 = C32067 * C32746 * C33265 -
                            (C33265 * C33230 * C33469) / 2.0 +
                            C33230 * C32746 * C32391;
    const double gy012102 = C32067 * C31812 * C33271 +
                            (C33271 * C33230 * C33329) / 2.0 +
                            C33230 * C31812 * C32595;
    const double gy012012 = C31550 * C32176 * C33271 -
                            (C33271 * C31431 * C32742) / 2.0 +
                            C31431 * C32176 * C32595;
    const double gy012111 = C32067 * C32176 * C33158 -
                            (C33158 * C33230 * C32742) / 2.0 +
                            (C33230 * C32176 * C32518) / C31444;
    const double gy111300 = C32950 * C31812 * C31442 +
                            (C31442 * C32926 * C33329) / 2.0 +
                            C32926 * C31812 * C32375;
    const double gy111030 = C31599 * C32755 * C31442 -
                            (C31442 * C31432 * C33546) / 2.0 +
                            C31432 * C32755 * C32375;
    const double gy111003 = C31599 * C31812 * C32789 +
                            (C32789 * C31432 * C33329) / 2.0 +
                            C31432 * C31812 * C32853;
    const double gy111210 = C32688 * C32176 * C31442 -
                            (C31442 * C33273 * C32742) / 2.0 +
                            C33273 * C32176 * C32375;
    const double gy111201 = C32688 * C31812 * C33180 +
                            (C33180 * C33273 * C33329) / 2.0 +
                            C33273 * C31812 * C32537;
    const double gy111021 = C31599 * C32746 * C33180 -
                            (C33180 * C31432 * C33469) / 2.0 +
                            C31432 * C32746 * C32537;
    const double gy111120 = C31673 * C32746 * C31442 -
                            (C31442 * C33246 * C33469) / 2.0 +
                            C33246 * C32746 * C32375;
    const double gy111102 = C31673 * C31812 * C33275 +
                            (C33275 * C33246 * C33329) / 2.0 +
                            C33246 * C31812 * C32846;
    const double gy111012 = C31599 * C32176 * C33275 -
                            (C33275 * C31432 * C32742) / 2.0 +
                            C31432 * C32176 * C32846;
    const double gy111111 = C31673 * C32176 * C33180 -
                            (C33180 * C33246 * C32742) / 2.0 +
                            C33246 * C32176 * C32537;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(25. / 64.) * gy030030 - std::sqrt(225. / 64.) * gy030210 -
         std::sqrt(225. / 64.) * gy210030 + std::sqrt(2025. / 64.) * gy210210);
    gy[(Ai + 0) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(675. / 8.0) * gy210111 - std::sqrt(75. / 8.0) * gy030111);
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(15. / 64.) * gy030030 + std::sqrt(15. / 64.) * gy030210 +
         std::sqrt(30. / 8.0) * gy030012 - std::sqrt(135. / 64.) * gy210030 -
         std::sqrt(135. / 64.) * gy210210 - std::sqrt(270. / 8.0) * gy210012);
    gy[(Ai + 0) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(11.25 / 8.0) * gy030201 - std::sqrt(5.0 / 8.0) * gy030003 +
         std::sqrt(11.25 / 8.0) * gy030021 + std::sqrt(45. / 8.0) * gy210003 -
         std::sqrt(101.25 / 8.0) * gy210201 -
         std::sqrt(101.25 / 8.0) * gy210021);
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(15. / 64.) * gy030300 + std::sqrt(15. / 64.) * gy030120 -
         std::sqrt(30. / 8.0) * gy030102 - std::sqrt(135. / 64.) * gy210300 -
         std::sqrt(135. / 64.) * gy210120 + std::sqrt(270. / 8.0) * gy210102);
    gy[(Ai + 0) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(37.5 / 8.0) * gy030021 - std::sqrt(37.5 / 8.0) * gy030201 +
         std::sqrt(337.5 / 8.0) * gy210201 - std::sqrt(337.5 / 8.0) * gy210021);
    gy[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(225. / 64.) * gy210300 -
         (std::sqrt(225. / 64.) * gy030120 + std::sqrt(25. / 64.) * gy030300) +
         std::sqrt(2025. / 64.) * gy210120);
    gy[(Ai + 1) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(675. / 8.0) * gy111210 - std::sqrt(75. / 8.0) * gy111030);
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(225.) * gy111111;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(90.) * gy111012 + std::sqrt(45. / 8.0) * gy111210 +
               std::sqrt(45. / 8.0) * gy111030);
    gy[(Ai + 1) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(15.0) * gy111003 - std::sqrt(33.75) * gy111201 -
              std::sqrt(33.75) * gy111021);
    gy[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(90.) * gy111102 - (std::sqrt(45. / 8.0) * gy111120 +
                                           std::sqrt(45. / 8.0) * gy111300));
    gy[(Ai + 1) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(112.5) * gy111201 - std::sqrt(112.5) * gy111021);
    gy[(Ai + 1) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(75. / 8.0) * gy111300 + std::sqrt(675. / 8.0) * gy111120);
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(15. / 64.) * gy030030 - std::sqrt(135. / 64.) * gy030210 +
         std::sqrt(15. / 64.) * gy210030 - std::sqrt(135. / 64.) * gy210210 +
         std::sqrt(30. / 8.0) * gy012030 - std::sqrt(270. / 8.0) * gy012210);
    gy[(Ai + 2) * matrix_size + Bi + 1] +=
        -cc * (std::sqrt(90.) * gy012111 + std::sqrt(45. / 8.0) * gy210111 +
               std::sqrt(45. / 8.0) * gy030111);
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(9. / 64.) * gy030030 + std::sqrt(9. / 64.) * gy030210 +
              std::sqrt(18. / 8.0) * gy030012 + std::sqrt(9. / 64.) * gy210030 +
              std::sqrt(9. / 64.) * gy210210 + std::sqrt(18. / 8.0) * gy210012 +
              std::sqrt(18. / 8.0) * gy012030 +
              std::sqrt(18. / 8.0) * gy012210 + std::sqrt(36.) * gy012012);
    gy[(Ai + 2) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(6.75 / 8.0) * gy030201 - std::sqrt(3.0 / 8.0) * gy030003 +
         std::sqrt(6.75 / 8.0) * gy030021 - std::sqrt(3.0 / 8.0) * gy210003 +
         std::sqrt(6.75 / 8.0) * gy210201 + std::sqrt(6.75 / 8.0) * gy210021 -
         std::sqrt(6.0) * gy012003 + std::sqrt(13.5) * gy012201 +
         std::sqrt(13.5) * gy012021);
    gy[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(9. / 64.) * gy030300 + std::sqrt(9. / 64.) * gy030120 -
              std::sqrt(18. / 8.0) * gy030102 + std::sqrt(9. / 64.) * gy210300 +
              std::sqrt(9. / 64.) * gy210120 - std::sqrt(18. / 8.0) * gy210102 +
              std::sqrt(18. / 8.0) * gy012300 +
              std::sqrt(18. / 8.0) * gy012120 - std::sqrt(36.) * gy012102);
    gy[(Ai + 2) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(22.5 / 8.0) * gy030021 - std::sqrt(22.5 / 8.0) * gy030201 -
         std::sqrt(22.5 / 8.0) * gy210201 + std::sqrt(22.5 / 8.0) * gy210021 -
         std::sqrt(45.) * gy012201 + std::sqrt(45.) * gy012021);
    gy[(Ai + 2) * matrix_size + Bi + 6] +=
        -cc *
        (std::sqrt(270. / 8.0) * gy012120 + std::sqrt(30. / 8.0) * gy012300 +
         std::sqrt(135. / 64.) * gy210120 + std::sqrt(15. / 64.) * gy210300 +
         std::sqrt(135. / 64.) * gy030120 + std::sqrt(15. / 64.) * gy030300);
    gy[(Ai + 3) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gy003210 - std::sqrt(5.0 / 8.0) * gy003030 +
         std::sqrt(11.25 / 8.0) * gy201030 -
         std::sqrt(101.25 / 8.0) * gy201210 +
         std::sqrt(11.25 / 8.0) * gy021030 -
         std::sqrt(101.25 / 8.0) * gy021210);
    gy[(Ai + 3) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(15.0) * gy003111 - std::sqrt(33.75) * gy201111 -
              std::sqrt(33.75) * gy021111);
    gy[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(6.75 / 8.0) * gy201030 -
              (std::sqrt(6.0) * gy003012 + std::sqrt(3.0 / 8.0) * gy003210 +
               std::sqrt(3.0 / 8.0) * gy003030) +
              std::sqrt(6.75 / 8.0) * gy201210 + std::sqrt(13.5) * gy201012 +
              std::sqrt(6.75 / 8.0) * gy021030 +
              std::sqrt(6.75 / 8.0) * gy021210 + std::sqrt(13.5) * gy021012);
    gy[(Ai + 3) * matrix_size + Bi + 3] +=
        cc * (gy003003 - 1.5 * gy003201 - 1.5 * gy003021 - 1.5 * gy201003 +
              2.25 * gy201201 + 2.25 * gy201021 - 1.5 * gy021003 +
              2.25 * gy021201 + 2.25 * gy021021);
    gy[(Ai + 3) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(6.0) * gy003102 -
         (std::sqrt(3.0 / 8.0) * gy003120 + std::sqrt(3.0 / 8.0) * gy003300) +
         std::sqrt(6.75 / 8.0) * gy201300 + std::sqrt(6.75 / 8.0) * gy201120 -
         std::sqrt(13.5) * gy201102 + std::sqrt(6.75 / 8.0) * gy021300 +
         std::sqrt(6.75 / 8.0) * gy021120 - std::sqrt(13.5) * gy021102);
    gy[(Ai + 3) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gy003201 - std::sqrt(7.5) * gy003021 -
              std::sqrt(16.875) * gy201201 + std::sqrt(16.875) * gy201021 -
              std::sqrt(16.875) * gy021201 + std::sqrt(16.875) * gy021021);
    gy[(Ai + 3) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy003300 + std::sqrt(45.0 / 8.0) * gy003120 -
         std::sqrt(11.25 / 8.0) * gy201300 -
         std::sqrt(101.25 / 8.0) * gy201120 -
         std::sqrt(11.25 / 8.0) * gy021300 -
         std::sqrt(101.25 / 8.0) * gy021120);
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(15. / 64.) * gy300030 - std::sqrt(135. / 64.) * gy300210 +
         std::sqrt(15. / 64.) * gy120030 - std::sqrt(135. / 64.) * gy120210 -
         std::sqrt(30. / 8.0) * gy102030 + std::sqrt(270. / 8.0) * gy102210);
    gy[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(90.) * gy102111 - (std::sqrt(45. / 8.0) * gy120111 +
                                           std::sqrt(45. / 8.0) * gy300111));
    gy[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(9. / 64.) * gy300030 + std::sqrt(9. / 64.) * gy300210 +
              std::sqrt(18. / 8.0) * gy300012 + std::sqrt(9. / 64.) * gy120030 +
              std::sqrt(9. / 64.) * gy120210 + std::sqrt(18. / 8.0) * gy120012 -
              std::sqrt(18. / 8.0) * gy102030 -
              std::sqrt(18. / 8.0) * gy102210 - std::sqrt(36.) * gy102012);
    gy[(Ai + 4) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(6.75 / 8.0) * gy300201 - std::sqrt(3.0 / 8.0) * gy300003 +
         std::sqrt(6.75 / 8.0) * gy300021 - std::sqrt(3.0 / 8.0) * gy120003 +
         std::sqrt(6.75 / 8.0) * gy120201 + std::sqrt(6.75 / 8.0) * gy120021 +
         std::sqrt(6.0) * gy102003 - std::sqrt(13.5) * gy102201 -
         std::sqrt(13.5) * gy102021);
    gy[(Ai + 4) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(9. / 64.) * gy300300 + std::sqrt(9. / 64.) * gy300120 -
              std::sqrt(18. / 8.0) * gy300102 + std::sqrt(9. / 64.) * gy120300 +
              std::sqrt(9. / 64.) * gy120120 - std::sqrt(18. / 8.0) * gy120102 -
              std::sqrt(18. / 8.0) * gy102300 -
              std::sqrt(18. / 8.0) * gy102120 + std::sqrt(36.) * gy102102);
    gy[(Ai + 4) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(22.5 / 8.0) * gy300021 - std::sqrt(22.5 / 8.0) * gy300201 -
         std::sqrt(22.5 / 8.0) * gy120201 + std::sqrt(22.5 / 8.0) * gy120021 +
         std::sqrt(45.) * gy102201 - std::sqrt(45.) * gy102021);
    gy[(Ai + 4) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(30. / 8.0) * gy102300 -
         (std::sqrt(135. / 64.) * gy120120 + std::sqrt(15. / 64.) * gy120300 +
          std::sqrt(135. / 64.) * gy300120 + std::sqrt(15. / 64.) * gy300300) +
         std::sqrt(270. / 8.0) * gy102120);
    gy[(Ai + 5) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(337.5 / 8.0) * gy201210 - std::sqrt(37.5 / 8.0) * gy201030 +
         std::sqrt(37.5 / 8.0) * gy021030 - std::sqrt(337.5 / 8.0) * gy021210);
    gy[(Ai + 5) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(112.5) * gy201111 - std::sqrt(112.5) * gy021111);
    gy[(Ai + 5) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(22.5 / 8.0) * gy021030 -
              (std::sqrt(45.) * gy201012 + std::sqrt(22.5 / 8.0) * gy201210 +
               std::sqrt(22.5 / 8.0) * gy201030) +
              std::sqrt(22.5 / 8.0) * gy021210 + std::sqrt(45.) * gy021012);
    gy[(Ai + 5) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(7.5) * gy201003 - std::sqrt(16.875) * gy201201 -
              std::sqrt(16.875) * gy201021 - std::sqrt(7.5) * gy021003 +
              std::sqrt(16.875) * gy021201 + std::sqrt(16.875) * gy021021);
    gy[(Ai + 5) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(45.) * gy201102 -
         (std::sqrt(22.5 / 8.0) * gy201120 + std::sqrt(22.5 / 8.0) * gy201300) +
         std::sqrt(22.5 / 8.0) * gy021300 + std::sqrt(22.5 / 8.0) * gy021120 -
         std::sqrt(45.) * gy021102);
    gy[(Ai + 5) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(56.25) * gy201201 - std::sqrt(56.25) * gy201021 -
              std::sqrt(56.25) * gy021201 + std::sqrt(56.25) * gy021021);
    gy[(Ai + 5) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(37.5 / 8.0) * gy201300 + std::sqrt(337.5 / 8.0) * gy201120 -
         std::sqrt(37.5 / 8.0) * gy021300 - std::sqrt(337.5 / 8.0) * gy021120);
    gy[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(225. / 64.) * gy300210 - std::sqrt(25. / 64.) * gy300030 -
         std::sqrt(225. / 64.) * gy120030 + std::sqrt(2025. / 64.) * gy120210);
    gy[(Ai + 6) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(75. / 8.0) * gy300111 + std::sqrt(675. / 8.0) * gy120111);
    gy[(Ai + 6) * matrix_size + Bi + 2] +=
        -cc *
        (std::sqrt(270. / 8.0) * gy120012 + std::sqrt(135. / 64.) * gy120210 +
         std::sqrt(135. / 64.) * gy120030 + std::sqrt(30. / 8.0) * gy300012 +
         std::sqrt(15. / 64.) * gy300210 + std::sqrt(15. / 64.) * gy300030);
    gy[(Ai + 6) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy300003 - std::sqrt(11.25 / 8.0) * gy300201 -
         std::sqrt(11.25 / 8.0) * gy300021 + std::sqrt(45.0 / 8.0) * gy120003 -
         std::sqrt(101.25 / 8.0) * gy120201 -
         std::sqrt(101.25 / 8.0) * gy120021);
    gy[(Ai + 6) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(30. / 8.0) * gy300102 -
         (std::sqrt(15. / 64.) * gy300120 + std::sqrt(15. / 64.) * gy300300) -
         std::sqrt(135. / 64.) * gy120300 - std::sqrt(135. / 64.) * gy120120 +
         std::sqrt(270. / 8.0) * gy120102);
    gy[(Ai + 6) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(37.5 / 8.0) * gy300201 - std::sqrt(37.5 / 8.0) * gy300021 +
         std::sqrt(337.5 / 8.0) * gy120201 - std::sqrt(337.5 / 8.0) * gy120021);
    gy[(Ai + 6) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(25. / 64.) * gy300300 + std::sqrt(225. / 64.) * gy300120 +
         std::sqrt(225. / 64.) * gy120300 + std::sqrt(2025. / 64.) * gy120120);
    const double gz300300 = C31763 * C33070 * C31479 +
                            C31441 * C31544 * C31479 +
                            (C31441 * C33070 * C33523) / 2.0;
    const double gz300030 = C31722 * C31767 * C31479 +
                            (2 * C31459 * C31434 * C31858) / C31444 +
                            (C31434 * C31767 * C33523) / 2.0;
    const double gz300003 = C31722 * C33070 * C31948 +
                            C31434 * C31544 * C31948 -
                            (C31434 * C33070 * C33543) / 2.0;
    const double gz300210 = C31759 * C33227 * C31479 +
                            C31437 * C31819 * C31479 +
                            (C31437 * C33227 * C33301) / 2.0;
    const double gz300201 = C31759 * C33070 * C31908 +
                            C31437 * C31544 * C31908 -
                            (C31437 * C33070 * C31957) / 2.0;
    const double gz300021 = C31722 * C33260 * C31908 +
                            C31434 * C31849 * C31908 -
                            (C31434 * C33260 * C31957) / 2.0;
    const double gz300120 = C31749 * C33260 * C31479 +
                            C31435 * C31849 * C31479 +
                            (C31435 * C33260 * C33301) / 2.0;
    const double gz300102 = C31749 * C33070 * C31927 +
                            C31435 * C31544 * C31927 -
                            (C31435 * C33070 * C33459) / 2.0;
    const double gz300012 = C31722 * C33227 * C31927 +
                            C31434 * C31819 * C31927 -
                            (C31434 * C33227 * C33459) / 2.0;
    const double gz300111 = C31749 * C33227 * C31908 +
                            C31435 * C31819 * C31908 -
                            (C31435 * C33227 * C31957) / 2.0;
    const double gz030300 = (2 * C31459 * C31977 * C32108) / C31444 +
                            C31979 * C32109 * C31479 +
                            (C31979 * C31977 * C33301) / 2.0;
    const double gz030030 = C31550 * C32113 * C31479 +
                            C31431 * C32317 * C31479 +
                            (C31431 * C32113 * C33301) / 2.0;
    const double gz030003 = C31550 * C31977 * C31948 +
                            C31431 * C32109 * C31948 -
                            (C31431 * C31977 * C33543) / 2.0;
    const double gz030210 = C32098 * C33136 * C31479 +
                            C33262 * C32242 * C31479 +
                            (C33262 * C33136 * C33301) / 2.0;
    const double gz030201 = C32098 * C31977 * C31908 +
                            C33262 * C32109 * C31908 -
                            (C33262 * C31977 * C31957) / 2.0;
    const double gz030021 = C31550 * C33264 * C31908 +
                            C31431 * C32303 * C31908 -
                            (C31431 * C33264 * C31957) / 2.0;
    const double gz030120 = C32067 * C33264 * C31479 +
                            C33230 * C32303 * C31479 +
                            (C33230 * C33264 * C33301) / 2.0;
    const double gz030102 = C32067 * C31977 * C31927 +
                            C33230 * C32109 * C31927 -
                            (C33230 * C31977 * C33459) / 2.0;
    const double gz030012 = C31550 * C33136 * C31927 +
                            C31431 * C32242 * C31927 -
                            (C31431 * C33136 * C33459) / 2.0;
    const double gz030111 = C32067 * C33136 * C31908 +
                            C33230 * C32242 * C31908 -
                            (C33230 * C33136 * C31957) / 2.0;
    const double gz003300 = (C32387 * C33070 * C32108) / C31444 +
                            C31979 * C31544 * C32387 +
                            (C31979 * C33070 * C33315) / 2.0;
    const double gz003030 = C31550 * C31767 * C32387 +
                            (C32387 * C31431 * C31858) / C31444 +
                            (C31431 * C31767 * C33315) / 2.0;
    const double gz003003 =
        C31550 * C33070 * C32597 + C31431 * C31544 * C32597 -
        (C31431 * C33070 *
         ((C33465 * C31867) / C31444 +
          (3 * C33466 + 2 * C32598 +
           6 * ae *
               ((C32584 * C31867) / C31444 +
                (3 * C32547 + C32544 + 4 * ae * C32494) / C31461)) /
              C31461)) /
            2.0;
    const double gz003210 = C32098 * C33227 * C32387 +
                            C33262 * C31819 * C32387 +
                            (C33262 * C33227 * C33315) / 2.0;
    const double gz003201 = C32098 * C33070 * C32494 +
                            C33262 * C31544 * C32494 -
                            (C33262 * C33070 * C32598) / 2.0;
    const double gz003021 = C31550 * C33260 * C32494 +
                            C31431 * C31849 * C32494 -
                            (C31431 * C33260 * C32598) / 2.0;
    const double gz003120 = C32067 * C33260 * C32387 +
                            C33230 * C31849 * C32387 +
                            (C33230 * C33260 * C33315) / 2.0;
    const double gz003102 = C32067 * C33070 * C32569 +
                            C33230 * C31544 * C32569 -
                            (C33230 * C33070 * C33465) / 2.0;
    const double gz003012 = C31550 * C33227 * C32569 +
                            C31431 * C31819 * C32569 -
                            (C31431 * C33227 * C33465) / 2.0;
    const double gz003111 = C32067 * C33227 * C32494 +
                            C33230 * C31819 * C32494 -
                            (C33230 * C33227 * C32598) / 2.0;
    const double gz210300 = C32697 * C31440 * C31479 +
                            C32628 * C32063 * C31479 +
                            (C32628 * C31440 * C33301) / 2.0;
    const double gz210030 = C31670 * C32701 * C31479 +
                            C31433 * C32765 * C31479 +
                            (C31433 * C32701 * C33301) / 2.0;
    const double gz210003 = C31670 * C31440 * C31948 +
                            C31433 * C32063 * C31948 -
                            (C31433 * C31440 * C33543) / 2.0;
    const double gz210210 = C31746 * C33174 * C31479 +
                            C33277 * C32246 * C31479 +
                            (C33277 * C33174 * C33301) / 2.0;
    const double gz210201 = C31746 * C31440 * C31908 +
                            C33277 * C32063 * C31908 -
                            (C33277 * C31440 * C31957) / 2.0;
    const double gz210021 = C31670 * C33274 * C31908 +
                            C31433 * C32758 * C31908 -
                            (C31433 * C33274 * C31957) / 2.0;
    const double gz210120 = (2 * C31459 * C33274 * C31713) / C31444 +
                            C31436 * C32758 * C31479 +
                            (C31436 * C33274 * C33301) / 2.0;
    const double gz210102 = (C31927 * C31440 * C31713) / C31444 +
                            C31436 * C32063 * C31927 -
                            (C31436 * C31440 * C33459) / 2.0;
    const double gz210012 = C31670 * C33174 * C31927 +
                            C31433 * C32246 * C31927 -
                            (C31433 * C33174 * C33459) / 2.0;
    const double gz210111 = (C31908 * C33174 * C31713) / C31444 +
                            C31436 * C32246 * C31908 -
                            (C31436 * C33174 * C31957) / 2.0;
    const double gz201300 = C32697 * C33070 * C31909 +
                            C32628 * C31544 * C31909 +
                            (C32628 * C33070 * C33337) / 2.0;
    const double gz201030 = C31670 * C31767 * C31909 +
                            (C31909 * C31433 * C31858) / C31444 +
                            (C31433 * C31767 * C33337) / 2.0;
    const double gz201003 = C31670 * C33070 * C32843 +
                            C31433 * C31544 * C32843 -
                            (C31433 * C33070 * C33547) / 2.0;
    const double gz201210 = C31746 * C33227 * C31909 +
                            C33277 * C31819 * C31909 +
                            (C33277 * C33227 * C33337) / 2.0;
    const double gz201201 = C31746 * C33070 * C32467 +
                            C33277 * C31544 * C32467 -
                            (C33277 * C33070 * C32830) / 2.0;
    const double gz201021 = C31670 * C33260 * C32467 +
                            C31433 * C31849 * C32467 -
                            (C31433 * C33260 * C32830) / 2.0;
    const double gz201120 = (C31909 * C33260 * C31713) / C31444 +
                            C31436 * C31849 * C31909 +
                            (C31436 * C33260 * C33337) / 2.0;
    const double gz201102 = (C32834 * C33070 * C31713) / C31444 +
                            C31436 * C31544 * C32834 -
                            (C31436 * C33070 * C33471) / 2.0;
    const double gz201012 = C31670 * C33227 * C32834 +
                            C31433 * C31819 * C32834 -
                            (C31433 * C33227 * C33471) / 2.0;
    const double gz201111 = (C32467 * C33227 * C31713) / C31444 +
                            C31436 * C31819 * C32467 -
                            (C31436 * C33227 * C32830) / 2.0;
    const double gz021300 = (C31909 * C33263 * C32108) / C31444 +
                            C31979 * C32096 * C31909 +
                            (C31979 * C33263 * C33337) / 2.0;
    const double gz021030 = C31550 * C32873 * C31909 +
                            C31431 * C32905 * C31909 +
                            (C31431 * C32873 * C33337) / 2.0;
    const double gz021003 = C31550 * C33263 * C32843 +
                            C31431 * C32096 * C32843 -
                            (C31431 * C33263 * C33547) / 2.0;
    const double gz021210 = C32098 * C33133 * C31909 +
                            (C31909 * C33262 * C32227) / C31444 +
                            (C33262 * C33133 * C33337) / 2.0;
    const double gz021201 = C32098 * C33263 * C32467 +
                            C33262 * C32096 * C32467 -
                            (C33262 * C33263 * C32830) / 2.0;
    const double gz021021 = C31550 * C33270 * C32467 +
                            C31431 * C32304 * C32467 -
                            (C31431 * C33270 * C32830) / 2.0;
    const double gz021120 = C32067 * C33270 * C31909 +
                            C33230 * C32304 * C31909 +
                            (C33230 * C33270 * C33337) / 2.0;
    const double gz021102 = C32067 * C33263 * C32834 +
                            C33230 * C32096 * C32834 -
                            (C33230 * C33263 * C33471) / 2.0;
    const double gz021012 = C31550 * C33133 * C32834 +
                            (C32834 * C31431 * C32227) / C31444 -
                            (C31431 * C33133 * C33471) / 2.0;
    const double gz021111 = C32067 * C33133 * C32467 +
                            (C32467 * C33230 * C32227) / C31444 -
                            (C33230 * C33133 * C32830) / 2.0;
    const double gz120300 = C32950 * C33263 * C31479 +
                            C32926 * C32096 * C31479 +
                            (C32926 * C33263 * C33301) / 2.0;
    const double gz120030 = C31599 * C32873 * C31479 +
                            C31432 * C32905 * C31479 +
                            (C31432 * C32873 * C33301) / 2.0;
    const double gz120003 = C31599 * C33263 * C31948 +
                            C31432 * C32096 * C31948 -
                            (C31432 * C33263 * C33543) / 2.0;
    const double gz120210 = C32688 * C33133 * C31479 +
                            (2 * C31459 * C33273 * C32227) / C31444 +
                            (C33273 * C33133 * C33301) / 2.0;
    const double gz120201 = C32688 * C33263 * C31908 +
                            C33273 * C32096 * C31908 -
                            (C33273 * C33263 * C31957) / 2.0;
    const double gz120021 = C31599 * C33270 * C31908 +
                            C31432 * C32304 * C31908 -
                            (C31432 * C33270 * C31957) / 2.0;
    const double gz120120 = C31673 * C33270 * C31479 +
                            C33246 * C32304 * C31479 +
                            (C33246 * C33270 * C33301) / 2.0;
    const double gz120102 = C31673 * C33263 * C31927 +
                            C33246 * C32096 * C31927 -
                            (C33246 * C33263 * C33459) / 2.0;
    const double gz120012 = C31599 * C33133 * C31927 +
                            (C31927 * C31432 * C32227) / C31444 -
                            (C31432 * C33133 * C33459) / 2.0;
    const double gz120111 = C31673 * C33133 * C31908 +
                            (C31908 * C33246 * C32227) / C31444 -
                            (C33246 * C33133 * C31957) / 2.0;
    const double gz102300 = C32950 * C33070 * C32373 +
                            C32926 * C31544 * C32373 +
                            (C32926 * C33070 * C33353) / 2.0;
    const double gz102030 = C31599 * C31767 * C32373 +
                            (C32373 * C31432 * C31858) / C31444 +
                            (C31432 * C31767 * C33353) / 2.0;
    const double gz102003 = C31599 * C33070 * C33003 +
                            C31432 * C31544 * C33003 -
                            (C31432 * C33070 * C33550) / 2.0;
    const double gz102210 = C32688 * C33227 * C32373 +
                            C33273 * C31819 * C32373 +
                            (C33273 * C33227 * C33353) / 2.0;
    const double gz102201 = C32688 * C33070 * C32495 +
                            C33273 * C31544 * C32495 -
                            (C33273 * C33070 * C32573) / 2.0;
    const double gz102021 = C31599 * C33260 * C32495 +
                            C31432 * C31849 * C32495 -
                            (C31432 * C33260 * C32573) / 2.0;
    const double gz102120 = C31673 * C33260 * C32373 +
                            C33246 * C31849 * C32373 +
                            (C33246 * C33260 * C33353) / 2.0;
    const double gz102102 = C31673 * C33070 * C32542 +
                            C33246 * C31544 * C32542 -
                            (C33246 * C33070 * C33466) / 2.0;
    const double gz102012 = C31599 * C33227 * C32542 +
                            C31432 * C31819 * C32542 -
                            (C31432 * C33227 * C33466) / 2.0;
    const double gz102111 = C31673 * C33227 * C32495 +
                            C33246 * C31819 * C32495 -
                            (C33246 * C33227 * C32573) / 2.0;
    const double gz012300 = (C32373 * C31440 * C32108) / C31444 +
                            C31979 * C32063 * C32373 +
                            (C31979 * C31440 * C33353) / 2.0;
    const double gz012030 = C31550 * C32701 * C32373 +
                            C31431 * C32765 * C32373 +
                            (C31431 * C32701 * C33353) / 2.0;
    const double gz012003 = C31550 * C31440 * C33003 +
                            C31431 * C32063 * C33003 -
                            (C31431 * C31440 * C33550) / 2.0;
    const double gz012210 = C32098 * C33174 * C32373 +
                            C33262 * C32246 * C32373 +
                            (C33262 * C33174 * C33353) / 2.0;
    const double gz012201 = C32098 * C31440 * C32495 +
                            C33262 * C32063 * C32495 -
                            (C33262 * C31440 * C32573) / 2.0;
    const double gz012021 = C31550 * C33274 * C32495 +
                            C31431 * C32758 * C32495 -
                            (C31431 * C33274 * C32573) / 2.0;
    const double gz012120 = C32067 * C33274 * C32373 +
                            C33230 * C32758 * C32373 +
                            (C33230 * C33274 * C33353) / 2.0;
    const double gz012102 = C32067 * C31440 * C32542 +
                            C33230 * C32063 * C32542 -
                            (C33230 * C31440 * C33466) / 2.0;
    const double gz012012 = C31550 * C33174 * C32542 +
                            C31431 * C32246 * C32542 -
                            (C31431 * C33174 * C33466) / 2.0;
    const double gz012111 = C32067 * C33174 * C32495 +
                            C33230 * C32246 * C32495 -
                            (C33230 * C33174 * C32573) / 2.0;
    const double gz111300 = C32950 * C31440 * C31909 +
                            C32926 * C32063 * C31909 +
                            (C32926 * C31440 * C33337) / 2.0;
    const double gz111030 = C31599 * C32701 * C31909 +
                            C31432 * C32765 * C31909 +
                            (C31432 * C32701 * C33337) / 2.0;
    const double gz111003 = C31599 * C31440 * C32843 +
                            C31432 * C32063 * C32843 -
                            (C31432 * C31440 * C33547) / 2.0;
    const double gz111210 = C32688 * C33174 * C31909 +
                            C33273 * C32246 * C31909 +
                            (C33273 * C33174 * C33337) / 2.0;
    const double gz111201 = C32688 * C31440 * C32467 +
                            C33273 * C32063 * C32467 -
                            (C33273 * C31440 * C32830) / 2.0;
    const double gz111021 = C31599 * C33274 * C32467 +
                            C31432 * C32758 * C32467 -
                            (C31432 * C33274 * C32830) / 2.0;
    const double gz111120 = C31673 * C33274 * C31909 +
                            C33246 * C32758 * C31909 +
                            (C33246 * C33274 * C33337) / 2.0;
    const double gz111102 = C31673 * C31440 * C32834 +
                            C33246 * C32063 * C32834 -
                            (C33246 * C31440 * C33471) / 2.0;
    const double gz111012 = C31599 * C33174 * C32834 +
                            C31432 * C32246 * C32834 -
                            (C31432 * C33174 * C33471) / 2.0;
    const double gz111111 = C31673 * C33174 * C32467 +
                            C33246 * C32246 * C32467 -
                            (C33246 * C33174 * C32830) / 2.0;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(25. / 64.) * gz030030 - std::sqrt(225. / 64.) * gz030210 -
         std::sqrt(225. / 64.) * gz210030 + std::sqrt(2025. / 64.) * gz210210);
    gz[(Ai + 0) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(675. / 8.0) * gz210111 - std::sqrt(75. / 8.0) * gz030111);
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(15. / 64.) * gz030030 + std::sqrt(15. / 64.) * gz030210 +
         std::sqrt(30. / 8.0) * gz030012 - std::sqrt(135. / 64.) * gz210030 -
         std::sqrt(135. / 64.) * gz210210 - std::sqrt(270. / 8.0) * gz210012);
    gz[(Ai + 0) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(11.25 / 8.0) * gz030201 - std::sqrt(5.0 / 8.0) * gz030003 +
         std::sqrt(11.25 / 8.0) * gz030021 + std::sqrt(45. / 8.0) * gz210003 -
         std::sqrt(101.25 / 8.0) * gz210201 -
         std::sqrt(101.25 / 8.0) * gz210021);
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(15. / 64.) * gz030300 + std::sqrt(15. / 64.) * gz030120 -
         std::sqrt(30. / 8.0) * gz030102 - std::sqrt(135. / 64.) * gz210300 -
         std::sqrt(135. / 64.) * gz210120 + std::sqrt(270. / 8.0) * gz210102);
    gz[(Ai + 0) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(37.5 / 8.0) * gz030021 - std::sqrt(37.5 / 8.0) * gz030201 +
         std::sqrt(337.5 / 8.0) * gz210201 - std::sqrt(337.5 / 8.0) * gz210021);
    gz[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(225. / 64.) * gz210300 -
         (std::sqrt(225. / 64.) * gz030120 + std::sqrt(25. / 64.) * gz030300) +
         std::sqrt(2025. / 64.) * gz210120);
    gz[(Ai + 1) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(675. / 8.0) * gz111210 - std::sqrt(75. / 8.0) * gz111030);
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(225.) * gz111111;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(90.) * gz111012 + std::sqrt(45. / 8.0) * gz111210 +
               std::sqrt(45. / 8.0) * gz111030);
    gz[(Ai + 1) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(15.0) * gz111003 - std::sqrt(33.75) * gz111201 -
              std::sqrt(33.75) * gz111021);
    gz[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(90.) * gz111102 - (std::sqrt(45. / 8.0) * gz111120 +
                                           std::sqrt(45. / 8.0) * gz111300));
    gz[(Ai + 1) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(112.5) * gz111201 - std::sqrt(112.5) * gz111021);
    gz[(Ai + 1) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(75. / 8.0) * gz111300 + std::sqrt(675. / 8.0) * gz111120);
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(15. / 64.) * gz030030 - std::sqrt(135. / 64.) * gz030210 +
         std::sqrt(15. / 64.) * gz210030 - std::sqrt(135. / 64.) * gz210210 +
         std::sqrt(30. / 8.0) * gz012030 - std::sqrt(270. / 8.0) * gz012210);
    gz[(Ai + 2) * matrix_size + Bi + 1] +=
        -cc * (std::sqrt(90.) * gz012111 + std::sqrt(45. / 8.0) * gz210111 +
               std::sqrt(45. / 8.0) * gz030111);
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(9. / 64.) * gz030030 + std::sqrt(9. / 64.) * gz030210 +
              std::sqrt(18. / 8.0) * gz030012 + std::sqrt(9. / 64.) * gz210030 +
              std::sqrt(9. / 64.) * gz210210 + std::sqrt(18. / 8.0) * gz210012 +
              std::sqrt(18. / 8.0) * gz012030 +
              std::sqrt(18. / 8.0) * gz012210 + std::sqrt(36.) * gz012012);
    gz[(Ai + 2) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(6.75 / 8.0) * gz030201 - std::sqrt(3.0 / 8.0) * gz030003 +
         std::sqrt(6.75 / 8.0) * gz030021 - std::sqrt(3.0 / 8.0) * gz210003 +
         std::sqrt(6.75 / 8.0) * gz210201 + std::sqrt(6.75 / 8.0) * gz210021 -
         std::sqrt(6.0) * gz012003 + std::sqrt(13.5) * gz012201 +
         std::sqrt(13.5) * gz012021);
    gz[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(9. / 64.) * gz030300 + std::sqrt(9. / 64.) * gz030120 -
              std::sqrt(18. / 8.0) * gz030102 + std::sqrt(9. / 64.) * gz210300 +
              std::sqrt(9. / 64.) * gz210120 - std::sqrt(18. / 8.0) * gz210102 +
              std::sqrt(18. / 8.0) * gz012300 +
              std::sqrt(18. / 8.0) * gz012120 - std::sqrt(36.) * gz012102);
    gz[(Ai + 2) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(22.5 / 8.0) * gz030021 - std::sqrt(22.5 / 8.0) * gz030201 -
         std::sqrt(22.5 / 8.0) * gz210201 + std::sqrt(22.5 / 8.0) * gz210021 -
         std::sqrt(45.) * gz012201 + std::sqrt(45.) * gz012021);
    gz[(Ai + 2) * matrix_size + Bi + 6] +=
        -cc *
        (std::sqrt(270. / 8.0) * gz012120 + std::sqrt(30. / 8.0) * gz012300 +
         std::sqrt(135. / 64.) * gz210120 + std::sqrt(15. / 64.) * gz210300 +
         std::sqrt(135. / 64.) * gz030120 + std::sqrt(15. / 64.) * gz030300);
    gz[(Ai + 3) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gz003210 - std::sqrt(5.0 / 8.0) * gz003030 +
         std::sqrt(11.25 / 8.0) * gz201030 -
         std::sqrt(101.25 / 8.0) * gz201210 +
         std::sqrt(11.25 / 8.0) * gz021030 -
         std::sqrt(101.25 / 8.0) * gz021210);
    gz[(Ai + 3) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(15.0) * gz003111 - std::sqrt(33.75) * gz201111 -
              std::sqrt(33.75) * gz021111);
    gz[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(6.75 / 8.0) * gz201030 -
              (std::sqrt(6.0) * gz003012 + std::sqrt(3.0 / 8.0) * gz003210 +
               std::sqrt(3.0 / 8.0) * gz003030) +
              std::sqrt(6.75 / 8.0) * gz201210 + std::sqrt(13.5) * gz201012 +
              std::sqrt(6.75 / 8.0) * gz021030 +
              std::sqrt(6.75 / 8.0) * gz021210 + std::sqrt(13.5) * gz021012);
    gz[(Ai + 3) * matrix_size + Bi + 3] +=
        cc * (gz003003 - 1.5 * gz003201 - 1.5 * gz003021 - 1.5 * gz201003 +
              2.25 * gz201201 + 2.25 * gz201021 - 1.5 * gz021003 +
              2.25 * gz021201 + 2.25 * gz021021);
    gz[(Ai + 3) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(6.0) * gz003102 -
         (std::sqrt(3.0 / 8.0) * gz003120 + std::sqrt(3.0 / 8.0) * gz003300) +
         std::sqrt(6.75 / 8.0) * gz201300 + std::sqrt(6.75 / 8.0) * gz201120 -
         std::sqrt(13.5) * gz201102 + std::sqrt(6.75 / 8.0) * gz021300 +
         std::sqrt(6.75 / 8.0) * gz021120 - std::sqrt(13.5) * gz021102);
    gz[(Ai + 3) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gz003201 - std::sqrt(7.5) * gz003021 -
              std::sqrt(16.875) * gz201201 + std::sqrt(16.875) * gz201021 -
              std::sqrt(16.875) * gz021201 + std::sqrt(16.875) * gz021021);
    gz[(Ai + 3) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz003300 + std::sqrt(45.0 / 8.0) * gz003120 -
         std::sqrt(11.25 / 8.0) * gz201300 -
         std::sqrt(101.25 / 8.0) * gz201120 -
         std::sqrt(11.25 / 8.0) * gz021300 -
         std::sqrt(101.25 / 8.0) * gz021120);
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(15. / 64.) * gz300030 - std::sqrt(135. / 64.) * gz300210 +
         std::sqrt(15. / 64.) * gz120030 - std::sqrt(135. / 64.) * gz120210 -
         std::sqrt(30. / 8.0) * gz102030 + std::sqrt(270. / 8.0) * gz102210);
    gz[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(90.) * gz102111 - (std::sqrt(45. / 8.0) * gz120111 +
                                           std::sqrt(45. / 8.0) * gz300111));
    gz[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(9. / 64.) * gz300030 + std::sqrt(9. / 64.) * gz300210 +
              std::sqrt(18. / 8.0) * gz300012 + std::sqrt(9. / 64.) * gz120030 +
              std::sqrt(9. / 64.) * gz120210 + std::sqrt(18. / 8.0) * gz120012 -
              std::sqrt(18. / 8.0) * gz102030 -
              std::sqrt(18. / 8.0) * gz102210 - std::sqrt(36.) * gz102012);
    gz[(Ai + 4) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(6.75 / 8.0) * gz300201 - std::sqrt(3.0 / 8.0) * gz300003 +
         std::sqrt(6.75 / 8.0) * gz300021 - std::sqrt(3.0 / 8.0) * gz120003 +
         std::sqrt(6.75 / 8.0) * gz120201 + std::sqrt(6.75 / 8.0) * gz120021 +
         std::sqrt(6.0) * gz102003 - std::sqrt(13.5) * gz102201 -
         std::sqrt(13.5) * gz102021);
    gz[(Ai + 4) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(9. / 64.) * gz300300 + std::sqrt(9. / 64.) * gz300120 -
              std::sqrt(18. / 8.0) * gz300102 + std::sqrt(9. / 64.) * gz120300 +
              std::sqrt(9. / 64.) * gz120120 - std::sqrt(18. / 8.0) * gz120102 -
              std::sqrt(18. / 8.0) * gz102300 -
              std::sqrt(18. / 8.0) * gz102120 + std::sqrt(36.) * gz102102);
    gz[(Ai + 4) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(22.5 / 8.0) * gz300021 - std::sqrt(22.5 / 8.0) * gz300201 -
         std::sqrt(22.5 / 8.0) * gz120201 + std::sqrt(22.5 / 8.0) * gz120021 +
         std::sqrt(45.) * gz102201 - std::sqrt(45.) * gz102021);
    gz[(Ai + 4) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(30. / 8.0) * gz102300 -
         (std::sqrt(135. / 64.) * gz120120 + std::sqrt(15. / 64.) * gz120300 +
          std::sqrt(135. / 64.) * gz300120 + std::sqrt(15. / 64.) * gz300300) +
         std::sqrt(270. / 8.0) * gz102120);
    gz[(Ai + 5) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(337.5 / 8.0) * gz201210 - std::sqrt(37.5 / 8.0) * gz201030 +
         std::sqrt(37.5 / 8.0) * gz021030 - std::sqrt(337.5 / 8.0) * gz021210);
    gz[(Ai + 5) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(112.5) * gz201111 - std::sqrt(112.5) * gz021111);
    gz[(Ai + 5) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(22.5 / 8.0) * gz021030 -
              (std::sqrt(45.) * gz201012 + std::sqrt(22.5 / 8.0) * gz201210 +
               std::sqrt(22.5 / 8.0) * gz201030) +
              std::sqrt(22.5 / 8.0) * gz021210 + std::sqrt(45.) * gz021012);
    gz[(Ai + 5) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(7.5) * gz201003 - std::sqrt(16.875) * gz201201 -
              std::sqrt(16.875) * gz201021 - std::sqrt(7.5) * gz021003 +
              std::sqrt(16.875) * gz021201 + std::sqrt(16.875) * gz021021);
    gz[(Ai + 5) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(45.) * gz201102 -
         (std::sqrt(22.5 / 8.0) * gz201120 + std::sqrt(22.5 / 8.0) * gz201300) +
         std::sqrt(22.5 / 8.0) * gz021300 + std::sqrt(22.5 / 8.0) * gz021120 -
         std::sqrt(45.) * gz021102);
    gz[(Ai + 5) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(56.25) * gz201201 - std::sqrt(56.25) * gz201021 -
              std::sqrt(56.25) * gz021201 + std::sqrt(56.25) * gz021021);
    gz[(Ai + 5) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(37.5 / 8.0) * gz201300 + std::sqrt(337.5 / 8.0) * gz201120 -
         std::sqrt(37.5 / 8.0) * gz021300 - std::sqrt(337.5 / 8.0) * gz021120);
    gz[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(225. / 64.) * gz300210 - std::sqrt(25. / 64.) * gz300030 -
         std::sqrt(225. / 64.) * gz120030 + std::sqrt(2025. / 64.) * gz120210);
    gz[(Ai + 6) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(75. / 8.0) * gz300111 + std::sqrt(675. / 8.0) * gz120111);
    gz[(Ai + 6) * matrix_size + Bi + 2] +=
        -cc *
        (std::sqrt(270. / 8.0) * gz120012 + std::sqrt(135. / 64.) * gz120210 +
         std::sqrt(135. / 64.) * gz120030 + std::sqrt(30. / 8.0) * gz300012 +
         std::sqrt(15. / 64.) * gz300210 + std::sqrt(15. / 64.) * gz300030);
    gz[(Ai + 6) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz300003 - std::sqrt(11.25 / 8.0) * gz300201 -
         std::sqrt(11.25 / 8.0) * gz300021 + std::sqrt(45.0 / 8.0) * gz120003 -
         std::sqrt(101.25 / 8.0) * gz120201 -
         std::sqrt(101.25 / 8.0) * gz120021);
    gz[(Ai + 6) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(30. / 8.0) * gz300102 -
         (std::sqrt(15. / 64.) * gz300120 + std::sqrt(15. / 64.) * gz300300) -
         std::sqrt(135. / 64.) * gz120300 - std::sqrt(135. / 64.) * gz120120 +
         std::sqrt(270. / 8.0) * gz120102);
    gz[(Ai + 6) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(37.5 / 8.0) * gz300201 - std::sqrt(37.5 / 8.0) * gz300021 +
         std::sqrt(337.5 / 8.0) * gz120201 - std::sqrt(337.5 / 8.0) * gz120021);
    gz[(Ai + 6) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(25. / 64.) * gz300300 + std::sqrt(225. / 64.) * gz300120 +
         std::sqrt(225. / 64.) * gz120300 + std::sqrt(2025. / 64.) * gz120120);
}
