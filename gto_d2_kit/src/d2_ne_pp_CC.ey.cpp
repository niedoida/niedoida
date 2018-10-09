/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_pp_CC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_11_33(double ae,
                                 double be,
                                 double xA,
                                 double yA,
                                 double zA,
                                 double xB,
                                 double yB,
                                 double zB,
                                 double xC,
                                 double yC,
                                 double zC,
                                 const double* bs,
                                 double* const d2nexx,
                                 double* const d2nexy,
                                 double* const d2nexz,
                                 double* const d2neyx,
                                 double* const d2neyy,
                                 double* const d2neyz,
                                 double* const d2nezx,
                                 double* const d2nezy,
                                 double* const d2nezz,
                                 std::size_t matrix_size,
                                 std::size_t Ai,
                                 std::size_t Bi)
{
    const double C347 = ae + be;
    const double C346 = ae * be;
    const double C345 = xA - xB;
    const double C348 = std::pow(C345, 2);
    const double C349 = C348 * C346;
    const double C350 = C349 / C347;
    const double C351 = -C350;
    const double C352 = std::exp(C351);
    const double C355 = 2 * C347;
    const double C357 = yA - yB;
    const double C362 = zA - zB;
    const double C369 = std::pow(C357, 2);
    const double C370 = C369 * C346;
    const double C371 = C370 / C347;
    const double C372 = -C371;
    const double C373 = std::exp(C372);
    const double C380 = std::pow(C362, 2);
    const double C381 = C380 * C346;
    const double C382 = C381 / C347;
    const double C383 = -C382;
    const double C384 = std::exp(C383);
    const double C400 = C362 * be;
    const double C399 = C357 * be;
    const double C398 = C362 * ae;
    const double C397 = std::pow(C362, 2);
    const double C396 = C357 * ae;
    const double C395 = std::pow(C357, 2);
    const double C394 = std::pow(C355, -1);
    const double C393 = std::pow(C347, 2);
    const double C392 = C345 * be;
    const double C391 = C345 * ae;
    const double C390 = 2 * C347;
    const double C389 = ae + be;
    const double C388 = ae * be;
    const double C409 = C394 * C384;
    const double C408 = C384 * C398;
    const double C407 = C394 * C373;
    const double C406 = C373 * C396;
    const double C405 = C397 * C346;
    const double C404 = C395 * C346;
    const double C403 = C394 * C352;
    const double C402 = 2 * C393;
    const double C401 = C352 * C391;
    const double C411 = C405 / C347;
    const double C410 = C404 / C347;
    const double C413 = -C411;
    const double C412 = -C410;
    const double C415 = std::exp(C413);
    const double C414 = std::exp(C412);
    const double C417 = C394 * C415;
    const double C416 = C394 * C414;
    const double C59 = std::exp(-(std::pow(zA - zB, 2) * C388) / C389);
    const double C60 = std::exp(-(std::pow(yA - yB, 2) * C388) / C389);
    const double C61 = C352 / C390 - (C401 * C392) / C393;
    const double C62 = C401 / C402 - (std::pow(C390, -1) * C352 * C392) / C347;
    const double C63 = C403 / C355;
    const double C167 = (C414 * C396) / C347;
    const double C169 = -(C352 * C392) / C347;
    const double C195 = (C415 * C398) / C347;
    const double C217 = -(C414 * C399) / C347;
    const double C219 = C401 / C347;
    const double C241 = C373 / C355 - (C406 * C399) / C393;
    const double C242 = C406 / C402 - (C407 * C399) / C347;
    const double C243 = C407 / C355;
    const double C291 = -(C415 * C400) / C347;
    const double C333 = C384 / C355 - (C408 * C400) / C393;
    const double C334 = C408 / C402 - (C409 * C400) / C347;
    const double C335 = C409 / C355;
    const double C74 = be * zB;
    const double C73 = ae * zA;
    const double C72 = be * yB;
    const double C71 = ae * yA;
    const double C70 = bs[4];
    const double C69 = bs[3];
    const double C68 = bs[1];
    const double C67 = bs[2];
    const double C66 = ae + be;
    const double C65 = be * xB;
    const double C64 = ae * xA;
    const double C78 = C73 + C74;
    const double C77 = C71 + C72;
    const double C76 = 2 * C66;
    const double C75 = C64 + C65;
    const double C85 = C78 / C66;
    const double C84 = C77 / C66;
    const double C83 = std::pow(C76, 4);
    const double C82 = -C76;
    const double C81 = C68 * C76;
    const double C80 = std::pow(C76, 2);
    const double C79 = C75 / C66;
    const double C90 = C85 - zC;
    const double C89 = C84 - yC;
    const double C88 = std::pow(C82, 3);
    const double C87 = C67 * C80;
    const double C86 = C79 - xC;
    const double C103 = std::pow(C90, 2);
    const double C102 = C90 * C89;
    const double C101 = C90 * C86;
    const double C100 = C89 * C90;
    const double C99 = std::pow(C89, 2);
    const double C98 = C89 * C86;
    const double C97 = C66 * C90;
    const double C96 = C86 * C90;
    const double C95 = C66 * C89;
    const double C94 = C86 * C89;
    const double C93 = C69 * C88;
    const double C92 = C66 * C86;
    const double C91 = std::pow(C86, 2);
    const double C117 = C103 * C69;
    const double C116 = C102 * C69;
    const double C115 = C101 * C69;
    const double C114 = C100 * C69;
    const double C113 = C99 * C69;
    const double C112 = C98 * C69;
    const double C111 = C97 * C69;
    const double C110 = C96 * C69;
    const double C109 = C97 * C67;
    const double C108 = C95 * C69;
    const double C107 = C94 * C69;
    const double C106 = C95 * C67;
    const double C105 = C92 * C69;
    const double C104 = C91 * C69;
    const double C131 = C117 * C88;
    const double C130 = C116 * C88;
    const double C129 = C115 * C88;
    const double C128 = C114 * C88;
    const double C127 = C113 * C88;
    const double C126 = C112 * C88;
    const double C125 = C111 * C80;
    const double C124 = C110 * C88;
    const double C123 = C109 * C76;
    const double C122 = C108 * C80;
    const double C121 = C107 * C88;
    const double C120 = C106 * C76;
    const double C119 = C105 * C80;
    const double C118 = C104 * C88;
    const double C141 = C87 + C131;
    const double C140 = C87 + C127;
    const double C139 = -2 * C125;
    const double C138 = 2 * C125;
    const double C137 = 2 * C123;
    const double C136 = -2 * C122;
    const double C135 = 2 * C122;
    const double C134 = 2 * C120;
    const double C133 = 2 * C119;
    const double C132 = C87 + C118;
    const double C144 = C86 * C138;
    const double C143 = C86 * C135;
    const double C142 = C86 * C133;
    const double C145 = C87 - C142;
    const double C171 = C92 * C67;
    const double C172 = C171 * C76;
    const double C173 = 2 * C172;
    const double C248 = C89 * C138;
    const double C247 = C89 * C135;
    const double C246 = -2 * C119;
    const double C245 = C89 * C133;
    const double C249 = C87 - C247;
    const double C338 = C90 * C138;
    const double C337 = C90 * C135;
    const double C336 = C90 * C133;
    const double C339 = C87 - C338;
    const double C475 = -2 * C248;
    const double C474 = -2 * C337;
    const double C473 = -2 * C144;
    const double C472 = C90 * C141;
    const double C471 = 4 * C123;
    const double C470 = C90 * C130;
    const double C469 = C90 * C129;
    const double C468 = C90 * C128;
    const double C467 = C90 * C140;
    const double C466 = C90 * C126;
    const double C465 = C90 * C124;
    const double C464 = C90 * C121;
    const double C463 = -2 * C336;
    const double C462 = C90 * C132;
    const double C461 = C89 * C141;
    const double C460 = C89 * C130;
    const double C459 = C89 * C129;
    const double C458 = C89 * C128;
    const double C457 = -2 * C143;
    const double C456 = C89 * C140;
    const double C455 = 4 * C120;
    const double C454 = C89 * C126;
    const double C453 = C89 * C124;
    const double C452 = C89 * C121;
    const double C451 = -2 * C245;
    const double C450 = C89 * C132;
    const double C449 = C103 * C70;
    const double C448 = C86 * C141;
    const double C447 = C103 * C67;
    const double C446 = C102 * C70;
    const double C445 = C86 * C130;
    const double C444 = C102 * C67;
    const double C443 = C101 * C70;
    const double C442 = C86 * C129;
    const double C441 = C101 * C67;
    const double C440 = C100 * C70;
    const double C439 = C86 * C128;
    const double C438 = C100 * C67;
    const double C437 = C99 * C70;
    const double C436 = C86 * C140;
    const double C435 = C99 * C67;
    const double C434 = C98 * C70;
    const double C433 = C86 * C126;
    const double C432 = C98 * C67;
    const double C431 = C96 * C70;
    const double C430 = C86 * C124;
    const double C429 = C96 * C67;
    const double C428 = C94 * C70;
    const double C427 = C86 * C121;
    const double C426 = C94 * C67;
    const double C425 = C91 * C70;
    const double C424 = C86 * C132;
    const double C423 = 4 * C172;
    const double C422 = C91 * C67;
    const double C520 = C471 + C472;
    const double C519 = C134 + C470;
    const double C518 = C173 + C469;
    const double C517 = C134 + C468;
    const double C516 = C417 * C467;
    const double C515 = C417 * C466;
    const double C514 = C173 + C465;
    const double C513 = C417 * C464;
    const double C512 = C417 * C462;
    const double C511 = C59 * C461;
    const double C510 = C137 + C460;
    const double C509 = C59 * C459;
    const double C508 = C137 + C458;
    const double C507 = C455 + C456;
    const double C506 = C173 + C454;
    const double C505 = C59 * C453;
    const double C504 = C173 + C452;
    const double C503 = C59 * C450;
    const double C502 = C449 * C83;
    const double C501 = C59 * C448;
    const double C500 = C447 * C80;
    const double C499 = C446 * C83;
    const double C498 = C59 * C445;
    const double C497 = C444 * C80;
    const double C496 = C443 * C83;
    const double C495 = C137 + C442;
    const double C494 = C441 * C80;
    const double C493 = C440 * C83;
    const double C492 = C59 * C439;
    const double C491 = C438 * C80;
    const double C490 = C437 * C83;
    const double C489 = C59 * C436;
    const double C488 = C435 * C80;
    const double C487 = C434 * C83;
    const double C486 = C134 + C433;
    const double C485 = C432 * C80;
    const double C484 = C431 * C83;
    const double C483 = C137 + C430;
    const double C482 = C429 * C80;
    const double C481 = C428 * C83;
    const double C480 = C134 + C427;
    const double C479 = C426 * C80;
    const double C478 = C425 * C83;
    const double C477 = C423 + C424;
    const double C476 = C422 * C80;
    const double C575 = C291 * C497;
    const double C574 = C291 * C494;
    const double C573 = C291 * C491;
    const double C572 = C291 * C485;
    const double C571 = C291 * C482;
    const double C570 = C291 * C479;
    const double C569 = C89 * C496;
    const double C568 = C90 * C493;
    const double C567 = C90 * C487;
    const double C566 = C89 * C484;
    const double C565 = C89 * C499;
    const double C564 = C89 * C481;
    const double C563 = C417 * C520;
    const double C562 = C417 * C519;
    const double C561 = C195 * C497;
    const double C560 = C417 * C518;
    const double C559 = C195 * C494;
    const double C558 = C417 * C517;
    const double C557 = C195 * C491;
    const double C556 = C195 * C485;
    const double C555 = C417 * C514;
    const double C554 = C195 * C482;
    const double C553 = C195 * C479;
    const double C552 = C511 * C416;
    const double C551 = C86 * C499;
    const double C550 = C59 * C510;
    const double C549 = C509 * C416;
    const double C548 = C86 * C493;
    const double C547 = C59 * C508;
    const double C546 = C59 * C507;
    const double C545 = C59 * C506;
    const double C544 = C505 * C416;
    const double C543 = C59 * C504;
    const double C542 = C503 * C416;
    const double C541 = C93 + C502;
    const double C540 = C500 - C81;
    const double C539 = C59 * C497;
    const double C538 = C86 * C496;
    const double C537 = C59 * C495;
    const double C536 = C59 * C494;
    const double C535 = C59 * C491;
    const double C534 = C93 + C490;
    const double C533 = C488 - C81;
    const double C532 = C86 * C487;
    const double C531 = C59 * C486;
    const double C530 = C59 * C485;
    const double C529 = C86 * C484;
    const double C528 = C59 * C483;
    const double C527 = C59 * C482;
    const double C526 = C86 * C481;
    const double C525 = C59 * C480;
    const double C524 = C59 * C479;
    const double C523 = C93 + C478;
    const double C522 = C59 * C477;
    const double C521 = C476 - C81;
    const double C621 = C291 * C540;
    const double C620 = C575 + C562;
    const double C619 = C574 + C560;
    const double C618 = C573 + C558;
    const double C617 = C291 * C533;
    const double C616 = C572 + C515;
    const double C615 = C571 + C555;
    const double C614 = C570 + C513;
    const double C613 = C291 * C521;
    const double C612 = C89 * C541;
    const double C611 = C90 * C569;
    const double C610 = C136 + C568;
    const double C609 = C90 * C534;
    const double C608 = C89 * C567;
    const double C607 = C90 * C566;
    const double C606 = C139 + C565;
    const double C605 = C246 + C564;
    const double C604 = C195 * C540;
    const double C603 = C90 * C551;
    const double C602 = C561 + C562;
    const double C601 = C559 + C560;
    const double C600 = C90 * C548;
    const double C599 = C557 + C558;
    const double C598 = C195 * C533;
    const double C597 = C556 + C515;
    const double C596 = C554 + C555;
    const double C595 = C553 + C513;
    const double C594 = C90 * C523;
    const double C593 = C195 * C521;
    const double C592 = C86 * C541;
    const double C591 = C89 * C551;
    const double C590 = C550 * C416;
    const double C589 = C89 * C548;
    const double C588 = C547 * C416;
    const double C587 = C86 * C534;
    const double C586 = C546 * C416;
    const double C585 = C545 * C416;
    const double C584 = C543 * C416;
    const double C583 = C89 * C523;
    const double C582 = C59 * C540;
    const double C581 = C139 + C538;
    const double C580 = C59 * C533;
    const double C579 = C136 + C532;
    const double C578 = C139 + C529;
    const double C577 = C136 + C526;
    const double C576 = C59 * C521;
    const double C654 = C621 + C563;
    const double C653 = C617 + C516;
    const double C652 = C613 + C512;
    const double C651 = C90 * C612;
    const double C650 = C90 * C606;
    const double C649 = C611 - C245;
    const double C648 = C89 * C610;
    const double C647 = C89 * C609;
    const double C646 = C608 - C336;
    const double C645 = C607 - C245;
    const double C644 = C90 * C605;
    const double C643 = C90 * C583;
    const double C642 = C90 * C592;
    const double C641 = C604 + C563;
    const double C640 = C603 - C143;
    const double C639 = C90 * C581;
    const double C638 = C600 - C143;
    const double C637 = C90 * C587;
    const double C636 = C598 + C516;
    const double C635 = C90 * C579;
    const double C634 = C90 * C578;
    const double C633 = C90 * C577;
    const double C632 = C86 * C594;
    const double C631 = C593 + C512;
    const double C630 = C89 * C592;
    const double C629 = C591 - C144;
    const double C628 = C89 * C581;
    const double C627 = C589 - C144;
    const double C626 = C89 * C587;
    const double C625 = C89 * C579;
    const double C624 = C89 * C578;
    const double C623 = C89 * C577;
    const double C622 = C86 * C583;
    const double C681 = C475 + C651;
    const double C680 = C249 + C650;
    const double C679 = C417 * C649;
    const double C678 = C339 + C648;
    const double C677 = C474 + C647;
    const double C676 = C417 * C646;
    const double C675 = C417 * C645;
    const double C674 = C417 * C644;
    const double C673 = C417 * C643;
    const double C672 = C473 + C642;
    const double C671 = C417 * C640;
    const double C670 = C145 + C639;
    const double C669 = C417 * C638;
    const double C668 = C417 * C637;
    const double C667 = C417 * C635;
    const double C666 = C145 + C634;
    const double C665 = C417 * C633;
    const double C664 = C463 + C632;
    const double C663 = C59 * C630;
    const double C662 = C59 * C629;
    const double C661 = C59 * C628;
    const double C660 = C59 * C627;
    const double C659 = C457 + C626;
    const double C658 = C145 + C625;
    const double C657 = C59 * C624;
    const double C656 = C145 + C623;
    const double C655 = C451 + C622;
    const double C698 = C417 * C681;
    const double C697 = C417 * C680;
    const double C696 = C417 * C678;
    const double C695 = C417 * C677;
    const double C694 = C417 * C672;
    const double C693 = C417 * C670;
    const double C692 = C417 * C666;
    const double C691 = C417 * C664;
    const double C690 = C663 * C416;
    const double C689 = C662 * C416;
    const double C688 = C661 * C416;
    const double C687 = C660 * C416;
    const double C686 = C59 * C659;
    const double C685 = C59 * C658;
    const double C684 = C657 * C416;
    const double C683 = C59 * C656;
    const double C682 = C59 * C655;
    const double C702 = C686 * C416;
    const double C701 = C685 * C416;
    const double C700 = C683 * C416;
    const double C699 = C682 * C416;
    const double d2nexx100100 =
        (2 * Pi *
         (C576 * C60 * C61 + C522 * C60 * C62 +
          C59 * (C132 + C145 + C145 + C86 * (-4 * C119 + C86 * C523)) * C60 *
              C63)) /
        C66;
    const double d2nexx100010 =
        (2 * Pi * ((C576 * C167 + C542) * C169 + (C522 * C167 + C699) * C403)) /
        C66;
    const double d2nexx100001 =
        (2 * Pi * (C631 * C60 * C169 + (C195 * C477 + C691) * C60 * C403)) /
        C66;
    const double d2nexx010100 =
        (2 * Pi * ((C576 * C217 + C542) * C219 + (C522 * C217 + C699) * C403)) /
        C66;
    const double d2nexx010010 =
        (2 * Pi *
         (C576 * C241 + C503 * C242 + C59 * (C132 + C523 * C99) * C243) *
         C352) /
        C66;
    const double d2nexx010001 =
        (2 * Pi * (C631 * C217 + (C195 * C450 + C673) * C416) * C352) / C66;
    const double d2nexx001100 =
        (2 * Pi * (C652 * C60 * C219 + (C291 * C477 + C691) * C60 * C403)) /
        C66;
    const double d2nexx001010 =
        (2 * Pi * (C652 * C167 + (C291 * C450 + C673) * C416) * C352) / C66;
    const double d2nexx001001 =
        (2 * Pi * (C333 * C521 + C334 * C462 + C335 * (C132 + C523 * C103)) *
         C60 * C352) /
        C66;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += d2nexx100100;
    d2nexx[(Ai + 0) * matrix_size + Bi + 1] += d2nexx100010;
    d2nexx[(Ai + 0) * matrix_size + Bi + 2] += d2nexx100001;
    d2nexx[(Ai + 1) * matrix_size + Bi + 0] += d2nexx010100;
    d2nexx[(Ai + 1) * matrix_size + Bi + 1] += d2nexx010010;
    d2nexx[(Ai + 1) * matrix_size + Bi + 2] += d2nexx010001;
    d2nexx[(Ai + 2) * matrix_size + Bi + 0] += d2nexx001100;
    d2nexx[(Ai + 2) * matrix_size + Bi + 1] += d2nexx001010;
    d2nexx[(Ai + 2) * matrix_size + Bi + 2] += d2nexx001001;
    const double d2nexy100100 =
        (2 * Pi *
         (C524 * C60 * C61 + C525 * C60 * C62 +
          C59 * (C121 - C143 + C86 * C577) * C60 * C63)) /
        C66;
    const double d2nexy100010 =
        (2 * Pi * ((C524 * C167 + C584) * C169 + (C525 * C167 + C700) * C403)) /
        C66;
    const double d2nexy100001 =
        (2 * Pi * (C595 * C60 * C169 + (C195 * C480 + C665) * C60 * C403)) /
        C66;
    const double d2nexy010100 =
        (2 * Pi * ((C524 * C217 + C584) * C219 + (C525 * C217 + C700) * C403)) /
        C66;
    const double d2nexy010010 =
        (2 * Pi *
         (C524 * C241 + C543 * C242 + C59 * (C121 - C245 + C89 * C605) * C243) *
         C352) /
        C66;
    const double d2nexy010001 =
        (2 * Pi * (C595 * C217 + (C195 * C504 + C674) * C416) * C352) / C66;
    const double d2nexy001100 =
        (2 * Pi * (C614 * C60 * C219 + (C291 * C480 + C665) * C60 * C403)) /
        C66;
    const double d2nexy001010 =
        (2 * Pi * (C614 * C167 + (C291 * C504 + C674) * C416) * C352) / C66;
    const double d2nexy001001 =
        (2 * Pi * (C333 * C479 + C334 * C464 + C335 * (C121 + C481 * C103)) *
         C60 * C352) /
        C66;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += d2nexy100100;
    d2nexy[(Ai + 0) * matrix_size + Bi + 1] += d2nexy100010;
    d2nexy[(Ai + 0) * matrix_size + Bi + 2] += d2nexy100001;
    d2nexy[(Ai + 1) * matrix_size + Bi + 0] += d2nexy010100;
    d2nexy[(Ai + 1) * matrix_size + Bi + 1] += d2nexy010010;
    d2nexy[(Ai + 1) * matrix_size + Bi + 2] += d2nexy010001;
    d2nexy[(Ai + 2) * matrix_size + Bi + 0] += d2nexy001100;
    d2nexy[(Ai + 2) * matrix_size + Bi + 1] += d2nexy001010;
    d2nexy[(Ai + 2) * matrix_size + Bi + 2] += d2nexy001001;
    const double d2nexz100100 =
        (2 * Pi *
         (C527 * C60 * C61 + C528 * C60 * C62 +
          C59 * (C124 - C144 + C86 * C578) * C60 * C63)) /
        C66;
    const double d2nexz100010 =
        (2 * Pi * ((C527 * C167 + C544) * C169 + (C528 * C167 + C684) * C403)) /
        C66;
    const double d2nexz100001 =
        (2 * Pi * (C596 * C60 * C169 + (C195 * C483 + C692) * C60 * C403)) /
        C66;
    const double d2nexz010100 =
        (2 * Pi * ((C527 * C217 + C544) * C219 + (C528 * C217 + C684) * C403)) /
        C66;
    const double d2nexz010010 =
        (2 * Pi *
         (C527 * C241 + C505 * C242 + C59 * (C124 + C484 * C99) * C243) *
         C352) /
        C66;
    const double d2nexz010001 =
        (2 * Pi * (C596 * C217 + (C195 * C453 + C675) * C416) * C352) / C66;
    const double d2nexz001100 =
        (2 * Pi * (C615 * C60 * C219 + (C291 * C483 + C692) * C60 * C403)) /
        C66;
    const double d2nexz001010 =
        (2 * Pi * (C615 * C167 + (C291 * C453 + C675) * C416) * C352) / C66;
    const double d2nexz001001 =
        (2 * Pi *
         (C333 * C482 + C334 * C514 +
          C335 * (C124 - C336 + C90 * (C246 + C90 * C484))) *
         C60 * C352) /
        C66;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += d2nexz100100;
    d2nexz[(Ai + 0) * matrix_size + Bi + 1] += d2nexz100010;
    d2nexz[(Ai + 0) * matrix_size + Bi + 2] += d2nexz100001;
    d2nexz[(Ai + 1) * matrix_size + Bi + 0] += d2nexz010100;
    d2nexz[(Ai + 1) * matrix_size + Bi + 1] += d2nexz010010;
    d2nexz[(Ai + 1) * matrix_size + Bi + 2] += d2nexz010001;
    d2nexz[(Ai + 2) * matrix_size + Bi + 0] += d2nexz001100;
    d2nexz[(Ai + 2) * matrix_size + Bi + 1] += d2nexz001010;
    d2nexz[(Ai + 2) * matrix_size + Bi + 2] += d2nexz001001;
    const double d2neyx100100 =
        (2 * Pi *
         (C530 * C60 * C61 + C531 * C60 * C62 +
          C59 * (C126 - C143 + C86 * C579) * C60 * C63)) /
        C66;
    const double d2neyx100010 =
        (2 * Pi * ((C530 * C167 + C585) * C169 + (C531 * C167 + C701) * C403)) /
        C66;
    const double d2neyx100001 =
        (2 * Pi * (C597 * C60 * C169 + (C195 * C486 + C667) * C60 * C403)) /
        C66;
    const double d2neyx010100 =
        (2 * Pi * ((C530 * C217 + C585) * C219 + (C531 * C217 + C701) * C403)) /
        C66;
    const double d2neyx010010 =
        (2 * Pi *
         (C530 * C241 + C545 * C242 +
          C59 * (C126 - C245 + C89 * (C246 + C89 * C487)) * C243) *
         C352) /
        C66;
    const double d2neyx010001 =
        (2 * Pi * (C597 * C217 + (C195 * C506 + C676) * C416) * C352) / C66;
    const double d2neyx001100 =
        (2 * Pi * (C616 * C60 * C219 + (C291 * C486 + C667) * C60 * C403)) /
        C66;
    const double d2neyx001010 =
        (2 * Pi * (C616 * C167 + (C291 * C506 + C676) * C416) * C352) / C66;
    const double d2neyx001001 =
        (2 * Pi * (C333 * C485 + C334 * C466 + C335 * (C126 + C487 * C103)) *
         C60 * C352) /
        C66;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += d2neyx100100;
    d2neyx[(Ai + 0) * matrix_size + Bi + 1] += d2neyx100010;
    d2neyx[(Ai + 0) * matrix_size + Bi + 2] += d2neyx100001;
    d2neyx[(Ai + 1) * matrix_size + Bi + 0] += d2neyx010100;
    d2neyx[(Ai + 1) * matrix_size + Bi + 1] += d2neyx010010;
    d2neyx[(Ai + 1) * matrix_size + Bi + 2] += d2neyx010001;
    d2neyx[(Ai + 2) * matrix_size + Bi + 0] += d2neyx001100;
    d2neyx[(Ai + 2) * matrix_size + Bi + 1] += d2neyx001010;
    d2neyx[(Ai + 2) * matrix_size + Bi + 2] += d2neyx001001;
    const double d2neyy100100 = (2 * Pi *
                                 (C580 * C60 * C61 + C489 * C60 * C62 +
                                  C59 * (C140 + C534 * C91) * C60 * C63)) /
                                C66;
    const double d2neyy100010 =
        (2 * Pi * ((C580 * C167 + C586) * C169 + (C489 * C167 + C702) * C403)) /
        C66;
    const double d2neyy100001 =
        (2 * Pi * (C636 * C60 * C169 + (C195 * C436 + C668) * C60 * C403)) /
        C66;
    const double d2neyy010100 =
        (2 * Pi * ((C580 * C217 + C586) * C219 + (C489 * C217 + C702) * C403)) /
        C66;
    const double d2neyy010010 =
        (2 * Pi *
         (C580 * C241 + C546 * C242 +
          C59 * (C140 + C249 + C249 + C89 * (-4 * C122 + C89 * C534)) * C243) *
         C352) /
        C66;
    const double d2neyy010001 =
        (2 * Pi * (C636 * C217 + (C195 * C507 + C695) * C416) * C352) / C66;
    const double d2neyy001100 =
        (2 * Pi * (C653 * C60 * C219 + (C291 * C436 + C668) * C60 * C403)) /
        C66;
    const double d2neyy001010 =
        (2 * Pi * (C653 * C167 + (C291 * C507 + C695) * C416) * C352) / C66;
    const double d2neyy001001 =
        (2 * Pi * (C333 * C533 + C334 * C467 + C335 * (C140 + C534 * C103)) *
         C60 * C352) /
        C66;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += d2neyy100100;
    d2neyy[(Ai + 0) * matrix_size + Bi + 1] += d2neyy100010;
    d2neyy[(Ai + 0) * matrix_size + Bi + 2] += d2neyy100001;
    d2neyy[(Ai + 1) * matrix_size + Bi + 0] += d2neyy010100;
    d2neyy[(Ai + 1) * matrix_size + Bi + 1] += d2neyy010010;
    d2neyy[(Ai + 1) * matrix_size + Bi + 2] += d2neyy010001;
    d2neyy[(Ai + 2) * matrix_size + Bi + 0] += d2neyy001100;
    d2neyy[(Ai + 2) * matrix_size + Bi + 1] += d2neyy001010;
    d2neyy[(Ai + 2) * matrix_size + Bi + 2] += d2neyy001001;
    const double d2neyz100100 = (2 * Pi *
                                 (C535 * C60 * C61 + C492 * C60 * C62 +
                                  C59 * (C128 + C493 * C91) * C60 * C63)) /
                                C66;
    const double d2neyz100010 =
        (2 * Pi * ((C535 * C167 + C588) * C169 + (C492 * C167 + C687) * C403)) /
        C66;
    const double d2neyz100001 =
        (2 * Pi * (C599 * C60 * C169 + (C195 * C439 + C669) * C60 * C403)) /
        C66;
    const double d2neyz010100 =
        (2 * Pi * ((C535 * C217 + C588) * C219 + (C492 * C217 + C687) * C403)) /
        C66;
    const double d2neyz010010 =
        (2 * Pi *
         (C535 * C241 + C547 * C242 +
          C59 * (C128 - C248 + C89 * (C139 + C89 * C493)) * C243) *
         C352) /
        C66;
    const double d2neyz010001 =
        (2 * Pi * (C599 * C217 + (C195 * C508 + C696) * C416) * C352) / C66;
    const double d2neyz001100 =
        (2 * Pi * (C618 * C60 * C219 + (C291 * C439 + C669) * C60 * C403)) /
        C66;
    const double d2neyz001010 =
        (2 * Pi * (C618 * C167 + (C291 * C508 + C696) * C416) * C352) / C66;
    const double d2neyz001001 =
        (2 * Pi *
         (C333 * C491 + C334 * C517 + C335 * (C128 - C337 + C90 * C610)) * C60 *
         C352) /
        C66;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += d2neyz100100;
    d2neyz[(Ai + 0) * matrix_size + Bi + 1] += d2neyz100010;
    d2neyz[(Ai + 0) * matrix_size + Bi + 2] += d2neyz100001;
    d2neyz[(Ai + 1) * matrix_size + Bi + 0] += d2neyz010100;
    d2neyz[(Ai + 1) * matrix_size + Bi + 1] += d2neyz010010;
    d2neyz[(Ai + 1) * matrix_size + Bi + 2] += d2neyz010001;
    d2neyz[(Ai + 2) * matrix_size + Bi + 0] += d2neyz001100;
    d2neyz[(Ai + 2) * matrix_size + Bi + 1] += d2neyz001010;
    d2neyz[(Ai + 2) * matrix_size + Bi + 2] += d2neyz001001;
    const double d2nezx100100 =
        (2 * Pi *
         (C536 * C60 * C61 + C537 * C60 * C62 +
          C59 * (C129 - C144 + C86 * C581) * C60 * C63)) /
        C66;
    const double d2nezx100010 =
        (2 * Pi * ((C536 * C167 + C549) * C169 + (C537 * C167 + C688) * C403)) /
        C66;
    const double d2nezx100001 =
        (2 * Pi * (C601 * C60 * C169 + (C195 * C495 + C693) * C60 * C403)) /
        C66;
    const double d2nezx010100 =
        (2 * Pi * ((C536 * C217 + C549) * C219 + (C537 * C217 + C688) * C403)) /
        C66;
    const double d2nezx010010 =
        (2 * Pi *
         (C536 * C241 + C509 * C242 + C59 * (C129 + C496 * C99) * C243) *
         C352) /
        C66;
    const double d2nezx010001 =
        (2 * Pi * (C601 * C217 + (C195 * C459 + C679) * C416) * C352) / C66;
    const double d2nezx001100 =
        (2 * Pi * (C619 * C60 * C219 + (C291 * C495 + C693) * C60 * C403)) /
        C66;
    const double d2nezx001010 =
        (2 * Pi * (C619 * C167 + (C291 * C459 + C679) * C416) * C352) / C66;
    const double d2nezx001001 =
        (2 * Pi *
         (C333 * C494 + C334 * C518 +
          C335 * (C129 - C336 + C90 * (C246 + C90 * C496))) *
         C60 * C352) /
        C66;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += d2nezx100100;
    d2nezx[(Ai + 0) * matrix_size + Bi + 1] += d2nezx100010;
    d2nezx[(Ai + 0) * matrix_size + Bi + 2] += d2nezx100001;
    d2nezx[(Ai + 1) * matrix_size + Bi + 0] += d2nezx010100;
    d2nezx[(Ai + 1) * matrix_size + Bi + 1] += d2nezx010010;
    d2nezx[(Ai + 1) * matrix_size + Bi + 2] += d2nezx010001;
    d2nezx[(Ai + 2) * matrix_size + Bi + 0] += d2nezx001100;
    d2nezx[(Ai + 2) * matrix_size + Bi + 1] += d2nezx001010;
    d2nezx[(Ai + 2) * matrix_size + Bi + 2] += d2nezx001001;
    const double d2nezy100100 = (2 * Pi *
                                 (C539 * C60 * C61 + C498 * C60 * C62 +
                                  C59 * (C130 + C499 * C91) * C60 * C63)) /
                                C66;
    const double d2nezy100010 =
        (2 * Pi * ((C539 * C167 + C590) * C169 + (C498 * C167 + C689) * C403)) /
        C66;
    const double d2nezy100001 =
        (2 * Pi * (C602 * C60 * C169 + (C195 * C445 + C671) * C60 * C403)) /
        C66;
    const double d2nezy010100 =
        (2 * Pi * ((C539 * C217 + C590) * C219 + (C498 * C217 + C689) * C403)) /
        C66;
    const double d2nezy010010 =
        (2 * Pi *
         (C539 * C241 + C550 * C242 + C59 * (C130 - C248 + C89 * C606) * C243) *
         C352) /
        C66;
    const double d2nezy010001 =
        (2 * Pi * (C602 * C217 + (C195 * C510 + C697) * C416) * C352) / C66;
    const double d2nezy001100 =
        (2 * Pi * (C620 * C60 * C219 + (C291 * C445 + C671) * C60 * C403)) /
        C66;
    const double d2nezy001010 =
        (2 * Pi * (C620 * C167 + (C291 * C510 + C697) * C416) * C352) / C66;
    const double d2nezy001001 =
        (2 * Pi *
         (C333 * C497 + C334 * C519 +
          C335 * (C130 - C337 + C90 * (C136 + C90 * C499))) *
         C60 * C352) /
        C66;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += d2nezy100100;
    d2nezy[(Ai + 0) * matrix_size + Bi + 1] += d2nezy100010;
    d2nezy[(Ai + 0) * matrix_size + Bi + 2] += d2nezy100001;
    d2nezy[(Ai + 1) * matrix_size + Bi + 0] += d2nezy010100;
    d2nezy[(Ai + 1) * matrix_size + Bi + 1] += d2nezy010010;
    d2nezy[(Ai + 1) * matrix_size + Bi + 2] += d2nezy010001;
    d2nezy[(Ai + 2) * matrix_size + Bi + 0] += d2nezy001100;
    d2nezy[(Ai + 2) * matrix_size + Bi + 1] += d2nezy001010;
    d2nezy[(Ai + 2) * matrix_size + Bi + 2] += d2nezy001001;
    const double d2nezz100100 = (2 * Pi *
                                 (C582 * C60 * C61 + C501 * C60 * C62 +
                                  C59 * (C141 + C541 * C91) * C60 * C63)) /
                                C66;
    const double d2nezz100010 =
        (2 * Pi * ((C582 * C167 + C552) * C169 + (C501 * C167 + C690) * C403)) /
        C66;
    const double d2nezz100001 =
        (2 * Pi * (C641 * C60 * C169 + (C195 * C448 + C694) * C60 * C403)) /
        C66;
    const double d2nezz010100 =
        (2 * Pi * ((C582 * C217 + C552) * C219 + (C501 * C217 + C690) * C403)) /
        C66;
    const double d2nezz010010 =
        (2 * Pi *
         (C582 * C241 + C511 * C242 + C59 * (C141 + C541 * C99) * C243) *
         C352) /
        C66;
    const double d2nezz010001 =
        (2 * Pi * (C641 * C217 + (C195 * C461 + C698) * C416) * C352) / C66;
    const double d2nezz001100 =
        (2 * Pi * (C654 * C60 * C219 + (C291 * C448 + C694) * C60 * C403)) /
        C66;
    const double d2nezz001010 =
        (2 * Pi * (C654 * C167 + (C291 * C461 + C698) * C416) * C352) / C66;
    const double d2nezz001001 =
        (2 * Pi *
         (C333 * C540 + C334 * C520 +
          C335 * (C141 + C339 + C339 + C90 * (-4 * C125 + C90 * C541))) *
         C60 * C352) /
        C66;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += d2nezz100100;
    d2nezz[(Ai + 0) * matrix_size + Bi + 1] += d2nezz100010;
    d2nezz[(Ai + 0) * matrix_size + Bi + 2] += d2nezz100001;
    d2nezz[(Ai + 1) * matrix_size + Bi + 0] += d2nezz010100;
    d2nezz[(Ai + 1) * matrix_size + Bi + 1] += d2nezz010010;
    d2nezz[(Ai + 1) * matrix_size + Bi + 2] += d2nezz010001;
    d2nezz[(Ai + 2) * matrix_size + Bi + 0] += d2nezz001100;
    d2nezz[(Ai + 2) * matrix_size + Bi + 1] += d2nezz001010;
    d2nezz[(Ai + 2) * matrix_size + Bi + 2] += d2nezz001001;
}
