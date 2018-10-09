/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2000_3_vr(const double ae,
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
    const double C107 = g[0];
    const double C158 = g[1];
    const double C172 = g[2];
    const double C199 = g[3];
    const double C213 = g[4];
    const double C110 = p + q;
    const double C109 = p * q;
    const double C685 = bs[3];
    const double C684 = bs[2];
    const double C682 = std::pow(Pi, 2.5);
    const double C681 = ce * de;
    const double C680 = bs[0];
    const double C677 = bs[1];
    const double C676 = zP - zQ;
    const double C675 = be * zAB;
    const double C674 = yP - yQ;
    const double C673 = be * yAB;
    const double C672 = 2 * p;
    const double C670 = xP - xQ;
    const double C669 = be * xAB;
    const double C111 = C110 * p;
    const double C683 = std::sqrt(C110);
    const double C679 = q * C110;
    const double C678 = C109 * ce;
    const double C668 = C110 * C109;
    const double C667 = ce * C109;
    const double C698 = 4 * C682;
    const double C697 = kab * C681;
    const double C691 = C676 * C109;
    const double C690 = C674 * C109;
    const double C688 = C670 * C109;
    const double C699 = C109 * C683;
    const double C696 = kab * C678;
    const double C695 = C213 * C667;
    const double C694 = C199 * C667;
    const double C693 = C172 * C667;
    const double C692 = C158 * C667;
    const double C708 = kcd * C697;
    const double C707 = kcd * C696;
    const double C706 = C695 / C668;
    const double C705 = C694 / C668;
    const double C704 = C693 / C668;
    const double C703 = C692 / C668;
    const double C717 = C684 * C708;
    const double C715 = C677 * C708;
    const double C713 = C680 * C708;
    const double C716 = C685 * C707;
    const double C714 = C684 * C707;
    const double C712 = C677 * C707;
    const double C217 =
        (((C670 * C716) / C679 - (xCD * C717) / q) * C698) / C699;
    const double C418 =
        (((C674 * C716) / C679 - (yCD * C717) / q) * C698) / C699;
    const double C605 =
        (((C676 * C716) / C679 - (zCD * C717) / q) * C698) / C699;
    const double C117 =
        (((C670 * C714) / C679 - (xCD * C715) / q) * C698) / C699;
    const double C306 =
        (((C674 * C714) / C679 - (yCD * C715) / q) * C698) / C699;
    const double C493 =
        (((C676 * C714) / C679 - (zCD * C715) / q) * C698) / C699;
    const double C116 =
        (((C670 * C712) / C679 - (xCD * C713) / q) * C698) / C699;
    const double C305 =
        (((C674 * C712) / C679 - (yCD * C713) / q) * C698) / C699;
    const double C492 =
        (((C676 * C712) / C679 - (zCD * C713) / q) * C698) / C699;
    const double C671 = C117 * C109;
    const double C115 = C706 - (C117 * C669) / p - (C217 * C688) / C111;
    const double C132 = -((C117 * C673) / p + (C217 * C690) / C111);
    const double C147 = -((C117 * C675) / p + (C217 * C691) / C111);
    const double C686 = C306 * C109;
    const double C308 = -((C306 * C669) / p + (C418 * C688) / C111);
    const double C323 = C706 - (C306 * C673) / p - (C418 * C690) / C111;
    const double C338 = -((C306 * C675) / p + (C418 * C691) / C111);
    const double C687 = C493 * C109;
    const double C495 = -((C493 * C669) / p + (C605 * C688) / C111);
    const double C510 = -((C493 * C673) / p + (C605 * C690) / C111);
    const double C525 = C706 - (C493 * C675) / p - (C605 * C691) / C111;
    const double C114 = C705 - (C116 * C669) / p - (C117 * C688) / C111;
    const double C131 = -((C116 * C673) / p + (C117 * C690) / C111);
    const double C146 = -((C116 * C675) / p + (C117 * C691) / C111);
    const double C307 = -((C305 * C669) / p + (C306 * C688) / C111);
    const double C322 = C705 - (C305 * C673) / p - (C306 * C690) / C111;
    const double C337 = -((C305 * C675) / p + (C306 * C691) / C111);
    const double C494 = -((C492 * C669) / p + (C493 * C688) / C111);
    const double C509 = -((C492 * C673) / p + (C493 * C690) / C111);
    const double C524 = C705 - (C492 * C675) / p - (C493 * C691) / C111;
    const double C689 = C671 / C111;
    const double C700 = C686 / C111;
    const double C701 = C687 / C111;
    const double C63 = C703 - (C131 * C669) / p - (C132 * C688) / C111;
    const double C70 = C704 - (C146 * C669) / p - (C147 * C688) / C111;
    const double C77 = -((C146 * C673) / p + (C147 * C690) / C111);
    const double C65 = -((C322 * C669) / p + (C323 * C688) / C111);
    const double C72 = -((C337 * C669) / p + (C338 * C688) / C111);
    const double C79 = C704 - (C337 * C673) / p - (C338 * C690) / C111;
    const double C67 = -((C509 * C669) / p + (C510 * C688) / C111);
    const double C74 = -((C524 * C669) / p + (C525 * C688) / C111);
    const double C81 = -((C524 * C673) / p + (C525 * C690) / C111);
    const double C702 = C116 - C689;
    const double C709 = C305 - C700;
    const double C710 = C492 - C701;
    const double C711 = C702 / C672;
    const double C718 = C709 / C672;
    const double C719 = C710 / C672;
    const double C40 =
        (C107 * C667) / C668 - (C114 * C669) / p - (C115 * C688) / C111 + C711;
    const double C49 = C711 - ((C131 * C673) / p + (C132 * C690) / C111);
    const double C56 = C711 - ((C146 * C675) / p + (C147 * C691) / C111);
    const double C44 = C718 - ((C307 * C669) / p + (C308 * C688) / C111);
    const double C51 = C703 - (C322 * C673) / p - (C323 * C690) / C111 + C718;
    const double C58 = C718 - ((C337 * C675) / p + (C338 * C691) / C111);
    const double C46 = C719 - ((C494 * C669) / p + (C495 * C688) / C111);
    const double C53 = C719 - ((C509 * C673) / p + (C510 * C690) / C111);
    const double C60 = C704 - (C524 * C675) / p - (C525 * C691) / C111 + C719;
    vrx[0] = C40;
    vrx[1] = C49;
    vrx[2] = C56;
    vrx[3] = C63;
    vrx[4] = C70;
    vrx[5] = C77;
    vry[0] = C44;
    vry[1] = C51;
    vry[2] = C58;
    vry[3] = C65;
    vry[4] = C72;
    vry[5] = C79;
    vrz[0] = C46;
    vrz[1] = C53;
    vrz[2] = C60;
    vrz[3] = C67;
    vrz[4] = C74;
    vrz[5] = C81;
}
