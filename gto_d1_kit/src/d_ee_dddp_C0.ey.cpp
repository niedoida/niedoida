/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2221_3_ints(const double ae,
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
    const double C104134 = 2 * q;
    const double C106936 = de * zCD;
    const double C106935 = be * zAB;
    const double C106931 = de * yCD;
    const double C106930 = be * yAB;
    const double C106926 = de * xCD;
    const double C106925 = be * xAB;
    const double C107192 = p + q;
    const double C108530 = p * q;
    const double C108529 = std::pow(Pi, 2.5);
    const double C108525 = zP - zQ;
    const double C108523 = yP - yQ;
    const double C108519 = xP - xQ;
    const double C108518 = 2 * p;
    const double C107120 = C106935 + C106936;
    const double C107116 = C106930 + C106931;
    const double C107115 = C106925 + C106926;
    const double C108531 = std::sqrt(C107192);
    const double C108561 = C108529 * kab;
    const double C108557 = C108525 * q;
    const double C108555 = C108523 * q;
    const double C108551 = C108519 * q;
    const double C108562 = C108530 * C108531;
    const double C108589 = C108561 * kcd;
    const double C63315 = (2. * C108589 * bs[0]) / C108562;
    const double C90656 = (2. * C108589 * bs[1]) / C108562;
    const double C91907 = (2. * C108589 * bs[2]) / C108562;
    const double C92793 = (2. * C108589 * bs[3]) / C108562;
    const double C93284 = (2. * C108589 * bs[4]) / C108562;
    const double C93548 = (2. * C108589 * bs[5]) / C108562;
    const double C93682 = (2. * C108589 * bs[6]) / C108562;
    const double C93773 = (2. * C108589 * bs[7]) / C108562;
    const double C107080 = C63315 / C104134;
    const double C108520 = C90656 * q;
    const double C59723 =
        -((C63315 * C106925) / p + (C90656 * C108551) / C107192);
    const double C63213 =
        -((C63315 * C106930) / p + (C90656 * C108555) / C107192);
    const double C63256 =
        -((C63315 * C106935) / p + (C90656 * C108557) / C107192);
    const double C108534 = C91907 * q;
    const double C90239 =
        -((C90656 * C106925) / p + (C91907 * C108551) / C107192);
    const double C90585 =
        -((C90656 * C106930) / p + (C91907 * C108555) / C107192);
    const double C90614 =
        -((C90656 * C106935) / p + (C91907 * C108557) / C107192);
    const double C108543 = C92793 * q;
    const double C91892 =
        -((C91907 * C106925) / p + (C92793 * C108551) / C107192);
    const double C95502 =
        -((C91907 * C106930) / p + (C92793 * C108555) / C107192);
    const double C95650 =
        -((C91907 * C106935) / p + (C92793 * C108557) / C107192);
    const double C108548 = C93284 * q;
    const double C92777 =
        -((C92793 * C106925) / p + (C93284 * C108551) / C107192);
    const double C96385 =
        -((C92793 * C106930) / p + (C93284 * C108555) / C107192);
    const double C99942 =
        -((C92793 * C106935) / p + (C93284 * C108557) / C107192);
    const double C108549 = C93548 * q;
    const double C93332 =
        -((C93284 * C106925) / p + (C93548 * C108551) / C107192);
    const double C96909 =
        -((C93284 * C106930) / p + (C93548 * C108555) / C107192);
    const double C100467 =
        -((C93284 * C106935) / p + (C93548 * C108557) / C107192);
    const double C108550 = C93682 * q;
    const double C93563 =
        -((C93548 * C106925) / p + (C93682 * C108551) / C107192);
    const double C97136 =
        -((C93548 * C106930) / p + (C93682 * C108555) / C107192);
    const double C100691 =
        -((C93548 * C106935) / p + (C93682 * C108557) / C107192);
    const double C93723 =
        -((C93682 * C106925) / p + (C93773 * C108551) / C107192);
    const double C97282 =
        -((C93682 * C106930) / p + (C93773 * C108555) / C107192);
    const double C100824 =
        -((C93682 * C106935) / p + (C93773 * C108557) / C107192);
    const double C108552 = C108520 / C107192;
    const double C107066 = C59723 / C104134;
    const double C107063 = C63213 / C104134;
    const double C107074 = C63256 / C104134;
    const double C108565 = C108534 / C107192;
    const double C60270 =
        -((C63213 * C106925) / p + (C90585 * C108551) / C107192);
    const double C60690 =
        -((C63256 * C106925) / p + (C90614 * C108551) / C107192);
    const double C63241 =
        -((C63256 * C106930) / p + (C90614 * C108555) / C107192);
    const double C108574 = C108543 / C107192;
    const double C90599 =
        -((C90614 * C106930) / p + (C95650 * C108555) / C107192);
    const double C108579 = C108548 / C107192;
    const double C108580 = C108549 / C107192;
    const double C108581 = C108550 / C107192;
    const double C108582 = C63315 - C108552;
    const double C108592 = C90656 - C108565;
    const double C107094 = C60270 * p;
    const double C107062 = C60270 / C104134;
    const double C106952 = C60270 / q;
    const double C107102 = C60690 * p;
    const double C107073 = C60690 / C104134;
    const double C106967 = C60690 / q;
    const double C107112 = C63241 * p;
    const double C107071 = C63241 / C104134;
    const double C107014 = C63241 / q;
    const double C108601 = C91907 - C108574;
    const double C61220 =
        -((C63241 * C106925) / p + (C90599 * C108551) / C107192);
    const double C108606 = C92793 - C108579;
    const double C108607 = C93284 - C108580;
    const double C108608 = C93548 - C108581;
    const double C108609 = C108582 / C108518;
    const double C108617 = C108592 / C108518;
    const double C61321 = -(C63213 * C107115 + C107094) / q;
    const double C71828 = -(C59723 * C107116 + C107094) / q;
    const double C62462 = -(C63256 * C107115 + C107102) / q;
    const double C72151 = -(C59723 * C107120 + C107102) / q;
    const double C74528 = -(C63256 * C107116 + C107112) / q;
    const double C75244 = -(C63213 * C107120 + C107112) / q;
    const double C108623 = C108601 / C108518;
    const double C107070 = C61220 / C104134;
    const double C107069 = C61220 * p;
    const double C106986 = C61220 / q;
    const double C108626 = C108606 / C108518;
    const double C108627 = C108607 / C108518;
    const double C108628 = C108608 / C108518;
    const double C59693 =
        C108609 - ((C59723 * C106925) / p + (C90239 * C108551) / C107192);
    const double C61306 =
        C108609 - ((C63213 * C106930) / p + (C90585 * C108555) / C107192);
    const double C62447 =
        C108609 - ((C63256 * C106935) / p + (C90614 * C108557) / C107192);
    const double C90224 =
        C108617 - ((C90239 * C106925) / p + (C91892 * C108551) / C107192);
    const double C90352 =
        C108617 - ((C90585 * C106930) / p + (C95502 * C108555) / C107192);
    const double C90476 =
        C108617 - ((C90614 * C106935) / p + (C95650 * C108557) / C107192);
    const double C107067 = C72151 / C104134;
    const double C107077 = C74528 / C104134;
    const double C107078 = C75244 / C104134;
    const double C91876 =
        C108623 - ((C91892 * C106925) / p + (C92777 * C108551) / C107192);
    const double C91928 =
        C108623 - ((C95502 * C106930) / p + (C96385 * C108555) / C107192);
    const double C91957 =
        C108623 - ((C95650 * C106935) / p + (C99942 * C108557) / C107192);
    const double C58901 = -(C60270 * C107120 + C107069) / q;
    const double C59337 = -(C60690 * C107116 + C107069) / q;
    const double C59413 = -(C63241 * C107115 + C107069) / q;
    const double C92868 =
        C108626 - ((C92777 * C106925) / p + (C93332 * C108551) / C107192);
    const double C92912 =
        C108626 - ((C96385 * C106930) / p + (C96909 * C108555) / C107192);
    const double C92968 =
        C108626 - ((C99942 * C106935) / p + (C100467 * C108557) / C107192);
    const double C93347 =
        C108627 - ((C93332 * C106925) / p + (C93563 * C108551) / C107192);
    const double C96924 =
        C108627 - ((C96909 * C106930) / p + (C97136 * C108555) / C107192);
    const double C96953 =
        C108627 - ((C100467 * C106935) / p + (C100691 * C108557) / C107192);
    const double C93632 =
        C108628 - ((C93563 * C106925) / p + (C93723 * C108551) / C107192);
    const double C97192 =
        C108628 - ((C97136 * C106930) / p + (C97282 * C108555) / C107192);
    const double C100734 =
        C108628 - ((C100691 * C106935) / p + (C100824 * C108557) / C107192);
    const double C106929 = C59693 / C104134;
    const double C59676 = C107080 - (C59723 * C107115) / q - (C59693 * p) / q;
    const double C106989 = C61306 / C104134;
    const double C73422 = C107080 - (C63213 * C107116) / q - (C61306 * p) / q;
    const double C107032 = C62447 / C104134;
    const double C75301 = C107080 - (C63256 * C107120) / q - (C62447 * p) / q;
    const double C59662 =
        (C59723 - (C90239 * q) / C107192) / p -
        ((C59693 * C106925) / p + (C90224 * C108551) / C107192);
    const double C60225 =
        -((C59693 * C106930) / p + (C90224 * C108555) / C107192);
    const double C60645 =
        -((C59693 * C106935) / p + (C90224 * C108557) / C107192);
    const double C108522 = C90352 * q;
    const double C60240 =
        -((C61306 * C106925) / p + (C90352 * C108551) / C107192);
    const double C61537 =
        (C63213 - (C90585 * q) / C107192) / p -
        ((C61306 * C106930) / p + (C90352 * C108555) / C107192);
    const double C61872 =
        -((C61306 * C106935) / p + (C90352 * C108557) / C107192);
    const double C108524 = C90476 * q;
    const double C60660 =
        -((C62447 * C106925) / p + (C90476 * C108551) / C107192);
    const double C62604 =
        -((C62447 * C106930) / p + (C90476 * C108555) / C107192);
    const double C62680 =
        (C63256 - (C90614 * q) / C107192) / p -
        ((C62447 * C106935) / p + (C90476 * C108557) / C107192);
    const double C90205 =
        (C90239 - (C91892 * q) / C107192) / p -
        ((C90224 * C106925) / p + (C91876 * C108551) / C107192);
    const double C93946 =
        -((C90224 * C106935) / p + (C91876 * C108557) / C107192);
    const double C108538 = C91928 * q;
    const double C90254 =
        -((C90352 * C106925) / p + (C91928 * C108551) / C107192);
    const double C90434 =
        (C90585 - (C95502 * q) / C107192) / p -
        ((C90352 * C106930) / p + (C91928 * C108555) / C107192);
    const double C90448 =
        -((C90352 * C106935) / p + (C91928 * C108557) / C107192);
    const double C108539 = C91957 * q;
    const double C90283 =
        -((C90476 * C106925) / p + (C91957 * C108551) / C107192);
    const double C90544 =
        -((C90476 * C106930) / p + (C91957 * C108555) / C107192);
    const double C90558 =
        (C90614 - (C95650 * q) / C107192) / p -
        ((C90476 * C106935) / p + (C91957 * C108557) / C107192);
    const double C106996 = C58901 / q;
    const double C92090 =
        (C91892 - (C92777 * q) / C107192) / p -
        ((C91876 * C106925) / p + (C92868 * C108551) / C107192);
    const double C92172 =
        (C95502 - (C96385 * q) / C107192) / p -
        ((C91928 * C106930) / p + (C92912 * C108555) / C107192);
    const double C92187 =
        -((C91928 * C106925) / p + (C92912 * C108551) / C107192);
    const double C108544 = C92968 * q;
    const double C92259 =
        -((C91957 * C106925) / p + (C92968 * C108551) / C107192);
    const double C92303 =
        (C95650 - (C99942 * q) / C107192) / p -
        ((C91957 * C106935) / p + (C92968 * C108557) / C107192);
    const double C95799 =
        -((C91957 * C106930) / p + (C92968 * C108555) / C107192);
    const double C92883 =
        (C92777 - (C93332 * q) / C107192) / p -
        ((C92868 * C106925) / p + (C93347 * C108551) / C107192);
    const double C92982 =
        (C96385 - (C96909 * q) / C107192) / p -
        ((C92912 * C106930) / p + (C96924 * C108555) / C107192);
    const double C93049 =
        (C99942 - (C100467 * q) / C107192) / p -
        ((C92968 * C106935) / p + (C96953 * C108557) / C107192);
    const double C96510 =
        -((C92968 * C106930) / p + (C96953 * C108555) / C107192);
    const double C93431 =
        (C93332 - (C93563 * q) / C107192) / p -
        ((C93347 * C106925) / p + (C93632 * C108551) / C107192);
    const double C93500 =
        (C96909 - (C97136 * q) / C107192) / p -
        ((C96924 * C106930) / p + (C97192 * C108555) / C107192);
    const double C93527 =
        (C100467 - (C100691 * q) / C107192) / p -
        ((C96953 * C106935) / p + (C100734 * C108557) / C107192);
    const double C107079 = C75301 / C104134;
    const double C106928 = C59662 / C104134;
    const double C52273 =
        C59723 / q - (C59693 * C107115) / q - (C59662 * p) / q;
    const double C106950 = C60225 / C104134;
    const double C106942 = C60225 * p;
    const double C106965 = C60645 / C104134;
    const double C106948 = C60645 * p;
    const double C108554 = C108522 / C107192;
    const double C106990 = C60240 * p;
    const double C106988 = C60240 / C104134;
    const double C107001 = C61537 / C104134;
    const double C54995 =
        C63213 / q - (C61306 * C107116) / q - (C61537 * p) / q;
    const double C107008 = C61872 / C104134;
    const double C106999 = C61872 * p;
    const double C108556 = C108524 / C107192;
    const double C107033 = C60660 * p;
    const double C107031 = C60660 / C104134;
    const double C107042 = C62604 / C104134;
    const double C107038 = C62604 * p;
    const double C107048 = C62680 / C104134;
    const double C57219 =
        C63256 / q - (C62447 * C107120) / q - (C62680 * p) / q;
    const double C108521 = C90205 * q;
    const double C59630 =
        (3 * (C59693 - (C90224 * q) / C107192)) / C108518 -
        ((C59662 * C106925) / p + (C90205 * C108551) / C107192);
    const double C60286 =
        -((C59662 * C106930) / p + (C90205 * C108555) / C107192);
    const double C60706 =
        -((C59662 * C106935) / p + (C90205 * C108557) / C107192);
    const double C61205 =
        -((C60645 * C106930) / p + (C93946 * C108555) / C107192);
    const double C108569 = C108538 / C107192;
    const double C108526 = C90434 * q;
    const double C61567 =
        -((C61537 * C106925) / p + (C90434 * C108551) / C107192);
    const double C62389 =
        -((C61537 * C106935) / p + (C90434 * C108557) / C107192);
    const double C61902 =
        -((C61872 * C106925) / p + (C90448 * C108551) / C107192);
    const double C108570 = C108539 / C107192;
    const double C62619 =
        -((C62604 * C106925) / p + (C90544 * C108551) / C107192);
    const double C108527 = C90558 * q;
    const double C62710 =
        -((C62680 * C106925) / p + (C90558 * C108551) / C107192);
    const double C63155 =
        -((C62680 * C106930) / p + (C90558 * C108555) / C107192);
    const double C108535 = C92090 * q;
    const double C90641 =
        (3 * (C90224 - (C91876 * q) / C107192)) / C108518 -
        ((C90205 * C106925) / p + (C92090 * C108551) / C107192);
    const double C94330 =
        -((C90205 * C106930) / p + (C92090 * C108555) / C107192);
    const double C94413 =
        -((C90205 * C106935) / p + (C92090 * C108557) / C107192);
    const double C108536 = C92172 * q;
    const double C90839 =
        -((C90434 * C106925) / p + (C92172 * C108551) / C107192);
    const double C91070 =
        -((C90434 * C106935) / p + (C92172 * C108557) / C107192);
    const double C108575 = C108544 / C107192;
    const double C108537 = C92303 * q;
    const double C90969 =
        -((C90558 * C106925) / p + (C92303 * C108551) / C107192);
    const double C91278 =
        -((C90558 * C106930) / p + (C92303 * C108555) / C107192);
    const double C108545 = C92883 * q;
    const double C92105 =
        (3 * (C91876 - (C92868 * q) / C107192)) / C108518 -
        ((C92090 * C106925) / p + (C92883 * C108551) / C107192);
    const double C95856 =
        -((C92090 * C106930) / p + (C92883 * C108555) / C107192);
    const double C99442 =
        -((C92090 * C106935) / p + (C92883 * C108557) / C107192);
    const double C108546 = C92982 * q;
    const double C92202 =
        (3 * (C91928 - (C92912 * q) / C107192)) / C108518 -
        ((C92172 * C106930) / p + (C92982 * C108555) / C107192);
    const double C92274 =
        -((C92172 * C106925) / p + (C92982 * C108551) / C107192);
    const double C99536 =
        -((C92172 * C106935) / p + (C92982 * C108557) / C107192);
    const double C108547 = C93049 * q;
    const double C92360 =
        -((C92303 * C106925) / p + (C93049 * C108551) / C107192);
    const double C96019 =
        -((C92303 * C106930) / p + (C93049 * C108555) / C107192);
    const double C93089 =
        (3 * (C92868 - (C93347 * q) / C107192)) / C108518 -
        ((C92883 * C106925) / p + (C93431 * C108551) / C107192);
    const double C100239 =
        -((C92883 * C106935) / p + (C93431 * C108557) / C107192);
    const double C93130 =
        (3 * (C92912 - (C96924 * q) / C107192)) / C108518 -
        ((C92982 * C106930) / p + (C93500 * C108555) / C107192);
    const double C93200 =
        -((C92982 * C106925) / p + (C93500 * C108551) / C107192);
    const double C100254 =
        -((C92982 * C106935) / p + (C93500 * C108557) / C107192);
    const double C93215 =
        (3 * (C92968 - (C96953 * q) / C107192)) / C108518 -
        ((C93049 * C106935) / p + (C93527 * C108557) / C107192);
    const double C93243 =
        -((C93049 * C106925) / p + (C93527 * C108551) / C107192);
    const double C96738 =
        -((C93049 * C106930) / p + (C93527 * C108555) / C107192);
    const double C52769 = -(C59693 * C107116 + C106942) / q;
    const double C58711 = C107063 - (C60270 * C107115) / q - C106942 / q;
    const double C52863 = -(C59693 * C107120 + C106948) / q;
    const double C59178 = C107074 - (C60690 * C107115) / q - C106948 / q;
    const double C108584 = C61306 - C108554;
    const double C54670 = -(C61306 * C107115 + C106990) / q;
    const double C58870 = C107066 - (C60270 * C107116) / q - C106990 / q;
    const double C55055 = -(C61306 * C107120 + C106999) / q;
    const double C59571 = C107074 - (C63241 * C107116) / q - C106999 / q;
    const double C108585 = C62447 - C108556;
    const double C56835 = -(C62447 * C107115 + C107033) / q;
    const double C59369 = C107066 - (C60690 * C107120) / q - C107033 / q;
    const double C57159 = -(C62447 * C107116 + C107038) / q;
    const double C59601 = C107063 - (C63241 * C107120) / q - C107038 / q;
    const double C107045 = C57219 / C104134;
    const double C108553 = C108521 / C107192;
    const double C106927 = C59630 / C104134;
    const double C52256 =
        (3 * C59693) / C104134 - (C59662 * C107115) / q - (C59630 * p) / q;
    const double C106976 = C60286 / C104134;
    const double C106941 = C60286 * p;
    const double C106982 = C60706 / C104134;
    const double C106947 = C60706 * p;
    const double C107107 = C61205 / q;
    const double C106985 = C61205 / C104134;
    const double C106963 = C61205 * p;
    const double C108596 = C90352 - C108569;
    const double C108558 = C108526 / C107192;
    const double C107019 = C61567 / C104134;
    const double C106995 = C61567 * p;
    const double C107029 = C62389 / C104134;
    const double C107006 = C62389 * p;
    const double C107086 = C61902 / q;
    const double C107024 = C61902 / C104134;
    const double C106998 = C61902 * p;
    const double C108597 = C90476 - C108570;
    const double C107090 = C62619 / q;
    const double C107052 = C62619 / C104134;
    const double C107037 = C62619 * p;
    const double C108559 = C108527 / C107192;
    const double C107056 = C62710 / C104134;
    const double C107041 = C62710 * p;
    const double C107059 = C63155 / C104134;
    const double C107046 = C63155 * p;
    const double C108566 = C108535 / C107192;
    const double C108528 = C90641 * q;
    const double C61059 =
        -((C59630 * C106930) / p + (C90641 * C108555) / C107192);
    const double C61148 =
        -((C59630 * C106935) / p + (C90641 * C108557) / C107192);
    const double C61235 =
        -((C60706 * C106930) / p + (C94413 * C108555) / C107192);
    const double C108567 = C108536 / C107192;
    const double C62404 =
        -((C62389 * C106925) / p + (C91070 * C108551) / C107192);
    const double C108602 = C91957 - C108575;
    const double C108568 = C108537 / C107192;
    const double C63170 =
        -((C63155 * C106925) / p + (C91278 * C108551) / C107192);
    const double C108576 = C108545 / C107192;
    const double C108540 = C92105 * q;
    const double C94315 =
        -((C90641 * C106930) / p + (C92105 * C108555) / C107192);
    const double C94399 =
        -((C90641 * C106935) / p + (C92105 * C108557) / C107192);
    const double C108577 = C108546 / C107192;
    const double C108541 = C92202 * q;
    const double C108578 = C108547 / C107192;
    const double C96074 =
        -((C92105 * C106930) / p + (C93089 * C108555) / C107192);
    const double C99632 =
        -((C92105 * C106935) / p + (C93089 * C108557) / C107192);
    const double C92550 =
        -((C92202 * C106925) / p + (C93130 * C108551) / C107192);
    const double C99786 =
        -((C92202 * C106935) / p + (C93130 * C108557) / C107192);
    const double C106960 = C52863 / C104134;
    const double C60194 = C108584 / C108518 - ((C60240 * C106925) / p +
                                               (C90254 * C108551) / C107192);
    const double C61506 =
        (3 * C108584) / C108518 -
        ((C61537 * C106930) / p + (C90434 * C108555) / C107192);
    const double C106991 = C58870 / q;
    const double C107011 = C55055 / C104134;
    const double C108611 = C108585 / C108518;
    const double C62649 =
        (3 * C108585) / C108518 -
        ((C62680 * C106935) / p + (C90558 * C108557) / C107192);
    const double C107035 = C59369 / q;
    const double C107043 = C57159 / C104134;
    const double C107016 = C59601 / q;
    const double C108583 = C59662 - C108553;
    const double C52222 =
        C59676 / q - (C52273 * C107115) / q + C106929 - (C52256 * p) / q;
    const double C52754 = -(C59662 * C107116 + C106941) / q;
    const double C52975 = C106952 - (C60225 * C107115) / q - C106941 / q;
    const double C52848 = -(C59662 * C107120 + C106947) / q;
    const double C53467 = C106967 - (C60645 * C107115) / q - C106947 / q;
    const double C53371 = -(C60225 * C107120 + C106963) / q;
    const double C53800 = -(C60645 * C107116 + C106963) / q;
    const double C58945 = C107071 - (C61220 * C107115) / q - C106963 / q;
    const double C91042 =
        (3 * C108596) / C108518 -
        ((C90434 * C106930) / p + (C92172 * C108555) / C107192);
    const double C97993 = C108596 / C108518 - ((C90254 * C106925) / p +
                                               (C92187 * C108551) / C107192);
    const double C108586 = C61537 - C108558;
    const double C54980 = C106952 - (C60240 * C107116) / q - C106995 / q;
    const double C55151 = -(C61537 * C107115 + C106995) / q;
    const double C55543 = -(C61537 * C107120 + C107006) / q;
    const double C55970 = C107014 - (C61872 * C107116) / q - C107006 / q;
    const double C55040 = -(C60240 * C107120 + C106998) / q;
    const double C55637 = -(C61872 * C107115 + C106998) / q;
    const double C59104 = C107073 - (C61220 * C107116) / q - C106998 / q;
    const double C108620 = C108597 / C108518;
    const double C91264 =
        (3 * C108597) / C108518 -
        ((C90558 * C106935) / p + (C92303 * C108557) / C107192);
    const double C57144 = -(C60660 * C107116 + C107037) / q;
    const double C57279 = -(C62604 * C107115 + C107037) / q;
    const double C59134 = C107062 - (C61220 * C107120) / q - C107037 / q;
    const double C108587 = C62680 - C108559;
    const double C57204 = C106967 - (C60660 * C107120) / q - C107041 / q;
    const double C57548 = -(C62680 * C107115 + C107041) / q;
    const double C57469 = C107014 - (C62604 * C107120) / q - C107046 / q;
    const double C57879 = -(C62680 * C107116 + C107046) / q;
    const double C108593 = C90205 - C108566;
    const double C108560 = C108528 / C107192;
    const double C106940 = C61059 * p;
    const double C106946 = C61148 * p;
    const double C106981 = C61235 * p;
    const double C108594 = C90434 - C108567;
    const double C107023 = C62404 * p;
    const double C92230 = C108602 / C108518 - ((C95799 * C106930) / p +
                                               (C96510 * C108555) / C107192);
    const double C92318 =
        (3 * C108602) / C108518 -
        ((C92303 * C106935) / p + (C93049 * C108557) / C107192);
    const double C108595 = C90558 - C108568;
    const double C107055 = C63170 * p;
    const double C108603 = C92090 - C108576;
    const double C108571 = C108540 / C107192;
    const double C63764 =
        -((C61148 * C106930) / p + (C94399 * C108555) / C107192);
    const double C108604 = C92172 - C108577;
    const double C108572 = C108541 / C107192;
    const double C108605 = C92303 - C108578;
    const double C107083 = 3 * C60194;
    const double C106958 = C60194 * p;
    const double C106949 = C60194 / C104134;
    const double C107000 = C61506 / C104134;
    const double C55481 =
        (3 * C61306) / C104134 - (C61537 * C107116) / q - (C61506 * p) / q;
    const double C60614 =
        C108611 - ((C60660 * C106925) / p + (C90283 * C108551) / C107192);
    const double C61841 =
        C108611 - ((C62604 * C106930) / p + (C90544 * C108555) / C107192);
    const double C107047 = C62649 / C104134;
    const double C57942 =
        (3 * C62447) / C104134 - (C62680 * C107120) / q - (C62649 * p) / q;
    const double C108610 = C108583 / C108518;
    const double C59708 = (2 * C108583) / p - ((C59630 * C106925) / p +
                                               (C90641 * C108551) / C107192);
    const double C102802 =
        C71828 / q - (C52769 * C107115) / q - (C52754 * p) / q;
    const double C58696 =
        C61321 / C104134 - (C58711 * C107115) / q + C107062 - (C52975 * p) / q;
    const double C106979 = C52848 / C104134;
    const double C102815 =
        C72151 / q - (C52863 * C107115) / q - (C52848 * p) / q;
    const double C59163 =
        C62462 / C104134 - (C59178 * C107115) / q + C107073 - (C53467 * p) / q;
    const double C106945 = C53371 * p;
    const double C103818 = C107077 - (C59337 * C107115) / q - (C53800 * p) / q;
    const double C59398 = C107071 - (C59413 * C107115) / q - (C58945 * p) / q;
    const double C108532 = C91042 * q;
    const double C61552 =
        -((C61506 * C106925) / p + (C91042 * C108551) / C107192);
    const double C63866 =
        -((C61506 * C106935) / p + (C91042 * C108557) / C107192);
    const double C90868 =
        -((C91042 * C106925) / p + (C92202 * C108551) / C107192);
    const double C91166 =
        -((C91042 * C106935) / p + (C92202 * C108557) / C107192);
    const double C62346 =
        -((C60194 * C106935) / p + (C97993 * C108557) / C107192);
    const double C108612 = C108586 / C108518;
    const double C63836 = (2 * C108586) / p - ((C61506 * C106930) / p +
                                               (C91042 * C108555) / C107192);
    const double C107064 = C54980 * p;
    const double C107030 = C55543 / C104134;
    const double C55025 =
        C75244 / q - (C55055 * C107116) / q - (C55543 * p) / q;
    const double C59457 =
        C107077 - (C59571 * C107116) / q + C107071 - (C55970 * p) / q;
    const double C107068 = C55040 * p;
    const double C107075 = C59104 * p;
    const double C107025 = C59104 / q;
    const double C91056 =
        C108620 - ((C90544 * C106930) / p + (C95799 * C108555) / C107192);
    const double C94498 =
        C108620 - ((C90283 * C106925) / p + (C92259 * C108551) / C107192);
    const double C108533 = C91264 * q;
    const double C62695 =
        -((C62649 * C106925) / p + (C91264 * C108551) / C107192);
    const double C64250 =
        -((C62649 * C106930) / p + (C91264 * C108555) / C107192);
    const double C103379 = -(C57159 * C107115 + C57144 * p) / q;
    const double C107065 = C59134 * p;
    const double C107028 = C59134 / q;
    const double C108613 = C108587 / C108518;
    const double C64280 = (2 * C108587) / p - ((C62649 * C106935) / p +
                                               (C91264 * C108557) / C107192);
    const double C107076 = C57204 * p;
    const double C107040 = C57469 * p;
    const double C107060 = C57879 / C104134;
    const double C108629 = C108593 / C108518;
    const double C90670 = (2 * C108593) / p - ((C90641 * C106925) / p +
                                               (C92105 * C108551) / C107192);
    const double C108588 = C59630 - C108560;
    const double C52738 = -(C59630 * C107116 + C106940) / q;
    const double C53925 =
        (3 * C60225) / C104134 - (C60286 * C107115) / q - C106940 / q;
    const double C52832 = -(C59630 * C107120 + C106946) / q;
    const double C54163 =
        (3 * C60645) / C104134 - (C60706 * C107115) / q - C106946 / q;
    const double C54119 = -(C60286 * C107120 + C106981) / q;
    const double C54323 = -(C60706 * C107116 + C106981) / q;
    const double C54400 = C106986 - (C61205 * C107115) / q - C106981 / q;
    const double C108618 = C108594 / C108518;
    const double C91152 = (2 * C108594) / p - ((C91042 * C106930) / p +
                                               (C92202 * C108555) / C107192);
    const double C56288 = -(C61567 * C107120 + C107023) / q;
    const double C56492 = C106986 - (C61902 * C107116) / q - C107023 / q;
    const double C56568 = -(C62389 * C107115 + C107023) / q;
    const double C108542 = C92318 * q;
    const double C90984 =
        -((C91264 * C106925) / p + (C92318 * C108551) / C107192);
    const double C91332 =
        -((C91264 * C106930) / p + (C92318 * C108555) / C107192);
    const double C92639 =
        -((C92318 * C106925) / p + (C93215 * C108551) / C107192);
    const double C96283 =
        -((C92318 * C106930) / p + (C93215 * C108555) / C107192);
    const double C108619 = C108595 / C108518;
    const double C91346 = (2 * C108595) / p - ((C91264 * C106935) / p +
                                               (C92318 * C108557) / C107192);
    const double C58195 = C106986 - (C62619 * C107120) / q - C107055 / q;
    const double C58399 = -(C62710 * C107116 + C107055) / q;
    const double C58476 = -(C63155 * C107115 + C107055) / q;
    const double C92481 = (2 * C108603) / p - ((C92105 * C106925) / p +
                                               (C93089 * C108551) / C107192);
    const double C96144 = C108603 / C108518 - ((C99442 * C106935) / p +
                                               (C100239 * C108557) / C107192);
    const double C108598 = C90641 - C108571;
    const double C107093 = C63764 * p;
    const double C108624 = C108604 / C108518;
    const double C92565 = (2 * C108604) / p - ((C92202 * C106930) / p +
                                               (C93130 * C108555) / C107192);
    const double C108599 = C91042 - C108572;
    const double C108625 = C108605 / C108518;
    const double C92654 = (2 * C108605) / p - ((C92318 * C106935) / p +
                                               (C93215 * C108557) / C107192);
    const double C107162 = C107083 / C104134;
    const double C107130 = C106958 / q;
    const double C54758 =
        C73422 / q - (C54995 * C107116) / q + C106989 - (C55481 * p) / q;
    const double C107088 = 3 * C60614;
    const double C106975 = C60614 * p;
    const double C106964 = C60614 / C104134;
    const double C107109 = 3 * C61841;
    const double C107018 = C61841 * p;
    const double C107007 = C61841 / C104134;
    const double C107061 = C57942 / C104134;
    const double C57040 =
        C75301 / q - (C57219 * C107120) / q + C107032 - (C57942 * p) / q;
    const double C60255 =
        C108610 - ((C60286 * C106930) / p + (C94330 * C108555) / C107192);
    const double C60675 =
        C108610 - ((C60706 * C106935) / p + (C94413 * C108557) / C107192);
    const double C52239 =
        (2 * C59662) / q - (C59630 * C107115) / q - (C59708 * p) / q;
    const double C52816 = -(C52863 * C107116 + C106945) / q;
    const double C103675 = C107078 - (C58901 * C107115) / q - C106945 / q;
    const double C108563 = C108532 / C107192;
    const double C107002 = C61552 * p;
    const double C107005 = C63866 * p;
    const double C63881 =
        -((C63866 * C106925) / p + (C91166 * C108551) / C107192);
    const double C106962 = C62346 * p;
    const double C62257 =
        C108612 - ((C61567 * C106925) / p + (C90839 * C108551) / C107192);
    const double C64016 =
        C108612 - ((C62389 * C106935) / p + (C91070 * C108557) / C107192);
    const double C55465 =
        (2 * C61537) / q - (C61506 * C107116) / q - (C63836 * p) / q;
    const double C58756 =
        C71828 / C104134 - (C58870 * C107116) / q + C107062 - C107064 / q;
    const double C103091 = -(C54995 * C107115 + C107064) / q;
    const double C58885 = C107067 - (C58901 * C107116) / q - C107068 / q;
    const double C103103 = -(C55055 * C107115 + C107068) / q;
    const double C59223 = C107073 - (C59337 * C107116) / q - C107075 / q;
    const double C104000 = -(C59571 * C107115 + C107075) / q;
    const double C61887 =
        -((C61841 * C106925) / p + (C91056 * C108551) / C107192);
    const double C90884 =
        -((C91056 * C106925) / p + (C92230 * C108551) / C107192);
    const double C63010 =
        -((C60614 * C106930) / p + (C94498 * C108555) / C107192);
    const double C108564 = C108533 / C107192;
    const double C107049 = C62695 * p;
    const double C107050 = C64250 * p;
    const double C58813 = C107062 - (C58901 * C107120) / q - C107065 / q;
    const double C59353 = -(C59369 * C107116 + C107065) / q;
    const double C104011 = -(C59601 * C107115 + C107065) / q;
    const double C63098 =
        C108613 - ((C62710 * C106925) / p + (C90969 * C108551) / C107192);
    const double C64046 =
        C108613 - ((C63155 * C106930) / p + (C91278 * C108555) / C107192);
    const double C57926 =
        (2 * C62680) / q - (C62649 * C107120) / q - (C64280 * p) / q;
    const double C59280 =
        C107067 - (C59369 * C107120) / q + C107073 - C107076 / q;
    const double C103391 = -(C57219 * C107115 + C107076) / q;
    const double C57189 = -(C57219 * C107116 + C107040) / q;
    const double C59514 =
        C107078 - (C59601 * C107120) / q + C107071 - C107040 / q;
    const double C94596 =
        C108629 - ((C94413 * C106935) / p + (C99442 * C108557) / C107192);
    const double C98066 =
        C108629 - ((C94330 * C106930) / p + (C95856 * C108555) / C107192);
    const double C63330 =
        -((C59708 * C106930) / p + (C90670 * C108555) / C107192);
    const double C63346 =
        -((C59708 * C106935) / p + (C90670 * C108557) / C107192);
    const double C108614 = C108588 / C108518;
    const double C63299 =
        (5 * C108588) / C108518 -
        ((C59708 * C106925) / p + (C90670 * C108551) / C107192);
    const double C102796 =
        (3 * C52769) / C104134 - (C52754 * C107115) / q - (C52738 * p) / q;
    const double C52941 =
        C58711 / q - (C52975 * C107115) / q + C106950 - (C53925 * p) / q;
    const double C102809 =
        (3 * C52863) / C104134 - (C52848 * C107115) / q - (C52832 * p) / q;
    const double C53433 =
        C59178 / q - (C53467 * C107115) / q + C106965 - (C54163 * p) / q;
    const double C106944 = C54119 * p;
    const double C102926 =
        C59337 / q - (C53800 * C107115) / q - (C54323 * p) / q;
    const double C58930 =
        C59413 / C104134 - (C58945 * C107115) / q + C107070 - (C54400 * p) / q;
    const double C90914 =
        C108618 - ((C90839 * C106925) / p + (C92274 * C108551) / C107192);
    const double C91221 =
        C108618 - ((C91070 * C106935) / p + (C99536 * C108557) / C107192);
    const double C63851 =
        -((C63836 * C106925) / p + (C91152 * C108551) / C107192);
    const double C75928 =
        -((C63836 * C106935) / p + (C91152 * C108557) / C107192);
    const double C106997 = C56288 * p;
    const double C107072 = C56492 * p;
    const double C108573 = C108542 / C107192;
    const double C64265 =
        -((C64250 * C106925) / p + (C91332 * C108551) / C107192);
    const double C91014 =
        C108619 - ((C90969 * C106925) / p + (C92360 * C108551) / C107192);
    const double C91236 =
        C108619 - ((C91278 * C106930) / p + (C96019 * C108555) / C107192);
    const double C64295 =
        -((C64280 * C106925) / p + (C91346 * C108551) / C107192);
    const double C76347 =
        -((C64280 * C106930) / p + (C91346 * C108555) / C107192);
    const double C107039 = C58195 * p;
    const double C103500 = -(C57879 * C107115 + C58399 * p) / q;
    const double C94998 =
        -((C90670 * C106930) / p + (C92481 * C108555) / C107192);
    const double C95083 =
        -((C90670 * C106935) / p + (C92481 * C108557) / C107192);
    const double C108630 = C108598 / C108518;
    const double C91373 =
        (5 * C108598) / C108518 -
        ((C90670 * C106925) / p + (C92481 * C108551) / C107192);
    const double C61074 =
        (3 * C61205) / C104134 - (C61235 * C107115) / q - C107093 / q;
    const double C71945 = -(C61148 * C107116 + C107093) / q;
    const double C73167 = -(C61059 * C107120 + C107093) / q;
    const double C92594 =
        C108624 - ((C99536 * C106935) / p + (C100254 * C108557) / C107192);
    const double C92624 =
        C108624 - ((C92274 * C106925) / p + (C93200 * C108551) / C107192);
    const double C91524 =
        -((C91152 * C106925) / p + (C92565 * C108551) / C107192);
    const double C91750 =
        -((C91152 * C106935) / p + (C92565 * C108557) / C107192);
    const double C108621 = C108599 / C108518;
    const double C91667 =
        (5 * C108599) / C108518 -
        ((C91152 * C106930) / p + (C92565 * C108555) / C107192);
    const double C92609 =
        C108625 - ((C96019 * C106930) / p + (C96738 * C108555) / C107192);
    const double C92669 =
        C108625 - ((C92360 * C106925) / p + (C93243 * C108551) / C107192);
    const double C91638 =
        -((C91346 * C106925) / p + (C92654 * C108551) / C107192);
    const double C91862 =
        -((C91346 * C106930) / p + (C92654 * C108555) / C107192);
    const double C53307 = C106929 - (C60225 * C107116) / q - C107130;
    const double C54654 = C106989 - (C60240 * C107115) / q - C107130;
    const double C107166 = C107088 / C104134;
    const double C107139 = C106975 / q;
    const double C107176 = C107109 / C104134;
    const double C107158 = C107018 / q;
    const double C106951 = C60255 * p;
    const double C106966 = C60675 * p;
    const double C52206 = (3 * C52273) / C104134 - (C52256 * C107115) / q +
                          C106928 - (C52239 * p) / q;
    const double C108590 = C61506 - C108563;
    const double C55134 = -(C61506 * C107115 + C107002) / q;
    const double C56257 =
        (3 * C60240) / C104134 - (C61567 * C107116) / q - C107002 / q;
    const double C55527 = -(C61506 * C107120 + C107005) / q;
    const double C56728 =
        (3 * C61872) / C104134 - (C62389 * C107116) / q - C107005 / q;
    const double C107097 = C63881 * p;
    const double C107147 = C106962 / q;
    const double C53354 = -(C60194 * C107120 + C106962) / q;
    const double C106957 = C62257 * p;
    const double C107013 = C64016 * p;
    const double C55242 = (3 * C54995) / C104134 - (C55481 * C107116) / q +
                          C107001 - (C55465 * p) / q;
    const double C107009 = C61887 * p;
    const double C64001 =
        (C61841 - (C91056 * q) / C107192) / C108518 -
        ((C61887 * C106925) / p + (C90884 * C108551) / C107192);
    const double C106972 = C63010 * p;
    const double C108591 = C62649 - C108564;
    const double C57531 = -(C62649 * C107115 + C107049) / q;
    const double C58431 =
        (3 * C60660) / C104134 - (C62710 * C107120) / q - C107049 / q;
    const double C57863 = -(C62649 * C107116 + C107050) / q;
    const double C58667 =
        (3 * C62604) / C104134 - (C63155 * C107120) / q - C107050 / q;
    const double C106974 = C63098 * p;
    const double C107017 = C64046 * p;
    const double C57760 = (3 * C57219) / C104134 - (C57942 * C107120) / q +
                          C107048 - (C57926 * p) / q;
    const double C63632 =
        -((C60675 * C106930) / p + (C94596 * C108555) / C107192);
    const double C95138 =
        -((C94596 * C106930) / p + (C96144 * C108555) / C107192);
    const double C63497 =
        -((C60255 * C106935) / p + (C98066 * C108557) / C107192);
    const double C107081 = C63330 * p;
    const double C107082 = C63346 * p;
    const double C63467 =
        C108614 - ((C61059 * C106930) / p + (C94315 * C108555) / C107192);
    const double C63617 =
        C108614 - ((C61148 * C106935) / p + (C94399 * C108557) / C107192);
    const double C59646 =
        (5 * C59630) / C104134 - (C59708 * C107115) / q - (C63299 * p) / q;
    const double C101449 = C102796 + xAB * C102802;
    const double C101470 = C52941 + yAB * C52222;
    const double C102130 = C52941 + xAB * C58696;
    const double C101456 = C102809 + xAB * C102815;
    const double C101512 = C53433 + zAB * C52222;
    const double C102340 = C53433 + xAB * C59163;
    const double C52801 = -(C52848 * C107116 + C106944) / q;
    const double C102874 = C106996 - (C53371 * C107115) / q - C106944 / q;
    const double C101533 = C102926 + zAB * C102802;
    const double C102361 = C102926 + xAB * C103818;
    const double C102208 = C58930 + zAB * C58696;
    const double C102382 = C58930 + yAB * C59163;
    const double C102556 = C58930 + xAB * C59398;
    const double C63482 =
        (C61567 - (C90839 * q) / C107192) / p -
        ((C62257 * C106925) / p + (C90914 * C108551) / C107192);
    const double C64178 =
        -((C62257 * C106935) / p + (C90914 * C108557) / C107192);
    const double C64031 =
        -((C64016 * C106925) / p + (C91221 * C108551) / C107192);
    const double C107096 = C63851 * p;
    const double C107108 = C75928 * p;
    const double C55010 = C106996 - (C55040 * C107116) / q - C106997 / q;
    const double C103162 = -(C55543 * C107115 + C106997) / q;
    const double C58990 =
        C59337 / C104134 - (C59104 * C107116) / q + C107070 - C107072 / q;
    const double C103214 = -(C55970 * C107115 + C107072) / q;
    const double C108600 = C91264 - C108573;
    const double C107104 = C64265 * p;
    const double C63647 =
        (C62710 - (C90969 * q) / C107192) / p -
        ((C63098 * C106925) / p + (C91014 * C108551) / C107192);
    const double C64426 =
        -((C63098 * C106930) / p + (C91014 * C108555) / C107192);
    const double C64061 =
        -((C64046 * C106925) / p + (C91236 * C108551) / C107192);
    const double C76103 =
        (C63155 - (C91278 * q) / C107192) / p -
        ((C64046 * C106930) / p + (C91236 * C108555) / C107192);
    const double C107105 = C64295 * p;
    const double C107114 = C76347 * p;
    const double C57174 = -(C57204 * C107116 + C107039) / q;
    const double C59047 =
        C58901 / C104134 - (C59134 * C107120) / q + C107070 - C107039 / q;
    const double C103448 = -(C57469 * C107115 + C107039) / q;
    const double C102001 = C103500 + zAB * C103379;
    const double C95013 =
        C108630 - ((C94315 * C106930) / p + (C96074 * C108555) / C107192);
    const double C95055 =
        C108630 - ((C94399 * C106935) / p + (C99632 * C108557) / C107192);
    const double C54384 =
        C58945 / q - (C54400 * C107115) / q + C106985 - (C61074 * p) / q;
    const double C103006 =
        (3 * C53800) / C104134 - (C54323 * C107115) / q - (C71945 * p) / q;
    const double C106943 = C73167 * p;
    const double C91566 =
        -((C91221 * C106925) / p + (C92594 * C108551) / C107192);
    const double C98715 =
        (C90839 - (C92274 * q) / C107192) / p -
        ((C90914 * C106925) / p + (C92624 * C108551) / C107192);
    const double C91509 =
        C108621 - ((C90868 * C106925) / p + (C92550 * C108551) / C107192);
    const double C91708 =
        C108621 - ((C91166 * C106935) / p + (C99786 * C108557) / C107192);
    const double C91581 =
        -((C91236 * C106925) / p + (C92609 * C108551) / C107192);
    const double C91806 =
        (C91278 - (C96019 * q) / C107192) / p -
        ((C91236 * C106930) / p + (C92609 * C108555) / C107192);
    const double C95236 =
        (C90969 - (C92360 * q) / C107192) / p -
        ((C91014 * C106925) / p + (C92669 * C108551) / C107192);
    const double C106934 = C53307 * p;
    const double C54638 = C106989 - (C54670 * C107115) / q - (C54654 * p) / q;
    const double C53865 = C106929 - (C60645 * C107120) / q - C107139;
    const double C56819 = C107032 - (C60660 * C107115) / q - C107139;
    const double C56033 = C106989 - (C61872 * C107120) / q - C107158;
    const double C57439 = C107032 - (C62604 * C107116) / q - C107158;
    const double C107124 = C106951 / q;
    const double C107133 = C106966 / q;
    const double C101428 = C52206 + xAB * C52222;
    const double C108615 = C108590 / C108518;
    const double C75912 =
        (5 * C108590) / C108518 -
        ((C63836 * C106930) / p + (C91152 * C108555) / C107192);
    const double C106992 = C56257 * p;
    const double C55512 =
        (3 * C55055) / C104134 - (C55543 * C107116) / q - (C55527 * p) / q;
    const double C55728 =
        C59571 / q - (C55970 * C107116) / q + C107008 - (C56728 * p) / q;
    const double C61600 = -(C63866 * C107115 + C107097) / q;
    const double C73824 = -(C61552 * C107120 + C107097) / q;
    const double C74312 =
        (3 * C61902) / C104134 - (C62404 * C107116) / q - C107097 / q;
    const double C54561 = C106965 - (C61205 * C107116) / q - C107147;
    const double C56332 = C107008 - (C61902 * C107115) / q - C107147;
    const double C106961 = C53354 * p;
    const double C107129 = C106957 / q;
    const double C107155 = C107013 / q;
    const double C101711 = C55242 + yAB * C54758;
    const double C107161 = C107009 / q;
    const double C55620 = -(C61841 * C107115 + C107009) / q;
    const double C107098 = C64001 * p;
    const double C107148 = C106972 / q;
    const double C53783 = -(C60614 * C107116 + C106972) / q;
    const double C108616 = C108591 / C108518;
    const double C88345 =
        (5 * C108591) / C108518 -
        ((C64280 * C106935) / p + (C91346 * C108557) / C107192);
    const double C107036 = C58431 * p;
    const double C107044 = C58667 * p;
    const double C107138 = C106974 / q;
    const double C107157 = C107017 / q;
    const double C101994 = C57760 + zAB * C57040;
    const double C107091 = C63632 * p;
    const double C107087 = C63497 * p;
    const double C59739 =
        (2 * C60286) / q - (C61059 * C107115) / q - C107081 / q;
    const double C71812 = -(C59708 * C107116 + C107081) / q;
    const double C59756 =
        (2 * C60706) / q - (C61148 * C107115) / q - C107082 / q;
    const double C72135 = -(C59708 * C107120 + C107082) / q;
    const double C107084 = C63467 * p;
    const double C107089 = C63617 * p;
    const double C52189 =
        (2 * C52256) / q - (C52239 * C107115) / q + C106927 - (C59646 * p) / q;
    const double C101463 = C52801 + xAB * C52816;
    const double C101498 = C102874 + yAB * C102815;
    const double C102158 = C102874 + xAB * C103675;
    const double C107085 = C63482 * p;
    const double C107101 = C64178 * p;
    const double C107099 = C64031 * p;
    const double C61582 = -(C63836 * C107115 + C107096) / q;
    const double C73643 =
        (2 * C61567) / q - (C61552 * C107116) / q - C107096 / q;
    const double C73704 =
        (2 * C62389) / q - (C63866 * C107116) / q - C107108 / q;
    const double C85752 = -(C63836 * C107120 + C107108) / q;
    const double C101697 = C55010 + xAB * C55025;
    const double C102201 = C55010 + yAB * C58885;
    const double C101732 = C103162 + yAB * C103103;
    const double C102215 = C58990 + zAB * C58756;
    const double C102389 = C58990 + yAB * C59223;
    const double C102563 = C58990 + xAB * C59457;
    const double C101767 = C103214 + zAB * C103091;
    const double C102619 = C103214 + yAB * C104000;
    const double C108622 = C108600 / C108518;
    const double C91821 =
        (5 * C108600) / C108518 -
        ((C91346 * C106935) / p + (C92654 * C108557) / C107192);
    const double C62725 = -(C64250 * C107115 + C107104) / q;
    const double C74775 = -(C62695 * C107116 + C107104) / q;
    const double C75216 =
        (3 * C62619) / C104134 - (C63170 * C107120) / q - C107104 / q;
    const double C107092 = C63647 * p;
    const double C107106 = C64426 * p;
    const double C107100 = C64061 * p;
    const double C107111 = C76103 * p;
    const double C62742 = -(C64280 * C107115 + C107105) / q;
    const double C74983 =
        (2 * C62710) / q - (C62695 * C107120) / q - C107105 / q;
    const double C74863 = -(C64280 * C107116 + C107114) / q;
    const double C86888 =
        (2 * C63155) / q - (C64250 * C107120) / q - C107114 / q;
    const double C101931 = C57174 + xAB * C57189;
    const double C102453 = C57174 + zAB * C59353;
    const double C102222 = C59047 + zAB * C58813;
    const double C102396 = C59047 + yAB * C59280;
    const double C102570 = C59047 + xAB * C59514;
    const double C101966 = C103448 + yAB * C103391;
    const double C102663 = C103448 + zAB * C104011;
    const double C101625 = C54384 + zAB * C52941;
    const double C102459 = C54384 + yAB * C53433;
    const double C102555 = C54384 + xAB * C58930;
    const double C101607 = C103006 + zAB * C102796;
    const double C102360 = C103006 + xAB * C102926;
    const double C52785 = -(C52832 * C107116 + C106943) / q;
    const double C102980 =
        (3 * C53371) / C104134 - (C54119 * C107115) / q - C106943 / q;
    const double C107119 = C106934 / q;
    const double C106939 = C53865 * p;
    const double C56803 = C107032 - (C56835 * C107115) / q - (C56819 * p) / q;
    const double C106994 = C56033 * p;
    const double C56923 = C107032 - (C57159 * C107116) / q - (C57439 * p) / q;
    const double C52957 = C60240 / q - (C60194 * C107115) / q - C107124;
    const double C54088 = C106928 - (C60286 * C107116) / q - C107124;
    const double C53449 = C60660 / q - (C60614 * C107115) / q - C107133;
    const double C54355 = C106928 - (C60706 * C107120) / q - C107133;
    const double C63821 =
        C108615 - ((C61552 * C106925) / p + (C90868 * C108551) / C107192);
    const double C76088 =
        C108615 - ((C63866 * C106935) / p + (C91166 * C108557) / C107192);
    const double C73688 =
        (5 * C61506) / C104134 - (C63836 * C107116) / q - (C75912 * p) / q;
    const double C54743 =
        C106991 - (C54980 * C107116) / q + C106988 - C106992 / q;
    const double C103150 = -(C55481 * C107115 + C106992) / q;
    const double C101739 = C55512 + yAB * C55025;
    const double C101753 = C55728 + zAB * C54758;
    const double C102605 = C55728 + yAB * C59457;
    const double C107022 = C73824 * p;
    const double C107026 = C74312 * p;
    const double C106969 = C54561 * p;
    const double C55604 = C107008 - (C55637 * C107115) / q - (C56332 * p) / q;
    const double C107132 = C106961 / q;
    const double C53290 = C60225 / q - (C60194 * C107116) / q - C107129;
    const double C56094 = C107001 - (C61567 * C107115) / q - C107129;
    const double C55954 = C62604 / q - (C61841 * C107116) / q - C107155;
    const double C56759 = C107001 - (C62389 * C107120) / q - C107155;
    const double C56523 = C106988 - (C61902 * C107120) / q - C107161;
    const double C58164 = C107031 - (C62619 * C107116) / q - C107161;
    const double C107171 = C107098 / q;
    const double C54593 = C106950 - (C61205 * C107120) / q - C107148;
    const double C58001 = C107042 - (C62619 * C107115) / q - C107148;
    const double C103373 = C107043 - (C57144 * C107115) / q - (C53783 * p) / q;
    const double C64235 =
        C108616 - ((C62695 * C106925) / p + (C90984 * C108551) / C107192);
    const double C76318 =
        C108616 - ((C64250 * C106930) / p + (C91332 * C108555) / C107192);
    const double C86904 =
        (5 * C62649) / C104134 - (C64280 * C107120) / q - (C88345 * p) / q;
    const double C57025 =
        C107035 - (C57204 * C107120) / q + C107031 - C107036 / q;
    const double C103512 = -(C57942 * C107115 + C107036) / q;
    const double C57381 =
        C107016 - (C57469 * C107120) / q + C107042 - C107044 / q;
    const double C57911 = -(C57942 * C107116 + C107044) / q;
    const double C53848 = C60645 / q - (C60614 * C107120) / q - C107138;
    const double C58239 = C107048 - (C62710 * C107115) / q - C107138;
    const double C56017 = C61872 / q - (C61841 * C107120) / q - C107157;
    const double C58636 = C107048 - (C63155 * C107116) / q - C107157;
    const double C107168 = C107091 / q;
    const double C72785 = -(C60675 * C107116 + C107091) / q;
    const double C107165 = C107087 / q;
    const double C72580 = -(C60255 * C107120 + C107087) / q;
    const double C53910 = (3 * C52975) / C104134 - (C53925 * C107115) / q +
                          C106976 - (C59739 * p) / q;
    const double C102795 =
        (2 * C52754) / q - (C52738 * C107115) / q - (C71812 * p) / q;
    const double C54148 = (3 * C53467) / C104134 - (C54163 * C107115) / q +
                          C106982 - (C59756 * p) / q;
    const double C102808 =
        (2 * C52848) / q - (C52832 * C107115) / q - (C72135 * p) / q;
    const double C107163 = C107084 / q;
    const double C107167 = C107089 / q;
    const double C101427 = C52189 + xAB * C52206;
    const double C107164 = C107085 / q;
    const double C107172 = C107101 / q;
    const double C74356 = -(C62257 * C107120 + C107101) / q;
    const double C107175 = C107099 / q;
    const double C61917 = -(C64016 * C107115 + C107099) / q;
    const double C107020 = C73643 * p;
    const double C56613 = (3 * C55970) / C104134 - (C56728 * C107116) / q +
                          C107029 - (C73704 * p) / q;
    const double C55496 =
        (2 * C55543) / q - (C55527 * C107116) / q - (C85752 * p) / q;
    const double C91610 =
        C108622 - ((C90984 * C106925) / p + (C92639 * C108551) / C107192);
    const double C91764 =
        C108622 - ((C91332 * C106930) / p + (C96283 * C108555) / C107192);
    const double C103499 = -(C57863 * C107115 + C74775 * p) / q;
    const double C107054 = C75216 * p;
    const double C107169 = C107092 / q;
    const double C107174 = C107106 / q;
    const double C72873 = -(C63098 * C107116 + C107106) / q;
    const double C107179 = C107100 / q;
    const double C61934 = -(C64046 * C107115 + C107100) / q;
    const double C107178 = C107111 / q;
    const double C107058 = C74983 * p;
    const double C107051 = C86888 * p;
    const double C5413 = C101625 + yAB * C101512;
    const double C8235 = C101625 + xAB * C102208;
    const double C9065 = C102459 + xAB * C102382;
    const double C9563 = C102555 + xAB * C102556;
    const double C5334 = C101607 + xAB * C101533;
    const double C8654 = C102360 + xAB * C102361;
    const double C101462 = C52785 + xAB * C52801;
    const double C101577 = C102980 + yAB * C102809;
    const double C102157 = C102980 + xAB * C102874;
    const double C52407 = C106929 - (C52769 * C107116) / q - C107119;
    const double C103664 = C73422 / C104134 - (C58870 * C107115) / q - C107119;
    const double C107123 = C106939 / q;
    const double C107150 = C106994 / q;
    const double C54623 =
        C54670 / C104134 - (C54654 * C107115) / q + C106988 - (C52957 * p) / q;
    const double C106933 = C54088 * p;
    const double C56788 =
        C56835 / C104134 - (C56819 * C107115) / q + C107031 - (C53449 * p) / q;
    const double C106938 = C54355 * p;
    const double C107095 = C63821 * p;
    const double C107110 = C76088 * p;
    const double C55226 =
        (2 * C55481) / q - (C55465 * C107116) / q + C107000 - (C73688 * p) / q;
    const double C101669 = C54743 + xAB * C54758;
    const double C102177 = C54743 + yAB * C58756;
    const double C101725 = C103150 + yAB * C103091;
    const double C56272 =
        (3 * C55040) / C104134 - (C56288 * C107116) / q - C107022 / q;
    const double C103161 = -(C55527 * C107115 + C107022) / q;
    const double C56377 =
        C107025 - (C56492 * C107116) / q + C107024 - C107026 / q;
    const double C103326 = -(C56728 * C107115 + C107026) / q;
    const double C107135 = C106969 / q;
    const double C101746 = C55604 + zAB * C54638;
    const double C102598 = C55604 + yAB * C59398;
    const double C53339 = C106960 - (C53371 * C107116) / q - C107132;
    const double C103097 = C107011 - (C55040 * C107115) / q - C107132;
    const double C106954 = C53290 * p;
    const double C55118 = C107001 - (C55151 * C107115) / q - (C56094 * p) / q;
    const double C57324 =
        C107043 - (C57439 * C107116) / q + C107042 - (C55954 * p) / q;
    const double C107004 = C56759 * p;
    const double C106993 = C56523 * p;
    const double C107034 = C58164 * p;
    const double C61856 = C107007 - (C61887 * C107115) / q - C107171;
    const double C72857 = C106964 - (C63010 * C107116) / q - C107171;
    const double C74400 = C106949 - (C62346 * C107120) / q - C107171;
    const double C106956 = C54593 * p;
    const double C57263 = C107042 - (C57279 * C107115) / q - (C58001 * p) / q;
    const double C101917 = C103373 + xAB * C103379;
    const double C102441 = C103373 + zAB * C103818;
    const double C107103 = C64235 * p;
    const double C107113 = C76318 * p;
    const double C57744 =
        (2 * C57942) / q - (C57926 * C107120) / q + C107047 - (C86904 * p) / q;
    const double C101910 = C57025 + xAB * C57040;
    const double C102435 = C57025 + zAB * C59280;
    const double C102008 = C103512 + zAB * C103391;
    const double C101952 = C57381 + yAB * C57040;
    const double C102651 = C57381 + zAB * C59514;
    const double C102015 = C57911 + zAB * C57189;
    const double C106971 = C53848 * p;
    const double C57515 = C107048 - (C57548 * C107115) / q - (C58239 * p) / q;
    const double C107012 = C56017 * p;
    const double C57639 = C107048 - (C57879 * C107116) / q - (C58636 * p) / q;
    const double C60721 = C107090 - (C63010 * C107115) / q - C107168;
    const double C73310 = C106976 - (C61235 * C107120) / q - C107168;
    const double C102925 =
        C57144 / q - (C53783 * C107115) / q - (C72785 * p) / q;
    const double C60318 = C107086 - (C62346 * C107115) / q - C107165;
    const double C73123 = C106982 - (C61235 * C107116) / q - C107165;
    const double C106980 = C72580 * p;
    const double C101553 = C53910 + yAB * C52206;
    const double C102129 = C53910 + xAB * C52941;
    const double C101448 = C102795 + xAB * C102796;
    const double C101589 = C54148 + zAB * C52206;
    const double C102339 = C54148 + xAB * C53433;
    const double C101455 = C102808 + xAB * C102809;
    const double C60209 = C107162 - (C60255 * C107115) / q - C107163;
    const double C71929 = C106927 - (C61059 * C107116) / q - C107163;
    const double C60629 = C107166 - (C60675 * C107115) / q - C107167;
    const double C73225 = C106927 - (C61148 * C107120) / q - C107167;
    const double C4583 = C101427 + xAB * C101428;
    const double C60301 = C61567 / q - (C62257 * C107115) / q - C107164;
    const double C72371 = C60286 / q - (C60255 * C107116) / q - C107164;
    const double C62272 = C107029 - (C62404 * C107115) / q - C107172;
    const double C72432 = C107107 - (C62346 * C107116) / q - C107172;
    const double C106959 = C74356 * p;
    const double C73974 = C107090 - (C61887 * C107116) / q - C107175;
    const double C74457 = C107019 - (C62404 * C107120) / q - C107175;
    const double C56140 =
        (3 * C54980) / C104134 - (C56257 * C107116) / q + C107019 - C107020 / q;
    const double C103149 = -(C55465 * C107115 + C107020) / q;
    const double C101865 = C56613 + zAB * C55242;
    const double C102604 = C56613 + yAB * C55728;
    const double C101738 = C55496 + yAB * C55512;
    const double C102000 = C103499 + zAB * C103500;
    const double C58105 =
        C107028 - (C58195 * C107120) / q + C107052 - C107054 / q;
    const double C58415 = -(C58431 * C107116 + C107054) / q;
    const double C103618 = -(C58667 * C107115 + C107054) / q;
    const double C60737 = C62710 / q - (C63098 * C107115) / q - C107169;
    const double C73020 = C60706 / q - (C60675 * C107120) / q - C107169;
    const double C63025 = C107059 - (C63170 * C107115) / q - C107174;
    const double C75102 = C107107 - (C63010 * C107120) / q - C107174;
    const double C103580 = C107060 - (C58399 * C107115) / q - (C72873 * p) / q;
    const double C74209 = C107086 - (C61887 * C107120) / q - C107179;
    const double C75058 = C107056 - (C63170 * C107116) / q - C107179;
    const double C74090 = C63155 / q - (C64046 * C107116) / q - C107178;
    const double C86121 = C62389 / q - (C64016 * C107120) / q - C107178;
    const double C58342 =
        (3 * C57204) / C104134 - (C58431 * C107120) / q + C107056 - C107058 / q;
    const double C103511 = -(C57926 * C107115 + C107058) / q;
    const double C57895 = -(C57926 * C107116 + C107051) / q;
    const double C58579 =
        (3 * C57469) / C104134 - (C58667 * C107120) / q + C107059 - C107051 / q;
    const double C4723 = C101462 + xAB * C101463;
    const double C5195 = C101577 + xAB * C101498;
    const double C7685 = C102157 + xAB * C102158;
    const double C52588 = C106929 - (C52863 * C107120) / q - C107123;
    const double C103829 = C107079 - (C59369 * C107115) / q - C107123;
    const double C54877 = C106989 - (C55055 * C107120) / q - C107150;
    const double C59586 = C107079 - (C59601 * C107116) / q - C107150;
    const double C101662 = C54623 + xAB * C54638;
    const double C102171 = C54623 + yAB * C58696;
    const double C107118 = C106933 / q;
    const double C101896 = C56788 + xAB * C56803;
    const double C102423 = C56788 + zAB * C59163;
    const double C107122 = C106938 / q;
    const double C107170 = C107095 / q;
    const double C107177 = C107110 / q;
    const double C101710 = C55226 + yAB * C55242;
    const double C101817 = C56272 + yAB * C55010;
    const double C101731 = C103161 + yAB * C103162;
    const double C101829 = C56377 + zAB * C54743;
    const double C102388 = C56377 + yAB * C58990;
    const double C101877 = C103326 + zAB * C103150;
    const double C102618 = C103326 + yAB * C103214;
    const double C53559 = C106965 - (C53800 * C107116) / q - C107135;
    const double C103751 = C59571 / C104134 - (C59104 * C107115) / q - C107135;
    const double C101505 = C53339 + yAB * C52816;
    const double C102165 = C53339 + xAB * C58885;
    const double C101690 = C103097 + xAB * C103103;
    const double C102195 = C103097 + yAB * C103675;
    const double C107126 = C106954 / q;
    const double C101704 = C55118 + yAB * C54638;
    const double C101945 = C57324 + yAB * C56923;
    const double C102645 = C57324 + zAB * C59457;
    const double C107152 = C107004 / q;
    const double C107149 = C106993 / q;
    const double C103226 = -(C56033 * C107115 + C106993) / q;
    const double C56908 = C107031 - (C57144 * C107116) / q - C107034 / q;
    const double C103437 = -(C57439 * C107115 + C107034) / q;
    const double C55587 = C107007 - (C55620 * C107115) / q - (C61856 * p) / q;
    const double C106968 = C72857 * p;
    const double C106955 = C74400 * p;
    const double C107128 = C106956 / q;
    const double C53833 = -(C53865 * C107116 + C106956) / q;
    const double C101938 = C57263 + yAB * C56803;
    const double C102639 = C57263 + zAB * C59398;
    const double C107173 = C107103 / q;
    const double C107180 = C107113 / q;
    const double C101993 = C57744 + zAB * C57760;
    const double C107137 = C106971 / q;
    const double C101980 = C57515 + zAB * C56803;
    const double C107154 = C107012 / q;
    const double C101987 = C57639 + zAB * C56923;
    const double C57986 =
        C57279 / C104134 - (C58001 * C107115) / q + C107052 - (C60721 * p) / q;
    const double C106978 = C73310 * p;
    const double C101532 = C102925 + zAB * C102926;
    const double C101916 = C102925 + xAB * C103373;
    const double C56317 =
        C55637 / C104134 - (C56332 * C107115) / q + C107024 - (C60318 * p) / q;
    const double C106983 = C73123 * p;
    const double C107142 = C106980 / q;
    const double C5081 = C101553 + xAB * C101470;
    const double C7571 = C102129 + xAB * C102130;
    const double C4670 = C101448 + xAB * C101449;
    const double C5247 = C101589 + xAB * C101512;
    const double C8567 = C102339 + xAB * C102340;
    const double C4697 = C101455 + xAB * C101456;
    const double C52924 =
        C54654 / q - (C52957 * C107115) / q + C106949 - (C60209 * p) / q;
    const double C106932 = C71929 * p;
    const double C53416 =
        C56819 / q - (C53449 * C107115) / q + C106964 - (C60629 * p) / q;
    const double C106937 = C73225 * p;
    const double C56079 =
        C55151 / C104134 - (C56094 * C107115) / q + C107019 - (C60301 * p) / q;
    const double C106977 = C72371 * p;
    const double C56552 = C107029 - (C56568 * C107115) / q - (C62272 * p) / q;
    const double C106987 = C72432 * p;
    const double C107131 = C106959 / q;
    const double C107053 = C73974 * p;
    const double C107021 = C74457 * p;
    const double C101793 = C56140 + yAB * C54743;
    const double C101724 = C103149 + yAB * C103150;
    const double C6438 = C101865 + yAB * C101753;
    const double C9758 = C102604 + yAB * C102605;
    const double C5885 = C101738 + yAB * C101739;
    const double C6994 = C102000 + zAB * C102001;
    const double C102033 = C58105 + yAB * C57025;
    const double C102221 = C58105 + zAB * C59047;
    const double C102087 = C58415 + zAB * C57174;
    const double C102117 = C103618 + zAB * C103448;
    const double C58224 =
        C57548 / C104134 - (C58239 * C107115) / q + C107056 - (C60737 * p) / q;
    const double C106984 = C73020 * p;
    const double C58460 = C107059 - (C58476 * C107115) / q - (C63025 * p) / q;
    const double C106973 = C75102 * p;
    const double C102075 = C103580 + zAB * C103373;
    const double C107027 = C74209 * p;
    const double C107057 = C75058 * p;
    const double C58521 =
        C107060 - (C58636 * C107116) / q + C107059 - (C74090 * p) / q;
    const double C107015 = C86121 * p;
    const double C102069 = C58342 + zAB * C57025;
    const double C102007 = C103511 + zAB * C103512;
    const double C102014 = C57895 + zAB * C57911;
    const double C102105 = C58579 + zAB * C57381;
    const double C52392 = C106928 - (C52754 * C107116) / q - C107118;
    const double C102862 = C106991 - (C53307 * C107115) / q - C107118;
    const double C52573 = C106928 - (C52848 * C107120) / q - C107122;
    const double C102938 = C107035 - (C53865 * C107115) / q - C107122;
    const double C61521 = C107000 - (C61552 * C107115) / q - C107170;
    const double C72416 = C107162 - (C62257 * C107116) / q - C107170;
    const double C74074 = C107176 - (C64016 * C107116) / q - C107177;
    const double C85768 = C107000 - (C63866 * C107120) / q - C107177;
    const double C5774 = C101710 + yAB * C101711;
    const double C6217 = C101817 + xAB * C101739;
    const double C7877 = C101817 + yAB * C102201;
    const double C5859 = C101731 + yAB * C101732;
    const double C6272 = C101829 + xAB * C101753;
    const double C8430 = C101829 + yAB * C102215;
    const double C8762 = C102388 + yAB * C102389;
    const double C10090 = C102388 + xAB * C102605;
    const double C6496 = C101877 + yAB * C101767;
    const double C9816 = C102618 + yAB * C102619;
    const double C101519 = C53559 + zAB * C52407;
    const double C102347 = C53559 + xAB * C59223;
    const double C102229 = C103751 + zAB * C103664;
    const double C102403 = C103751 + yAB * C103818;
    const double C102577 = C103751 + xAB * C104000;
    const double C53067 =
        C52769 / C104134 - (C53307 * C107116) / q + C106950 - C107126;
    const double C103085 = C54995 / C104134 - (C54980 * C107115) / q - C107126;
    const double C55361 = C107001 - (C55543 * C107120) / q - C107152;
    const double C56002 = C107016 - (C56033 * C107116) / q - C107152;
    const double C54862 = C106988 - (C55040 * C107120) / q - C107149;
    const double C59119 = C59369 / C104134 - (C59134 * C107116) / q - C107149;
    const double C101774 = C103226 + zAB * C103103;
    const double C102626 = C103226 + yAB * C104011;
    const double C101903 = C56908 + xAB * C56923;
    const double C102429 = C56908 + zAB * C59223;
    const double C101959 = C103437 + yAB * C103379;
    const double C102657 = C103437 + zAB * C104000;
    const double C101745 = C55587 + zAB * C55604;
    const double C101937 = C55587 + yAB * C57263;
    const double C107134 = C106968 / q;
    const double C107127 = C106955 / q;
    const double C53186 = C106950 - (C53371 * C107120) / q - C107128;
    const double C103762 = C59601 / C104134 - (C59134 * C107115) / q - C107128;
    const double C101547 = C53833 + zAB * C52816;
    const double C102375 = C53833 + xAB * C59353;
    const double C62664 = C107047 - (C62695 * C107115) / q - C107173;
    const double C75159 = C107166 - (C63098 * C107120) / q - C107173;
    const double C74847 = C107047 - (C64250 * C107116) / q - C107180;
    const double C86137 = C107176 - (C64046 * C107120) / q - C107180;
    const double C6965 = C101993 + zAB * C101994;
    const double C53680 = C106960 - (C53865 * C107120) / q + C106965 - C107137;
    const double C103385 = C107045 - (C57204 * C107115) / q - C107137;
    const double C55851 = C107011 - (C56033 * C107120) / q + C107008 - C107154;
    const double C57454 = C107045 - (C57469 * C107116) / q - C107154;
    const double C102021 = C57986 + yAB * C56788;
    const double C102207 = C57986 + zAB * C58930;
    const double C107141 = C106978 / q;
    const double C54339 = -(C54355 * C107116 + C106978) / q;
    const double C5002 = C101532 + zAB * C101533;
    const double C9318 = C101532 + xAB * C102441;
    const double C6662 = C101916 + xAB * C101917;
    const double C101823 = C56317 + zAB * C54623;
    const double C102381 = C56317 + yAB * C58930;
    const double C107143 = C106983 / q;
    const double C54103 = C106979 - (C54119 * C107116) / q - C107142;
    const double C102873 = C55040 / q - (C53354 * C107115) / q - C107142;
    const double C101469 = C52924 + yAB * C52941;
    const double C101661 = C52924 + xAB * C54623;
    const double C107117 = C106932 / q;
    const double C101511 = C53416 + zAB * C53433;
    const double C101895 = C53416 + xAB * C56788;
    const double C107121 = C106937 / q;
    const double C101787 = C56079 + yAB * C54623;
    const double C107140 = C106977 / q;
    const double C101859 = C56552 + zAB * C55118;
    const double C102597 = C56552 + yAB * C55604;
    const double C107145 = C106987 / q;
    const double C53323 = C53371 / q - (C53354 * C107116) / q - C107131;
    const double C103268 = C107030 - (C56288 * C107115) / q - C107131;
    const double C58047 =
        C57144 / C104134 - (C58164 * C107116) / q + C107052 - C107053 / q;
    const double C103213 = -(C55954 * C107115 + C107053) / q;
    const double C107159 = C107021 / q;
    const double C103332 = -(C56759 * C107115 + C107021) / q;
    const double C6106 = C101793 + xAB * C101711;
    const double C7766 = C101793 + yAB * C102177;
    const double C5832 = C101724 + yAB * C101725;
    const double C7131 = C102033 + xAB * C101952;
    const double C7961 = C102221 + zAB * C102222;
    const double C9455 = C102221 + yAB * C102435;
    const double C10285 = C102221 + xAB * C102651;
    const double C7379 = C102087 + xAB * C102015;
    const double C9039 = C102087 + zAB * C102453;
    const double C7519 = C102117 + yAB * C102008;
    const double C10009 = C102117 + zAB * C102663;
    const double C102057 = C58224 + zAB * C56788;
    const double C107144 = C106984 / q;
    const double C102093 = C58460 + zAB * C57263;
    const double C107146 = C106973 / q;
    const double C53817 = -(C53848 * C107116 + C106973) / q;
    const double C7326 = C102075 + xAB * C102001;
    const double C8986 = C102075 + zAB * C102441;
    const double C107160 = C107027 / q;
    const double C103225 = -(C56017 * C107115 + C107027) / q;
    const double C58284 = C107056 - (C58399 * C107116) / q - C107057 / q;
    const double C103612 = -(C58636 * C107115 + C107057) / q;
    const double C102099 = C58521 + zAB * C57324;
    const double C107156 = C107015 / q;
    const double C7297 = C102069 + xAB * C101994;
    const double C8957 = C102069 + zAB * C102435;
    const double C7021 = C102007 + zAB * C102008;
    const double C7047 = C102014 + zAB * C102015;
    const double C7463 = C102105 + yAB * C101994;
    const double C9953 = C102105 + zAB * C102651;
    const double C101435 = C52392 + xAB * C52407;
    const double C101491 = C102862 + yAB * C102802;
    const double C102151 = C102862 + xAB * C103664;
    const double C101442 = C52573 + xAB * C52588;
    const double C101540 = C102938 + zAB * C102815;
    const double C102368 = C102938 + xAB * C103829;
    const double C55101 = C107000 - (C55134 * C107115) / q - (C61521 * p) / q;
    const double C106953 = C72416 * p;
    const double C55712 =
        C57439 / q - (C55954 * C107116) / q + C107007 - (C74074 * p) / q;
    const double C107003 = C85768 * p;
    const double C101477 = C53067 + yAB * C52407;
    const double C102137 = C53067 + xAB * C58756;
    const double C101683 = C103085 + xAB * C103091;
    const double C102189 = C103085 + yAB * C103664;
    const double C101718 = C55361 + yAB * C54877;
    const double C101781 = C56002 + zAB * C55025;
    const double C102633 = C56002 + yAB * C59586;
    const double C101676 = C54862 + xAB * C54877;
    const double C102183 = C54862 + yAB * C58813;
    const double C102243 = C59119 + zAB * C58885;
    const double C102417 = C59119 + yAB * C59353;
    const double C102591 = C59119 + xAB * C59586;
    const double C5911 = C101745 + zAB * C101746;
    const double C10393 = C101745 + yAB * C102639;
    const double C6741 = C101937 + yAB * C101938;
    const double C53543 = C106964 - (C53783 * C107116) / q - C107134;
    const double C103548 = C57439 / C104134 - (C58164 * C107115) / q - C107134;
    const double C53170 = C106949 - (C53354 * C107120) / q - C107127;
    const double C54577 = C53865 / C104134 - (C54593 * C107116) / q - C107127;
    const double C103300 = C56033 / C104134 - (C56523 * C107115) / q - C107127;
    const double C101484 = C53186 + yAB * C52588;
    const double C102144 = C53186 + xAB * C58813;
    const double C102236 = C103762 + zAB * C103675;
    const double C102410 = C103762 + yAB * C103829;
    const double C102584 = C103762 + xAB * C104011;
    const double C57498 = C107047 - (C57531 * C107115) / q - (C62664 * p) / q;
    const double C106970 = C75159 * p;
    const double C57623 = C107047 - (C57863 * C107116) / q - (C74847 * p) / q;
    const double C107010 = C86137 * p;
    const double C101526 = C53680 + zAB * C52588;
    const double C102354 = C53680 + xAB * C59280;
    const double C101924 = C103385 + xAB * C103391;
    const double C102447 = C103385 + zAB * C103829;
    const double C101760 = C55851 + zAB * C54877;
    const double C102612 = C55851 + yAB * C59514;
    const double C101973 = C57454 + yAB * C57189;
    const double C102669 = C57454 + zAB * C59586;
    const double C7073 = C102021 + xAB * C101938;
    const double C7903 = C102207 + zAB * C102208;
    const double C9397 = C102207 + yAB * C102423;
    const double C10227 = C102207 + xAB * C102639;
    const double C54029 = C106976 - (C54119 * C107120) / q - C107141;
    const double C103044 = C107028 - (C54593 * C107115) / q - C107141;
    const double C101619 = C54339 + zAB * C52801;
    const double C102374 = C54339 + xAB * C53833;
    const double C6243 = C101823 + xAB * C101746;
    const double C8401 = C101823 + yAB * C102208;
    const double C8733 = C102381 + yAB * C102382;
    const double C10061 = C102381 + xAB * C102598;
    const double C54208 = C106982 - (C54323 * C107116) / q - C107143;
    const double C103038 = C107025 - (C54561 * C107115) / q - C107143;
    const double C101583 = C54103 + yAB * C52801;
    const double C102164 = C54103 + xAB * C53339;
    const double C101497 = C102873 + yAB * C102874;
    const double C101689 = C102873 + xAB * C103097;
    const double C4749 = C101469 + yAB * C101470;
    const double C8069 = C101469 + xAB * C102171;
    const double C5579 = C101661 + xAB * C101662;
    const double C52376 = C106927 - (C52738 * C107116) / q - C107117;
    const double C102974 =
        (3 * C53307) / C104134 - (C54088 * C107115) / q - C107117;
    const double C4915 = C101511 + zAB * C101512;
    const double C9231 = C101511 + xAB * C102423;
    const double C6575 = C101895 + xAB * C101896;
    const double C52557 = C106927 - (C52832 * C107120) / q - C107121;
    const double C103012 =
        (3 * C53865) / C104134 - (C54355 * C107115) / q - C107121;
    const double C6077 = C101787 + xAB * C101704;
    const double C7737 = C101787 + yAB * C102171;
    const double C53971 =
        C52754 / C104134 - (C54088 * C107116) / q + C106976 - C107140;
    const double C102861 = C54980 / q - (C53290 * C107115) / q - C107140;
    const double C6409 = C101859 + yAB * C101746;
    const double C9729 = C102597 + yAB * C102598;
    const double C54446 =
        C53800 / C104134 - (C54561 * C107116) / q + C106985 - C107145;
    const double C103294 = C55970 / C104134 - (C56492 * C107115) / q - C107145;
    const double C101504 = C53323 + yAB * C53339;
    const double C101696 = C53323 + xAB * C55010;
    const double C101811 = C103268 + yAB * C103097;
    const double C102027 = C58047 + yAB * C56908;
    const double C102214 = C58047 + zAB * C58990;
    const double C101766 = C103213 + zAB * C103214;
    const double C101958 = C103213 + yAB * C103437;
    const double C56198 = C107019 - (C56288 * C107120) / q - C107159;
    const double C56507 = C107028 - (C56523 * C107116) / q - C107159;
    const double C101883 = C103332 + zAB * C103162;
    const double C102625 = C103332 + yAB * C103226;
    const double C7239 = C102057 + xAB * C101980;
    const double C8899 = C102057 + zAB * C102423;
    const double C54266 = C106979 - (C54355 * C107120) / q + C106982 - C107144;
    const double C102937 = C57204 / q - (C53848 * C107115) / q - C107144;
    const double C7405 = C102093 + yAB * C101980;
    const double C9895 = C102093 + zAB * C102639;
    const double C54504 =
        C53371 / C104134 - (C54593 * C107120) / q + C106985 - C107146;
    const double C103554 = C57469 / C104134 - (C58195 * C107115) / q - C107146;
    const double C101546 = C53817 + zAB * C53833;
    const double C101930 = C53817 + xAB * C57174;
    const double C56435 =
        C55040 / C104134 - (C56523 * C107120) / q + C107024 - C107160;
    const double C58179 = C57204 / C104134 - (C58195 * C107116) / q - C107160;
    const double C101773 = C103225 + zAB * C103226;
    const double C101965 = C103225 + yAB * C103448;
    const double C102063 = C58284 + zAB * C56908;
    const double C102111 = C103612 + zAB * C103437;
    const double C7434 = C102099 + yAB * C101987;
    const double C9924 = C102099 + zAB * C102645;
    const double C55986 = C57469 / q - (C56017 * C107116) / q - C107156;
    const double C56671 = C107030 - (C56759 * C107120) / q + C107029 - C107156;
    const double C101703 = C55101 + yAB * C55118;
    const double C107125 = C106953 / q;
    const double C101752 = C55712 + zAB * C55728;
    const double C101944 = C55712 + yAB * C57324;
    const double C107151 = C107003 / q;
    const double C101518 = C53543 + zAB * C53559;
    const double C101902 = C53543 + xAB * C56908;
    const double C102039 = C103548 + yAB * C103373;
    const double C102228 = C103548 + zAB * C103751;
    const double C101483 = C53170 + yAB * C53186;
    const double C101675 = C53170 + xAB * C54862;
    const double C101655 = C54577 + zAB * C53339;
    const double C102489 = C54577 + yAB * C53833;
    const double C102590 = C54577 + xAB * C59119;
    const double C101847 = C103300 + zAB * C103097;
    const double C102409 = C103300 + yAB * C103762;
    const double C101979 = C57498 + zAB * C57515;
    const double C107136 = C106970 / q;
    const double C101986 = C57623 + zAB * C57639;
    const double C107153 = C107010 / q;
    const double C101565 = C54029 + yAB * C52573;
    const double C102143 = C54029 + xAB * C53186;
    const double C101649 = C103044 + zAB * C102874;
    const double C102483 = C103044 + yAB * C102938;
    const double C102583 = C103044 + xAB * C103762;
    const double C5387 = C101619 + xAB * C101547;
    const double C8707 = C102374 + xAB * C102375;
    const double C101595 = C54208 + zAB * C52392;
    const double C102346 = C54208 + xAB * C53559;
    const double C101643 = C103038 + zAB * C102862;
    const double C102477 = C103038 + yAB * C102926;
    const double C102576 = C103038 + xAB * C103751;
    const double C5221 = C101583 + xAB * C101505;
    const double C7711 = C102164 + xAB * C102165;
    const double C4863 = C101497 + yAB * C101498;
    const double C8183 = C101497 + xAB * C102195;
    const double C5693 = C101689 + xAB * C101690;
    const double C101434 = C52376 + xAB * C52392;
    const double C101571 = C102974 + yAB * C102796;
    const double C102150 = C102974 + xAB * C102862;
    const double C101441 = C52557 + xAB * C52573;
    const double C101613 = C103012 + zAB * C102809;
    const double C102367 = C103012 + xAB * C102938;
    const double C101559 = C53971 + yAB * C52392;
    const double C102136 = C53971 + xAB * C53067;
    const double C101490 = C102861 + yAB * C102862;
    const double C101682 = C102861 + xAB * C103085;
    const double C101631 = C54446 + zAB * C53067;
    const double C102465 = C54446 + yAB * C53559;
    const double C102562 = C54446 + xAB * C58990;
    const double C101841 = C103294 + zAB * C103085;
    const double C102402 = C103294 + yAB * C103751;
    const double C4889 = C101504 + yAB * C101505;
    const double C8209 = C101504 + xAB * C102201;
    const double C5719 = C101696 + xAB * C101697;
    const double C6191 = C101811 + xAB * C101732;
    const double C7851 = C101811 + yAB * C102195;
    const double C7102 = C102027 + xAB * C101945;
    const double C7932 = C102214 + zAB * C102215;
    const double C9426 = C102214 + yAB * C102429;
    const double C10256 = C102214 + xAB * C102645;
    const double C5998 = C101766 + zAB * C101767;
    const double C10480 = C101766 + yAB * C102657;
    const double C6828 = C101958 + yAB * C101959;
    const double C101799 = C56198 + yAB * C54862;
    const double C101853 = C56507 + zAB * C55010;
    const double C102416 = C56507 + yAB * C59119;
    const double C6523 = C101883 + yAB * C101774;
    const double C9843 = C102625 + yAB * C102626;
    const double C101601 = C54266 + zAB * C52573;
    const double C102353 = C54266 + xAB * C53680;
    const double C101539 = C102937 + zAB * C102938;
    const double C101923 = C102937 + xAB * C103385;
    const double C101637 = C54504 + zAB * C53186;
    const double C102471 = C54504 + yAB * C53680;
    const double C102569 = C54504 + xAB * C59047;
    const double C102045 = C103554 + yAB * C103385;
    const double C102235 = C103554 + zAB * C103762;
    const double C5055 = C101546 + zAB * C101547;
    const double C9371 = C101546 + xAB * C102453;
    const double C6715 = C101930 + xAB * C101931;
    const double C101835 = C56435 + zAB * C54862;
    const double C102395 = C56435 + yAB * C59047;
    const double C102051 = C58179 + yAB * C57174;
    const double C102242 = C58179 + zAB * C59119;
    const double C6025 = C101773 + zAB * C101774;
    const double C10507 = C101773 + yAB * C102663;
    const double C6855 = C101965 + yAB * C101966;
    const double C7268 = C102063 + xAB * C101987;
    const double C8928 = C102063 + zAB * C102429;
    const double C7492 = C102111 + yAB * C102001;
    const double C9982 = C102111 + zAB * C102657;
    const double C101780 = C55986 + zAB * C56002;
    const double C101972 = C55986 + yAB * C57454;
    const double C101871 = C56671 + zAB * C55361;
    const double C102611 = C56671 + yAB * C55851;
    const double C5745 = C101703 + yAB * C101704;
    const double C53051 =
        C53307 / q - (C53290 * C107116) / q + C106949 - C107125;
    const double C103262 = C55481 / C104134 - (C56257 * C107115) / q - C107125;
    const double C5940 = C101752 + zAB * C101753;
    const double C10422 = C101752 + yAB * C102645;
    const double C6770 = C101944 + yAB * C101945;
    const double C55345 = C107000 - (C55527 * C107120) / q - C107151;
    const double C56743 =
        (3 * C56033) / C104134 - (C56759 * C107116) / q - C107151;
    const double C4944 = C101518 + zAB * C101519;
    const double C9260 = C101518 + xAB * C102429;
    const double C6604 = C101902 + xAB * C101903;
    const double C7160 = C102039 + xAB * C101959;
    const double C7990 = C102228 + zAB * C102229;
    const double C9484 = C102228 + yAB * C102441;
    const double C10314 = C102228 + xAB * C102657;
    const double C4807 = C101483 + yAB * C101484;
    const double C8127 = C101483 + xAB * C102183;
    const double C5637 = C101675 + xAB * C101676;
    const double C5553 = C101655 + yAB * C101547;
    const double C8375 = C101655 + xAB * C102243;
    const double C9205 = C102489 + xAB * C102417;
    const double C9703 = C102590 + xAB * C102591;
    const double C6357 = C101847 + xAB * C101774;
    const double C8515 = C101847 + yAB * C102236;
    const double C8847 = C102409 + yAB * C102410;
    const double C10175 = C102409 + xAB * C102626;
    const double C6907 = C101979 + zAB * C101980;
    const double C53664 =
        C53865 / q - (C53848 * C107120) / q + C106964 - C107136;
    const double C103586 = C107061 - (C58431 * C107115) / q - C107136;
    const double C6936 = C101986 + zAB * C101987;
    const double C55835 =
        C56033 / q - (C56017 * C107120) / q + C107007 - C107153;
    const double C58651 = C107061 - (C58667 * C107116) / q - C107153;
    const double C5139 = C101565 + xAB * C101484;
    const double C7629 = C102143 + xAB * C102144;
    const double C5527 = C101649 + yAB * C101540;
    const double C8349 = C101649 + xAB * C102236;
    const double C9179 = C102483 + xAB * C102410;
    const double C9677 = C102583 + xAB * C102584;
    const double C5276 = C101595 + xAB * C101519;
    const double C8596 = C102346 + xAB * C102347;
    const double C5500 = C101643 + yAB * C101533;
    const double C8322 = C101643 + xAB * C102229;
    const double C9152 = C102477 + xAB * C102403;
    const double C9650 = C102576 + xAB * C102577;
    const double C4612 = C101434 + xAB * C101435;
    const double C5168 = C101571 + xAB * C101491;
    const double C7658 = C102150 + xAB * C102151;
    const double C4641 = C101441 + xAB * C101442;
    const double C5361 = C101613 + xAB * C101540;
    const double C8681 = C102367 + xAB * C102368;
    const double C5110 = C101559 + xAB * C101477;
    const double C7600 = C102136 + xAB * C102137;
    const double C4836 = C101490 + yAB * C101491;
    const double C8156 = C101490 + xAB * C102189;
    const double C5666 = C101682 + xAB * C101683;
    const double C5442 = C101631 + yAB * C101519;
    const double C8264 = C101631 + xAB * C102215;
    const double C9094 = C102465 + xAB * C102389;
    const double C9592 = C102562 + xAB * C102563;
    const double C6330 = C101841 + xAB * C101767;
    const double C8488 = C101841 + yAB * C102229;
    const double C8820 = C102402 + yAB * C102403;
    const double C10148 = C102402 + xAB * C102619;
    const double C6135 = C101799 + xAB * C101718;
    const double C7795 = C101799 + yAB * C102183;
    const double C6383 = C101853 + xAB * C101781;
    const double C8541 = C101853 + yAB * C102243;
    const double C8873 = C102416 + yAB * C102417;
    const double C10201 = C102416 + xAB * C102633;
    const double C5305 = C101601 + xAB * C101526;
    const double C8625 = C102353 + xAB * C102354;
    const double C5029 = C101539 + zAB * C101540;
    const double C9345 = C101539 + xAB * C102447;
    const double C6689 = C101923 + xAB * C101924;
    const double C5471 = C101637 + yAB * C101526;
    const double C8293 = C101637 + xAB * C102222;
    const double C9123 = C102471 + xAB * C102396;
    const double C9621 = C102569 + xAB * C102570;
    const double C7187 = C102045 + xAB * C101966;
    const double C8017 = C102235 + zAB * C102236;
    const double C9511 = C102235 + yAB * C102447;
    const double C10341 = C102235 + xAB * C102663;
    const double C6301 = C101835 + xAB * C101760;
    const double C8459 = C101835 + yAB * C102222;
    const double C8791 = C102395 + yAB * C102396;
    const double C10119 = C102395 + xAB * C102612;
    const double C7213 = C102051 + xAB * C101973;
    const double C8043 = C102242 + zAB * C102243;
    const double C9537 = C102242 + yAB * C102453;
    const double C10367 = C102242 + xAB * C102669;
    const double C6051 = C101780 + zAB * C101781;
    const double C10533 = C101780 + yAB * C102669;
    const double C6881 = C101972 + yAB * C101973;
    const double C6467 = C101871 + yAB * C101760;
    const double C9787 = C102611 + yAB * C102612;
    const double C101476 = C53051 + yAB * C53067;
    const double C101668 = C53051 + xAB * C54743;
    const double C101805 = C103262 + yAB * C103085;
    const double C101717 = C55345 + yAB * C55361;
    const double C101889 = C56743 + zAB * C55512;
    const double C102632 = C56743 + yAB * C56002;
    const double C101525 = C53664 + zAB * C53680;
    const double C101909 = C53664 + xAB * C57025;
    const double C102081 = C103586 + zAB * C103385;
    const double C101759 = C55835 + zAB * C55851;
    const double C101951 = C55835 + yAB * C57381;
    const double C102123 = C58651 + zAB * C57454;
    const double C4778 = C101476 + yAB * C101477;
    const double C8098 = C101476 + xAB * C102177;
    const double C5608 = C101668 + xAB * C101669;
    const double C6164 = C101805 + xAB * C101725;
    const double C7824 = C101805 + yAB * C102189;
    const double C5803 = C101717 + yAB * C101718;
    const double C6549 = C101889 + yAB * C101781;
    const double C9869 = C102632 + yAB * C102633;
    const double C4973 = C101525 + zAB * C101526;
    const double C9289 = C101525 + xAB * C102435;
    const double C6633 = C101909 + xAB * C101910;
    const double C7353 = C102081 + xAB * C102008;
    const double C9013 = C102081 + zAB * C102447;
    const double C5969 = C101759 + zAB * C101760;
    const double C10451 = C101759 + yAB * C102651;
    const double C6799 = C101951 + yAB * C101952;
    const double C7545 = C102123 + yAB * C102015;
    const double C10035 = C102123 + zAB * C102669;
    g[0] = C4583;
    g[1] = C4612;
    g[2] = C4641;
    g[3] = C4670;
    g[4] = C4697;
    g[5] = C4723;
    g[6] = C4749;
    g[7] = C4778;
    g[8] = C4807;
    g[9] = C4836;
    g[10] = C4863;
    g[11] = C4889;
    g[12] = C4915;
    g[13] = C4944;
    g[14] = C4973;
    g[15] = C5002;
    g[16] = C5029;
    g[17] = C5055;
    g[18] = C5081;
    g[19] = C5110;
    g[20] = C5139;
    g[21] = C5168;
    g[22] = C5195;
    g[23] = C5221;
    g[24] = C5247;
    g[25] = C5276;
    g[26] = C5305;
    g[27] = C5334;
    g[28] = C5361;
    g[29] = C5387;
    g[30] = C5413;
    g[31] = C5442;
    g[32] = C5471;
    g[33] = C5500;
    g[34] = C5527;
    g[35] = C5553;
    g[36] = C5579;
    g[37] = C5608;
    g[38] = C5637;
    g[39] = C5666;
    g[40] = C5693;
    g[41] = C5719;
    g[42] = C5745;
    g[43] = C5774;
    g[44] = C5803;
    g[45] = C5832;
    g[46] = C5859;
    g[47] = C5885;
    g[48] = C5911;
    g[49] = C5940;
    g[50] = C5969;
    g[51] = C5998;
    g[52] = C6025;
    g[53] = C6051;
    g[54] = C6077;
    g[55] = C6106;
    g[56] = C6135;
    g[57] = C6164;
    g[58] = C6191;
    g[59] = C6217;
    g[60] = C6243;
    g[61] = C6272;
    g[62] = C6301;
    g[63] = C6330;
    g[64] = C6357;
    g[65] = C6383;
    g[66] = C6409;
    g[67] = C6438;
    g[68] = C6467;
    g[69] = C6496;
    g[70] = C6523;
    g[71] = C6549;
    g[72] = C6575;
    g[73] = C6604;
    g[74] = C6633;
    g[75] = C6662;
    g[76] = C6689;
    g[77] = C6715;
    g[78] = C6741;
    g[79] = C6770;
    g[80] = C6799;
    g[81] = C6828;
    g[82] = C6855;
    g[83] = C6881;
    g[84] = C6907;
    g[85] = C6936;
    g[86] = C6965;
    g[87] = C6994;
    g[88] = C7021;
    g[89] = C7047;
    g[90] = C7073;
    g[91] = C7102;
    g[92] = C7131;
    g[93] = C7160;
    g[94] = C7187;
    g[95] = C7213;
    g[96] = C7239;
    g[97] = C7268;
    g[98] = C7297;
    g[99] = C7326;
    g[100] = C7353;
    g[101] = C7379;
    g[102] = C7405;
    g[103] = C7434;
    g[104] = C7463;
    g[105] = C7492;
    g[106] = C7519;
    g[107] = C7545;
    g[108] = C7571;
    g[109] = C7600;
    g[110] = C7629;
    g[111] = C7658;
    g[112] = C7685;
    g[113] = C7711;
    g[114] = C7737;
    g[115] = C7766;
    g[116] = C7795;
    g[117] = C7824;
    g[118] = C7851;
    g[119] = C7877;
    g[120] = C7903;
    g[121] = C7932;
    g[122] = C7961;
    g[123] = C7990;
    g[124] = C8017;
    g[125] = C8043;
    g[126] = C8069;
    g[127] = C8098;
    g[128] = C8127;
    g[129] = C8156;
    g[130] = C8183;
    g[131] = C8209;
    g[132] = C8235;
    g[133] = C8264;
    g[134] = C8293;
    g[135] = C8322;
    g[136] = C8349;
    g[137] = C8375;
    g[138] = C8401;
    g[139] = C8430;
    g[140] = C8459;
    g[141] = C8488;
    g[142] = C8515;
    g[143] = C8541;
    g[144] = C8567;
    g[145] = C8596;
    g[146] = C8625;
    g[147] = C8654;
    g[148] = C8681;
    g[149] = C8707;
    g[150] = C8733;
    g[151] = C8762;
    g[152] = C8791;
    g[153] = C8820;
    g[154] = C8847;
    g[155] = C8873;
    g[156] = C8899;
    g[157] = C8928;
    g[158] = C8957;
    g[159] = C8986;
    g[160] = C9013;
    g[161] = C9039;
    g[162] = C9065;
    g[163] = C9094;
    g[164] = C9123;
    g[165] = C9152;
    g[166] = C9179;
    g[167] = C9205;
    g[168] = C9231;
    g[169] = C9260;
    g[170] = C9289;
    g[171] = C9318;
    g[172] = C9345;
    g[173] = C9371;
    g[174] = C9397;
    g[175] = C9426;
    g[176] = C9455;
    g[177] = C9484;
    g[178] = C9511;
    g[179] = C9537;
    g[180] = C9563;
    g[181] = C9592;
    g[182] = C9621;
    g[183] = C9650;
    g[184] = C9677;
    g[185] = C9703;
    g[186] = C9729;
    g[187] = C9758;
    g[188] = C9787;
    g[189] = C9816;
    g[190] = C9843;
    g[191] = C9869;
    g[192] = C9895;
    g[193] = C9924;
    g[194] = C9953;
    g[195] = C9982;
    g[196] = C10009;
    g[197] = C10035;
    g[198] = C10061;
    g[199] = C10090;
    g[200] = C10119;
    g[201] = C10148;
    g[202] = C10175;
    g[203] = C10201;
    g[204] = C10227;
    g[205] = C10256;
    g[206] = C10285;
    g[207] = C10314;
    g[208] = C10341;
    g[209] = C10367;
    g[210] = C10393;
    g[211] = C10422;
    g[212] = C10451;
    g[213] = C10480;
    g[214] = C10507;
    g[215] = C10533;
    g[216] = C52189;
    g[217] = C52206;
    g[218] = C52222;
    g[219] = C52239;
    g[220] = C52256;
    g[221] = C52273;
    g[222] = C52376;
    g[223] = C52392;
    g[224] = C52407;
    g[225] = C52557;
    g[226] = C52573;
    g[227] = C52588;
    g[228] = C52738;
    g[229] = C52754;
    g[230] = C52769;
    g[231] = C52785;
    g[232] = C52801;
    g[233] = C52816;
    g[234] = C52832;
    g[235] = C52848;
    g[236] = C52863;
    g[237] = C52924;
    g[238] = C52941;
    g[239] = C52957;
    g[240] = C52975;
    g[241] = C53051;
    g[242] = C53067;
    g[243] = C53170;
    g[244] = C53186;
    g[245] = C53290;
    g[246] = C53307;
    g[247] = C53323;
    g[248] = C53339;
    g[249] = C53354;
    g[250] = C53371;
    g[251] = C53416;
    g[252] = C53433;
    g[253] = C53449;
    g[254] = C53467;
    g[255] = C53543;
    g[256] = C53559;
    g[257] = C53664;
    g[258] = C53680;
    g[259] = C53783;
    g[260] = C53800;
    g[261] = C53817;
    g[262] = C53833;
    g[263] = C53848;
    g[264] = C53865;
    g[265] = C53910;
    g[266] = C53925;
    g[267] = C53971;
    g[268] = C54029;
    g[269] = C54088;
    g[270] = C54103;
    g[271] = C54119;
    g[272] = C54148;
    g[273] = C54163;
    g[274] = C54208;
    g[275] = C54266;
    g[276] = C54323;
    g[277] = C54339;
    g[278] = C54355;
    g[279] = C54384;
    g[280] = C54400;
    g[281] = C54446;
    g[282] = C54504;
    g[283] = C54561;
    g[284] = C54577;
    g[285] = C54593;
    g[286] = C54623;
    g[287] = C54638;
    g[288] = C54654;
    g[289] = C54670;
    g[290] = C54743;
    g[291] = C54758;
    g[292] = C54862;
    g[293] = C54877;
    g[294] = C54980;
    g[295] = C54995;
    g[296] = C55010;
    g[297] = C55025;
    g[298] = C55040;
    g[299] = C55055;
    g[300] = C55101;
    g[301] = C55118;
    g[302] = C55134;
    g[303] = C55151;
    g[304] = C55226;
    g[305] = C55242;
    g[306] = C55345;
    g[307] = C55361;
    g[308] = C55465;
    g[309] = C55481;
    g[310] = C55496;
    g[311] = C55512;
    g[312] = C55527;
    g[313] = C55543;
    g[314] = C55587;
    g[315] = C55604;
    g[316] = C55620;
    g[317] = C55637;
    g[318] = C55712;
    g[319] = C55728;
    g[320] = C55835;
    g[321] = C55851;
    g[322] = C55954;
    g[323] = C55970;
    g[324] = C55986;
    g[325] = C56002;
    g[326] = C56017;
    g[327] = C56033;
    g[328] = C56079;
    g[329] = C56094;
    g[330] = C56140;
    g[331] = C56198;
    g[332] = C56257;
    g[333] = C56272;
    g[334] = C56288;
    g[335] = C56317;
    g[336] = C56332;
    g[337] = C56377;
    g[338] = C56435;
    g[339] = C56492;
    g[340] = C56507;
    g[341] = C56523;
    g[342] = C56552;
    g[343] = C56568;
    g[344] = C56613;
    g[345] = C56671;
    g[346] = C56728;
    g[347] = C56743;
    g[348] = C56759;
    g[349] = C56788;
    g[350] = C56803;
    g[351] = C56819;
    g[352] = C56835;
    g[353] = C56908;
    g[354] = C56923;
    g[355] = C57025;
    g[356] = C57040;
    g[357] = C57144;
    g[358] = C57159;
    g[359] = C57174;
    g[360] = C57189;
    g[361] = C57204;
    g[362] = C57219;
    g[363] = C57263;
    g[364] = C57279;
    g[365] = C57324;
    g[366] = C57381;
    g[367] = C57439;
    g[368] = C57454;
    g[369] = C57469;
    g[370] = C57498;
    g[371] = C57515;
    g[372] = C57531;
    g[373] = C57548;
    g[374] = C57623;
    g[375] = C57639;
    g[376] = C57744;
    g[377] = C57760;
    g[378] = C57863;
    g[379] = C57879;
    g[380] = C57895;
    g[381] = C57911;
    g[382] = C57926;
    g[383] = C57942;
    g[384] = C57986;
    g[385] = C58001;
    g[386] = C58047;
    g[387] = C58105;
    g[388] = C58164;
    g[389] = C58179;
    g[390] = C58195;
    g[391] = C58224;
    g[392] = C58239;
    g[393] = C58284;
    g[394] = C58342;
    g[395] = C58399;
    g[396] = C58415;
    g[397] = C58431;
    g[398] = C58460;
    g[399] = C58476;
    g[400] = C58521;
    g[401] = C58579;
    g[402] = C58636;
    g[403] = C58651;
    g[404] = C58667;
    g[405] = C58696;
    g[406] = C58711;
    g[407] = C58756;
    g[408] = C58813;
    g[409] = C58870;
    g[410] = C58885;
    g[411] = C58901;
    g[412] = C58930;
    g[413] = C58945;
    g[414] = C58990;
    g[415] = C59047;
    g[416] = C59104;
    g[417] = C59119;
    g[418] = C59134;
    g[419] = C59163;
    g[420] = C59178;
    g[421] = C59223;
    g[422] = C59280;
    g[423] = C59337;
    g[424] = C59353;
    g[425] = C59369;
    g[426] = C59398;
    g[427] = C59413;
    g[428] = C59457;
    g[429] = C59514;
    g[430] = C59571;
    g[431] = C59586;
    g[432] = C59601;
    g[433] = C59630;
    g[434] = C59646;
    g[435] = C59662;
    g[436] = C59676;
    g[437] = C59693;
    g[438] = C59708;
    g[439] = C59723;
    g[440] = C59739;
    g[441] = C59756;
    g[442] = C60194;
    g[443] = C60209;
    g[444] = C60225;
    g[445] = C60240;
    g[446] = C60255;
    g[447] = C60270;
    g[448] = C60286;
    g[449] = C60301;
    g[450] = C60318;
    g[451] = C60614;
    g[452] = C60629;
    g[453] = C60645;
    g[454] = C60660;
    g[455] = C60675;
    g[456] = C60690;
    g[457] = C60706;
    g[458] = C60721;
    g[459] = C60737;
    g[460] = C61059;
    g[461] = C61074;
    g[462] = C61148;
    g[463] = C61205;
    g[464] = C61220;
    g[465] = C61235;
    g[466] = C61306;
    g[467] = C61321;
    g[468] = C61506;
    g[469] = C61521;
    g[470] = C61537;
    g[471] = C61552;
    g[472] = C61567;
    g[473] = C61582;
    g[474] = C61600;
    g[475] = C61841;
    g[476] = C61856;
    g[477] = C61872;
    g[478] = C61887;
    g[479] = C61902;
    g[480] = C61917;
    g[481] = C61934;
    g[482] = C62257;
    g[483] = C62272;
    g[484] = C62346;
    g[485] = C62389;
    g[486] = C62404;
    g[487] = C62447;
    g[488] = C62462;
    g[489] = C62604;
    g[490] = C62619;
    g[491] = C62649;
    g[492] = C62664;
    g[493] = C62680;
    g[494] = C62695;
    g[495] = C62710;
    g[496] = C62725;
    g[497] = C62742;
    g[498] = C63010;
    g[499] = C63025;
    g[500] = C63098;
    g[501] = C63155;
    g[502] = C63170;
    g[503] = C63213;
    g[504] = C63241;
    g[505] = C63256;
    g[506] = C63299;
    g[507] = C63315;
    g[508] = C63330;
    g[509] = C63346;
    g[510] = C63467;
    g[511] = C63482;
    g[512] = C63497;
    g[513] = C63617;
    g[514] = C63632;
    g[515] = C63647;
    g[516] = C63764;
    g[517] = C63821;
    g[518] = C63836;
    g[519] = C63851;
    g[520] = C63866;
    g[521] = C63881;
    g[522] = C64001;
    g[523] = C64016;
    g[524] = C64031;
    g[525] = C64046;
    g[526] = C64061;
    g[527] = C64178;
    g[528] = C64235;
    g[529] = C64250;
    g[530] = C64265;
    g[531] = C64280;
    g[532] = C64295;
    g[533] = C64426;
    g[534] = C71812;
    g[535] = C71828;
    g[536] = C71929;
    g[537] = C71945;
    g[538] = C72135;
    g[539] = C72151;
    g[540] = C72371;
    g[541] = C72416;
    g[542] = C72432;
    g[543] = C72580;
    g[544] = C72785;
    g[545] = C72857;
    g[546] = C72873;
    g[547] = C73020;
    g[548] = C73123;
    g[549] = C73167;
    g[550] = C73225;
    g[551] = C73310;
    g[552] = C73422;
    g[553] = C73643;
    g[554] = C73688;
    g[555] = C73704;
    g[556] = C73824;
    g[557] = C73974;
    g[558] = C74074;
    g[559] = C74090;
    g[560] = C74209;
    g[561] = C74312;
    g[562] = C74356;
    g[563] = C74400;
    g[564] = C74457;
    g[565] = C74528;
    g[566] = C74775;
    g[567] = C74847;
    g[568] = C74863;
    g[569] = C74983;
    g[570] = C75058;
    g[571] = C75102;
    g[572] = C75159;
    g[573] = C75216;
    g[574] = C75244;
    g[575] = C75301;
    g[576] = C75912;
    g[577] = C75928;
    g[578] = C76088;
    g[579] = C76103;
    g[580] = C76318;
    g[581] = C76347;
    g[582] = C85752;
    g[583] = C85768;
    g[584] = C86121;
    g[585] = C86137;
    g[586] = C86888;
    g[587] = C86904;
    g[588] = C88345;
    g[589] = C90205;
    g[590] = C90224;
    g[591] = C90239;
    g[592] = C90254;
    g[593] = C90283;
    g[594] = C90352;
    g[595] = C90434;
    g[596] = C90448;
    g[597] = C90476;
    g[598] = C90544;
    g[599] = C90558;
    g[600] = C90585;
    g[601] = C90599;
    g[602] = C90614;
    g[603] = C90641;
    g[604] = C90656;
    g[605] = C90670;
    g[606] = C90839;
    g[607] = C90868;
    g[608] = C90884;
    g[609] = C90914;
    g[610] = C90969;
    g[611] = C90984;
    g[612] = C91014;
    g[613] = C91042;
    g[614] = C91056;
    g[615] = C91070;
    g[616] = C91152;
    g[617] = C91166;
    g[618] = C91221;
    g[619] = C91236;
    g[620] = C91264;
    g[621] = C91278;
    g[622] = C91332;
    g[623] = C91346;
    g[624] = C91373;
    g[625] = C91509;
    g[626] = C91524;
    g[627] = C91566;
    g[628] = C91581;
    g[629] = C91610;
    g[630] = C91638;
    g[631] = C91667;
    g[632] = C91708;
    g[633] = C91750;
    g[634] = C91764;
    g[635] = C91806;
    g[636] = C91821;
    g[637] = C91862;
    g[638] = C91876;
    g[639] = C91892;
    g[640] = C91907;
    g[641] = C91928;
    g[642] = C91957;
    g[643] = C92090;
    g[644] = C92105;
    g[645] = C92172;
    g[646] = C92187;
    g[647] = C92202;
    g[648] = C92230;
    g[649] = C92259;
    g[650] = C92274;
    g[651] = C92303;
    g[652] = C92318;
    g[653] = C92360;
    g[654] = C92481;
    g[655] = C92550;
    g[656] = C92565;
    g[657] = C92594;
    g[658] = C92609;
    g[659] = C92624;
    g[660] = C92639;
    g[661] = C92654;
    g[662] = C92669;
    g[663] = C92777;
    g[664] = C92793;
    g[665] = C92868;
    g[666] = C92883;
    g[667] = C92912;
    g[668] = C92968;
    g[669] = C92982;
    g[670] = C93049;
    g[671] = C93089;
    g[672] = C93130;
    g[673] = C93200;
    g[674] = C93215;
    g[675] = C93243;
    g[676] = C93284;
    g[677] = C93332;
    g[678] = C93347;
    g[679] = C93431;
    g[680] = C93500;
    g[681] = C93527;
    g[682] = C93548;
    g[683] = C93563;
    g[684] = C93632;
    g[685] = C93682;
    g[686] = C93723;
    g[687] = C93773;
    g[688] = C93946;
    g[689] = C94315;
    g[690] = C94330;
    g[691] = C94399;
    g[692] = C94413;
    g[693] = C94498;
    g[694] = C94596;
    g[695] = C94998;
    g[696] = C95013;
    g[697] = C95055;
    g[698] = C95083;
    g[699] = C95138;
    g[700] = C95236;
    g[701] = C95502;
    g[702] = C95650;
    g[703] = C95799;
    g[704] = C95856;
    g[705] = C96019;
    g[706] = C96074;
    g[707] = C96144;
    g[708] = C96283;
    g[709] = C96385;
    g[710] = C96510;
    g[711] = C96738;
    g[712] = C96909;
    g[713] = C96924;
    g[714] = C96953;
    g[715] = C97136;
    g[716] = C97192;
    g[717] = C97282;
    g[718] = C97993;
    g[719] = C98066;
    g[720] = C98715;
    g[721] = C99442;
    g[722] = C99536;
    g[723] = C99632;
    g[724] = C99786;
    g[725] = C99942;
    g[726] = C100239;
    g[727] = C100254;
    g[728] = C100467;
    g[729] = C100691;
    g[730] = C100734;
    g[731] = C100824;
}
