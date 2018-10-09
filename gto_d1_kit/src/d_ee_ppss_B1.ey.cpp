/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1010_2_vr(const double ae,
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
                            double* const vrx,
                            double* const vry,
                            double* const vrz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double muab = ae * be / p;
    const double mucd = ce * de / q;
    const double rAB2 = xAB * xAB + yAB * yAB + zAB * zAB;
    const double rCD2 = xCD * xCD + yCD * yCD + zCD * zCD;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double kab = std::exp(-muab * rAB2);
    const double kcd = std::exp(-mucd * rCD2);
    const double C120 = g[0];
    const double C168 = g[1];
    const double C213 = g[2];
    const double C559 = g[3];
    const double C560 = g[4];
    const double C585 = g[5];
    const double C602 = g[6];
    const double C618 = g[7];
    const double C711 = g[8];
    const double C563 = p + q;
    const double C562 = p * q;
    const double C1165 = bs[3];
    const double C1164 = C560 * be;
    const double C1163 = bs[2];
    const double C1162 = zP - zQ;
    const double C1161 = be * zAB;
    const double C1160 = yP - yQ;
    const double C1159 = be * yAB;
    const double C1158 = C213 * be;
    const double C1157 = C168 * be;
    const double C1156 = 2 * p;
    const double C1153 = std::pow(Pi, 2.5);
    const double C1152 = ae * be;
    const double C1151 = bs[0];
    const double C1148 = bs[1];
    const double C1147 = xP - xQ;
    const double C1146 = std::pow(p, 2);
    const double C1144 = be * xAB;
    const double C1143 = C559 * be;
    const double C587 = C563 * p;
    const double C1154 = std::sqrt(C563);
    const double C1150 = p * C563;
    const double C1149 = C562 * be;
    const double C1145 = be * C562;
    const double C1183 = C1164 / p;
    const double C1182 = C1162 * C562;
    const double C1181 = C1160 * C562;
    const double C1179 = C1158 / p;
    const double C1177 = C1157 / p;
    const double C1174 = 4 * C1153;
    const double C1173 = kab * C1152;
    const double C1171 = C1147 * C562;
    const double C1170 = C563 * C1146;
    const double C1168 = C1143 / p;
    const double C1175 = C562 * C1154;
    const double C1172 = kab * C1149;
    const double C1184 = C711 * C1145;
    const double C1180 = C618 * C1145;
    const double C1178 = C602 * C1145;
    const double C1169 = C560 * C1145;
    const double C1189 = kcd * C1173;
    const double C1188 = kcd * C1172;
    const double C1193 = C1184 / C1170;
    const double C1192 = C1180 / C1170;
    const double C1191 = C1178 / C1170;
    const double C1187 = C1169 / C1170;
    const double C1202 = C1163 * C1189;
    const double C1200 = C1148 * C1189;
    const double C1197 = C1151 * C1189;
    const double C1201 = C1165 * C1188;
    const double C1199 = C1163 * C1188;
    const double C1196 = C1148 * C1188;
    const double C715 =
        -(((C1147 * C1201) / C1150 - (xAB * C1202) / p) * C1174) / C1175;
    const double C910 =
        -(((C1160 * C1201) / C1150 - (yAB * C1202) / p) * C1174) / C1175;
    const double C1105 =
        -(((C1162 * C1201) / C1150 - (zAB * C1202) / p) * C1174) / C1175;
    const double C566 =
        -(((C1147 * C1199) / C1150 - (xAB * C1200) / p) * C1174) / C1175;
    const double C773 =
        -(((C1160 * C1199) / C1150 - (yAB * C1200) / p) * C1174) / C1175;
    const double C968 =
        -(((C1162 * C1199) / C1150 - (zAB * C1200) / p) * C1174) / C1175;
    const double C125 =
        -(((C1147 * C1196) / C1150 - (xAB * C1197) / p) * C1174) / C1175;
    const double C260 =
        -(((C1160 * C1196) / C1150 - (yAB * C1197) / p) * C1174) / C1175;
    const double C394 =
        -(((C1162 * C1196) / C1150 - (zAB * C1197) / p) * C1174) / C1175;
    const double C1155 = C566 * C562;
    const double C590 =
        C1183 - (C566 * C1144) / p - C1193 - (C715 * C1171) / C587;
    const double C606 = -((C566 * C1159) / p + (C715 * C1181) / C587);
    const double C622 = -((C566 * C1161) / p + (C715 * C1182) / C587);
    const double C1166 = C773 * C562;
    const double C788 = -((C773 * C1144) / p + (C910 * C1171) / C587);
    const double C803 =
        C1183 - (C773 * C1159) / p - C1193 - (C910 * C1181) / C587;
    const double C818 = -((C773 * C1161) / p + (C910 * C1182) / C587);
    const double C1167 = C968 * C562;
    const double C983 = -((C968 * C1144) / p + (C1105 * C1171) / C587);
    const double C998 = -((C968 * C1159) / p + (C1105 * C1181) / C587);
    const double C1013 =
        C1183 - (C968 * C1161) / p - C1193 - (C1105 * C1182) / C587;
    const double C124 =
        C1168 - (C125 * C1144) / p - C1187 - (C566 * C1171) / C587;
    const double C172 = -((C125 * C1159) / p + (C566 * C1181) / C587);
    const double C217 = -((C125 * C1161) / p + (C566 * C1182) / C587);
    const double C261 = -((C260 * C1144) / p + (C773 * C1171) / C587);
    const double C307 =
        C1168 - (C260 * C1159) / p - C1187 - (C773 * C1181) / C587;
    const double C351 = -((C260 * C1161) / p + (C773 * C1182) / C587);
    const double C395 = -((C394 * C1144) / p + (C968 * C1171) / C587);
    const double C441 = -((C394 * C1159) / p + (C968 * C1181) / C587);
    const double C485 =
        C1168 - (C394 * C1161) / p - C1187 - (C968 * C1182) / C587;
    const double C1176 = C1155 / C587;
    const double C1185 = C1166 / C587;
    const double C1186 = C1167 / C587;
    const double C141 =
        C1177 - (C172 * C1144) / p - C1191 - (C606 * C1171) / C587;
    const double C156 =
        C1179 - (C217 * C1144) / p - C1192 - (C622 * C1171) / C587;
    const double C201 = -((C217 * C1159) / p + (C622 * C1181) / C587);
    const double C277 = -((C307 * C1144) / p + (C803 * C1171) / C587);
    const double C292 = -((C351 * C1144) / p + (C818 * C1171) / C587);
    const double C336 =
        C1179 - (C351 * C1159) / p - C1192 - (C818 * C1181) / C587;
    const double C411 = -((C441 * C1144) / p + (C998 * C1171) / C587);
    const double C426 = -((C485 * C1144) / p + (C1013 * C1171) / C587);
    const double C470 = -((C485 * C1159) / p + (C1013 * C1181) / C587);
    const double C1190 = C125 - C1176;
    const double C1194 = C260 - C1185;
    const double C1195 = C394 - C1186;
    const double C1198 = C1190 / C1156;
    const double C1203 = C1194 / C1156;
    const double C1204 = C1195 / C1156;
    const double C126 = (C120 * be) / p - (C124 * C1144) / p -
                        (C585 * C1145) / C1170 - (C590 * C1171) / C587 + C1198;
    const double C186 = C1198 - ((C172 * C1159) / p + (C606 * C1181) / C587);
    const double C245 = C1198 - ((C217 * C1161) / p + (C622 * C1182) / C587);
    const double C262 = C1203 - ((C261 * C1144) / p + (C788 * C1171) / C587);
    const double C321 =
        C1177 - (C307 * C1159) / p - C1191 - (C803 * C1181) / C587 + C1203;
    const double C379 = C1203 - ((C351 * C1161) / p + (C818 * C1182) / C587);
    const double C396 = C1204 - ((C395 * C1144) / p + (C983 * C1171) / C587);
    const double C455 = C1204 - ((C441 * C1159) / p + (C998 * C1181) / C587);
    const double C513 =
        C1179 - (C485 * C1161) / p - C1192 - (C1013 * C1182) / C587 + C1204;
    vrx[0] = C124;
    vrx[1] = C125;
    vrx[2] = C126;
    vrx[3] = C141;
    vrx[4] = C156;
    vrx[5] = C172;
    vrx[6] = C186;
    vrx[7] = C201;
    vrx[8] = C217;
    vrx[9] = C245;
    vry[0] = C260;
    vry[1] = C261;
    vry[2] = C262;
    vry[3] = C277;
    vry[4] = C292;
    vry[5] = C307;
    vry[6] = C321;
    vry[7] = C336;
    vry[8] = C351;
    vry[9] = C379;
    vrz[0] = C394;
    vrz[1] = C395;
    vrz[2] = C396;
    vrz[3] = C411;
    vrz[4] = C426;
    vrz[5] = C441;
    vrz[6] = C455;
    vrz[7] = C470;
    vrz[8] = C485;
    vrz[9] = C513;
}
