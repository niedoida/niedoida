/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ne_pd_BC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
// Automatically generated, do not edit
void vne_second_derivative_12_23(double ae,
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
    const double C1278 = ae + be;
    const double C1277 = ae * be;
    const double C1276 = xA - xB;
    const double C1282 = C1276 * be;
    const double C1281 = C1276 * ae;
    const double C1280 = 2 * C1278;
    const double C1279 = std::pow(C1276, 2);
    const double C1283 = C1279 * C1277;
    const double C1284 = C1283 / C1278;
    const double C1285 = -C1284;
    const double C1286 = std::exp(C1285);
    const double C1287 = C1286 * C1281;
    const double C1303 = std::pow(C1280, -1);
    const double C1302 = std::pow(C1278, 2);
    const double C1304 = C1303 * C1286;
    const double C1307 = 2 * C1302;
    const double C1315 = yA - yB;
    const double C1316 = std::pow(C1315, 2);
    const double C1317 = C1316 * C1277;
    const double C1318 = C1317 / C1278;
    const double C1319 = -C1318;
    const double C1320 = std::exp(C1319);
    const double C1331 = zA - zB;
    const double C1332 = std::pow(C1331, 2);
    const double C1333 = C1332 * C1277;
    const double C1334 = C1333 / C1278;
    const double C1335 = -C1334;
    const double C1336 = std::exp(C1335);
    const double C1353 = C1315 * be;
    const double C1352 = C1315 * ae;
    const double C1354 = C1320 * C1352;
    const double C1356 = C1303 * C1320;
    const double C1370 = C1331 * be;
    const double C1369 = C1331 * ae;
    const double C1371 = C1336 * C1369;
    const double C1373 = C1303 * C1336;
    const double C1404 = C1373 * C1370;
    const double C1403 = C1371 / C1307;
    const double C1402 = C1371 * C1370;
    const double C1401 = C1356 * C1353;
    const double C1400 = C1354 / C1307;
    const double C1399 = C1354 * C1353;
    const double C1398 = C1303 * C1336;
    const double C1397 = C1336 / C1280;
    const double C1396 = C1331 * ae;
    const double C1395 = C1303 * C1320;
    const double C1394 = std::pow(C1280, -2);
    const double C1393 = C1320 / C1280;
    const double C1392 = C1315 * ae;
    const double C1391 = 4 * C1302;
    const double C1390 = C1304 * C1282;
    const double C1389 = std::pow(C1280, -1);
    const double C1388 = C1286 * C1282;
    const double C1387 = C1287 / C1278;
    const double C1386 = std::pow(C1278, 2);
    const double C1385 = C1287 * C1282;
    const double C1384 = C1286 / C1280;
    const double C1414 = C1404 / C1278;
    const double C1413 = C1402 / C1302;
    const double C1412 = C1401 / C1278;
    const double C1411 = C1399 / C1302;
    const double C1410 = C1336 * C1396;
    const double C1409 = C1320 * C1392;
    const double C1408 = C1390 / C1278;
    const double C1407 = C1389 * C1286;
    const double C1406 = C1388 / C1278;
    const double C1405 = C1385 / C1386;
    const double C1419 = C1403 - C1414;
    const double C1418 = C1397 - C1413;
    const double C1417 = C1400 - C1412;
    const double C1416 = C1393 - C1411;
    const double C1415 = C1384 - C1405;
    const double C59 = (C1415 * C1281) / C1278 + (C1387 - C1406) / C1280;
    const double C71 = C1287 / (2 * C1386) - (C1407 * C1282) / C1278;
    const double C73 = ((C1287 / (2 * C1302) - C1408) * C1281) / C1278 +
                       (2 * C1304 + C1384 - C1385 / C1302) / C1280;
    const double C74 = C1304 / C1280;
    const double C75 =
        (C1281 * C1304) / C1307 + (C1287 / C1307 - C1408) / C1280;
    const double C77 = C1304 / C1391;
    const double C78 = std::exp(-(std::pow(zA - zB, 2) * C1277) / C1278);
    const double C79 = std::exp(-(std::pow(yA - yB, 2) * C1277) / C1278);
    const double C410 = -C1406;
    const double C412 = (C1320 * std::pow(C1392, 2)) / C1302 + C1393;
    const double C413 = (2 * C1303 * C1409) / C1278;
    const double C414 = C1394 * C1320;
    const double C418 = C1409 / C1278;
    const double C556 = (C1336 * std::pow(C1396, 2)) / C1302 + C1397;
    const double C557 = (2 * C1303 * C1410) / C1278;
    const double C558 = C1394 * C1336;
    const double C562 = C1410 / C1278;
    const double C761 = (C1286 * std::pow(C1281, 2)) / C1302 + C1384;
    const double C762 = (2 * C1303 * C1287) / C1278;
    const double C763 = C1394 * C1286;
    const double C764 = -(C1320 * C1315 * be) / C1278;
    const double C809 = (C1416 * C1352) / C1278 +
                        (C1354 / C1278 - (C1320 * C1353) / C1278) / C1280;
    const double C810 = (C1417 * C1352) / C1278 + (2 * C1356 + C1416) / C1280;
    const double C811 = (C1352 * C1356) / C1307 + C1417 / C1280;
    const double C812 = C1356 / C1391;
    const double C818 = C1356 / C1280;
    const double C1056 = -(C1336 * C1331 * be) / C1278;
    const double C1111 = (C1418 * C1369) / C1278 +
                         (C1371 / C1278 - (C1336 * C1370) / C1278) / C1280;
    const double C1112 = (C1419 * C1369) / C1278 + (2 * C1373 + C1418) / C1280;
    const double C1113 = (C1369 * C1373) / C1307 + C1419 / C1280;
    const double C1114 = C1373 / C1391;
    const double C1120 = C1373 / C1280;
    const double C101 = zA - zB;
    const double C100 = yA - yB;
    const double C99 = be * zB;
    const double C98 = ae * zA;
    const double C97 = be * yB;
    const double C96 = ae * yA;
    const double C95 = bs[5];
    const double C94 = 0 * ae;
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
    const double C122 = C108 * C1286;
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
    const double C207 = C169 + C1407;
    const double C206 = C1286 - C168;
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
    const double C300 = C257 + C111;
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
    const double C324 = C296 * ae;
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
    const double C357 = C342 + C1387;
    const double C356 = C290 - C341;
    const double C369 = C361 - C178;
    const double C368 = C359 - C152;
    const double C367 = C358 / C103;
    const double C366 = C85 * C358;
    const double C365 = C357 * be;
    const double C364 = C356 / C103;
    const double C373 = C129 * C369;
    const double C372 = C367 + C344;
    const double C371 = C366 + C71;
    const double C370 = C365 / C82;
    const double C376 = C348 + C373;
    const double C375 = C371 * ae;
    const double C374 = C246 - C370;
    const double C379 = C376 - C215;
    const double C378 = C375 / C82;
    const double C377 = C374 + C149;
    const double C381 = C377 / C103;
    const double C380 = C85 * C377;
    const double C383 = C381 + C378;
    const double C382 = C380 + C1415;
    const double C385 = C383 + C249;
    const double C384 = C382 * ae;
    const double C386 = C384 / C82;
    const double C387 = C364 + C386;
    const double C388 = C387 + C358;
    const double C463 = C129 * C320;
    const double C462 = C129 * C285;
    const double C461 = C129 * C287;
    const double C460 = C163 * C83;
    const double C459 = C129 * C281;
    const double C458 = C129 * C277;
    const double C457 = C129 * C317;
    const double C456 = C159 * C83;
    const double C455 = 0 * ae;
    const double C454 = C127 / C105;
    const double C453 = 0 * ae;
    const double C452 = C100 * C143;
    const double C451 = 0 * be;
    const double C450 = 0 * be;
    const double C449 = 2 * C227;
    const double C448 = C225 * C160;
    const double C447 = C141 * C311;
    const double C446 = C141 * C267;
    const double C445 = C223 * be;
    const double C444 = 2 * C188;
    const double C443 = C141 * C178;
    const double C442 = 2 * C222;
    const double C441 = C141 * C137;
    const double C440 = C141 * C263;
    const double C439 = C137 * be;
    const double C438 = C141 * C305;
    const double C437 = C141 * C260;
    const double C436 = C218 * be;
    const double C435 = 2 * C183;
    const double C434 = C328 * C160;
    const double C433 = C211 * C160;
    const double C432 = C141 * C254;
    const double C431 = C141 * C253;
    const double C430 = C141 * C325;
    const double C429 = C141 * C250;
    const double C428 = C151 * C83;
    const double C427 = C209 * be;
    const double C426 = C134 / C82;
    const double C425 = 0 * be;
    const double C424 = 2 * C170;
    const double C423 = -C106;
    const double C422 = C206 * be;
    const double C489 = C460 * C103;
    const double C488 = C456 * C103;
    const double C487 = C455 / C82;
    const double C486 = C453 / C82;
    const double C485 = C450 / C120;
    const double C484 = C452 / C82;
    const double C483 = C451 / C120;
    const double C482 = C100 * C450;
    const double C481 = C129 * C449;
    const double C480 = 2 * C448;
    const double C479 = -2 * C445;
    const double C478 = C129 * C442;
    const double C477 = C440 - C137;
    const double C476 = C439 / C82;
    const double C475 = C438 - C152;
    const double C474 = C437 + C118;
    const double C473 = -2 * C436;
    const double C472 = C325 + C434;
    const double C471 = 2 * C433;
    const double C470 = C431 * be;
    const double C469 = C428 * C103;
    const double C468 = -2 * C427;
    const double C467 = -C426;
    const double C466 = C425 / C82;
    const double C465 = C423 / C103;
    const double C464 = C422 / C82;
    const double C504 = -2 * C489;
    const double C503 = C486 - C454;
    const double C502 = C79 - C484;
    const double C501 = C482 / C82;
    const double C500 = C481 * C160;
    const double C499 = C267 + C480;
    const double C498 = C479 / C82;
    const double C497 = C141 * C478;
    const double C496 = C141 * C477;
    const double C495 = C473 / C82;
    const double C494 = C250 + C471;
    const double C493 = C470 / C82;
    const double C492 = C468 / C82;
    const double C491 = C467 / C103;
    const double C490 = C464 - C465;
    const double C512 = C503 / C103;
    const double C511 = C100 * C503;
    const double C510 = C502 * ae;
    const double C509 = 0 - C501;
    const double C508 = C311 + C500;
    const double C507 = C497 - C178;
    const double C506 = C260 + C496;
    const double C505 = C466 - C491;
    const double C518 = C512 + C487;
    const double C517 = C511 + C1395;
    const double C516 = C510 / C82;
    const double C515 = C509 * ae;
    const double C514 = C141 * C507;
    const double C513 = C506 - C441;
    const double C522 = C517 * ae;
    const double C521 = C516 - C485;
    const double C520 = C515 / C82;
    const double C519 = C305 + C514;
    const double C527 = C522 / C82;
    const double C526 = C521 / C103;
    const double C525 = C100 * C521;
    const double C524 = C520 - C483;
    const double C523 = C519 - C443;
    const double C530 = C526 + C527;
    const double C529 = C525 + C418;
    const double C528 = C524 / C103;
    const double C531 = C529 * ae;
    const double C532 = C531 / C82;
    const double C533 = C528 + C532;
    const double C534 = C533 + C503;
    const double C588 = 0 * ae;
    const double C587 = C128 / C105;
    const double C586 = 0 * ae;
    const double C585 = C101 * C144;
    const double C584 = 0 * be;
    const double C583 = 0 * be;
    const double C582 = -2 * C488;
    const double C581 = C142 * C178;
    const double C580 = C142 * C481;
    const double C579 = C142 * C137;
    const double C578 = C142 * C270;
    const double C577 = C142 * C311;
    const double C576 = C142 * C267;
    const double C575 = C478 * C165;
    const double C574 = C220 * C165;
    const double C573 = C142 * C305;
    const double C572 = C142 * C260;
    const double C571 = C328 * C165;
    const double C570 = C211 * C165;
    const double C569 = C142 * C254;
    const double C568 = C142 * C253;
    const double C567 = C142 * C325;
    const double C566 = C142 * C250;
    const double C603 = C588 / C82;
    const double C602 = C586 / C82;
    const double C601 = C583 / C120;
    const double C600 = C585 / C82;
    const double C599 = C584 / C120;
    const double C598 = C101 * C583;
    const double C597 = C580 - C178;
    const double C596 = C578 - C137;
    const double C595 = C577 - C152;
    const double C594 = C576 + C118;
    const double C593 = C305 + C575;
    const double C592 = 2 * C574;
    const double C591 = C325 + C571;
    const double C590 = 2 * C570;
    const double C589 = C568 * be;
    const double C611 = C602 - C587;
    const double C610 = C78 - C600;
    const double C609 = C598 / C82;
    const double C608 = C142 * C597;
    const double C607 = C142 * C596;
    const double C606 = C260 + C592;
    const double C605 = C250 + C590;
    const double C604 = C589 / C82;
    const double C617 = C611 / C103;
    const double C616 = C101 * C611;
    const double C615 = C610 * ae;
    const double C614 = 0 - C609;
    const double C613 = C311 + C608;
    const double C612 = C267 + C607;
    const double C623 = C617 + C603;
    const double C622 = C616 + C1398;
    const double C621 = C615 / C82;
    const double C620 = C614 * ae;
    const double C619 = C613 - C581;
    const double C618 = C612 - C579;
    const double C626 = C622 * ae;
    const double C625 = C621 - C601;
    const double C624 = C620 / C82;
    const double C630 = C626 / C82;
    const double C629 = C625 / C103;
    const double C628 = C101 * C625;
    const double C627 = C624 - C599;
    const double C633 = C629 + C630;
    const double C632 = C628 + C562;
    const double C631 = C627 / C103;
    const double C634 = C632 * ae;
    const double C635 = C634 / C82;
    const double C636 = C631 + C635;
    const double C637 = C636 + C611;
    const double C673 = C129 * C283;
    const double C672 = C129 * C275;
    const double C671 = C454 - C486;
    const double C670 = C485 - C516;
    const double C669 = C141 * C338;
    const double C668 = C311 * be;
    const double C667 = C141 * C333;
    const double C666 = C305 * be;
    const double C665 = C216 - C302;
    const double C664 = C141 * C369;
    const double C663 = C141 * C299;
    const double C662 = C129 * C254;
    const double C661 = C325 * be;
    const double C660 = C110 - C171;
    const double C659 = C293 - C343;
    const double C678 = C668 / C82;
    const double C677 = C667 - C215;
    const double C676 = C666 / C82;
    const double C675 = C662 - C476;
    const double C674 = C661 / C82;
    const double C705 = C587 - C602;
    const double C704 = C601 - C621;
    const double C703 = C142 * C338;
    const double C702 = C142 * C333;
    const double C701 = C142 * C369;
    const double C700 = C142 * C299;
    const double C706 = C703 - C215;
    const double C734 = C141 * C481;
    const double C733 = C141 * C270;
    const double C732 = C142 * C507;
    const double C731 = C142 * C477;
    const double C730 = -2 * C469;
    const double C729 = C141 * C328;
    const double C728 = C142 * C431;
    const double C737 = C142 * C734;
    const double C736 = C142 * C733;
    const double C735 = C142 * C729;
    const double C739 = C737 - C443;
    const double C738 = C736 - C441;
    const double C772 = C143 / C82;
    const double C771 = 0 * be;
    const double C770 = C450 / C82;
    const double C769 = C502 * be;
    const double C768 = 0 * ae;
    const double C767 = C207 * ae;
    const double C766 = C357 * ae;
    const double C779 = -C772;
    const double C778 = C771 / C82;
    const double C777 = -C770;
    const double C776 = C769 / C82;
    const double C775 = C768 / C82;
    const double C774 = C767 / C82;
    const double C773 = C766 / C82;
    const double C784 = C779 / C103;
    const double C783 = C777 / C103;
    const double C782 = C171 + C775;
    const double C781 = C343 + C774;
    const double C780 = C246 + C773;
    const double C787 = C778 - C784;
    const double C786 = C776 - C783;
    const double C785 = C780 + C149;
    const double C841 = C141 * C287;
    const double C840 = C141 * C281;
    const double C839 = C141 * C277;
    const double C838 = C141 * C317;
    const double C837 = C330 + C275;
    const double C836 = 0 * ae;
    const double C835 = C141 * C276;
    const double C834 = 0 * be;
    const double C833 = C517 * be;
    const double C832 = C529 * be;
    const double C831 = C100 * C524;
    const double C830 = 0 * be;
    const double C829 = C100 * C451;
    const double C828 = C227 * C160;
    const double C827 = 2 * C733;
    const double C826 = C153 * C160;
    const double C825 = C141 * C153;
    const double C824 = C141 * C442;
    const double C823 = 2 * C477;
    const double C822 = C141 * C265;
    const double C821 = C214 * C160;
    const double C820 = 2 * C431;
    const double C857 = C841 / C82;
    const double C856 = C840 / C82;
    const double C855 = C838 / C82;
    const double C854 = C836 / C82;
    const double C853 = C835 / C82;
    const double C852 = C834 / C82;
    const double C851 = C833 / C82;
    const double C850 = C832 / C82;
    const double C849 = C831 + 0;
    const double C848 = C830 / C120;
    const double C847 = C829 / C82;
    const double C846 = 2 * C828;
    const double C845 = C137 + C826;
    const double C844 = C824 - C153;
    const double C843 = C822 / C82;
    const double C842 = 2 * C821;
    const double C870 = C283 - C857;
    const double C869 = C335 - C856;
    const double C868 = C837 - C855;
    const double C867 = C326 - C853;
    const double C866 = C512 - C852;
    const double C865 = C526 - C851;
    const double C864 = C528 - C850;
    const double C863 = C849 * be;
    const double C862 = 0 - C847;
    const double C861 = C270 + C846;
    const double C860 = C141 * C844;
    const double C859 = C254 - C843;
    const double C858 = C253 + C842;
    const double C881 = C866 / C103;
    const double C880 = C100 * C866;
    const double C879 = C865 / C103;
    const double C878 = 2 * C866;
    const double C877 = C100 * C865;
    const double C876 = C864 + C503;
    const double C875 = C863 / C82;
    const double C874 = C862 * ae;
    const double C873 = C141 * C861;
    const double C872 = C263 + C860;
    const double C871 = C141 * C858;
    const double C890 = C881 + C854;
    const double C889 = C880 + C818;
    const double C888 = C877 + C1417;
    const double C887 = C876 / C103;
    const double C886 = C100 * C876;
    const double C885 = C874 / C82;
    const double C884 = C827 + C873;
    const double C883 = C872 - C825;
    const double C882 = C820 + C871;
    const double C895 = C889 * ae;
    const double C894 = C888 * ae;
    const double C893 = C886 + C1416;
    const double C892 = C885 - C848;
    const double C891 = C141 * C883;
    const double C900 = C895 / C82;
    const double C899 = C894 / C82;
    const double C898 = C893 * ae;
    const double C897 = C892 + C770;
    const double C896 = C823 + C891;
    const double C905 = C879 + C900;
    const double C904 = C887 + C899;
    const double C903 = C898 / C82;
    const double C902 = C897 / C103;
    const double C901 = C896 - C845;
    const double C907 = C904 + C878;
    const double C906 = C902 - C875;
    const double C908 = C906 / C103;
    const double C909 = C908 + C903;
    const double C910 = C909 + C865;
    const double C944 = C141 * C285;
    const double C943 = C141 * C320;
    const double C942 = C141 * C284;
    const double C941 = C142 * C281;
    const double C940 = C596 * be;
    const double C939 = C142 * C275;
    const double C938 = C142 * C263;
    const double C937 = C141 * C259;
    const double C936 = C142 * C825;
    const double C935 = C141 * C449;
    const double C934 = C141 * C272;
    const double C933 = C844 * C165;
    const double C932 = C141 * C258;
    const double C950 = C941 / C82;
    const double C949 = C940 / C82;
    const double C948 = C938 * be;
    const double C947 = C142 * C935;
    const double C946 = C477 + C933;
    const double C945 = C932 * C165;
    const double C954 = C275 - C950;
    const double C953 = C948 / C82;
    const double C952 = C947 - C825;
    const double C951 = C431 + C945;
    const double C955 = C142 * C952;
    const double C956 = C733 + C955;
    const double C957 = C956 - C936;
    const double C982 = C852 - C512;
    const double C981 = C851 - C526;
    const double C980 = C136 - C109;
    const double C979 = C135 - C292;
    const double C1031 = C141 * C283;
    const double C1030 = C733 * be;
    const double C1029 = C142 * C317;
    const double C1028 = C477 * be;
    const double C1027 = C142 * C276;
    const double C1026 = C142 * C861;
    const double C1025 = C142 * C883;
    const double C1024 = C142 * C858;
    const double C1034 = C1030 / C82;
    const double C1033 = C1028 / C82;
    const double C1032 = C1026 - C845;
    const double C1061 = C144 / C82;
    const double C1060 = 0 * be;
    const double C1059 = C583 / C82;
    const double C1058 = C610 * be;
    const double C1065 = -C1061;
    const double C1064 = C1060 / C82;
    const double C1063 = -C1059;
    const double C1062 = C1058 / C82;
    const double C1067 = C1065 / C103;
    const double C1066 = C1063 / C103;
    const double C1069 = C1064 - C1067;
    const double C1068 = C1062 - C1066;
    const double C1142 = C142 * C285;
    const double C1141 = C142 * C320;
    const double C1140 = C335 + C283;
    const double C1139 = C142 * C287;
    const double C1138 = 0 * ae;
    const double C1137 = C142 * C284;
    const double C1136 = 0 * be;
    const double C1135 = C622 * be;
    const double C1134 = C632 * be;
    const double C1133 = C101 * C627;
    const double C1132 = 0 * be;
    const double C1131 = C101 * C584;
    const double C1130 = C153 * C165;
    const double C1129 = C142 * C153;
    const double C1128 = C142 * C449;
    const double C1127 = 2 * C596;
    const double C1126 = C142 * C272;
    const double C1125 = C222 * C165;
    const double C1124 = 2 * C938;
    const double C1123 = C214 * C165;
    const double C1122 = 2 * C568;
    const double C1157 = C1141 / C82;
    const double C1156 = C1139 / C82;
    const double C1155 = C1138 / C82;
    const double C1154 = C1137 / C82;
    const double C1153 = C1136 / C82;
    const double C1152 = C1135 / C82;
    const double C1151 = C1134 / C82;
    const double C1150 = C1133 + 0;
    const double C1149 = C1132 / C120;
    const double C1148 = C1131 / C82;
    const double C1147 = C137 + C1130;
    const double C1146 = C1128 - C153;
    const double C1145 = C1126 / C82;
    const double C1144 = 2 * C1125;
    const double C1143 = 2 * C1123;
    const double C1169 = C1140 - C1157;
    const double C1168 = C330 - C1156;
    const double C1167 = C326 - C1154;
    const double C1166 = C617 - C1153;
    const double C1165 = C629 - C1152;
    const double C1164 = C631 - C1151;
    const double C1163 = C1150 * be;
    const double C1162 = 0 - C1148;
    const double C1161 = C142 * C1146;
    const double C1160 = C254 - C1145;
    const double C1159 = C263 + C1144;
    const double C1158 = C253 + C1143;
    const double C1180 = C1166 / C103;
    const double C1179 = C101 * C1166;
    const double C1178 = C1165 / C103;
    const double C1177 = 2 * C1166;
    const double C1176 = C101 * C1165;
    const double C1175 = C1164 + C611;
    const double C1174 = C1163 / C82;
    const double C1173 = C1162 * ae;
    const double C1172 = C270 + C1161;
    const double C1171 = C142 * C1159;
    const double C1170 = C142 * C1158;
    const double C1189 = C1180 + C1155;
    const double C1188 = C1179 + C1120;
    const double C1187 = C1176 + C1419;
    const double C1186 = C1175 / C103;
    const double C1185 = C101 * C1175;
    const double C1184 = C1173 / C82;
    const double C1183 = C1172 - C1129;
    const double C1182 = C1124 + C1171;
    const double C1181 = C1122 + C1170;
    const double C1194 = C1188 * ae;
    const double C1193 = C1187 * ae;
    const double C1192 = C1185 + C1418;
    const double C1191 = C1184 - C1149;
    const double C1190 = C142 * C1183;
    const double C1199 = C1194 / C82;
    const double C1198 = C1193 / C82;
    const double C1197 = C1192 * ae;
    const double C1196 = C1191 + C1059;
    const double C1195 = C1127 + C1190;
    const double C1204 = C1178 + C1199;
    const double C1203 = C1186 + C1198;
    const double C1202 = C1197 / C82;
    const double C1201 = C1196 / C103;
    const double C1200 = C1195 - C1147;
    const double C1206 = C1203 + C1177;
    const double C1205 = C1201 - C1174;
    const double C1207 = C1205 / C103;
    const double C1208 = C1207 + C1202;
    const double C1209 = C1208 + C1165;
    const double C1252 = C1153 - C617;
    const double C1251 = C1152 - C629;
    const double C1865 = C1252 * C618;
    const double C1864 = C1251 * C594;
    const double C1863 = C1175 * C444;
    const double C1862 = C1252 * C606;
    const double C1861 = C1251 * C572;
    const double C1860 = C1175 * C435;
    const double C1859 = C1252 * C605;
    const double C1858 = C1251 * C566;
    const double C1857 = C1175 * C424;
    const double C1856 = C1069 * C738;
    const double C1855 = C1068 * C446;
    const double C1854 = C1069 * C731;
    const double C1853 = C1068 * C474;
    const double C1852 = C1069 * C728;
    const double C1851 = C1068 * C429;
    const double C1850 = C1069 * C595;
    const double C1849 = C1068 * C309;
    const double C1848 = C1069 * C594;
    const double C1847 = C1068 * C444;
    const double C1846 = C1069 * C573;
    const double C1845 = C1068 * C303;
    const double C1844 = C1069 * C572;
    const double C1843 = C1068 * C435;
    const double C1842 = C1069 * C567;
    const double C1841 = C1068 * C323;
    const double C1840 = C1069 * C566;
    const double C1839 = C1068 * C424;
    const double C1838 = C1146 * be;
    const double C1837 = C142 * C442;
    const double C1836 = C1029 / C82;
    const double C1835 = C1027 / C82;
    const double C1834 = C1032 * C134;
    const double C1833 = C1025 * C134;
    const double C1832 = C1024 * C134;
    const double C1831 = C980 * C739;
    const double C1830 = C979 * C738;
    const double C1829 = C980 * C595;
    const double C1828 = C979 * C594;
    const double C1827 = C980 * C732;
    const double C1826 = C979 * C731;
    const double C1825 = C980 * C573;
    const double C1824 = C979 * C572;
    const double C1823 = C980 * C735;
    const double C1822 = C979 * C728;
    const double C1821 = C980 * C567;
    const double C1820 = C979 * C566;
    const double C1819 = C982 * C499;
    const double C1818 = C981 * C446;
    const double C1817 = C876 * C444;
    const double C1816 = C982 * C513;
    const double C1815 = C981 * C474;
    const double C1814 = C876 * C435;
    const double C1813 = C982 * C494;
    const double C1812 = C981 * C429;
    const double C1811 = C876 * C424;
    const double C1810 = C980 * C447;
    const double C1809 = C979 * C446;
    const double C1808 = C980 * C309;
    const double C1807 = C979 * C444;
    const double C1806 = C980 * C475;
    const double C1805 = C979 * C474;
    const double C1804 = C980 * C303;
    const double C1803 = C979 * C435;
    const double C1802 = C980 * C430;
    const double C1801 = C979 * C429;
    const double C1800 = C980 * C323;
    const double C1799 = C979 * C424;
    const double C1798 = C142 * C944;
    const double C1797 = C943 / C82;
    const double C1796 = C952 * be;
    const double C1795 = C142 * C844;
    const double C1794 = C942 / C82;
    const double C1793 = C142 * C277;
    const double C1792 = C1183 * be;
    const double C1791 = C787 * C738;
    const double C1790 = C786 * C594;
    const double C1789 = C231 * C165;
    const double C1788 = C1159 * be;
    const double C1787 = C787 * C731;
    const double C1786 = C786 * C572;
    const double C1785 = C787 * C728;
    const double C1784 = C786 * C566;
    const double C1783 = C934 / C82;
    const double C1782 = C957 * C134;
    const double C1781 = C738 * C134;
    const double C1780 = C618 * C134;
    const double C1779 = C594 * C134;
    const double C1778 = C946 * C134;
    const double C1777 = C731 * C134;
    const double C1776 = C606 * C134;
    const double C1775 = C572 * C134;
    const double C1774 = C951 * C134;
    const double C1773 = C728 * C134;
    const double C1772 = C605 * C134;
    const double C1771 = C566 * C134;
    const double C1770 = C239 * C160;
    const double C1769 = C935 * be;
    const double C1768 = C861 * be;
    const double C1767 = C844 * be;
    const double C1766 = C825 * be;
    const double C1765 = C216 - C839;
    const double C1764 = C883 * be;
    const double C1763 = C499 * C134;
    const double C1762 = C446 * C134;
    const double C1761 = C188 * C134;
    const double C1760 = C513 * C134;
    const double C1759 = C474 * C134;
    const double C1758 = C183 * C134;
    const double C1757 = C494 * C134;
    const double C1756 = C429 * C134;
    const double C1755 = C170 * C134;
    const double C1754 = C787 * C447;
    const double C1753 = C786 * C309;
    const double C1752 = C787 * C446;
    const double C1751 = C786 * C444;
    const double C1750 = C787 * C475;
    const double C1749 = C786 * C303;
    const double C1748 = C787 * C474;
    const double C1747 = C786 * C435;
    const double C1746 = C787 * C430;
    const double C1745 = C786 * C323;
    const double C1744 = C787 * C429;
    const double C1743 = C786 * C424;
    const double C1742 = C782 * C334;
    const double C1741 = C781 * C309;
    const double C1740 = C785 * C444;
    const double C1739 = C782 * C329;
    const double C1738 = C781 * C303;
    const double C1737 = C785 * C435;
    const double C1736 = C782 * C368;
    const double C1735 = C781 * C323;
    const double C1734 = C785 * C424;
    const double C1733 = C705 * C739;
    const double C1732 = C704 * C447;
    const double C1731 = C142 * C943;
    const double C1730 = C1034 + C1031;
    const double C1729 = C705 * C738;
    const double C1728 = C704 * C446;
    const double C1727 = C705 * C732;
    const double C1726 = C704 * C475;
    const double C1725 = C142 * C870;
    const double C1724 = C705 * C731;
    const double C1723 = C704 * C474;
    const double C1722 = C705 * C735;
    const double C1721 = C704 * C430;
    const double C1720 = C142 * C942;
    const double C1719 = C705 * C728;
    const double C1718 = C704 * C429;
    const double C1717 = C671 * C739;
    const double C1716 = C670 * C595;
    const double C1715 = C141 * C954;
    const double C1714 = C671 * C738;
    const double C1713 = C670 * C594;
    const double C1712 = C671 * C732;
    const double C1711 = C670 * C573;
    const double C1710 = C141 * C1029;
    const double C1709 = C953 + C939;
    const double C1708 = C671 * C731;
    const double C1707 = C670 * C572;
    const double C1706 = C671 * C735;
    const double C1705 = C670 * C567;
    const double C1704 = C141 * C1027;
    const double C1703 = C671 * C728;
    const double C1702 = C670 * C566;
    const double C1701 = C142 * C934;
    const double C1700 = C142 * C859;
    const double C1699 = C142 * C937;
    const double C1698 = C142 * C932;
    const double C1697 = C142 * C663;
    const double C1696 = C705 * C595;
    const double C1695 = C704 * C309;
    const double C1694 = C705 * C594;
    const double C1693 = C704 * C444;
    const double C1692 = C705 * C573;
    const double C1691 = C704 * C303;
    const double C1690 = C705 * C572;
    const double C1689 = C704 * C435;
    const double C1688 = C705 * C567;
    const double C1687 = C704 * C323;
    const double C1686 = C705 * C566;
    const double C1685 = C704 * C424;
    const double C1684 = C706 * C143;
    const double C1683 = C702 * C143;
    const double C1682 = C701 * C143;
    const double C1681 = C142 * C259;
    const double C1680 = C142 * C258;
    const double C1679 = C700 / C82;
    const double C1678 = C669 * C144;
    const double C1677 = C677 * C144;
    const double C1676 = C664 * C144;
    const double C1675 = C671 * C447;
    const double C1674 = C670 * C309;
    const double C1673 = C671 * C446;
    const double C1672 = C670 * C444;
    const double C1671 = C671 * C475;
    const double C1670 = C670 * C303;
    const double C1669 = C671 * C474;
    const double C1668 = C670 * C435;
    const double C1667 = C671 * C430;
    const double C1666 = C670 * C323;
    const double C1665 = C671 * C429;
    const double C1664 = C670 * C424;
    const double C1663 = C660 * C334;
    const double C1662 = C659 * C309;
    const double C1661 = C377 * C444;
    const double C1660 = C660 * C329;
    const double C1659 = C659 * C303;
    const double C1658 = C377 * C435;
    const double C1657 = C932 * be;
    const double C1656 = C663 / C82;
    const double C1655 = C660 * C368;
    const double C1654 = C659 * C323;
    const double C1653 = C377 * C424;
    const double C1652 = C142 * C462;
    const double C1651 = C597 * be;
    const double C1650 = C142 * C463;
    const double C1649 = C678 + C673;
    const double C1648 = C142 * C1169;
    const double C1647 = C142 * C283;
    const double C1646 = C623 * C618;
    const double C1645 = C142 * C319;
    const double C1644 = 2 * C489;
    const double C1643 = C633 * C594;
    const double C1642 = C637 * C444;
    const double C1641 = C142 * C478;
    const double C1640 = C142 * C461;
    const double C1639 = C142 * C1168;
    const double C1638 = C623 * C606;
    const double C1637 = C142 * C286;
    const double C1636 = C633 * C572;
    const double C1635 = C637 * C435;
    const double C1634 = C142 * C328;
    const double C1633 = C142 * C355;
    const double C1632 = C142 * C1167;
    const double C1631 = C623 * C605;
    const double C1630 = C142 * C282;
    const double C1629 = C633 * C566;
    const double C1628 = C637 * C424;
    const double C1627 = C142 * C458;
    const double C1626 = C619 * C143;
    const double C1625 = C142 * C954;
    const double C1624 = C618 * C143;
    const double C1623 = C142 * C459;
    const double C1622 = C595 * C143;
    const double C1621 = C142 * C280;
    const double C1620 = C594 * C143;
    const double C1619 = C593 * C143;
    const double C1618 = C317 * C165;
    const double C1617 = C606 * C143;
    const double C1616 = C142 * C457;
    const double C1615 = C573 * C143;
    const double C1614 = C142 * C316;
    const double C1613 = C572 * C143;
    const double C1612 = C591 * C143;
    const double C1611 = C276 * C165;
    const double C1610 = C605 * C143;
    const double C1609 = C142 * C354;
    const double C1608 = C567 * C143;
    const double C1607 = C142 * C274;
    const double C1606 = C566 * C143;
    const double C1605 = C142 * C665;
    const double C1604 = C142 * C1160;
    const double C1603 = C142 * C352;
    const double C1602 = C505 * C595;
    const double C1601 = C142 * C268;
    const double C1600 = C490 * C594;
    const double C1599 = C265 * C165;
    const double C1598 = C142 * C350;
    const double C1597 = C505 * C573;
    const double C1596 = C142 * C261;
    const double C1595 = C490 * C572;
    const double C1594 = C217 * C165;
    const double C1593 = C1158 * be;
    const double C1592 = C299 * C165;
    const double C1591 = C129 * C700;
    const double C1590 = C604 + C569;
    const double C1589 = C505 * C567;
    const double C1588 = C142 * C295;
    const double C1587 = C490 * C566;
    const double C1586 = C463 / C82;
    const double C1585 = C508 * C144;
    const double C1584 = C141 * C463;
    const double C1583 = C447 * C144;
    const double C1582 = C320 * C160;
    const double C1581 = C499 * C144;
    const double C1580 = C141 * C319;
    const double C1579 = C446 * C144;
    const double C1578 = C461 / C82;
    const double C1577 = C141 * C462;
    const double C1576 = C523 * C144;
    const double C1575 = C141 * C461;
    const double C1574 = C475 * C144;
    const double C1573 = C141 * C870;
    const double C1572 = C513 * C144;
    const double C1571 = C141 * C286;
    const double C1570 = C474 * C144;
    const double C1569 = C472 * C144;
    const double C1568 = C141 * C355;
    const double C1567 = C430 * C144;
    const double C1566 = C284 * C160;
    const double C1565 = C494 * C144;
    const double C1564 = C141 * C282;
    const double C1563 = C429 * C144;
    const double C1562 = C459 / C82;
    const double C1561 = C734 * be;
    const double C1560 = C141 * C459;
    const double C1559 = C141 * C869;
    const double C1558 = C518 * C499;
    const double C1557 = C141 * C280;
    const double C1556 = C530 * C446;
    const double C1555 = C534 * C444;
    const double C1554 = C141 * C458;
    const double C1553 = C457 / C82;
    const double C1552 = C507 * be;
    const double C1551 = C141 * C457;
    const double C1550 = C676 + C672;
    const double C1549 = C141 * C868;
    const double C1548 = C141 * C275;
    const double C1547 = C518 * C513;
    const double C1546 = C141 * C316;
    const double C1545 = 2 * C488;
    const double C1544 = C530 * C474;
    const double C1543 = C534 * C435;
    const double C1542 = C729 * be;
    const double C1541 = C141 * C354;
    const double C1540 = C141 * C867;
    const double C1539 = C518 * C494;
    const double C1538 = C141 * C274;
    const double C1537 = C530 * C429;
    const double C1536 = C534 * C424;
    const double C1535 = C272 * C160;
    const double C1534 = C141 * C352;
    const double C1533 = C505 * C447;
    const double C1532 = C141 * C268;
    const double C1531 = C490 * C446;
    const double C1530 = C505 * C309;
    const double C1529 = C490 * C444;
    const double C1528 = C141 * C665;
    const double C1527 = C141 * C859;
    const double C1526 = C141 * C350;
    const double C1525 = C505 * C475;
    const double C1524 = C141 * C261;
    const double C1523 = C490 * C474;
    const double C1522 = C505 * C303;
    const double C1521 = C490 * C435;
    const double C1520 = C217 * C160;
    const double C1519 = C858 * be;
    const double C1518 = C299 * C160;
    const double C1517 = C129 * C663;
    const double C1516 = C493 + C432;
    const double C1515 = C505 * C430;
    const double C1514 = C141 * C295;
    const double C1513 = C490 * C429;
    const double C1512 = C505 * C323;
    const double C1511 = C490 * C424;
    const double C1510 = C320 / C82;
    const double C1509 = C165 * C95;
    const double C1508 = C319 / C82;
    const double C1507 = C320 * C145;
    const double C1506 = C334 * C144;
    const double C1505 = C129 * C319;
    const double C1504 = C309 * C144;
    const double C1503 = C165 * C83;
    const double C1502 = C188 * C144;
    const double C1501 = C287 / C82;
    const double C1500 = C95 * C201;
    const double C1499 = C286 / C82;
    const double C1498 = C287 * C145;
    const double C1497 = C329 * C144;
    const double C1496 = C129 * C286;
    const double C1495 = C303 * C144;
    const double C1494 = C83 * C201;
    const double C1493 = C183 * C144;
    const double C1492 = C95 * C198;
    const double C1491 = C284 / C82;
    const double C1490 = C239 * C145;
    const double C1489 = C129 * C355;
    const double C1488 = C282 / C82;
    const double C1487 = C368 * C144;
    const double C1486 = C129 * C282;
    const double C1485 = C323 * C144;
    const double C1484 = C83 * C198;
    const double C1483 = C170 * C144;
    const double C1482 = C281 / C82;
    const double C1481 = C95 * C197;
    const double C1480 = C280 / C82;
    const double C1479 = C281 * C145;
    const double C1478 = C334 * C143;
    const double C1477 = C129 * C280;
    const double C1476 = C309 * C143;
    const double C1475 = C83 * C197;
    const double C1474 = C188 * C143;
    const double C1473 = C317 / C82;
    const double C1472 = C160 * C95;
    const double C1471 = C316 / C82;
    const double C1470 = C317 * C145;
    const double C1469 = C329 * C143;
    const double C1468 = C129 * C316;
    const double C1467 = C303 * C143;
    const double C1466 = C160 * C83;
    const double C1465 = C183 * C143;
    const double C1464 = C95 * C192;
    const double C1463 = C276 / C82;
    const double C1462 = C231 * C145;
    const double C1461 = C129 * C354;
    const double C1460 = C274 / C82;
    const double C1459 = C368 * C143;
    const double C1458 = C129 * C274;
    const double C1457 = C323 * C143;
    const double C1456 = C83 * C192;
    const double C1455 = C170 * C143;
    const double C1454 = C95 * C187;
    const double C1453 = C227 * be;
    const double C1452 = C272 / C82;
    const double C1451 = C481 * be;
    const double C1450 = C338 * be;
    const double C1449 = C129 * C352;
    const double C1448 = C268 / C82;
    const double C1447 = C129 * C268;
    const double C1446 = C83 * C187;
    const double C1445 = C95 * C182;
    const double C1444 = C222 * be;
    const double C1443 = C265 / C82;
    const double C1442 = C478 * be;
    const double C1441 = C333 * be;
    const double C1440 = C129 * C350;
    const double C1439 = C261 / C82;
    const double C1438 = C129 * C261;
    const double C1437 = C83 * C182;
    const double C1436 = C145 * C95;
    const double C1435 = C214 * be;
    const double C1434 = C302 - C216;
    const double C1433 = C299 / C82;
    const double C1432 = C328 * be;
    const double C1431 = C178 * be;
    const double C1430 = C129 * C665;
    const double C1429 = C369 * be;
    const double C1428 = C129 * C360;
    const double C1427 = C295 / C82;
    const double C1426 = C129 * C295;
    const double C1425 = 2 * C469;
    const double C1424 = C145 * C83;
    const double C2123 = C1056 * C1580;
    const double C2122 = C1056 * C1564;
    const double C2121 = C1056 * C1505;
    const double C2120 = C1056 * C1496;
    const double C2119 = C1838 / C82;
    const double C2118 = C1837 * be;
    const double C2117 = C142 * C1765;
    const double C2116 = C1834 / C82;
    const double C2115 = C1833 / C82;
    const double C2114 = C1832 / C82;
    const double C2113 = C1387 * C1700;
    const double C2112 = C1407 * C1598;
    const double C2111 = C1387 * C1596;
    const double C2110 = C1387 * C1697;
    const double C2109 = C1387 * C1588;
    const double C2108 = C1407 * C1534;
    const double C2107 = C1387 * C1532;
    const double C2106 = C1387 * C1514;
    const double C2105 = C1796 / C82;
    const double C2104 = C1795 * be;
    const double C2103 = C1793 - C1482;
    const double C2102 = C1792 / C82;
    const double C2101 = 2 * C1789;
    const double C2100 = C1788 / C82;
    const double C2099 = C764 * C1614;
    const double C2098 = C764 * C1607;
    const double C2097 = C1699 - C1783;
    const double C2096 = C1782 / C82;
    const double C2095 = C1781 / C82;
    const double C2094 = C1780 / C82;
    const double C2093 = C1779 / C82;
    const double C2092 = C1778 / C82;
    const double C2091 = C1286 * C1700;
    const double C2090 = C1777 / C82;
    const double C2089 = C1776 / C82;
    const double C2088 = C1286 * C1596;
    const double C2087 = C1775 / C82;
    const double C2086 = C1774 / C82;
    const double C2085 = C1286 * C1697;
    const double C2084 = C1773 / C82;
    const double C2083 = C1772 / C82;
    const double C2082 = C1286 * C1588;
    const double C2081 = C1771 / C82;
    const double C2080 = C944 - C1501;
    const double C2079 = 2 * C1770;
    const double C2078 = C1769 / C82;
    const double C2077 = C1768 / C82;
    const double C2076 = C1767 / C82;
    const double C2075 = C1766 / C82;
    const double C2074 = C1764 / C82;
    const double C2073 = C1763 / C82;
    const double C2072 = C1286 * C1532;
    const double C2071 = C1762 / C82;
    const double C2070 = 2 * C1761;
    const double C2069 = C937 - C1443;
    const double C2068 = C1760 / C82;
    const double C2067 = C1759 / C82;
    const double C2066 = 2 * C1758;
    const double C2065 = C1757 / C82;
    const double C2064 = C1286 * C1514;
    const double C2063 = C1756 / C82;
    const double C2062 = 2 * C1755;
    const double C2061 = C764 * C1477;
    const double C2060 = C764 * C1468;
    const double C2059 = C562 * C1584;
    const double C2058 = C1731 / C82;
    const double C2057 = C562 * C1580;
    const double C2056 = C1033 + C1725;
    const double C2055 = C562 * C1568;
    const double C2054 = C1720 / C82;
    const double C2053 = C562 * C1564;
    const double C2052 = C949 + C1715;
    const double C2051 = C418 * C1616;
    const double C2050 = C1710 / C82;
    const double C2049 = C418 * C1614;
    const double C2048 = C418 * C1609;
    const double C2047 = C1704 / C82;
    const double C2046 = C418 * C1607;
    const double C2045 = C1701 / C82;
    const double C2044 = C1698 * be;
    const double C2043 = C562 * C1505;
    const double C2042 = C562 * C1496;
    const double C2041 = C1684 / C82;
    const double C2040 = C1683 / C82;
    const double C2039 = C1682 / C82;
    const double C2038 = C1680 * be;
    const double C2037 = C1678 / C82;
    const double C2036 = C1677 / C82;
    const double C2035 = C1676 / C82;
    const double C2034 = C418 * C1477;
    const double C2033 = C418 * C1468;
    const double C2032 = C1657 / C82;
    const double C2031 = C1651 / C82;
    const double C2030 = C1650 / C82;
    const double C2029 = C1647 - C476;
    const double C2028 = C949 - C1508;
    const double C2027 = C1645 / C82;
    const double C2026 = C498 - C1644;
    const double C2025 = C1641 * be;
    const double C2024 = C1640 / C82;
    const double C2023 = C953 - C1499;
    const double C2022 = C1637 / C82;
    const double C2021 = C1634 * be;
    const double C2020 = C674 + C1633;
    const double C2019 = C604 - C1488;
    const double C2018 = C1630 / C82;
    const double C2017 = C1627 - C1562;
    const double C2016 = C1626 / C82;
    const double C2015 = C939 - C1480;
    const double C2014 = C1624 / C82;
    const double C2013 = C1623 / C82;
    const double C2012 = C1622 / C82;
    const double C2011 = C1621 / C82;
    const double C2010 = C1620 / C82;
    const double C2009 = C1619 / C82;
    const double C2008 = -C1618;
    const double C2007 = C1617 / C82;
    const double C2006 = C79 * C1616;
    const double C2005 = C1615 / C82;
    const double C2004 = C79 * C1614;
    const double C2003 = C1613 / C82;
    const double C2002 = C1612 / C82;
    const double C2001 = -C1611;
    const double C2000 = C1610 / C82;
    const double C1999 = C79 * C1609;
    const double C1998 = C1608 / C82;
    const double C1997 = C79 * C1607;
    const double C1996 = C1606 / C82;
    const double C1995 = C352 - C1605;
    const double C1994 = C569 - C1448;
    const double C1993 = C675 + C1603;
    const double C1992 = C1601 / C82;
    const double C1991 = -C1599;
    const double C1990 = C1304 * C1598;
    const double C1989 = C410 * C1596;
    const double C1988 = 2 * C1594;
    const double C1987 = C1593 / C82;
    const double C1986 = -C1592;
    const double C1985 = C1591 / C82;
    const double C1984 = C410 * C1588;
    const double C1983 = C1585 / C82;
    const double C1982 = C78 * C1584;
    const double C1981 = C1583 / C82;
    const double C1980 = -C1582;
    const double C1979 = C1581 / C82;
    const double C1978 = C78 * C1580;
    const double C1977 = C1579 / C82;
    const double C1976 = C1577 - C1578;
    const double C1975 = C1576 / C82;
    const double C1974 = C1575 / C82;
    const double C1973 = C1574 / C82;
    const double C1972 = C1031 - C1499;
    const double C1971 = C1572 / C82;
    const double C1970 = C1571 / C82;
    const double C1969 = C1570 / C82;
    const double C1968 = C1569 / C82;
    const double C1967 = C78 * C1568;
    const double C1966 = C1567 / C82;
    const double C1965 = -C1566;
    const double C1964 = C1565 / C82;
    const double C1963 = C78 * C1564;
    const double C1962 = C1563 / C82;
    const double C1961 = C1561 / C82;
    const double C1960 = C1560 / C82;
    const double C1959 = C1034 - C1480;
    const double C1958 = C1557 / C82;
    const double C1957 = C1552 / C82;
    const double C1956 = C1551 / C82;
    const double C1955 = C1548 - C476;
    const double C1954 = C1033 - C1471;
    const double C1953 = C1546 / C82;
    const double C1952 = C495 - C1545;
    const double C1951 = C1542 / C82;
    const double C1950 = C674 + C1541;
    const double C1949 = C493 - C1460;
    const double C1948 = C1538 / C82;
    const double C1947 = -C1535;
    const double C1946 = C1304 * C1534;
    const double C1945 = C410 * C1532;
    const double C1944 = C350 - C1528;
    const double C1943 = C432 - C1439;
    const double C1942 = C675 + C1526;
    const double C1941 = C1524 / C82;
    const double C1940 = 2 * C1520;
    const double C1939 = C1519 / C82;
    const double C1938 = -C1518;
    const double C1937 = C1517 / C82;
    const double C1936 = C410 * C1514;
    const double C1935 = C1509 * C140;
    const double C1934 = -C1507;
    const double C1933 = C1506 / C82;
    const double C1932 = C78 * C1505;
    const double C1931 = C1504 / C82;
    const double C1930 = C1503 * C117;
    const double C1929 = 2 * C1502;
    const double C1928 = C140 * C1500;
    const double C1927 = -C1498;
    const double C1926 = C1497 / C82;
    const double C1925 = C78 * C1496;
    const double C1924 = C1495 / C82;
    const double C1923 = C117 * C1494;
    const double C1922 = 2 * C1493;
    const double C1921 = C140 * C1492;
    const double C1920 = C462 - C1491;
    const double C1919 = 2 * C1490;
    const double C1918 = C673 - C1488;
    const double C1917 = C1487 / C82;
    const double C1916 = C1486 / C82;
    const double C1915 = C1485 / C82;
    const double C1914 = C117 * C1484;
    const double C1913 = 2 * C1483;
    const double C1912 = C140 * C1481;
    const double C1911 = -C1479;
    const double C1910 = C1478 / C82;
    const double C1909 = C79 * C1477;
    const double C1908 = C1476 / C82;
    const double C1907 = C117 * C1475;
    const double C1906 = 2 * C1474;
    const double C1905 = C1472 * C140;
    const double C1904 = -C1470;
    const double C1903 = C1469 / C82;
    const double C1902 = C79 * C1468;
    const double C1901 = C1467 / C82;
    const double C1900 = C1466 * C117;
    const double C1899 = 2 * C1465;
    const double C1898 = C140 * C1464;
    const double C1897 = C458 - C1463;
    const double C1896 = 2 * C1462;
    const double C1895 = C672 - C1460;
    const double C1894 = C1459 / C82;
    const double C1893 = C1458 / C82;
    const double C1892 = C1457 / C82;
    const double C1891 = C117 * C1456;
    const double C1890 = 2 * C1455;
    const double C1889 = C140 * C1454;
    const double C1888 = 2 * C1453;
    const double C1887 = C1451 / C82;
    const double C1886 = C1450 / C82;
    const double C1885 = C678 - C1448;
    const double C1884 = C1447 / C82;
    const double C1883 = C117 * C1446;
    const double C1882 = C140 * C1445;
    const double C1881 = 2 * C1444;
    const double C1880 = C1442 / C82;
    const double C1879 = C1441 / C82;
    const double C1878 = C676 - C1439;
    const double C1877 = C1438 / C82;
    const double C1876 = C117 * C1437;
    const double C1875 = C1436 * C140;
    const double C1874 = 2 * C1435;
    const double C1873 = C1432 / C82;
    const double C1872 = C1431 / C82;
    const double C1871 = C1430 - C254;
    const double C1870 = C1429 / C82;
    const double C1869 = C674 - C1427;
    const double C1868 = C1426 / C82;
    const double C1867 = C492 - C1425;
    const double C1866 = C1424 * C117;
    const double C2329 = C1418 * C1923;
    const double C2328 = C1418 * C1914;
    const double C2327 = C2123 / C82;
    const double C2326 = C2122 / C82;
    const double C2325 = C2121 / C82;
    const double C2324 = C2120 / C82;
    const double C2323 = C1056 * C1923;
    const double C2322 = C1056 * C1914;
    const double C2321 = C954 + C2105;
    const double C2320 = C2118 / C82;
    const double C2319 = C142 * C1898;
    const double C2318 = C1407 * C1993;
    const double C2317 = C1826 + C2113;
    const double C2316 = C2111 / C82;
    const double C2315 = C2110 / C82;
    const double C2314 = C2109 / C82;
    const double C2313 = C1416 * C1907;
    const double C2312 = C1416 * C1891;
    const double C2311 = C2107 / C82;
    const double C2310 = C1387 * C1883;
    const double C2309 = C1407 * C1942;
    const double C2308 = C1387 * C1876;
    const double C2307 = C2106 / C82;
    const double C2306 = C2078 + C944;
    const double C2305 = C1798 - C2075;
    const double C2304 = C2105 - C1797;
    const double C2303 = C2104 / C82;
    const double C2302 = C141 * C1921;
    const double C2301 = C142 * C1912;
    const double C2300 = C2101 + C275;
    const double C2299 = C2099 / C82;
    const double C2298 = C1898 * C165;
    const double C2297 = C2098 / C82;
    const double C2296 = C141 * C1889;
    const double C2295 = C2090 + C2091;
    const double C2294 = C2088 / C82;
    const double C2293 = C2085 / C82;
    const double C2292 = C2082 / C82;
    const double C2291 = C141 * C1928;
    const double C2290 = C2079 + C283;
    const double C2289 = C1921 * C160;
    const double C2288 = C1889 * C160;
    const double C2287 = C2072 / C82;
    const double C2286 = C1286 * C1883;
    const double C2285 = C2070 / C82;
    const double C2284 = C141 * C1882;
    const double C2283 = C1286 * C1876;
    const double C2282 = C2066 / C82;
    const double C2281 = C2064 / C82;
    const double C2280 = C2062 / C82;
    const double C2279 = C2061 / C82;
    const double C2278 = C764 * C1907;
    const double C2277 = C2060 / C82;
    const double C2276 = C764 * C1891;
    const double C2275 = C761 * C1883;
    const double C2274 = C761 * C1876;
    const double C2273 = C1961 + C1577;
    const double C2272 = C2059 / C82;
    const double C2271 = C1730 - C2058;
    const double C2270 = C2057 / C82;
    const double C2269 = C1398 * C2056;
    const double C2268 = C1721 + C2055;
    const double C2267 = C493 - C2054;
    const double C2266 = C2053 / C82;
    const double C2265 = C1395 * C2052;
    const double C2264 = C2051 / C82;
    const double C2263 = C1709 - C2050;
    const double C2262 = C2049 / C82;
    const double C2261 = C1705 + C2048;
    const double C2260 = C604 - C2047;
    const double C2259 = C2046 / C82;
    const double C2258 = C432 - C2045;
    const double C2257 = C2044 / C82;
    const double C2256 = C2043 / C82;
    const double C2255 = C2042 / C82;
    const double C2254 = C562 * C1923;
    const double C2253 = C1398 * C2020;
    const double C2252 = C562 * C1914;
    const double C2251 = C2038 / C82;
    const double C2250 = C2034 / C82;
    const double C2249 = C418 * C1907;
    const double C2248 = C2033 / C82;
    const double C2247 = C1395 * C1950;
    const double C2246 = C418 * C1891;
    const double C2245 = C1415 * C1883;
    const double C2244 = C1415 * C1876;
    const double C2243 = C2032 + C937;
    const double C2242 = C1951 - C1656;
    const double C2241 = C1887 + C462;
    const double C2240 = C1652 - C1872;
    const double C2239 = C2031 - C1586;
    const double C2238 = C1649 - C2030;
    const double C2237 = C2028 + C2029;
    const double C2236 = C2026 - C2027;
    const double C2235 = C2025 / C82;
    const double C2234 = C676 - C2024;
    const double C2233 = C2023 + C1639;
    const double C2232 = C495 - C2022;
    const double C2231 = C556 * C1923;
    const double C2230 = C2021 / C82;
    const double C2229 = C2019 + C1632;
    const double C2228 = C492 - C2018;
    const double C2227 = C556 * C1914;
    const double C2226 = C2015 + C1625;
    const double C2225 = C672 - C2013;
    const double C2224 = C582 - C2011;
    const double C2223 = C2008 / C82;
    const double C2222 = C2006 / C82;
    const double C2221 = C2004 / C82;
    const double C2220 = C2001 / C82;
    const double C2219 = C1998 + C1999;
    const double C2218 = C1997 / C82;
    const double C2217 = C1994 + C1604;
    const double C2216 = C1304 * C1993;
    const double C2215 = C730 - C1992;
    const double C2214 = C1991 / C82;
    const double C2213 = C1989 / C82;
    const double C2212 = C1988 + C254;
    const double C2211 = C1986 / C82;
    const double C2210 = C1590 - C1985;
    const double C2209 = C1984 / C82;
    const double C2208 = C1982 / C82;
    const double C2207 = C1980 / C82;
    const double C2206 = C1978 / C82;
    const double C2205 = C129 * C1928;
    const double C2204 = C673 - C1974;
    const double C2203 = C1972 + C1573;
    const double C2202 = C504 - C1970;
    const double C2201 = C1966 + C1967;
    const double C2200 = C1965 / C82;
    const double C2199 = C1963 / C82;
    const double C2198 = C129 * C1912;
    const double C2197 = C1961 - C1562;
    const double C2196 = C678 - C1960;
    const double C2195 = C1959 + C1559;
    const double C2194 = C498 - C1958;
    const double C2193 = C412 * C1907;
    const double C2192 = C1880 + C458;
    const double C2191 = C1554 - C1872;
    const double C2190 = C1957 - C1553;
    const double C2189 = C1550 - C1956;
    const double C2188 = C1954 + C1955;
    const double C2187 = C1952 - C1953;
    const double C2186 = C354 + C1951;
    const double C2185 = C1949 + C1540;
    const double C2184 = C492 - C1948;
    const double C2183 = C412 * C1891;
    const double C2182 = C1947 / C82;
    const double C2181 = C1945 / C82;
    const double C2180 = C410 * C1883;
    const double C2179 = C1943 + C1527;
    const double C2178 = C1304 * C1942;
    const double C2177 = C730 - C1941;
    const double C2176 = C410 * C1876;
    const double C2175 = C1940 + C254;
    const double C2174 = C1938 / C82;
    const double C2173 = C1516 - C1937;
    const double C2172 = C1936 / C82;
    const double C2171 = C139 + C1935;
    const double C2170 = C1934 / C82;
    const double C2169 = C1932 / C82;
    const double C2168 = C1930 - C118;
    const double C2167 = C1929 / C82;
    const double C2166 = C1928 * C145;
    const double C2165 = C1927 / C82;
    const double C2164 = C1925 / C82;
    const double C2163 = C78 * C1923;
    const double C2162 = C1922 / C82;
    const double C2161 = C129 * C1921;
    const double C2160 = C1919 + C283;
    const double C2159 = C1918 + C1489;
    const double C2158 = C504 - C1916;
    const double C2157 = C78 * C1914;
    const double C2156 = C1913 / C82;
    const double C2155 = C1912 * C145;
    const double C2154 = C1911 / C82;
    const double C2153 = C1909 / C82;
    const double C2152 = C79 * C1907;
    const double C2151 = C1906 / C82;
    const double C2150 = C139 + C1905;
    const double C2149 = C1904 / C82;
    const double C2148 = C1902 / C82;
    const double C2147 = C1900 - C118;
    const double C2146 = C1899 / C82;
    const double C2145 = C129 * C1898;
    const double C2144 = C1896 + C275;
    const double C2143 = C1895 + C1461;
    const double C2142 = C582 - C1893;
    const double C2141 = C79 * C1891;
    const double C2140 = C1890 / C82;
    const double C2139 = C129 * C1889;
    const double C2138 = C1888 / C82;
    const double C2137 = C1887 - C1452;
    const double C2136 = C1885 + C1449;
    const double C2135 = C498 - C1884;
    const double C2134 = C129 * C1882;
    const double C2133 = C1881 / C82;
    const double C2132 = C1880 - C1443;
    const double C2131 = C1878 + C1440;
    const double C2130 = C495 - C1877;
    const double C2129 = C139 + C1875;
    const double C2128 = C1874 / C82;
    const double C2127 = C1871 + C1872;
    const double C2126 = C1869 + C675;
    const double C2125 = C1867 - C1868;
    const double C2124 = C1866 - C118;
    const double C2551 = C1419 * C2236;
    const double C2550 = C1120 * C2233;
    const double C2549 = C1419 * C2232;
    const double C2548 = -C2329;
    const double C2547 = C1120 * C2229;
    const double C2546 = C1419 * C2228;
    const double C2545 = -C2328;
    const double C2544 = C1855 - C2327;
    const double C2543 = C1056 * C2202;
    const double C2542 = C1851 - C2326;
    const double C2541 = C1849 - C2325;
    const double C2540 = C1845 - C2324;
    const double C2539 = C2323 / C82;
    const double C2538 = C1056 * C2158;
    const double C2537 = C2322 / C82;
    const double C2536 = C2077 + C2290;
    const double C2535 = C2320 + C1793;
    const double C2534 = C2303 - C1836;
    const double C2533 = C141 * C2319;
    const double C2532 = C2257 - C1835;
    const double C2531 = C2295 * C1398;
    const double C2530 = C1387 * C2258;
    const double C2529 = C1387 * C2215;
    const double C2528 = C2317 + C1827;
    const double C2527 = C1824 - C2316;
    const double C2526 = C1822 - C2315;
    const double C2525 = C1407 * C2210;
    const double C2524 = C1820 - C2314;
    const double C2523 = C818 * C2195;
    const double C2522 = C1417 * C2194;
    const double C2521 = -C2313;
    const double C2520 = C1417 * C2187;
    const double C2519 = C818 * C2185;
    const double C2518 = C1417 * C2184;
    const double C2517 = -C2312;
    const double C2516 = C1809 - C2311;
    const double C2515 = C1407 * C2135;
    const double C2514 = C2310 / C82;
    const double C2513 = C1387 * C2177;
    const double C2512 = C1407 * C2130;
    const double C2511 = C2308 / C82;
    const double C2510 = C1407 * C2173;
    const double C2509 = C1801 - C2307;
    const double C2508 = C1407 * C2125;
    const double C2507 = C2304 + C2305;
    const double C2506 = C870 + C2303;
    const double C2505 = C142 * C2302;
    const double C2504 = C2257 - C1794;
    const double C2503 = C2301 / C82;
    const double C2502 = C764 * C2224;
    const double C2501 = C2100 + C2300;
    const double C2500 = C1786 - C2299;
    const double C2499 = -C2298;
    const double C2498 = C1784 - C2297;
    const double C2497 = C142 * C2296;
    const double C2496 = C1286 * C2258;
    const double C2495 = C1286 * C2217;
    const double C2494 = C1286 * C2215;
    const double C2493 = C2087 - C2294;
    const double C2492 = C2084 - C2293;
    const double C2491 = C2081 - C2292;
    const double C2490 = C2291 / C82;
    const double C2489 = -C2289;
    const double C2488 = -C2288;
    const double C2487 = C2071 - C2287;
    const double C2486 = C2286 / C82;
    const double C2485 = C2284 / C82;
    const double C2484 = C1286 * C2179;
    const double C2483 = C1286 * C2177;
    const double C2482 = C2283 / C82;
    const double C2481 = C2063 - C2281;
    const double C2480 = C1753 - C2279;
    const double C2479 = C2278 / C82;
    const double C2478 = C1749 - C2277;
    const double C2477 = C764 * C2142;
    const double C2476 = C2276 / C82;
    const double C2475 = C763 * C2136;
    const double C2474 = C762 * C2135;
    const double C2473 = -C2275;
    const double C2472 = C763 * C2131;
    const double C2471 = C762 * C2130;
    const double C2470 = -C2274;
    const double C2469 = C762 * C2125;
    const double C2468 = C1732 - C2272;
    const double C2467 = C1398 * C2271;
    const double C2466 = C1728 - C2270;
    const double C2465 = C562 * C2204;
    const double C2464 = C562 * C2202;
    const double C2463 = C2268 + C1722;
    const double C2462 = C1398 * C2267;
    const double C2461 = C1718 - C2266;
    const double C2460 = C418 * C2225;
    const double C2459 = C418 * C2224;
    const double C2458 = C2235 + C1627;
    const double C2457 = C1711 - C2264;
    const double C2456 = C1395 * C2263;
    const double C2455 = C1707 - C2262;
    const double C2454 = C2261 + C1706;
    const double C2453 = C1395 * C2260;
    const double C2452 = C1702 - C2259;
    const double C2451 = C2257 + C1699;
    const double C2450 = C1886 + C2160;
    const double C2449 = C1398 * C2238;
    const double C2448 = C1695 - C2256;
    const double C2447 = C1398 * C2236;
    const double C2446 = C1398 * C2234;
    const double C2445 = C1691 - C2255;
    const double C2444 = C1398 * C2232;
    const double C2443 = C2254 / C82;
    const double C2442 = C562 * C2158;
    const double C2441 = C1398 * C2228;
    const double C2440 = C2252 / C82;
    const double C2439 = C2251 + C1681;
    const double C2438 = C2230 - C1679;
    const double C2437 = C2201 * C1395;
    const double C2436 = C1395 * C2196;
    const double C2435 = C1674 - C2250;
    const double C2434 = C1395 * C2194;
    const double C2433 = C2249 / C82;
    const double C2432 = C1879 + C2144;
    const double C2431 = C1395 * C2189;
    const double C2430 = C1670 - C2248;
    const double C2429 = C1395 * C2187;
    const double C2428 = C418 * C2142;
    const double C2427 = C1395 * C2184;
    const double C2426 = C2246 / C82;
    const double C2425 = C74 * C2136;
    const double C2424 = C71 * C2135;
    const double C2423 = -C2245;
    const double C2422 = C74 * C2131;
    const double C2421 = C71 * C2130;
    const double C2420 = -C2244;
    const double C2419 = C2242 - C1528;
    const double C2418 = C71 * C2125;
    const double C2417 = C2239 + C2240;
    const double C2416 = C2237 + C1648;
    const double C2415 = C557 * C2236;
    const double C2414 = C142 * C2205;
    const double C2413 = C2235 - C1578;
    const double C2412 = C558 * C2233;
    const double C2411 = C557 * C2232;
    const double C2410 = -C2231;
    const double C2409 = C355 + C2230;
    const double C2408 = C558 * C2229;
    const double C2407 = C557 * C2228;
    const double C2406 = -C2227;
    const double C2405 = C142 * C2198;
    const double C2404 = C79 * C2226;
    const double C2403 = C79 * C2225;
    const double C2402 = C79 * C2224;
    const double C2401 = C2223 - C1471;
    const double C2400 = C2005 - C2222;
    const double C2399 = C2003 - C2221;
    const double C2398 = C2220 - C1460;
    const double C2397 = C1996 - C2218;
    const double C2396 = C410 * C2215;
    const double C2395 = C2214 - C1439;
    const double C2394 = C1595 - C2213;
    const double C2393 = C1987 + C2212;
    const double C2392 = C2211 - C1427;
    const double C2391 = C1304 * C2210;
    const double C2390 = C1587 - C2209;
    const double C2389 = C1981 - C2208;
    const double C2388 = C2207 - C1508;
    const double C2387 = C1977 - C2206;
    const double C2386 = C141 * C2205;
    const double C2385 = C78 * C2204;
    const double C2384 = C78 * C2203;
    const double C2383 = C78 * C2202;
    const double C2382 = C2200 - C1488;
    const double C2381 = C1962 - C2199;
    const double C2380 = C141 * C2198;
    const double C2379 = C414 * C2195;
    const double C2378 = C413 * C2194;
    const double C2377 = -C2193;
    const double C2376 = C2190 + C2191;
    const double C2375 = C2188 + C1549;
    const double C2374 = C413 * C2187;
    const double C2373 = C414 * C2185;
    const double C2372 = C413 * C2184;
    const double C2371 = -C2183;
    const double C2370 = C2182 - C1448;
    const double C2369 = C1531 - C2181;
    const double C2368 = C1304 * C2135;
    const double C2367 = C2180 / C82;
    const double C2366 = C410 * C2177;
    const double C2365 = C1304 * C2130;
    const double C2364 = C2176 / C82;
    const double C2363 = C1939 + C2175;
    const double C2362 = C2174 - C1427;
    const double C2361 = C1304 * C2173;
    const double C2360 = C1513 - C2172;
    const double C2359 = C1304 * C2125;
    const double C2358 = C2171 * be;
    const double C2357 = C2170 - C1508;
    const double C2356 = C1931 - C2169;
    const double C2355 = C2168 * be;
    const double C2354 = -C2166;
    const double C2353 = C2165 - C1499;
    const double C2352 = C1924 - C2164;
    const double C2351 = C2163 / C82;
    const double C2350 = C2161 / C82;
    const double C2349 = C78 * C2159;
    const double C2348 = C78 * C2158;
    const double C2347 = C2157 / C82;
    const double C2346 = -C2155;
    const double C2345 = C2154 - C1480;
    const double C2344 = C1908 - C2153;
    const double C2343 = C2152 / C82;
    const double C2342 = C2150 * be;
    const double C2341 = C2149 - C1471;
    const double C2340 = C1901 - C2148;
    const double C2339 = C2147 * be;
    const double C2338 = C2145 / C82;
    const double C2337 = C79 * C2143;
    const double C2336 = C79 * C2142;
    const double C2335 = C2141 / C82;
    const double C2334 = C2139 / C82;
    const double C2333 = C2134 / C82;
    const double C2332 = C2129 * be;
    const double C2331 = C2126 + C1428;
    const double C2330 = C2124 * be;
    const double C2710 = C1120 * C2416;
    const double C2709 = C1418 * C2355;
    const double C2708 = C2548 / C82;
    const double C2707 = C2545 / C82;
    const double C2706 = C2544 + C1856;
    const double C2705 = C1853 + C2543;
    const double C2704 = C2542 + C1852;
    const double C2703 = C2541 + C1850;
    const double C2702 = C1056 * C2355;
    const double C2701 = C2540 + C1846;
    const double C2700 = C1843 - C2539;
    const double C2699 = C1841 + C2538;
    const double C2698 = C1839 - C2537;
    const double C2697 = C142 * C2342;
    const double C2696 = C2534 - C2117;
    const double C2695 = C2533 / C82;
    const double C2694 = C2493 * C1398;
    const double C2693 = C2492 * C1398;
    const double C2692 = C2491 * C1398;
    const double C2691 = C1830 + C2530;
    const double C2690 = C1828 + C2529;
    const double C2689 = C2527 + C1825;
    const double C2688 = C2526 + C1823;
    const double C2687 = C2524 + C1821;
    const double C2686 = C2521 / C82;
    const double C2685 = C818 * C2375;
    const double C2684 = C1416 * C2339;
    const double C2683 = C2517 / C82;
    const double C2682 = C2516 + C1810;
    const double C2681 = C1807 - C2514;
    const double C2680 = C1805 + C2513;
    const double C2679 = C1803 - C2511;
    const double C2678 = C2509 + C1802;
    const double C2677 = C1387 * C2330;
    const double C2676 = C141 * C2358;
    const double C2675 = C2505 / C82;
    const double C2674 = C277 - C2503;
    const double C2673 = C1790 + C2502;
    const double C2672 = C2342 * C165;
    const double C2671 = C2500 + C1787;
    const double C2670 = C2499 / C82;
    const double C2669 = C2498 + C1785;
    const double C2668 = C2497 / C82;
    const double C2667 = C2095 + C2496;
    const double C2666 = C2094 + C2495;
    const double C2665 = C2093 + C2494;
    const double C2664 = C1286 * C2395;
    const double C2663 = C1286 * C2392;
    const double C2662 = C2358 * C160;
    const double C2661 = C285 - C2490;
    const double C2660 = C2489 / C82;
    const double C2659 = C2488 / C82;
    const double C2658 = C1286 * C2370;
    const double C2657 = C2285 - C2486;
    const double C2656 = C259 - C2485;
    const double C2655 = C2068 + C2484;
    const double C2654 = C2067 + C2483;
    const double C2653 = C2282 - C2482;
    const double C2652 = C1286 * C2362;
    const double C2651 = C1286 * C2330;
    const double C2650 = C2480 + C1754;
    const double C2649 = C1751 - C2479;
    const double C2648 = C2478 + C1750;
    const double C2647 = C764 * C2339;
    const double C2646 = C1745 + C2477;
    const double C2645 = C1743 - C2476;
    const double C2644 = C2473 / C82;
    const double C2643 = C2470 / C82;
    const double C2642 = C763 * C2331;
    const double C2641 = C761 * C2330;
    const double C2640 = C2468 + C1733;
    const double C2639 = C2466 + C1729;
    const double C2638 = C1726 + C2465;
    const double C2637 = C1723 + C2464;
    const double C2636 = C2461 + C1719;
    const double C2635 = C1716 + C2460;
    const double C2634 = C1713 + C2459;
    const double C2633 = C2457 + C1712;
    const double C2632 = C2455 + C1708;
    const double C2631 = C2452 + C1703;
    const double C2630 = C2448 + C1696;
    const double C2629 = C562 * C2355;
    const double C2628 = C2445 + C1692;
    const double C2627 = C1689 - C2443;
    const double C2626 = C1687 + C2442;
    const double C2625 = C1685 - C2440;
    const double C2624 = C142 * C2332;
    const double C2623 = C2438 - C1605;
    const double C2622 = C2389 * C1395;
    const double C2621 = C2387 * C1395;
    const double C2620 = C2381 * C1395;
    const double C2619 = C2435 + C1675;
    const double C2618 = C1672 - C2433;
    const double C2617 = C2430 + C1671;
    const double C2616 = C418 * C2339;
    const double C2615 = C1666 + C2428;
    const double C2614 = C1664 - C2426;
    const double C2613 = C2423 / C82;
    const double C2612 = C2420 / C82;
    const double C2611 = C141 * C2332;
    const double C2610 = C74 * C2331;
    const double C2609 = C1415 * C2330;
    const double C2608 = C558 * C2416;
    const double C2607 = C556 * C2355;
    const double C2606 = C2414 / C82;
    const double C2605 = C2410 / C82;
    const double C2604 = C2406 / C82;
    const double C2603 = C2405 / C82;
    const double C2602 = C2014 + C2404;
    const double C2601 = C2012 + C2403;
    const double C2600 = C2010 + C2402;
    const double C2599 = C79 * C2401;
    const double C2598 = C79 * C2398;
    const double C2597 = C1600 + C2396;
    const double C2596 = C2394 + C1597;
    const double C2595 = C2332 * C165;
    const double C2594 = C2390 + C1589;
    const double C2593 = C129 * C2358;
    const double C2592 = C78 * C2388;
    const double C2591 = C2386 / C82;
    const double C2590 = C1973 + C2385;
    const double C2589 = C1971 + C2384;
    const double C2588 = C1969 + C2383;
    const double C2587 = C78 * C2382;
    const double C2586 = C2380 / C82;
    const double C2585 = C2377 / C82;
    const double C2584 = C129 * C2342;
    const double C2583 = C414 * C2375;
    const double C2582 = C412 * C2339;
    const double C2581 = C2371 / C82;
    const double C2580 = C2369 + C1533;
    const double C2579 = C1529 - C2367;
    const double C2578 = C1523 + C2366;
    const double C2577 = C1521 - C2364;
    const double C2576 = C2332 * C160;
    const double C2575 = C2360 + C1515;
    const double C2574 = C410 * C2330;
    const double C2573 = C2358 * C145;
    const double C2572 = C78 * C2357;
    const double C2571 = C78 * C2355;
    const double C2570 = C2354 / C82;
    const double C2569 = C78 * C2353;
    const double C2568 = C2162 - C2351;
    const double C2567 = C285 - C2350;
    const double C2566 = C1917 + C2349;
    const double C2565 = C1915 + C2348;
    const double C2564 = C2156 - C2347;
    const double C2563 = C2346 / C82;
    const double C2562 = C79 * C2345;
    const double C2561 = C2151 - C2343;
    const double C2560 = C2342 * C145;
    const double C2559 = C79 * C2341;
    const double C2558 = C79 * C2339;
    const double C2557 = C277 - C2338;
    const double C2556 = C1894 + C2337;
    const double C2555 = C1892 + C2336;
    const double C2554 = C2140 - C2335;
    const double C2553 = C2138 - C2334;
    const double C2552 = C2133 - C2333;
    const double C2855 = -C2709;
    const double C2854 = C2708 - C1860;
    const double C2853 = C2707 - C1857;
    const double C2852 = C2706 + C2467;
    const double C2851 = C2705 + C1854;
    const double C2850 = C2704 + C2462;
    const double C2849 = C2703 + C2449;
    const double C2848 = C2702 / C82;
    const double C2847 = C2701 + C2446;
    const double C2846 = C2700 + C1844;
    const double C2845 = C2699 + C1842;
    const double C2844 = C2698 + C1840;
    const double C2843 = C141 * C2674;
    const double C2842 = C141 * C2697;
    const double C2841 = C2251 - C2695;
    const double C2840 = C2667 * C1398;
    const double C2839 = C2665 * C1398;
    const double C2838 = C2691 + C1831;
    const double C2837 = C2690 + C1829;
    const double C2836 = C2689 + C2112;
    const double C2835 = C2687 + C2525;
    const double C2834 = C2686 - C1817;
    const double C2833 = -C2684;
    const double C2832 = C2683 - C1811;
    const double C2831 = C2682 + C2108;
    const double C2830 = C2681 + C1808;
    const double C2829 = C2680 + C1806;
    const double C2828 = C2679 + C1804;
    const double C2827 = C2678 + C2510;
    const double C2826 = C2677 / C82;
    const double C2825 = C142 * C2676;
    const double C2824 = C142 * C2661;
    const double C2823 = C2032 - C2675;
    const double C2822 = C142 * C2674;
    const double C2821 = C2673 + C1791;
    const double C2820 = -C2672;
    const double C2819 = C2671 + C2456;
    const double C2818 = C2670 - C1463;
    const double C2817 = C2669 + C2453;
    const double C2816 = C937 - C2668;
    const double C2815 = C2656 * C165;
    const double C2814 = C2089 + C2664;
    const double C2813 = C2611 * C165;
    const double C2812 = C2083 + C2663;
    const double C2811 = -C2662;
    const double C2810 = C141 * C2661;
    const double C2809 = C2660 - C1491;
    const double C2808 = C2659 - C1452;
    const double C2807 = C2073 + C2658;
    const double C2806 = C141 * C2656;
    const double C2805 = C2065 + C2652;
    const double C2804 = C2651 / C82;
    const double C2803 = C2650 + C2436;
    const double C2802 = C2649 + C1752;
    const double C2801 = C2648 + C2431;
    const double C2800 = C2647 / C82;
    const double C2799 = C2646 + C1746;
    const double C2798 = C2645 + C1744;
    const double C2797 = C2644 - C1740;
    const double C2796 = C2643 - C1737;
    const double C2795 = -C2641;
    const double C2794 = C141 * C2593;
    const double C2793 = C2639 + C2467;
    const double C2792 = C2638 + C1727;
    const double C2791 = C2637 + C1724;
    const double C2790 = C141 * C2567;
    const double C2789 = C2636 + C2462;
    const double C2788 = C2635 + C1717;
    const double C2787 = C2634 + C1714;
    const double C2786 = C142 * C2584;
    const double C2785 = C2632 + C2456;
    const double C2784 = C142 * C2557;
    const double C2783 = C2631 + C2453;
    const double C2782 = C141 * C2553;
    const double C2781 = C142 * C2611;
    const double C2780 = C2630 + C2449;
    const double C2779 = C2629 / C82;
    const double C2778 = C2628 + C2446;
    const double C2777 = C2627 + C1690;
    const double C2776 = C2626 + C1688;
    const double C2775 = C2625 + C1686;
    const double C2774 = C129 * C2624;
    const double C2773 = C2590 * C1395;
    const double C2772 = C2588 * C1395;
    const double C2771 = C2619 + C2436;
    const double C2770 = C2618 + C1673;
    const double C2769 = C2617 + C2431;
    const double C2768 = C2616 / C82;
    const double C2767 = C2615 + C1667;
    const double C2766 = C2614 + C1665;
    const double C2765 = C2613 - C1661;
    const double C2764 = C2612 - C1658;
    const double C2763 = C129 * C2611;
    const double C2762 = -C2609;
    const double C2761 = C142 * C2593;
    const double C2760 = -C2607;
    const double C2759 = C1880 - C2606;
    const double C2758 = C2605 - C1635;
    const double C2757 = C142 * C2567;
    const double C2756 = C2604 - C1628;
    const double C2755 = C458 - C2603;
    const double C2754 = C2584 * C165;
    const double C2753 = C2007 + C2599;
    const double C2752 = C2557 * C165;
    const double C2751 = C2000 + C2598;
    const double C2750 = C142 * C2553;
    const double C2749 = C2597 + C1602;
    const double C2748 = C2552 * C165;
    const double C2747 = C2596 + C1990;
    const double C2746 = -C2595;
    const double C2745 = C2594 + C2391;
    const double C2744 = C2593 * C160;
    const double C2743 = C1979 + C2592;
    const double C2742 = C462 - C2591;
    const double C2741 = C2567 * C160;
    const double C2740 = C1964 + C2587;
    const double C2739 = C1887 - C2586;
    const double C2738 = C2585 - C1555;
    const double C2737 = C141 * C2584;
    const double C2736 = -C2582;
    const double C2735 = C141 * C2557;
    const double C2734 = C2581 - C1536;
    const double C2733 = C2553 * C160;
    const double C2732 = C2580 + C1946;
    const double C2731 = C2579 + C1530;
    const double C2730 = C141 * C2552;
    const double C2729 = C2578 + C1525;
    const double C2728 = C2577 + C1522;
    const double C2727 = -C2576;
    const double C2726 = C2575 + C2361;
    const double C2725 = C2574 / C82;
    const double C2724 = -C2573;
    const double C2723 = C1933 + C2572;
    const double C2722 = C2571 / C82;
    const double C2721 = C2570 - C1501;
    const double C2720 = C1926 + C2569;
    const double C2719 = C129 * C2567;
    const double C2718 = C2563 - C1482;
    const double C2717 = C1910 + C2562;
    const double C2716 = -C2560;
    const double C2715 = C1903 + C2559;
    const double C2714 = C2558 / C82;
    const double C2713 = C129 * C2557;
    const double C2712 = C129 * C2553;
    const double C2711 = C129 * C2552;
    const double C2965 = C2855 / C82;
    const double C2964 = C2854 + C1861;
    const double C2963 = C2853 + C1858;
    const double C2962 = C2851 + C2269;
    const double C2961 = C1847 - C2848;
    const double C2960 = C2846 + C2444;
    const double C2959 = C2845 + C2253;
    const double C2958 = C2844 + C2441;
    const double C2957 = C142 * C2809;
    const double C2956 = C2119 + C2843;
    const double C2955 = C2842 / C82;
    const double C2954 = C141 * C2841;
    const double C2953 = C142 * C2808;
    const double C2952 = C2837 + C2318;
    const double C2951 = C2836 * C1398;
    const double C2950 = C2835 * C1398;
    const double C2949 = C2834 + C1818;
    const double C2948 = C2833 / C82;
    const double C2947 = C2832 + C1812;
    const double C2946 = C2830 + C2515;
    const double C2945 = C2829 + C2309;
    const double C2944 = C2828 + C2512;
    const double C2943 = C1799 - C2826;
    const double C2942 = C2825 / C82;
    const double C2941 = C2076 + C2824;
    const double C2940 = C142 * C2823;
    const double C2939 = C2103 + C2822;
    const double C2938 = C2821 + C2265;
    const double C2937 = C2820 / C82;
    const double C2936 = C141 * C2818;
    const double C2935 = C142 * C2816;
    const double C2934 = C859 + C2815;
    const double C2933 = -C2813;
    const double C2932 = C2811 / C82;
    const double C2931 = C2080 + C2810;
    const double C2930 = C2069 + C2806;
    const double C2929 = C2280 - C2804;
    const double C2928 = C2802 + C2434;
    const double C2927 = C1747 - C2800;
    const double C2926 = C2799 + C2247;
    const double C2925 = C2798 + C2427;
    const double C2924 = C2797 - C1741;
    const double C2923 = C2796 - C1738;
    const double C2922 = C2795 / C82;
    const double C2921 = C142 * C2794;
    const double C2920 = C2793 * C1395;
    const double C2919 = C142 * C2742;
    const double C2918 = C2791 + C2269;
    const double C2917 = C142 * C2790;
    const double C2916 = C2789 * C1395;
    const double C2915 = C141 * C2755;
    const double C2914 = C2787 + C2265;
    const double C2913 = C141 * C2786;
    const double C2912 = C141 * C2784;
    const double C2911 = C142 * C2782;
    const double C2910 = C129 * C2781;
    const double C2909 = C1693 - C2779;
    const double C2908 = C142 * C2721;
    const double C2907 = C2777 + C2444;
    const double C2906 = C2776 + C2253;
    const double C2905 = C2775 + C2441;
    const double C2904 = C142 * C2718;
    const double C2903 = C2774 / C82;
    const double C2902 = C141 * C2721;
    const double C2901 = C141 * C2718;
    const double C2900 = C2770 + C2434;
    const double C2899 = C1668 - C2768;
    const double C2898 = C2767 + C2247;
    const double C2897 = C2766 + C2427;
    const double C2896 = C2765 + C1662;
    const double C2895 = C2764 + C1659;
    const double C2894 = C2763 / C82;
    const double C2893 = C2762 / C82;
    const double C2892 = C2761 / C82;
    const double C2891 = C2760 / C82;
    const double C2890 = C142 * C2759;
    const double C2889 = C2758 - C1636;
    const double C2888 = C1873 + C2757;
    const double C2887 = C2756 - C1629;
    const double C2886 = C142 * C2755;
    const double C2885 = -C2754;
    const double C2884 = C354 + C2752;
    const double C2883 = C1434 + C2750;
    const double C2882 = C2749 + C2216;
    const double C2881 = C350 + C2748;
    const double C2880 = C2746 / C82;
    const double C2879 = -C2744;
    const double C2878 = C141 * C2742;
    const double C2877 = C355 + C2741;
    const double C2876 = C141 * C2739;
    const double C2875 = C2738 - C1556;
    const double C2874 = C2737 / C82;
    const double C2873 = C2736 / C82;
    const double C2872 = C1873 + C2735;
    const double C2871 = C2734 - C1537;
    const double C2870 = C352 + C2733;
    const double C2869 = C2731 + C2368;
    const double C2868 = C1434 + C2730;
    const double C2867 = C2729 + C2178;
    const double C2866 = C2728 + C2365;
    const double C2865 = C2727 / C82;
    const double C2864 = C1511 - C2725;
    const double C2863 = C2724 / C82;
    const double C2862 = C2167 - C2722;
    const double C2861 = C1920 + C2719;
    const double C2860 = C2716 / C82;
    const double C2859 = C2146 - C2714;
    const double C2858 = C1897 + C2713;
    const double C2857 = C2137 + C2712;
    const double C2856 = C2132 + C2711;
    const double C3049 = C2965 - C1863;
    const double C3048 = C2964 + C2549;
    const double C3047 = C2963 + C2546;
    const double C3046 = C2961 + C1848;
    const double C3045 = C142 * C2931;
    const double C3044 = C1939 + C2957;
    const double C3043 = C141 * C2956;
    const double C3042 = C2535 - C2955;
    const double C3041 = C2532 + C2954;
    const double C3040 = C2175 + C2953;
    const double C3039 = C142 * C2930;
    const double C3038 = C2952 * C1398;
    const double C3037 = C2949 + C2522;
    const double C3036 = C2948 - C1814;
    const double C3035 = C2947 + C2518;
    const double C3034 = C2943 + C1800;
    const double C3033 = C2306 - C2942;
    const double C3032 = C142 * C2941;
    const double C3031 = C2504 + C2940;
    const double C3030 = C141 * C2939;
    const double C3029 = C2937 - C1473;
    const double C3028 = C1987 + C2936;
    const double C3027 = C2097 + C2935;
    const double C3026 = C1286 * C2934;
    const double C3025 = C2933 / C82;
    const double C3024 = C2932 - C1510;
    const double C3023 = C2927 + C1748;
    const double C3022 = C2924 + C2474;
    const double C3021 = C2923 + C2471;
    const double C3020 = C2922 - C1734;
    const double C3019 = C2921 / C82;
    const double C3018 = C1957 + C2919;
    const double C3017 = C2918 * C1395;
    const double C3016 = C1951 + C2917;
    const double C3015 = C2031 + C2915;
    const double C3014 = C2913 / C82;
    const double C3013 = C2230 + C2912;
    const double C3012 = C2911 - C1528;
    const double C3011 = C142 * C2868;
    const double C3010 = C2910 / C82;
    const double C3009 = C2909 + C1694;
    const double C3008 = C1879 + C2908;
    const double C3007 = C142 * C2861;
    const double C3006 = C2144 + C2904;
    const double C3005 = C142 * C2858;
    const double C3004 = C142 * C2857;
    const double C3003 = C142 * C2856;
    const double C3002 = C2439 - C2903;
    const double C3001 = C2160 + C2902;
    const double C3000 = C141 * C2861;
    const double C2999 = C1886 + C2901;
    const double C2998 = C2899 + C1669;
    const double C2997 = C141 * C2858;
    const double C2996 = C141 * C2857;
    const double C2995 = C2896 + C2424;
    const double C2994 = C141 * C2856;
    const double C2993 = C2895 + C2421;
    const double C2992 = C2243 - C2894;
    const double C2991 = C2893 - C1653;
    const double C2990 = C2241 - C2892;
    const double C2989 = C2891 - C1642;
    const double C2988 = C2413 + C2890;
    const double C2987 = C2889 + C2411;
    const double C2986 = C142 * C2888;
    const double C2985 = C2887 + C2407;
    const double C2984 = C2017 + C2886;
    const double C2983 = C2885 / C82;
    const double C2982 = C79 * C2884;
    const double C2981 = C142 * C2883;
    const double C2980 = C2880 - C1433;
    const double C2979 = C2879 / C82;
    const double C2978 = C1976 + C2878;
    const double C2977 = C78 * C2877;
    const double C2976 = C2197 + C2876;
    const double C2975 = C2875 + C2378;
    const double C2974 = C2192 - C2874;
    const double C2973 = C2873 - C1543;
    const double C2972 = C141 * C2872;
    const double C2971 = C2871 + C2372;
    const double C2970 = C141 * C2868;
    const double C2969 = C2865 - C1433;
    const double C2968 = C2864 + C1512;
    const double C2967 = C2863 - C1510;
    const double C2966 = C2860 - C1473;
    const double C3128 = C3049 + C1864;
    const double C3127 = C3048 + C1862;
    const double C3126 = C3047 + C1859;
    const double C3125 = C3046 + C2447;
    const double C3124 = C142 * C3024;
    const double C3123 = C2074 + C3045;
    const double C3122 = C1398 * C3044;
    const double C3121 = C2321 + C3043;
    const double C3120 = C141 * C3042;
    const double C3119 = C1286 * C3040;
    const double C3118 = C1286 * C3039;
    const double C3117 = C142 * C2969;
    const double C3116 = C1407 * C3012;
    const double C3115 = C1407 * C3011;
    const double C3114 = C3037 + C1819;
    const double C3113 = C3036 + C1815;
    const double C3112 = C3035 + C1813;
    const double C3111 = C3034 + C2508;
    const double C3110 = C142 * C3033;
    const double C3109 = C2506 + C3032;
    const double C3108 = C2102 + C3030;
    const double C3107 = C141 * C3029;
    const double C3106 = C1395 * C3028;
    const double C3105 = C1286 * C3027;
    const double C3104 = C2092 + C3026;
    const double C3103 = C3025 - C1656;
    const double C3102 = C3023 + C2429;
    const double C3101 = C3022 - C1742;
    const double C3100 = C3021 - C1739;
    const double C3099 = C3020 - C1735;
    const double C3098 = C2273 - C3019;
    const double C3097 = C1398 * C3018;
    const double C3096 = C1398 * C3016;
    const double C3095 = C1395 * C3015;
    const double C3094 = C2458 - C3014;
    const double C3093 = C1395 * C3013;
    const double C3092 = C2451 - C3010;
    const double C3091 = C142 * C2967;
    const double C3090 = C3009 + C2447;
    const double C3089 = C1398 * C3008;
    const double C3088 = C1870 + C3007;
    const double C3087 = C79 * C3006;
    const double C3086 = C142 * C2966;
    const double C3085 = C79 * C3005;
    const double C3084 = C3004 - C2127;
    const double C3083 = C129 * C3002;
    const double C3082 = C141 * C2967;
    const double C3081 = C78 * C3001;
    const double C3080 = C78 * C3000;
    const double C3079 = C1395 * C2999;
    const double C3078 = C141 * C2966;
    const double C3077 = C2998 + C2429;
    const double C3076 = C1870 + C2997;
    const double C3075 = C2995 + C1663;
    const double C3074 = C2994 - C2127;
    const double C3073 = C2993 + C1660;
    const double C3072 = C129 * C2992;
    const double C3071 = C2991 + C1654;
    const double C3070 = C142 * C2990;
    const double C3069 = C2989 - C1643;
    const double C3068 = C2987 - C1638;
    const double C3067 = C2409 + C2986;
    const double C3066 = C2985 - C1631;
    const double C3065 = C79 * C2984;
    const double C3064 = C2983 - C1553;
    const double C3063 = C2002 + C2982;
    const double C3062 = C1995 + C2981;
    const double C3061 = C129 * C2980;
    const double C3060 = C2979 - C1586;
    const double C3059 = C78 * C2978;
    const double C3058 = C1968 + C2977;
    const double C3057 = C2975 - C1558;
    const double C3056 = C141 * C2974;
    const double C3055 = C2973 - C1544;
    const double C3054 = C2186 + C2972;
    const double C3053 = C2971 - C1539;
    const double C3052 = C1944 + C2970;
    const double C3051 = C129 * C2969;
    const double C3050 = C2968 + C2359;
    const double C3186 = C3128 + C2551;
    const double C3185 = C3127 + C2550;
    const double C3184 = C3126 + C2547;
    const double C3183 = C2536 + C3124;
    const double C3182 = C1398 * C3123;
    const double C3181 = C2696 + C3120;
    const double C3180 = C2116 + C3119;
    const double C3179 = C2115 + C3118;
    const double C3178 = C1286 * C3117;
    const double C3177 = C2838 + C3116;
    const double C3176 = C2528 + C3115;
    const double C3175 = C1407 * C3092;
    const double C3174 = C3114 + C2523;
    const double C3173 = C3113 + C2520;
    const double C3172 = C3112 + C2519;
    const double C3171 = C2507 + C3110;
    const double C3170 = C1395 * C3108;
    const double C3169 = C2501 + C3107;
    const double C3168 = C2096 + C3105;
    const double C3167 = C1286 * C3103;
    const double C3166 = C3101 + C2475;
    const double C3165 = C3100 + C2472;
    const double C3164 = C3099 + C2469;
    const double C3163 = C1398 * C3098;
    const double C3162 = C2792 + C3097;
    const double C3161 = C2463 + C3096;
    const double C3160 = C2788 + C3095;
    const double C3159 = C1395 * C3094;
    const double C3158 = C2454 + C3093;
    const double C3157 = C2450 + C3091;
    const double C3156 = C1398 * C3088;
    const double C3155 = C2041 + C3087;
    const double C3154 = C79 * C3086;
    const double C3153 = C2039 + C3085;
    const double C3152 = C2623 + C3083;
    const double C3151 = C78 * C3082;
    const double C3150 = C2036 + C3081;
    const double C3149 = C2035 + C3080;
    const double C3148 = C2432 + C3078;
    const double C3147 = C1395 * C3076;
    const double C3146 = C3075 + C2425;
    const double C3145 = C3073 + C2422;
    const double C3144 = C2419 + C3072;
    const double C3143 = C3071 + C2418;
    const double C3142 = C2417 + C3070;
    const double C3141 = C3069 + C2415;
    const double C3140 = C3068 + C2412;
    const double C3139 = C3066 + C2408;
    const double C3138 = C2016 + C3065;
    const double C3137 = C79 * C3064;
    const double C3136 = C2393 + C3061;
    const double C3135 = C78 * C3060;
    const double C3134 = C1975 + C3059;
    const double C3133 = C3057 + C2379;
    const double C3132 = C2376 + C3056;
    const double C3131 = C3055 + C2374;
    const double C3130 = C3053 + C2373;
    const double C3129 = C2363 + C3051;
    const double C3213 = C3186 + C1865;
    const double C3212 = C1398 * C3183;
    const double C3211 = C3180 * C1398;
    const double C3210 = C3179 * C1398;
    const double C3209 = C2114 + C3178;
    const double C3208 = C3177 * C1398;
    const double C3207 = C3176 * C1398;
    const double C3206 = C2688 + C3175;
    const double C3205 = C3173 + C1816;
    const double C3204 = C1395 * C3169;
    const double C3203 = C2086 + C3167;
    const double C3202 = C3164 - C1736;
    const double C3201 = C2640 + C3163;
    const double C3200 = C3162 * C1395;
    const double C3199 = C3161 * C1395;
    const double C3198 = C2633 + C3159;
    const double C3197 = C1398 * C3157;
    const double C3196 = C2040 + C3154;
    const double C3195 = C2037 + C3151;
    const double C3194 = C3150 * C1395;
    const double C3193 = C3149 * C1395;
    const double C3192 = C1395 * C3148;
    const double C3191 = C3143 + C1655;
    const double C3190 = C3141 - C1646;
    const double C3189 = C2009 + C3137;
    const double C3188 = C1983 + C3135;
    const double C3187 = C3131 - C1547;
    const double C3223 = C3213 + C2710;
    const double C3222 = C3209 * C1398;
    const double C3221 = C3206 * C1398;
    const double C3220 = C3205 + C2685;
    const double C3219 = C3202 + C2642;
    const double C3218 = C3201 * C1395;
    const double C3217 = C3195 * C1395;
    const double C3216 = C3191 + C2610;
    const double C3215 = C3190 + C2608;
    const double C3214 = C3187 + C2583;
    const double d2nexx100200 =
        (2 * Pi *
         ((-C59 * C2330) / C82 - C388 * C424 - C385 * C323 + C73 * C2125 -
          C372 * C368 + C75 * C2331 - C300 * C379 +
          C77 * (2 * C360 + C1870 - C2127 +
                 C129 * (C1873 - C1433 + C1434 +
                         C129 * (C2128 + C259 - (C129 * C2332) / C82)))) *
         C78 * C79) /
        C82;
    const double d2nexx100020 =
        (2 * Pi *
         (C3050 * C78 * C412 + C2726 * C78 * C413 +
          (C490 * C494 + C410 * C2362 + C505 * C472 + C1304 * C3129) * C78 *
              C414)) /
        C82;
    const double d2nexx100002 =
        (2 * Pi *
         (C3050 * C556 + C2745 * C557 +
          (C490 * C605 + C410 * C2392 + C505 * C591 + C1304 * C3136) * C558) *
         C79) /
        C82;
    const double d2nexx100110 =
        (2 * Pi *
         (C3216 * C78 * C418 +
          ((-C1415 * C1514) / C82 - C377 * C429 + C659 * C430 + C71 * C2173 +
           C660 * C664 + C74 * C3144) *
              C78 * C1395)) /
        C82;
    const double d2nexx100101 =
        (2 * Pi *
         (C3216 * C562 + ((-C1415 * C1588) / C82 - C377 * C566 + C659 * C567 +
                          C71 * C2210 + C660 * C701 + C74 * C3152) *
                             C1398) *
         C79) /
        C82;
    const double d2nexx100011 =
        (2 * Pi *
         ((C3050 * C562 + C2745 * C1398) * C418 +
          (C2726 * C562 +
           (C490 * C728 - (C410 * C1697) / C82 + C505 * C735 + C1304 * C3092) *
               C1398) *
              C1395)) /
        C82;
    const double d2nexx010200 =
        (2 * Pi *
         (C3219 * C78 * C764 +
          ((-C761 * C1514) / C82 - C785 * C429 - C781 * C430 + C762 * C2173 -
           C782 * C664 + C763 * C3144) *
              C78 * C1395)) /
        C82;
    const double d2nexx010020 =
        (2 * Pi *
         (C2929 * C78 * C809 + C2481 * C78 * C810 + C2805 * C78 * C811 +
          ((C882 * C134) / C82 + C1286 * ((-2 * C663) / C82 + C141 * C2969)) *
              C78 * C812)) /
        C82;
    const double d2nexx010002 =
        (2 * Pi *
         ((C2929 * C556 + C2491 * C557 + C2812 * C558) * C764 +
          (C2481 * C556 + C2492 * C557 + C3203 * C558) * C1395)) /
        C82;
    const double d2nexx010110 =
        (2 * Pi *
         (C3111 * C78 * C1416 + C2827 * C78 * C1417 +
          (C979 * C494 + C1387 * C2362 + C980 * C472 + C1407 * C3129) * C78 *
              C818)) /
        C82;
    const double d2nexx010101 =
        (2 * Pi *
         ((C3111 * C562 + C2950) * C764 + (C2827 * C562 + C3221) * C1395)) /
        C82;
    const double d2nexx010011 =
        (2 * Pi *
         ((C2929 * C562 + C2692) * C1416 + (C2481 * C562 + C2693) * C1417 +
          (C2805 * C562 + C3222) * C818)) /
        C82;
    const double d2nexx001200 =
        (2 * Pi *
         (C3219 * C1056 + ((-C761 * C1588) / C82 - C785 * C566 - C781 * C567 +
                           C762 * C2210 - C782 * C701 + C763 * C3152) *
                              C1398) *
         C79) /
        C82;
    const double d2nexx001020 =
        (2 * Pi *
         ((C2929 * C1056 + C2692) * C412 + (C2481 * C1056 + C2693) * C413 +
          (C2805 * C1056 + C3222) * C414)) /
        C82;
    const double d2nexx001002 =
        (2 * Pi *
         (C2929 * C1111 + C2491 * C1112 + C2812 * C1113 +
          ((C1181 * C134) / C82 + C1286 * ((-2 * C700) / C82 + C142 * C2980)) *
              C1114) *
         C79) /
        C82;
    const double d2nexx001110 =
        (2 * Pi *
         ((C3111 * C1056 + C2950) * C418 + (C2827 * C1056 + C3221) * C1395)) /
        C82;
    const double d2nexx001101 =
        (2 * Pi *
         (C3111 * C1418 + C2835 * C1419 +
          (C979 * C605 + C1387 * C2392 + C980 * C591 + C1407 * C3136) * C1120) *
         C79) /
        C82;
    const double d2nexx001011 =
        (2 * Pi *
         ((C2929 * C1418 + C2491 * C1419 + C2812 * C1120) * C418 +
          (C2481 * C1418 + C2492 * C1419 + C3203 * C1120) * C1395)) /
        C82;
    d2nexx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx100110;
    d2nexx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexx100011;
    d2nexx[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nexx100200 - 0.5 * d2nexx100020 + d2nexx100002;
    d2nexx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexx100101;
    d2nexx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexx100200 - std::sqrt(0.75) * d2nexx100020;
    d2nexx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx010110;
    d2nexx[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexx010011;
    d2nexx[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * d2nexx010200 - 0.5 * d2nexx010020 + d2nexx010002;
    d2nexx[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexx010101;
    d2nexx[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexx010200 - std::sqrt(0.75) * d2nexx010020;
    d2nexx[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexx001110;
    d2nexx[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexx001011;
    d2nexx[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nexx001200 - 0.5 * d2nexx001020 + d2nexx001002;
    d2nexx[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexx001101;
    d2nexx[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexx001200 - std::sqrt(0.75) * d2nexx001020;
    const double d2nexy100200 =
        (2 * Pi *
         ((-C59 * C1876) / C82 - C388 * C435 - C385 * C303 + C73 * C2130 -
          C372 * C329 + C75 * C2131 - C300 * C362 +
          C77 * (2 * C350 + C1879 + C129 * C2856)) *
         C78 * C79) /
        C82;
    const double d2nexy100020 =
        (2 * Pi *
         (C2866 * C78 * C412 + C2867 * C78 * C413 +
          (C490 * C513 + C410 * C2179 + C505 * C523 + C1304 * C3052) * C78 *
              C414)) /
        C82;
    const double d2nexy100002 =
        (2 * Pi *
         (C2866 * C556 + C2747 * C557 +
          (C490 * C606 + C410 * C2395 + C505 * C593 + C1304 * C2881) * C558) *
         C79) /
        C82;
    const double d2nexy100110 =
        (2 * Pi *
         (C3145 * C78 * C418 + (C1415 * C2177 - C377 * C474 + C659 * C475 +
                                C71 * C1942 + C660 * C677 + C74 * C3074) *
                                   C78 * C1395)) /
        C82;
    const double d2nexy100101 =
        (2 * Pi *
         (C3145 * C562 + ((-C1415 * C1596) / C82 - C377 * C572 + C659 * C573 +
                          C71 * C1598 + C660 * C702 + C74 * C3003) *
                             C1398) *
         C79) /
        C82;
    const double d2nexy100011 =
        (2 * Pi *
         ((C2866 * C562 + C2747 * C1398) * C418 +
          (C2867 * C562 +
           (C490 * C731 + C410 * C1700 + C505 * C732 + C1304 * C3011) * C1398) *
              C1395)) /
        C82;
    const double d2nexy010200 =
        (2 * Pi *
         (C3165 * C78 * C764 + (C761 * C2177 - C785 * C474 - C781 * C475 +
                                C762 * C1942 - C782 * C677 + C763 * C3074) *
                                   C78 * C1395)) /
        C82;
    const double d2nexy010020 =
        (2 * Pi *
         (C2653 * C78 * C809 + C2654 * C78 * C810 + C2655 * C78 * C811 +
          ((C901 * C134) / C82 + C1286 * (2 * C859 + C2175 + C141 * C2930)) *
              C78 * C812)) /
        C82;
    const double d2nexy010002 =
        (2 * Pi *
         ((C2653 * C556 + C2493 * C557 + C2814 * C558) * C764 +
          (C2654 * C556 + C2295 * C557 + C3104 * C558) * C1395)) /
        C82;
    const double d2nexy010110 =
        (2 * Pi *
         (C2944 * C78 * C1416 + C2945 * C78 * C1417 +
          (C979 * C513 + C1387 * C2179 + C980 * C523 + C1407 * C3052) * C78 *
              C818)) /
        C82;
    const double d2nexy010101 =
        (2 * Pi *
         ((C2944 * C562 + C2951) * C764 + (C2945 * C562 + C3207) * C1395)) /
        C82;
    const double d2nexy010011 =
        (2 * Pi *
         ((C2653 * C562 + C2694) * C1416 + (C2654 * C562 + C2531) * C1417 +
          (C2655 * C562 + C3210) * C818)) /
        C82;
    const double d2nexy001200 =
        (2 * Pi *
         (C3165 * C1056 + ((-C761 * C1596) / C82 - C785 * C572 - C781 * C573 +
                           C762 * C1598 - C782 * C702 + C763 * C3003) *
                              C1398) *
         C79) /
        C82;
    const double d2nexy001020 =
        (2 * Pi *
         ((C2653 * C1056 + C2694) * C412 + (C2654 * C1056 + C2531) * C413 +
          (C2655 * C1056 + C3210) * C414)) /
        C82;
    const double d2nexy001002 =
        (2 * Pi *
         (C2653 * C1111 + C2493 * C1112 + C2814 * C1113 +
          ((C1182 * C134) / C82 +
           C1286 * ((-2 * C142 * C265) / C82 +
                    C142 * ((-C1882 * C165) / C82 - C1443))) *
              C1114) *
         C79) /
        C82;
    const double d2nexy001110 =
        (2 * Pi *
         ((C2944 * C1056 + C2951) * C418 + (C2945 * C1056 + C3207) * C1395)) /
        C82;
    const double d2nexy001101 =
        (2 * Pi *
         (C2944 * C1418 + C2836 * C1419 +
          (C979 * C606 + C1387 * C2395 + C980 * C593 + C1407 * C2881) * C1120) *
         C79) /
        C82;
    const double d2nexy001011 =
        (2 * Pi *
         ((C2653 * C1418 + C2493 * C1419 + C2814 * C1120) * C418 +
          (C2654 * C1418 + C2295 * C1419 + C3104 * C1120) * C1395)) /
        C82;
    d2nexy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy100110;
    d2nexy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexy100011;
    d2nexy[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nexy100200 - 0.5 * d2nexy100020 + d2nexy100002;
    d2nexy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexy100101;
    d2nexy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexy100200 - std::sqrt(0.75) * d2nexy100020;
    d2nexy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy010110;
    d2nexy[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexy010011;
    d2nexy[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * d2nexy010200 - 0.5 * d2nexy010020 + d2nexy010002;
    d2nexy[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexy010101;
    d2nexy[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexy010200 - std::sqrt(0.75) * d2nexy010020;
    d2nexy[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexy001110;
    d2nexy[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexy001011;
    d2nexy[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nexy001200 - 0.5 * d2nexy001020 + d2nexy001002;
    d2nexy[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexy001101;
    d2nexy[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexy001200 - std::sqrt(0.75) * d2nexy001020;
    const double d2nexz100200 =
        (2 * Pi *
         ((-C59 * C1883) / C82 - C388 * C444 - C385 * C309 + C73 * C2135 -
          C372 * C334 + C75 * C2136 - C300 * C363 +
          C77 * (2 * C352 + C1886 + C129 * C2857)) *
         C78 * C79) /
        C82;
    const double d2nexz100020 =
        (2 * Pi *
         (C2869 * C78 * C412 + C2732 * C78 * C413 +
          (C490 * C499 + C410 * C2370 + C505 * C508 + C1304 * C2870) * C78 *
              C414)) /
        C82;
    const double d2nexz100002 =
        (2 * Pi *
         (C2869 * C556 + C2882 * C557 +
          (C490 * C618 + C410 * C2217 + C505 * C619 + C1304 * C3062) * C558) *
         C79) /
        C82;
    const double d2nexz100110 =
        (2 * Pi *
         (C3146 * C78 * C418 +
          ((-C1415 * C1532) / C82 - C377 * C446 + C659 * C447 + C71 * C1534 +
           C660 * C669 + C74 * C2996) *
              C78 * C1395)) /
        C82;
    const double d2nexz100101 =
        (2 * Pi *
         (C3146 * C562 + (C1415 * C2215 - C377 * C594 + C659 * C595 +
                          C71 * C1993 + C660 * C706 + C74 * C3084) *
                             C1398) *
         C79) /
        C82;
    const double d2nexz100011 =
        (2 * Pi *
         ((C2869 * C562 + C2882 * C1398) * C418 +
          (C2732 * C562 +
           (C490 * C738 + C410 * C2258 + C505 * C739 + C1304 * C3012) * C1398) *
              C1395)) /
        C82;
    const double d2nexz010200 =
        (2 * Pi *
         (C3166 * C78 * C764 +
          ((-C761 * C1532) / C82 - C785 * C446 - C781 * C447 + C762 * C1534 -
           C782 * C669 + C763 * C2996) *
              C78 * C1395)) /
        C82;
    const double d2nexz010020 =
        (2 * Pi *
         (C2657 * C78 * C809 + C2487 * C78 * C810 + C2807 * C78 * C811 +
          ((C884 * C134) / C82 + C1286 * ((-2 * C934) / C82 + C141 * C2808)) *
              C78 * C812)) /
        C82;
    const double d2nexz010002 =
        (2 * Pi *
         ((C2657 * C556 + C2665 * C557 + C2666 * C558) * C764 +
          (C2487 * C556 + C2667 * C557 + C3168 * C558) * C1395)) /
        C82;
    const double d2nexz010110 =
        (2 * Pi *
         (C2946 * C78 * C1416 + C2831 * C78 * C1417 +
          (C979 * C499 + C1387 * C2370 + C980 * C508 + C1407 * C2870) * C78 *
              C818)) /
        C82;
    const double d2nexz010101 =
        (2 * Pi *
         ((C2946 * C562 + C3038) * C764 + (C2831 * C562 + C3208) * C1395)) /
        C82;
    const double d2nexz010011 =
        (2 * Pi *
         ((C2657 * C562 + C2839) * C1416 + (C2487 * C562 + C2840) * C1417 +
          (C2807 * C562 + C3211) * C818)) /
        C82;
    const double d2nexz001200 =
        (2 * Pi *
         (C3166 * C1056 + (C761 * C2215 - C785 * C594 - C781 * C595 +
                           C762 * C1993 - C782 * C706 + C763 * C3084) *
                              C1398) *
         C79) /
        C82;
    const double d2nexz001020 =
        (2 * Pi *
         ((C2657 * C1056 + C2839) * C412 + (C2487 * C1056 + C2840) * C413 +
          (C2807 * C1056 + C3211) * C414)) /
        C82;
    const double d2nexz001002 =
        (2 * Pi *
         (C2657 * C1111 + C2665 * C1112 + C2666 * C1113 +
          ((C1200 * C134) / C82 +
           C1286 * (2 * C1160 + C2212 +
                    C142 * (C1681 - C1452 +
                            C142 * (C259 - (C142 * C1889) / C82)))) *
              C1114) *
         C79) /
        C82;
    const double d2nexz001110 =
        (2 * Pi *
         ((C2946 * C1056 + C3038) * C418 + (C2831 * C1056 + C3208) * C1395)) /
        C82;
    const double d2nexz001101 =
        (2 * Pi *
         (C2946 * C1418 + C2952 * C1419 +
          (C979 * C618 + C1387 * C2217 + C980 * C619 + C1407 * C3062) * C1120) *
         C79) /
        C82;
    const double d2nexz001011 =
        (2 * Pi *
         ((C2657 * C1418 + C2665 * C1419 + C2666 * C1120) * C418 +
          (C2487 * C1418 + C2667 * C1419 + C3168 * C1120) * C1395)) /
        C82;
    d2nexz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz100110;
    d2nexz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexz100011;
    d2nexz[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nexz100200 - 0.5 * d2nexz100020 + d2nexz100002;
    d2nexz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexz100101;
    d2nexz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexz100200 - std::sqrt(0.75) * d2nexz100020;
    d2nexz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz010110;
    d2nexz[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexz010011;
    d2nexz[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * d2nexz010200 - 0.5 * d2nexz010020 + d2nexz010002;
    d2nexz[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexz010101;
    d2nexz[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexz010200 - std::sqrt(0.75) * d2nexz010020;
    d2nexz[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nexz001110;
    d2nexz[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nexz001011;
    d2nexz[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nexz001200 - 0.5 * d2nexz001020 + d2nexz001002;
    d2nexz[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nexz001101;
    d2nexz[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nexz001200 - std::sqrt(0.75) * d2nexz001020;
    const double d2neyx100200 =
        (2 * Pi *
         (C2554 * C59 + C2555 * C73 + C2556 * C75 +
          ((C379 * C143) / C82 + C79 * (2 * C354 + C2144 + C129 * C2858)) *
              C77) *
         C78) /
        C82;
    const double d2neyx100020 =
        (2 * Pi *
         (C3130 * C410 + (C412 * C2142 - C534 * C323 - C530 * C430 +
                          C413 * C1950 - C518 * C472 + C414 * C3054) *
                             C1304) *
         C78) /
        C82;
    const double d2neyx100002 = (2 * Pi *
                                 ((C2554 * C410 + C2555 * C1304) * C556 +
                                  (C2397 * C410 + C2219 * C1304) * C557 +
                                  (C2751 * C410 + C3063 * C1304) * C558)) /
                                C82;
    const double d2neyx100110 =
        (2 * Pi *
         (C2897 * C1415 + C2898 * C71 +
          (C670 * C368 + C418 * C2143 + C671 * C664 + C3147) * C74) *
         C78) /
        C82;
    const double d2neyx100101 =
        (2 * Pi *
         ((C2554 * C1415 + C2555 * C71 + C2556 * C74) * C562 +
          (C2397 * C1415 + C2219 * C71 + C3153 * C74) * C1398)) /
        C82;
    const double d2neyx100011 = (2 * Pi *
                                 ((C2897 * C410 + C2898 * C1304) * C562 +
                                  (C2783 * C410 + C3158 * C1304) * C1398)) /
                                C82;
    const double d2neyx010200 =
        (2 * Pi *
         (C2925 * C761 + C2926 * C762 +
          (C786 * C368 + C764 * C2143 + C787 * C664 + C3147) * C763) *
         C78) /
        C82;
    const double d2neyx010020 =
        (2 * Pi *
         ((-C809 * C1891) / C82 - C910 * C424 - C907 * C429 + C810 * C2184 -
          C905 * C494 + C811 * C2185 - C890 * C882 +
          C812 * (2 * C867 + C1939 +
                  C141 * (C2032 - C1463 +
                          C141 * (C2128 - (C141 * C1898) / C82)))) *
         C1286 * C78) /
        C82;
    const double d2neyx010002 =
        (2 * Pi *
         (C2925 * C1286 * C556 + C2817 * C1286 * C557 +
          (C786 * C605 + C764 * C2398 + C787 * C951 + C3106) * C1286 * C558)) /
        C82;
    const double d2neyx010110 =
        (2 * Pi *
         (C3172 * C1387 + (C1416 * C2142 - C876 * C323 + C981 * C430 +
                           C1417 * C1950 + C982 * C472 + C818 * C3054) *
                              C1407) *
         C78) /
        C82;
    const double d2neyx010101 =
        (2 * Pi *
         ((C2925 * C1387 + C2926 * C1407) * C562 +
          (C2817 * C1387 +
           (C786 * C567 + C764 * C1609 + C787 * C735 + C3093) * C1407) *
              C1398)) /
        C82;
    const double d2neyx010011 =
        (2 * Pi *
         (C3172 * C1286 * C562 +
          ((-C1416 * C1607) / C82 - C876 * C566 + C981 * C728 + C1417 * C2260 +
           C982 * C1024 + C818 * C3041) *
              C1286 * C1398)) /
        C82;
    const double d2neyx001200 =
        (2 * Pi *
         ((C2554 * C761 + C2555 * C762 + C2556 * C763) * C1056 +
          (C2397 * C761 + C2219 * C762 + C3153 * C763) * C1398)) /
        C82;
    const double d2neyx001020 =
        (2 * Pi *
         (C3130 * C1286 * C1056 +
          ((-C412 * C1607) / C82 - C534 * C566 - C530 * C728 + C413 * C2260 -
           C518 * C1024 + C414 * C3041) *
              C1286 * C1398)) /
        C82;
    const double d2neyx001002 =
        (2 * Pi *
         (C2554 * C1286 * C1111 + C2397 * C1286 * C1112 +
          C2751 * C1286 * C1113 +
          ((C1181 * C143) / C82 + C79 * ((-2 * C1027) / C82 + C142 * C2818)) *
              C1286 * C1114)) /
        C82;
    const double d2neyx001110 = (2 * Pi *
                                 ((C2897 * C1387 + C2898 * C1407) * C1056 +
                                  (C2783 * C1387 + C3158 * C1407) * C1398)) /
                                C82;
    const double d2neyx001101 = (2 * Pi *
                                 ((C2554 * C1387 + C2555 * C1407) * C1418 +
                                  (C2397 * C1387 + C2219 * C1407) * C1419 +
                                  (C2751 * C1387 + C3063 * C1407) * C1120)) /
                                C82;
    const double d2neyx001011 =
        (2 * Pi *
         (C2897 * C1286 * C1418 + C2783 * C1286 * C1419 +
          (C670 * C605 + C418 * C2398 + C671 * C951 + C3106) * C1286 * C1120)) /
        C82;
    d2neyx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx100110;
    d2neyx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyx100011;
    d2neyx[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2neyx100200 - 0.5 * d2neyx100020 + d2neyx100002;
    d2neyx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyx100101;
    d2neyx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyx100200 - std::sqrt(0.75) * d2neyx100020;
    d2neyx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx010110;
    d2neyx[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyx010011;
    d2neyx[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * d2neyx010200 - 0.5 * d2neyx010020 + d2neyx010002;
    d2neyx[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyx010101;
    d2neyx[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyx010200 - std::sqrt(0.75) * d2neyx010020;
    d2neyx[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyx001110;
    d2neyx[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyx001011;
    d2neyx[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2neyx001200 - 0.5 * d2neyx001020 + d2neyx001002;
    d2neyx[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyx001101;
    d2neyx[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyx001200 - std::sqrt(0.75) * d2neyx001020;
    const double d2neyy100200 =
        (2 * Pi *
         (C2859 * C59 + C2340 * C73 + C2715 * C75 +
          ((C362 * C143) / C82 + C79 * ((-2 * C457) / C82 + C129 * C2966)) *
              C77) *
         C78) /
        C82;
    const double d2neyy100020 =
        (2 * Pi *
         (C3214 * C410 + ((-C412 * C1468) / C82 - C534 * C303 - C530 * C475 +
                          C413 * C2189 - C518 * C523 + C414 * C3132) *
                             C1304) *
         C78) /
        C82;
    const double d2neyy100002 = (2 * Pi *
                                 ((C2859 * C410 + C2340 * C1304) * C556 +
                                  (C2399 * C410 + C2400 * C1304) * C557 +
                                  (C2753 * C410 + C3189 * C1304) * C558)) /
                                C82;
    const double d2neyy100110 =
        (2 * Pi *
         (C3077 * C1415 + C2769 * C71 +
          (C670 * C329 + C418 * C2341 + C671 * C677 + C3192) * C74) *
         C78) /
        C82;
    const double d2neyy100101 =
        (2 * Pi *
         ((C2859 * C1415 + C2340 * C71 + C2715 * C74) * C562 +
          (C2399 * C1415 + C2400 * C71 + C3196 * C74) * C1398)) /
        C82;
    const double d2neyy100011 = (2 * Pi *
                                 ((C3077 * C410 + C2769 * C1304) * C562 +
                                  (C2785 * C410 + C3198 * C1304) * C1398)) /
                                C82;
    const double d2neyy010200 =
        (2 * Pi *
         (C3102 * C761 + C2801 * C762 +
          (C786 * C329 + C764 * C2341 + C787 * C677 + C3192) * C763) *
         C78) /
        C82;
    const double d2neyy010020 =
        (2 * Pi *
         ((-C809 * C2339) / C82 - C910 * C435 - C907 * C474 + C810 * C2187 -
          C905 * C513 + C811 * C2375 - C890 * C901 +
          C812 * (2 * C868 + C2074 - (C141 * C1765 - C275 + C2075) +
                  C141 * (C2076 - C1473 + C839 - C216 +
                          C141 * (C2133 + C277 - (C141 * C2342) / C82)))) *
         C1286 * C78) /
        C82;
    const double d2neyy010002 =
        (2 * Pi *
         (C3102 * C1286 * C556 + C2819 * C1286 * C557 +
          (C786 * C606 + C764 * C2401 + C787 * C946 + C3204) * C1286 * C558)) /
        C82;
    const double d2neyy010110 =
        (2 * Pi *
         (C3220 * C1387 + ((-C1416 * C1468) / C82 - C876 * C303 + C981 * C475 +
                           C1417 * C2189 + C982 * C523 + C818 * C3132) *
                              C1407) *
         C78) /
        C82;
    const double d2neyy010101 =
        (2 * Pi *
         ((C3102 * C1387 + C2801 * C1407) * C562 +
          (C2819 * C1387 +
           (C786 * C573 - (C764 * C1616) / C82 + C787 * C732 + C3159) * C1407) *
              C1398)) /
        C82;
    const double d2neyy010011 =
        (2 * Pi *
         (C3220 * C1286 * C562 +
          ((-C1416 * C1614) / C82 - C876 * C572 + C981 * C731 + C1417 * C2263 +
           C982 * C1025 + C818 * C3181) *
              C1286 * C1398)) /
        C82;
    const double d2neyy001200 =
        (2 * Pi *
         ((C2859 * C761 + C2340 * C762 + C2715 * C763) * C1056 +
          (C2399 * C761 + C2400 * C762 + C3196 * C763) * C1398)) /
        C82;
    const double d2neyy001020 =
        (2 * Pi *
         (C3214 * C1286 * C1056 +
          ((-C412 * C1614) / C82 - C534 * C572 - C530 * C731 + C413 * C2263 -
           C518 * C1025 + C414 * C3181) *
              C1286 * C1398)) /
        C82;
    const double d2neyy001002 =
        (2 * Pi *
         (C2859 * C1286 * C1111 + C2399 * C1286 * C1112 +
          C2753 * C1286 * C1113 +
          ((C1182 * C143) / C82 + C79 * ((-2 * C1029) / C82 + C142 * C3029)) *
              C1286 * C1114)) /
        C82;
    const double d2neyy001110 = (2 * Pi *
                                 ((C3077 * C1387 + C2769 * C1407) * C1056 +
                                  (C2785 * C1387 + C3198 * C1407) * C1398)) /
                                C82;
    const double d2neyy001101 = (2 * Pi *
                                 ((C2859 * C1387 + C2340 * C1407) * C1418 +
                                  (C2399 * C1387 + C2400 * C1407) * C1419 +
                                  (C2753 * C1387 + C3189 * C1407) * C1120)) /
                                C82;
    const double d2neyy001011 =
        (2 * Pi *
         (C3077 * C1286 * C1418 + C2785 * C1286 * C1419 +
          (C670 * C606 + C418 * C2401 + C671 * C946 + C3204) * C1286 * C1120)) /
        C82;
    d2neyy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy100110;
    d2neyy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyy100011;
    d2neyy[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2neyy100200 - 0.5 * d2neyy100020 + d2neyy100002;
    d2neyy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyy100101;
    d2neyy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyy100200 - std::sqrt(0.75) * d2neyy100020;
    d2neyy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy010110;
    d2neyy[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyy010011;
    d2neyy[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * d2neyy010200 - 0.5 * d2neyy010020 + d2neyy010002;
    d2neyy[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyy010101;
    d2neyy[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyy010200 - std::sqrt(0.75) * d2neyy010020;
    d2neyy[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyy001110;
    d2neyy[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyy001011;
    d2neyy[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2neyy001200 - 0.5 * d2neyy001020 + d2neyy001002;
    d2neyy[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyy001101;
    d2neyy[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyy001200 - std::sqrt(0.75) * d2neyy001020;
    const double d2neyz100200 =
        (2 * Pi *
         (C2561 * C59 + C2344 * C73 + C2717 * C75 +
          ((C363 * C143) / C82 + C79 * ((-2 * C459) / C82 + C129 * C2718)) *
              C77) *
         C78) /
        C82;
    const double d2neyz100020 =
        (2 * Pi *
         (C3133 * C410 + ((-C412 * C1477) / C82 - C534 * C309 - C530 * C447 +
                          C413 * C2196 - C518 * C508 + C414 * C2976) *
                             C1304) *
         C78) /
        C82;
    const double d2neyz100002 = (2 * Pi *
                                 ((C2561 * C410 + C2344 * C1304) * C556 +
                                  (C2600 * C410 + C2601 * C1304) * C557 +
                                  (C2602 * C410 + C3138 * C1304) * C558)) /
                                C82;
    const double d2neyz100110 =
        (2 * Pi *
         (C2900 * C1415 + C2771 * C71 +
          (C670 * C334 + C418 * C2345 + C671 * C669 + C3079) * C74) *
         C78) /
        C82;
    const double d2neyz100101 =
        (2 * Pi *
         ((C2561 * C1415 + C2344 * C71 + C2717 * C74) * C562 +
          (C2600 * C1415 + C2601 * C71 + C3155 * C74) * C1398)) /
        C82;
    const double d2neyz100011 = (2 * Pi *
                                 ((C2900 * C410 + C2771 * C1304) * C562 +
                                  (C2914 * C410 + C3160 * C1304) * C1398)) /
                                C82;
    const double d2neyz010200 =
        (2 * Pi *
         (C2928 * C761 + C2803 * C762 +
          (C786 * C334 + C764 * C2345 + C787 * C669 + C3079) * C763) *
         C78) /
        C82;
    const double d2neyz010020 =
        (2 * Pi *
         ((-C809 * C1907) / C82 - C910 * C444 - C907 * C446 + C810 * C2194 -
          C905 * C499 + C811 * C2195 - C890 * C884 +
          C812 * (2 * C869 + C2077 +
                  C141 * (C2078 - C1482 +
                          C141 * (C2138 - (C141 * C1912) / C82)))) *
         C1286 * C78) /
        C82;
    const double d2neyz010002 =
        (2 * Pi *
         (C2928 * C1286 * C556 + C2938 * C1286 * C557 +
          (C786 * C618 + C764 * C2226 + C787 * C957 + C3170) * C1286 * C558)) /
        C82;
    const double d2neyz010110 =
        (2 * Pi *
         (C3174 * C1387 + ((-C1416 * C1477) / C82 - C876 * C309 + C981 * C447 +
                           C1417 * C2196 + C982 * C508 + C818 * C2976) *
                              C1407) *
         C78) /
        C82;
    const double d2neyz010101 =
        (2 * Pi *
         ((C2928 * C1387 + C2803 * C1407) * C562 +
          (C2938 * C1387 +
           (C786 * C595 + C764 * C2225 + C787 * C739 + C3095) * C1407) *
              C1398)) /
        C82;
    const double d2neyz010011 =
        (2 * Pi *
         (C3174 * C1286 * C562 + (C1416 * C2224 - C876 * C594 + C981 * C738 +
                                  C1417 * C2052 + C982 * C1032 + C818 * C3121) *
                                     C1286 * C1398)) /
        C82;
    const double d2neyz001200 =
        (2 * Pi *
         ((C2561 * C761 + C2344 * C762 + C2717 * C763) * C1056 +
          (C2600 * C761 + C2601 * C762 + C3155 * C763) * C1398)) /
        C82;
    const double d2neyz001020 =
        (2 * Pi *
         (C3133 * C1286 * C1056 + (C412 * C2224 - C534 * C594 - C530 * C738 +
                                   C413 * C2052 - C518 * C1032 + C414 * C3121) *
                                      C1286 * C1398)) /
        C82;
    const double d2neyz001002 =
        (2 * Pi *
         (C2561 * C1286 * C1111 + C2600 * C1286 * C1112 +
          C2602 * C1286 * C1113 +
          ((C1200 * C143) / C82 + C79 * (2 * C954 + C2300 + C142 * C2939)) *
              C1286 * C1114)) /
        C82;
    const double d2neyz001110 = (2 * Pi *
                                 ((C2900 * C1387 + C2771 * C1407) * C1056 +
                                  (C2914 * C1387 + C3160 * C1407) * C1398)) /
                                C82;
    const double d2neyz001101 = (2 * Pi *
                                 ((C2561 * C1387 + C2344 * C1407) * C1418 +
                                  (C2600 * C1387 + C2601 * C1407) * C1419 +
                                  (C2602 * C1387 + C3138 * C1407) * C1120)) /
                                C82;
    const double d2neyz001011 =
        (2 * Pi *
         (C2900 * C1286 * C1418 + C2914 * C1286 * C1419 +
          (C670 * C618 + C418 * C2226 + C671 * C957 + C3170) * C1286 * C1120)) /
        C82;
    d2neyz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz100110;
    d2neyz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyz100011;
    d2neyz[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2neyz100200 - 0.5 * d2neyz100020 + d2neyz100002;
    d2neyz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyz100101;
    d2neyz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyz100200 - std::sqrt(0.75) * d2neyz100020;
    d2neyz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz010110;
    d2neyz[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyz010011;
    d2neyz[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * d2neyz010200 - 0.5 * d2neyz010020 + d2neyz010002;
    d2neyz[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyz010101;
    d2neyz[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyz010200 - std::sqrt(0.75) * d2neyz010020;
    d2neyz[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2neyz001110;
    d2neyz[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2neyz001011;
    d2neyz[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2neyz001200 - 0.5 * d2neyz001020 + d2neyz001002;
    d2neyz[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2neyz001101;
    d2neyz[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2neyz001200 - std::sqrt(0.75) * d2neyz001020;
    const double d2nezx100200 =
        (2 * Pi *
         (C2564 * C79 * C59 + C2565 * C79 * C73 + C2566 * C79 * C75 +
          ((C379 * C144) / C82 + C78 * (2 * C355 + C2160 + C129 * C2861)) *
              C79 * C77)) /
        C82;
    const double d2nezx100020 =
        (2 * Pi *
         ((C2564 * C412 + C2381 * C413 + C2740 * C414) * C410 +
          (C2565 * C412 + C2201 * C413 + C3058 * C414) * C1304)) /
        C82;
    const double d2nezx100002 =
        (2 * Pi *
         (C3139 * C79 * C410 + (C556 * C2158 - C637 * C323 - C633 * C567 +
                                C557 * C2020 - C623 * C591 + C558 * C3067) *
                                   C79 * C1304)) /
        C82;
    const double d2nezx100110 =
        (2 * Pi *
         ((C2564 * C418 + C2620) * C1415 + (C2565 * C418 + C2437) * C71 +
          (C2566 * C418 + C3193) * C74)) /
        C82;
    const double d2nezx100101 =
        (2 * Pi *
         (C2905 * C79 * C1415 + C2906 * C79 * C71 +
          (C704 * C368 + C562 * C2159 + C705 * C701 + C3156) * C79 * C74)) /
        C82;
    const double d2nezx100011 =
        (2 * Pi *
         ((C2905 * C418 + C2916) * C410 + (C2906 * C418 + C3199) * C1304)) /
        C82;
    const double d2nezx010200 =
        (2 * Pi *
         ((C2564 * C764 + C2620) * C761 + (C2565 * C764 + C2437) * C762 +
          (C2566 * C764 + C3193) * C763)) /
        C82;
    const double d2nezx010020 =
        (2 * Pi *
         (C2564 * C809 + C2381 * C810 + C2740 * C811 +
          ((C882 * C144) / C82 + C78 * ((-2 * C942) / C82 + C141 * C2809)) *
              C812) *
         C1286) /
        C82;
    const double d2nezx010002 =
        (2 * Pi *
         (C3139 * C764 + ((-C556 * C1564) / C82 - C637 * C429 - C633 * C728 +
                          C557 * C2267 - C623 * C951 + C558 * C3031) *
                             C1395) *
         C1286) /
        C82;
    const double d2nezx010110 =
        (2 * Pi *
         ((C2564 * C1416 + C2381 * C1417 + C2740 * C818) * C1387 +
          (C2565 * C1416 + C2201 * C1417 + C3058 * C818) * C1407)) /
        C82;
    const double d2nezx010101 =
        (2 * Pi *
         ((C2905 * C764 + C2916) * C1387 + (C2906 * C764 + C3199) * C1407)) /
        C82;
    const double d2nezx010011 =
        (2 * Pi *
         (C2905 * C1416 + C2789 * C1417 +
          (C704 * C494 + C562 * C2382 + C705 * C1024 + C3122) * C818) *
         C1286) /
        C82;
    const double d2nezx001200 =
        (2 * Pi *
         (C2958 * C79 * C761 + C2959 * C79 * C762 +
          (C1068 * C368 + C1056 * C2159 + C1069 * C701 + C3156) * C79 * C763)) /
        C82;
    const double d2nezx001020 =
        (2 * Pi *
         (C2958 * C412 + C2850 * C413 +
          (C1068 * C494 + C1056 * C2382 + C1069 * C1024 + C3122) * C414) *
         C1286) /
        C82;
    const double d2nezx001002 =
        (2 * Pi *
         ((-C1111 * C1914) / C82 - C1209 * C424 - C1206 * C566 + C1112 * C2228 -
          C1204 * C605 + C1113 * C2229 - C1189 * C1181 +
          C1114 * (2 * C1167 + C1987 +
                   C142 * (C2251 - C1491 +
                           C142 * (C2128 - (C142 * C1921) / C82)))) *
         C79 * C1286) /
        C82;
    const double d2nezx001110 =
        (2 * Pi *
         ((C2958 * C418 + C2850 * C1395) * C1387 +
          (C2959 * C418 +
           (C1068 * C430 + C1056 * C1568 + C1069 * C735 + C3096) * C1395) *
              C1407)) /
        C82;
    const double d2nezx001101 =
        (2 * Pi *
         (C3184 * C79 * C1387 + (C1418 * C2158 - C1175 * C323 + C1251 * C567 +
                                 C1419 * C2020 + C1252 * C591 + C1120 * C3067) *
                                    C79 * C1407)) /
        C82;
    const double d2nezx001011 =
        (2 * Pi *
         (C3184 * C418 + ((-C1418 * C1564) / C82 - C1175 * C429 + C1251 * C728 +
                          C1419 * C2267 + C1252 * C951 + C1120 * C3031) *
                             C1395) *
         C1286) /
        C82;
    d2nezx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx100110;
    d2nezx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezx100011;
    d2nezx[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nezx100200 - 0.5 * d2nezx100020 + d2nezx100002;
    d2nezx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezx100101;
    d2nezx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezx100200 - std::sqrt(0.75) * d2nezx100020;
    d2nezx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx010110;
    d2nezx[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezx010011;
    d2nezx[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * d2nezx010200 - 0.5 * d2nezx010020 + d2nezx010002;
    d2nezx[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezx010101;
    d2nezx[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezx010200 - std::sqrt(0.75) * d2nezx010020;
    d2nezx[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezx001110;
    d2nezx[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezx001011;
    d2nezx[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nezx001200 - 0.5 * d2nezx001020 + d2nezx001002;
    d2nezx[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezx001101;
    d2nezx[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezx001200 - std::sqrt(0.75) * d2nezx001020;
    const double d2nezy100200 =
        (2 * Pi *
         (C2568 * C79 * C59 + C2352 * C79 * C73 + C2720 * C79 * C75 +
          ((C362 * C144) / C82 + C78 * ((-2 * C461) / C82 + C129 * C2721)) *
              C79 * C77)) /
        C82;
    const double d2nezy100020 =
        (2 * Pi *
         ((C2568 * C412 + C2588 * C413 + C2589 * C414) * C410 +
          (C2352 * C412 + C2590 * C413 + C3134 * C414) * C1304)) /
        C82;
    const double d2nezy100002 =
        (2 * Pi *
         (C3140 * C79 * C410 +
          ((-C556 * C1496) / C82 - C637 * C303 - C633 * C573 + C557 * C2234 -
           C623 * C593 + C558 * C2988) *
              C79 * C1304)) /
        C82;
    const double d2nezy100110 =
        (2 * Pi *
         ((C2568 * C418 + C2772) * C1415 + (C2352 * C418 + C2773) * C71 +
          (C2720 * C418 + C3194) * C74)) /
        C82;
    const double d2nezy100101 =
        (2 * Pi *
         (C2907 * C79 * C1415 + C2778 * C79 * C71 +
          (C704 * C329 + C562 * C2353 + C705 * C702 + C3089) * C79 * C74)) /
        C82;
    const double d2nezy100011 =
        (2 * Pi *
         ((C2907 * C418 + C3017) * C410 + (C2778 * C418 + C3200) * C1304)) /
        C82;
    const double d2nezy010200 =
        (2 * Pi *
         ((C2568 * C764 + C2772) * C761 + (C2352 * C764 + C2773) * C762 +
          (C2720 * C764 + C3194) * C763)) /
        C82;
    const double d2nezy010020 =
        (2 * Pi *
         (C2568 * C809 + C2588 * C810 + C2589 * C811 +
          ((C901 * C144) / C82 + C78 * (2 * C870 + C2290 + C141 * C2931)) *
              C812) *
         C1286) /
        C82;
    const double d2nezy010002 =
        (2 * Pi *
         (C3140 * C764 + (C556 * C2202 - C637 * C474 - C633 * C731 +
                          C557 * C2056 - C623 * C946 + C558 * C3109) *
                             C1395) *
         C1286) /
        C82;
    const double d2nezy010110 =
        (2 * Pi *
         ((C2568 * C1416 + C2588 * C1417 + C2589 * C818) * C1387 +
          (C2352 * C1416 + C2590 * C1417 + C3134 * C818) * C1407)) /
        C82;
    const double d2nezy010101 =
        (2 * Pi *
         ((C2907 * C764 + C3017) * C1387 + (C2778 * C764 + C3200) * C1407)) /
        C82;
    const double d2nezy010011 =
        (2 * Pi *
         (C2907 * C1416 + C2918 * C1417 +
          (C704 * C513 + C562 * C2203 + C705 * C1025 + C3182) * C818) *
         C1286) /
        C82;
    const double d2nezy001200 =
        (2 * Pi *
         (C2960 * C79 * C761 + C2847 * C79 * C762 +
          (C1068 * C329 + C1056 * C2353 + C1069 * C702 + C3089) * C79 * C763)) /
        C82;
    const double d2nezy001020 =
        (2 * Pi *
         (C2960 * C412 + C2962 * C413 +
          (C1068 * C513 + C1056 * C2203 + C1069 * C1025 + C3182) * C414) *
         C1286) /
        C82;
    const double d2nezy001002 =
        (2 * Pi *
         ((-C1111 * C1923) / C82 - C1209 * C435 - C1206 * C572 + C1112 * C2232 -
          C1204 * C606 + C1113 * C2233 - C1189 * C1182 +
          C1114 * (2 * C1168 + C2100 +
                   C142 * (C2320 - C1501 +
                           C142 * (C2133 - (C142 * C1928) / C82)))) *
         C79 * C1286) /
        C82;
    const double d2nezy001110 =
        (2 * Pi *
         ((C2960 * C418 + C2962 * C1395) * C1387 +
          (C2847 * C418 +
           (C1068 * C475 + C1056 * C2204 + C1069 * C732 + C3097) * C1395) *
              C1407)) /
        C82;
    const double d2nezy001101 =
        (2 * Pi *
         (C3185 * C79 * C1387 +
          ((-C1418 * C1496) / C82 - C1175 * C303 + C1251 * C573 +
           C1419 * C2234 + C1252 * C593 + C1120 * C2988) *
              C79 * C1407)) /
        C82;
    const double d2nezy001011 =
        (2 * Pi *
         (C3185 * C418 + (C1418 * C2202 - C1175 * C474 + C1251 * C731 +
                          C1419 * C2056 + C1252 * C946 + C1120 * C3109) *
                             C1395) *
         C1286) /
        C82;
    d2nezy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy100110;
    d2nezy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezy100011;
    d2nezy[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nezy100200 - 0.5 * d2nezy100020 + d2nezy100002;
    d2nezy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezy100101;
    d2nezy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezy100200 - std::sqrt(0.75) * d2nezy100020;
    d2nezy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy010110;
    d2nezy[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezy010011;
    d2nezy[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * d2nezy010200 - 0.5 * d2nezy010020 + d2nezy010002;
    d2nezy[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezy010101;
    d2nezy[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezy010200 - std::sqrt(0.75) * d2nezy010020;
    d2nezy[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezy001110;
    d2nezy[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezy001011;
    d2nezy[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nezy001200 - 0.5 * d2nezy001020 + d2nezy001002;
    d2nezy[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezy001101;
    d2nezy[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezy001200 - std::sqrt(0.75) * d2nezy001020;
    const double d2nezz100200 =
        (2 * Pi *
         (C2862 * C79 * C59 + C2356 * C79 * C73 + C2723 * C79 * C75 +
          ((C363 * C144) / C82 + C78 * ((-2 * C463) / C82 + C129 * C2967)) *
              C79 * C77)) /
        C82;
    const double d2nezz100020 =
        (2 * Pi *
         ((C2862 * C412 + C2387 * C413 + C2743 * C414) * C410 +
          (C2356 * C412 + C2389 * C413 + C3188 * C414) * C1304)) /
        C82;
    const double d2nezz100002 =
        (2 * Pi *
         (C3215 * C79 * C410 +
          ((-C556 * C1505) / C82 - C637 * C309 - C633 * C595 + C557 * C2238 -
           C623 * C619 + C558 * C3142) *
              C79 * C1304)) /
        C82;
    const double d2nezz100110 =
        (2 * Pi *
         ((C2862 * C418 + C2621) * C1415 + (C2356 * C418 + C2622) * C71 +
          (C2723 * C418 + C3217) * C74)) /
        C82;
    const double d2nezz100101 =
        (2 * Pi *
         (C3090 * C79 * C1415 + C2780 * C79 * C71 +
          (C704 * C334 + C562 * C2357 + C705 * C706 + C3197) * C79 * C74)) /
        C82;
    const double d2nezz100011 =
        (2 * Pi *
         ((C3090 * C418 + C2920) * C410 + (C2780 * C418 + C3218) * C1304)) /
        C82;
    const double d2nezz010200 =
        (2 * Pi *
         ((C2862 * C764 + C2621) * C761 + (C2356 * C764 + C2622) * C762 +
          (C2723 * C764 + C3217) * C763)) /
        C82;
    const double d2nezz010020 =
        (2 * Pi *
         (C2862 * C809 + C2387 * C810 + C2743 * C811 +
          ((C884 * C144) / C82 + C78 * ((-2 * C943) / C82 + C141 * C3024)) *
              C812) *
         C1286) /
        C82;
    const double d2nezz010002 =
        (2 * Pi *
         (C3215 * C764 + ((-C556 * C1580) / C82 - C637 * C446 - C633 * C738 +
                          C557 * C2271 - C623 * C957 + C558 * C3171) *
                             C1395) *
         C1286) /
        C82;
    const double d2nezz010110 =
        (2 * Pi *
         ((C2862 * C1416 + C2387 * C1417 + C2743 * C818) * C1387 +
          (C2356 * C1416 + C2389 * C1417 + C3188 * C818) * C1407)) /
        C82;
    const double d2nezz010101 =
        (2 * Pi *
         ((C3090 * C764 + C2920) * C1387 + (C2780 * C764 + C3218) * C1407)) /
        C82;
    const double d2nezz010011 =
        (2 * Pi *
         (C3090 * C1416 + C2793 * C1417 +
          (C704 * C499 + C562 * C2388 + C705 * C1032 + C3212) * C818) *
         C1286) /
        C82;
    const double d2nezz001200 =
        (2 * Pi *
         (C3125 * C79 * C761 + C2849 * C79 * C762 +
          (C1068 * C334 + C1056 * C2357 + C1069 * C706 + C3197) * C79 * C763)) /
        C82;
    const double d2nezz001020 =
        (2 * Pi *
         (C3125 * C412 + C2852 * C413 +
          (C1068 * C499 + C1056 * C2388 + C1069 * C1032 + C3212) * C414) *
         C1286) /
        C82;
    const double d2nezz001002 =
        (2 * Pi *
         ((-C1111 * C2355) / C82 - C1209 * C444 - C1206 * C594 + C1112 * C2236 -
          C1204 * C618 + C1113 * C2416 - C1189 * C1200 +
          C1114 * (2 * C1169 + C2102 -
                   (C142 * (C216 - C1142) - C283 + (C1129 * be) / C82) +
                   C142 * (C2119 - C1510 + C1142 - C216 +
                           C142 * (C2138 + C285 - (C142 * C2358) / C82)))) *
         C79 * C1286) /
        C82;
    const double d2nezz001110 =
        (2 * Pi *
         ((C3125 * C418 + C2852 * C1395) * C1387 +
          (C2849 * C418 +
           (C1068 * C447 - (C1056 * C1584) / C82 + C1069 * C739 + C3163) *
               C1395) *
              C1407)) /
        C82;
    const double d2nezz001101 =
        (2 * Pi *
         (C3223 * C79 * C1387 +
          ((-C1418 * C1505) / C82 - C1175 * C309 + C1251 * C595 +
           C1419 * C2238 + C1252 * C619 + C1120 * C3142) *
              C79 * C1407)) /
        C82;
    const double d2nezz001011 =
        (2 * Pi *
         (C3223 * C418 + ((-C1418 * C1580) / C82 - C1175 * C446 + C1251 * C738 +
                          C1419 * C2271 + C1252 * C957 + C1120 * C3171) *
                             C1395) *
         C1286) /
        C82;
    d2nezz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz100110;
    d2nezz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezz100011;
    d2nezz[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * d2nezz100200 - 0.5 * d2nezz100020 + d2nezz100002;
    d2nezz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezz100101;
    d2nezz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezz100200 - std::sqrt(0.75) * d2nezz100020;
    d2nezz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz010110;
    d2nezz[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezz010011;
    d2nezz[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * d2nezz010200 - 0.5 * d2nezz010020 + d2nezz010002;
    d2nezz[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezz010101;
    d2nezz[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezz010200 - std::sqrt(0.75) * d2nezz010020;
    d2nezz[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * d2nezz001110;
    d2nezz[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * d2nezz001011;
    d2nezz[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * d2nezz001200 - 0.5 * d2nezz001020 + d2nezz001002;
    d2nezz[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * d2nezz001101;
    d2nezz[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * d2nezz001200 - std::sqrt(0.75) * d2nezz001020;
}
