/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2020_2_vr(const double ae,
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
    const double C891 = g[18];
    const double C907 = g[19];
    const double C923 = g[20];
    const double C1072 = g[21];
    const double C1088 = g[22];
    const double C1236 = g[23];
    const double C1252 = g[24];
    const double C1400 = g[26];
    const double C1488 = g[29];
    const double C1503 = g[30];
    const double C1588 = g[31];
    const double C2458 = g[33];
    const double C2607 = g[34];
    const double C2950 = g[35];
    const double C3968 = g[36];
    const double C4496 = g[37];
    const double C4546 = g[38];
    const double C4561 = g[39];
    const double C4590 = g[40];
    const double C4591 = g[41];
    const double C4606 = g[42];
    const double C4629 = g[43];
    const double C4659 = g[44];
    const double C4690 = g[45];
    const double C4750 = g[46];
    const double C4837 = g[47];
    const double C4852 = g[48];
    const double C4882 = g[49];
    const double C4954 = g[50];
    const double C4969 = g[51];
    const double C4998 = g[52];
    const double C5014 = g[53];
    const double C5065 = g[54];
    const double C5081 = g[55];
    const double C5097 = g[56];
    const double C5128 = g[57];
    const double C5250 = g[58];
    const double C5266 = g[59];
    const double C5347 = g[60];
    const double C5625 = g[61];
    const double C5978 = g[62];
    const double C6109 = g[63];
    const double C6175 = g[64];
    const double C7080 = g[65];
    const double C4499 = p + q;
    const double C4498 = p * q;
    const double C7191 = C4561 * be;
    const double C7186 = bs[5];
    const double C7185 = C5250 * be;
    const double C7184 = bs[4];
    const double C7182 = C5014 * be;
    const double C7181 = bs[3];
    const double C7180 = C4882 * be;
    const double C7179 = C4750 * be;
    const double C7178 = C4606 * be;
    const double C7176 = bs[2];
    const double C7175 = C4591 * be;
    const double C7174 = C3968 * be;
    const double C7173 = C2607 * be;
    const double C7172 = C1236 * be;
    const double C7171 = C2458 * be;
    const double C7170 = C1072 * be;
    const double C7167 = C923 * be;
    const double C7165 = std::pow(Pi, 2.5);
    const double C7164 = ae * be;
    const double C7163 = bs[0];
    const double C7160 = bs[1];
    const double C7159 = C891 * be;
    const double C7158 = C4590 * be;
    const double C7157 = C1488 * be;
    const double C7156 = C1400 * be;
    const double C7155 = zP - zQ;
    const double C7154 = be * zAB;
    const double C7153 = yP - yQ;
    const double C7152 = be * yAB;
    const double C7151 = 2 * p;
    const double C7149 = xP - xQ;
    const double C7148 = std::pow(p, 2);
    const double C7146 = be * xAB;
    const double C4500 = C4499 * p;
    const double C7166 = std::sqrt(C4499);
    const double C7162 = p * C4499;
    const double C7161 = C4498 * be;
    const double C7147 = be * C4498;
    const double C7247 = C7191 / p;
    const double C7241 = C7185 / p;
    const double C7238 = C7182 / p;
    const double C7236 = C7180 / p;
    const double C7234 = C7179 / p;
    const double C7232 = C7178 / p;
    const double C7229 = C7175 / p;
    const double C7227 = C7174 / p;
    const double C7225 = C7173 / p;
    const double C7223 = C7172 / p;
    const double C7221 = C7171 / p;
    const double C7219 = C7170 / p;
    const double C7215 = C7167 / p;
    const double C7213 = 4 * C7165;
    const double C7212 = kab * C7164;
    const double C7209 = C7159 / p;
    const double C7207 = C7158 / p;
    const double C7205 = C7157 / p;
    const double C7203 = C7156 / p;
    const double C7202 = C7155 * C4498;
    const double C7201 = C7153 * C4498;
    const double C7199 = C7149 * C4498;
    const double C7198 = C4499 * C7148;
    const double C7214 = C4498 * C7166;
    const double C7211 = kab * C7161;
    const double C7248 = C6109 * C7147;
    const double C7242 = C5347 * C7147;
    const double C7239 = C5250 * C7147;
    const double C7237 = C5128 * C7147;
    const double C7235 = C5097 * C7147;
    const double C7233 = C5081 * C7147;
    const double C7230 = C5014 * C7147;
    const double C7228 = C4969 * C7147;
    const double C7226 = C4954 * C7147;
    const double C7224 = C4882 * C7147;
    const double C7222 = C4837 * C7147;
    const double C7220 = C4750 * C7147;
    const double C7216 = C4629 * C7147;
    const double C7210 = C4606 * C7147;
    const double C7208 = C4591 * C7147;
    const double C7206 = C4561 * C7147;
    const double C7204 = C4546 * C7147;
    const double C7261 = kcd * C7212;
    const double C7260 = kcd * C7211;
    const double C7282 = C7248 / C7198;
    const double C7277 = C7242 / C7198;
    const double C7275 = C7239 / C7198;
    const double C7274 = C7237 / C7198;
    const double C7273 = C7235 / C7198;
    const double C7272 = C7233 / C7198;
    const double C7270 = C7230 / C7198;
    const double C7269 = C7228 / C7198;
    const double C7268 = C7226 / C7198;
    const double C7267 = C7224 / C7198;
    const double C7266 = C7222 / C7198;
    const double C7265 = C7220 / C7198;
    const double C7262 = C7216 / C7198;
    const double C7259 = C7210 / C7198;
    const double C7258 = C7208 / C7198;
    const double C7257 = C7206 / C7198;
    const double C7256 = C7204 / C7198;
    const double C7302 = C7184 * C7261;
    const double C7300 = C7181 * C7261;
    const double C7297 = C7176 * C7261;
    const double C7294 = C7160 * C7261;
    const double C7291 = C7163 * C7261;
    const double C7301 = C7186 * C7260;
    const double C7299 = C7184 * C7260;
    const double C7296 = C7181 * C7260;
    const double C7293 = C7176 * C7260;
    const double C7290 = C7160 * C7260;
    const double C5351 =
        -(((C7149 * C7301) / C7162 - (xAB * C7302) / p) * C7213) / C7214;
    const double C6231 =
        -(((C7153 * C7301) / C7162 - (yAB * C7302) / p) * C7213) / C7214;
    const double C7108 =
        -(((C7155 * C7301) / C7162 - (zAB * C7302) / p) * C7213) / C7214;
    const double C5254 =
        -(((C7149 * C7299) / C7162 - (xAB * C7300) / p) * C7213) / C7214;
    const double C6135 =
        -(((C7153 * C7299) / C7162 - (yAB * C7300) / p) * C7213) / C7214;
    const double C7012 =
        -(((C7155 * C7299) / C7162 - (zAB * C7300) / p) * C7213) / C7214;
    const double C5018 =
        -(((C7149 * C7296) / C7162 - (xAB * C7297) / p) * C7213) / C7214;
    const double C5909 =
        -(((C7153 * C7296) / C7162 - (yAB * C7297) / p) * C7213) / C7214;
    const double C6788 =
        -(((C7155 * C7296) / C7162 - (zAB * C7297) / p) * C7213) / C7214;
    const double C4504 =
        -(((C7149 * C7293) / C7162 - (xAB * C7294) / p) * C7213) / C7214;
    const double C5402 =
        -(((C7153 * C7293) / C7162 - (yAB * C7294) / p) * C7213) / C7214;
    const double C6282 =
        -(((C7155 * C7293) / C7162 - (zAB * C7294) / p) * C7213) / C7214;
    const double C911 =
        -(((C7149 * C7290) / C7162 - (xAB * C7291) / p) * C7213) / C7214;
    const double C2225 =
        -(((C7153 * C7290) / C7162 - (yAB * C7291) / p) * C7213) / C7214;
    const double C3545 =
        -(((C7155 * C7290) / C7162 - (zAB * C7291) / p) * C7213) / C7214;
    const double C7183 = C5254 * C4498;
    const double C5270 =
        C7241 - (C5254 * C7146) / p - C7277 - (C5351 * C7199) / C4500;
    const double C5285 = -((C5254 * C7152) / p + (C5351 * C7201) / C4500);
    const double C5314 = -((C5254 * C7154) / p + (C5351 * C7202) / C4500);
    const double C7192 = C6135 * C4498;
    const double C6150 = -((C6135 * C7146) / p + (C6231 * C7199) / C4500);
    const double C6180 =
        C7241 - (C6135 * C7152) / p - C7277 - (C6231 * C7201) / C4500;
    const double C6209 = -((C6135 * C7154) / p + (C6231 * C7202) / C4500);
    const double C7197 = C7012 * C4498;
    const double C7027 = -((C7012 * C7146) / p + (C7108 * C7199) / C4500);
    const double C7056 = -((C7012 * C7152) / p + (C7108 * C7201) / C4500);
    const double C7086 =
        C7241 - (C7012 * C7154) / p - C7277 - (C7108 * C7202) / C4500;
    const double C7177 = C5018 * C4498;
    const double C5069 =
        C7238 - (C5018 * C7146) / p - C7275 - (C5254 * C7199) / C4500;
    const double C5116 = -((C5018 * C7152) / p + (C5254 * C7201) / C4500);
    const double C5147 = -((C5018 * C7154) / p + (C5254 * C7202) / C4500);
    const double C7190 = C5909 * C4498;
    const double C5952 = -((C5909 * C7146) / p + (C6135 * C7199) / C4500);
    const double C5983 =
        C7238 - (C5909 * C7152) / p - C7275 - (C6135 * C7201) / C4500;
    const double C6013 = -((C5909 * C7154) / p + (C6135 * C7202) / C4500);
    const double C7196 = C6788 * C4498;
    const double C6831 = -((C6788 * C7146) / p + (C7012 * C7199) / C4500);
    const double C6861 = -((C6788 * C7152) / p + (C7012 * C7201) / C4500);
    const double C6891 =
        C7238 - (C6788 * C7154) / p - C7275 - (C7012 * C7202) / C4500;
    const double C7150 = C4504 * C4498;
    const double C4503 =
        C7229 - (C4504 * C7146) / p - C7270 - (C5018 * C7199) / C4500;
    const double C4519 = -((C4504 * C7152) / p + (C5018 * C7201) / C4500);
    const double C4534 = -((C4504 * C7154) / p + (C5018 * C7202) / C4500);
    const double C7187 = C5402 * C4498;
    const double C5403 = -((C5402 * C7146) / p + (C5909 * C7199) / C4500);
    const double C5418 =
        C7229 - (C5402 * C7152) / p - C7270 - (C5909 * C7201) / C4500;
    const double C5433 = -((C5402 * C7154) / p + (C5909 * C7202) / C4500);
    const double C7193 = C6282 * C4498;
    const double C6283 = -((C6282 * C7146) / p + (C6788 * C7199) / C4500);
    const double C6298 = -((C6282 * C7152) / p + (C6788 * C7201) / C4500);
    const double C6313 =
        C7229 - (C6282 * C7154) / p - C7270 - (C6788 * C7202) / C4500;
    const double C895 =
        C7207 - (C911 * C7146) / p - C7258 - (C4504 * C7199) / C4500;
    const double C1105 = -((C911 * C7152) / p + (C4504 * C7201) / C4500);
    const double C1298 = -((C911 * C7154) / p + (C4504 * C7202) / C4500);
    const double C2226 = -((C2225 * C7146) / p + (C5402 * C7199) / C4500);
    const double C2433 =
        C7207 - (C2225 * C7152) / p - C7258 - (C5402 * C7201) / C4500;
    const double C2625 = -((C2225 * C7154) / p + (C5402 * C7202) / C4500);
    const double C3546 = -((C3545 * C7146) / p + (C6282 * C7199) / C4500);
    const double C3752 = -((C3545 * C7152) / p + (C6282 * C7201) / C4500);
    const double C3944 =
        C7207 - (C3545 * C7154) / p - C7258 - (C6282 * C7202) / C4500;
    const double C7240 = C7183 / C4500;
    const double C7249 = C7192 / C4500;
    const double C7254 = C7197 / C4500;
    const double C7231 = C7177 / C4500;
    const double C7246 = C7190 / C4500;
    const double C7253 = C7196 / C4500;
    const double C7200 = C7150 / C4500;
    const double C5002 = -((C4534 * C7152) / p + (C5147 * C7201) / C4500);
    const double C7243 = C7187 / C4500;
    const double C5887 =
        C7247 - (C5433 * C7152) / p - C7282 - (C6013 * C7201) / C4500;
    const double C7250 = C7193 / C4500;
    const double C6766 = -((C6313 * C7152) / p + (C6891 * C7201) / C4500);
    const double C614 =
        C7203 - (C1105 * C7146) / p - C7256 - (C4519 * C7199) / C4500;
    const double C708 =
        C7205 - (C1298 * C7146) / p - C7257 - (C4534 * C7199) / C4500;
    const double C803 = -((C1298 * C7152) / p + (C4534 * C7201) / C4500);
    const double C1954 = -((C2433 * C7146) / p + (C5418 * C7199) / C4500);
    const double C2045 = -((C2625 * C7146) / p + (C5433 * C7199) / C4500);
    const double C2136 =
        C7205 - (C2625 * C7152) / p - C7257 - (C5433 * C7201) / C4500;
    const double C3274 = -((C3752 * C7146) / p + (C6298 * C7199) / C4500);
    const double C3365 = -((C3944 * C7146) / p + (C6313 * C7199) / C4500);
    const double C3456 = -((C3944 * C7152) / p + (C6313 * C7201) / C4500);
    const double C7276 = C5018 - C7240;
    const double C7283 = C5909 - C7249;
    const double C7288 = C6788 - C7254;
    const double C7271 = C4504 - C7231;
    const double C7281 = C5402 - C7246;
    const double C7287 = C6282 - C7253;
    const double C7255 = C911 - C7200;
    const double C7278 = C2225 - C7243;
    const double C7284 = C3545 - C7250;
    const double C1447 = (C1588 * be) / p - (C803 * C7146) / p -
                         (C4998 * C7147) / C7198 - (C5002 * C7199) / C4500;
    const double C2771 = -((C2136 * C7146) / p + (C5887 * C7199) / C4500);
    const double C4090 = -((C3456 * C7146) / p + (C6766 * C7199) / C4500);
    const double C7298 = C7276 / C7151;
    const double C7306 = C7283 / C7151;
    const double C7310 = C7288 / C7151;
    const double C7295 = C7271 / C7151;
    const double C7305 = C7281 / C7151;
    const double C7309 = C7287 / C7151;
    const double C7289 = C7255 / C7151;
    const double C7303 = C7278 / C7151;
    const double C7307 = C7284 / C7151;
    const double C5085 = (C5065 * be) / p - (C5069 * C7146) / p -
                         (C5266 * C7147) / C7198 - (C5270 * C7199) / C4500 +
                         C7298;
    const double C5101 =
        C7298 - ((C5116 * C7152) / p + (C5285 * C7201) / C4500);
    const double C5132 =
        C7298 - ((C5147 * C7154) / p + (C5314 * C7202) / C4500);
    const double C5967 =
        C7306 - ((C5952 * C7146) / p + (C6150 * C7199) / C4500);
    const double C5998 = (C5978 * be) / p - (C5983 * C7152) / p -
                         (C6175 * C7147) / C7198 - (C6180 * C7201) / C4500 +
                         C7306;
    const double C6028 =
        C7306 - ((C6013 * C7154) / p + (C6209 * C7202) / C4500);
    const double C6846 =
        C7310 - ((C6831 * C7146) / p + (C7027 * C7199) / C4500);
    const double C6876 =
        C7310 - ((C6861 * C7152) / p + (C7056 * C7201) / C4500);
    const double C6906 = (C6109 * be) / p - (C6891 * C7154) / p -
                         (C7080 * C7147) / C7198 - (C7086 * C7202) / C4500 +
                         C7310;
    const double C4610 = (C4496 * be) / p - (C4503 * C7146) / p -
                         (C5065 * C7147) / C7198 - (C5069 * C7199) / C4500 +
                         C7295;
    const double C4664 =
        C7295 - ((C4519 * C7152) / p + (C5116 * C7201) / C4500);
    const double C4695 =
        C7295 - ((C4534 * C7154) / p + (C5147 * C7202) / C4500);
    const double C5511 =
        C7305 - ((C5403 * C7146) / p + (C5952 * C7199) / C4500);
    const double C5555 = (C4546 * be) / p - (C5418 * C7152) / p -
                         (C5978 * C7147) / C7198 - (C5983 * C7201) / C4500 +
                         C7305;
    const double C5585 =
        C7305 - ((C5433 * C7154) / p + (C6013 * C7202) / C4500);
    const double C6391 =
        C7309 - ((C6283 * C7146) / p + (C6831 * C7199) / C4500);
    const double C6435 =
        C7309 - ((C6298 * C7152) / p + (C6861 * C7201) / C4500);
    const double C6465 =
        C7247 - (C6313 * C7154) / p - C7282 - (C6891 * C7202) / C4500 + C7309;
    const double C316 = (C907 * be) / p - (C895 * C7146) / p -
                        (C4496 * C7147) / C7198 - (C4503 * C7199) / C4500 +
                        C7289;
    const double C415 = C7289 - ((C1105 * C7152) / p + (C4519 * C7201) / C4500);
    const double C514 = C7289 - ((C1298 * C7154) / p + (C4534 * C7202) / C4500);
    const double C1666 =
        C7303 - ((C2226 * C7146) / p + (C5403 * C7199) / C4500);
    const double C1761 =
        C7203 - (C2433 * C7152) / p - C7256 - (C5418 * C7201) / C4500 + C7303;
    const double C1857 =
        C7303 - ((C2625 * C7154) / p + (C5433 * C7202) / C4500);
    const double C2986 =
        C7307 - ((C3546 * C7146) / p + (C6283 * C7199) / C4500);
    const double C3081 =
        C7307 - ((C3752 * C7152) / p + (C6298 * C7201) / C4500);
    const double C3177 =
        C7205 - (C3944 * C7154) / p - C7257 - (C6313 * C7202) / C4500 + C7307;
    const double C4633 = C7232 - (C4610 * C7146) / p - C7272 -
                         (C5085 * C7199) / C4500 +
                         (C4503 - (C5069 * C4498) / C4500) / p;
    const double C4738 = -((C4610 * C7154) / p + (C5085 * C7202) / C4500);
    const double C7168 = C4664 * C4498;
    const double C4663 =
        C7234 - (C4664 * C7146) / p - C7273 - (C5101 * C7199) / C4500;
    const double C4796 = (C4519 - (C5116 * C4498) / C4500) / p -
                         ((C4664 * C7152) / p + (C5101 * C7201) / C4500);
    const double C4856 = -((C4664 * C7154) / p + (C5101 * C7202) / C4500);
    const double C7169 = C4695 * C4498;
    const double C4694 =
        C7236 - (C4695 * C7146) / p - C7274 - (C5132 * C7199) / C4500;
    const double C4825 = -((C4695 * C7152) / p + (C5132 * C7201) / C4500);
    const double C4942 = (C4534 - (C5147 * C4498) / C4500) / p -
                         ((C4695 * C7154) / p + (C5132 * C7202) / C4500);
    const double C5526 = (C5403 - (C5952 * C4498) / C4500) / p -
                         ((C5511 * C7146) / p + (C5967 * C7199) / C4500);
    const double C5630 = -((C5511 * C7154) / p + (C5967 * C7202) / C4500);
    const double C7188 = C5555 * C4498;
    const double C5556 = -((C5555 * C7146) / p + (C5998 * C7199) / C4500);
    const double C5687 = C7234 - (C5555 * C7152) / p - C7273 -
                         (C5998 * C7201) / C4500 +
                         (C5418 - (C5983 * C4498) / C4500) / p;
    const double C5745 = -((C5555 * C7154) / p + (C5998 * C7202) / C4500);
    const double C7189 = C5585 * C4498;
    const double C5586 = -((C5585 * C7146) / p + (C6028 * C7199) / C4500);
    const double C5716 =
        C7236 - (C5585 * C7152) / p - C7274 - (C6028 * C7201) / C4500;
    const double C5830 = (C5433 - (C6013 * C4498) / C4500) / p -
                         ((C5585 * C7154) / p + (C6028 * C7202) / C4500);
    const double C6406 = (C6283 - (C6831 * C4498) / C4500) / p -
                         ((C6391 * C7146) / p + (C6846 * C7199) / C4500);
    const double C6509 =
        C7232 - (C6391 * C7154) / p - C7272 - (C6846 * C7202) / C4500;
    const double C7194 = C6435 * C4498;
    const double C6436 = -((C6435 * C7146) / p + (C6876 * C7199) / C4500);
    const double C6566 = (C6298 - (C6861 * C4498) / C4500) / p -
                         ((C6435 * C7152) / p + (C6876 * C7201) / C4500);
    const double C6624 =
        C7234 - (C6435 * C7154) / p - C7273 - (C6876 * C7202) / C4500;
    const double C7195 = C6465 * C4498;
    const double C6466 = -((C6465 * C7146) / p + (C6906 * C7199) / C4500);
    const double C6595 = -((C6465 * C7152) / p + (C6906 * C7201) / C4500);
    const double C6709 = C7236 - (C6465 * C7154) / p - C7274 -
                         (C6906 * C7202) / C4500 +
                         (C6313 - (C6891 * C4498) / C4500) / p;
    const double C896 = C7209 - (C316 * C7146) / p - C7259 -
                        (C4610 * C7199) / C4500 +
                        (C895 - (C4503 * C4498) / C4500) / p;
    const double C942 = -((C316 * C7152) / p + (C4610 * C7201) / C4500);
    const double C972 = -((C316 * C7154) / p + (C4610 * C7202) / C4500);
    const double C1076 =
        C7219 - (C415 * C7146) / p - C7265 - (C4664 * C7199) / C4500;
    const double C1120 = (C1105 - (C4519 * C4498) / C4500) / p -
                         ((C415 * C7152) / p + (C4664 * C7201) / C4500);
    const double C1150 = -((C415 * C7154) / p + (C4664 * C7202) / C4500);
    const double C1240 =
        C7223 - (C514 * C7146) / p - C7267 - (C4695 * C7199) / C4500;
    const double C1270 = -((C514 * C7152) / p + (C4695 * C7201) / C4500);
    const double C1313 = (C1298 - (C4534 * C4498) / C4500) / p -
                         ((C514 * C7154) / p + (C4695 * C7202) / C4500);
    const double C2241 = (C2226 - (C5403 * C4498) / C4500) / p -
                         ((C1666 * C7146) / p + (C5511 * C7199) / C4500);
    const double C2271 =
        C7209 - (C1666 * C7152) / p - C7259 - (C5511 * C7201) / C4500;
    const double C2301 = -((C1666 * C7154) / p + (C5511 * C7202) / C4500);
    const double C2404 = -((C1761 * C7146) / p + (C5555 * C7199) / C4500);
    const double C2434 = C7219 - (C1761 * C7152) / p - C7265 -
                         (C5555 * C7201) / C4500 +
                         (C2433 - (C5418 * C4498) / C4500) / p;
    const double C2478 = -((C1761 * C7154) / p + (C5555 * C7202) / C4500);
    const double C2567 = -((C1857 * C7146) / p + (C5585 * C7199) / C4500);
    const double C2596 =
        C7223 - (C1857 * C7152) / p - C7267 - (C5585 * C7201) / C4500;
    const double C2640 = (C2625 - (C5433 * C4498) / C4500) / p -
                         ((C1857 * C7154) / p + (C5585 * C7202) / C4500);
    const double C3561 = (C3546 - (C6283 * C4498) / C4500) / p -
                         ((C2986 * C7146) / p + (C6391 * C7199) / C4500);
    const double C3591 = -((C2986 * C7152) / p + (C6391 * C7201) / C4500);
    const double C3621 =
        C7209 - (C2986 * C7154) / p - C7259 - (C6391 * C7202) / C4500;
    const double C3724 = -((C3081 * C7146) / p + (C6435 * C7199) / C4500);
    const double C3767 = (C3752 - (C6298 * C4498) / C4500) / p -
                         ((C3081 * C7152) / p + (C6435 * C7201) / C4500);
    const double C3797 =
        C7219 - (C3081 * C7154) / p - C7265 - (C6435 * C7202) / C4500;
    const double C3886 = -((C3177 * C7146) / p + (C6465 * C7199) / C4500);
    const double C3915 = -((C3177 * C7152) / p + (C6465 * C7201) / C4500);
    const double C3945 = C7223 - (C3177 * C7154) / p - C7267 -
                         (C6465 * C7202) / C4500 +
                         (C3944 - (C6313 * C4498) / C4500) / p;
    const double C7217 = C7168 / C4500;
    const double C7218 = C7169 / C4500;
    const double C7244 = C7188 / C4500;
    const double C7245 = C7189 / C4500;
    const double C7251 = C7194 / C4500;
    const double C7252 = C7195 / C4500;
    const double C927 = C7215 - (C896 * C7146) / p - C7262 -
                        (C4633 * C7199) / C4500 +
                        (3 * (C316 - (C4610 * C4498) / C4500)) / C7151;
    const double C1016 = -((C896 * C7152) / p + (C4633 * C7201) / C4500);
    const double C1045 = -((C896 * C7154) / p + (C4633 * C7202) / C4500);
    const double C1060 = -((C972 * C7152) / p + (C4738 * C7201) / C4500);
    const double C1180 =
        C7221 - (C1120 * C7146) / p - C7266 - (C4796 * C7199) / C4500;
    const double C1224 = -((C1120 * C7154) / p + (C4796 * C7202) / C4500);
    const double C1195 = (C2950 * be) / p - (C1150 * C7146) / p -
                         (C4852 * C7147) / C7198 - (C4856 * C7199) / C4500;
    const double C1343 =
        C7225 - (C1270 * C7146) / p - C7268 - (C4825 * C7199) / C4500;
    const double C1358 =
        C7227 - (C1313 * C7146) / p - C7269 - (C4942 * C7199) / C4500;
    const double C1373 = -((C1313 * C7152) / p + (C4942 * C7201) / C4500);
    const double C2256 = (3 * (C1666 - (C5511 * C4498) / C4500)) / C7151 -
                         ((C2241 * C7146) / p + (C5526 * C7199) / C4500);
    const double C2345 =
        C7215 - (C2241 * C7152) / p - C7262 - (C5526 * C7201) / C4500;
    const double C2374 = -((C2241 * C7154) / p + (C5526 * C7202) / C4500);
    const double C2389 = (C1503 * be) / p - (C2301 * C7152) / p -
                         (C5625 * C7147) / C7198 - (C5630 * C7201) / C4500;
    const double C2508 = -((C2434 * C7146) / p + (C5687 * C7199) / C4500);
    const double C2552 = -((C2434 * C7154) / p + (C5687 * C7202) / C4500);
    const double C2523 = -((C2478 * C7146) / p + (C5745 * C7199) / C4500);
    const double C2670 = -((C2596 * C7146) / p + (C5716 * C7199) / C4500);
    const double C2685 = -((C2640 * C7146) / p + (C5830 * C7199) / C4500);
    const double C2700 =
        C7227 - (C2640 * C7152) / p - C7269 - (C5830 * C7201) / C4500;
    const double C3576 = (3 * (C2986 - (C6391 * C4498) / C4500)) / C7151 -
                         ((C3561 * C7146) / p + (C6406 * C7199) / C4500);
    const double C3665 = -((C3561 * C7152) / p + (C6406 * C7201) / C4500);
    const double C3694 =
        C7215 - (C3561 * C7154) / p - C7262 - (C6406 * C7202) / C4500;
    const double C3709 = -((C3621 * C7152) / p + (C6509 * C7201) / C4500);
    const double C3827 = -((C3767 * C7146) / p + (C6566 * C7199) / C4500);
    const double C3871 =
        C7221 - (C3767 * C7154) / p - C7266 - (C6566 * C7202) / C4500;
    const double C3842 = -((C3797 * C7146) / p + (C6624 * C7199) / C4500);
    const double C3989 = -((C3915 * C7146) / p + (C6595 * C7199) / C4500);
    const double C4004 = -((C3945 * C7146) / p + (C6709 * C7199) / C4500);
    const double C4019 = -((C3945 * C7152) / p + (C6709 * C7201) / C4500);
    const double C7263 = C415 - C7217;
    const double C7264 = C514 - C7218;
    const double C7279 = C1761 - C7244;
    const double C7280 = C1857 - C7245;
    const double C7285 = C3081 - C7251;
    const double C7286 = C3177 - C7252;
    const double C957 = (C1088 * be) / p - (C1076 * C7146) / p -
                        (C4659 * C7147) / C7198 - (C4663 * C7199) / C4500 +
                        C7263 / C7151;
    const double C1135 =
        (3 * C7263) / C7151 - ((C1120 * C7152) / p + (C4796 * C7201) / C4500);
    const double C7292 = C7264 / C7151;
    const double C1328 =
        (3 * C7264) / C7151 - ((C1313 * C7154) / p + (C4942 * C7202) / C4500);
    const double C2286 =
        C7279 / C7151 - ((C2404 * C7146) / p + (C5556 * C7199) / C4500);
    const double C2463 = C7221 - (C2434 * C7152) / p - C7266 -
                         (C5687 * C7201) / C4500 + (3 * C7279) / C7151;
    const double C7304 = C7280 / C7151;
    const double C2655 =
        (3 * C7280) / C7151 - ((C2640 * C7154) / p + (C5830 * C7202) / C4500);
    const double C3606 =
        C7285 / C7151 - ((C3724 * C7146) / p + (C6436 * C7199) / C4500);
    const double C3782 =
        (3 * C7285) / C7151 - ((C3767 * C7152) / p + (C6566 * C7201) / C4500);
    const double C7308 = C7286 / C7151;
    const double C3974 = C7227 - (C3945 * C7154) / p - C7269 -
                         (C6709 * C7202) / C4500 + (3 * C7286) / C7151;
    const double C987 = (C1252 * be) / p - (C1240 * C7146) / p -
                        (C4690 * C7147) / C7198 - (C4694 * C7199) / C4500 +
                        C7292;
    const double C1165 =
        C7292 - ((C1270 * C7152) / p + (C4825 * C7201) / C4500);
    const double C2316 =
        C7304 - ((C2567 * C7146) / p + (C5586 * C7199) / C4500);
    const double C2493 =
        C7225 - (C2596 * C7152) / p - C7268 - (C5716 * C7201) / C4500 + C7304;
    const double C3636 =
        C7308 - ((C3886 * C7146) / p + (C6466 * C7199) / C4500);
    const double C3812 =
        C7308 - ((C3915 * C7152) / p + (C6595 * C7201) / C4500);
    vrx[0] = C316;
    vrx[1] = C415;
    vrx[2] = C514;
    vrx[3] = C614;
    vrx[4] = C708;
    vrx[5] = C803;
    vrx[6] = C895;
    vrx[7] = C896;
    vrx[8] = C911;
    vrx[9] = C927;
    vrx[10] = C942;
    vrx[11] = C957;
    vrx[12] = C972;
    vrx[13] = C987;
    vrx[14] = C1016;
    vrx[15] = C1045;
    vrx[16] = C1060;
    vrx[17] = C1076;
    vrx[18] = C1105;
    vrx[19] = C1120;
    vrx[20] = C1135;
    vrx[21] = C1150;
    vrx[22] = C1165;
    vrx[23] = C1180;
    vrx[24] = C1195;
    vrx[25] = C1224;
    vrx[26] = C1240;
    vrx[27] = C1270;
    vrx[28] = C1298;
    vrx[29] = C1313;
    vrx[30] = C1328;
    vrx[31] = C1343;
    vrx[32] = C1358;
    vrx[33] = C1373;
    vrx[34] = C1447;
    vry[0] = C1666;
    vry[1] = C1761;
    vry[2] = C1857;
    vry[3] = C1954;
    vry[4] = C2045;
    vry[5] = C2136;
    vry[6] = C2225;
    vry[7] = C2226;
    vry[8] = C2241;
    vry[9] = C2256;
    vry[10] = C2271;
    vry[11] = C2286;
    vry[12] = C2301;
    vry[13] = C2316;
    vry[14] = C2345;
    vry[15] = C2374;
    vry[16] = C2389;
    vry[17] = C2404;
    vry[18] = C2433;
    vry[19] = C2434;
    vry[20] = C2463;
    vry[21] = C2478;
    vry[22] = C2493;
    vry[23] = C2508;
    vry[24] = C2523;
    vry[25] = C2552;
    vry[26] = C2567;
    vry[27] = C2596;
    vry[28] = C2625;
    vry[29] = C2640;
    vry[30] = C2655;
    vry[31] = C2670;
    vry[32] = C2685;
    vry[33] = C2700;
    vry[34] = C2771;
    vrz[0] = C2986;
    vrz[1] = C3081;
    vrz[2] = C3177;
    vrz[3] = C3274;
    vrz[4] = C3365;
    vrz[5] = C3456;
    vrz[6] = C3545;
    vrz[7] = C3546;
    vrz[8] = C3561;
    vrz[9] = C3576;
    vrz[10] = C3591;
    vrz[11] = C3606;
    vrz[12] = C3621;
    vrz[13] = C3636;
    vrz[14] = C3665;
    vrz[15] = C3694;
    vrz[16] = C3709;
    vrz[17] = C3724;
    vrz[18] = C3752;
    vrz[19] = C3767;
    vrz[20] = C3782;
    vrz[21] = C3797;
    vrz[22] = C3812;
    vrz[23] = C3827;
    vrz[24] = C3842;
    vrz[25] = C3871;
    vrz[26] = C3886;
    vrz[27] = C3915;
    vrz[28] = C3944;
    vrz[29] = C3945;
    vrz[30] = C3974;
    vrz[31] = C3989;
    vrz[32] = C4004;
    vrz[33] = C4019;
    vrz[34] = C4090;
}
