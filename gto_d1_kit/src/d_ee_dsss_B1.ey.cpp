/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2000_2_vr(const double ae,
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
    const double C729 = bs[3];
    const double C728 = bs[2];
    const double C726 = std::pow(Pi, 2.5);
    const double C725 = ae * be;
    const double C724 = bs[0];
    const double C721 = bs[1];
    const double C720 = C210 * be;
    const double C719 = C209 * be;
    const double C718 = C179 * be;
    const double C717 = C163 * be;
    const double C716 = zP - zQ;
    const double C715 = be * zAB;
    const double C714 = yP - yQ;
    const double C713 = be * yAB;
    const double C712 = 2 * p;
    const double C710 = xP - xQ;
    const double C709 = std::pow(p, 2);
    const double C707 = be * xAB;
    const double C113 = C112 * p;
    const double C727 = std::sqrt(C112);
    const double C723 = p * C112;
    const double C722 = C111 * be;
    const double C708 = be * C111;
    const double C747 = 4 * C726;
    const double C746 = kab * C725;
    const double C743 = C720 / p;
    const double C741 = C719 / p;
    const double C739 = C718 / p;
    const double C737 = C717 / p;
    const double C736 = C716 * C111;
    const double C735 = C714 * C111;
    const double C733 = C710 * C111;
    const double C732 = C112 * C709;
    const double C748 = C111 * C727;
    const double C745 = kab * C722;
    const double C744 = C225 * C708;
    const double C742 = C210 * C708;
    const double C740 = C180 * C708;
    const double C738 = C164 * C708;
    const double C757 = kcd * C746;
    const double C756 = kcd * C745;
    const double C755 = C744 / C732;
    const double C754 = C742 / C732;
    const double C753 = C740 / C732;
    const double C752 = C738 / C732;
    const double C766 = C728 * C757;
    const double C764 = C721 * C757;
    const double C762 = C724 * C757;
    const double C765 = C729 * C756;
    const double C763 = C728 * C756;
    const double C761 = C721 * C756;
    const double C229 =
        -(((C710 * C765) / C723 - (xAB * C766) / p) * C747) / C748;
    const double C442 =
        -(((C714 * C765) / C723 - (yAB * C766) / p) * C747) / C748;
    const double C641 =
        -(((C716 * C765) / C723 - (zAB * C766) / p) * C747) / C748;
    const double C119 =
        -(((C710 * C763) / C723 - (xAB * C764) / p) * C747) / C748;
    const double C323 =
        -(((C714 * C763) / C723 - (yAB * C764) / p) * C747) / C748;
    const double C522 =
        -(((C716 * C763) / C723 - (zAB * C764) / p) * C747) / C748;
    const double C118 =
        -(((C710 * C761) / C723 - (xAB * C762) / p) * C747) / C748;
    const double C322 =
        -(((C714 * C761) / C723 - (yAB * C762) / p) * C747) / C748;
    const double C521 =
        -(((C716 * C761) / C723 - (zAB * C762) / p) * C747) / C748;
    const double C711 = C119 * C111;
    const double C117 = C743 - (C119 * C707) / p - C755 - (C229 * C733) / C113;
    const double C135 = -((C119 * C713) / p + (C229 * C735) / C113);
    const double C151 = -((C119 * C715) / p + (C229 * C736) / C113);
    const double C730 = C323 * C111;
    const double C325 = -((C323 * C707) / p + (C442 * C733) / C113);
    const double C341 = C743 - (C323 * C713) / p - C755 - (C442 * C735) / C113;
    const double C357 = -((C323 * C715) / p + (C442 * C736) / C113);
    const double C731 = C522 * C111;
    const double C524 = -((C522 * C707) / p + (C641 * C733) / C113);
    const double C540 = -((C522 * C713) / p + (C641 * C735) / C113);
    const double C556 = C743 - (C522 * C715) / p - C755 - (C641 * C736) / C113;
    const double C116 = C741 - (C118 * C707) / p - C754 - (C119 * C733) / C113;
    const double C134 = -((C118 * C713) / p + (C119 * C735) / C113);
    const double C150 = -((C118 * C715) / p + (C119 * C736) / C113);
    const double C324 = -((C322 * C707) / p + (C323 * C733) / C113);
    const double C340 = C741 - (C322 * C713) / p - C754 - (C323 * C735) / C113;
    const double C356 = -((C322 * C715) / p + (C323 * C736) / C113);
    const double C523 = -((C521 * C707) / p + (C522 * C733) / C113);
    const double C539 = -((C521 * C713) / p + (C522 * C735) / C113);
    const double C555 = C741 - (C521 * C715) / p - C754 - (C522 * C736) / C113;
    const double C734 = C711 / C113;
    const double C749 = C730 / C113;
    const double C750 = C731 / C113;
    const double C63 = C737 - (C134 * C707) / p - C752 - (C135 * C733) / C113;
    const double C70 = C739 - (C150 * C707) / p - C753 - (C151 * C733) / C113;
    const double C77 = -((C150 * C713) / p + (C151 * C735) / C113);
    const double C65 = -((C340 * C707) / p + (C341 * C733) / C113);
    const double C72 = -((C356 * C707) / p + (C357 * C733) / C113);
    const double C79 = C739 - (C356 * C713) / p - C753 - (C357 * C735) / C113;
    const double C67 = -((C539 * C707) / p + (C540 * C733) / C113);
    const double C74 = -((C555 * C707) / p + (C556 * C733) / C113);
    const double C81 = -((C555 * C713) / p + (C556 * C735) / C113);
    const double C751 = C118 - C734;
    const double C758 = C322 - C749;
    const double C759 = C521 - C750;
    const double C760 = C751 / C712;
    const double C767 = C758 / C712;
    const double C768 = C759 / C712;
    const double C40 = (C108 * be) / p - (C116 * C707) / p -
                       (C109 * C708) / C732 - (C117 * C733) / C113 + C760;
    const double C49 = C760 - ((C134 * C713) / p + (C135 * C735) / C113);
    const double C56 = C760 - ((C150 * C715) / p + (C151 * C736) / C113);
    const double C44 = C767 - ((C324 * C707) / p + (C325 * C733) / C113);
    const double C51 =
        C737 - (C340 * C713) / p - C752 - (C341 * C735) / C113 + C767;
    const double C58 = C767 - ((C356 * C715) / p + (C357 * C736) / C113);
    const double C46 = C768 - ((C523 * C707) / p + (C524 * C733) / C113);
    const double C53 = C768 - ((C539 * C713) / p + (C540 * C735) / C113);
    const double C60 =
        C739 - (C555 * C715) / p - C753 - (C556 * C736) / C113 + C768;
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
