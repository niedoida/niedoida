/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2200_1_vr(const double ae,
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
    const double C648 = g[18];
    const double C659 = g[19];
    const double C732 = g[20];
    const double C742 = g[21];
    const double C815 = g[22];
    const double C825 = g[23];
    const double C941 = g[26];
    const double C1001 = g[29];
    const double C1466 = g[30];
    const double C1548 = g[31];
    const double C1719 = g[32];
    const double C2273 = g[33];
    const double C2473 = g[34];
    const double C2493 = g[35];
    const double C2510 = g[36];
    const double C2511 = g[37];
    const double C2528 = g[38];
    const double C2559 = g[39];
    const double C2633 = g[40];
    const double C2722 = g[41];
    const double C2737 = g[42];
    const double C2767 = g[43];
    const double C2841 = g[44];
    const double C2856 = g[45];
    const double C2885 = g[46];
    const double C2886 = g[47];
    const double C2901 = g[48];
    const double C2917 = g[49];
    const double C2918 = g[50];
    const double C2947 = g[51];
    const double C2964 = g[52];
    const double C2980 = g[53];
    const double C2981 = g[54];
    const double C2996 = g[55];
    const double C3025 = g[56];
    const double C3056 = g[57];
    const double C3227 = g[58];
    const double C3244 = g[59];
    const double C3324 = g[60];
    const double C3518 = g[61];
    const double C3910 = g[62];
    const double C4097 = g[63];
    const double C4163 = g[64];
    const double C5072 = g[65];
    const double C2476 = p + q;
    const double C2475 = p * q;
    const double C5163 = bs[5];
    const double C5162 = bs[4];
    const double C5161 = bs[3];
    const double C5159 = bs[2];
    const double C5157 = std::pow(Pi, 2.5);
    const double C5154 = bs[1];
    const double C5153 = ae * be;
    const double C5152 = bs[0];
    const double C5150 = zP - zQ;
    const double C5149 = be * zAB;
    const double C5147 = yP - yQ;
    const double C5146 = be * yAB;
    const double C5143 = 2 * p;
    const double C5142 = xP - xQ;
    const double C5141 = std::pow(p, 2);
    const double C5139 = be * xAB;
    const double C5138 = ae / p;
    const double C2477 = C2476 * p;
    const double C5158 = std::sqrt(C2476);
    const double C5156 = p * C2476;
    const double C5155 = kab * C2475;
    const double C5140 = ae * C2475;
    const double C5197 = 4 * C5157;
    const double C5195 = kab * C5153;
    const double C5183 = C5150 * C2475;
    const double C5181 = C5147 * C2475;
    const double C5177 = C5142 * C2475;
    const double C5176 = C2476 * C5141;
    const double C5174 = C5138 - 1;
    const double C5198 = C2475 * C5158;
    const double C5196 = kcd * C5155;
    const double C5208 = C4097 * C5140;
    const double C5203 = C3324 * C5140;
    const double C5202 = C3244 * C5140;
    const double C5200 = C3056 * C5140;
    const double C5199 = C3025 * C5140;
    const double C5194 = C2996 * C5140;
    const double C5193 = C2981 * C5140;
    const double C5191 = C2947 * C5140;
    const double C5190 = C2918 * C5140;
    const double C5189 = C2886 * C5140;
    const double C5188 = C2856 * C5140;
    const double C5187 = C2841 * C5140;
    const double C5186 = C2767 * C5140;
    const double C5185 = C2722 * C5140;
    const double C5184 = C2633 * C5140;
    const double C5178 = C2493 * C5140;
    const double C5175 = C2473 * C5140;
    const double C5243 = kcd * C5195;
    const double C5262 = C5174 * C2918;
    const double C5254 = C5174 * C3244;
    const double C5251 = C5174 * C2996;
    const double C5248 = C5174 * C2767;
    const double C5246 = C5174 * C2633;
    const double C5241 = C5174 * C2981;
    const double C5239 = C5174 * C2980;
    const double C5236 = C5174 * C2493;
    const double C5234 = C5174 * C2917;
    const double C5232 = C5174 * C2885;
    const double C5230 = C5174 * C2273;
    const double C5228 = C5174 * C1548;
    const double C5226 = C5174 * C825;
    const double C5224 = C5174 * C1466;
    const double C5222 = C5174 * C742;
    const double C5217 = C5174 * C659;
    const double C5215 = C5174 * C648;
    const double C5257 = C5163 * C5196;
    const double C5256 = C5162 * C5196;
    const double C5253 = C5161 * C5196;
    const double C5245 = C5159 * C5196;
    const double C5244 = C5154 * C5196;
    const double C5263 = C5208 / C5176;
    const double C5255 = C5203 / C5176;
    const double C5252 = C5202 / C5176;
    const double C5249 = C5200 / C5176;
    const double C5247 = C5199 / C5176;
    const double C5242 = C5194 / C5176;
    const double C5240 = C5193 / C5176;
    const double C5237 = C5191 / C5176;
    const double C5235 = C5190 / C5176;
    const double C5233 = C5189 / C5176;
    const double C5231 = C5188 / C5176;
    const double C5229 = C5187 / C5176;
    const double C5227 = C5186 / C5176;
    const double C5225 = C5185 / C5176;
    const double C5223 = C5184 / C5176;
    const double C5218 = C5178 / C5176;
    const double C5216 = C5175 / C5176;
    const double C5282 = C5162 * C5243;
    const double C5280 = C5161 * C5243;
    const double C5278 = C5159 * C5243;
    const double C5275 = C5154 * C5243;
    const double C5273 = C5152 * C5243;
    const double C5283 = C5257 * ae;
    const double C5281 = C5256 * ae;
    const double C5279 = C5253 * ae;
    const double C5276 = C5245 * ae;
    const double C5274 = C5244 * ae;
    const double C3328 =
        -(((xAB * C5282) / p + (C5142 * C5283) / C5156) * C5197) / C5198;
    const double C4219 =
        -(((yAB * C5282) / p + (C5147 * C5283) / C5156) * C5197) / C5198;
    const double C5100 =
        -(((zAB * C5282) / p + (C5150 * C5283) / C5156) * C5197) / C5198;
    const double C3232 =
        -(((xAB * C5280) / p + (C5142 * C5281) / C5156) * C5197) / C5198;
    const double C4123 =
        -(((yAB * C5280) / p + (C5147 * C5281) / C5156) * C5197) / C5198;
    const double C5004 =
        -(((zAB * C5280) / p + (C5150 * C5281) / C5156) * C5197) / C5198;
    const double C2968 =
        -(((xAB * C5278) / p + (C5142 * C5279) / C5156) * C5197) / C5198;
    const double C3841 =
        -(((yAB * C5278) / p + (C5147 * C5279) / C5156) * C5197) / C5198;
    const double C4724 =
        -(((zAB * C5278) / p + (C5150 * C5279) / C5156) * C5197) / C5198;
    const double C2516 =
        -(((xAB * C5275) / p + (C5142 * C5276) / C5156) * C5197) / C5198;
    const double C3419 =
        -(((yAB * C5275) / p + (C5147 * C5276) / C5156) * C5197) / C5198;
    const double C4303 =
        -(((zAB * C5275) / p + (C5150 * C5276) / C5156) * C5197) / C5198;
    const double C2515 =
        -(((xAB * C5273) / p + (C5142 * C5274) / C5156) * C5197) / C5198;
    const double C3418 =
        -(((yAB * C5273) / p + (C5147 * C5274) / C5156) * C5197) / C5198;
    const double C4302 =
        -(((zAB * C5273) / p + (C5150 * C5274) / C5156) * C5197) / C5198;
    const double C5160 = C3232 * C2475;
    const double C3231 =
        C5254 - (C3232 * C5139) / p - C5255 - (C3328 * C5177) / C2477;
    const double C3269 = -((C3232 * C5146) / p + (C3328 * C5181) / C2477);
    const double C3298 = -((C3232 * C5149) / p + (C3328 * C5183) / C2477);
    const double C5168 = C4123 * C2475;
    const double C4138 = -((C4123 * C5139) / p + (C4219 * C5177) / C2477);
    const double C4168 =
        C5254 - (C4123 * C5146) / p - C5255 - (C4219 * C5181) / C2477;
    const double C4197 = -((C4123 * C5149) / p + (C4219 * C5183) / C2477);
    const double C5173 = C5004 * C2475;
    const double C5019 = -((C5004 * C5139) / p + (C5100 * C5177) / C2477);
    const double C5048 = -((C5004 * C5146) / p + (C5100 * C5181) / C2477);
    const double C5078 =
        C5254 - (C5004 * C5149) / p - C5255 - (C5100 * C5183) / C2477;
    const double C5151 = C2968 * C2475;
    const double C2952 =
        C5251 - (C2968 * C5139) / p - C5252 - (C3232 * C5177) / C2477;
    const double C3044 = -((C2968 * C5146) / p + (C3232 * C5181) / C2477);
    const double C3075 = -((C2968 * C5149) / p + (C3232 * C5183) / C2477);
    const double C5167 = C3841 * C2475;
    const double C3842 = -((C3841 * C5139) / p + (C4123 * C5177) / C2477);
    const double C3915 =
        C5251 - (C3841 * C5146) / p - C5252 - (C4123 * C5181) / C2477;
    const double C3945 = -((C3841 * C5149) / p + (C4123 * C5183) / C2477);
    const double C5172 = C4724 * C2475;
    const double C4725 = -((C4724 * C5139) / p + (C5004 * C5177) / C2477);
    const double C4797 = -((C4724 * C5146) / p + (C5004 * C5181) / C2477);
    const double C4827 =
        C5251 - (C4724 * C5149) / p - C5252 - (C5004 * C5183) / C2477;
    const double C5144 = C2516 * C2475;
    const double C2498 =
        C5241 - (C2516 * C5139) / p - C5242 - (C2968 * C5177) / C2477;
    const double C2652 = -((C2516 * C5146) / p + (C2968 * C5181) / C2477);
    const double C2786 = -((C2516 * C5149) / p + (C2968 * C5183) / C2477);
    const double C5164 = C3419 * C2475;
    const double C3403 = -((C3419 * C5139) / p + (C3841 * C5177) / C2477);
    const double C3553 =
        C5241 - (C3419 * C5146) / p - C5242 - (C3841 * C5181) / C2477;
    const double C3684 = -((C3419 * C5149) / p + (C3841 * C5183) / C2477);
    const double C5169 = C4303 * C2475;
    const double C4287 = -((C4303 * C5139) / p + (C4724 * C5177) / C2477);
    const double C4436 = -((C4303 * C5146) / p + (C4724 * C5181) / C2477);
    const double C4567 =
        C5241 - (C4303 * C5149) / p - C5242 - (C4724 * C5183) / C2477;
    const double C2497 =
        C5239 - (C2515 * C5139) / p - C5240 - (C2516 * C5177) / C2477;
    const double C2651 = -((C2515 * C5146) / p + (C2516 * C5181) / C2477);
    const double C2785 = -((C2515 * C5149) / p + (C2516 * C5183) / C2477);
    const double C3402 = -((C3418 * C5139) / p + (C3419 * C5177) / C2477);
    const double C3552 =
        C5239 - (C3418 * C5146) / p - C5240 - (C3419 * C5181) / C2477;
    const double C3683 = -((C3418 * C5149) / p + (C3419 * C5183) / C2477);
    const double C4286 = -((C4302 * C5139) / p + (C4303 * C5177) / C2477);
    const double C4435 = -((C4302 * C5146) / p + (C4303 * C5181) / C2477);
    const double C4566 =
        C5239 - (C4302 * C5149) / p - C5240 - (C4303 * C5183) / C2477;
    const double C5201 = C5160 / C2477;
    const double C5209 = C5168 / C2477;
    const double C5214 = C5173 / C2477;
    const double C5192 = C5151 / C2477;
    const double C5207 = C5167 / C2477;
    const double C5213 = C5172 / C2477;
    const double C5179 = C5144 / C2477;
    const double C2905 = -((C2786 * C5146) / p + (C3075 * C5181) / C2477);
    const double C5204 = C5164 / C2477;
    const double C3798 =
        C5262 - (C3684 * C5146) / p - C5263 - (C3945 * C5181) / C2477;
    const double C5210 = C5169 / C2477;
    const double C4681 = -((C4567 * C5146) / p + (C4827 * C5181) / C2477);
    const double C909 =
        C5232 - (C2651 * C5139) / p - C5233 - (C2652 * C5177) / C2477;
    const double C953 =
        C5234 - (C2785 * C5139) / p - C5235 - (C2786 * C5177) / C2477;
    const double C1004 = -((C2785 * C5146) / p + (C2786 * C5181) / C2477);
    const double C1621 = -((C3552 * C5139) / p + (C3553 * C5177) / C2477);
    const double C1663 = -((C3683 * C5139) / p + (C3684 * C5177) / C2477);
    const double C1712 =
        C5234 - (C3683 * C5146) / p - C5235 - (C3684 * C5181) / C2477;
    const double C2329 = -((C4435 * C5139) / p + (C4436 * C5177) / C2477);
    const double C2371 = -((C4566 * C5139) / p + (C4567 * C5177) / C2477);
    const double C2420 = -((C4566 * C5146) / p + (C4567 * C5181) / C2477);
    const double C5250 = C2968 - C5201;
    const double C5264 = C3841 - C5209;
    const double C5269 = C4724 - C5214;
    const double C5238 = C2516 - C5192;
    const double C5261 = C3419 - C5207;
    const double C5268 = C4303 - C5213;
    const double C5219 = C2515 - C5179;
    const double C5258 = C3418 - C5204;
    const double C5265 = C4302 - C5210;
    const double C926 = C5174 * C1001 - (C1004 * C5139) / p -
                        (C2901 * C5140) / C5176 - (C2905 * C5177) / C2477;
    const double C1638 = -((C1712 * C5139) / p + (C3798 * C5177) / C2477);
    const double C2346 = -((C2420 * C5139) / p + (C4681 * C5177) / C2477);
    const double C5277 = C5250 / C5143;
    const double C5287 = C5264 / C5143;
    const double C5291 = C5269 / C5143;
    const double C5272 = C5238 / C5143;
    const double C5286 = C5261 / C5143;
    const double C5290 = C5268 / C5143;
    const double C5270 = C5219 / C5143;
    const double C5284 = C5258 / C5143;
    const double C5288 = C5265 / C5143;
    const double C2951 = C5174 * C2964 - (C2952 * C5139) / p -
                         (C3227 * C5140) / C5176 - (C3231 * C5177) / C2477 +
                         C5277;
    const double C3029 =
        C5277 - ((C3044 * C5146) / p + (C3269 * C5181) / C2477);
    const double C3060 =
        C5277 - ((C3075 * C5149) / p + (C3298 * C5183) / C2477);
    const double C3857 =
        C5287 - ((C3842 * C5139) / p + (C4138 * C5177) / C2477);
    const double C3930 = C5174 * C3910 - (C3915 * C5146) / p -
                         (C4163 * C5140) / C5176 - (C4168 * C5181) / C2477 +
                         C5287;
    const double C3960 =
        C5287 - ((C3945 * C5149) / p + (C4197 * C5183) / C2477);
    const double C4740 =
        C5291 - ((C4725 * C5139) / p + (C5019 * C5177) / C2477);
    const double C4812 =
        C5291 - ((C4797 * C5146) / p + (C5048 * C5181) / C2477);
    const double C4842 = C5174 * C4097 - (C4827 * C5149) / p -
                         (C5072 * C5140) / C5176 - (C5078 * C5183) / C2477 +
                         C5291;
    const double C2481 = C5174 * C2511 - (C2498 * C5139) / p -
                         (C2964 * C5140) / C5176 - (C2952 * C5177) / C2477 +
                         C5272;
    const double C2533 =
        C5272 - ((C2652 * C5146) / p + (C3044 * C5181) / C2477);
    const double C2564 =
        C5272 - ((C2786 * C5149) / p + (C3075 * C5183) / C2477);
    const double C3386 =
        C5286 - ((C3403 * C5139) / p + (C3842 * C5177) / C2477);
    const double C3434 = C5174 * C2886 - (C3553 * C5146) / p -
                         (C3910 * C5140) / C5176 - (C3915 * C5181) / C2477 +
                         C5286;
    const double C3464 =
        C5286 - ((C3684 * C5149) / p + (C3945 * C5183) / C2477);
    const double C4270 =
        C5290 - ((C4287 * C5139) / p + (C4725 * C5177) / C2477);
    const double C4318 =
        C5290 - ((C4436 * C5146) / p + (C4797 * C5181) / C2477);
    const double C4348 =
        C5262 - (C4567 * C5149) / p - C5263 - (C4827 * C5183) / C2477 + C5290;
    const double C662 = C5174 * C2510 - (C2497 * C5139) / p -
                        (C2511 * C5140) / C5176 - (C2498 * C5177) / C2477 +
                        C5270;
    const double C745 = C5270 - ((C2651 * C5146) / p + (C2652 * C5181) / C2477);
    const double C828 = C5270 - ((C2785 * C5149) / p + (C2786 * C5183) / C2477);
    const double C1378 =
        C5284 - ((C3402 * C5139) / p + (C3403 * C5177) / C2477);
    const double C1459 =
        C5232 - (C3552 * C5146) / p - C5233 - (C3553 * C5181) / C2477 + C5284;
    const double C1541 =
        C5284 - ((C3683 * C5149) / p + (C3684 * C5183) / C2477);
    const double C2087 =
        C5288 - ((C4286 * C5139) / p + (C4287 * C5177) / C2477);
    const double C2168 =
        C5288 - ((C4435 * C5146) / p + (C4436 * C5181) / C2477);
    const double C2249 =
        C5234 - (C4566 * C5149) / p - C5235 - (C4567 * C5183) / C2477 + C5288;
    const double C2480 = C5236 - (C2481 * C5139) / p - C5237 -
                         (C2951 * C5177) / C2477 +
                         (C2498 - (C2952 * C2475) / C2477) / p;
    const double C2621 = -((C2481 * C5149) / p + (C2951 * C5183) / C2477);
    const double C5145 = C2533 * C2475;
    const double C2532 =
        C5246 - (C2533 * C5139) / p - C5247 - (C3029 * C5177) / C2477;
    const double C2667 = (C2652 - (C3044 * C2475) / C2477) / p -
                         ((C2533 * C5146) / p + (C3029 * C5181) / C2477);
    const double C2741 = -((C2533 * C5149) / p + (C3029 * C5183) / C2477);
    const double C5148 = C2564 * C2475;
    const double C2563 =
        C5248 - (C2564 * C5139) / p - C5249 - (C3060 * C5177) / C2477;
    const double C2696 = -((C2564 * C5146) / p + (C3060 * C5181) / C2477);
    const double C2815 = (C2786 - (C3075 * C2475) / C2477) / p -
                         ((C2564 * C5149) / p + (C3060 * C5183) / C2477);
    const double C3387 = (C3403 - (C3842 * C2475) / C2477) / p -
                         ((C3386 * C5139) / p + (C3857 * C5177) / C2477);
    const double C3523 = -((C3386 * C5149) / p + (C3857 * C5183) / C2477);
    const double C5165 = C3434 * C2475;
    const double C3435 = -((C3434 * C5139) / p + (C3930 * C5177) / C2477);
    const double C3568 = C5246 - (C3434 * C5146) / p - C5247 -
                         (C3930 * C5181) / C2477 +
                         (C3553 - (C3915 * C2475) / C2477) / p;
    const double C3640 = -((C3434 * C5149) / p + (C3930 * C5183) / C2477);
    const double C5166 = C3464 * C2475;
    const double C3465 = -((C3464 * C5139) / p + (C3960 * C5177) / C2477);
    const double C3597 =
        C5248 - (C3464 * C5146) / p - C5249 - (C3960 * C5181) / C2477;
    const double C3713 = (C3684 - (C3945 * C2475) / C2477) / p -
                         ((C3464 * C5149) / p + (C3960 * C5183) / C2477);
    const double C4271 = (C4287 - (C4725 * C2475) / C2477) / p -
                         ((C4270 * C5139) / p + (C4740 * C5177) / C2477);
    const double C4406 =
        C5236 - (C4270 * C5149) / p - C5237 - (C4740 * C5183) / C2477;
    const double C5170 = C4318 * C2475;
    const double C4319 = -((C4318 * C5139) / p + (C4812 * C5177) / C2477);
    const double C4451 = (C4436 - (C4797 * C2475) / C2477) / p -
                         ((C4318 * C5146) / p + (C4812 * C5181) / C2477);
    const double C4523 =
        C5246 - (C4318 * C5149) / p - C5247 - (C4812 * C5183) / C2477;
    const double C5171 = C4348 * C2475;
    const double C4349 = -((C4348 * C5139) / p + (C4842 * C5177) / C2477);
    const double C4480 = -((C4348 * C5146) / p + (C4842 * C5181) / C2477);
    const double C4596 = C5248 - (C4348 * C5149) / p - C5249 -
                         (C4842 * C5183) / C2477 +
                         (C4567 - (C4827 * C2475) / C2477) / p;
    const double C652 = C5217 - (C662 * C5139) / p - C5218 -
                        (C2481 * C5177) / C2477 +
                        (C2497 - (C2498 * C2475) / C2477) / p;
    const double C672 = -((C662 * C5146) / p + (C2481 * C5181) / C2477);
    const double C690 = -((C662 * C5149) / p + (C2481 * C5183) / C2477);
    const double C735 =
        C5222 - (C745 * C5139) / p - C5223 - (C2533 * C5177) / C2477;
    const double C755 = (C2651 - (C2652 * C2475) / C2477) / p -
                        ((C745 * C5146) / p + (C2533 * C5181) / C2477);
    const double C773 = -((C745 * C5149) / p + (C2533 * C5183) / C2477);
    const double C818 =
        C5226 - (C828 * C5139) / p - C5227 - (C2564 * C5177) / C2477;
    const double C837 = -((C828 * C5146) / p + (C2564 * C5181) / C2477);
    const double C855 = (C2785 - (C2786 * C2475) / C2477) / p -
                        ((C828 * C5149) / p + (C2564 * C5183) / C2477);
    const double C1369 = (C3402 - (C3403 * C2475) / C2477) / p -
                         ((C1378 * C5139) / p + (C3386 * C5177) / C2477);
    const double C1388 =
        C5217 - (C1378 * C5146) / p - C5218 - (C3386 * C5181) / C2477;
    const double C1406 = -((C1378 * C5149) / p + (C3386 * C5183) / C2477);
    const double C1450 = -((C1459 * C5139) / p + (C3434 * C5177) / C2477);
    const double C1470 = C5222 - (C1459 * C5146) / p - C5223 -
                         (C3434 * C5181) / C2477 +
                         (C3552 - (C3553 * C2475) / C2477) / p;
    const double C1488 = -((C1459 * C5149) / p + (C3434 * C5183) / C2477);
    const double C1532 = -((C1541 * C5139) / p + (C3464 * C5177) / C2477);
    const double C1551 =
        C5226 - (C1541 * C5146) / p - C5227 - (C3464 * C5181) / C2477;
    const double C1569 = (C3683 - (C3684 * C2475) / C2477) / p -
                         ((C1541 * C5149) / p + (C3464 * C5183) / C2477);
    const double C2078 = (C4286 - (C4287 * C2475) / C2477) / p -
                         ((C2087 * C5139) / p + (C4270 * C5177) / C2477);
    const double C2097 = -((C2087 * C5146) / p + (C4270 * C5181) / C2477);
    const double C2115 =
        C5217 - (C2087 * C5149) / p - C5218 - (C4270 * C5183) / C2477;
    const double C2159 = -((C2168 * C5139) / p + (C4318 * C5177) / C2477);
    const double C2178 = (C4435 - (C4436 * C2475) / C2477) / p -
                         ((C2168 * C5146) / p + (C4318 * C5181) / C2477);
    const double C2196 =
        C5222 - (C2168 * C5149) / p - C5223 - (C4318 * C5183) / C2477;
    const double C2240 = -((C2249 * C5139) / p + (C4348 * C5177) / C2477);
    const double C2258 = -((C2249 * C5146) / p + (C4348 * C5181) / C2477);
    const double C2277 = C5226 - (C2249 * C5149) / p - C5227 -
                         (C4348 * C5183) / C2477 +
                         (C4566 - (C4567 * C2475) / C2477) / p;
    const double C5180 = C5145 / C2477;
    const double C5182 = C5148 / C2477;
    const double C5205 = C5165 / C2477;
    const double C5206 = C5166 / C2477;
    const double C5211 = C5170 / C2477;
    const double C5212 = C5171 / C2477;
    const double C651 = C5215 - (C652 * C5139) / p - C5216 -
                        (C2480 * C5177) / C2477 +
                        (3 * (C662 - (C2481 * C2475) / C2477)) / C5143;
    const double C707 = -((C652 * C5146) / p + (C2480 * C5181) / C2477);
    const double C716 = -((C652 * C5149) / p + (C2480 * C5183) / C2477);
    const double C725 = -((C690 * C5146) / p + (C2621 * C5181) / C2477);
    const double C790 =
        C5224 - (C755 * C5139) / p - C5225 - (C2667 * C5177) / C2477;
    const double C808 = -((C755 * C5149) / p + (C2667 * C5183) / C2477);
    const double C799 = C5174 * C1719 - (C773 * C5139) / p -
                        (C2737 * C5140) / C5176 - (C2741 * C5177) / C2477;
    const double C872 =
        C5228 - (C837 * C5139) / p - C5229 - (C2696 * C5177) / C2477;
    const double C881 =
        C5230 - (C855 * C5139) / p - C5231 - (C2815 * C5177) / C2477;
    const double C890 = -((C855 * C5146) / p + (C2815 * C5181) / C2477);
    const double C1368 = (3 * (C1378 - (C3386 * C2475) / C2477)) / C5143 -
                         ((C1369 * C5139) / p + (C3387 * C5177) / C2477);
    const double C1423 =
        C5215 - (C1369 * C5146) / p - C5216 - (C3387 * C5181) / C2477;
    const double C1432 = -((C1369 * C5149) / p + (C3387 * C5183) / C2477);
    const double C1441 = C5174 * C941 - (C1406 * C5146) / p -
                         (C3518 * C5140) / C5176 - (C3523 * C5181) / C2477;
    const double C1505 = -((C1470 * C5139) / p + (C3568 * C5177) / C2477);
    const double C1523 = -((C1470 * C5149) / p + (C3568 * C5183) / C2477);
    const double C1514 = -((C1488 * C5139) / p + (C3640 * C5177) / C2477);
    const double C1586 = -((C1551 * C5139) / p + (C3597 * C5177) / C2477);
    const double C1595 = -((C1569 * C5139) / p + (C3713 * C5177) / C2477);
    const double C1604 =
        C5230 - (C1569 * C5146) / p - C5231 - (C3713 * C5181) / C2477;
    const double C2077 = (3 * (C2087 - (C4270 * C2475) / C2477)) / C5143 -
                         ((C2078 * C5139) / p + (C4271 * C5177) / C2477);
    const double C2132 = -((C2078 * C5146) / p + (C4271 * C5181) / C2477);
    const double C2141 =
        C5215 - (C2078 * C5149) / p - C5216 - (C4271 * C5183) / C2477;
    const double C2150 = -((C2115 * C5146) / p + (C4406 * C5181) / C2477);
    const double C2213 = -((C2178 * C5139) / p + (C4451 * C5177) / C2477);
    const double C2231 =
        C5224 - (C2178 * C5149) / p - C5225 - (C4451 * C5183) / C2477;
    const double C2222 = -((C2196 * C5139) / p + (C4523 * C5177) / C2477);
    const double C2294 = -((C2258 * C5139) / p + (C4480 * C5177) / C2477);
    const double C2303 = -((C2277 * C5139) / p + (C4596 * C5177) / C2477);
    const double C2312 = -((C2277 * C5146) / p + (C4596 * C5181) / C2477);
    const double C5220 = C745 - C5180;
    const double C5221 = C828 - C5182;
    const double C5259 = C1459 - C5205;
    const double C5260 = C1541 - C5206;
    const double C5266 = C2168 - C5211;
    const double C5267 = C2249 - C5212;
    const double C671 = C5174 * C732 - (C735 * C5139) / p -
                        (C2528 * C5140) / C5176 - (C2532 * C5177) / C2477 +
                        C5220 / C5143;
    const double C754 =
        (3 * C5220) / C5143 - ((C755 * C5146) / p + (C2667 * C5181) / C2477);
    const double C5271 = C5221 / C5143;
    const double C854 =
        (3 * C5221) / C5143 - ((C855 * C5149) / p + (C2815 * C5183) / C2477);
    const double C1387 =
        C5259 / C5143 - ((C1450 * C5139) / p + (C3435 * C5177) / C2477);
    const double C1469 = C5224 - (C1470 * C5146) / p - C5225 -
                         (C3568 * C5181) / C2477 + (3 * C5259) / C5143;
    const double C5285 = C5260 / C5143;
    const double C1568 =
        (3 * C5260) / C5143 - ((C1569 * C5149) / p + (C3713 * C5183) / C2477);
    const double C2096 =
        C5266 / C5143 - ((C2159 * C5139) / p + (C4319 * C5177) / C2477);
    const double C2177 =
        (3 * C5266) / C5143 - ((C2178 * C5146) / p + (C4451 * C5181) / C2477);
    const double C5289 = C5267 / C5143;
    const double C2276 = C5230 - (C2277 * C5149) / p - C5231 -
                         (C4596 * C5183) / C2477 + (3 * C5267) / C5143;
    const double C689 = C5174 * C815 - (C818 * C5139) / p -
                        (C2559 * C5140) / C5176 - (C2563 * C5177) / C2477 +
                        C5271;
    const double C772 = C5271 - ((C837 * C5146) / p + (C2696 * C5181) / C2477);
    const double C1405 =
        C5285 - ((C1532 * C5139) / p + (C3465 * C5177) / C2477);
    const double C1487 =
        C5228 - (C1551 * C5146) / p - C5229 - (C3597 * C5181) / C2477 + C5285;
    const double C2114 =
        C5289 - ((C2240 * C5139) / p + (C4349 * C5177) / C2477);
    const double C2195 =
        C5289 - ((C2258 * C5146) / p + (C4480 * C5181) / C2477);
    vrx[0] = C651;
    vrx[1] = C652;
    vrx[2] = C662;
    vrx[3] = C671;
    vrx[4] = C672;
    vrx[5] = C689;
    vrx[6] = C690;
    vrx[7] = C707;
    vrx[8] = C716;
    vrx[9] = C725;
    vrx[10] = C735;
    vrx[11] = C745;
    vrx[12] = C754;
    vrx[13] = C755;
    vrx[14] = C772;
    vrx[15] = C773;
    vrx[16] = C790;
    vrx[17] = C799;
    vrx[18] = C808;
    vrx[19] = C818;
    vrx[20] = C828;
    vrx[21] = C837;
    vrx[22] = C854;
    vrx[23] = C855;
    vrx[24] = C872;
    vrx[25] = C881;
    vrx[26] = C890;
    vrx[27] = C909;
    vrx[28] = C926;
    vrx[29] = C953;
    vrx[30] = C1004;
    vry[0] = C1368;
    vry[1] = C1369;
    vry[2] = C1378;
    vry[3] = C1387;
    vry[4] = C1388;
    vry[5] = C1405;
    vry[6] = C1406;
    vry[7] = C1423;
    vry[8] = C1432;
    vry[9] = C1441;
    vry[10] = C1450;
    vry[11] = C1459;
    vry[12] = C1469;
    vry[13] = C1470;
    vry[14] = C1487;
    vry[15] = C1488;
    vry[16] = C1505;
    vry[17] = C1514;
    vry[18] = C1523;
    vry[19] = C1532;
    vry[20] = C1541;
    vry[21] = C1551;
    vry[22] = C1568;
    vry[23] = C1569;
    vry[24] = C1586;
    vry[25] = C1595;
    vry[26] = C1604;
    vry[27] = C1621;
    vry[28] = C1638;
    vry[29] = C1663;
    vry[30] = C1712;
    vrz[0] = C2077;
    vrz[1] = C2078;
    vrz[2] = C2087;
    vrz[3] = C2096;
    vrz[4] = C2097;
    vrz[5] = C2114;
    vrz[6] = C2115;
    vrz[7] = C2132;
    vrz[8] = C2141;
    vrz[9] = C2150;
    vrz[10] = C2159;
    vrz[11] = C2168;
    vrz[12] = C2177;
    vrz[13] = C2178;
    vrz[14] = C2195;
    vrz[15] = C2196;
    vrz[16] = C2213;
    vrz[17] = C2222;
    vrz[18] = C2231;
    vrz[19] = C2240;
    vrz[20] = C2249;
    vrz[21] = C2258;
    vrz[22] = C2276;
    vrz[23] = C2277;
    vrz[24] = C2294;
    vrz[25] = C2303;
    vrz[26] = C2312;
    vrz[27] = C2329;
    vrz[28] = C2346;
    vrz[29] = C2371;
    vrz[30] = C2420;
}
