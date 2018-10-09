/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2020_1_et(const double ae,
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
                            const double* const g,
                            const double* const vrx,
                            const double* const vry,
                            const double* const vrz,
                            double* const etx,
                            double* const ety,
                            double* const etz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double C19126 = g[0];
    const double C19177 = g[1];
    const double C19194 = g[2];
    const double C19226 = g[3];
    const double C19277 = g[4];
    const double C19293 = g[5];
    const double C19325 = g[6];
    const double C19376 = g[7];
    const double C19392 = g[8];
    const double C19423 = g[9];
    const double C19474 = g[10];
    const double C19489 = g[11];
    const double C19518 = g[12];
    const double C19568 = g[13];
    const double C19585 = g[14];
    const double C19614 = g[15];
    const double C19663 = g[16];
    const double C19678 = g[17];
    const double C19706 = g[18];
    const double C19723 = g[19];
    const double C19739 = g[20];
    const double C19888 = g[21];
    const double C19904 = g[22];
    const double C20052 = g[23];
    const double C20068 = g[24];
    const double C20201 = g[25];
    const double C20216 = g[26];
    const double C20231 = g[27];
    const double C20289 = g[28];
    const double C20304 = g[29];
    const double C20319 = g[30];
    const double C20404 = g[31];
    const double C20419 = g[32];
    const double C21274 = g[33];
    const double C21423 = g[34];
    const double C21766 = g[35];
    const double C22784 = g[36];
    const double C19132 = vrx[0];
    const double C19230 = vrx[1];
    const double C19329 = vrx[2];
    const double C19430 = vrx[3];
    const double C19524 = vrx[4];
    const double C19618 = vrx[5];
    const double C19710 = vrx[6];
    const double C19711 = vrx[7];
    const double C19727 = vrx[8];
    const double C19743 = vrx[9];
    const double C19758 = vrx[10];
    const double C19773 = vrx[11];
    const double C19788 = vrx[12];
    const double C19803 = vrx[13];
    const double C19832 = vrx[14];
    const double C19861 = vrx[15];
    const double C19876 = vrx[16];
    const double C19892 = vrx[17];
    const double C19921 = vrx[18];
    const double C19936 = vrx[19];
    const double C19951 = vrx[20];
    const double C19966 = vrx[21];
    const double C19981 = vrx[22];
    const double C19996 = vrx[23];
    const double C20011 = vrx[24];
    const double C20040 = vrx[25];
    const double C20056 = vrx[26];
    const double C20086 = vrx[27];
    const double C20114 = vrx[28];
    const double C20129 = vrx[29];
    const double C20144 = vrx[30];
    const double C20159 = vrx[31];
    const double C20174 = vrx[32];
    const double C20189 = vrx[33];
    const double C20263 = vrx[34];
    const double C20482 = vry[0];
    const double C20577 = vry[1];
    const double C20673 = vry[2];
    const double C20770 = vry[3];
    const double C20861 = vry[4];
    const double C20952 = vry[5];
    const double C21041 = vry[6];
    const double C21042 = vry[7];
    const double C21057 = vry[8];
    const double C21072 = vry[9];
    const double C21087 = vry[10];
    const double C21102 = vry[11];
    const double C21117 = vry[12];
    const double C21132 = vry[13];
    const double C21161 = vry[14];
    const double C21190 = vry[15];
    const double C21205 = vry[16];
    const double C21220 = vry[17];
    const double C21248 = vry[18];
    const double C21263 = vry[19];
    const double C21279 = vry[20];
    const double C21294 = vry[21];
    const double C21309 = vry[22];
    const double C21324 = vry[23];
    const double C21339 = vry[24];
    const double C21368 = vry[25];
    const double C21383 = vry[26];
    const double C21412 = vry[27];
    const double C21441 = vry[28];
    const double C21456 = vry[29];
    const double C21471 = vry[30];
    const double C21486 = vry[31];
    const double C21501 = vry[32];
    const double C21516 = vry[33];
    const double C21587 = vry[34];
    const double C21802 = vrz[0];
    const double C21897 = vrz[1];
    const double C21993 = vrz[2];
    const double C22090 = vrz[3];
    const double C22181 = vrz[4];
    const double C22272 = vrz[5];
    const double C22361 = vrz[6];
    const double C22362 = vrz[7];
    const double C22377 = vrz[8];
    const double C22392 = vrz[9];
    const double C22407 = vrz[10];
    const double C22422 = vrz[11];
    const double C22437 = vrz[12];
    const double C22452 = vrz[13];
    const double C22481 = vrz[14];
    const double C22510 = vrz[15];
    const double C22525 = vrz[16];
    const double C22540 = vrz[17];
    const double C22568 = vrz[18];
    const double C22583 = vrz[19];
    const double C22598 = vrz[20];
    const double C22613 = vrz[21];
    const double C22628 = vrz[22];
    const double C22643 = vrz[23];
    const double C22658 = vrz[24];
    const double C22687 = vrz[25];
    const double C22702 = vrz[26];
    const double C22731 = vrz[27];
    const double C22759 = vrz[28];
    const double C22774 = vrz[29];
    const double C22790 = vrz[30];
    const double C22805 = vrz[31];
    const double C22820 = vrz[32];
    const double C22835 = vrz[33];
    const double C22906 = vrz[34];
    const double C19425 = 2 * q;
    const double C23155 = C20263 * p;
    const double C23152 = C19618 / q;
    const double C23151 = C19524 / q;
    const double C23150 = C20159 * p;
    const double C23149 = C20086 * p;
    const double C23148 = C20056 * p;
    const double C23147 = C20040 * p;
    const double C23146 = C19618 * p;
    const double C23145 = C20011 * p;
    const double C23144 = C19430 / q;
    const double C23143 = C19981 * p;
    const double C23142 = C19966 * p;
    const double C23141 = C19892 * p;
    const double C23140 = C19876 * p;
    const double C23139 = C19861 * p;
    const double C23138 = C19524 * p;
    const double C23137 = C19832 * p;
    const double C23136 = C19430 * p;
    const double C23135 = C19803 * p;
    const double C23134 = C19788 * p;
    const double C23133 = C19773 * p;
    const double C23132 = C19758 * p;
    const double C23112 = de * zCD;
    const double C23111 = be * zAB;
    const double C23109 = de * yCD;
    const double C23108 = be * yAB;
    const double C23106 = de * xCD;
    const double C23105 = be * xAB;
    const double C23214 = C21587 * p;
    const double C23211 = C20952 / q;
    const double C23210 = C20861 / q;
    const double C23209 = C21486 * p;
    const double C23208 = C21412 * p;
    const double C23207 = C21383 * p;
    const double C23206 = C21368 * p;
    const double C23205 = C20952 * p;
    const double C23204 = C21339 * p;
    const double C23203 = C20770 / q;
    const double C23202 = C21309 * p;
    const double C23201 = C21294 * p;
    const double C23200 = C21220 * p;
    const double C23199 = C21205 * p;
    const double C23198 = C21190 * p;
    const double C23197 = C20861 * p;
    const double C23196 = C21161 * p;
    const double C23195 = C20770 * p;
    const double C23194 = C21132 * p;
    const double C23193 = C21117 * p;
    const double C23192 = C21102 * p;
    const double C23191 = C21087 * p;
    const double C23270 = C22906 * p;
    const double C23267 = C22272 / q;
    const double C23266 = C22181 / q;
    const double C23265 = C22805 * p;
    const double C23264 = C22731 * p;
    const double C23263 = C22702 * p;
    const double C23262 = C22687 * p;
    const double C23261 = C22272 * p;
    const double C23260 = C22658 * p;
    const double C23259 = C22090 / q;
    const double C23258 = C22628 * p;
    const double C23257 = C22613 * p;
    const double C23256 = C22540 * p;
    const double C23255 = C22525 * p;
    const double C23254 = C22510 * p;
    const double C23253 = C22181 * p;
    const double C23252 = C22481 * p;
    const double C23251 = C22090 * p;
    const double C23250 = C22452 * p;
    const double C23249 = C22437 * p;
    const double C23248 = C22422 * p;
    const double C23247 = C22407 * p;
    const double C23156 = C20114 / C19425;
    const double C23154 = C19711 / C19425;
    const double C23153 = C19921 / C19425;
    const double C23131 = C19710 / C19425;
    const double C23130 = C19618 / C19425;
    const double C23126 = C19524 / C19425;
    const double C23122 = C19430 / C19425;
    const double C23119 = C19329 / C19425;
    const double C23115 = C19230 / C19425;
    const double C23107 = C19132 / C19425;
    const double C23215 = C21441 / C19425;
    const double C23213 = C21042 / C19425;
    const double C23212 = C21248 / C19425;
    const double C23190 = C21041 / C19425;
    const double C23189 = C20952 / C19425;
    const double C23185 = C20861 / C19425;
    const double C23181 = C20770 / C19425;
    const double C23178 = C20673 / C19425;
    const double C23174 = C20577 / C19425;
    const double C23170 = C20482 / C19425;
    const double C23271 = C22759 / C19425;
    const double C23269 = C22362 / C19425;
    const double C23268 = C22568 / C19425;
    const double C23246 = C22361 / C19425;
    const double C23245 = C22272 / C19425;
    const double C23241 = C22181 / C19425;
    const double C23237 = C22090 / C19425;
    const double C23234 = C21993 / C19425;
    const double C23230 = C21897 / C19425;
    const double C23226 = C21802 / C19425;
    const double C23165 = C23143 / q;
    const double C23164 = C23135 / q;
    const double C23163 = C23133 / q;
    const double C23160 = C23111 + C23112;
    const double C23158 = C23108 + C23109;
    const double C23157 = C23105 + C23106;
    const double C23221 = C23202 / q;
    const double C23220 = C23194 / q;
    const double C23219 = C23192 / q;
    const double C23277 = C23258 / q;
    const double C23276 = C23250 / q;
    const double C23275 = C23248 / q;
    const double C19164 = -(C19132 * C23160 + C23134) / q;
    const double C19165 = C23107 - (C19788 * C23160) / q - C23164;
    const double C19198 = -(C19711 * C23160 + C23138) / q;
    const double C19199 = -(C19727 * C23160 + C23139) / q;
    const double C19214 = -(C19758 * C23160 + C23140) / q;
    const double C19264 = -(C19230 * C23160 + C23142) / q;
    const double C19265 = C23115 - (C19966 * C23160) / q - C23165;
    const double C19297 = -(C19892 * C23160 + C23145) / q;
    const double C19312 = -(C19921 * C23160 + C23146) / q;
    const double C19313 = -(C19936 * C23160 + C23147) / q;
    const double C19362 = C23131 - (C20114 * C23160) / q - (C19329 * p) / q;
    const double C19363 = C20114 / q - (C19329 * C23160) / q - (C20129 * p) / q;
    const double C19364 =
        (3 * C19329) / C19425 - (C20129 * C23160) / q - (C20144 * p) / q;
    const double C19396 = C23151 - (C20056 * C23160) / q - (C20174 * p) / q;
    const double C19411 = C23152 - (C20086 * C23160) / q - (C20189 * p) / q;
    const double C19461 = -(C19430 * C23160 + C23155) / q;
    const double C19462 = C23122 - (C20263 * C23160) / q - C23150 / q;
    const double C19556 = C23154 - (C19524 * C23160) / q - C23148 / q;
    const double C19651 = C23153 - (C19618 * C23160) / q - C23149 / q;
    const double C20514 = -(C20482 * C23160 + C23193) / q;
    const double C20546 = -(C21042 * C23160 + C23197) / q;
    const double C20547 = -(C21057 * C23160 + C23198) / q;
    const double C20562 = -(C21087 * C23160 + C23199) / q;
    const double C20611 = -(C20577 * C23160 + C23201) / q;
    const double C20642 = -(C21220 * C23160 + C23204) / q;
    const double C20657 = -(C21248 * C23160 + C23205) / q;
    const double C20658 = -(C21263 * C23160 + C23206) / q;
    const double C20706 = C23190 - (C21441 * C23160) / q - (C20673 * p) / q;
    const double C20707 = C21441 / q - (C20673 * C23160) / q - (C21456 * p) / q;
    const double C20708 =
        (3 * C20673) / C19425 - (C21456 * C23160) / q - (C21471 * p) / q;
    const double C20738 = C23210 - (C21383 * C23160) / q - (C21501 * p) / q;
    const double C20753 = C23211 - (C21412 * C23160) / q - (C21516 * p) / q;
    const double C20801 = -(C20770 * C23160 + C23214) / q;
    const double C20802 = C23181 - (C21587 * C23160) / q - C23209 / q;
    const double C20893 = C23213 - (C20861 * C23160) / q - C23207 / q;
    const double C20985 = C23212 - (C20952 * C23160) / q - C23208 / q;
    const double C21834 = -(C19723 * be + C21802 * C23160 + C23249) / q;
    const double C21866 = -(C19706 * be + C22362 * C23160 + C23253) / q;
    const double C21867 = -(C19739 * be + C22377 * C23160 + C23254) / q;
    const double C21882 = -(C20231 * be + C22407 * C23160 + C23255) / q;
    const double C21931 = -(C19888 * be + C21897 * C23160 + C23257) / q;
    const double C21962 = -(C19904 * be + C22540 * C23160 + C23260) / q;
    const double C21977 = -(C20201 * be + C22568 * C23160 + C23261) / q;
    const double C21978 = -(C21274 * be + C22583 * C23160 + C23262) / q;
    const double C22026 =
        C23246 - (C20289 * be + C22759 * C23160) / q - (C21993 * p) / q;
    const double C22027 =
        C22759 / q - (C20052 * be + C21993 * C23160) / q - (C22774 * p) / q;
    const double C22028 = (3 * C21993) / C19425 -
                          (C22784 * be + C22774 * C23160) / q -
                          (C22790 * p) / q;
    const double C22058 =
        C23266 - (C20068 * be + C22702 * C23160) / q - (C22820 * p) / q;
    const double C22073 =
        C23267 - (C21423 * be + C22731 * C23160) / q - (C22835 * p) / q;
    const double C22121 = -(C20216 * be + C22090 * C23160 + C23270) / q;
    const double C22122 =
        C23237 - (C20419 * be + C22906 * C23160) / q - C23265 / q;
    const double C22213 =
        C23269 - (C20304 * be + C22181 * C23160) / q - C23263 / q;
    const double C22305 =
        C23268 - (C20404 * be + C22272 * C23160) / q - C23264 / q;
    const double C19148 = -(C19132 * C23158 + C23132) / q;
    const double C19149 = C23107 - (C19758 * C23158) / q - C23163;
    const double C19181 = -(C19711 * C23158 + C23136) / q;
    const double C19182 = -(C19727 * C23158 + C23137) / q;
    const double C19247 = C23131 - (C19921 * C23158) / q - (C19230 * p) / q;
    const double C19248 = C19921 / q - (C19230 * C23158) / q - (C19936 * p) / q;
    const double C19249 =
        (3 * C19230) / C19425 - (C19936 * C23158) / q - (C19951 * p) / q;
    const double C19281 = C23144 - (C19892 * C23158) / q - (C19996 * p) / q;
    const double C19346 = -(C19329 * C23158 + C23149) / q;
    const double C19347 = C23119 - (C20086 * C23158) / q - C23165;
    const double C19380 = -(C20056 * C23158 + C23150) / q;
    const double C19446 = C23154 - (C19430 * C23158) / q - C23141 / q;
    const double C19540 = -(C19524 * C23158 + C23155) / q;
    const double C19541 = C23126 - (C20263 * C23158) / q - C23145 / q;
    const double C19572 = -(C20114 * C23158 + C23146) / q;
    const double C19573 = -(C19788 * C23158 + C23140) / q;
    const double C19635 = C23156 - (C19618 * C23158) / q - C23142 / q;
    const double C19636 = C23152 - (C19966 * C23158) / q - C23147 / q;
    const double C20498 = -(C19723 * be + C20482 * C23158 + C23191) / q;
    const double C20530 = -(C19706 * be + C21042 * C23158 + C23195) / q;
    const double C20531 = -(C19739 * be + C21057 * C23158 + C23196) / q;
    const double C20594 =
        C23190 - (C20201 * be + C21248 * C23158) / q - (C20577 * p) / q;
    const double C20595 =
        C21248 / q - (C19888 * be + C20577 * C23158) / q - (C21263 * p) / q;
    const double C20596 = (3 * C20577) / C19425 -
                          (C21274 * be + C21263 * C23158) / q -
                          (C21279 * p) / q;
    const double C20627 =
        C23203 - (C19904 * be + C21220 * C23158) / q - (C21324 * p) / q;
    const double C20690 = -(C20052 * be + C20673 * C23158 + C23208) / q;
    const double C20723 = -(C20068 * be + C21383 * C23158 + C23209) / q;
    const double C20786 =
        C23213 - (C20216 * be + C20770 * C23158) / q - C23200 / q;
    const double C20877 = -(C20304 * be + C20861 * C23158 + C23214) / q;
    const double C20878 =
        C23185 - (C20419 * be + C21587 * C23158) / q - C23204 / q;
    const double C20908 = -(C20289 * be + C21441 * C23158 + C23205) / q;
    const double C20909 = -(C20319 * be + C21117 * C23158 + C23199) / q;
    const double C20969 =
        C23215 - (C20404 * be + C20952 * C23158) / q - C23201 / q;
    const double C20970 =
        C23211 - (C21766 * be + C21294 * C23158) / q - C23206 / q;
    const double C21818 = -(C21802 * C23158 + C23247) / q;
    const double C21850 = -(C22362 * C23158 + C23251) / q;
    const double C21851 = -(C22377 * C23158 + C23252) / q;
    const double C21914 = C23246 - (C22568 * C23158) / q - (C21897 * p) / q;
    const double C21915 = C22568 / q - (C21897 * C23158) / q - (C22583 * p) / q;
    const double C21916 =
        (3 * C21897) / C19425 - (C22583 * C23158) / q - (C22598 * p) / q;
    const double C21947 = C23259 - (C22540 * C23158) / q - (C22643 * p) / q;
    const double C22010 = -(C21993 * C23158 + C23264) / q;
    const double C22043 = -(C22702 * C23158 + C23265) / q;
    const double C22106 = C23269 - (C22090 * C23158) / q - C23256 / q;
    const double C22197 = -(C22181 * C23158 + C23270) / q;
    const double C22198 = C23241 - (C22906 * C23158) / q - C23260 / q;
    const double C22228 = -(C22759 * C23158 + C23261) / q;
    const double C22229 = -(C22437 * C23158 + C23255) / q;
    const double C22289 = C23271 - (C22272 * C23158) / q - C23257 / q;
    const double C22290 = C23267 - (C22613 * C23158) / q - C23262 / q;
    const double C19130 =
        C23131 - (C19706 * be + C19711 * C23157) / q - (C19132 * p) / q;
    const double C19131 =
        C19711 / q - (C19723 * be + C19132 * C23157) / q - (C19727 * p) / q;
    const double C19133 = (3 * C19132) / C19425 -
                          (C19739 * be + C19727 * C23157) / q -
                          (C19743 * p) / q;
    const double C19231 = -(C19888 * be + C19230 * C23157 + C23141) / q;
    const double C19232 = C23115 - (C19904 * be + C19892 * C23157) / q - C23163;
    const double C19330 = -(C20052 * be + C19329 * C23157 + C23148) / q;
    const double C19331 = C23119 - (C20068 * be + C20056 * C23157) / q - C23164;
    const double C19428 = -(C20201 * be + C19921 * C23157 + C23136) / q;
    const double C19429 =
        C23153 - (C20216 * be + C19430 * C23157) / q - C23132 / q;
    const double C19431 =
        C23144 - (C20231 * be + C19758 * C23157) / q - C23137 / q;
    const double C19522 = -(C20289 * be + C20114 * C23157 + C23138) / q;
    const double C19523 =
        C23156 - (C20304 * be + C19524 * C23157) / q - C23134 / q;
    const double C19525 =
        C23151 - (C20319 * be + C19788 * C23157) / q - C23139 / q;
    const double C19619 = -(C20404 * be + C19618 * C23157 + C23155) / q;
    const double C19620 =
        C23130 - (C20419 * be + C20263 * C23157) / q - C23140 / q;
    const double C20480 = C23190 - (C21042 * C23157) / q - (C20482 * p) / q;
    const double C20481 = C21042 / q - (C20482 * C23157) / q - (C21057 * p) / q;
    const double C20483 =
        (3 * C20482) / C19425 - (C21057 * C23157) / q - (C21072 * p) / q;
    const double C20578 = -(C20577 * C23157 + C23200) / q;
    const double C20674 = -(C20673 * C23157 + C23207) / q;
    const double C20768 = -(C21248 * C23157 + C23195) / q;
    const double C20769 = C23212 - (C20770 * C23157) / q - C23191 / q;
    const double C20771 = C23203 - (C21087 * C23157) / q - C23196 / q;
    const double C20859 = -(C21441 * C23157 + C23197) / q;
    const double C20860 = C23215 - (C20861 * C23157) / q - C23193 / q;
    const double C20862 = C23210 - (C21117 * C23157) / q - C23198 / q;
    const double C20953 = -(C20952 * C23157 + C23214) / q;
    const double C20954 = C23189 - (C21587 * C23157) / q - C23199 / q;
    const double C21800 = C23246 - (C22362 * C23157) / q - (C21802 * p) / q;
    const double C21801 = C22362 / q - (C21802 * C23157) / q - (C22377 * p) / q;
    const double C21803 =
        (3 * C21802) / C19425 - (C22377 * C23157) / q - (C22392 * p) / q;
    const double C21898 = -(C21897 * C23157 + C23256) / q;
    const double C21994 = -(C21993 * C23157 + C23263) / q;
    const double C22088 = -(C22568 * C23157 + C23251) / q;
    const double C22089 = C23268 - (C22090 * C23157) / q - C23247 / q;
    const double C22091 = C23259 - (C22407 * C23157) / q - C23252 / q;
    const double C22179 = -(C22759 * C23157 + C23253) / q;
    const double C22180 = C23271 - (C22181 * C23157) / q - C23249 / q;
    const double C22182 = C23266 - (C22437 * C23157) / q - C23254 / q;
    const double C22273 = -(C22272 * C23157 + C23270) / q;
    const double C22274 = C23245 - (C22906 * C23157) / q - C23255 / q;
    const double C20612 = C23174 - (C21294 * C23160) / q - C23221;
    const double C20691 = C23178 - (C21423 * be + C21412 * C23158) / q - C23221;
    const double C20515 = C23170 - (C21117 * C23160) / q - C23220;
    const double C20675 = C23178 - (C21383 * C23157) / q - C23220;
    const double C20499 = C23170 - (C20231 * be + C21087 * C23158) / q - C23219;
    const double C20579 = C23174 - (C21220 * C23157) / q - C23219;
    const double C21932 = C23230 - (C21766 * be + C22613 * C23160) / q - C23277;
    const double C22011 = C23234 - (C22731 * C23158) / q - C23277;
    const double C21835 = C23226 - (C20319 * be + C22437 * C23160) / q - C23276;
    const double C21995 = C23234 - (C22702 * C23157) / q - C23276;
    const double C21819 = C23226 - (C22407 * C23158) / q - C23275;
    const double C21899 = C23230 - (C22540 * C23157) / q - C23275;
    const double C23113 = C19165 * p;
    const double C23125 = C19198 / C19425;
    const double C7270 =
        C19198 / q - (C19194 * be + C19164 * C23157) / q - (C19199 * p) / q;
    const double C23114 = C19214 * p;
    const double C23116 = C19265 * p;
    const double C23118 = C19297 * p;
    const double C23124 = C19312 / C19425;
    const double C9860 = C19312 / q - (C19264 * C23158) / q - (C19313 * p) / q;
    const double C23129 = C19362 / C19425;
    const double C10970 =
        C19362 / q - (C19363 * C23160) / q + C23119 - (C19364 * p) / q;
    const double C23120 = C19396 * p;
    const double C23121 = C19411 * p;
    const double C23123 = C19462 * p;
    const double C23184 = C20546 / C19425;
    const double C7393 = C20546 / q - (C20514 * C23157) / q - (C20547 * p) / q;
    const double C23173 = C20562 * p;
    const double C23177 = C20642 * p;
    const double C23183 = C20657 / C19425;
    const double C9983 =
        C20657 / q - (C19293 * be + C20611 * C23158) / q - (C20658 * p) / q;
    const double C23188 = C20706 / C19425;
    const double C11093 =
        C20706 / q - (C20707 * C23160) / q + C23178 - (C20708 * p) / q;
    const double C23179 = C20738 * p;
    const double C23180 = C20753 * p;
    const double C23182 = C20802 * p;
    const double C23240 = C21866 / C19425;
    const double C7516 = C21866 / q - (C21834 * C23157) / q - (C21867 * p) / q;
    const double C23229 = C21882 * p;
    const double C23233 = C21962 * p;
    const double C23239 = C21977 / C19425;
    const double C10106 = C21977 / q - (C21931 * C23158) / q - (C21978 * p) / q;
    const double C23244 = C22026 / C19425;
    const double C11216 = C22026 / q - (C19392 * be + C22027 * C23160) / q +
                          C23234 - (C22028 * p) / q;
    const double C23235 = C22058 * p;
    const double C23236 = C22073 * p;
    const double C23238 = C22122 * p;
    const double C23110 = C19149 * p;
    const double C6900 =
        C19181 / q - (C19177 * be + C19148 * C23157) / q - (C19182 * p) / q;
    const double C8380 =
        C19247 / q - (C19248 * C23158) / q + C23115 - (C19249 * p) / q;
    const double C23117 = C19281 * p;
    const double C10600 = C23119 - (C19346 * C23158) / q - (C19347 * p) / q;
    const double C11340 = -(C19376 * be + C19346 * C23157 + C19380 * p) / q;
    const double C23127 = C19541 * p;
    const double C23128 = C19572 / C19425;
    const double C7023 = C20530 / q - (C20498 * C23157) / q - (C20531 * p) / q;
    const double C8503 = C20594 / q - (C19277 * be + C20595 * C23158) / q +
                         C23174 - (C20596 * p) / q;
    const double C23176 = C20627 * p;
    const double C11463 = -(C20690 * C23157 + C20723 * p) / q;
    const double C23186 = C20878 * p;
    const double C23187 = C20908 / C19425;
    const double C7146 = C21850 / q - (C21818 * C23157) / q - (C21851 * p) / q;
    const double C8626 =
        C21914 / q - (C21915 * C23158) / q + C23230 - (C21916 * p) / q;
    const double C23232 = C21947 * p;
    const double C11586 = -(C22010 * C23157 + C22043 * p) / q;
    const double C23242 = C22198 * p;
    const double C23243 = C22228 / C19425;
    const double C5791 = C19130 / q - (C19126 * be + C19131 * C23157) / q +
                         C23107 - (C19133 * p) / q;
    const double C8010 =
        C23115 - (C19226 * be + C19231 * C23157) / q - (C19232 * p) / q;
    const double C10230 =
        C23119 - (C19325 * be + C19330 * C23157) / q - (C19331 * p) / q;
    const double C12450 = C19428 / C19425 -
                          (C19423 * be + C19429 * C23157) / q + C23122 -
                          (C19431 * p) / q;
    const double C14670 = C19522 / C19425 -
                          (C19518 * be + C19523 * C23157) / q + C23126 -
                          (C19525 * p) / q;
    const double C16890 =
        C23130 - (C19614 * be + C19619 * C23157) / q - (C19620 * p) / q;
    const double C5913 =
        C20480 / q - (C20481 * C23157) / q + C23170 - (C20483 * p) / q;
    const double C12573 =
        C20768 / C19425 - (C20769 * C23157) / q + C23181 - (C20771 * p) / q;
    const double C14793 =
        C20859 / C19425 - (C20860 * C23157) / q + C23185 - (C20862 * p) / q;
    const double C17013 = C23189 - (C20953 * C23157) / q - (C20954 * p) / q;
    const double C6036 =
        C21800 / q - (C21801 * C23157) / q + C23226 - (C21803 * p) / q;
    const double C12696 =
        C22088 / C19425 - (C22089 * C23157) / q + C23237 - (C22091 * p) / q;
    const double C14916 =
        C22179 / C19425 - (C22180 * C23157) / q + C23241 - (C22182 * p) / q;
    const double C17136 = C23245 - (C22273 * C23157) / q - (C22274 * p) / q;
    const double C23175 = C20612 * p;
    const double C10723 =
        C23178 - (C19376 * be + C20690 * C23158) / q - (C20691 * p) / q;
    const double C23172 = C20515 * p;
    const double C10353 = C23178 - (C20674 * C23157) / q - (C20675 * p) / q;
    const double C23171 = C20499 * p;
    const double C8133 = C23174 - (C20578 * C23157) / q - (C20579 * p) / q;
    const double C23231 = C21932 * p;
    const double C10846 = C23234 - (C22010 * C23158) / q - (C22011 * p) / q;
    const double C23228 = C21835 * p;
    const double C10476 = C23234 - (C21994 * C23157) / q - (C21995 * p) / q;
    const double C23227 = C21819 * p;
    const double C8256 = C23230 - (C21898 * C23157) / q - (C21899 * p) / q;
    const double C23161 = C23113 / q;
    const double C7640 = -(C19164 * C23158 + C23114) / q;
    const double C23162 = C23116 / q;
    const double C9490 = -(C19293 * be + C19264 * C23157 + C23118) / q;
    const double C14300 = C23125 - (C19461 * C23158) / q - C23118 / q;
    const double C13930 =
        C23124 - (C19489 * be + C19461 * C23157) / q - C23114 / q;
    const double C11710 = -(C19392 * be + C19363 * C23157 + C23120) / q;
    const double C15410 = C23125 - (C19556 * C23160) / q + C23126 - C23120 / q;
    const double C12080 = -(C19363 * C23158 + C23121) / q;
    const double C17630 = C23124 - (C19651 * C23160) / q + C23130 - C23121 / q;
    const double C13190 = C23122 - (C19461 * C23160) / q - C23123 / q;
    const double C16520 = -(C19556 * C23158 + C23123) / q;
    const double C18370 = -(C19678 * be + C19651 * C23157 + C23123) / q;
    const double C7763 = -(C19194 * be + C20514 * C23158 + C23173) / q;
    const double C9613 = -(C20611 * C23157 + C23177) / q;
    const double C14423 =
        C23184 - (C19489 * be + C20801 * C23158) / q - C23177 / q;
    const double C14053 = C23183 - (C20801 * C23157) / q - C23173 / q;
    const double C11833 = -(C20707 * C23157 + C23179) / q;
    const double C15533 = C23184 - (C20893 * C23160) / q + C23185 - C23179 / q;
    const double C12203 = -(C19392 * be + C20707 * C23158 + C23180) / q;
    const double C17753 = C23183 - (C20985 * C23160) / q + C23189 - C23180 / q;
    const double C13313 = C23181 - (C20801 * C23160) / q - C23182 / q;
    const double C16643 = -(C19585 * be + C20893 * C23158 + C23182) / q;
    const double C18493 = -(C20985 * C23157 + C23182) / q;
    const double C7886 = -(C21834 * C23158 + C23229) / q;
    const double C9736 = -(C21931 * C23157 + C23233) / q;
    const double C14546 = C23240 - (C22121 * C23158) / q - C23233 / q;
    const double C14176 = C23239 - (C22121 * C23157) / q - C23229 / q;
    const double C11956 = -(C22027 * C23157 + C23235) / q;
    const double C15656 =
        C23240 - (C19585 * be + C22213 * C23160) / q + C23241 - C23235 / q;
    const double C12326 = -(C22027 * C23158 + C23236) / q;
    const double C17876 =
        C23239 - (C19678 * be + C22305 * C23160) / q + C23245 - C23236 / q;
    const double C13436 =
        C23237 - (C19489 * be + C22121 * C23160) / q - C23238 / q;
    const double C16766 = -(C22213 * C23158 + C23238) / q;
    const double C18616 = -(C22305 * C23157 + C23238) / q;
    const double C23159 = C23110 / q;
    const double C9120 = -(C19277 * be + C19248 * C23157 + C23117) / q;
    const double C12820 =
        C19181 / C19425 - (C19446 * C23158) / q + C23122 - C23117 / q;
    const double C15040 = C23126 - (C19540 * C23158) / q - C23127 / q;
    const double C18000 = -(C19663 * be + C19635 * C23157 + C23127) / q;
    const double C15780 =
        C23128 - (C19568 * be + C19540 * C23157) / q - (C19573 * p) / q;
    const double C17260 =
        C23128 - (C19635 * C23158) / q + C23130 - (C19636 * p) / q;
    const double C9243 = -(C20595 * C23157 + C23176) / q;
    const double C12943 = C20530 / C19425 -
                          (C19474 * be + C20786 * C23158) / q + C23181 -
                          C23176 / q;
    const double C15163 =
        C23185 - (C19568 * be + C20877 * C23158) / q - C23186 / q;
    const double C18123 = -(C20969 * C23157 + C23186) / q;
    const double C15903 = C23187 - (C20877 * C23157) / q - (C20909 * p) / q;
    const double C17383 = C23187 - (C19663 * be + C20969 * C23158) / q +
                          C23189 - (C20970 * p) / q;
    const double C9366 = -(C21915 * C23157 + C23232) / q;
    const double C13066 =
        C21850 / C19425 - (C22106 * C23158) / q + C23237 - C23232 / q;
    const double C15286 = C23241 - (C22197 * C23158) / q - C23242 / q;
    const double C18246 = -(C22289 * C23157 + C23242) / q;
    const double C16026 = C23243 - (C22197 * C23157) / q - (C22229 * p) / q;
    const double C17506 =
        C23243 - (C22289 * C23158) / q + C23245 - (C22290 * p) / q;
    const double C23218 = C23175 / q;
    const double C23217 = C23172 / q;
    const double C23216 = C23171 / q;
    const double C23274 = C23231 / q;
    const double C23273 = C23228 / q;
    const double C23272 = C23227 / q;
    const double C6530 = C23107 - (C19164 * C23160) / q - C23161;
    const double C16150 = C23129 - (C19585 * be + C19556 * C23157) / q - C23161;
    const double C8750 = C23115 - (C19264 * C23160) / q - C23162;
    const double C18740 = C23129 - (C19651 * C23158) / q - C23162;
    const double C6160 = C23107 - (C19148 * C23158) / q - C23159;
    const double C13560 =
        C19247 / C19425 - (C19474 * be + C19446 * C23157) / q - C23159;
    const double C8873 = C23174 - (C20611 * C23160) / q - C23218;
    const double C18863 = C23188 - (C19678 * be + C20985 * C23158) / q - C23218;
    const double C6653 = C23170 - (C20514 * C23160) / q - C23217;
    const double C16273 = C23188 - (C20893 * C23157) / q - C23217;
    const double C6283 = C23170 - (C19177 * be + C20498 * C23158) / q - C23216;
    const double C13683 = C20594 / C19425 - (C20786 * C23157) / q - C23216;
    const double C8996 = C23230 - (C19293 * be + C21931 * C23160) / q - C23274;
    const double C18986 = C23244 - (C22305 * C23158) / q - C23274;
    const double C6776 = C23226 - (C19194 * be + C21834 * C23160) / q - C23273;
    const double C16396 = C23244 - (C22213 * C23157) / q - C23273;
    const double C6406 = C23226 - (C21818 * C23158) / q - C23272;
    const double C13806 = C21914 / C19425 - (C22106 * C23157) / q - C23272;
    etx[0] = C5791;
    etx[1] = C6160;
    etx[2] = C6530;
    etx[3] = C6900;
    etx[4] = C7270;
    etx[5] = C7640;
    etx[6] = C8010;
    etx[7] = C8380;
    etx[8] = C8750;
    etx[9] = C9120;
    etx[10] = C9490;
    etx[11] = C9860;
    etx[12] = C10230;
    etx[13] = C10600;
    etx[14] = C10970;
    etx[15] = C11340;
    etx[16] = C11710;
    etx[17] = C12080;
    etx[18] = C12450;
    etx[19] = C12820;
    etx[20] = C13190;
    etx[21] = C13560;
    etx[22] = C13930;
    etx[23] = C14300;
    etx[24] = C14670;
    etx[25] = C15040;
    etx[26] = C15410;
    etx[27] = C15780;
    etx[28] = C16150;
    etx[29] = C16520;
    etx[30] = C16890;
    etx[31] = C17260;
    etx[32] = C17630;
    etx[33] = C18000;
    etx[34] = C18370;
    etx[35] = C18740;
    ety[0] = C5913;
    ety[1] = C6283;
    ety[2] = C6653;
    ety[3] = C7023;
    ety[4] = C7393;
    ety[5] = C7763;
    ety[6] = C8133;
    ety[7] = C8503;
    ety[8] = C8873;
    ety[9] = C9243;
    ety[10] = C9613;
    ety[11] = C9983;
    ety[12] = C10353;
    ety[13] = C10723;
    ety[14] = C11093;
    ety[15] = C11463;
    ety[16] = C11833;
    ety[17] = C12203;
    ety[18] = C12573;
    ety[19] = C12943;
    ety[20] = C13313;
    ety[21] = C13683;
    ety[22] = C14053;
    ety[23] = C14423;
    ety[24] = C14793;
    ety[25] = C15163;
    ety[26] = C15533;
    ety[27] = C15903;
    ety[28] = C16273;
    ety[29] = C16643;
    ety[30] = C17013;
    ety[31] = C17383;
    ety[32] = C17753;
    ety[33] = C18123;
    ety[34] = C18493;
    ety[35] = C18863;
    etz[0] = C6036;
    etz[1] = C6406;
    etz[2] = C6776;
    etz[3] = C7146;
    etz[4] = C7516;
    etz[5] = C7886;
    etz[6] = C8256;
    etz[7] = C8626;
    etz[8] = C8996;
    etz[9] = C9366;
    etz[10] = C9736;
    etz[11] = C10106;
    etz[12] = C10476;
    etz[13] = C10846;
    etz[14] = C11216;
    etz[15] = C11586;
    etz[16] = C11956;
    etz[17] = C12326;
    etz[18] = C12696;
    etz[19] = C13066;
    etz[20] = C13436;
    etz[21] = C13806;
    etz[22] = C14176;
    etz[23] = C14546;
    etz[24] = C14916;
    etz[25] = C15286;
    etz[26] = C15656;
    etz[27] = C16026;
    etz[28] = C16396;
    etz[29] = C16766;
    etz[30] = C17136;
    etz[31] = C17506;
    etz[32] = C17876;
    etz[33] = C18246;
    etz[34] = C18616;
    etz[35] = C18986;
}
