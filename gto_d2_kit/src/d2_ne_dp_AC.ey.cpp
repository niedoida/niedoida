/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_dp_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_21_13(double ae,
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
    const double C1310 = ae + be;
    const double C1309 = xA - xB;
    const double C1314 = ae * be;
    const double C1313 = std::pow(C1309, 2);
    const double C1315 = C1313 * C1314;
    const double C1316 = C1315 / C1310;
    const double C1317 = -C1316;
    const double C1318 = std::exp(C1317);
    const double C1323 = 2 * C1310;
    const double C1322 = C1309 * be;
    const double C1321 = C1309 * ae;
    const double C1324 = C1318 * C1321;
    const double C1329 = std::pow(C1310, 2);
    const double C1328 = std::pow(C1323, -1);
    const double C1330 = C1328 * C1318;
    const double C1334 = C1330 * C1322;
    const double C1333 = 2 * C1329;
    const double C1346 = yA - yB;
    const double C1351 = zA - zB;
    const double C1356 = std::pow(C1346, 2);
    const double C1357 = C1356 * C1314;
    const double C1358 = C1357 / C1310;
    const double C1359 = -C1358;
    const double C1360 = std::exp(C1359);
    const double C1370 = C1346 * be;
    const double C1369 = C1346 * ae;
    const double C1371 = C1360 * C1369;
    const double C1373 = C1328 * C1360;
    const double C1375 = C1373 * C1370;
    const double C1386 = std::pow(C1351, 2);
    const double C1387 = C1386 * C1314;
    const double C1388 = C1387 / C1310;
    const double C1389 = -C1388;
    const double C1390 = std::exp(C1389);
    const double C1400 = C1351 * be;
    const double C1399 = C1351 * ae;
    const double C1401 = C1390 * C1399;
    const double C1403 = C1328 * C1390;
    const double C1405 = C1403 * C1400;
    const double C1436 = C1405 / C1310;
    const double C1435 = C1401 / C1333;
    const double C1434 = C1401 * C1400;
    const double C1433 = C1390 / C1323;
    const double C1432 = C1351 * be;
    const double C1431 = C1375 / C1310;
    const double C1430 = C1371 / C1333;
    const double C1429 = C1371 * C1370;
    const double C1428 = C1360 / C1323;
    const double C1427 = C1346 * be;
    const double C1426 = std::pow(C1351, 2);
    const double C1425 = std::pow(C1346, 2);
    const double C1424 = std::pow(C1323, -2);
    const double C1423 = 4 * C1329;
    const double C1422 = C1324 * C1322;
    const double C1421 = C1318 / C1323;
    const double C1420 = C1318 * C1322;
    const double C1419 = std::pow(C1310, 2);
    const double C1418 = 2 * C1310;
    const double C1417 = C1309 * ae;
    const double C1416 = ae * be;
    const double C1445 = C1435 - C1436;
    const double C1444 = C1434 / C1329;
    const double C1443 = C1390 * C1432;
    const double C1442 = C1430 - C1431;
    const double C1441 = C1429 / C1329;
    const double C1440 = C1360 * C1427;
    const double C1439 = C1426 * C1314;
    const double C1438 = C1425 * C1314;
    const double C1437 = C1420 / C1310;
    const double C1449 = C1433 - C1444;
    const double C1448 = C1428 - C1441;
    const double C1447 = C1439 / C1310;
    const double C1446 = C1438 / C1310;
    const double C1451 = -C1447;
    const double C1450 = -C1446;
    const double C1453 = std::exp(C1451);
    const double C1452 = std::exp(C1450);
    const double C65 = std::exp(-(std::pow(xA - xB, 2) * C1416) / (ae + be));
    const double C66 =
        (std::exp(-(std::pow(C1309, 2) * C1416) / C1310) * C1417) / C1310;
    const double C68 = C1318 / C1418 - (C1318 * C1417 * C1309 * be) / C1419;
    const double C69 = std::pow(C1418, -1) * C1318;
    const double C70 = (C1324 / C1310 - C1437) / C1323 -
                       ((C1421 - C1422 / C1419) * C1322) / C1310;
    const double C71 =
        C1324 / (2 * C1419) - (std::pow(C1323, -1) * C1318 * C1322) / C1310;
    const double C73 =
        (2 * C1330 + C1421 - C1422 / C1329) / C1323 -
        ((C1324 / (2 * C1329) - (C1330 * C1322) / C1310) * C1322) / C1310;
    const double C74 = C1330 / C1323;
    const double C75 = (C1324 / C1333 - C1334 / C1310) / C1323 - C1334 / C1333;
    const double C77 = C1330 / C1423;
    const double C78 = std::exp(-(std::pow(zA - zB, 2) * C1314) / C1310);
    const double C79 = std::exp(-(std::pow(yA - yB, 2) * C1314) / C1310);
    const double C410 = -C1437;
    const double C411 = (C1318 * std::pow(C1322, 2)) / C1329 + C1421;
    const double C413 = (-2 * C1328 * C1420) / C1310;
    const double C415 = C1424 * C1318;
    const double C416 = (C1452 * C1346 * ae) / C1310;
    const double C417 = C1328 * C1452;
    const double C532 = (C1453 * C1351 * ae) / C1310;
    const double C533 = C1328 * C1453;
    const double C583 = (C1360 * std::pow(C1427, 2)) / C1329 + C1428;
    const double C584 = (-2 * C1328 * C1440) / C1310;
    const double C585 = C1424 * C1360;
    const double C588 = -C1440 / C1310;
    const double C589 = C1328 * C1360;
    const double C687 = (C1371 / C1310 - (C1360 * C1370) / C1310) / C1323 -
                        (C1448 * C1370) / C1310;
    const double C688 = (2 * C1373 + C1448) / C1323 -
                        ((C1430 - (C1373 * C1370) / C1310) * C1370) / C1310;
    const double C689 = C1442 / C1323 - C1375 / C1333;
    const double C690 = C1373 / C1423;
    const double C697 = C1373 / C1323;
    const double C863 = (C1390 * std::pow(C1432, 2)) / C1329 + C1433;
    const double C864 = (-2 * C1328 * C1443) / C1310;
    const double C865 = C1424 * C1390;
    const double C868 = -C1443 / C1310;
    const double C869 = C1328 * C1390;
    const double C1001 = (C1401 / C1310 - (C1390 * C1400) / C1310) / C1323 -
                         (C1449 * C1400) / C1310;
    const double C1002 = (2 * C1403 + C1449) / C1323 -
                         ((C1435 - (C1403 * C1400) / C1310) * C1400) / C1310;
    const double C1003 = C1445 / C1323 - C1405 / C1333;
    const double C1004 = C1403 / C1423;
    const double C1011 = C1403 / C1323;
    const double C101 = zA - zB;
    const double C100 = yA - yB;
    const double C99 = be * zB;
    const double C98 = ae * zA;
    const double C97 = be * yB;
    const double C96 = ae * yA;
    const double C95 = bs[5];
    const double C94 = 0 * be;
    const double C93 = bs[4];
    const double C92 = bs[3];
    const double C91 = 0 * be;
    const double C90 = bs[2];
    const double C89 = bs[1];
    const double C88 = be * xB;
    const double C87 = ae * xA;
    const double C86 = 0 * ae;
    const double C85 = ae * be;
    const double C84 = 0 * be;
    const double C83 = 0 * be;
    const double C82 = ae + be;
    const double C81 = 0 * be;
    const double C80 = xA - xB;
    const double C115 = C85 * C101;
    const double C114 = C85 * C100;
    const double C113 = C98 + C99;
    const double C112 = C96 + C97;
    const double C111 = C94 / C82;
    const double C110 = C91 / C82;
    const double C109 = C87 + C88;
    const double C108 = C86 / C82;
    const double C107 = C85 * C80;
    const double C106 = C80 * C84;
    const double C105 = 2 * C82;
    const double C104 = C84 / C82;
    const double C103 = std::pow(C82, 2);
    const double C102 = C80 * C81;
    const double C128 = C115 * C78;
    const double C127 = C114 * C79;
    const double C126 = C113 / C82;
    const double C125 = C112 / C82;
    const double C124 = std::pow(C105, 4);
    const double C123 = -C105;
    const double C122 = C89 * C105;
    const double C121 = std::pow(C105, 2);
    const double C120 = C109 / C82;
    const double C119 = C107 * C65;
    const double C118 = C106 / C82;
    const double C117 = 2 * C103;
    const double C116 = C102 / C82;
    const double C144 = 2 * C128;
    const double C143 = 2 * C127;
    const double C142 = C126 - zC;
    const double C141 = C125 - yC;
    const double C140 = std::pow(C123, 5);
    const double C139 = C93 * C124;
    const double C138 = std::pow(C123, 3);
    const double C137 = C90 * C121;
    const double C136 = C120 - xC;
    const double C135 = C119 / C103;
    const double C134 = C84 / C117;
    const double C133 = 2 * C119;
    const double C132 = C81 / C117;
    const double C131 = 0 - C118;
    const double C130 = C83 / C117;
    const double C129 = 0 - C116;
    const double C165 = std::pow(C142, 2);
    const double C164 = C142 * C141;
    const double C163 = ae * C142;
    const double C162 = C142 * C136;
    const double C161 = C141 * C142;
    const double C160 = std::pow(C141, 2);
    const double C159 = ae * C141;
    const double C158 = C141 * C136;
    const double C157 = C136 * C142;
    const double C156 = C82 * C142;
    const double C155 = C136 * C141;
    const double C154 = C82 * C141;
    const double C153 = C92 * C138;
    const double C152 = C136 * C137;
    const double C151 = ae * C136;
    const double C150 = std::pow(C136, 2);
    const double C149 = C82 * C136;
    const double C148 = C108 - C135;
    const double C147 = C80 * C133;
    const double C146 = C131 * ae;
    const double C145 = C129 * ae;
    const double C203 = C165 * C93;
    const double C202 = C165 * C92;
    const double C201 = C164 * ae;
    const double C200 = C163 * C93;
    const double C199 = C163 * C92;
    const double C198 = C162 * ae;
    const double C197 = C161 * ae;
    const double C196 = C160 * C93;
    const double C195 = C160 * C92;
    const double C194 = C159 * C93;
    const double C193 = C159 * C92;
    const double C192 = C158 * ae;
    const double C191 = C156 * C93;
    const double C190 = C156 * C92;
    const double C189 = C156 * C90;
    const double C188 = C157 * ae;
    const double C187 = C156 * C89;
    const double C186 = C154 * C93;
    const double C185 = C154 * C92;
    const double C184 = C154 * C90;
    const double C183 = C155 * ae;
    const double C182 = C154 * C89;
    const double C181 = C151 * C93;
    const double C180 = C153 * ae;
    const double C179 = C153 * C150;
    const double C178 = C136 * C153;
    const double C177 = C149 * C93;
    const double C176 = C150 * C93;
    const double C175 = C151 * C92;
    const double C174 = C149 * C92;
    const double C173 = C150 * C92;
    const double C172 = C149 * C90;
    const double C171 = C148 / C105;
    const double C170 = C149 * C89;
    const double C169 = C80 * C148;
    const double C168 = C147 / C82;
    const double C167 = C146 / C82;
    const double C166 = C145 / C82;
    const double C243 = C203 * C124;
    const double C242 = C202 * C138;
    const double C241 = C93 * C201;
    const double C240 = C92 * C201;
    const double C239 = C200 * C138;
    const double C238 = C93 * C198;
    const double C237 = C199 * C121;
    const double C236 = C92 * C198;
    const double C235 = C93 * C197;
    const double C234 = C92 * C197;
    const double C233 = C196 * C124;
    const double C232 = C195 * C138;
    const double C231 = C194 * C138;
    const double C230 = C93 * C192;
    const double C229 = C193 * C121;
    const double C228 = C92 * C192;
    const double C227 = C191 * C138;
    const double C226 = C93 * C188;
    const double C225 = C190 * C121;
    const double C224 = C92 * C188;
    const double C223 = C189 * C105;
    const double C222 = C186 * C138;
    const double C221 = C93 * C183;
    const double C220 = C185 * C121;
    const double C219 = C92 * C183;
    const double C218 = C184 * C105;
    const double C217 = C181 * C138;
    const double C216 = C180 / C82;
    const double C215 = C137 + C179;
    const double C214 = C177 * C138;
    const double C213 = C176 * C124;
    const double C212 = C175 * C121;
    const double C211 = C174 * C121;
    const double C210 = C173 * C138;
    const double C209 = C172 * C105;
    const double C208 = C171 - C110;
    const double C207 = C169 + C69;
    const double C206 = C65 - C168;
    const double C205 = C167 - C132;
    const double C204 = C166 - C130;
    const double C289 = C153 + C243;
    const double C288 = C137 + C242;
    const double C287 = C124 * C241;
    const double C286 = C138 * C240;
    const double C285 = 2 * C239;
    const double C284 = C124 * C238;
    const double C283 = 2 * C237;
    const double C282 = C138 * C236;
    const double C281 = C124 * C235;
    const double C280 = C138 * C234;
    const double C279 = C153 + C233;
    const double C278 = C137 + C232;
    const double C277 = 2 * C231;
    const double C276 = C124 * C230;
    const double C275 = 2 * C229;
    const double C274 = C138 * C228;
    const double C273 = C227 * C150;
    const double C272 = C124 * C226;
    const double C271 = C225 * ae;
    const double C270 = 2 * C225;
    const double C269 = C225 * C150;
    const double C268 = C138 * C224;
    const double C267 = -2 * C223;
    const double C266 = C222 * C150;
    const double C265 = C124 * C221;
    const double C264 = C220 * ae;
    const double C263 = 2 * C220;
    const double C262 = C220 * C150;
    const double C261 = C138 * C219;
    const double C260 = -2 * C218;
    const double C259 = 2 * C217;
    const double C258 = 2 * C214;
    const double C257 = C208 / C105;
    const double C256 = C153 + C213;
    const double C255 = C211 * ae;
    const double C254 = 2 * C212;
    const double C253 = 2 * C211;
    const double C252 = C80 * C208;
    const double C251 = C137 + C210;
    const double C250 = -2 * C209;
    const double C249 = 2 * C208;
    const double C248 = C207 * be;
    const double C247 = C206 * ae;
    const double C246 = C205 / C105;
    const double C245 = C80 * C205;
    const double C244 = C204 + C104;
    const double C320 = C289 * ae;
    const double C319 = C288 * ae;
    const double C318 = C136 * C284;
    const double C317 = C279 * ae;
    const double C316 = C278 * ae;
    const double C315 = C136 * C276;
    const double C314 = 2 * C273;
    const double C313 = C136 * C272;
    const double C312 = 2 * C271;
    const double C311 = C136 * C270;
    const double C310 = 2 * C269;
    const double C309 = C136 * C267;
    const double C308 = 2 * C266;
    const double C307 = C136 * C265;
    const double C306 = 2 * C264;
    const double C305 = C136 * C263;
    const double C304 = 2 * C262;
    const double C303 = C136 * C260;
    const double C302 = C136 * C259;
    const double C301 = C136 * C258;
    const double C300 = C257 - C111;
    const double C299 = C256 * ae;
    const double C298 = 2 * C255;
    const double C297 = C136 * C253;
    const double C296 = C252 + C74;
    const double C295 = C251 * ae;
    const double C294 = C136 * C250;
    const double C293 = C248 / C82;
    const double C292 = C247 / C82;
    const double C291 = C245 + 0;
    const double C290 = C244 / C105;
    const double C340 = C318 / C82;
    const double C339 = C315 / C82;
    const double C338 = C270 + C314;
    const double C337 = 2 * C311;
    const double C336 = C313 / C82;
    const double C335 = C312 / C82;
    const double C334 = C267 + C310;
    const double C333 = C263 + C308;
    const double C332 = 2 * C305;
    const double C331 = C307 / C82;
    const double C330 = C306 / C82;
    const double C329 = C260 + C304;
    const double C328 = C301 - C153;
    const double C327 = C136 * C299;
    const double C326 = C298 / C82;
    const double C325 = C297 - C137;
    const double C324 = C296 * be;
    const double C323 = C294 + C122;
    const double C322 = C292 - C134;
    const double C321 = C291 * be;
    const double C355 = C283 - C340;
    const double C354 = C275 - C339;
    const double C353 = C136 * C338;
    const double C352 = C335 - C336;
    const double C351 = C136 * C333;
    const double C350 = C330 - C331;
    const double C349 = C136 * C328;
    const double C348 = 2 * C325;
    const double C347 = C327 / C82;
    const double C346 = C326 + C254;
    const double C345 = C136 * C325;
    const double C344 = C324 / C82;
    const double C343 = C322 / C105;
    const double C342 = C80 * C322;
    const double C341 = C321 / C82;
    const double C363 = C337 + C353;
    const double C362 = C332 + C351;
    const double C361 = C253 + C349;
    const double C360 = C346 - C347;
    const double C359 = C250 + C345;
    const double C358 = C343 - C293;
    const double C357 = C342 + C66;
    const double C356 = C290 - C341;
    const double C369 = C361 - C178;
    const double C368 = C359 - C152;
    const double C367 = C358 / C105;
    const double C366 = C80 * C358;
    const double C365 = C357 * be;
    const double C364 = C356 / C105;
    const double C373 = C136 * C369;
    const double C372 = C367 - C344;
    const double C371 = C366 + C71;
    const double C370 = C365 / C82;
    const double C376 = C348 + C373;
    const double C375 = C371 * be;
    const double C374 = C246 - C370;
    const double C379 = C376 - C215;
    const double C378 = C375 / C82;
    const double C377 = C374 + C148;
    const double C381 = C377 / C105;
    const double C380 = C80 * C377;
    const double C383 = C381 - C378;
    const double C382 = C380 + C68;
    const double C385 = C383 + C249;
    const double C384 = C382 * be;
    const double C386 = C384 / C82;
    const double C387 = C364 - C386;
    const double C388 = C387 + C358;
    const double C457 = C136 * C283;
    const double C456 = C163 * C90;
    const double C455 = C136 * C275;
    const double C454 = C159 * C90;
    const double C453 = C127 / C103;
    const double C452 = 0 * ae;
    const double C451 = 0 * be;
    const double C450 = C100 * C143;
    const double C449 = C141 * C338;
    const double C448 = C141 * C311;
    const double C447 = C141 * C267;
    const double C446 = C311 * ae;
    const double C445 = C223 * ae;
    const double C444 = 2 * C187;
    const double C443 = C141 * C333;
    const double C442 = C141 * C305;
    const double C441 = C141 * C260;
    const double C440 = C305 * ae;
    const double C439 = C218 * ae;
    const double C438 = 2 * C182;
    const double C437 = C216 - C302;
    const double C436 = C141 * C369;
    const double C435 = C141 * C299;
    const double C434 = C141 * C325;
    const double C433 = C141 * C250;
    const double C432 = C137 * ae;
    const double C431 = C136 * C254;
    const double C430 = C325 * ae;
    const double C429 = 0 * be;
    const double C428 = C151 * C90;
    const double C427 = C209 * ae;
    const double C426 = 2 * C170;
    const double C425 = 0 * be;
    const double C424 = C133 / C82;
    const double C423 = C206 * be;
    const double C422 = -C104;
    const double C421 = C131 * be;
    const double C420 = C81 / C82;
    const double C480 = C456 * C105;
    const double C479 = C454 * C105;
    const double C478 = C452 / C82;
    const double C477 = C451 / C117;
    const double C476 = C450 / C82;
    const double C475 = C446 / C82;
    const double C474 = -2 * C445;
    const double C473 = C443 - C215;
    const double C472 = C442 - C152;
    const double C471 = C441 + C122;
    const double C470 = C440 / C82;
    const double C469 = -2 * C439;
    const double C468 = C432 / C82;
    const double C467 = C430 / C82;
    const double C466 = C429 / C82;
    const double C465 = C428 * C105;
    const double C464 = -2 * C427;
    const double C463 = C425 / C82;
    const double C462 = -C424;
    const double C461 = C423 / C82;
    const double C460 = C422 / C105;
    const double C459 = C421 / C82;
    const double C458 = -C420;
    const double C490 = -2 * C480;
    const double C489 = C478 - C453;
    const double C488 = C79 - C476;
    const double C487 = C474 / C82;
    const double C486 = C469 / C82;
    const double C485 = C431 - C468;
    const double C484 = C464 / C82;
    const double C483 = C462 / C105;
    const double C482 = C460 - C461;
    const double C481 = C458 / C105;
    const double C495 = C488 * ae;
    const double C494 = C482 / C105;
    const double C493 = C483 - C463;
    const double C492 = C80 * C482;
    const double C491 = C481 - C459;
    const double C500 = C495 / C82;
    const double C499 = C493 / C105;
    const double C498 = C80 * C493;
    const double C497 = C492 + C410;
    const double C496 = C491 / C105;
    const double C504 = C500 - C477;
    const double C503 = C499 - C466;
    const double C502 = C498 + C1330;
    const double C501 = C497 * be;
    const double C506 = C502 * be;
    const double C505 = C501 / C82;
    const double C508 = C506 / C82;
    const double C507 = C496 - C505;
    const double C510 = C494 - C508;
    const double C509 = C507 + C493;
    const double C550 = C128 / C103;
    const double C549 = 0 * ae;
    const double C548 = 0 * be;
    const double C547 = C101 * C144;
    const double C546 = -2 * C479;
    const double C545 = C142 * C338;
    const double C544 = C142 * C311;
    const double C543 = C142 * C267;
    const double C542 = C142 * C333;
    const double C541 = C142 * C305;
    const double C540 = C142 * C260;
    const double C539 = C142 * C369;
    const double C538 = C142 * C299;
    const double C537 = C142 * C325;
    const double C536 = C142 * C250;
    const double C556 = C549 / C82;
    const double C555 = C548 / C117;
    const double C554 = C547 / C82;
    const double C553 = C545 - C215;
    const double C552 = C544 - C152;
    const double C551 = C543 + C122;
    const double C558 = C556 - C550;
    const double C557 = C78 - C554;
    const double C559 = C557 * ae;
    const double C560 = C559 / C82;
    const double C561 = C560 - C555;
    const double C613 = C136 * C320;
    const double C612 = C136 * C285;
    const double C611 = C136 * C287;
    const double C610 = C136 * C281;
    const double C609 = C136 * C277;
    const double C608 = C136 * C317;
    const double C607 = 0 * be;
    const double C606 = 0 * be;
    const double C605 = C143 / C82;
    const double C604 = C488 * be;
    const double C603 = C451 / C82;
    const double C602 = C100 * C451;
    const double C601 = 0 * be;
    const double C600 = 2 * C227;
    const double C599 = C225 * C160;
    const double C598 = C141 * C178;
    const double C597 = 2 * C222;
    const double C596 = C141 * C137;
    const double C595 = C141 * C263;
    const double C594 = C328 * C160;
    const double C593 = C211 * C160;
    const double C592 = C141 * C254;
    const double C591 = C141 * C253;
    const double C627 = C607 / C82;
    const double C626 = C606 / C82;
    const double C625 = -C605;
    const double C624 = C604 / C82;
    const double C623 = -C603;
    const double C622 = C602 / C82;
    const double C621 = C601 / C82;
    const double C620 = C136 * C600;
    const double C619 = 2 * C599;
    const double C618 = C136 * C597;
    const double C617 = C595 - C137;
    const double C616 = C325 + C594;
    const double C615 = 2 * C593;
    const double C614 = C591 * ae;
    const double C637 = C625 / C105;
    const double C636 = C623 / C105;
    const double C635 = 0 - C622;
    const double C634 = -C621;
    const double C633 = C620 * C160;
    const double C632 = C267 + C619;
    const double C631 = C141 * C618;
    const double C630 = C141 * C617;
    const double C629 = C250 + C615;
    const double C628 = C614 / C82;
    const double C644 = C637 - C626;
    const double C643 = C636 - C624;
    const double C642 = C635 * be;
    const double C641 = C634 / C105;
    const double C640 = C311 + C633;
    const double C639 = C631 - C178;
    const double C638 = C260 + C630;
    const double C651 = C644 / C105;
    const double C650 = C100 * C644;
    const double C649 = C643 / C105;
    const double C648 = C100 * C643;
    const double C647 = C642 / C82;
    const double C646 = C141 * C639;
    const double C645 = C638 - C596;
    const double C656 = C651 - C627;
    const double C655 = C650 + C589;
    const double C654 = C648 + C588;
    const double C653 = C641 - C647;
    const double C652 = C305 + C646;
    const double C660 = C655 * be;
    const double C659 = C654 * be;
    const double C658 = C653 / C105;
    const double C657 = C652 - C598;
    const double C662 = C660 / C82;
    const double C661 = C659 / C82;
    const double C664 = C649 - C662;
    const double C663 = C658 - C661;
    const double C665 = C663 + C644;
    const double C723 = C141 * C287;
    const double C722 = C141 * C281;
    const double C721 = C141 * C277;
    const double C720 = C141 * C317;
    const double C719 = C330 + C275;
    const double C718 = 0 * be;
    const double C717 = C141 * C276;
    const double C716 = 0 * be;
    const double C715 = C489 / C105;
    const double C714 = C100 * C489;
    const double C713 = C504 / C105;
    const double C712 = C100 * C504;
    const double C711 = C601 / C117;
    const double C710 = C635 * ae;
    const double C709 = 0 * be;
    const double C708 = C100 * C601;
    const double C707 = C227 * C160;
    const double C706 = C141 * C270;
    const double C705 = C153 * C160;
    const double C704 = C141 * C153;
    const double C703 = C141 * C597;
    const double C702 = 2 * C617;
    const double C701 = C141 * C265;
    const double C700 = C214 * C160;
    const double C699 = 2 * C591;
    const double C740 = C723 / C82;
    const double C739 = C722 / C82;
    const double C738 = C720 / C82;
    const double C737 = C718 / C82;
    const double C736 = C717 / C82;
    const double C735 = C716 / C82;
    const double C734 = C714 + C417;
    const double C733 = C712 + C416;
    const double C732 = C710 / C82;
    const double C731 = C709 / C117;
    const double C730 = C708 / C82;
    const double C729 = 2 * C707;
    const double C728 = 2 * C706;
    const double C727 = C137 + C705;
    const double C726 = C703 - C153;
    const double C725 = C701 / C82;
    const double C724 = 2 * C700;
    const double C753 = C283 - C740;
    const double C752 = C335 - C739;
    const double C751 = C719 - C738;
    const double C750 = C326 - C736;
    const double C749 = C715 - C735;
    const double C748 = C734 * be;
    const double C747 = C733 * be;
    const double C746 = C732 - C711;
    const double C745 = 0 - C730;
    const double C744 = C270 + C729;
    const double C743 = C141 * C726;
    const double C742 = C254 - C725;
    const double C741 = C253 + C724;
    const double C764 = C749 / C105;
    const double C763 = C100 * C749;
    const double C762 = 2 * C749;
    const double C761 = C748 / C82;
    const double C760 = C747 / C82;
    const double C759 = C746 / C105;
    const double C758 = C100 * C746;
    const double C757 = C745 * ae;
    const double C756 = C141 * C744;
    const double C755 = C263 + C743;
    const double C754 = C141 * C741;
    const double C773 = C764 - C737;
    const double C772 = C763 + C697;
    const double C771 = C713 - C761;
    const double C770 = C759 - C760;
    const double C769 = C758 + 0;
    const double C768 = C757 / C82;
    const double C767 = C728 + C756;
    const double C766 = C755 - C704;
    const double C765 = C699 + C754;
    const double C780 = C772 * be;
    const double C779 = C771 / C105;
    const double C778 = C100 * C771;
    const double C777 = C770 + C489;
    const double C776 = C769 * be;
    const double C775 = C768 - C731;
    const double C774 = C141 * C766;
    const double C787 = C780 / C82;
    const double C786 = C778 + C1442;
    const double C785 = C777 / C105;
    const double C784 = C100 * C777;
    const double C783 = C776 / C82;
    const double C782 = C775 + C603;
    const double C781 = C702 + C774;
    const double C792 = C779 - C787;
    const double C791 = C786 * be;
    const double C790 = C784 + C1448;
    const double C789 = C782 / C105;
    const double C788 = C781 - C727;
    const double C795 = C791 / C82;
    const double C794 = C790 * be;
    const double C793 = C789 - C783;
    const double C798 = C785 - C795;
    const double C797 = C794 / C82;
    const double C796 = C793 / C105;
    const double C800 = C798 + C762;
    const double C799 = C796 - C797;
    const double C801 = C799 + C771;
    const double C835 = C141 * C283;
    const double C834 = C142 * C281;
    const double C833 = C706 * ae;
    const double C832 = C142 * C317;
    const double C831 = C617 * ae;
    const double C830 = C142 * C276;
    const double C829 = C142 * C744;
    const double C828 = C142 * C706;
    const double C827 = C142 * C766;
    const double C826 = C142 * C617;
    const double C825 = -2 * C465;
    const double C824 = C142 * C741;
    const double C823 = C142 * C591;
    const double C840 = C834 / C82;
    const double C839 = C833 / C82;
    const double C838 = C831 / C82;
    const double C837 = C829 - C727;
    const double C836 = C828 - C596;
    const double C841 = C275 - C840;
    const double C887 = 0 * be;
    const double C886 = 0 * be;
    const double C885 = C144 / C82;
    const double C884 = C557 * be;
    const double C883 = C548 / C82;
    const double C882 = C101 * C548;
    const double C881 = 0 * be;
    const double C880 = C142 * C178;
    const double C879 = C142 * C620;
    const double C878 = C142 * C137;
    const double C877 = C142 * C270;
    const double C876 = C618 * C165;
    const double C875 = C220 * C165;
    const double C874 = C328 * C165;
    const double C873 = C211 * C165;
    const double C872 = C142 * C254;
    const double C871 = C142 * C253;
    const double C901 = C887 / C82;
    const double C900 = C886 / C82;
    const double C899 = -C885;
    const double C898 = C884 / C82;
    const double C897 = -C883;
    const double C896 = C882 / C82;
    const double C895 = C881 / C82;
    const double C894 = C879 - C178;
    const double C893 = C877 - C137;
    const double C892 = C305 + C876;
    const double C891 = 2 * C875;
    const double C890 = C325 + C874;
    const double C889 = 2 * C873;
    const double C888 = C871 * ae;
    const double C910 = C899 / C105;
    const double C909 = C897 / C105;
    const double C908 = 0 - C896;
    const double C907 = -C895;
    const double C906 = C142 * C894;
    const double C905 = C142 * C893;
    const double C904 = C260 + C891;
    const double C903 = C250 + C889;
    const double C902 = C888 / C82;
    const double C916 = C910 - C900;
    const double C915 = C909 - C898;
    const double C914 = C908 * be;
    const double C913 = C907 / C105;
    const double C912 = C311 + C906;
    const double C911 = C267 + C905;
    const double C923 = C916 / C105;
    const double C922 = C101 * C916;
    const double C921 = C915 / C105;
    const double C920 = C101 * C915;
    const double C919 = C914 / C82;
    const double C918 = C912 - C880;
    const double C917 = C911 - C878;
    const double C927 = C923 - C901;
    const double C926 = C922 + C869;
    const double C925 = C920 + C868;
    const double C924 = C913 - C919;
    const double C930 = C926 * be;
    const double C929 = C925 * be;
    const double C928 = C924 / C105;
    const double C932 = C930 / C82;
    const double C931 = C929 / C82;
    const double C934 = C921 - C932;
    const double C933 = C928 - C931;
    const double C935 = C933 + C916;
    const double C968 = C141 * C285;
    const double C967 = C141 * C320;
    const double C966 = C141 * C284;
    const double C965 = C893 * ae;
    const double C964 = C142 * C275;
    const double C963 = C142 * C263;
    const double C962 = C142 * C704;
    const double C961 = C141 * C600;
    const double C960 = C141 * C259;
    const double C959 = C141 * C272;
    const double C958 = C726 * C165;
    const double C957 = C141 * C258;
    const double C973 = C965 / C82;
    const double C972 = C963 * ae;
    const double C971 = C142 * C961;
    const double C970 = C617 + C958;
    const double C969 = C957 * C165;
    const double C976 = C972 / C82;
    const double C975 = C971 - C704;
    const double C974 = C591 + C969;
    const double C977 = C142 * C975;
    const double C978 = C706 + C977;
    const double C979 = C978 - C962;
    const double C1036 = C142 * C285;
    const double C1035 = C142 * C320;
    const double C1034 = C335 + C283;
    const double C1033 = C142 * C287;
    const double C1032 = 0 * be;
    const double C1031 = C142 * C284;
    const double C1030 = 0 * be;
    const double C1029 = C558 / C105;
    const double C1028 = C101 * C558;
    const double C1027 = C561 / C105;
    const double C1026 = C101 * C561;
    const double C1025 = C881 / C117;
    const double C1024 = C908 * ae;
    const double C1023 = 0 * be;
    const double C1022 = C101 * C881;
    const double C1021 = C153 * C165;
    const double C1020 = C142 * C153;
    const double C1019 = C142 * C600;
    const double C1018 = 2 * C893;
    const double C1017 = C142 * C272;
    const double C1016 = C222 * C165;
    const double C1015 = 2 * C963;
    const double C1014 = C214 * C165;
    const double C1013 = 2 * C871;
    const double C1051 = C1035 / C82;
    const double C1050 = C1033 / C82;
    const double C1049 = C1032 / C82;
    const double C1048 = C1031 / C82;
    const double C1047 = C1030 / C82;
    const double C1046 = C1028 + C533;
    const double C1045 = C1026 + C532;
    const double C1044 = C1024 / C82;
    const double C1043 = C1023 / C117;
    const double C1042 = C1022 / C82;
    const double C1041 = C137 + C1021;
    const double C1040 = C1019 - C153;
    const double C1039 = C1017 / C82;
    const double C1038 = 2 * C1016;
    const double C1037 = 2 * C1014;
    const double C1063 = C1034 - C1051;
    const double C1062 = C330 - C1050;
    const double C1061 = C326 - C1048;
    const double C1060 = C1029 - C1047;
    const double C1059 = C1046 * be;
    const double C1058 = C1045 * be;
    const double C1057 = C1044 - C1025;
    const double C1056 = 0 - C1042;
    const double C1055 = C142 * C1040;
    const double C1054 = C254 - C1039;
    const double C1053 = C263 + C1038;
    const double C1052 = C253 + C1037;
    const double C1074 = C1060 / C105;
    const double C1073 = C101 * C1060;
    const double C1072 = 2 * C1060;
    const double C1071 = C1059 / C82;
    const double C1070 = C1058 / C82;
    const double C1069 = C1057 / C105;
    const double C1068 = C101 * C1057;
    const double C1067 = C1056 * ae;
    const double C1066 = C270 + C1055;
    const double C1065 = C142 * C1053;
    const double C1064 = C142 * C1052;
    const double C1083 = C1074 - C1049;
    const double C1082 = C1073 + C1011;
    const double C1081 = C1027 - C1071;
    const double C1080 = C1069 - C1070;
    const double C1079 = C1068 + 0;
    const double C1078 = C1067 / C82;
    const double C1077 = C1066 - C1020;
    const double C1076 = C1015 + C1065;
    const double C1075 = C1013 + C1064;
    const double C1090 = C1082 * be;
    const double C1089 = C1081 / C105;
    const double C1088 = C101 * C1081;
    const double C1087 = C1080 + C558;
    const double C1086 = C1079 * be;
    const double C1085 = C1078 - C1043;
    const double C1084 = C142 * C1077;
    const double C1097 = C1090 / C82;
    const double C1096 = C1088 + C1445;
    const double C1095 = C1087 / C105;
    const double C1094 = C101 * C1087;
    const double C1093 = C1086 / C82;
    const double C1092 = C1085 + C883;
    const double C1091 = C1018 + C1084;
    const double C1102 = C1089 - C1097;
    const double C1101 = C1096 * be;
    const double C1100 = C1094 + C1449;
    const double C1099 = C1092 / C105;
    const double C1098 = C1091 - C1041;
    const double C1105 = C1101 / C82;
    const double C1104 = C1100 * be;
    const double C1103 = C1099 - C1093;
    const double C1108 = C1095 - C1105;
    const double C1107 = C1104 / C82;
    const double C1106 = C1103 / C105;
    const double C1110 = C1108 + C1072;
    const double C1109 = C1106 - C1107;
    const double C1111 = C1109 + C1081;
    const double C1175 = C141 * C620;
    const double C1174 = C142 * C639;
    const double C1173 = C141 * C328;
    const double C1177 = C142 * C1175;
    const double C1176 = C142 * C1173;
    const double C1178 = C1177 - C598;
    const double C1899 = C1060 * C917;
    const double C1898 = C1081 * C551;
    const double C1897 = C1087 * C444;
    const double C1896 = C1060 * C904;
    const double C1895 = C1081 * C540;
    const double C1894 = C1087 * C438;
    const double C1893 = C1060 * C903;
    const double C1892 = C1081 * C536;
    const double C1891 = C1087 * C426;
    const double C1890 = C916 * C1178;
    const double C1889 = C915 * C448;
    const double C1888 = C916 * C836;
    const double C1887 = C915 * C447;
    const double C1886 = C916 * C1174;
    const double C1885 = C915 * C472;
    const double C1884 = C916 * C826;
    const double C1883 = C915 * C471;
    const double C1882 = C916 * C1176;
    const double C1881 = C915 * C434;
    const double C1880 = C916 * C823;
    const double C1879 = C915 * C433;
    const double C1878 = C916 * C552;
    const double C1877 = C915 * C309;
    const double C1876 = C916 * C551;
    const double C1875 = C915 * C444;
    const double C1874 = C916 * C541;
    const double C1873 = C915 * C303;
    const double C1872 = C916 * C540;
    const double C1871 = C915 * C438;
    const double C1870 = C916 * C537;
    const double C1869 = C915 * C323;
    const double C1868 = C916 * C536;
    const double C1867 = C915 * C426;
    const double C1866 = C644 * C1178;
    const double C1865 = C643 * C552;
    const double C1864 = C644 * C836;
    const double C1863 = C643 * C551;
    const double C1862 = C644 * C1174;
    const double C1861 = C643 * C541;
    const double C1860 = C644 * C826;
    const double C1859 = C643 * C540;
    const double C1858 = C644 * C1176;
    const double C1857 = C643 * C537;
    const double C1856 = C644 * C823;
    const double C1855 = C643 * C536;
    const double C1854 = C493 * C1178;
    const double C1853 = C482 * C836;
    const double C1852 = C493 * C552;
    const double C1851 = C482 * C551;
    const double C1850 = C493 * C1174;
    const double C1849 = C482 * C826;
    const double C1848 = C493 * C541;
    const double C1847 = C482 * C540;
    const double C1846 = C493 * C1176;
    const double C1845 = C482 * C823;
    const double C1844 = C493 * C537;
    const double C1843 = C482 * C536;
    const double C1842 = C749 * C632;
    const double C1841 = C771 * C447;
    const double C1840 = C777 * C444;
    const double C1839 = C749 * C645;
    const double C1838 = C771 * C471;
    const double C1837 = C777 * C438;
    const double C1836 = C749 * C629;
    const double C1835 = C771 * C433;
    const double C1834 = C777 * C426;
    const double C1833 = C493 * C448;
    const double C1832 = C482 * C447;
    const double C1831 = C493 * C309;
    const double C1830 = C482 * C444;
    const double C1829 = C493 * C472;
    const double C1828 = C482 * C471;
    const double C1827 = C493 * C303;
    const double C1826 = C482 * C438;
    const double C1825 = C493 * C434;
    const double C1824 = C482 * C433;
    const double C1823 = C493 * C323;
    const double C1822 = C482 * C426;
    const double C1821 = C644 * C448;
    const double C1820 = C643 * C309;
    const double C1819 = C644 * C447;
    const double C1818 = C643 * C444;
    const double C1817 = C644 * C472;
    const double C1816 = C643 * C303;
    const double C1815 = C644 * C471;
    const double C1814 = C643 * C438;
    const double C1813 = C644 * C434;
    const double C1812 = C643 * C323;
    const double C1811 = C644 * C433;
    const double C1810 = C643 * C426;
    const double C1809 = C208 * C334;
    const double C1808 = C358 * C309;
    const double C1807 = C377 * C444;
    const double C1806 = C208 * C329;
    const double C1805 = C358 * C303;
    const double C1804 = C377 * C438;
    const double C1803 = C208 * C368;
    const double C1802 = C358 * C323;
    const double C1801 = C377 * C426;
    const double C1800 = C142 * C968;
    const double C1799 = C967 / C82;
    const double C1798 = C966 / C82;
    const double C1797 = C1077 * ae;
    const double C1796 = C489 * C836;
    const double C1795 = C504 * C551;
    const double C1794 = C231 * C165;
    const double C1793 = C1053 * ae;
    const double C1792 = C489 * C826;
    const double C1791 = C504 * C540;
    const double C1790 = C489 * C823;
    const double C1789 = C504 * C536;
    const double C1788 = C979 * C133;
    const double C1787 = C959 / C82;
    const double C1786 = C142 * C960;
    const double C1785 = C917 * C133;
    const double C1784 = C970 * C133;
    const double C1783 = C904 * C133;
    const double C1782 = C974 * C133;
    const double C1781 = C903 * C133;
    const double C1780 = C142 * C612;
    const double C1779 = C894 * ae;
    const double C1778 = C142 * C1063;
    const double C1777 = C142 * C283;
    const double C1776 = C927 * C917;
    const double C1775 = C934 * C551;
    const double C1774 = C935 * C444;
    const double C1773 = C142 * C618;
    const double C1772 = C142 * C1062;
    const double C1771 = C927 * C904;
    const double C1770 = C934 * C540;
    const double C1769 = C935 * C438;
    const double C1768 = C142 * C1061;
    const double C1767 = C927 * C903;
    const double C1766 = C934 * C536;
    const double C1765 = C935 * C426;
    const double C1764 = C918 * C143;
    const double C1763 = C142 * C609;
    const double C1762 = C917 * C143;
    const double C1761 = C142 * C841;
    const double C1760 = C892 * C143;
    const double C1759 = C904 * C143;
    const double C1758 = C317 * C165;
    const double C1757 = C890 * C143;
    const double C1756 = C903 * C143;
    const double C1755 = C276 * C165;
    const double C1754 = C142 * C1054;
    const double C1753 = C148 * C552;
    const double C1752 = C322 * C551;
    const double C1751 = C265 * C165;
    const double C1750 = C148 * C541;
    const double C1749 = C322 * C540;
    const double C1748 = C217 * C165;
    const double C1747 = C1052 * ae;
    const double C1746 = C299 * C165;
    const double C1745 = C148 * C537;
    const double C1744 = C322 * C536;
    const double C1743 = C142 * C967;
    const double C1742 = C839 + C835;
    const double C1741 = C558 * C836;
    const double C1740 = C561 * C447;
    const double C1739 = C142 * C753;
    const double C1738 = C558 * C826;
    const double C1737 = C561 * C471;
    const double C1736 = C142 * C966;
    const double C1735 = C558 * C823;
    const double C1734 = C561 * C433;
    const double C1733 = C1040 * ae;
    const double C1732 = C975 * ae;
    const double C1731 = C141 * C841;
    const double C1730 = C142 * C277;
    const double C1729 = C142 * C597;
    const double C1728 = C832 / C82;
    const double C1727 = C142 * C726;
    const double C1726 = C141 * C832;
    const double C1725 = C976 + C964;
    const double C1724 = C830 / C82;
    const double C1723 = C142 * C957;
    const double C1722 = C141 * C830;
    const double C1721 = C837 * C133;
    const double C1720 = C836 * C133;
    const double C1719 = C142 * C959;
    const double C1718 = C551 * C133;
    const double C1717 = C827 * C133;
    const double C1716 = C826 * C133;
    const double C1715 = C142 * C742;
    const double C1714 = C540 * C133;
    const double C1713 = C824 * C133;
    const double C1712 = C823 * C133;
    const double C1711 = C142 * C435;
    const double C1710 = C536 * C133;
    const double C1709 = C239 * C160;
    const double C1708 = C961 * ae;
    const double C1707 = C744 * ae;
    const double C1706 = C726 * ae;
    const double C1705 = C704 * ae;
    const double C1704 = C216 - C721;
    const double C1703 = C766 * ae;
    const double C1702 = C632 * C133;
    const double C1701 = C447 * C133;
    const double C1700 = C187 * C133;
    const double C1699 = C645 * C133;
    const double C1698 = C471 * C133;
    const double C1697 = C182 * C133;
    const double C1696 = C629 * C133;
    const double C1695 = C433 * C133;
    const double C1694 = C170 * C133;
    const double C1693 = C640 * C144;
    const double C1692 = C613 / C82;
    const double C1691 = C632 * C144;
    const double C1690 = C320 * C160;
    const double C1689 = C657 * C144;
    const double C1688 = C611 / C82;
    const double C1687 = C141 * C612;
    const double C1686 = C645 * C144;
    const double C1685 = C141 * C753;
    const double C1684 = C616 * C144;
    const double C1683 = C629 * C144;
    const double C1682 = C284 * C160;
    const double C1681 = C610 / C82;
    const double C1680 = C1175 * ae;
    const double C1679 = C141 * C752;
    const double C1678 = C656 * C632;
    const double C1677 = C664 * C447;
    const double C1676 = C665 * C444;
    const double C1675 = C141 * C609;
    const double C1674 = C608 / C82;
    const double C1673 = C639 * ae;
    const double C1672 = C141 * C751;
    const double C1671 = C141 * C275;
    const double C1670 = C656 * C645;
    const double C1669 = C664 * C471;
    const double C1668 = C665 * C438;
    const double C1667 = C141 * C750;
    const double C1666 = C656 * C629;
    const double C1665 = C664 * C433;
    const double C1664 = C665 * C426;
    const double C1663 = C272 * C160;
    const double C1662 = C148 * C448;
    const double C1661 = C322 * C447;
    const double C1660 = C148 * C309;
    const double C1659 = C322 * C444;
    const double C1658 = C141 * C742;
    const double C1657 = C148 * C472;
    const double C1656 = C322 * C471;
    const double C1655 = C148 * C303;
    const double C1654 = C322 * C438;
    const double C1653 = C217 * C160;
    const double C1652 = C741 * ae;
    const double C1651 = C299 * C160;
    const double C1650 = C148 * C434;
    const double C1649 = C322 * C433;
    const double C1648 = C148 * C323;
    const double C1647 = C322 * C426;
    const double C1646 = C142 * C613;
    const double C1645 = C475 + C457;
    const double C1644 = C558 * C552;
    const double C1643 = C561 * C309;
    const double C1642 = C142 * C319;
    const double C1641 = 2 * C480;
    const double C1640 = C558 * C551;
    const double C1639 = C561 * C444;
    const double C1638 = C142 * C611;
    const double C1637 = C558 * C541;
    const double C1636 = C561 * C303;
    const double C1635 = C142 * C286;
    const double C1634 = C558 * C540;
    const double C1633 = C561 * C438;
    const double C1632 = C142 * C355;
    const double C1631 = C558 * C537;
    const double C1630 = C561 * C323;
    const double C1629 = C142 * C282;
    const double C1628 = C558 * C536;
    const double C1627 = C561 * C426;
    const double C1626 = C553 * C143;
    const double C1625 = C552 * C143;
    const double C1624 = C142 * C610;
    const double C1623 = C551 * C143;
    const double C1622 = C142 * C280;
    const double C1621 = C542 * C143;
    const double C1620 = C541 * C143;
    const double C1619 = C142 * C608;
    const double C1618 = C540 * C143;
    const double C1617 = C142 * C316;
    const double C1616 = C539 * C143;
    const double C1615 = C537 * C143;
    const double C1614 = C142 * C354;
    const double C1613 = C536 * C143;
    const double C1612 = C142 * C274;
    const double C1611 = C142 * C352;
    const double C1610 = C142 * C268;
    const double C1609 = C142 * C350;
    const double C1608 = C142 * C261;
    const double C1607 = C142 * C259;
    const double C1606 = C142 * C258;
    const double C1605 = C142 * C437;
    const double C1604 = C538 / C82;
    const double C1603 = C142 * C328;
    const double C1602 = C136 * C538;
    const double C1601 = C902 + C872;
    const double C1600 = C142 * C295;
    const double C1599 = C449 * C144;
    const double C1598 = C448 * C144;
    const double C1597 = C141 * C613;
    const double C1596 = C447 * C144;
    const double C1595 = C141 * C319;
    const double C1594 = C473 * C144;
    const double C1593 = C472 * C144;
    const double C1592 = C141 * C611;
    const double C1591 = C471 * C144;
    const double C1590 = C141 * C286;
    const double C1589 = C436 * C144;
    const double C1588 = C434 * C144;
    const double C1587 = C141 * C355;
    const double C1586 = C433 * C144;
    const double C1585 = C141 * C282;
    const double C1584 = C141 * C610;
    const double C1583 = C489 * C448;
    const double C1582 = C504 * C309;
    const double C1581 = C141 * C280;
    const double C1580 = C489 * C447;
    const double C1579 = C504 * C444;
    const double C1578 = C141 * C608;
    const double C1577 = C470 + C455;
    const double C1576 = C489 * C472;
    const double C1575 = C504 * C303;
    const double C1574 = C141 * C316;
    const double C1573 = 2 * C479;
    const double C1572 = C489 * C471;
    const double C1571 = C504 * C438;
    const double C1570 = C141 * C354;
    const double C1569 = C489 * C434;
    const double C1568 = C504 * C323;
    const double C1567 = C141 * C274;
    const double C1566 = C489 * C433;
    const double C1565 = C504 * C426;
    const double C1564 = C141 * C352;
    const double C1563 = C141 * C268;
    const double C1562 = C503 * C334;
    const double C1561 = C510 * C309;
    const double C1560 = C509 * C444;
    const double C1559 = C141 * C350;
    const double C1558 = C141 * C261;
    const double C1557 = C503 * C329;
    const double C1556 = C510 * C303;
    const double C1555 = C509 * C438;
    const double C1554 = C957 * ae;
    const double C1553 = C141 * C437;
    const double C1552 = C435 / C82;
    const double C1551 = C1173 * ae;
    const double C1550 = C136 * C435;
    const double C1549 = C628 + C592;
    const double C1548 = C141 * C295;
    const double C1547 = C503 * C368;
    const double C1546 = C510 * C323;
    const double C1545 = C509 * C426;
    const double C1544 = C320 / C82;
    const double C1543 = C165 * C95;
    const double C1542 = C334 * C144;
    const double C1541 = C319 / C82;
    const double C1540 = C320 * C150;
    const double C1539 = C309 * C144;
    const double C1538 = C136 * C319;
    const double C1537 = C187 * C144;
    const double C1536 = C165 * C90;
    const double C1535 = C287 / C82;
    const double C1534 = C95 * C201;
    const double C1533 = C329 * C144;
    const double C1532 = C286 / C82;
    const double C1531 = C287 * C150;
    const double C1530 = C303 * C144;
    const double C1529 = C136 * C286;
    const double C1528 = C182 * C144;
    const double C1527 = C90 * C201;
    const double C1526 = C95 * C198;
    const double C1525 = C284 / C82;
    const double C1524 = C239 * C150;
    const double C1523 = C368 * C144;
    const double C1522 = C136 * C355;
    const double C1521 = C282 / C82;
    const double C1520 = C323 * C144;
    const double C1519 = C136 * C282;
    const double C1518 = C170 * C144;
    const double C1517 = C90 * C198;
    const double C1516 = C281 / C82;
    const double C1515 = C95 * C197;
    const double C1514 = C334 * C143;
    const double C1513 = C280 / C82;
    const double C1512 = C281 * C150;
    const double C1511 = C309 * C143;
    const double C1510 = C136 * C280;
    const double C1509 = C187 * C143;
    const double C1508 = C90 * C197;
    const double C1507 = C317 / C82;
    const double C1506 = C160 * C95;
    const double C1505 = C329 * C143;
    const double C1504 = C316 / C82;
    const double C1503 = C317 * C150;
    const double C1502 = C303 * C143;
    const double C1501 = C136 * C316;
    const double C1500 = C182 * C143;
    const double C1499 = C160 * C90;
    const double C1498 = C95 * C192;
    const double C1497 = C276 / C82;
    const double C1496 = C231 * C150;
    const double C1495 = C368 * C143;
    const double C1494 = C136 * C354;
    const double C1493 = C274 / C82;
    const double C1492 = C323 * C143;
    const double C1491 = C136 * C274;
    const double C1490 = C170 * C143;
    const double C1489 = C90 * C192;
    const double C1488 = C95 * C188;
    const double C1487 = C227 * ae;
    const double C1486 = C272 / C82;
    const double C1485 = C620 * ae;
    const double C1484 = C338 * ae;
    const double C1483 = C136 * C352;
    const double C1482 = C268 / C82;
    const double C1481 = C136 * C268;
    const double C1480 = C90 * C188;
    const double C1479 = C95 * C183;
    const double C1478 = C222 * ae;
    const double C1477 = C265 / C82;
    const double C1476 = C618 * ae;
    const double C1475 = C333 * ae;
    const double C1474 = C136 * C350;
    const double C1473 = C261 / C82;
    const double C1472 = C136 * C261;
    const double C1471 = C90 * C183;
    const double C1470 = C150 * C95;
    const double C1469 = C214 * ae;
    const double C1468 = C302 - C216;
    const double C1467 = C299 / C82;
    const double C1466 = C328 * ae;
    const double C1465 = C178 * ae;
    const double C1464 = C136 * C437;
    const double C1463 = C369 * ae;
    const double C1462 = C136 * C360;
    const double C1461 = C295 / C82;
    const double C1460 = C136 * C295;
    const double C1459 = 2 * C465;
    const double C1458 = C150 * C90;
    const double C2157 = C868 * C1597;
    const double C2156 = C868 * C1595;
    const double C2155 = C868 * C1587;
    const double C2154 = C868 * C1585;
    const double C2153 = C868 * C1538;
    const double C2152 = C868 * C1529;
    const double C2151 = C588 * C1619;
    const double C2150 = C588 * C1617;
    const double C2149 = C588 * C1614;
    const double C2148 = C588 * C1612;
    const double C2147 = C410 * C1715;
    const double C2146 = C1330 * C1609;
    const double C2145 = C410 * C1608;
    const double C2144 = C410 * C1711;
    const double C2143 = C410 * C1600;
    const double C2142 = C1330 * C1564;
    const double C2141 = C410 * C1563;
    const double C2140 = C410 * C1548;
    const double C2139 = C588 * C1510;
    const double C2138 = C588 * C1501;
    const double C2137 = C1730 - C1516;
    const double C2136 = C1797 / C82;
    const double C2135 = 2 * C1794;
    const double C2134 = C1793 / C82;
    const double C2133 = C416 * C1617;
    const double C2132 = C416 * C1612;
    const double C2131 = C1788 / C82;
    const double C2130 = C1786 - C1787;
    const double C2129 = C1785 / C82;
    const double C2128 = C1784 / C82;
    const double C2127 = C1783 / C82;
    const double C2126 = C1782 / C82;
    const double C2125 = C1781 / C82;
    const double C2124 = C1779 / C82;
    const double C2123 = C1777 - C468;
    const double C2122 = C973 - C1541;
    const double C2121 = C1773 * ae;
    const double C2120 = C976 - C1532;
    const double C2119 = C902 - C1521;
    const double C2118 = C1764 / C82;
    const double C2117 = C1763 - C1681;
    const double C2116 = C1762 / C82;
    const double C2115 = C964 - C1513;
    const double C2114 = C1760 / C82;
    const double C2113 = C1759 / C82;
    const double C2112 = -C1758;
    const double C2111 = C1757 / C82;
    const double C2110 = C1756 / C82;
    const double C2109 = -C1755;
    const double C2108 = C352 - C1605;
    const double C2107 = C872 - C1482;
    const double C2106 = -C1751;
    const double C2105 = C69 * C1609;
    const double C2104 = C66 * C1608;
    const double C2103 = 2 * C1748;
    const double C2102 = C1747 / C82;
    const double C2101 = -C1746;
    const double C2100 = C66 * C1600;
    const double C2099 = C1743 / C82;
    const double C2098 = C532 * C1595;
    const double C2097 = C838 + C1739;
    const double C2096 = C1736 / C82;
    const double C2095 = C532 * C1585;
    const double C2094 = C1733 / C82;
    const double C2093 = C1732 / C82;
    const double C2092 = C973 + C1731;
    const double C2091 = C1729 * ae;
    const double C2090 = C142 * C1704;
    const double C2089 = C1727 * ae;
    const double C2088 = C1726 / C82;
    const double C2087 = C1723 * ae;
    const double C2086 = C1722 / C82;
    const double C2085 = C1721 / C82;
    const double C2084 = C1720 / C82;
    const double C2083 = C1719 / C82;
    const double C2082 = C1718 / C82;
    const double C2081 = C1717 / C82;
    const double C2080 = C1716 / C82;
    const double C2079 = C65 * C1715;
    const double C2078 = C1714 / C82;
    const double C2077 = C65 * C1608;
    const double C2076 = C1713 / C82;
    const double C2075 = C1712 / C82;
    const double C2074 = C65 * C1711;
    const double C2073 = C1710 / C82;
    const double C2072 = C65 * C1600;
    const double C2071 = C968 - C1535;
    const double C2070 = 2 * C1709;
    const double C2069 = C1708 / C82;
    const double C2068 = C1707 / C82;
    const double C2067 = C1706 / C82;
    const double C2066 = C1705 / C82;
    const double C2065 = C1703 / C82;
    const double C2064 = C1702 / C82;
    const double C2063 = C1701 / C82;
    const double C2062 = C65 * C1563;
    const double C2061 = 2 * C1700;
    const double C2060 = C960 - C1477;
    const double C2059 = C1699 / C82;
    const double C2058 = C1698 / C82;
    const double C2057 = 2 * C1697;
    const double C2056 = C1696 / C82;
    const double C2055 = C1695 / C82;
    const double C2054 = C65 * C1548;
    const double C2053 = 2 * C1694;
    const double C2052 = C1693 / C82;
    const double C2051 = C1691 / C82;
    const double C2050 = -C1690;
    const double C2049 = C1689 / C82;
    const double C2048 = C1687 - C1688;
    const double C2047 = C1686 / C82;
    const double C2046 = C835 - C1532;
    const double C2045 = C1684 / C82;
    const double C2044 = C1683 / C82;
    const double C2043 = -C1682;
    const double C2042 = C1680 / C82;
    const double C2041 = C839 - C1513;
    const double C2040 = C1673 / C82;
    const double C2039 = C1671 - C468;
    const double C2038 = C838 - C1504;
    const double C2037 = C628 - C1493;
    const double C2036 = -C1663;
    const double C2035 = C69 * C1564;
    const double C2034 = C66 * C1563;
    const double C2033 = C350 - C1553;
    const double C2032 = C592 - C1473;
    const double C2031 = 2 * C1653;
    const double C2030 = C1652 / C82;
    const double C2029 = -C1651;
    const double C2028 = C66 * C1548;
    const double C2027 = C1646 / C82;
    const double C2026 = C532 * C1538;
    const double C2025 = C1642 / C82;
    const double C2024 = C487 - C1641;
    const double C2023 = C1638 / C82;
    const double C2022 = C532 * C1529;
    const double C2021 = C1635 / C82;
    const double C2020 = C467 + C1632;
    const double C2019 = C1629 / C82;
    const double C2018 = C1626 / C82;
    const double C2017 = C1625 / C82;
    const double C2016 = C1624 / C82;
    const double C2015 = C1623 / C82;
    const double C2014 = C1622 / C82;
    const double C2013 = C1621 / C82;
    const double C2012 = C1620 / C82;
    const double C2011 = C79 * C1619;
    const double C2010 = C1618 / C82;
    const double C2009 = C79 * C1617;
    const double C2008 = C1616 / C82;
    const double C2007 = C1615 / C82;
    const double C2006 = C79 * C1614;
    const double C2005 = C1613 / C82;
    const double C2004 = C79 * C1612;
    const double C2003 = C485 + C1611;
    const double C2002 = C1610 / C82;
    const double C2001 = C1606 * ae;
    const double C2000 = C1603 * ae;
    const double C1999 = C1602 / C82;
    const double C1998 = C1599 / C82;
    const double C1997 = C1598 / C82;
    const double C1996 = C78 * C1597;
    const double C1995 = C1596 / C82;
    const double C1994 = C78 * C1595;
    const double C1993 = C1594 / C82;
    const double C1992 = C1593 / C82;
    const double C1991 = C1592 / C82;
    const double C1990 = C1591 / C82;
    const double C1989 = C1590 / C82;
    const double C1988 = C1589 / C82;
    const double C1987 = C1588 / C82;
    const double C1986 = C78 * C1587;
    const double C1985 = C1586 / C82;
    const double C1984 = C78 * C1585;
    const double C1983 = C1584 / C82;
    const double C1982 = C416 * C1510;
    const double C1981 = C1581 / C82;
    const double C1980 = C1578 / C82;
    const double C1979 = C416 * C1501;
    const double C1978 = C1574 / C82;
    const double C1977 = C486 - C1573;
    const double C1976 = C467 + C1570;
    const double C1975 = C1567 / C82;
    const double C1974 = C485 + C1559;
    const double C1973 = C1558 / C82;
    const double C1972 = C1554 / C82;
    const double C1971 = C1551 / C82;
    const double C1970 = C1550 / C82;
    const double C1969 = C1543 * C140;
    const double C1968 = C1542 / C82;
    const double C1967 = -C1540;
    const double C1966 = C1539 / C82;
    const double C1965 = C78 * C1538;
    const double C1964 = 2 * C1537;
    const double C1963 = C1536 * C121;
    const double C1962 = C140 * C1534;
    const double C1961 = C1533 / C82;
    const double C1960 = -C1531;
    const double C1959 = C1530 / C82;
    const double C1958 = C78 * C1529;
    const double C1957 = 2 * C1528;
    const double C1956 = C121 * C1527;
    const double C1955 = C140 * C1526;
    const double C1954 = C612 - C1525;
    const double C1953 = 2 * C1524;
    const double C1952 = C1523 / C82;
    const double C1951 = C457 - C1521;
    const double C1950 = C1520 / C82;
    const double C1949 = C1519 / C82;
    const double C1948 = 2 * C1518;
    const double C1947 = C121 * C1517;
    const double C1946 = C140 * C1515;
    const double C1945 = C1514 / C82;
    const double C1944 = -C1512;
    const double C1943 = C1511 / C82;
    const double C1942 = C79 * C1510;
    const double C1941 = 2 * C1509;
    const double C1940 = C121 * C1508;
    const double C1939 = C1506 * C140;
    const double C1938 = C1505 / C82;
    const double C1937 = -C1503;
    const double C1936 = C1502 / C82;
    const double C1935 = C79 * C1501;
    const double C1934 = 2 * C1500;
    const double C1933 = C1499 * C121;
    const double C1932 = C140 * C1498;
    const double C1931 = C609 - C1497;
    const double C1930 = 2 * C1496;
    const double C1929 = C1495 / C82;
    const double C1928 = C455 - C1493;
    const double C1927 = C1492 / C82;
    const double C1926 = C1491 / C82;
    const double C1925 = 2 * C1490;
    const double C1924 = C121 * C1489;
    const double C1923 = C140 * C1488;
    const double C1922 = 2 * C1487;
    const double C1921 = C1485 / C82;
    const double C1920 = C1484 / C82;
    const double C1919 = C475 - C1482;
    const double C1918 = C1481 / C82;
    const double C1917 = C121 * C1480;
    const double C1916 = C140 * C1479;
    const double C1915 = 2 * C1478;
    const double C1914 = C1476 / C82;
    const double C1913 = C1475 / C82;
    const double C1912 = C470 - C1473;
    const double C1911 = C1472 / C82;
    const double C1910 = C121 * C1471;
    const double C1909 = C1470 * C140;
    const double C1908 = 2 * C1469;
    const double C1907 = C1466 / C82;
    const double C1906 = C1465 / C82;
    const double C1905 = C1464 - C254;
    const double C1904 = C1463 / C82;
    const double C1903 = C467 - C1461;
    const double C1902 = C1460 / C82;
    const double C1901 = C484 - C1459;
    const double C1900 = C1458 * C121;
    const double C2367 = C1449 * C1956;
    const double C2366 = C1449 * C1947;
    const double C2365 = C2157 / C82;
    const double C2364 = C2156 / C82;
    const double C2363 = C869 * C2097;
    const double C2362 = C1881 + C2155;
    const double C2361 = C2154 / C82;
    const double C2360 = C2153 / C82;
    const double C2359 = C2152 / C82;
    const double C2358 = C868 * C1956;
    const double C2357 = C869 * C2020;
    const double C2356 = C868 * C1947;
    const double C2355 = C2042 + C1687;
    const double C2354 = C589 * C2092;
    const double C2353 = C2151 / C82;
    const double C2352 = C2150 / C82;
    const double C2351 = C1857 + C2149;
    const double C2350 = C2148 / C82;
    const double C2349 = C1330 * C2003;
    const double C2348 = C1849 + C2147;
    const double C2347 = C2145 / C82;
    const double C2346 = C2144 / C82;
    const double C2345 = C2143 / C82;
    const double C2344 = C1448 * C1940;
    const double C2343 = C1448 * C1924;
    const double C2342 = C2141 / C82;
    const double C2341 = C410 * C1917;
    const double C2340 = C1330 * C1974;
    const double C2339 = C410 * C1910;
    const double C2338 = C2140 / C82;
    const double C2337 = C2139 / C82;
    const double C2336 = C588 * C1940;
    const double C2335 = C2138 / C82;
    const double C2334 = C589 * C1976;
    const double C2333 = C588 * C1924;
    const double C2332 = C68 * C1917;
    const double C2331 = C68 * C1910;
    const double C2330 = C2069 + C968;
    const double C2329 = C1800 - C2066;
    const double C2328 = C2093 - C1799;
    const double C2327 = C141 * C1955;
    const double C2326 = C417 * C2092;
    const double C2325 = C2135 + C275;
    const double C2324 = C2133 / C82;
    const double C2323 = C1932 * C165;
    const double C2322 = C2132 / C82;
    const double C2321 = C141 * C1923;
    const double C2320 = C1921 + C612;
    const double C2319 = C1780 - C1906;
    const double C2318 = C2124 - C1692;
    const double C2317 = C2122 + C2123;
    const double C2316 = C2121 / C82;
    const double C2315 = C2120 + C1772;
    const double C2314 = C863 * C1956;
    const double C2313 = C2119 + C1768;
    const double C2312 = C863 * C1947;
    const double C2311 = C2115 + C1761;
    const double C2310 = C2112 / C82;
    const double C2309 = C2109 / C82;
    const double C2308 = C2107 + C1754;
    const double C2307 = C69 * C2003;
    const double C2306 = C2106 / C82;
    const double C2305 = C2104 / C82;
    const double C2304 = C2103 + C254;
    const double C2303 = C2101 / C82;
    const double C2302 = C2100 / C82;
    const double C2301 = C1742 - C2099;
    const double C2300 = C2098 / C82;
    const double C2299 = C533 * C2097;
    const double C2298 = C628 - C2096;
    const double C2297 = C2095 / C82;
    const double C2296 = C142 * C1946;
    const double C2295 = C841 + C2093;
    const double C2294 = C2091 / C82;
    const double C2293 = C2089 / C82;
    const double C2292 = C1725 - C2088;
    const double C2291 = C142 * C1932;
    const double C2290 = C2087 / C82;
    const double C2289 = C902 - C2086;
    const double C2288 = C592 - C2083;
    const double C2287 = C2079 - C2080;
    const double C2286 = -C2077;
    const double C2285 = -C2074;
    const double C2284 = -C2072;
    const double C2283 = C141 * C1962;
    const double C2282 = C2070 + C283;
    const double C2281 = C1955 * C160;
    const double C2280 = C1923 * C160;
    const double C2279 = -C2062;
    const double C2278 = C2061 / C82;
    const double C2277 = C65 * C1917;
    const double C2276 = C141 * C1916;
    const double C2275 = C2057 / C82;
    const double C2274 = C65 * C1910;
    const double C2273 = -C2054;
    const double C2272 = C2053 / C82;
    const double C2271 = C2050 / C82;
    const double C2270 = C136 * C1962;
    const double C2269 = C2046 + C1685;
    const double C2268 = C2043 / C82;
    const double C2267 = C136 * C1946;
    const double C2266 = C2042 - C1681;
    const double C2265 = C2041 + C1679;
    const double C2264 = C583 * C1940;
    const double C2263 = C1914 + C609;
    const double C2262 = C1675 - C1906;
    const double C2261 = C2040 - C1674;
    const double C2260 = C2038 + C2039;
    const double C2259 = C354 + C1971;
    const double C2258 = C2037 + C1667;
    const double C2257 = C583 * C1924;
    const double C2256 = C2036 / C82;
    const double C2255 = C2034 / C82;
    const double C2254 = C66 * C1917;
    const double C2253 = C2032 + C1658;
    const double C2252 = C69 * C1974;
    const double C2251 = C66 * C1910;
    const double C2250 = C2031 + C254;
    const double C2249 = C2029 / C82;
    const double C2248 = C2028 / C82;
    const double C2247 = C1645 - C2027;
    const double C2246 = C2026 / C82;
    const double C2245 = C2024 - C2025;
    const double C2244 = C470 - C2023;
    const double C2243 = C2022 / C82;
    const double C2242 = C486 - C2021;
    const double C2241 = C532 * C1956;
    const double C2240 = C533 * C2020;
    const double C2239 = C484 - C2019;
    const double C2238 = C532 * C1947;
    const double C2237 = C455 - C2016;
    const double C2236 = C546 - C2014;
    const double C2235 = -C2011;
    const double C2234 = -C2009;
    const double C2233 = C2006 - C2007;
    const double C2232 = -C2004;
    const double C2231 = C825 - C2002;
    const double C2230 = C2001 / C82;
    const double C2229 = C2000 / C82;
    const double C2228 = C1601 - C1999;
    const double C2227 = -C1996;
    const double C2226 = -C1994;
    const double C2225 = C457 - C1991;
    const double C2224 = C490 - C1989;
    const double C2223 = C1986 - C1987;
    const double C2222 = -C1984;
    const double C2221 = C475 - C1983;
    const double C2220 = C1982 / C82;
    const double C2219 = C487 - C1981;
    const double C2218 = C416 * C1940;
    const double C2217 = C1577 - C1980;
    const double C2216 = C1979 / C82;
    const double C2215 = C1977 - C1978;
    const double C2214 = C417 * C1976;
    const double C2213 = C484 - C1975;
    const double C2212 = C416 * C1924;
    const double C2211 = C411 * C1917;
    const double C2210 = C825 - C1973;
    const double C2209 = C411 * C1910;
    const double C2208 = C1972 + C960;
    const double C2207 = C1971 - C1552;
    const double C2206 = C1549 - C1970;
    const double C2205 = C139 + C1969;
    const double C2204 = C1967 / C82;
    const double C2203 = -C1965;
    const double C2202 = C1964 / C82;
    const double C2201 = C1963 - C122;
    const double C2200 = C1962 * C150;
    const double C2199 = C1960 / C82;
    const double C2198 = -C1958;
    const double C2197 = C1957 / C82;
    const double C2196 = C78 * C1956;
    const double C2195 = C136 * C1955;
    const double C2194 = C1953 + C283;
    const double C2193 = C1951 + C1522;
    const double C2192 = C490 - C1949;
    const double C2191 = C1948 / C82;
    const double C2190 = C78 * C1947;
    const double C2189 = C1946 * C150;
    const double C2188 = C1944 / C82;
    const double C2187 = -C1942;
    const double C2186 = C1941 / C82;
    const double C2185 = C79 * C1940;
    const double C2184 = C139 + C1939;
    const double C2183 = C1937 / C82;
    const double C2182 = -C1935;
    const double C2181 = C1934 / C82;
    const double C2180 = C1933 - C122;
    const double C2179 = C136 * C1932;
    const double C2178 = C1930 + C275;
    const double C2177 = C1928 + C1494;
    const double C2176 = C546 - C1926;
    const double C2175 = C1925 / C82;
    const double C2174 = C79 * C1924;
    const double C2173 = C136 * C1923;
    const double C2172 = C1922 / C82;
    const double C2171 = C1921 - C1486;
    const double C2170 = C1919 + C1483;
    const double C2169 = C487 - C1918;
    const double C2168 = C136 * C1916;
    const double C2167 = C1915 / C82;
    const double C2166 = C1914 - C1477;
    const double C2165 = C1912 + C1474;
    const double C2164 = C486 - C1911;
    const double C2163 = C139 + C1909;
    const double C2162 = C1908 / C82;
    const double C2161 = C1905 + C1906;
    const double C2160 = C1903 + C485;
    const double C2159 = C1901 - C1902;
    const double C2158 = C1900 - C122;
    const double C2601 = C1445 * C2245;
    const double C2600 = C1011 * C2315;
    const double C2599 = C1445 * C2242;
    const double C2598 = C2367 / C82;
    const double C2597 = C1011 * C2313;
    const double C2596 = C1445 * C2239;
    const double C2595 = C2366 / C82;
    const double C2594 = C1889 - C2365;
    const double C2593 = C869 * C2301;
    const double C2592 = C1887 - C2364;
    const double C2591 = C868 * C2225;
    const double C2590 = C868 * C2224;
    const double C2589 = C2362 + C1882;
    const double C2588 = C869 * C2298;
    const double C2587 = C1879 - C2361;
    const double C2586 = C869 * C2247;
    const double C2585 = C1877 - C2360;
    const double C2584 = C869 * C2245;
    const double C2583 = C869 * C2244;
    const double C2582 = C1873 - C2359;
    const double C2581 = C869 * C2242;
    const double C2580 = C2358 / C82;
    const double C2579 = C868 * C2192;
    const double C2578 = C869 * C2239;
    const double C2577 = C2356 / C82;
    const double C2576 = C588 * C2237;
    const double C2575 = C588 * C2236;
    const double C2574 = C2316 + C1763;
    const double C2573 = C1861 - C2353;
    const double C2572 = C589 * C2292;
    const double C2571 = C1859 - C2352;
    const double C2570 = C2351 + C1858;
    const double C2569 = C589 * C2289;
    const double C2568 = C1855 - C2350;
    const double C2567 = C410 * C2288;
    const double C2566 = C410 * C2231;
    const double C2565 = C2348 + C1850;
    const double C2564 = C1847 - C2347;
    const double C2563 = C2290 + C1786;
    const double C2562 = C1845 - C2346;
    const double C2561 = C1330 * C2228;
    const double C2560 = C1843 - C2345;
    const double C2559 = C697 * C2265;
    const double C2558 = C1442 * C2219;
    const double C2557 = C2344 / C82;
    const double C2556 = C1442 * C2215;
    const double C2555 = C697 * C2258;
    const double C2554 = C1442 * C2213;
    const double C2553 = C2343 / C82;
    const double C2552 = C1832 - C2342;
    const double C2551 = C1330 * C2169;
    const double C2550 = C2341 / C82;
    const double C2549 = C410 * C2210;
    const double C2548 = C1330 * C2164;
    const double C2547 = C2339 / C82;
    const double C2546 = C1330 * C2206;
    const double C2545 = C1824 - C2338;
    const double C2544 = C1330 * C2159;
    const double C2543 = C589 * C2221;
    const double C2542 = C1820 - C2337;
    const double C2541 = C589 * C2219;
    const double C2540 = C2336 / C82;
    const double C2539 = C589 * C2217;
    const double C2538 = C1816 - C2335;
    const double C2537 = C589 * C2215;
    const double C2536 = C588 * C2176;
    const double C2535 = C589 * C2213;
    const double C2534 = C2333 / C82;
    const double C2533 = C74 * C2170;
    const double C2532 = C71 * C2169;
    const double C2531 = C2332 / C82;
    const double C2530 = C74 * C2165;
    const double C2529 = C71 * C2164;
    const double C2528 = C2331 / C82;
    const double C2527 = C71 * C2159;
    const double C2526 = C2328 + C2329;
    const double C2525 = C753 + C2293;
    const double C2524 = C142 * C2327;
    const double C2523 = C2290 - C1798;
    const double C2522 = C416 * C2236;
    const double C2521 = C2134 + C2325;
    const double C2520 = C417 * C2292;
    const double C2519 = C1791 - C2324;
    const double C2518 = -C2323;
    const double C2517 = C417 * C2289;
    const double C2516 = C1789 - C2322;
    const double C2515 = C142 * C2321;
    const double C2514 = C65 * C2308;
    const double C2513 = C2318 + C2319;
    const double C2512 = C2317 + C1778;
    const double C2511 = C864 * C2245;
    const double C2510 = C142 * C2270;
    const double C2509 = C2316 - C1688;
    const double C2508 = C865 * C2315;
    const double C2507 = C864 * C2242;
    const double C2506 = C2314 / C82;
    const double C2505 = C355 + C2229;
    const double C2504 = C865 * C2313;
    const double C2503 = C864 * C2239;
    const double C2502 = C2312 / C82;
    const double C2501 = C142 * C2267;
    const double C2500 = C79 * C2311;
    const double C2499 = C2310 - C1504;
    const double C2498 = C2309 - C1493;
    const double C2497 = C66 * C2231;
    const double C2496 = C2306 - C1473;
    const double C2495 = C1749 - C2305;
    const double C2494 = C2102 + C2304;
    const double C2493 = C2303 - C1461;
    const double C2492 = C69 * C2228;
    const double C2491 = C1744 - C2302;
    const double C2490 = C2068 + C2282;
    const double C2489 = C533 * C2301;
    const double C2488 = C1740 - C2300;
    const double C2487 = C532 * C2224;
    const double C2486 = C533 * C2298;
    const double C2485 = C1734 - C2297;
    const double C2484 = C2296 / C82;
    const double C2483 = C2294 + C1730;
    const double C2482 = C2293 - C1728;
    const double C2481 = C141 * C2291;
    const double C2480 = C2290 - C1724;
    const double C2479 = C65 * C2288;
    const double C2478 = C65 * C2231;
    const double C2477 = C2286 / C82;
    const double C2476 = C2285 / C82;
    const double C2475 = C2284 / C82;
    const double C2474 = C2283 / C82;
    const double C2473 = -C2281;
    const double C2472 = -C2280;
    const double C2471 = C2279 / C82;
    const double C2470 = -C2277;
    const double C2469 = C2276 / C82;
    const double C2468 = C65 * C2253;
    const double C2467 = C65 * C2210;
    const double C2466 = -C2274;
    const double C2465 = C2273 / C82;
    const double C2464 = C2271 - C1541;
    const double C2463 = C141 * C2270;
    const double C2462 = C78 * C2269;
    const double C2461 = C2268 - C1521;
    const double C2460 = C141 * C2267;
    const double C2459 = C585 * C2265;
    const double C2458 = C584 * C2219;
    const double C2457 = C2264 / C82;
    const double C2456 = C2261 + C2262;
    const double C2455 = C2260 + C1672;
    const double C2454 = C584 * C2215;
    const double C2453 = C585 * C2258;
    const double C2452 = C584 * C2213;
    const double C2451 = C2257 / C82;
    const double C2450 = C2256 - C1482;
    const double C2449 = C1661 - C2255;
    const double C2448 = C69 * C2169;
    const double C2447 = C2254 / C82;
    const double C2446 = C66 * C2210;
    const double C2445 = C69 * C2164;
    const double C2444 = C2251 / C82;
    const double C2443 = C2030 + C2250;
    const double C2442 = C2249 - C1461;
    const double C2441 = C69 * C2206;
    const double C2440 = C1649 - C2248;
    const double C2439 = C69 * C2159;
    const double C2438 = C1920 + C2194;
    const double C2437 = C533 * C2247;
    const double C2436 = C1643 - C2246;
    const double C2435 = C533 * C2245;
    const double C2434 = C533 * C2244;
    const double C2433 = C1636 - C2243;
    const double C2432 = C533 * C2242;
    const double C2431 = C2241 / C82;
    const double C2430 = C532 * C2192;
    const double C2429 = C533 * C2239;
    const double C2428 = C2238 / C82;
    const double C2427 = C79 * C2237;
    const double C2426 = C79 * C2236;
    const double C2425 = C2235 / C82;
    const double C2424 = C2234 / C82;
    const double C2423 = C2232 / C82;
    const double C2422 = C2230 + C1607;
    const double C2421 = C2229 - C1604;
    const double C2420 = C2227 / C82;
    const double C2419 = C2226 / C82;
    const double C2418 = C78 * C2225;
    const double C2417 = C78 * C2224;
    const double C2416 = C2222 / C82;
    const double C2415 = C417 * C2221;
    const double C2414 = C1582 - C2220;
    const double C2413 = C417 * C2219;
    const double C2412 = C2218 / C82;
    const double C2411 = C1913 + C2178;
    const double C2410 = C417 * C2217;
    const double C2409 = C1575 - C2216;
    const double C2408 = C417 * C2215;
    const double C2407 = C416 * C2176;
    const double C2406 = C417 * C2213;
    const double C2405 = C2212 / C82;
    const double C2404 = C415 * C2170;
    const double C2403 = C413 * C2169;
    const double C2402 = C2211 / C82;
    const double C2401 = C415 * C2165;
    const double C2400 = C413 * C2164;
    const double C2399 = C2209 / C82;
    const double C2398 = C2207 - C1553;
    const double C2397 = C413 * C2159;
    const double C2396 = C2205 * ae;
    const double C2395 = C2204 - C1541;
    const double C2394 = C2203 / C82;
    const double C2393 = C2201 * ae;
    const double C2392 = -C2200;
    const double C2391 = C2199 - C1532;
    const double C2390 = C2198 / C82;
    const double C2389 = -C2196;
    const double C2388 = C2195 / C82;
    const double C2387 = C78 * C2193;
    const double C2386 = C78 * C2192;
    const double C2385 = -C2190;
    const double C2384 = -C2189;
    const double C2383 = C2188 - C1513;
    const double C2382 = C2187 / C82;
    const double C2381 = -C2185;
    const double C2380 = C2184 * ae;
    const double C2379 = C2183 - C1504;
    const double C2378 = C2182 / C82;
    const double C2377 = C2180 * ae;
    const double C2376 = C2179 / C82;
    const double C2375 = C79 * C2177;
    const double C2374 = C79 * C2176;
    const double C2373 = -C2174;
    const double C2372 = C2173 / C82;
    const double C2371 = C2168 / C82;
    const double C2370 = C2163 * ae;
    const double C2369 = C2160 + C1462;
    const double C2368 = C2158 * ae;
    const double C2769 = C1011 * C2512;
    const double C2768 = C1449 * C2393;
    const double C2767 = C1894 - C2598;
    const double C2766 = C1891 - C2595;
    const double C2765 = C2594 + C1890;
    const double C2764 = C2592 + C1888;
    const double C2763 = C1885 + C2591;
    const double C2762 = C1883 + C2590;
    const double C2761 = C2587 + C1880;
    const double C2760 = C2585 + C1878;
    const double C2759 = C868 * C2393;
    const double C2758 = C2582 + C1874;
    const double C2757 = C1871 - C2580;
    const double C2756 = C1869 + C2579;
    const double C2755 = C1867 - C2577;
    const double C2754 = C1865 + C2576;
    const double C2753 = C1863 + C2575;
    const double C2752 = C2573 + C1862;
    const double C2751 = C2571 + C1860;
    const double C2750 = C2568 + C1856;
    const double C2749 = C1853 + C2567;
    const double C2748 = C1851 + C2566;
    const double C2747 = C2564 + C1848;
    const double C2746 = C2562 + C1846;
    const double C2745 = C2560 + C1844;
    const double C2744 = C1840 - C2557;
    const double C2743 = C697 * C2455;
    const double C2742 = C1448 * C2377;
    const double C2741 = C1834 - C2553;
    const double C2740 = C2552 + C1833;
    const double C2739 = C1830 - C2550;
    const double C2738 = C1828 + C2549;
    const double C2737 = C1826 - C2547;
    const double C2736 = C2545 + C1825;
    const double C2735 = C410 * C2368;
    const double C2734 = C2542 + C1821;
    const double C2733 = C1818 - C2540;
    const double C2732 = C2538 + C1817;
    const double C2731 = C588 * C2377;
    const double C2730 = C1812 + C2536;
    const double C2729 = C1810 - C2534;
    const double C2728 = C1807 - C2531;
    const double C2727 = C1804 - C2528;
    const double C2726 = C74 * C2369;
    const double C2725 = C68 * C2368;
    const double C2724 = C141 * C2396;
    const double C2723 = C2524 / C82;
    const double C2722 = C1795 + C2522;
    const double C2721 = C2380 * C165;
    const double C2720 = C2519 + C1792;
    const double C2719 = C2518 / C82;
    const double C2718 = C2516 + C1790;
    const double C2717 = C2515 / C82;
    const double C2716 = C2514 - C2129;
    const double C2715 = C65 * C2496;
    const double C2714 = C65 * C2493;
    const double C2713 = C865 * C2512;
    const double C2712 = C863 * C2393;
    const double C2711 = C2510 / C82;
    const double C2710 = C1769 - C2506;
    const double C2709 = C1765 - C2502;
    const double C2708 = C2501 / C82;
    const double C2707 = C2500 - C2116;
    const double C2706 = C79 * C2499;
    const double C2705 = C79 * C2498;
    const double C2704 = C1752 + C2497;
    const double C2703 = C2495 + C1750;
    const double C2702 = C2370 * C165;
    const double C2701 = C2491 + C1745;
    const double C2700 = C2488 + C1741;
    const double C2699 = C1737 + C2487;
    const double C2698 = C2485 + C1735;
    const double C2697 = C277 - C2484;
    const double C2696 = C142 * C2380;
    const double C2695 = C2482 - C2090;
    const double C2694 = C2481 / C82;
    const double C2693 = C2479 - C2084;
    const double C2692 = C2478 - C2082;
    const double C2691 = C2477 - C2078;
    const double C2690 = C2476 - C2075;
    const double C2689 = C2475 - C2073;
    const double C2688 = C2396 * C160;
    const double C2687 = C285 - C2474;
    const double C2686 = C2473 / C82;
    const double C2685 = C2472 / C82;
    const double C2684 = C65 * C2450;
    const double C2683 = C2471 - C2063;
    const double C2682 = C2470 / C82;
    const double C2681 = C259 - C2469;
    const double C2680 = C2468 - C2059;
    const double C2679 = C2467 - C2058;
    const double C2678 = C2466 / C82;
    const double C2677 = C65 * C2442;
    const double C2676 = C2465 - C2055;
    const double C2675 = C65 * C2368;
    const double C2674 = C136 * C2396;
    const double C2673 = C78 * C2464;
    const double C2672 = C2463 / C82;
    const double C2671 = C2462 - C2047;
    const double C2670 = C78 * C2461;
    const double C2669 = C2460 / C82;
    const double C2668 = C1676 - C2457;
    const double C2667 = C136 * C2380;
    const double C2666 = C585 * C2455;
    const double C2665 = C583 * C2377;
    const double C2664 = C1664 - C2451;
    const double C2663 = C2449 + C1662;
    const double C2662 = C1659 - C2447;
    const double C2661 = C1656 + C2446;
    const double C2660 = C1654 - C2444;
    const double C2659 = C2370 * C160;
    const double C2658 = C2440 + C1650;
    const double C2657 = C66 * C2368;
    const double C2656 = C2436 + C1644;
    const double C2655 = C532 * C2393;
    const double C2654 = C2433 + C1637;
    const double C2653 = C1633 - C2431;
    const double C2652 = C1630 + C2430;
    const double C2651 = C1627 - C2428;
    const double C2650 = C2427 - C2017;
    const double C2649 = C2426 - C2015;
    const double C2648 = C2425 - C2012;
    const double C2647 = C2424 - C2010;
    const double C2646 = C2423 - C2005;
    const double C2645 = C142 * C2370;
    const double C2644 = C2421 - C1605;
    const double C2643 = C2420 - C1997;
    const double C2642 = C2419 - C1995;
    const double C2641 = C2418 - C1992;
    const double C2640 = C2417 - C1990;
    const double C2639 = C2416 - C1985;
    const double C2638 = C2414 + C1583;
    const double C2637 = C1579 - C2412;
    const double C2636 = C2409 + C1576;
    const double C2635 = C416 * C2377;
    const double C2634 = C1568 + C2407;
    const double C2633 = C1565 - C2405;
    const double C2632 = C1560 - C2402;
    const double C2631 = C1555 - C2399;
    const double C2630 = C141 * C2370;
    const double C2629 = C415 * C2369;
    const double C2628 = C411 * C2368;
    const double C2627 = C2396 * C150;
    const double C2626 = C78 * C2395;
    const double C2625 = C2394 - C1966;
    const double C2624 = C78 * C2393;
    const double C2623 = C2392 / C82;
    const double C2622 = C78 * C2391;
    const double C2621 = C2390 - C1959;
    const double C2620 = C2389 / C82;
    const double C2619 = C285 - C2388;
    const double C2618 = C2387 - C1952;
    const double C2617 = C2386 - C1950;
    const double C2616 = C2385 / C82;
    const double C2615 = C2384 / C82;
    const double C2614 = C79 * C2383;
    const double C2613 = C2382 - C1943;
    const double C2612 = C2381 / C82;
    const double C2611 = C2380 * C150;
    const double C2610 = C79 * C2379;
    const double C2609 = C2378 - C1936;
    const double C2608 = C79 * C2377;
    const double C2607 = C277 - C2376;
    const double C2606 = C2375 - C1929;
    const double C2605 = C2374 - C1927;
    const double C2604 = C2373 / C82;
    const double C2603 = C2172 - C2372;
    const double C2602 = C2167 - C2371;
    const double C2916 = C2768 / C82;
    const double C2915 = C2767 + C1895;
    const double C2914 = C2766 + C1892;
    const double C2913 = C2764 + C2593;
    const double C2912 = C2763 + C1886;
    const double C2911 = C2762 + C1884;
    const double C2910 = C2761 + C2588;
    const double C2909 = C2760 + C2586;
    const double C2908 = C2759 / C82;
    const double C2907 = C2758 + C2583;
    const double C2906 = C2757 + C1872;
    const double C2905 = C2756 + C1870;
    const double C2904 = C2755 + C1868;
    const double C2903 = C141 * C2674;
    const double C2902 = C141 * C2619;
    const double C2901 = C2754 + C1866;
    const double C2900 = C2753 + C1864;
    const double C2899 = C142 * C2667;
    const double C2898 = C2751 + C2572;
    const double C2897 = C142 * C2607;
    const double C2896 = C2750 + C2569;
    const double C2895 = C141 * C2603;
    const double C2894 = C2749 + C1854;
    const double C2893 = C2748 + C1852;
    const double C2892 = C2747 + C2146;
    const double C2891 = C142 * C2630;
    const double C2890 = C2745 + C2561;
    const double C2889 = C2744 + C1841;
    const double C2888 = C2742 / C82;
    const double C2887 = C2741 + C1835;
    const double C2886 = C2740 + C2142;
    const double C2885 = C2739 + C1831;
    const double C2884 = C2738 + C1829;
    const double C2883 = C2737 + C1827;
    const double C2882 = C2736 + C2546;
    const double C2881 = C2735 / C82;
    const double C2880 = C2734 + C2543;
    const double C2879 = C2733 + C1819;
    const double C2878 = C2732 + C2539;
    const double C2877 = C2731 / C82;
    const double C2876 = C2730 + C1813;
    const double C2875 = C2729 + C1811;
    const double C2874 = C2728 + C1808;
    const double C2873 = C2727 + C1805;
    const double C2872 = C2725 / C82;
    const double C2871 = C142 * C2724;
    const double C2870 = C142 * C2687;
    const double C2869 = C1972 - C2723;
    const double C2868 = C142 * C2697;
    const double C2867 = C2722 + C1796;
    const double C2866 = -C2721;
    const double C2865 = C2720 + C2520;
    const double C2864 = C2719 - C1497;
    const double C2863 = C2718 + C2517;
    const double C2862 = C960 - C2717;
    const double C2861 = C2681 * C165;
    const double C2860 = C2715 - C2127;
    const double C2859 = C2630 * C165;
    const double C2858 = C2714 - C2125;
    const double C2857 = C142 * C2674;
    const double C2856 = C2712 / C82;
    const double C2855 = C1914 - C2711;
    const double C2854 = C2710 + C1770;
    const double C2853 = C142 * C2619;
    const double C2852 = C2709 + C1766;
    const double C2851 = C609 - C2708;
    const double C2850 = C2667 * C165;
    const double C2849 = C2706 - C2113;
    const double C2848 = C2607 * C165;
    const double C2847 = C2705 - C2110;
    const double C2846 = C142 * C2603;
    const double C2845 = C2704 + C1753;
    const double C2844 = C2602 * C165;
    const double C2843 = C2703 + C2105;
    const double C2842 = -C2702;
    const double C2841 = C2701 + C2492;
    const double C2840 = C2700 + C2489;
    const double C2839 = C2699 + C1738;
    const double C2838 = C2698 + C2486;
    const double C2837 = C141 * C2697;
    const double C2836 = C141 * C2696;
    const double C2835 = C2230 - C2694;
    const double C2834 = -C2688;
    const double C2833 = C141 * C2687;
    const double C2832 = C2686 - C1525;
    const double C2831 = C2685 - C1486;
    const double C2830 = C2684 - C2064;
    const double C2829 = C2682 - C2278;
    const double C2828 = C141 * C2681;
    const double C2827 = C2678 - C2275;
    const double C2826 = C2677 - C2056;
    const double C2825 = -C2675;
    const double C2824 = C2674 * C160;
    const double C2823 = C2673 - C2051;
    const double C2822 = C612 - C2672;
    const double C2821 = C2619 * C160;
    const double C2820 = C2670 - C2044;
    const double C2819 = C1921 - C2669;
    const double C2818 = C2668 + C1677;
    const double C2817 = C141 * C2667;
    const double C2816 = C2665 / C82;
    const double C2815 = C141 * C2607;
    const double C2814 = C2664 + C1665;
    const double C2813 = C2603 * C160;
    const double C2812 = C2663 + C2035;
    const double C2811 = C2662 + C1660;
    const double C2810 = C141 * C2602;
    const double C2809 = C2661 + C1657;
    const double C2808 = C2660 + C1655;
    const double C2807 = -C2659;
    const double C2806 = C2658 + C2441;
    const double C2805 = C2657 / C82;
    const double C2804 = C2656 + C2437;
    const double C2803 = C2655 / C82;
    const double C2802 = C2654 + C2434;
    const double C2801 = C2653 + C1634;
    const double C2800 = C2652 + C1631;
    const double C2799 = C2651 + C1628;
    const double C2798 = C136 * C2645;
    const double C2797 = C2638 + C2415;
    const double C2796 = C2637 + C1580;
    const double C2795 = C2636 + C2410;
    const double C2794 = C2635 / C82;
    const double C2793 = C2634 + C1569;
    const double C2792 = C2633 + C1566;
    const double C2791 = C2632 + C1561;
    const double C2790 = C2631 + C1556;
    const double C2789 = C136 * C2630;
    const double C2788 = C2628 / C82;
    const double C2787 = -C2627;
    const double C2786 = C2626 - C1968;
    const double C2785 = -C2624;
    const double C2784 = C2623 - C1535;
    const double C2783 = C2622 - C1961;
    const double C2782 = C2620 - C2197;
    const double C2781 = C136 * C2619;
    const double C2780 = C2616 - C2191;
    const double C2779 = C2615 - C1516;
    const double C2778 = C2614 - C1945;
    const double C2777 = C2612 - C2186;
    const double C2776 = -C2611;
    const double C2775 = C2610 - C1938;
    const double C2774 = -C2608;
    const double C2773 = C136 * C2607;
    const double C2772 = C2604 - C2175;
    const double C2771 = C136 * C2603;
    const double C2770 = C136 * C2602;
    const double C3022 = C1897 - C2916;
    const double C3021 = C2915 + C2599;
    const double C3020 = C2914 + C2596;
    const double C3019 = C2911 + C2363;
    const double C3018 = C1875 - C2908;
    const double C3017 = C2906 + C2581;
    const double C3016 = C2905 + C2357;
    const double C3015 = C2904 + C2578;
    const double C3014 = C142 * C2903;
    const double C3013 = C142 * C2822;
    const double C3012 = C142 * C2902;
    const double C3011 = C141 * C2851;
    const double C3010 = C2900 + C2354;
    const double C3009 = C141 * C2899;
    const double C3008 = C141 * C2897;
    const double C3007 = C142 * C2895;
    const double C3006 = C2893 + C2349;
    const double C3005 = C136 * C2891;
    const double C3004 = C2889 + C2558;
    const double C3003 = C1837 - C2888;
    const double C3002 = C2887 + C2554;
    const double C3001 = C2885 + C2551;
    const double C3000 = C2884 + C2340;
    const double C2999 = C2883 + C2548;
    const double C2998 = C1822 - C2881;
    const double C2997 = C2879 + C2541;
    const double C2996 = C1814 - C2877;
    const double C2995 = C2876 + C2334;
    const double C2994 = C2875 + C2535;
    const double C2993 = C2874 + C2532;
    const double C2992 = C2873 + C2529;
    const double C2991 = C1801 - C2872;
    const double C2990 = C2871 / C82;
    const double C2989 = C2067 + C2870;
    const double C2988 = C142 * C2869;
    const double C2987 = C2137 + C2868;
    const double C2986 = C2867 + C2326;
    const double C2985 = C2866 / C82;
    const double C2984 = C141 * C2864;
    const double C2983 = C142 * C2862;
    const double C2982 = C742 + C2861;
    const double C2981 = -C2859;
    const double C2980 = C2857 / C82;
    const double C2979 = C1774 - C2856;
    const double C2978 = C142 * C2855;
    const double C2977 = C2854 + C2507;
    const double C2976 = C1907 + C2853;
    const double C2975 = C2852 + C2503;
    const double C2974 = C142 * C2851;
    const double C2973 = -C2850;
    const double C2972 = C354 + C2848;
    const double C2971 = C1468 + C2846;
    const double C2970 = C2845 + C2307;
    const double C2969 = C350 + C2844;
    const double C2968 = C2842 / C82;
    const double C2967 = C2839 + C2299;
    const double C2966 = C142 * C2832;
    const double C2965 = C2094 + C2837;
    const double C2964 = C2836 / C82;
    const double C2963 = C141 * C2835;
    const double C2962 = C142 * C2831;
    const double C2961 = C2834 / C82;
    const double C2960 = C2071 + C2833;
    const double C2959 = C2060 + C2828;
    const double C2958 = C2825 / C82;
    const double C2957 = -C2824;
    const double C2956 = C141 * C2822;
    const double C2955 = C355 + C2821;
    const double C2954 = C141 * C2819;
    const double C2953 = C2818 + C2458;
    const double C2952 = C2817 / C82;
    const double C2951 = C1668 - C2816;
    const double C2950 = C1907 + C2815;
    const double C2949 = C2814 + C2452;
    const double C2948 = C352 + C2813;
    const double C2947 = C2811 + C2448;
    const double C2946 = C1468 + C2810;
    const double C2945 = C2809 + C2252;
    const double C2944 = C2808 + C2445;
    const double C2943 = C2807 / C82;
    const double C2942 = C1647 - C2805;
    const double C2941 = C1639 - C2803;
    const double C2940 = C142 * C2784;
    const double C2939 = C2801 + C2432;
    const double C2938 = C2800 + C2240;
    const double C2937 = C2799 + C2429;
    const double C2936 = C142 * C2779;
    const double C2935 = C2798 / C82;
    const double C2934 = C141 * C2784;
    const double C2933 = C141 * C2779;
    const double C2932 = C2796 + C2413;
    const double C2931 = C1571 - C2794;
    const double C2930 = C2793 + C2214;
    const double C2929 = C2792 + C2406;
    const double C2928 = C2791 + C2403;
    const double C2927 = C2790 + C2400;
    const double C2926 = C2789 / C82;
    const double C2925 = C1545 - C2788;
    const double C2924 = C2787 / C82;
    const double C2923 = C2785 / C82;
    const double C2922 = C1954 + C2781;
    const double C2921 = C2776 / C82;
    const double C2920 = C2774 / C82;
    const double C2919 = C1931 + C2773;
    const double C2918 = C2171 + C2771;
    const double C2917 = C2166 + C2770;
    const double C3107 = C3022 + C1898;
    const double C3106 = C3021 + C1896;
    const double C3105 = C3020 + C1893;
    const double C3104 = C3018 + C1876;
    const double C3103 = C3014 / C82;
    const double C3102 = C2040 + C3013;
    const double C3101 = C1971 + C3012;
    const double C3100 = C2124 + C3011;
    const double C3099 = C3009 / C82;
    const double C3098 = C2229 + C3008;
    const double C3097 = C3007 - C1553;
    const double C3096 = C142 * C2946;
    const double C3095 = C3005 / C82;
    const double C3094 = C3004 + C1842;
    const double C3093 = C3003 + C1838;
    const double C3092 = C3002 + C1836;
    const double C3091 = C2998 + C1823;
    const double C3090 = C2996 + C1815;
    const double C3089 = C2993 + C1809;
    const double C3088 = C2992 + C1806;
    const double C3087 = C2991 + C1802;
    const double C3086 = C2330 - C2990;
    const double C3085 = C142 * C2989;
    const double C3084 = C2523 + C2988;
    const double C3083 = C141 * C2987;
    const double C3082 = C2985 - C1507;
    const double C3081 = C2102 + C2984;
    const double C3080 = C2130 + C2983;
    const double C3079 = C65 * C2982;
    const double C3078 = C2981 / C82;
    const double C3077 = C2320 - C2980;
    const double C3076 = C2979 + C1775;
    const double C3075 = C2509 + C2978;
    const double C3074 = C2977 + C1771;
    const double C3073 = C142 * C2976;
    const double C3072 = C2975 + C1767;
    const double C3071 = C2117 + C2974;
    const double C3070 = C2973 / C82;
    const double C3069 = C79 * C2972;
    const double C3068 = C142 * C2971;
    const double C3067 = C2968 - C1467;
    const double C3066 = C142 * C2960;
    const double C3065 = C2030 + C2966;
    const double C3064 = C141 * C2965;
    const double C3063 = C2483 - C2964;
    const double C3062 = C2480 + C2963;
    const double C3061 = C2250 + C2962;
    const double C3060 = C142 * C2959;
    const double C3059 = C2961 - C1544;
    const double C3058 = C2958 - C2272;
    const double C3057 = C2957 / C82;
    const double C3056 = C2048 + C2956;
    const double C3055 = C78 * C2955;
    const double C3054 = C2266 + C2954;
    const double C3053 = C2953 + C1678;
    const double C3052 = C2263 - C2952;
    const double C3051 = C2951 + C1669;
    const double C3050 = C141 * C2950;
    const double C3049 = C2949 + C1666;
    const double C3048 = C141 * C2946;
    const double C3047 = C2943 - C1467;
    const double C3046 = C2942 + C1648;
    const double C3045 = C2941 + C1640;
    const double C3044 = C1913 + C2940;
    const double C3043 = C142 * C2922;
    const double C3042 = C2178 + C2936;
    const double C3041 = C142 * C2919;
    const double C3040 = C142 * C2918;
    const double C3039 = C142 * C2917;
    const double C3038 = C2422 - C2935;
    const double C3037 = C2194 + C2934;
    const double C3036 = C141 * C2922;
    const double C3035 = C1920 + C2933;
    const double C3034 = C2931 + C1572;
    const double C3033 = C141 * C2919;
    const double C3032 = C141 * C2918;
    const double C3031 = C2928 + C1562;
    const double C3030 = C141 * C2917;
    const double C3029 = C2927 + C1557;
    const double C3028 = C2208 - C2926;
    const double C3027 = C2925 + C1546;
    const double C3026 = C2924 - C1544;
    const double C3025 = C2923 - C2202;
    const double C3024 = C2921 - C1507;
    const double C3023 = C2920 - C2181;
    const double C3182 = C3107 + C2601;
    const double C3181 = C3106 + C2600;
    const double C3180 = C3105 + C2597;
    const double C3179 = C869 * C3102;
    const double C3178 = C869 * C3101;
    const double C3177 = C3104 + C2584;
    const double C3176 = C2355 - C3103;
    const double C3175 = C589 * C3100;
    const double C3174 = C2574 - C3099;
    const double C3173 = C589 * C3098;
    const double C3172 = C1330 * C3097;
    const double C3171 = C1330 * C3096;
    const double C3170 = C2563 - C3095;
    const double C3169 = C3094 + C2559;
    const double C3168 = C3093 + C2556;
    const double C3167 = C3092 + C2555;
    const double C3166 = C3091 + C2544;
    const double C3165 = C3090 + C2537;
    const double C3164 = C3089 + C2533;
    const double C3163 = C3088 + C2530;
    const double C3162 = C3087 + C2527;
    const double C3161 = C142 * C3086;
    const double C3160 = C2525 + C3085;
    const double C3159 = C2136 + C3083;
    const double C3158 = C141 * C3082;
    const double C3157 = C65 * C3080;
    const double C3156 = C3079 - C2128;
    const double C3155 = C3078 - C1552;
    const double C3154 = C142 * C3077;
    const double C3153 = C3076 + C2511;
    const double C3152 = C3074 + C2508;
    const double C3151 = C2505 + C3073;
    const double C3150 = C3072 + C2504;
    const double C3149 = C79 * C3071;
    const double C3148 = C3070 - C1674;
    const double C3147 = C3069 - C2111;
    const double C3146 = C2108 + C3068;
    const double C3145 = C136 * C3067;
    const double C3144 = C142 * C3059;
    const double C3143 = C2065 + C3066;
    const double C3142 = C2295 + C3064;
    const double C3141 = C141 * C3063;
    const double C3140 = C65 * C3061;
    const double C3139 = C65 * C3060;
    const double C3138 = C142 * C3047;
    const double C3137 = C3057 - C1692;
    const double C3136 = C78 * C3056;
    const double C3135 = C3055 - C2045;
    const double C3134 = C3053 + C2459;
    const double C3133 = C141 * C3052;
    const double C3132 = C3051 + C2454;
    const double C3131 = C2259 + C3050;
    const double C3130 = C3049 + C2453;
    const double C3129 = C2033 + C3048;
    const double C3128 = C136 * C3047;
    const double C3127 = C3046 + C2439;
    const double C3126 = C142 * C3026;
    const double C3125 = C3045 + C2435;
    const double C3124 = C1904 + C3043;
    const double C3123 = C79 * C3042;
    const double C3122 = C142 * C3024;
    const double C3121 = C79 * C3041;
    const double C3120 = C3040 - C2161;
    const double C3119 = C136 * C3038;
    const double C3118 = C141 * C3026;
    const double C3117 = C78 * C3037;
    const double C3116 = C78 * C3036;
    const double C3115 = C141 * C3024;
    const double C3114 = C3034 + C2408;
    const double C3113 = C1904 + C3033;
    const double C3112 = C3031 + C2404;
    const double C3111 = C3030 - C2161;
    const double C3110 = C3029 + C2401;
    const double C3109 = C136 * C3028;
    const double C3108 = C3027 + C2397;
    const double C3224 = C3182 + C1899;
    const double C3223 = C869 * C3176;
    const double C3222 = C2912 + C3179;
    const double C3221 = C2589 + C3178;
    const double C3220 = C2901 + C3175;
    const double C3219 = C589 * C3174;
    const double C3218 = C2570 + C3173;
    const double C3217 = C2894 + C3172;
    const double C3216 = C2565 + C3171;
    const double C3215 = C1330 * C3170;
    const double C3214 = C3168 + C1839;
    const double C3213 = C3162 + C1803;
    const double C3212 = C2526 + C3161;
    const double C3211 = C2521 + C3158;
    const double C3210 = C3157 - C2131;
    const double C3209 = C65 * C3155;
    const double C3208 = C2513 + C3154;
    const double C3207 = C3153 + C1776;
    const double C3206 = C3149 - C2118;
    const double C3205 = C79 * C3148;
    const double C3204 = C2494 + C3145;
    const double C3203 = C2490 + C3144;
    const double C3202 = C2695 + C3141;
    const double C3201 = C3140 - C2085;
    const double C3200 = C3139 - C2081;
    const double C3199 = C65 * C3138;
    const double C3198 = C78 * C3137;
    const double C3197 = C3136 - C2049;
    const double C3196 = C2456 + C3133;
    const double C3195 = C3132 + C1670;
    const double C3194 = C2443 + C3128;
    const double C3193 = C2438 + C3126;
    const double C3192 = C3123 - C2018;
    const double C3191 = C79 * C3122;
    const double C3190 = C3121 - C2008;
    const double C3189 = C2644 + C3119;
    const double C3188 = C78 * C3118;
    const double C3187 = C3117 - C1993;
    const double C3186 = C3116 - C1988;
    const double C3185 = C2411 + C3115;
    const double C3184 = C2398 + C3109;
    const double C3183 = C3108 + C1547;
    const double C3239 = C3224 + C2769;
    const double C3238 = C2765 + C3223;
    const double C3237 = C2752 + C3219;
    const double C3236 = C2746 + C3215;
    const double C3235 = C3214 + C2743;
    const double C3234 = C3213 + C2726;
    const double C3233 = C3209 - C2126;
    const double C3232 = C3207 + C2713;
    const double C3231 = C3205 - C2114;
    const double C3230 = C3199 - C2076;
    const double C3229 = C3198 - C2052;
    const double C3228 = C3195 + C2666;
    const double C3227 = C3191 - C2013;
    const double C3226 = C3188 - C1998;
    const double C3225 = C3183 + C2629;
    const double d2nexx200100 =
        (2 * Pi *
         (C388 * C426 - (C70 * C2368) / C82 + C385 * C323 + C73 * C2159 +
          C372 * C368 + C75 * C2369 + C300 * C379 +
          C77 * (2 * C360 + C1904 - C2161 +
                 C136 * (C1907 - C1467 + C1468 +
                         C136 * (C2162 + C259 - (C136 * C2370) / C82)))) *
         C78 * C79) /
        C82;
    const double d2nexx200010 =
        (2 * Pi *
         (C3225 * C78 * C416 +
          (C509 * C433 - (C411 * C1548) / C82 + C510 * C434 + C413 * C2206 +
           C503 * C436 + C415 * C3184) *
              C78 * C417)) /
        C82;
    const double d2nexx200001 =
        (2 * Pi *
         (C3225 * C532 + (C509 * C536 - (C411 * C1600) / C82 + C510 * C537 +
                          C413 * C2228 + C503 * C539 + C415 * C3189) *
                             C533) *
         C79) /
        C82;
    const double d2nexx020100 =
        (2 * Pi *
         (C3127 * C78 * C583 + C2806 * C78 * C584 +
          (C322 * C629 + C66 * C2442 + C148 * C616 + C69 * C3194) * C78 *
              C585)) /
        C82;
    const double d2nexx020010 =
        (2 * Pi *
         (C3058 * C78 * C687 + C2676 * C78 * C688 + C2826 * C78 * C689 +
          (C65 * ((-2 * C435) / C82 + C141 * C3047) - (C765 * C133) / C82) *
              C78 * C690)) /
        C82;
    const double d2nexx020001 = (2 * Pi *
                                 ((C3058 * C532 + C2689 * C533) * C583 +
                                  (C2676 * C532 + C2690 * C533) * C584 +
                                  (C2826 * C532 + C3230 * C533) * C585)) /
                                C82;
    const double d2nexx002100 =
        (2 * Pi *
         (C3127 * C863 + C2841 * C864 +
          (C322 * C903 + C66 * C2493 + C148 * C890 + C69 * C3204) * C865) *
         C79) /
        C82;
    const double d2nexx002010 =
        (2 * Pi *
         ((C3058 * C863 + C2689 * C864 + C2858 * C865) * C416 +
          (C2676 * C863 + C2690 * C864 + C3233 * C865) * C417)) /
        C82;
    const double d2nexx002001 =
        (2 * Pi *
         (C3058 * C1001 + C2689 * C1002 + C2858 * C1003 +
          (C65 * ((-2 * C538) / C82 + C142 * C3067) - (C1075 * C133) / C82) *
              C1004) *
         C79) /
        C82;
    const double d2nexx110100 =
        (2 * Pi *
         (C3234 * C78 * C588 +
          (C377 * C433 - (C68 * C1548) / C82 + C358 * C434 + C71 * C2206 +
           C208 * C436 + C74 * C3184) *
              C78 * C589)) /
        C82;
    const double d2nexx110010 =
        (2 * Pi *
         (C3166 * C78 * C1448 + C2882 * C78 * C1442 +
          (C482 * C629 + C410 * C2442 + C493 * C616 + C1330 * C3194) * C78 *
              C697)) /
        C82;
    const double d2nexx110001 = (2 * Pi *
                                 ((C3166 * C532 + C2890 * C533) * C588 +
                                  (C2882 * C532 + C3236 * C533) * C589)) /
                                C82;
    const double d2nexx101100 =
        (2 * Pi *
         (C3234 * C868 + (C377 * C536 - (C68 * C1600) / C82 + C358 * C537 +
                          C71 * C2228 + C208 * C539 + C74 * C3189) *
                             C869) *
         C79) /
        C82;
    const double d2nexx101010 = (2 * Pi *
                                 ((C3166 * C868 + C2890 * C869) * C416 +
                                  (C2882 * C868 + C3236 * C869) * C417)) /
                                C82;
    const double d2nexx101001 =
        (2 * Pi *
         (C3166 * C1449 + C2890 * C1445 +
          (C482 * C903 + C410 * C2493 + C493 * C890 + C1330 * C3204) * C1011) *
         C79) /
        C82;
    const double d2nexx011100 =
        (2 * Pi *
         ((C3127 * C868 + C2841 * C869) * C588 +
          (C2806 * C868 +
           (C322 * C823 - (C66 * C1711) / C82 + C148 * C1176 + C69 * C3170) *
               C869) *
              C589)) /
        C82;
    const double d2nexx011010 = (2 * Pi *
                                 ((C3058 * C868 + C2689 * C869) * C1448 +
                                  (C2676 * C868 + C2690 * C869) * C1442 +
                                  (C2826 * C868 + C3230 * C869) * C697)) /
                                C82;
    const double d2nexx011001 =
        (2 * Pi *
         ((C3058 * C1449 + C2689 * C1445 + C2858 * C1011) * C588 +
          (C2676 * C1449 + C2690 * C1445 + C3233 * C1011) * C589)) /
        C82;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx110100;
    d2nexx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexx110010;
    d2nexx[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nexx110001;
    d2nexx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx011100;
    d2nexx[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexx011010;
    d2nexx[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nexx011001;
    d2nexx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nexx200100 - 0.5 * d2nexx020100 + d2nexx002100;
    d2nexx[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * d2nexx200010 - 0.5 * d2nexx020010 + d2nexx002010;
    d2nexx[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nexx200001 - 0.5 * d2nexx020001 + d2nexx002001;
    d2nexx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx101100;
    d2nexx[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexx101010;
    d2nexx[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nexx101001;
    d2nexx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nexx200100 - std::sqrt(0.75) * d2nexx020100;
    d2nexx[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * d2nexx200010 - std::sqrt(0.75) * d2nexx020010;
    d2nexx[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2nexx200001 - std::sqrt(0.75) * d2nexx020001;
    const double d2nexy200100 =
        (2 * Pi *
         (C388 * C438 - (C70 * C1910) / C82 + C385 * C303 + C73 * C2164 +
          C372 * C329 + C75 * C2165 + C300 * C362 +
          C77 * (2 * C350 + C1913 + C136 * C2917)) *
         C78 * C79) /
        C82;
    const double d2nexy200010 =
        (2 * Pi *
         (C3110 * C78 * C416 + (C509 * C471 + C411 * C2210 + C510 * C472 +
                                C413 * C1974 + C503 * C473 + C415 * C3111) *
                                   C78 * C417)) /
        C82;
    const double d2nexy200001 =
        (2 * Pi *
         (C3110 * C532 + (C509 * C540 - (C411 * C1608) / C82 + C510 * C541 +
                          C413 * C1609 + C503 * C542 + C415 * C3039) *
                             C533) *
         C79) /
        C82;
    const double d2nexy020100 =
        (2 * Pi *
         (C2944 * C78 * C583 + C2945 * C78 * C584 +
          (C322 * C645 + C66 * C2253 + C148 * C657 + C69 * C3129) * C78 *
              C585)) /
        C82;
    const double d2nexy020010 =
        (2 * Pi *
         (C2827 * C78 * C687 + C2679 * C78 * C688 + C2680 * C78 * C689 +
          (C65 * (2 * C742 + C2250 + C141 * C2959) - (C788 * C133) / C82) *
              C78 * C690)) /
        C82;
    const double d2nexy020001 = (2 * Pi *
                                 ((C2827 * C532 + C2691 * C533) * C583 +
                                  (C2679 * C532 + C2287 * C533) * C584 +
                                  (C2680 * C532 + C3200 * C533) * C585)) /
                                C82;
    const double d2nexy002100 =
        (2 * Pi *
         (C2944 * C863 + C2843 * C864 +
          (C322 * C904 + C66 * C2496 + C148 * C892 + C69 * C2969) * C865) *
         C79) /
        C82;
    const double d2nexy002010 =
        (2 * Pi *
         ((C2827 * C863 + C2691 * C864 + C2860 * C865) * C416 +
          (C2679 * C863 + C2287 * C864 + C3156 * C865) * C417)) /
        C82;
    const double d2nexy002001 =
        (2 * Pi *
         (C2827 * C1001 + C2691 * C1002 + C2860 * C1003 +
          (C65 * ((-2 * C142 * C265) / C82 +
                  C142 * ((-C1916 * C165) / C82 - C1477)) -
           (C1076 * C133) / C82) *
              C1004) *
         C79) /
        C82;
    const double d2nexy110100 =
        (2 * Pi *
         (C3163 * C78 * C588 + (C377 * C471 + C68 * C2210 + C358 * C472 +
                                C71 * C1974 + C208 * C473 + C74 * C3111) *
                                   C78 * C589)) /
        C82;
    const double d2nexy110010 =
        (2 * Pi *
         (C2999 * C78 * C1448 + C3000 * C78 * C1442 +
          (C482 * C645 + C410 * C2253 + C493 * C657 + C1330 * C3129) * C78 *
              C697)) /
        C82;
    const double d2nexy110001 = (2 * Pi *
                                 ((C2999 * C532 + C2892 * C533) * C588 +
                                  (C3000 * C532 + C3216 * C533) * C589)) /
                                C82;
    const double d2nexy101100 =
        (2 * Pi *
         (C3163 * C868 + (C377 * C540 - (C68 * C1608) / C82 + C358 * C541 +
                          C71 * C1609 + C208 * C542 + C74 * C3039) *
                             C869) *
         C79) /
        C82;
    const double d2nexy101010 = (2 * Pi *
                                 ((C2999 * C868 + C2892 * C869) * C416 +
                                  (C3000 * C868 + C3216 * C869) * C417)) /
                                C82;
    const double d2nexy101001 =
        (2 * Pi *
         (C2999 * C1449 + C2892 * C1445 +
          (C482 * C904 + C410 * C2496 + C493 * C892 + C1330 * C2969) * C1011) *
         C79) /
        C82;
    const double d2nexy011100 =
        (2 * Pi *
         ((C2944 * C868 + C2843 * C869) * C588 +
          (C2945 * C868 +
           (C322 * C826 + C66 * C1715 + C148 * C1174 + C69 * C3096) * C869) *
              C589)) /
        C82;
    const double d2nexy011010 = (2 * Pi *
                                 ((C2827 * C868 + C2691 * C869) * C1448 +
                                  (C2679 * C868 + C2287 * C869) * C1442 +
                                  (C2680 * C868 + C3200 * C869) * C697)) /
                                C82;
    const double d2nexy011001 =
        (2 * Pi *
         ((C2827 * C1449 + C2691 * C1445 + C2860 * C1011) * C588 +
          (C2679 * C1449 + C2287 * C1445 + C3156 * C1011) * C589)) /
        C82;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy110100;
    d2nexy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexy110010;
    d2nexy[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nexy110001;
    d2nexy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy011100;
    d2nexy[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexy011010;
    d2nexy[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nexy011001;
    d2nexy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nexy200100 - 0.5 * d2nexy020100 + d2nexy002100;
    d2nexy[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * d2nexy200010 - 0.5 * d2nexy020010 + d2nexy002010;
    d2nexy[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nexy200001 - 0.5 * d2nexy020001 + d2nexy002001;
    d2nexy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy101100;
    d2nexy[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexy101010;
    d2nexy[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nexy101001;
    d2nexy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nexy200100 - std::sqrt(0.75) * d2nexy020100;
    d2nexy[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * d2nexy200010 - std::sqrt(0.75) * d2nexy020010;
    d2nexy[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2nexy200001 - std::sqrt(0.75) * d2nexy020001;
    const double d2nexz200100 =
        (2 * Pi *
         (C388 * C444 - (C70 * C1917) / C82 + C385 * C309 + C73 * C2169 +
          C372 * C334 + C75 * C2170 + C300 * C363 +
          C77 * (2 * C352 + C1920 + C136 * C2918)) *
         C78 * C79) /
        C82;
    const double d2nexz200010 =
        (2 * Pi *
         (C3112 * C78 * C416 +
          (C509 * C447 - (C411 * C1563) / C82 + C510 * C448 + C413 * C1564 +
           C503 * C449 + C415 * C3032) *
              C78 * C417)) /
        C82;
    const double d2nexz200001 =
        (2 * Pi *
         (C3112 * C532 + (C509 * C551 + C411 * C2231 + C510 * C552 +
                          C413 * C2003 + C503 * C553 + C415 * C3120) *
                             C533) *
         C79) /
        C82;
    const double d2nexz020100 =
        (2 * Pi *
         (C2947 * C78 * C583 + C2812 * C78 * C584 +
          (C322 * C632 + C66 * C2450 + C148 * C640 + C69 * C2948) * C78 *
              C585)) /
        C82;
    const double d2nexz020010 =
        (2 * Pi *
         (C2829 * C78 * C687 + C2683 * C78 * C688 + C2830 * C78 * C689 +
          (C65 * ((-2 * C959) / C82 + C141 * C2831) - (C767 * C133) / C82) *
              C78 * C690)) /
        C82;
    const double d2nexz020001 = (2 * Pi *
                                 ((C2829 * C532 + C2692 * C533) * C583 +
                                  (C2683 * C532 + C2693 * C533) * C584 +
                                  (C2830 * C532 + C3201 * C533) * C585)) /
                                C82;
    const double d2nexz002100 =
        (2 * Pi *
         (C2947 * C863 + C2970 * C864 +
          (C322 * C917 + C66 * C2308 + C148 * C918 + C69 * C3146) * C865) *
         C79) /
        C82;
    const double d2nexz002010 =
        (2 * Pi *
         ((C2829 * C863 + C2692 * C864 + C2716 * C865) * C416 +
          (C2683 * C863 + C2693 * C864 + C3210 * C865) * C417)) /
        C82;
    const double d2nexz002001 =
        (2 * Pi *
         (C2829 * C1001 + C2692 * C1002 + C2716 * C1003 +
          (C65 *
               (2 * C1054 + C2304 +
                C142 * (C1607 - C1486 + C142 * (C259 - (C142 * C1923) / C82))) -
           (C1098 * C133) / C82) *
              C1004) *
         C79) /
        C82;
    const double d2nexz110100 =
        (2 * Pi *
         (C3164 * C78 * C588 +
          (C377 * C447 - (C68 * C1563) / C82 + C358 * C448 + C71 * C1564 +
           C208 * C449 + C74 * C3032) *
              C78 * C589)) /
        C82;
    const double d2nexz110010 =
        (2 * Pi *
         (C3001 * C78 * C1448 + C2886 * C78 * C1442 +
          (C482 * C632 + C410 * C2450 + C493 * C640 + C1330 * C2948) * C78 *
              C697)) /
        C82;
    const double d2nexz110001 = (2 * Pi *
                                 ((C3001 * C532 + C3006 * C533) * C588 +
                                  (C2886 * C532 + C3217 * C533) * C589)) /
                                C82;
    const double d2nexz101100 =
        (2 * Pi *
         (C3164 * C868 + (C377 * C551 + C68 * C2231 + C358 * C552 +
                          C71 * C2003 + C208 * C553 + C74 * C3120) *
                             C869) *
         C79) /
        C82;
    const double d2nexz101010 = (2 * Pi *
                                 ((C3001 * C868 + C3006 * C869) * C416 +
                                  (C2886 * C868 + C3217 * C869) * C417)) /
                                C82;
    const double d2nexz101001 =
        (2 * Pi *
         (C3001 * C1449 + C3006 * C1445 +
          (C482 * C917 + C410 * C2308 + C493 * C918 + C1330 * C3146) * C1011) *
         C79) /
        C82;
    const double d2nexz011100 =
        (2 * Pi *
         ((C2947 * C868 + C2970 * C869) * C588 +
          (C2812 * C868 +
           (C322 * C836 + C66 * C2288 + C148 * C1178 + C69 * C3097) * C869) *
              C589)) /
        C82;
    const double d2nexz011010 = (2 * Pi *
                                 ((C2829 * C868 + C2692 * C869) * C1448 +
                                  (C2683 * C868 + C2693 * C869) * C1442 +
                                  (C2830 * C868 + C3201 * C869) * C697)) /
                                C82;
    const double d2nexz011001 =
        (2 * Pi *
         ((C2829 * C1449 + C2692 * C1445 + C2716 * C1011) * C588 +
          (C2683 * C1449 + C2693 * C1445 + C3210 * C1011) * C589)) /
        C82;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz110100;
    d2nexz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexz110010;
    d2nexz[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nexz110001;
    d2nexz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz011100;
    d2nexz[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexz011010;
    d2nexz[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nexz011001;
    d2nexz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nexz200100 - 0.5 * d2nexz020100 + d2nexz002100;
    d2nexz[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * d2nexz200010 - 0.5 * d2nexz020010 + d2nexz002010;
    d2nexz[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nexz200001 - 0.5 * d2nexz020001 + d2nexz002001;
    d2nexz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz101100;
    d2nexz[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexz101010;
    d2nexz[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nexz101001;
    d2nexz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nexz200100 - std::sqrt(0.75) * d2nexz020100;
    d2nexz[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * d2nexz200010 - std::sqrt(0.75) * d2nexz020010;
    d2nexz[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2nexz200001 - std::sqrt(0.75) * d2nexz020001;
    const double d2neyx200100 =
        (2 * Pi *
         (C2772 * C70 + C2605 * C73 + C2606 * C75 +
          (C79 * (2 * C354 + C2178 + C136 * C2919) - (C379 * C143) / C82) *
              C77) *
         C78) /
        C82;
    const double d2neyx200010 =
        (2 * Pi *
         (C2929 * C411 + C2930 * C413 +
          (C504 * C368 + C416 * C2177 + C489 * C436 + C417 * C3113) * C415) *
         C78) /
        C82;
    const double d2neyx200001 =
        (2 * Pi *
         ((C2772 * C411 + C2605 * C413 + C2606 * C415) * C532 +
          (C2646 * C411 + C2233 * C413 + C3190 * C415) * C533)) /
        C82;
    const double d2neyx020100 =
        (2 * Pi *
         (C3130 * C66 + (C665 * C323 + C583 * C2176 + C664 * C434 +
                         C584 * C1976 + C656 * C616 + C585 * C3131) *
                            C69) *
         C78) /
        C82;
    const double d2neyx020010 =
        (2 * Pi *
         (C801 * C426 - (C687 * C1924) / C82 + C800 * C433 + C688 * C2213 +
          C792 * C629 + C689 * C2258 + C773 * C765 +
          C690 * (2 * C750 + C2030 +
                  C141 * (C1972 - C1497 +
                          C141 * (C2162 - (C141 * C1932) / C82)))) *
         C65 * C78) /
        C82;
    const double d2neyx020001 =
        (2 * Pi *
         (C3130 * C65 * C532 +
          (C665 * C536 - (C583 * C1612) / C82 + C664 * C823 + C584 * C2289 +
           C656 * C824 + C585 * C3062) *
              C65 * C533)) /
        C82;
    const double d2neyx002100 = (2 * Pi *
                                 ((C2772 * C66 + C2605 * C69) * C863 +
                                  (C2646 * C66 + C2233 * C69) * C864 +
                                  (C2847 * C66 + C3147 * C69) * C865)) /
                                C82;
    const double d2neyx002010 =
        (2 * Pi *
         (C2929 * C65 * C863 + C2863 * C65 * C864 +
          (C504 * C903 + C416 * C2498 + C489 * C974 + C417 * C3081) * C65 *
              C865)) /
        C82;
    const double d2neyx002001 =
        (2 * Pi *
         (C2772 * C65 * C1001 + C2646 * C65 * C1002 + C2847 * C65 * C1003 +
          (C79 * ((-2 * C830) / C82 + C142 * C2864) - (C1075 * C143) / C82) *
              C65 * C1004)) /
        C82;
    const double d2neyx110100 =
        (2 * Pi *
         (C2994 * C68 + C2995 * C71 +
          (C643 * C368 + C588 * C2177 + C644 * C436 + C589 * C3113) * C74) *
         C78) /
        C82;
    const double d2neyx110010 =
        (2 * Pi *
         (C3167 * C410 + (C777 * C323 + C1448 * C2176 + C771 * C434 +
                          C1442 * C1976 + C749 * C616 + C697 * C3131) *
                             C1330) *
         C78) /
        C82;
    const double d2neyx110001 = (2 * Pi *
                                 ((C2994 * C410 + C2995 * C1330) * C532 +
                                  (C2896 * C410 + C3218 * C1330) * C533)) /
                                C82;
    const double d2neyx101100 =
        (2 * Pi *
         ((C2772 * C68 + C2605 * C71 + C2606 * C74) * C868 +
          (C2646 * C68 + C2233 * C71 + C3190 * C74) * C869)) /
        C82;
    const double d2neyx101010 =
        (2 * Pi *
         ((C2929 * C410 + C2930 * C1330) * C868 +
          (C2863 * C410 +
           (C504 * C537 + C416 * C1614 + C489 * C1176 + C417 * C3098) * C1330) *
              C869)) /
        C82;
    const double d2neyx101001 = (2 * Pi *
                                 ((C2772 * C410 + C2605 * C1330) * C1449 +
                                  (C2646 * C410 + C2233 * C1330) * C1445 +
                                  (C2847 * C410 + C3147 * C1330) * C1011)) /
                                C82;
    const double d2neyx011100 = (2 * Pi *
                                 ((C2994 * C66 + C2995 * C69) * C868 +
                                  (C2896 * C66 + C3218 * C69) * C869)) /
                                C82;
    const double d2neyx011010 =
        (2 * Pi *
         (C3167 * C65 * C868 +
          (C777 * C536 - (C1448 * C1612) / C82 + C771 * C823 + C1442 * C2289 +
           C749 * C824 + C697 * C3062) *
              C65 * C869)) /
        C82;
    const double d2neyx011001 =
        (2 * Pi *
         (C2994 * C65 * C1449 + C2896 * C65 * C1445 +
          (C643 * C903 + C588 * C2498 + C644 * C974 + C589 * C3081) * C65 *
              C1011)) /
        C82;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx110100;
    d2neyx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyx110010;
    d2neyx[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2neyx110001;
    d2neyx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx011100;
    d2neyx[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyx011010;
    d2neyx[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2neyx011001;
    d2neyx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2neyx200100 - 0.5 * d2neyx020100 + d2neyx002100;
    d2neyx[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * d2neyx200010 - 0.5 * d2neyx020010 + d2neyx002010;
    d2neyx[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2neyx200001 - 0.5 * d2neyx020001 + d2neyx002001;
    d2neyx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx101100;
    d2neyx[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyx101010;
    d2neyx[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2neyx101001;
    d2neyx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2neyx200100 - std::sqrt(0.75) * d2neyx020100;
    d2neyx[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * d2neyx200010 - std::sqrt(0.75) * d2neyx020010;
    d2neyx[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2neyx200001 - std::sqrt(0.75) * d2neyx020001;
    const double d2neyy200100 =
        (2 * Pi *
         (C3023 * C70 + C2609 * C73 + C2775 * C75 +
          (C79 * ((-2 * C608) / C82 + C136 * C3024) - (C362 * C143) / C82) *
              C77) *
         C78) /
        C82;
    const double d2neyy200010 =
        (2 * Pi *
         (C3114 * C411 + C2795 * C413 +
          (C504 * C329 + C416 * C2379 + C489 * C473 + C417 * C3185) * C415) *
         C78) /
        C82;
    const double d2neyy200001 =
        (2 * Pi *
         ((C3023 * C411 + C2609 * C413 + C2775 * C415) * C532 +
          (C2647 * C411 + C2648 * C413 + C3227 * C415) * C533)) /
        C82;
    const double d2neyy020100 =
        (2 * Pi *
         (C3228 * C66 + (C665 * C303 - (C583 * C1501) / C82 + C664 * C472 +
                         C584 * C2217 + C656 * C657 + C585 * C3196) *
                            C69) *
         C78) /
        C82;
    const double d2neyy020010 =
        (2 * Pi *
         (C801 * C438 - (C687 * C2377) / C82 + C800 * C471 + C688 * C2215 +
          C792 * C645 + C689 * C2455 + C773 * C788 +
          C690 * (2 * C751 + C2065 - (C141 * C1704 - C275 + C2066) +
                  C141 * (C2067 - C1507 + C721 - C216 +
                          C141 * (C2167 + C277 - (C141 * C2380) / C82)))) *
         C65 * C78) /
        C82;
    const double d2neyy020001 =
        (2 * Pi *
         (C3228 * C65 * C532 +
          (C665 * C540 - (C583 * C1617) / C82 + C664 * C826 + C584 * C2292 +
           C656 * C827 + C585 * C3202) *
              C65 * C533)) /
        C82;
    const double d2neyy002100 = (2 * Pi *
                                 ((C3023 * C66 + C2609 * C69) * C863 +
                                  (C2647 * C66 + C2648 * C69) * C864 +
                                  (C2849 * C66 + C3231 * C69) * C865)) /
                                C82;
    const double d2neyy002010 =
        (2 * Pi *
         (C3114 * C65 * C863 + C2865 * C65 * C864 +
          (C504 * C904 + C416 * C2499 + C489 * C970 + C417 * C3211) * C65 *
              C865)) /
        C82;
    const double d2neyy002001 =
        (2 * Pi *
         (C3023 * C65 * C1001 + C2647 * C65 * C1002 + C2849 * C65 * C1003 +
          (C79 * ((-2 * C832) / C82 + C142 * C3082) - (C1076 * C143) / C82) *
              C65 * C1004)) /
        C82;
    const double d2neyy110100 =
        (2 * Pi *
         (C3165 * C68 + C2878 * C71 +
          (C643 * C329 + C588 * C2379 + C644 * C473 + C589 * C3185) * C74) *
         C78) /
        C82;
    const double d2neyy110010 =
        (2 * Pi *
         (C3235 * C410 + (C777 * C303 - (C1448 * C1501) / C82 + C771 * C472 +
                          C1442 * C2217 + C749 * C657 + C697 * C3196) *
                             C1330) *
         C78) /
        C82;
    const double d2neyy110001 = (2 * Pi *
                                 ((C3165 * C410 + C2878 * C1330) * C532 +
                                  (C2898 * C410 + C3237 * C1330) * C533)) /
                                C82;
    const double d2neyy101100 =
        (2 * Pi *
         ((C3023 * C68 + C2609 * C71 + C2775 * C74) * C868 +
          (C2647 * C68 + C2648 * C71 + C3227 * C74) * C869)) /
        C82;
    const double d2neyy101010 =
        (2 * Pi *
         ((C3114 * C410 + C2795 * C1330) * C868 +
          (C2865 * C410 +
           (C504 * C541 - (C416 * C1619) / C82 + C489 * C1174 + C417 * C3174) *
               C1330) *
              C869)) /
        C82;
    const double d2neyy101001 = (2 * Pi *
                                 ((C3023 * C410 + C2609 * C1330) * C1449 +
                                  (C2647 * C410 + C2648 * C1330) * C1445 +
                                  (C2849 * C410 + C3231 * C1330) * C1011)) /
                                C82;
    const double d2neyy011100 = (2 * Pi *
                                 ((C3165 * C66 + C2878 * C69) * C868 +
                                  (C2898 * C66 + C3237 * C69) * C869)) /
                                C82;
    const double d2neyy011010 =
        (2 * Pi *
         (C3235 * C65 * C868 +
          (C777 * C540 - (C1448 * C1617) / C82 + C771 * C826 + C1442 * C2292 +
           C749 * C827 + C697 * C3202) *
              C65 * C869)) /
        C82;
    const double d2neyy011001 =
        (2 * Pi *
         (C3165 * C65 * C1449 + C2898 * C65 * C1445 +
          (C643 * C904 + C588 * C2499 + C644 * C970 + C589 * C3211) * C65 *
              C1011)) /
        C82;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy110100;
    d2neyy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyy110010;
    d2neyy[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2neyy110001;
    d2neyy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy011100;
    d2neyy[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyy011010;
    d2neyy[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2neyy011001;
    d2neyy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2neyy200100 - 0.5 * d2neyy020100 + d2neyy002100;
    d2neyy[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * d2neyy200010 - 0.5 * d2neyy020010 + d2neyy002010;
    d2neyy[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2neyy200001 - 0.5 * d2neyy020001 + d2neyy002001;
    d2neyy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy101100;
    d2neyy[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyy101010;
    d2neyy[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2neyy101001;
    d2neyy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2neyy200100 - std::sqrt(0.75) * d2neyy020100;
    d2neyy[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * d2neyy200010 - std::sqrt(0.75) * d2neyy020010;
    d2neyy[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2neyy200001 - std::sqrt(0.75) * d2neyy020001;
    const double d2neyz200100 =
        (2 * Pi *
         (C2777 * C70 + C2613 * C73 + C2778 * C75 +
          (C79 * ((-2 * C610) / C82 + C136 * C2779) - (C363 * C143) / C82) *
              C77) *
         C78) /
        C82;
    const double d2neyz200010 =
        (2 * Pi *
         (C2932 * C411 + C2797 * C413 +
          (C504 * C334 + C416 * C2383 + C489 * C449 + C417 * C3035) * C415) *
         C78) /
        C82;
    const double d2neyz200001 =
        (2 * Pi *
         ((C2777 * C411 + C2613 * C413 + C2778 * C415) * C532 +
          (C2649 * C411 + C2650 * C413 + C3192 * C415) * C533)) /
        C82;
    const double d2neyz020100 =
        (2 * Pi *
         (C3134 * C66 + (C665 * C309 - (C583 * C1510) / C82 + C664 * C448 +
                         C584 * C2221 + C656 * C640 + C585 * C3054) *
                            C69) *
         C78) /
        C82;
    const double d2neyz020010 =
        (2 * Pi *
         (C801 * C444 - (C687 * C1940) / C82 + C800 * C447 + C688 * C2219 +
          C792 * C632 + C689 * C2265 + C773 * C767 +
          C690 * (2 * C752 + C2068 +
                  C141 * (C2069 - C1516 +
                          C141 * (C2172 - (C141 * C1946) / C82)))) *
         C65 * C78) /
        C82;
    const double d2neyz020001 =
        (2 * Pi *
         (C3134 * C65 * C532 + (C665 * C551 + C583 * C2236 + C664 * C836 +
                                C584 * C2092 + C656 * C837 + C585 * C3142) *
                                   C65 * C533)) /
        C82;
    const double d2neyz002100 = (2 * Pi *
                                 ((C2777 * C66 + C2613 * C69) * C863 +
                                  (C2649 * C66 + C2650 * C69) * C864 +
                                  (C2707 * C66 + C3206 * C69) * C865)) /
                                C82;
    const double d2neyz002010 =
        (2 * Pi *
         (C2932 * C65 * C863 + C2986 * C65 * C864 +
          (C504 * C917 + C416 * C2311 + C489 * C979 + C417 * C3159) * C65 *
              C865)) /
        C82;
    const double d2neyz002001 =
        (2 * Pi *
         (C2777 * C65 * C1001 + C2649 * C65 * C1002 + C2707 * C65 * C1003 +
          (C79 * (2 * C841 + C2325 + C142 * C2987) - (C1098 * C143) / C82) *
              C65 * C1004)) /
        C82;
    const double d2neyz110100 =
        (2 * Pi *
         (C2997 * C68 + C2880 * C71 +
          (C643 * C334 + C588 * C2383 + C644 * C449 + C589 * C3035) * C74) *
         C78) /
        C82;
    const double d2neyz110010 =
        (2 * Pi *
         (C3169 * C410 + (C777 * C309 - (C1448 * C1510) / C82 + C771 * C448 +
                          C1442 * C2221 + C749 * C640 + C697 * C3054) *
                             C1330) *
         C78) /
        C82;
    const double d2neyz110001 = (2 * Pi *
                                 ((C2997 * C410 + C2880 * C1330) * C532 +
                                  (C3010 * C410 + C3220 * C1330) * C533)) /
                                C82;
    const double d2neyz101100 =
        (2 * Pi *
         ((C2777 * C68 + C2613 * C71 + C2778 * C74) * C868 +
          (C2649 * C68 + C2650 * C71 + C3192 * C74) * C869)) /
        C82;
    const double d2neyz101010 =
        (2 * Pi *
         ((C2932 * C410 + C2797 * C1330) * C868 +
          (C2986 * C410 +
           (C504 * C552 + C416 * C2237 + C489 * C1178 + C417 * C3100) * C1330) *
              C869)) /
        C82;
    const double d2neyz101001 = (2 * Pi *
                                 ((C2777 * C410 + C2613 * C1330) * C1449 +
                                  (C2649 * C410 + C2650 * C1330) * C1445 +
                                  (C2707 * C410 + C3206 * C1330) * C1011)) /
                                C82;
    const double d2neyz011100 = (2 * Pi *
                                 ((C2997 * C66 + C2880 * C69) * C868 +
                                  (C3010 * C66 + C3220 * C69) * C869)) /
                                C82;
    const double d2neyz011010 =
        (2 * Pi *
         (C3169 * C65 * C868 + (C777 * C551 + C1448 * C2236 + C771 * C836 +
                                C1442 * C2092 + C749 * C837 + C697 * C3142) *
                                   C65 * C869)) /
        C82;
    const double d2neyz011001 =
        (2 * Pi *
         (C2997 * C65 * C1449 + C3010 * C65 * C1445 +
          (C643 * C917 + C588 * C2311 + C644 * C979 + C589 * C3159) * C65 *
              C1011)) /
        C82;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz110100;
    d2neyz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyz110010;
    d2neyz[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2neyz110001;
    d2neyz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz011100;
    d2neyz[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyz011010;
    d2neyz[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2neyz011001;
    d2neyz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2neyz200100 - 0.5 * d2neyz020100 + d2neyz002100;
    d2neyz[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * d2neyz200010 - 0.5 * d2neyz020010 + d2neyz002010;
    d2neyz[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2neyz200001 - 0.5 * d2neyz020001 + d2neyz002001;
    d2neyz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz101100;
    d2neyz[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyz101010;
    d2neyz[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2neyz101001;
    d2neyz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2neyz200100 - std::sqrt(0.75) * d2neyz020100;
    d2neyz[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * d2neyz200010 - std::sqrt(0.75) * d2neyz020010;
    d2neyz[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2neyz200001 - std::sqrt(0.75) * d2neyz020001;
    const double d2nezx200100 =
        (2 * Pi *
         (C2780 * C79 * C70 + C2617 * C79 * C73 + C2618 * C79 * C75 +
          (C78 * (2 * C355 + C2194 + C136 * C2922) - (C379 * C144) / C82) *
              C79 * C77)) /
        C82;
    const double d2nezx200010 = (2 * Pi *
                                 ((C2780 * C416 + C2639 * C417) * C411 +
                                  (C2617 * C416 + C2223 * C417) * C413 +
                                  (C2618 * C416 + C3186 * C417) * C415)) /
                                C82;
    const double d2nezx200001 =
        (2 * Pi *
         (C2937 * C79 * C411 + C2938 * C79 * C413 +
          (C561 * C368 + C532 * C2193 + C558 * C539 + C533 * C3124) * C79 *
              C415)) /
        C82;
    const double d2nezx020100 =
        (2 * Pi *
         ((C2780 * C583 + C2639 * C584 + C2820 * C585) * C66 +
          (C2617 * C583 + C2223 * C584 + C3135 * C585) * C69)) /
        C82;
    const double d2nezx020010 =
        (2 * Pi *
         (C2780 * C687 + C2639 * C688 + C2820 * C689 +
          (C78 * ((-2 * C966) / C82 + C141 * C2832) - (C765 * C144) / C82) *
              C690) *
         C65) /
        C82;
    const double d2nezx020001 =
        (2 * Pi *
         (C2937 * C583 + C2838 * C584 +
          (C561 * C629 + C532 * C2461 + C558 * C824 + C533 * C3065) * C585) *
         C65) /
        C82;
    const double d2nezx002100 =
        (2 * Pi *
         (C3150 * C79 * C66 + (C935 * C323 + C863 * C2192 + C934 * C537 +
                               C864 * C2020 + C927 * C890 + C865 * C3151) *
                                  C79 * C69)) /
        C82;
    const double d2nezx002010 =
        (2 * Pi *
         (C3150 * C416 + (C935 * C433 - (C863 * C1585) / C82 + C934 * C823 +
                          C864 * C2298 + C927 * C974 + C865 * C3084) *
                             C417) *
         C65) /
        C82;
    const double d2nezx002001 =
        (2 * Pi *
         (C1111 * C426 - (C1001 * C1947) / C82 + C1110 * C536 + C1002 * C2239 +
          C1102 * C903 + C1003 * C2313 + C1083 * C1075 +
          C1004 * (2 * C1061 + C2102 +
                   C142 * (C2230 - C1525 +
                           C142 * (C2162 - (C142 * C1955) / C82)))) *
         C79 * C65) /
        C82;
    const double d2nezx110100 = (2 * Pi *
                                 ((C2780 * C588 + C2639 * C589) * C68 +
                                  (C2617 * C588 + C2223 * C589) * C71 +
                                  (C2618 * C588 + C3186 * C589) * C74)) /
                                C82;
    const double d2nezx110010 =
        (2 * Pi *
         ((C2780 * C1448 + C2639 * C1442 + C2820 * C697) * C410 +
          (C2617 * C1448 + C2223 * C1442 + C3135 * C697) * C1330)) /
        C82;
    const double d2nezx110001 =
        (2 * Pi *
         ((C2937 * C588 + C2838 * C589) * C410 +
          (C2938 * C588 +
           (C561 * C434 + C532 * C1587 + C558 * C1176 + C533 * C3101) * C589) *
              C1330)) /
        C82;
    const double d2nezx101100 =
        (2 * Pi *
         (C3015 * C79 * C68 + C3016 * C79 * C71 +
          (C915 * C368 + C868 * C2193 + C916 * C539 + C869 * C3124) * C79 *
              C74)) /
        C82;
    const double d2nezx101010 = (2 * Pi *
                                 ((C3015 * C416 + C2910 * C417) * C410 +
                                  (C3016 * C416 + C3221 * C417) * C1330)) /
                                C82;
    const double d2nezx101001 =
        (2 * Pi *
         (C3180 * C79 * C410 + (C1087 * C323 + C1449 * C2192 + C1081 * C537 +
                                C1445 * C2020 + C1060 * C890 + C1011 * C3151) *
                                   C79 * C1330)) /
        C82;
    const double d2nezx011100 = (2 * Pi *
                                 ((C3015 * C588 + C2910 * C589) * C66 +
                                  (C3016 * C588 + C3221 * C589) * C69)) /
                                C82;
    const double d2nezx011010 =
        (2 * Pi *
         (C3015 * C1448 + C2910 * C1442 +
          (C915 * C629 + C868 * C2461 + C916 * C824 + C869 * C3065) * C697) *
         C65) /
        C82;
    const double d2nezx011001 =
        (2 * Pi *
         (C3180 * C588 + (C1087 * C433 - (C1449 * C1585) / C82 + C1081 * C823 +
                          C1445 * C2298 + C1060 * C974 + C1011 * C3084) *
                             C589) *
         C65) /
        C82;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx110100;
    d2nezx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezx110010;
    d2nezx[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nezx110001;
    d2nezx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx011100;
    d2nezx[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezx011010;
    d2nezx[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nezx011001;
    d2nezx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nezx200100 - 0.5 * d2nezx020100 + d2nezx002100;
    d2nezx[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * d2nezx200010 - 0.5 * d2nezx020010 + d2nezx002010;
    d2nezx[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nezx200001 - 0.5 * d2nezx020001 + d2nezx002001;
    d2nezx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx101100;
    d2nezx[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezx101010;
    d2nezx[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nezx101001;
    d2nezx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nezx200100 - std::sqrt(0.75) * d2nezx020100;
    d2nezx[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * d2nezx200010 - std::sqrt(0.75) * d2nezx020010;
    d2nezx[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2nezx200001 - std::sqrt(0.75) * d2nezx020001;
    const double d2nezy200100 =
        (2 * Pi *
         (C2782 * C79 * C70 + C2621 * C79 * C73 + C2783 * C79 * C75 +
          (C78 * ((-2 * C611) / C82 + C136 * C2784) - (C362 * C144) / C82) *
              C79 * C77)) /
        C82;
    const double d2nezy200010 = (2 * Pi *
                                 ((C2782 * C416 + C2640 * C417) * C411 +
                                  (C2621 * C416 + C2641 * C417) * C413 +
                                  (C2783 * C416 + C3187 * C417) * C415)) /
                                C82;
    const double d2nezy200001 =
        (2 * Pi *
         (C2939 * C79 * C411 + C2802 * C79 * C413 +
          (C561 * C329 + C532 * C2391 + C558 * C542 + C533 * C3044) * C79 *
              C415)) /
        C82;
    const double d2nezy020100 =
        (2 * Pi *
         ((C2782 * C583 + C2640 * C584 + C2671 * C585) * C66 +
          (C2621 * C583 + C2641 * C584 + C3197 * C585) * C69)) /
        C82;
    const double d2nezy020010 =
        (2 * Pi *
         (C2782 * C687 + C2640 * C688 + C2671 * C689 +
          (C78 * (2 * C753 + C2282 + C141 * C2960) - (C788 * C144) / C82) *
              C690) *
         C65) /
        C82;
    const double d2nezy020001 =
        (2 * Pi *
         (C2939 * C583 + C2967 * C584 +
          (C561 * C645 + C532 * C2269 + C558 * C827 + C533 * C3143) * C585) *
         C65) /
        C82;
    const double d2nezy002100 =
        (2 * Pi *
         (C3152 * C79 * C66 +
          (C935 * C303 - (C863 * C1529) / C82 + C934 * C541 + C864 * C2244 +
           C927 * C892 + C865 * C3075) *
              C79 * C69)) /
        C82;
    const double d2nezy002010 =
        (2 * Pi *
         (C3152 * C416 + (C935 * C471 + C863 * C2224 + C934 * C826 +
                          C864 * C2097 + C927 * C970 + C865 * C3160) *
                             C417) *
         C65) /
        C82;
    const double d2nezy002001 =
        (2 * Pi *
         (C1111 * C438 - (C1001 * C1956) / C82 + C1110 * C540 + C1002 * C2242 +
          C1102 * C904 + C1003 * C2315 + C1083 * C1076 +
          C1004 * (2 * C1062 + C2134 +
                   C142 * (C2294 - C1535 +
                           C142 * (C2167 - (C142 * C1962) / C82)))) *
         C79 * C65) /
        C82;
    const double d2nezy110100 = (2 * Pi *
                                 ((C2782 * C588 + C2640 * C589) * C68 +
                                  (C2621 * C588 + C2641 * C589) * C71 +
                                  (C2783 * C588 + C3187 * C589) * C74)) /
                                C82;
    const double d2nezy110010 =
        (2 * Pi *
         ((C2782 * C1448 + C2640 * C1442 + C2671 * C697) * C410 +
          (C2621 * C1448 + C2641 * C1442 + C3197 * C697) * C1330)) /
        C82;
    const double d2nezy110001 =
        (2 * Pi *
         ((C2939 * C588 + C2967 * C589) * C410 +
          (C2802 * C588 +
           (C561 * C472 + C532 * C2225 + C558 * C1174 + C533 * C3102) * C589) *
              C1330)) /
        C82;
    const double d2nezy101100 =
        (2 * Pi *
         (C3017 * C79 * C68 + C2907 * C79 * C71 +
          (C915 * C329 + C868 * C2391 + C916 * C542 + C869 * C3044) * C79 *
              C74)) /
        C82;
    const double d2nezy101010 = (2 * Pi *
                                 ((C3017 * C416 + C3019 * C417) * C410 +
                                  (C2907 * C416 + C3222 * C417) * C1330)) /
                                C82;
    const double d2nezy101001 =
        (2 * Pi *
         (C3181 * C79 * C410 +
          (C1087 * C303 - (C1449 * C1529) / C82 + C1081 * C541 + C1445 * C2244 +
           C1060 * C892 + C1011 * C3075) *
              C79 * C1330)) /
        C82;
    const double d2nezy011100 = (2 * Pi *
                                 ((C3017 * C588 + C3019 * C589) * C66 +
                                  (C2907 * C588 + C3222 * C589) * C69)) /
                                C82;
    const double d2nezy011010 =
        (2 * Pi *
         (C3017 * C1448 + C3019 * C1442 +
          (C915 * C645 + C868 * C2269 + C916 * C827 + C869 * C3143) * C697) *
         C65) /
        C82;
    const double d2nezy011001 =
        (2 * Pi *
         (C3181 * C588 + (C1087 * C471 + C1449 * C2224 + C1081 * C826 +
                          C1445 * C2097 + C1060 * C970 + C1011 * C3160) *
                             C589) *
         C65) /
        C82;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy110100;
    d2nezy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezy110010;
    d2nezy[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nezy110001;
    d2nezy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy011100;
    d2nezy[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezy011010;
    d2nezy[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nezy011001;
    d2nezy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nezy200100 - 0.5 * d2nezy020100 + d2nezy002100;
    d2nezy[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * d2nezy200010 - 0.5 * d2nezy020010 + d2nezy002010;
    d2nezy[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nezy200001 - 0.5 * d2nezy020001 + d2nezy002001;
    d2nezy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy101100;
    d2nezy[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezy101010;
    d2nezy[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nezy101001;
    d2nezy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nezy200100 - std::sqrt(0.75) * d2nezy020100;
    d2nezy[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * d2nezy200010 - std::sqrt(0.75) * d2nezy020010;
    d2nezy[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2nezy200001 - std::sqrt(0.75) * d2nezy020001;
    const double d2nezz200100 =
        (2 * Pi *
         (C3025 * C79 * C70 + C2625 * C79 * C73 + C2786 * C79 * C75 +
          (C78 * ((-2 * C613) / C82 + C136 * C3026) - (C363 * C144) / C82) *
              C79 * C77)) /
        C82;
    const double d2nezz200010 = (2 * Pi *
                                 ((C3025 * C416 + C2642 * C417) * C411 +
                                  (C2625 * C416 + C2643 * C417) * C413 +
                                  (C2786 * C416 + C3226 * C417) * C415)) /
                                C82;
    const double d2nezz200001 =
        (2 * Pi *
         (C3125 * C79 * C411 + C2804 * C79 * C413 +
          (C561 * C334 + C532 * C2395 + C558 * C553 + C533 * C3193) * C79 *
              C415)) /
        C82;
    const double d2nezz020100 =
        (2 * Pi *
         ((C3025 * C583 + C2642 * C584 + C2823 * C585) * C66 +
          (C2625 * C583 + C2643 * C584 + C3229 * C585) * C69)) /
        C82;
    const double d2nezz020010 =
        (2 * Pi *
         (C3025 * C687 + C2642 * C688 + C2823 * C689 +
          (C78 * ((-2 * C967) / C82 + C141 * C3059) - (C767 * C144) / C82) *
              C690) *
         C65) /
        C82;
    const double d2nezz020001 =
        (2 * Pi *
         (C3125 * C583 + C2840 * C584 +
          (C561 * C632 + C532 * C2464 + C558 * C837 + C533 * C3203) * C585) *
         C65) /
        C82;
    const double d2nezz002100 =
        (2 * Pi *
         (C3232 * C79 * C66 +
          (C935 * C309 - (C863 * C1538) / C82 + C934 * C552 + C864 * C2247 +
           C927 * C918 + C865 * C3208) *
              C79 * C69)) /
        C82;
    const double d2nezz002010 =
        (2 * Pi *
         (C3232 * C416 + (C935 * C447 - (C863 * C1595) / C82 + C934 * C836 +
                          C864 * C2301 + C927 * C979 + C865 * C3212) *
                             C417) *
         C65) /
        C82;
    const double d2nezz002001 =
        (2 * Pi *
         (C1111 * C444 - (C1001 * C2393) / C82 + C1110 * C551 + C1002 * C2245 +
          C1102 * C917 + C1003 * C2512 + C1083 * C1098 +
          C1004 * (2 * C1063 + C2136 -
                   (C142 * (C216 - C1036) - C283 + (C1020 * ae) / C82) +
                   C142 * (C2094 - C1544 + C1036 - C216 +
                           C142 * (C2172 + C285 - (C142 * C2396) / C82)))) *
         C79 * C65) /
        C82;
    const double d2nezz110100 = (2 * Pi *
                                 ((C3025 * C588 + C2642 * C589) * C68 +
                                  (C2625 * C588 + C2643 * C589) * C71 +
                                  (C2786 * C588 + C3226 * C589) * C74)) /
                                C82;
    const double d2nezz110010 =
        (2 * Pi *
         ((C3025 * C1448 + C2642 * C1442 + C2823 * C697) * C410 +
          (C2625 * C1448 + C2643 * C1442 + C3229 * C697) * C1330)) /
        C82;
    const double d2nezz110001 =
        (2 * Pi *
         ((C3125 * C588 + C2840 * C589) * C410 +
          (C2804 * C588 +
           (C561 * C448 - (C532 * C1597) / C82 + C558 * C1178 + C533 * C3176) *
               C589) *
              C1330)) /
        C82;
    const double d2nezz101100 =
        (2 * Pi *
         (C3177 * C79 * C68 + C2909 * C79 * C71 +
          (C915 * C334 + C868 * C2395 + C916 * C553 + C869 * C3193) * C79 *
              C74)) /
        C82;
    const double d2nezz101010 = (2 * Pi *
                                 ((C3177 * C416 + C2913 * C417) * C410 +
                                  (C2909 * C416 + C3238 * C417) * C1330)) /
                                C82;
    const double d2nezz101001 =
        (2 * Pi *
         (C3239 * C79 * C410 +
          (C1087 * C309 - (C1449 * C1538) / C82 + C1081 * C552 + C1445 * C2247 +
           C1060 * C918 + C1011 * C3208) *
              C79 * C1330)) /
        C82;
    const double d2nezz011100 = (2 * Pi *
                                 ((C3177 * C588 + C2913 * C589) * C66 +
                                  (C2909 * C588 + C3238 * C589) * C69)) /
                                C82;
    const double d2nezz011010 =
        (2 * Pi *
         (C3177 * C1448 + C2913 * C1442 +
          (C915 * C632 + C868 * C2464 + C916 * C837 + C869 * C3203) * C697) *
         C65) /
        C82;
    const double d2nezz011001 =
        (2 * Pi *
         (C3239 * C588 + (C1087 * C447 - (C1449 * C1595) / C82 + C1081 * C836 +
                          C1445 * C2301 + C1060 * C979 + C1011 * C3212) *
                             C589) *
         C65) /
        C82;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz110100;
    d2nezz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezz110010;
    d2nezz[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nezz110001;
    d2nezz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz011100;
    d2nezz[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezz011010;
    d2nezz[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nezz011001;
    d2nezz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * d2nezz200100 - 0.5 * d2nezz020100 + d2nezz002100;
    d2nezz[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * d2nezz200010 - 0.5 * d2nezz020010 + d2nezz002010;
    d2nezz[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nezz200001 - 0.5 * d2nezz020001 + d2nezz002001;
    d2nezz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz101100;
    d2nezz[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezz101010;
    d2nezz[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * d2nezz101001;
    d2nezz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * d2nezz200100 - std::sqrt(0.75) * d2nezz020100;
    d2nezz[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * d2nezz200010 - std::sqrt(0.75) * d2nezz020010;
    d2nezz[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * d2nezz200001 - std::sqrt(0.75) * d2nezz020001;
}
