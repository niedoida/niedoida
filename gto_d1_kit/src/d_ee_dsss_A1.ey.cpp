/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2000_1_vr(const double ae,
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
    const double C108 = g[0];
    const double C109 = g[1];
    const double C163 = g[2];
    const double C164 = g[3];
    const double C179 = g[4];
    const double C180 = g[5];
    const double C209 = g[6];
    const double C210 = g[7];
    const double C225 = g[8];
    const double C112 = p + q;
    const double C111 = p * q;
    const double C726 = bs[3];
    const double C725 = bs[2];
    const double C723 = std::pow(Pi, 2.5);
    const double C720 = bs[1];
    const double C719 = ae * be;
    const double C718 = bs[0];
    const double C717 = zP - zQ;
    const double C716 = be * zAB;
    const double C715 = yP - yQ;
    const double C714 = be * yAB;
    const double C713 = 2 * p;
    const double C711 = xP - xQ;
    const double C710 = std::pow(p, 2);
    const double C708 = be * xAB;
    const double C707 = ae / p;
    const double C113 = C112 * p;
    const double C724 = std::sqrt(C112);
    const double C722 = p * C112;
    const double C721 = kab * C111;
    const double C709 = ae * C111;
    const double C741 = 4 * C723;
    const double C739 = kab * C719;
    const double C734 = C717 * C111;
    const double C733 = C715 * C111;
    const double C731 = C711 * C111;
    const double C730 = C112 * C710;
    const double C729 = C707 - 1;
    const double C742 = C111 * C724;
    const double C740 = kcd * C721;
    const double C738 = C225 * C709;
    const double C737 = C210 * C709;
    const double C736 = C180 * C709;
    const double C735 = C164 * C709;
    const double C754 = kcd * C739;
    const double C752 = C729 * C210;
    const double C750 = C729 * C209;
    const double C748 = C729 * C179;
    const double C746 = C729 * C163;
    const double C757 = C726 * C740;
    const double C756 = C725 * C740;
    const double C755 = C720 * C740;
    const double C753 = C738 / C730;
    const double C751 = C737 / C730;
    const double C749 = C736 / C730;
    const double C747 = C735 / C730;
    const double C765 = C725 * C754;
    const double C763 = C720 * C754;
    const double C761 = C718 * C754;
    const double C766 = C757 * ae;
    const double C764 = C756 * ae;
    const double C762 = C755 * ae;
    const double C229 =
        -(((xAB * C765) / p + (C711 * C766) / C722) * C741) / C742;
    const double C442 =
        -(((yAB * C765) / p + (C715 * C766) / C722) * C741) / C742;
    const double C641 =
        -(((zAB * C765) / p + (C717 * C766) / C722) * C741) / C742;
    const double C119 =
        -(((xAB * C763) / p + (C711 * C764) / C722) * C741) / C742;
    const double C323 =
        -(((yAB * C763) / p + (C715 * C764) / C722) * C741) / C742;
    const double C522 =
        -(((zAB * C763) / p + (C717 * C764) / C722) * C741) / C742;
    const double C118 =
        -(((xAB * C761) / p + (C711 * C762) / C722) * C741) / C742;
    const double C322 =
        -(((yAB * C761) / p + (C715 * C762) / C722) * C741) / C742;
    const double C521 =
        -(((zAB * C761) / p + (C717 * C762) / C722) * C741) / C742;
    const double C712 = C119 * C111;
    const double C117 = C752 - (C119 * C708) / p - C753 - (C229 * C731) / C113;
    const double C135 = -((C119 * C714) / p + (C229 * C733) / C113);
    const double C151 = -((C119 * C716) / p + (C229 * C734) / C113);
    const double C727 = C323 * C111;
    const double C325 = -((C323 * C708) / p + (C442 * C731) / C113);
    const double C341 = C752 - (C323 * C714) / p - C753 - (C442 * C733) / C113;
    const double C357 = -((C323 * C716) / p + (C442 * C734) / C113);
    const double C728 = C522 * C111;
    const double C524 = -((C522 * C708) / p + (C641 * C731) / C113);
    const double C540 = -((C522 * C714) / p + (C641 * C733) / C113);
    const double C556 = C752 - (C522 * C716) / p - C753 - (C641 * C734) / C113;
    const double C116 = C750 - (C118 * C708) / p - C751 - (C119 * C731) / C113;
    const double C134 = -((C118 * C714) / p + (C119 * C733) / C113);
    const double C150 = -((C118 * C716) / p + (C119 * C734) / C113);
    const double C324 = -((C322 * C708) / p + (C323 * C731) / C113);
    const double C340 = C750 - (C322 * C714) / p - C751 - (C323 * C733) / C113;
    const double C356 = -((C322 * C716) / p + (C323 * C734) / C113);
    const double C523 = -((C521 * C708) / p + (C522 * C731) / C113);
    const double C539 = -((C521 * C714) / p + (C522 * C733) / C113);
    const double C555 = C750 - (C521 * C716) / p - C751 - (C522 * C734) / C113;
    const double C732 = C712 / C113;
    const double C743 = C727 / C113;
    const double C744 = C728 / C113;
    const double C63 = C746 - (C134 * C708) / p - C747 - (C135 * C731) / C113;
    const double C70 = C748 - (C150 * C708) / p - C749 - (C151 * C731) / C113;
    const double C77 = -((C150 * C714) / p + (C151 * C733) / C113);
    const double C65 = -((C340 * C708) / p + (C341 * C731) / C113);
    const double C72 = -((C356 * C708) / p + (C357 * C731) / C113);
    const double C79 = C748 - (C356 * C714) / p - C749 - (C357 * C733) / C113;
    const double C67 = -((C539 * C708) / p + (C540 * C731) / C113);
    const double C74 = -((C555 * C708) / p + (C556 * C731) / C113);
    const double C81 = -((C555 * C714) / p + (C556 * C733) / C113);
    const double C745 = C118 - C732;
    const double C758 = C322 - C743;
    const double C759 = C521 - C744;
    const double C760 = C745 / C713;
    const double C767 = C758 / C713;
    const double C768 = C759 / C713;
    const double C40 = C729 * C108 - (C116 * C708) / p - (C109 * C709) / C730 -
                       (C117 * C731) / C113 + C760;
    const double C49 = C760 - ((C134 * C714) / p + (C135 * C733) / C113);
    const double C56 = C760 - ((C150 * C716) / p + (C151 * C734) / C113);
    const double C44 = C767 - ((C324 * C708) / p + (C325 * C731) / C113);
    const double C51 =
        C746 - (C340 * C714) / p - C747 - (C341 * C733) / C113 + C767;
    const double C58 = C767 - ((C356 * C716) / p + (C357 * C734) / C113);
    const double C46 = C768 - ((C523 * C708) / p + (C524 * C731) / C113);
    const double C53 = C768 - ((C539 * C714) / p + (C540 * C733) / C113);
    const double C60 =
        C748 - (C555 * C716) / p - C749 - (C556 * C734) / C113 + C768;
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
