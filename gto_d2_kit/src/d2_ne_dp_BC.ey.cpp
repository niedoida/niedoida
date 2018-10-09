/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_dp_BC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_21_23(double ae,
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
    const double C1326 = ae + be;
    const double C1325 = ae * be;
    const double C1324 = xA - xB;
    const double C1330 = 2 * C1326;
    const double C1329 = C1324 * be;
    const double C1328 = C1324 * ae;
    const double C1327 = std::pow(C1324, 2);
    const double C1331 = C1327 * C1325;
    const double C1332 = C1331 / C1326;
    const double C1333 = -C1332;
    const double C1334 = std::exp(C1333);
    const double C1335 = C1334 * C1328;
    const double C1351 = std::pow(C1326, 2);
    const double C1350 = std::pow(C1330, -1);
    const double C1352 = C1350 * C1334;
    const double C1356 = C1352 * C1329;
    const double C1355 = 2 * C1351;
    const double C1368 = yA - yB;
    const double C1373 = zA - zB;
    const double C1378 = std::pow(C1368, 2);
    const double C1379 = C1378 * C1325;
    const double C1380 = C1379 / C1326;
    const double C1381 = -C1380;
    const double C1382 = std::exp(C1381);
    const double C1392 = C1368 * be;
    const double C1391 = C1368 * ae;
    const double C1393 = C1382 * C1391;
    const double C1395 = C1350 * C1382;
    const double C1397 = C1395 * C1392;
    const double C1408 = std::pow(C1373, 2);
    const double C1409 = C1408 * C1325;
    const double C1410 = C1409 / C1326;
    const double C1411 = -C1410;
    const double C1412 = std::exp(C1411);
    const double C1422 = C1373 * be;
    const double C1421 = C1373 * ae;
    const double C1423 = C1412 * C1421;
    const double C1425 = C1350 * C1412;
    const double C1427 = C1425 * C1422;
    const double C1457 = C1427 / C1326;
    const double C1456 = C1423 / C1355;
    const double C1455 = C1423 * C1422;
    const double C1454 = C1412 / C1330;
    const double C1453 = C1373 * be;
    const double C1452 = C1397 / C1326;
    const double C1451 = C1393 / C1355;
    const double C1450 = C1393 * C1392;
    const double C1449 = C1382 / C1330;
    const double C1448 = C1368 * be;
    const double C1447 = std::pow(C1373, 2);
    const double C1446 = std::pow(C1368, 2);
    const double C1445 = std::pow(C1330, -2);
    const double C1444 = 4 * C1351;
    const double C1443 = std::pow(C1330, -1);
    const double C1442 = std::pow(C1326, 2);
    const double C1441 = C1335 * C1329;
    const double C1440 = C1334 / C1330;
    const double C1439 = C1334 * C1329;
    const double C1438 = C1335 / C1326;
    const double C1468 = C1456 - C1457;
    const double C1467 = C1455 / C1351;
    const double C1466 = C1412 * C1453;
    const double C1465 = C1451 - C1452;
    const double C1464 = C1450 / C1351;
    const double C1463 = C1382 * C1448;
    const double C1462 = C1447 * C1325;
    const double C1461 = C1446 * C1325;
    const double C1460 = C1443 * C1334;
    const double C1459 = C1441 / C1442;
    const double C1458 = C1439 / C1326;
    const double C1473 = C1454 - C1467;
    const double C1472 = C1449 - C1464;
    const double C1471 = C1462 / C1326;
    const double C1470 = C1461 / C1326;
    const double C1469 = C1440 - C1459;
    const double C1475 = -C1471;
    const double C1474 = -C1470;
    const double C1477 = std::exp(C1475);
    const double C1476 = std::exp(C1474);
    const double C59 = (C1438 - C1458) / C1330 - (C1469 * C1329) / C1326;
    const double C71 = C1335 / (2 * C1442) - (C1460 * C1329) / C1326;
    const double C73 =
        (2 * C1352 + C1440 - C1441 / C1351) / C1330 -
        ((C1335 / (2 * C1351) - (C1352 * C1329) / C1326) * C1329) / C1326;
    const double C74 = C1352 / C1330;
    const double C75 = (C1335 / C1355 - C1356 / C1326) / C1330 - C1356 / C1355;
    const double C77 = C1352 / C1444;
    const double C78 = std::exp(-(std::pow(zA - zB, 2) * C1325) / C1326);
    const double C79 = std::exp(-(std::pow(yA - yB, 2) * C1325) / C1326);
    const double C410 = (C1334 * std::pow(C1329, 2)) / C1351 + C1440;
    const double C411 = -C1458;
    const double C413 = (-2 * C1350 * C1439) / C1326;
    const double C415 = C1445 * C1334;
    const double C416 = (C1476 * C1368 * ae) / C1326;
    const double C417 = C1350 * C1476;
    const double C532 = (C1477 * C1373 * ae) / C1326;
    const double C533 = C1350 * C1477;
    const double C583 = (C1382 * std::pow(C1448, 2)) / C1351 + C1449;
    const double C584 = (-2 * C1350 * C1463) / C1326;
    const double C585 = C1445 * C1382;
    const double C588 = -C1463 / C1326;
    const double C589 = C1350 * C1382;
    const double C689 = (C1393 / C1326 - (C1382 * C1392) / C1326) / C1330 -
                        (C1472 * C1392) / C1326;
    const double C690 = (2 * C1395 + C1472) / C1330 -
                        ((C1451 - (C1395 * C1392) / C1326) * C1392) / C1326;
    const double C691 = C1465 / C1330 - C1397 / C1355;
    const double C692 = C1395 / C1444;
    const double C699 = C1395 / C1330;
    const double C867 = (C1412 * std::pow(C1453, 2)) / C1351 + C1454;
    const double C868 = (-2 * C1350 * C1466) / C1326;
    const double C869 = C1445 * C1412;
    const double C872 = -C1466 / C1326;
    const double C873 = C1350 * C1412;
    const double C1005 = (C1423 / C1326 - (C1412 * C1422) / C1326) / C1330 -
                         (C1473 * C1422) / C1326;
    const double C1006 = (2 * C1425 + C1473) / C1330 -
                         ((C1456 - (C1425 * C1422) / C1326) * C1422) / C1326;
    const double C1007 = C1468 / C1330 - C1427 / C1355;
    const double C1008 = C1425 / C1444;
    const double C1015 = C1425 / C1330;
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
    const double C90 = 0 * ae;
    const double C89 = ae * be;
    const double C88 = 0 * be;
    const double C87 = 0 * be;
    const double C86 = 0 * be;
    const double C85 = xA - xB;
    const double C84 = bs[1];
    const double C83 = bs[2];
    const double C82 = ae + be;
    const double C81 = be * xB;
    const double C80 = ae * xA;
    const double C115 = C89 * C101;
    const double C114 = C89 * C100;
    const double C113 = C98 + C99;
    const double C112 = C96 + C97;
    const double C111 = C94 / C82;
    const double C110 = C91 / C82;
    const double C109 = C90 / C82;
    const double C108 = C89 * C85;
    const double C107 = C85 * C88;
    const double C106 = C88 / C82;
    const double C105 = std::pow(C82, 2);
    const double C104 = C85 * C86;
    const double C103 = 2 * C82;
    const double C102 = C80 + C81;
    const double C128 = C115 * C78;
    const double C127 = C114 * C79;
    const double C126 = C113 / C82;
    const double C125 = C112 / C82;
    const double C124 = std::pow(C103, 4);
    const double C123 = -C103;
    const double C122 = C108 * C1334;
    const double C121 = C107 / C82;
    const double C120 = 2 * C105;
    const double C119 = C104 / C82;
    const double C118 = C84 * C103;
    const double C117 = std::pow(C103, 2);
    const double C116 = C102 / C82;
    const double C144 = 2 * C128;
    const double C143 = 2 * C127;
    const double C142 = C126 - zC;
    const double C141 = C125 - yC;
    const double C140 = std::pow(C123, 5);
    const double C139 = C93 * C124;
    const double C138 = std::pow(C123, 3);
    const double C137 = C83 * C117;
    const double C136 = C122 / C105;
    const double C135 = C88 / C120;
    const double C134 = 2 * C122;
    const double C133 = C86 / C120;
    const double C132 = 0 - C121;
    const double C131 = C87 / C120;
    const double C130 = 0 - C119;
    const double C129 = C116 - xC;
    const double C165 = std::pow(C142, 2);
    const double C164 = C142 * C141;
    const double C163 = be * C142;
    const double C162 = C142 * C129;
    const double C161 = C141 * C142;
    const double C160 = std::pow(C141, 2);
    const double C159 = be * C141;
    const double C158 = C141 * C129;
    const double C157 = C82 * C142;
    const double C156 = C129 * C142;
    const double C155 = C82 * C141;
    const double C154 = C129 * C141;
    const double C153 = C92 * C138;
    const double C152 = C129 * C137;
    const double C151 = be * C129;
    const double C150 = C82 * C129;
    const double C149 = C109 - C136;
    const double C148 = C85 * C134;
    const double C147 = C132 * ae;
    const double C146 = C130 * ae;
    const double C145 = std::pow(C129, 2);
    const double C203 = C165 * C93;
    const double C202 = C165 * C92;
    const double C201 = C164 * be;
    const double C200 = C163 * C93;
    const double C199 = C163 * C92;
    const double C198 = C162 * be;
    const double C197 = C161 * be;
    const double C196 = C160 * C93;
    const double C195 = C160 * C92;
    const double C194 = C159 * C93;
    const double C193 = C159 * C92;
    const double C192 = C158 * be;
    const double C191 = C157 * C93;
    const double C190 = C157 * C92;
    const double C189 = C157 * C83;
    const double C188 = C157 * C84;
    const double C187 = C156 * be;
    const double C186 = C155 * C93;
    const double C185 = C155 * C92;
    const double C184 = C155 * C83;
    const double C183 = C155 * C84;
    const double C182 = C154 * be;
    const double C181 = C151 * C93;
    const double C180 = C153 * be;
    const double C179 = C153 * C145;
    const double C178 = C129 * C153;
    const double C177 = C150 * C93;
    const double C176 = C145 * C93;
    const double C175 = C151 * C92;
    const double C174 = C150 * C92;
    const double C173 = C145 * C92;
    const double C172 = C150 * C83;
    const double C171 = C149 / C103;
    const double C170 = C150 * C84;
    const double C169 = C85 * C149;
    const double C168 = C148 / C82;
    const double C167 = C147 / C82;
    const double C166 = C146 / C82;
    const double C243 = C203 * C124;
    const double C242 = C202 * C138;
    const double C241 = C93 * C201;
    const double C240 = C92 * C201;
    const double C239 = C200 * C138;
    const double C238 = C93 * C198;
    const double C237 = C199 * C117;
    const double C236 = C92 * C198;
    const double C235 = C93 * C197;
    const double C234 = C92 * C197;
    const double C233 = C196 * C124;
    const double C232 = C195 * C138;
    const double C231 = C194 * C138;
    const double C230 = C93 * C192;
    const double C229 = C193 * C117;
    const double C228 = C92 * C192;
    const double C227 = C191 * C138;
    const double C226 = C93 * C187;
    const double C225 = C190 * C117;
    const double C224 = C92 * C187;
    const double C223 = C189 * C103;
    const double C222 = C186 * C138;
    const double C221 = C93 * C182;
    const double C220 = C185 * C117;
    const double C219 = C92 * C182;
    const double C218 = C184 * C103;
    const double C217 = C181 * C138;
    const double C216 = C180 / C82;
    const double C215 = C137 + C179;
    const double C214 = C177 * C138;
    const double C213 = C176 * C124;
    const double C212 = C175 * C117;
    const double C211 = C174 * C117;
    const double C210 = C173 * C138;
    const double C209 = C172 * C103;
    const double C208 = C171 - C110;
    const double C207 = C169 + C1460;
    const double C206 = C1334 - C168;
    const double C205 = C167 - C133;
    const double C204 = C166 - C131;
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
    const double C273 = C227 * C145;
    const double C272 = C124 * C226;
    const double C271 = C225 * be;
    const double C270 = 2 * C225;
    const double C269 = C225 * C145;
    const double C268 = C138 * C224;
    const double C267 = -2 * C223;
    const double C266 = C222 * C145;
    const double C265 = C124 * C221;
    const double C264 = C220 * be;
    const double C263 = 2 * C220;
    const double C262 = C220 * C145;
    const double C261 = C138 * C219;
    const double C260 = -2 * C218;
    const double C259 = 2 * C217;
    const double C258 = 2 * C214;
    const double C257 = C208 / C103;
    const double C256 = C153 + C213;
    const double C255 = C211 * be;
    const double C254 = 2 * C212;
    const double C253 = 2 * C211;
    const double C252 = C85 * C208;
    const double C251 = C137 + C210;
    const double C250 = -2 * C209;
    const double C249 = 2 * C208;
    const double C248 = C207 * be;
    const double C247 = C206 * ae;
    const double C246 = C205 / C103;
    const double C245 = C85 * C205;
    const double C244 = C204 + C106;
    const double C320 = C289 * be;
    const double C319 = C288 * be;
    const double C318 = C129 * C284;
    const double C317 = C279 * be;
    const double C316 = C278 * be;
    const double C315 = C129 * C276;
    const double C314 = 2 * C273;
    const double C313 = C129 * C272;
    const double C312 = 2 * C271;
    const double C311 = C129 * C270;
    const double C310 = 2 * C269;
    const double C309 = C129 * C267;
    const double C308 = 2 * C266;
    const double C307 = C129 * C265;
    const double C306 = 2 * C264;
    const double C305 = C129 * C263;
    const double C304 = 2 * C262;
    const double C303 = C129 * C260;
    const double C302 = C129 * C259;
    const double C301 = C129 * C258;
    const double C300 = C111 - C257;
    const double C299 = C256 * be;
    const double C298 = 2 * C255;
    const double C297 = C129 * C253;
    const double C296 = C252 + C74;
    const double C295 = C251 * be;
    const double C294 = C129 * C250;
    const double C293 = C248 / C82;
    const double C292 = C247 / C82;
    const double C291 = C245 + 0;
    const double C290 = C244 / C103;
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
    const double C327 = C129 * C299;
    const double C326 = C298 / C82;
    const double C325 = C297 - C137;
    const double C324 = C296 * be;
    const double C323 = C294 + C118;
    const double C322 = C292 - C135;
    const double C321 = C291 * be;
    const double C355 = C283 - C340;
    const double C354 = C275 - C339;
    const double C353 = C129 * C338;
    const double C352 = C335 - C336;
    const double C351 = C129 * C333;
    const double C350 = C330 - C331;
    const double C349 = C129 * C328;
    const double C348 = 2 * C325;
    const double C347 = C327 / C82;
    const double C346 = C326 + C254;
    const double C345 = C129 * C325;
    const double C344 = C324 / C82;
    const double C343 = C322 / C103;
    const double C342 = C85 * C322;
    const double C341 = C321 / C82;
    const double C363 = C337 + C353;
    const double C362 = C332 + C351;
    const double C361 = C253 + C349;
    const double C360 = C346 - C347;
    const double C359 = C250 + C345;
    const double C358 = C343 - C293;
    const double C357 = C342 + C1438;
    const double C356 = C290 - C341;
    const double C369 = C361 - C178;
    const double C368 = C359 - C152;
    const double C367 = C358 / C103;
    const double C366 = C85 * C358;
    const double C365 = C357 * be;
    const double C364 = C356 / C103;
    const double C373 = C129 * C369;
    const double C372 = C344 - C367;
    const double C371 = C366 + C71;
    const double C370 = C365 / C82;
    const double C376 = C348 + C373;
    const double C375 = C371 * be;
    const double C374 = C246 - C370;
    const double C379 = C376 - C215;
    const double C378 = C375 / C82;
    const double C377 = C374 + C149;
    const double C381 = C377 / C103;
    const double C380 = C85 * C377;
    const double C383 = C381 - C378;
    const double C382 = C380 + C1469;
    const double C385 = C383 + C249;
    const double C384 = C382 * be;
    const double C386 = C384 / C82;
    const double C387 = C364 - C386;
    const double C388 = C387 + C358;
    const double C457 = C129 * C283;
    const double C456 = C163 * C83;
    const double C455 = C129 * C275;
    const double C454 = C159 * C83;
    const double C453 = 0 * ae;
    const double C452 = C127 / C105;
    const double C451 = C100 * C143;
    const double C450 = 0 * be;
    const double C449 = C141 * C338;
    const double C448 = C141 * C311;
    const double C447 = C141 * C267;
    const double C446 = C311 * be;
    const double C445 = C223 * be;
    const double C444 = 2 * C188;
    const double C443 = C141 * C333;
    const double C442 = C141 * C305;
    const double C441 = C141 * C260;
    const double C440 = C305 * be;
    const double C439 = C218 * be;
    const double C438 = 2 * C183;
    const double C437 = C216 - C302;
    const double C436 = C141 * C369;
    const double C435 = C141 * C299;
    const double C434 = C141 * C325;
    const double C433 = C141 * C250;
    const double C432 = C137 * be;
    const double C431 = C129 * C254;
    const double C430 = C325 * be;
    const double C429 = 0 * be;
    const double C428 = C151 * C83;
    const double C427 = C209 * be;
    const double C426 = 2 * C170;
    const double C425 = 0 * be;
    const double C424 = C134 / C82;
    const double C423 = C206 * be;
    const double C422 = -C106;
    const double C421 = C132 * be;
    const double C420 = C86 / C82;
    const double C480 = C456 * C103;
    const double C479 = C454 * C103;
    const double C478 = C453 / C82;
    const double C477 = C451 / C82;
    const double C476 = C450 / C120;
    const double C475 = C446 / C82;
    const double C474 = -2 * C445;
    const double C473 = C443 - C215;
    const double C472 = C442 - C152;
    const double C471 = C441 + C118;
    const double C470 = C440 / C82;
    const double C469 = -2 * C439;
    const double C468 = C432 / C82;
    const double C467 = C430 / C82;
    const double C466 = C429 / C82;
    const double C465 = C428 * C103;
    const double C464 = -2 * C427;
    const double C463 = C425 / C82;
    const double C462 = -C424;
    const double C461 = C423 / C82;
    const double C460 = C422 / C103;
    const double C459 = C421 / C82;
    const double C458 = -C420;
    const double C490 = -2 * C480;
    const double C489 = C452 - C478;
    const double C488 = C79 - C477;
    const double C487 = C474 / C82;
    const double C486 = C469 / C82;
    const double C485 = C431 - C468;
    const double C484 = C464 / C82;
    const double C483 = C462 / C103;
    const double C482 = C460 - C461;
    const double C481 = C458 / C103;
    const double C495 = C488 * ae;
    const double C494 = C482 / C103;
    const double C493 = C483 - C463;
    const double C492 = C85 * C482;
    const double C491 = C481 - C459;
    const double C500 = C495 / C82;
    const double C499 = C493 / C103;
    const double C498 = C85 * C493;
    const double C497 = C492 + C411;
    const double C496 = C491 / C103;
    const double C504 = C476 - C500;
    const double C503 = C466 - C499;
    const double C502 = C498 + C1352;
    const double C501 = C497 * be;
    const double C506 = C502 * be;
    const double C505 = C501 / C82;
    const double C508 = C506 / C82;
    const double C507 = C496 - C505;
    const double C510 = C508 - C494;
    const double C509 = C507 + C493;
    const double C550 = 0 * ae;
    const double C549 = C128 / C105;
    const double C548 = C101 * C144;
    const double C547 = 0 * be;
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
    const double C556 = C550 / C82;
    const double C555 = C548 / C82;
    const double C554 = C547 / C120;
    const double C553 = C545 - C215;
    const double C552 = C544 - C152;
    const double C551 = C543 + C118;
    const double C558 = C549 - C556;
    const double C557 = C78 - C555;
    const double C559 = C557 * ae;
    const double C560 = C559 / C82;
    const double C561 = C554 - C560;
    const double C615 = C129 * C320;
    const double C614 = C129 * C285;
    const double C613 = C129 * C287;
    const double C612 = C129 * C281;
    const double C611 = C129 * C277;
    const double C610 = C129 * C317;
    const double C609 = 0 * be;
    const double C608 = 0 * be;
    const double C607 = C143 / C82;
    const double C606 = C488 * be;
    const double C605 = C450 / C82;
    const double C604 = C100 * C450;
    const double C603 = 0 * be;
    const double C602 = 2 * C227;
    const double C601 = C225 * C160;
    const double C600 = C141 * C178;
    const double C599 = 2 * C222;
    const double C598 = C141 * C137;
    const double C597 = C141 * C263;
    const double C596 = C328 * C160;
    const double C595 = C211 * C160;
    const double C594 = C141 * C254;
    const double C593 = C141 * C253;
    const double C592 = C136 - C109;
    const double C591 = C135 - C292;
    const double C629 = C609 / C82;
    const double C628 = C608 / C82;
    const double C627 = -C607;
    const double C626 = C606 / C82;
    const double C625 = -C605;
    const double C624 = C604 / C82;
    const double C623 = C603 / C82;
    const double C622 = C129 * C602;
    const double C621 = 2 * C601;
    const double C620 = C129 * C599;
    const double C619 = C597 - C137;
    const double C618 = C325 + C596;
    const double C617 = 2 * C595;
    const double C616 = C593 * be;
    const double C639 = C627 / C103;
    const double C638 = C625 / C103;
    const double C637 = 0 - C624;
    const double C636 = -C623;
    const double C635 = C622 * C160;
    const double C634 = C267 + C621;
    const double C633 = C141 * C620;
    const double C632 = C141 * C619;
    const double C631 = C250 + C617;
    const double C630 = C616 / C82;
    const double C646 = C639 - C628;
    const double C645 = C638 - C626;
    const double C644 = C637 * be;
    const double C643 = C636 / C103;
    const double C642 = C311 + C635;
    const double C641 = C633 - C178;
    const double C640 = C260 + C632;
    const double C653 = C646 / C103;
    const double C652 = C645 / C103;
    const double C651 = C100 * C646;
    const double C650 = C100 * C645;
    const double C649 = C644 / C82;
    const double C648 = C141 * C641;
    const double C647 = C640 - C598;
    const double C658 = C629 - C653;
    const double C657 = C651 + C589;
    const double C656 = C650 + C588;
    const double C655 = C643 - C649;
    const double C654 = C305 + C648;
    const double C662 = C657 * be;
    const double C661 = C656 * be;
    const double C660 = C655 / C103;
    const double C659 = C654 - C600;
    const double C664 = C662 / C82;
    const double C663 = C661 / C82;
    const double C666 = C664 - C652;
    const double C665 = C660 - C663;
    const double C667 = C665 + C646;
    const double C723 = C141 * C287;
    const double C722 = C141 * C281;
    const double C721 = C141 * C277;
    const double C720 = C141 * C317;
    const double C719 = C330 + C275;
    const double C718 = 0 * be;
    const double C717 = C141 * C276;
    const double C716 = 0 * be;
    const double C715 = C478 - C452;
    const double C714 = C500 - C476;
    const double C713 = C603 / C120;
    const double C712 = C637 * ae;
    const double C711 = 0 * be;
    const double C710 = C100 * C603;
    const double C709 = C227 * C160;
    const double C708 = C141 * C270;
    const double C707 = C153 * C160;
    const double C706 = C141 * C153;
    const double C705 = C141 * C599;
    const double C704 = 2 * C619;
    const double C703 = C141 * C265;
    const double C702 = C214 * C160;
    const double C701 = 2 * C593;
    const double C742 = C723 / C82;
    const double C741 = C722 / C82;
    const double C740 = C720 / C82;
    const double C739 = C718 / C82;
    const double C738 = C717 / C82;
    const double C737 = C716 / C82;
    const double C736 = C715 / C103;
    const double C735 = C100 * C715;
    const double C734 = C714 / C103;
    const double C733 = C100 * C714;
    const double C732 = C712 / C82;
    const double C731 = C711 / C120;
    const double C730 = C710 / C82;
    const double C729 = 2 * C709;
    const double C728 = 2 * C708;
    const double C727 = C137 + C707;
    const double C726 = C705 - C153;
    const double C725 = C703 / C82;
    const double C724 = 2 * C702;
    const double C755 = C283 - C742;
    const double C754 = C335 - C741;
    const double C753 = C719 - C740;
    const double C752 = C326 - C738;
    const double C751 = C736 - C737;
    const double C750 = C735 + C417;
    const double C749 = C733 + C416;
    const double C748 = C732 - C713;
    const double C747 = 0 - C730;
    const double C746 = C270 + C729;
    const double C745 = C141 * C726;
    const double C744 = C254 - C725;
    const double C743 = C253 + C724;
    const double C766 = C751 / C103;
    const double C765 = C100 * C751;
    const double C764 = 2 * C751;
    const double C763 = C750 * be;
    const double C762 = C749 * be;
    const double C761 = C748 / C103;
    const double C760 = C100 * C748;
    const double C759 = C747 * ae;
    const double C758 = C141 * C746;
    const double C757 = C263 + C745;
    const double C756 = C141 * C743;
    const double C775 = C739 - C766;
    const double C774 = C765 + C699;
    const double C773 = C763 / C82;
    const double C772 = C762 / C82;
    const double C771 = C760 + 0;
    const double C770 = C759 / C82;
    const double C769 = C728 + C758;
    const double C768 = C757 - C706;
    const double C767 = C701 + C756;
    const double C781 = C774 * be;
    const double C780 = C734 - C773;
    const double C779 = C761 - C772;
    const double C778 = C771 * be;
    const double C777 = C770 - C731;
    const double C776 = C141 * C768;
    const double C788 = C780 / C103;
    const double C787 = C781 / C82;
    const double C786 = C100 * C780;
    const double C785 = C779 + C715;
    const double C784 = C778 / C82;
    const double C783 = C777 + C605;
    const double C782 = C704 + C776;
    const double C794 = C787 - C788;
    const double C793 = C786 + C1465;
    const double C792 = C785 / C103;
    const double C791 = C100 * C785;
    const double C790 = C783 / C103;
    const double C789 = C782 - C727;
    const double C797 = C793 * be;
    const double C796 = C791 + C1472;
    const double C795 = C790 - C784;
    const double C800 = C797 / C82;
    const double C799 = C796 * be;
    const double C798 = C795 / C103;
    const double C802 = C792 - C800;
    const double C801 = C799 / C82;
    const double C804 = C802 + C764;
    const double C803 = C798 - C801;
    const double C805 = C803 + C780;
    const double C839 = C141 * C283;
    const double C838 = C142 * C281;
    const double C837 = C708 * be;
    const double C836 = C142 * C317;
    const double C835 = C619 * be;
    const double C834 = C142 * C276;
    const double C833 = C142 * C746;
    const double C832 = C142 * C708;
    const double C831 = C142 * C768;
    const double C830 = C142 * C619;
    const double C829 = -2 * C465;
    const double C828 = C142 * C743;
    const double C827 = C142 * C593;
    const double C844 = C838 / C82;
    const double C843 = C837 / C82;
    const double C842 = C835 / C82;
    const double C841 = C833 - C727;
    const double C840 = C832 - C598;
    const double C845 = C275 - C844;
    const double C891 = 0 * be;
    const double C890 = 0 * be;
    const double C889 = C144 / C82;
    const double C888 = C557 * be;
    const double C887 = C547 / C82;
    const double C886 = C101 * C547;
    const double C885 = 0 * be;
    const double C884 = C142 * C178;
    const double C883 = C142 * C622;
    const double C882 = C142 * C137;
    const double C881 = C142 * C270;
    const double C880 = C620 * C165;
    const double C879 = C220 * C165;
    const double C878 = C328 * C165;
    const double C877 = C211 * C165;
    const double C876 = C142 * C254;
    const double C875 = C142 * C253;
    const double C905 = C891 / C82;
    const double C904 = C890 / C82;
    const double C903 = -C889;
    const double C902 = C888 / C82;
    const double C901 = -C887;
    const double C900 = C886 / C82;
    const double C899 = C885 / C82;
    const double C898 = C883 - C178;
    const double C897 = C881 - C137;
    const double C896 = C305 + C880;
    const double C895 = 2 * C879;
    const double C894 = C325 + C878;
    const double C893 = 2 * C877;
    const double C892 = C875 * be;
    const double C914 = C903 / C103;
    const double C913 = C901 / C103;
    const double C912 = 0 - C900;
    const double C911 = -C899;
    const double C910 = C142 * C898;
    const double C909 = C142 * C897;
    const double C908 = C260 + C895;
    const double C907 = C250 + C893;
    const double C906 = C892 / C82;
    const double C920 = C914 - C904;
    const double C919 = C913 - C902;
    const double C918 = C912 * be;
    const double C917 = C911 / C103;
    const double C916 = C311 + C910;
    const double C915 = C267 + C909;
    const double C927 = C920 / C103;
    const double C926 = C919 / C103;
    const double C925 = C101 * C920;
    const double C924 = C101 * C919;
    const double C923 = C918 / C82;
    const double C922 = C916 - C884;
    const double C921 = C915 - C882;
    const double C931 = C905 - C927;
    const double C930 = C925 + C873;
    const double C929 = C924 + C872;
    const double C928 = C917 - C923;
    const double C934 = C930 * be;
    const double C933 = C929 * be;
    const double C932 = C928 / C103;
    const double C936 = C934 / C82;
    const double C935 = C933 / C82;
    const double C938 = C936 - C926;
    const double C937 = C932 - C935;
    const double C939 = C937 + C920;
    const double C972 = C141 * C285;
    const double C971 = C141 * C320;
    const double C970 = C141 * C284;
    const double C969 = C897 * be;
    const double C968 = C142 * C275;
    const double C967 = C142 * C263;
    const double C966 = C141 * C259;
    const double C965 = C142 * C706;
    const double C964 = C141 * C602;
    const double C963 = C141 * C272;
    const double C962 = C726 * C165;
    const double C961 = C141 * C258;
    const double C977 = C969 / C82;
    const double C976 = C967 * be;
    const double C975 = C142 * C964;
    const double C974 = C619 + C962;
    const double C973 = C961 * C165;
    const double C980 = C976 / C82;
    const double C979 = C975 - C706;
    const double C978 = C593 + C973;
    const double C981 = C142 * C979;
    const double C982 = C708 + C981;
    const double C983 = C982 - C965;
    const double C1038 = C142 * C285;
    const double C1037 = C142 * C320;
    const double C1036 = C335 + C283;
    const double C1035 = C142 * C287;
    const double C1034 = 0 * be;
    const double C1033 = C142 * C284;
    const double C1032 = 0 * be;
    const double C1031 = C556 - C549;
    const double C1030 = C560 - C554;
    const double C1029 = C885 / C120;
    const double C1028 = C912 * ae;
    const double C1027 = 0 * be;
    const double C1026 = C101 * C885;
    const double C1025 = C153 * C165;
    const double C1024 = C142 * C153;
    const double C1023 = C142 * C602;
    const double C1022 = 2 * C897;
    const double C1021 = C142 * C272;
    const double C1020 = C222 * C165;
    const double C1019 = 2 * C967;
    const double C1018 = C214 * C165;
    const double C1017 = 2 * C875;
    const double C1055 = C1037 / C82;
    const double C1054 = C1035 / C82;
    const double C1053 = C1034 / C82;
    const double C1052 = C1033 / C82;
    const double C1051 = C1032 / C82;
    const double C1050 = C1031 / C103;
    const double C1049 = C101 * C1031;
    const double C1048 = C1030 / C103;
    const double C1047 = C101 * C1030;
    const double C1046 = C1028 / C82;
    const double C1045 = C1027 / C120;
    const double C1044 = C1026 / C82;
    const double C1043 = C137 + C1025;
    const double C1042 = C1023 - C153;
    const double C1041 = C1021 / C82;
    const double C1040 = 2 * C1020;
    const double C1039 = 2 * C1018;
    const double C1067 = C1036 - C1055;
    const double C1066 = C330 - C1054;
    const double C1065 = C326 - C1052;
    const double C1064 = C1050 - C1051;
    const double C1063 = C1049 + C533;
    const double C1062 = C1047 + C532;
    const double C1061 = C1046 - C1029;
    const double C1060 = 0 - C1044;
    const double C1059 = C142 * C1042;
    const double C1058 = C254 - C1041;
    const double C1057 = C263 + C1040;
    const double C1056 = C253 + C1039;
    const double C1078 = C1064 / C103;
    const double C1077 = C101 * C1064;
    const double C1076 = 2 * C1064;
    const double C1075 = C1063 * be;
    const double C1074 = C1062 * be;
    const double C1073 = C1061 / C103;
    const double C1072 = C101 * C1061;
    const double C1071 = C1060 * ae;
    const double C1070 = C270 + C1059;
    const double C1069 = C142 * C1057;
    const double C1068 = C142 * C1056;
    const double C1087 = C1053 - C1078;
    const double C1086 = C1077 + C1015;
    const double C1085 = C1075 / C82;
    const double C1084 = C1074 / C82;
    const double C1083 = C1072 + 0;
    const double C1082 = C1071 / C82;
    const double C1081 = C1070 - C1024;
    const double C1080 = C1019 + C1069;
    const double C1079 = C1017 + C1068;
    const double C1093 = C1086 * be;
    const double C1092 = C1048 - C1085;
    const double C1091 = C1073 - C1084;
    const double C1090 = C1083 * be;
    const double C1089 = C1082 - C1045;
    const double C1088 = C142 * C1081;
    const double C1100 = C1092 / C103;
    const double C1099 = C1093 / C82;
    const double C1098 = C101 * C1092;
    const double C1097 = C1091 + C1031;
    const double C1096 = C1090 / C82;
    const double C1095 = C1089 + C887;
    const double C1094 = C1022 + C1088;
    const double C1106 = C1099 - C1100;
    const double C1105 = C1098 + C1468;
    const double C1104 = C1097 / C103;
    const double C1103 = C101 * C1097;
    const double C1102 = C1095 / C103;
    const double C1101 = C1094 - C1043;
    const double C1109 = C1105 * be;
    const double C1108 = C1103 + C1473;
    const double C1107 = C1102 - C1096;
    const double C1112 = C1109 / C82;
    const double C1111 = C1108 * be;
    const double C1110 = C1107 / C103;
    const double C1114 = C1104 - C1112;
    const double C1113 = C1111 / C82;
    const double C1116 = C1114 + C1076;
    const double C1115 = C1110 - C1113;
    const double C1117 = C1115 + C1092;
    const double C1142 = C628 - C639;
    const double C1141 = C626 - C638;
    const double C1140 = C110 - C171;
    const double C1139 = C293 - C343;
    const double C1167 = C737 - C736;
    const double C1166 = C773 - C734;
    const double C1165 = C463 - C483;
    const double C1164 = C461 - C460;
    const double C1191 = C141 * C622;
    const double C1190 = C142 * C641;
    const double C1189 = C141 * C328;
    const double C1193 = C142 * C1191;
    const double C1192 = C142 * C1189;
    const double C1194 = C1193 - C600;
    const double C1217 = C904 - C914;
    const double C1216 = C902 - C913;
    const double C1260 = C1051 - C1050;
    const double C1259 = C1085 - C1048;
    const double C1923 = C1260 * C921;
    const double C1922 = C1259 * C551;
    const double C1921 = C1097 * C444;
    const double C1920 = C1260 * C908;
    const double C1919 = C1259 * C540;
    const double C1918 = C1097 * C438;
    const double C1917 = C1260 * C907;
    const double C1916 = C1259 * C536;
    const double C1915 = C1097 * C426;
    const double C1914 = C1217 * C1194;
    const double C1913 = C1216 * C448;
    const double C1912 = C1217 * C840;
    const double C1911 = C1216 * C447;
    const double C1910 = C1217 * C1190;
    const double C1909 = C1216 * C472;
    const double C1908 = C1217 * C830;
    const double C1907 = C1216 * C471;
    const double C1906 = C1217 * C1192;
    const double C1905 = C1216 * C434;
    const double C1904 = C1217 * C827;
    const double C1903 = C1216 * C433;
    const double C1902 = C1217 * C552;
    const double C1901 = C1216 * C309;
    const double C1900 = C1217 * C551;
    const double C1899 = C1216 * C444;
    const double C1898 = C1217 * C541;
    const double C1897 = C1216 * C303;
    const double C1896 = C1217 * C540;
    const double C1895 = C1216 * C438;
    const double C1894 = C1217 * C537;
    const double C1893 = C1216 * C323;
    const double C1892 = C1217 * C536;
    const double C1891 = C1216 * C426;
    const double C1890 = C1142 * C1194;
    const double C1889 = C1141 * C552;
    const double C1888 = C1142 * C840;
    const double C1887 = C1141 * C551;
    const double C1886 = C1142 * C1190;
    const double C1885 = C1141 * C541;
    const double C1884 = C1142 * C830;
    const double C1883 = C1141 * C540;
    const double C1882 = C1142 * C1192;
    const double C1881 = C1141 * C537;
    const double C1880 = C1142 * C827;
    const double C1879 = C1141 * C536;
    const double C1878 = C1165 * C1194;
    const double C1877 = C1164 * C840;
    const double C1876 = C1165 * C552;
    const double C1875 = C1164 * C551;
    const double C1874 = C1165 * C1190;
    const double C1873 = C1164 * C830;
    const double C1872 = C1165 * C541;
    const double C1871 = C1164 * C540;
    const double C1870 = C1165 * C1192;
    const double C1869 = C1164 * C827;
    const double C1868 = C1165 * C537;
    const double C1867 = C1164 * C536;
    const double C1866 = C1167 * C634;
    const double C1865 = C1166 * C447;
    const double C1864 = C785 * C444;
    const double C1863 = C1167 * C647;
    const double C1862 = C1166 * C471;
    const double C1861 = C785 * C438;
    const double C1860 = C1167 * C631;
    const double C1859 = C1166 * C433;
    const double C1858 = C785 * C426;
    const double C1857 = C1165 * C448;
    const double C1856 = C1164 * C447;
    const double C1855 = C1165 * C309;
    const double C1854 = C1164 * C444;
    const double C1853 = C1165 * C472;
    const double C1852 = C1164 * C471;
    const double C1851 = C1165 * C303;
    const double C1850 = C1164 * C438;
    const double C1849 = C1165 * C434;
    const double C1848 = C1164 * C433;
    const double C1847 = C1165 * C323;
    const double C1846 = C1164 * C426;
    const double C1845 = C1142 * C448;
    const double C1844 = C1141 * C309;
    const double C1843 = C1142 * C447;
    const double C1842 = C1141 * C444;
    const double C1841 = C1142 * C472;
    const double C1840 = C1141 * C303;
    const double C1839 = C1142 * C471;
    const double C1838 = C1141 * C438;
    const double C1837 = C1142 * C434;
    const double C1836 = C1141 * C323;
    const double C1835 = C1142 * C433;
    const double C1834 = C1141 * C426;
    const double C1833 = C1140 * C334;
    const double C1832 = C1139 * C309;
    const double C1831 = C377 * C444;
    const double C1830 = C1140 * C329;
    const double C1829 = C1139 * C303;
    const double C1828 = C377 * C438;
    const double C1827 = C1140 * C368;
    const double C1826 = C1139 * C323;
    const double C1825 = C377 * C426;
    const double C1824 = C142 * C972;
    const double C1823 = C971 / C82;
    const double C1822 = C970 / C82;
    const double C1821 = C1081 * be;
    const double C1820 = C489 * C840;
    const double C1819 = C504 * C551;
    const double C1818 = C231 * C165;
    const double C1817 = C1057 * be;
    const double C1816 = C489 * C830;
    const double C1815 = C504 * C540;
    const double C1814 = C489 * C827;
    const double C1813 = C504 * C536;
    const double C1812 = C963 / C82;
    const double C1811 = C142 * C966;
    const double C1810 = C983 * C134;
    const double C1809 = C921 * C134;
    const double C1808 = C974 * C134;
    const double C1807 = C908 * C134;
    const double C1806 = C978 * C134;
    const double C1805 = C907 * C134;
    const double C1804 = C142 * C614;
    const double C1803 = C898 * be;
    const double C1802 = C142 * C1067;
    const double C1801 = C142 * C283;
    const double C1800 = C931 * C921;
    const double C1799 = C938 * C551;
    const double C1798 = C939 * C444;
    const double C1797 = C142 * C620;
    const double C1796 = C142 * C1066;
    const double C1795 = C931 * C908;
    const double C1794 = C938 * C540;
    const double C1793 = C939 * C438;
    const double C1792 = C142 * C1065;
    const double C1791 = C931 * C907;
    const double C1790 = C938 * C536;
    const double C1789 = C939 * C426;
    const double C1788 = C142 * C611;
    const double C1787 = C922 * C143;
    const double C1786 = C142 * C845;
    const double C1785 = C921 * C143;
    const double C1784 = C896 * C143;
    const double C1783 = C317 * C165;
    const double C1782 = C908 * C143;
    const double C1781 = C894 * C143;
    const double C1780 = C276 * C165;
    const double C1779 = C907 * C143;
    const double C1778 = C142 * C1058;
    const double C1777 = C592 * C552;
    const double C1776 = C591 * C551;
    const double C1775 = C265 * C165;
    const double C1774 = C592 * C541;
    const double C1773 = C591 * C540;
    const double C1772 = C217 * C165;
    const double C1771 = C1056 * be;
    const double C1770 = C299 * C165;
    const double C1769 = C592 * C537;
    const double C1768 = C591 * C536;
    const double C1767 = C142 * C971;
    const double C1766 = C843 + C839;
    const double C1765 = C558 * C840;
    const double C1764 = C561 * C447;
    const double C1763 = C142 * C755;
    const double C1762 = C558 * C830;
    const double C1761 = C561 * C471;
    const double C1760 = C142 * C970;
    const double C1759 = C558 * C827;
    const double C1758 = C561 * C433;
    const double C1757 = C1042 * be;
    const double C1756 = C979 * be;
    const double C1755 = C141 * C845;
    const double C1754 = C142 * C277;
    const double C1753 = C142 * C599;
    const double C1752 = C836 / C82;
    const double C1751 = C142 * C726;
    const double C1750 = C141 * C836;
    const double C1749 = C980 + C968;
    const double C1748 = C834 / C82;
    const double C1747 = C142 * C961;
    const double C1746 = C141 * C834;
    const double C1745 = C841 * C134;
    const double C1744 = C142 * C963;
    const double C1743 = C840 * C134;
    const double C1742 = C551 * C134;
    const double C1741 = C831 * C134;
    const double C1740 = C142 * C744;
    const double C1739 = C830 * C134;
    const double C1738 = C540 * C134;
    const double C1737 = C828 * C134;
    const double C1736 = C142 * C435;
    const double C1735 = C827 * C134;
    const double C1734 = C536 * C134;
    const double C1733 = C239 * C160;
    const double C1732 = C964 * be;
    const double C1731 = C746 * be;
    const double C1730 = C726 * be;
    const double C1729 = C706 * be;
    const double C1728 = C216 - C721;
    const double C1727 = C768 * be;
    const double C1726 = C634 * C134;
    const double C1725 = C447 * C134;
    const double C1724 = C188 * C134;
    const double C1723 = C647 * C134;
    const double C1722 = C471 * C134;
    const double C1721 = C183 * C134;
    const double C1720 = C631 * C134;
    const double C1719 = C433 * C134;
    const double C1718 = C170 * C134;
    const double C1717 = C615 / C82;
    const double C1716 = C642 * C144;
    const double C1715 = C320 * C160;
    const double C1714 = C634 * C144;
    const double C1713 = C613 / C82;
    const double C1712 = C141 * C614;
    const double C1711 = C659 * C144;
    const double C1710 = C141 * C755;
    const double C1709 = C647 * C144;
    const double C1708 = C618 * C144;
    const double C1707 = C284 * C160;
    const double C1706 = C631 * C144;
    const double C1705 = C612 / C82;
    const double C1704 = C1191 * be;
    const double C1703 = C141 * C754;
    const double C1702 = C658 * C634;
    const double C1701 = C666 * C447;
    const double C1700 = C667 * C444;
    const double C1699 = C141 * C611;
    const double C1698 = C610 / C82;
    const double C1697 = C641 * be;
    const double C1696 = C141 * C753;
    const double C1695 = C141 * C275;
    const double C1694 = C658 * C647;
    const double C1693 = C666 * C471;
    const double C1692 = C667 * C438;
    const double C1691 = C141 * C752;
    const double C1690 = C658 * C631;
    const double C1689 = C666 * C433;
    const double C1688 = C667 * C426;
    const double C1687 = C272 * C160;
    const double C1686 = C592 * C448;
    const double C1685 = C591 * C447;
    const double C1684 = C592 * C309;
    const double C1683 = C591 * C444;
    const double C1682 = C141 * C744;
    const double C1681 = C592 * C472;
    const double C1680 = C591 * C471;
    const double C1679 = C592 * C303;
    const double C1678 = C591 * C438;
    const double C1677 = C217 * C160;
    const double C1676 = C743 * be;
    const double C1675 = C299 * C160;
    const double C1674 = C592 * C434;
    const double C1673 = C591 * C433;
    const double C1672 = C592 * C323;
    const double C1671 = C591 * C426;
    const double C1670 = C142 * C615;
    const double C1669 = C475 + C457;
    const double C1668 = C558 * C552;
    const double C1667 = C561 * C309;
    const double C1666 = C142 * C319;
    const double C1665 = 2 * C480;
    const double C1664 = C558 * C551;
    const double C1663 = C561 * C444;
    const double C1662 = C142 * C613;
    const double C1661 = C558 * C541;
    const double C1660 = C561 * C303;
    const double C1659 = C142 * C286;
    const double C1658 = C558 * C540;
    const double C1657 = C561 * C438;
    const double C1656 = C142 * C355;
    const double C1655 = C558 * C537;
    const double C1654 = C561 * C323;
    const double C1653 = C142 * C282;
    const double C1652 = C558 * C536;
    const double C1651 = C561 * C426;
    const double C1650 = C553 * C143;
    const double C1649 = C142 * C612;
    const double C1648 = C552 * C143;
    const double C1647 = C142 * C280;
    const double C1646 = C551 * C143;
    const double C1645 = C542 * C143;
    const double C1644 = C142 * C610;
    const double C1643 = C541 * C143;
    const double C1642 = C142 * C316;
    const double C1641 = C540 * C143;
    const double C1640 = C539 * C143;
    const double C1639 = C142 * C354;
    const double C1638 = C537 * C143;
    const double C1637 = C142 * C274;
    const double C1636 = C536 * C143;
    const double C1635 = C142 * C352;
    const double C1634 = C142 * C268;
    const double C1633 = C142 * C350;
    const double C1632 = C142 * C261;
    const double C1631 = C142 * C259;
    const double C1630 = C142 * C258;
    const double C1629 = C142 * C437;
    const double C1628 = C538 / C82;
    const double C1627 = C142 * C328;
    const double C1626 = C129 * C538;
    const double C1625 = C906 + C876;
    const double C1624 = C142 * C295;
    const double C1623 = C449 * C144;
    const double C1622 = C141 * C615;
    const double C1621 = C448 * C144;
    const double C1620 = C141 * C319;
    const double C1619 = C447 * C144;
    const double C1618 = C473 * C144;
    const double C1617 = C141 * C613;
    const double C1616 = C472 * C144;
    const double C1615 = C141 * C286;
    const double C1614 = C471 * C144;
    const double C1613 = C436 * C144;
    const double C1612 = C141 * C355;
    const double C1611 = C434 * C144;
    const double C1610 = C141 * C282;
    const double C1609 = C433 * C144;
    const double C1608 = C141 * C612;
    const double C1607 = C489 * C448;
    const double C1606 = C504 * C309;
    const double C1605 = C141 * C280;
    const double C1604 = C489 * C447;
    const double C1603 = C504 * C444;
    const double C1602 = C141 * C610;
    const double C1601 = C470 + C455;
    const double C1600 = C489 * C472;
    const double C1599 = C504 * C303;
    const double C1598 = C141 * C316;
    const double C1597 = 2 * C479;
    const double C1596 = C489 * C471;
    const double C1595 = C504 * C438;
    const double C1594 = C141 * C354;
    const double C1593 = C489 * C434;
    const double C1592 = C504 * C323;
    const double C1591 = C141 * C274;
    const double C1590 = C489 * C433;
    const double C1589 = C504 * C426;
    const double C1588 = C141 * C352;
    const double C1587 = C141 * C268;
    const double C1586 = C503 * C334;
    const double C1585 = C510 * C309;
    const double C1584 = C509 * C444;
    const double C1583 = C141 * C350;
    const double C1582 = C141 * C261;
    const double C1581 = C503 * C329;
    const double C1580 = C510 * C303;
    const double C1579 = C509 * C438;
    const double C1578 = C961 * be;
    const double C1577 = C141 * C437;
    const double C1576 = C435 / C82;
    const double C1575 = C1189 * be;
    const double C1574 = C129 * C435;
    const double C1573 = C630 + C594;
    const double C1572 = C141 * C295;
    const double C1571 = C503 * C368;
    const double C1570 = C510 * C323;
    const double C1569 = C509 * C426;
    const double C1568 = C320 / C82;
    const double C1567 = C165 * C95;
    const double C1566 = C319 / C82;
    const double C1565 = C320 * C145;
    const double C1564 = C334 * C144;
    const double C1563 = C129 * C319;
    const double C1562 = C309 * C144;
    const double C1561 = C165 * C83;
    const double C1560 = C188 * C144;
    const double C1559 = C287 / C82;
    const double C1558 = C95 * C201;
    const double C1557 = C286 / C82;
    const double C1556 = C287 * C145;
    const double C1555 = C329 * C144;
    const double C1554 = C129 * C286;
    const double C1553 = C303 * C144;
    const double C1552 = C83 * C201;
    const double C1551 = C183 * C144;
    const double C1550 = C95 * C198;
    const double C1549 = C284 / C82;
    const double C1548 = C239 * C145;
    const double C1547 = C129 * C355;
    const double C1546 = C282 / C82;
    const double C1545 = C368 * C144;
    const double C1544 = C129 * C282;
    const double C1543 = C323 * C144;
    const double C1542 = C83 * C198;
    const double C1541 = C170 * C144;
    const double C1540 = C281 / C82;
    const double C1539 = C95 * C197;
    const double C1538 = C280 / C82;
    const double C1537 = C281 * C145;
    const double C1536 = C334 * C143;
    const double C1535 = C129 * C280;
    const double C1534 = C309 * C143;
    const double C1533 = C83 * C197;
    const double C1532 = C188 * C143;
    const double C1531 = C317 / C82;
    const double C1530 = C160 * C95;
    const double C1529 = C316 / C82;
    const double C1528 = C317 * C145;
    const double C1527 = C329 * C143;
    const double C1526 = C129 * C316;
    const double C1525 = C303 * C143;
    const double C1524 = C160 * C83;
    const double C1523 = C183 * C143;
    const double C1522 = C95 * C192;
    const double C1521 = C276 / C82;
    const double C1520 = C231 * C145;
    const double C1519 = C129 * C354;
    const double C1518 = C274 / C82;
    const double C1517 = C368 * C143;
    const double C1516 = C129 * C274;
    const double C1515 = C323 * C143;
    const double C1514 = C83 * C192;
    const double C1513 = C170 * C143;
    const double C1512 = C95 * C187;
    const double C1511 = C227 * be;
    const double C1510 = C272 / C82;
    const double C1509 = C622 * be;
    const double C1508 = C338 * be;
    const double C1507 = C129 * C352;
    const double C1506 = C268 / C82;
    const double C1505 = C129 * C268;
    const double C1504 = C83 * C187;
    const double C1503 = C95 * C182;
    const double C1502 = C222 * be;
    const double C1501 = C265 / C82;
    const double C1500 = C620 * be;
    const double C1499 = C333 * be;
    const double C1498 = C129 * C350;
    const double C1497 = C261 / C82;
    const double C1496 = C129 * C261;
    const double C1495 = C83 * C182;
    const double C1494 = C145 * C95;
    const double C1493 = C214 * be;
    const double C1492 = C302 - C216;
    const double C1491 = C299 / C82;
    const double C1490 = C328 * be;
    const double C1489 = C178 * be;
    const double C1488 = C129 * C437;
    const double C1487 = C369 * be;
    const double C1486 = C129 * C360;
    const double C1485 = C295 / C82;
    const double C1484 = C129 * C295;
    const double C1483 = 2 * C465;
    const double C1482 = C145 * C83;
    const double C2181 = C872 * C1622;
    const double C2180 = C872 * C1620;
    const double C2179 = C872 * C1612;
    const double C2178 = C872 * C1610;
    const double C2177 = C872 * C1563;
    const double C2176 = C872 * C1554;
    const double C2175 = C588 * C1644;
    const double C2174 = C588 * C1642;
    const double C2173 = C588 * C1639;
    const double C2172 = C588 * C1637;
    const double C2171 = C411 * C1740;
    const double C2170 = C1352 * C1633;
    const double C2169 = C411 * C1632;
    const double C2168 = C411 * C1736;
    const double C2167 = C411 * C1624;
    const double C2166 = C1352 * C1588;
    const double C2165 = C411 * C1587;
    const double C2164 = C411 * C1572;
    const double C2163 = C588 * C1535;
    const double C2162 = C588 * C1526;
    const double C2161 = C1754 - C1540;
    const double C2160 = C1821 / C82;
    const double C2159 = 2 * C1818;
    const double C2158 = C1817 / C82;
    const double C2157 = C416 * C1642;
    const double C2156 = C416 * C1637;
    const double C2155 = C1811 - C1812;
    const double C2154 = C1810 / C82;
    const double C2153 = C1809 / C82;
    const double C2152 = C1808 / C82;
    const double C2151 = C1807 / C82;
    const double C2150 = C1806 / C82;
    const double C2149 = C1805 / C82;
    const double C2148 = C1803 / C82;
    const double C2147 = C1801 - C468;
    const double C2146 = C977 - C1566;
    const double C2145 = C1797 * be;
    const double C2144 = C980 - C1557;
    const double C2143 = C906 - C1546;
    const double C2142 = C1788 - C1705;
    const double C2141 = C1787 / C82;
    const double C2140 = C968 - C1538;
    const double C2139 = C1785 / C82;
    const double C2138 = C1784 / C82;
    const double C2137 = -C1783;
    const double C2136 = C1782 / C82;
    const double C2135 = C1781 / C82;
    const double C2134 = -C1780;
    const double C2133 = C1779 / C82;
    const double C2132 = C352 - C1629;
    const double C2131 = C876 - C1506;
    const double C2130 = -C1775;
    const double C2129 = C1460 * C1633;
    const double C2128 = C1438 * C1632;
    const double C2127 = 2 * C1772;
    const double C2126 = C1771 / C82;
    const double C2125 = -C1770;
    const double C2124 = C1438 * C1624;
    const double C2123 = C1767 / C82;
    const double C2122 = C532 * C1620;
    const double C2121 = C842 + C1763;
    const double C2120 = C1760 / C82;
    const double C2119 = C532 * C1610;
    const double C2118 = C1757 / C82;
    const double C2117 = C1756 / C82;
    const double C2116 = C977 + C1755;
    const double C2115 = C1753 * be;
    const double C2114 = C142 * C1728;
    const double C2113 = C1751 * be;
    const double C2112 = C1750 / C82;
    const double C2111 = C1747 * be;
    const double C2110 = C1746 / C82;
    const double C2109 = C1745 / C82;
    const double C2108 = C1744 / C82;
    const double C2107 = C1743 / C82;
    const double C2106 = C1742 / C82;
    const double C2105 = C1741 / C82;
    const double C2104 = C1334 * C1740;
    const double C2103 = C1739 / C82;
    const double C2102 = C1334 * C1632;
    const double C2101 = C1738 / C82;
    const double C2100 = C1737 / C82;
    const double C2099 = C1334 * C1736;
    const double C2098 = C1735 / C82;
    const double C2097 = C1334 * C1624;
    const double C2096 = C1734 / C82;
    const double C2095 = C972 - C1559;
    const double C2094 = 2 * C1733;
    const double C2093 = C1732 / C82;
    const double C2092 = C1731 / C82;
    const double C2091 = C1730 / C82;
    const double C2090 = C1729 / C82;
    const double C2089 = C1727 / C82;
    const double C2088 = C1726 / C82;
    const double C2087 = C1334 * C1587;
    const double C2086 = C1725 / C82;
    const double C2085 = 2 * C1724;
    const double C2084 = C966 - C1501;
    const double C2083 = C1723 / C82;
    const double C2082 = C1722 / C82;
    const double C2081 = 2 * C1721;
    const double C2080 = C1720 / C82;
    const double C2079 = C1334 * C1572;
    const double C2078 = C1719 / C82;
    const double C2077 = 2 * C1718;
    const double C2076 = C1716 / C82;
    const double C2075 = -C1715;
    const double C2074 = C1714 / C82;
    const double C2073 = C1712 - C1713;
    const double C2072 = C1711 / C82;
    const double C2071 = C839 - C1557;
    const double C2070 = C1709 / C82;
    const double C2069 = C1708 / C82;
    const double C2068 = -C1707;
    const double C2067 = C1706 / C82;
    const double C2066 = C1704 / C82;
    const double C2065 = C843 - C1538;
    const double C2064 = C1697 / C82;
    const double C2063 = C1695 - C468;
    const double C2062 = C842 - C1529;
    const double C2061 = C630 - C1518;
    const double C2060 = -C1687;
    const double C2059 = C1460 * C1588;
    const double C2058 = C1438 * C1587;
    const double C2057 = C350 - C1577;
    const double C2056 = C594 - C1497;
    const double C2055 = 2 * C1677;
    const double C2054 = C1676 / C82;
    const double C2053 = -C1675;
    const double C2052 = C1438 * C1572;
    const double C2051 = C1670 / C82;
    const double C2050 = C532 * C1563;
    const double C2049 = C1666 / C82;
    const double C2048 = C487 - C1665;
    const double C2047 = C1662 / C82;
    const double C2046 = C532 * C1554;
    const double C2045 = C1659 / C82;
    const double C2044 = C467 + C1656;
    const double C2043 = C1653 / C82;
    const double C2042 = C1650 / C82;
    const double C2041 = C1649 / C82;
    const double C2040 = C1648 / C82;
    const double C2039 = C1647 / C82;
    const double C2038 = C1646 / C82;
    const double C2037 = C1645 / C82;
    const double C2036 = C79 * C1644;
    const double C2035 = C1643 / C82;
    const double C2034 = C79 * C1642;
    const double C2033 = C1641 / C82;
    const double C2032 = C1640 / C82;
    const double C2031 = C79 * C1639;
    const double C2030 = C1638 / C82;
    const double C2029 = C79 * C1637;
    const double C2028 = C1636 / C82;
    const double C2027 = C485 + C1635;
    const double C2026 = C1634 / C82;
    const double C2025 = C1630 * be;
    const double C2024 = C1627 * be;
    const double C2023 = C1626 / C82;
    const double C2022 = C1623 / C82;
    const double C2021 = C78 * C1622;
    const double C2020 = C1621 / C82;
    const double C2019 = C78 * C1620;
    const double C2018 = C1619 / C82;
    const double C2017 = C1618 / C82;
    const double C2016 = C1617 / C82;
    const double C2015 = C1616 / C82;
    const double C2014 = C1615 / C82;
    const double C2013 = C1614 / C82;
    const double C2012 = C1613 / C82;
    const double C2011 = C78 * C1612;
    const double C2010 = C1611 / C82;
    const double C2009 = C78 * C1610;
    const double C2008 = C1609 / C82;
    const double C2007 = C1608 / C82;
    const double C2006 = C416 * C1535;
    const double C2005 = C1605 / C82;
    const double C2004 = C1602 / C82;
    const double C2003 = C416 * C1526;
    const double C2002 = C1598 / C82;
    const double C2001 = C486 - C1597;
    const double C2000 = C467 + C1594;
    const double C1999 = C1591 / C82;
    const double C1998 = C485 + C1583;
    const double C1997 = C1582 / C82;
    const double C1996 = C1578 / C82;
    const double C1995 = C1575 / C82;
    const double C1994 = C1574 / C82;
    const double C1993 = C1567 * C140;
    const double C1992 = -C1565;
    const double C1991 = C1564 / C82;
    const double C1990 = C78 * C1563;
    const double C1989 = C1562 / C82;
    const double C1988 = C1561 * C117;
    const double C1987 = 2 * C1560;
    const double C1986 = C140 * C1558;
    const double C1985 = -C1556;
    const double C1984 = C1555 / C82;
    const double C1983 = C78 * C1554;
    const double C1982 = C1553 / C82;
    const double C1981 = C117 * C1552;
    const double C1980 = 2 * C1551;
    const double C1979 = C140 * C1550;
    const double C1978 = C614 - C1549;
    const double C1977 = 2 * C1548;
    const double C1976 = C457 - C1546;
    const double C1975 = C1545 / C82;
    const double C1974 = C1544 / C82;
    const double C1973 = C1543 / C82;
    const double C1972 = C117 * C1542;
    const double C1971 = 2 * C1541;
    const double C1970 = C140 * C1539;
    const double C1969 = -C1537;
    const double C1968 = C1536 / C82;
    const double C1967 = C79 * C1535;
    const double C1966 = C1534 / C82;
    const double C1965 = C117 * C1533;
    const double C1964 = 2 * C1532;
    const double C1963 = C1530 * C140;
    const double C1962 = -C1528;
    const double C1961 = C1527 / C82;
    const double C1960 = C79 * C1526;
    const double C1959 = C1525 / C82;
    const double C1958 = C1524 * C117;
    const double C1957 = 2 * C1523;
    const double C1956 = C140 * C1522;
    const double C1955 = C611 - C1521;
    const double C1954 = 2 * C1520;
    const double C1953 = C455 - C1518;
    const double C1952 = C1517 / C82;
    const double C1951 = C1516 / C82;
    const double C1950 = C1515 / C82;
    const double C1949 = C117 * C1514;
    const double C1948 = 2 * C1513;
    const double C1947 = C140 * C1512;
    const double C1946 = 2 * C1511;
    const double C1945 = C1509 / C82;
    const double C1944 = C1508 / C82;
    const double C1943 = C475 - C1506;
    const double C1942 = C1505 / C82;
    const double C1941 = C117 * C1504;
    const double C1940 = C140 * C1503;
    const double C1939 = 2 * C1502;
    const double C1938 = C1500 / C82;
    const double C1937 = C1499 / C82;
    const double C1936 = C470 - C1497;
    const double C1935 = C1496 / C82;
    const double C1934 = C117 * C1495;
    const double C1933 = C1494 * C140;
    const double C1932 = 2 * C1493;
    const double C1931 = C1490 / C82;
    const double C1930 = C1489 / C82;
    const double C1929 = C1488 - C254;
    const double C1928 = C1487 / C82;
    const double C1927 = C467 - C1485;
    const double C1926 = C1484 / C82;
    const double C1925 = C484 - C1483;
    const double C1924 = C1482 * C117;
    const double C2391 = C1473 * C1981;
    const double C2390 = C1473 * C1972;
    const double C2389 = C2181 / C82;
    const double C2388 = C2180 / C82;
    const double C2387 = C873 * C2121;
    const double C2386 = C1905 + C2179;
    const double C2385 = C2178 / C82;
    const double C2384 = C2177 / C82;
    const double C2383 = C2176 / C82;
    const double C2382 = C872 * C1981;
    const double C2381 = C873 * C2044;
    const double C2380 = C872 * C1972;
    const double C2379 = C2066 + C1712;
    const double C2378 = C589 * C2116;
    const double C2377 = C2175 / C82;
    const double C2376 = C2174 / C82;
    const double C2375 = C1881 + C2173;
    const double C2374 = C2172 / C82;
    const double C2373 = C1352 * C2027;
    const double C2372 = C1873 + C2171;
    const double C2371 = C2169 / C82;
    const double C2370 = C2168 / C82;
    const double C2369 = C2167 / C82;
    const double C2368 = C1472 * C1965;
    const double C2367 = C1472 * C1949;
    const double C2366 = C2165 / C82;
    const double C2365 = C411 * C1941;
    const double C2364 = C1352 * C1998;
    const double C2363 = C411 * C1934;
    const double C2362 = C2164 / C82;
    const double C2361 = C2163 / C82;
    const double C2360 = C588 * C1965;
    const double C2359 = C2162 / C82;
    const double C2358 = C589 * C2000;
    const double C2357 = C588 * C1949;
    const double C2356 = C1469 * C1941;
    const double C2355 = C1469 * C1934;
    const double C2354 = C2093 + C972;
    const double C2353 = C1824 - C2090;
    const double C2352 = C2117 - C1823;
    const double C2351 = C141 * C1979;
    const double C2350 = C417 * C2116;
    const double C2349 = C2159 + C275;
    const double C2348 = C2157 / C82;
    const double C2347 = C1956 * C165;
    const double C2346 = C2156 / C82;
    const double C2345 = C141 * C1947;
    const double C2344 = C1945 + C614;
    const double C2343 = C1804 - C1930;
    const double C2342 = C2148 - C1717;
    const double C2341 = C2146 + C2147;
    const double C2340 = C2145 / C82;
    const double C2339 = C2144 + C1796;
    const double C2338 = C867 * C1981;
    const double C2337 = C2143 + C1792;
    const double C2336 = C867 * C1972;
    const double C2335 = C2140 + C1786;
    const double C2334 = C2137 / C82;
    const double C2333 = C2134 / C82;
    const double C2332 = C2131 + C1778;
    const double C2331 = C1460 * C2027;
    const double C2330 = C2130 / C82;
    const double C2329 = C2128 / C82;
    const double C2328 = C2127 + C254;
    const double C2327 = C2125 / C82;
    const double C2326 = C2124 / C82;
    const double C2325 = C1766 - C2123;
    const double C2324 = C2122 / C82;
    const double C2323 = C533 * C2121;
    const double C2322 = C630 - C2120;
    const double C2321 = C2119 / C82;
    const double C2320 = C142 * C1970;
    const double C2319 = C845 + C2117;
    const double C2318 = C2115 / C82;
    const double C2317 = C2113 / C82;
    const double C2316 = C1749 - C2112;
    const double C2315 = C142 * C1956;
    const double C2314 = C2111 / C82;
    const double C2313 = C906 - C2110;
    const double C2312 = C594 - C2108;
    const double C2311 = C2103 + C2104;
    const double C2310 = C2102 / C82;
    const double C2309 = C2099 / C82;
    const double C2308 = C2097 / C82;
    const double C2307 = C141 * C1986;
    const double C2306 = C2094 + C283;
    const double C2305 = C1979 * C160;
    const double C2304 = C1947 * C160;
    const double C2303 = C2087 / C82;
    const double C2302 = C1334 * C1941;
    const double C2301 = C2085 / C82;
    const double C2300 = C141 * C1940;
    const double C2299 = C1334 * C1934;
    const double C2298 = C2081 / C82;
    const double C2297 = C2079 / C82;
    const double C2296 = C2077 / C82;
    const double C2295 = C2075 / C82;
    const double C2294 = C129 * C1986;
    const double C2293 = C2071 + C1710;
    const double C2292 = C2068 / C82;
    const double C2291 = C129 * C1970;
    const double C2290 = C2066 - C1705;
    const double C2289 = C2065 + C1703;
    const double C2288 = C583 * C1965;
    const double C2287 = C1938 + C611;
    const double C2286 = C1699 - C1930;
    const double C2285 = C2064 - C1698;
    const double C2284 = C2062 + C2063;
    const double C2283 = C354 + C1995;
    const double C2282 = C2061 + C1691;
    const double C2281 = C583 * C1949;
    const double C2280 = C2060 / C82;
    const double C2279 = C2058 / C82;
    const double C2278 = C1438 * C1941;
    const double C2277 = C2056 + C1682;
    const double C2276 = C1460 * C1998;
    const double C2275 = C1438 * C1934;
    const double C2274 = C2055 + C254;
    const double C2273 = C2053 / C82;
    const double C2272 = C2052 / C82;
    const double C2271 = C1669 - C2051;
    const double C2270 = C2050 / C82;
    const double C2269 = C2048 - C2049;
    const double C2268 = C470 - C2047;
    const double C2267 = C2046 / C82;
    const double C2266 = C486 - C2045;
    const double C2265 = C532 * C1981;
    const double C2264 = C533 * C2044;
    const double C2263 = C484 - C2043;
    const double C2262 = C532 * C1972;
    const double C2261 = C455 - C2041;
    const double C2260 = C546 - C2039;
    const double C2259 = C2036 / C82;
    const double C2258 = C2034 / C82;
    const double C2257 = C2030 + C2031;
    const double C2256 = C2029 / C82;
    const double C2255 = C829 - C2026;
    const double C2254 = C2025 / C82;
    const double C2253 = C2024 / C82;
    const double C2252 = C1625 - C2023;
    const double C2251 = C2021 / C82;
    const double C2250 = C2019 / C82;
    const double C2249 = C457 - C2016;
    const double C2248 = C490 - C2014;
    const double C2247 = C2010 + C2011;
    const double C2246 = C2009 / C82;
    const double C2245 = C475 - C2007;
    const double C2244 = C2006 / C82;
    const double C2243 = C487 - C2005;
    const double C2242 = C416 * C1965;
    const double C2241 = C1601 - C2004;
    const double C2240 = C2003 / C82;
    const double C2239 = C2001 - C2002;
    const double C2238 = C417 * C2000;
    const double C2237 = C484 - C1999;
    const double C2236 = C416 * C1949;
    const double C2235 = C410 * C1941;
    const double C2234 = C829 - C1997;
    const double C2233 = C410 * C1934;
    const double C2232 = C1996 + C966;
    const double C2231 = C1995 - C1576;
    const double C2230 = C1573 - C1994;
    const double C2229 = C139 + C1993;
    const double C2228 = C1992 / C82;
    const double C2227 = C1990 / C82;
    const double C2226 = C1988 - C118;
    const double C2225 = C1987 / C82;
    const double C2224 = C1986 * C145;
    const double C2223 = C1985 / C82;
    const double C2222 = C1983 / C82;
    const double C2221 = C78 * C1981;
    const double C2220 = C1980 / C82;
    const double C2219 = C129 * C1979;
    const double C2218 = C1977 + C283;
    const double C2217 = C1976 + C1547;
    const double C2216 = C490 - C1974;
    const double C2215 = C78 * C1972;
    const double C2214 = C1971 / C82;
    const double C2213 = C1970 * C145;
    const double C2212 = C1969 / C82;
    const double C2211 = C1967 / C82;
    const double C2210 = C79 * C1965;
    const double C2209 = C1964 / C82;
    const double C2208 = C139 + C1963;
    const double C2207 = C1962 / C82;
    const double C2206 = C1960 / C82;
    const double C2205 = C1958 - C118;
    const double C2204 = C1957 / C82;
    const double C2203 = C129 * C1956;
    const double C2202 = C1954 + C275;
    const double C2201 = C1953 + C1519;
    const double C2200 = C546 - C1951;
    const double C2199 = C79 * C1949;
    const double C2198 = C1948 / C82;
    const double C2197 = C129 * C1947;
    const double C2196 = C1946 / C82;
    const double C2195 = C1945 - C1510;
    const double C2194 = C1943 + C1507;
    const double C2193 = C487 - C1942;
    const double C2192 = C129 * C1940;
    const double C2191 = C1939 / C82;
    const double C2190 = C1938 - C1501;
    const double C2189 = C1936 + C1498;
    const double C2188 = C486 - C1935;
    const double C2187 = C139 + C1933;
    const double C2186 = C1932 / C82;
    const double C2185 = C1929 + C1930;
    const double C2184 = C1927 + C485;
    const double C2183 = C1925 - C1926;
    const double C2182 = C1924 - C118;
    const double C2625 = C1468 * C2269;
    const double C2624 = C1015 * C2339;
    const double C2623 = C1468 * C2266;
    const double C2622 = -C2391;
    const double C2621 = C1015 * C2337;
    const double C2620 = C1468 * C2263;
    const double C2619 = -C2390;
    const double C2618 = C1913 - C2389;
    const double C2617 = C873 * C2325;
    const double C2616 = C1911 - C2388;
    const double C2615 = C872 * C2249;
    const double C2614 = C872 * C2248;
    const double C2613 = C2386 + C1906;
    const double C2612 = C873 * C2322;
    const double C2611 = C1903 - C2385;
    const double C2610 = C873 * C2271;
    const double C2609 = C1901 - C2384;
    const double C2608 = C873 * C2269;
    const double C2607 = C873 * C2268;
    const double C2606 = C1897 - C2383;
    const double C2605 = C873 * C2266;
    const double C2604 = C2382 / C82;
    const double C2603 = C872 * C2216;
    const double C2602 = C873 * C2263;
    const double C2601 = C2380 / C82;
    const double C2600 = C588 * C2261;
    const double C2599 = C588 * C2260;
    const double C2598 = C2340 + C1788;
    const double C2597 = C1885 - C2377;
    const double C2596 = C589 * C2316;
    const double C2595 = C1883 - C2376;
    const double C2594 = C2375 + C1882;
    const double C2593 = C589 * C2313;
    const double C2592 = C1879 - C2374;
    const double C2591 = C411 * C2312;
    const double C2590 = C411 * C2255;
    const double C2589 = C2372 + C1874;
    const double C2588 = C1871 - C2371;
    const double C2587 = C2314 + C1811;
    const double C2586 = C1869 - C2370;
    const double C2585 = C1352 * C2252;
    const double C2584 = C1867 - C2369;
    const double C2583 = C699 * C2289;
    const double C2582 = C1465 * C2243;
    const double C2581 = -C2368;
    const double C2580 = C1465 * C2239;
    const double C2579 = C699 * C2282;
    const double C2578 = C1465 * C2237;
    const double C2577 = -C2367;
    const double C2576 = C1856 - C2366;
    const double C2575 = C1352 * C2193;
    const double C2574 = C2365 / C82;
    const double C2573 = C411 * C2234;
    const double C2572 = C1352 * C2188;
    const double C2571 = C2363 / C82;
    const double C2570 = C1352 * C2230;
    const double C2569 = C1848 - C2362;
    const double C2568 = C1352 * C2183;
    const double C2567 = C589 * C2245;
    const double C2566 = C1844 - C2361;
    const double C2565 = C589 * C2243;
    const double C2564 = C2360 / C82;
    const double C2563 = C589 * C2241;
    const double C2562 = C1840 - C2359;
    const double C2561 = C589 * C2239;
    const double C2560 = C588 * C2200;
    const double C2559 = C589 * C2237;
    const double C2558 = C2357 / C82;
    const double C2557 = C74 * C2194;
    const double C2556 = C71 * C2193;
    const double C2555 = -C2356;
    const double C2554 = C74 * C2189;
    const double C2553 = C71 * C2188;
    const double C2552 = -C2355;
    const double C2551 = C71 * C2183;
    const double C2550 = C2352 + C2353;
    const double C2549 = C755 + C2317;
    const double C2548 = C142 * C2351;
    const double C2547 = C2314 - C1822;
    const double C2546 = C416 * C2260;
    const double C2545 = C2158 + C2349;
    const double C2544 = C417 * C2316;
    const double C2543 = C1815 - C2348;
    const double C2542 = -C2347;
    const double C2541 = C417 * C2313;
    const double C2540 = C1813 - C2346;
    const double C2539 = C142 * C2345;
    const double C2538 = C1334 * C2332;
    const double C2537 = C2342 + C2343;
    const double C2536 = C2341 + C1802;
    const double C2535 = C868 * C2269;
    const double C2534 = C142 * C2294;
    const double C2533 = C2340 - C1713;
    const double C2532 = C869 * C2339;
    const double C2531 = C868 * C2266;
    const double C2530 = -C2338;
    const double C2529 = C355 + C2253;
    const double C2528 = C869 * C2337;
    const double C2527 = C868 * C2263;
    const double C2526 = -C2336;
    const double C2525 = C142 * C2291;
    const double C2524 = C79 * C2335;
    const double C2523 = C2334 - C1529;
    const double C2522 = C2333 - C1518;
    const double C2521 = C1438 * C2255;
    const double C2520 = C2330 - C1497;
    const double C2519 = C1773 - C2329;
    const double C2518 = C2126 + C2328;
    const double C2517 = C2327 - C1485;
    const double C2516 = C1460 * C2252;
    const double C2515 = C1768 - C2326;
    const double C2514 = C2092 + C2306;
    const double C2513 = C533 * C2325;
    const double C2512 = C1764 - C2324;
    const double C2511 = C532 * C2248;
    const double C2510 = C533 * C2322;
    const double C2509 = C1758 - C2321;
    const double C2508 = C2320 / C82;
    const double C2507 = C2318 + C1754;
    const double C2506 = C2317 - C1752;
    const double C2505 = C141 * C2315;
    const double C2504 = C2314 - C1748;
    const double C2503 = C1334 * C2312;
    const double C2502 = C1334 * C2255;
    const double C2501 = C2101 - C2310;
    const double C2500 = C2098 - C2309;
    const double C2499 = C2096 - C2308;
    const double C2498 = C2307 / C82;
    const double C2497 = -C2305;
    const double C2496 = -C2304;
    const double C2495 = C2086 - C2303;
    const double C2494 = C2302 / C82;
    const double C2493 = C2300 / C82;
    const double C2492 = C1334 * C2277;
    const double C2491 = C1334 * C2234;
    const double C2490 = C2299 / C82;
    const double C2489 = C2078 - C2297;
    const double C2488 = C2295 - C1566;
    const double C2487 = C141 * C2294;
    const double C2486 = C78 * C2293;
    const double C2485 = C2292 - C1546;
    const double C2484 = C141 * C2291;
    const double C2483 = C585 * C2289;
    const double C2482 = C584 * C2243;
    const double C2481 = -C2288;
    const double C2480 = C2285 + C2286;
    const double C2479 = C2284 + C1696;
    const double C2478 = C584 * C2239;
    const double C2477 = C585 * C2282;
    const double C2476 = C584 * C2237;
    const double C2475 = -C2281;
    const double C2474 = C2280 - C1506;
    const double C2473 = C1685 - C2279;
    const double C2472 = C1460 * C2193;
    const double C2471 = C2278 / C82;
    const double C2470 = C1438 * C2234;
    const double C2469 = C1460 * C2188;
    const double C2468 = C2275 / C82;
    const double C2467 = C2054 + C2274;
    const double C2466 = C2273 - C1485;
    const double C2465 = C1460 * C2230;
    const double C2464 = C1673 - C2272;
    const double C2463 = C1460 * C2183;
    const double C2462 = C1944 + C2218;
    const double C2461 = C533 * C2271;
    const double C2460 = C1667 - C2270;
    const double C2459 = C533 * C2269;
    const double C2458 = C533 * C2268;
    const double C2457 = C1660 - C2267;
    const double C2456 = C533 * C2266;
    const double C2455 = C2265 / C82;
    const double C2454 = C532 * C2216;
    const double C2453 = C533 * C2263;
    const double C2452 = C2262 / C82;
    const double C2451 = C79 * C2261;
    const double C2450 = C79 * C2260;
    const double C2449 = C2035 - C2259;
    const double C2448 = C2033 - C2258;
    const double C2447 = C2028 - C2256;
    const double C2446 = C2254 + C1631;
    const double C2445 = C2253 - C1628;
    const double C2444 = C2020 - C2251;
    const double C2443 = C2018 - C2250;
    const double C2442 = C78 * C2249;
    const double C2441 = C78 * C2248;
    const double C2440 = C2008 - C2246;
    const double C2439 = C417 * C2245;
    const double C2438 = C1606 - C2244;
    const double C2437 = C417 * C2243;
    const double C2436 = C2242 / C82;
    const double C2435 = C1937 + C2202;
    const double C2434 = C417 * C2241;
    const double C2433 = C1599 - C2240;
    const double C2432 = C417 * C2239;
    const double C2431 = C416 * C2200;
    const double C2430 = C417 * C2237;
    const double C2429 = C2236 / C82;
    const double C2428 = C415 * C2194;
    const double C2427 = C413 * C2193;
    const double C2426 = -C2235;
    const double C2425 = C415 * C2189;
    const double C2424 = C413 * C2188;
    const double C2423 = -C2233;
    const double C2422 = C2231 - C1577;
    const double C2421 = C413 * C2183;
    const double C2420 = C2229 * be;
    const double C2419 = C2228 - C1566;
    const double C2418 = C1989 - C2227;
    const double C2417 = C2226 * be;
    const double C2416 = -C2224;
    const double C2415 = C2223 - C1557;
    const double C2414 = C1982 - C2222;
    const double C2413 = C2221 / C82;
    const double C2412 = C2219 / C82;
    const double C2411 = C78 * C2217;
    const double C2410 = C78 * C2216;
    const double C2409 = C2215 / C82;
    const double C2408 = -C2213;
    const double C2407 = C2212 - C1538;
    const double C2406 = C1966 - C2211;
    const double C2405 = C2210 / C82;
    const double C2404 = C2208 * be;
    const double C2403 = C2207 - C1529;
    const double C2402 = C1959 - C2206;
    const double C2401 = C2205 * be;
    const double C2400 = C2203 / C82;
    const double C2399 = C79 * C2201;
    const double C2398 = C79 * C2200;
    const double C2397 = C2199 / C82;
    const double C2396 = C2197 / C82;
    const double C2395 = C2192 / C82;
    const double C2394 = C2187 * be;
    const double C2393 = C2184 + C1486;
    const double C2392 = C2182 * be;
    const double C2778 = C1015 * C2536;
    const double C2777 = C1473 * C2417;
    const double C2776 = C2622 / C82;
    const double C2775 = C2619 / C82;
    const double C2774 = C2618 + C1914;
    const double C2773 = C2616 + C1912;
    const double C2772 = C1909 + C2615;
    const double C2771 = C1907 + C2614;
    const double C2770 = C2611 + C1904;
    const double C2769 = C2609 + C1902;
    const double C2768 = C872 * C2417;
    const double C2767 = C2606 + C1898;
    const double C2766 = C1895 - C2604;
    const double C2765 = C1893 + C2603;
    const double C2764 = C1891 - C2601;
    const double C2763 = C1889 + C2600;
    const double C2762 = C1887 + C2599;
    const double C2761 = C2597 + C1886;
    const double C2760 = C2595 + C1884;
    const double C2759 = C2592 + C1880;
    const double C2758 = C1877 + C2591;
    const double C2757 = C1875 + C2590;
    const double C2756 = C2588 + C1872;
    const double C2755 = C2586 + C1870;
    const double C2754 = C2584 + C1868;
    const double C2753 = C2581 / C82;
    const double C2752 = C699 * C2479;
    const double C2751 = C1472 * C2401;
    const double C2750 = C2577 / C82;
    const double C2749 = C2576 + C1857;
    const double C2748 = C1854 - C2574;
    const double C2747 = C1852 + C2573;
    const double C2746 = C1850 - C2571;
    const double C2745 = C2569 + C1849;
    const double C2744 = C411 * C2392;
    const double C2743 = C2566 + C1845;
    const double C2742 = C1842 - C2564;
    const double C2741 = C2562 + C1841;
    const double C2740 = C588 * C2401;
    const double C2739 = C1836 + C2560;
    const double C2738 = C1834 - C2558;
    const double C2737 = C2555 / C82;
    const double C2736 = C2552 / C82;
    const double C2735 = C74 * C2393;
    const double C2734 = C1469 * C2392;
    const double C2733 = C141 * C2420;
    const double C2732 = C2548 / C82;
    const double C2731 = C1819 + C2546;
    const double C2730 = C2404 * C165;
    const double C2729 = C2543 + C1816;
    const double C2728 = C2542 / C82;
    const double C2727 = C2540 + C1814;
    const double C2726 = C2539 / C82;
    const double C2725 = C2153 + C2538;
    const double C2724 = C1334 * C2520;
    const double C2723 = C1334 * C2517;
    const double C2722 = C869 * C2536;
    const double C2721 = C867 * C2417;
    const double C2720 = C2534 / C82;
    const double C2719 = C2530 / C82;
    const double C2718 = C2526 / C82;
    const double C2717 = C2525 / C82;
    const double C2716 = C2139 + C2524;
    const double C2715 = C79 * C2523;
    const double C2714 = C79 * C2522;
    const double C2713 = C1776 + C2521;
    const double C2712 = C2519 + C1774;
    const double C2711 = C2394 * C165;
    const double C2710 = C2515 + C1769;
    const double C2709 = C2512 + C1765;
    const double C2708 = C1761 + C2511;
    const double C2707 = C2509 + C1759;
    const double C2706 = C277 - C2508;
    const double C2705 = C142 * C2404;
    const double C2704 = C2506 - C2114;
    const double C2703 = C2505 / C82;
    const double C2702 = C2107 + C2503;
    const double C2701 = C2106 + C2502;
    const double C2700 = C2420 * C160;
    const double C2699 = C285 - C2498;
    const double C2698 = C2497 / C82;
    const double C2697 = C2496 / C82;
    const double C2696 = C1334 * C2474;
    const double C2695 = C2301 - C2494;
    const double C2694 = C259 - C2493;
    const double C2693 = C2083 + C2492;
    const double C2692 = C2082 + C2491;
    const double C2691 = C2298 - C2490;
    const double C2690 = C1334 * C2466;
    const double C2689 = C1334 * C2392;
    const double C2688 = C129 * C2420;
    const double C2687 = C78 * C2488;
    const double C2686 = C2487 / C82;
    const double C2685 = C2070 + C2486;
    const double C2684 = C78 * C2485;
    const double C2683 = C2484 / C82;
    const double C2682 = C2481 / C82;
    const double C2681 = C129 * C2404;
    const double C2680 = C585 * C2479;
    const double C2679 = C583 * C2401;
    const double C2678 = C2475 / C82;
    const double C2677 = C2473 + C1686;
    const double C2676 = C1683 - C2471;
    const double C2675 = C1680 + C2470;
    const double C2674 = C1678 - C2468;
    const double C2673 = C2394 * C160;
    const double C2672 = C2464 + C1674;
    const double C2671 = C1438 * C2392;
    const double C2670 = C2460 + C1668;
    const double C2669 = C532 * C2417;
    const double C2668 = C2457 + C1661;
    const double C2667 = C1657 - C2455;
    const double C2666 = C1654 + C2454;
    const double C2665 = C1651 - C2452;
    const double C2664 = C2040 + C2451;
    const double C2663 = C2038 + C2450;
    const double C2662 = C142 * C2394;
    const double C2661 = C2445 - C1629;
    const double C2660 = C2015 + C2442;
    const double C2659 = C2013 + C2441;
    const double C2658 = C2438 + C1607;
    const double C2657 = C1603 - C2436;
    const double C2656 = C2433 + C1600;
    const double C2655 = C416 * C2401;
    const double C2654 = C1592 + C2431;
    const double C2653 = C1589 - C2429;
    const double C2652 = C2426 / C82;
    const double C2651 = C2423 / C82;
    const double C2650 = C141 * C2394;
    const double C2649 = C415 * C2393;
    const double C2648 = C410 * C2392;
    const double C2647 = C2420 * C145;
    const double C2646 = C78 * C2419;
    const double C2645 = C78 * C2417;
    const double C2644 = C2416 / C82;
    const double C2643 = C78 * C2415;
    const double C2642 = C2220 - C2413;
    const double C2641 = C285 - C2412;
    const double C2640 = C1975 + C2411;
    const double C2639 = C1973 + C2410;
    const double C2638 = C2214 - C2409;
    const double C2637 = C2408 / C82;
    const double C2636 = C79 * C2407;
    const double C2635 = C2209 - C2405;
    const double C2634 = C2404 * C145;
    const double C2633 = C79 * C2403;
    const double C2632 = C79 * C2401;
    const double C2631 = C277 - C2400;
    const double C2630 = C1952 + C2399;
    const double C2629 = C1950 + C2398;
    const double C2628 = C2198 - C2397;
    const double C2627 = C2196 - C2396;
    const double C2626 = C2191 - C2395;
    const double C2919 = -C2777;
    const double C2918 = C2776 - C1918;
    const double C2917 = C2775 - C1915;
    const double C2916 = C2773 + C2617;
    const double C2915 = C2772 + C1910;
    const double C2914 = C2771 + C1908;
    const double C2913 = C2770 + C2612;
    const double C2912 = C2769 + C2610;
    const double C2911 = C2768 / C82;
    const double C2910 = C2767 + C2607;
    const double C2909 = C2766 + C1896;
    const double C2908 = C2765 + C1894;
    const double C2907 = C2764 + C1892;
    const double C2906 = C141 * C2688;
    const double C2905 = C141 * C2641;
    const double C2904 = C2763 + C1890;
    const double C2903 = C2762 + C1888;
    const double C2902 = C142 * C2681;
    const double C2901 = C2760 + C2596;
    const double C2900 = C142 * C2631;
    const double C2899 = C2759 + C2593;
    const double C2898 = C141 * C2627;
    const double C2897 = C2758 + C1878;
    const double C2896 = C2757 + C1876;
    const double C2895 = C2756 + C2170;
    const double C2894 = C142 * C2650;
    const double C2893 = C2754 + C2585;
    const double C2892 = C2753 - C1864;
    const double C2891 = -C2751;
    const double C2890 = C2750 - C1858;
    const double C2889 = C2749 + C2166;
    const double C2888 = C2748 + C1855;
    const double C2887 = C2747 + C1853;
    const double C2886 = C2746 + C1851;
    const double C2885 = C2745 + C2570;
    const double C2884 = C2744 / C82;
    const double C2883 = C2743 + C2567;
    const double C2882 = C2742 + C1843;
    const double C2881 = C2741 + C2563;
    const double C2880 = C2740 / C82;
    const double C2879 = C2739 + C1837;
    const double C2878 = C2738 + C1835;
    const double C2877 = C2737 - C1831;
    const double C2876 = C2736 - C1828;
    const double C2875 = -C2734;
    const double C2874 = C142 * C2733;
    const double C2873 = C142 * C2699;
    const double C2872 = C1996 - C2732;
    const double C2871 = C142 * C2706;
    const double C2870 = C2731 + C1820;
    const double C2869 = -C2730;
    const double C2868 = C2729 + C2544;
    const double C2867 = C2728 - C1521;
    const double C2866 = C2727 + C2541;
    const double C2865 = C966 - C2726;
    const double C2864 = C2694 * C165;
    const double C2863 = C2151 + C2724;
    const double C2862 = C2650 * C165;
    const double C2861 = C2149 + C2723;
    const double C2860 = C142 * C2688;
    const double C2859 = -C2721;
    const double C2858 = C1938 - C2720;
    const double C2857 = C2719 - C1793;
    const double C2856 = C142 * C2641;
    const double C2855 = C2718 - C1789;
    const double C2854 = C611 - C2717;
    const double C2853 = C2681 * C165;
    const double C2852 = C2136 + C2715;
    const double C2851 = C2631 * C165;
    const double C2850 = C2133 + C2714;
    const double C2849 = C142 * C2627;
    const double C2848 = C2713 + C1777;
    const double C2847 = C2626 * C165;
    const double C2846 = C2712 + C2129;
    const double C2845 = -C2711;
    const double C2844 = C2710 + C2516;
    const double C2843 = C2709 + C2513;
    const double C2842 = C2708 + C1762;
    const double C2841 = C2707 + C2510;
    const double C2840 = C141 * C2706;
    const double C2839 = C141 * C2705;
    const double C2838 = C2254 - C2703;
    const double C2837 = -C2700;
    const double C2836 = C141 * C2699;
    const double C2835 = C2698 - C1549;
    const double C2834 = C2697 - C1510;
    const double C2833 = C2088 + C2696;
    const double C2832 = C141 * C2694;
    const double C2831 = C2080 + C2690;
    const double C2830 = C2689 / C82;
    const double C2829 = C2688 * C160;
    const double C2828 = C2074 + C2687;
    const double C2827 = C614 - C2686;
    const double C2826 = C2641 * C160;
    const double C2825 = C2067 + C2684;
    const double C2824 = C1945 - C2683;
    const double C2823 = C2682 - C1700;
    const double C2822 = C141 * C2681;
    const double C2821 = -C2679;
    const double C2820 = C141 * C2631;
    const double C2819 = C2678 - C1688;
    const double C2818 = C2627 * C160;
    const double C2817 = C2677 + C2059;
    const double C2816 = C2676 + C1684;
    const double C2815 = C141 * C2626;
    const double C2814 = C2675 + C1681;
    const double C2813 = C2674 + C1679;
    const double C2812 = -C2673;
    const double C2811 = C2672 + C2465;
    const double C2810 = C2671 / C82;
    const double C2809 = C2670 + C2461;
    const double C2808 = C2669 / C82;
    const double C2807 = C2668 + C2458;
    const double C2806 = C2667 + C1658;
    const double C2805 = C2666 + C1655;
    const double C2804 = C2665 + C1652;
    const double C2803 = C129 * C2662;
    const double C2802 = C2658 + C2439;
    const double C2801 = C2657 + C1604;
    const double C2800 = C2656 + C2434;
    const double C2799 = C2655 / C82;
    const double C2798 = C2654 + C1593;
    const double C2797 = C2653 + C1590;
    const double C2796 = C2652 - C1584;
    const double C2795 = C2651 - C1579;
    const double C2794 = C129 * C2650;
    const double C2793 = -C2648;
    const double C2792 = -C2647;
    const double C2791 = C1991 + C2646;
    const double C2790 = C2645 / C82;
    const double C2789 = C2644 - C1559;
    const double C2788 = C1984 + C2643;
    const double C2787 = C129 * C2641;
    const double C2786 = C2637 - C1540;
    const double C2785 = C1968 + C2636;
    const double C2784 = -C2634;
    const double C2783 = C1961 + C2633;
    const double C2782 = C2632 / C82;
    const double C2781 = C129 * C2631;
    const double C2780 = C129 * C2627;
    const double C2779 = C129 * C2626;
    const double C3025 = C2919 / C82;
    const double C3024 = C2918 + C1919;
    const double C3023 = C2917 + C1916;
    const double C3022 = C2914 + C2387;
    const double C3021 = C1899 - C2911;
    const double C3020 = C2909 + C2605;
    const double C3019 = C2908 + C2381;
    const double C3018 = C2907 + C2602;
    const double C3017 = C142 * C2906;
    const double C3016 = C142 * C2827;
    const double C3015 = C142 * C2905;
    const double C3014 = C141 * C2854;
    const double C3013 = C2903 + C2378;
    const double C3012 = C141 * C2902;
    const double C3011 = C141 * C2900;
    const double C3010 = C142 * C2898;
    const double C3009 = C2896 + C2373;
    const double C3008 = C129 * C2894;
    const double C3007 = C2892 + C1865;
    const double C3006 = C2891 / C82;
    const double C3005 = C2890 + C1859;
    const double C3004 = C2888 + C2575;
    const double C3003 = C2887 + C2364;
    const double C3002 = C2886 + C2572;
    const double C3001 = C1846 - C2884;
    const double C3000 = C2882 + C2565;
    const double C2999 = C1838 - C2880;
    const double C2998 = C2879 + C2358;
    const double C2997 = C2878 + C2559;
    const double C2996 = C2877 + C1832;
    const double C2995 = C2876 + C1829;
    const double C2994 = C2875 / C82;
    const double C2993 = C2874 / C82;
    const double C2992 = C2091 + C2873;
    const double C2991 = C142 * C2872;
    const double C2990 = C2161 + C2871;
    const double C2989 = C2870 + C2350;
    const double C2988 = C2869 / C82;
    const double C2987 = C141 * C2867;
    const double C2986 = C142 * C2865;
    const double C2985 = C744 + C2864;
    const double C2984 = -C2862;
    const double C2983 = C2860 / C82;
    const double C2982 = C2859 / C82;
    const double C2981 = C142 * C2858;
    const double C2980 = C2857 + C1794;
    const double C2979 = C1931 + C2856;
    const double C2978 = C2855 + C1790;
    const double C2977 = C142 * C2854;
    const double C2976 = -C2853;
    const double C2975 = C354 + C2851;
    const double C2974 = C1492 + C2849;
    const double C2973 = C2848 + C2331;
    const double C2972 = C350 + C2847;
    const double C2971 = C2845 / C82;
    const double C2970 = C2842 + C2323;
    const double C2969 = C142 * C2835;
    const double C2968 = C2118 + C2840;
    const double C2967 = C2839 / C82;
    const double C2966 = C141 * C2838;
    const double C2965 = C142 * C2834;
    const double C2964 = C2837 / C82;
    const double C2963 = C2095 + C2836;
    const double C2962 = C2084 + C2832;
    const double C2961 = C2296 - C2830;
    const double C2960 = -C2829;
    const double C2959 = C141 * C2827;
    const double C2958 = C355 + C2826;
    const double C2957 = C141 * C2824;
    const double C2956 = C2823 + C1701;
    const double C2955 = C2822 / C82;
    const double C2954 = C2821 / C82;
    const double C2953 = C1931 + C2820;
    const double C2952 = C2819 + C1689;
    const double C2951 = C352 + C2818;
    const double C2950 = C2816 + C2472;
    const double C2949 = C1492 + C2815;
    const double C2948 = C2814 + C2276;
    const double C2947 = C2813 + C2469;
    const double C2946 = C2812 / C82;
    const double C2945 = C1671 - C2810;
    const double C2944 = C1663 - C2808;
    const double C2943 = C142 * C2789;
    const double C2942 = C2806 + C2456;
    const double C2941 = C2805 + C2264;
    const double C2940 = C2804 + C2453;
    const double C2939 = C142 * C2786;
    const double C2938 = C2803 / C82;
    const double C2937 = C141 * C2789;
    const double C2936 = C141 * C2786;
    const double C2935 = C2801 + C2437;
    const double C2934 = C1595 - C2799;
    const double C2933 = C2798 + C2238;
    const double C2932 = C2797 + C2430;
    const double C2931 = C2796 + C1585;
    const double C2930 = C2795 + C1580;
    const double C2929 = C2794 / C82;
    const double C2928 = C2793 / C82;
    const double C2927 = C2792 / C82;
    const double C2926 = C2225 - C2790;
    const double C2925 = C1978 + C2787;
    const double C2924 = C2784 / C82;
    const double C2923 = C2204 - C2782;
    const double C2922 = C1955 + C2781;
    const double C2921 = C2195 + C2780;
    const double C2920 = C2190 + C2779;
    const double C3107 = C3025 - C1921;
    const double C3106 = C3024 + C2623;
    const double C3105 = C3023 + C2620;
    const double C3104 = C3021 + C1900;
    const double C3103 = C3017 / C82;
    const double C3102 = C2064 + C3016;
    const double C3101 = C1995 + C3015;
    const double C3100 = C2148 + C3014;
    const double C3099 = C3012 / C82;
    const double C3098 = C2253 + C3011;
    const double C3097 = C3010 - C1577;
    const double C3096 = C142 * C2949;
    const double C3095 = C3008 / C82;
    const double C3094 = C3007 + C2582;
    const double C3093 = C3006 - C1861;
    const double C3092 = C3005 + C2578;
    const double C3091 = C3001 + C1847;
    const double C3090 = C2999 + C1839;
    const double C3089 = C2996 + C2556;
    const double C3088 = C2995 + C2553;
    const double C3087 = C2994 - C1825;
    const double C3086 = C2354 - C2993;
    const double C3085 = C142 * C2992;
    const double C3084 = C2547 + C2991;
    const double C3083 = C141 * C2990;
    const double C3082 = C2988 - C1531;
    const double C3081 = C2126 + C2987;
    const double C3080 = C2155 + C2986;
    const double C3079 = C1334 * C2985;
    const double C3078 = C2984 / C82;
    const double C3077 = C2344 - C2983;
    const double C3076 = C2982 - C1798;
    const double C3075 = C2533 + C2981;
    const double C3074 = C2980 + C2531;
    const double C3073 = C142 * C2979;
    const double C3072 = C2978 + C2527;
    const double C3071 = C2142 + C2977;
    const double C3070 = C2976 / C82;
    const double C3069 = C79 * C2975;
    const double C3068 = C142 * C2974;
    const double C3067 = C2971 - C1491;
    const double C3066 = C142 * C2963;
    const double C3065 = C2054 + C2969;
    const double C3064 = C141 * C2968;
    const double C3063 = C2507 - C2967;
    const double C3062 = C2504 + C2966;
    const double C3061 = C2274 + C2965;
    const double C3060 = C142 * C2962;
    const double C3059 = C2964 - C1568;
    const double C3058 = C2960 / C82;
    const double C3057 = C2073 + C2959;
    const double C3056 = C78 * C2958;
    const double C3055 = C2290 + C2957;
    const double C3054 = C2956 + C2482;
    const double C3053 = C2287 - C2955;
    const double C3052 = C2954 - C1692;
    const double C3051 = C141 * C2953;
    const double C3050 = C2952 + C2476;
    const double C3049 = C141 * C2949;
    const double C3048 = C2946 - C1491;
    const double C3047 = C2945 + C1672;
    const double C3046 = C2944 + C1664;
    const double C3045 = C1937 + C2943;
    const double C3044 = C142 * C2925;
    const double C3043 = C2202 + C2939;
    const double C3042 = C142 * C2922;
    const double C3041 = C142 * C2921;
    const double C3040 = C142 * C2920;
    const double C3039 = C2446 - C2938;
    const double C3038 = C2218 + C2937;
    const double C3037 = C141 * C2925;
    const double C3036 = C1944 + C2936;
    const double C3035 = C2934 + C1596;
    const double C3034 = C141 * C2922;
    const double C3033 = C141 * C2921;
    const double C3032 = C2931 + C2427;
    const double C3031 = C141 * C2920;
    const double C3030 = C2930 + C2424;
    const double C3029 = C2232 - C2929;
    const double C3028 = C2928 - C1569;
    const double C3027 = C2927 - C1568;
    const double C3026 = C2924 - C1531;
    const double C3182 = C3107 + C1922;
    const double C3181 = C3106 + C1920;
    const double C3180 = C3105 + C1917;
    const double C3179 = C873 * C3102;
    const double C3178 = C873 * C3101;
    const double C3177 = C3104 + C2608;
    const double C3176 = C2379 - C3103;
    const double C3175 = C589 * C3100;
    const double C3174 = C2598 - C3099;
    const double C3173 = C589 * C3098;
    const double C3172 = C1352 * C3097;
    const double C3171 = C1352 * C3096;
    const double C3170 = C2587 - C3095;
    const double C3169 = C3094 + C1866;
    const double C3168 = C3093 + C1862;
    const double C3167 = C3092 + C1860;
    const double C3166 = C3091 + C2568;
    const double C3165 = C3090 + C2561;
    const double C3164 = C3089 + C1833;
    const double C3163 = C3088 + C1830;
    const double C3162 = C3087 + C1826;
    const double C3161 = C142 * C3086;
    const double C3160 = C2549 + C3085;
    const double C3159 = C2160 + C3083;
    const double C3158 = C141 * C3082;
    const double C3157 = C1334 * C3080;
    const double C3156 = C2152 + C3079;
    const double C3155 = C3078 - C1576;
    const double C3154 = C142 * C3077;
    const double C3153 = C3076 + C1799;
    const double C3152 = C3074 + C1795;
    const double C3151 = C2529 + C3073;
    const double C3150 = C3072 + C1791;
    const double C3149 = C79 * C3071;
    const double C3148 = C3070 - C1698;
    const double C3147 = C2135 + C3069;
    const double C3146 = C2132 + C3068;
    const double C3145 = C129 * C3067;
    const double C3144 = C142 * C3059;
    const double C3143 = C2089 + C3066;
    const double C3142 = C2319 + C3064;
    const double C3141 = C141 * C3063;
    const double C3140 = C1334 * C3061;
    const double C3139 = C1334 * C3060;
    const double C3138 = C142 * C3048;
    const double C3137 = C3058 - C1717;
    const double C3136 = C78 * C3057;
    const double C3135 = C2069 + C3056;
    const double C3134 = C3054 + C1702;
    const double C3133 = C141 * C3053;
    const double C3132 = C3052 + C1693;
    const double C3131 = C2283 + C3051;
    const double C3130 = C3050 + C1690;
    const double C3129 = C2057 + C3049;
    const double C3128 = C129 * C3048;
    const double C3127 = C3047 + C2463;
    const double C3126 = C142 * C3027;
    const double C3125 = C3046 + C2459;
    const double C3124 = C1928 + C3044;
    const double C3123 = C79 * C3043;
    const double C3122 = C142 * C3026;
    const double C3121 = C79 * C3042;
    const double C3120 = C3041 - C2185;
    const double C3119 = C129 * C3039;
    const double C3118 = C141 * C3027;
    const double C3117 = C78 * C3038;
    const double C3116 = C78 * C3037;
    const double C3115 = C141 * C3026;
    const double C3114 = C3035 + C2432;
    const double C3113 = C1928 + C3034;
    const double C3112 = C3032 + C1586;
    const double C3111 = C3031 - C2185;
    const double C3110 = C3030 + C1581;
    const double C3109 = C129 * C3029;
    const double C3108 = C3028 + C1570;
    const double C3236 = C3182 + C2625;
    const double C3235 = C3181 + C2624;
    const double C3234 = C3180 + C2621;
    const double C3233 = C873 * C3176;
    const double C3232 = C2915 + C3179;
    const double C3231 = C2613 + C3178;
    const double C3230 = C2904 + C3175;
    const double C3229 = C589 * C3174;
    const double C3228 = C2594 + C3173;
    const double C3227 = C2897 + C3172;
    const double C3226 = C2589 + C3171;
    const double C3225 = C1352 * C3170;
    const double C3224 = C3169 + C2583;
    const double C3223 = C3168 + C2580;
    const double C3222 = C3167 + C2579;
    const double C3221 = C3164 + C2557;
    const double C3220 = C3163 + C2554;
    const double C3219 = C3162 + C2551;
    const double C3218 = C2550 + C3161;
    const double C3217 = C2545 + C3158;
    const double C3216 = C2154 + C3157;
    const double C3215 = C1334 * C3155;
    const double C3214 = C2537 + C3154;
    const double C3213 = C3153 + C2535;
    const double C3212 = C3152 + C2532;
    const double C3211 = C3150 + C2528;
    const double C3210 = C2141 + C3149;
    const double C3209 = C79 * C3148;
    const double C3208 = C2518 + C3145;
    const double C3207 = C2514 + C3144;
    const double C3206 = C2704 + C3141;
    const double C3205 = C2109 + C3140;
    const double C3204 = C2105 + C3139;
    const double C3203 = C1334 * C3138;
    const double C3202 = C78 * C3137;
    const double C3201 = C2072 + C3136;
    const double C3200 = C3134 + C2483;
    const double C3199 = C2480 + C3133;
    const double C3198 = C3132 + C2478;
    const double C3197 = C3130 + C2477;
    const double C3196 = C2467 + C3128;
    const double C3195 = C2462 + C3126;
    const double C3194 = C2042 + C3123;
    const double C3193 = C79 * C3122;
    const double C3192 = C2032 + C3121;
    const double C3191 = C2661 + C3119;
    const double C3190 = C78 * C3118;
    const double C3189 = C2017 + C3117;
    const double C3188 = C2012 + C3116;
    const double C3187 = C2435 + C3115;
    const double C3186 = C3112 + C2428;
    const double C3185 = C3110 + C2425;
    const double C3184 = C2422 + C3109;
    const double C3183 = C3108 + C2421;
    const double C3251 = C3236 + C1923;
    const double C3250 = C2774 + C3233;
    const double C3249 = C2761 + C3229;
    const double C3248 = C2755 + C3225;
    const double C3247 = C3223 + C1863;
    const double C3246 = C3219 + C1827;
    const double C3245 = C2150 + C3215;
    const double C3244 = C3213 + C1800;
    const double C3243 = C2138 + C3209;
    const double C3242 = C2100 + C3203;
    const double C3241 = C2076 + C3202;
    const double C3240 = C3198 + C1694;
    const double C3239 = C2037 + C3193;
    const double C3238 = C2022 + C3190;
    const double C3237 = C3183 + C1571;
    const double C3257 = C3251 + C2778;
    const double C3256 = C3247 + C2752;
    const double C3255 = C3246 + C2735;
    const double C3254 = C3244 + C2722;
    const double C3253 = C3240 + C2680;
    const double C3252 = C3237 + C2649;
    const double d2nexx200100 =
        (2 * Pi *
         ((-C59 * C2392) / C82 - C388 * C426 - C385 * C323 + C73 * C2183 +
          C372 * C368 + C75 * C2393 + C300 * C379 +
          C77 * (2 * C360 + C1928 - C2185 +
                 C129 * (C1931 - C1491 + C1492 +
                         C129 * (C2186 + C259 - (C129 * C2394) / C82)))) *
         C78 * C79) /
        C82;
    const double d2nexx200010 =
        (2 * Pi *
         (C3252 * C78 * C416 +
          ((-C410 * C1572) / C82 - C509 * C433 + C510 * C434 + C413 * C2230 +
           C503 * C436 + C415 * C3184) *
              C78 * C417)) /
        C82;
    const double d2nexx200001 =
        (2 * Pi *
         (C3252 * C532 + ((-C410 * C1624) / C82 - C509 * C536 + C510 * C537 +
                          C413 * C2252 + C503 * C539 + C415 * C3191) *
                             C533) *
         C79) /
        C82;
    const double d2nexx020100 =
        (2 * Pi *
         (C3127 * C78 * C583 + C2811 * C78 * C584 +
          (C591 * C631 + C1438 * C2466 + C592 * C618 + C1460 * C3196) * C78 *
              C585)) /
        C82;
    const double d2nexx020010 =
        (2 * Pi *
         (C2961 * C78 * C689 + C2489 * C78 * C690 + C2831 * C78 * C691 +
          ((C767 * C134) / C82 + C1334 * ((-2 * C435) / C82 + C141 * C3048)) *
              C78 * C692)) /
        C82;
    const double d2nexx020001 = (2 * Pi *
                                 ((C2961 * C532 + C2499 * C533) * C583 +
                                  (C2489 * C532 + C2500 * C533) * C584 +
                                  (C2831 * C532 + C3242 * C533) * C585)) /
                                C82;
    const double d2nexx002100 =
        (2 * Pi *
         (C3127 * C867 + C2844 * C868 +
          (C591 * C907 + C1438 * C2517 + C592 * C894 + C1460 * C3208) * C869) *
         C79) /
        C82;
    const double d2nexx002010 =
        (2 * Pi *
         ((C2961 * C867 + C2499 * C868 + C2861 * C869) * C416 +
          (C2489 * C867 + C2500 * C868 + C3245 * C869) * C417)) /
        C82;
    const double d2nexx002001 =
        (2 * Pi *
         (C2961 * C1005 + C2499 * C1006 + C2861 * C1007 +
          ((C1079 * C134) / C82 + C1334 * ((-2 * C538) / C82 + C142 * C3067)) *
              C1008) *
         C79) /
        C82;
    const double d2nexx110100 =
        (2 * Pi *
         (C3255 * C78 * C588 +
          ((-C1469 * C1572) / C82 - C377 * C433 + C1139 * C434 + C71 * C2230 +
           C1140 * C436 + C74 * C3184) *
              C78 * C589)) /
        C82;
    const double d2nexx110010 =
        (2 * Pi *
         (C3166 * C78 * C1472 + C2885 * C78 * C1465 +
          (C1164 * C631 + C411 * C2466 + C1165 * C618 + C1352 * C3196) * C78 *
              C699)) /
        C82;
    const double d2nexx110001 = (2 * Pi *
                                 ((C3166 * C532 + C2893 * C533) * C588 +
                                  (C2885 * C532 + C3248 * C533) * C589)) /
                                C82;
    const double d2nexx101100 =
        (2 * Pi *
         (C3255 * C872 + ((-C1469 * C1624) / C82 - C377 * C536 + C1139 * C537 +
                          C71 * C2252 + C1140 * C539 + C74 * C3191) *
                             C873) *
         C79) /
        C82;
    const double d2nexx101010 = (2 * Pi *
                                 ((C3166 * C872 + C2893 * C873) * C416 +
                                  (C2885 * C872 + C3248 * C873) * C417)) /
                                C82;
    const double d2nexx101001 =
        (2 * Pi *
         (C3166 * C1473 + C2893 * C1468 +
          (C1164 * C907 + C411 * C2517 + C1165 * C894 + C1352 * C3208) *
              C1015) *
         C79) /
        C82;
    const double d2nexx011100 =
        (2 * Pi *
         ((C3127 * C872 + C2844 * C873) * C588 +
          (C2811 * C872 + (C591 * C827 - (C1438 * C1736) / C82 + C592 * C1192 +
                           C1460 * C3170) *
                              C873) *
              C589)) /
        C82;
    const double d2nexx011010 = (2 * Pi *
                                 ((C2961 * C872 + C2499 * C873) * C1472 +
                                  (C2489 * C872 + C2500 * C873) * C1465 +
                                  (C2831 * C872 + C3242 * C873) * C699)) /
                                C82;
    const double d2nexx011001 =
        (2 * Pi *
         ((C2961 * C1473 + C2499 * C1468 + C2861 * C1015) * C588 +
          (C2489 * C1473 + C2500 * C1468 + C3245 * C1015) * C589)) /
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
         ((-C59 * C1934) / C82 - C388 * C438 - C385 * C303 + C73 * C2188 +
          C372 * C329 + C75 * C2189 + C300 * C362 +
          C77 * (2 * C350 + C1937 + C129 * C2920)) *
         C78 * C79) /
        C82;
    const double d2nexy200010 =
        (2 * Pi *
         (C3185 * C78 * C416 + (C410 * C2234 - C509 * C471 + C510 * C472 +
                                C413 * C1998 + C503 * C473 + C415 * C3111) *
                                   C78 * C417)) /
        C82;
    const double d2nexy200001 =
        (2 * Pi *
         (C3185 * C532 + ((-C410 * C1632) / C82 - C509 * C540 + C510 * C541 +
                          C413 * C1633 + C503 * C542 + C415 * C3040) *
                             C533) *
         C79) /
        C82;
    const double d2nexy020100 =
        (2 * Pi *
         (C2947 * C78 * C583 + C2948 * C78 * C584 +
          (C591 * C647 + C1438 * C2277 + C592 * C659 + C1460 * C3129) * C78 *
              C585)) /
        C82;
    const double d2nexy020010 =
        (2 * Pi *
         (C2691 * C78 * C689 + C2692 * C78 * C690 + C2693 * C78 * C691 +
          ((C789 * C134) / C82 + C1334 * (2 * C744 + C2274 + C141 * C2962)) *
              C78 * C692)) /
        C82;
    const double d2nexy020001 = (2 * Pi *
                                 ((C2691 * C532 + C2501 * C533) * C583 +
                                  (C2692 * C532 + C2311 * C533) * C584 +
                                  (C2693 * C532 + C3204 * C533) * C585)) /
                                C82;
    const double d2nexy002100 =
        (2 * Pi *
         (C2947 * C867 + C2846 * C868 +
          (C591 * C908 + C1438 * C2520 + C592 * C896 + C1460 * C2972) * C869) *
         C79) /
        C82;
    const double d2nexy002010 =
        (2 * Pi *
         ((C2691 * C867 + C2501 * C868 + C2863 * C869) * C416 +
          (C2692 * C867 + C2311 * C868 + C3156 * C869) * C417)) /
        C82;
    const double d2nexy002001 =
        (2 * Pi *
         (C2691 * C1005 + C2501 * C1006 + C2863 * C1007 +
          ((C1080 * C134) / C82 +
           C1334 * ((-2 * C142 * C265) / C82 +
                    C142 * ((-C1940 * C165) / C82 - C1501))) *
              C1008) *
         C79) /
        C82;
    const double d2nexy110100 =
        (2 * Pi *
         (C3220 * C78 * C588 + (C1469 * C2234 - C377 * C471 + C1139 * C472 +
                                C71 * C1998 + C1140 * C473 + C74 * C3111) *
                                   C78 * C589)) /
        C82;
    const double d2nexy110010 =
        (2 * Pi *
         (C3002 * C78 * C1472 + C3003 * C78 * C1465 +
          (C1164 * C647 + C411 * C2277 + C1165 * C659 + C1352 * C3129) * C78 *
              C699)) /
        C82;
    const double d2nexy110001 = (2 * Pi *
                                 ((C3002 * C532 + C2895 * C533) * C588 +
                                  (C3003 * C532 + C3226 * C533) * C589)) /
                                C82;
    const double d2nexy101100 =
        (2 * Pi *
         (C3220 * C872 + ((-C1469 * C1632) / C82 - C377 * C540 + C1139 * C541 +
                          C71 * C1633 + C1140 * C542 + C74 * C3040) *
                             C873) *
         C79) /
        C82;
    const double d2nexy101010 = (2 * Pi *
                                 ((C3002 * C872 + C2895 * C873) * C416 +
                                  (C3003 * C872 + C3226 * C873) * C417)) /
                                C82;
    const double d2nexy101001 =
        (2 * Pi *
         (C3002 * C1473 + C2895 * C1468 +
          (C1164 * C908 + C411 * C2520 + C1165 * C896 + C1352 * C2972) *
              C1015) *
         C79) /
        C82;
    const double d2nexy011100 =
        (2 * Pi *
         ((C2947 * C872 + C2846 * C873) * C588 +
          (C2948 * C872 +
           (C591 * C830 + C1438 * C1740 + C592 * C1190 + C1460 * C3096) *
               C873) *
              C589)) /
        C82;
    const double d2nexy011010 = (2 * Pi *
                                 ((C2691 * C872 + C2501 * C873) * C1472 +
                                  (C2692 * C872 + C2311 * C873) * C1465 +
                                  (C2693 * C872 + C3204 * C873) * C699)) /
                                C82;
    const double d2nexy011001 =
        (2 * Pi *
         ((C2691 * C1473 + C2501 * C1468 + C2863 * C1015) * C588 +
          (C2692 * C1473 + C2311 * C1468 + C3156 * C1015) * C589)) /
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
         ((-C59 * C1941) / C82 - C388 * C444 - C385 * C309 + C73 * C2193 +
          C372 * C334 + C75 * C2194 + C300 * C363 +
          C77 * (2 * C352 + C1944 + C129 * C2921)) *
         C78 * C79) /
        C82;
    const double d2nexz200010 =
        (2 * Pi *
         (C3186 * C78 * C416 +
          ((-C410 * C1587) / C82 - C509 * C447 + C510 * C448 + C413 * C1588 +
           C503 * C449 + C415 * C3033) *
              C78 * C417)) /
        C82;
    const double d2nexz200001 =
        (2 * Pi *
         (C3186 * C532 + (C410 * C2255 - C509 * C551 + C510 * C552 +
                          C413 * C2027 + C503 * C553 + C415 * C3120) *
                             C533) *
         C79) /
        C82;
    const double d2nexz020100 =
        (2 * Pi *
         (C2950 * C78 * C583 + C2817 * C78 * C584 +
          (C591 * C634 + C1438 * C2474 + C592 * C642 + C1460 * C2951) * C78 *
              C585)) /
        C82;
    const double d2nexz020010 =
        (2 * Pi *
         (C2695 * C78 * C689 + C2495 * C78 * C690 + C2833 * C78 * C691 +
          ((C769 * C134) / C82 + C1334 * ((-2 * C963) / C82 + C141 * C2834)) *
              C78 * C692)) /
        C82;
    const double d2nexz020001 = (2 * Pi *
                                 ((C2695 * C532 + C2701 * C533) * C583 +
                                  (C2495 * C532 + C2702 * C533) * C584 +
                                  (C2833 * C532 + C3205 * C533) * C585)) /
                                C82;
    const double d2nexz002100 =
        (2 * Pi *
         (C2950 * C867 + C2973 * C868 +
          (C591 * C921 + C1438 * C2332 + C592 * C922 + C1460 * C3146) * C869) *
         C79) /
        C82;
    const double d2nexz002010 =
        (2 * Pi *
         ((C2695 * C867 + C2701 * C868 + C2725 * C869) * C416 +
          (C2495 * C867 + C2702 * C868 + C3216 * C869) * C417)) /
        C82;
    const double d2nexz002001 =
        (2 * Pi *
         (C2695 * C1005 + C2701 * C1006 + C2725 * C1007 +
          ((C1101 * C134) / C82 +
           C1334 * (2 * C1058 + C2328 +
                    C142 * (C1631 - C1510 +
                            C142 * (C259 - (C142 * C1947) / C82)))) *
              C1008) *
         C79) /
        C82;
    const double d2nexz110100 =
        (2 * Pi *
         (C3221 * C78 * C588 +
          ((-C1469 * C1587) / C82 - C377 * C447 + C1139 * C448 + C71 * C1588 +
           C1140 * C449 + C74 * C3033) *
              C78 * C589)) /
        C82;
    const double d2nexz110010 =
        (2 * Pi *
         (C3004 * C78 * C1472 + C2889 * C78 * C1465 +
          (C1164 * C634 + C411 * C2474 + C1165 * C642 + C1352 * C2951) * C78 *
              C699)) /
        C82;
    const double d2nexz110001 = (2 * Pi *
                                 ((C3004 * C532 + C3009 * C533) * C588 +
                                  (C2889 * C532 + C3227 * C533) * C589)) /
                                C82;
    const double d2nexz101100 =
        (2 * Pi *
         (C3221 * C872 + (C1469 * C2255 - C377 * C551 + C1139 * C552 +
                          C71 * C2027 + C1140 * C553 + C74 * C3120) *
                             C873) *
         C79) /
        C82;
    const double d2nexz101010 = (2 * Pi *
                                 ((C3004 * C872 + C3009 * C873) * C416 +
                                  (C2889 * C872 + C3227 * C873) * C417)) /
                                C82;
    const double d2nexz101001 =
        (2 * Pi *
         (C3004 * C1473 + C3009 * C1468 +
          (C1164 * C921 + C411 * C2332 + C1165 * C922 + C1352 * C3146) *
              C1015) *
         C79) /
        C82;
    const double d2nexz011100 =
        (2 * Pi *
         ((C2950 * C872 + C2973 * C873) * C588 +
          (C2817 * C872 +
           (C591 * C840 + C1438 * C2312 + C592 * C1194 + C1460 * C3097) *
               C873) *
              C589)) /
        C82;
    const double d2nexz011010 = (2 * Pi *
                                 ((C2695 * C872 + C2701 * C873) * C1472 +
                                  (C2495 * C872 + C2702 * C873) * C1465 +
                                  (C2833 * C872 + C3205 * C873) * C699)) /
                                C82;
    const double d2nexz011001 =
        (2 * Pi *
         ((C2695 * C1473 + C2701 * C1468 + C2725 * C1015) * C588 +
          (C2495 * C1473 + C2702 * C1468 + C3216 * C1015) * C589)) /
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
         (C2628 * C59 + C2629 * C73 + C2630 * C75 +
          ((C379 * C143) / C82 + C79 * (2 * C354 + C2202 + C129 * C2922)) *
              C77) *
         C78) /
        C82;
    const double d2neyx200010 =
        (2 * Pi *
         (C2932 * C410 + C2933 * C413 +
          (C504 * C368 + C416 * C2201 + C489 * C436 + C417 * C3113) * C415) *
         C78) /
        C82;
    const double d2neyx200001 =
        (2 * Pi *
         ((C2628 * C410 + C2629 * C413 + C2630 * C415) * C532 +
          (C2447 * C410 + C2257 * C413 + C3192 * C415) * C533)) /
        C82;
    const double d2neyx020100 =
        (2 * Pi *
         (C3197 * C1438 + (C583 * C2200 - C667 * C323 + C666 * C434 +
                           C584 * C2000 + C658 * C618 + C585 * C3131) *
                              C1460) *
         C78) /
        C82;
    const double d2neyx020010 =
        (2 * Pi *
         ((-C689 * C1949) / C82 - C805 * C426 - C804 * C433 + C690 * C2237 +
          C794 * C631 + C691 * C2282 + C775 * C767 +
          C692 * (2 * C752 + C2054 +
                  C141 * (C1996 - C1521 +
                          C141 * (C2186 - (C141 * C1956) / C82)))) *
         C1334 * C78) /
        C82;
    const double d2neyx020001 =
        (2 * Pi *
         (C3197 * C1334 * C532 +
          ((-C583 * C1637) / C82 - C667 * C536 + C666 * C827 + C584 * C2313 +
           C658 * C828 + C585 * C3062) *
              C1334 * C533)) /
        C82;
    const double d2neyx002100 = (2 * Pi *
                                 ((C2628 * C1438 + C2629 * C1460) * C867 +
                                  (C2447 * C1438 + C2257 * C1460) * C868 +
                                  (C2850 * C1438 + C3147 * C1460) * C869)) /
                                C82;
    const double d2neyx002010 =
        (2 * Pi *
         (C2932 * C1334 * C867 + C2866 * C1334 * C868 +
          (C504 * C907 + C416 * C2522 + C489 * C978 + C417 * C3081) * C1334 *
              C869)) /
        C82;
    const double d2neyx002001 =
        (2 * Pi *
         (C2628 * C1334 * C1005 + C2447 * C1334 * C1006 +
          C2850 * C1334 * C1007 +
          ((C1079 * C143) / C82 + C79 * ((-2 * C834) / C82 + C142 * C2867)) *
              C1334 * C1008)) /
        C82;
    const double d2neyx110100 =
        (2 * Pi *
         (C2997 * C1469 + C2998 * C71 +
          (C1141 * C368 + C588 * C2201 + C1142 * C436 + C589 * C3113) * C74) *
         C78) /
        C82;
    const double d2neyx110010 =
        (2 * Pi *
         (C3222 * C411 + (C1472 * C2200 - C785 * C323 + C1166 * C434 +
                          C1465 * C2000 + C1167 * C618 + C699 * C3131) *
                             C1352) *
         C78) /
        C82;
    const double d2neyx110001 = (2 * Pi *
                                 ((C2997 * C411 + C2998 * C1352) * C532 +
                                  (C2899 * C411 + C3228 * C1352) * C533)) /
                                C82;
    const double d2neyx101100 =
        (2 * Pi *
         ((C2628 * C1469 + C2629 * C71 + C2630 * C74) * C872 +
          (C2447 * C1469 + C2257 * C71 + C3192 * C74) * C873)) /
        C82;
    const double d2neyx101010 =
        (2 * Pi *
         ((C2932 * C411 + C2933 * C1352) * C872 +
          (C2866 * C411 +
           (C504 * C537 + C416 * C1639 + C489 * C1192 + C417 * C3098) * C1352) *
              C873)) /
        C82;
    const double d2neyx101001 = (2 * Pi *
                                 ((C2628 * C411 + C2629 * C1352) * C1473 +
                                  (C2447 * C411 + C2257 * C1352) * C1468 +
                                  (C2850 * C411 + C3147 * C1352) * C1015)) /
                                C82;
    const double d2neyx011100 = (2 * Pi *
                                 ((C2997 * C1438 + C2998 * C1460) * C872 +
                                  (C2899 * C1438 + C3228 * C1460) * C873)) /
                                C82;
    const double d2neyx011010 =
        (2 * Pi *
         (C3222 * C1334 * C872 +
          ((-C1472 * C1637) / C82 - C785 * C536 + C1166 * C827 + C1465 * C2313 +
           C1167 * C828 + C699 * C3062) *
              C1334 * C873)) /
        C82;
    const double d2neyx011001 =
        (2 * Pi *
         (C2997 * C1334 * C1473 + C2899 * C1334 * C1468 +
          (C1141 * C907 + C588 * C2522 + C1142 * C978 + C589 * C3081) * C1334 *
              C1015)) /
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
         (C2923 * C59 + C2402 * C73 + C2783 * C75 +
          ((C362 * C143) / C82 + C79 * ((-2 * C610) / C82 + C129 * C3026)) *
              C77) *
         C78) /
        C82;
    const double d2neyy200010 =
        (2 * Pi *
         (C3114 * C410 + C2800 * C413 +
          (C504 * C329 + C416 * C2403 + C489 * C473 + C417 * C3187) * C415) *
         C78) /
        C82;
    const double d2neyy200001 =
        (2 * Pi *
         ((C2923 * C410 + C2402 * C413 + C2783 * C415) * C532 +
          (C2448 * C410 + C2449 * C413 + C3239 * C415) * C533)) /
        C82;
    const double d2neyy020100 =
        (2 * Pi *
         (C3253 * C1438 + ((-C583 * C1526) / C82 - C667 * C303 + C666 * C472 +
                           C584 * C2241 + C658 * C659 + C585 * C3199) *
                              C1460) *
         C78) /
        C82;
    const double d2neyy020010 =
        (2 * Pi *
         ((-C689 * C2401) / C82 - C805 * C438 - C804 * C471 + C690 * C2239 +
          C794 * C647 + C691 * C2479 + C775 * C789 +
          C692 * (2 * C753 + C2089 - (C141 * C1728 - C275 + C2090) +
                  C141 * (C2091 - C1531 + C721 - C216 +
                          C141 * (C2191 + C277 - (C141 * C2404) / C82)))) *
         C1334 * C78) /
        C82;
    const double d2neyy020001 =
        (2 * Pi *
         (C3253 * C1334 * C532 +
          ((-C583 * C1642) / C82 - C667 * C540 + C666 * C830 + C584 * C2316 +
           C658 * C831 + C585 * C3206) *
              C1334 * C533)) /
        C82;
    const double d2neyy002100 = (2 * Pi *
                                 ((C2923 * C1438 + C2402 * C1460) * C867 +
                                  (C2448 * C1438 + C2449 * C1460) * C868 +
                                  (C2852 * C1438 + C3243 * C1460) * C869)) /
                                C82;
    const double d2neyy002010 =
        (2 * Pi *
         (C3114 * C1334 * C867 + C2868 * C1334 * C868 +
          (C504 * C908 + C416 * C2523 + C489 * C974 + C417 * C3217) * C1334 *
              C869)) /
        C82;
    const double d2neyy002001 =
        (2 * Pi *
         (C2923 * C1334 * C1005 + C2448 * C1334 * C1006 +
          C2852 * C1334 * C1007 +
          ((C1080 * C143) / C82 + C79 * ((-2 * C836) / C82 + C142 * C3082)) *
              C1334 * C1008)) /
        C82;
    const double d2neyy110100 =
        (2 * Pi *
         (C3165 * C1469 + C2881 * C71 +
          (C1141 * C329 + C588 * C2403 + C1142 * C473 + C589 * C3187) * C74) *
         C78) /
        C82;
    const double d2neyy110010 =
        (2 * Pi *
         (C3256 * C411 + ((-C1472 * C1526) / C82 - C785 * C303 + C1166 * C472 +
                          C1465 * C2241 + C1167 * C659 + C699 * C3199) *
                             C1352) *
         C78) /
        C82;
    const double d2neyy110001 = (2 * Pi *
                                 ((C3165 * C411 + C2881 * C1352) * C532 +
                                  (C2901 * C411 + C3249 * C1352) * C533)) /
                                C82;
    const double d2neyy101100 =
        (2 * Pi *
         ((C2923 * C1469 + C2402 * C71 + C2783 * C74) * C872 +
          (C2448 * C1469 + C2449 * C71 + C3239 * C74) * C873)) /
        C82;
    const double d2neyy101010 =
        (2 * Pi *
         ((C3114 * C411 + C2800 * C1352) * C872 +
          (C2868 * C411 +
           (C504 * C541 - (C416 * C1644) / C82 + C489 * C1190 + C417 * C3174) *
               C1352) *
              C873)) /
        C82;
    const double d2neyy101001 = (2 * Pi *
                                 ((C2923 * C411 + C2402 * C1352) * C1473 +
                                  (C2448 * C411 + C2449 * C1352) * C1468 +
                                  (C2852 * C411 + C3243 * C1352) * C1015)) /
                                C82;
    const double d2neyy011100 = (2 * Pi *
                                 ((C3165 * C1438 + C2881 * C1460) * C872 +
                                  (C2901 * C1438 + C3249 * C1460) * C873)) /
                                C82;
    const double d2neyy011010 =
        (2 * Pi *
         (C3256 * C1334 * C872 +
          ((-C1472 * C1642) / C82 - C785 * C540 + C1166 * C830 + C1465 * C2316 +
           C1167 * C831 + C699 * C3206) *
              C1334 * C873)) /
        C82;
    const double d2neyy011001 =
        (2 * Pi *
         (C3165 * C1334 * C1473 + C2901 * C1334 * C1468 +
          (C1141 * C908 + C588 * C2523 + C1142 * C974 + C589 * C3217) * C1334 *
              C1015)) /
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
         (C2635 * C59 + C2406 * C73 + C2785 * C75 +
          ((C363 * C143) / C82 + C79 * ((-2 * C612) / C82 + C129 * C2786)) *
              C77) *
         C78) /
        C82;
    const double d2neyz200010 =
        (2 * Pi *
         (C2935 * C410 + C2802 * C413 +
          (C504 * C334 + C416 * C2407 + C489 * C449 + C417 * C3036) * C415) *
         C78) /
        C82;
    const double d2neyz200001 =
        (2 * Pi *
         ((C2635 * C410 + C2406 * C413 + C2785 * C415) * C532 +
          (C2663 * C410 + C2664 * C413 + C3194 * C415) * C533)) /
        C82;
    const double d2neyz020100 =
        (2 * Pi *
         (C3200 * C1438 + ((-C583 * C1535) / C82 - C667 * C309 + C666 * C448 +
                           C584 * C2245 + C658 * C642 + C585 * C3055) *
                              C1460) *
         C78) /
        C82;
    const double d2neyz020010 =
        (2 * Pi *
         ((-C689 * C1965) / C82 - C805 * C444 - C804 * C447 + C690 * C2243 +
          C794 * C634 + C691 * C2289 + C775 * C769 +
          C692 * (2 * C754 + C2092 +
                  C141 * (C2093 - C1540 +
                          C141 * (C2196 - (C141 * C1970) / C82)))) *
         C1334 * C78) /
        C82;
    const double d2neyz020001 =
        (2 * Pi *
         (C3200 * C1334 * C532 + (C583 * C2260 - C667 * C551 + C666 * C840 +
                                  C584 * C2116 + C658 * C841 + C585 * C3142) *
                                     C1334 * C533)) /
        C82;
    const double d2neyz002100 = (2 * Pi *
                                 ((C2635 * C1438 + C2406 * C1460) * C867 +
                                  (C2663 * C1438 + C2664 * C1460) * C868 +
                                  (C2716 * C1438 + C3210 * C1460) * C869)) /
                                C82;
    const double d2neyz002010 =
        (2 * Pi *
         (C2935 * C1334 * C867 + C2989 * C1334 * C868 +
          (C504 * C921 + C416 * C2335 + C489 * C983 + C417 * C3159) * C1334 *
              C869)) /
        C82;
    const double d2neyz002001 =
        (2 * Pi *
         (C2635 * C1334 * C1005 + C2663 * C1334 * C1006 +
          C2716 * C1334 * C1007 +
          ((C1101 * C143) / C82 + C79 * (2 * C845 + C2349 + C142 * C2990)) *
              C1334 * C1008)) /
        C82;
    const double d2neyz110100 =
        (2 * Pi *
         (C3000 * C1469 + C2883 * C71 +
          (C1141 * C334 + C588 * C2407 + C1142 * C449 + C589 * C3036) * C74) *
         C78) /
        C82;
    const double d2neyz110010 =
        (2 * Pi *
         (C3224 * C411 + ((-C1472 * C1535) / C82 - C785 * C309 + C1166 * C448 +
                          C1465 * C2245 + C1167 * C642 + C699 * C3055) *
                             C1352) *
         C78) /
        C82;
    const double d2neyz110001 = (2 * Pi *
                                 ((C3000 * C411 + C2883 * C1352) * C532 +
                                  (C3013 * C411 + C3230 * C1352) * C533)) /
                                C82;
    const double d2neyz101100 =
        (2 * Pi *
         ((C2635 * C1469 + C2406 * C71 + C2785 * C74) * C872 +
          (C2663 * C1469 + C2664 * C71 + C3194 * C74) * C873)) /
        C82;
    const double d2neyz101010 =
        (2 * Pi *
         ((C2935 * C411 + C2802 * C1352) * C872 +
          (C2989 * C411 +
           (C504 * C552 + C416 * C2261 + C489 * C1194 + C417 * C3100) * C1352) *
              C873)) /
        C82;
    const double d2neyz101001 = (2 * Pi *
                                 ((C2635 * C411 + C2406 * C1352) * C1473 +
                                  (C2663 * C411 + C2664 * C1352) * C1468 +
                                  (C2716 * C411 + C3210 * C1352) * C1015)) /
                                C82;
    const double d2neyz011100 = (2 * Pi *
                                 ((C3000 * C1438 + C2883 * C1460) * C872 +
                                  (C3013 * C1438 + C3230 * C1460) * C873)) /
                                C82;
    const double d2neyz011010 =
        (2 * Pi *
         (C3224 * C1334 * C872 + (C1472 * C2260 - C785 * C551 + C1166 * C840 +
                                  C1465 * C2116 + C1167 * C841 + C699 * C3142) *
                                     C1334 * C873)) /
        C82;
    const double d2neyz011001 =
        (2 * Pi *
         (C3000 * C1334 * C1473 + C3013 * C1334 * C1468 +
          (C1141 * C921 + C588 * C2335 + C1142 * C983 + C589 * C3159) * C1334 *
              C1015)) /
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
         (C2638 * C79 * C59 + C2639 * C79 * C73 + C2640 * C79 * C75 +
          ((C379 * C144) / C82 + C78 * (2 * C355 + C2218 + C129 * C2925)) *
              C79 * C77)) /
        C82;
    const double d2nezx200010 = (2 * Pi *
                                 ((C2638 * C416 + C2440 * C417) * C410 +
                                  (C2639 * C416 + C2247 * C417) * C413 +
                                  (C2640 * C416 + C3188 * C417) * C415)) /
                                C82;
    const double d2nezx200001 =
        (2 * Pi *
         (C2940 * C79 * C410 + C2941 * C79 * C413 +
          (C561 * C368 + C532 * C2217 + C558 * C539 + C533 * C3124) * C79 *
              C415)) /
        C82;
    const double d2nezx020100 =
        (2 * Pi *
         ((C2638 * C583 + C2440 * C584 + C2825 * C585) * C1438 +
          (C2639 * C583 + C2247 * C584 + C3135 * C585) * C1460)) /
        C82;
    const double d2nezx020010 =
        (2 * Pi *
         (C2638 * C689 + C2440 * C690 + C2825 * C691 +
          ((C767 * C144) / C82 + C78 * ((-2 * C970) / C82 + C141 * C2835)) *
              C692) *
         C1334) /
        C82;
    const double d2nezx020001 =
        (2 * Pi *
         (C2940 * C583 + C2841 * C584 +
          (C561 * C631 + C532 * C2485 + C558 * C828 + C533 * C3065) * C585) *
         C1334) /
        C82;
    const double d2nezx002100 =
        (2 * Pi *
         (C3211 * C79 * C1438 + (C867 * C2216 - C939 * C323 + C938 * C537 +
                                 C868 * C2044 + C931 * C894 + C869 * C3151) *
                                    C79 * C1460)) /
        C82;
    const double d2nezx002010 =
        (2 * Pi *
         (C3211 * C416 + ((-C867 * C1610) / C82 - C939 * C433 + C938 * C827 +
                          C868 * C2322 + C931 * C978 + C869 * C3084) *
                             C417) *
         C1334) /
        C82;
    const double d2nezx002001 =
        (2 * Pi *
         ((-C1005 * C1972) / C82 - C1117 * C426 - C1116 * C536 + C1006 * C2263 +
          C1106 * C907 + C1007 * C2337 + C1087 * C1079 +
          C1008 * (2 * C1065 + C2126 +
                   C142 * (C2254 - C1549 +
                           C142 * (C2186 - (C142 * C1979) / C82)))) *
         C79 * C1334) /
        C82;
    const double d2nezx110100 = (2 * Pi *
                                 ((C2638 * C588 + C2440 * C589) * C1469 +
                                  (C2639 * C588 + C2247 * C589) * C71 +
                                  (C2640 * C588 + C3188 * C589) * C74)) /
                                C82;
    const double d2nezx110010 =
        (2 * Pi *
         ((C2638 * C1472 + C2440 * C1465 + C2825 * C699) * C411 +
          (C2639 * C1472 + C2247 * C1465 + C3135 * C699) * C1352)) /
        C82;
    const double d2nezx110001 =
        (2 * Pi *
         ((C2940 * C588 + C2841 * C589) * C411 +
          (C2941 * C588 +
           (C561 * C434 + C532 * C1612 + C558 * C1192 + C533 * C3101) * C589) *
              C1352)) /
        C82;
    const double d2nezx101100 =
        (2 * Pi *
         (C3018 * C79 * C1469 + C3019 * C79 * C71 +
          (C1216 * C368 + C872 * C2217 + C1217 * C539 + C873 * C3124) * C79 *
              C74)) /
        C82;
    const double d2nezx101010 = (2 * Pi *
                                 ((C3018 * C416 + C2913 * C417) * C411 +
                                  (C3019 * C416 + C3231 * C417) * C1352)) /
                                C82;
    const double d2nezx101001 =
        (2 * Pi *
         (C3234 * C79 * C411 + (C1473 * C2216 - C1097 * C323 + C1259 * C537 +
                                C1468 * C2044 + C1260 * C894 + C1015 * C3151) *
                                   C79 * C1352)) /
        C82;
    const double d2nezx011100 = (2 * Pi *
                                 ((C3018 * C588 + C2913 * C589) * C1438 +
                                  (C3019 * C588 + C3231 * C589) * C1460)) /
                                C82;
    const double d2nezx011010 =
        (2 * Pi *
         (C3018 * C1472 + C2913 * C1465 +
          (C1216 * C631 + C872 * C2485 + C1217 * C828 + C873 * C3065) * C699) *
         C1334) /
        C82;
    const double d2nezx011001 =
        (2 * Pi *
         (C3234 * C588 + ((-C1473 * C1610) / C82 - C1097 * C433 + C1259 * C827 +
                          C1468 * C2322 + C1260 * C978 + C1015 * C3084) *
                             C589) *
         C1334) /
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
         (C2642 * C79 * C59 + C2414 * C79 * C73 + C2788 * C79 * C75 +
          ((C362 * C144) / C82 + C78 * ((-2 * C613) / C82 + C129 * C2789)) *
              C79 * C77)) /
        C82;
    const double d2nezy200010 = (2 * Pi *
                                 ((C2642 * C416 + C2659 * C417) * C410 +
                                  (C2414 * C416 + C2660 * C417) * C413 +
                                  (C2788 * C416 + C3189 * C417) * C415)) /
                                C82;
    const double d2nezy200001 =
        (2 * Pi *
         (C2942 * C79 * C410 + C2807 * C79 * C413 +
          (C561 * C329 + C532 * C2415 + C558 * C542 + C533 * C3045) * C79 *
              C415)) /
        C82;
    const double d2nezy020100 =
        (2 * Pi *
         ((C2642 * C583 + C2659 * C584 + C2685 * C585) * C1438 +
          (C2414 * C583 + C2660 * C584 + C3201 * C585) * C1460)) /
        C82;
    const double d2nezy020010 =
        (2 * Pi *
         (C2642 * C689 + C2659 * C690 + C2685 * C691 +
          ((C789 * C144) / C82 + C78 * (2 * C755 + C2306 + C141 * C2963)) *
              C692) *
         C1334) /
        C82;
    const double d2nezy020001 =
        (2 * Pi *
         (C2942 * C583 + C2970 * C584 +
          (C561 * C647 + C532 * C2293 + C558 * C831 + C533 * C3143) * C585) *
         C1334) /
        C82;
    const double d2nezy002100 =
        (2 * Pi *
         (C3212 * C79 * C1438 +
          ((-C867 * C1554) / C82 - C939 * C303 + C938 * C541 + C868 * C2268 +
           C931 * C896 + C869 * C3075) *
              C79 * C1460)) /
        C82;
    const double d2nezy002010 =
        (2 * Pi *
         (C3212 * C416 + (C867 * C2248 - C939 * C471 + C938 * C830 +
                          C868 * C2121 + C931 * C974 + C869 * C3160) *
                             C417) *
         C1334) /
        C82;
    const double d2nezy002001 =
        (2 * Pi *
         ((-C1005 * C1981) / C82 - C1117 * C438 - C1116 * C540 + C1006 * C2266 +
          C1106 * C908 + C1007 * C2339 + C1087 * C1080 +
          C1008 * (2 * C1066 + C2158 +
                   C142 * (C2318 - C1559 +
                           C142 * (C2191 - (C142 * C1986) / C82)))) *
         C79 * C1334) /
        C82;
    const double d2nezy110100 = (2 * Pi *
                                 ((C2642 * C588 + C2659 * C589) * C1469 +
                                  (C2414 * C588 + C2660 * C589) * C71 +
                                  (C2788 * C588 + C3189 * C589) * C74)) /
                                C82;
    const double d2nezy110010 =
        (2 * Pi *
         ((C2642 * C1472 + C2659 * C1465 + C2685 * C699) * C411 +
          (C2414 * C1472 + C2660 * C1465 + C3201 * C699) * C1352)) /
        C82;
    const double d2nezy110001 =
        (2 * Pi *
         ((C2942 * C588 + C2970 * C589) * C411 +
          (C2807 * C588 +
           (C561 * C472 + C532 * C2249 + C558 * C1190 + C533 * C3102) * C589) *
              C1352)) /
        C82;
    const double d2nezy101100 =
        (2 * Pi *
         (C3020 * C79 * C1469 + C2910 * C79 * C71 +
          (C1216 * C329 + C872 * C2415 + C1217 * C542 + C873 * C3045) * C79 *
              C74)) /
        C82;
    const double d2nezy101010 = (2 * Pi *
                                 ((C3020 * C416 + C3022 * C417) * C411 +
                                  (C2910 * C416 + C3232 * C417) * C1352)) /
                                C82;
    const double d2nezy101001 =
        (2 * Pi *
         (C3235 * C79 * C411 +
          ((-C1473 * C1554) / C82 - C1097 * C303 + C1259 * C541 +
           C1468 * C2268 + C1260 * C896 + C1015 * C3075) *
              C79 * C1352)) /
        C82;
    const double d2nezy011100 = (2 * Pi *
                                 ((C3020 * C588 + C3022 * C589) * C1438 +
                                  (C2910 * C588 + C3232 * C589) * C1460)) /
                                C82;
    const double d2nezy011010 =
        (2 * Pi *
         (C3020 * C1472 + C3022 * C1465 +
          (C1216 * C647 + C872 * C2293 + C1217 * C831 + C873 * C3143) * C699) *
         C1334) /
        C82;
    const double d2nezy011001 =
        (2 * Pi *
         (C3235 * C588 + (C1473 * C2248 - C1097 * C471 + C1259 * C830 +
                          C1468 * C2121 + C1260 * C974 + C1015 * C3160) *
                             C589) *
         C1334) /
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
         (C2926 * C79 * C59 + C2418 * C79 * C73 + C2791 * C79 * C75 +
          ((C363 * C144) / C82 + C78 * ((-2 * C615) / C82 + C129 * C3027)) *
              C79 * C77)) /
        C82;
    const double d2nezz200010 = (2 * Pi *
                                 ((C2926 * C416 + C2443 * C417) * C410 +
                                  (C2418 * C416 + C2444 * C417) * C413 +
                                  (C2791 * C416 + C3238 * C417) * C415)) /
                                C82;
    const double d2nezz200001 =
        (2 * Pi *
         (C3125 * C79 * C410 + C2809 * C79 * C413 +
          (C561 * C334 + C532 * C2419 + C558 * C553 + C533 * C3195) * C79 *
              C415)) /
        C82;
    const double d2nezz020100 =
        (2 * Pi *
         ((C2926 * C583 + C2443 * C584 + C2828 * C585) * C1438 +
          (C2418 * C583 + C2444 * C584 + C3241 * C585) * C1460)) /
        C82;
    const double d2nezz020010 =
        (2 * Pi *
         (C2926 * C689 + C2443 * C690 + C2828 * C691 +
          ((C769 * C144) / C82 + C78 * ((-2 * C971) / C82 + C141 * C3059)) *
              C692) *
         C1334) /
        C82;
    const double d2nezz020001 =
        (2 * Pi *
         (C3125 * C583 + C2843 * C584 +
          (C561 * C634 + C532 * C2488 + C558 * C841 + C533 * C3207) * C585) *
         C1334) /
        C82;
    const double d2nezz002100 =
        (2 * Pi *
         (C3254 * C79 * C1438 +
          ((-C867 * C1563) / C82 - C939 * C309 + C938 * C552 + C868 * C2271 +
           C931 * C922 + C869 * C3214) *
              C79 * C1460)) /
        C82;
    const double d2nezz002010 =
        (2 * Pi *
         (C3254 * C416 + ((-C867 * C1620) / C82 - C939 * C447 + C938 * C840 +
                          C868 * C2325 + C931 * C983 + C869 * C3218) *
                             C417) *
         C1334) /
        C82;
    const double d2nezz002001 =
        (2 * Pi *
         ((-C1005 * C2417) / C82 - C1117 * C444 - C1116 * C551 + C1006 * C2269 +
          C1106 * C921 + C1007 * C2536 + C1087 * C1101 +
          C1008 * (2 * C1067 + C2160 -
                   (C142 * (C216 - C1038) - C283 + (C1024 * be) / C82) +
                   C142 * (C2118 - C1568 + C1038 - C216 +
                           C142 * (C2196 + C285 - (C142 * C2420) / C82)))) *
         C79 * C1334) /
        C82;
    const double d2nezz110100 = (2 * Pi *
                                 ((C2926 * C588 + C2443 * C589) * C1469 +
                                  (C2418 * C588 + C2444 * C589) * C71 +
                                  (C2791 * C588 + C3238 * C589) * C74)) /
                                C82;
    const double d2nezz110010 =
        (2 * Pi *
         ((C2926 * C1472 + C2443 * C1465 + C2828 * C699) * C411 +
          (C2418 * C1472 + C2444 * C1465 + C3241 * C699) * C1352)) /
        C82;
    const double d2nezz110001 =
        (2 * Pi *
         ((C3125 * C588 + C2843 * C589) * C411 +
          (C2809 * C588 +
           (C561 * C448 - (C532 * C1622) / C82 + C558 * C1194 + C533 * C3176) *
               C589) *
              C1352)) /
        C82;
    const double d2nezz101100 =
        (2 * Pi *
         (C3177 * C79 * C1469 + C2912 * C79 * C71 +
          (C1216 * C334 + C872 * C2419 + C1217 * C553 + C873 * C3195) * C79 *
              C74)) /
        C82;
    const double d2nezz101010 = (2 * Pi *
                                 ((C3177 * C416 + C2916 * C417) * C411 +
                                  (C2912 * C416 + C3250 * C417) * C1352)) /
                                C82;
    const double d2nezz101001 =
        (2 * Pi *
         (C3257 * C79 * C411 +
          ((-C1473 * C1563) / C82 - C1097 * C309 + C1259 * C552 +
           C1468 * C2271 + C1260 * C922 + C1015 * C3214) *
              C79 * C1352)) /
        C82;
    const double d2nezz011100 = (2 * Pi *
                                 ((C3177 * C588 + C2916 * C589) * C1438 +
                                  (C2912 * C588 + C3250 * C589) * C1460)) /
                                C82;
    const double d2nezz011010 =
        (2 * Pi *
         (C3177 * C1472 + C2916 * C1465 +
          (C1216 * C634 + C872 * C2488 + C1217 * C841 + C873 * C3207) * C699) *
         C1334) /
        C82;
    const double d2nezz011001 =
        (2 * Pi *
         (C3257 * C588 + ((-C1473 * C1620) / C82 - C1097 * C447 + C1259 * C840 +
                          C1468 * C2325 + C1260 * C983 + C1015 * C3218) *
                             C589) *
         C1334) /
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
