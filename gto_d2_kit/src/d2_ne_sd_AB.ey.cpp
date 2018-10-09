/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_sd_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_02_12(double ae,
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
    const double C838 = ae + be;
    const double C837 = xA - xB;
    const double C842 = ae * be;
    const double C841 = std::pow(C837, 2);
    const double C843 = C841 * C842;
    const double C844 = C843 / C838;
    const double C845 = -C844;
    const double C846 = std::exp(C845);
    const double C854 = yA - yB;
    const double C855 = std::pow(C854, 2);
    const double C856 = C855 * C842;
    const double C857 = C856 / C838;
    const double C858 = -C857;
    const double C859 = std::exp(C858);
    const double C870 = zA - zB;
    const double C871 = std::pow(C870, 2);
    const double C872 = C871 * C842;
    const double C873 = C872 / C838;
    const double C874 = -C873;
    const double C875 = std::exp(C874);
    const double C891 = C870 * ae;
    const double C890 = C854 * ae;
    const double C889 = 2 * C838;
    const double C888 = std::pow(C838, 2);
    const double C887 = C837 * ae;
    const double C886 = ae * be;
    const double C895 = C875 * C891;
    const double C894 = C859 * C890;
    const double C893 = std::pow(C889, -2);
    const double C892 = std::pow(C889, -1);
    const double C59 = std::exp(-(std::pow(xA - xB, 2) * C886) / (ae + be));
    const double C63 =
        (std::exp(-(std::pow(C837, 2) * C886) / C838) * C887) / C838;
    const double C65 = (C846 * std::pow(C887, 2)) / C888 + C846 / C889;
    const double C66 = C892 * C846;
    const double C67 = (2 * C892 * C846 * C887) / C838;
    const double C69 = C893 * C846;
    const double C70 = std::exp(-(std::pow(zA - zB, 2) * C842) / C838);
    const double C71 = std::exp(-(std::pow(yA - yB, 2) * C842) / C838);
    const double C369 = (C859 * std::pow(C890, 2)) / C888 + C859 / C889;
    const double C370 = (2 * C892 * C894) / C838;
    const double C371 = C893 * C859;
    const double C375 = C894 / C838;
    const double C377 = C892 * C859;
    const double C513 = (C875 * std::pow(C891, 2)) / C888 + C875 / C889;
    const double C514 = (2 * C892 * C895) / C838;
    const double C515 = C893 * C875;
    const double C519 = C895 / C838;
    const double C521 = C892 * C875;
    const double C91 = be * zB;
    const double C90 = ae * zA;
    const double C89 = zA - zB;
    const double C88 = be * yB;
    const double C87 = ae * yA;
    const double C86 = yA - yB;
    const double C85 = bs[4];
    const double C84 = 0 * ae;
    const double C83 = bs[3];
    const double C82 = bs[2];
    const double C81 = bs[1];
    const double C80 = be * xB;
    const double C79 = ae * xA;
    const double C78 = 0 * ae;
    const double C77 = 0 * be;
    const double C76 = bs[0];
    const double C75 = 0 * be;
    const double C74 = ae + be;
    const double C73 = ae * be;
    const double C72 = xA - xB;
    const double C103 = C90 + C91;
    const double C102 = C73 * C89;
    const double C101 = C87 + C88;
    const double C100 = C73 * C86;
    const double C99 = C84 / C74;
    const double C98 = C79 + C80;
    const double C97 = C78 / C74;
    const double C96 = C72 * C75;
    const double C95 = 2 * C74;
    const double C94 = std::pow(C74, 2);
    const double C93 = 2 * C73;
    const double C92 = C73 * C72;
    const double C115 = C103 / C74;
    const double C114 = C102 * C70;
    const double C113 = C101 / C74;
    const double C112 = C100 * C71;
    const double C111 = std::pow(C95, 4);
    const double C110 = -C95;
    const double C109 = C81 * C95;
    const double C108 = std::pow(C95, 2);
    const double C107 = C98 / C74;
    const double C106 = C96 / C74;
    const double C105 = 2 * C94;
    const double C104 = C92 * C59;
    const double C130 = C115 - zC;
    const double C129 = 2 * C114;
    const double C128 = C113 - yC;
    const double C127 = 2 * C112;
    const double C126 = std::pow(C110, 3);
    const double C125 = C82 * C108;
    const double C124 = C109 * ae;
    const double C123 = C109 * be;
    const double C122 = C107 - xC;
    const double C121 = C104 / C94;
    const double C120 = C77 / C105;
    const double C119 = 0 - C106;
    const double C118 = C75 / C105;
    const double C117 = -4 * C104;
    const double C116 = 2 * C104;
    const double C160 = std::pow(C130, 2);
    const double C159 = C89 * C129;
    const double C158 = C130 * C128;
    const double C157 = C130 * C122;
    const double C156 = ae * C130;
    const double C155 = C128 * C130;
    const double C154 = std::pow(C128, 2);
    const double C153 = C86 * C127;
    const double C152 = C128 * C122;
    const double C151 = ae * C128;
    const double C150 = C122 * C130;
    const double C149 = be * C130;
    const double C148 = C76 * C129;
    const double C147 = C122 * C128;
    const double C146 = be * C128;
    const double C145 = C76 * C127;
    const double C144 = C83 * C126;
    const double C143 = C125 * ae;
    const double C142 = C122 * C125;
    const double C141 = C125 * be;
    const double C140 = -C124;
    const double C139 = -C123;
    const double C138 = C122 * C109;
    const double C137 = std::pow(C122, 2);
    const double C136 = ae * C122;
    const double C135 = be * C122;
    const double C134 = C97 - C121;
    const double C133 = C119 * ae;
    const double C132 = C117 / C74;
    const double C131 = C72 * C116;
    const double C204 = C160 * C83;
    const double C203 = C159 / C74;
    const double C202 = C158 * ae;
    const double C201 = C156 * C83;
    const double C200 = C156 * C82;
    const double C199 = C157 * ae;
    const double C198 = C156 * C81;
    const double C197 = C155 * ae;
    const double C196 = C154 * C83;
    const double C195 = C153 / C74;
    const double C194 = C151 * C83;
    const double C193 = C151 * C82;
    const double C192 = C152 * ae;
    const double C191 = C151 * C81;
    const double C190 = C149 * C83;
    const double C189 = C138 * C129;
    const double C188 = C149 * C82;
    const double C187 = C150 * ae;
    const double C186 = C149 * C81;
    const double C185 = C148 / C74;
    const double C184 = C146 * C83;
    const double C183 = C138 * C127;
    const double C182 = C146 * C82;
    const double C181 = C147 * ae;
    const double C180 = C146 * C81;
    const double C179 = C145 / C74;
    const double C178 = C142 * ae;
    const double C177 = C136 * C83;
    const double C176 = C143 / C74;
    const double C175 = C142 * be;
    const double C174 = C135 * C83;
    const double C173 = C141 / C74;
    const double C172 = C134 / C95;
    const double C171 = C125 * C137;
    const double C170 = C137 * C83;
    const double C169 = C136 * C82;
    const double C168 = C140 / C74;
    const double C167 = C135 * C82;
    const double C166 = C139 / C74;
    const double C165 = C72 * C134;
    const double C164 = C136 * C81;
    const double C163 = C135 * C81;
    const double C162 = C133 / C74;
    const double C161 = C131 / C74;
    const double C239 = C204 * C126;
    const double C238 = C70 - C203;
    const double C237 = C202 * be;
    const double C236 = C201 * C108;
    const double C235 = C200 * C95;
    const double C234 = C199 * be;
    const double C233 = C197 * be;
    const double C232 = C196 * C126;
    const double C231 = C71 - C195;
    const double C230 = C194 * C108;
    const double C229 = C193 * C95;
    const double C228 = C192 * be;
    const double C227 = C190 * C108;
    const double C226 = C189 / C74;
    const double C225 = C188 * C95;
    const double C224 = C187 * be;
    const double C223 = 2 * C186;
    const double C222 = C184 * C108;
    const double C221 = C183 / C74;
    const double C220 = C182 * C95;
    const double C219 = C181 * be;
    const double C218 = 2 * C180;
    const double C217 = C178 / C74;
    const double C216 = C177 * C108;
    const double C215 = C175 / C74;
    const double C214 = C174 * C108;
    const double C213 = C172 + C99;
    const double C212 = C171 - C109;
    const double C211 = C170 * C126;
    const double C210 = C169 * C95;
    const double C209 = C167 * C95;
    const double C208 = C165 + C66;
    const double C207 = 2 * C163;
    const double C206 = C162 - C120;
    const double C205 = C59 - C161;
    const double C276 = C125 + C239;
    const double C275 = C238 * C93;
    const double C274 = C83 * C237;
    const double C273 = C236 * C137;
    const double C272 = 2 * C235;
    const double C271 = C83 * C234;
    const double C270 = -2 * C235;
    const double C269 = C83 * C233;
    const double C268 = C125 + C232;
    const double C267 = C231 * C93;
    const double C266 = C213 * C212;
    const double C265 = C65 * C207;
    const double C264 = C230 * C137;
    const double C263 = 2 * C229;
    const double C262 = C83 * C228;
    const double C261 = -2 * C229;
    const double C260 = C227 * C137;
    const double C259 = 2 * C225;
    const double C258 = C212 * C129;
    const double C257 = C83 * C224;
    const double C256 = -2 * C225;
    const double C255 = C70 * C223;
    const double C254 = C222 * C137;
    const double C253 = 2 * C220;
    const double C252 = C212 * C127;
    const double C251 = C83 * C219;
    const double C250 = -2 * C220;
    const double C249 = C71 * C218;
    const double C248 = 2 * C216;
    const double C247 = 2 * C214;
    const double C246 = C125 + C211;
    const double C245 = -2 * C210;
    const double C244 = -2 * C209;
    const double C243 = C208 * ae;
    const double C242 = C206 / C95;
    const double C241 = C205 * ae;
    const double C240 = C205 * C93;
    const double C304 = C276 * C73;
    const double C303 = C126 * C274;
    const double C302 = 2 * C273;
    const double C301 = C126 * C271;
    const double C300 = C122 * C270;
    const double C299 = C126 * C269;
    const double C298 = C268 * C73;
    const double C297 = 2 * C264;
    const double C296 = C126 * C262;
    const double C295 = C122 * C261;
    const double C294 = 2 * C260;
    const double C293 = C258 / C74;
    const double C292 = C126 * C257;
    const double C291 = C122 * C256;
    const double C290 = C185 - C255;
    const double C289 = 2 * C254;
    const double C288 = C252 / C74;
    const double C287 = C126 * C251;
    const double C286 = C122 * C250;
    const double C285 = C179 - C249;
    const double C284 = C122 * C248;
    const double C283 = C122 * C247;
    const double C282 = C246 * C73;
    const double C281 = C122 * C245;
    const double C280 = C122 * C244;
    const double C279 = C243 / C74;
    const double C278 = C241 / C74;
    const double C277 = C72 * C240;
    const double C316 = C272 - C302;
    const double C315 = C263 - C297;
    const double C314 = C259 - C294;
    const double C313 = C70 * C291;
    const double C312 = C253 - C289;
    const double C311 = C71 * C286;
    const double C310 = C176 - C284;
    const double C309 = C173 - C283;
    const double C308 = C168 - C281;
    const double C307 = C166 - C280;
    const double C306 = C278 - C118;
    const double C305 = C277 / C74;
    const double C326 = C67 * C307;
    const double C325 = C70 * C314;
    const double C324 = C313 + C226;
    const double C323 = C71 * C312;
    const double C322 = C311 + C221;
    const double C321 = C122 * C310;
    const double C320 = C122 * C309;
    const double C319 = C306 / C95;
    const double C318 = C72 * C306;
    const double C317 = C132 - C305;
    const double C333 = C293 + C325;
    const double C332 = C288 + C323;
    const double C331 = C321 - C245;
    const double C330 = C320 - C244;
    const double C329 = C319 + C279;
    const double C328 = C318 + C63;
    const double C327 = C317 * ae;
    const double C337 = C329 * C138;
    const double C336 = C331 + C217;
    const double C335 = C330 + C215;
    const double C334 = C328 * ae;
    const double C339 = C69 * C335;
    const double C338 = C334 / C74;
    const double C340 = C242 + C338;
    const double C341 = C340 + C134;
    const double C342 = C341 * C76;
    const double C343 = C265 + C342;
    const double C344 = C337 - C343;
    const double C345 = C344 + C326;
    const double C346 = C345 - C266;
    const double C347 = C346 + C339;
    const double C406 = C236 * C154;
    const double C405 = C128 * C270;
    const double C404 = C86 * C267;
    const double C403 = -4 * C112;
    const double C402 = 2 * C230;
    const double C401 = C128 * C261;
    const double C400 = C59 * C207;
    const double C399 = C76 * C116;
    const double C398 = C227 * C154;
    const double C397 = C128 * C256;
    const double C396 = C128 * C125;
    const double C395 = 2 * C222;
    const double C394 = C128 * C250;
    const double C393 = C369 * C218;
    const double C392 = 0 * ae;
    const double C391 = C112 / C94;
    const double C390 = 0 * ae;
    const double C389 = C231 * ae;
    const double C388 = 0 * be;
    const double C387 = 0 * be;
    const double C386 = C216 * C154;
    const double C385 = 2 * C210;
    const double C384 = C214 * C154;
    const double C383 = 2 * C209;
    const double C382 = C125 * C154;
    const double C381 = C128 * C245;
    const double C380 = C128 * C109;
    const double C379 = C128 * C244;
    const double C430 = 2 * C406;
    const double C429 = C404 / C74;
    const double C428 = C403 / C74;
    const double C427 = C396 * ae;
    const double C426 = C128 * C402;
    const double C425 = C168 - C401;
    const double C424 = C380 * C116;
    const double C423 = C59 * C379;
    const double C422 = C399 / C74;
    const double C421 = 2 * C398;
    const double C420 = C380 * C129;
    const double C419 = C70 * C397;
    const double C418 = C396 * be;
    const double C417 = C128 * C395;
    const double C416 = C166 - C394;
    const double C415 = C392 / C74;
    const double C414 = C390 / C74;
    const double C413 = C387 / C105;
    const double C412 = C389 / C74;
    const double C411 = C388 / C105;
    const double C410 = C86 * C387;
    const double C409 = 2 * C386;
    const double C408 = 2 * C384;
    const double C407 = C382 - C109;
    const double C448 = C272 - C430;
    const double C447 = C428 - C429;
    const double C446 = C427 / C74;
    const double C445 = C176 - C426;
    const double C444 = C407 * C116;
    const double C443 = C424 / C74;
    const double C442 = C422 - C400;
    const double C441 = C259 - C421;
    const double C440 = C407 * C129;
    const double C439 = C420 / C74;
    const double C438 = C418 / C74;
    const double C437 = C173 - C417;
    const double C436 = C370 * C416;
    const double C435 = C414 - C391;
    const double C434 = C412 - C413;
    const double C433 = C410 / C74;
    const double C432 = C385 - C409;
    const double C431 = C383 - C408;
    const double C462 = C447 * ae;
    const double C461 = C128 * C445;
    const double C460 = C59 * C431;
    const double C459 = C444 / C74;
    const double C458 = C423 + C443;
    const double C457 = C70 * C441;
    const double C456 = C440 / C74;
    const double C455 = C419 + C439;
    const double C454 = C128 * C437;
    const double C453 = C435 / C95;
    const double C452 = C86 * C435;
    const double C451 = C434 / C95;
    const double C450 = C86 * C434;
    const double C449 = 0 - C433;
    const double C470 = C461 - C261;
    const double C469 = C459 + C460;
    const double C468 = C456 + C457;
    const double C467 = C454 - C250;
    const double C466 = C453 + C415;
    const double C465 = C452 + C377;
    const double C464 = C450 + C375;
    const double C463 = C449 * ae;
    const double C476 = C470 + C446;
    const double C475 = C467 + C438;
    const double C474 = C466 * C407;
    const double C473 = C465 * ae;
    const double C472 = C464 * ae;
    const double C471 = C463 / C74;
    const double C480 = C371 * C475;
    const double C479 = C473 / C74;
    const double C478 = C472 / C74;
    const double C477 = C471 - C411;
    const double C482 = C451 + C479;
    const double C481 = C477 / C95;
    const double C484 = C482 * C380;
    const double C483 = C481 + C478;
    const double C485 = C483 + C435;
    const double C486 = C485 * C76;
    const double C487 = C393 + C486;
    const double C488 = C484 - C487;
    const double C489 = C488 + C436;
    const double C490 = C489 - C474;
    const double C491 = C490 + C480;
    const double C546 = C89 * C275;
    const double C545 = -4 * C114;
    const double C544 = 2 * C236;
    const double C543 = C130 * C270;
    const double C542 = C230 * C160;
    const double C541 = C130 * C261;
    const double C540 = C130 * C125;
    const double C539 = 2 * C227;
    const double C538 = C130 * C256;
    const double C537 = C513 * C223;
    const double C536 = 0 * ae;
    const double C535 = C114 / C94;
    const double C534 = 0 * ae;
    const double C533 = C238 * ae;
    const double C532 = 0 * be;
    const double C531 = 0 * be;
    const double C530 = C222 * C160;
    const double C529 = C130 * C250;
    const double C528 = C216 * C160;
    const double C527 = C214 * C160;
    const double C526 = C125 * C160;
    const double C525 = C130 * C245;
    const double C524 = C130 * C109;
    const double C523 = C130 * C244;
    const double C569 = C546 / C74;
    const double C568 = C545 / C74;
    const double C567 = C540 * ae;
    const double C566 = C130 * C544;
    const double C565 = C168 - C543;
    const double C564 = 2 * C542;
    const double C563 = C524 * C116;
    const double C562 = C59 * C523;
    const double C561 = C540 * be;
    const double C560 = C130 * C539;
    const double C559 = C166 - C538;
    const double C558 = C536 / C74;
    const double C557 = C534 / C74;
    const double C556 = C531 / C105;
    const double C555 = C533 / C74;
    const double C554 = C532 / C105;
    const double C553 = C89 * C531;
    const double C552 = 2 * C530;
    const double C551 = C524 * C127;
    const double C550 = C71 * C529;
    const double C549 = 2 * C528;
    const double C548 = 2 * C527;
    const double C547 = C526 - C109;
    const double C586 = C568 - C569;
    const double C585 = C567 / C74;
    const double C584 = C176 - C566;
    const double C583 = C547 * C116;
    const double C582 = C263 - C564;
    const double C581 = C563 / C74;
    const double C580 = C561 / C74;
    const double C579 = C173 - C560;
    const double C578 = C514 * C559;
    const double C577 = C557 - C535;
    const double C576 = C555 - C556;
    const double C575 = C553 / C74;
    const double C574 = C253 - C552;
    const double C573 = C547 * C127;
    const double C572 = C551 / C74;
    const double C571 = C385 - C549;
    const double C570 = C383 - C548;
    const double C600 = C586 * ae;
    const double C599 = C130 * C584;
    const double C598 = C59 * C570;
    const double C597 = C583 / C74;
    const double C596 = C562 + C581;
    const double C595 = C130 * C579;
    const double C594 = C577 / C95;
    const double C593 = C89 * C577;
    const double C592 = C576 / C95;
    const double C591 = C89 * C576;
    const double C590 = 0 - C575;
    const double C589 = C71 * C574;
    const double C588 = C573 / C74;
    const double C587 = C550 + C572;
    const double C608 = C599 - C270;
    const double C607 = C597 + C598;
    const double C606 = C595 - C256;
    const double C605 = C594 + C558;
    const double C604 = C593 + C521;
    const double C603 = C591 + C519;
    const double C602 = C590 * ae;
    const double C601 = C588 + C589;
    const double C614 = C608 + C585;
    const double C613 = C606 + C580;
    const double C612 = C605 * C547;
    const double C611 = C604 * ae;
    const double C610 = C603 * ae;
    const double C609 = C602 / C74;
    const double C618 = C515 * C613;
    const double C617 = C611 / C74;
    const double C616 = C610 / C74;
    const double C615 = C609 - C554;
    const double C620 = C592 + C617;
    const double C619 = C615 / C95;
    const double C622 = C620 * C524;
    const double C621 = C619 + C616;
    const double C623 = C621 + C577;
    const double C624 = C623 * C76;
    const double C625 = C537 + C624;
    const double C626 = C622 - C625;
    const double C627 = C626 + C578;
    const double C628 = C627 - C612;
    const double C629 = C628 + C618;
    const double C676 = C122 * C544;
    const double C675 = C235 * be;
    const double C674 = 2 * C198;
    const double C673 = C122 * C402;
    const double C672 = C63 * C379;
    const double C671 = C229 * be;
    const double C670 = 2 * C191;
    const double C669 = C66 * C307;
    const double C668 = C63 * C207;
    const double C667 = C122 * C539;
    const double C666 = C225 * ae;
    const double C665 = C220 * ae;
    const double C664 = C122 * C395;
    const double C663 = C375 * C286;
    const double C662 = C377 * C416;
    const double C661 = C391 - C414;
    const double C660 = C375 * C218;
    const double C659 = C413 - C412;
    const double C658 = C128 * C310;
    const double C657 = C128 * C309;
    const double C656 = C128 * C142;
    const double C655 = C209 * ae;
    const double C654 = C210 * be;
    const double C653 = C121 - C97;
    const double C652 = 2 * C164;
    const double C651 = C118 - C278;
    const double C696 = C128 * C676;
    const double C695 = -2 * C675;
    const double C694 = C128 * C673;
    const double C693 = C66 * C657;
    const double C692 = C651 * C380;
    const double C691 = C653 * C656;
    const double C690 = -2 * C671;
    const double C689 = C653 * C138;
    const double C688 = C651 * C76;
    const double C687 = C128 * C667;
    const double C686 = C656 * C129;
    const double C685 = -2 * C666;
    const double C684 = -2 * C665;
    const double C683 = C128 * C664;
    const double C682 = C659 * C138;
    const double C681 = C661 * C656;
    const double C680 = C661 * C380;
    const double C679 = C659 * C76;
    const double C678 = -2 * C655;
    const double C677 = -2 * C654;
    const double C708 = C695 / C74;
    const double C707 = C217 - C694;
    const double C706 = C672 + C692;
    const double C705 = C688 - C668;
    const double C704 = C70 * C687;
    const double C703 = C686 / C74;
    const double C702 = C685 / C74;
    const double C701 = C684 / C74;
    const double C700 = C215 - C683;
    const double C699 = C663 + C682;
    const double C698 = C679 - C660;
    const double C697 = C678 / C74;
    const double C714 = C691 - C706;
    const double C713 = C705 - C689;
    const double C712 = C703 - C704;
    const double C711 = C377 * C700;
    const double C710 = C681 - C699;
    const double C709 = C698 - C680;
    const double C718 = C714 + C693;
    const double C717 = C713 + C669;
    const double C716 = C710 + C711;
    const double C715 = C709 + C662;
    const double C754 = C130 * C676;
    const double C753 = C651 * C524;
    const double C752 = C63 * C523;
    const double C751 = C130 * C673;
    const double C750 = C690 / C74;
    const double C749 = C130 * C667;
    const double C748 = C519 * C291;
    const double C747 = C521 * C559;
    const double C746 = C535 - C557;
    const double C745 = C519 * C223;
    const double C744 = C556 - C555;
    const double C743 = C130 * C664;
    const double C742 = C130 * C310;
    const double C741 = C130 * C309;
    const double C740 = C130 * C142;
    const double C765 = C217 - C754;
    const double C764 = C66 * C741;
    const double C763 = C752 + C753;
    const double C762 = C653 * C740;
    const double C761 = C215 - C749;
    const double C760 = C744 * C138;
    const double C759 = C746 * C740;
    const double C758 = C746 * C524;
    const double C757 = C744 * C76;
    const double C756 = C71 * C743;
    const double C755 = C740 * C127;
    const double C770 = C762 - C763;
    const double C769 = C521 * C761;
    const double C768 = C748 + C760;
    const double C767 = C757 - C745;
    const double C766 = C755 / C74;
    const double C774 = C770 + C764;
    const double C773 = C759 - C768;
    const double C772 = C767 - C758;
    const double C771 = C766 - C756;
    const double C776 = C773 + C769;
    const double C775 = C772 + C747;
    const double C809 = C128 * C544;
    const double C808 = C130 * C445;
    const double C807 = C128 * C539;
    const double C806 = C744 * C380;
    const double C805 = C519 * C397;
    const double C804 = C130 * C437;
    const double C803 = C659 * C524;
    const double C802 = C375 * C529;
    const double C801 = C677 / C74;
    const double C800 = C128 * C248;
    const double C799 = C128 * C247;
    const double C798 = C130 * C396;
    const double C819 = C130 * C809;
    const double C818 = C798 * C116;
    const double C817 = C130 * C807;
    const double C816 = C805 + C806;
    const double C815 = C746 * C798;
    const double C814 = C377 * C804;
    const double C813 = C802 + C803;
    const double C812 = C661 * C798;
    const double C811 = C130 * C800;
    const double C810 = C130 * C799;
    const double C825 = C446 - C819;
    const double C824 = C59 * C810;
    const double C823 = C818 / C74;
    const double C822 = C438 - C817;
    const double C821 = C815 - C816;
    const double C820 = C812 - C813;
    const double C828 = C823 - C824;
    const double C827 = C521 * C822;
    const double C826 = C820 + C814;
    const double C829 = C821 + C827;
    const double C1052 = C746 * C565;
    const double C1051 = C577 * C559;
    const double C1050 = C524 * C275;
    const double C1049 = C76 * C600;
    const double C1048 = C576 * C223;
    const double C1047 = C744 * C674;
    const double C1046 = C746 * C541;
    const double C1045 = C744 * C670;
    const double C1044 = C746 * C525;
    const double C1043 = C744 * C652;
    const double C1042 = C661 * C405;
    const double C1041 = C659 * C674;
    const double C1040 = C653 * C300;
    const double C1039 = C651 * C674;
    const double C1038 = C661 * C425;
    const double C1037 = C435 * C416;
    const double C1036 = C380 * C267;
    const double C1035 = C76 * C462;
    const double C1034 = C434 * C218;
    const double C1033 = C659 * C670;
    const double C1032 = C653 * C295;
    const double C1031 = C651 * C670;
    const double C1030 = C661 * C381;
    const double C1029 = C659 * C652;
    const double C1028 = C653 * C308;
    const double C1027 = C134 * C307;
    const double C1026 = C138 * C240;
    const double C1025 = C76 * C327;
    const double C1024 = C306 * C207;
    const double C1023 = C651 * C652;
    const double C1022 = C579 * ae;
    const double C1021 = C130 * C304;
    const double C1020 = -C695;
    const double C1019 = C130 * C395;
    const double C1018 = C130 * C303;
    const double C1017 = C565 * C127;
    const double C1016 = C130 * C247;
    const double C1015 = C130 * C301;
    const double C1014 = C565 * C116;
    const double C1013 = C130 * C402;
    const double C1012 = C130 * C299;
    const double C1011 = C130 * C298;
    const double C1010 = C541 * C127;
    const double C1009 = C524 * C267;
    const double C1008 = C529 * C127;
    const double C1007 = C541 * C116;
    const double C1006 = C130 * C296;
    const double C1005 = C130 * C248;
    const double C1004 = C130 * C292;
    const double C1003 = C525 * C127;
    const double C1002 = C130 * C287;
    const double C1001 = C130 * C282;
    const double C1000 = C525 * C116;
    const double C999 = C524 * C240;
    const double C998 = C523 * C116;
    const double C997 = C128 * C304;
    const double C996 = C405 * C129;
    const double C995 = C380 * C275;
    const double C994 = C397 * C129;
    const double C993 = C809 * be;
    const double C992 = C303 / C94;
    const double C991 = C128 * C303;
    const double C990 = C405 * C116;
    const double C989 = C128 * C301;
    const double C988 = C198 * C116;
    const double C987 = C807 * ae;
    const double C986 = C299 / C94;
    const double C985 = C128 * C299;
    const double C984 = C425 * C129;
    const double C983 = C437 * ae;
    const double C982 = C128 * C298;
    const double C981 = -C690;
    const double C980 = C799 * ae;
    const double C979 = C128 * C296;
    const double C978 = C425 * C116;
    const double C977 = C191 * C116;
    const double C976 = C381 * C129;
    const double C975 = C128 * C292;
    const double C974 = C800 * be;
    const double C973 = C128 * C287;
    const double C972 = C128 * C282;
    const double C971 = C381 * C116;
    const double C970 = C380 * C240;
    const double C969 = C379 * C116;
    const double C968 = C164 * C116;
    const double C967 = C163 * C116;
    const double C966 = C76 * C240;
    const double C965 = C160 * C85;
    const double C964 = C122 * C304;
    const double C963 = C300 * C129;
    const double C962 = C138 * C275;
    const double C961 = C291 * C129;
    const double C960 = C160 * C82;
    const double C959 = C198 * C129;
    const double C958 = C186 * C129;
    const double C957 = C76 * C275;
    const double C956 = C85 * C237;
    const double C955 = C300 * C127;
    const double C954 = C122 * C303;
    const double C953 = C198 * C127;
    const double C952 = C82 * C237;
    const double C951 = C236 * be;
    const double C950 = C85 * C234;
    const double C949 = C676 * be;
    const double C948 = C301 / C94;
    const double C947 = C122 * C301;
    const double C946 = C82 * C234;
    const double C945 = C85 * C233;
    const double C944 = C295 * C129;
    const double C943 = C122 * C299;
    const double C942 = C191 * C129;
    const double C941 = C82 * C233;
    const double C940 = C154 * C85;
    const double C939 = C122 * C298;
    const double C938 = C295 * C127;
    const double C937 = C138 * C267;
    const double C936 = C286 * C127;
    const double C935 = C154 * C82;
    const double C934 = C191 * C127;
    const double C933 = C180 * C127;
    const double C932 = C76 * C267;
    const double C931 = C230 * be;
    const double C930 = C85 * C228;
    const double C929 = C673 * be;
    const double C928 = C296 / C94;
    const double C927 = C122 * C296;
    const double C926 = C82 * C228;
    const double C925 = C227 * ae;
    const double C924 = C85 * C224;
    const double C923 = C667 * ae;
    const double C922 = C292 / C94;
    const double C921 = C122 * C292;
    const double C920 = C308 * C129;
    const double C919 = C164 * C129;
    const double C918 = C82 * C224;
    const double C917 = C222 * ae;
    const double C916 = C85 * C219;
    const double C915 = C664 * ae;
    const double C914 = C287 / C94;
    const double C913 = C122 * C287;
    const double C912 = C308 * C127;
    const double C911 = C164 * C127;
    const double C910 = C82 * C219;
    const double C909 = C137 * C85;
    const double C908 = C214 * ae;
    const double C907 = C216 * be;
    const double C906 = C310 * be;
    const double C905 = C309 * ae;
    const double C904 = 4 * C94;
    const double C903 = C122 * C282;
    const double C902 = -C677;
    const double C901 = C137 * C82;
    const double C900 = C94 * C95;
    const double C1170 = C1050 / C105;
    const double C1169 = C1049 / C74;
    const double C1168 = C1036 / C105;
    const double C1167 = C1035 / C74;
    const double C1166 = C1026 / C105;
    const double C1165 = C1025 / C74;
    const double C1164 = C1022 / C74;
    const double C1163 = C1021 / C94;
    const double C1162 = C1020 / C74;
    const double C1161 = C1019 * ae;
    const double C1160 = C1018 / C94;
    const double C1159 = C1017 / C74;
    const double C1158 = C1016 * ae;
    const double C1157 = C1015 / C94;
    const double C1156 = C1014 / C74;
    const double C1155 = C1013 * be;
    const double C1154 = C1012 / C94;
    const double C1153 = C71 * C1011;
    const double C1152 = C1010 / C74;
    const double C1151 = C1009 / C74;
    const double C1150 = C1008 / C74;
    const double C1149 = C1007 / C74;
    const double C1148 = C59 * C1006;
    const double C1147 = C1005 * be;
    const double C1146 = C1004 / C94;
    const double C1145 = C1003 / C74;
    const double C1144 = C71 * C1002;
    const double C1143 = C59 * C1001;
    const double C1142 = C1000 / C74;
    const double C1141 = C999 / C74;
    const double C1140 = C998 / C74;
    const double C1139 = C70 * C997;
    const double C1138 = C996 / C74;
    const double C1137 = C995 / C74;
    const double C1136 = C994 / C74;
    const double C1135 = C991 / C94;
    const double C1134 = C990 / C74;
    const double C1133 = C59 * C989;
    const double C1132 = 2 * C988;
    const double C1131 = C987 / C74;
    const double C1130 = C985 / C94;
    const double C1129 = C984 / C74;
    const double C1128 = C983 / C74;
    const double C1127 = C982 / C94;
    const double C1126 = C981 / C74;
    const double C1125 = C980 / C74;
    const double C1124 = C979 / C94;
    const double C1123 = C978 / C74;
    const double C1122 = 2 * C977;
    const double C1121 = C976 / C74;
    const double C1120 = C70 * C975;
    const double C1119 = C974 / C74;
    const double C1118 = C973 / C94;
    const double C1117 = C59 * C972;
    const double C1116 = C971 / C74;
    const double C1115 = C970 / C74;
    const double C1114 = C969 / C74;
    const double C1113 = 2 * C968;
    const double C1112 = 2 * C967;
    const double C1111 = C965 * C111;
    const double C1110 = C70 * C964;
    const double C1109 = C963 / C74;
    const double C1108 = C962 / C74;
    const double C1107 = C961 / C74;
    const double C1106 = C960 * C108;
    const double C1105 = 2 * C959;
    const double C1104 = 2 * C958;
    const double C1103 = C111 * C956;
    const double C1102 = C955 / C74;
    const double C1101 = C71 * C954;
    const double C1100 = 2 * C953;
    const double C1099 = C108 * C952;
    const double C1098 = 2 * C951;
    const double C1097 = C111 * C950;
    const double C1096 = C949 / C74;
    const double C1095 = C947 / C94;
    const double C1094 = C108 * C946;
    const double C1093 = C111 * C945;
    const double C1092 = C944 / C74;
    const double C1091 = C70 * C943;
    const double C1090 = 2 * C942;
    const double C1089 = C108 * C941;
    const double C1088 = C940 * C111;
    const double C1087 = C71 * C939;
    const double C1086 = C938 / C74;
    const double C1085 = C937 / C74;
    const double C1084 = C936 / C74;
    const double C1083 = C935 * C108;
    const double C1082 = 2 * C934;
    const double C1081 = 2 * C933;
    const double C1080 = 2 * C931;
    const double C1079 = C111 * C930;
    const double C1078 = C929 / C74;
    const double C1077 = C927 / C94;
    const double C1076 = C108 * C926;
    const double C1075 = 2 * C925;
    const double C1074 = C111 * C924;
    const double C1073 = C923 / C74;
    const double C1072 = C921 / C94;
    const double C1071 = C920 / C74;
    const double C1070 = 2 * C919;
    const double C1069 = C108 * C918;
    const double C1068 = 2 * C917;
    const double C1067 = C111 * C916;
    const double C1066 = C915 / C74;
    const double C1065 = C913 / C94;
    const double C1064 = C912 / C74;
    const double C1063 = 2 * C911;
    const double C1062 = C108 * C910;
    const double C1061 = C909 * C111;
    const double C1060 = 2 * C908;
    const double C1059 = 2 * C907;
    const double C1058 = C906 / C74;
    const double C1057 = C905 / C74;
    const double C1056 = C74 * C904;
    const double C1055 = C903 / C94;
    const double C1054 = C902 / C74;
    const double C1053 = C901 * C108;
    const double C1253 = C1048 + C1169;
    const double C1252 = C519 * C1089;
    const double C1251 = C519 * C1069;
    const double C1250 = C122 * C1103;
    const double C1249 = C375 * C1099;
    const double C1248 = C63 * C1094;
    const double C1247 = C122 * C1093;
    const double C1246 = C1034 + C1167;
    const double C1245 = C63 * C1076;
    const double C1244 = C375 * C1062;
    const double C1243 = C1024 + C1165;
    const double C1242 = C1162 - C702;
    const double C1241 = C1161 / C74;
    const double C1240 = C1160 - C701;
    const double C1239 = C1158 / C74;
    const double C1238 = C1157 - C697;
    const double C1237 = C130 * C1093;
    const double C1236 = C1154 - C750;
    const double C1235 = C1153 / C94;
    const double C1234 = C1150 - C1151;
    const double C1233 = C1148 / C94;
    const double C1232 = C1146 - C801;
    const double C1231 = C1144 / C94;
    const double C1230 = C1143 / C94;
    const double C1229 = C1140 - C1141;
    const double C1228 = C1139 / C94;
    const double C1227 = C1136 - C1137;
    const double C1226 = C128 * C1103;
    const double C1225 = C1135 - C708;
    const double C1224 = C1133 / C94;
    const double C1223 = C1132 / C74;
    const double C1222 = C59 * C1094;
    const double C1221 = C1130 - C702;
    const double C1220 = C1126 - C701;
    const double C1219 = C1124 - C697;
    const double C1218 = C1122 / C74;
    const double C1217 = C59 * C1076;
    const double C1216 = C1120 / C94;
    const double C1215 = C1059 / C74;
    const double C1214 = C128 * C1067;
    const double C1213 = C1118 - C801;
    const double C1212 = C1117 / C94;
    const double C1211 = C1114 - C1115;
    const double C1210 = C1113 / C74;
    const double C1209 = C966 + C1112;
    const double C1208 = C144 + C1111;
    const double C1207 = C1110 / C94;
    const double C1206 = C1107 - C1108;
    const double C1205 = C1106 - C109;
    const double C1204 = C1105 / C74;
    const double C1203 = C957 + C1104;
    const double C1202 = C1101 / C94;
    const double C1201 = C1100 / C74;
    const double C1200 = C71 * C1099;
    const double C1199 = C1098 / C74;
    const double C1198 = C122 * C1097;
    const double C1197 = C1095 - C708;
    const double C1196 = C1091 / C94;
    const double C1195 = C1090 / C74;
    const double C1194 = C70 * C1089;
    const double C1193 = C144 + C1088;
    const double C1192 = C1087 / C94;
    const double C1191 = C1084 - C1085;
    const double C1190 = C1083 - C109;
    const double C1189 = C1082 / C74;
    const double C1188 = C932 + C1081;
    const double C1187 = C1080 / C74;
    const double C1186 = C122 * C1079;
    const double C1185 = C1077 - C750;
    const double C1184 = C1075 / C74;
    const double C1183 = C122 * C1074;
    const double C1182 = C1072 - C702;
    const double C1181 = C1070 / C74;
    const double C1180 = C70 * C1069;
    const double C1179 = C1068 / C74;
    const double C1178 = C122 * C1067;
    const double C1177 = C1065 - C701;
    const double C1176 = C1063 / C74;
    const double C1175 = C71 * C1062;
    const double C1174 = C144 + C1061;
    const double C1173 = C1060 / C74;
    const double C1172 = C1054 - C697;
    const double C1171 = C1053 - C109;
    const double C1311 = C1047 + C1253;
    const double C1310 = C521 * C1236;
    const double C1309 = C1252 / C94;
    const double C1308 = C521 * C1232;
    const double C1307 = C1251 / C94;
    const double C1306 = C377 * C1225;
    const double C1305 = C1249 / C94;
    const double C1304 = C66 * C1197;
    const double C1303 = C1248 / C94;
    const double C1302 = C1033 + C1246;
    const double C1301 = C66 * C1185;
    const double C1300 = C1245 / C94;
    const double C1299 = C377 * C1213;
    const double C1298 = C1244 / C94;
    const double C1297 = C1023 + C1243;
    const double C1296 = C1242 + C1163;
    const double C1295 = C71 * C1240;
    const double C1294 = C59 * C1238;
    const double C1293 = C1237 / C94;
    const double C1292 = C1234 - C1152;
    const double C1291 = C1233 - C1149;
    const double C1290 = C1231 - C1145;
    const double C1289 = C1229 - C1142;
    const double C1288 = C1227 - C1138;
    const double C1287 = C1226 / C94;
    const double C1286 = C1224 - C1134;
    const double C1285 = C1222 / C94;
    const double C1284 = C70 * C1221;
    const double C1283 = C1220 + C1127;
    const double C1282 = C59 * C1219;
    const double C1281 = C1217 / C94;
    const double C1280 = C1216 - C1121;
    const double C1279 = C1214 / C94;
    const double C1278 = C1211 - C1116;
    const double C1277 = C1209 / C74;
    const double C1276 = C1208 * C73;
    const double C1275 = C1206 - C1109;
    const double C1274 = C1205 * C73;
    const double C1273 = C1203 / C74;
    const double C1272 = C1202 - C1102;
    const double C1271 = C1200 / C94;
    const double C1270 = C1198 / C94;
    const double C1269 = C1196 - C1092;
    const double C1268 = C1194 / C94;
    const double C1267 = C1193 * C73;
    const double C1266 = C1191 - C1086;
    const double C1265 = C1190 * C73;
    const double C1264 = C1188 / C74;
    const double C1263 = C1186 / C94;
    const double C1262 = C1183 / C94;
    const double C1261 = C70 * C1182;
    const double C1260 = C1180 / C94;
    const double C1259 = C1178 / C94;
    const double C1258 = C71 * C1177;
    const double C1257 = C1175 / C94;
    const double C1256 = C1174 * C73;
    const double C1255 = C1172 + C1055;
    const double C1254 = C1171 * C73;
    const double C1357 = C521 * C1296;
    const double C1356 = C519 * C1274;
    const double C1355 = C1309 - C1045;
    const double C1354 = C1307 - C1043;
    const double C1353 = C122 * C1276;
    const double C1352 = C1305 - C1041;
    const double C1351 = C1303 - C1039;
    const double C1350 = C122 * C1267;
    const double C1349 = C377 * C1283;
    const double C1348 = C375 * C1265;
    const double C1347 = C1300 - C1031;
    const double C1346 = C1298 - C1029;
    const double C1345 = C128 * C1256;
    const double C1344 = C66 * C1255;
    const double C1343 = C63 * C1254;
    const double C1342 = C1159 + C1295;
    const double C1341 = C1156 + C1294;
    const double C1340 = C1293 - C1187;
    const double C1339 = C1292 + C1235;
    const double C1338 = C1289 + C1230;
    const double C1337 = C1288 + C1228;
    const double C1336 = C1287 - C1199;
    const double C1335 = C1285 - C1223;
    const double C1334 = C1129 + C1284;
    const double C1333 = C1123 + C1282;
    const double C1332 = C1281 - C1218;
    const double C1331 = C1279 - C1215;
    const double C1330 = C1278 + C1212;
    const double C1329 = C59 * C1254;
    const double C1328 = C1277 - C1210;
    const double C1327 = C1275 + C1207;
    const double C1326 = C70 * C1274;
    const double C1325 = C1273 - C1204;
    const double C1324 = C1271 - C1201;
    const double C1323 = C1270 - C1199;
    const double C1322 = C1268 - C1195;
    const double C1321 = C1266 + C1192;
    const double C1320 = C71 * C1265;
    const double C1319 = C1264 - C1189;
    const double C1318 = C1263 - C1187;
    const double C1317 = C1262 - C1184;
    const double C1316 = C1071 + C1261;
    const double C1315 = C1260 - C1181;
    const double C1314 = C1259 - C1179;
    const double C1313 = C1064 + C1258;
    const double C1312 = C1257 - C1176;
    const double C1369 = C1356 / C94;
    const double C1368 = C1355 - C1046;
    const double C1367 = C1354 - C1044;
    const double C1366 = C1352 - C1042;
    const double C1365 = C1351 - C1040;
    const double C1364 = C1348 / C94;
    const double C1363 = C1347 - C1032;
    const double C1362 = C1346 - C1030;
    const double C1361 = C1343 / C94;
    const double C1360 = C1329 / C94;
    const double C1359 = C1326 / C94;
    const double C1358 = C1320 / C94;
    const double C1381 = C1369 - C1311;
    const double C1380 = C1368 + C1310;
    const double C1379 = C1367 + C1308;
    const double C1378 = C1366 + C1306;
    const double C1377 = C1365 + C1304;
    const double C1376 = C1364 - C1302;
    const double C1375 = C1363 + C1301;
    const double C1374 = C1362 + C1299;
    const double C1373 = C1361 - C1297;
    const double C1372 = C1328 + C1360;
    const double C1371 = C1325 + C1359;
    const double C1370 = C1319 + C1358;
    const double C1384 = C1381 - C1170;
    const double C1383 = C1376 - C1168;
    const double C1382 = C1373 - C1166;
    const double C1387 = C1384 + C1051;
    const double C1386 = C1383 + C1037;
    const double C1385 = C1382 + C1027;
    const double C1390 = C1387 + C1052;
    const double C1389 = C1386 + C1038;
    const double C1388 = C1385 + C1028;
    const double C1393 = C1390 + C1357;
    const double C1392 = C1389 + C1349;
    const double C1391 = C1388 + C1344;
    const double d2nexx000200 =
        (2 * Pi *
         ((C240 / C105 - ((ae * -2 * C75) / C900 +
                          (((C72 * C327) / C74 + 2 * C306) * ae) / C74)) *
              C76 -
          C341 * C207 + C341 * C652 + (C65 * C1254) / C94 +
          (C327 / C105 + ((2 * C134 - C277 / C105) * ae) / C74) * C138 +
          C329 * C307 - C329 * C308 + C67 * C1255 + (C212 * C240) / C1056 +
          C213 * C335 - C213 * C336 +
          C69 * (C282 / C94 + C1057 + C1058 +
                 C122 * ((-C1059) / C74 - C1173 + (C122 * C1256) / C94))) *
         C70 * C71) /
        C74;
    const double d2nexx000020 =
        (2 * Pi *
         (C1372 * C70 * C369 + C1330 * C70 * C370 +
          ((C407 * C240) / C74 - (C431 * C116) / C74 + (C432 * C116) / C74 +
           (C59 * (C282 + C1256 * C154)) / C94) *
              C70 * C371)) /
        C74;
    const double d2nexx000002 =
        (2 * Pi *
         (C1372 * C513 + C1338 * C514 +
          ((C547 * C240) / C74 - (C570 * C116) / C74 + (C571 * C116) / C74 +
           (C59 * (C282 + C1256 * C160)) / C94) *
              C515) *
         C71) /
        C74;
    const double d2nexx000110 =
        (2 * Pi *
         (C1391 * C70 * C375 +
          ((C380 * C327) / C74 - C306 * C379 - C651 * C381 +
           (C63 * C972) / C94 + (C656 * C240) / C105 + C134 * C657 +
           C653 * C658 + C66 * ((-C974) / C74 - C1125 + (C122 * C1345) / C94)) *
              C70 * C377)) /
        C74;
    const double d2nexx000101 =
        (2 * Pi *
         (C1391 * C519 +
          ((C524 * C327) / C74 - C306 * C523 - C651 * C525 +
           (C63 * C1001) / C94 + (C740 * C240) / C105 + C134 * C741 +
           C653 * C742 +
           C66 * ((-C1147) / C74 - C1239 + (C122 * C130 * C1256) / C94)) *
              C521) *
         C71) /
        C74;
    const double d2nexx000011 =
        (2 * Pi *
         ((C1372 * C519 + C1338 * C521) * C375 +
          (C1330 * C519 + ((C798 * C240 + C810 * C116) / C74 -
                           (C811 * C116) / C74 + (C59 * C130 * C1345) / C94) *
                              C521) *
              C377)) /
        C74;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx000110;
    d2nexx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexx000011;
    d2nexx[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nexx000200 - 0.5 * d2nexx000020 + d2nexx000002;
    d2nexx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexx000101;
    d2nexx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexx000200 - std::sqrt(0.75) * d2nexx000020;
    const double d2nexy000200 =
        (2 * Pi *
         (C285 * C341 + C1312 * C65 - C322 * C329 + C1313 * C67 + C332 * C213 +
          ((C336 * C127) / C74 + C71 * (C914 - C1066 + C122 * C1314)) * C69) *
         C70) /
        C74;
    const double d2nexy000020 =
        (2 * Pi *
         ((C485 * C652 + (C369 * C1062) / C94 + C482 * C381 + C370 * C1213 -
           C466 * C432 + C371 * (C914 - C1119 + C128 * C1331)) *
              C59 -
          (C491 * C116) / C74) *
         C70) /
        C74;
    const double d2nexy000002 =
        (2 * Pi *
         ((C1312 * C59 - (C285 * C116) / C74) * C513 +
          ((C587 * C116) / C74 + C1290 * C59) * C514 +
          (((C571 * C127) / C74 + (C71 * (C287 + C1067 * C160)) / C94) * C59 -
           (C601 * C116) / C74) *
              C515)) /
        C74;
    const double d2nexy000110 = (2 * Pi *
                                 (C715 * C306 + C1374 * C63 + C716 * C134 +
                                  (C659 * C308 + C375 * C1177 + C661 * C658 +
                                   C377 * (C1058 + C128 * C1314)) *
                                      C66) *
                                 C70) /
                                C74;
    const double d2nexy000101 =
        (2 * Pi *
         ((C285 * C306 + C1312 * C63 - C322 * C134 + C1313 * C66) * C519 +
          (C1290 * C63 - C587 * C306 + C771 * C134 +
           ((C742 * C127) / C74 + C71 * C130 * C1314) * C66) *
              C521)) /
        C74;
    const double d2nexy000011 = (2 * Pi *
                                 ((C1374 * C59 - (C715 * C116) / C74) * C519 +
                                  (((C375 * C1002) / C94 - C659 * C525 -
                                    C661 * C811 + C377 * C130 * C1331) *
                                       C59 -
                                   (C826 * C116) / C74) *
                                      C521)) /
                                C74;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy000110;
    d2nexy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexy000011;
    d2nexy[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nexy000200 - 0.5 * d2nexy000020 + d2nexy000002;
    d2nexy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexy000101;
    d2nexy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexy000200 - std::sqrt(0.75) * d2nexy000020;
    const double d2nexz000200 =
        (2 * Pi *
         (C290 * C341 + C1315 * C65 - C324 * C329 + C1316 * C67 + C333 * C213 +
          ((C336 * C129) / C74 + C70 * (C922 - C1073 + C122 * C1317)) * C69) *
         C71) /
        C74;
    const double d2nexz000020 =
        (2 * Pi *
         ((C1315 * C59 - (C290 * C116) / C74) * C369 +
          ((C455 * C116) / C74 + C1280 * C59) * C370 +
          (((C432 * C129) / C74 + (C70 * (C292 + C1074 * C154)) / C94) * C59 -
           (C468 * C116) / C74) *
              C371)) /
        C74;
    const double d2nexz000002 =
        (2 * Pi *
         ((C623 * C652 + (C513 * C1069) / C94 + C620 * C525 + C514 * C1232 -
           C605 * C571 +
           C515 *
               (C922 - C1147 / C74 + C130 * ((C130 * C1074) / C94 - C1215))) *
              C59 -
          (C629 * C116) / C74) *
         C71) /
        C74;
    const double d2nexz000110 =
        (2 * Pi *
         ((C290 * C306 + C1315 * C63 - C324 * C134 + C1316 * C66) * C375 +
          (C1280 * C63 - C455 * C306 + C712 * C134 +
           ((C658 * C129) / C74 + C70 * C128 * C1317) * C66) *
              C377)) /
        C74;
    const double d2nexz000101 = (2 * Pi *
                                 (C775 * C306 + C1379 * C63 + C776 * C134 +
                                  (C744 * C308 + C519 * C1182 + C746 * C742 +
                                   C521 * (C1058 + C130 * C1317)) *
                                      C66) *
                                 C71) /
                                C74;
    const double d2nexz000011 =
        (2 * Pi *
         ((C1379 * C59 - (C775 * C116) / C74) * C375 +
          (((C519 * C975) / C94 - C744 * C381 - C746 * C811 +
            C521 * ((C130 * C128 * C1074) / C94 - C1119)) *
               C59 -
           (C829 * C116) / C74) *
              C377)) /
        C74;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz000110;
    d2nexz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexz000011;
    d2nexz[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nexz000200 - 0.5 * d2nexz000020 + d2nexz000002;
    d2nexz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexz000101;
    d2nexz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexz000200 - std::sqrt(0.75) * d2nexz000020;
    const double d2neyx000200 =
        (2 * Pi *
         ((C341 * C670 + (C65 * C1076) / C94 + C329 * C295 + C67 * C1185 -
           C213 * C315 + C69 * (C928 - C1078 + C122 * C1318)) *
              C71 -
          (C347 * C127) / C74) *
         C70) /
        C74;
    const double d2neyx000020 =
        (2 * Pi *
         (C442 * C485 + C1332 * C369 - C458 * C482 + C1333 * C370 +
          C469 * C466 +
          ((C476 * C116) / C74 +
           C59 * (C928 - C1125 + C128 * ((C128 * C1079) / C94 - C1173))) *
              C371) *
         C70) /
        C74;
    const double d2neyx000002 =
        (2 * Pi *
         ((C1332 * C71 - (C442 * C127) / C74) * C513 +
          ((C596 * C127) / C74 + C1291 * C71) * C514 +
          (((C582 * C116) / C74 + (C59 * (C296 + C1079 * C160)) / C94) * C71 -
           (C607 * C127) / C74) *
              C515)) /
        C74;
    const double d2neyx000110 = (2 * Pi *
                                 (C717 * C434 + C1375 * C375 + C718 * C435 +
                                  (C651 * C425 + C63 * C1219 + C653 * C707 +
                                   C66 * (C1057 + C128 * C1318)) *
                                      C377) *
                                 C70) /
                                C74;
    const double d2neyx000101 = (2 * Pi *
                                 ((C1375 * C71 - (C717 * C127) / C74) * C519 +
                                  (((C63 * C1006) / C94 - C651 * C541 -
                                    C653 * C751 + C66 * C130 * C1318) *
                                       C71 -
                                   (C774 * C127) / C74) *
                                      C521)) /
                                C74;
    const double d2neyx000011 =
        (2 * Pi *
         ((C442 * C434 + C1332 * C375 - C458 * C435 + C1333 * C377) * C519 +
          (C1291 * C375 - C596 * C434 + C828 * C435 +
           ((C808 * C116) / C74 + C59 * ((C128 * C130 * C1079) / C94 - C1239)) *
               C377) *
              C521)) /
        C74;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx000110;
    d2neyx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyx000011;
    d2neyx[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2neyx000200 - 0.5 * d2neyx000020 + d2neyx000002;
    d2neyx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyx000101;
    d2neyx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyx000200 - std::sqrt(0.75) * d2neyx000020;
    const double d2neyy000200 =
        (2 * Pi *
         (C1370 * C65 + C1321 * C67 +
          ((C212 * C267) / C74 - (C312 * C127) / C74 + (C315 * C127) / C74 +
           (C71 * (C298 + C1267 * C137)) / C94) *
              C69) *
         C70) /
        C74;
    const double d2neyy000020 =
        (2 * Pi *
         ((C267 / C105 - ((ae * -2 * C387) / C900 +
                          (((C86 * C462) / C74 + 2 * C434) * ae) / C74)) *
              C76 -
          C485 * C218 + C485 * C670 + (C369 * C1265) / C94 +
          (C462 / C105 + ((2 * C435 - C404 / C105) * ae) / C74) * C380 +
          C482 * C416 - C482 * C425 + C370 * C1283 + (C407 * C267) / C1056 +
          C466 * C475 - C466 * C476 +
          C371 * (C298 / C94 + C1128 + (C445 * be) / C74 +
                  C128 * ((-C1080) / C74 - C1179 + (C128 * C1267) / C94))) *
         C59 * C70) /
        C74;
    const double d2neyy000002 =
        (2 * Pi *
         (C1370 * C59 * C513 + C1339 * C59 * C514 +
          ((C547 * C267) / C74 - (C574 * C127) / C74 + (C582 * C127) / C74 +
           (C71 * (C298 + C1267 * C160)) / C94) *
              C59 * C515)) /
        C74;
    const double d2neyy000110 =
        (2 * Pi *
         (C1392 * C63 +
          ((C138 * C462) / C74 - C434 * C286 - C659 * C295 +
           (C375 * C939) / C94 + (C656 * C267) / C105 + C435 * C700 +
           C661 * C707 +
           C377 * ((-C929) / C74 - C1066 + (C128 * C1350) / C94)) *
              C66) *
         C70) /
        C74;
    const double d2neyy000101 =
        (2 * Pi *
         ((C1370 * C63 + C1321 * C66) * C519 +
          (C1339 * C63 + ((C740 * C267 + C743 * C127) / C74 -
                          (C751 * C127) / C74 + (C71 * C130 * C1350) / C94) *
                             C66) *
              C521)) /
        C74;
    const double d2neyy000011 =
        (2 * Pi *
         (C1392 * C59 * C519 +
          ((C524 * C462) / C74 - C434 * C529 - C659 * C541 +
           (C375 * C1011) / C94 + (C798 * C267) / C105 + C435 * C804 +
           C661 * C808 +
           C377 * ((-C1155) / C74 - C1241 + (C128 * C130 * C1267) / C94)) *
              C59 * C521)) /
        C74;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy000110;
    d2neyy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyy000011;
    d2neyy[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2neyy000200 - 0.5 * d2neyy000020 + d2neyy000002;
    d2neyy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyy000101;
    d2neyy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyy000200 - std::sqrt(0.75) * d2neyy000020;
    const double d2neyz000200 =
        (2 * Pi *
         ((C1322 * C71 - (C290 * C127) / C74) * C65 +
          ((C324 * C127) / C74 + C1269 * C71) * C67 +
          (((C315 * C129) / C74 + (C70 * (C299 + C1093 * C137)) / C94) * C71 -
           (C333 * C127) / C74) *
              C69)) /
        C74;
    const double d2neyz000020 =
        (2 * Pi *
         (C290 * C485 + C1322 * C369 - C455 * C482 + C1334 * C370 +
          C468 * C466 +
          ((C476 * C129) / C74 +
           C70 * (C986 - C1131 + C128 * ((C128 * C1093) / C94 - C1184))) *
              C371) *
         C59) /
        C74;
    const double d2neyz000002 =
        (2 * Pi *
         ((C623 * C670 + (C513 * C1089) / C94 + C620 * C541 + C514 * C1236 -
           C605 * C582 + C515 * (C986 - C1155 / C74 + C130 * C1340)) *
              C71 -
          (C629 * C127) / C74) *
         C59) /
        C74;
    const double d2neyz000110 =
        (2 * Pi *
         ((C290 * C434 + C1322 * C375 - C455 * C435 + C1334 * C377) * C63 +
          (C1269 * C375 - C324 * C434 + C712 * C435 +
           ((C707 * C129) / C74 + C70 * ((C128 * C1247) / C94 - C1073)) *
               C377) *
              C66)) /
        C74;
    const double d2neyz000101 =
        (2 * Pi *
         ((C1380 * C71 - (C775 * C127) / C74) * C63 +
          (((C519 * C943) / C94 - C744 * C295 - C746 * C751 +
            C521 * ((C130 * C1247) / C94 - C1078)) *
               C71 -
           (C776 * C127) / C74) *
              C66)) /
        C74;
    const double d2neyz000011 = (2 * Pi *
                                 (C775 * C434 + C1380 * C375 + C829 * C435 +
                                  (C744 * C425 + C519 * C1221 + C746 * C808 +
                                   C521 * (C1164 + C128 * C1340)) *
                                      C377) *
                                 C59) /
                                C74;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz000110;
    d2neyz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyz000011;
    d2neyz[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2neyz000200 - 0.5 * d2neyz000020 + d2neyz000002;
    d2neyz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyz000101;
    d2neyz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyz000200 - std::sqrt(0.75) * d2neyz000020;
    const double d2nezx000200 =
        (2 * Pi *
         ((C341 * C674 + (C65 * C1094) / C94 + C329 * C300 + C67 * C1197 -
           C213 * C316 + C69 * (C948 - C1096 + C122 * C1323)) *
              C70 -
          (C347 * C129) / C74) *
         C71) /
        C74;
    const double d2nezx000020 =
        (2 * Pi *
         ((C1335 * C70 - (C442 * C129) / C74) * C369 +
          ((C458 * C129) / C74 + C1286 * C70) * C370 +
          (((C448 * C116) / C74 + (C59 * (C301 + C1097 * C154)) / C94) * C70 -
           (C469 * C129) / C74) *
              C371)) /
        C74;
    const double d2nezx000002 =
        (2 * Pi *
         (C442 * C623 + C1335 * C513 - C596 * C620 + C1341 * C514 +
          C607 * C605 +
          ((C614 * C116) / C74 +
           C59 * (C948 - C1239 + C130 * ((C130 * C1097) / C94 - C1173))) *
              C515) *
         C71) /
        C74;
    const double d2nezx000110 = (2 * Pi *
                                 ((C1377 * C70 - (C717 * C129) / C74) * C375 +
                                  (((C63 * C989) / C94 - C651 * C405 -
                                    C653 * C696 + C66 * C128 * C1323) *
                                       C70 -
                                   (C718 * C129) / C74) *
                                      C377)) /
                                C74;
    const double d2nezx000101 = (2 * Pi *
                                 (C717 * C576 + C1377 * C519 + C774 * C577 +
                                  (C651 * C565 + C63 * C1238 + C653 * C765 +
                                   C66 * (C1057 + C130 * C1323)) *
                                      C521) *
                                 C71) /
                                C74;
    const double d2nezx000011 =
        (2 * Pi *
         ((C442 * C576 + C1335 * C519 - C596 * C577 + C1341 * C521) * C375 +
          (C1286 * C519 - C458 * C576 + C828 * C577 +
           ((C825 * C116) / C74 + C59 * ((C130 * C128 * C1097) / C94 - C1125)) *
               C521) *
              C377)) /
        C74;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx000110;
    d2nezx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezx000011;
    d2nezx[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nezx000200 - 0.5 * d2nezx000020 + d2nezx000002;
    d2nezx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezx000101;
    d2nezx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezx000200 - std::sqrt(0.75) * d2nezx000020;
    const double d2nezy000200 =
        (2 * Pi *
         ((C1324 * C70 - (C285 * C129) / C74) * C65 +
          ((C322 * C129) / C74 + C1272 * C70) * C67 +
          (((C316 * C127) / C74 + (C71 * (C303 + C1103 * C137)) / C94) * C70 -
           (C332 * C129) / C74) *
              C69)) /
        C74;
    const double d2nezy000020 =
        (2 * Pi *
         ((C485 * C674 + (C369 * C1099) / C94 + C482 * C405 + C370 * C1225 -
           C466 * C448 + C371 * (C992 - C993 / C74 + C128 * C1336)) *
              C70 -
          (C491 * C129) / C74) *
         C59) /
        C74;
    const double d2nezy000002 =
        (2 * Pi *
         (C285 * C623 + C1324 * C513 - C587 * C620 + C1342 * C514 +
          C601 * C605 +
          ((C614 * C127) / C74 +
           C71 * (C992 - C1241 + C130 * ((C130 * C1103) / C94 - C1179))) *
              C515) *
         C59) /
        C74;
    const double d2nezy000110 =
        (2 * Pi *
         ((C1378 * C70 - (C715 * C129) / C74) * C63 +
          (((C375 * C954) / C94 - C659 * C300 - C661 * C696 +
            C377 * ((C128 * C1250) / C94 - C1096)) *
               C70 -
           (C716 * C129) / C74) *
              C66)) /
        C74;
    const double d2nezy000101 =
        (2 * Pi *
         ((C285 * C576 + C1324 * C519 - C587 * C577 + C1342 * C521) * C63 +
          (C1272 * C519 - C322 * C576 + C771 * C577 +
           ((C765 * C127) / C74 + C71 * ((C130 * C1250) / C94 - C1066)) *
               C521) *
              C66)) /
        C74;
    const double d2nezy000011 = (2 * Pi *
                                 (C715 * C576 + C1378 * C519 + C826 * C577 +
                                  (C659 * C565 + C375 * C1240 + C661 * C825 +
                                   C377 * (C1128 + C130 * C1336)) *
                                      C521) *
                                 C59) /
                                C74;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy000110;
    d2nezy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezy000011;
    d2nezy[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nezy000200 - 0.5 * d2nezy000020 + d2nezy000002;
    d2nezy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezy000101;
    d2nezy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezy000200 - std::sqrt(0.75) * d2nezy000020;
    const double d2nezz000200 =
        (2 * Pi *
         (C1371 * C71 * C65 + C1327 * C71 * C67 +
          ((C212 * C275) / C74 - (C314 * C129) / C74 + (C316 * C129) / C74 +
           (C70 * (C304 + C1276 * C137)) / C94) *
              C71 * C69)) /
        C74;
    const double d2nezz000020 =
        (2 * Pi *
         (C1371 * C369 + C1337 * C370 +
          ((C407 * C275) / C74 - (C441 * C129) / C74 + (C448 * C129) / C74 +
           (C70 * (C304 + C1276 * C154)) / C94) *
              C371) *
         C59) /
        C74;
    const double d2nezz000002 =
        (2 * Pi *
         ((C275 / C105 - ((ae * -2 * C531) / C900 +
                          (((C89 * C600) / C74 + 2 * C576) * ae) / C74)) *
              C76 -
          C623 * C223 + C623 * C674 + (C513 * C1274) / C94 +
          (C600 / C105 + ((2 * C577 - C546 / C105) * ae) / C74) * C524 +
          C620 * C559 - C620 * C565 + C514 * C1296 + (C547 * C275) / C1056 +
          C605 * C613 - C605 * C614 +
          C515 * (C304 / C94 + C1164 + (C584 * be) / C74 +
                  C130 * ((-C1098) / C74 - C1184 + (C130 * C1276) / C94))) *
         C71 * C59) /
        C74;
    const double d2nezz000110 =
        (2 * Pi *
         ((C1371 * C375 + C1337 * C377) * C63 +
          (C1327 * C375 + ((C656 * C275 + C687 * C129) / C74 -
                           (C696 * C129) / C74 + (C70 * C128 * C1353) / C94) *
                              C377) *
              C66)) /
        C74;
    const double d2nezz000101 =
        (2 * Pi *
         (C1393 * C71 * C63 +
          ((C138 * C600) / C74 - C576 * C291 - C744 * C300 +
           (C519 * C964) / C94 + (C740 * C275) / C105 + C577 * C761 +
           C746 * C765 +
           C521 * ((-C949) / C74 - C1073 + (C130 * C1353) / C94)) *
              C71 * C66)) /
        C74;
    const double d2nezz000011 =
        (2 * Pi *
         (C1393 * C375 +
          ((C380 * C600) / C74 - C576 * C397 - C744 * C405 +
           (C519 * C997) / C94 + (C798 * C275) / C105 + C577 * C822 +
           C746 * C825 +
           C521 * ((-C993) / C74 - C1131 + (C130 * C128 * C1276) / C94)) *
              C377) *
         C59) /
        C74;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz000110;
    d2nezz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezz000011;
    d2nezz[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nezz000200 - 0.5 * d2nezz000020 + d2nezz000002;
    d2nezz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezz000101;
    d2nezz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezz000200 - std::sqrt(0.75) * d2nezz000020;
}
