/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2220_4_ints(const double ae,
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
    const double C37136 = de * zCD;
    const double C37135 = be * zAB;
    const double C37131 = de * yCD;
    const double C37130 = be * yAB;
    const double C37129 = 2 * q;
    const double C37128 = de * xCD;
    const double C37127 = be * xAB;
    const double C37210 = p + q;
    const double C38068 = p * q;
    const double C38067 = std::pow(Pi, 2.5);
    const double C38062 = zP - zQ;
    const double C38060 = yP - yQ;
    const double C38056 = xP - xQ;
    const double C38055 = 2 * p;
    const double C37177 = C37135 + C37136;
    const double C37176 = C37130 + C37131;
    const double C37175 = C37127 + C37128;
    const double C38069 = std::sqrt(C37210);
    const double C38089 = C38067 * kab;
    const double C38084 = C38062 * q;
    const double C38082 = C38060 * q;
    const double C38078 = C38056 * q;
    const double C38090 = C38068 * C38069;
    const double C38107 = C38089 * kcd;
    const double C29457 = (2. * C38107 * bs[1]) / C38090;
    const double C30190 = (2. * C38107 * bs[2]) / C38090;
    const double C30780 = (2. * C38107 * bs[3]) / C38090;
    const double C31076 = (2. * C38107 * bs[4]) / C38090;
    const double C31230 = (2. * C38107 * bs[5]) / C38090;
    const double C31321 = (2. * C38107 * bs[6]) / C38090;
    const double C37228 = (2. * C38107 * bs[0]) / C38090;
    const double C38058 = C29457 * q;
    const double C38065 = C30190 * q;
    const double C29025 = -((C29457 * C37127) / p + (C30190 * C38078) / C37210);
    const double C29371 = -((C29457 * C37130) / p + (C30190 * C38082) / C37210);
    const double C29400 = -((C29457 * C37135) / p + (C30190 * C38084) / C37210);
    const double C38074 = C30780 * q;
    const double C30175 = -((C30190 * C37127) / p + (C30780 * C38078) / C37210);
    const double C32555 = -((C30190 * C37130) / p + (C30780 * C38082) / C37210);
    const double C32703 = -((C30190 * C37135) / p + (C30780 * C38084) / C37210);
    const double C38076 = C31076 * q;
    const double C30764 = -((C30780 * C37127) / p + (C31076 * C38078) / C37210);
    const double C33148 = -((C30780 * C37130) / p + (C31076 * C38082) / C37210);
    const double C35495 = -((C30780 * C37135) / p + (C31076 * C38084) / C37210);
    const double C38077 = C31230 * q;
    const double C31124 = -((C31076 * C37127) / p + (C31230 * C38078) / C37210);
    const double C33481 = -((C31076 * C37130) / p + (C31230 * C38082) / C37210);
    const double C35828 = -((C31076 * C37135) / p + (C31230 * C38084) / C37210);
    const double C31245 = -((C31230 * C37127) / p + (C31321 * C38078) / C37210);
    const double C33601 = -((C31230 * C37130) / p + (C31321 * C38082) / C37210);
    const double C35945 = -((C31230 * C37135) / p + (C31321 * C38084) / C37210);
    const double C15808 = -((C37228 * C37127) / p + (C29457 * C38078) / C37210);
    const double C17998 = -((C37228 * C37130) / p + (C29457 * C38082) / C37210);
    const double C18028 = -((C37228 * C37135) / p + (C29457 * C38084) / C37210);
    const double C38080 = C38058 / C37210;
    const double C38087 = C38065 / C37210;
    const double C38095 = C38074 / C37210;
    const double C29385 = -((C29400 * C37130) / p + (C32703 * C38082) / C37210);
    const double C38097 = C38076 / C37210;
    const double C38098 = C38077 / C37210;
    const double C37197 = C15808 / C37129;
    const double C37196 = C17998 / C37129;
    const double C16160 = -((C17998 * C37127) / p + (C29371 * C38078) / C37210);
    const double C37198 = C18028 / C37129;
    const double C16427 = -((C18028 * C37127) / p + (C29400 * C38078) / C37210);
    const double C18013 = -((C18028 * C37130) / p + (C29400 * C38082) / C37210);
    const double C38100 = C37228 - C38080;
    const double C38105 = C29457 - C38087;
    const double C38112 = C30190 - C38095;
    const double C38114 = C30780 - C38097;
    const double C38115 = C31076 - C38098;
    const double C37141 = C16160 / q;
    const double C37147 = C16427 / q;
    const double C37162 = C18013 / q;
    const double C16746 = -((C18013 * C37127) / p + (C29385 * C38078) / C37210);
    const double C38116 = C38100 / C38055;
    const double C38121 = C38105 / C38055;
    const double C38125 = C38112 / C38055;
    const double C38126 = C38114 / C38055;
    const double C38127 = C38115 / C38055;
    const double C37174 = C16746 * p;
    const double C37152 = C16746 / q;
    const double C15793 =
        C38116 - ((C15808 * C37127) / p + (C29025 * C38078) / C37210);
    const double C16818 =
        C38116 - ((C17998 * C37130) / p + (C29371 * C38082) / C37210);
    const double C17518 =
        C38116 - ((C18028 * C37135) / p + (C29400 * C38084) / C37210);
    const double C29010 =
        C38121 - ((C29025 * C37127) / p + (C30175 * C38078) / C37210);
    const double C29138 =
        C38121 - ((C29371 * C37130) / p + (C32555 * C38082) / C37210);
    const double C29262 =
        C38121 - ((C29400 * C37135) / p + (C32703 * C38084) / C37210);
    const double C30159 =
        C38125 - ((C30175 * C37127) / p + (C30764 * C38078) / C37210);
    const double C30211 =
        C38125 - ((C32555 * C37130) / p + (C33148 * C38082) / C37210);
    const double C30240 =
        C38125 - ((C32703 * C37135) / p + (C35495 * C38084) / C37210);
    const double C30855 =
        C38126 - ((C30764 * C37127) / p + (C31124 * C38078) / C37210);
    const double C30913 =
        C38126 - ((C33148 * C37130) / p + (C33481 * C38082) / C37210);
    const double C30955 =
        C38126 - ((C35495 * C37135) / p + (C35828 * C38084) / C37210);
    const double C31139 =
        C38127 - ((C31124 * C37127) / p + (C31245 * C38078) / C37210);
    const double C33496 =
        C38127 - ((C33481 * C37130) / p + (C33601 * C38082) / C37210);
    const double C33525 =
        C38127 - ((C35828 * C37135) / p + (C35945 * C38084) / C37210);
    const double C15450 = -(C16160 * C37177 + C37174) / q;
    const double C15613 = -(C16427 * C37176 + C37174) / q;
    const double C15658 = -(C18013 * C37175 + C37174) / q;
    const double C37180 = C15793 / C37129;
    const double C37188 = C16818 / C37129;
    const double C37194 = C17518 / C37129;
    const double C15762 = (C15808 - (C29025 * q) / C37210) / p -
                          ((C15793 * C37127) / p + (C29010 * C38078) / C37210);
    const double C16145 = -((C15793 * C37130) / p + (C29010 * C38082) / C37210);
    const double C16412 = -((C15793 * C37135) / p + (C29010 * C38084) / C37210);
    const double C38059 = C29138 * q;
    const double C16115 = -((C16818 * C37127) / p + (C29138 * C38078) / C37210);
    const double C17005 = (C17998 - (C29371 * q) / C37210) / p -
                          ((C16818 * C37130) / p + (C29138 * C38082) / C37210);
    const double C17185 = -((C16818 * C37135) / p + (C29138 * C38084) / C37210);
    const double C38061 = C29262 * q;
    const double C16382 = -((C17518 * C37127) / p + (C29262 * C38078) / C37210);
    const double C17632 = -((C17518 * C37130) / p + (C29262 * C38082) / C37210);
    const double C17707 = (C18028 - (C29400 * q) / C37210) / p -
                          ((C17518 * C37135) / p + (C29262 * C38084) / C37210);
    const double C28991 = (C29025 - (C30175 * q) / C37210) / p -
                          ((C29010 * C37127) / p + (C30159 * C38078) / C37210);
    const double C31494 = -((C29010 * C37135) / p + (C30159 * C38084) / C37210);
    const double C38072 = C30211 * q;
    const double C29040 = -((C29138 * C37127) / p + (C30211 * C38078) / C37210);
    const double C29220 = (C29371 - (C32555 * q) / C37210) / p -
                          ((C29138 * C37130) / p + (C30211 * C38082) / C37210);
    const double C29234 = -((C29138 * C37135) / p + (C30211 * C38084) / C37210);
    const double C38073 = C30240 * q;
    const double C29069 = -((C29262 * C37127) / p + (C30240 * C38078) / C37210);
    const double C29330 = -((C29262 * C37130) / p + (C30240 * C38082) / C37210);
    const double C29344 = (C29400 - (C32703 * q) / C37210) / p -
                          ((C29262 * C37135) / p + (C30240 * C38084) / C37210);
    const double C30373 = (C30175 - (C30764 * q) / C37210) / p -
                          ((C30159 * C37127) / p + (C30855 * C38078) / C37210);
    const double C30455 = (C32555 - (C33148 * q) / C37210) / p -
                          ((C30211 * C37130) / p + (C30913 * C38082) / C37210);
    const double C30498 = -((C30211 * C37127) / p + (C30913 * C38078) / C37210);
    const double C38075 = C30955 * q;
    const double C30542 = -((C30240 * C37127) / p + (C30955 * C38078) / C37210);
    const double C30586 = (C32703 - (C35495 * q) / C37210) / p -
                          ((C30240 * C37135) / p + (C30955 * C38084) / C37210);
    const double C32852 = -((C30240 * C37130) / p + (C30955 * C38082) / C37210);
    const double C30870 = (C30764 - (C31124 * q) / C37210) / p -
                          ((C30855 * C37127) / p + (C31139 * C38078) / C37210);
    const double C30969 = (C33148 - (C33481 * q) / C37210) / p -
                          ((C30913 * C37130) / p + (C33496 * C38082) / C37210);
    const double C31036 = (C35495 - (C35828 * q) / C37210) / p -
                          ((C30955 * C37135) / p + (C33525 * C38084) / C37210);
    const double C33273 = -((C30955 * C37130) / p + (C33525 * C38082) / C37210);
    const double C37185 = C15762 / C37129;
    const double C12896 = C15808 / q - (C15793 * C37175) / q - (C15762 * p) / q;
    const double C37134 = C16145 * p;
    const double C37139 = C16412 * p;
    const double C38081 = C38059 / C37210;
    const double C37153 = C16115 * p;
    const double C37192 = C17005 / C37129;
    const double C13924 = C17998 / q - (C16818 * C37176) / q - (C17005 * p) / q;
    const double C37156 = C17185 * p;
    const double C38083 = C38061 / C37210;
    const double C37166 = C16382 * p;
    const double C37168 = C17632 * p;
    const double C37195 = C17707 / C37129;
    const double C14793 = C18028 / q - (C17518 * C37177) / q - (C17707 * p) / q;
    const double C38057 = C28991 * q;
    const double C15746 = (3 * (C15793 - (C29010 * q) / C37210)) / C38055 -
                          ((C15762 * C37127) / p + (C28991 * C38078) / C37210);
    const double C16176 = -((C15762 * C37130) / p + (C28991 * C38082) / C37210);
    const double C16443 = -((C15762 * C37135) / p + (C28991 * C38084) / C37210);
    const double C16731 = -((C16412 * C37130) / p + (C31494 * C38082) / C37210);
    const double C38093 = C38072 / C37210;
    const double C38063 = C29220 * q;
    const double C17020 = -((C17005 * C37127) / p + (C29220 * C38078) / C37210);
    const double C17474 = -((C17005 * C37135) / p + (C29220 * C38084) / C37210);
    const double C17200 = -((C17185 * C37127) / p + (C29234 * C38078) / C37210);
    const double C38094 = C38073 / C37210;
    const double C17647 = -((C17632 * C37127) / p + (C29330 * C38078) / C37210);
    const double C38064 = C29344 * q;
    const double C17722 = -((C17707 * C37127) / p + (C29344 * C38078) / C37210);
    const double C17954 = -((C17707 * C37130) / p + (C29344 * C38082) / C37210);
    const double C38066 = C30373 * q;
    const double C29427 = (3 * (C29010 - (C30159 * q) / C37210)) / C38055 -
                          ((C28991 * C37127) / p + (C30373 * C38078) / C37210);
    const double C31865 = -((C28991 * C37130) / p + (C30373 * C38082) / C37210);
    const double C31961 = -((C28991 * C37135) / p + (C30373 * C38084) / C37210);
    const double C38070 = C30455 * q;
    const double C29625 = -((C29220 * C37127) / p + (C30455 * C38078) / C37210);
    const double C29856 = -((C29220 * C37135) / p + (C30455 * C38084) / C37210);
    const double C38096 = C38075 / C37210;
    const double C38071 = C30586 * q;
    const double C29755 = -((C29344 * C37127) / p + (C30586 * C38078) / C37210);
    const double C30064 = -((C29344 * C37130) / p + (C30586 * C38082) / C37210);
    const double C30388 = (3 * (C30159 - (C30855 * q) / C37210)) / C38055 -
                          ((C30373 * C37127) / p + (C30870 * C38078) / C37210);
    const double C32909 = -((C30373 * C37130) / p + (C30870 * C38082) / C37210);
    const double C35284 = -((C30373 * C37135) / p + (C30870 * C38084) / C37210);
    const double C30470 = (3 * (C30211 - (C30913 * q) / C37210)) / C38055 -
                          ((C30455 * C37130) / p + (C30969 * C38082) / C37210);
    const double C30557 = -((C30455 * C37127) / p + (C30969 * C38078) / C37210);
    const double C35378 = -((C30455 * C37135) / p + (C30969 * C38084) / C37210);
    const double C30643 = -((C30586 * C37127) / p + (C31036 * C38078) / C37210);
    const double C33072 = -((C30586 * C37130) / p + (C31036 * C38082) / C37210);
    const double C13040 = -(C15793 * C37176 + C37134) / q;
    const double C15390 = C37196 - (C16160 * C37175) / q - C37134 / q;
    const double C13087 = -(C15793 * C37177 + C37139) / q;
    const double C15568 = C37198 - (C16427 * C37175) / q - C37139 / q;
    const double C38101 = C16818 - C38081;
    const double C13830 = -(C16818 * C37175 + C37153) / q;
    const double C15435 = C37197 - (C16160 * C37176) / q - C37153 / q;
    const double C13954 = -(C16818 * C37177 + C37156) / q;
    const double C15702 = C37198 - (C18013 * C37176) / q - C37156 / q;
    const double C38102 = C17518 - C38083;
    const double C14670 = -(C17518 * C37175 + C37166) / q;
    const double C15629 = C37197 - (C16427 * C37177) / q - C37166 / q;
    const double C14763 = -(C17518 * C37176 + C37168) / q;
    const double C15717 = C37196 - (C18013 * C37177) / q - C37168 / q;
    const double C38079 = C38057 / C37210;
    const double C12878 =
        (3 * C15793) / C37129 - (C15762 * C37175) / q - (C15746 * p) / q;
    const double C37133 = C16176 * p;
    const double C37138 = C16443 * p;
    const double C37145 = C16731 * p;
    const double C38110 = C29138 - C38093;
    const double C38085 = C38063 / C37210;
    const double C37154 = C17020 * p;
    const double C37159 = C17474 * p;
    const double C37155 = C17200 * p;
    const double C38111 = C29262 - C38094;
    const double C37167 = C17647 * p;
    const double C38086 = C38064 / C37210;
    const double C37169 = C17722 * p;
    const double C37170 = C17954 * p;
    const double C38088 = C38066 / C37210;
    const double C16659 = -((C15746 * C37130) / p + (C29427 * C38082) / C37210);
    const double C16688 = -((C15746 * C37135) / p + (C29427 * C38084) / C37210);
    const double C16761 = -((C16443 * C37130) / p + (C31961 * C38082) / C37210);
    const double C38091 = C38070 / C37210;
    const double C17489 = -((C17474 * C37127) / p + (C29856 * C38078) / C37210);
    const double C38113 = C30240 - C38096;
    const double C38092 = C38071 / C37210;
    const double C17969 = -((C17954 * C37127) / p + (C30064 * C38078) / C37210);
    const double C31850 = -((C29427 * C37130) / p + (C30388 * C38082) / C37210);
    const double C31947 = -((C29427 * C37135) / p + (C30388 * C38084) / C37210);
    const double C16100 =
        C38101 / C38055 - ((C16115 * C37127) / p + (C29040 * C38078) / C37210);
    const double C16975 = (3 * C38101) / C38055 -
                          ((C17005 * C37130) / p + (C29220 * C38082) / C37210);
    const double C38118 = C38102 / C38055;
    const double C17677 = (3 * C38102) / C38055 -
                          ((C17707 * C37135) / p + (C29344 * C38084) / C37210);
    const double C38099 = C15762 - C38079;
    const double C13025 = -(C15762 * C37176 + C37133) / q;
    const double C13167 = C37141 - (C16145 * C37175) / q - C37133 / q;
    const double C13072 = -(C15762 * C37177 + C37138) / q;
    const double C13361 = C37147 - (C16412 * C37175) / q - C37138 / q;
    const double C13297 = -(C16145 * C37177 + C37145) / q;
    const double C13459 = -(C16412 * C37176 + C37145) / q;
    const double C15479 = C18013 / C37129 - (C16746 * C37175) / q - C37145 / q;
    const double C29828 = (3 * C38110) / C38055 -
                          ((C29220 * C37130) / p + (C30455 * C38082) / C37210);
    const double C34340 =
        C38110 / C38055 - ((C29040 * C37127) / p + (C30498 * C38078) / C37210);
    const double C38103 = C17005 - C38085;
    const double C13909 = C37141 - (C16115 * C37176) / q - C37154 / q;
    const double C14018 = -(C17005 * C37175 + C37154) / q;
    const double C14144 = -(C17005 * C37177 + C37159) / q;
    const double C14304 = C37162 - (C17185 * C37176) / q - C37159 / q;
    const double C13939 = -(C16115 * C37177 + C37155) / q;
    const double C14206 = -(C17185 * C37175 + C37155) / q;
    const double C15524 = C16427 / C37129 - (C16746 * C37176) / q - C37155 / q;
    const double C38124 = C38111 / C38055;
    const double C30050 = (3 * C38111) / C38055 -
                          ((C29344 * C37135) / p + (C30586 * C38084) / C37210);
    const double C14748 = -(C16382 * C37176 + C37167) / q;
    const double C14837 = -(C17632 * C37175 + C37167) / q;
    const double C15539 = C16160 / C37129 - (C16746 * C37177) / q - C37167 / q;
    const double C38104 = C17707 - C38086;
    const double C14778 = C37147 - (C16382 * C37177) / q - C37169 / q;
    const double C14946 = -(C17707 * C37175 + C37169) / q;
    const double C14899 = C37162 - (C17632 * C37177) / q - C37170 / q;
    const double C15042 = -(C17707 * C37176 + C37170) / q;
    const double C38106 = C28991 - C38088;
    const double C37132 = C16659 * p;
    const double C37137 = C16688 * p;
    const double C37151 = C16761 * p;
    const double C38108 = C29220 - C38091;
    const double C37165 = C17489 * p;
    const double C30513 =
        C38113 / C38055 - ((C32852 * C37130) / p + (C33273 * C38082) / C37210);
    const double C30601 = (3 * C38113) / C38055 -
                          ((C30586 * C37135) / p + (C31036 * C38084) / C37210);
    const double C38109 = C29344 - C38092;
    const double C37173 = C17969 * p;
    const double C37143 = C16100 * p;
    const double C14113 =
        (3 * C16818) / C37129 - (C17005 * C37176) / q - (C16975 * p) / q;
    const double C16367 =
        C38118 - ((C16382 * C37127) / p + (C29069 * C38078) / C37210);
    const double C17155 =
        C38118 - ((C17632 * C37130) / p + (C29330 * C38082) / C37210);
    const double C15074 =
        (3 * C17518) / C37129 - (C17707 * C37177) / q - (C17677 * p) / q;
    const double C38117 = C38099 / C38055;
    const double C15777 =
        (2 * C38099) / p - ((C15746 * C37127) / p + (C29427 * C38078) / C37210);
    const double C16990 = -((C16975 * C37127) / p + (C29828 * C38078) / C37210);
    const double C22575 = -((C16975 * C37135) / p + (C29828 * C38084) / C37210);
    const double C29640 = -((C29828 * C37127) / p + (C30470 * C38078) / C37210);
    const double C29952 = -((C29828 * C37135) / p + (C30470 * C38084) / C37210);
    const double C17445 = -((C16100 * C37135) / p + (C34340 * C38084) / C37210);
    const double C38119 = C38103 / C38055;
    const double C22127 =
        (2 * C38103) / p - ((C16975 * C37130) / p + (C29828 * C38082) / C37210);
    const double C29842 =
        C38124 - ((C29330 * C37130) / p + (C32852 * C38082) / C37210);
    const double C32046 =
        C38124 - ((C29069 * C37127) / p + (C30542 * C38078) / C37210);
    const double C17692 = -((C17677 * C37127) / p + (C30050 * C38078) / C37210);
    const double C22816 = -((C17677 * C37130) / p + (C30050 * C38082) / C37210);
    const double C38120 = C38104 / C38055;
    const double C27930 =
        (2 * C38104) / p - ((C17677 * C37135) / p + (C30050 * C38084) / C37210);
    const double C38128 = C38106 / C38055;
    const double C29442 =
        (2 * C38106) / p - ((C29427 * C37127) / p + (C30388 * C38078) / C37210);
    const double C13009 = -(C15746 * C37176 + C37132) / q;
    const double C13538 =
        (3 * C16145) / C37129 - (C16176 * C37175) / q - C37132 / q;
    const double C13056 = -(C15746 * C37177 + C37137) / q;
    const double C13628 =
        (3 * C16412) / C37129 - (C16443 * C37175) / q - C37137 / q;
    const double C13599 = -(C16176 * C37177 + C37151) / q;
    const double C13674 = -(C16443 * C37176 + C37151) / q;
    const double C13719 = C37152 - (C16731 * C37175) / q - C37151 / q;
    const double C38122 = C38108 / C38055;
    const double C29938 =
        (2 * C38108) / p - ((C29828 * C37130) / p + (C30470 * C38082) / C37210);
    const double C14443 = -(C17020 * C37177 + C37165) / q;
    const double C14518 = C37152 - (C17200 * C37176) / q - C37165 / q;
    const double C14562 = -(C17474 * C37175 + C37165) / q;
    const double C29770 = -((C30050 * C37127) / p + (C30601 * C38078) / C37210);
    const double C30118 = -((C30050 * C37130) / p + (C30601 * C38082) / C37210);
    const double C38123 = C38109 / C38055;
    const double C30132 =
        (2 * C38109) / p - ((C30050 * C37135) / p + (C30601 * C38084) / C37210);
    const double C15179 = C37152 - (C17647 * C37177) / q - C37173 / q;
    const double C15254 = -(C17722 * C37176 + C37173) / q;
    const double C15299 = -(C17954 * C37175 + C37173) / q;
    const double C37181 = C37143 / q;
    const double C37150 = C16367 * p;
    const double C37164 = C17155 * p;
    const double C16130 =
        C38117 - ((C16176 * C37130) / p + (C31865 * C38082) / C37210);
    const double C16397 =
        C38117 - ((C16443 * C37135) / p + (C31961 * C38084) / C37210);
    const double C12859 =
        (2 * C15762) / q - (C15746 * C37175) / q - (C15777 * p) / q;
    const double C37157 = C16990 * p;
    const double C37158 = C22575 * p;
    const double C37144 = C17445 * p;
    const double C17416 =
        C38119 - ((C17020 * C37127) / p + (C29625 * C38078) / C37210);
    const double C22317 =
        C38119 - ((C17474 * C37135) / p + (C29856 * C38084) / C37210);
    const double C14097 =
        (2 * C17005) / q - (C16975 * C37176) / q - (C22127 * p) / q;
    const double C17170 = -((C17155 * C37127) / p + (C29842 * C38078) / C37210);
    const double C29670 = -((C29842 * C37127) / p + (C30513 * C38078) / C37210);
    const double C17882 = -((C16367 * C37130) / p + (C32046 * C38082) / C37210);
    const double C37171 = C17692 * p;
    const double C37172 = C22816 * p;
    const double C17911 =
        C38120 - ((C17722 * C37127) / p + (C29755 * C38078) / C37210);
    const double C23046 =
        C38120 - ((C17954 * C37130) / p + (C30064 * C38082) / C37210);
    const double C15058 =
        (2 * C17707) / q - (C17677 * C37177) / q - (C27930 * p) / q;
    const double C32144 =
        C38128 - ((C31961 * C37135) / p + (C35284 * C38084) / C37210);
    const double C34398 =
        C38128 - ((C31865 * C37130) / p + (C32909 * C38082) / C37210);
    const double C29700 =
        C38122 - ((C29625 * C37127) / p + (C30557 * C38078) / C37210);
    const double C30007 =
        C38122 - ((C29856 * C37135) / p + (C35378 * C38084) / C37210);
    const double C29800 =
        C38123 - ((C29755 * C37127) / p + (C30643 * C38078) / C37210);
    const double C30022 =
        C38123 - ((C30064 * C37130) / p + (C33072 * C38082) / C37210);
    const double C13264 = C37180 - (C16145 * C37176) / q - C37181;
    const double C13813 = C37188 - (C16115 * C37175) / q - C37181;
    const double C37184 = C37150 / q;
    const double C37191 = C37164 / q;
    const double C37140 = C16130 * p;
    const double C37146 = C16397 * p;
    const double C14000 = -(C16975 * C37175 + C37157) / q;
    const double C14428 =
        (3 * C16115) / C37129 - (C17020 * C37176) / q - C37157 / q;
    const double C14128 = -(C16975 * C37177 + C37158) / q;
    const double C14609 =
        (3 * C17185) / C37129 - (C17474 * C37176) / q - C37158 / q;
    const double C37186 = C37144 / q;
    const double C13280 = -(C16100 * C37177 + C37144) / q;
    const double C37142 = C17416 * p;
    const double C37161 = C22317 * p;
    const double C37160 = C17170 * p;
    const double C37148 = C17882 * p;
    const double C14928 = -(C17677 * C37175 + C37171) / q;
    const double C15270 =
        (3 * C16382) / C37129 - (C17722 * C37177) / q - C37171 / q;
    const double C15026 = -(C17677 * C37176 + C37172) / q;
    const double C15361 =
        (3 * C17632) / C37129 - (C17954 * C37177) / q - C37172 / q;
    const double C37149 = C17911 * p;
    const double C37163 = C23046 * p;
    const double C13493 = C37180 - (C16412 * C37177) / q - C37184;
    const double C14653 = C37194 - (C16382 * C37175) / q - C37184;
    const double C14336 = C37188 - (C17185 * C37177) / q - C37191;
    const double C14884 = C37194 - (C17632 * C37176) / q - C37191;
    const double C37178 = C37140 / q;
    const double C37182 = C37146 / q;
    const double C13767 = C16412 / C37129 - (C16731 * C37176) / q - C37186;
    const double C14472 = C17185 / C37129 - (C17200 * C37175) / q - C37186;
    const double C37179 = C37142 / q;
    const double C37189 = C37161 / q;
    const double C37193 = C37160 / q;
    const double C14188 = -(C17155 * C37175 + C37160) / q;
    const double C37187 = C37148 / q;
    const double C13442 = -(C16367 * C37176 + C37148) / q;
    const double C37183 = C37149 / q;
    const double C37190 = C37163 / q;
    const double C13148 = C16115 / q - (C16100 * C37175) / q - C37178;
    const double C13584 = C37185 - (C16176 * C37176) / q - C37178;
    const double C13342 = C16382 / q - (C16367 * C37175) / q - C37182;
    const double C13690 = C37185 - (C16443 * C37177) / q - C37182;
    const double C13247 = C16145 / q - (C16100 * C37176) / q - C37179;
    const double C14382 = C37192 - (C17020 * C37175) / q - C37179;
    const double C14288 = C17632 / q - (C17155 * C37176) / q - C37189;
    const double C14624 = C37192 - (C17474 * C37177) / q - C37189;
    const double C14533 = C16115 / C37129 - (C17200 * C37177) / q - C37193;
    const double C15164 = C16382 / C37129 - (C17647 * C37176) / q - C37193;
    const double C13783 = C16145 / C37129 - (C16731 * C37177) / q - C37187;
    const double C15118 = C17632 / C37129 - (C17647 * C37175) / q - C37187;
    const double C13476 = C16412 / q - (C16367 * C37177) / q - C37183;
    const double C15208 = C37195 - (C17722 * C37175) / q - C37183;
    const double C14320 = C17185 / q - (C17155 * C37177) / q - C37190;
    const double C15346 = C37195 - (C17954 * C37176) / q - C37190;
    g[0] = C12859;
    g[1] = C12878;
    g[2] = C12896;
    g[3] = C13009;
    g[4] = C13025;
    g[5] = C13040;
    g[6] = C13056;
    g[7] = C13072;
    g[8] = C13087;
    g[9] = C13148;
    g[10] = C13167;
    g[11] = C13247;
    g[12] = C13264;
    g[13] = C13280;
    g[14] = C13297;
    g[15] = C13342;
    g[16] = C13361;
    g[17] = C13442;
    g[18] = C13459;
    g[19] = C13476;
    g[20] = C13493;
    g[21] = C13538;
    g[22] = C13584;
    g[23] = C13599;
    g[24] = C13628;
    g[25] = C13674;
    g[26] = C13690;
    g[27] = C13719;
    g[28] = C13767;
    g[29] = C13783;
    g[30] = C13813;
    g[31] = C13830;
    g[32] = C13909;
    g[33] = C13924;
    g[34] = C13939;
    g[35] = C13954;
    g[36] = C14000;
    g[37] = C14018;
    g[38] = C14097;
    g[39] = C14113;
    g[40] = C14128;
    g[41] = C14144;
    g[42] = C14188;
    g[43] = C14206;
    g[44] = C14288;
    g[45] = C14304;
    g[46] = C14320;
    g[47] = C14336;
    g[48] = C14382;
    g[49] = C14428;
    g[50] = C14443;
    g[51] = C14472;
    g[52] = C14518;
    g[53] = C14533;
    g[54] = C14562;
    g[55] = C14609;
    g[56] = C14624;
    g[57] = C14653;
    g[58] = C14670;
    g[59] = C14748;
    g[60] = C14763;
    g[61] = C14778;
    g[62] = C14793;
    g[63] = C14837;
    g[64] = C14884;
    g[65] = C14899;
    g[66] = C14928;
    g[67] = C14946;
    g[68] = C15026;
    g[69] = C15042;
    g[70] = C15058;
    g[71] = C15074;
    g[72] = C15118;
    g[73] = C15164;
    g[74] = C15179;
    g[75] = C15208;
    g[76] = C15254;
    g[77] = C15270;
    g[78] = C15299;
    g[79] = C15346;
    g[80] = C15361;
    g[81] = C15390;
    g[82] = C15435;
    g[83] = C15450;
    g[84] = C15479;
    g[85] = C15524;
    g[86] = C15539;
    g[87] = C15568;
    g[88] = C15613;
    g[89] = C15629;
    g[90] = C15658;
    g[91] = C15702;
    g[92] = C15717;
    g[93] = C15746;
    g[94] = C15762;
    g[95] = C15777;
    g[96] = C15793;
    g[97] = C15808;
    g[98] = C16100;
    g[99] = C16115;
    g[100] = C16130;
    g[101] = C16145;
    g[102] = C16160;
    g[103] = C16176;
    g[104] = C16367;
    g[105] = C16382;
    g[106] = C16397;
    g[107] = C16412;
    g[108] = C16427;
    g[109] = C16443;
    g[110] = C16659;
    g[111] = C16688;
    g[112] = C16731;
    g[113] = C16746;
    g[114] = C16761;
    g[115] = C16818;
    g[116] = C16975;
    g[117] = C16990;
    g[118] = C17005;
    g[119] = C17020;
    g[120] = C17155;
    g[121] = C17170;
    g[122] = C17185;
    g[123] = C17200;
    g[124] = C17416;
    g[125] = C17445;
    g[126] = C17474;
    g[127] = C17489;
    g[128] = C17518;
    g[129] = C17632;
    g[130] = C17647;
    g[131] = C17677;
    g[132] = C17692;
    g[133] = C17707;
    g[134] = C17722;
    g[135] = C17882;
    g[136] = C17911;
    g[137] = C17954;
    g[138] = C17969;
    g[139] = C17998;
    g[140] = C18013;
    g[141] = C18028;
    g[142] = C22127;
    g[143] = C22317;
    g[144] = C22575;
    g[145] = C22816;
    g[146] = C23046;
    g[147] = C27930;
    g[148] = C28991;
    g[149] = C29010;
    g[150] = C29025;
    g[151] = C29040;
    g[152] = C29069;
    g[153] = C29138;
    g[154] = C29220;
    g[155] = C29234;
    g[156] = C29262;
    g[157] = C29330;
    g[158] = C29344;
    g[159] = C29371;
    g[160] = C29385;
    g[161] = C29400;
    g[162] = C29427;
    g[163] = C29442;
    g[164] = C29457;
    g[165] = C29625;
    g[166] = C29640;
    g[167] = C29670;
    g[168] = C29700;
    g[169] = C29755;
    g[170] = C29770;
    g[171] = C29800;
    g[172] = C29828;
    g[173] = C29842;
    g[174] = C29856;
    g[175] = C29938;
    g[176] = C29952;
    g[177] = C30007;
    g[178] = C30022;
    g[179] = C30050;
    g[180] = C30064;
    g[181] = C30118;
    g[182] = C30132;
    g[183] = C30159;
    g[184] = C30175;
    g[185] = C30190;
    g[186] = C30211;
    g[187] = C30240;
    g[188] = C30373;
    g[189] = C30388;
    g[190] = C30455;
    g[191] = C30470;
    g[192] = C30498;
    g[193] = C30513;
    g[194] = C30542;
    g[195] = C30557;
    g[196] = C30586;
    g[197] = C30601;
    g[198] = C30643;
    g[199] = C30764;
    g[200] = C30780;
    g[201] = C30855;
    g[202] = C30870;
    g[203] = C30913;
    g[204] = C30955;
    g[205] = C30969;
    g[206] = C31036;
    g[207] = C31076;
    g[208] = C31124;
    g[209] = C31139;
    g[210] = C31230;
    g[211] = C31245;
    g[212] = C31321;
    g[213] = C31494;
    g[214] = C31850;
    g[215] = C31865;
    g[216] = C31947;
    g[217] = C31961;
    g[218] = C32046;
    g[219] = C32144;
    g[220] = C32555;
    g[221] = C32703;
    g[222] = C32852;
    g[223] = C32909;
    g[224] = C33072;
    g[225] = C33148;
    g[226] = C33273;
    g[227] = C33481;
    g[228] = C33496;
    g[229] = C33525;
    g[230] = C33601;
    g[231] = C34340;
    g[232] = C34398;
    g[233] = C35284;
    g[234] = C35378;
    g[235] = C35495;
    g[236] = C35828;
    g[237] = C35945;
}
