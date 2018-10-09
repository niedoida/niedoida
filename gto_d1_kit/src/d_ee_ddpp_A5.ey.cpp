/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2121_1_ints(const double ae,
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
                              double* const g)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double muab = ae * be / p;
    const double mucd = ce * de / q;
    const double rAB2 = xAB * xAB + yAB * yAB + zAB * zAB;
    const double rCD2 = xCD * xCD + yCD * yCD + zCD * zCD;
    const double kab = std::exp(-muab * rAB2);
    const double kcd = std::exp(-mucd * rCD2);
    const double C401580 = 2 * q;
    const double C403211 = de * zCD;
    const double C403210 = be * zAB;
    const double C403208 = de * yCD;
    const double C403207 = be * yAB;
    const double C403205 = de * xCD;
    const double C403204 = be * xAB;
    const double C403372 = p + q;
    const double C404225 = p * q;
    const double C404224 = std::pow(Pi, 2.5);
    const double C404220 = zP - zQ;
    const double C404219 = yP - yQ;
    const double C404218 = 2 * p;
    const double C404216 = xP - xQ;
    const double C403336 = C403210 + C403211;
    const double C403335 = C403207 + C403208;
    const double C403334 = C403204 + C403205;
    const double C404226 = std::sqrt(C403372);
    const double C404246 = C404224 * kab;
    const double C404242 = C404220 * q;
    const double C404241 = C404219 * q;
    const double C404239 = C404216 * q;
    const double C404247 = C404225 * C404226;
    const double C404264 = C404246 * kcd;
    const double C377390 = (2. * C404264 * bs[0]) / C404247;
    const double C393482 = (2. * C404264 * bs[1]) / C404247;
    const double C394492 = (2. * C404264 * bs[2]) / C404247;
    const double C395123 = (2. * C404264 * bs[3]) / C404247;
    const double C395464 = (2. * C404264 * bs[4]) / C404247;
    const double C395621 = (2. * C404264 * bs[5]) / C404247;
    const double C395718 = (2. * C404264 * bs[6]) / C404247;
    const double C403309 = C377390 / C401580;
    const double C404217 = C393482 * q;
    const double C375032 =
        -((C377390 * C403204) / p + (C393482 * C404239) / C403372);
    const double C377216 =
        -((C377390 * C403207) / p + (C393482 * C404241) / C403372);
    const double C377331 =
        -((C377390 * C403210) / p + (C393482 * C404242) / C403372);
    const double C404229 = C394492 * q;
    const double C393244 =
        -((C393482 * C403204) / p + (C394492 * C404239) / C403372);
    const double C393406 =
        -((C393482 * C403207) / p + (C394492 * C404241) / C403372);
    const double C393437 =
        -((C393482 * C403210) / p + (C394492 * C404242) / C403372);
    const double C404235 = C395123 * q;
    const double C394475 =
        -((C394492 * C403204) / p + (C395123 * C404239) / C403372);
    const double C397026 =
        -((C394492 * C403207) / p + (C395123 * C404241) / C403372);
    const double C397085 =
        -((C394492 * C403210) / p + (C395123 * C404242) / C403372);
    const double C404237 = C395464 * q;
    const double C395174 =
        -((C395123 * C403204) / p + (C395464 * C404239) / C403372);
    const double C397706 =
        -((C395123 * C403207) / p + (C395464 * C404241) / C403372);
    const double C400208 =
        -((C395123 * C403210) / p + (C395464 * C404242) / C403372);
    const double C404238 = C395621 * q;
    const double C395480 =
        -((C395464 * C403204) / p + (C395621 * C404239) / C403372);
    const double C398019 =
        -((C395464 * C403207) / p + (C395621 * C404241) / C403372);
    const double C400520 =
        -((C395464 * C403210) / p + (C395621 * C404242) / C403372);
    const double C395665 =
        -((C395621 * C403204) / p + (C395718 * C404239) / C403372);
    const double C398176 =
        -((C395621 * C403207) / p + (C395718 * C404241) / C403372);
    const double C400675 =
        -((C395621 * C403210) / p + (C395718 * C404242) / C403372);
    const double C404240 = C404217 / C403372;
    const double C403305 = C375032 / C401580;
    const double C403090 = -(C377390 * C403334 + C375032 * p) / q;
    const double C403304 = C377216 / C401580;
    const double C403130 = -(C377390 * C403335 + C377216 * p) / q;
    const double C403308 = C377331 / C401580;
    const double C403162 = -(C377390 * C403336 + C377331 * p) / q;
    const double C404250 = C404229 / C403372;
    const double C375448 =
        -((C377216 * C403204) / p + (C393406 * C404239) / C403372);
    const double C375674 =
        -((C377331 * C403204) / p + (C393437 * C404239) / C403372);
    const double C377273 =
        -((C377331 * C403207) / p + (C393437 * C404241) / C403372);
    const double C404256 = C404235 / C403372;
    const double C393421 =
        -((C393437 * C403207) / p + (C397085 * C404241) / C403372);
    const double C404258 = C404237 / C403372;
    const double C404259 = C404238 / C403372;
    const double C404260 = C377390 - C404240;
    const double C403333 = C403162 / C401580;
    const double C404267 = C393482 - C404250;
    const double C403317 = C375448 * p;
    const double C403273 = C375448 / q;
    const double C403241 = C375448 / C401580;
    const double C403324 = C375674 * p;
    const double C403279 = C375674 / q;
    const double C403257 = C375674 / C401580;
    const double C403329 = C377273 * p;
    const double C403292 = C377273 / q;
    const double C403264 = C377273 / C401580;
    const double C404273 = C394492 - C404256;
    const double C377258 =
        -((C377273 * C403204) / p + (C393421 * C404239) / C403372);
    const double C404275 = C395123 - C404258;
    const double C404276 = C395464 - C404259;
    const double C404277 = C404260 / C404218;
    const double C404282 = C404267 / C404218;
    const double C375912 = -(C377216 * C403334 + C403317) / q;
    const double C382134 = -(C375032 * C403335 + C403317) / q;
    const double C376659 = -(C377331 * C403334 + C403324) / q;
    const double C382401 = -(C375032 * C403336 + C403324) / q;
    const double C383790 = -(C377331 * C403335 + C403329) / q;
    const double C384273 = -(C377216 * C403336 + C403329) / q;
    const double C404286 = C404273 / C404218;
    const double C403313 = C377258 / q;
    const double C403307 = C377258 / C401580;
    const double C403306 = C377258 * p;
    const double C404287 = C404275 / C404218;
    const double C404288 = C404276 / C404218;
    const double C375002 =
        C404277 - ((C375032 * C403204) / p + (C393244 * C404239) / C403372);
    const double C375865 =
        C404277 - ((C377216 * C403207) / p + (C393406 * C404241) / C403372);
    const double C376595 =
        C404277 - ((C377331 * C403210) / p + (C393437 * C404242) / C403372);
    const double C393224 =
        C404282 - ((C393244 * C403204) / p + (C394475 * C404239) / C403372);
    const double C393288 =
        C404282 - ((C393406 * C403207) / p + (C397026 * C404241) / C403372);
    const double C393347 =
        C404282 - ((C393437 * C403210) / p + (C397085 * C404242) / C403372);
    const double C403254 = C382401 / C401580;
    const double C403262 = C383790 / C401580;
    const double C403253 = C384273 / C401580;
    const double C394586 =
        C404286 - ((C394475 * C403204) / p + (C395174 * C404239) / C403372);
    const double C394632 =
        C404286 - ((C397026 * C403207) / p + (C397706 * C404241) / C403372);
    const double C394662 =
        C404286 - ((C397085 * C403210) / p + (C400208 * C404242) / C403372);
    const double C374229 = -(C375448 * C403336 + C403306) / q;
    const double C374666 = -(C375674 * C403335 + C403306) / q;
    const double C374740 = -(C377273 * C403334 + C403306) / q;
    const double C395190 =
        C404287 - ((C395174 * C403204) / p + (C395480 * C404239) / C403372);
    const double C395251 =
        C404287 - ((C400208 * C403210) / p + (C400520 * C404242) / C403372);
    const double C395267 =
        C404287 - ((C397706 * C403207) / p + (C398019 * C404241) / C403372);
    const double C395554 =
        C404288 - ((C395480 * C403204) / p + (C395665 * C404239) / C403372);
    const double C398065 =
        C404288 - ((C398019 * C403207) / p + (C398176 * C404241) / C403372);
    const double C398096 =
        C404288 - ((C400520 * C403210) / p + (C400675 * C404242) / C403372);
    const double C403206 = C375002 / C401580;
    const double C374985 =
        C403309 - (C375032 * C403334) / q - (C375002 * p) / q;
    const double C403221 = C375865 / C401580;
    const double C383062 =
        C403309 - (C377216 * C403335) / q - (C375865 * p) / q;
    const double C403231 = C376595 / C401580;
    const double C384387 =
        C403309 - (C377331 * C403336) / q - (C376595 * p) / q;
    const double C374954 =
        (C375032 - (C393244 * q) / C403372) / p -
        ((C375002 * C403204) / p + (C393224 * C404239) / C403372);
    const double C375433 =
        -((C375002 * C403207) / p + (C393224 * C404241) / C403372);
    const double C375659 =
        -((C375002 * C403210) / p + (C393224 * C404242) / C403372);
    const double C404221 = C393288 * q;
    const double C375850 =
        -((C375865 * C403204) / p + (C393288 * C404239) / C403372);
    const double C376220 =
        (C377216 - (C393406 * q) / C403372) / p -
        ((C375865 * C403207) / p + (C393288 * C404241) / C403372);
    const double C376404 =
        -((C375865 * C403210) / p + (C393288 * C404242) / C403372);
    const double C404222 = C393347 * q;
    const double C376580 =
        -((C376595 * C403204) / p + (C393347 * C404239) / C403372);
    const double C376947 =
        -((C376595 * C403207) / p + (C393347 * C404241) / C403372);
    const double C377067 =
        (C377331 - (C393437 * q) / C403372) / p -
        ((C376595 * C403210) / p + (C393347 * C404242) / C403372);
    const double C393466 =
        (C393244 - (C394475 * q) / C403372) / p -
        ((C393224 * C403204) / p + (C394586 * C404239) / C403372);
    const double C396184 =
        -((C393224 * C403210) / p + (C394586 * C404242) / C403372);
    const double C404230 = C394632 * q;
    const double C393563 =
        -((C393288 * C403204) / p + (C394632 * C404239) / C403372);
    const double C393759 =
        (C393406 - (C397026 * q) / C403372) / p -
        ((C393288 * C403207) / p + (C394632 * C404241) / C403372);
    const double C393774 =
        -((C393288 * C403210) / p + (C394632 * C404242) / C403372);
    const double C404231 = C394662 * q;
    const double C393594 =
        -((C393347 * C403204) / p + (C394662 * C404239) / C403372);
    const double C393938 =
        -((C393347 * C403207) / p + (C394662 * C404241) / C403372);
    const double C393953 =
        (C393437 - (C397085 * q) / C403372) / p -
        ((C393347 * C403210) / p + (C394662 * C404242) / C403372);
    const double C403251 = C374229 / q;
    const double C401284 = -(C382401 * C403335 + C374229 * p) / q;
    const double C394602 =
        (C394475 - (C395174 * q) / C403372) / p -
        ((C394586 * C403204) / p + (C395190 * C404239) / C403372);
    const double C404236 = C395251 * q;
    const double C394722 =
        -((C394662 * C403204) / p + (C395251 * C404239) / C403372);
    const double C394754 =
        (C397085 - (C400208 * q) / C403372) / p -
        ((C394662 * C403210) / p + (C395251 * C404242) / C403372);
    const double C397318 =
        -((C394662 * C403207) / p + (C395251 * C404241) / C403372);
    const double C394692 =
        (C397026 - (C397706 * q) / C403372) / p -
        ((C394632 * C403207) / p + (C395267 * C404241) / C403372);
    const double C394738 =
        -((C394632 * C403204) / p + (C395267 * C404239) / C403372);
    const double C395310 =
        (C395174 - (C395480 * q) / C403372) / p -
        ((C395190 * C403204) / p + (C395554 * C404239) / C403372);
    const double C395326 =
        (C397706 - (C398019 * q) / C403372) / p -
        ((C395267 * C403207) / p + (C398065 * C404241) / C403372);
    const double C395370 =
        (C400208 - (C400520 * q) / C403372) / p -
        ((C395251 * C403210) / p + (C398096 * C404242) / C403372);
    const double C397896 =
        -((C395251 * C403207) / p + (C398096 * C404241) / C403372);
    const double C403263 = C384387 / C401580;
    const double C403267 = C374954 / C401580;
    const double C371153 =
        C375032 / q - (C375002 * C403334) / q - (C374954 * p) / q;
    const double C403272 = C375433 / C401580;
    const double C403269 = C375433 * p;
    const double C403278 = C375659 / C401580;
    const double C403271 = C375659 * p;
    const double C404243 = C404221 / C403372;
    const double C403282 = C375850 * p;
    const double C403281 = C375850 / C401580;
    const double C403287 = C376220 / C401580;
    const double C372466 =
        C377216 / q - (C375865 * C403335) / q - (C376220 * p) / q;
    const double C403290 = C376404 / C401580;
    const double C403286 = C376404 * p;
    const double C404244 = C404222 / C403372;
    const double C403295 = C376580 * p;
    const double C403294 = C376580 / C401580;
    const double C403300 = C376947 / C401580;
    const double C403297 = C376947 * p;
    const double C403303 = C377067 / C401580;
    const double C373500 =
        C377331 / q - (C376595 * C403336) / q - (C377067 * p) / q;
    const double C404223 = C393466 * q;
    const double C375017 =
        (3 * (C375002 - (C393224 * q) / C403372)) / C404218 -
        ((C374954 * C403204) / p + (C393466 * C404239) / C403372);
    const double C375464 =
        -((C374954 * C403207) / p + (C393466 * C404241) / C403372);
    const double C375690 =
        -((C374954 * C403210) / p + (C393466 * C404242) / C403372);
    const double C377288 =
        -((C375659 * C403207) / p + (C396184 * C404241) / C403372);
    const double C404251 = C404230 / C403372;
    const double C404227 = C393759 * q;
    const double C376235 =
        -((C376220 * C403204) / p + (C393759 * C404239) / C403372);
    const double C377838 =
        -((C376220 * C403210) / p + (C393759 * C404242) / C403372);
    const double C376419 =
        -((C376404 * C403204) / p + (C393774 * C404239) / C403372);
    const double C404252 = C404231 / C403372;
    const double C376962 =
        -((C376947 * C403204) / p + (C393938 * C404239) / C403372);
    const double C404228 = C393953 * q;
    const double C377082 =
        -((C377067 * C403204) / p + (C393953 * C404239) / C403372);
    const double C378103 =
        -((C377067 * C403207) / p + (C393953 * C404241) / C403372);
    const double C404232 = C394602 * q;
    const double C393497 =
        (3 * (C393224 - (C394586 * q) / C403372)) / C404218 -
        ((C393466 * C403204) / p + (C394602 * C404239) / C403372);
    const double C396080 =
        -((C393466 * C403207) / p + (C394602 * C404241) / C403372);
    const double C396169 =
        -((C393466 * C403210) / p + (C394602 * C404242) / C403372);
    const double C404257 = C404236 / C403372;
    const double C404234 = C394754 * q;
    const double C393742 =
        -((C393953 * C403204) / p + (C394754 * C404239) / C403372);
    const double C393998 =
        -((C393953 * C403207) / p + (C394754 * C404241) / C403372);
    const double C404233 = C394692 * q;
    const double C393681 =
        -((C393759 * C403204) / p + (C394692 * C404239) / C403372);
    const double C393851 =
        -((C393759 * C403210) / p + (C394692 * C404242) / C403372);
    const double C394883 =
        (3 * (C394586 - (C395190 * q) / C403372)) / C404218 -
        ((C394602 * C403204) / p + (C395310 * C404239) / C403372);
    const double C397434 =
        -((C394602 * C403207) / p + (C395310 * C404241) / C403372);
    const double C399950 =
        -((C394602 * C403210) / p + (C395310 * C404242) / C403372);
    const double C394913 =
        -((C394692 * C403204) / p + (C395326 * C404239) / C403372);
    const double C394989 =
        (3 * (C394632 - (C395267 * q) / C403372)) / C404218 -
        ((C394692 * C403207) / p + (C395326 * C404241) / C403372);
    const double C400054 =
        -((C394692 * C403210) / p + (C395326 * C404242) / C403372);
    const double C394973 =
        -((C394754 * C403204) / p + (C395370 * C404239) / C403372);
    const double C397582 =
        -((C394754 * C403207) / p + (C395370 * C404241) / C403372);
    const double C401177 = C403090 / C401580 - (C374985 * C403334) / q +
                           C403305 - (C371153 * p) / q;
    const double C371486 = -(C375002 * C403335 + C403269) / q;
    const double C374041 = C403304 - (C375448 * C403334) / q - C403269 / q;
    const double C371549 = -(C375002 * C403336 + C403271) / q;
    const double C374509 = C403308 - (C375674 * C403334) / q - C403271 / q;
    const double C404261 = C375865 - C404243;
    const double C372135 = -(C375865 * C403334 + C403282) / q;
    const double C374199 = C403305 - (C375448 * C403335) / q - C403282 / q;
    const double C401358 = C403130 / C401580 - (C383062 * C403335) / q +
                           C403304 - (C372466 * p) / q;
    const double C372526 = -(C375865 * C403336 + C403286) / q;
    const double C374896 = C403308 - (C377273 * C403335) / q - C403286 / q;
    const double C404262 = C376595 - C404244;
    const double C373108 = -(C376595 * C403334 + C403295) / q;
    const double C374697 = C403305 - (C375674 * C403336) / q - C403295 / q;
    const double C373440 = -(C376595 * C403335 + C403297) / q;
    const double C374925 = C403304 - (C377273 * C403336) / q - C403297 / q;
    const double C401530 =
        C403333 - (C384387 * C403336) / q + C403308 - (C373500 * p) / q;
    const double C404245 = C404223 / C403372;
    const double C371135 =
        (3 * C375002) / C401580 - (C374954 * C403334) / q - (C375017 * p) / q;
    const double C403268 = C375464 * p;
    const double C403270 = C375690 * p;
    const double C403277 = C377288 * p;
    const double C404268 = C393288 - C404251;
    const double C404248 = C404227 / C403372;
    const double C403284 = C376235 * p;
    const double C403289 = C377838 * p;
    const double C403285 = C376419 * p;
    const double C404269 = C393347 - C404252;
    const double C403296 = C376962 * p;
    const double C404249 = C404228 / C403372;
    const double C403299 = C377082 * p;
    const double C403302 = C378103 * p;
    const double C404253 = C404232 / C403372;
    const double C377405 =
        -((C375017 * C403207) / p + (C393497 * C404241) / C403372);
    const double C377421 =
        -((C375017 * C403210) / p + (C393497 * C404242) / C403372);
    const double C377557 =
        -((C375690 * C403207) / p + (C396169 * C404241) / C403372);
    const double C404274 = C394662 - C404257;
    const double C404255 = C404234 / C403372;
    const double C378118 =
        -((C378103 * C403204) / p + (C393998 * C404239) / C403372);
    const double C404254 = C404233 / C403372;
    const double C377853 =
        -((C377838 * C403204) / p + (C393851 * C404239) / C403372);
    const double C396621 =
        -((C393497 * C403207) / p + (C394883 * C404241) / C403372);
    const double C396713 =
        -((C393497 * C403210) / p + (C394883 * C404242) / C403372);
    const double C403242 = C401177 / C401580;
    const double C403240 = C374041 / q;
    const double C401325 =
        C403304 - (C375912 * C403334) / q - (C374041 * p) / q;
    const double C403276 = C371549 / C401580;
    const double C403256 = C374509 / q;
    const double C401464 =
        C403308 - (C376659 * C403334) / q - (C374509 * p) / q;
    const double C375880 = C404261 / C404218 - ((C375850 * C403204) / p +
                                                (C393563 * C404239) / C403372);
    const double C377808 =
        (3 * C404261) / C404218 -
        ((C376220 * C403207) / p + (C393759 * C404241) / C403372);
    const double C403246 = C374199 / q;
    const double C401210 =
        C403305 - (C382134 * C403335) / q - (C374199 * p) / q;
    const double C403244 = C401358 / C401580;
    const double C401676 =
        C403333 - (C384273 * C403335) / q - (C372526 * p) / q;
    const double C403265 = C374896 / q;
    const double C401497 =
        C403308 - (C383790 * C403335) / q - (C374896 * p) / q;
    const double C404278 = C404262 / C404218;
    const double C378162 =
        (3 * C404262) / C404218 -
        ((C377067 * C403210) / p + (C393953 * C404242) / C403372);
    const double C403261 = C374697 / q;
    const double C401243 =
        C403305 - (C382401 * C403336) / q - (C374697 * p) / q;
    const double C403332 = C374925 * p;
    const double C403266 = C374925 / q;
    const double C403260 = C401530 / C401580;
    const double C404263 = C374954 - C404245;
    const double C358211 =
        C374985 / q - (C371153 * C403334) / q + C403206 - (C371135 * p) / q;
    const double C371470 = -(C374954 * C403335 + C403268) / q;
    const double C371611 = C403273 - (C375433 * C403334) / q - C403268 / q;
    const double C371533 = -(C374954 * C403336 + C403270) / q;
    const double C371858 = C403279 - (C375659 * C403334) / q - C403270 / q;
    const double C371811 = -(C375433 * C403336 + C403277) / q;
    const double C372024 = -(C375659 * C403335 + C403277) / q;
    const double C374274 = C403264 - (C377258 * C403334) / q - C403277 / q;
    const double C393790 =
        (3 * C404268) / C404218 -
        ((C393759 * C403207) / p + (C394692 * C404241) / C403372);
    const double C398737 = C404268 / C404218 - ((C393563 * C403204) / p +
                                                (C394738 * C404239) / C403372);
    const double C404265 = C376220 - C404248;
    const double C372451 = C403273 - (C375850 * C403335) / q - C403284 / q;
    const double C372588 = -(C376220 * C403334 + C403284) / q;
    const double C372786 = -(C376220 * C403336 + C403289) / q;
    const double C372998 = C403292 - (C376404 * C403335) / q - C403289 / q;
    const double C372511 = -(C375850 * C403336 + C403285) / q;
    const double C372832 = -(C376404 * C403334 + C403285) / q;
    const double C374435 = C403257 - (C377258 * C403335) / q - C403285 / q;
    const double C404283 = C404269 / C404218;
    const double C393968 =
        (3 * C404269) / C404218 -
        ((C393953 * C403210) / p + (C394754 * C404242) / C403372);
    const double C373424 = -(C376580 * C403335 + C403296) / q;
    const double C373561 = -(C376947 * C403334 + C403296) / q;
    const double C374466 = C403241 - (C377258 * C403336) / q - C403296 / q;
    const double C404266 = C377067 - C404249;
    const double C373485 = C403279 - (C376580 * C403336) / q - C403299 / q;
    const double C373801 = -(C377067 * C403334 + C403299) / q;
    const double C373756 = C403292 - (C376947 * C403336) / q - C403302 / q;
    const double C373966 = -(C377067 * C403335 + C403302) / q;
    const double C404270 = C393466 - C404253;
    const double C403310 = C377405 * p;
    const double C403311 = C377421 * p;
    const double C403314 = C377557 * p;
    const double C395005 = C404274 / C404218 - ((C397318 * C403207) / p +
                                                (C397896 * C404241) / C403372);
    const double C395021 =
        (3 * C404274) / C404218 -
        ((C394754 * C403210) / p + (C395370 * C404242) / C403372);
    const double C404272 = C393953 - C404255;
    const double C403325 = C378118 * p;
    const double C404271 = C393759 - C404254;
    const double C403320 = C377853 * p;
    const double C403239 = C401325 / C401580;
    const double C403255 = C401464 / C401580;
    const double C403275 = C375880 * p;
    const double C372755 =
        (3 * C375865) / C401580 - (C376220 * C403335) / q - (C377808 * p) / q;
    const double C403245 = C401210 / C401580;
    const double C403258 = C401497 / C401580;
    const double C376610 =
        C404278 - ((C376580 * C403204) / p + (C393594 * C404239) / C403372);
    const double C377942 =
        C404278 - ((C376947 * C403207) / p + (C393938 * C404241) / C403372);
    const double C373998 =
        (3 * C376595) / C401580 - (C377067 * C403336) / q - (C378162 * p) / q;
    const double C403250 = C401243 / C401580;
    const double C401391 = C403304 - (C384273 * C403336) / q - C403332 / q;
    const double C401805 = -(C384387 * C403335 + C403332) / q;
    const double C404279 = C404263 / C404218;
    const double C377374 = (2 * C404263) / p - ((C375017 * C403204) / p +
                                                (C393497 * C404239) / C403372);
    const double C358332 =
        C382134 / q - (C371486 * C403334) / q - (C371470 * p) / q;
    const double C359602 = C375912 / C401580 - (C374041 * C403334) / q +
                           C403241 - (C371611 * p) / q;
    const double C358354 =
        C382401 / q - (C371549 * C403334) / q - (C371533 * p) / q;
    const double C360034 = C376659 / C401580 - (C374509 * C403334) / q +
                           C403257 - (C371858 * p) / q;
    const double C403219 = C371811 * p;
    const double C360144 =
        C403262 - (C374666 * C403334) / q - (C372024 * p) / q;
    const double C360450 =
        C403264 - (C374740 * C403334) / q - (C374274 * p) / q;
    const double C377823 =
        -((C377808 * C403204) / p + (C393790 * C404239) / C403372);
    const double C384899 =
        -((C377808 * C403210) / p + (C393790 * C404242) / C403372);
    const double C394205 =
        -((C393790 * C403204) / p + (C394989 * C404239) / C403372);
    const double C394297 =
        -((C393790 * C403210) / p + (C394989 * C404242) / C403372);
    const double C377705 =
        -((C375880 * C403210) / p + (C398737 * C404242) / C403372);
    const double C404280 = C404265 / C404218;
    const double C384883 = (2 * C404265) / p - ((C377808 * C403207) / p +
                                                (C393790 * C404241) / C403372);
    const double C403228 = C372451 * p;
    const double C358829 =
        C384273 / q - (C372526 * C403335) / q - (C372786 * p) / q;
    const double C360490 =
        C403262 - (C374896 * C403335) / q + C403264 - (C372998 * p) / q;
    const double C403229 = C372511 * p;
    const double C403259 = C374435 * p;
    const double C393820 =
        C404283 - ((C393938 * C403207) / p + (C397318 * C404241) / C403372);
    const double C396230 =
        C404283 - ((C393594 * C403204) / p + (C394722 * C404239) / C403372);
    const double C378177 =
        -((C378162 * C403204) / p + (C393968 * C404239) / C403372);
    const double C385217 =
        -((C378162 * C403207) / p + (C393968 * C404241) / C403372);
    const double C359260 = -(C373440 * C403334 + C373424 * p) / q;
    const double C403249 = C374466 * p;
    const double C404281 = C404266 / C404218;
    const double C392213 = (2 * C404266) / p - ((C378162 * C403210) / p +
                                                (C393968 * C404242) / C403372);
    const double C403237 = C373485 * p;
    const double C403238 = C373756 * p;
    const double C404289 = C404270 / C404218;
    const double C394055 = (2 * C404270) / p - ((C393497 * C403204) / p +
                                                (C394883 * C404239) / C403372);
    const double C375048 =
        (3 * C375433) / C401580 - (C375464 * C403334) / q - C403310 / q;
    const double C382118 = -(C375017 * C403335 + C403310) / q;
    const double C375065 =
        (3 * C375659) / C401580 - (C375690 * C403334) / q - C403311 / q;
    const double C382385 = -(C375017 * C403336 + C403311) / q;
    const double C375495 = C403313 - (C377288 * C403334) / q - C403314 / q;
    const double C382223 = -(C375690 * C403335 + C403314) / q;
    const double C382654 = -(C375464 * C403336 + C403314) / q;
    const double C394265 =
        -((C393968 * C403204) / p + (C395021 * C404239) / C403372);
    const double C394416 =
        -((C393968 * C403207) / p + (C395021 * C404241) / C403372);
    const double C404285 = C404272 / C404218;
    const double C394431 = (2 * C404272) / p - ((C393968 * C403210) / p +
                                                (C395021 * C404242) / C403372);
    const double C376977 = -(C378103 * C403334 + C403325) / q;
    const double C383774 = -(C377082 * C403335 + C403325) / q;
    const double C384083 = C403313 - (C376962 * C403336) / q - C403325 / q;
    const double C404284 = C404271 / C404218;
    const double C394281 = (2 * C404271) / p - ((C393790 * C403207) / p +
                                                (C394989 * C404241) / C403372);
    const double C376267 = -(C377838 * C403334 + C403320) / q;
    const double C383078 = C403313 - (C376419 * C403335) / q - C403320 / q;
    const double C383408 = -(C376235 * C403336 + C403320) / q;
    const double C403346 = C403275 / q;
    const double C358719 =
        C383062 / q - (C372466 * C403335) / q + C403221 - (C372755 * p) / q;
    const double C403280 = C376610 * p;
    const double C403293 = C377942 * p;
    const double C359227 =
        C384387 / q - (C373500 * C403336) / q + C403231 - (C373998 * p) / q;
    const double C403248 = C401391 / C401580;
    const double C377542 =
        C404279 - ((C375464 * C403207) / p + (C396080 * C404241) / C403372);
    const double C377646 =
        C404279 - ((C375690 * C403210) / p + (C396169 * C404242) / C403372);
    const double C374970 =
        (2 * C374954) / q - (C375017 * C403334) / q - (C377374 * p) / q;
    const double C358365 = -(C371549 * C403335 + C403219) / q;
    const double C359732 = C403253 - (C374229 * C403334) / q - C403219 / q;
    const double C403319 = C377823 * p;
    const double C403327 = C384899 * p;
    const double C403318 = C377705 * p;
    const double C377690 =
        C404280 - ((C376235 * C403204) / p + (C393681 * C404239) / C403372);
    const double C384987 =
        C404280 - ((C377838 * C403210) / p + (C393851 * C404242) / C403372);
    const double C383331 =
        (2 * C376220) / q - (C377808 * C403335) / q - (C384883 * p) / q;
    const double C358796 = -(C372466 * C403334 + C403228) / q;
    const double C359642 =
        C382134 / C401580 - (C374199 * C403335) / q + C403241 - C403228 / q;
    const double C358818 = -(C372526 * C403334 + C403229) / q;
    const double C359742 = C403254 - (C374229 * C403335) / q - C403229 / q;
    const double C360074 = C403257 - (C374666 * C403335) / q - C403259 / q;
    const double C360560 = -(C374896 * C403334 + C403259) / q;
    const double C377957 =
        -((C377942 * C403204) / p + (C393820 * C404239) / C403372);
    const double C394235 =
        -((C393820 * C403204) / p + (C395005 * C404239) / C403372);
    const double C378001 =
        -((C376610 * C403207) / p + (C396230 * C404241) / C403372);
    const double C403326 = C378177 * p;
    const double C403331 = C385217 * p;
    const double C359682 = C403241 - (C374229 * C403336) / q - C403249 / q;
    const double C360174 = -(C374697 * C403335 + C403249) / q;
    const double C360580 = -(C374925 * C403334 + C403249) / q;
    const double C378016 =
        C404281 - ((C377082 * C403204) / p + (C393742 * C404239) / C403372);
    const double C385145 =
        C404281 - ((C378103 * C403207) / p + (C393998 * C404241) / C403372);
    const double C391191 =
        (2 * C377067) / q - (C378162 * C403336) / q - (C392213 * p) / q;
    const double C359282 = -(C373500 * C403334 + C403237) / q;
    const double C360114 =
        C403254 - (C374697 * C403336) / q + C403257 - C403237 / q;
    const double C359293 = -(C373500 * C403335 + C403238) / q;
    const double C360530 =
        C403253 - (C374925 * C403336) / q + C403264 - C403238 / q;
    const double C396682 =
        C404289 - ((C396169 * C403210) / p + (C399950 * C404242) / C403372);
    const double C399143 =
        C404289 - ((C396080 * C403207) / p + (C397434 * C404241) / C403372);
    const double C371595 =
        C403240 - (C371611 * C403334) / q + C403272 - (C375048 * p) / q;
    const double C371842 =
        C403256 - (C371858 * C403334) / q + C403278 - (C375065 * p) / q;
    const double C374258 = C374740 / C401580 - (C374274 * C403334) / q +
                           C403307 - (C375495 * p) / q;
    const double C371502 = -(C371533 * C403335 + C382654 * p) / q;
    const double C394175 =
        C404285 - ((C393742 * C403204) / p + (C394973 * C404239) / C403372);
    const double C394329 =
        C404285 - ((C393998 * C403207) / p + (C397582 * C404241) / C403372);
    const double C403298 = C384083 * p;
    const double C394114 =
        C404284 - ((C393681 * C403204) / p + (C394913 * C404239) / C403372);
    const double C394313 =
        C404284 - ((C393851 * C403210) / p + (C400054 * C404242) / C403372);
    const double C374320 = C374666 / C401580 - (C374435 * C403335) / q +
                           C403307 - (C383078 * p) / q;
    const double C372481 =
        C403251 - (C372511 * C403335) / q - (C383408 * p) / q;
    const double C371779 = C403206 - (C375433 * C403335) / q - C403346;
    const double C372118 = C403221 - (C375850 * C403334) / q - C403346;
    const double C403347 = C403280 / q;
    const double C403351 = C403293 / q;
    const double C403312 = C377542 * p;
    const double C403315 = C377646 * p;
    const double C371102 = (3 * C371153) / C401580 - (C371135 * C403334) / q +
                           C403267 - (C374970 * p) / q;
    const double C376250 = -(C377808 * C403334 + C403319) / q;
    const double C383047 =
        (3 * C375850) / C401580 - (C376235 * C403335) / q - C403319 / q;
    const double C383347 =
        (3 * C376404) / C401580 - (C377838 * C403335) / q - C403327 / q;
    const double C390373 = -(C377808 * C403336 + C403327) / q;
    const double C403355 = C403318 / q;
    const double C383196 = -(C375880 * C403336 + C403318) / q;
    const double C403316 = C377690 * p;
    const double C403328 = C384987 * p;
    const double C372635 = (3 * C372466) / C401580 - (C372755 * C403335) / q +
                           C403287 - (C383331 * p) / q;
    const double C403321 = C377957 * p;
    const double C403322 = C378001 * p;
    const double C377097 = -(C378162 * C403334 + C403326) / q;
    const double C384231 =
        (3 * C376580) / C401580 - (C377082 * C403336) / q - C403326 / q;
    const double C384170 = -(C378162 * C403335 + C403331) / q;
    const double C391058 =
        (3 * C376947) / C401580 - (C378103 * C403336) / q - C403331 / q;
    const double C403323 = C378016 * p;
    const double C403330 = C385145 * p;
    const double C373907 = (3 * C373500) / C401580 - (C373998 * C403336) / q +
                           C403303 - (C391191 * p) / q;
    const double C403209 = C371595 * p;
    const double C403212 = C371842 * p;
    const double C403243 = C374258 * p;
    const double C358343 =
        C401284 / q - (C358365 * C403334) / q - (C371502 * p) / q;
    const double C373455 = -(C373485 * C403335 + C403298) / q;
    const double C374378 =
        C374229 / C401580 - (C374466 * C403336) / q + C403307 - C403298 / q;
    const double C403247 = C374320 * p;
    const double C358807 = -(C358829 * C403334 + C372481 * p) / q;
    const double C403213 = C371779 * p;
    const double C358675 =
        C403221 - (C372135 * C403334) / q - (C372118 * p) / q;
    const double C372057 = C403206 - (C375659 * C403336) / q - C403347;
    const double C373091 = C403231 - (C376580 * C403334) / q - C403347;
    const double C373030 = C403221 - (C376404 * C403336) / q - C403351;
    const double C373725 = C403231 - (C376947 * C403335) / q - C403351;
    const double C403352 = C403312 / q;
    const double C403353 = C403315 / q;
    const double C358200 =
        C401177 / q - (C358211 * C403334) / q + C371153 / q - (C371102 * p) / q;
    const double C372210 =
        C403246 - (C372451 * C403335) / q + C403281 - (C383047 * p) / q;
    const double C372878 =
        C403265 - (C372998 * C403335) / q + C403290 - (C383347 * p) / q;
    const double C372770 =
        (3 * C372526) / C401580 - (C372786 * C403335) / q - (C390373 * p) / q;
    const double C375927 = C403290 - (C376419 * C403334) / q - C403355;
    const double C382579 = C403278 - (C377288 * C403335) / q - C403355;
    const double C371795 =
        C403276 - (C371811 * C403335) / q - (C383196 * p) / q;
    const double C403354 = C403316 / q;
    const double C403358 = C403328 / q;
    const double C358730 =
        C401358 / q - (C358719 * C403335) / q + C372466 / q - (C372635 * p) / q;
    const double C403359 = C403321 / q;
    const double C376434 = -(C377942 * C403334 + C403321) / q;
    const double C403356 = C403322 / q;
    const double C382785 = -(C376610 * C403335 + C403322) / q;
    const double C373303 =
        C403261 - (C373485 * C403336) / q + C403294 - (C384231 * p) / q;
    const double C403301 = C391058 * p;
    const double C403357 = C403323 / q;
    const double C403360 = C403330 / q;
    const double C359249 =
        C401530 / q - (C359227 * C403336) / q + C373500 / q - (C373907 * p) / q;
    const double C358222 = -(C358211 * C403335 + C403209) / q;
    const double C359592 =
        C403239 - (C359602 * C403334) / q + C403240 - C403209 / q;
    const double C358233 = -(C358211 * C403336 + C403212) / q;
    const double C360024 =
        C403255 - (C360034 * C403334) / q + C403256 - C403212 / q;
    const double C359622 = -(C359602 * C403336 + C403243) / q;
    const double C360044 = -(C360034 * C403335 + C403243) / q;
    const double C360440 = C374740 / q - (C360450 * C403334) / q - C403243 / q;
    const double C359271 = -(C359293 * C403334 + C373455 * p) / q;
    const double C403252 = C374378 * p;
    const double C359662 = -(C359642 * C403336 + C403247) / q;
    const double C360084 = C374666 / q - (C360074 * C403335) / q - C403247 / q;
    const double C360480 = -(C360490 * C403334 + C403247) / q;
    const double C403337 = C403213 / q;
    const double C403216 = C372057 * p;
    const double C359139 =
        C403231 - (C373108 * C403334) / q - (C373091 * p) / q;
    const double C403226 = C373030 * p;
    const double C359183 =
        C403231 - (C373440 * C403335) / q - (C373725 * p) / q;
    const double C375479 = C375850 / q - (C375880 * C403334) / q - C403352;
    const double C382207 = C403267 - (C375464 * C403335) / q - C403352;
    const double C375705 = C376580 / q - (C376610 * C403334) / q - C403353;
    const double C382859 = C403267 - (C375690 * C403336) / q - C403353;
    const double C403223 = C372210 * p;
    const double C403224 = C372878 * p;
    const double C372816 =
        C403290 - (C372832 * C403334) / q - (C375927 * p) / q;
    const double C371905 =
        C403278 - (C372024 * C403335) / q - (C382579 * p) / q;
    const double C359722 =
        C401676 / C401580 - (C359742 * C403334) / q - (C371795 * p) / q;
    const double C375895 = C403287 - (C376235 * C403334) / q - C403354;
    const double C382563 = C375433 / q - (C375880 * C403335) / q - C403354;
    const double C383525 = C376947 / q - (C377942 * C403335) / q - C403358;
    const double C390389 = C403287 - (C377838 * C403336) / q - C403358;
    const double C383585 = C403281 - (C376419 * C403336) / q - C403359;
    const double C383758 = C403294 - (C376962 * C403335) / q - C403359;
    const double C376625 = C403300 - (C376962 * C403334) / q - C403356;
    const double C384344 = C403272 - (C377288 * C403336) / q - C403356;
    const double C403235 = C373303 * p;
    const double C373666 =
        C403266 - (C373756 * C403336) / q + C403300 - C403301 / q;
    const double C373982 = -(C373998 * C403335 + C403301) / q;
    const double C376642 = C403303 - (C377082 * C403334) / q - C403357;
    const double C383934 = C375659 / q - (C376610 * C403336) / q - C403357;
    const double C384037 = C403303 - (C378103 * C403335) / q - C403360;
    const double C390551 = C376404 / q - (C377942 * C403336) / q - C403360;
    const double C359702 = C403251 - (C359682 * C403336) / q - C403252 / q;
    const double C360124 = -(C360114 * C403335 + C403252) / q;
    const double C360520 = -(C360530 * C403334 + C403252) / q;
    const double C358255 = C403206 - (C371486 * C403335) / q - C403337;
    const double C359712 =
        C383062 / C401580 - (C374199 * C403334) / q - C403337;
    const double C403339 = C403216 / q;
    const double C403342 = C403226 / q;
    const double C372087 = C372135 / C401580 - (C372118 * C403334) / q +
                           C403281 - (C375479 * p) / q;
    const double C371228 =
        C403267 - (C371470 * C403335) / q - (C382207 * p) / q;
    const double C373060 = C373108 / C401580 - (C373091 * C403334) / q +
                           C403294 - (C375705 * p) / q;
    const double C371349 =
        C403267 - (C371533 * C403336) / q - (C382859 * p) / q;
    const double C358708 = -(C358719 * C403334 + C403223) / q;
    const double C359652 =
        C403245 - (C359642 * C403335) / q + C403246 - C403223 / q;
    const double C358741 = -(C358719 * C403336 + C403224) / q;
    const double C360500 =
        C403258 - (C360490 * C403335) / q + C403265 - C403224 / q;
    const double C403222 = C372816 * p;
    const double C403215 = C371905 * p;
    const double C372572 =
        C403287 - (C372588 * C403334) / q - (C375895 * p) / q;
    const double C371659 = C371486 / C401580 - (C371779 * C403335) / q +
                           C403272 - (C382563 * p) / q;
    const double C373607 = C373440 / C401580 - (C373725 * C403335) / q +
                           C403300 - (C383525 * p) / q;
    const double C403288 = C390389 * p;
    const double C403283 = C383585 * p;
    const double C373183 =
        C403294 - (C373424 * C403335) / q - (C383758 * p) / q;
    const double C373545 =
        C403300 - (C373561 * C403334) / q - (C376625 * p) / q;
    const double C403274 = C384344 * p;
    const double C359216 = -(C359227 * C403334 + C403235) / q;
    const double C360134 =
        C403250 - (C360114 * C403336) / q + C403261 - C403235 / q;
    const double C403236 = C373666 * p;
    const double C373785 =
        C403303 - (C373801 * C403334) / q - (C376642 * p) / q;
    const double C371965 =
        C403276 - (C372057 * C403336) / q + C403278 - (C383934 * p) / q;
    const double C373847 =
        C403303 - (C373966 * C403335) / q - (C384037 * p) / q;
    const double C403291 = C390551 * p;
    const double C358299 = C403206 - (C371549 * C403336) / q - C403339;
    const double C360164 = C403263 - (C374697 * C403334) / q - C403339;
    const double C358763 = C403221 - (C372526 * C403336) / q - C403342;
    const double C360590 = C403263 - (C374925 * C403335) / q - C403342;
    const double C403220 = C372087 * p;
    const double C358244 =
        C401210 / q - (C358255 * C403334) / q - (C371228 * p) / q;
    const double C403230 = C373060 * p;
    const double C358697 = -(C358675 * C403336 + C403222) / q;
    const double C360460 = C403255 - (C360450 * C403335) / q - C403222 / q;
    const double C358277 = -(C358255 * C403336 + C403215) / q;
    const double C360064 = C403258 - (C360074 * C403334) / q - C403215 / q;
    const double C358686 =
        C401325 / q - (C358675 * C403335) / q - (C372572 * p) / q;
    const double C403214 = C371659 * p;
    const double C403234 = C373607 * p;
    const double C403349 = C403288 / q;
    const double C403348 = C403283 / q;
    const double C403233 = C373183 * p;
    const double C403232 = C373545 * p;
    const double C371719 = C403272 - (C371811 * C403336) / q - C403274 / q;
    const double C372041 = -(C372057 * C403335 + C403274) / q;
    const double C359238 = -(C359227 * C403335 + C403236) / q;
    const double C360550 =
        C403248 - (C360530 * C403336) / q + C403266 - C403236 / q;
    const double C359161 =
        C401464 / q - (C359139 * C403336) / q - (C373785 * p) / q;
    const double C403218 = C371965 * p;
    const double C359205 =
        C401497 / q - (C359183 * C403336) / q - (C373847 * p) / q;
    const double C403350 = C403291 / q;
    const double C358288 =
        C401243 / q - (C358299 * C403334) / q - (C371349 * p) / q;
    const double C403341 = C403220 / q;
    const double C403344 = C403230 / q;
    const double C403338 = C403214 / q;
    const double C403345 = C403234 / q;
    const double C372695 = C403287 - (C372786 * C403336) / q - C403349;
    const double C373014 = C403266 - (C373030 * C403335) / q - C403349;
    const double C372331 = C403281 - (C372511 * C403336) / q - C403348;
    const double C374450 =
        C374697 / C401580 - (C374466 * C403335) / q - C403348;
    const double C359172 = -(C359183 * C403334 + C403233) / q;
    const double C360094 = C403245 - (C360074 * C403336) / q - C403233 / q;
    const double C359150 = -(C359139 * C403335 + C403232) / q;
    const double C360470 = C403239 - (C360450 * C403336) / q - C403232 / q;
    const double C403217 = C371719 * p;
    const double C360154 =
        C401805 / C401580 - (C360174 * C403334) / q - (C372041 * p) / q;
    const double C403340 = C403218 / q;
    const double C372939 =
        C372526 / C401580 - (C373030 * C403336) / q + C403290 - C403350;
    const double C373740 =
        C373500 / C401580 - (C373756 * C403335) / q - C403350;
    const double C358664 = C372135 / q - (C358675 * C403334) / q - C403341;
    const double C359612 = C403242 - (C359602 * C403335) / q - C403341;
    const double C359128 = C373108 / q - (C359139 * C403334) / q - C403344;
    const double C360054 = C403242 - (C360034 * C403336) / q - C403344;
    const double C358266 = C371486 / q - (C358255 * C403335) / q - C403338;
    const double C359632 = C403244 - (C359642 * C403334) / q - C403338;
    const double C359194 = C373440 / q - (C359183 * C403335) / q - C403345;
    const double C360510 = C403244 - (C360490 * C403336) / q - C403345;
    const double C358774 =
        C401391 / q - (C358763 * C403335) / q - (C372695 * p) / q;
    const double C403225 = C372331 * p;
    const double C360570 = -(C360590 * C403334 + C374450 * p) / q;
    const double C358310 = -(C358299 * C403335 + C403217) / q;
    const double C359672 = C403248 - (C359682 * C403334) / q - C403217 / q;
    const double C358321 = C371549 / q - (C358299 * C403336) / q - C403340;
    const double C360104 = C403260 - (C360114 * C403334) / q - C403340;
    const double C403227 = C372939 * p;
    const double C358752 = -(C358763 * C403334 + C403225) / q;
    const double C359692 = C403250 - (C359682 * C403335) / q - C403225 / q;
    const double C403343 = C403227 / q;
    const double C358785 = C372526 / q - (C358763 * C403336) / q - C403343;
    const double C360540 = C403260 - (C360530 * C403335) / q - C403343;
    g[0] = C358200;
    g[1] = C358211;
    g[2] = C358222;
    g[3] = C358233;
    g[4] = C358244;
    g[5] = C358255;
    g[6] = C358266;
    g[7] = C358277;
    g[8] = C358288;
    g[9] = C358299;
    g[10] = C358310;
    g[11] = C358321;
    g[12] = C358332;
    g[13] = C358343;
    g[14] = C358354;
    g[15] = C358365;
    g[16] = C358664;
    g[17] = C358675;
    g[18] = C358686;
    g[19] = C358697;
    g[20] = C358708;
    g[21] = C358719;
    g[22] = C358730;
    g[23] = C358741;
    g[24] = C358752;
    g[25] = C358763;
    g[26] = C358774;
    g[27] = C358785;
    g[28] = C358796;
    g[29] = C358807;
    g[30] = C358818;
    g[31] = C358829;
    g[32] = C359128;
    g[33] = C359139;
    g[34] = C359150;
    g[35] = C359161;
    g[36] = C359172;
    g[37] = C359183;
    g[38] = C359194;
    g[39] = C359205;
    g[40] = C359216;
    g[41] = C359227;
    g[42] = C359238;
    g[43] = C359249;
    g[44] = C359260;
    g[45] = C359271;
    g[46] = C359282;
    g[47] = C359293;
    g[48] = C359592;
    g[49] = C359602;
    g[50] = C359612;
    g[51] = C359622;
    g[52] = C359632;
    g[53] = C359642;
    g[54] = C359652;
    g[55] = C359662;
    g[56] = C359672;
    g[57] = C359682;
    g[58] = C359692;
    g[59] = C359702;
    g[60] = C359712;
    g[61] = C359722;
    g[62] = C359732;
    g[63] = C359742;
    g[64] = C360024;
    g[65] = C360034;
    g[66] = C360044;
    g[67] = C360054;
    g[68] = C360064;
    g[69] = C360074;
    g[70] = C360084;
    g[71] = C360094;
    g[72] = C360104;
    g[73] = C360114;
    g[74] = C360124;
    g[75] = C360134;
    g[76] = C360144;
    g[77] = C360154;
    g[78] = C360164;
    g[79] = C360174;
    g[80] = C360440;
    g[81] = C360450;
    g[82] = C360460;
    g[83] = C360470;
    g[84] = C360480;
    g[85] = C360490;
    g[86] = C360500;
    g[87] = C360510;
    g[88] = C360520;
    g[89] = C360530;
    g[90] = C360540;
    g[91] = C360550;
    g[92] = C360560;
    g[93] = C360570;
    g[94] = C360580;
    g[95] = C360590;
    g[96] = C371102;
    g[97] = C371135;
    g[98] = C371153;
    g[99] = C371228;
    g[100] = C371349;
    g[101] = C371470;
    g[102] = C371486;
    g[103] = C371502;
    g[104] = C371533;
    g[105] = C371549;
    g[106] = C371595;
    g[107] = C371611;
    g[108] = C371659;
    g[109] = C371719;
    g[110] = C371779;
    g[111] = C371795;
    g[112] = C371811;
    g[113] = C371842;
    g[114] = C371858;
    g[115] = C371905;
    g[116] = C371965;
    g[117] = C372024;
    g[118] = C372041;
    g[119] = C372057;
    g[120] = C372087;
    g[121] = C372118;
    g[122] = C372135;
    g[123] = C372210;
    g[124] = C372331;
    g[125] = C372451;
    g[126] = C372466;
    g[127] = C372481;
    g[128] = C372511;
    g[129] = C372526;
    g[130] = C372572;
    g[131] = C372588;
    g[132] = C372635;
    g[133] = C372695;
    g[134] = C372755;
    g[135] = C372770;
    g[136] = C372786;
    g[137] = C372816;
    g[138] = C372832;
    g[139] = C372878;
    g[140] = C372939;
    g[141] = C372998;
    g[142] = C373014;
    g[143] = C373030;
    g[144] = C373060;
    g[145] = C373091;
    g[146] = C373108;
    g[147] = C373183;
    g[148] = C373303;
    g[149] = C373424;
    g[150] = C373440;
    g[151] = C373455;
    g[152] = C373485;
    g[153] = C373500;
    g[154] = C373545;
    g[155] = C373561;
    g[156] = C373607;
    g[157] = C373666;
    g[158] = C373725;
    g[159] = C373740;
    g[160] = C373756;
    g[161] = C373785;
    g[162] = C373801;
    g[163] = C373847;
    g[164] = C373907;
    g[165] = C373966;
    g[166] = C373982;
    g[167] = C373998;
    g[168] = C374041;
    g[169] = C374199;
    g[170] = C374229;
    g[171] = C374258;
    g[172] = C374274;
    g[173] = C374320;
    g[174] = C374378;
    g[175] = C374435;
    g[176] = C374450;
    g[177] = C374466;
    g[178] = C374509;
    g[179] = C374666;
    g[180] = C374697;
    g[181] = C374740;
    g[182] = C374896;
    g[183] = C374925;
    g[184] = C374954;
    g[185] = C374970;
    g[186] = C374985;
    g[187] = C375002;
    g[188] = C375017;
    g[189] = C375032;
    g[190] = C375048;
    g[191] = C375065;
    g[192] = C375433;
    g[193] = C375448;
    g[194] = C375464;
    g[195] = C375479;
    g[196] = C375495;
    g[197] = C375659;
    g[198] = C375674;
    g[199] = C375690;
    g[200] = C375705;
    g[201] = C375850;
    g[202] = C375865;
    g[203] = C375880;
    g[204] = C375895;
    g[205] = C375912;
    g[206] = C375927;
    g[207] = C376220;
    g[208] = C376235;
    g[209] = C376250;
    g[210] = C376267;
    g[211] = C376404;
    g[212] = C376419;
    g[213] = C376434;
    g[214] = C376580;
    g[215] = C376595;
    g[216] = C376610;
    g[217] = C376625;
    g[218] = C376642;
    g[219] = C376659;
    g[220] = C376947;
    g[221] = C376962;
    g[222] = C376977;
    g[223] = C377067;
    g[224] = C377082;
    g[225] = C377097;
    g[226] = C377216;
    g[227] = C377258;
    g[228] = C377273;
    g[229] = C377288;
    g[230] = C377331;
    g[231] = C377374;
    g[232] = C377390;
    g[233] = C377405;
    g[234] = C377421;
    g[235] = C377542;
    g[236] = C377557;
    g[237] = C377646;
    g[238] = C377690;
    g[239] = C377705;
    g[240] = C377808;
    g[241] = C377823;
    g[242] = C377838;
    g[243] = C377853;
    g[244] = C377942;
    g[245] = C377957;
    g[246] = C378001;
    g[247] = C378016;
    g[248] = C378103;
    g[249] = C378118;
    g[250] = C378162;
    g[251] = C378177;
    g[252] = C382118;
    g[253] = C382134;
    g[254] = C382207;
    g[255] = C382223;
    g[256] = C382385;
    g[257] = C382401;
    g[258] = C382563;
    g[259] = C382579;
    g[260] = C382654;
    g[261] = C382785;
    g[262] = C382859;
    g[263] = C383047;
    g[264] = C383062;
    g[265] = C383078;
    g[266] = C383196;
    g[267] = C383331;
    g[268] = C383347;
    g[269] = C383408;
    g[270] = C383525;
    g[271] = C383585;
    g[272] = C383758;
    g[273] = C383774;
    g[274] = C383790;
    g[275] = C383934;
    g[276] = C384037;
    g[277] = C384083;
    g[278] = C384170;
    g[279] = C384231;
    g[280] = C384273;
    g[281] = C384344;
    g[282] = C384387;
    g[283] = C384883;
    g[284] = C384899;
    g[285] = C384987;
    g[286] = C385145;
    g[287] = C385217;
    g[288] = C390373;
    g[289] = C390389;
    g[290] = C390551;
    g[291] = C391058;
    g[292] = C391191;
    g[293] = C392213;
    g[294] = C393224;
    g[295] = C393244;
    g[296] = C393288;
    g[297] = C393347;
    g[298] = C393406;
    g[299] = C393421;
    g[300] = C393437;
    g[301] = C393466;
    g[302] = C393482;
    g[303] = C393497;
    g[304] = C393563;
    g[305] = C393594;
    g[306] = C393681;
    g[307] = C393742;
    g[308] = C393759;
    g[309] = C393774;
    g[310] = C393790;
    g[311] = C393820;
    g[312] = C393851;
    g[313] = C393938;
    g[314] = C393953;
    g[315] = C393968;
    g[316] = C393998;
    g[317] = C394055;
    g[318] = C394114;
    g[319] = C394175;
    g[320] = C394205;
    g[321] = C394235;
    g[322] = C394265;
    g[323] = C394281;
    g[324] = C394297;
    g[325] = C394313;
    g[326] = C394329;
    g[327] = C394416;
    g[328] = C394431;
    g[329] = C394475;
    g[330] = C394492;
    g[331] = C394586;
    g[332] = C394602;
    g[333] = C394632;
    g[334] = C394662;
    g[335] = C394692;
    g[336] = C394722;
    g[337] = C394738;
    g[338] = C394754;
    g[339] = C394883;
    g[340] = C394913;
    g[341] = C394973;
    g[342] = C394989;
    g[343] = C395005;
    g[344] = C395021;
    g[345] = C395123;
    g[346] = C395174;
    g[347] = C395190;
    g[348] = C395251;
    g[349] = C395267;
    g[350] = C395310;
    g[351] = C395326;
    g[352] = C395370;
    g[353] = C395464;
    g[354] = C395480;
    g[355] = C395554;
    g[356] = C395621;
    g[357] = C395665;
    g[358] = C395718;
    g[359] = C396080;
    g[360] = C396169;
    g[361] = C396184;
    g[362] = C396230;
    g[363] = C396621;
    g[364] = C396682;
    g[365] = C396713;
    g[366] = C397026;
    g[367] = C397085;
    g[368] = C397318;
    g[369] = C397434;
    g[370] = C397582;
    g[371] = C397706;
    g[372] = C397896;
    g[373] = C398019;
    g[374] = C398065;
    g[375] = C398096;
    g[376] = C398176;
    g[377] = C398737;
    g[378] = C399143;
    g[379] = C399950;
    g[380] = C400054;
    g[381] = C400208;
    g[382] = C400520;
    g[383] = C400675;
}
