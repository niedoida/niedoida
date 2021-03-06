/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_11_1(
double ae , 
double be , 
double xA , 
double yA , 
double zA , 
double xB , 
double yB , 
double zB , 
double xC , 
double yC , 
double zC , 
const double* bs , 
double* const gx , 
double* const gy , 
double* const gz , 
std::size_t matrix_size , 
std::size_t Ai , 
std::size_t Bi ) 
{
    double C103 = xA-xB;
    double C106 = yA-yB;
    double C107 = zA-zB;
    double C682 = C103*be;
    double C690 = be*C107;
    double C104 = be*ae;
    double C125 = C106*C104;
    double C127 = C107*C104;
    double C118 = C103*C104;
    double C98 = be+ae;
    double C135 =  (  ( ae*yA ) + ( be*yB )  ) /C98;
    double C249 = C135-yB;
    double C138 =  (  ( zA*ae ) + ( be*zB )  ) /C98;
    double C149 = C138-zC;
    double C154 = C149*ae;
    double C321 = C138-zB;
    double C129 =  (  ( be*xB ) + ( ae*xA )  ) /C98;
    double C140 = C129-xB;
    double C142 = C129-xC;
    double C151 = C142*ae;
    double C687 = C106*be;
    double C146 = C135-yC;
    double C153 = C146*ae;
    double C124 = C98*2;
    double C133 =  ( std::pow(C98 , 2) ) *2;
    double C152 =  (  ( std::pow(C107 , 2) ) + (  ( std::pow(C106 , 2) ) + ( std::pow(C103 , 2) )  )  ) *C104;
    double C169 = std::exp( ( - ( C152/C98 )  ) );
    double C170 = C169* ( Pi*4 ) ;
    double C669 = C169* ( Pi*2. ) ;
    double C111 = bs[3];
    double C105 = bs[1];
    double C694 = C669*C105;
    double C122 =  ( ae* ( C694/C98 )  ) /C98;
    double C110 = bs[2];
    double C695 = C669*C110;
    double C740 =  (  ( C695/C98 ) *ae ) /C98;
    double C96 =  (  ( C694*C103 ) /C98 ) + (  (  ( - (  ( C694*C682 ) /C98 )  ) /C98 ) - (  ( C142*C695 ) /C98 )  ) ;
    double C319 =  (  (  ( - (  ( C694*C690 ) /C98 )  ) /C98 ) - (  ( C695*C149 ) /C98 )  ) + (  ( C694*C107 ) /C98 ) ;
    double C753 =  ( C319*ae ) /C98;
    double C247 =  (  ( C694*C106 ) /C98 ) + (  (  ( - (  ( C694*C687 ) /C98 )  ) /C98 ) - (  ( C146*C695 ) /C98 )  ) ;
    double C748 =  ( C247*ae ) /C98;
    double C768 = C170* (  (  ( C118*C110 ) /C98 ) + ( C151*C111 )  ) ;
    double C175 = C170* (  (  ( C127*C105 ) /C98 ) + ( C110*C154 )  ) ;
    double C762 =  ( - ( C175/C98 )  ) /C124;
    double C173 =  (  ( C153*C110 ) + (  ( C105*C125 ) /C98 )  ) *C170;
    double C760 =  ( - ( C173/C98 )  ) /C124;
    double C172 =  (  ( C151*C110 ) + (  ( C118*C105 ) /C98 )  ) *C170;
    double C791 =  (  ( C768*C149 ) /C98 ) - (  ( C321*C172 ) /C98 ) ;
    double C758 =  ( - ( C172/C98 )  ) /C124;
    double cnst47 = C142* (  (  ( C122- (  ( C172*C140 ) /C98 )  ) -C740 ) + (  ( C142*C768 ) /C98 )  ) ;
    double C788 =  (  ( C146*C768 ) /C98 ) - (  ( C172*C249 ) /C98 ) ;
    double C770 =  (  (  ( C110*C127 ) /C98 ) + ( C154*C111 )  ) *C170;
    double C793 =  (  ( C770*C149 ) /C98 ) + (  ( C122- (  ( C321*C175 ) /C98 )  ) -C740 ) ;
    double C790 =  (  ( C146*C770 ) /C98 ) - (  ( C175*C249 ) /C98 ) ;
    double C769 = C170* (  ( C153*C111 ) + (  ( C110*C125 ) /C98 )  ) ;
    double C789 =  (  ( C146*C769 ) /C98 ) + (  ( C122- (  ( C173*C249 ) /C98 )  ) -C740 ) ;
    double C792 =  (  ( C769*C149 ) /C98 ) - (  ( C173*C321 ) /C98 ) ;
    double C102 = bs[0];
    double C670 = C102*C669;
    double C318 =  (  ( C107*C670 ) /C98 ) + (  (  ( - (  ( C690*C670 ) /C98 )  ) /C98 ) - (  ( C694*C149 ) /C98 )  ) ;
    double C752 =  ( C318*ae ) /C98;
    double C117 =  ( ae* ( C670/C98 )  ) /C98;
    double C93 =  (  ( C103*C670 ) /C98 ) + (  (  ( - (  ( C682*C670 ) /C98 )  ) /C98 ) - (  ( C694*C142 ) /C98 )  ) ;
    double C246 =  (  ( C106*C670 ) /C98 ) + (  (  ( - (  ( C687*C670 ) /C98 )  ) /C98 ) - (  ( C694*C146 ) /C98 )  ) ;
    double C747 =  ( C246*ae ) /C98;
    double C171 = C170* (  ( C151*C105 ) + (  ( C102*C118 ) /C98 )  ) ;
    double C261 =  (  ( C146*C172 ) /C98 ) - (  ( C171*C249 ) /C98 ) ;
    double C803 =  (  (  ( C261*C140 ) +C747 ) -C748 ) - ( C788*C142 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 1] +=  ( C803-C246 ) - ( C103*C261 ) ;
    double C333 =  (  ( C172*C149 ) /C98 ) - (  ( C171*C321 ) /C98 ) ;
    double C806 =  (  (  ( C333*C140 ) +C752 ) -C753 ) - ( C142*C791 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=  ( C806-C318 ) - ( C103*C333 ) ;
    double C809 =  ( C333*C249 ) - ( C146*C791 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 1] += C809- ( C261*C107 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 2] += C809- ( C106*C333 ) ;
    double C708 = C171/C133;
    gx[(Ai + 2) * matrix_size + Bi + 2] +=  (  (  (  ( C321*C333 ) -C708 ) - ( C791*C149 )  ) -C758 ) - ( C333*C107 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 1] +=  (  (  (  ( C261*C249 ) -C708 ) - ( C788*C146 )  ) -C758 ) - ( C106*C261 ) ;
    double C193 =  (  ( C172*C142 ) /C98 ) + (  ( C117- (  ( C171*C140 ) /C98 )  ) -C122 ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] += C806- ( C193*C107 ) ;
    double cnst105 =  (  (  (  ( C193*C140 ) + (  ( ae*C93 ) /C98 )  ) -C708 ) - (  ( C96*ae ) /C98 )  ) -cnst47;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( cnst105-C758 ) -C93 ) - ( C193*C103 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 0] += C803- ( C193*C106 ) ;
    double C174 =  (  (  ( C102*C125 ) /C98 ) + ( C153*C105 )  ) *C170;
    double C334 =  (  ( C173*C149 ) /C98 ) - (  ( C174*C321 ) /C98 ) ;
    double C807 =  ( C334*C140 ) - ( C792*C142 ) ;
    double C810 =  (  (  ( C334*C249 ) +C752 ) -C753 ) - ( C146*C792 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=  ( C810-C318 ) - ( C106*C334 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 2] += C807- ( C103*C334 ) ;
    double C713 = C174/C133;
    gy[(Ai + 2) * matrix_size + Bi + 2] +=  (  (  (  ( C321*C334 ) -C713 ) - ( C792*C149 )  ) -C760 ) - ( C334*C107 ) ;
    double C265 =  (  ( C173*C146 ) /C98 ) + (  ( C117- (  ( C174*C249 ) /C98 )  ) -C122 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 1] += C810- ( C265*C107 ) ;
    double C804 =  ( C265*C140 ) - ( C789*C142 ) ;
    double cnst127 =  (  (  (  (  ( C747+ ( C265*C249 )  ) -C713 ) -C748 ) - ( C146*C789 )  ) -C760 ) -C246;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cnst127- ( C106*C265 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] += C804- ( C103*C265 ) ;
    double C190 =  (  ( C173*C142 ) /C98 ) - (  ( C174*C140 ) /C98 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] +=  ( C804-C93 ) - ( C190*C106 ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] += C807- ( C190*C107 ) ;
    double cnst133 =  (  ( C190*C140 ) -C713 ) - (  (  (  ( C769*C142 ) /C98 ) - (  ( C173*C140 ) /C98 )  ) *C142 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  ( cnst133-C760 ) - ( C103*C190 ) ;
    double C176 =  (  ( C154*C105 ) + (  ( C102*C127 ) /C98 )  ) *C170;
    double C191 =  (  ( C175*C142 ) /C98 ) - (  ( C176*C140 ) /C98 ) ;
    double C717 = C176/C133;
    double cnst141 =  (  ( C191*C140 ) -C717 ) - ( C142* (  (  ( C770*C142 ) /C98 ) - (  ( C175*C140 ) /C98 )  )  ) ;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=  ( cnst141-C762 ) - ( C103*C191 ) ;
    double C337 =  (  ( C117- (  ( C321*C176 ) /C98 )  ) -C122 ) + (  ( C175*C149 ) /C98 ) ;
    double C808 =  ( C337*C140 ) - ( C793*C142 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=  ( C808-C93 ) - ( C191*C107 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 2] += C808- ( C103*C337 ) ;
    double C811 =  ( C337*C249 ) - ( C146*C793 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 2] += C811- ( C106*C337 ) ;
    double cnst154 =  (  (  (  (  (  ( C321*C337 ) +C752 ) -C717 ) -C753 ) - ( C793*C149 )  ) -C762 ) -C318;
    gz[(Ai + 2) * matrix_size + Bi + 2] += cnst154- ( C107*C337 ) ;
    double C263 =  (  ( C146*C175 ) /C98 ) - (  ( C176*C249 ) /C98 ) ;
    double C805 =  ( C263*C140 ) - ( C142*C790 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] += C805- ( C106*C191 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 1] +=  ( C811-C246 ) - ( C263*C107 ) ;
    gz[(Ai + 0) * matrix_size + Bi + 1] += C805- ( C103*C263 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 1] +=  (  (  (  ( C263*C249 ) -C717 ) - ( C146*C790 )  ) -C762 ) - ( C106*C263 ) ;
}
