/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_kinetic.hpp"

#include <cmath>

#include <boost/math/special_functions/gamma.hpp>

/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}

//
// Automatically generated, do not edit
void kinetic_second_derivative_00(double ae,
                                  double be,
                                  double cc,
                                  double xAB,
                                  double yAB,
                                  double zAB,
                                  double* const hxx,
                                  double* const hxy,
                                  double* const hxz,
                                  double* const hyy,
                                  double* const hyz,
                                  double* const hzz,
                                  bool same_atom,
                                  std::size_t matrix_size,
                                  std::size_t Ai,
                                  std::size_t Bi)
{
    const double C43 = ae * be;
    const double C42 = ae + be;
    const double C50 = C43 * zAB;
    const double C49 = std::pow(C42, 2);
    const double C48 = C43 * yAB;
    const double C47 = 2 * C42;
    const double C46 = 2 * C43;
    const double C45 = C43 * xAB;
    const double C44 = Pi / C42;
    const double C55 = C50 * 1;
    const double C54 = 2 * C49;
    const double C53 = C48 * 1;
    const double C52 = C45 * 1;
    const double C51 = std::sqrt(C44);
    const double C65 = C51 * 1;
    const double C64 = -4 * C55;
    const double C63 = -4 * C53;
    const double C62 = C42 * C54;
    const double C61 = 2 * C55;
    const double C60 = 2 * C53;
    const double C59 = -4 * C52;
    const double C58 = 2 * C52;
    const double C57 = C51 * 1;
    const double C56 = C51 * 1;
    const double C74 = C64 / C42;
    const double C73 = C51 * C61;
    const double C72 = C63 / C42;
    const double C71 = C51 * C60;
    const double C70 = C51 * C58;
    const double C69 = zAB * C61;
    const double C68 = yAB * C60;
    const double C67 = C59 / C42;
    const double C66 = xAB * C58;
    const double C77 = C69 / C42;
    const double C76 = C68 / C42;
    const double C75 = C66 / C42;
    const double C80 = 1 - C77;
    const double C79 = 1 - C76;
    const double C78 = 1 - C75;
    const double C83 = C80 * C46;
    const double C82 = C79 * C46;
    const double C81 = C78 * C46;
    const double C89 = zAB * C83;
    const double C88 = yAB * C82;
    const double C87 = C51 * C83;
    const double C86 = C51 * C82;
    const double C85 = C51 * C81;
    const double C84 = xAB * C81;
    const double C95 = C65 * C86;
    const double C94 = C89 / C42;
    const double C93 = C88 / C42;
    const double C92 = C57 * C85;
    const double C91 = C85 * C86;
    const double C90 = C84 / C42;
    const double C101 = C95 * C87;
    const double C100 = C74 - C94;
    const double C99 = C72 - C93;
    const double C98 = C92 * C87;
    const double C97 = C56 * C91;
    const double C96 = C67 - C90;
    const double C105 = C100 * C46;
    const double C104 = C99 * C46;
    const double C103 = C97 / C54;
    const double C102 = C96 * C46;
    const double C108 = C51 * C105;
    const double C107 = C51 * C102;
    const double C106 = C51 * C104;
    const double hxx000000 =
        (C56 * C57 * C51 * ((-3 * C81) / C42 - (xAB * C102) / C42) * C46) /
            C47 -
        C103 - C98 / C54;
    const double hxy000000 =
        (C70 * C71 * C87) / C62 - (C56 * C70 * C106 + C56 * C107 * C71) / C54;
    const double hxz000000 = (C70 * C86 * C73) / C62 -
                             (C57 * C107 * C73) / C54 -
                             (C57 * C70 * C108) / C54;
    const double hyy000000 =
        (C56 * C65 * C51 * ((-3 * C82) / C42 - (yAB * C104) / C42) * C46) /
            C47 -
        C103 - C101 / C54;
    const double hyz000000 = (C85 * C71 * C73) / C62 -
                             (C65 * C106 * C73) / C54 -
                             (C65 * C71 * C108) / C54;
    const double hzz000000 =
        (C65 * C57 * C51 * ((-3 * C83) / C42 - (zAB * C105) / C42) * C46) /
            C47 -
        (C101 + C98) / C54;
    if (same_atom) {
        hxx[(Ai + 0) * matrix_size + Bi + 0] += cc * hxx000000;
        hxy[(Ai + 0) * matrix_size + Bi + 0] += cc * hxy000000;
        hxz[(Ai + 0) * matrix_size + Bi + 0] += cc * hxz000000;
        hyy[(Ai + 0) * matrix_size + Bi + 0] += cc * hyy000000;
        hyz[(Ai + 0) * matrix_size + Bi + 0] += cc * hyz000000;
        hzz[(Ai + 0) * matrix_size + Bi + 0] += cc * hzz000000;
    } else {
        hxx[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxx000000;
        hxy[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxy000000;
        hxz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxz000000;
        hyy[(Ai + 0) * matrix_size + Bi + 0] -= cc * hyy000000;
        hyz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hyz000000;
        hzz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hzz000000;
    }
}

// Automatically generated, do not edit
void kinetic_second_derivative_01(double ae,
                                  double be,
                                  double cc,
                                  double xAB,
                                  double yAB,
                                  double zAB,
                                  double* const hxx,
                                  double* const hxy,
                                  double* const hxz,
                                  double* const hyy,
                                  double* const hyz,
                                  double* const hzz,
                                  bool same_atom,
                                  std::size_t matrix_size,
                                  std::size_t Ai,
                                  std::size_t Bi)
{
    const double C300 = ae + be;
    const double C145 = (xAB * ae) / C300;
    const double C229 = (yAB * ae) / C300;
    const double C263 = (zAB * ae) / C300;
    const double C148 = 0 * be;
    const double C147 = ae * be;
    const double C146 = ae + be;
    const double C155 = C147 * zAB;
    const double C154 = 2 * C146;
    const double C153 = std::pow(C146, 2);
    const double C152 = C147 * yAB;
    const double C151 = 2 * C147;
    const double C150 = C147 * xAB;
    const double C149 = Pi / C146;
    const double C160 = C155 * 1;
    const double C159 = 2 * C153;
    const double C158 = C152 * 1;
    const double C157 = C150 * 1;
    const double C156 = std::sqrt(C149);
    const double C170 = C156 * C145;
    const double C169 = -4 * C160;
    const double C168 = -4 * C158;
    const double C167 = C148 / C159;
    const double C166 = 2 * C160;
    const double C165 = C156 * 1;
    const double C164 = 2 * C158;
    const double C163 = 2 * C157;
    const double C162 = -4 * C157;
    const double C161 = C156 * 1;
    const double C178 = C169 / C146;
    const double C177 = C156 * C166;
    const double C176 = C168 / C146;
    const double C175 = C156 * C164;
    const double C174 = zAB * C166;
    const double C173 = yAB * C164;
    const double C172 = xAB * C163;
    const double C171 = C162 / C146;
    const double C181 = C174 / C146;
    const double C180 = C173 / C146;
    const double C179 = C172 / C146;
    const double C184 = 1 - C181;
    const double C183 = 1 - C180;
    const double C182 = 1 - C179;
    const double C188 = C182 * ae;
    const double C187 = C184 * C151;
    const double C186 = C183 * C151;
    const double C185 = C182 * C151;
    const double C195 = zAB * C187;
    const double C194 = yAB * C186;
    const double C193 = C188 / C146;
    const double C192 = C156 * C187;
    const double C191 = -3 * C185;
    const double C190 = C156 * C186;
    const double C189 = xAB * C185;
    const double C201 = C170 * C190;
    const double C200 = C195 / C146;
    const double C199 = C194 / C146;
    const double C198 = C193 - C167;
    const double C197 = C191 / C146;
    const double C196 = C189 / C146;
    const double C206 = C201 * C192;
    const double C205 = C178 - C200;
    const double C204 = C176 - C199;
    const double C203 = C156 * C198;
    const double C202 = C171 - C196;
    const double C211 = C206 / C159;
    const double C210 = C205 * C151;
    const double C209 = C204 * C151;
    const double C208 = C202 * C151;
    const double C207 = C202 * ae;
    const double C215 = C156 * C210;
    const double C214 = C156 * C209;
    const double C213 = xAB * C208;
    const double C212 = C156 * C207;
    const double C218 = C165 * C212;
    const double C217 = C213 / C146;
    const double C216 = C212 * C190;
    const double C221 = C218 * C192;
    const double C220 = C197 - C217;
    const double C219 = C161 * C216;
    const double C224 = C220 * ae;
    const double C223 = C221 / C159;
    const double C222 = C219 / C159;
    const double C225 = C156 * C224;
    const double C240 = C156 * 1;
    const double C239 = C156 * C163;
    const double C238 = yAB * C209;
    const double C237 = -3 * C186;
    const double C236 = C156 * C208;
    const double C235 = 0 * be;
    const double C234 = C183 * ae;
    const double C233 = C156 * C185;
    const double C232 = C204 * ae;
    const double C231 = C156 * C229;
    const double C246 = C238 / C146;
    const double C245 = C237 / C146;
    const double C244 = C235 / C159;
    const double C243 = C234 / C146;
    const double C242 = C231 * C233;
    const double C241 = C156 * C232;
    const double C251 = C240 * C241;
    const double C250 = C245 - C246;
    const double C249 = C243 - C244;
    const double C248 = C242 * C192;
    const double C247 = C241 * C233;
    const double C256 = C251 * C192;
    const double C255 = C250 * ae;
    const double C254 = C156 * C249;
    const double C253 = C248 / C159;
    const double C252 = C161 * C247;
    const double C259 = C256 / C159;
    const double C258 = C156 * C255;
    const double C257 = C252 / C159;
    const double C273 = C240 * C190;
    const double C272 = zAB * C210;
    const double C271 = -3 * C187;
    const double C270 = 0 * be;
    const double C269 = C184 * ae;
    const double C268 = C165 * C233;
    const double C267 = C205 * ae;
    const double C266 = C233 * C190;
    const double C265 = C156 * C263;
    const double C279 = C272 / C146;
    const double C278 = C271 / C146;
    const double C277 = C270 / C159;
    const double C276 = C269 / C146;
    const double C275 = C156 * C267;
    const double C274 = C265 * C266;
    const double C284 = C275 * C273;
    const double C283 = C278 - C279;
    const double C282 = C276 - C277;
    const double C281 = C275 * C268;
    const double C280 = C274 / C159;
    const double C286 = C283 * ae;
    const double C285 = C156 * C282;
    const double C287 = C156 * C286;
    const double C308 = C283 * C151;
    const double C307 = std::pow(C146, 3);
    const double C306 = C250 * C151;
    const double C305 = C220 * C151;
    const double C312 = C156 * C305;
    const double C311 = C156 * C308;
    const double C310 = 2 * C307;
    const double C309 = C156 * C306;
    const double hxx000100 =
        C222 -
        (C161 * C165 * C156 * ((-4 * C208) / C146 - (xAB * C305) / C146) * ae) /
            C154 +
        C223;
    const double hxx000010 = (C161 * C231 * C312) / C154 + C257 - C253;
    const double hxx000001 = (C265 * C165 * C312) / C154 - C280 + C281 / C159;
    const double hxy000100 = (C161 * C225 * C175) / C159 +
                             (C161 * C203 * C214) / C154 -
                             (C203 * C175 * C192) / C159;
    const double hxy000010 = (C161 * C254 * C236) / C154 +
                             (C161 * C258 * C239) / C159 -
                             (C254 * C239 * C192) / C159;
    const double hxy000001 =
        -((C239 * C175 * C275) / C310 +
          (C265 * C239 * C214 + C265 * C236 * C175) / C159);
    const double hxz000100 = (C165 * C225 * C177) / C159 -
                             (C203 * C190 * C177) / C159 +
                             (C203 * C165 * C215) / C154;
    const double hxz000010 =
        -((C231 * C239 * C215) / C159 + (C177 * C241 * C239) / C310 +
          (C231 * C236 * C177) / C159);
    const double hxz000001 = (C285 * C165 * C236) / C154 -
                             (C285 * C239 * C190) / C159 +
                             (C287 * C165 * C239) / C159;
    const double hyy000100 = C222 + (C161 * C170 * C309) / C154 - C211;
    const double hyy000010 =
        C257 -
        (C161 * C240 * C156 * ((-4 * C209) / C146 - (yAB * C306) / C146) * ae) /
            C154 +
        C259;
    const double hyy000001 = (C265 * C240 * C309) / C154 - C280 + C284 / C159;
    const double hyz000100 =
        -((C170 * C175 * C215) / C159 + (C170 * C214 * C177) / C159 +
          (C177 * C212 * C175) / C310);
    const double hyz000010 = (C240 * C258 * C177) / C159 -
                             (C254 * C233 * C177) / C159 +
                             (C240 * C254 * C215) / C154;
    const double hyz000001 = (C285 * C240 * C214) / C154 -
                             (C285 * C233 * C175) / C159 +
                             (C287 * C240 * C175) / C159;
    const double hzz000100 = C223 - C211 + (C170 * C165 * C311) / C154;
    const double hzz000010 = C259 - C253 + (C240 * C231 * C311) / C154;
    const double hzz000001 =
        (C281 + C284) / C159 -
        (C240 * C165 * C156 * ((-4 * C210) / C146 - (zAB * C308) / C146) * ae) /
            C154;
    if (same_atom) {
        hxx[(Ai + 0) * matrix_size + Bi + 0] += cc * hxx000100;
        hxx[(Ai + 0) * matrix_size + Bi + 1] += cc * hxx000010;
        hxx[(Ai + 0) * matrix_size + Bi + 2] += cc * hxx000001;
        hxy[(Ai + 0) * matrix_size + Bi + 0] += cc * hxy000100;
        hxy[(Ai + 0) * matrix_size + Bi + 1] += cc * hxy000010;
        hxy[(Ai + 0) * matrix_size + Bi + 2] += cc * hxy000001;
        hxz[(Ai + 0) * matrix_size + Bi + 0] += cc * hxz000100;
        hxz[(Ai + 0) * matrix_size + Bi + 1] += cc * hxz000010;
        hxz[(Ai + 0) * matrix_size + Bi + 2] += cc * hxz000001;
        hyy[(Ai + 0) * matrix_size + Bi + 0] += cc * hyy000100;
        hyy[(Ai + 0) * matrix_size + Bi + 1] += cc * hyy000010;
        hyy[(Ai + 0) * matrix_size + Bi + 2] += cc * hyy000001;
        hyz[(Ai + 0) * matrix_size + Bi + 0] += cc * hyz000100;
        hyz[(Ai + 0) * matrix_size + Bi + 1] += cc * hyz000010;
        hyz[(Ai + 0) * matrix_size + Bi + 2] += cc * hyz000001;
        hzz[(Ai + 0) * matrix_size + Bi + 0] += cc * hzz000100;
        hzz[(Ai + 0) * matrix_size + Bi + 1] += cc * hzz000010;
        hzz[(Ai + 0) * matrix_size + Bi + 2] += cc * hzz000001;
    } else {
        hxx[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxx000100;
        hxx[(Ai + 0) * matrix_size + Bi + 1] -= cc * hxx000010;
        hxx[(Ai + 0) * matrix_size + Bi + 2] -= cc * hxx000001;
        hxy[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxy000100;
        hxy[(Ai + 0) * matrix_size + Bi + 1] -= cc * hxy000010;
        hxy[(Ai + 0) * matrix_size + Bi + 2] -= cc * hxy000001;
        hxz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxz000100;
        hxz[(Ai + 0) * matrix_size + Bi + 1] -= cc * hxz000010;
        hxz[(Ai + 0) * matrix_size + Bi + 2] -= cc * hxz000001;
        hyy[(Ai + 0) * matrix_size + Bi + 0] -= cc * hyy000100;
        hyy[(Ai + 0) * matrix_size + Bi + 1] -= cc * hyy000010;
        hyy[(Ai + 0) * matrix_size + Bi + 2] -= cc * hyy000001;
        hyz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hyz000100;
        hyz[(Ai + 0) * matrix_size + Bi + 1] -= cc * hyz000010;
        hyz[(Ai + 0) * matrix_size + Bi + 2] -= cc * hyz000001;
        hzz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hzz000100;
        hzz[(Ai + 0) * matrix_size + Bi + 1] -= cc * hzz000010;
        hzz[(Ai + 0) * matrix_size + Bi + 2] -= cc * hzz000001;
    }
}

// Automatically generated, do not edit
void kinetic_second_derivative_02(double ae,
                                  double be,
                                  double cc,
                                  double xAB,
                                  double yAB,
                                  double zAB,
                                  double* const hxx,
                                  double* const hxy,
                                  double* const hxz,
                                  double* const hyy,
                                  double* const hyz,
                                  double* const hzz,
                                  bool same_atom,
                                  std::size_t matrix_size,
                                  std::size_t Ai,
                                  std::size_t Bi)
{
    const double C775 = ae + be;
    const double C793 = zAB * ae;
    const double C792 = yAB * ae;
    const double C791 = 2 * C775;
    const double C790 = std::pow(C775, 2);
    const double C789 = xAB * ae;
    const double C794 = 1 / C791;
    const double C449 = C789 / (ae + be);
    const double C451 = std::pow(C789, 2) / C790 + C794;
    const double C574 = std::pow(C792, 2) / C790 + C794;
    const double C578 = C792 / C775;
    const double C650 = std::pow(C793, 2) / C790 + C794;
    const double C654 = C793 / C775;
    const double C456 = 0 * ae;
    const double C455 = 0 * be;
    const double C454 = ae * be;
    const double C453 = 0 * be;
    const double C452 = ae + be;
    const double C466 = C456 / C452;
    const double C465 = xAB * C453;
    const double C464 = C454 * zAB;
    const double C463 = C454 * yAB;
    const double C462 = 2 * C454;
    const double C461 = C454 * xAB;
    const double C460 = 2 * C452;
    const double C459 = std::pow(C452, 2);
    const double C458 = -2 * C453;
    const double C457 = Pi / C452;
    const double C474 = C465 / C452;
    const double C473 = C464 * 1;
    const double C472 = C463 * 1;
    const double C471 = 2 * C459;
    const double C470 = C461 * 1;
    const double C469 = C459 * C460;
    const double C468 = ae * C458;
    const double C467 = std::sqrt(C457);
    const double C488 = C467 * C451;
    const double C487 = -4 * C473;
    const double C486 = -4 * C472;
    const double C485 = C470 / C459;
    const double C484 = C455 / C471;
    const double C483 = 0 - C474;
    const double C482 = 2 * C473;
    const double C481 = C467 * 1;
    const double C480 = 2 * C472;
    const double C479 = C453 / C471;
    const double C478 = 2 * C470;
    const double C477 = -4 * C470;
    const double C476 = C468 / C469;
    const double C475 = C467 * 1;
    const double C498 = C487 / C452;
    const double C497 = C467 * C482;
    const double C496 = C486 / C452;
    const double C495 = C466 - C485;
    const double C494 = C483 * ae;
    const double C493 = C467 * C480;
    const double C492 = zAB * C482;
    const double C491 = yAB * C480;
    const double C490 = xAB * C478;
    const double C489 = C477 / C452;
    const double C502 = C494 / C452;
    const double C501 = C492 / C452;
    const double C500 = C491 / C452;
    const double C499 = C490 / C452;
    const double C506 = C502 - C484;
    const double C505 = 1 - C501;
    const double C504 = 1 - C500;
    const double C503 = 1 - C499;
    const double C511 = C506 / C460;
    const double C510 = C505 * C462;
    const double C509 = C504 * C462;
    const double C508 = C503 * ae;
    const double C507 = C503 * C462;
    const double C519 = zAB * C510;
    const double C518 = yAB * C509;
    const double C517 = C467 * C510;
    const double C516 = -3 * C507;
    const double C515 = C467 * C509;
    const double C514 = C507 / C471;
    const double C513 = C508 / C452;
    const double C512 = xAB * C507;
    const double C525 = C488 * C515;
    const double C524 = C519 / C452;
    const double C523 = C518 / C452;
    const double C522 = C516 / C452;
    const double C521 = C513 - C479;
    const double C520 = C512 / C452;
    const double C531 = C525 * C517;
    const double C530 = C498 - C524;
    const double C529 = C496 - C523;
    const double C528 = xAB * C521;
    const double C527 = 2 * C521;
    const double C526 = C489 - C520;
    const double C537 = C531 / C471;
    const double C536 = C530 * C462;
    const double C535 = C529 * C462;
    const double C534 = C528 + C449;
    const double C533 = C526 * C462;
    const double C532 = C526 * ae;
    const double C544 = C467 * C536;
    const double C543 = C467 * C535;
    const double C542 = C534 * ae;
    const double C541 = C533 / C471;
    const double C540 = 3 * C532;
    const double C539 = xAB * C533;
    const double C538 = xAB * C532;
    const double C547 = C542 / C452;
    const double C546 = C539 / C452;
    const double C545 = C538 / C452;
    const double C550 = C511 + C547;
    const double C549 = C522 - C546;
    const double C548 = C545 + C527;
    const double C554 = C550 + C495;
    const double C553 = C549 * ae;
    const double C552 = C549 * C462;
    const double C551 = C548 * ae;
    const double C557 = C467 * C554;
    const double C556 = xAB * C553;
    const double C555 = C551 / C452;
    const double C559 = C556 + C540;
    const double C558 = C476 + C555;
    const double C561 = ae * C559;
    const double C560 = C558 - C514;
    const double C563 = C561 / C459;
    const double C562 = C467 * C560;
    const double C566 = C563 - C541;
    const double C565 = C562 * C481;
    const double C564 = C562 * C515;
    const double C569 = C467 * C566;
    const double C568 = C565 * C517;
    const double C567 = C475 * C564;
    const double C570 = C568 / C460;
    const double C594 = C467 * 1;
    const double C593 = C467 * C478;
    const double C592 = C535 / C471;
    const double C591 = yAB * C535;
    const double C590 = -3 * C509;
    const double C589 = C467 * C533;
    const double C588 = C472 / C459;
    const double C587 = 0 * ae;
    const double C586 = 0 * be;
    const double C585 = C467 * C507;
    const double C584 = C509 / C471;
    const double C583 = C504 * ae;
    const double C582 = C529 * ae;
    const double C581 = 0 * be;
    const double C580 = C467 * C574;
    const double C605 = 3 * C582;
    const double C604 = C591 / C452;
    const double C603 = C590 / C452;
    const double C602 = C587 / C452;
    const double C601 = C586 / C471;
    const double C600 = yAB * C581;
    const double C599 = C580 * C585;
    const double C598 = C581 / C471;
    const double C597 = C583 / C452;
    const double C596 = yAB * C582;
    const double C595 = -2 * C581;
    const double C612 = C603 - C604;
    const double C611 = C602 - C588;
    const double C610 = C600 / C452;
    const double C609 = C599 * C517;
    const double C608 = C597 - C598;
    const double C607 = C596 / C452;
    const double C606 = ae * C595;
    const double C619 = C612 * C462;
    const double C618 = C612 * ae;
    const double C617 = yAB * C608;
    const double C616 = 0 - C610;
    const double C615 = C609 / C471;
    const double C614 = 2 * C608;
    const double C613 = C606 / C469;
    const double C623 = yAB * C618;
    const double C622 = C617 + C578;
    const double C621 = C616 * ae;
    const double C620 = C607 + C614;
    const double C627 = C623 + C605;
    const double C626 = C622 * ae;
    const double C625 = C621 / C452;
    const double C624 = C620 * ae;
    const double C631 = ae * C627;
    const double C630 = C626 / C452;
    const double C629 = C625 - C601;
    const double C628 = C624 / C452;
    const double C634 = C631 / C459;
    const double C633 = C629 / C460;
    const double C632 = C613 + C628;
    const double C637 = C634 - C592;
    const double C636 = C633 + C630;
    const double C635 = C632 - C584;
    const double C640 = C467 * C637;
    const double C639 = C636 + C611;
    const double C638 = C467 * C635;
    const double C643 = C594 * C638;
    const double C642 = C467 * C639;
    const double C641 = C638 * C585;
    const double C645 = C643 * C517;
    const double C644 = C475 * C641;
    const double C646 = C645 / C460;
    const double C669 = C594 * C515;
    const double C668 = C536 / C471;
    const double C667 = zAB * C536;
    const double C666 = -3 * C510;
    const double C665 = C473 / C459;
    const double C664 = 0 * ae;
    const double C663 = 0 * be;
    const double C662 = C481 * C585;
    const double C661 = C510 / C471;
    const double C660 = C505 * ae;
    const double C659 = C530 * ae;
    const double C658 = 0 * be;
    const double C657 = C585 * C515;
    const double C656 = C467 * C650;
    const double C680 = 3 * C659;
    const double C679 = C667 / C452;
    const double C678 = C666 / C452;
    const double C677 = C664 / C452;
    const double C676 = C663 / C471;
    const double C675 = zAB * C658;
    const double C674 = C658 / C471;
    const double C673 = C660 / C452;
    const double C672 = zAB * C659;
    const double C671 = -2 * C658;
    const double C670 = C656 * C657;
    const double C687 = C678 - C679;
    const double C686 = C677 - C665;
    const double C685 = C675 / C452;
    const double C684 = C673 - C674;
    const double C683 = C672 / C452;
    const double C682 = ae * C671;
    const double C681 = C670 / C471;
    const double C693 = C687 * C462;
    const double C692 = C687 * ae;
    const double C691 = zAB * C684;
    const double C690 = 0 - C685;
    const double C689 = 2 * C684;
    const double C688 = C682 / C469;
    const double C697 = zAB * C692;
    const double C696 = C691 + C654;
    const double C695 = C690 * ae;
    const double C694 = C683 + C689;
    const double C701 = C697 + C680;
    const double C700 = C696 * ae;
    const double C699 = C695 / C452;
    const double C698 = C694 * ae;
    const double C705 = ae * C701;
    const double C704 = C700 / C452;
    const double C703 = C699 - C676;
    const double C702 = C698 / C452;
    const double C708 = C705 / C459;
    const double C707 = C703 / C460;
    const double C706 = C688 + C702;
    const double C711 = C708 - C668;
    const double C710 = C707 + C704;
    const double C709 = C706 - C661;
    const double C714 = C467 * C711;
    const double C713 = C710 + C686;
    const double C712 = C467 * C709;
    const double C717 = C712 * C669;
    const double C716 = C467 * C713;
    const double C715 = C712 * C662;
    const double C728 = C467 * C449;
    const double C727 = C467 * C553;
    const double C726 = C467 * C618;
    const double C725 = C467 * C608;
    const double C724 = C467 * C521;
    const double C723 = C467 * C582;
    const double C722 = C467 * C532;
    const double C721 = C467 * C578;
    const double C731 = C728 * C723;
    const double C730 = C722 * C723;
    const double C729 = C721 * C722;
    const double C734 = C731 * C517;
    const double C733 = C475 * C730;
    const double C732 = C729 * C517;
    const double C735 = C733 / C471;
    const double C745 = C728 * C515;
    const double C744 = C467 * C692;
    const double C743 = C467 * C684;
    const double C742 = C467 * C659;
    const double C741 = C481 * C722;
    const double C740 = C722 * C515;
    const double C739 = C467 * C654;
    const double C748 = C742 * C745;
    const double C747 = C741 * C742;
    const double C746 = C739 * C740;
    const double C751 = C748 / C471;
    const double C750 = C747 / C471;
    const double C749 = C746 / C471;
    const double C757 = C594 * C723;
    const double C756 = C721 * C585;
    const double C755 = C723 * C585;
    const double C760 = C757 * C742;
    const double C759 = C742 * C756;
    const double C758 = C739 * C755;
    const double C763 = C760 / C471;
    const double C762 = C759 / C471;
    const double C761 = C758 / C471;
    const double C807 = zAB * C693;
    const double C806 = -4 * C536;
    const double C805 = yAB * C619;
    const double C804 = -4 * C535;
    const double C803 = C467 * C552;
    const double C802 = C467 * C693;
    const double C801 = C467 * C619;
    const double C800 = xAB * C552;
    const double C799 = -4 * C533;
    const double C813 = C807 / C452;
    const double C812 = C806 / C452;
    const double C811 = C805 / C452;
    const double C810 = C804 / C452;
    const double C809 = C800 / C452;
    const double C808 = C799 / C452;
    const double C816 = C812 - C813;
    const double C815 = C810 - C811;
    const double C814 = C808 - C809;
    const double C819 = C816 * ae;
    const double C818 = C815 * ae;
    const double C817 = C814 * ae;
    const double C822 = C467 * C819;
    const double C821 = C467 * C818;
    const double C820 = C467 * C817;
    const double hxx000200 =
        C567 / C460 -
        (C467 * ((ae * (xAB * C817 + 4 * C553)) / C459 - C552 / C471) * C481 *
         C475) /
            2 +
        C570;
    const double hxx000020 = (C475 * C580 * C803 + C644) / C460 - C615;
    const double hxx000002 = (C656 * C481 * C803) / C460 - C681 + C715 / C460;
    const double hxx000110 = C732 / C471 - (C735 + (C475 * C721 * C820) / C460);
    const double hxx000101 = C749 - (C739 * C481 * C820) / C460 - C750;
    const double hxx000011 = (C739 * C721 * C803) / C460 + C761 + C762;
    const double hxy000200 = (C475 * C569 * C493 + C475 * C557 * C543) / C460 -
                             (C557 * C493 * C517) / C471;
    const double hxy000020 = (C475 * C642 * C589 + C475 * C640 * C593) / C460 -
                             (C642 * C593 * C517) / C471;
    const double hxy000002 =
        -(C712 * C593 * C493 + C656 * C593 * C543 + C656 * C589 * C493) / C471;
    const double hxy000110 = (C724 * C725 * C517) / C460 -
                             (C475 * C724 * C726 + C475 * C725 * C727) / C460;
    const double hxy000101 = (C739 * C727 * C493) / C471 +
                             (C739 * C724 * C543) / C460 +
                             (C742 * C724 * C493) / C471;
    const double hxy000011 = (C739 * C725 * C589) / C460 +
                             (C739 * C726 * C593) / C471 +
                             (C742 * C725 * C593) / C471;
    const double hxz000200 = (C569 * C481 * C497) / C460 -
                             (C557 * C515 * C497) / C471 +
                             (C557 * C481 * C544) / C460;
    const double hxz000020 =
        -(C580 * C593 * C544 + C638 * C593 * C497 + C580 * C589 * C497) / C471;
    const double hxz000002 = (C716 * C481 * C589) / C460 -
                             (C716 * C593 * C515) / C471 +
                             (C714 * C481 * C593) / C460;
    const double hxz000110 = (C721 * C727 * C497 + C724 * C723 * C497) / C471 +
                             (C724 * C721 * C544) / C460;
    const double hxz000101 = (C743 * C724 * C515) / C460 -
                             (C743 * C481 * C727) / C460 -
                             (C724 * C481 * C744) / C460;
    const double hxz000011 = (C743 * C721 * C589) / C460 +
                             (C743 * C723 * C593) / C471 +
                             (C744 * C721 * C593) / C471;
    const double hyy000200 = (C567 + C475 * C488 * C801) / C460 - C537;
    const double hyy000020 =
        C644 / C460 -
        (C594 * C467 * ((ae * (yAB * C818 + 4 * C618)) / C459 - C619 / C471) *
         C475) /
            2 +
        C646;
    const double hyy000002 = (C656 * C594 * C801) / C460 - C681 + C717 / C460;
    const double hyy000110 = C734 / C471 - ((C475 * C728 * C821) / C460 + C735);
    const double hyy000101 = C749 + (C739 * C728 * C801) / C460 + C751;
    const double hyy000011 = C761 - (C739 * C594 * C821) / C460 - C763;
    const double hyz000200 =
        -(C488 * C493 * C544 + C488 * C543 * C497 + C562 * C493 * C497) / C471;
    const double hyz000020 = (C594 * C640 * C497) / C460 -
                             (C642 * C585 * C497) / C471 +
                             (C594 * C642 * C544) / C460;
    const double hyz000002 = (C716 * C594 * C543) / C460 -
                             (C716 * C585 * C493) / C471 +
                             (C714 * C594 * C493) / C460;
    const double hyz000110 = (C725 * C722 * C497 + C728 * C726 * C497) / C471 +
                             (C728 * C725 * C544) / C460;
    const double hyz000101 = (C743 * C722 * C493) / C471 +
                             (C743 * C728 * C543) / C460 +
                             (C744 * C728 * C493) / C471;
    const double hyz000011 = (C743 * C725 * C585) / C460 -
                             (C743 * C594 * C726) / C460 -
                             (C594 * C725 * C744) / C460;
    const double hzz000200 = C570 - C537 + (C488 * C481 * C802) / C460;
    const double hzz000020 = C646 - C615 + (C594 * C580 * C802) / C460;
    const double hzz000002 =
        (C715 + C717) / C460 -
        (C594 * C481 * C467 *
         ((ae * (zAB * C819 + 4 * C692)) / C459 - C693 / C471)) /
            2;
    const double hzz000110 = (C732 + C734) / C471 + (C728 * C721 * C802) / C460;
    const double hzz000101 = C751 - C750 - (C728 * C481 * C822) / C460;
    const double hzz000011 = C762 - C763 - (C594 * C721 * C822) / C460;
    if (same_atom) {
        hxx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx000110;
        hxx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxx000011;
        hxx[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxx000200 - 0.5 * hxx000020 + hxx000002);
        hxx[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxx000101;
        hxx[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxx000200 - std::sqrt(0.75) * hxx000020);
        hxy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy000110;
        hxy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxy000011;
        hxy[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxy000200 - 0.5 * hxy000020 + hxy000002);
        hxy[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxy000101;
        hxy[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxy000200 - std::sqrt(0.75) * hxy000020);
        hxz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz000110;
        hxz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxz000011;
        hxz[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxz000200 - 0.5 * hxz000020 + hxz000002);
        hxz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxz000101;
        hxz[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxz000200 - std::sqrt(0.75) * hxz000020);
        hyy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy000110;
        hyy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyy000011;
        hyy[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyy000200 - 0.5 * hyy000020 + hyy000002);
        hyy[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hyy000101;
        hyy[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hyy000200 - std::sqrt(0.75) * hyy000020);
        hyz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz000110;
        hyz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyz000011;
        hyz[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyz000200 - 0.5 * hyz000020 + hyz000002);
        hyz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hyz000101;
        hyz[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hyz000200 - std::sqrt(0.75) * hyz000020);
        hzz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz000110;
        hzz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hzz000011;
        hzz[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hzz000200 - 0.5 * hzz000020 + hzz000002);
        hzz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hzz000101;
        hzz[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hzz000200 - std::sqrt(0.75) * hzz000020);
    } else {
        hxx[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx000110;
        hxx[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxx000011;
        hxx[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxx000200 - 0.5 * hxx000020 + hxx000002);
        hxx[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxx000101;
        hxx[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxx000200 - std::sqrt(0.75) * hxx000020);
        hxy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy000110;
        hxy[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxy000011;
        hxy[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxy000200 - 0.5 * hxy000020 + hxy000002);
        hxy[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxy000101;
        hxy[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxy000200 - std::sqrt(0.75) * hxy000020);
        hxz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz000110;
        hxz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxz000011;
        hxz[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxz000200 - 0.5 * hxz000020 + hxz000002);
        hxz[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxz000101;
        hxz[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxz000200 - std::sqrt(0.75) * hxz000020);
        hyy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy000110;
        hyy[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyy000011;
        hyy[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyy000200 - 0.5 * hyy000020 + hyy000002);
        hyy[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hyy000101;
        hyy[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hyy000200 - std::sqrt(0.75) * hyy000020);
        hyz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz000110;
        hyz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyz000011;
        hyz[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyz000200 - 0.5 * hyz000020 + hyz000002);
        hyz[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hyz000101;
        hyz[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hyz000200 - std::sqrt(0.75) * hyz000020);
        hzz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz000110;
        hzz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hzz000011;
        hzz[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hzz000200 - 0.5 * hzz000020 + hzz000002);
        hzz[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hzz000101;
        hzz[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hzz000200 - std::sqrt(0.75) * hzz000020);
    }
}

// Automatically generated, do not edit
void kinetic_second_derivative_10(double ae,
                                  double be,
                                  double cc,
                                  double xAB,
                                  double yAB,
                                  double zAB,
                                  double* const hxx,
                                  double* const hxy,
                                  double* const hxz,
                                  double* const hyy,
                                  double* const hyz,
                                  double* const hzz,
                                  bool same_atom,
                                  std::size_t matrix_size,
                                  std::size_t Ai,
                                  std::size_t Bi)
{
    const double C1384 = ae + be;
    const double C1227 = -(xAB * be) / C1384;
    const double C1311 = -(yAB * be) / C1384;
    const double C1345 = -(zAB * be) / C1384;
    const double C1230 = 0 * be;
    const double C1229 = ae * be;
    const double C1228 = ae + be;
    const double C1238 = C1230 / C1228;
    const double C1237 = C1229 * zAB;
    const double C1236 = std::pow(C1228, 2);
    const double C1235 = C1229 * yAB;
    const double C1234 = 2 * C1228;
    const double C1233 = 2 * C1229;
    const double C1232 = C1229 * xAB;
    const double C1231 = Pi / C1228;
    const double C1244 = -C1238;
    const double C1243 = C1237 * 1;
    const double C1242 = 2 * C1236;
    const double C1241 = C1235 * 1;
    const double C1240 = C1232 * 1;
    const double C1239 = std::sqrt(C1231);
    const double C1254 = C1239 * C1227;
    const double C1253 = -4 * C1243;
    const double C1252 = -4 * C1241;
    const double C1251 = C1244 / C1234;
    const double C1250 = 2 * C1243;
    const double C1249 = 2 * C1241;
    const double C1248 = 2 * C1240;
    const double C1247 = -4 * C1240;
    const double C1246 = C1239 * 1;
    const double C1245 = C1239 * 1;
    const double C1262 = C1239 * C1250;
    const double C1261 = C1253 / C1228;
    const double C1260 = C1239 * C1249;
    const double C1259 = C1252 / C1228;
    const double C1258 = zAB * C1250;
    const double C1257 = yAB * C1249;
    const double C1256 = xAB * C1248;
    const double C1255 = C1247 / C1228;
    const double C1265 = C1258 / C1228;
    const double C1264 = C1257 / C1228;
    const double C1263 = C1256 / C1228;
    const double C1268 = 1 - C1265;
    const double C1267 = 1 - C1264;
    const double C1266 = 1 - C1263;
    const double C1272 = C1266 * be;
    const double C1271 = C1268 * C1233;
    const double C1270 = C1267 * C1233;
    const double C1269 = C1266 * C1233;
    const double C1279 = zAB * C1271;
    const double C1278 = yAB * C1270;
    const double C1277 = C1272 / C1228;
    const double C1276 = C1239 * C1271;
    const double C1275 = C1239 * C1270;
    const double C1274 = -3 * C1269;
    const double C1273 = xAB * C1269;
    const double C1285 = C1254 * C1275;
    const double C1284 = C1279 / C1228;
    const double C1283 = C1278 / C1228;
    const double C1282 = C1251 - C1277;
    const double C1281 = C1274 / C1228;
    const double C1280 = C1273 / C1228;
    const double C1290 = C1285 * C1276;
    const double C1289 = C1261 - C1284;
    const double C1288 = C1259 - C1283;
    const double C1287 = C1239 * C1282;
    const double C1286 = C1255 - C1280;
    const double C1294 = C1289 * C1233;
    const double C1293 = C1288 * C1233;
    const double C1292 = C1286 * be;
    const double C1291 = C1286 * C1233;
    const double C1298 = C1239 * C1294;
    const double C1297 = C1239 * C1293;
    const double C1296 = C1239 * C1292;
    const double C1295 = xAB * C1291;
    const double C1301 = C1246 * C1296;
    const double C1300 = C1296 * C1275;
    const double C1299 = C1295 / C1228;
    const double C1304 = C1301 * C1276;
    const double C1303 = C1245 * C1300;
    const double C1302 = C1281 - C1299;
    const double C1306 = C1302 * be;
    const double C1305 = C1303 / C1242;
    const double C1307 = C1239 * C1306;
    const double C1322 = C1239 * 1;
    const double C1321 = yAB * C1293;
    const double C1320 = -3 * C1270;
    const double C1319 = C1239 * C1248;
    const double C1318 = C1239 * C1291;
    const double C1317 = C1267 * be;
    const double C1316 = 0 * be;
    const double C1315 = C1288 * be;
    const double C1314 = C1239 * C1269;
    const double C1313 = C1239 * C1311;
    const double C1328 = C1321 / C1228;
    const double C1327 = C1320 / C1228;
    const double C1326 = C1317 / C1228;
    const double C1325 = C1316 / C1228;
    const double C1324 = C1313 * C1314;
    const double C1323 = C1239 * C1315;
    const double C1333 = C1322 * C1323;
    const double C1332 = C1327 - C1328;
    const double C1331 = -C1325;
    const double C1330 = C1324 * C1276;
    const double C1329 = C1314 * C1323;
    const double C1337 = C1333 * C1276;
    const double C1336 = C1332 * be;
    const double C1335 = C1331 / C1234;
    const double C1334 = C1245 * C1329;
    const double C1340 = C1239 * C1336;
    const double C1339 = C1335 - C1326;
    const double C1338 = C1334 / C1242;
    const double C1341 = C1239 * C1339;
    const double C1355 = C1322 * C1275;
    const double C1354 = zAB * C1294;
    const double C1353 = -3 * C1271;
    const double C1352 = C1268 * be;
    const double C1351 = 0 * be;
    const double C1350 = C1289 * be;
    const double C1349 = C1246 * C1314;
    const double C1348 = C1314 * C1275;
    const double C1347 = C1239 * C1345;
    const double C1361 = C1354 / C1228;
    const double C1360 = C1353 / C1228;
    const double C1359 = C1352 / C1228;
    const double C1358 = C1351 / C1228;
    const double C1357 = C1239 * C1350;
    const double C1356 = C1347 * C1348;
    const double C1366 = C1355 * C1357;
    const double C1365 = C1360 - C1361;
    const double C1364 = -C1358;
    const double C1363 = C1349 * C1357;
    const double C1362 = C1356 / C1242;
    const double C1368 = C1365 * be;
    const double C1367 = C1364 / C1234;
    const double C1370 = C1239 * C1368;
    const double C1369 = C1367 - C1359;
    const double C1371 = C1239 * C1369;
    const double C1392 = C1365 * C1233;
    const double C1391 = C1228 * C1242;
    const double C1390 = C1332 * C1233;
    const double C1389 = C1302 * C1233;
    const double C1395 = C1239 * C1389;
    const double C1394 = C1239 * C1392;
    const double C1393 = C1239 * C1390;
    const double hxx100000 =
        (C1245 * C1246 * C1239 *
         ((-4 * C1291) / C1228 - (xAB * C1389) / C1228) * be) /
            C1234 -
        C1305 - C1304 / C1242;
    const double hxx010000 =
        (C1245 * C1313 * C1395) / C1234 - C1338 - C1330 / C1242;
    const double hxx001000 =
        (C1347 * C1246 * C1395) / C1234 - C1362 - C1363 / C1242;
    const double hxy100000 = (C1245 * C1287 * C1297) / C1234 -
                             (C1245 * C1307 * C1260) / C1242 -
                             (C1287 * C1260 * C1276) / C1242;
    const double hxy010000 = (C1245 * C1341 * C1318) / C1234 -
                             (C1245 * C1319 * C1340) / C1242 -
                             (C1341 * C1319 * C1276) / C1242;
    const double hxy001000 =
        (C1319 * C1260 * C1357) / C1391 -
        (C1347 * C1319 * C1297 + C1347 * C1318 * C1260) / C1242;
    const double hxz100000 =
        (C1287 * C1246 * C1298) / C1234 -
        (C1287 * C1275 * C1262 + C1246 * C1307 * C1262) / C1242;
    const double hxz010000 = (C1319 * C1323 * C1262) / C1391 -
                             (C1313 * C1318 * C1262) / C1242 -
                             (C1313 * C1319 * C1298) / C1242;
    const double hxz001000 = (C1371 * C1246 * C1318) / C1234 -
                             (C1371 * C1319 * C1275) / C1242 -
                             (C1246 * C1319 * C1370) / C1242;
    const double hyy100000 =
        (C1245 * C1254 * C1393) / C1234 - C1305 - C1290 / C1242;
    const double hyy010000 =
        (C1245 * C1322 * C1239 *
         ((-4 * C1293) / C1228 - (yAB * C1390) / C1228) * be) /
            C1234 -
        C1338 - C1337 / C1242;
    const double hyy001000 =
        (C1347 * C1322 * C1393) / C1234 - C1362 - C1366 / C1242;
    const double hyz100000 = (C1296 * C1260 * C1262) / C1391 -
                             (C1254 * C1297 * C1262) / C1242 -
                             (C1254 * C1260 * C1298) / C1242;
    const double hyz010000 =
        (C1322 * C1341 * C1298) / C1234 -
        (C1322 * C1340 * C1262 + C1341 * C1314 * C1262) / C1242;
    const double hyz001000 = (C1371 * C1322 * C1297) / C1234 -
                             (C1371 * C1314 * C1260) / C1242 -
                             (C1322 * C1260 * C1370) / C1242;
    const double hzz100000 =
        (C1254 * C1246 * C1394) / C1234 - (C1290 + C1304) / C1242;
    const double hzz010000 =
        (C1322 * C1313 * C1394) / C1234 - (C1337 + C1330) / C1242;
    const double hzz001000 =
        (C1322 * C1246 * C1239 *
         ((-4 * C1294) / C1228 - (zAB * C1392) / C1228) * be) /
            C1234 -
        (C1366 + C1363) / C1242;
    if (same_atom) {
        hxx[(Ai + 0) * matrix_size + Bi + 0] += cc * hxx100000;
        hxx[(Ai + 1) * matrix_size + Bi + 0] += cc * hxx010000;
        hxx[(Ai + 2) * matrix_size + Bi + 0] += cc * hxx001000;
        hxy[(Ai + 0) * matrix_size + Bi + 0] += cc * hxy100000;
        hxy[(Ai + 1) * matrix_size + Bi + 0] += cc * hxy010000;
        hxy[(Ai + 2) * matrix_size + Bi + 0] += cc * hxy001000;
        hxz[(Ai + 0) * matrix_size + Bi + 0] += cc * hxz100000;
        hxz[(Ai + 1) * matrix_size + Bi + 0] += cc * hxz010000;
        hxz[(Ai + 2) * matrix_size + Bi + 0] += cc * hxz001000;
        hyy[(Ai + 0) * matrix_size + Bi + 0] += cc * hyy100000;
        hyy[(Ai + 1) * matrix_size + Bi + 0] += cc * hyy010000;
        hyy[(Ai + 2) * matrix_size + Bi + 0] += cc * hyy001000;
        hyz[(Ai + 0) * matrix_size + Bi + 0] += cc * hyz100000;
        hyz[(Ai + 1) * matrix_size + Bi + 0] += cc * hyz010000;
        hyz[(Ai + 2) * matrix_size + Bi + 0] += cc * hyz001000;
        hzz[(Ai + 0) * matrix_size + Bi + 0] += cc * hzz100000;
        hzz[(Ai + 1) * matrix_size + Bi + 0] += cc * hzz010000;
        hzz[(Ai + 2) * matrix_size + Bi + 0] += cc * hzz001000;
    } else {
        hxx[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxx100000;
        hxx[(Ai + 1) * matrix_size + Bi + 0] -= cc * hxx010000;
        hxx[(Ai + 2) * matrix_size + Bi + 0] -= cc * hxx001000;
        hxy[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxy100000;
        hxy[(Ai + 1) * matrix_size + Bi + 0] -= cc * hxy010000;
        hxy[(Ai + 2) * matrix_size + Bi + 0] -= cc * hxy001000;
        hxz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxz100000;
        hxz[(Ai + 1) * matrix_size + Bi + 0] -= cc * hxz010000;
        hxz[(Ai + 2) * matrix_size + Bi + 0] -= cc * hxz001000;
        hyy[(Ai + 0) * matrix_size + Bi + 0] -= cc * hyy100000;
        hyy[(Ai + 1) * matrix_size + Bi + 0] -= cc * hyy010000;
        hyy[(Ai + 2) * matrix_size + Bi + 0] -= cc * hyy001000;
        hyz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hyz100000;
        hyz[(Ai + 1) * matrix_size + Bi + 0] -= cc * hyz010000;
        hyz[(Ai + 2) * matrix_size + Bi + 0] -= cc * hyz001000;
        hzz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hzz100000;
        hzz[(Ai + 1) * matrix_size + Bi + 0] -= cc * hzz010000;
        hzz[(Ai + 2) * matrix_size + Bi + 0] -= cc * hzz001000;
    }
}

// Automatically generated, do not edit
void kinetic_second_derivative_11(double ae,
                                  double be,
                                  double cc,
                                  double xAB,
                                  double yAB,
                                  double zAB,
                                  double* const hxx,
                                  double* const hxy,
                                  double* const hxz,
                                  double* const hyy,
                                  double* const hyz,
                                  double* const hzz,
                                  bool same_atom,
                                  std::size_t matrix_size,
                                  std::size_t Ai,
                                  std::size_t Bi)
{
    const double C1937 = ae + be;
    const double C1961 = zAB * be;
    const double C1960 = yAB * be;
    const double C1959 = zAB * ae;
    const double C1958 = yAB * ae;
    const double C1957 = std::pow(C1937, 2);
    const double C1956 = xAB * be;
    const double C1955 = 2 * C1937;
    const double C1954 = xAB * ae;
    const double C1962 = 1 / C1955;
    const double C1532 = C1954 / (ae + be);
    const double C1534 = C1962 - (C1954 * C1956) / C1957;
    const double C1659 = C1958 / C1937;
    const double C1661 = -C1956 / C1937;
    const double C1702 = C1959 / C1937;
    const double C1730 = -C1960 / C1937;
    const double C1759 = C1962 - (C1958 * C1960) / C1957;
    const double C1833 = -C1961 / C1937;
    const double C1870 = C1962 - (C1959 * C1961) / C1957;
    const double C1539 = 0 * ae;
    const double C1538 = 0 * be;
    const double C1537 = ae * be;
    const double C1536 = 0 * be;
    const double C1535 = ae + be;
    const double C1549 = C1539 / C1535;
    const double C1548 = xAB * C1536;
    const double C1547 = C1537 * zAB;
    const double C1546 = C1537 * yAB;
    const double C1545 = 2 * C1537;
    const double C1544 = C1537 * xAB;
    const double C1543 = 2 * C1535;
    const double C1542 = std::pow(C1535, 2);
    const double C1541 = -2 * C1536;
    const double C1540 = Pi / C1535;
    const double C1557 = C1548 / C1535;
    const double C1556 = C1547 * 1;
    const double C1555 = C1546 * 1;
    const double C1554 = 2 * C1542;
    const double C1553 = C1544 * 1;
    const double C1552 = C1542 * C1543;
    const double C1551 = ae * C1541;
    const double C1550 = std::sqrt(C1540);
    const double C1571 = C1550 * C1534;
    const double C1570 = -4 * C1556;
    const double C1569 = -4 * C1555;
    const double C1568 = C1553 / C1542;
    const double C1567 = C1538 / C1554;
    const double C1566 = 0 - C1557;
    const double C1565 = 2 * C1556;
    const double C1564 = C1550 * 1;
    const double C1563 = 2 * C1555;
    const double C1562 = C1536 / C1554;
    const double C1561 = 2 * C1553;
    const double C1560 = -4 * C1553;
    const double C1559 = C1551 / C1552;
    const double C1558 = C1550 * 1;
    const double C1581 = C1570 / C1535;
    const double C1580 = C1550 * C1565;
    const double C1579 = C1569 / C1535;
    const double C1578 = C1549 - C1568;
    const double C1577 = C1566 * ae;
    const double C1576 = C1550 * C1563;
    const double C1575 = zAB * C1565;
    const double C1574 = yAB * C1563;
    const double C1573 = xAB * C1561;
    const double C1572 = C1560 / C1535;
    const double C1585 = C1577 / C1535;
    const double C1584 = C1575 / C1535;
    const double C1583 = C1574 / C1535;
    const double C1582 = C1573 / C1535;
    const double C1589 = C1585 - C1567;
    const double C1588 = 1 - C1584;
    const double C1587 = 1 - C1583;
    const double C1586 = 1 - C1582;
    const double C1594 = C1589 / C1543;
    const double C1593 = C1588 * C1545;
    const double C1592 = C1587 * C1545;
    const double C1591 = C1586 * ae;
    const double C1590 = C1586 * C1545;
    const double C1602 = zAB * C1593;
    const double C1601 = yAB * C1592;
    const double C1600 = C1550 * C1593;
    const double C1599 = -3 * C1590;
    const double C1598 = C1550 * C1592;
    const double C1597 = C1590 / C1554;
    const double C1596 = C1591 / C1535;
    const double C1595 = xAB * C1590;
    const double C1608 = C1571 * C1598;
    const double C1607 = C1602 / C1535;
    const double C1606 = C1601 / C1535;
    const double C1605 = C1599 / C1535;
    const double C1604 = C1596 - C1562;
    const double C1603 = C1595 / C1535;
    const double C1614 = C1608 * C1600;
    const double C1613 = C1581 - C1607;
    const double C1612 = C1579 - C1606;
    const double C1611 = xAB * C1604;
    const double C1610 = 2 * C1604;
    const double C1609 = C1572 - C1603;
    const double C1620 = C1614 / C1554;
    const double C1619 = C1613 * C1545;
    const double C1618 = C1612 * C1545;
    const double C1617 = C1611 + C1532;
    const double C1616 = C1609 * C1545;
    const double C1615 = C1609 * ae;
    const double C1627 = C1550 * C1619;
    const double C1626 = C1550 * C1618;
    const double C1625 = C1617 * be;
    const double C1624 = 3 * C1615;
    const double C1623 = C1616 / C1535;
    const double C1622 = xAB * C1616;
    const double C1621 = xAB * C1615;
    const double C1631 = C1625 / C1535;
    const double C1630 = -C1623;
    const double C1629 = C1622 / C1535;
    const double C1628 = C1621 / C1535;
    const double C1635 = C1594 - C1631;
    const double C1634 = C1630 / C1543;
    const double C1633 = C1605 - C1629;
    const double C1632 = C1628 + C1610;
    const double C1639 = C1635 + C1578;
    const double C1638 = C1633 * ae;
    const double C1637 = C1633 * C1545;
    const double C1636 = C1632 * be;
    const double C1642 = C1550 * C1639;
    const double C1641 = xAB * C1638;
    const double C1640 = C1636 / C1535;
    const double C1644 = C1641 + C1624;
    const double C1643 = C1559 - C1640;
    const double C1646 = be * C1644;
    const double C1645 = C1643 - C1597;
    const double C1648 = C1646 / C1542;
    const double C1647 = C1550 * C1645;
    const double C1651 = C1634 - C1648;
    const double C1650 = C1647 * C1564;
    const double C1649 = C1647 * C1598;
    const double C1654 = C1550 * C1651;
    const double C1653 = C1650 * C1600;
    const double C1652 = C1558 * C1649;
    const double C1655 = C1653 / C1543;
    const double C1672 = C1550 * C1661;
    const double C1671 = yAB * C1618;
    const double C1670 = -3 * C1592;
    const double C1669 = C1586 * be;
    const double C1668 = C1536 / C1535;
    const double C1667 = C1633 * be;
    const double C1666 = 0 * be;
    const double C1665 = C1587 * ae;
    const double C1664 = C1609 * be;
    const double C1663 = C1612 * ae;
    const double C1662 = C1550 * C1659;
    const double C1681 = C1671 / C1535;
    const double C1680 = C1670 / C1535;
    const double C1679 = C1669 / C1535;
    const double C1678 = -C1668;
    const double C1677 = C1550 * C1667;
    const double C1676 = C1666 / C1554;
    const double C1675 = C1665 / C1535;
    const double C1674 = C1550 * C1664;
    const double C1673 = C1550 * C1663;
    const double C1687 = C1672 * C1673;
    const double C1686 = C1680 - C1681;
    const double C1685 = C1678 / C1543;
    const double C1684 = C1675 - C1676;
    const double C1683 = C1662 * C1674;
    const double C1682 = C1673 * C1674;
    const double C1693 = C1687 * C1600;
    const double C1692 = C1686 * ae;
    const double C1691 = C1685 - C1679;
    const double C1690 = C1550 * C1684;
    const double C1689 = C1683 * C1600;
    const double C1688 = C1558 * C1682;
    const double C1698 = C1693 / C1554;
    const double C1697 = C1550 * C1692;
    const double C1696 = C1550 * C1691;
    const double C1695 = C1689 / C1554;
    const double C1694 = C1688 / C1554;
    const double C1712 = C1672 * C1598;
    const double C1711 = zAB * C1619;
    const double C1710 = -3 * C1593;
    const double C1709 = 0 * be;
    const double C1708 = C1588 * ae;
    const double C1707 = C1564 * C1674;
    const double C1706 = C1613 * ae;
    const double C1705 = C1674 * C1598;
    const double C1704 = C1550 * C1702;
    const double C1718 = C1711 / C1535;
    const double C1717 = C1710 / C1535;
    const double C1716 = C1709 / C1554;
    const double C1715 = C1708 / C1535;
    const double C1714 = C1550 * C1706;
    const double C1713 = C1704 * C1705;
    const double C1723 = C1714 * C1712;
    const double C1722 = C1717 - C1718;
    const double C1721 = C1715 - C1716;
    const double C1720 = C1714 * C1707;
    const double C1719 = C1713 / C1554;
    const double C1725 = C1722 * ae;
    const double C1724 = C1550 * C1721;
    const double C1726 = C1550 * C1725;
    const double C1739 = C1550 * C1532;
    const double C1738 = C1550 * C1638;
    const double C1737 = C1587 * be;
    const double C1736 = C1666 / C1535;
    const double C1735 = C1686 * be;
    const double C1734 = C1550 * C1604;
    const double C1733 = C1550 * C1730;
    const double C1732 = C1612 * be;
    const double C1731 = C1550 * C1615;
    const double C1744 = C1737 / C1535;
    const double C1743 = -C1736;
    const double C1742 = C1550 * C1735;
    const double C1741 = C1733 * C1731;
    const double C1740 = C1550 * C1732;
    const double C1748 = C1739 * C1740;
    const double C1747 = C1743 / C1543;
    const double C1746 = C1741 * C1600;
    const double C1745 = C1731 * C1740;
    const double C1752 = C1748 * C1600;
    const double C1751 = C1747 - C1744;
    const double C1750 = C1746 / C1554;
    const double C1749 = C1558 * C1745;
    const double C1755 = C1752 / C1554;
    const double C1754 = C1550 * C1751;
    const double C1753 = C1749 / C1554;
    const double C1780 = C1686 * C1545;
    const double C1779 = C1550 * 1;
    const double C1778 = C1550 * C1561;
    const double C1777 = 3 * C1663;
    const double C1776 = yAB * C1692;
    const double C1775 = C1618 / C1535;
    const double C1774 = C1550 * C1616;
    const double C1773 = C1555 / C1542;
    const double C1772 = 0 * ae;
    const double C1771 = yAB * C1684;
    const double C1770 = 0 * be;
    const double C1769 = yAB * C1666;
    const double C1768 = C1550 * C1590;
    const double C1767 = C1592 / C1554;
    const double C1766 = 2 * C1684;
    const double C1765 = yAB * C1663;
    const double C1764 = -2 * C1666;
    const double C1763 = C1550 * C1759;
    const double C1789 = C1776 + C1777;
    const double C1788 = -C1775;
    const double C1787 = C1772 / C1535;
    const double C1786 = C1771 + C1659;
    const double C1785 = C1770 / C1554;
    const double C1784 = C1769 / C1535;
    const double C1783 = C1763 * C1768;
    const double C1782 = C1765 / C1535;
    const double C1781 = ae * C1764;
    const double C1797 = be * C1789;
    const double C1796 = C1788 / C1543;
    const double C1795 = C1787 - C1773;
    const double C1794 = C1786 * be;
    const double C1793 = 0 - C1784;
    const double C1792 = C1783 * C1600;
    const double C1791 = C1782 + C1766;
    const double C1790 = C1781 / C1552;
    const double C1802 = C1797 / C1542;
    const double C1801 = C1794 / C1535;
    const double C1800 = C1793 * ae;
    const double C1799 = C1792 / C1554;
    const double C1798 = C1791 * be;
    const double C1805 = C1796 - C1802;
    const double C1804 = C1800 / C1535;
    const double C1803 = C1798 / C1535;
    const double C1808 = C1550 * C1805;
    const double C1807 = C1804 - C1785;
    const double C1806 = C1790 - C1803;
    const double C1810 = C1807 / C1543;
    const double C1809 = C1806 - C1767;
    const double C1812 = C1810 - C1801;
    const double C1811 = C1550 * C1809;
    const double C1815 = C1779 * C1811;
    const double C1814 = C1812 + C1795;
    const double C1813 = C1811 * C1768;
    const double C1818 = C1815 * C1600;
    const double C1817 = C1550 * C1814;
    const double C1816 = C1558 * C1813;
    const double C1819 = C1818 / C1543;
    const double C1825 = C1779 * C1740;
    const double C1824 = C1733 * C1768;
    const double C1823 = C1768 * C1740;
    const double C1828 = C1714 * C1825;
    const double C1827 = C1714 * C1824;
    const double C1826 = C1704 * C1823;
    const double C1829 = C1826 / C1554;
    const double C1841 = C1739 * C1598;
    const double C1840 = C1722 * be;
    const double C1839 = C1588 * be;
    const double C1838 = C1709 / C1535;
    const double C1837 = C1613 * be;
    const double C1836 = C1564 * C1731;
    const double C1835 = C1731 * C1598;
    const double C1834 = C1550 * C1833;
    const double C1846 = C1550 * C1840;
    const double C1845 = C1839 / C1535;
    const double C1844 = -C1838;
    const double C1843 = C1550 * C1837;
    const double C1842 = C1834 * C1835;
    const double C1850 = C1841 * C1843;
    const double C1849 = C1844 / C1543;
    const double C1848 = C1836 * C1843;
    const double C1847 = C1842 / C1554;
    const double C1853 = C1850 / C1554;
    const double C1852 = C1849 - C1845;
    const double C1851 = C1848 / C1554;
    const double C1854 = C1550 * C1852;
    const double C1860 = C1779 * C1673;
    const double C1859 = C1662 * C1768;
    const double C1858 = C1673 * C1768;
    const double C1863 = C1860 * C1843;
    const double C1862 = C1859 * C1843;
    const double C1861 = C1834 * C1858;
    const double C1866 = C1863 / C1554;
    const double C1865 = C1862 / C1554;
    const double C1864 = C1861 / C1554;
    const double C1890 = C1722 * C1545;
    const double C1889 = C1779 * C1598;
    const double C1888 = 3 * C1706;
    const double C1887 = zAB * C1725;
    const double C1886 = C1619 / C1535;
    const double C1885 = C1556 / C1542;
    const double C1884 = 0 * ae;
    const double C1883 = zAB * C1721;
    const double C1882 = 0 * be;
    const double C1881 = zAB * C1709;
    const double C1880 = C1564 * C1768;
    const double C1879 = C1593 / C1554;
    const double C1878 = 2 * C1721;
    const double C1877 = zAB * C1706;
    const double C1876 = -2 * C1709;
    const double C1875 = C1768 * C1598;
    const double C1874 = C1550 * C1870;
    const double C1899 = C1887 + C1888;
    const double C1898 = -C1886;
    const double C1897 = C1884 / C1535;
    const double C1896 = C1883 + C1702;
    const double C1895 = C1882 / C1554;
    const double C1894 = C1881 / C1535;
    const double C1893 = C1877 / C1535;
    const double C1892 = ae * C1876;
    const double C1891 = C1874 * C1875;
    const double C1907 = be * C1899;
    const double C1906 = C1898 / C1543;
    const double C1905 = C1897 - C1885;
    const double C1904 = C1896 * be;
    const double C1903 = 0 - C1894;
    const double C1902 = C1893 + C1878;
    const double C1901 = C1892 / C1552;
    const double C1900 = C1891 / C1554;
    const double C1911 = C1907 / C1542;
    const double C1910 = C1904 / C1535;
    const double C1909 = C1903 * ae;
    const double C1908 = C1902 * be;
    const double C1914 = C1906 - C1911;
    const double C1913 = C1909 / C1535;
    const double C1912 = C1908 / C1535;
    const double C1917 = C1550 * C1914;
    const double C1916 = C1913 - C1895;
    const double C1915 = C1901 - C1912;
    const double C1919 = C1916 / C1543;
    const double C1918 = C1915 - C1879;
    const double C1921 = C1919 - C1910;
    const double C1920 = C1550 * C1918;
    const double C1924 = C1920 * C1889;
    const double C1923 = C1921 + C1905;
    const double C1922 = C1920 * C1880;
    const double C1925 = C1550 * C1923;
    const double C1975 = C1550 * C1637;
    const double C1974 = zAB * C1890;
    const double C1973 = -4 * C1619;
    const double C1972 = yAB * C1780;
    const double C1971 = -4 * C1618;
    const double C1970 = C1550 * C1890;
    const double C1969 = C1550 * C1780;
    const double C1968 = xAB * C1637;
    const double C1967 = -4 * C1616;
    const double C1981 = C1974 / C1535;
    const double C1980 = C1973 / C1535;
    const double C1979 = C1972 / C1535;
    const double C1978 = C1971 / C1535;
    const double C1977 = C1968 / C1535;
    const double C1976 = C1967 / C1535;
    const double C1984 = C1980 - C1981;
    const double C1983 = C1978 - C1979;
    const double C1982 = C1976 - C1977;
    const double C1990 = C1984 * be;
    const double C1989 = C1983 * be;
    const double C1988 = C1984 * ae;
    const double C1987 = C1983 * ae;
    const double C1986 = C1982 * be;
    const double C1985 = C1982 * ae;
    const double C1996 = C1550 * C1990;
    const double C1995 = C1550 * C1989;
    const double C1994 = C1550 * C1985;
    const double C1993 = C1550 * C1988;
    const double C1992 = C1550 * C1987;
    const double C1991 = C1550 * C1986;
    const double hxx100100 =
        C1652 / C1543 -
        (C1550 *
         ((-C1637 / C1535) / C1543 - (be * (xAB * C1985 + 4 * C1638)) / C1542) *
         C1564 * C1558) /
            2 +
        C1655;
    const double hxx100010 = (C1558 * C1662 * C1991) / C1543 + C1694 - C1695;
    const double hxx100001 =
        (C1704 * C1564 * C1991) / C1543 - C1719 + C1720 / C1554;
    const double hxx010100 = C1753 - (C1558 * C1733 * C1994) / C1543 + C1750;
    const double hxx010010 = (C1558 * C1763 * C1975 + C1816) / C1543 - C1799;
    const double hxx010001 =
        (C1704 * C1733 * C1975) / C1543 - C1829 + C1827 / C1554;
    const double hxx001100 = C1847 - (C1834 * C1564 * C1994) / C1543 + C1851;
    const double hxx001010 = (C1834 * C1662 * C1975) / C1543 + C1864 - C1865;
    const double hxx001001 =
        (C1874 * C1564 * C1975) / C1543 - C1900 + C1922 / C1543;
    const double hxy100100 =
        (C1558 * C1654 * C1576 + C1558 * C1642 * C1626) / C1543 -
        (C1642 * C1576 * C1600) / C1554;
    const double hxy100010 = (C1558 * C1690 * C1677) / C1543 -
                             (C1558 * C1696 * C1697) / C1543 +
                             (C1696 * C1690 * C1600) / C1543;
    const double hxy100001 = (C1704 * C1696 * C1626) / C1543 -
                             (C1704 * C1677 * C1576) / C1554 +
                             (C1714 * C1696 * C1576) / C1554;
    const double hxy010100 = (C1558 * C1734 * C1742) / C1543 -
                             (C1558 * C1754 * C1738) / C1543 +
                             (C1734 * C1754 * C1600) / C1543;
    const double hxy010010 =
        (C1558 * C1817 * C1774 + C1558 * C1808 * C1778) / C1543 -
        (C1817 * C1778 * C1600) / C1554;
    const double hxy010001 = (C1704 * C1754 * C1774) / C1543 -
                             (C1704 * C1778 * C1742) / C1554 +
                             (C1714 * C1754 * C1778) / C1554;
    const double hxy001100 = (C1834 * C1738 * C1576) / C1554 +
                             (C1834 * C1734 * C1626) / C1543 -
                             (C1734 * C1576 * C1843) / C1554;
    const double hxy001010 = (C1834 * C1690 * C1774) / C1543 +
                             (C1834 * C1697 * C1778) / C1554 -
                             (C1690 * C1778 * C1843) / C1554;
    const double hxy001001 = -(C1920 * C1778 * C1576 + C1874 * C1778 * C1626 +
                               C1874 * C1774 * C1576) /
                             C1554;
    const double hxz100100 = (C1654 * C1564 * C1580) / C1543 -
                             (C1642 * C1598 * C1580) / C1554 +
                             (C1642 * C1564 * C1627) / C1543;
    const double hxz100010 = (C1696 * C1673 * C1580) / C1554 -
                             (C1662 * C1677 * C1580) / C1554 +
                             (C1696 * C1662 * C1627) / C1543;
    const double hxz100001 =
        (C1724 * C1564 * C1677 + C1724 * C1696 * C1598) / C1543 -
        (C1696 * C1564 * C1726) / C1543;
    const double hxz010100 = (C1733 * C1738 * C1580) / C1554 -
                             (C1734 * C1740 * C1580) / C1554 +
                             (C1734 * C1733 * C1627) / C1543;
    const double hxz010010 = -(C1763 * C1778 * C1627 + C1811 * C1778 * C1580 +
                               C1763 * C1774 * C1580) /
                             C1554;
    const double hxz010001 = (C1724 * C1733 * C1774) / C1543 -
                             (C1724 * C1778 * C1740) / C1554 +
                             (C1726 * C1733 * C1778) / C1554;
    const double hxz001100 = (C1854 * C1734 * C1598) / C1543 -
                             (C1854 * C1564 * C1738) / C1543 +
                             (C1734 * C1564 * C1846) / C1543;
    const double hxz001010 = (C1854 * C1662 * C1774) / C1543 +
                             (C1854 * C1673 * C1778) / C1554 -
                             (C1662 * C1778 * C1846) / C1554;
    const double hxz001001 = (C1925 * C1564 * C1774) / C1543 -
                             (C1925 * C1778 * C1598) / C1554 +
                             (C1917 * C1564 * C1778) / C1543;
    const double hyy100100 = (C1652 + C1558 * C1571 * C1969) / C1543 - C1620;
    const double hyy100010 = C1694 - (C1558 * C1672 * C1992) / C1543 + C1698;
    const double hyy100001 =
        (C1704 * C1672 * C1969) / C1543 - C1719 + C1723 / C1554;
    const double hyy010100 = C1753 + (C1558 * C1739 * C1995) / C1543 - C1755;
    const double hyy010010 =
        C1816 / C1543 -
        (C1779 * C1550 *
         ((-C1780 / C1535) / C1543 - (be * (yAB * C1987 + 4 * C1692)) / C1542) *
         C1558) /
            2 +
        C1819;
    const double hyy010001 =
        (C1704 * C1779 * C1995) / C1543 - C1829 + C1828 / C1554;
    const double hyy001100 = C1847 + (C1834 * C1739 * C1969) / C1543 - C1853;
    const double hyy001010 = C1864 - (C1834 * C1779 * C1992) / C1543 + C1866;
    const double hyy001001 =
        (C1874 * C1779 * C1969) / C1543 - C1900 + C1924 / C1543;
    const double hyz100100 = -(C1571 * C1576 * C1627 + C1571 * C1626 * C1580 +
                               C1647 * C1576 * C1580) /
                             C1554;
    const double hyz100010 = (C1672 * C1697 * C1580) / C1554 -
                             (C1690 * C1674 * C1580) / C1554 +
                             (C1672 * C1690 * C1627) / C1543;
    const double hyz100001 = (C1724 * C1672 * C1626) / C1543 -
                             (C1724 * C1674 * C1576) / C1554 +
                             (C1726 * C1672 * C1576) / C1554;
    const double hyz010100 = (C1754 * C1731 * C1580) / C1554 -
                             (C1739 * C1742 * C1580) / C1554 +
                             (C1739 * C1754 * C1627) / C1543;
    const double hyz010010 = (C1779 * C1808 * C1580) / C1543 -
                             (C1817 * C1768 * C1580) / C1554 +
                             (C1779 * C1817 * C1627) / C1543;
    const double hyz010001 =
        (C1724 * C1754 * C1768 + C1724 * C1779 * C1742) / C1543 -
        (C1779 * C1754 * C1726) / C1543;
    const double hyz001100 = (C1854 * C1731 * C1576) / C1554 +
                             (C1854 * C1739 * C1626) / C1543 -
                             (C1739 * C1576 * C1846) / C1554;
    const double hyz001010 = (C1854 * C1690 * C1768) / C1543 -
                             (C1854 * C1779 * C1697) / C1543 +
                             (C1779 * C1690 * C1846) / C1543;
    const double hyz001001 = (C1925 * C1779 * C1626) / C1543 -
                             (C1925 * C1768 * C1576) / C1554 +
                             (C1917 * C1779 * C1576) / C1543;
    const double hzz100100 = C1655 - C1620 + (C1571 * C1564 * C1970) / C1543;
    const double hzz100010 = C1698 - C1695 + (C1672 * C1662 * C1970) / C1543;
    const double hzz100001 =
        (C1720 + C1723) / C1554 - (C1672 * C1564 * C1993) / C1543;
    const double hzz010100 = C1750 - C1755 + (C1739 * C1733 * C1970) / C1543;
    const double hzz010010 = C1819 - C1799 + (C1779 * C1763 * C1970) / C1543;
    const double hzz010001 =
        (C1827 + C1828) / C1554 - (C1779 * C1733 * C1993) / C1543;
    const double hzz001100 = C1851 - C1853 + (C1739 * C1564 * C1996) / C1543;
    const double hzz001010 = C1866 - C1865 + (C1779 * C1662 * C1996) / C1543;
    const double hzz001001 =
        (C1922 + C1924) / C1543 - (C1779 * C1564 * C1550 *
                                   ((-C1890 / C1535) / C1543 -
                                    (be * (zAB * C1988 + 4 * C1725)) / C1542)) /
                                      2;
    if (same_atom) {
        hxx[(Ai + 0) * matrix_size + Bi + 0] += cc * hxx100100;
        hxx[(Ai + 0) * matrix_size + Bi + 1] += cc * hxx100010;
        hxx[(Ai + 0) * matrix_size + Bi + 2] += cc * hxx100001;
        hxx[(Ai + 1) * matrix_size + Bi + 0] += cc * hxx010100;
        hxx[(Ai + 1) * matrix_size + Bi + 1] += cc * hxx010010;
        hxx[(Ai + 1) * matrix_size + Bi + 2] += cc * hxx010001;
        hxx[(Ai + 2) * matrix_size + Bi + 0] += cc * hxx001100;
        hxx[(Ai + 2) * matrix_size + Bi + 1] += cc * hxx001010;
        hxx[(Ai + 2) * matrix_size + Bi + 2] += cc * hxx001001;
        hxy[(Ai + 0) * matrix_size + Bi + 0] += cc * hxy100100;
        hxy[(Ai + 0) * matrix_size + Bi + 1] += cc * hxy100010;
        hxy[(Ai + 0) * matrix_size + Bi + 2] += cc * hxy100001;
        hxy[(Ai + 1) * matrix_size + Bi + 0] += cc * hxy010100;
        hxy[(Ai + 1) * matrix_size + Bi + 1] += cc * hxy010010;
        hxy[(Ai + 1) * matrix_size + Bi + 2] += cc * hxy010001;
        hxy[(Ai + 2) * matrix_size + Bi + 0] += cc * hxy001100;
        hxy[(Ai + 2) * matrix_size + Bi + 1] += cc * hxy001010;
        hxy[(Ai + 2) * matrix_size + Bi + 2] += cc * hxy001001;
        hxz[(Ai + 0) * matrix_size + Bi + 0] += cc * hxz100100;
        hxz[(Ai + 0) * matrix_size + Bi + 1] += cc * hxz100010;
        hxz[(Ai + 0) * matrix_size + Bi + 2] += cc * hxz100001;
        hxz[(Ai + 1) * matrix_size + Bi + 0] += cc * hxz010100;
        hxz[(Ai + 1) * matrix_size + Bi + 1] += cc * hxz010010;
        hxz[(Ai + 1) * matrix_size + Bi + 2] += cc * hxz010001;
        hxz[(Ai + 2) * matrix_size + Bi + 0] += cc * hxz001100;
        hxz[(Ai + 2) * matrix_size + Bi + 1] += cc * hxz001010;
        hxz[(Ai + 2) * matrix_size + Bi + 2] += cc * hxz001001;
        hyy[(Ai + 0) * matrix_size + Bi + 0] += cc * hyy100100;
        hyy[(Ai + 0) * matrix_size + Bi + 1] += cc * hyy100010;
        hyy[(Ai + 0) * matrix_size + Bi + 2] += cc * hyy100001;
        hyy[(Ai + 1) * matrix_size + Bi + 0] += cc * hyy010100;
        hyy[(Ai + 1) * matrix_size + Bi + 1] += cc * hyy010010;
        hyy[(Ai + 1) * matrix_size + Bi + 2] += cc * hyy010001;
        hyy[(Ai + 2) * matrix_size + Bi + 0] += cc * hyy001100;
        hyy[(Ai + 2) * matrix_size + Bi + 1] += cc * hyy001010;
        hyy[(Ai + 2) * matrix_size + Bi + 2] += cc * hyy001001;
        hyz[(Ai + 0) * matrix_size + Bi + 0] += cc * hyz100100;
        hyz[(Ai + 0) * matrix_size + Bi + 1] += cc * hyz100010;
        hyz[(Ai + 0) * matrix_size + Bi + 2] += cc * hyz100001;
        hyz[(Ai + 1) * matrix_size + Bi + 0] += cc * hyz010100;
        hyz[(Ai + 1) * matrix_size + Bi + 1] += cc * hyz010010;
        hyz[(Ai + 1) * matrix_size + Bi + 2] += cc * hyz010001;
        hyz[(Ai + 2) * matrix_size + Bi + 0] += cc * hyz001100;
        hyz[(Ai + 2) * matrix_size + Bi + 1] += cc * hyz001010;
        hyz[(Ai + 2) * matrix_size + Bi + 2] += cc * hyz001001;
        hzz[(Ai + 0) * matrix_size + Bi + 0] += cc * hzz100100;
        hzz[(Ai + 0) * matrix_size + Bi + 1] += cc * hzz100010;
        hzz[(Ai + 0) * matrix_size + Bi + 2] += cc * hzz100001;
        hzz[(Ai + 1) * matrix_size + Bi + 0] += cc * hzz010100;
        hzz[(Ai + 1) * matrix_size + Bi + 1] += cc * hzz010010;
        hzz[(Ai + 1) * matrix_size + Bi + 2] += cc * hzz010001;
        hzz[(Ai + 2) * matrix_size + Bi + 0] += cc * hzz001100;
        hzz[(Ai + 2) * matrix_size + Bi + 1] += cc * hzz001010;
        hzz[(Ai + 2) * matrix_size + Bi + 2] += cc * hzz001001;
    } else {
        hxx[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxx100100;
        hxx[(Ai + 0) * matrix_size + Bi + 1] -= cc * hxx100010;
        hxx[(Ai + 0) * matrix_size + Bi + 2] -= cc * hxx100001;
        hxx[(Ai + 1) * matrix_size + Bi + 0] -= cc * hxx010100;
        hxx[(Ai + 1) * matrix_size + Bi + 1] -= cc * hxx010010;
        hxx[(Ai + 1) * matrix_size + Bi + 2] -= cc * hxx010001;
        hxx[(Ai + 2) * matrix_size + Bi + 0] -= cc * hxx001100;
        hxx[(Ai + 2) * matrix_size + Bi + 1] -= cc * hxx001010;
        hxx[(Ai + 2) * matrix_size + Bi + 2] -= cc * hxx001001;
        hxy[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxy100100;
        hxy[(Ai + 0) * matrix_size + Bi + 1] -= cc * hxy100010;
        hxy[(Ai + 0) * matrix_size + Bi + 2] -= cc * hxy100001;
        hxy[(Ai + 1) * matrix_size + Bi + 0] -= cc * hxy010100;
        hxy[(Ai + 1) * matrix_size + Bi + 1] -= cc * hxy010010;
        hxy[(Ai + 1) * matrix_size + Bi + 2] -= cc * hxy010001;
        hxy[(Ai + 2) * matrix_size + Bi + 0] -= cc * hxy001100;
        hxy[(Ai + 2) * matrix_size + Bi + 1] -= cc * hxy001010;
        hxy[(Ai + 2) * matrix_size + Bi + 2] -= cc * hxy001001;
        hxz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hxz100100;
        hxz[(Ai + 0) * matrix_size + Bi + 1] -= cc * hxz100010;
        hxz[(Ai + 0) * matrix_size + Bi + 2] -= cc * hxz100001;
        hxz[(Ai + 1) * matrix_size + Bi + 0] -= cc * hxz010100;
        hxz[(Ai + 1) * matrix_size + Bi + 1] -= cc * hxz010010;
        hxz[(Ai + 1) * matrix_size + Bi + 2] -= cc * hxz010001;
        hxz[(Ai + 2) * matrix_size + Bi + 0] -= cc * hxz001100;
        hxz[(Ai + 2) * matrix_size + Bi + 1] -= cc * hxz001010;
        hxz[(Ai + 2) * matrix_size + Bi + 2] -= cc * hxz001001;
        hyy[(Ai + 0) * matrix_size + Bi + 0] -= cc * hyy100100;
        hyy[(Ai + 0) * matrix_size + Bi + 1] -= cc * hyy100010;
        hyy[(Ai + 0) * matrix_size + Bi + 2] -= cc * hyy100001;
        hyy[(Ai + 1) * matrix_size + Bi + 0] -= cc * hyy010100;
        hyy[(Ai + 1) * matrix_size + Bi + 1] -= cc * hyy010010;
        hyy[(Ai + 1) * matrix_size + Bi + 2] -= cc * hyy010001;
        hyy[(Ai + 2) * matrix_size + Bi + 0] -= cc * hyy001100;
        hyy[(Ai + 2) * matrix_size + Bi + 1] -= cc * hyy001010;
        hyy[(Ai + 2) * matrix_size + Bi + 2] -= cc * hyy001001;
        hyz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hyz100100;
        hyz[(Ai + 0) * matrix_size + Bi + 1] -= cc * hyz100010;
        hyz[(Ai + 0) * matrix_size + Bi + 2] -= cc * hyz100001;
        hyz[(Ai + 1) * matrix_size + Bi + 0] -= cc * hyz010100;
        hyz[(Ai + 1) * matrix_size + Bi + 1] -= cc * hyz010010;
        hyz[(Ai + 1) * matrix_size + Bi + 2] -= cc * hyz010001;
        hyz[(Ai + 2) * matrix_size + Bi + 0] -= cc * hyz001100;
        hyz[(Ai + 2) * matrix_size + Bi + 1] -= cc * hyz001010;
        hyz[(Ai + 2) * matrix_size + Bi + 2] -= cc * hyz001001;
        hzz[(Ai + 0) * matrix_size + Bi + 0] -= cc * hzz100100;
        hzz[(Ai + 0) * matrix_size + Bi + 1] -= cc * hzz100010;
        hzz[(Ai + 0) * matrix_size + Bi + 2] -= cc * hzz100001;
        hzz[(Ai + 1) * matrix_size + Bi + 0] -= cc * hzz010100;
        hzz[(Ai + 1) * matrix_size + Bi + 1] -= cc * hzz010010;
        hzz[(Ai + 1) * matrix_size + Bi + 2] -= cc * hzz010001;
        hzz[(Ai + 2) * matrix_size + Bi + 0] -= cc * hzz001100;
        hzz[(Ai + 2) * matrix_size + Bi + 1] -= cc * hzz001010;
        hzz[(Ai + 2) * matrix_size + Bi + 2] -= cc * hzz001001;
    }
}

// Automatically generated, do not edit
void kinetic_second_derivative_12(double ae,
                                  double be,
                                  double cc,
                                  double xAB,
                                  double yAB,
                                  double zAB,
                                  double* const hxx,
                                  double* const hxy,
                                  double* const hxz,
                                  double* const hyy,
                                  double* const hyz,
                                  double* const hzz,
                                  bool same_atom,
                                  std::size_t matrix_size,
                                  std::size_t Ai,
                                  std::size_t Bi)
{
    const double C3847 = ae + be;
    const double C3852 = xAB * be;
    const double C3851 = xAB * ae;
    const double C3850 = 2 * C3847;
    const double C3870 = yAB * be;
    const double C3869 = yAB * ae;
    const double C3879 = zAB * be;
    const double C3878 = zAB * ae;
    const double C3895 = C3878 * C3879;
    const double C3894 = std::pow(C3850, -1);
    const double C3893 = C3869 * C3870;
    const double C3892 = zAB * ae;
    const double C3891 = yAB * ae;
    const double C3890 = C3852 / C3847;
    const double C3889 = 1 / C3850;
    const double C3888 = std::pow(C3847, 2);
    const double C3887 = 2 * C3847;
    const double C3886 = xAB * ae;
    const double C3897 = C3895 / C3888;
    const double C3896 = C3893 / C3888;
    const double C3899 = C3889 - C3897;
    const double C3898 = C3889 - C3896;
    const double C3032 = C3886 / (ae + be);
    const double C3038 = 1 / C3887 - (C3886 * xAB * be) / C3888;
    const double C3039 = std::pow(C3887, -1);
    const double C3040 = ((C3889 - (C3851 * C3852) / C3888) * C3851) / C3847 +
                         (C3851 / C3847 - C3890) / C3850;
    const double C3244 = std::pow(C3891, 2) / C3888 + C3889;
    const double C3248 = C3891 / C3847;
    const double C3250 = -C3890;
    const double C3328 = std::pow(C3892, 2) / C3888 + C3889;
    const double C3332 = C3892 / C3847;
    const double C3445 = -(yAB * be) / C3847;
    const double C3446 = std::pow(C3851, 2) / C3888 + C3889;
    const double C3486 =
        (C3898 * C3869) / C3847 + (C3869 / C3847 - C3870 / C3847) / C3850;
    const double C3653 = -(zAB * be) / C3847;
    const double C3688 =
        (C3899 * C3878) / C3847 + (C3878 / C3847 - C3879 / C3847) / C3850;
    const double C3046 = 0 * be;
    const double C3045 = 0 * ae;
    const double C3044 = ae * be;
    const double C3043 = 0 * be;
    const double C3042 = 0 * be;
    const double C3041 = ae + be;
    const double C3060 = C3043 / C3041;
    const double C3059 = xAB * C3042;
    const double C3058 = std::pow(C3041, 3);
    const double C3057 = C3044 * zAB;
    const double C3056 = C3044 * yAB;
    const double C3055 = C3045 / C3041;
    const double C3054 = 2 * C3044;
    const double C3053 = C3044 * xAB;
    const double C3052 = xAB * C3043;
    const double C3051 = -2 * C3043;
    const double C3050 = 2 * C3041;
    const double C3049 = std::pow(C3041, 2);
    const double C3048 = -2 * C3042;
    const double C3047 = Pi / C3041;
    const double C3071 = C3059 / C3041;
    const double C3070 = C3058 * C3050;
    const double C3069 = C3057 * 1;
    const double C3068 = C3056 * 1;
    const double C3067 = C3053 * 1;
    const double C3066 = 2 * C3049;
    const double C3065 = C3052 / C3041;
    const double C3064 = ae * C3051;
    const double C3063 = C3049 * C3050;
    const double C3062 = ae * C3048;
    const double C3061 = std::sqrt(C3047);
    const double C3090 = C3061 * C3040;
    const double C3089 = -4 * C3069;
    const double C3088 = -4 * C3068;
    const double C3087 = C3046 / C3066;
    const double C3086 = 0 - C3071;
    const double C3085 = 3 * C3064;
    const double C3084 = 2 * C3069;
    const double C3083 = C3061 * 1;
    const double C3082 = 2 * C3068;
    const double C3081 = C3067 / C3049;
    const double C3080 = C3043 / C3066;
    const double C3079 = 2 * C3067;
    const double C3078 = -4 * C3067;
    const double C3077 = C3064 / C3063;
    const double C3076 = C3042 / C3066;
    const double C3075 = 0 - C3065;
    const double C3074 = xAB * C3064;
    const double C3073 = C3062 / C3063;
    const double C3072 = C3061 * 1;
    const double C3103 = C3089 / C3041;
    const double C3102 = C3061 * C3084;
    const double C3101 = C3088 / C3041;
    const double C3100 = C3086 * ae;
    const double C3099 = C3061 * C3082;
    const double C3098 = be * C3085;
    const double C3097 = zAB * C3084;
    const double C3096 = yAB * C3082;
    const double C3095 = C3055 - C3081;
    const double C3094 = xAB * C3079;
    const double C3093 = C3078 / C3041;
    const double C3092 = C3075 * ae;
    const double C3091 = C3074 / C3049;
    const double C3111 = xAB * C3095;
    const double C3110 = C3100 / C3041;
    const double C3109 = C3098 / C3070;
    const double C3108 = C3097 / C3041;
    const double C3107 = C3096 / C3041;
    const double C3106 = 2 * C3095;
    const double C3105 = C3094 / C3041;
    const double C3104 = C3092 / C3041;
    const double C3117 = C3111 + C3039;
    const double C3116 = C3110 - C3087;
    const double C3115 = 1 - C3108;
    const double C3114 = 1 - C3107;
    const double C3113 = 1 - C3105;
    const double C3112 = C3104 - C3076;
    const double C3126 = C3117 * be;
    const double C3125 = xAB * C3112;
    const double C3124 = C3116 + C3060;
    const double C3123 = C3115 * C3054;
    const double C3122 = C3114 * C3054;
    const double C3121 = C3112 / C3050;
    const double C3120 = C3113 * ae;
    const double C3119 = C3113 * C3054;
    const double C3118 = 2 * C3112;
    const double C3138 = zAB * C3123;
    const double C3137 = yAB * C3122;
    const double C3136 = C3126 / C3041;
    const double C3135 = C3125 + 0;
    const double C3134 = C3124 / C3050;
    const double C3133 = C3061 * C3123;
    const double C3132 = -3 * C3119;
    const double C3131 = C3061 * C3122;
    const double C3130 = C3119 / C3066;
    const double C3129 = C3120 / C3041;
    const double C3128 = xAB * C3119;
    const double C3127 = C3091 + C3118;
    const double C3148 = C3090 * C3131;
    const double C3147 = C3138 / C3041;
    const double C3146 = C3137 / C3041;
    const double C3145 = C3135 * be;
    const double C3144 = C3132 / C3066;
    const double C3143 = C3132 / C3041;
    const double C3142 = C3128 / C3066;
    const double C3141 = C3129 - C3080;
    const double C3140 = C3128 / C3041;
    const double C3139 = C3127 * be;
    const double C3158 = C3148 * C3133;
    const double C3157 = C3103 - C3147;
    const double C3156 = C3101 - C3146;
    const double C3155 = C3141 / C3050;
    const double C3154 = C3145 / C3041;
    const double C3153 = C3106 - C3142;
    const double C3152 = xAB * C3141;
    const double C3151 = 2 * C3141;
    const double C3150 = C3093 - C3140;
    const double C3149 = C3139 / C3041;
    const double C3168 = C3158 / C3066;
    const double C3167 = C3157 * C3054;
    const double C3166 = C3156 * C3054;
    const double C3165 = C3155 - C3136;
    const double C3164 = C3134 - C3154;
    const double C3163 = C3150 * C3054;
    const double C3162 = C3153 * be;
    const double C3161 = C3152 + C3032;
    const double C3160 = C3150 * ae;
    const double C3159 = C3073 - C3149;
    const double C3180 = C3061 * C3167;
    const double C3179 = C3061 * C3166;
    const double C3178 = C3164 / C3050;
    const double C3177 = 3 * C3160;
    const double C3176 = C3163 / C3041;
    const double C3175 = -4 * C3163;
    const double C3174 = xAB * C3163;
    const double C3173 = C3162 / C3041;
    const double C3172 = C3160 / C3066;
    const double C3171 = C3161 * be;
    const double C3170 = xAB * C3160;
    const double C3169 = C3159 / C3050;
    const double C3187 = C3174 / C3066;
    const double C3186 = -C3176;
    const double C3185 = C3175 / C3041;
    const double C3184 = C3174 / C3041;
    const double C3183 = C3172 - C3173;
    const double C3182 = C3171 / C3041;
    const double C3181 = C3170 / C3041;
    const double C3192 = C3144 - C3187;
    const double C3191 = C3186 / C3050;
    const double C3190 = C3143 - C3184;
    const double C3189 = C3121 - C3182;
    const double C3188 = C3181 + C3151;
    const double C3197 = C3192 * be;
    const double C3196 = C3190 * ae;
    const double C3195 = C3190 * C3054;
    const double C3194 = C3189 + C3095;
    const double C3193 = C3188 * be;
    const double C3204 = xAB * C3194;
    const double C3203 = C3197 / C3041;
    const double C3202 = C3196 / C3066;
    const double C3201 = xAB * C3196;
    const double C3200 = xAB * C3195;
    const double C3199 = 2 * C3194;
    const double C3198 = C3193 / C3041;
    const double C3209 = C3204 + C3038;
    const double C3208 = C3202 - C3203;
    const double C3207 = C3201 + C3177;
    const double C3206 = C3200 / C3041;
    const double C3205 = C3077 - C3198;
    const double C3213 = C3209 * ae;
    const double C3212 = be * C3207;
    const double C3211 = C3185 - C3206;
    const double C3210 = C3205 - C3130;
    const double C3218 = C3213 / C3041;
    const double C3217 = 3 * C3210;
    const double C3216 = C3212 / C3049;
    const double C3215 = C3211 * ae;
    const double C3214 = xAB * C3210;
    const double C3221 = C3178 + C3218;
    const double C3220 = C3191 - C3216;
    const double C3219 = C3214 + C3199;
    const double C3224 = C3221 + C3165;
    const double C3223 = xAB * C3220;
    const double C3222 = C3219 * ae;
    const double C3227 = C3061 * C3224;
    const double C3226 = C3223 + C3217;
    const double C3225 = C3222 / C3041;
    const double C3229 = C3226 * ae;
    const double C3228 = C3169 + C3225;
    const double C3231 = C3229 / C3041;
    const double C3230 = C3228 + C3183;
    const double C3233 = C3231 - C3109;
    const double C3232 = C3061 * C3230;
    const double C3236 = C3233 + C3208;
    const double C3235 = C3232 * C3083;
    const double C3234 = C3232 * C3131;
    const double C3239 = C3061 * C3236;
    const double C3238 = C3235 * C3133;
    const double C3237 = C3072 * C3234;
    const double C3240 = C3238 / C3050;
    const double C3266 = C3061 * C3250;
    const double C3265 = C3166 / C3066;
    const double C3264 = yAB * C3166;
    const double C3263 = -3 * C3122;
    const double C3262 = C3113 * be;
    const double C3261 = -C3060;
    const double C3260 = C3190 * be;
    const double C3259 = C3068 / C3049;
    const double C3258 = 0 * ae;
    const double C3257 = 0 * be;
    const double C3256 = C3150 * be;
    const double C3255 = C3122 / C3066;
    const double C3254 = C3114 * ae;
    const double C3253 = C3156 * ae;
    const double C3252 = 0 * be;
    const double C3251 = C3061 * C3244;
    const double C3280 = 3 * C3253;
    const double C3279 = C3264 / C3041;
    const double C3278 = C3263 / C3041;
    const double C3277 = C3262 / C3041;
    const double C3276 = C3261 / C3050;
    const double C3275 = C3061 * C3260;
    const double C3274 = C3258 / C3041;
    const double C3273 = C3257 / C3066;
    const double C3272 = yAB * C3252;
    const double C3271 = C3061 * C3256;
    const double C3270 = C3252 / C3066;
    const double C3269 = C3254 / C3041;
    const double C3268 = yAB * C3253;
    const double C3267 = -2 * C3252;
    const double C3288 = C3278 - C3279;
    const double C3287 = C3276 - C3277;
    const double C3286 = C3274 - C3259;
    const double C3285 = C3272 / C3041;
    const double C3284 = C3251 * C3271;
    const double C3283 = C3269 - C3270;
    const double C3282 = C3268 / C3041;
    const double C3281 = ae * C3267;
    const double C3296 = C3288 * C3054;
    const double C3295 = C3288 * ae;
    const double C3294 = C3061 * C3287;
    const double C3293 = yAB * C3283;
    const double C3292 = 0 - C3285;
    const double C3291 = C3284 * C3133;
    const double C3290 = 2 * C3283;
    const double C3289 = C3281 / C3063;
    const double C3301 = yAB * C3295;
    const double C3300 = C3293 + C3248;
    const double C3299 = C3292 * ae;
    const double C3298 = C3291 / C3066;
    const double C3297 = C3282 + C3290;
    const double C3305 = C3301 + C3280;
    const double C3304 = C3300 * ae;
    const double C3303 = C3299 / C3041;
    const double C3302 = C3297 * ae;
    const double C3309 = ae * C3305;
    const double C3308 = C3304 / C3041;
    const double C3307 = C3303 - C3273;
    const double C3306 = C3302 / C3041;
    const double C3312 = C3309 / C3049;
    const double C3311 = C3307 / C3050;
    const double C3310 = C3289 + C3306;
    const double C3315 = C3312 - C3265;
    const double C3314 = C3311 + C3308;
    const double C3313 = C3310 - C3255;
    const double C3318 = C3061 * C3315;
    const double C3317 = C3314 + C3286;
    const double C3316 = C3061 * C3313;
    const double C3321 = C3266 * C3316;
    const double C3320 = C3061 * C3317;
    const double C3319 = C3316 * C3271;
    const double C3323 = C3321 * C3133;
    const double C3322 = C3072 * C3319;
    const double C3324 = C3323 / C3050;
    const double C3347 = C3266 * C3131;
    const double C3346 = C3167 / C3066;
    const double C3345 = zAB * C3167;
    const double C3344 = -3 * C3123;
    const double C3343 = C3069 / C3049;
    const double C3342 = 0 * ae;
    const double C3341 = 0 * be;
    const double C3340 = C3083 * C3271;
    const double C3339 = C3123 / C3066;
    const double C3338 = C3115 * ae;
    const double C3337 = C3157 * ae;
    const double C3336 = 0 * be;
    const double C3335 = C3271 * C3131;
    const double C3334 = C3061 * C3328;
    const double C3358 = 3 * C3337;
    const double C3357 = C3345 / C3041;
    const double C3356 = C3344 / C3041;
    const double C3355 = C3342 / C3041;
    const double C3354 = C3341 / C3066;
    const double C3353 = zAB * C3336;
    const double C3352 = C3336 / C3066;
    const double C3351 = C3338 / C3041;
    const double C3350 = zAB * C3337;
    const double C3349 = -2 * C3336;
    const double C3348 = C3334 * C3335;
    const double C3365 = C3356 - C3357;
    const double C3364 = C3355 - C3343;
    const double C3363 = C3353 / C3041;
    const double C3362 = C3351 - C3352;
    const double C3361 = C3350 / C3041;
    const double C3360 = ae * C3349;
    const double C3359 = C3348 / C3066;
    const double C3371 = C3365 * C3054;
    const double C3370 = C3365 * ae;
    const double C3369 = zAB * C3362;
    const double C3368 = 0 - C3363;
    const double C3367 = 2 * C3362;
    const double C3366 = C3360 / C3063;
    const double C3375 = zAB * C3370;
    const double C3374 = C3369 + C3332;
    const double C3373 = C3368 * ae;
    const double C3372 = C3361 + C3367;
    const double C3379 = C3375 + C3358;
    const double C3378 = C3374 * ae;
    const double C3377 = C3373 / C3041;
    const double C3376 = C3372 * ae;
    const double C3383 = ae * C3379;
    const double C3382 = C3378 / C3041;
    const double C3381 = C3377 - C3354;
    const double C3380 = C3376 / C3041;
    const double C3386 = C3383 / C3049;
    const double C3385 = C3381 / C3050;
    const double C3384 = C3366 + C3380;
    const double C3389 = C3386 - C3346;
    const double C3388 = C3385 + C3382;
    const double C3387 = C3384 - C3339;
    const double C3392 = C3061 * C3389;
    const double C3391 = C3388 + C3364;
    const double C3390 = C3061 * C3387;
    const double C3395 = C3390 * C3347;
    const double C3394 = C3061 * C3391;
    const double C3393 = C3390 * C3340;
    const double C3406 = C3061 * C3038;
    const double C3405 = C3061 * C3220;
    const double C3404 = C3061 * C3295;
    const double C3403 = C3061 * C3283;
    const double C3402 = C3061 * C3194;
    const double C3401 = C3061 * C3253;
    const double C3400 = C3061 * C3248;
    const double C3399 = C3061 * C3210;
    const double C3409 = C3406 * C3401;
    const double C3408 = C3399 * C3401;
    const double C3407 = C3399 * C3400;
    const double C3412 = C3409 * C3133;
    const double C3411 = C3072 * C3408;
    const double C3410 = C3407 * C3133;
    const double C3414 = C3412 / C3066;
    const double C3413 = C3410 / C3050;
    const double C3424 = C3406 * C3131;
    const double C3423 = C3061 * C3370;
    const double C3422 = C3061 * C3362;
    const double C3421 = C3061 * C3337;
    const double C3420 = C3399 * C3083;
    const double C3419 = C3399 * C3131;
    const double C3418 = C3061 * C3332;
    const double C3427 = C3421 * C3424;
    const double C3426 = C3420 * C3421;
    const double C3425 = C3418 * C3419;
    const double C3429 = C3427 / C3066;
    const double C3428 = C3426 / C3050;
    const double C3435 = C3266 * C3401;
    const double C3434 = C3400 * C3271;
    const double C3433 = C3401 * C3271;
    const double C3438 = C3435 * C3421;
    const double C3437 = C3421 * C3434;
    const double C3436 = C3418 * C3433;
    const double C3441 = C3438 / C3066;
    const double C3440 = C3437 / C3066;
    const double C3439 = C3436 / C3066;
    const double C3456 = C3061 * C3446;
    const double C3455 = C3114 * be;
    const double C3454 = C3252 / C3041;
    const double C3453 = C3163 / C3066;
    const double C3452 = ae * C3207;
    const double C3451 = C3288 * be;
    const double C3450 = C3161 * ae;
    const double C3449 = C3061 * C3445;
    const double C3448 = C3156 * be;
    const double C3447 = C3188 * ae;
    const double C3463 = C3455 / C3041;
    const double C3462 = -C3454;
    const double C3461 = C3452 / C3049;
    const double C3460 = C3061 * C3451;
    const double C3459 = C3450 / C3041;
    const double C3458 = C3061 * C3448;
    const double C3457 = C3447 / C3041;
    const double C3468 = C3456 * C3458;
    const double C3467 = C3462 / C3050;
    const double C3466 = C3461 - C3453;
    const double C3465 = C3121 + C3459;
    const double C3464 = C3077 + C3457;
    const double C3473 = C3468 * C3133;
    const double C3472 = C3467 - C3463;
    const double C3471 = C3061 * C3466;
    const double C3470 = C3465 + C3095;
    const double C3469 = C3464 - C3130;
    const double C3477 = C3473 / C3066;
    const double C3476 = C3061 * C3472;
    const double C3475 = C3061 * C3470;
    const double C3474 = C3061 * C3469;
    const double C3479 = C3474 * C3449;
    const double C3478 = C3474 * C3458;
    const double C3481 = C3479 * C3133;
    const double C3480 = C3072 * C3478;
    const double C3482 = C3481 / C3050;
    const double C3517 = yAB * C3296;
    const double C3516 = -4 * C3166;
    const double C3515 = C3061 * 1;
    const double C3514 = C3061 * C3079;
    const double C3513 = C3264 / C3066;
    const double C3512 = C3263 / C3066;
    const double C3511 = C3295 / C3066;
    const double C3510 = 3 * C3281;
    const double C3509 = be * C3305;
    const double C3508 = C3166 / C3041;
    const double C3507 = C3061 * C3163;
    const double C3506 = yAB * C3286;
    const double C3505 = C3283 / C3050;
    const double C3504 = yAB * C3307;
    const double C3503 = 0 * be;
    const double C3502 = yAB * C3257;
    const double C3501 = C3061 * C3119;
    const double C3500 = C3137 / C3066;
    const double C3499 = 2 * C3286;
    const double C3498 = C3253 / C3066;
    const double C3497 = C3300 * be;
    const double C3496 = C3297 * be;
    const double C3495 = 2 * C3307;
    const double C3494 = yAB * C3281;
    const double C3493 = -2 * C3257;
    const double C3492 = C3061 * C3486;
    const double C3533 = C3517 / C3041;
    const double C3532 = C3516 / C3041;
    const double C3531 = C3512 - C3513;
    const double C3530 = be * C3510;
    const double C3529 = C3509 / C3049;
    const double C3528 = -C3508;
    const double C3527 = C3506 + C3894;
    const double C3526 = C3504 + 0;
    const double C3525 = C3503 / C3066;
    const double C3524 = C3502 / C3041;
    const double C3523 = C3492 * C3501;
    const double C3522 = C3499 - C3500;
    const double C3521 = C3497 / C3041;
    const double C3520 = C3496 / C3041;
    const double C3519 = C3494 / C3049;
    const double C3518 = ae * C3493;
    const double C3546 = C3532 - C3533;
    const double C3545 = C3531 * be;
    const double C3544 = C3530 / C3070;
    const double C3543 = C3528 / C3050;
    const double C3542 = C3527 * be;
    const double C3541 = C3526 * be;
    const double C3540 = 0 - C3524;
    const double C3539 = C3523 * C3133;
    const double C3538 = C3522 * be;
    const double C3537 = C3311 - C3521;
    const double C3536 = C3289 - C3520;
    const double C3535 = C3519 + C3495;
    const double C3534 = C3518 / C3063;
    const double C3557 = C3546 * ae;
    const double C3556 = C3545 / C3041;
    const double C3555 = C3543 - C3529;
    const double C3554 = C3542 / C3041;
    const double C3553 = C3541 / C3041;
    const double C3552 = C3540 * ae;
    const double C3551 = C3539 / C3066;
    const double C3550 = C3538 / C3041;
    const double C3549 = C3537 + C3286;
    const double C3548 = C3536 - C3255;
    const double C3547 = C3535 * be;
    const double C3567 = C3511 - C3556;
    const double C3566 = 3 * C3548;
    const double C3565 = yAB * C3555;
    const double C3564 = C3505 - C3554;
    const double C3563 = yAB * C3549;
    const double C3562 = C3552 / C3041;
    const double C3561 = C3498 - C3550;
    const double C3560 = 2 * C3549;
    const double C3559 = yAB * C3548;
    const double C3558 = C3547 / C3041;
    const double C3572 = C3565 + C3566;
    const double C3571 = C3563 + C3898;
    const double C3570 = C3562 - C3525;
    const double C3569 = C3559 + C3560;
    const double C3568 = C3534 - C3558;
    const double C3577 = C3572 * ae;
    const double C3576 = C3571 * ae;
    const double C3575 = C3570 + C3454;
    const double C3574 = C3569 * ae;
    const double C3573 = C3568 / C3050;
    const double C3581 = C3577 / C3041;
    const double C3580 = C3576 / C3041;
    const double C3579 = C3575 / C3050;
    const double C3578 = C3574 / C3041;
    const double C3584 = C3581 - C3544;
    const double C3583 = C3579 - C3553;
    const double C3582 = C3573 + C3578;
    const double C3587 = C3584 + C3567;
    const double C3586 = C3583 / C3050;
    const double C3585 = C3582 + C3561;
    const double C3590 = C3061 * C3587;
    const double C3589 = C3586 + C3580;
    const double C3588 = C3061 * C3585;
    const double C3593 = C3515 * C3588;
    const double C3592 = C3589 + C3564;
    const double C3591 = C3588 * C3501;
    const double C3596 = C3593 * C3133;
    const double C3595 = C3061 * C3592;
    const double C3594 = C3072 * C3591;
    const double C3597 = C3596 / C3050;
    const double C3603 = C3515 * C3458;
    const double C3602 = C3449 * C3501;
    const double C3601 = C3501 * C3458;
    const double C3606 = C3390 * C3603;
    const double C3605 = C3390 * C3602;
    const double C3604 = C3334 * C3601;
    const double C3607 = C3604 / C3066;
    const double C3618 = C3061 * C3032;
    const double C3617 = C3061 * C3196;
    const double C3616 = C3061 * C3555;
    const double C3615 = C3061 * C3549;
    const double C3614 = C3061 * C3141;
    const double C3613 = C3061 * C3548;
    const double C3612 = C3061 * C3160;
    const double C3611 = C3061 * C3898;
    const double C3621 = C3618 * C3613;
    const double C3620 = C3613 * C3612;
    const double C3619 = C3611 * C3612;
    const double C3624 = C3621 * C3133;
    const double C3623 = C3072 * C3620;
    const double C3622 = C3619 * C3133;
    const double C3626 = C3624 / C3050;
    const double C3625 = C3622 / C3066;
    const double C3632 = C3618 * C3458;
    const double C3631 = C3449 * C3612;
    const double C3630 = C3612 * C3458;
    const double C3635 = C3421 * C3632;
    const double C3634 = C3631 * C3421;
    const double C3633 = C3418 * C3630;
    const double C3638 = C3635 / C3066;
    const double C3637 = C3634 / C3066;
    const double C3636 = C3633 / C3066;
    const double C3644 = C3515 * C3613;
    const double C3643 = C3611 * C3501;
    const double C3642 = C3613 * C3501;
    const double C3647 = C3644 * C3421;
    const double C3646 = C3421 * C3643;
    const double C3645 = C3418 * C3642;
    const double C3649 = C3647 / C3050;
    const double C3648 = C3646 / C3066;
    const double C3661 = C3456 * C3131;
    const double C3660 = C3365 * be;
    const double C3659 = C3115 * be;
    const double C3658 = C3336 / C3041;
    const double C3657 = C3157 * be;
    const double C3656 = C3474 * C3083;
    const double C3655 = C3474 * C3131;
    const double C3654 = C3061 * C3653;
    const double C3666 = C3061 * C3660;
    const double C3665 = C3659 / C3041;
    const double C3664 = -C3658;
    const double C3663 = C3061 * C3657;
    const double C3662 = C3654 * C3655;
    const double C3669 = C3661 * C3663;
    const double C3668 = C3664 / C3050;
    const double C3667 = C3656 * C3663;
    const double C3672 = C3669 / C3066;
    const double C3671 = C3668 - C3665;
    const double C3670 = C3667 / C3050;
    const double C3673 = C3061 * C3671;
    const double C3679 = C3515 * C3316;
    const double C3678 = C3251 * C3501;
    const double C3677 = C3316 * C3501;
    const double C3682 = C3679 * C3663;
    const double C3681 = C3678 * C3663;
    const double C3680 = C3654 * C3677;
    const double C3684 = C3682 / C3050;
    const double C3683 = C3681 / C3066;
    const double C3718 = zAB * C3371;
    const double C3717 = -4 * C3167;
    const double C3716 = C3515 * C3131;
    const double C3715 = C3345 / C3066;
    const double C3714 = C3344 / C3066;
    const double C3713 = C3370 / C3066;
    const double C3712 = 3 * C3360;
    const double C3711 = be * C3379;
    const double C3710 = C3167 / C3041;
    const double C3709 = zAB * C3364;
    const double C3708 = C3362 / C3050;
    const double C3707 = zAB * C3381;
    const double C3706 = 0 * be;
    const double C3705 = zAB * C3341;
    const double C3704 = C3083 * C3501;
    const double C3703 = C3138 / C3066;
    const double C3702 = 2 * C3364;
    const double C3701 = C3337 / C3066;
    const double C3700 = C3374 * be;
    const double C3699 = C3372 * be;
    const double C3698 = 2 * C3381;
    const double C3697 = zAB * C3360;
    const double C3696 = -2 * C3341;
    const double C3695 = C3501 * C3131;
    const double C3694 = C3061 * C3688;
    const double C3734 = C3718 / C3041;
    const double C3733 = C3717 / C3041;
    const double C3732 = C3714 - C3715;
    const double C3731 = be * C3712;
    const double C3730 = C3711 / C3049;
    const double C3729 = -C3710;
    const double C3728 = C3709 + C3894;
    const double C3727 = C3707 + 0;
    const double C3726 = C3706 / C3066;
    const double C3725 = C3705 / C3041;
    const double C3724 = C3702 - C3703;
    const double C3723 = C3700 / C3041;
    const double C3722 = C3699 / C3041;
    const double C3721 = C3697 / C3049;
    const double C3720 = ae * C3696;
    const double C3719 = C3694 * C3695;
    const double C3747 = C3733 - C3734;
    const double C3746 = C3732 * be;
    const double C3745 = C3731 / C3070;
    const double C3744 = C3729 / C3050;
    const double C3743 = C3728 * be;
    const double C3742 = C3727 * be;
    const double C3741 = 0 - C3725;
    const double C3740 = C3724 * be;
    const double C3739 = C3385 - C3723;
    const double C3738 = C3366 - C3722;
    const double C3737 = C3721 + C3698;
    const double C3736 = C3720 / C3063;
    const double C3735 = C3719 / C3066;
    const double C3757 = C3747 * ae;
    const double C3756 = C3746 / C3041;
    const double C3755 = C3744 - C3730;
    const double C3754 = C3743 / C3041;
    const double C3753 = C3742 / C3041;
    const double C3752 = C3741 * ae;
    const double C3751 = C3740 / C3041;
    const double C3750 = C3739 + C3364;
    const double C3749 = C3738 - C3339;
    const double C3748 = C3737 * be;
    const double C3767 = C3713 - C3756;
    const double C3766 = 3 * C3749;
    const double C3765 = zAB * C3755;
    const double C3764 = C3708 - C3754;
    const double C3763 = zAB * C3750;
    const double C3762 = C3752 / C3041;
    const double C3761 = C3701 - C3751;
    const double C3760 = 2 * C3750;
    const double C3759 = zAB * C3749;
    const double C3758 = C3748 / C3041;
    const double C3772 = C3765 + C3766;
    const double C3771 = C3763 + C3899;
    const double C3770 = C3762 - C3726;
    const double C3769 = C3759 + C3760;
    const double C3768 = C3736 - C3758;
    const double C3777 = C3772 * ae;
    const double C3776 = C3771 * ae;
    const double C3775 = C3770 + C3658;
    const double C3774 = C3769 * ae;
    const double C3773 = C3768 / C3050;
    const double C3781 = C3777 / C3041;
    const double C3780 = C3776 / C3041;
    const double C3779 = C3775 / C3050;
    const double C3778 = C3774 / C3041;
    const double C3784 = C3781 - C3745;
    const double C3783 = C3779 - C3753;
    const double C3782 = C3773 + C3778;
    const double C3787 = C3784 + C3767;
    const double C3786 = C3783 / C3050;
    const double C3785 = C3782 + C3761;
    const double C3790 = C3061 * C3787;
    const double C3789 = C3786 + C3780;
    const double C3788 = C3061 * C3785;
    const double C3793 = C3788 * C3716;
    const double C3792 = C3789 + C3764;
    const double C3791 = C3788 * C3704;
    const double C3794 = C3061 * C3792;
    const double C3800 = C3618 * C3401;
    const double C3799 = C3612 * C3401;
    const double C3798 = C3400 * C3612;
    const double C3803 = C3800 * C3663;
    const double C3802 = C3654 * C3799;
    const double C3801 = C3798 * C3663;
    const double C3804 = C3802 / C3066;
    const double C3814 = C3618 * C3131;
    const double C3813 = C3061 * C3755;
    const double C3812 = C3061 * C3750;
    const double C3811 = C3083 * C3612;
    const double C3810 = C3061 * C3749;
    const double C3809 = C3612 * C3131;
    const double C3808 = C3061 * C3899;
    const double C3817 = C3810 * C3814;
    const double C3816 = C3810 * C3811;
    const double C3815 = C3808 * C3809;
    const double C3820 = C3817 / C3050;
    const double C3819 = C3816 / C3050;
    const double C3818 = C3815 / C3066;
    const double C3826 = C3515 * C3401;
    const double C3825 = C3400 * C3501;
    const double C3824 = C3401 * C3501;
    const double C3829 = C3810 * C3826;
    const double C3828 = C3810 * C3825;
    const double C3827 = C3808 * C3824;
    const double C3832 = C3829 / C3050;
    const double C3831 = C3828 / C3050;
    const double C3830 = C3827 / C3066;
    const double C3924 = C3371 / C3041;
    const double C3923 = C3747 * be;
    const double C3922 = C3061 * C3215;
    const double C3921 = C3296 / C3041;
    const double C3920 = C3061 * C3195;
    const double C3919 = C3546 * be;
    const double C3918 = C3195 / C3066;
    const double C3917 = C3061 * C3757;
    const double C3916 = C3061 * C3557;
    const double C3915 = C3371 / C3066;
    const double C3914 = 4 * C3370;
    const double C3913 = zAB * C3757;
    const double C3912 = C3296 / C3066;
    const double C3911 = 4 * C3295;
    const double C3910 = yAB * C3557;
    const double C3909 = C3211 * be;
    const double C3908 = C3061 * C3371;
    const double C3907 = C3061 * C3296;
    const double C3906 = 4 * C3196;
    const double C3905 = xAB * C3215;
    const double C3904 = C3195 / C3041;
    const double C3933 = -C3924;
    const double C3932 = C3061 * C3923;
    const double C3931 = -C3921;
    const double C3930 = C3061 * C3919;
    const double C3929 = C3913 + C3914;
    const double C3928 = C3910 + C3911;
    const double C3927 = C3061 * C3909;
    const double C3926 = C3905 + C3906;
    const double C3925 = -C3904;
    const double C3942 = be * C3929;
    const double C3941 = C3933 / C3050;
    const double C3940 = be * C3928;
    const double C3939 = C3931 / C3050;
    const double C3938 = ae * C3926;
    const double C3937 = ae * C3929;
    const double C3936 = ae * C3928;
    const double C3935 = be * C3926;
    const double C3934 = C3925 / C3050;
    const double C3948 = C3942 / C3049;
    const double C3947 = C3940 / C3049;
    const double C3946 = C3938 / C3049;
    const double C3945 = C3937 / C3049;
    const double C3944 = C3936 / C3049;
    const double C3943 = C3935 / C3049;
    const double C3954 = C3941 - C3948;
    const double C3953 = C3939 - C3947;
    const double C3952 = C3946 - C3918;
    const double C3951 = C3945 - C3915;
    const double C3950 = C3944 - C3912;
    const double C3949 = C3934 - C3943;
    const double C3960 = C3061 * C3954;
    const double C3959 = C3061 * C3953;
    const double C3958 = C3061 * C3952;
    const double C3957 = C3061 * C3949;
    const double C3956 = C3061 * C3951;
    const double C3955 = C3061 * C3950;
    const double hxx100200 =
        C3237 / C3050 -
        (C3061 *
         (((xAB * C3949 + 4 * C3220) * ae) / C3041 + C3215 / C3066 -
          (((-2 * C3163) / C3049 - C3200 / C3066) * be) / C3041) *
         C3083 * C3072) /
            2 +
        C3240;
    const double hxx100020 = (C3072 * C3251 * C3927 + C3322) / C3050 - C3298;
    const double hxx100002 =
        (C3334 * C3083 * C3927) / C3050 - C3359 + C3393 / C3050;
    const double hxx100110 =
        C3413 - (C3411 / C3050 + (C3957 * C3400 * C3072) / 2);
    const double hxx100101 =
        C3425 / C3050 - (C3957 * C3083 * C3418) / 2 - C3428;
    const double hxx100011 = (C3418 * C3400 * C3927) / C3050 + C3439 + C3440;
    const double hxx010200 =
        C3480 / C3050 - (C3958 * C3449 * C3072) / 2 + C3482;
    const double hxx010020 = (C3072 * C3492 * C3920 + C3594) / C3050 - C3551;
    const double hxx010002 =
        (C3334 * C3449 * C3920) / C3050 - C3607 + C3605 / C3050;
    const double hxx010110 = C3625 - (C3623 + C3072 * C3611 * C3922) / C3050;
    const double hxx010101 = C3636 - (C3418 * C3449 * C3922) / C3050 - C3637;
    const double hxx010011 = (C3418 * C3611 * C3920 + C3645) / C3050 + C3648;
    const double hxx001200 =
        C3662 / C3050 - (C3958 * C3083 * C3654) / 2 + C3670;
    const double hxx001020 = (C3654 * C3251 * C3920 + C3680) / C3050 - C3683;
    const double hxx001002 =
        (C3694 * C3083 * C3920) / C3050 - C3735 + C3791 / C3050;
    const double hxx001110 =
        C3801 / C3066 - (C3804 + (C3654 * C3400 * C3922) / C3050);
    const double hxx001101 = C3818 - (C3808 * C3083 * C3922) / C3050 - C3819;
    const double hxx001011 = (C3808 * C3400 * C3920) / C3050 + C3830 + C3831;
    const double hxy100200 =
        (C3072 * C3239 * C3099 + C3072 * C3227 * C3179) / C3050 -
        (C3227 * C3099 * C3133) / C3066;
    const double hxy100020 = (C3072 * C3320 * C3275) / C3050 -
                             (C3294 * C3318 * C3072) / 2 +
                             (C3294 * C3320 * C3133) / C3050;
    const double hxy100002 = (C3334 * C3294 * C3179) / C3050 -
                             (C3334 * C3275 * C3099) / C3066 +
                             (C3390 * C3294 * C3099) / C3050;
    const double hxy100110 =
        (C3402 * C3403 * C3133) / C3050 -
        ((C3072 * C3402 * C3404) / C3050 + (C3405 * C3403 * C3072) / 2);
    const double hxy100101 =
        (C3418 * C3405 * C3099 + C3418 * C3402 * C3179) / C3050 +
        (C3421 * C3402 * C3099) / C3066;
    const double hxy100011 = (C3418 * C3403 * C3275) / C3050 -
                             (C3418 * C3294 * C3404) / C3050 -
                             (C3294 * C3403 * C3421) / C3050;
    const double hxy010200 = (C3072 * C3475 * C3460) / C3050 -
                             (C3471 * C3476 * C3072) / 2 +
                             (C3475 * C3476 * C3133) / C3050;
    const double hxy010020 =
        (C3072 * C3595 * C3507 + C3072 * C3590 * C3514) / C3050 -
        (C3595 * C3514 * C3133) / C3066;
    const double hxy010002 = (C3334 * C3476 * C3507) / C3050 -
                             (C3334 * C3514 * C3460) / C3066 +
                             (C3390 * C3476 * C3514) / C3050;
    const double hxy010110 =
        (C3614 * C3615 * C3133) / C3050 -
        ((C3614 * C3616 * C3072) / 2 + (C3072 * C3615 * C3617) / C3050);
    const double hxy010101 = (C3418 * C3614 * C3460) / C3050 -
                             (C3418 * C3476 * C3617) / C3050 -
                             (C3614 * C3476 * C3421) / C3050;
    const double hxy010011 =
        (C3418 * C3615 * C3507 + C3418 * C3616 * C3514) / C3050 +
        (C3421 * C3615 * C3514) / C3066;
    const double hxy001200 =
        (C3654 * C3471 * C3099 + C3654 * C3475 * C3179) / C3050 -
        (C3475 * C3099 * C3663) / C3066;
    const double hxy001020 =
        (C3654 * C3320 * C3507 + C3654 * C3318 * C3514) / C3050 -
        (C3320 * C3514 * C3663) / C3066;
    const double hxy001002 = -(C3788 * C3514 * C3099 + C3694 * C3514 * C3179 +
                               C3694 * C3507 * C3099) /
                             C3066;
    const double hxy001110 =
        (C3614 * C3403 * C3663) / C3050 -
        (C3654 * C3614 * C3404 + C3654 * C3403 * C3617) / C3050;
    const double hxy001101 = (C3808 * C3617 * C3099) / C3066 +
                             (C3808 * C3614 * C3179) / C3050 +
                             (C3810 * C3614 * C3099) / C3050;
    const double hxy001011 = (C3808 * C3403 * C3507) / C3050 +
                             (C3808 * C3404 * C3514) / C3066 +
                             (C3810 * C3403 * C3514) / C3050;
    const double hxz100200 = (C3239 * C3083 * C3102) / C3050 -
                             (C3227 * C3131 * C3102) / C3066 +
                             (C3227 * C3083 * C3180) / C3050;
    const double hxz100020 = (C3294 * C3316 * C3102) / C3050 -
                             (C3251 * C3275 * C3102) / C3066 +
                             (C3294 * C3251 * C3180) / C3050;
    const double hxz100002 =
        (C3394 * C3083 * C3275 + C3394 * C3294 * C3131) / C3050 -
        (C3294 * C3083 * C3392) / 2;
    const double hxz100110 = (C3405 * C3400 * C3102) / C3050 +
                             (C3402 * C3401 * C3102) / C3066 +
                             (C3402 * C3400 * C3180) / C3050;
    const double hxz100101 = (C3422 * C3402 * C3131) / C3050 -
                             (C3405 * C3083 * C3422) / 2 -
                             (C3402 * C3083 * C3423) / C3050;
    const double hxz100011 = (C3422 * C3400 * C3275) / C3050 -
                             (C3422 * C3294 * C3401) / C3050 -
                             (C3294 * C3400 * C3423) / C3050;
    const double hxz010200 = (C3471 * C3449 * C3102) / C3050 -
                             (C3475 * C3458 * C3102) / C3066 +
                             (C3475 * C3449 * C3180) / C3050;
    const double hxz010020 = -(C3492 * C3514 * C3180 + C3588 * C3514 * C3102 +
                               C3492 * C3507 * C3102) /
                             C3066;
    const double hxz010002 = (C3394 * C3449 * C3507) / C3050 -
                             (C3394 * C3514 * C3458) / C3066 +
                             (C3392 * C3449 * C3514) / C3050;
    const double hxz010110 = (C3611 * C3617 * C3102) / C3066 +
                             (C3614 * C3613 * C3102) / C3050 +
                             (C3614 * C3611 * C3180) / C3050;
    const double hxz010101 = (C3422 * C3614 * C3458) / C3050 -
                             (C3422 * C3449 * C3617) / C3050 -
                             (C3614 * C3449 * C3423) / C3050;
    const double hxz010011 =
        (C3422 * C3611 * C3507 + C3422 * C3613 * C3514) / C3050 +
        (C3423 * C3611 * C3514) / C3066;
    const double hxz001200 = (C3673 * C3475 * C3131) / C3050 -
                             (C3471 * C3083 * C3673) / 2 +
                             (C3475 * C3083 * C3666) / C3050;
    const double hxz001020 =
        (C3673 * C3251 * C3507 + C3673 * C3316 * C3514) / C3050 -
        (C3251 * C3514 * C3666) / C3066;
    const double hxz001002 = (C3794 * C3083 * C3507) / C3050 -
                             (C3794 * C3514 * C3131) / C3066 +
                             (C3790 * C3083 * C3514) / C3050;
    const double hxz001110 =
        (C3614 * C3400 * C3666) / C3050 -
        (C3673 * C3614 * C3401 + C3673 * C3400 * C3617) / C3050;
    const double hxz001101 = (C3812 * C3614 * C3131) / C3050 -
                             (C3812 * C3083 * C3617) / C3050 -
                             (C3614 * C3083 * C3813) / 2;
    const double hxz001011 = (C3812 * C3400 * C3507) / C3050 +
                             (C3812 * C3401 * C3514) / C3066 +
                             (C3813 * C3400 * C3514) / C3050;
    const double hyy100200 = (C3237 + C3072 * C3090 * C3907) / C3050 - C3168;
    const double hyy100020 =
        C3322 / C3050 - (C3266 * C3955 * C3072) / 2 + C3324;
    const double hyy100002 =
        (C3334 * C3266 * C3907) / C3050 - C3359 + C3395 / C3050;
    const double hyy100110 = C3414 - (C3072 * C3406 * C3916 + C3411) / C3050;
    const double hyy100101 = (C3425 + C3418 * C3406 * C3907) / C3050 + C3429;
    const double hyy100011 = C3439 - (C3418 * C3266 * C3916) / C3050 - C3441;
    const double hyy010200 = (C3480 + C3072 * C3456 * C3930) / C3050 - C3477;
    const double hyy010020 =
        C3594 / C3050 -
        (C3515 * C3061 *
         (((yAB * C3953 + 4 * C3555) * ae) / C3041 + C3557 / C3066 -
          (((-2 * C3166) / C3049 - C3517 / C3066) * be) / C3041) *
         C3072) /
            2 +
        C3597;
    const double hyy010002 =
        (C3334 * C3515 * C3930) / C3050 - C3607 + C3606 / C3050;
    const double hyy010110 =
        C3626 - ((C3618 * C3959 * C3072) / 2 + C3623 / C3050);
    const double hyy010101 = C3636 + (C3418 * C3618 * C3930) / C3050 + C3638;
    const double hyy010011 =
        C3645 / C3050 - (C3515 * C3959 * C3418) / 2 - C3649;
    const double hyy001200 = (C3662 + C3654 * C3456 * C3907) / C3050 - C3672;
    const double hyy001020 =
        C3680 / C3050 - (C3515 * C3955 * C3654) / 2 + C3684;
    const double hyy001002 =
        (C3694 * C3515 * C3907) / C3050 - C3735 + C3793 / C3050;
    const double hyy001110 =
        C3803 / C3066 - ((C3654 * C3618 * C3916) / C3050 + C3804);
    const double hyy001101 = C3818 + (C3808 * C3618 * C3907) / C3050 + C3820;
    const double hyy001011 = C3830 - (C3808 * C3515 * C3916) / C3050 - C3832;
    const double hyz100200 = -(C3090 * C3099 * C3180 + C3090 * C3179 * C3102 +
                               C3232 * C3099 * C3102) /
                             C3066;
    const double hyz100020 = (C3266 * C3318 * C3102) / C3050 -
                             (C3320 * C3271 * C3102) / C3066 +
                             (C3266 * C3320 * C3180) / C3050;
    const double hyz100002 = (C3394 * C3266 * C3179) / C3050 -
                             (C3394 * C3271 * C3099) / C3066 +
                             (C3392 * C3266 * C3099) / C3050;
    const double hyz100110 = (C3399 * C3403 * C3102) / C3050 +
                             (C3406 * C3404 * C3102) / C3066 +
                             (C3406 * C3403 * C3180) / C3050;
    const double hyz100101 =
        (C3422 * C3399 * C3099 + C3422 * C3406 * C3179) / C3050 +
        (C3423 * C3406 * C3099) / C3066;
    const double hyz100011 = (C3422 * C3403 * C3271) / C3050 -
                             (C3422 * C3266 * C3404) / C3050 -
                             (C3266 * C3403 * C3423) / C3050;
    const double hyz010200 = (C3474 * C3476 * C3102) / C3050 -
                             (C3456 * C3460 * C3102) / C3066 +
                             (C3456 * C3476 * C3180) / C3050;
    const double hyz010020 = (C3515 * C3590 * C3102) / C3050 -
                             (C3595 * C3501 * C3102) / C3066 +
                             (C3515 * C3595 * C3180) / C3050;
    const double hyz010002 =
        (C3394 * C3476 * C3501 + C3394 * C3515 * C3460) / C3050 -
        (C3515 * C3476 * C3392) / 2;
    const double hyz010110 = (C3615 * C3612 * C3102) / C3066 +
                             (C3618 * C3616 * C3102) / C3050 +
                             (C3618 * C3615 * C3180) / C3050;
    const double hyz010101 = (C3422 * C3618 * C3460) / C3050 -
                             (C3422 * C3476 * C3612) / C3050 -
                             (C3618 * C3476 * C3423) / C3050;
    const double hyz010011 = (C3422 * C3615 * C3501) / C3050 -
                             (C3515 * C3616 * C3422) / 2 -
                             (C3515 * C3615 * C3423) / C3050;
    const double hyz001200 =
        (C3673 * C3474 * C3099 + C3673 * C3456 * C3179) / C3050 -
        (C3456 * C3099 * C3666) / C3066;
    const double hyz001020 = (C3673 * C3320 * C3501) / C3050 -
                             (C3515 * C3318 * C3673) / 2 +
                             (C3515 * C3320 * C3666) / C3050;
    const double hyz001002 = (C3794 * C3515 * C3179) / C3050 -
                             (C3794 * C3501 * C3099) / C3066 +
                             (C3790 * C3515 * C3099) / C3050;
    const double hyz001110 =
        (C3618 * C3403 * C3666) / C3050 -
        (C3673 * C3618 * C3404 + C3673 * C3403 * C3612) / C3050;
    const double hyz001101 = (C3812 * C3612 * C3099) / C3066 +
                             (C3812 * C3618 * C3179) / C3050 +
                             (C3813 * C3618 * C3099) / C3050;
    const double hyz001011 = (C3812 * C3403 * C3501) / C3050 -
                             (C3812 * C3515 * C3404) / C3050 -
                             (C3515 * C3403 * C3813) / 2;
    const double hzz100200 = C3240 - C3168 + (C3090 * C3083 * C3908) / C3050;
    const double hzz100020 = C3324 - C3298 + (C3266 * C3251 * C3908) / C3050;
    const double hzz100002 =
        (C3393 + C3395) / C3050 - (C3266 * C3083 * C3956) / 2;
    const double hzz100110 = C3413 + C3414 + (C3406 * C3400 * C3908) / C3050;
    const double hzz100101 = C3429 - C3428 - (C3406 * C3083 * C3917) / C3050;
    const double hzz100011 = C3440 - C3441 - (C3266 * C3400 * C3917) / C3050;
    const double hzz010200 = C3482 - C3477 + (C3456 * C3449 * C3908) / C3050;
    const double hzz010020 = C3597 - C3551 + (C3515 * C3492 * C3908) / C3050;
    const double hzz010002 =
        (C3605 + C3606) / C3050 - (C3515 * C3449 * C3956) / 2;
    const double hzz010110 = C3625 + C3626 + (C3618 * C3611 * C3908) / C3050;
    const double hzz010101 = C3638 - C3637 - (C3618 * C3449 * C3917) / C3050;
    const double hzz010011 = C3648 - C3649 - (C3515 * C3611 * C3917) / C3050;
    const double hzz001200 = C3670 - C3672 + (C3456 * C3083 * C3932) / C3050;
    const double hzz001020 = C3684 - C3683 + (C3515 * C3251 * C3932) / C3050;
    const double hzz001002 =
        (C3791 + C3793) / C3050 -
        (C3515 * C3083 * C3061 *
         (((zAB * C3954 + 4 * C3755) * ae) / C3041 + C3757 / C3066 -
          (((-2 * C3167) / C3049 - C3718 / C3066) * be) / C3041)) /
            2;
    const double hzz001110 =
        (C3801 + C3803) / C3066 + (C3618 * C3400 * C3932) / C3050;
    const double hzz001101 = C3820 - C3819 - (C3618 * C3083 * C3960) / 2;
    const double hzz001011 = C3831 - C3832 - (C3515 * C3400 * C3960) / 2;
    if (same_atom) {
        hxx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx100110;
        hxx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxx100011;
        hxx[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxx100200 - 0.5 * hxx100020 + hxx100002);
        hxx[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxx100101;
        hxx[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxx100200 - std::sqrt(0.75) * hxx100020);
        hxx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx010110;
        hxx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxx010011;
        hxx[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxx010200 - 0.5 * hxx010020 + hxx010002);
        hxx[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxx010101;
        hxx[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxx010200 - std::sqrt(0.75) * hxx010020);
        hxx[(Ai + 2) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx001110;
        hxx[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxx001011;
        hxx[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxx001200 - 0.5 * hxx001020 + hxx001002);
        hxx[(Ai + 2) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxx001101;
        hxx[(Ai + 2) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxx001200 - std::sqrt(0.75) * hxx001020);
        hxy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy100110;
        hxy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxy100011;
        hxy[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxy100200 - 0.5 * hxy100020 + hxy100002);
        hxy[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxy100101;
        hxy[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxy100200 - std::sqrt(0.75) * hxy100020);
        hxy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy010110;
        hxy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxy010011;
        hxy[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxy010200 - 0.5 * hxy010020 + hxy010002);
        hxy[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxy010101;
        hxy[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxy010200 - std::sqrt(0.75) * hxy010020);
        hxy[(Ai + 2) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy001110;
        hxy[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxy001011;
        hxy[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxy001200 - 0.5 * hxy001020 + hxy001002);
        hxy[(Ai + 2) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxy001101;
        hxy[(Ai + 2) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxy001200 - std::sqrt(0.75) * hxy001020);
        hxz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz100110;
        hxz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxz100011;
        hxz[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxz100200 - 0.5 * hxz100020 + hxz100002);
        hxz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxz100101;
        hxz[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxz100200 - std::sqrt(0.75) * hxz100020);
        hxz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz010110;
        hxz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxz010011;
        hxz[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxz010200 - 0.5 * hxz010020 + hxz010002);
        hxz[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxz010101;
        hxz[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxz010200 - std::sqrt(0.75) * hxz010020);
        hxz[(Ai + 2) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz001110;
        hxz[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxz001011;
        hxz[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxz001200 - 0.5 * hxz001020 + hxz001002);
        hxz[(Ai + 2) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hxz001101;
        hxz[(Ai + 2) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hxz001200 - std::sqrt(0.75) * hxz001020);
        hyy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy100110;
        hyy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyy100011;
        hyy[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyy100200 - 0.5 * hyy100020 + hyy100002);
        hyy[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hyy100101;
        hyy[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hyy100200 - std::sqrt(0.75) * hyy100020);
        hyy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy010110;
        hyy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyy010011;
        hyy[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyy010200 - 0.5 * hyy010020 + hyy010002);
        hyy[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hyy010101;
        hyy[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hyy010200 - std::sqrt(0.75) * hyy010020);
        hyy[(Ai + 2) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy001110;
        hyy[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyy001011;
        hyy[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyy001200 - 0.5 * hyy001020 + hyy001002);
        hyy[(Ai + 2) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hyy001101;
        hyy[(Ai + 2) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hyy001200 - std::sqrt(0.75) * hyy001020);
        hyz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz100110;
        hyz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyz100011;
        hyz[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyz100200 - 0.5 * hyz100020 + hyz100002);
        hyz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hyz100101;
        hyz[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hyz100200 - std::sqrt(0.75) * hyz100020);
        hyz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz010110;
        hyz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyz010011;
        hyz[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyz010200 - 0.5 * hyz010020 + hyz010002);
        hyz[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hyz010101;
        hyz[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hyz010200 - std::sqrt(0.75) * hyz010020);
        hyz[(Ai + 2) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz001110;
        hyz[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyz001011;
        hyz[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyz001200 - 0.5 * hyz001020 + hyz001002);
        hyz[(Ai + 2) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hyz001101;
        hyz[(Ai + 2) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hyz001200 - std::sqrt(0.75) * hyz001020);
        hzz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz100110;
        hzz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hzz100011;
        hzz[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hzz100200 - 0.5 * hzz100020 + hzz100002);
        hzz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hzz100101;
        hzz[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hzz100200 - std::sqrt(0.75) * hzz100020);
        hzz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz010110;
        hzz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hzz010011;
        hzz[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hzz010200 - 0.5 * hzz010020 + hzz010002);
        hzz[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hzz010101;
        hzz[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hzz010200 - std::sqrt(0.75) * hzz010020);
        hzz[(Ai + 2) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz001110;
        hzz[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hzz001011;
        hzz[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hzz001200 - 0.5 * hzz001020 + hzz001002);
        hzz[(Ai + 2) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * hzz001101;
        hzz[(Ai + 2) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(0.75) * hzz001200 - std::sqrt(0.75) * hzz001020);
    } else {
        hxx[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx100110;
        hxx[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxx100011;
        hxx[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxx100200 - 0.5 * hxx100020 + hxx100002);
        hxx[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxx100101;
        hxx[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxx100200 - std::sqrt(0.75) * hxx100020);
        hxx[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx010110;
        hxx[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxx010011;
        hxx[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxx010200 - 0.5 * hxx010020 + hxx010002);
        hxx[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxx010101;
        hxx[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxx010200 - std::sqrt(0.75) * hxx010020);
        hxx[(Ai + 2) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx001110;
        hxx[(Ai + 2) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxx001011;
        hxx[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxx001200 - 0.5 * hxx001020 + hxx001002);
        hxx[(Ai + 2) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxx001101;
        hxx[(Ai + 2) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxx001200 - std::sqrt(0.75) * hxx001020);
        hxy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy100110;
        hxy[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxy100011;
        hxy[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxy100200 - 0.5 * hxy100020 + hxy100002);
        hxy[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxy100101;
        hxy[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxy100200 - std::sqrt(0.75) * hxy100020);
        hxy[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy010110;
        hxy[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxy010011;
        hxy[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxy010200 - 0.5 * hxy010020 + hxy010002);
        hxy[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxy010101;
        hxy[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxy010200 - std::sqrt(0.75) * hxy010020);
        hxy[(Ai + 2) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy001110;
        hxy[(Ai + 2) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxy001011;
        hxy[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxy001200 - 0.5 * hxy001020 + hxy001002);
        hxy[(Ai + 2) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxy001101;
        hxy[(Ai + 2) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxy001200 - std::sqrt(0.75) * hxy001020);
        hxz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz100110;
        hxz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxz100011;
        hxz[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxz100200 - 0.5 * hxz100020 + hxz100002);
        hxz[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxz100101;
        hxz[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxz100200 - std::sqrt(0.75) * hxz100020);
        hxz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz010110;
        hxz[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxz010011;
        hxz[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxz010200 - 0.5 * hxz010020 + hxz010002);
        hxz[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxz010101;
        hxz[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxz010200 - std::sqrt(0.75) * hxz010020);
        hxz[(Ai + 2) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz001110;
        hxz[(Ai + 2) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxz001011;
        hxz[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxz001200 - 0.5 * hxz001020 + hxz001002);
        hxz[(Ai + 2) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hxz001101;
        hxz[(Ai + 2) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hxz001200 - std::sqrt(0.75) * hxz001020);
        hyy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy100110;
        hyy[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyy100011;
        hyy[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyy100200 - 0.5 * hyy100020 + hyy100002);
        hyy[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hyy100101;
        hyy[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hyy100200 - std::sqrt(0.75) * hyy100020);
        hyy[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy010110;
        hyy[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyy010011;
        hyy[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyy010200 - 0.5 * hyy010020 + hyy010002);
        hyy[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hyy010101;
        hyy[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hyy010200 - std::sqrt(0.75) * hyy010020);
        hyy[(Ai + 2) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy001110;
        hyy[(Ai + 2) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyy001011;
        hyy[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyy001200 - 0.5 * hyy001020 + hyy001002);
        hyy[(Ai + 2) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hyy001101;
        hyy[(Ai + 2) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hyy001200 - std::sqrt(0.75) * hyy001020);
        hyz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz100110;
        hyz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyz100011;
        hyz[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyz100200 - 0.5 * hyz100020 + hyz100002);
        hyz[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hyz100101;
        hyz[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hyz100200 - std::sqrt(0.75) * hyz100020);
        hyz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz010110;
        hyz[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyz010011;
        hyz[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyz010200 - 0.5 * hyz010020 + hyz010002);
        hyz[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hyz010101;
        hyz[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hyz010200 - std::sqrt(0.75) * hyz010020);
        hyz[(Ai + 2) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz001110;
        hyz[(Ai + 2) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyz001011;
        hyz[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyz001200 - 0.5 * hyz001020 + hyz001002);
        hyz[(Ai + 2) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hyz001101;
        hyz[(Ai + 2) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hyz001200 - std::sqrt(0.75) * hyz001020);
        hzz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz100110;
        hzz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hzz100011;
        hzz[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hzz100200 - 0.5 * hzz100020 + hzz100002);
        hzz[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hzz100101;
        hzz[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hzz100200 - std::sqrt(0.75) * hzz100020);
        hzz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz010110;
        hzz[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hzz010011;
        hzz[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hzz010200 - 0.5 * hzz010020 + hzz010002);
        hzz[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hzz010101;
        hzz[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hzz010200 - std::sqrt(0.75) * hzz010020);
        hzz[(Ai + 2) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz001110;
        hzz[(Ai + 2) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hzz001011;
        hzz[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hzz001200 - 0.5 * hzz001020 + hzz001002);
        hzz[(Ai + 2) * matrix_size + Bi + 3] -= cc * std::sqrt(3.0) * hzz001101;
        hzz[(Ai + 2) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(0.75) * hzz001200 - std::sqrt(0.75) * hzz001020);
    }
}

// Automatically generated, do not edit
void kinetic_second_derivative_20(double ae,
                                  double be,
                                  double cc,
                                  double xAB,
                                  double yAB,
                                  double zAB,
                                  double* const hxx,
                                  double* const hxy,
                                  double* const hxz,
                                  double* const hyy,
                                  double* const hyz,
                                  double* const hzz,
                                  bool same_atom,
                                  std::size_t matrix_size,
                                  std::size_t Ai,
                                  std::size_t Bi)
{
    const double C7676 = ae + be;
    const double C7694 = zAB * be;
    const double C7693 = yAB * be;
    const double C7692 = 2 * C7676;
    const double C7691 = std::pow(C7676, 2);
    const double C7690 = xAB * be;
    const double C7695 = 1 / C7692;
    const double C7319 = -C7690 / (ae + be);
    const double C7321 = std::pow(C7690, 2) / C7691 + C7695;
    const double C7455 = std::pow(C7693, 2) / C7691 + C7695;
    const double C7459 = -C7693 / C7676;
    const double C7543 = std::pow(C7694, 2) / C7691 + C7695;
    const double C7547 = -C7694 / C7676;
    const double C7326 = 0 * be;
    const double C7325 = 0 * be;
    const double C7324 = ae * be;
    const double C7323 = 0 * be;
    const double C7322 = ae + be;
    const double C7338 = C7326 / C7322;
    const double C7337 = xAB * C7323;
    const double C7336 = C7325 / C7322;
    const double C7335 = C7324 * zAB;
    const double C7334 = C7324 * yAB;
    const double C7333 = 2 * C7324;
    const double C7332 = C7324 * xAB;
    const double C7331 = C7323 / C7322;
    const double C7330 = 2 * C7322;
    const double C7329 = std::pow(C7322, 2);
    const double C7328 = -2 * C7323;
    const double C7327 = Pi / C7322;
    const double C7347 = C7337 / C7322;
    const double C7346 = -C7336;
    const double C7345 = C7335 * 1;
    const double C7344 = C7334 * 1;
    const double C7343 = 2 * C7329;
    const double C7342 = C7332 * 1;
    const double C7341 = -C7331;
    const double C7340 = be * C7328;
    const double C7339 = std::sqrt(C7327);
    const double C7360 = C7339 * C7321;
    const double C7359 = -4 * C7345;
    const double C7358 = -4 * C7344;
    const double C7357 = 0 - C7347;
    const double C7356 = C7346 / C7330;
    const double C7355 = 2 * C7345;
    const double C7354 = C7339 * 1;
    const double C7353 = 2 * C7344;
    const double C7352 = -4 * C7342;
    const double C7351 = 2 * C7342;
    const double C7350 = C7341 / C7330;
    const double C7349 = C7340 / C7329;
    const double C7348 = C7339 * 1;
    const double C7371 = C7359 / C7322;
    const double C7370 = C7339 * C7355;
    const double C7369 = C7358 / C7322;
    const double C7368 = C7351 / C7322;
    const double C7367 = C7357 * be;
    const double C7366 = C7339 * C7353;
    const double C7365 = zAB * C7355;
    const double C7364 = yAB * C7353;
    const double C7363 = C7352 / C7322;
    const double C7362 = xAB * C7351;
    const double C7361 = -C7349;
    const double C7377 = -C7368;
    const double C7376 = C7367 / C7322;
    const double C7375 = C7365 / C7322;
    const double C7374 = C7364 / C7322;
    const double C7373 = C7362 / C7322;
    const double C7372 = C7361 / C7330;
    const double C7382 = C7377 / C7330;
    const double C7381 = C7356 - C7376;
    const double C7380 = 1 - C7375;
    const double C7379 = 1 - C7374;
    const double C7378 = 1 - C7373;
    const double C7388 = C7382 - C7338;
    const double C7387 = C7381 / C7330;
    const double C7386 = C7380 * C7333;
    const double C7385 = C7379 * C7333;
    const double C7384 = C7378 * C7333;
    const double C7383 = C7378 * be;
    const double C7396 = zAB * C7386;
    const double C7395 = yAB * C7385;
    const double C7394 = C7339 * C7386;
    const double C7393 = -3 * C7384;
    const double C7392 = C7339 * C7385;
    const double C7391 = C7384 / C7343;
    const double C7390 = xAB * C7384;
    const double C7389 = C7383 / C7322;
    const double C7402 = C7360 * C7392;
    const double C7401 = C7396 / C7322;
    const double C7400 = C7395 / C7322;
    const double C7399 = C7393 / C7322;
    const double C7398 = C7390 / C7322;
    const double C7397 = C7350 - C7389;
    const double C7408 = C7402 * C7394;
    const double C7407 = C7371 - C7401;
    const double C7406 = C7369 - C7400;
    const double C7405 = xAB * C7397;
    const double C7404 = C7363 - C7398;
    const double C7403 = 2 * C7397;
    const double C7414 = C7408 / C7343;
    const double C7413 = C7407 * C7333;
    const double C7412 = C7406 * C7333;
    const double C7411 = C7405 + C7319;
    const double C7410 = C7404 * C7333;
    const double C7409 = C7404 * be;
    const double C7421 = C7339 * C7413;
    const double C7420 = C7339 * C7412;
    const double C7419 = C7411 * be;
    const double C7418 = -3 * C7409;
    const double C7417 = C7410 / C7322;
    const double C7416 = xAB * C7410;
    const double C7415 = xAB * C7409;
    const double C7426 = C7419 / C7322;
    const double C7425 = C7418 / C7322;
    const double C7424 = -C7417;
    const double C7423 = C7416 / C7322;
    const double C7422 = C7415 / C7322;
    const double C7430 = C7387 - C7426;
    const double C7429 = C7424 / C7330;
    const double C7428 = C7399 - C7423;
    const double C7427 = C7403 - C7422;
    const double C7434 = C7430 + C7388;
    const double C7433 = C7428 * be;
    const double C7432 = C7428 * C7333;
    const double C7431 = C7427 * be;
    const double C7437 = C7339 * C7434;
    const double C7436 = xAB * C7433;
    const double C7435 = C7431 / C7322;
    const double C7439 = C7436 / C7322;
    const double C7438 = C7372 - C7435;
    const double C7441 = C7425 - C7439;
    const double C7440 = C7438 - C7391;
    const double C7443 = C7441 * be;
    const double C7442 = C7339 * C7440;
    const double C7446 = C7443 / C7322;
    const double C7445 = C7442 * C7354;
    const double C7444 = C7442 * C7392;
    const double C7449 = C7429 - C7446;
    const double C7448 = C7445 * C7394;
    const double C7447 = C7348 * C7444;
    const double C7451 = C7339 * C7449;
    const double C7450 = C7448 / C7330;
    const double C7475 = C7339 * 1;
    const double C7474 = C7339 * C7351;
    const double C7473 = yAB * C7412;
    const double C7472 = -3 * C7385;
    const double C7471 = C7412 / C7322;
    const double C7470 = C7339 * C7410;
    const double C7469 = 0 * be;
    const double C7468 = C7353 / C7322;
    const double C7467 = 0 * be;
    const double C7466 = C7339 * C7384;
    const double C7465 = C7385 / C7343;
    const double C7464 = C7406 * be;
    const double C7463 = C7379 * be;
    const double C7462 = 0 * be;
    const double C7461 = C7339 * C7455;
    const double C7488 = C7473 / C7322;
    const double C7487 = C7472 / C7322;
    const double C7486 = -3 * C7464;
    const double C7485 = -C7471;
    const double C7484 = C7469 / C7322;
    const double C7483 = -C7468;
    const double C7482 = yAB * C7462;
    const double C7481 = C7467 / C7322;
    const double C7480 = C7461 * C7466;
    const double C7479 = yAB * C7464;
    const double C7478 = C7463 / C7322;
    const double C7477 = C7462 / C7322;
    const double C7476 = -2 * C7462;
    const double C7498 = C7487 - C7488;
    const double C7497 = C7486 / C7322;
    const double C7496 = C7485 / C7330;
    const double C7495 = C7483 / C7330;
    const double C7494 = C7482 / C7322;
    const double C7493 = -C7481;
    const double C7492 = C7480 * C7394;
    const double C7491 = C7479 / C7322;
    const double C7490 = -C7477;
    const double C7489 = be * C7476;
    const double C7506 = C7498 * C7333;
    const double C7505 = C7498 * be;
    const double C7504 = C7495 - C7484;
    const double C7503 = 0 - C7494;
    const double C7502 = C7493 / C7330;
    const double C7501 = C7492 / C7343;
    const double C7500 = C7490 / C7330;
    const double C7499 = C7489 / C7329;
    const double C7510 = yAB * C7505;
    const double C7509 = C7503 * be;
    const double C7508 = C7500 - C7478;
    const double C7507 = -C7499;
    const double C7515 = C7510 / C7322;
    const double C7514 = yAB * C7508;
    const double C7513 = C7509 / C7322;
    const double C7512 = 2 * C7508;
    const double C7511 = C7507 / C7330;
    const double C7519 = C7497 - C7515;
    const double C7518 = C7514 + C7459;
    const double C7517 = C7502 - C7513;
    const double C7516 = C7512 - C7491;
    const double C7523 = C7519 * be;
    const double C7522 = C7518 * be;
    const double C7521 = C7517 / C7330;
    const double C7520 = C7516 * be;
    const double C7526 = C7523 / C7322;
    const double C7525 = C7522 / C7322;
    const double C7524 = C7520 / C7322;
    const double C7529 = C7496 - C7526;
    const double C7528 = C7521 - C7525;
    const double C7527 = C7511 - C7524;
    const double C7532 = C7339 * C7529;
    const double C7531 = C7528 + C7504;
    const double C7530 = C7527 - C7465;
    const double C7534 = C7339 * C7531;
    const double C7533 = C7339 * C7530;
    const double C7536 = C7475 * C7533;
    const double C7535 = C7533 * C7466;
    const double C7538 = C7536 * C7394;
    const double C7537 = C7348 * C7535;
    const double C7539 = C7538 / C7330;
    const double C7562 = C7475 * C7392;
    const double C7561 = zAB * C7413;
    const double C7560 = -3 * C7386;
    const double C7559 = C7413 / C7322;
    const double C7558 = 0 * be;
    const double C7557 = C7355 / C7322;
    const double C7556 = 0 * be;
    const double C7555 = C7354 * C7466;
    const double C7554 = C7386 / C7343;
    const double C7553 = C7407 * be;
    const double C7552 = C7380 * be;
    const double C7551 = 0 * be;
    const double C7550 = C7466 * C7392;
    const double C7549 = C7339 * C7543;
    const double C7575 = C7561 / C7322;
    const double C7574 = C7560 / C7322;
    const double C7573 = -3 * C7553;
    const double C7572 = -C7559;
    const double C7571 = C7558 / C7322;
    const double C7570 = -C7557;
    const double C7569 = zAB * C7551;
    const double C7568 = C7556 / C7322;
    const double C7567 = zAB * C7553;
    const double C7566 = C7552 / C7322;
    const double C7565 = C7551 / C7322;
    const double C7564 = -2 * C7551;
    const double C7563 = C7549 * C7550;
    const double C7585 = C7574 - C7575;
    const double C7584 = C7573 / C7322;
    const double C7583 = C7572 / C7330;
    const double C7582 = C7570 / C7330;
    const double C7581 = C7569 / C7322;
    const double C7580 = -C7568;
    const double C7579 = C7567 / C7322;
    const double C7578 = -C7565;
    const double C7577 = be * C7564;
    const double C7576 = C7563 / C7343;
    const double C7592 = C7585 * C7333;
    const double C7591 = C7585 * be;
    const double C7590 = C7582 - C7571;
    const double C7589 = 0 - C7581;
    const double C7588 = C7580 / C7330;
    const double C7587 = C7578 / C7330;
    const double C7586 = C7577 / C7329;
    const double C7596 = zAB * C7591;
    const double C7595 = C7589 * be;
    const double C7594 = C7587 - C7566;
    const double C7593 = -C7586;
    const double C7601 = C7596 / C7322;
    const double C7600 = zAB * C7594;
    const double C7599 = C7595 / C7322;
    const double C7598 = 2 * C7594;
    const double C7597 = C7593 / C7330;
    const double C7605 = C7584 - C7601;
    const double C7604 = C7600 + C7547;
    const double C7603 = C7588 - C7599;
    const double C7602 = C7598 - C7579;
    const double C7609 = C7605 * be;
    const double C7608 = C7604 * be;
    const double C7607 = C7603 / C7330;
    const double C7606 = C7602 * be;
    const double C7612 = C7609 / C7322;
    const double C7611 = C7608 / C7322;
    const double C7610 = C7606 / C7322;
    const double C7615 = C7583 - C7612;
    const double C7614 = C7607 - C7611;
    const double C7613 = C7597 - C7610;
    const double C7618 = C7339 * C7615;
    const double C7617 = C7614 + C7590;
    const double C7616 = C7613 - C7554;
    const double C7620 = C7339 * C7617;
    const double C7619 = C7339 * C7616;
    const double C7622 = C7619 * C7562;
    const double C7621 = C7619 * C7555;
    const double C7633 = C7339 * C7319;
    const double C7632 = C7339 * C7505;
    const double C7631 = C7339 * C7397;
    const double C7630 = C7339 * C7433;
    const double C7629 = C7339 * C7508;
    const double C7628 = C7339 * C7464;
    const double C7627 = C7339 * C7409;
    const double C7626 = C7339 * C7459;
    const double C7636 = C7633 * C7628;
    const double C7635 = C7626 * C7627;
    const double C7634 = C7627 * C7628;
    const double C7639 = C7636 * C7394;
    const double C7638 = C7635 * C7394;
    const double C7637 = C7348 * C7634;
    const double C7640 = C7637 / C7343;
    const double C7650 = C7633 * C7392;
    const double C7649 = C7339 * C7591;
    const double C7648 = C7339 * C7594;
    const double C7647 = C7339 * C7553;
    const double C7646 = C7354 * C7627;
    const double C7645 = C7627 * C7392;
    const double C7644 = C7339 * C7547;
    const double C7653 = C7650 * C7647;
    const double C7652 = C7646 * C7647;
    const double C7651 = C7644 * C7645;
    const double C7654 = C7651 / C7343;
    const double C7660 = C7475 * C7628;
    const double C7659 = C7626 * C7466;
    const double C7658 = C7466 * C7628;
    const double C7663 = C7660 * C7647;
    const double C7662 = C7659 * C7647;
    const double C7661 = C7644 * C7658;
    const double C7664 = C7661 / C7343;
    const double C7708 = zAB * C7592;
    const double C7707 = -4 * C7413;
    const double C7706 = yAB * C7506;
    const double C7705 = -4 * C7412;
    const double C7704 = C7339 * C7432;
    const double C7703 = C7339 * C7592;
    const double C7702 = C7339 * C7506;
    const double C7701 = xAB * C7432;
    const double C7700 = -4 * C7410;
    const double C7714 = C7708 / C7322;
    const double C7713 = C7707 / C7322;
    const double C7712 = C7706 / C7322;
    const double C7711 = C7705 / C7322;
    const double C7710 = C7701 / C7322;
    const double C7709 = C7700 / C7322;
    const double C7717 = C7713 - C7714;
    const double C7716 = C7711 - C7712;
    const double C7715 = C7709 - C7710;
    const double C7720 = C7717 * be;
    const double C7719 = C7716 * be;
    const double C7718 = C7715 * be;
    const double C7723 = C7339 * C7720;
    const double C7722 = C7339 * C7719;
    const double C7721 = C7339 * C7718;
    const double hxx200000 =
        C7447 / C7330 -
        (C7339 *
         ((-C7432 / C7322) / C7330 -
          (((-4 * C7433) / C7322 - (xAB * C7718) / C7322) * be) / C7322) *
         C7354 * C7348) /
            2 +
        C7450;
    const double hxx020000 = (C7348 * C7461 * C7704 + C7537) / C7330 - C7501;
    const double hxx002000 =
        (C7549 * C7354 * C7704) / C7330 - C7576 + C7621 / C7330;
    const double hxx110000 =
        (C7348 * C7626 * C7721) / C7330 - C7640 - C7638 / C7343;
    const double hxx101000 =
        (C7644 * C7354 * C7721) / C7330 - C7654 - C7652 / C7343;
    const double hxx011000 =
        (C7644 * C7626 * C7704) / C7330 - C7664 - C7662 / C7343;
    const double hxy200000 =
        (C7348 * C7451 * C7366 + C7348 * C7437 * C7420) / C7330 -
        (C7437 * C7366 * C7394) / C7343;
    const double hxy020000 =
        (C7348 * C7534 * C7470 + C7348 * C7532 * C7474) / C7330 -
        (C7534 * C7474 * C7394) / C7343;
    const double hxy002000 = -(C7619 * C7474 * C7366 + C7549 * C7474 * C7420 +
                               C7549 * C7470 * C7366) /
                             C7343;
    const double hxy110000 = (C7348 * C7629 * C7630 + C7348 * C7631 * C7632 +
                              C7631 * C7629 * C7394) /
                             C7330;
    const double hxy101000 = (C7644 * C7631 * C7420) / C7330 -
                             (C7644 * C7630 * C7366) / C7343 -
                             (C7631 * C7366 * C7647) / C7343;
    const double hxy011000 = (C7644 * C7629 * C7470) / C7330 -
                             (C7644 * C7474 * C7632) / C7343 -
                             (C7629 * C7474 * C7647) / C7343;
    const double hxz200000 = (C7451 * C7354 * C7370) / C7330 -
                             (C7437 * C7392 * C7370) / C7343 +
                             (C7437 * C7354 * C7421) / C7330;
    const double hxz020000 = -(C7461 * C7474 * C7421 + C7533 * C7474 * C7370 +
                               C7461 * C7470 * C7370) /
                             C7343;
    const double hxz002000 = (C7620 * C7354 * C7470) / C7330 -
                             (C7620 * C7474 * C7392) / C7343 +
                             (C7618 * C7354 * C7474) / C7330;
    const double hxz110000 =
        (C7631 * C7626 * C7421) / C7330 -
        (C7631 * C7628 * C7370 + C7626 * C7630 * C7370) / C7343;
    const double hxz101000 = (C7648 * C7354 * C7630 + C7648 * C7631 * C7392 +
                              C7631 * C7354 * C7649) /
                             C7330;
    const double hxz011000 = (C7648 * C7626 * C7470) / C7330 -
                             (C7648 * C7474 * C7628) / C7343 -
                             (C7626 * C7474 * C7649) / C7343;
    const double hyy200000 = (C7447 + C7348 * C7360 * C7702) / C7330 - C7414;
    const double hyy020000 =
        C7537 / C7330 -
        (C7475 * C7339 *
         ((-C7506 / C7322) / C7330 -
          (((-4 * C7505) / C7322 - (yAB * C7719) / C7322) * be) / C7322) *
         C7348) /
            2 +
        C7539;
    const double hyy002000 =
        (C7549 * C7475 * C7702) / C7330 - C7576 + C7622 / C7330;
    const double hyy110000 =
        (C7348 * C7633 * C7722) / C7330 - C7640 - C7639 / C7343;
    const double hyy101000 =
        (C7644 * C7633 * C7702) / C7330 - C7654 - C7653 / C7343;
    const double hyy011000 =
        (C7644 * C7475 * C7722) / C7330 - C7664 - C7663 / C7343;
    const double hyz200000 = -(C7360 * C7366 * C7421 + C7360 * C7420 * C7370 +
                               C7442 * C7366 * C7370) /
                             C7343;
    const double hyz020000 = (C7475 * C7532 * C7370) / C7330 -
                             (C7534 * C7466 * C7370) / C7343 +
                             (C7475 * C7534 * C7421) / C7330;
    const double hyz002000 = (C7620 * C7475 * C7420) / C7330 -
                             (C7620 * C7466 * C7366) / C7343 +
                             (C7618 * C7475 * C7366) / C7330;
    const double hyz110000 =
        (C7633 * C7629 * C7421) / C7330 -
        (C7633 * C7632 * C7370 + C7629 * C7627 * C7370) / C7343;
    const double hyz101000 = (C7648 * C7633 * C7420) / C7330 -
                             (C7648 * C7627 * C7366) / C7343 -
                             (C7633 * C7366 * C7649) / C7343;
    const double hyz011000 = (C7648 * C7629 * C7466 + C7648 * C7475 * C7632 +
                              C7475 * C7629 * C7649) /
                             C7330;
    const double hzz200000 = C7450 - C7414 + (C7360 * C7354 * C7703) / C7330;
    const double hzz020000 = C7539 - C7501 + (C7475 * C7461 * C7703) / C7330;
    const double hzz002000 =
        (C7621 + C7622) / C7330 -
        (C7475 * C7354 * C7339 *
         ((-C7592 / C7322) / C7330 -
          (((-4 * C7591) / C7322 - (zAB * C7720) / C7322) * be) / C7322)) /
            2;
    const double hzz110000 =
        (C7633 * C7626 * C7703) / C7330 - (C7639 + C7638) / C7343;
    const double hzz101000 =
        (C7633 * C7354 * C7723) / C7330 - (C7653 + C7652) / C7343;
    const double hzz011000 =
        (C7475 * C7626 * C7723) / C7330 - (C7663 + C7662) / C7343;
    if (same_atom) {
        hxx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx110000;
        hxx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx011000;
        hxx[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hxx200000 - 0.5 * hxx020000 + hxx002000);
        hxx[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx101000;
        hxx[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hxx200000 - std::sqrt(0.75) * hxx020000);
        hxy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy110000;
        hxy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy011000;
        hxy[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hxy200000 - 0.5 * hxy020000 + hxy002000);
        hxy[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy101000;
        hxy[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hxy200000 - std::sqrt(0.75) * hxy020000);
        hxz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz110000;
        hxz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz011000;
        hxz[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hxz200000 - 0.5 * hxz020000 + hxz002000);
        hxz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz101000;
        hxz[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hxz200000 - std::sqrt(0.75) * hxz020000);
        hyy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy110000;
        hyy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy011000;
        hyy[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hyy200000 - 0.5 * hyy020000 + hyy002000);
        hyy[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy101000;
        hyy[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hyy200000 - std::sqrt(0.75) * hyy020000);
        hyz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz110000;
        hyz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz011000;
        hyz[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hyz200000 - 0.5 * hyz020000 + hyz002000);
        hyz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz101000;
        hyz[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hyz200000 - std::sqrt(0.75) * hyz020000);
        hzz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz110000;
        hzz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz011000;
        hzz[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hzz200000 - 0.5 * hzz020000 + hzz002000);
        hzz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz101000;
        hzz[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hzz200000 - std::sqrt(0.75) * hzz020000);
    } else {
        hxx[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx110000;
        hxx[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx011000;
        hxx[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hxx200000 - 0.5 * hxx020000 + hxx002000);
        hxx[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx101000;
        hxx[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hxx200000 - std::sqrt(0.75) * hxx020000);
        hxy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy110000;
        hxy[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy011000;
        hxy[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hxy200000 - 0.5 * hxy020000 + hxy002000);
        hxy[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy101000;
        hxy[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hxy200000 - std::sqrt(0.75) * hxy020000);
        hxz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz110000;
        hxz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz011000;
        hxz[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hxz200000 - 0.5 * hxz020000 + hxz002000);
        hxz[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz101000;
        hxz[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hxz200000 - std::sqrt(0.75) * hxz020000);
        hyy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy110000;
        hyy[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy011000;
        hyy[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hyy200000 - 0.5 * hyy020000 + hyy002000);
        hyy[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy101000;
        hyy[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hyy200000 - std::sqrt(0.75) * hyy020000);
        hyz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz110000;
        hyz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz011000;
        hyz[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hyz200000 - 0.5 * hyz020000 + hyz002000);
        hyz[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz101000;
        hyz[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hyz200000 - std::sqrt(0.75) * hyz020000);
        hzz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz110000;
        hzz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz011000;
        hzz[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hzz200000 - 0.5 * hzz020000 + hzz002000);
        hzz[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz101000;
        hzz[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hzz200000 - std::sqrt(0.75) * hzz020000);
    }
}

// Automatically generated, do not edit
void kinetic_second_derivative_21(double ae,
                                  double be,
                                  double cc,
                                  double xAB,
                                  double yAB,
                                  double zAB,
                                  double* const hxx,
                                  double* const hxy,
                                  double* const hxz,
                                  double* const hyy,
                                  double* const hyz,
                                  double* const hzz,
                                  bool same_atom,
                                  std::size_t matrix_size,
                                  std::size_t Ai,
                                  std::size_t Bi)
{
    const double C9030 = ae + be;
    const double C9035 = 2 * C9030;
    const double C9034 = xAB * be;
    const double C9033 = xAB * ae;
    const double C9049 = yAB * be;
    const double C9048 = yAB * ae;
    const double C9062 = zAB * be;
    const double C9061 = zAB * ae;
    const double C9078 = C9061 * C9062;
    const double C9077 = zAB * be;
    const double C9076 = std::pow(C9035, -1);
    const double C9075 = C9048 * C9049;
    const double C9074 = yAB * be;
    const double C9073 = 1 / C9035;
    const double C9072 = C9034 / C9030;
    const double C9071 = std::pow(C9030, 2);
    const double C9070 = 2 * C9030;
    const double C9069 = xAB * ae;
    const double C9080 = C9078 / C9071;
    const double C9079 = C9075 / C9071;
    const double C9082 = C9073 - C9080;
    const double C9081 = C9073 - C9079;
    const double C8129 = C9069 / (ae + be);
    const double C8135 = 1 / C9070 - (C9069 * xAB * be) / C9071;
    const double C8136 = std::pow(C9070, -1);
    const double C8137 = (C9033 / C9030 - C9072) / C9035 -
                         ((C9073 - (C9033 * C9034) / C9071) * C9034) / C9030;
    const double C8342 = (yAB * ae) / C9030;
    const double C8343 = -C9072;
    const double C8345 = std::pow(C9034, 2) / C9071 + C9073;
    const double C8423 = (zAB * ae) / C9030;
    const double C8452 = std::pow(C9074, 2) / C9071 + C9073;
    const double C8455 = -C9074 / C9030;
    const double C8533 =
        (C9048 / C9030 - C9049 / C9030) / C9035 - (C9081 * C9049) / C9030;
    const double C8678 = std::pow(C9077, 2) / C9071 + C9073;
    const double C8681 = -C9077 / C9030;
    const double C8768 =
        (C9061 / C9030 - C9062 / C9030) / C9035 - (C9082 * C9062) / C9030;
    const double C8143 = 0 * be;
    const double C8142 = 0 * ae;
    const double C8141 = ae * be;
    const double C8140 = 0 * be;
    const double C8139 = 0 * be;
    const double C8138 = ae + be;
    const double C8157 = C8140 / C8138;
    const double C8156 = xAB * C8139;
    const double C8155 = std::pow(C8138, 3);
    const double C8154 = C8141 * zAB;
    const double C8153 = C8141 * yAB;
    const double C8152 = C8142 / C8138;
    const double C8151 = 2 * C8141;
    const double C8150 = C8141 * xAB;
    const double C8149 = xAB * C8140;
    const double C8148 = -2 * C8140;
    const double C8147 = 2 * C8138;
    const double C8146 = std::pow(C8138, 2);
    const double C8145 = -2 * C8139;
    const double C8144 = Pi / C8138;
    const double C8167 = C8156 / C8138;
    const double C8166 = C8154 * 1;
    const double C8165 = C8153 * 1;
    const double C8164 = C8150 * 1;
    const double C8163 = 2 * C8146;
    const double C8162 = C8149 / C8138;
    const double C8161 = ae * C8148;
    const double C8160 = C8146 * C8147;
    const double C8159 = ae * C8145;
    const double C8158 = std::sqrt(C8144);
    const double C8186 = C8158 * C8137;
    const double C8185 = -4 * C8166;
    const double C8184 = -4 * C8165;
    const double C8183 = C8143 / C8163;
    const double C8182 = 0 - C8167;
    const double C8181 = 3 * C8161;
    const double C8180 = 2 * C8166;
    const double C8179 = C8158 * 1;
    const double C8178 = 2 * C8165;
    const double C8177 = C8164 / C8146;
    const double C8176 = C8140 / C8163;
    const double C8175 = 2 * C8164;
    const double C8174 = -4 * C8164;
    const double C8173 = C8161 / C8160;
    const double C8172 = C8139 / C8163;
    const double C8171 = 0 - C8162;
    const double C8170 = xAB * C8161;
    const double C8169 = C8159 / C8160;
    const double C8168 = C8158 * 1;
    const double C8199 = C8185 / C8138;
    const double C8198 = C8158 * C8180;
    const double C8197 = C8184 / C8138;
    const double C8196 = C8182 * ae;
    const double C8195 = C8158 * C8178;
    const double C8194 = be * C8181;
    const double C8193 = zAB * C8180;
    const double C8192 = yAB * C8178;
    const double C8191 = C8152 - C8177;
    const double C8190 = xAB * C8175;
    const double C8189 = C8174 / C8138;
    const double C8188 = C8171 * ae;
    const double C8187 = C8170 / C8146;
    const double C8207 = xAB * C8191;
    const double C8206 = C8196 / C8138;
    const double C8205 = C8194 / C8155;
    const double C8204 = C8193 / C8138;
    const double C8203 = C8192 / C8138;
    const double C8202 = 2 * C8191;
    const double C8201 = C8190 / C8138;
    const double C8200 = C8188 / C8138;
    const double C8214 = C8207 + C8136;
    const double C8213 = C8206 - C8183;
    const double C8212 = -C8205;
    const double C8211 = 1 - C8204;
    const double C8210 = 1 - C8203;
    const double C8209 = 1 - C8201;
    const double C8208 = C8200 - C8172;
    const double C8224 = C8214 * be;
    const double C8223 = xAB * C8208;
    const double C8222 = C8213 + C8157;
    const double C8221 = C8212 / C8147;
    const double C8220 = C8211 * C8151;
    const double C8219 = C8210 * C8151;
    const double C8218 = C8208 / C8147;
    const double C8217 = C8209 * ae;
    const double C8216 = C8209 * C8151;
    const double C8215 = 2 * C8208;
    const double C8236 = zAB * C8220;
    const double C8235 = yAB * C8219;
    const double C8234 = C8224 / C8138;
    const double C8233 = C8223 + 0;
    const double C8232 = C8222 / C8147;
    const double C8231 = C8158 * C8220;
    const double C8230 = -3 * C8216;
    const double C8229 = C8158 * C8219;
    const double C8228 = C8216 / C8163;
    const double C8227 = C8217 / C8138;
    const double C8226 = xAB * C8216;
    const double C8225 = C8187 + C8215;
    const double C8246 = C8186 * C8229;
    const double C8245 = C8236 / C8138;
    const double C8244 = C8235 / C8138;
    const double C8243 = C8233 * be;
    const double C8242 = C8230 / C8163;
    const double C8241 = C8230 / C8138;
    const double C8240 = C8226 / C8163;
    const double C8239 = C8227 - C8176;
    const double C8238 = C8226 / C8138;
    const double C8237 = C8225 * be;
    const double C8256 = C8246 * C8231;
    const double C8255 = C8199 - C8245;
    const double C8254 = C8197 - C8244;
    const double C8253 = C8239 / C8147;
    const double C8252 = C8243 / C8138;
    const double C8251 = C8202 - C8240;
    const double C8250 = xAB * C8239;
    const double C8249 = 2 * C8239;
    const double C8248 = C8189 - C8238;
    const double C8247 = C8237 / C8138;
    const double C8266 = C8256 / C8163;
    const double C8265 = C8255 * C8151;
    const double C8264 = C8254 * C8151;
    const double C8263 = C8253 - C8234;
    const double C8262 = C8232 - C8252;
    const double C8261 = C8248 * C8151;
    const double C8260 = C8251 * be;
    const double C8259 = C8250 + C8129;
    const double C8258 = C8248 * ae;
    const double C8257 = C8169 - C8247;
    const double C8278 = C8158 * C8265;
    const double C8277 = C8158 * C8264;
    const double C8276 = C8262 / C8147;
    const double C8275 = 3 * C8258;
    const double C8274 = C8261 / C8138;
    const double C8273 = xAB * C8261;
    const double C8272 = -4 * C8261;
    const double C8271 = C8260 / C8138;
    const double C8270 = C8258 / C8163;
    const double C8269 = C8259 * be;
    const double C8268 = xAB * C8258;
    const double C8267 = C8257 / C8147;
    const double C8285 = C8273 / C8163;
    const double C8284 = -C8274;
    const double C8283 = C8273 / C8138;
    const double C8282 = C8272 / C8138;
    const double C8281 = C8270 - C8271;
    const double C8280 = C8269 / C8138;
    const double C8279 = C8268 / C8138;
    const double C8290 = C8242 - C8285;
    const double C8289 = C8284 / C8147;
    const double C8288 = C8241 - C8283;
    const double C8287 = C8218 - C8280;
    const double C8286 = C8279 + C8249;
    const double C8295 = C8290 * be;
    const double C8294 = C8288 * ae;
    const double C8293 = C8288 * C8151;
    const double C8292 = C8287 + C8191;
    const double C8291 = C8286 * be;
    const double C8302 = xAB * C8292;
    const double C8301 = C8295 / C8138;
    const double C8300 = C8294 / C8163;
    const double C8299 = xAB * C8294;
    const double C8298 = xAB * C8293;
    const double C8297 = 2 * C8292;
    const double C8296 = C8291 / C8138;
    const double C8307 = C8302 + C8135;
    const double C8306 = C8300 - C8301;
    const double C8305 = C8299 + C8275;
    const double C8304 = C8298 / C8138;
    const double C8303 = C8173 - C8296;
    const double C8311 = C8307 * be;
    const double C8310 = be * C8305;
    const double C8309 = C8282 - C8304;
    const double C8308 = C8303 - C8228;
    const double C8316 = C8311 / C8138;
    const double C8315 = 3 * C8308;
    const double C8314 = C8310 / C8146;
    const double C8313 = C8309 * ae;
    const double C8312 = xAB * C8308;
    const double C8319 = C8276 - C8316;
    const double C8318 = C8289 - C8314;
    const double C8317 = C8312 + C8297;
    const double C8322 = C8319 + C8263;
    const double C8321 = xAB * C8318;
    const double C8320 = C8317 * be;
    const double C8325 = C8158 * C8322;
    const double C8324 = C8321 + C8315;
    const double C8323 = C8320 / C8138;
    const double C8327 = C8324 * be;
    const double C8326 = C8267 - C8323;
    const double C8329 = C8327 / C8138;
    const double C8328 = C8326 + C8281;
    const double C8331 = C8221 - C8329;
    const double C8330 = C8158 * C8328;
    const double C8334 = C8331 + C8306;
    const double C8333 = C8330 * C8179;
    const double C8332 = C8330 * C8229;
    const double C8337 = C8158 * C8334;
    const double C8336 = C8333 * C8231;
    const double C8335 = C8168 * C8332;
    const double C8338 = C8336 / C8147;
    const double C8361 = C8158 * C8345;
    const double C8360 = yAB * C8264;
    const double C8359 = -3 * C8219;
    const double C8358 = 0 * be;
    const double C8357 = C8210 * ae;
    const double C8356 = 0 * be;
    const double C8355 = C8175 / C8138;
    const double C8354 = C8171 * be;
    const double C8353 = C8139 / C8138;
    const double C8352 = C8288 * be;
    const double C8351 = C8254 * ae;
    const double C8350 = C8158 * C8342;
    const double C8349 = C8248 * be;
    const double C8348 = C8209 * be;
    const double C8347 = -C8157;
    const double C8346 = be * C8148;
    const double C8376 = xAB * C8352;
    const double C8375 = -3 * C8349;
    const double C8374 = C8360 / C8138;
    const double C8373 = C8359 / C8138;
    const double C8372 = C8358 / C8163;
    const double C8371 = C8357 / C8138;
    const double C8370 = C8356 / C8138;
    const double C8369 = -C8355;
    const double C8368 = C8354 / C8138;
    const double C8367 = -C8353;
    const double C8366 = C8158 * C8351;
    const double C8365 = xAB * C8349;
    const double C8364 = C8348 / C8138;
    const double C8363 = C8347 / C8147;
    const double C8362 = C8346 / C8146;
    const double C8386 = C8361 * C8366;
    const double C8385 = C8376 / C8138;
    const double C8384 = C8375 / C8138;
    const double C8383 = C8373 - C8374;
    const double C8382 = C8371 - C8372;
    const double C8381 = C8369 / C8147;
    const double C8380 = C8367 / C8147;
    const double C8379 = C8365 / C8138;
    const double C8378 = C8363 - C8364;
    const double C8377 = -C8362;
    const double C8395 = C8386 * C8231;
    const double C8394 = C8384 - C8385;
    const double C8393 = C8383 * ae;
    const double C8392 = C8158 * C8382;
    const double C8391 = C8381 - C8370;
    const double C8390 = xAB * C8378;
    const double C8389 = C8380 - C8368;
    const double C8388 = 2 * C8378;
    const double C8387 = C8377 / C8147;
    const double C8401 = C8395 / C8163;
    const double C8400 = C8394 * be;
    const double C8399 = C8158 * C8393;
    const double C8398 = C8390 + C8343;
    const double C8397 = C8389 / C8147;
    const double C8396 = C8388 - C8379;
    const double C8404 = C8400 / C8138;
    const double C8403 = C8398 * be;
    const double C8402 = C8396 * be;
    const double C8407 = C8289 - C8404;
    const double C8406 = C8403 / C8138;
    const double C8405 = C8402 / C8138;
    const double C8410 = C8158 * C8407;
    const double C8409 = C8397 - C8406;
    const double C8408 = C8387 - C8405;
    const double C8412 = C8409 + C8391;
    const double C8411 = C8408 - C8228;
    const double C8414 = C8158 * C8412;
    const double C8413 = C8158 * C8411;
    const double C8416 = C8413 * C8366;
    const double C8415 = C8413 * C8350;
    const double C8418 = C8168 * C8416;
    const double C8417 = C8415 * C8231;
    const double C8419 = C8417 / C8147;
    const double C8433 = C8361 * C8229;
    const double C8432 = zAB * C8265;
    const double C8431 = -3 * C8220;
    const double C8430 = 0 * be;
    const double C8429 = C8211 * ae;
    const double C8428 = C8255 * ae;
    const double C8427 = C8413 * C8179;
    const double C8426 = C8413 * C8229;
    const double C8425 = C8158 * C8423;
    const double C8439 = C8432 / C8138;
    const double C8438 = C8431 / C8138;
    const double C8437 = C8430 / C8163;
    const double C8436 = C8429 / C8138;
    const double C8435 = C8158 * C8428;
    const double C8434 = C8425 * C8426;
    const double C8443 = C8435 * C8433;
    const double C8442 = C8438 - C8439;
    const double C8441 = C8436 - C8437;
    const double C8440 = C8427 * C8435;
    const double C8447 = C8443 / C8163;
    const double C8446 = C8442 * ae;
    const double C8445 = C8158 * C8441;
    const double C8444 = C8440 / C8147;
    const double C8448 = C8158 * C8446;
    const double C8473 = C8383 * C8151;
    const double C8472 = C8158 * C8129;
    const double C8471 = C8158 * C8294;
    const double C8470 = C8383 * be;
    const double C8469 = C8264 / C8138;
    const double C8468 = 0 * be;
    const double C8467 = C8178 / C8138;
    const double C8466 = yAB * C8358;
    const double C8465 = 0 * be;
    const double C8464 = C8158 * C8239;
    const double C8463 = C8219 / C8163;
    const double C8462 = C8254 * be;
    const double C8461 = C8210 * be;
    const double C8460 = C8358 / C8138;
    const double C8459 = -2 * C8358;
    const double C8458 = C8158 * C8258;
    const double C8457 = C8158 * C8452;
    const double C8485 = yAB * C8470;
    const double C8484 = -3 * C8462;
    const double C8483 = -C8469;
    const double C8482 = C8468 / C8138;
    const double C8481 = -C8467;
    const double C8480 = C8466 / C8138;
    const double C8479 = C8465 / C8138;
    const double C8478 = yAB * C8462;
    const double C8477 = C8461 / C8138;
    const double C8476 = -C8460;
    const double C8475 = be * C8459;
    const double C8474 = C8457 * C8458;
    const double C8495 = C8485 / C8138;
    const double C8494 = C8484 / C8138;
    const double C8493 = C8483 / C8147;
    const double C8492 = C8481 / C8147;
    const double C8491 = 0 - C8480;
    const double C8490 = -C8479;
    const double C8489 = C8478 / C8138;
    const double C8488 = C8476 / C8147;
    const double C8487 = C8475 / C8146;
    const double C8486 = C8474 * C8231;
    const double C8502 = C8494 - C8495;
    const double C8501 = C8492 - C8482;
    const double C8500 = C8491 * be;
    const double C8499 = C8490 / C8147;
    const double C8498 = C8488 - C8477;
    const double C8497 = -C8487;
    const double C8496 = C8486 / C8163;
    const double C8507 = C8502 * be;
    const double C8506 = yAB * C8498;
    const double C8505 = C8500 / C8138;
    const double C8504 = 2 * C8498;
    const double C8503 = C8497 / C8147;
    const double C8511 = C8507 / C8138;
    const double C8510 = C8506 + C8455;
    const double C8509 = C8499 - C8505;
    const double C8508 = C8504 - C8489;
    const double C8515 = C8493 - C8511;
    const double C8514 = C8510 * be;
    const double C8513 = C8509 / C8147;
    const double C8512 = C8508 * be;
    const double C8518 = C8158 * C8515;
    const double C8517 = C8514 / C8138;
    const double C8516 = C8512 / C8138;
    const double C8520 = C8513 - C8517;
    const double C8519 = C8503 - C8516;
    const double C8522 = C8520 + C8501;
    const double C8521 = C8519 - C8463;
    const double C8524 = C8158 * C8522;
    const double C8523 = C8158 * C8521;
    const double C8526 = C8472 * C8523;
    const double C8525 = C8523 * C8458;
    const double C8528 = C8526 * C8231;
    const double C8527 = C8168 * C8525;
    const double C8529 = C8528 / C8147;
    const double C8564 = yAB * C8473;
    const double C8563 = -4 * C8264;
    const double C8562 = C8158 * 1;
    const double C8561 = C8158 * C8175;
    const double C8560 = C8360 / C8163;
    const double C8559 = C8359 / C8163;
    const double C8558 = C8393 / C8163;
    const double C8557 = 3 * C8351;
    const double C8556 = yAB * C8393;
    const double C8555 = C8158 * C8261;
    const double C8554 = C8382 / C8147;
    const double C8553 = 0 * be;
    const double C8552 = yAB * C8465;
    const double C8551 = C8158 * C8216;
    const double C8550 = C8235 / C8163;
    const double C8549 = C8351 / C8163;
    const double C8548 = C8165 / C8146;
    const double C8547 = 0 * ae;
    const double C8546 = yAB * C8382;
    const double C8545 = 2 * C8382;
    const double C8544 = yAB * C8351;
    const double C8543 = C8465 / C8163;
    const double C8542 = C8491 * ae;
    const double C8541 = ae * C8459;
    const double C8540 = -2 * C8465;
    const double C8539 = C8158 * C8533;
    const double C8579 = C8564 / C8138;
    const double C8578 = C8563 / C8138;
    const double C8577 = C8559 - C8560;
    const double C8576 = C8556 + C8557;
    const double C8575 = 3 * C8541;
    const double C8574 = C8553 / C8163;
    const double C8573 = C8552 / C8138;
    const double C8572 = C8539 * C8551;
    const double C8571 = C8547 / C8138;
    const double C8570 = C8546 + C8342;
    const double C8569 = C8544 / C8138;
    const double C8568 = C8541 / C8160;
    const double C8567 = C8542 / C8138;
    const double C8566 = yAB * C8541;
    const double C8565 = ae * C8540;
    const double C8591 = C8578 - C8579;
    const double C8590 = C8577 * be;
    const double C8589 = be * C8576;
    const double C8588 = be * C8575;
    const double C8587 = 0 - C8573;
    const double C8586 = C8572 * C8231;
    const double C8585 = C8571 - C8548;
    const double C8584 = C8570 * be;
    const double C8583 = C8569 + C8545;
    const double C8582 = C8567 - C8543;
    const double C8581 = C8566 / C8146;
    const double C8580 = C8565 / C8160;
    const double C8604 = C8591 * ae;
    const double C8603 = C8590 / C8138;
    const double C8602 = C8589 / C8146;
    const double C8601 = C8588 / C8155;
    const double C8600 = yAB * C8585;
    const double C8599 = yAB * C8582;
    const double C8598 = C8587 * ae;
    const double C8597 = C8586 / C8163;
    const double C8596 = 2 * C8585;
    const double C8595 = C8584 / C8138;
    const double C8594 = C8582 / C8147;
    const double C8593 = C8583 * be;
    const double C8592 = 2 * C8582;
    const double C8614 = C8558 - C8603;
    const double C8613 = C8493 - C8602;
    const double C8612 = -C8601;
    const double C8611 = C8600 + C9076;
    const double C8610 = C8599 + 0;
    const double C8609 = C8598 / C8138;
    const double C8608 = C8596 - C8550;
    const double C8607 = C8594 - C8595;
    const double C8606 = C8593 / C8138;
    const double C8605 = C8581 + C8592;
    const double C8623 = yAB * C8613;
    const double C8622 = C8612 / C8147;
    const double C8621 = C8611 * be;
    const double C8620 = C8610 * be;
    const double C8619 = C8609 - C8574;
    const double C8618 = C8608 * be;
    const double C8617 = C8607 + C8585;
    const double C8616 = C8568 - C8606;
    const double C8615 = C8605 * be;
    const double C8631 = C8621 / C8138;
    const double C8630 = yAB * C8617;
    const double C8629 = C8620 / C8138;
    const double C8628 = C8619 + C8460;
    const double C8627 = C8618 / C8138;
    const double C8626 = 2 * C8617;
    const double C8625 = C8616 - C8463;
    const double C8624 = C8615 / C8138;
    const double C8638 = 3 * C8625;
    const double C8637 = C8554 - C8631;
    const double C8636 = C8630 + C9081;
    const double C8635 = C8628 / C8147;
    const double C8634 = C8549 - C8627;
    const double C8633 = yAB * C8625;
    const double C8632 = C8580 - C8624;
    const double C8643 = C8623 + C8638;
    const double C8642 = C8636 * be;
    const double C8641 = C8635 - C8629;
    const double C8640 = C8633 + C8626;
    const double C8639 = C8632 / C8147;
    const double C8647 = C8643 * be;
    const double C8646 = C8642 / C8138;
    const double C8645 = C8641 / C8147;
    const double C8644 = C8640 * be;
    const double C8650 = C8647 / C8138;
    const double C8649 = C8645 - C8646;
    const double C8648 = C8644 / C8138;
    const double C8653 = C8622 - C8650;
    const double C8652 = C8649 + C8637;
    const double C8651 = C8639 - C8648;
    const double C8656 = C8653 + C8614;
    const double C8655 = C8158 * C8652;
    const double C8654 = C8651 + C8634;
    const double C8658 = C8158 * C8656;
    const double C8657 = C8158 * C8654;
    const double C8660 = C8562 * C8657;
    const double C8659 = C8657 * C8551;
    const double C8662 = C8660 * C8231;
    const double C8661 = C8168 * C8659;
    const double C8663 = C8662 / C8147;
    const double C8669 = C8562 * C8523;
    const double C8668 = C8457 * C8551;
    const double C8667 = C8523 * C8551;
    const double C8672 = C8669 * C8435;
    const double C8671 = C8435 * C8668;
    const double C8670 = C8425 * C8667;
    const double C8674 = C8672 / C8147;
    const double C8673 = C8671 / C8163;
    const double C8698 = C8442 * C8151;
    const double C8697 = C8472 * C8229;
    const double C8696 = C8442 * be;
    const double C8695 = C8265 / C8138;
    const double C8694 = 0 * be;
    const double C8693 = C8180 / C8138;
    const double C8692 = zAB * C8430;
    const double C8691 = 0 * be;
    const double C8690 = C8179 * C8458;
    const double C8689 = C8220 / C8163;
    const double C8688 = C8255 * be;
    const double C8687 = C8211 * be;
    const double C8686 = C8430 / C8138;
    const double C8685 = -2 * C8430;
    const double C8684 = C8458 * C8229;
    const double C8683 = C8158 * C8678;
    const double C8710 = zAB * C8696;
    const double C8709 = -3 * C8688;
    const double C8708 = -C8695;
    const double C8707 = C8694 / C8138;
    const double C8706 = -C8693;
    const double C8705 = C8692 / C8138;
    const double C8704 = C8691 / C8138;
    const double C8703 = zAB * C8688;
    const double C8702 = C8687 / C8138;
    const double C8701 = -C8686;
    const double C8700 = be * C8685;
    const double C8699 = C8683 * C8684;
    const double C8720 = C8710 / C8138;
    const double C8719 = C8709 / C8138;
    const double C8718 = C8708 / C8147;
    const double C8717 = C8706 / C8147;
    const double C8716 = 0 - C8705;
    const double C8715 = -C8704;
    const double C8714 = C8703 / C8138;
    const double C8713 = C8701 / C8147;
    const double C8712 = C8700 / C8146;
    const double C8711 = C8699 / C8163;
    const double C8726 = C8719 - C8720;
    const double C8725 = C8717 - C8707;
    const double C8724 = C8716 * be;
    const double C8723 = C8715 / C8147;
    const double C8722 = C8713 - C8702;
    const double C8721 = -C8712;
    const double C8731 = C8726 * be;
    const double C8730 = zAB * C8722;
    const double C8729 = C8724 / C8138;
    const double C8728 = 2 * C8722;
    const double C8727 = C8721 / C8147;
    const double C8735 = C8731 / C8138;
    const double C8734 = C8730 + C8681;
    const double C8733 = C8723 - C8729;
    const double C8732 = C8728 - C8714;
    const double C8739 = C8718 - C8735;
    const double C8738 = C8734 * be;
    const double C8737 = C8733 / C8147;
    const double C8736 = C8732 * be;
    const double C8742 = C8158 * C8739;
    const double C8741 = C8738 / C8138;
    const double C8740 = C8736 / C8138;
    const double C8744 = C8737 - C8741;
    const double C8743 = C8727 - C8740;
    const double C8746 = C8744 + C8725;
    const double C8745 = C8743 - C8689;
    const double C8748 = C8158 * C8746;
    const double C8747 = C8158 * C8745;
    const double C8750 = C8747 * C8697;
    const double C8749 = C8747 * C8690;
    const double C8752 = C8750 / C8147;
    const double C8751 = C8749 / C8147;
    const double C8758 = C8562 * C8366;
    const double C8757 = C8350 * C8551;
    const double C8756 = C8366 * C8551;
    const double C8761 = C8747 * C8758;
    const double C8760 = C8747 * C8757;
    const double C8759 = C8683 * C8756;
    const double C8764 = C8761 / C8147;
    const double C8763 = C8760 / C8147;
    const double C8762 = C8759 / C8163;
    const double C8798 = zAB * C8698;
    const double C8797 = -4 * C8265;
    const double C8796 = C8562 * C8229;
    const double C8795 = C8432 / C8163;
    const double C8794 = C8431 / C8163;
    const double C8793 = C8446 / C8163;
    const double C8792 = 3 * C8428;
    const double C8791 = zAB * C8446;
    const double C8790 = C8441 / C8147;
    const double C8789 = 0 * be;
    const double C8788 = zAB * C8691;
    const double C8787 = C8179 * C8551;
    const double C8786 = C8236 / C8163;
    const double C8785 = C8428 / C8163;
    const double C8784 = C8166 / C8146;
    const double C8783 = 0 * ae;
    const double C8782 = zAB * C8441;
    const double C8781 = 2 * C8441;
    const double C8780 = zAB * C8428;
    const double C8779 = C8691 / C8163;
    const double C8778 = C8716 * ae;
    const double C8777 = ae * C8685;
    const double C8776 = -2 * C8691;
    const double C8775 = C8551 * C8229;
    const double C8774 = C8158 * C8768;
    const double C8813 = C8798 / C8138;
    const double C8812 = C8797 / C8138;
    const double C8811 = C8794 - C8795;
    const double C8810 = C8791 + C8792;
    const double C8809 = 3 * C8777;
    const double C8808 = C8789 / C8163;
    const double C8807 = C8788 / C8138;
    const double C8806 = C8783 / C8138;
    const double C8805 = C8782 + C8423;
    const double C8804 = C8780 / C8138;
    const double C8803 = C8777 / C8160;
    const double C8802 = C8778 / C8138;
    const double C8801 = zAB * C8777;
    const double C8800 = ae * C8776;
    const double C8799 = C8774 * C8775;
    const double C8825 = C8812 - C8813;
    const double C8824 = C8811 * be;
    const double C8823 = be * C8810;
    const double C8822 = be * C8809;
    const double C8821 = 0 - C8807;
    const double C8820 = C8806 - C8784;
    const double C8819 = C8805 * be;
    const double C8818 = C8804 + C8781;
    const double C8817 = C8802 - C8779;
    const double C8816 = C8801 / C8146;
    const double C8815 = C8800 / C8160;
    const double C8814 = C8799 / C8163;
    const double C8837 = C8825 * ae;
    const double C8836 = C8824 / C8138;
    const double C8835 = C8823 / C8146;
    const double C8834 = C8822 / C8155;
    const double C8833 = zAB * C8820;
    const double C8832 = zAB * C8817;
    const double C8831 = C8821 * ae;
    const double C8830 = 2 * C8820;
    const double C8829 = C8819 / C8138;
    const double C8828 = C8817 / C8147;
    const double C8827 = C8818 * be;
    const double C8826 = 2 * C8817;
    const double C8847 = C8793 - C8836;
    const double C8846 = C8718 - C8835;
    const double C8845 = -C8834;
    const double C8844 = C8833 + C9076;
    const double C8843 = C8832 + 0;
    const double C8842 = C8831 / C8138;
    const double C8841 = C8830 - C8786;
    const double C8840 = C8828 - C8829;
    const double C8839 = C8827 / C8138;
    const double C8838 = C8816 + C8826;
    const double C8856 = zAB * C8846;
    const double C8855 = C8845 / C8147;
    const double C8854 = C8844 * be;
    const double C8853 = C8843 * be;
    const double C8852 = C8842 - C8808;
    const double C8851 = C8841 * be;
    const double C8850 = C8840 + C8820;
    const double C8849 = C8803 - C8839;
    const double C8848 = C8838 * be;
    const double C8864 = C8854 / C8138;
    const double C8863 = zAB * C8850;
    const double C8862 = C8853 / C8138;
    const double C8861 = C8852 + C8686;
    const double C8860 = C8851 / C8138;
    const double C8859 = 2 * C8850;
    const double C8858 = C8849 - C8689;
    const double C8857 = C8848 / C8138;
    const double C8871 = 3 * C8858;
    const double C8870 = C8790 - C8864;
    const double C8869 = C8863 + C9082;
    const double C8868 = C8861 / C8147;
    const double C8867 = C8785 - C8860;
    const double C8866 = zAB * C8858;
    const double C8865 = C8815 - C8857;
    const double C8876 = C8856 + C8871;
    const double C8875 = C8869 * be;
    const double C8874 = C8868 - C8862;
    const double C8873 = C8866 + C8859;
    const double C8872 = C8865 / C8147;
    const double C8880 = C8876 * be;
    const double C8879 = C8875 / C8138;
    const double C8878 = C8874 / C8147;
    const double C8877 = C8873 * be;
    const double C8883 = C8880 / C8138;
    const double C8882 = C8878 - C8879;
    const double C8881 = C8877 / C8138;
    const double C8886 = C8855 - C8883;
    const double C8885 = C8882 + C8870;
    const double C8884 = C8872 - C8881;
    const double C8889 = C8886 + C8847;
    const double C8888 = C8158 * C8885;
    const double C8887 = C8884 + C8867;
    const double C8891 = C8158 * C8889;
    const double C8890 = C8158 * C8887;
    const double C8893 = C8890 * C8796;
    const double C8892 = C8890 * C8787;
    const double C8904 = C8158 * C8135;
    const double C8903 = C8158 * C8498;
    const double C8902 = C8158 * C8318;
    const double C8901 = C8158 * C8470;
    const double C8900 = C8158 * C8292;
    const double C8899 = C8158 * C8455;
    const double C8898 = C8158 * C8462;
    const double C8897 = C8158 * C8308;
    const double C8907 = C8904 * C8898;
    const double C8906 = C8897 * C8899;
    const double C8905 = C8897 * C8898;
    const double C8910 = C8907 * C8231;
    const double C8909 = C8906 * C8231;
    const double C8908 = C8168 * C8905;
    const double C8912 = C8910 / C8163;
    const double C8911 = C8909 / C8147;
    const double C8923 = C8158 * C8343;
    const double C8922 = C8158 * C8613;
    const double C8921 = C8158 * C8378;
    const double C8920 = C8158 * C8352;
    const double C8919 = C8158 * C8617;
    const double C8918 = C8158 * C8349;
    const double C8917 = C8158 * C8625;
    const double C8916 = C8158 * C9081;
    const double C8926 = C8923 * C8917;
    const double C8925 = C8916 * C8918;
    const double C8924 = C8917 * C8918;
    const double C8929 = C8926 * C8231;
    const double C8928 = C8925 * C8231;
    const double C8927 = C8168 * C8924;
    const double C8931 = C8929 / C8147;
    const double C8930 = C8928 / C8163;
    const double C8937 = C8923 * C8898;
    const double C8936 = C8899 * C8918;
    const double C8935 = C8918 * C8898;
    const double C8940 = C8435 * C8937;
    const double C8939 = C8435 * C8936;
    const double C8938 = C8425 * C8935;
    const double C8941 = C8938 / C8163;
    const double C8951 = C8904 * C8229;
    const double C8950 = C8158 * C8696;
    const double C8949 = C8158 * C8722;
    const double C8948 = C8158 * C8688;
    const double C8947 = C8897 * C8179;
    const double C8946 = C8897 * C8229;
    const double C8945 = C8158 * C8681;
    const double C8954 = C8951 * C8948;
    const double C8953 = C8947 * C8948;
    const double C8952 = C8945 * C8946;
    const double C8956 = C8954 / C8163;
    const double C8955 = C8953 / C8147;
    const double C8962 = C8923 * C8366;
    const double C8961 = C8350 * C8918;
    const double C8960 = C8366 * C8918;
    const double C8965 = C8962 * C8948;
    const double C8964 = C8961 * C8948;
    const double C8963 = C8945 * C8960;
    const double C8968 = C8965 / C8163;
    const double C8967 = C8964 / C8163;
    const double C8966 = C8963 / C8163;
    const double C8978 = C8923 * C8229;
    const double C8977 = C8158 * C8846;
    const double C8976 = C8158 * C8850;
    const double C8975 = C8179 * C8918;
    const double C8974 = C8158 * C8858;
    const double C8973 = C8918 * C8229;
    const double C8972 = C8158 * C9082;
    const double C8981 = C8974 * C8978;
    const double C8980 = C8974 * C8975;
    const double C8979 = C8972 * C8973;
    const double C8982 = C8979 / C8163;
    const double C8988 = C8472 * C8898;
    const double C8987 = C8899 * C8458;
    const double C8986 = C8458 * C8898;
    const double C8991 = C8988 * C8948;
    const double C8990 = C8987 * C8948;
    const double C8989 = C8945 * C8986;
    const double C8994 = C8991 / C8163;
    const double C8993 = C8990 / C8163;
    const double C8992 = C8989 / C8163;
    const double C9000 = C8562 * C8917;
    const double C8999 = C8916 * C8551;
    const double C8998 = C8917 * C8551;
    const double C9003 = C9000 * C8948;
    const double C9002 = C8999 * C8948;
    const double C9001 = C8945 * C8998;
    const double C9005 = C9003 / C8147;
    const double C9004 = C9002 / C8163;
    const double C9011 = C8562 * C8898;
    const double C9010 = C8899 * C8551;
    const double C9009 = C8551 * C8898;
    const double C9014 = C8974 * C9011;
    const double C9013 = C8974 * C9010;
    const double C9012 = C8972 * C9009;
    const double C9015 = C9012 / C8163;
    const double C9107 = 4 * C8446;
    const double C9106 = zAB * C8837;
    const double C9105 = C8825 * be;
    const double C9104 = -4 * C8696;
    const double C9103 = C8698 / C8138;
    const double C9102 = 4 * C8393;
    const double C9101 = yAB * C8604;
    const double C9100 = C8158 * C8293;
    const double C9099 = C8591 * be;
    const double C9098 = -4 * C8470;
    const double C9097 = C8473 / C8138;
    const double C9096 = C8158 * C8313;
    const double C9095 = C8158 * C8837;
    const double C9094 = C8158 * C8604;
    const double C9093 = C8309 * be;
    const double C9092 = -4 * C8352;
    const double C9091 = C8158 * C8698;
    const double C9090 = C8158 * C8473;
    const double C9089 = 4 * C8294;
    const double C9088 = xAB * C8313;
    const double C9087 = C8293 / C8138;
    const double C9122 = C8158 * C9105;
    const double C9121 = C8158 * C9093;
    const double C9120 = C8158 * C9099;
    const double C9119 = C9106 + C9107;
    const double C9118 = zAB * C9105;
    const double C9117 = C9104 / C8138;
    const double C9116 = -C9103;
    const double C9115 = C9101 + C9102;
    const double C9114 = yAB * C9099;
    const double C9113 = C9098 / C8138;
    const double C9112 = -C9097;
    const double C9111 = xAB * C9093;
    const double C9110 = C9092 / C8138;
    const double C9109 = C9088 + C9089;
    const double C9108 = -C9087;
    const double C9131 = be * C9119;
    const double C9130 = C9118 / C8138;
    const double C9129 = C9116 / C8147;
    const double C9128 = be * C9115;
    const double C9127 = C9114 / C8138;
    const double C9126 = C9112 / C8147;
    const double C9125 = C9111 / C8138;
    const double C9124 = be * C9109;
    const double C9123 = C9108 / C8147;
    const double C9137 = C9131 / C8146;
    const double C9136 = C9117 - C9130;
    const double C9135 = C9128 / C8146;
    const double C9134 = C9113 - C9127;
    const double C9133 = C9110 - C9125;
    const double C9132 = C9124 / C8146;
    const double C9143 = C9129 - C9137;
    const double C9142 = C9136 * be;
    const double C9141 = C9126 - C9135;
    const double C9140 = C9134 * be;
    const double C9139 = C9133 * be;
    const double C9138 = C9123 - C9132;
    const double C9149 = C8158 * C9143;
    const double C9148 = C8158 * C9141;
    const double C9147 = C8158 * C9138;
    const double C9146 = C9142 / C8138;
    const double C9145 = C9140 / C8138;
    const double C9144 = C9139 / C8138;
    const double C9152 = C9129 - C9146;
    const double C9151 = C9126 - C9145;
    const double C9150 = C9123 - C9144;
    const double C9155 = C8158 * C9152;
    const double C9154 = C8158 * C9151;
    const double C9153 = C8158 * C9150;
    const double hxx200100 =
        C8335 / C8147 -
        (C8158 *
         (C8313 / C8163 -
          (((-2 * C8261) / C8146 - C8298 / C8163) * be) / C8138 -
          ((xAB * C9138 + 4 * C8318) * be) / C8138) *
         C8179 * C8168) /
            2 +
        C8338;
    const double hxx200010 =
        C8419 - (C8418 / C8147 + (C9153 * C8350 * C8168) / 2);
    const double hxx200001 =
        C8434 / C8147 - (C9153 * C8179 * C8425) / 2 - C8444;
    const double hxx020100 = C8496 - (C8527 + C8168 * C8457 * C9096) / C8147;
    const double hxx020010 = (C8168 * C8539 * C9100 + C8661) / C8147 - C8597;
    const double hxx020001 = (C8425 * C8457 * C9100 + C8670) / C8147 + C8673;
    const double hxx002100 = C8711 - (C8683 * C8179 * C9096) / C8147 - C8751;
    const double hxx002010 = (C8683 * C8350 * C9100) / C8147 + C8762 + C8763;
    const double hxx002001 =
        (C8774 * C8179 * C9100) / C8147 - C8814 + C8892 / C8147;
    const double hxx110100 =
        C8908 / C8147 - (C9147 * C8899 * C8168) / 2 + C8911;
    const double hxx110010 = (C8168 * C8916 * C9121 + C8927) / C8147 - C8930;
    const double hxx110001 =
        (C8425 * C8899 * C9121) / C8147 - C8941 + C8939 / C8163;
    const double hxx101100 =
        C8952 / C8147 - (C9147 * C8179 * C8945) / 2 + C8955;
    const double hxx101010 = (C8945 * C8350 * C9121) / C8147 + C8966 - C8967;
    const double hxx101001 =
        (C8972 * C8179 * C9121) / C8147 - C8982 + C8980 / C8147;
    const double hxx011100 = C8992 - (C8945 * C8899 * C9096) / C8147 + C8993;
    const double hxx011010 = (C8945 * C8916 * C9100 + C9001) / C8147 - C9004;
    const double hxx011001 =
        (C8972 * C8899 * C9100) / C8147 - C9015 + C9013 / C8147;
    const double hxy200100 =
        (C8168 * C8337 * C8195 + C8168 * C8325 * C8277) / C8147 -
        (C8325 * C8195 * C8231) / C8163;
    const double hxy200010 =
        (C8414 * C8392 * C8231) / C8147 -
        ((C8168 * C8414 * C8399) / C8147 + (C8410 * C8392 * C8168) / 2);
    const double hxy200001 =
        (C8425 * C8410 * C8195 + C8425 * C8414 * C8277) / C8147 +
        (C8435 * C8414 * C8195) / C8163;
    const double hxy020100 =
        (C8464 * C8524 * C8231) / C8147 -
        ((C8464 * C8518 * C8168) / 2 + (C8168 * C8524 * C8471) / C8147);
    const double hxy020010 =
        (C8168 * C8655 * C8555 + C8168 * C8658 * C8561) / C8147 -
        (C8655 * C8561 * C8231) / C8163;
    const double hxy020001 =
        (C8425 * C8524 * C8555 + C8425 * C8518 * C8561) / C8147 +
        (C8435 * C8524 * C8561) / C8163;
    const double hxy002100 = (C8683 * C8471 * C8195) / C8163 +
                             (C8683 * C8464 * C8277) / C8147 +
                             (C8747 * C8464 * C8195) / C8147;
    const double hxy002010 = (C8683 * C8392 * C8555) / C8147 +
                             (C8683 * C8399 * C8561) / C8163 +
                             (C8747 * C8392 * C8561) / C8147;
    const double hxy002001 = -(C8890 * C8561 * C8195 + C8774 * C8561 * C8277 +
                               C8774 * C8555 * C8195) /
                             C8163;
    const double hxy110100 = (C8168 * C8900 * C8901) / C8147 -
                             (C8902 * C8903 * C8168) / 2 +
                             (C8900 * C8903 * C8231) / C8147;
    const double hxy110010 = (C8168 * C8919 * C8920) / C8147 -
                             (C8921 * C8922 * C8168) / 2 +
                             (C8921 * C8919 * C8231) / C8147;
    const double hxy110001 =
        (C8425 * C8903 * C8920 + C8425 * C8921 * C8901) / C8147 -
        (C8921 * C8903 * C8435) / C8147;
    const double hxy101100 =
        (C8945 * C8902 * C8195 + C8945 * C8900 * C8277) / C8147 -
        (C8900 * C8195 * C8948) / C8163;
    const double hxy101010 = (C8945 * C8392 * C8920) / C8147 -
                             (C8945 * C8921 * C8399) / C8147 +
                             (C8921 * C8392 * C8948) / C8147;
    const double hxy101001 = (C8972 * C8921 * C8277) / C8147 -
                             (C8972 * C8920 * C8195) / C8163 +
                             (C8974 * C8921 * C8195) / C8147;
    const double hxy011100 = (C8945 * C8464 * C8901) / C8147 -
                             (C8945 * C8903 * C8471) / C8147 +
                             (C8464 * C8903 * C8948) / C8147;
    const double hxy011010 =
        (C8945 * C8919 * C8555 + C8945 * C8922 * C8561) / C8147 -
        (C8919 * C8561 * C8948) / C8163;
    const double hxy011001 = (C8972 * C8903 * C8555) / C8147 -
                             (C8972 * C8561 * C8901) / C8163 +
                             (C8974 * C8903 * C8561) / C8147;
    const double hxz200100 = (C8337 * C8179 * C8198) / C8147 -
                             (C8325 * C8229 * C8198) / C8163 +
                             (C8325 * C8179 * C8278) / C8147;
    const double hxz200010 = (C8410 * C8350 * C8198) / C8147 +
                             (C8414 * C8366 * C8198) / C8163 +
                             (C8414 * C8350 * C8278) / C8147;
    const double hxz200001 = (C8445 * C8414 * C8229) / C8147 -
                             (C8410 * C8179 * C8445) / 2 -
                             (C8414 * C8179 * C8448) / C8147;
    const double hxz020100 = (C8457 * C8471 * C8198) / C8163 +
                             (C8464 * C8523 * C8198) / C8147 +
                             (C8464 * C8457 * C8278) / C8147;
    const double hxz020010 = -(C8539 * C8561 * C8278 + C8657 * C8561 * C8198 +
                               C8539 * C8555 * C8198) /
                             C8163;
    const double hxz020001 =
        (C8445 * C8457 * C8555 + C8445 * C8523 * C8561) / C8147 +
        (C8448 * C8457 * C8561) / C8163;
    const double hxz002100 = (C8748 * C8464 * C8229) / C8147 -
                             (C8748 * C8179 * C8471) / C8147 -
                             (C8464 * C8179 * C8742) / 2;
    const double hxz002010 = (C8748 * C8350 * C8555) / C8147 +
                             (C8748 * C8366 * C8561) / C8163 +
                             (C8742 * C8350 * C8561) / C8147;
    const double hxz002001 = (C8888 * C8179 * C8555) / C8147 -
                             (C8888 * C8561 * C8229) / C8163 +
                             (C8891 * C8179 * C8561) / C8147;
    const double hxz110100 = (C8902 * C8899 * C8198) / C8147 -
                             (C8900 * C8898 * C8198) / C8163 +
                             (C8900 * C8899 * C8278) / C8147;
    const double hxz110010 = (C8921 * C8917 * C8198) / C8147 -
                             (C8916 * C8920 * C8198) / C8163 +
                             (C8921 * C8916 * C8278) / C8147;
    const double hxz110001 =
        (C8445 * C8899 * C8920 + C8445 * C8921 * C8898) / C8147 -
        (C8921 * C8899 * C8448) / C8147;
    const double hxz101100 = (C8949 * C8900 * C8229) / C8147 -
                             (C8902 * C8179 * C8949) / 2 +
                             (C8900 * C8179 * C8950) / C8147;
    const double hxz101010 = (C8949 * C8350 * C8920) / C8147 -
                             (C8949 * C8921 * C8366) / C8147 +
                             (C8921 * C8350 * C8950) / C8147;
    const double hxz101001 =
        (C8976 * C8179 * C8920 + C8976 * C8921 * C8229) / C8147 -
        (C8921 * C8179 * C8977) / 2;
    const double hxz011100 = (C8949 * C8464 * C8898) / C8147 -
                             (C8949 * C8899 * C8471) / C8147 +
                             (C8464 * C8899 * C8950) / C8147;
    const double hxz011010 =
        (C8949 * C8916 * C8555 + C8949 * C8917 * C8561) / C8147 -
        (C8916 * C8561 * C8950) / C8163;
    const double hxz011001 = (C8976 * C8899 * C8555) / C8147 -
                             (C8976 * C8561 * C8898) / C8163 +
                             (C8977 * C8899 * C8561) / C8147;
    const double hyy200100 = (C8335 + C8168 * C8186 * C9090) / C8147 - C8266;
    const double hyy200010 = C8401 - (C8168 * C8361 * C9094 + C8418) / C8147;
    const double hyy200001 = (C8434 + C8425 * C8361 * C9090) / C8147 + C8447;
    const double hyy020100 =
        C8529 - ((C8472 * C9154 * C8168) / 2 + C8527 / C8147);
    const double hyy020010 =
        C8661 / C8147 -
        (C8562 * C8158 *
         (C8604 / C8163 -
          (((-2 * C8264) / C8146 - C8564 / C8163) * be) / C8138 -
          ((yAB * C9141 + 4 * C8613) * be) / C8138) *
         C8168) /
            2 +
        C8663;
    const double hyy020001 =
        C8670 / C8147 - (C8562 * C9154 * C8425) / 2 - C8674;
    const double hyy002100 = C8711 + (C8683 * C8472 * C9090) / C8147 + C8752;
    const double hyy002010 = C8762 - (C8683 * C8562 * C9094) / C8147 - C8764;
    const double hyy002001 =
        (C8774 * C8562 * C9090) / C8147 - C8814 + C8893 / C8147;
    const double hyy110100 = (C8908 + C8168 * C8904 * C9120) / C8147 - C8912;
    const double hyy110010 =
        C8927 / C8147 - (C8923 * C9148 * C8168) / 2 + C8931;
    const double hyy110001 =
        (C8425 * C8923 * C9120) / C8147 - C8941 + C8940 / C8163;
    const double hyy101100 = (C8952 + C8945 * C8904 * C9090) / C8147 - C8956;
    const double hyy101010 = C8966 - (C8945 * C8923 * C9094) / C8147 + C8968;
    const double hyy101001 =
        (C8972 * C8923 * C9090) / C8147 - C8982 + C8981 / C8147;
    const double hyy011100 = C8992 + (C8945 * C8472 * C9120) / C8147 - C8994;
    const double hyy011010 =
        C9001 / C8147 - (C8562 * C9148 * C8945) / 2 + C9005;
    const double hyy011001 =
        (C8972 * C8562 * C9120) / C8147 - C9015 + C9014 / C8147;
    const double hyz200100 = -(C8186 * C8195 * C8278 + C8186 * C8277 * C8198 +
                               C8330 * C8195 * C8198) /
                             C8163;
    const double hyz200010 = (C8413 * C8392 * C8198) / C8147 +
                             (C8361 * C8399 * C8198) / C8163 +
                             (C8361 * C8392 * C8278) / C8147;
    const double hyz200001 =
        (C8445 * C8413 * C8195 + C8445 * C8361 * C8277) / C8147 +
        (C8448 * C8361 * C8195) / C8163;
    const double hyz020100 = (C8524 * C8458 * C8198) / C8163 +
                             (C8472 * C8518 * C8198) / C8147 +
                             (C8472 * C8524 * C8278) / C8147;
    const double hyz020010 = (C8562 * C8658 * C8198) / C8147 -
                             (C8655 * C8551 * C8198) / C8163 +
                             (C8562 * C8655 * C8278) / C8147;
    const double hyz020001 = (C8445 * C8524 * C8551) / C8147 -
                             (C8562 * C8518 * C8445) / 2 -
                             (C8562 * C8524 * C8448) / C8147;
    const double hyz002100 = (C8748 * C8458 * C8195) / C8163 +
                             (C8748 * C8472 * C8277) / C8147 +
                             (C8742 * C8472 * C8195) / C8147;
    const double hyz002010 = (C8748 * C8392 * C8551) / C8147 -
                             (C8748 * C8562 * C8399) / C8147 -
                             (C8562 * C8392 * C8742) / 2;
    const double hyz002001 = (C8888 * C8562 * C8277) / C8147 -
                             (C8888 * C8551 * C8195) / C8163 +
                             (C8891 * C8562 * C8195) / C8147;
    const double hyz110100 = (C8897 * C8903 * C8198) / C8147 -
                             (C8904 * C8901 * C8198) / C8163 +
                             (C8904 * C8903 * C8278) / C8147;
    const double hyz110010 = (C8923 * C8922 * C8198) / C8147 -
                             (C8919 * C8918 * C8198) / C8163 +
                             (C8923 * C8919 * C8278) / C8147;
    const double hyz110001 =
        (C8445 * C8903 * C8918 + C8445 * C8923 * C8901) / C8147 -
        (C8923 * C8903 * C8448) / C8147;
    const double hyz101100 =
        (C8949 * C8897 * C8195 + C8949 * C8904 * C8277) / C8147 -
        (C8904 * C8195 * C8950) / C8163;
    const double hyz101010 = (C8949 * C8392 * C8918) / C8147 -
                             (C8949 * C8923 * C8399) / C8147 +
                             (C8923 * C8392 * C8950) / C8147;
    const double hyz101001 = (C8976 * C8923 * C8277) / C8147 -
                             (C8976 * C8918 * C8195) / C8163 +
                             (C8977 * C8923 * C8195) / C8147;
    const double hyz011100 = (C8949 * C8472 * C8901) / C8147 -
                             (C8949 * C8903 * C8458) / C8147 +
                             (C8472 * C8903 * C8950) / C8147;
    const double hyz011010 = (C8949 * C8919 * C8551) / C8147 -
                             (C8562 * C8922 * C8949) / 2 +
                             (C8562 * C8919 * C8950) / C8147;
    const double hyz011001 =
        (C8976 * C8903 * C8551 + C8976 * C8562 * C8901) / C8147 -
        (C8562 * C8903 * C8977) / 2;
    const double hzz200100 = C8338 - C8266 + (C8186 * C8179 * C9091) / C8147;
    const double hzz200010 = C8419 + C8401 + (C8361 * C8350 * C9091) / C8147;
    const double hzz200001 = C8447 - C8444 - (C8361 * C8179 * C9095) / C8147;
    const double hzz020100 = C8496 + C8529 + (C8472 * C8457 * C9091) / C8147;
    const double hzz020010 = C8663 - C8597 + (C8562 * C8539 * C9091) / C8147;
    const double hzz020001 = C8673 - C8674 - (C8562 * C8457 * C9095) / C8147;
    const double hzz002100 = C8752 - C8751 - (C8472 * C8179 * C9155) / 2;
    const double hzz002010 = C8763 - C8764 - (C8562 * C8350 * C9155) / 2;
    const double hzz002001 =
        (C8892 + C8893) / C8147 -
        (C8562 * C8179 * C8158 *
         (C8837 / C8163 -
          (((-2 * C8265) / C8146 - C8798 / C8163) * be) / C8138 -
          ((zAB * C9143 + 4 * C8846) * be) / C8138)) /
            2;
    const double hzz110100 = C8911 - C8912 + (C8904 * C8899 * C9091) / C8147;
    const double hzz110010 = C8931 - C8930 + (C8923 * C8916 * C9091) / C8147;
    const double hzz110001 =
        (C8939 + C8940) / C8163 - (C8923 * C8899 * C9095) / C8147;
    const double hzz101100 = C8955 - C8956 + (C8904 * C8179 * C9122) / C8147;
    const double hzz101010 = C8968 - C8967 + (C8923 * C8350 * C9122) / C8147;
    const double hzz101001 =
        (C8980 + C8981) / C8147 - (C8923 * C8179 * C9149) / 2;
    const double hzz011100 = C8993 - C8994 + (C8472 * C8899 * C9122) / C8147;
    const double hzz011010 = C9005 - C9004 + (C8562 * C8916 * C9122) / C8147;
    const double hzz011001 =
        (C9013 + C9014) / C8147 - (C8562 * C8899 * C9149) / 2;
    if (same_atom) {
        hxx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx110100;
        hxx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxx110010;
        hxx[(Ai + 0) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hxx110001;
        hxx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx011100;
        hxx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxx011010;
        hxx[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hxx011001;
        hxx[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hxx200100 - 0.5 * hxx020100 + hxx002100);
        hxx[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (-0.5 * hxx200010 - 0.5 * hxx020010 + hxx002010);
        hxx[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxx200001 - 0.5 * hxx020001 + hxx002001);
        hxx[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxx101100;
        hxx[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxx101010;
        hxx[(Ai + 3) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hxx101001;
        hxx[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hxx200100 - std::sqrt(0.75) * hxx020100);
        hxx[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(0.75) * hxx200010 - std::sqrt(0.75) * hxx020010);
        hxx[(Ai + 4) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(0.75) * hxx200001 - std::sqrt(0.75) * hxx020001);
        hxy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy110100;
        hxy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxy110010;
        hxy[(Ai + 0) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hxy110001;
        hxy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy011100;
        hxy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxy011010;
        hxy[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hxy011001;
        hxy[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hxy200100 - 0.5 * hxy020100 + hxy002100);
        hxy[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (-0.5 * hxy200010 - 0.5 * hxy020010 + hxy002010);
        hxy[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxy200001 - 0.5 * hxy020001 + hxy002001);
        hxy[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxy101100;
        hxy[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxy101010;
        hxy[(Ai + 3) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hxy101001;
        hxy[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hxy200100 - std::sqrt(0.75) * hxy020100);
        hxy[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(0.75) * hxy200010 - std::sqrt(0.75) * hxy020010);
        hxy[(Ai + 4) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(0.75) * hxy200001 - std::sqrt(0.75) * hxy020001);
        hxz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz110100;
        hxz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxz110010;
        hxz[(Ai + 0) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hxz110001;
        hxz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz011100;
        hxz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxz011010;
        hxz[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hxz011001;
        hxz[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hxz200100 - 0.5 * hxz020100 + hxz002100);
        hxz[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (-0.5 * hxz200010 - 0.5 * hxz020010 + hxz002010);
        hxz[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hxz200001 - 0.5 * hxz020001 + hxz002001);
        hxz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hxz101100;
        hxz[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hxz101010;
        hxz[(Ai + 3) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hxz101001;
        hxz[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hxz200100 - std::sqrt(0.75) * hxz020100);
        hxz[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(0.75) * hxz200010 - std::sqrt(0.75) * hxz020010);
        hxz[(Ai + 4) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(0.75) * hxz200001 - std::sqrt(0.75) * hxz020001);
        hyy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy110100;
        hyy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyy110010;
        hyy[(Ai + 0) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hyy110001;
        hyy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy011100;
        hyy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyy011010;
        hyy[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hyy011001;
        hyy[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hyy200100 - 0.5 * hyy020100 + hyy002100);
        hyy[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (-0.5 * hyy200010 - 0.5 * hyy020010 + hyy002010);
        hyy[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyy200001 - 0.5 * hyy020001 + hyy002001);
        hyy[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyy101100;
        hyy[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyy101010;
        hyy[(Ai + 3) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hyy101001;
        hyy[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hyy200100 - std::sqrt(0.75) * hyy020100);
        hyy[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(0.75) * hyy200010 - std::sqrt(0.75) * hyy020010);
        hyy[(Ai + 4) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(0.75) * hyy200001 - std::sqrt(0.75) * hyy020001);
        hyz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz110100;
        hyz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyz110010;
        hyz[(Ai + 0) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hyz110001;
        hyz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz011100;
        hyz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyz011010;
        hyz[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hyz011001;
        hyz[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hyz200100 - 0.5 * hyz020100 + hyz002100);
        hyz[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (-0.5 * hyz200010 - 0.5 * hyz020010 + hyz002010);
        hyz[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hyz200001 - 0.5 * hyz020001 + hyz002001);
        hyz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hyz101100;
        hyz[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hyz101010;
        hyz[(Ai + 3) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hyz101001;
        hyz[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hyz200100 - std::sqrt(0.75) * hyz020100);
        hyz[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(0.75) * hyz200010 - std::sqrt(0.75) * hyz020010);
        hyz[(Ai + 4) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(0.75) * hyz200001 - std::sqrt(0.75) * hyz020001);
        hzz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz110100;
        hzz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hzz110010;
        hzz[(Ai + 0) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hzz110001;
        hzz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz011100;
        hzz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hzz011010;
        hzz[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hzz011001;
        hzz[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (-0.5 * hzz200100 - 0.5 * hzz020100 + hzz002100);
        hzz[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (-0.5 * hzz200010 - 0.5 * hzz020010 + hzz002010);
        hzz[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (-0.5 * hzz200001 - 0.5 * hzz020001 + hzz002001);
        hzz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * hzz101100;
        hzz[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * hzz101010;
        hzz[(Ai + 3) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * hzz101001;
        hzz[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(0.75) * hzz200100 - std::sqrt(0.75) * hzz020100);
        hzz[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(0.75) * hzz200010 - std::sqrt(0.75) * hzz020010);
        hzz[(Ai + 4) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(0.75) * hzz200001 - std::sqrt(0.75) * hzz020001);
    } else {
        hxx[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx110100;
        hxx[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxx110010;
        hxx[(Ai + 0) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hxx110001;
        hxx[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx011100;
        hxx[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxx011010;
        hxx[(Ai + 1) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hxx011001;
        hxx[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hxx200100 - 0.5 * hxx020100 + hxx002100);
        hxx[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (-0.5 * hxx200010 - 0.5 * hxx020010 + hxx002010);
        hxx[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxx200001 - 0.5 * hxx020001 + hxx002001);
        hxx[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxx101100;
        hxx[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxx101010;
        hxx[(Ai + 3) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hxx101001;
        hxx[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hxx200100 - std::sqrt(0.75) * hxx020100);
        hxx[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(0.75) * hxx200010 - std::sqrt(0.75) * hxx020010);
        hxx[(Ai + 4) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(0.75) * hxx200001 - std::sqrt(0.75) * hxx020001);
        hxy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy110100;
        hxy[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxy110010;
        hxy[(Ai + 0) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hxy110001;
        hxy[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy011100;
        hxy[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxy011010;
        hxy[(Ai + 1) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hxy011001;
        hxy[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hxy200100 - 0.5 * hxy020100 + hxy002100);
        hxy[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (-0.5 * hxy200010 - 0.5 * hxy020010 + hxy002010);
        hxy[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxy200001 - 0.5 * hxy020001 + hxy002001);
        hxy[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxy101100;
        hxy[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxy101010;
        hxy[(Ai + 3) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hxy101001;
        hxy[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hxy200100 - std::sqrt(0.75) * hxy020100);
        hxy[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(0.75) * hxy200010 - std::sqrt(0.75) * hxy020010);
        hxy[(Ai + 4) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(0.75) * hxy200001 - std::sqrt(0.75) * hxy020001);
        hxz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz110100;
        hxz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxz110010;
        hxz[(Ai + 0) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hxz110001;
        hxz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz011100;
        hxz[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxz011010;
        hxz[(Ai + 1) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hxz011001;
        hxz[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hxz200100 - 0.5 * hxz020100 + hxz002100);
        hxz[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (-0.5 * hxz200010 - 0.5 * hxz020010 + hxz002010);
        hxz[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hxz200001 - 0.5 * hxz020001 + hxz002001);
        hxz[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hxz101100;
        hxz[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hxz101010;
        hxz[(Ai + 3) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hxz101001;
        hxz[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hxz200100 - std::sqrt(0.75) * hxz020100);
        hxz[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(0.75) * hxz200010 - std::sqrt(0.75) * hxz020010);
        hxz[(Ai + 4) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(0.75) * hxz200001 - std::sqrt(0.75) * hxz020001);
        hyy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy110100;
        hyy[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyy110010;
        hyy[(Ai + 0) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hyy110001;
        hyy[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy011100;
        hyy[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyy011010;
        hyy[(Ai + 1) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hyy011001;
        hyy[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hyy200100 - 0.5 * hyy020100 + hyy002100);
        hyy[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (-0.5 * hyy200010 - 0.5 * hyy020010 + hyy002010);
        hyy[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyy200001 - 0.5 * hyy020001 + hyy002001);
        hyy[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyy101100;
        hyy[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyy101010;
        hyy[(Ai + 3) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hyy101001;
        hyy[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hyy200100 - std::sqrt(0.75) * hyy020100);
        hyy[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(0.75) * hyy200010 - std::sqrt(0.75) * hyy020010);
        hyy[(Ai + 4) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(0.75) * hyy200001 - std::sqrt(0.75) * hyy020001);
        hyz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz110100;
        hyz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyz110010;
        hyz[(Ai + 0) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hyz110001;
        hyz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz011100;
        hyz[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyz011010;
        hyz[(Ai + 1) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hyz011001;
        hyz[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hyz200100 - 0.5 * hyz020100 + hyz002100);
        hyz[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (-0.5 * hyz200010 - 0.5 * hyz020010 + hyz002010);
        hyz[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hyz200001 - 0.5 * hyz020001 + hyz002001);
        hyz[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hyz101100;
        hyz[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hyz101010;
        hyz[(Ai + 3) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hyz101001;
        hyz[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hyz200100 - std::sqrt(0.75) * hyz020100);
        hyz[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(0.75) * hyz200010 - std::sqrt(0.75) * hyz020010);
        hyz[(Ai + 4) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(0.75) * hyz200001 - std::sqrt(0.75) * hyz020001);
        hzz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz110100;
        hzz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hzz110010;
        hzz[(Ai + 0) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hzz110001;
        hzz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz011100;
        hzz[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hzz011010;
        hzz[(Ai + 1) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hzz011001;
        hzz[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (-0.5 * hzz200100 - 0.5 * hzz020100 + hzz002100);
        hzz[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (-0.5 * hzz200010 - 0.5 * hzz020010 + hzz002010);
        hzz[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (-0.5 * hzz200001 - 0.5 * hzz020001 + hzz002001);
        hzz[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(3.0) * hzz101100;
        hzz[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(3.0) * hzz101010;
        hzz[(Ai + 3) * matrix_size + Bi + 2] -= cc * std::sqrt(3.0) * hzz101001;
        hzz[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(0.75) * hzz200100 - std::sqrt(0.75) * hzz020100);
        hzz[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(0.75) * hzz200010 - std::sqrt(0.75) * hzz020010);
        hzz[(Ai + 4) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(0.75) * hzz200001 - std::sqrt(0.75) * hzz020001);
    }
}

// Automatically generated, do not edit
void kinetic_second_derivative_22(double ae,
                                  double be,
                                  double cc,
                                  double xAB,
                                  double yAB,
                                  double zAB,
                                  double* const hxx,
                                  double* const hxy,
                                  double* const hxz,
                                  double* const hyy,
                                  double* const hyz,
                                  double* const hzz,
                                  bool same_atom,
                                  std::size_t matrix_size,
                                  std::size_t Ai,
                                  std::size_t Bi)
{
    const double C14114 = ae + be;
    const double C14124 = xAB * be;
    const double C14123 = xAB * ae;
    const double C14122 = 2 * C14114;
    const double C14130 = C14123 * C14124;
    const double C14129 = 1 / C14122;
    const double C14128 = std::pow(C14114, 2);
    const double C14131 = C14130 / C14128;
    const double C14132 = C14129 - C14131;
    const double C14153 = yAB * be;
    const double C14152 = yAB * ae;
    const double C14154 = C14152 * C14153;
    const double C14155 = C14154 / C14128;
    const double C14156 = C14129 - C14155;
    const double C14174 = zAB * be;
    const double C14173 = zAB * ae;
    const double C14175 = C14173 * C14174;
    const double C14176 = C14175 / C14128;
    const double C14177 = C14129 - C14176;
    const double C14209 = C14174 / C14114;
    const double C14208 = C14173 / C14114;
    const double C14207 = C14177 * C14173;
    const double C14206 = zAB * be;
    const double C14205 = 2 * C14128;
    const double C14204 = C14153 / C14114;
    const double C14203 = C14152 / C14114;
    const double C14202 = C14156 * C14152;
    const double C14201 = yAB * be;
    const double C14200 = zAB * ae;
    const double C14199 = yAB * ae;
    const double C14198 = std::pow(C14123, 2);
    const double C14197 = std::pow(C14122, -1);
    const double C14196 = C14124 / C14114;
    const double C14195 = C14123 / C14114;
    const double C14194 = std::pow(C14114, 2);
    const double C14193 = 2 * C14114;
    const double C14192 = xAB * ae;
    const double C14215 = C14208 - C14209;
    const double C14214 = C14207 / C14114;
    const double C14213 = C14203 - C14204;
    const double C14212 = C14202 / C14114;
    const double C14211 = C14198 / C14128;
    const double C14210 = C14195 - C14196;
    const double C14219 = C14215 / C14122;
    const double C14218 = C14213 / C14122;
    const double C14217 = C14211 + C14129;
    const double C14216 = C14210 / C14122;
    const double C14221 = C14214 + C14219;
    const double C14220 = C14212 + C14218;
    const double C12516 = C14192 / (ae + be);
    const double C12518 = 1 / C14193 - (C14192 * xAB * be) / C14194;
    const double C12519 = std::pow(C14193, -1);
    const double C12525 =
        ((1 / C14122 - (C14123 * C14124) / C14194) * C14123) / C14114 + C14216;
    const double C12526 = C14123 / (2 * C14194) - (C14197 * C14124) / C14114;
    const double C12528 =
        (C14217 + 2 * C14132) / C14122 -
        (((C14132 * C14123) / C14114 + C14216) * C14124) / C14114;
    const double C12859 = std::pow(C14199, 2) / C14128 + C14129;
    const double C12861 = -C14196;
    const double C12864 = C14199 / C14114;
    const double C12866 = std::pow(C14124, 2) / C14128 + C14129;
    const double C12981 = std::pow(C14200, 2) / C14128 + C14129;
    const double C12985 = C14200 / C14114;
    const double C13052 = C14216 - (C14132 * C14124) / C14114;
    const double C13113 = std::pow(C14201, 2) / C14128 + C14129;
    const double C13114 = -C14201 / C14114;
    const double C13195 =
        (std::pow(C14152, 2) / C14128 + C14129 + 2 * C14156) / C14122 -
        (C14220 * C14153) / C14114;
    const double C13206 = C14152 / C14205 - (C14197 * C14153) / C14114;
    const double C13449 = C14218 - (C14156 * C14153) / C14114;
    const double C13506 = std::pow(C14206, 2) / C14128 + C14129;
    const double C13507 = -C14206 / C14114;
    const double C13582 =
        (std::pow(C14173, 2) / C14128 + C14129 + 2 * C14177) / C14122 -
        (C14221 * C14174) / C14114;
    const double C13593 = C14173 / C14205 - (C14197 * C14174) / C14114;
    const double C13831 = C14219 - (C14177 * C14174) / C14114;
    const double C12536 = 0 * be;
    const double C12535 = 0 * be;
    const double C12534 = 0 * ae;
    const double C12533 = ae * be;
    const double C12532 = 0 * be;
    const double C12531 = 0 * be;
    const double C12530 = 0 * be;
    const double C12529 = ae + be;
    const double C12554 = C12536 / C12529;
    const double C12553 = 2 * C12531;
    const double C12552 = xAB * C12530;
    const double C12551 = C12533 * zAB;
    const double C12550 = std::pow(C12529, 3);
    const double C12549 = C12533 * yAB;
    const double C12548 = C12534 / C12529;
    const double C12547 = 2 * C12533;
    const double C12546 = C12533 * xAB;
    const double C12545 = xAB * C12532;
    const double C12544 = -2 * C12532;
    const double C12543 = C12532 / C12529;
    const double C12542 = xAB * C12531;
    const double C12541 = -2 * C12531;
    const double C12540 = 2 * C12529;
    const double C12539 = std::pow(C12529, 2);
    const double C12538 = -2 * C12530;
    const double C12537 = Pi / C12529;
    const double C12569 = C12553 / C12529;
    const double C12568 = C12552 / C12529;
    const double C12567 = C12551 * 1;
    const double C12566 = C12550 * C12540;
    const double C12565 = C12549 * 1;
    const double C12564 = 4 * C12539;
    const double C12563 = C12546 * 1;
    const double C12562 = C12545 / C12529;
    const double C12561 = ae * C12544;
    const double C12560 = 2 * C12539;
    const double C12559 = C12542 / C12529;
    const double C12558 = ae * C12541;
    const double C12557 = C12539 * C12540;
    const double C12556 = ae * C12538;
    const double C12555 = std::sqrt(C12537);
    const double C12595 = C12555 * C12528;
    const double C12594 = -4 * C12567;
    const double C12593 = -4 * C12565;
    const double C12592 = C12535 / C12560;
    const double C12591 = 0 - C12568;
    const double C12590 = 3 * C12558;
    const double C12589 = 2 * C12567;
    const double C12588 = C12555 * 1;
    const double C12587 = 3 * C12561;
    const double C12586 = 2 * C12565;
    const double C12585 = C12529 * C12564;
    const double C12584 = C12563 / C12539;
    const double C12583 = C12532 / C12560;
    const double C12582 = 2 * C12563;
    const double C12581 = -4 * C12563;
    const double C12580 = C12561 / C12557;
    const double C12579 = C12531 / C12560;
    const double C12578 = 0 - C12562;
    const double C12577 = xAB * C12561;
    const double C12576 = C12558 / C12557;
    const double C12575 = C12561 / C12539;
    const double C12574 = C12530 / C12560;
    const double C12573 = 0 - C12559;
    const double C12572 = xAB * C12558;
    const double C12571 = C12556 / C12557;
    const double C12570 = C12555 * 1;
    const double C12611 = C12594 / C12529;
    const double C12610 = C12555 * C12589;
    const double C12609 = C12593 / C12529;
    const double C12608 = C12591 * ae;
    const double C12607 = C12555 * C12586;
    const double C12606 = be * C12590;
    const double C12605 = zAB * C12589;
    const double C12604 = be * C12587;
    const double C12603 = yAB * C12586;
    const double C12602 = C12548 - C12584;
    const double C12601 = xAB * C12582;
    const double C12600 = C12581 / C12529;
    const double C12599 = C12578 * ae;
    const double C12598 = C12577 / C12539;
    const double C12597 = C12573 * ae;
    const double C12596 = C12572 / C12539;
    const double C12623 = C12602 / C12540;
    const double C12622 = C12608 / C12529;
    const double C12621 = C12606 / C12566;
    const double C12620 = xAB * C12604;
    const double C12619 = C12605 / C12529;
    const double C12618 = C12604 / C12566;
    const double C12617 = C12603 / C12529;
    const double C12616 = xAB * C12602;
    const double C12615 = 2 * C12602;
    const double C12614 = C12601 / C12529;
    const double C12613 = C12599 / C12529;
    const double C12612 = C12597 / C12529;
    const double C12633 = C12623 - C12554;
    const double C12632 = C12579 - C12613;
    const double C12631 = C12622 - C12592;
    const double C12630 = C12620 / C12550;
    const double C12629 = 1 - C12619;
    const double C12628 = 1 - C12617;
    const double C12627 = C12616 + C12519;
    const double C12626 = 1 - C12614;
    const double C12625 = C12613 - C12579;
    const double C12624 = C12612 - C12574;
    const double C12644 = 2 * C12633;
    const double C12643 = C12631 + C12569;
    const double C12642 = C12629 * C12547;
    const double C12641 = C12628 * C12547;
    const double C12640 = C12627 * be;
    const double C12639 = C12625 / C12540;
    const double C12638 = C12626 * ae;
    const double C12637 = C12626 * C12547;
    const double C12636 = xAB * C12625;
    const double C12635 = 2 * C12625;
    const double C12634 = C12624 + C12543;
    const double C12660 = zAB * C12642;
    const double C12659 = yAB * C12641;
    const double C12658 = xAB * C12634;
    const double C12657 = C12643 / C12540;
    const double C12656 = C12555 * C12642;
    const double C12655 = -3 * C12637;
    const double C12654 = C12555 * C12641;
    const double C12653 = -2 * C12637;
    const double C12652 = C12640 / C12529;
    const double C12651 = C12637 / C12560;
    const double C12650 = C12638 / C12529;
    const double C12649 = xAB * C12637;
    const double C12648 = C12636 + 0;
    const double C12647 = C12634 / C12540;
    const double C12646 = C12598 + C12635;
    const double C12645 = 2 * C12634;
    const double C12673 = C12595 * C12654;
    const double C12672 = C12660 / C12529;
    const double C12671 = C12659 / C12529;
    const double C12670 = C12658 + 0;
    const double C12669 = C12655 / C12560;
    const double C12668 = C12655 / C12529;
    const double C12667 = C12653 / C12585;
    const double C12666 = C12649 / C12560;
    const double C12665 = C12650 - C12583;
    const double C12664 = C12649 / C12529;
    const double C12663 = C12648 * be;
    const double C12662 = C12646 * be;
    const double C12661 = C12596 + C12645;
    const double C12685 = C12673 * C12656;
    const double C12684 = C12611 - C12672;
    const double C12683 = C12609 - C12671;
    const double C12682 = C12670 * be;
    const double C12681 = C12665 / C12540;
    const double C12680 = C12615 - C12666;
    const double C12679 = xAB * C12665;
    const double C12678 = 2 * C12665;
    const double C12677 = C12600 - C12664;
    const double C12676 = C12663 / C12529;
    const double C12675 = C12662 / C12529;
    const double C12674 = C12661 * be;
    const double C12697 = C12685 / C12560;
    const double C12696 = C12684 * C12547;
    const double C12695 = C12683 * C12547;
    const double C12694 = C12682 / C12529;
    const double C12693 = C12677 * C12547;
    const double C12692 = C12681 - C12652;
    const double C12691 = C12680 * be;
    const double C12690 = C12679 + C12516;
    const double C12689 = C12677 * ae;
    const double C12688 = C12647 - C12676;
    const double C12687 = C12576 - C12675;
    const double C12686 = C12674 / C12529;
    const double C12718 = C12555 * C12696;
    const double C12717 = C12555 * C12695;
    const double C12716 = xAB * C12692;
    const double C12715 = xAB * C12688;
    const double C12714 = C12657 - C12694;
    const double C12713 = 3 * C12687;
    const double C12712 = -2 * C12693;
    const double C12711 = 3 * C12689;
    const double C12710 = C12693 / C12529;
    const double C12709 = -4 * C12693;
    const double C12708 = xAB * C12693;
    const double C12707 = 2 * C12692;
    const double C12706 = C12688 / C12540;
    const double C12705 = C12691 / C12529;
    const double C12704 = C12689 / C12560;
    const double C12703 = C12690 * be;
    const double C12702 = xAB * C12689;
    const double C12701 = C12687 / C12540;
    const double C12700 = 2 * C12688;
    const double C12699 = xAB * C12687;
    const double C12698 = C12571 - C12686;
    const double C12733 = C12716 + C12526;
    const double C12732 = C12715 + 0;
    const double C12731 = C12714 + C12632;
    const double C12730 = C12712 / C12585;
    const double C12729 = C12713 - C12630;
    const double C12728 = C12708 / C12560;
    const double C12727 = C12712 / C12539;
    const double C12726 = -C12710;
    const double C12725 = C12709 / C12529;
    const double C12724 = C12708 / C12529;
    const double C12723 = C12704 - C12705;
    const double C12722 = C12703 / C12529;
    const double C12721 = C12702 / C12529;
    const double C12720 = C12699 + C12700;
    const double C12719 = C12698 - C12575;
    const double C12746 = C12733 * ae;
    const double C12745 = C12732 * ae;
    const double C12744 = C12731 / C12540;
    const double C12743 = 3 * C12723;
    const double C12742 = C12729 * ae;
    const double C12741 = C12669 - C12728;
    const double C12740 = C12726 / C12540;
    const double C12739 = C12668 - C12724;
    const double C12738 = xAB * C12723;
    const double C12737 = C12639 - C12722;
    const double C12736 = C12721 + C12678;
    const double C12735 = C12720 * ae;
    const double C12734 = C12719 / C12540;
    const double C12756 = C12746 / C12529;
    const double C12755 = C12745 / C12529;
    const double C12754 = C12742 / C12529;
    const double C12753 = C12741 * be;
    const double C12752 = C12739 * ae;
    const double C12751 = C12739 * C12547;
    const double C12750 = C12738 + C12707;
    const double C12749 = C12737 + C12602;
    const double C12748 = C12736 * be;
    const double C12747 = C12735 / C12529;
    const double C12770 = C12749 / C12540;
    const double C12769 = C12744 + C12755;
    const double C12768 = C12754 - C12621;
    const double C12767 = C12753 / C12529;
    const double C12766 = C12752 / C12560;
    const double C12765 = xAB * C12752;
    const double C12764 = 4 * C12752;
    const double C12763 = xAB * C12751;
    const double C12762 = C12751 / C12529;
    const double C12761 = C12750 * ae;
    const double C12760 = xAB * C12749;
    const double C12759 = 2 * C12749;
    const double C12758 = C12748 / C12529;
    const double C12757 = C12734 + C12747;
    const double C12782 = C12770 + C12756;
    const double C12781 = C12769 / C12540;
    const double C12780 = C12768 / C12540;
    const double C12779 = C12766 - C12767;
    const double C12778 = C12763 / C12560;
    const double C12777 = C12765 + C12711;
    const double C12776 = C12763 / C12529;
    const double C12775 = -C12762;
    const double C12774 = C12761 / C12529;
    const double C12773 = C12760 + C12518;
    const double C12772 = C12580 - C12758;
    const double C12771 = C12757 / C12540;
    const double C12790 = C12782 + C12644;
    const double C12789 = xAB * C12779;
    const double C12788 = C12727 - C12778;
    const double C12787 = be * C12777;
    const double C12786 = C12725 - C12776;
    const double C12785 = C12775 / C12540;
    const double C12784 = C12773 * ae;
    const double C12783 = C12772 - C12651;
    const double C12798 = C12789 + C12743;
    const double C12797 = 3 * C12783;
    const double C12796 = C12788 * be;
    const double C12795 = C12787 / C12539;
    const double C12794 = C12786 * ae;
    const double C12793 = C12783 / C12540;
    const double C12792 = C12784 / C12529;
    const double C12791 = xAB * C12783;
    const double C12806 = C12798 * ae;
    const double C12805 = C12796 / C12529;
    const double C12804 = C12794 / C12560;
    const double C12803 = C12740 - C12795;
    const double C12802 = xAB * C12794;
    const double C12801 = C12793 + C12774;
    const double C12800 = C12706 + C12792;
    const double C12799 = C12791 + C12759;
    const double C12814 = C12806 / C12529;
    const double C12813 = C12803 / C12540;
    const double C12812 = xAB * C12803;
    const double C12811 = C12804 - C12805;
    const double C12810 = C12802 + C12764;
    const double C12809 = C12801 + C12667;
    const double C12808 = C12800 + C12692;
    const double C12807 = C12799 * ae;
    const double C12820 = xAB * C12808;
    const double C12819 = C12813 + C12814;
    const double C12818 = C12812 + C12797;
    const double C12817 = be * C12810;
    const double C12816 = 2 * C12808;
    const double C12815 = C12807 / C12529;
    const double C12825 = C12820 + C12525;
    const double C12824 = C12819 + C12730;
    const double C12823 = C12818 * ae;
    const double C12822 = C12817 / C12539;
    const double C12821 = C12701 + C12815;
    const double C12829 = C12825 * be;
    const double C12828 = C12823 / C12529;
    const double C12827 = C12785 - C12822;
    const double C12826 = C12821 + C12723;
    const double C12833 = C12829 / C12529;
    const double C12832 = 3 * C12826;
    const double C12831 = C12828 - C12618;
    const double C12830 = xAB * C12826;
    const double C12836 = C12781 - C12833;
    const double C12835 = C12831 + C12779;
    const double C12834 = C12830 + C12816;
    const double C12839 = C12836 + C12790;
    const double C12838 = xAB * C12835;
    const double C12837 = C12834 * be;
    const double C12842 = C12555 * C12839;
    const double C12841 = C12838 + C12832;
    const double C12840 = C12837 / C12529;
    const double C12844 = C12841 * be;
    const double C12843 = C12771 - C12840;
    const double C12846 = C12844 / C12529;
    const double C12845 = C12843 + C12809;
    const double C12848 = C12780 - C12846;
    const double C12847 = C12555 * C12845;
    const double C12851 = C12848 + C12824;
    const double C12850 = C12847 * C12588;
    const double C12849 = C12847 * C12654;
    const double C12854 = C12555 * C12851;
    const double C12853 = C12850 * C12656;
    const double C12852 = C12570 * C12849;
    const double C12855 = C12853 / C12540;
    const double C12887 = C12555 * C12866;
    const double C12886 = C12695 / C12560;
    const double C12885 = yAB * C12695;
    const double C12884 = -3 * C12641;
    const double C12883 = C12565 / C12539;
    const double C12882 = 0 * ae;
    const double C12881 = 0 * be;
    const double C12880 = 0 * be;
    const double C12879 = C12582 / C12529;
    const double C12878 = C12578 * be;
    const double C12877 = C12531 / C12529;
    const double C12876 = C12739 * be;
    const double C12875 = C12641 / C12560;
    const double C12874 = C12628 * ae;
    const double C12873 = C12683 * ae;
    const double C12872 = 0 * be;
    const double C12871 = C12555 * C12859;
    const double C12870 = C12677 * be;
    const double C12869 = C12626 * be;
    const double C12868 = -C12543;
    const double C12867 = be * C12544;
    const double C12907 = xAB * C12876;
    const double C12906 = -3 * C12870;
    const double C12905 = 3 * C12873;
    const double C12904 = C12885 / C12529;
    const double C12903 = C12884 / C12529;
    const double C12902 = C12882 / C12529;
    const double C12901 = C12881 / C12560;
    const double C12900 = yAB * C12872;
    const double C12899 = C12880 / C12529;
    const double C12898 = -C12879;
    const double C12897 = C12878 / C12529;
    const double C12896 = -C12877;
    const double C12895 = C12872 / C12560;
    const double C12894 = C12874 / C12529;
    const double C12893 = yAB * C12873;
    const double C12892 = -2 * C12872;
    const double C12891 = xAB * C12870;
    const double C12890 = C12869 / C12529;
    const double C12889 = C12868 / C12540;
    const double C12888 = C12867 / C12539;
    const double C12920 = C12907 / C12529;
    const double C12919 = C12906 / C12529;
    const double C12918 = C12903 - C12904;
    const double C12917 = C12902 - C12883;
    const double C12916 = C12900 / C12529;
    const double C12915 = C12898 / C12540;
    const double C12914 = C12896 / C12540;
    const double C12913 = C12894 - C12895;
    const double C12912 = C12893 / C12529;
    const double C12911 = ae * C12892;
    const double C12910 = C12891 / C12529;
    const double C12909 = C12889 - C12890;
    const double C12908 = -C12888;
    const double C12932 = C12918 * C12547;
    const double C12931 = C12919 - C12920;
    const double C12930 = C12918 * ae;
    const double C12929 = yAB * C12913;
    const double C12928 = 0 - C12916;
    const double C12927 = C12915 - C12899;
    const double C12926 = xAB * C12909;
    const double C12925 = C12914 - C12897;
    const double C12924 = 2 * C12913;
    const double C12923 = C12911 / C12557;
    const double C12922 = 2 * C12909;
    const double C12921 = C12908 / C12540;
    const double C12940 = C12931 * be;
    const double C12939 = yAB * C12930;
    const double C12938 = C12929 + C12864;
    const double C12937 = C12928 * ae;
    const double C12936 = C12926 + C12861;
    const double C12935 = C12925 / C12540;
    const double C12934 = C12912 + C12924;
    const double C12933 = C12922 - C12910;
    const double C12947 = C12940 / C12529;
    const double C12946 = C12939 + C12905;
    const double C12945 = C12938 * ae;
    const double C12944 = C12937 / C12529;
    const double C12943 = C12936 * be;
    const double C12942 = C12934 * ae;
    const double C12941 = C12933 * be;
    const double C12954 = C12740 - C12947;
    const double C12953 = ae * C12946;
    const double C12952 = C12945 / C12529;
    const double C12951 = C12944 - C12901;
    const double C12950 = C12943 / C12529;
    const double C12949 = C12942 / C12529;
    const double C12948 = C12941 / C12529;
    const double C12960 = C12555 * C12954;
    const double C12959 = C12953 / C12539;
    const double C12958 = C12951 / C12540;
    const double C12957 = C12935 - C12950;
    const double C12956 = C12923 + C12949;
    const double C12955 = C12921 - C12948;
    const double C12965 = C12959 - C12886;
    const double C12964 = C12958 + C12952;
    const double C12963 = C12957 + C12927;
    const double C12962 = C12956 - C12875;
    const double C12961 = C12955 - C12651;
    const double C12970 = C12555 * C12965;
    const double C12969 = C12964 + C12917;
    const double C12968 = C12555 * C12963;
    const double C12967 = C12555 * C12962;
    const double C12966 = C12555 * C12961;
    const double C12974 = C12887 * C12967;
    const double C12973 = C12555 * C12969;
    const double C12972 = C12966 * C12967;
    const double C12971 = C12966 * C12871;
    const double C12977 = C12974 * C12656;
    const double C12976 = C12972 * C12570;
    const double C12975 = C12971 * C12656;
    const double C13000 = C12887 * C12654;
    const double C12999 = C12696 / C12560;
    const double C12998 = zAB * C12696;
    const double C12997 = -3 * C12642;
    const double C12996 = C12567 / C12539;
    const double C12995 = 0 * ae;
    const double C12994 = 0 * be;
    const double C12993 = C12642 / C12560;
    const double C12992 = C12629 * ae;
    const double C12991 = C12684 * ae;
    const double C12990 = 0 * be;
    const double C12989 = C12966 * C12588;
    const double C12988 = C12966 * C12654;
    const double C12987 = C12555 * C12981;
    const double C13011 = 3 * C12991;
    const double C13010 = C12998 / C12529;
    const double C13009 = C12997 / C12529;
    const double C13008 = C12995 / C12529;
    const double C13007 = C12994 / C12560;
    const double C13006 = zAB * C12990;
    const double C13005 = C12990 / C12560;
    const double C13004 = C12992 / C12529;
    const double C13003 = zAB * C12991;
    const double C13002 = -2 * C12990;
    const double C13001 = C12987 * C12988;
    const double C13017 = C13009 - C13010;
    const double C13016 = C13008 - C12996;
    const double C13015 = C13006 / C12529;
    const double C13014 = C13004 - C13005;
    const double C13013 = C13003 / C12529;
    const double C13012 = ae * C13002;
    const double C13023 = C13017 * C12547;
    const double C13022 = C13017 * ae;
    const double C13021 = zAB * C13014;
    const double C13020 = 0 - C13015;
    const double C13019 = 2 * C13014;
    const double C13018 = C13012 / C12557;
    const double C13027 = zAB * C13022;
    const double C13026 = C13021 + C12985;
    const double C13025 = C13020 * ae;
    const double C13024 = C13013 + C13019;
    const double C13031 = C13027 + C13011;
    const double C13030 = C13026 * ae;
    const double C13029 = C13025 / C12529;
    const double C13028 = C13024 * ae;
    const double C13035 = ae * C13031;
    const double C13034 = C13030 / C12529;
    const double C13033 = C13029 - C13007;
    const double C13032 = C13028 / C12529;
    const double C13038 = C13035 / C12539;
    const double C13037 = C13033 / C12540;
    const double C13036 = C13018 + C13032;
    const double C13041 = C13038 - C12999;
    const double C13040 = C13037 + C13034;
    const double C13039 = C13036 - C12993;
    const double C13044 = C12555 * C13041;
    const double C13043 = C13040 + C13016;
    const double C13042 = C12555 * C13039;
    const double C13047 = C13042 * C13000;
    const double C13046 = C12555 * C13043;
    const double C13045 = C12989 * C13042;
    const double C13048 = C13045 / 2;
    const double C13061 = C12555 * C13052;
    const double C13060 = C12818 * be;
    const double C13059 = C12604 / C12550;
    const double C13058 = C12555 * C12930;
    const double C13057 = C12555 * C12913;
    const double C13056 = C12773 * be;
    const double C13055 = C12555 * C12873;
    const double C13054 = C12555 * C12864;
    const double C13053 = C12799 * be;
    const double C13066 = C13061 * C13055;
    const double C13065 = C13060 / C12529;
    const double C13064 = -C13059;
    const double C13063 = C13056 / C12529;
    const double C13062 = C13053 / C12529;
    const double C13070 = C13066 * C12656;
    const double C13069 = C13064 / C12540;
    const double C13068 = C12706 - C13063;
    const double C13067 = C12701 - C13062;
    const double C13074 = C13070 / C12560;
    const double C13073 = C13069 - C13065;
    const double C13072 = C13068 + C12692;
    const double C13071 = C13067 + C12723;
    const double C13077 = C13073 + C12779;
    const double C13076 = C12555 * C13072;
    const double C13075 = C12555 * C13071;
    const double C13080 = C12555 * C13077;
    const double C13079 = C13075 * C13055;
    const double C13078 = C13075 * C13054;
    const double C13082 = C12570 * C13079;
    const double C13081 = C13078 * C12656;
    const double C13083 = C13081 / C12540;
    const double C13093 = C13061 * C12654;
    const double C13092 = C12555 * C13022;
    const double C13091 = C12555 * C13014;
    const double C13090 = C12555 * C12991;
    const double C13089 = C13075 * C12588;
    const double C13088 = C13075 * C12654;
    const double C13087 = C12555 * C12985;
    const double C13096 = C13090 * C13093;
    const double C13095 = C13089 * C13090;
    const double C13094 = C13087 * C13088;
    const double C13098 = C13096 / C12560;
    const double C13097 = C13095 / C12540;
    const double C13104 = C12887 * C13055;
    const double C13103 = C12966 * C13055;
    const double C13102 = C12966 * C13054;
    const double C13107 = C13104 * C13090;
    const double C13106 = C13087 * C13103;
    const double C13105 = C13102 * C13090;
    const double C13109 = C13107 / C12560;
    const double C13108 = C13105 / C12540;
    const double C13131 = C12555 * C14217;
    const double C13130 = C12693 / C12560;
    const double C13129 = ae * C12777;
    const double C13128 = C12918 * be;
    const double C13127 = C12695 / C12529;
    const double C13126 = 0 * be;
    const double C13125 = C12586 / C12529;
    const double C13124 = C12928 * be;
    const double C13123 = C12881 / C12529;
    const double C13122 = C12690 * ae;
    const double C13121 = C12683 * be;
    const double C13120 = C12628 * be;
    const double C13119 = C12872 / C12529;
    const double C13118 = be * C12892;
    const double C13117 = C12555 * C13113;
    const double C13116 = C12736 * ae;
    const double C13145 = C13129 / C12539;
    const double C13144 = yAB * C13128;
    const double C13143 = -3 * C13121;
    const double C13142 = -C13127;
    const double C13141 = C13126 / C12529;
    const double C13140 = -C13125;
    const double C13139 = C13124 / C12529;
    const double C13138 = -C13123;
    const double C13137 = C13122 / C12529;
    const double C13136 = yAB * C13121;
    const double C13135 = C13120 / C12529;
    const double C13134 = -C13119;
    const double C13133 = C13118 / C12539;
    const double C13132 = C13116 / C12529;
    const double C13156 = C13145 - C13130;
    const double C13155 = C13144 / C12529;
    const double C13154 = C13143 / C12529;
    const double C13153 = C13142 / C12540;
    const double C13152 = C13140 / C12540;
    const double C13151 = C13138 / C12540;
    const double C13150 = C12639 + C13137;
    const double C13149 = C13136 / C12529;
    const double C13148 = C13134 / C12540;
    const double C13147 = -C13133;
    const double C13146 = C12580 + C13132;
    const double C13164 = C12555 * C13156;
    const double C13163 = C13154 - C13155;
    const double C13162 = C13152 - C13141;
    const double C13161 = C13151 - C13139;
    const double C13160 = C13150 + C12602;
    const double C13159 = C13148 - C13135;
    const double C13158 = C13147 / C12540;
    const double C13157 = C13146 - C12651;
    const double C13170 = C13163 * be;
    const double C13169 = yAB * C13159;
    const double C13168 = C13161 / C12540;
    const double C13167 = C12555 * C13160;
    const double C13166 = 2 * C13159;
    const double C13165 = C12555 * C13157;
    const double C13174 = C13170 / C12529;
    const double C13173 = C13169 + C13114;
    const double C13172 = C13166 - C13149;
    const double C13171 = C13165 * C13117;
    const double C13178 = C13153 - C13174;
    const double C13177 = C13173 * be;
    const double C13176 = C13172 * be;
    const double C13175 = C13171 * C12656;
    const double C13181 = C12555 * C13178;
    const double C13180 = C13177 / C12529;
    const double C13179 = C13176 / C12529;
    const double C13183 = C13168 - C13180;
    const double C13182 = C13158 - C13179;
    const double C13185 = C13183 + C13162;
    const double C13184 = C13182 - C12875;
    const double C13187 = C12555 * C13185;
    const double C13186 = C12555 * C13184;
    const double C13189 = C13131 * C13186;
    const double C13188 = C13165 * C13186;
    const double C13191 = C13189 * C12656;
    const double C13190 = C13188 * C12570;
    const double C13242 = 4 * C12930;
    const double C13241 = yAB * C12932;
    const double C13240 = -4 * C12695;
    const double C13239 = C12932 / C12529;
    const double C13238 = C12555 * 1;
    const double C13237 = C12555 * C12582;
    const double C13236 = -2 * C12695;
    const double C13235 = C12885 / C12560;
    const double C13234 = C12884 / C12560;
    const double C13233 = C12930 / C12560;
    const double C13232 = be * C12946;
    const double C13231 = 3 * C12911;
    const double C13230 = C12555 * C12693;
    const double C13229 = 0 * be;
    const double C13228 = C12917 / C12540;
    const double C13227 = C12901 - C12944;
    const double C13226 = 2 * C12881;
    const double C13225 = 0 * be;
    const double C13224 = C12555 * C12637;
    const double C13223 = -2 * C12641;
    const double C13222 = yAB * C12917;
    const double C13221 = C12913 / C12540;
    const double C13220 = C12659 / C12560;
    const double C13219 = 2 * C12917;
    const double C13218 = C12873 / C12560;
    const double C13217 = C12938 * be;
    const double C13216 = C12934 * be;
    const double C13215 = yAB * C12951;
    const double C13214 = 2 * C12951;
    const double C13213 = yAB * C12911;
    const double C13212 = C12911 / C12539;
    const double C13211 = yAB * C12881;
    const double C13210 = -2 * C12881;
    const double C13209 = 0 * be;
    const double C13208 = C12555 * C13195;
    const double C13267 = C13241 / C12560;
    const double C13266 = C13236 / C12539;
    const double C13265 = C13241 / C12529;
    const double C13264 = C13240 / C12529;
    const double C13263 = -C13239;
    const double C13262 = C13236 / C12585;
    const double C13261 = C13234 - C13235;
    const double C13260 = C13232 / C12539;
    const double C13259 = be * C13231;
    const double C13258 = C13229 / C12529;
    const double C13257 = C13226 / C12529;
    const double C13256 = C13225 / C12560;
    const double C13255 = yAB * C13209;
    const double C13254 = C13208 * C13224;
    const double C13253 = C13223 / C12585;
    const double C13252 = C13222 + C14197;
    const double C13251 = C13219 - C13220;
    const double C13250 = C13217 / C12529;
    const double C13249 = C13216 / C12529;
    const double C13248 = C13215 + 0;
    const double C13247 = C13213 / C12539;
    const double C13246 = C13209 / C12560;
    const double C13245 = C13211 / C12529;
    const double C13244 = ae * C13210;
    const double C13243 = -2 * C13209;
    const double C13288 = C13266 - C13267;
    const double C13287 = C13264 - C13265;
    const double C13286 = C13263 / C12540;
    const double C13285 = C13261 * be;
    const double C13284 = C13259 / C12566;
    const double C13283 = C13153 - C13260;
    const double C13282 = 3 * C13244;
    const double C13281 = yAB * C13259;
    const double C13280 = C13228 - C13258;
    const double C13279 = C13255 / C12529;
    const double C13278 = C13254 * C12656;
    const double C13277 = C13252 * be;
    const double C13276 = C13251 * be;
    const double C13275 = C12958 - C13250;
    const double C13274 = C12923 - C13249;
    const double C13273 = C13248 * be;
    const double C13272 = C13247 + C13214;
    const double C13271 = C13244 / C12557;
    const double C13270 = 0 - C13245;
    const double C13269 = yAB * C13244;
    const double C13268 = ae * C13243;
    const double C13307 = C13288 * be;
    const double C13306 = C13287 * ae;
    const double C13305 = C13283 / C12540;
    const double C13304 = C13285 / C12529;
    const double C13303 = yAB * C13283;
    const double C13302 = be * C13282;
    const double C13301 = C13281 / C12550;
    const double C13300 = 2 * C13280;
    const double C13299 = 0 - C13279;
    const double C13298 = C13278 / C12560;
    const double C13297 = C13277 / C12529;
    const double C13296 = C13276 / C12529;
    const double C13295 = C13275 + C12917;
    const double C13294 = C13274 - C12875;
    const double C13293 = C13273 / C12529;
    const double C13292 = C13272 * be;
    const double C13291 = C13270 * ae;
    const double C13290 = C13269 / C12539;
    const double C13289 = C13268 / C12557;
    const double C13323 = C13307 / C12529;
    const double C13322 = C13306 / C12560;
    const double C13321 = yAB * C13306;
    const double C13320 = C13233 - C13304;
    const double C13319 = 3 * C13294;
    const double C13318 = C13302 / C12566;
    const double C13317 = C13295 / C12540;
    const double C13316 = C13299 * ae;
    const double C13315 = C13294 / C12540;
    const double C13314 = C13221 - C13297;
    const double C13313 = yAB * C13295;
    const double C13312 = C13218 - C13296;
    const double C13311 = 2 * C13295;
    const double C13310 = yAB * C13294;
    const double C13309 = C13292 / C12529;
    const double C13308 = C13291 / C12529;
    const double C13336 = C13322 - C13323;
    const double C13335 = C13321 + C13242;
    const double C13334 = 3 * C13312;
    const double C13333 = yAB * C13320;
    const double C13332 = C13303 + C13319;
    const double C13331 = yAB * C13314;
    const double C13330 = C13316 / C12529;
    const double C13329 = 2 * C13314;
    const double C13328 = yAB * C13312;
    const double C13327 = C13313 + C14156;
    const double C13326 = C13310 + C13311;
    const double C13325 = C13271 - C13309;
    const double C13324 = C13308 - C13246;
    const double C13348 = be * C13335;
    const double C13347 = C13333 + C13334;
    const double C13346 = C13332 * ae;
    const double C13345 = 3 * C13325;
    const double C13344 = C13331 + C13206;
    const double C13343 = C13330 - C13256;
    const double C13342 = C13328 + C13329;
    const double C13341 = C13327 * ae;
    const double C13340 = C13326 * ae;
    const double C13339 = C13325 / C12540;
    const double C13338 = yAB * C13325;
    const double C13337 = C13324 + C13119;
    const double C13360 = C13348 / C12539;
    const double C13359 = C13347 * ae;
    const double C13358 = C13346 / C12529;
    const double C13357 = C13345 - C13301;
    const double C13356 = C13344 * ae;
    const double C13355 = yAB * C13337;
    const double C13354 = C13343 + C13257;
    const double C13353 = C13342 * ae;
    const double C13352 = C13341 / C12529;
    const double C13351 = C13340 / C12529;
    const double C13350 = C13337 / C12540;
    const double C13349 = 2 * C13337;
    const double C13371 = C13286 - C13360;
    const double C13370 = C13359 / C12529;
    const double C13369 = C13358 - C13284;
    const double C13368 = C13357 * ae;
    const double C13367 = C13356 / C12529;
    const double C13366 = C13355 + 0;
    const double C13365 = C13354 / C12540;
    const double C13364 = C13353 / C12529;
    const double C13363 = C13339 + C13351;
    const double C13362 = C13350 - C13293;
    const double C13361 = C13290 + C13349;
    const double C13382 = C13305 + C13370;
    const double C13381 = C13369 + C13320;
    const double C13380 = C13368 / C12529;
    const double C13379 = C13317 + C13367;
    const double C13378 = yAB * C13362;
    const double C13377 = C13366 * be;
    const double C13376 = C13315 + C13364;
    const double C13375 = C13362 / C12540;
    const double C13374 = C13363 + C13312;
    const double C13373 = 2 * C13362;
    const double C13372 = C13361 * be;
    const double C13394 = C13382 + C13262;
    const double C13393 = 3 * C13374;
    const double C13392 = yAB * C13381;
    const double C13391 = C13380 - C13318;
    const double C13390 = C13379 + C13300;
    const double C13389 = C13378 + 0;
    const double C13388 = C13377 / C12529;
    const double C13387 = C13376 + C13253;
    const double C13386 = C13375 + C13352;
    const double C13385 = yAB * C13374;
    const double C13384 = C13338 + C13373;
    const double C13383 = C13372 / C12529;
    const double C13401 = C13392 + C13393;
    const double C13400 = C13391 / C12540;
    const double C13399 = C13389 * ae;
    const double C13398 = C13365 - C13388;
    const double C13397 = C13386 + C13314;
    const double C13396 = C13384 * ae;
    const double C13395 = C13289 - C13383;
    const double C13408 = C13401 * be;
    const double C13407 = yAB * C13397;
    const double C13406 = C13399 / C12529;
    const double C13405 = C13398 + C13227;
    const double C13404 = 2 * C13397;
    const double C13403 = C13396 / C12529;
    const double C13402 = C13395 - C13212;
    const double C13413 = C13408 / C12529;
    const double C13412 = C13407 + C14220;
    const double C13411 = C13405 / C12540;
    const double C13410 = C13385 + C13404;
    const double C13409 = C13402 / C12540;
    const double C13418 = C13400 - C13413;
    const double C13417 = C13412 * be;
    const double C13416 = C13411 + C13406;
    const double C13415 = C13410 * be;
    const double C13414 = C13409 + C13403;
    const double C13423 = C13418 + C13394;
    const double C13422 = C13417 / C12529;
    const double C13421 = C13416 / C12540;
    const double C13420 = C13415 / C12529;
    const double C13419 = C13414 / C12540;
    const double C13426 = C12555 * C13423;
    const double C13425 = C13421 - C13422;
    const double C13424 = C13419 - C13420;
    const double C13428 = C13425 + C13390;
    const double C13427 = C13424 + C13387;
    const double C13430 = C12555 * C13428;
    const double C13429 = C12555 * C13427;
    const double C13432 = C13238 * C13429;
    const double C13431 = C13429 * C13224;
    const double C13434 = C13432 * C12656;
    const double C13433 = C12570 * C13431;
    const double C13435 = C13434 / C12540;
    const double C13441 = C13238 * C13186;
    const double C13440 = C13117 * C13224;
    const double C13439 = C13186 * C13224;
    const double C13444 = C13441 * C13042;
    const double C13443 = C13042 * C13440;
    const double C13442 = C12987 * C13439;
    const double C13445 = C13444 / 2;
    const double C13458 = C12555 * C12516;
    const double C13457 = C12555 * C12752;
    const double C13456 = C13332 * be;
    const double C13455 = C13259 / C12550;
    const double C13454 = C13327 * be;
    const double C13453 = C12555 * C12665;
    const double C13452 = C13326 * be;
    const double C13451 = C12555 * C12689;
    const double C13450 = C12555 * C13449;
    const double C13463 = C13456 / C12529;
    const double C13462 = -C13455;
    const double C13461 = C13454 / C12529;
    const double C13460 = C13452 / C12529;
    const double C13459 = C13450 * C13451;
    const double C13467 = C13462 / C12540;
    const double C13466 = C13375 - C13461;
    const double C13465 = C13339 - C13460;
    const double C13464 = C13459 * C12656;
    const double C13471 = C13467 - C13463;
    const double C13470 = C13466 + C13314;
    const double C13469 = C13465 + C13312;
    const double C13468 = C13464 / C12560;
    const double C13474 = C13471 + C13320;
    const double C13473 = C12555 * C13470;
    const double C13472 = C12555 * C13469;
    const double C13477 = C13458 * C13472;
    const double C13476 = C12555 * C13474;
    const double C13475 = C13472 * C13451;
    const double C13479 = C13477 * C12656;
    const double C13478 = C12570 * C13475;
    const double C13480 = C13479 / C12540;
    const double C13486 = C13458 * C13186;
    const double C13485 = C13186 * C13451;
    const double C13484 = C13117 * C13451;
    const double C13489 = C13486 * C13090;
    const double C13488 = C13087 * C13485;
    const double C13487 = C13484 * C13090;
    const double C13491 = C13489 / C12540;
    const double C13490 = C13487 / C12560;
    const double C13497 = C13238 * C13472;
    const double C13496 = C13450 * C13224;
    const double C13495 = C13472 * C13224;
    const double C13500 = C13497 * C13090;
    const double C13499 = C13090 * C13496;
    const double C13498 = C13087 * C13495;
    const double C13502 = C13500 / C12540;
    const double C13501 = C13499 / C12560;
    const double C13521 = C13131 * C12654;
    const double C13520 = C13017 * be;
    const double C13519 = C12696 / C12529;
    const double C13518 = 0 * be;
    const double C13517 = C12589 / C12529;
    const double C13516 = C13020 * be;
    const double C13515 = C12994 / C12529;
    const double C13514 = C12684 * be;
    const double C13513 = C12629 * be;
    const double C13512 = C12990 / C12529;
    const double C13511 = be * C13002;
    const double C13510 = C13165 * C12588;
    const double C13509 = C13165 * C12654;
    const double C13508 = C12555 * C13506;
    const double C13533 = zAB * C13520;
    const double C13532 = -3 * C13514;
    const double C13531 = -C13519;
    const double C13530 = C13518 / C12529;
    const double C13529 = -C13517;
    const double C13528 = C13516 / C12529;
    const double C13527 = -C13515;
    const double C13526 = zAB * C13514;
    const double C13525 = C13513 / C12529;
    const double C13524 = -C13512;
    const double C13523 = C13511 / C12539;
    const double C13522 = C13508 * C13509;
    const double C13541 = C13533 / C12529;
    const double C13540 = C13532 / C12529;
    const double C13539 = C13531 / C12540;
    const double C13538 = C13529 / C12540;
    const double C13537 = C13527 / C12540;
    const double C13536 = C13526 / C12529;
    const double C13535 = C13524 / C12540;
    const double C13534 = -C13523;
    const double C13546 = C13540 - C13541;
    const double C13545 = C13538 - C13530;
    const double C13544 = C13537 - C13528;
    const double C13543 = C13535 - C13525;
    const double C13542 = C13534 / C12540;
    const double C13550 = C13546 * be;
    const double C13549 = zAB * C13543;
    const double C13548 = C13544 / C12540;
    const double C13547 = 2 * C13543;
    const double C13553 = C13550 / C12529;
    const double C13552 = C13549 + C13507;
    const double C13551 = C13547 - C13536;
    const double C13556 = C13539 - C13553;
    const double C13555 = C13552 * be;
    const double C13554 = C13551 * be;
    const double C13559 = C12555 * C13556;
    const double C13558 = C13555 / C12529;
    const double C13557 = C13554 / C12529;
    const double C13561 = C13548 - C13558;
    const double C13560 = C13542 - C13557;
    const double C13563 = C13561 + C13545;
    const double C13562 = C13560 - C12993;
    const double C13565 = C12555 * C13563;
    const double C13564 = C12555 * C13562;
    const double C13567 = C13564 * C13521;
    const double C13566 = C13510 * C13564;
    const double C13568 = C13566 / 2;
    const double C13574 = C13238 * C12967;
    const double C13573 = C12871 * C13224;
    const double C13572 = C12967 * C13224;
    const double C13577 = C13574 * C13564;
    const double C13576 = C13564 * C13573;
    const double C13575 = C13508 * C13572;
    const double C13578 = C13577 / 2;
    const double C13628 = 4 * C13022;
    const double C13627 = zAB * C13023;
    const double C13626 = -4 * C12696;
    const double C13625 = C13023 / C12529;
    const double C13624 = C13238 * C12654;
    const double C13623 = -2 * C12696;
    const double C13622 = C12998 / C12560;
    const double C13621 = C12997 / C12560;
    const double C13620 = C13022 / C12560;
    const double C13619 = be * C13031;
    const double C13618 = 3 * C13012;
    const double C13617 = 0 * be;
    const double C13616 = C13016 / C12540;
    const double C13615 = C13007 - C13029;
    const double C13614 = 2 * C12994;
    const double C13613 = 0 * be;
    const double C13612 = C12588 * C13224;
    const double C13611 = -2 * C12642;
    const double C13610 = zAB * C13016;
    const double C13609 = C13014 / C12540;
    const double C13608 = C12660 / C12560;
    const double C13607 = 2 * C13016;
    const double C13606 = C12991 / C12560;
    const double C13605 = C13026 * be;
    const double C13604 = C13024 * be;
    const double C13603 = zAB * C13033;
    const double C13602 = 2 * C13033;
    const double C13601 = zAB * C13012;
    const double C13600 = C13012 / C12539;
    const double C13599 = zAB * C12994;
    const double C13598 = -2 * C12994;
    const double C13597 = 0 * be;
    const double C13596 = C13224 * C12654;
    const double C13595 = C12555 * C13582;
    const double C13653 = C13627 / C12560;
    const double C13652 = C13623 / C12539;
    const double C13651 = C13627 / C12529;
    const double C13650 = C13626 / C12529;
    const double C13649 = -C13625;
    const double C13648 = C13623 / C12585;
    const double C13647 = C13621 - C13622;
    const double C13646 = C13619 / C12539;
    const double C13645 = be * C13618;
    const double C13644 = C13617 / C12529;
    const double C13643 = C13614 / C12529;
    const double C13642 = C13613 / C12560;
    const double C13641 = zAB * C13597;
    const double C13640 = C13611 / C12585;
    const double C13639 = C13610 + C14197;
    const double C13638 = C13607 - C13608;
    const double C13637 = C13605 / C12529;
    const double C13636 = C13604 / C12529;
    const double C13635 = C13603 + 0;
    const double C13634 = C13601 / C12539;
    const double C13633 = C13597 / C12560;
    const double C13632 = C13599 / C12529;
    const double C13631 = ae * C13598;
    const double C13630 = -2 * C13597;
    const double C13629 = C13595 * C13596;
    const double C13674 = C13652 - C13653;
    const double C13673 = C13650 - C13651;
    const double C13672 = C13649 / C12540;
    const double C13671 = C13647 * be;
    const double C13670 = C13645 / C12566;
    const double C13669 = C13539 - C13646;
    const double C13668 = 3 * C13631;
    const double C13667 = zAB * C13645;
    const double C13666 = C13616 - C13644;
    const double C13665 = C13641 / C12529;
    const double C13664 = C13639 * be;
    const double C13663 = C13638 * be;
    const double C13662 = C13037 - C13637;
    const double C13661 = C13018 - C13636;
    const double C13660 = C13635 * be;
    const double C13659 = C13634 + C13602;
    const double C13658 = C13631 / C12557;
    const double C13657 = 0 - C13632;
    const double C13656 = zAB * C13631;
    const double C13655 = ae * C13630;
    const double C13654 = C13629 / C12560;
    const double C13692 = C13674 * be;
    const double C13691 = C13673 * ae;
    const double C13690 = C13669 / C12540;
    const double C13689 = C13671 / C12529;
    const double C13688 = zAB * C13669;
    const double C13687 = be * C13668;
    const double C13686 = C13667 / C12550;
    const double C13685 = 2 * C13666;
    const double C13684 = 0 - C13665;
    const double C13683 = C13664 / C12529;
    const double C13682 = C13663 / C12529;
    const double C13681 = C13662 + C13016;
    const double C13680 = C13661 - C12993;
    const double C13679 = C13660 / C12529;
    const double C13678 = C13659 * be;
    const double C13677 = C13657 * ae;
    const double C13676 = C13656 / C12539;
    const double C13675 = C13655 / C12557;
    const double C13708 = C13692 / C12529;
    const double C13707 = C13691 / C12560;
    const double C13706 = zAB * C13691;
    const double C13705 = C13620 - C13689;
    const double C13704 = 3 * C13680;
    const double C13703 = C13687 / C12566;
    const double C13702 = C13681 / C12540;
    const double C13701 = C13684 * ae;
    const double C13700 = C13680 / C12540;
    const double C13699 = C13609 - C13683;
    const double C13698 = zAB * C13681;
    const double C13697 = C13606 - C13682;
    const double C13696 = 2 * C13681;
    const double C13695 = zAB * C13680;
    const double C13694 = C13678 / C12529;
    const double C13693 = C13677 / C12529;
    const double C13721 = C13707 - C13708;
    const double C13720 = C13706 + C13628;
    const double C13719 = 3 * C13697;
    const double C13718 = zAB * C13705;
    const double C13717 = C13688 + C13704;
    const double C13716 = zAB * C13699;
    const double C13715 = C13701 / C12529;
    const double C13714 = 2 * C13699;
    const double C13713 = zAB * C13697;
    const double C13712 = C13698 + C14177;
    const double C13711 = C13695 + C13696;
    const double C13710 = C13658 - C13694;
    const double C13709 = C13693 - C13633;
    const double C13733 = be * C13720;
    const double C13732 = C13718 + C13719;
    const double C13731 = C13717 * ae;
    const double C13730 = 3 * C13710;
    const double C13729 = C13716 + C13593;
    const double C13728 = C13715 - C13642;
    const double C13727 = C13713 + C13714;
    const double C13726 = C13712 * ae;
    const double C13725 = C13711 * ae;
    const double C13724 = C13710 / C12540;
    const double C13723 = zAB * C13710;
    const double C13722 = C13709 + C13512;
    const double C13745 = C13733 / C12539;
    const double C13744 = C13732 * ae;
    const double C13743 = C13731 / C12529;
    const double C13742 = C13730 - C13686;
    const double C13741 = C13729 * ae;
    const double C13740 = zAB * C13722;
    const double C13739 = C13728 + C13643;
    const double C13738 = C13727 * ae;
    const double C13737 = C13726 / C12529;
    const double C13736 = C13725 / C12529;
    const double C13735 = C13722 / C12540;
    const double C13734 = 2 * C13722;
    const double C13756 = C13672 - C13745;
    const double C13755 = C13744 / C12529;
    const double C13754 = C13743 - C13670;
    const double C13753 = C13742 * ae;
    const double C13752 = C13741 / C12529;
    const double C13751 = C13740 + 0;
    const double C13750 = C13739 / C12540;
    const double C13749 = C13738 / C12529;
    const double C13748 = C13724 + C13736;
    const double C13747 = C13735 - C13679;
    const double C13746 = C13676 + C13734;
    const double C13767 = C13690 + C13755;
    const double C13766 = C13754 + C13705;
    const double C13765 = C13753 / C12529;
    const double C13764 = C13702 + C13752;
    const double C13763 = zAB * C13747;
    const double C13762 = C13751 * be;
    const double C13761 = C13700 + C13749;
    const double C13760 = C13747 / C12540;
    const double C13759 = C13748 + C13697;
    const double C13758 = 2 * C13747;
    const double C13757 = C13746 * be;
    const double C13779 = C13767 + C13648;
    const double C13778 = 3 * C13759;
    const double C13777 = zAB * C13766;
    const double C13776 = C13765 - C13703;
    const double C13775 = C13764 + C13685;
    const double C13774 = C13763 + 0;
    const double C13773 = C13762 / C12529;
    const double C13772 = C13761 + C13640;
    const double C13771 = C13760 + C13737;
    const double C13770 = zAB * C13759;
    const double C13769 = C13723 + C13758;
    const double C13768 = C13757 / C12529;
    const double C13786 = C13777 + C13778;
    const double C13785 = C13776 / C12540;
    const double C13784 = C13774 * ae;
    const double C13783 = C13750 - C13773;
    const double C13782 = C13771 + C13699;
    const double C13781 = C13769 * ae;
    const double C13780 = C13675 - C13768;
    const double C13793 = C13786 * be;
    const double C13792 = zAB * C13782;
    const double C13791 = C13784 / C12529;
    const double C13790 = C13783 + C13615;
    const double C13789 = 2 * C13782;
    const double C13788 = C13781 / C12529;
    const double C13787 = C13780 - C13600;
    const double C13798 = C13793 / C12529;
    const double C13797 = C13792 + C14221;
    const double C13796 = C13790 / C12540;
    const double C13795 = C13770 + C13789;
    const double C13794 = C13787 / C12540;
    const double C13803 = C13785 - C13798;
    const double C13802 = C13797 * be;
    const double C13801 = C13796 + C13791;
    const double C13800 = C13795 * be;
    const double C13799 = C13794 + C13788;
    const double C13808 = C13803 + C13779;
    const double C13807 = C13802 / C12529;
    const double C13806 = C13801 / C12540;
    const double C13805 = C13800 / C12529;
    const double C13804 = C13799 / C12540;
    const double C13811 = C12555 * C13808;
    const double C13810 = C13806 - C13807;
    const double C13809 = C13804 - C13805;
    const double C13813 = C13810 + C13775;
    const double C13812 = C13809 + C13772;
    const double C13815 = C12555 * C13813;
    const double C13814 = C12555 * C13812;
    const double C13817 = C13814 * C13624;
    const double C13816 = C13814 * C13612;
    const double C13823 = C13458 * C13055;
    const double C13822 = C13451 * C13055;
    const double C13821 = C13054 * C13451;
    const double C13826 = C13564 * C13823;
    const double C13825 = C13508 * C13822;
    const double C13824 = C13564 * C13821;
    const double C13827 = C13825 / C12560;
    const double C13839 = C13458 * C12654;
    const double C13838 = C13717 * be;
    const double C13837 = C13645 / C12550;
    const double C13836 = C13712 * be;
    const double C13835 = C12588 * C13451;
    const double C13834 = C13711 * be;
    const double C13833 = C13451 * C12654;
    const double C13832 = C12555 * C13831;
    const double C13844 = C13838 / C12529;
    const double C13843 = -C13837;
    const double C13842 = C13836 / C12529;
    const double C13841 = C13834 / C12529;
    const double C13840 = C13832 * C13833;
    const double C13848 = C13843 / C12540;
    const double C13847 = C13760 - C13842;
    const double C13846 = C13724 - C13841;
    const double C13845 = C13840 / C12560;
    const double C13851 = C13848 - C13844;
    const double C13850 = C13847 + C13699;
    const double C13849 = C13846 + C13697;
    const double C13854 = C13851 + C13705;
    const double C13853 = C12555 * C13850;
    const double C13852 = C12555 * C13849;
    const double C13857 = C13852 * C13839;
    const double C13856 = C12555 * C13854;
    const double C13855 = C13852 * C13835;
    const double C13859 = C13857 / C12540;
    const double C13858 = C13855 / C12540;
    const double C13865 = C13238 * C13055;
    const double C13864 = C13054 * C13224;
    const double C13863 = C13055 * C13224;
    const double C13868 = C13852 * C13865;
    const double C13867 = C13852 * C13864;
    const double C13866 = C13832 * C13863;
    const double C13871 = C13868 / C12540;
    const double C13870 = C13867 / C12540;
    const double C13869 = C13866 / C12560;
    const double C13882 = C12555 * C12525;
    const double C13881 = C12555 * C13159;
    const double C13880 = C12555 * C12835;
    const double C13879 = C12555 * C13128;
    const double C13878 = C12555 * C12808;
    const double C13877 = C12555 * C13114;
    const double C13876 = C12555 * C13121;
    const double C13875 = C12555 * C12826;
    const double C13885 = C13882 * C13876;
    const double C13884 = C13875 * C13877;
    const double C13883 = C13875 * C13876;
    const double C13888 = C13885 * C12656;
    const double C13887 = C13884 * C12656;
    const double C13886 = C12570 * C13883;
    const double C13890 = C13888 / C12560;
    const double C13889 = C13887 / C12540;
    const double C13901 = C12555 * C12861;
    const double C13900 = C12555 * C13381;
    const double C13899 = C12555 * C12909;
    const double C13898 = C12555 * C12876;
    const double C13897 = C12555 * C13397;
    const double C13896 = C12555 * C12870;
    const double C13895 = C12555 * C13374;
    const double C13894 = C12555 * C14220;
    const double C13904 = C13901 * C13895;
    const double C13903 = C13894 * C13896;
    const double C13902 = C13895 * C13896;
    const double C13907 = C13904 * C12656;
    const double C13906 = C13903 * C12656;
    const double C13905 = C12570 * C13902;
    const double C13909 = C13907 / C12540;
    const double C13908 = C13906 / C12560;
    const double C13915 = C13901 * C13876;
    const double C13914 = C13877 * C13896;
    const double C13913 = C13896 * C13876;
    const double C13918 = C13042 * C13915;
    const double C13917 = C13042 * C13914;
    const double C13916 = C12987 * C13913;
    const double C13919 = C13916 / C12560;
    const double C13930 = C12555 * C12518;
    const double C13929 = C12555 * C12803;
    const double C13928 = C12555 * C13283;
    const double C13927 = C12555 * C13295;
    const double C13926 = C12555 * C12749;
    const double C13925 = C12555 * C13294;
    const double C13924 = C12555 * C14156;
    const double C13923 = C12555 * C12783;
    const double C13933 = C13930 * C13925;
    const double C13932 = C13923 * C13925;
    const double C13931 = C13923 * C13924;
    const double C13936 = C13933 * C12656;
    const double C13935 = C13932 * C12570;
    const double C13934 = C13931 * C12656;
    const double C13942 = C13930 * C13876;
    const double C13941 = C13923 * C13877;
    const double C13940 = C13923 * C13876;
    const double C13945 = C13090 * C13942;
    const double C13944 = C13941 * C13090;
    const double C13943 = C13087 * C13940;
    const double C13947 = C13945 / C12560;
    const double C13946 = C13944 / C12540;
    const double C13953 = C13901 * C13925;
    const double C13952 = C13924 * C13896;
    const double C13951 = C13925 * C13896;
    const double C13956 = C13953 * C13090;
    const double C13955 = C13090 * C13952;
    const double C13954 = C13087 * C13951;
    const double C13958 = C13956 / C12540;
    const double C13957 = C13955 / C12560;
    const double C13968 = C13882 * C12654;
    const double C13967 = C12555 * C13520;
    const double C13966 = C12555 * C13543;
    const double C13965 = C12555 * C13514;
    const double C13964 = C13875 * C12588;
    const double C13963 = C13875 * C12654;
    const double C13962 = C12555 * C13507;
    const double C13971 = C13968 * C13965;
    const double C13970 = C13964 * C13965;
    const double C13969 = C13962 * C13963;
    const double C13973 = C13971 / C12560;
    const double C13972 = C13970 / C12540;
    const double C13979 = C13901 * C12967;
    const double C13978 = C12871 * C13896;
    const double C13977 = C12967 * C13896;
    const double C13982 = C13979 * C13965;
    const double C13981 = C13978 * C13965;
    const double C13980 = C13962 * C13977;
    const double C13984 = C13982 / C12540;
    const double C13983 = C13981 / C12560;
    const double C13994 = C13901 * C12654;
    const double C13993 = C12555 * C13766;
    const double C13992 = C12555 * C13782;
    const double C13991 = C12588 * C13896;
    const double C13990 = C12555 * C13759;
    const double C13989 = C13896 * C12654;
    const double C13988 = C12555 * C14221;
    const double C13997 = C13990 * C13994;
    const double C13996 = C13990 * C13991;
    const double C13995 = C13988 * C13989;
    const double C13998 = C13995 / C12560;
    const double C14004 = C13930 * C13055;
    const double C14003 = C13923 * C13055;
    const double C14002 = C13923 * C13054;
    const double C14007 = C14004 * C13965;
    const double C14006 = C13962 * C14003;
    const double C14005 = C14002 * C13965;
    const double C14009 = C14007 / C12560;
    const double C14008 = C14005 / C12540;
    const double C14019 = C13930 * C12654;
    const double C14018 = C12555 * C13669;
    const double C14017 = C12555 * C13681;
    const double C14016 = C12555 * C13680;
    const double C14015 = C13923 * C12588;
    const double C14014 = C13923 * C12654;
    const double C14013 = C12555 * C14177;
    const double C14022 = C14016 * C14019;
    const double C14021 = C14015 * C14016;
    const double C14020 = C14013 * C14014;
    const double C14023 = C14021 / 2;
    const double C14029 = C13901 * C13055;
    const double C14028 = C13054 * C13896;
    const double C14027 = C13055 * C13896;
    const double C14032 = C14016 * C14029;
    const double C14031 = C14016 * C14028;
    const double C14030 = C14013 * C14027;
    const double C14035 = C14032 / C12540;
    const double C14034 = C14031 / C12540;
    const double C14033 = C14030 / C12560;
    const double C14041 = C13131 * C13876;
    const double C14040 = C13165 * C13877;
    const double C14039 = C13165 * C13876;
    const double C14044 = C14041 * C13965;
    const double C14043 = C14040 * C13965;
    const double C14042 = C13962 * C14039;
    const double C14046 = C14044 / C12560;
    const double C14045 = C14043 / C12540;
    const double C14052 = C13238 * C13895;
    const double C14051 = C13894 * C13224;
    const double C14050 = C13895 * C13224;
    const double C14055 = C14052 * C13965;
    const double C14054 = C14051 * C13965;
    const double C14053 = C13962 * C14050;
    const double C14057 = C14055 / C12540;
    const double C14056 = C14054 / C12560;
    const double C14063 = C13238 * C13876;
    const double C14062 = C13877 * C13224;
    const double C14061 = C13224 * C13876;
    const double C14066 = C13990 * C14063;
    const double C14065 = C13990 * C14062;
    const double C14064 = C13988 * C14061;
    const double C14067 = C14064 / C12560;
    const double C14073 = C13458 * C13925;
    const double C14072 = C13925 * C13451;
    const double C14071 = C13924 * C13451;
    const double C14076 = C14073 * C13965;
    const double C14075 = C13962 * C14072;
    const double C14074 = C14071 * C13965;
    const double C14078 = C14076 / C12540;
    const double C14077 = C14074 / C12560;
    const double C14084 = C13458 * C13876;
    const double C14083 = C13877 * C13451;
    const double C14082 = C13451 * C13876;
    const double C14087 = C14016 * C14084;
    const double C14086 = C14016 * C14083;
    const double C14085 = C14013 * C14082;
    const double C14090 = C14087 / C12540;
    const double C14089 = C14086 / C12540;
    const double C14088 = C14085 / C12560;
    const double C14096 = C13238 * C13925;
    const double C14095 = C13924 * C13224;
    const double C14094 = C13925 * C13224;
    const double C14099 = C14096 * C14016;
    const double C14098 = C14016 * C14095;
    const double C14097 = C14013 * C14094;
    const double C14100 = C14099 / 2;
    const double C14253 = C12555 * C13756;
    const double C14252 = C12555 * C13371;
    const double C14251 = C12555 * C12827;
    const double C14250 = 4 * C13669;
    const double C14249 = zAB * C13756;
    const double C14248 = C13673 * be;
    const double C14247 = -4 * C13520;
    const double C14246 = C12555 * C12794;
    const double C14245 = 4 * C13283;
    const double C14244 = yAB * C13371;
    const double C14243 = C12555 * C12751;
    const double C14242 = C13287 * be;
    const double C14241 = -4 * C13128;
    const double C14240 = C12751 / C12560;
    const double C14239 = ae * C12810;
    const double C14238 = C12555 * C13691;
    const double C14237 = C12555 * C13306;
    const double C14236 = C13023 / C12560;
    const double C14235 = ae * C13720;
    const double C14234 = C12932 / C12560;
    const double C14233 = ae * C13335;
    const double C14232 = C12786 * be;
    const double C14231 = -4 * C12876;
    const double C14230 = C12555 * C13023;
    const double C14229 = C12555 * C12932;
    const double C14228 = 4 * C12803;
    const double C14227 = xAB * C12827;
    const double C14226 = std::pow(C12529, 4);
    const double C14269 = C12555 * C14248;
    const double C14268 = C12555 * C14232;
    const double C14267 = C12555 * C14242;
    const double C14266 = C14249 + C14250;
    const double C14265 = zAB * C14248;
    const double C14264 = C14247 / C12529;
    const double C14263 = C14244 + C14245;
    const double C14262 = yAB * C14242;
    const double C14261 = C14241 / C12529;
    const double C14260 = C14239 / C12539;
    const double C14259 = C14235 / C12539;
    const double C14258 = C14233 / C12539;
    const double C14257 = xAB * C14232;
    const double C14256 = C14231 / C12529;
    const double C14255 = C14227 + C14228;
    const double C14254 = C14226 * C12540;
    const double C14281 = C14266 * be;
    const double C14280 = C14266 * ae;
    const double C14279 = C14265 / C12529;
    const double C14278 = C14263 * be;
    const double C14277 = C14263 * ae;
    const double C14276 = C14262 / C12529;
    const double C14275 = C14260 - C14240;
    const double C14274 = C14255 * be;
    const double C14273 = C14259 - C14236;
    const double C14272 = C14258 - C14234;
    const double C14271 = C14257 / C12529;
    const double C14270 = C14255 * ae;
    const double C14293 = C14281 / C12529;
    const double C14292 = C14280 / C12529;
    const double C14291 = C14264 - C14279;
    const double C14290 = C14278 / C12529;
    const double C14289 = C14277 / C12529;
    const double C14288 = C14261 - C14276;
    const double C14287 = C12555 * C14275;
    const double C14286 = C14274 / C12529;
    const double C14285 = C12555 * C14273;
    const double C14284 = C12555 * C14272;
    const double C14283 = C14256 - C14271;
    const double C14282 = C14270 / C12529;
    const double C14302 = C13721 - C14293;
    const double C14301 = C14292 + C13721;
    const double C14300 = C14291 * be;
    const double C14299 = C13336 - C14290;
    const double C14298 = C14289 + C13336;
    const double C14297 = C14288 * be;
    const double C14296 = C12811 - C14286;
    const double C14295 = C14283 * be;
    const double C14294 = C14282 + C12811;
    const double C14311 = C12555 * C14301;
    const double C14310 = C12555 * C14298;
    const double C14309 = C12555 * C14294;
    const double C14308 = C12555 * C14302;
    const double C14307 = C14300 / C12529;
    const double C14306 = C12555 * C14299;
    const double C14305 = C14297 / C12529;
    const double C14304 = C12555 * C14296;
    const double C14303 = C14295 / C12529;
    const double C14314 = C13672 - C14307;
    const double C14313 = C13286 - C14305;
    const double C14312 = C12785 - C14303;
    const double C14317 = C12555 * C14314;
    const double C14316 = C12555 * C14313;
    const double C14315 = C12555 * C14312;
    const double hxx200200 =
        C12852 / C12540 -
        (C12555 *
         ((ae * -4 * C12604) / C14254 -
          ((xAB * C14294 + 4 * C12835) * be) / C12529 + C12827 / C12540 +
          ((xAB * C12811 + 4 * C12779) * ae) / C12529 +
          (-2 * C12751) / C12585) *
         C12588 * C12570) /
            2 +
        C12855;
    const double hxx200020 =
        C12975 / C12540 - (C12976 + C14315 * C12871 * C12570) / 2;
    const double hxx200002 =
        C13001 / C12540 - (C14315 * C12588 * C12987) / 2 - C13048;
    const double hxx200110 =
        C13083 - (C13082 / C12540 + (C14304 * C13054 * C12570) / 2);
    const double hxx200101 =
        C13094 / C12540 - (C14304 * C12588 * C13087) / 2 - C13097;
    const double hxx200011 =
        -(C13108 + C13106 / C12540 + (C14315 * C13054 * C13087) / 2);
    const double hxx020200 =
        C13175 / C12540 - (C13190 + C14287 * C13117 * C12570) / 2;
    const double hxx020020 =
        (C12570 * C13208 * C14243 + C13433) / C12540 - C13298;
    const double hxx020002 =
        (C12987 * C13117 * C14243 + C13442 + C13443) / C12540;
    const double hxx020110 =
        C13468 - (C13478 + C12570 * C13450 * C14246) / C12540;
    const double hxx020101 =
        -(C13490 + (C13488 + C13087 * C13117 * C14246) / C12540);
    const double hxx020011 =
        (C13087 * C13450 * C14243 + C13498) / C12540 + C13501;
    const double hxx002200 =
        C13522 / C12540 - (C14287 * C12588 * C13508) / 2 - C13568;
    const double hxx002020 =
        (C13508 * C12871 * C14243 + C13575 + C13576) / C12540;
    const double hxx002002 =
        (C13595 * C12588 * C14243) / C12540 - C13654 + C13816 / C12540;
    const double hxx002110 =
        -(C13824 / C12540 + C13827 + (C13508 * C13054 * C14246) / C12540);
    const double hxx002101 =
        C13845 - (C13832 * C12588 * C14246) / C12540 - C13858;
    const double hxx002011 =
        (C13832 * C13054 * C14243) / C12540 + C13869 + C13870;
    const double hxx110200 =
        C13886 / C12540 - (C14309 * C13877 * C12570) / 2 + C13889;
    const double hxx110020 =
        (C12570 * C13894 * C14268 + C13905) / C12540 - C13908;
    const double hxx110002 =
        (C12987 * C13877 * C14268) / C12540 - C13919 + C13917 / C12540;
    const double hxx110110 =
        C13934 / C12540 - (C13935 + C14251 * C13924 * C12570) / 2;
    const double hxx110101 =
        C13943 / C12540 - (C14251 * C13877 * C13087) / 2 - C13946;
    const double hxx110011 =
        (C13087 * C13924 * C14268 + C13954) / C12540 + C13957;
    const double hxx101200 =
        C13969 / C12540 - (C14309 * C12588 * C13962) / 2 + C13972;
    const double hxx101020 =
        (C13962 * C12871 * C14268 + C13980) / C12540 - C13983;
    const double hxx101002 =
        (C13988 * C12588 * C14268) / C12540 - C13998 + C13996 / C12540;
    const double hxx101110 =
        C14008 - (C14006 / C12540 + (C14251 * C13054 * C13962) / 2);
    const double hxx101101 =
        C14020 / C12540 - (C14251 * C12588 * C14013) / 2 - C14023;
    const double hxx101011 =
        (C14013 * C13054 * C14268) / C12540 + C14033 + C14034;
    const double hxx011200 =
        C14042 / C12540 - (C14287 * C13877 * C13962) / 2 + C14045;
    const double hxx011020 =
        (C13962 * C13894 * C14243 + C14053) / C12540 - C14056;
    const double hxx011002 =
        (C13988 * C13877 * C14243) / C12540 - C14067 + C14065 / C12540;
    const double hxx011110 =
        C14077 - (C14075 + C13962 * C13924 * C14246) / C12540;
    const double hxx011101 =
        C14088 - (C14013 * C13877 * C14246) / C12540 - C14089;
    const double hxx011011 =
        (C14013 * C13924 * C14243 + C14097 + C14098) / C12540;
    const double hxy200200 =
        (C12570 * C12854 * C12607 + C12570 * C12842 * C12717) / C12540 -
        (C12842 * C12607 * C12656) / C12560;
    const double hxy200020 =
        (C12968 * C12973 * C12656) / C12540 -
        (C12968 * C12970 * C12570 + C12960 * C12973 * C12570) / 2;
    const double hxy200002 =
        (C12987 * C12960 * C12607 + C12987 * C12968 * C12717 +
         C13042 * C12968 * C12607) /
        C12540;
    const double hxy200110 =
        (C13076 * C13057 * C12656) / C12540 -
        ((C12570 * C13076 * C13058) / C12540 + (C13080 * C13057 * C12570) / 2);
    const double hxy200101 =
        (C13087 * C13080 * C12607 + C13087 * C13076 * C12717) / C12540 +
        (C13090 * C13076 * C12607) / C12560;
    const double hxy200011 =
        -((C12968 * C13057 * C13090) / C12540 +
          (C13087 * C12968 * C13058) / C12540 + (C12960 * C13057 * C13087) / 2);
    const double hxy020200 =
        (C13167 * C13187 * C12656) / C12540 -
        (C13167 * C13181 * C12570 + C13164 * C13187 * C12570) / 2;
    const double hxy020020 =
        (C12570 * C13430 * C13230 + C12570 * C13426 * C13237) / C12540 -
        (C13430 * C13237 * C12656) / C12560;
    const double hxy020002 =
        (C12987 * C13187 * C13230 + C12987 * C13181 * C13237 +
         C13042 * C13187 * C13237) /
        C12540;
    const double hxy020110 =
        (C13453 * C13473 * C12656) / C12540 -
        ((C13453 * C13476 * C12570) / 2 + (C12570 * C13473 * C13457) / C12540);
    const double hxy020101 =
        -((C13453 * C13187 * C13090) / C12540 + (C13453 * C13181 * C13087) / 2 +
          (C13087 * C13187 * C13457) / C12540);
    const double hxy020011 =
        (C13087 * C13473 * C13230 + C13087 * C13476 * C13237) / C12540 +
        (C13090 * C13473 * C13237) / C12560;
    const double hxy002200 =
        (C13508 * C13164 * C12607 + C13508 * C13167 * C12717 +
         C13564 * C13167 * C12607) /
        C12540;
    const double hxy002020 =
        (C13508 * C12973 * C13230 + C13508 * C12970 * C13237 +
         C13564 * C12973 * C13237) /
        C12540;
    const double hxy002002 =
        -(C13814 * C13237 * C12607 + C13595 * C13237 * C12717 +
          C13595 * C13230 * C12607) /
        C12560;
    const double hxy002110 =
        -((C13453 * C13057 * C13564) / 2 +
          (C13508 * C13453 * C13058 + C13508 * C13057 * C13457) / C12540);
    const double hxy002101 = (C13832 * C13457 * C12607) / C12560 +
                             (C13832 * C13453 * C12717) / C12540 +
                             (C13852 * C13453 * C12607) / C12540;
    const double hxy002011 = (C13832 * C13057 * C13230) / C12540 +
                             (C13832 * C13058 * C13237) / C12560 +
                             (C13852 * C13057 * C13237) / C12540;
    const double hxy110200 = (C12570 * C13878 * C13879) / C12540 -
                             (C13880 * C13881 * C12570) / 2 +
                             (C13878 * C13881 * C12656) / C12540;
    const double hxy110020 = (C12570 * C13897 * C13898) / C12540 -
                             (C13899 * C13900 * C12570) / 2 +
                             (C13899 * C13897 * C12656) / C12540;
    const double hxy110002 =
        (C12987 * C13881 * C13898 + C12987 * C13899 * C13879) / C12540 -
        (C13899 * C13881 * C13042) / 2;
    const double hxy110110 =
        (C13926 * C13927 * C12656) / C12540 -
        (C13926 * C13928 * C12570 + C13929 * C13927 * C12570) / 2;
    const double hxy110101 = (C13087 * C13926 * C13879) / C12540 -
                             (C13929 * C13881 * C13087) / 2 -
                             (C13926 * C13881 * C13090) / C12540;
    const double hxy110011 = (C13087 * C13927 * C13898) / C12540 -
                             (C13899 * C13928 * C13087) / 2 -
                             (C13899 * C13927 * C13090) / C12540;
    const double hxy101200 =
        (C13962 * C13880 * C12607 + C13962 * C13878 * C12717) / C12540 -
        (C13878 * C12607 * C13965) / C12560;
    const double hxy101020 = (C13962 * C12973 * C13898) / C12540 -
                             (C13899 * C12970 * C13962) / 2 +
                             (C13899 * C12973 * C13965) / C12540;
    const double hxy101002 = (C13988 * C13899 * C12717) / C12540 -
                             (C13988 * C13898 * C12607) / C12560 +
                             (C13990 * C13899 * C12607) / C12540;
    const double hxy101110 =
        (C13926 * C13057 * C13965) / C12540 -
        ((C13962 * C13926 * C13058) / C12540 + (C13929 * C13057 * C13962) / 2);
    const double hxy101101 =
        (C14013 * C13929 * C12607 + C14013 * C13926 * C12717 +
         C14016 * C13926 * C12607) /
        C12540;
    const double hxy101011 = (C14013 * C13057 * C13898) / C12540 -
                             (C14013 * C13899 * C13058) / C12540 -
                             (C13899 * C13057 * C14016) / 2;
    const double hxy011200 = (C13962 * C13167 * C13879) / C12540 -
                             (C13164 * C13881 * C13962) / 2 +
                             (C13167 * C13881 * C13965) / C12540;
    const double hxy011020 =
        (C13962 * C13897 * C13230 + C13962 * C13900 * C13237) / C12540 -
        (C13897 * C13237 * C13965) / C12560;
    const double hxy011002 = (C13988 * C13881 * C13230) / C12540 -
                             (C13988 * C13237 * C13879) / C12560 +
                             (C13990 * C13881 * C13237) / C12540;
    const double hxy011110 =
        (C13453 * C13927 * C13965) / C12540 -
        ((C13453 * C13928 * C13962) / 2 + (C13962 * C13927 * C13457) / C12540);
    const double hxy011101 = (C14013 * C13453 * C13879) / C12540 -
                             (C14013 * C13881 * C13457) / C12540 -
                             (C13453 * C13881 * C14016) / 2;
    const double hxy011011 =
        (C14013 * C13927 * C13230 + C14013 * C13928 * C13237 +
         C14016 * C13927 * C13237) /
        C12540;
    const double hxz200200 = (C12854 * C12588 * C12610) / C12540 -
                             (C12842 * C12654 * C12610) / C12560 +
                             (C12842 * C12588 * C12718) / C12540;
    const double hxz200020 =
        (C12960 * C12871 * C12610 + C12968 * C12967 * C12610 +
         C12968 * C12871 * C12718) /
        C12540;
    const double hxz200002 = (C13046 * C12968 * C12654) / C12540 -
                             (C12960 * C12588 * C13046) / 2 -
                             (C12968 * C12588 * C13044) / 2;
    const double hxz200110 = (C13080 * C13054 * C12610) / C12540 +
                             (C13076 * C13055 * C12610) / C12560 +
                             (C13076 * C13054 * C12718) / C12540;
    const double hxz200101 = (C13091 * C13076 * C12654) / C12540 -
                             (C13080 * C12588 * C13091) / 2 -
                             (C13076 * C12588 * C13092) / C12540;
    const double hxz200011 =
        -((C12968 * C13054 * C13092) / C12540 +
          (C13091 * C12968 * C13055) / C12540 + (C12960 * C13054 * C13091) / 2);
    const double hxz020200 =
        (C13164 * C13117 * C12610 + C13167 * C13186 * C12610 +
         C13167 * C13117 * C12718) /
        C12540;
    const double hxz020020 =
        -(C13208 * C13237 * C12718 + C13429 * C13237 * C12610 +
          C13208 * C13230 * C12610) /
        C12560;
    const double hxz020002 =
        (C13046 * C13117 * C13230 + C13046 * C13186 * C13237 +
         C13044 * C13117 * C13237) /
        C12540;
    const double hxz020110 = (C13450 * C13457 * C12610) / C12560 +
                             (C13453 * C13472 * C12610) / C12540 +
                             (C13453 * C13450 * C12718) / C12540;
    const double hxz020101 =
        -((C13453 * C13117 * C13092) / C12540 + (C13453 * C13186 * C13091) / 2 +
          (C13091 * C13117 * C13457) / C12540);
    const double hxz020011 =
        (C13091 * C13450 * C13230 + C13091 * C13472 * C13237) / C12540 +
        (C13092 * C13450 * C13237) / C12560;
    const double hxz002200 = (C13565 * C13167 * C12654) / C12540 -
                             (C13164 * C12588 * C13565) / 2 -
                             (C13167 * C12588 * C13559) / 2;
    const double hxz002020 =
        (C13565 * C12871 * C13230 + C13565 * C12967 * C13237 +
         C13559 * C12871 * C13237) /
        C12540;
    const double hxz002002 = (C13815 * C12588 * C13230) / C12540 -
                             (C13815 * C13237 * C12654) / C12560 +
                             (C13811 * C12588 * C13237) / C12540;
    const double hxz002110 =
        -((C13453 * C13054 * C13559) / 2 +
          (C13565 * C13453 * C13055 + C13565 * C13054 * C13457) / C12540);
    const double hxz002101 = (C13853 * C13453 * C12654) / C12540 -
                             (C13853 * C12588 * C13457) / C12540 -
                             (C13453 * C12588 * C13856) / 2;
    const double hxz002011 = (C13853 * C13054 * C13230) / C12540 +
                             (C13853 * C13055 * C13237) / C12560 +
                             (C13856 * C13054 * C13237) / C12540;
    const double hxz110200 = (C13880 * C13877 * C12610) / C12540 -
                             (C13878 * C13876 * C12610) / C12560 +
                             (C13878 * C13877 * C12718) / C12540;
    const double hxz110020 = (C13899 * C13895 * C12610) / C12540 -
                             (C13894 * C13898 * C12610) / C12560 +
                             (C13899 * C13894 * C12718) / C12540;
    const double hxz110002 =
        (C13046 * C13877 * C13898 + C13046 * C13899 * C13876) / C12540 -
        (C13899 * C13877 * C13044) / 2;
    const double hxz110110 =
        (C13929 * C13924 * C12610 + C13926 * C13925 * C12610 +
         C13926 * C13924 * C12718) /
        C12540;
    const double hxz110101 = (C13091 * C13926 * C13876) / C12540 -
                             (C13929 * C13877 * C13091) / 2 -
                             (C13926 * C13877 * C13092) / C12540;
    const double hxz110011 = (C13091 * C13924 * C13898) / C12540 -
                             (C13899 * C13925 * C13091) / 2 -
                             (C13899 * C13924 * C13092) / C12540;
    const double hxz101200 = (C13966 * C13878 * C12654) / C12540 -
                             (C13880 * C12588 * C13966) / 2 +
                             (C13878 * C12588 * C13967) / C12540;
    const double hxz101020 = (C13966 * C12871 * C13898) / C12540 -
                             (C13899 * C12967 * C13966) / 2 +
                             (C13899 * C12871 * C13967) / C12540;
    const double hxz101002 =
        (C13992 * C12588 * C13898 + C13992 * C13899 * C12654) / C12540 -
        (C13899 * C12588 * C13993) / 2;
    const double hxz101110 =
        (C13926 * C13054 * C13967) / C12540 -
        ((C13966 * C13926 * C13055) / C12540 + (C13929 * C13054 * C13966) / 2);
    const double hxz101101 = (C14017 * C13926 * C12654) / C12540 -
                             (C13929 * C12588 * C14017) / 2 -
                             (C13926 * C12588 * C14018) / 2;
    const double hxz101011 = (C14017 * C13054 * C13898) / C12540 -
                             (C14017 * C13899 * C13055) / C12540 -
                             (C13899 * C13054 * C14018) / 2;
    const double hxz011200 = (C13966 * C13167 * C13876) / C12540 -
                             (C13164 * C13877 * C13966) / 2 +
                             (C13167 * C13877 * C13967) / C12540;
    const double hxz011020 =
        (C13966 * C13894 * C13230 + C13966 * C13895 * C13237) / C12540 -
        (C13894 * C13237 * C13967) / C12560;
    const double hxz011002 = (C13992 * C13877 * C13230) / C12540 -
                             (C13992 * C13237 * C13876) / C12560 +
                             (C13993 * C13877 * C13237) / C12540;
    const double hxz011110 =
        (C13453 * C13924 * C13967) / C12540 -
        ((C13453 * C13925 * C13966) / 2 + (C13966 * C13924 * C13457) / C12540);
    const double hxz011101 = (C14017 * C13453 * C13876) / C12540 -
                             (C14017 * C13877 * C13457) / C12540 -
                             (C13453 * C13877 * C14018) / 2;
    const double hxz011011 =
        (C14017 * C13924 * C13230 + C14017 * C13925 * C13237 +
         C14018 * C13924 * C13237) /
        C12540;
    const double hyy200200 =
        (C12852 + C12570 * C12595 * C14229) / C12540 - C12697;
    const double hyy200020 =
        C12977 / C12540 - (C12887 * C14284 * C12570 + C12976) / 2;
    const double hyy200002 =
        (C13001 + C12987 * C12887 * C14229 + C13047) / C12540;
    const double hyy200110 =
        C13074 - (C12570 * C13061 * C14237 + C13082) / C12540;
    const double hyy200101 =
        (C13094 + C13087 * C13061 * C14229) / C12540 + C13098;
    const double hyy200011 =
        -(C13109 + (C13087 * C12887 * C14237 + C13106) / C12540);
    const double hyy020200 =
        C13191 / C12540 - (C13131 * C14316 * C12570 + C13190) / 2;
    const double hyy020020 =
        C13433 / C12540 -
        (C13238 * C12555 *
         ((ae * -4 * C13259) / C14254 -
          ((yAB * C14298 + 4 * C13381) * be) / C12529 + C13371 / C12540 +
          ((yAB * C13336 + 4 * C13320) * ae) / C12529 +
          (-2 * C12932) / C12585) *
         C12570) /
            2 +
        C13435;
    const double hyy020002 =
        C13442 / C12540 - (C13238 * C14316 * C12987) / 2 - C13445;
    const double hyy020110 =
        C13480 - ((C13458 * C14306 * C12570) / 2 + C13478 / C12540);
    const double hyy020101 =
        -(C13491 + (C13458 * C14316 * C13087) / 2 + C13488 / C12540);
    const double hyy020011 =
        C13498 / C12540 - (C13238 * C14306 * C13087) / 2 - C13502;
    const double hyy002200 =
        (C13522 + C13508 * C13131 * C14229 + C13567) / C12540;
    const double hyy002020 =
        C13575 / C12540 - (C13238 * C14284 * C13508) / 2 - C13578;
    const double hyy002002 =
        (C13595 * C13238 * C14229) / C12540 - C13654 + C13817 / C12540;
    const double hyy002110 =
        -(C13826 / C12540 + (C13508 * C13458 * C14237) / C12540 + C13827);
    const double hyy002101 =
        C13845 + (C13832 * C13458 * C14229) / C12540 + C13859;
    const double hyy002011 =
        C13869 - (C13832 * C13238 * C14237) / C12540 - C13871;
    const double hyy110200 =
        (C13886 + C12570 * C13882 * C14267) / C12540 - C13890;
    const double hyy110020 =
        C13905 / C12540 - (C13901 * C14310 * C12570) / 2 + C13909;
    const double hyy110002 =
        (C12987 * C13901 * C14267) / C12540 - C13919 + C13918 / C12540;
    const double hyy110110 =
        C13936 / C12540 - (C13930 * C14252 * C12570 + C13935) / 2;
    const double hyy110101 =
        (C13943 + C13087 * C13930 * C14267) / C12540 + C13947;
    const double hyy110011 =
        C13954 / C12540 - (C13901 * C14252 * C13087) / 2 - C13958;
    const double hyy101200 =
        (C13969 + C13962 * C13882 * C14229) / C12540 - C13973;
    const double hyy101020 =
        C13980 / C12540 - (C13901 * C14284 * C13962) / 2 + C13984;
    const double hyy101002 =
        (C13988 * C13901 * C14229) / C12540 - C13998 + C13997 / C12540;
    const double hyy101110 =
        C14009 - (C13962 * C13930 * C14237 + C14006) / C12540;
    const double hyy101101 =
        (C14020 + C14013 * C13930 * C14229 + C14022) / C12540;
    const double hyy101011 =
        C14033 - (C14013 * C13901 * C14237) / C12540 - C14035;
    const double hyy011200 =
        (C14042 + C13962 * C13131 * C14267) / C12540 - C14046;
    const double hyy011020 =
        C14053 / C12540 - (C13238 * C14310 * C13962) / 2 + C14057;
    const double hyy011002 =
        (C13988 * C13238 * C14267) / C12540 - C14067 + C14066 / C12540;
    const double hyy011110 =
        C14078 - ((C13458 * C14252 * C13962) / 2 + C14075 / C12540);
    const double hyy011101 =
        C14088 + (C14013 * C13458 * C14267) / C12540 + C14090;
    const double hyy011011 =
        C14097 / C12540 - (C13238 * C14252 * C14013) / 2 - C14100;
    const double hyz200200 =
        -(C12595 * C12607 * C12718 + C12595 * C12717 * C12610 +
          C12847 * C12607 * C12610) /
        C12560;
    const double hyz200020 =
        (C12966 * C12973 * C12610 + C12887 * C12970 * C12610 +
         C12887 * C12973 * C12718) /
        C12540;
    const double hyz200002 =
        (C13046 * C12966 * C12607 + C13046 * C12887 * C12717 +
         C13044 * C12887 * C12607) /
        C12540;
    const double hyz200110 = (C13075 * C13057 * C12610) / C12540 +
                             (C13061 * C13058 * C12610) / C12560 +
                             (C13061 * C13057 * C12718) / C12540;
    const double hyz200101 =
        (C13091 * C13075 * C12607 + C13091 * C13061 * C12717) / C12540 +
        (C13092 * C13061 * C12607) / C12560;
    const double hyz200011 =
        -((C12887 * C13057 * C13092) / C12540 +
          (C13091 * C12887 * C13058) / C12540 + (C12966 * C13057 * C13091) / 2);
    const double hyz020200 =
        (C13165 * C13187 * C12610 + C13131 * C13181 * C12610 +
         C13131 * C13187 * C12718) /
        C12540;
    const double hyz020020 = (C13238 * C13426 * C12610) / C12540 -
                             (C13430 * C13224 * C12610) / C12560 +
                             (C13238 * C13430 * C12718) / C12540;
    const double hyz020002 = (C13046 * C13187 * C13224) / C12540 -
                             (C13238 * C13181 * C13046) / 2 -
                             (C13238 * C13187 * C13044) / 2;
    const double hyz020110 = (C13473 * C13451 * C12610) / C12560 +
                             (C13458 * C13476 * C12610) / C12540 +
                             (C13458 * C13473 * C12718) / C12540;
    const double hyz020101 =
        -((C13458 * C13187 * C13092) / C12540 + (C13458 * C13181 * C13091) / 2 +
          (C13091 * C13187 * C13451) / C12540);
    const double hyz020011 = (C13091 * C13473 * C13224) / C12540 -
                             (C13238 * C13476 * C13091) / 2 -
                             (C13238 * C13473 * C13092) / C12540;
    const double hyz002200 =
        (C13565 * C13165 * C12607 + C13565 * C13131 * C12717 +
         C13559 * C13131 * C12607) /
        C12540;
    const double hyz002020 = (C13565 * C12973 * C13224) / C12540 -
                             (C13238 * C12970 * C13565) / 2 -
                             (C13238 * C12973 * C13559) / 2;
    const double hyz002002 = (C13815 * C13238 * C12717) / C12540 -
                             (C13815 * C13224 * C12607) / C12560 +
                             (C13811 * C13238 * C12607) / C12540;
    const double hyz002110 =
        -((C13458 * C13057 * C13559) / 2 +
          (C13565 * C13458 * C13058 + C13565 * C13057 * C13451) / C12540);
    const double hyz002101 = (C13853 * C13451 * C12607) / C12560 +
                             (C13853 * C13458 * C12717) / C12540 +
                             (C13856 * C13458 * C12607) / C12540;
    const double hyz002011 = (C13853 * C13057 * C13224) / C12540 -
                             (C13853 * C13238 * C13058) / C12540 -
                             (C13238 * C13057 * C13856) / 2;
    const double hyz110200 = (C13875 * C13881 * C12610) / C12540 -
                             (C13882 * C13879 * C12610) / C12560 +
                             (C13882 * C13881 * C12718) / C12540;
    const double hyz110020 = (C13901 * C13900 * C12610) / C12540 -
                             (C13897 * C13896 * C12610) / C12560 +
                             (C13901 * C13897 * C12718) / C12540;
    const double hyz110002 =
        (C13046 * C13881 * C13896 + C13046 * C13901 * C13879) / C12540 -
        (C13901 * C13881 * C13044) / 2;
    const double hyz110110 =
        (C13923 * C13927 * C12610 + C13930 * C13928 * C12610 +
         C13930 * C13927 * C12718) /
        C12540;
    const double hyz110101 = (C13091 * C13930 * C13879) / C12540 -
                             (C13923 * C13881 * C13091) / 2 -
                             (C13930 * C13881 * C13092) / C12540;
    const double hyz110011 = (C13091 * C13927 * C13896) / C12540 -
                             (C13901 * C13928 * C13091) / 2 -
                             (C13901 * C13927 * C13092) / C12540;
    const double hyz101200 =
        (C13966 * C13875 * C12607 + C13966 * C13882 * C12717) / C12540 -
        (C13882 * C12607 * C13967) / C12560;
    const double hyz101020 = (C13966 * C12973 * C13896) / C12540 -
                             (C13901 * C12970 * C13966) / 2 +
                             (C13901 * C12973 * C13967) / C12540;
    const double hyz101002 = (C13992 * C13901 * C12717) / C12540 -
                             (C13992 * C13896 * C12607) / C12560 +
                             (C13993 * C13901 * C12607) / C12540;
    const double hyz101110 =
        (C13930 * C13057 * C13967) / C12540 -
        ((C13966 * C13930 * C13058) / C12540 + (C13923 * C13057 * C13966) / 2);
    const double hyz101101 =
        (C14017 * C13923 * C12607 + C14017 * C13930 * C12717 +
         C14018 * C13930 * C12607) /
        C12540;
    const double hyz101011 = (C14017 * C13057 * C13896) / C12540 -
                             (C14017 * C13901 * C13058) / C12540 -
                             (C13901 * C13057 * C14018) / 2;
    const double hyz011200 = (C13966 * C13131 * C13879) / C12540 -
                             (C13165 * C13881 * C13966) / 2 +
                             (C13131 * C13881 * C13967) / C12540;
    const double hyz011020 = (C13966 * C13897 * C13224) / C12540 -
                             (C13238 * C13900 * C13966) / 2 +
                             (C13238 * C13897 * C13967) / C12540;
    const double hyz011002 =
        (C13992 * C13881 * C13224 + C13992 * C13238 * C13879) / C12540 -
        (C13238 * C13881 * C13993) / 2;
    const double hyz011110 =
        (C13458 * C13927 * C13967) / C12540 -
        ((C13458 * C13928 * C13966) / 2 + (C13966 * C13927 * C13451) / C12540);
    const double hyz011101 = (C14017 * C13458 * C13879) / C12540 -
                             (C14017 * C13881 * C13451) / C12540 -
                             (C13458 * C13881 * C14018) / 2;
    const double hyz011011 = (C14017 * C13927 * C13224) / C12540 -
                             (C13238 * C13928 * C14017) / 2 -
                             (C13238 * C13927 * C14018) / 2;
    const double hzz200200 =
        C12855 - C12697 + (C12595 * C12588 * C14230) / C12540;
    const double hzz200020 =
        (C12975 + C12977 + C12887 * C12871 * C14230) / C12540;
    const double hzz200002 =
        C13047 / C12540 - C13048 - (C12887 * C12588 * C14285) / 2;
    const double hzz200110 =
        C13083 + C13074 + (C13061 * C13054 * C14230) / C12540;
    const double hzz200101 =
        C13098 - C13097 - (C13061 * C12588 * C14238) / C12540;
    const double hzz200011 =
        -((C12887 * C13054 * C14238) / C12540 + C13109 + C13108);
    const double hzz020200 =
        (C13175 + C13191 + C13131 * C13117 * C14230) / C12540;
    const double hzz020020 =
        C13435 - C13298 + (C13238 * C13208 * C14230) / C12540;
    const double hzz020002 =
        C13443 / C12540 - C13445 - (C13238 * C13117 * C14285) / 2;
    const double hzz020110 =
        C13468 + C13480 + (C13458 * C13450 * C14230) / C12540;
    const double hzz020101 =
        -((C13458 * C13117 * C14238) / C12540 + C13491 + C13490);
    const double hzz020011 =
        C13501 - C13502 - (C13238 * C13450 * C14238) / C12540;
    const double hzz002200 =
        C13567 / C12540 - C13568 - (C13131 * C12588 * C14317) / 2;
    const double hzz002020 =
        C13576 / C12540 - C13578 - (C13238 * C12871 * C14317) / 2;
    const double hzz002002 =
        (C13816 + C13817) / C12540 -
        (C13238 * C12588 * C12555 *
         ((ae * -4 * C13645) / C14254 -
          ((zAB * C14301 + 4 * C13766) * be) / C12529 + C13756 / C12540 +
          ((zAB * C13721 + 4 * C13705) * ae) / C12529 +
          (-2 * C13023) / C12585)) /
            2;
    const double hzz002110 =
        -((C13458 * C13054 * C14317) / 2 + (C13826 + C13824) / C12540);
    const double hzz002101 = C13859 - C13858 - (C13458 * C12588 * C14308) / 2;
    const double hzz002011 = C13870 - C13871 - (C13238 * C13054 * C14308) / 2;
    const double hzz110200 =
        C13889 - C13890 + (C13882 * C13877 * C14230) / C12540;
    const double hzz110020 =
        C13909 - C13908 + (C13901 * C13894 * C14230) / C12540;
    const double hzz110002 =
        (C13917 + C13918) / C12540 - (C13901 * C13877 * C14285) / 2;
    const double hzz110110 =
        (C13934 + C13936 + C13930 * C13924 * C14230) / C12540;
    const double hzz110101 =
        C13947 - C13946 - (C13930 * C13877 * C14238) / C12540;
    const double hzz110011 =
        C13957 - C13958 - (C13901 * C13924 * C14238) / C12540;
    const double hzz101200 =
        C13972 - C13973 + (C13882 * C12588 * C14269) / C12540;
    const double hzz101020 =
        C13984 - C13983 + (C13901 * C12871 * C14269) / C12540;
    const double hzz101002 =
        (C13996 + C13997) / C12540 - (C13901 * C12588 * C14311) / 2;
    const double hzz101110 =
        C14008 + C14009 + (C13930 * C13054 * C14269) / C12540;
    const double hzz101101 =
        C14022 / C12540 - C14023 - (C13930 * C12588 * C14253) / 2;
    const double hzz101011 = C14034 - C14035 - (C13901 * C13054 * C14253) / 2;
    const double hzz011200 =
        C14045 - C14046 + (C13131 * C13877 * C14269) / C12540;
    const double hzz011020 =
        C14057 - C14056 + (C13238 * C13894 * C14269) / C12540;
    const double hzz011002 =
        (C14065 + C14066) / C12540 - (C13238 * C13877 * C14311) / 2;
    const double hzz011110 =
        C14077 + C14078 + (C13458 * C13924 * C14269) / C12540;
    const double hzz011101 = C14090 - C14089 - (C13458 * C13877 * C14253) / 2;
    const double hzz011011 =
        C14098 / C12540 - C14100 - (C13238 * C13924 * C14253) / 2;
    if (same_atom) {
        hxx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hxx110110;
        hxx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hxx110011;
        hxx[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hxx110002 -
                  (std::sqrt(0.75) * hxx110020 + std::sqrt(0.75) * hxx110200));
        hxx[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hxx110101;
        hxx[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hxx110200 - std::sqrt(2.25) * hxx110020);
        hxx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hxx011110;
        hxx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hxx011011;
        hxx[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hxx011002 -
                  (std::sqrt(0.75) * hxx011020 + std::sqrt(0.75) * hxx011200));
        hxx[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hxx011101;
        hxx[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hxx011200 - std::sqrt(2.25) * hxx011020);
        hxx[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(3.0) * hxx002110 -
                  (std::sqrt(0.75) * hxx020110 + std::sqrt(0.75) * hxx200110));
        hxx[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(3.0) * hxx002011 -
                  (std::sqrt(0.75) * hxx020011 + std::sqrt(0.75) * hxx200011));
        hxx[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (0.25 * hxx200200 + 0.25 * hxx200020 - 0.5 * hxx200002 +
                  0.25 * hxx020200 + 0.25 * hxx020020 - 0.5 * hxx020002 -
                  0.5 * hxx002200 - 0.5 * hxx002020 + hxx002002);
        hxx[(Ai + 2) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(3.0) * hxx002101 -
                  (std::sqrt(0.75) * hxx020101 + std::sqrt(0.75) * hxx200101));
        hxx[(Ai + 2) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.1875) * hxx200020 - std::sqrt(0.1875) * hxx200200 -
             std::sqrt(0.1875) * hxx020200 + std::sqrt(0.1875) * hxx020020 +
             std::sqrt(0.75) * hxx002200 - std::sqrt(0.75) * hxx002020);
        hxx[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hxx101110;
        hxx[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hxx101011;
        hxx[(Ai + 3) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hxx101002 -
                  (std::sqrt(0.75) * hxx101020 + std::sqrt(0.75) * hxx101200));
        hxx[(Ai + 3) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hxx101101;
        hxx[(Ai + 3) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hxx101200 - std::sqrt(2.25) * hxx101020);
        hxx[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(2.25) * hxx200110 - std::sqrt(2.25) * hxx020110);
        hxx[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(2.25) * hxx200011 - std::sqrt(2.25) * hxx020011);
        hxx[(Ai + 4) * matrix_size + Bi + 2] +=
            cc *
            (std::sqrt(0.75) * hxx200002 -
             (std::sqrt(0.1875) * hxx200020 + std::sqrt(0.1875) * hxx200200) +
             std::sqrt(0.1875) * hxx020200 + std::sqrt(0.1875) * hxx020020 -
             std::sqrt(0.75) * hxx020002);
        hxx[(Ai + 4) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(2.25) * hxx200101 - std::sqrt(2.25) * hxx020101);
        hxx[(Ai + 4) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.5625) * hxx200200 - std::sqrt(0.5625) * hxx200020 -
             std::sqrt(0.5625) * hxx020200 + std::sqrt(0.5625) * hxx020020);
        hxy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hxy110110;
        hxy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hxy110011;
        hxy[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hxy110002 -
                  (std::sqrt(0.75) * hxy110020 + std::sqrt(0.75) * hxy110200));
        hxy[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hxy110101;
        hxy[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hxy110200 - std::sqrt(2.25) * hxy110020);
        hxy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hxy011110;
        hxy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hxy011011;
        hxy[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hxy011002 -
                  (std::sqrt(0.75) * hxy011020 + std::sqrt(0.75) * hxy011200));
        hxy[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hxy011101;
        hxy[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hxy011200 - std::sqrt(2.25) * hxy011020);
        hxy[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(3.0) * hxy002110 -
                  (std::sqrt(0.75) * hxy020110 + std::sqrt(0.75) * hxy200110));
        hxy[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(3.0) * hxy002011 -
                  (std::sqrt(0.75) * hxy020011 + std::sqrt(0.75) * hxy200011));
        hxy[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (0.25 * hxy200200 + 0.25 * hxy200020 - 0.5 * hxy200002 +
                  0.25 * hxy020200 + 0.25 * hxy020020 - 0.5 * hxy020002 -
                  0.5 * hxy002200 - 0.5 * hxy002020 + hxy002002);
        hxy[(Ai + 2) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(3.0) * hxy002101 -
                  (std::sqrt(0.75) * hxy020101 + std::sqrt(0.75) * hxy200101));
        hxy[(Ai + 2) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.1875) * hxy200020 - std::sqrt(0.1875) * hxy200200 -
             std::sqrt(0.1875) * hxy020200 + std::sqrt(0.1875) * hxy020020 +
             std::sqrt(0.75) * hxy002200 - std::sqrt(0.75) * hxy002020);
        hxy[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hxy101110;
        hxy[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hxy101011;
        hxy[(Ai + 3) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hxy101002 -
                  (std::sqrt(0.75) * hxy101020 + std::sqrt(0.75) * hxy101200));
        hxy[(Ai + 3) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hxy101101;
        hxy[(Ai + 3) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hxy101200 - std::sqrt(2.25) * hxy101020);
        hxy[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(2.25) * hxy200110 - std::sqrt(2.25) * hxy020110);
        hxy[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(2.25) * hxy200011 - std::sqrt(2.25) * hxy020011);
        hxy[(Ai + 4) * matrix_size + Bi + 2] +=
            cc *
            (std::sqrt(0.75) * hxy200002 -
             (std::sqrt(0.1875) * hxy200020 + std::sqrt(0.1875) * hxy200200) +
             std::sqrt(0.1875) * hxy020200 + std::sqrt(0.1875) * hxy020020 -
             std::sqrt(0.75) * hxy020002);
        hxy[(Ai + 4) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(2.25) * hxy200101 - std::sqrt(2.25) * hxy020101);
        hxy[(Ai + 4) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.5625) * hxy200200 - std::sqrt(0.5625) * hxy200020 -
             std::sqrt(0.5625) * hxy020200 + std::sqrt(0.5625) * hxy020020);
        hxz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hxz110110;
        hxz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hxz110011;
        hxz[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hxz110002 -
                  (std::sqrt(0.75) * hxz110020 + std::sqrt(0.75) * hxz110200));
        hxz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hxz110101;
        hxz[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hxz110200 - std::sqrt(2.25) * hxz110020);
        hxz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hxz011110;
        hxz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hxz011011;
        hxz[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hxz011002 -
                  (std::sqrt(0.75) * hxz011020 + std::sqrt(0.75) * hxz011200));
        hxz[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hxz011101;
        hxz[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hxz011200 - std::sqrt(2.25) * hxz011020);
        hxz[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(3.0) * hxz002110 -
                  (std::sqrt(0.75) * hxz020110 + std::sqrt(0.75) * hxz200110));
        hxz[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(3.0) * hxz002011 -
                  (std::sqrt(0.75) * hxz020011 + std::sqrt(0.75) * hxz200011));
        hxz[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (0.25 * hxz200200 + 0.25 * hxz200020 - 0.5 * hxz200002 +
                  0.25 * hxz020200 + 0.25 * hxz020020 - 0.5 * hxz020002 -
                  0.5 * hxz002200 - 0.5 * hxz002020 + hxz002002);
        hxz[(Ai + 2) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(3.0) * hxz002101 -
                  (std::sqrt(0.75) * hxz020101 + std::sqrt(0.75) * hxz200101));
        hxz[(Ai + 2) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.1875) * hxz200020 - std::sqrt(0.1875) * hxz200200 -
             std::sqrt(0.1875) * hxz020200 + std::sqrt(0.1875) * hxz020020 +
             std::sqrt(0.75) * hxz002200 - std::sqrt(0.75) * hxz002020);
        hxz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hxz101110;
        hxz[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hxz101011;
        hxz[(Ai + 3) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hxz101002 -
                  (std::sqrt(0.75) * hxz101020 + std::sqrt(0.75) * hxz101200));
        hxz[(Ai + 3) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hxz101101;
        hxz[(Ai + 3) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hxz101200 - std::sqrt(2.25) * hxz101020);
        hxz[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(2.25) * hxz200110 - std::sqrt(2.25) * hxz020110);
        hxz[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(2.25) * hxz200011 - std::sqrt(2.25) * hxz020011);
        hxz[(Ai + 4) * matrix_size + Bi + 2] +=
            cc *
            (std::sqrt(0.75) * hxz200002 -
             (std::sqrt(0.1875) * hxz200020 + std::sqrt(0.1875) * hxz200200) +
             std::sqrt(0.1875) * hxz020200 + std::sqrt(0.1875) * hxz020020 -
             std::sqrt(0.75) * hxz020002);
        hxz[(Ai + 4) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(2.25) * hxz200101 - std::sqrt(2.25) * hxz020101);
        hxz[(Ai + 4) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.5625) * hxz200200 - std::sqrt(0.5625) * hxz200020 -
             std::sqrt(0.5625) * hxz020200 + std::sqrt(0.5625) * hxz020020);
        hyy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hyy110110;
        hyy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hyy110011;
        hyy[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hyy110002 -
                  (std::sqrt(0.75) * hyy110020 + std::sqrt(0.75) * hyy110200));
        hyy[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hyy110101;
        hyy[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hyy110200 - std::sqrt(2.25) * hyy110020);
        hyy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hyy011110;
        hyy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hyy011011;
        hyy[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hyy011002 -
                  (std::sqrt(0.75) * hyy011020 + std::sqrt(0.75) * hyy011200));
        hyy[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hyy011101;
        hyy[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hyy011200 - std::sqrt(2.25) * hyy011020);
        hyy[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(3.0) * hyy002110 -
                  (std::sqrt(0.75) * hyy020110 + std::sqrt(0.75) * hyy200110));
        hyy[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(3.0) * hyy002011 -
                  (std::sqrt(0.75) * hyy020011 + std::sqrt(0.75) * hyy200011));
        hyy[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (0.25 * hyy200200 + 0.25 * hyy200020 - 0.5 * hyy200002 +
                  0.25 * hyy020200 + 0.25 * hyy020020 - 0.5 * hyy020002 -
                  0.5 * hyy002200 - 0.5 * hyy002020 + hyy002002);
        hyy[(Ai + 2) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(3.0) * hyy002101 -
                  (std::sqrt(0.75) * hyy020101 + std::sqrt(0.75) * hyy200101));
        hyy[(Ai + 2) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.1875) * hyy200020 - std::sqrt(0.1875) * hyy200200 -
             std::sqrt(0.1875) * hyy020200 + std::sqrt(0.1875) * hyy020020 +
             std::sqrt(0.75) * hyy002200 - std::sqrt(0.75) * hyy002020);
        hyy[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hyy101110;
        hyy[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hyy101011;
        hyy[(Ai + 3) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hyy101002 -
                  (std::sqrt(0.75) * hyy101020 + std::sqrt(0.75) * hyy101200));
        hyy[(Ai + 3) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hyy101101;
        hyy[(Ai + 3) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hyy101200 - std::sqrt(2.25) * hyy101020);
        hyy[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(2.25) * hyy200110 - std::sqrt(2.25) * hyy020110);
        hyy[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(2.25) * hyy200011 - std::sqrt(2.25) * hyy020011);
        hyy[(Ai + 4) * matrix_size + Bi + 2] +=
            cc *
            (std::sqrt(0.75) * hyy200002 -
             (std::sqrt(0.1875) * hyy200020 + std::sqrt(0.1875) * hyy200200) +
             std::sqrt(0.1875) * hyy020200 + std::sqrt(0.1875) * hyy020020 -
             std::sqrt(0.75) * hyy020002);
        hyy[(Ai + 4) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(2.25) * hyy200101 - std::sqrt(2.25) * hyy020101);
        hyy[(Ai + 4) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.5625) * hyy200200 - std::sqrt(0.5625) * hyy200020 -
             std::sqrt(0.5625) * hyy020200 + std::sqrt(0.5625) * hyy020020);
        hyz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hyz110110;
        hyz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hyz110011;
        hyz[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hyz110002 -
                  (std::sqrt(0.75) * hyz110020 + std::sqrt(0.75) * hyz110200));
        hyz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hyz110101;
        hyz[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hyz110200 - std::sqrt(2.25) * hyz110020);
        hyz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hyz011110;
        hyz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hyz011011;
        hyz[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hyz011002 -
                  (std::sqrt(0.75) * hyz011020 + std::sqrt(0.75) * hyz011200));
        hyz[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hyz011101;
        hyz[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hyz011200 - std::sqrt(2.25) * hyz011020);
        hyz[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(3.0) * hyz002110 -
                  (std::sqrt(0.75) * hyz020110 + std::sqrt(0.75) * hyz200110));
        hyz[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(3.0) * hyz002011 -
                  (std::sqrt(0.75) * hyz020011 + std::sqrt(0.75) * hyz200011));
        hyz[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (0.25 * hyz200200 + 0.25 * hyz200020 - 0.5 * hyz200002 +
                  0.25 * hyz020200 + 0.25 * hyz020020 - 0.5 * hyz020002 -
                  0.5 * hyz002200 - 0.5 * hyz002020 + hyz002002);
        hyz[(Ai + 2) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(3.0) * hyz002101 -
                  (std::sqrt(0.75) * hyz020101 + std::sqrt(0.75) * hyz200101));
        hyz[(Ai + 2) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.1875) * hyz200020 - std::sqrt(0.1875) * hyz200200 -
             std::sqrt(0.1875) * hyz020200 + std::sqrt(0.1875) * hyz020020 +
             std::sqrt(0.75) * hyz002200 - std::sqrt(0.75) * hyz002020);
        hyz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hyz101110;
        hyz[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hyz101011;
        hyz[(Ai + 3) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hyz101002 -
                  (std::sqrt(0.75) * hyz101020 + std::sqrt(0.75) * hyz101200));
        hyz[(Ai + 3) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hyz101101;
        hyz[(Ai + 3) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hyz101200 - std::sqrt(2.25) * hyz101020);
        hyz[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(2.25) * hyz200110 - std::sqrt(2.25) * hyz020110);
        hyz[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(2.25) * hyz200011 - std::sqrt(2.25) * hyz020011);
        hyz[(Ai + 4) * matrix_size + Bi + 2] +=
            cc *
            (std::sqrt(0.75) * hyz200002 -
             (std::sqrt(0.1875) * hyz200020 + std::sqrt(0.1875) * hyz200200) +
             std::sqrt(0.1875) * hyz020200 + std::sqrt(0.1875) * hyz020020 -
             std::sqrt(0.75) * hyz020002);
        hyz[(Ai + 4) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(2.25) * hyz200101 - std::sqrt(2.25) * hyz020101);
        hyz[(Ai + 4) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.5625) * hyz200200 - std::sqrt(0.5625) * hyz200020 -
             std::sqrt(0.5625) * hyz020200 + std::sqrt(0.5625) * hyz020020);
        hzz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hzz110110;
        hzz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hzz110011;
        hzz[(Ai + 0) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hzz110002 -
                  (std::sqrt(0.75) * hzz110020 + std::sqrt(0.75) * hzz110200));
        hzz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hzz110101;
        hzz[(Ai + 0) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hzz110200 - std::sqrt(2.25) * hzz110020);
        hzz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hzz011110;
        hzz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hzz011011;
        hzz[(Ai + 1) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hzz011002 -
                  (std::sqrt(0.75) * hzz011020 + std::sqrt(0.75) * hzz011200));
        hzz[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hzz011101;
        hzz[(Ai + 1) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hzz011200 - std::sqrt(2.25) * hzz011020);
        hzz[(Ai + 2) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(3.0) * hzz002110 -
                  (std::sqrt(0.75) * hzz020110 + std::sqrt(0.75) * hzz200110));
        hzz[(Ai + 2) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(3.0) * hzz002011 -
                  (std::sqrt(0.75) * hzz020011 + std::sqrt(0.75) * hzz200011));
        hzz[(Ai + 2) * matrix_size + Bi + 2] +=
            cc * (0.25 * hzz200200 + 0.25 * hzz200020 - 0.5 * hzz200002 +
                  0.25 * hzz020200 + 0.25 * hzz020020 - 0.5 * hzz020002 -
                  0.5 * hzz002200 - 0.5 * hzz002020 + hzz002002);
        hzz[(Ai + 2) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(3.0) * hzz002101 -
                  (std::sqrt(0.75) * hzz020101 + std::sqrt(0.75) * hzz200101));
        hzz[(Ai + 2) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.1875) * hzz200020 - std::sqrt(0.1875) * hzz200200 -
             std::sqrt(0.1875) * hzz020200 + std::sqrt(0.1875) * hzz020020 +
             std::sqrt(0.75) * hzz002200 - std::sqrt(0.75) * hzz002020);
        hzz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * hzz101110;
        hzz[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * hzz101011;
        hzz[(Ai + 3) * matrix_size + Bi + 2] +=
            cc * (std::sqrt(3.0) * hzz101002 -
                  (std::sqrt(0.75) * hzz101020 + std::sqrt(0.75) * hzz101200));
        hzz[(Ai + 3) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * hzz101101;
        hzz[(Ai + 3) * matrix_size + Bi + 4] +=
            cc * (std::sqrt(2.25) * hzz101200 - std::sqrt(2.25) * hzz101020);
        hzz[(Ai + 4) * matrix_size + Bi + 0] +=
            cc * (std::sqrt(2.25) * hzz200110 - std::sqrt(2.25) * hzz020110);
        hzz[(Ai + 4) * matrix_size + Bi + 1] +=
            cc * (std::sqrt(2.25) * hzz200011 - std::sqrt(2.25) * hzz020011);
        hzz[(Ai + 4) * matrix_size + Bi + 2] +=
            cc *
            (std::sqrt(0.75) * hzz200002 -
             (std::sqrt(0.1875) * hzz200020 + std::sqrt(0.1875) * hzz200200) +
             std::sqrt(0.1875) * hzz020200 + std::sqrt(0.1875) * hzz020020 -
             std::sqrt(0.75) * hzz020002);
        hzz[(Ai + 4) * matrix_size + Bi + 3] +=
            cc * (std::sqrt(2.25) * hzz200101 - std::sqrt(2.25) * hzz020101);
        hzz[(Ai + 4) * matrix_size + Bi + 4] +=
            cc *
            (std::sqrt(0.5625) * hzz200200 - std::sqrt(0.5625) * hzz200020 -
             std::sqrt(0.5625) * hzz020200 + std::sqrt(0.5625) * hzz020020);
    } else {
        hxx[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hxx110110;
        hxx[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hxx110011;
        hxx[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hxx110002 -
                  (std::sqrt(0.75) * hxx110020 + std::sqrt(0.75) * hxx110200));
        hxx[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hxx110101;
        hxx[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hxx110200 - std::sqrt(2.25) * hxx110020);
        hxx[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hxx011110;
        hxx[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hxx011011;
        hxx[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hxx011002 -
                  (std::sqrt(0.75) * hxx011020 + std::sqrt(0.75) * hxx011200));
        hxx[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hxx011101;
        hxx[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hxx011200 - std::sqrt(2.25) * hxx011020);
        hxx[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(3.0) * hxx002110 -
                  (std::sqrt(0.75) * hxx020110 + std::sqrt(0.75) * hxx200110));
        hxx[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(3.0) * hxx002011 -
                  (std::sqrt(0.75) * hxx020011 + std::sqrt(0.75) * hxx200011));
        hxx[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (0.25 * hxx200200 + 0.25 * hxx200020 - 0.5 * hxx200002 +
                  0.25 * hxx020200 + 0.25 * hxx020020 - 0.5 * hxx020002 -
                  0.5 * hxx002200 - 0.5 * hxx002020 + hxx002002);
        hxx[(Ai + 2) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(3.0) * hxx002101 -
                  (std::sqrt(0.75) * hxx020101 + std::sqrt(0.75) * hxx200101));
        hxx[(Ai + 2) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.1875) * hxx200020 - std::sqrt(0.1875) * hxx200200 -
             std::sqrt(0.1875) * hxx020200 + std::sqrt(0.1875) * hxx020020 +
             std::sqrt(0.75) * hxx002200 - std::sqrt(0.75) * hxx002020);
        hxx[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hxx101110;
        hxx[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hxx101011;
        hxx[(Ai + 3) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hxx101002 -
                  (std::sqrt(0.75) * hxx101020 + std::sqrt(0.75) * hxx101200));
        hxx[(Ai + 3) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hxx101101;
        hxx[(Ai + 3) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hxx101200 - std::sqrt(2.25) * hxx101020);
        hxx[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(2.25) * hxx200110 - std::sqrt(2.25) * hxx020110);
        hxx[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(2.25) * hxx200011 - std::sqrt(2.25) * hxx020011);
        hxx[(Ai + 4) * matrix_size + Bi + 2] -=
            cc *
            (std::sqrt(0.75) * hxx200002 -
             (std::sqrt(0.1875) * hxx200020 + std::sqrt(0.1875) * hxx200200) +
             std::sqrt(0.1875) * hxx020200 + std::sqrt(0.1875) * hxx020020 -
             std::sqrt(0.75) * hxx020002);
        hxx[(Ai + 4) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(2.25) * hxx200101 - std::sqrt(2.25) * hxx020101);
        hxx[(Ai + 4) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.5625) * hxx200200 - std::sqrt(0.5625) * hxx200020 -
             std::sqrt(0.5625) * hxx020200 + std::sqrt(0.5625) * hxx020020);
        hxy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hxy110110;
        hxy[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hxy110011;
        hxy[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hxy110002 -
                  (std::sqrt(0.75) * hxy110020 + std::sqrt(0.75) * hxy110200));
        hxy[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hxy110101;
        hxy[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hxy110200 - std::sqrt(2.25) * hxy110020);
        hxy[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hxy011110;
        hxy[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hxy011011;
        hxy[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hxy011002 -
                  (std::sqrt(0.75) * hxy011020 + std::sqrt(0.75) * hxy011200));
        hxy[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hxy011101;
        hxy[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hxy011200 - std::sqrt(2.25) * hxy011020);
        hxy[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(3.0) * hxy002110 -
                  (std::sqrt(0.75) * hxy020110 + std::sqrt(0.75) * hxy200110));
        hxy[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(3.0) * hxy002011 -
                  (std::sqrt(0.75) * hxy020011 + std::sqrt(0.75) * hxy200011));
        hxy[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (0.25 * hxy200200 + 0.25 * hxy200020 - 0.5 * hxy200002 +
                  0.25 * hxy020200 + 0.25 * hxy020020 - 0.5 * hxy020002 -
                  0.5 * hxy002200 - 0.5 * hxy002020 + hxy002002);
        hxy[(Ai + 2) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(3.0) * hxy002101 -
                  (std::sqrt(0.75) * hxy020101 + std::sqrt(0.75) * hxy200101));
        hxy[(Ai + 2) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.1875) * hxy200020 - std::sqrt(0.1875) * hxy200200 -
             std::sqrt(0.1875) * hxy020200 + std::sqrt(0.1875) * hxy020020 +
             std::sqrt(0.75) * hxy002200 - std::sqrt(0.75) * hxy002020);
        hxy[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hxy101110;
        hxy[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hxy101011;
        hxy[(Ai + 3) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hxy101002 -
                  (std::sqrt(0.75) * hxy101020 + std::sqrt(0.75) * hxy101200));
        hxy[(Ai + 3) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hxy101101;
        hxy[(Ai + 3) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hxy101200 - std::sqrt(2.25) * hxy101020);
        hxy[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(2.25) * hxy200110 - std::sqrt(2.25) * hxy020110);
        hxy[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(2.25) * hxy200011 - std::sqrt(2.25) * hxy020011);
        hxy[(Ai + 4) * matrix_size + Bi + 2] -=
            cc *
            (std::sqrt(0.75) * hxy200002 -
             (std::sqrt(0.1875) * hxy200020 + std::sqrt(0.1875) * hxy200200) +
             std::sqrt(0.1875) * hxy020200 + std::sqrt(0.1875) * hxy020020 -
             std::sqrt(0.75) * hxy020002);
        hxy[(Ai + 4) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(2.25) * hxy200101 - std::sqrt(2.25) * hxy020101);
        hxy[(Ai + 4) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.5625) * hxy200200 - std::sqrt(0.5625) * hxy200020 -
             std::sqrt(0.5625) * hxy020200 + std::sqrt(0.5625) * hxy020020);
        hxz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hxz110110;
        hxz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hxz110011;
        hxz[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hxz110002 -
                  (std::sqrt(0.75) * hxz110020 + std::sqrt(0.75) * hxz110200));
        hxz[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hxz110101;
        hxz[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hxz110200 - std::sqrt(2.25) * hxz110020);
        hxz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hxz011110;
        hxz[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hxz011011;
        hxz[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hxz011002 -
                  (std::sqrt(0.75) * hxz011020 + std::sqrt(0.75) * hxz011200));
        hxz[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hxz011101;
        hxz[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hxz011200 - std::sqrt(2.25) * hxz011020);
        hxz[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(3.0) * hxz002110 -
                  (std::sqrt(0.75) * hxz020110 + std::sqrt(0.75) * hxz200110));
        hxz[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(3.0) * hxz002011 -
                  (std::sqrt(0.75) * hxz020011 + std::sqrt(0.75) * hxz200011));
        hxz[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (0.25 * hxz200200 + 0.25 * hxz200020 - 0.5 * hxz200002 +
                  0.25 * hxz020200 + 0.25 * hxz020020 - 0.5 * hxz020002 -
                  0.5 * hxz002200 - 0.5 * hxz002020 + hxz002002);
        hxz[(Ai + 2) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(3.0) * hxz002101 -
                  (std::sqrt(0.75) * hxz020101 + std::sqrt(0.75) * hxz200101));
        hxz[(Ai + 2) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.1875) * hxz200020 - std::sqrt(0.1875) * hxz200200 -
             std::sqrt(0.1875) * hxz020200 + std::sqrt(0.1875) * hxz020020 +
             std::sqrt(0.75) * hxz002200 - std::sqrt(0.75) * hxz002020);
        hxz[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hxz101110;
        hxz[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hxz101011;
        hxz[(Ai + 3) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hxz101002 -
                  (std::sqrt(0.75) * hxz101020 + std::sqrt(0.75) * hxz101200));
        hxz[(Ai + 3) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hxz101101;
        hxz[(Ai + 3) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hxz101200 - std::sqrt(2.25) * hxz101020);
        hxz[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(2.25) * hxz200110 - std::sqrt(2.25) * hxz020110);
        hxz[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(2.25) * hxz200011 - std::sqrt(2.25) * hxz020011);
        hxz[(Ai + 4) * matrix_size + Bi + 2] -=
            cc *
            (std::sqrt(0.75) * hxz200002 -
             (std::sqrt(0.1875) * hxz200020 + std::sqrt(0.1875) * hxz200200) +
             std::sqrt(0.1875) * hxz020200 + std::sqrt(0.1875) * hxz020020 -
             std::sqrt(0.75) * hxz020002);
        hxz[(Ai + 4) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(2.25) * hxz200101 - std::sqrt(2.25) * hxz020101);
        hxz[(Ai + 4) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.5625) * hxz200200 - std::sqrt(0.5625) * hxz200020 -
             std::sqrt(0.5625) * hxz020200 + std::sqrt(0.5625) * hxz020020);
        hyy[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hyy110110;
        hyy[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hyy110011;
        hyy[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hyy110002 -
                  (std::sqrt(0.75) * hyy110020 + std::sqrt(0.75) * hyy110200));
        hyy[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hyy110101;
        hyy[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hyy110200 - std::sqrt(2.25) * hyy110020);
        hyy[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hyy011110;
        hyy[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hyy011011;
        hyy[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hyy011002 -
                  (std::sqrt(0.75) * hyy011020 + std::sqrt(0.75) * hyy011200));
        hyy[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hyy011101;
        hyy[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hyy011200 - std::sqrt(2.25) * hyy011020);
        hyy[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(3.0) * hyy002110 -
                  (std::sqrt(0.75) * hyy020110 + std::sqrt(0.75) * hyy200110));
        hyy[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(3.0) * hyy002011 -
                  (std::sqrt(0.75) * hyy020011 + std::sqrt(0.75) * hyy200011));
        hyy[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (0.25 * hyy200200 + 0.25 * hyy200020 - 0.5 * hyy200002 +
                  0.25 * hyy020200 + 0.25 * hyy020020 - 0.5 * hyy020002 -
                  0.5 * hyy002200 - 0.5 * hyy002020 + hyy002002);
        hyy[(Ai + 2) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(3.0) * hyy002101 -
                  (std::sqrt(0.75) * hyy020101 + std::sqrt(0.75) * hyy200101));
        hyy[(Ai + 2) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.1875) * hyy200020 - std::sqrt(0.1875) * hyy200200 -
             std::sqrt(0.1875) * hyy020200 + std::sqrt(0.1875) * hyy020020 +
             std::sqrt(0.75) * hyy002200 - std::sqrt(0.75) * hyy002020);
        hyy[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hyy101110;
        hyy[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hyy101011;
        hyy[(Ai + 3) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hyy101002 -
                  (std::sqrt(0.75) * hyy101020 + std::sqrt(0.75) * hyy101200));
        hyy[(Ai + 3) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hyy101101;
        hyy[(Ai + 3) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hyy101200 - std::sqrt(2.25) * hyy101020);
        hyy[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(2.25) * hyy200110 - std::sqrt(2.25) * hyy020110);
        hyy[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(2.25) * hyy200011 - std::sqrt(2.25) * hyy020011);
        hyy[(Ai + 4) * matrix_size + Bi + 2] -=
            cc *
            (std::sqrt(0.75) * hyy200002 -
             (std::sqrt(0.1875) * hyy200020 + std::sqrt(0.1875) * hyy200200) +
             std::sqrt(0.1875) * hyy020200 + std::sqrt(0.1875) * hyy020020 -
             std::sqrt(0.75) * hyy020002);
        hyy[(Ai + 4) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(2.25) * hyy200101 - std::sqrt(2.25) * hyy020101);
        hyy[(Ai + 4) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.5625) * hyy200200 - std::sqrt(0.5625) * hyy200020 -
             std::sqrt(0.5625) * hyy020200 + std::sqrt(0.5625) * hyy020020);
        hyz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hyz110110;
        hyz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hyz110011;
        hyz[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hyz110002 -
                  (std::sqrt(0.75) * hyz110020 + std::sqrt(0.75) * hyz110200));
        hyz[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hyz110101;
        hyz[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hyz110200 - std::sqrt(2.25) * hyz110020);
        hyz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hyz011110;
        hyz[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hyz011011;
        hyz[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hyz011002 -
                  (std::sqrt(0.75) * hyz011020 + std::sqrt(0.75) * hyz011200));
        hyz[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hyz011101;
        hyz[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hyz011200 - std::sqrt(2.25) * hyz011020);
        hyz[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(3.0) * hyz002110 -
                  (std::sqrt(0.75) * hyz020110 + std::sqrt(0.75) * hyz200110));
        hyz[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(3.0) * hyz002011 -
                  (std::sqrt(0.75) * hyz020011 + std::sqrt(0.75) * hyz200011));
        hyz[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (0.25 * hyz200200 + 0.25 * hyz200020 - 0.5 * hyz200002 +
                  0.25 * hyz020200 + 0.25 * hyz020020 - 0.5 * hyz020002 -
                  0.5 * hyz002200 - 0.5 * hyz002020 + hyz002002);
        hyz[(Ai + 2) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(3.0) * hyz002101 -
                  (std::sqrt(0.75) * hyz020101 + std::sqrt(0.75) * hyz200101));
        hyz[(Ai + 2) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.1875) * hyz200020 - std::sqrt(0.1875) * hyz200200 -
             std::sqrt(0.1875) * hyz020200 + std::sqrt(0.1875) * hyz020020 +
             std::sqrt(0.75) * hyz002200 - std::sqrt(0.75) * hyz002020);
        hyz[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hyz101110;
        hyz[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hyz101011;
        hyz[(Ai + 3) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hyz101002 -
                  (std::sqrt(0.75) * hyz101020 + std::sqrt(0.75) * hyz101200));
        hyz[(Ai + 3) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hyz101101;
        hyz[(Ai + 3) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hyz101200 - std::sqrt(2.25) * hyz101020);
        hyz[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(2.25) * hyz200110 - std::sqrt(2.25) * hyz020110);
        hyz[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(2.25) * hyz200011 - std::sqrt(2.25) * hyz020011);
        hyz[(Ai + 4) * matrix_size + Bi + 2] -=
            cc *
            (std::sqrt(0.75) * hyz200002 -
             (std::sqrt(0.1875) * hyz200020 + std::sqrt(0.1875) * hyz200200) +
             std::sqrt(0.1875) * hyz020200 + std::sqrt(0.1875) * hyz020020 -
             std::sqrt(0.75) * hyz020002);
        hyz[(Ai + 4) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(2.25) * hyz200101 - std::sqrt(2.25) * hyz020101);
        hyz[(Ai + 4) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.5625) * hyz200200 - std::sqrt(0.5625) * hyz200020 -
             std::sqrt(0.5625) * hyz020200 + std::sqrt(0.5625) * hyz020020);
        hzz[(Ai + 0) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hzz110110;
        hzz[(Ai + 0) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hzz110011;
        hzz[(Ai + 0) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hzz110002 -
                  (std::sqrt(0.75) * hzz110020 + std::sqrt(0.75) * hzz110200));
        hzz[(Ai + 0) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hzz110101;
        hzz[(Ai + 0) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hzz110200 - std::sqrt(2.25) * hzz110020);
        hzz[(Ai + 1) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hzz011110;
        hzz[(Ai + 1) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hzz011011;
        hzz[(Ai + 1) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hzz011002 -
                  (std::sqrt(0.75) * hzz011020 + std::sqrt(0.75) * hzz011200));
        hzz[(Ai + 1) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hzz011101;
        hzz[(Ai + 1) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hzz011200 - std::sqrt(2.25) * hzz011020);
        hzz[(Ai + 2) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(3.0) * hzz002110 -
                  (std::sqrt(0.75) * hzz020110 + std::sqrt(0.75) * hzz200110));
        hzz[(Ai + 2) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(3.0) * hzz002011 -
                  (std::sqrt(0.75) * hzz020011 + std::sqrt(0.75) * hzz200011));
        hzz[(Ai + 2) * matrix_size + Bi + 2] -=
            cc * (0.25 * hzz200200 + 0.25 * hzz200020 - 0.5 * hzz200002 +
                  0.25 * hzz020200 + 0.25 * hzz020020 - 0.5 * hzz020002 -
                  0.5 * hzz002200 - 0.5 * hzz002020 + hzz002002);
        hzz[(Ai + 2) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(3.0) * hzz002101 -
                  (std::sqrt(0.75) * hzz020101 + std::sqrt(0.75) * hzz200101));
        hzz[(Ai + 2) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.1875) * hzz200020 - std::sqrt(0.1875) * hzz200200 -
             std::sqrt(0.1875) * hzz020200 + std::sqrt(0.1875) * hzz020020 +
             std::sqrt(0.75) * hzz002200 - std::sqrt(0.75) * hzz002020);
        hzz[(Ai + 3) * matrix_size + Bi + 0] -= cc * std::sqrt(9.) * hzz101110;
        hzz[(Ai + 3) * matrix_size + Bi + 1] -= cc * std::sqrt(9.) * hzz101011;
        hzz[(Ai + 3) * matrix_size + Bi + 2] -=
            cc * (std::sqrt(3.0) * hzz101002 -
                  (std::sqrt(0.75) * hzz101020 + std::sqrt(0.75) * hzz101200));
        hzz[(Ai + 3) * matrix_size + Bi + 3] -= cc * std::sqrt(9.) * hzz101101;
        hzz[(Ai + 3) * matrix_size + Bi + 4] -=
            cc * (std::sqrt(2.25) * hzz101200 - std::sqrt(2.25) * hzz101020);
        hzz[(Ai + 4) * matrix_size + Bi + 0] -=
            cc * (std::sqrt(2.25) * hzz200110 - std::sqrt(2.25) * hzz020110);
        hzz[(Ai + 4) * matrix_size + Bi + 1] -=
            cc * (std::sqrt(2.25) * hzz200011 - std::sqrt(2.25) * hzz020011);
        hzz[(Ai + 4) * matrix_size + Bi + 2] -=
            cc *
            (std::sqrt(0.75) * hzz200002 -
             (std::sqrt(0.1875) * hzz200020 + std::sqrt(0.1875) * hzz200200) +
             std::sqrt(0.1875) * hzz020200 + std::sqrt(0.1875) * hzz020020 -
             std::sqrt(0.75) * hzz020002);
        hzz[(Ai + 4) * matrix_size + Bi + 3] -=
            cc * (std::sqrt(2.25) * hzz200101 - std::sqrt(2.25) * hzz020101);
        hzz[(Ai + 4) * matrix_size + Bi + 4] -=
            cc *
            (std::sqrt(0.5625) * hzz200200 - std::sqrt(0.5625) * hzz200020 -
             std::sqrt(0.5625) * hzz020200 + std::sqrt(0.5625) * hzz020020);
    }
}
