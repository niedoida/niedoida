/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_21(
double ae , 
double be , 
double cc , 
double xAB , 
double yAB , 
double zAB , 
double* const gx , 
double* const gy , 
double* const gz , 
std::size_t matrix_size , 
std::size_t Ai , 
std::size_t Bi ) 
{
    double cnst0 = std::sqrt(0.75);
    double C4873 = ae*zAB;
    double C4867 = xAB*ae;
    double C4872 = yAB*ae;
    double C4800 = be*zAB;
    double C4780 = be*yAB;
    double C4757 = be+ae;
    double C4876 = std::sqrt( ( Pi/C4757 ) );
    double C4875 = C4876*C4800;
    double C4755 = - ( C4875/C4757 ) ;
    double C4799 = C4755*ae;
    double C4771 =  ( C4872*C4876 ) /C4757;
    double C4778 =  ( C4867*C4876 ) /C4757;
    double C4774 =  ( C4876*C4873 ) /C4757;
    double C4874 = C4876*C4780;
    double C4754 = - ( C4874/C4757 ) ;
    double C4779 = ae*C4754;
    double C4760 = 2.*C4757;
    double C4921 =  (  ( C4876*ae ) *2. ) /C4760;
    double C4877 = C4876/C4760;
    double C4759 = xAB*be;
    double C4868 = C4759*C4876;
    double C4748 = - ( C4868/C4757 ) ;
    double C4756 = ae*C4748;
    double cnst25 = cc* ( std::sqrt(3.0) ) ;
    double C4934 =  (  (  ( C4867*C4756 ) *2 ) /C4757 ) +C4921;
    gx[(Ai + 1) * matrix_size + Bi + 0] +=  ( C4755* ( C4754*C4934 )  ) *cnst25;
    double cnst28 = ae*2;
    double C4882 = C4756*2;
    double C4885 = C4779*2;
    double C4886 = C4799*2;
    double C4933 =  (  (  ( C4873*C4799 ) *2 ) /C4757 ) +C4921;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( C4754*C4748 ) *C4933 ) *cnst25;
    double C4813 =  ( - (  ( be*C4876 ) *2 )  ) /C4760;
    double C4792 = C4813- (  (  ( C4779*C4780 ) *2 ) /C4757 ) ;
    gy[(Ai + 1) * matrix_size + Bi + 0] +=  ( C4755* ( C4778*C4792 )  ) *cnst25;
    double C4938 =  (  ( C4885- (  ( be*C4754 ) *2 )  ) /C4760 ) - (  ( C4780*C4792 ) /C4757 ) ;
    double gy020100 =  ( C4938*C4778 ) *C4876;
    double gy020001 =  ( C4938*C4876 ) *C4774;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=  (  ( C4792*C4748 ) *C4774 ) *cnst25;
    double C4848 = std::pow(C4757 , 2);
    double C4798 = C4877+ (  ( C4876* ( std::pow(C4800 , 2) )  ) /C4848 ) ;
    double C4821 = C4877- (  ( C4872*C4874 ) /C4848 ) ;
    const double res0 = cnst25* ( C4755* ( C4821*C4882 )  ) ;
    gx[(Ai + 1) * matrix_size + Bi + 1] += res0;
    gz[(Ai + 0) * matrix_size + Bi + 1] += res0;
    double C4869 = C4848*2.;
    double C4806 =  (  ( - ( C4875*2. )  ) /C4869 ) + (  ( C4798*C4873 ) /C4757 ) ;
    double C4750 =  (  ( C4876* ( std::pow(C4759 , 2) )  ) /C4848 ) +C4877;
    double gz200001 =  ( C4750*C4876 ) *C4933;
    double gz200010 = C4886* ( C4750*C4771 ) ;
    double gy200001 = C4774* ( C4750*C4885 ) ;
    gy[(Ai + 4) * matrix_size + Bi + 2] += cc* (  ( gy200001*cnst0 ) - ( gy020001*cnst0 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 2] += cc* (  (  ( - ( 0.5*gy200001 )  ) - ( gy020001*0.5 )  ) + ( C4806* ( C4885*C4876 )  )  ) ;
    double C4753 =  (  ( - ( C4868*2. )  ) /C4869 ) + (  ( C4867*C4750 ) /C4757 ) ;
    double gz200100 =  ( C4876*C4753 ) *C4886;
    double gy200100 =  ( C4885*C4753 ) *C4876;
    gy[(Ai + 4) * matrix_size + Bi + 0] += cc* (  ( cnst0*gy200100 ) - ( cnst0*gy020100 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 0] += cc* (  (  ( C4885*C4778 ) *C4798 ) + (  ( - ( 0.5*gy200100 )  ) - ( 0.5*gy020100 )  )  ) ;
    double C4818 = C4877- (  ( C4867*C4868 ) /C4848 ) ;
    const double res1 =  ( C4755* ( C4885*C4818 )  ) *cnst25;
    gy[(Ai + 3) * matrix_size + Bi + 0] += res1;
    gz[(Ai + 0) * matrix_size + Bi + 0] += res1;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=  ( C4876* ( C4792*C4818 )  ) *cnst25;
    double C4830 = C4877- (  ( C4875*C4873 ) /C4848 ) ;
    const double res2 = cnst25* (  ( C4882*C4754 ) *C4830 ) ;
    gx[(Ai + 1) * matrix_size + Bi + 2] += res2;
    gy[(Ai + 3) * matrix_size + Bi + 2] += res2;
    gy[(Ai + 1) * matrix_size + Bi + 2] += cnst25* ( C4830* ( C4876*C4792 )  ) ;
    double C4777 = C4877+ (  (  ( std::pow(C4780 , 2) ) *C4876 ) /C4848 ) ;
    double gz020100 = C4886* ( C4777*C4778 ) ;
    gz[(Ai + 4) * matrix_size + Bi + 0] += cc* (  ( gz200100*cnst0 ) - ( cnst0*gz020100 )  ) ;
    double gz020001 =  ( C4777*C4876 ) *C4933;
    gz[(Ai + 4) * matrix_size + Bi + 2] += cc* (  ( gz200001*cnst0 ) - ( gz020001*cnst0 )  ) ;
    double C4784 =  (  ( C4777*C4872 ) /C4757 ) + (  ( - ( C4874*2. )  ) /C4869 ) ;
    double gz020010 = C4886* ( C4876*C4784 ) ;
    gz[(Ai + 4) * matrix_size + Bi + 1] += cc* (  ( cnst0*gz200010 ) - ( gz020010*cnst0 )  ) ;
    double gx020010 =  ( C4882*C4784 ) *C4876;
    double gx020001 =  ( C4777*C4882 ) *C4774;
    double cnst126 =  (  (  ( C4938*C4872 ) /C4757 ) + (  (  ( C4792*2 ) + ( C4777*cnst28 )  ) /C4760 )  ) *C4876;
    double gy020010 = cnst126*C4876;
    double gx020100 =  ( C4777*C4934 ) *C4876;
    double C4932 = C4921+ (  (  ( C4872*C4779 ) *2 ) /C4757 ) ;
    double gy200010 = C4876* ( C4750*C4932 ) ;
    gy[(Ai + 4) * matrix_size + Bi + 1] += cc* (  ( cnst0*gy200010 ) - ( cnst0*gy020010 )  ) ;
    gy[(Ai + 2) * matrix_size + Bi + 1] += cc* (  (  ( - ( 0.5*gy200010 )  ) - ( 0.5*gy020010 )  ) + ( C4798* ( C4932*C4876 )  )  ) ;
    gy[(Ai + 3) * matrix_size + Bi + 1] += cnst25* ( C4755* ( C4932*C4748 )  ) ;
    double C4767 = C4813- (  (  ( C4756*C4759 ) *2 ) /C4757 ) ;
    double C4937 =  (  ( C4882- ( 2* ( be*C4748 )  )  ) /C4760 ) - (  ( C4759*C4767 ) /C4757 ) ;
    double gx200010 = C4876* ( C4937*C4771 ) ;
    gx[(Ai + 4) * matrix_size + Bi + 1] +=  (  ( cnst0*gx200010 ) - ( gx020010*cnst0 )  ) *cc;
    gx[(Ai + 2) * matrix_size + Bi + 1] += cc* (  (  ( C4882*C4771 ) *C4798 ) + (  ( - ( 0.5*gx200010 )  ) - ( 0.5*gx020010 )  )  ) ;
    double gx200001 =  ( C4937*C4876 ) *C4774;
    gx[(Ai + 4) * matrix_size + Bi + 2] += cc* (  ( cnst0*gx200001 ) - ( gx020001*cnst0 )  ) ;
    gx[(Ai + 2) * matrix_size + Bi + 2] += cc* (  (  ( C4876*C4882 ) *C4806 ) + (  ( - ( 0.5*gx200001 )  ) - ( 0.5*gx020001 )  )  ) ;
    double gx200100 =  (  (  (  ( C4767*2 ) + ( C4750*cnst28 )  ) /C4760 ) + (  ( C4867*C4937 ) /C4757 )  ) * ( std::pow(C4876 , 2) ) ;
    gx[(Ai + 2) * matrix_size + Bi + 0] += cc* (  (  ( C4876*C4934 ) *C4798 ) + (  ( - ( gx200100*0.5 )  ) - ( 0.5*gx020100 )  )  ) ;
    gx[(Ai + 4) * matrix_size + Bi + 0] +=  (  ( gx200100*cnst0 ) - ( gx020100*cnst0 )  ) *cc;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cnst25* (  ( C4821*C4767 ) *C4876 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 2] += cnst25* ( C4774* ( C4767*C4754 )  ) ;
    gx[(Ai + 3) * matrix_size + Bi + 1] +=  ( C4755* ( C4767*C4771 )  ) *cnst25;
    gx[(Ai + 3) * matrix_size + Bi + 2] += cnst25* ( C4830* ( C4767*C4876 )  ) ;
    double C4895 = C4813- (  (  ( C4800*C4799 ) *2 ) /C4757 ) ;
    gz[(Ai + 1) * matrix_size + Bi + 0] +=  ( C4895* ( C4778*C4754 )  ) *cnst25;
    gz[(Ai + 3) * matrix_size + Bi + 1] +=  ( C4895* ( C4771*C4748 )  ) *cnst25;
    double C4939 =  (  ( C4886- (  ( C4755*be ) *2 )  ) /C4760 ) - (  ( C4895*C4800 ) /C4757 ) ;
    gz[(Ai + 2) * matrix_size + Bi + 0] += cc* (  (  ( - ( 0.5*gz200100 )  ) - ( 0.5*gz020100 )  ) + (  ( C4778*C4876 ) *C4939 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 1] += cc* (  (  ( - ( 0.5*gz200010 )  ) - ( 0.5*gz020010 )  ) + (  ( C4876*C4771 ) *C4939 )  ) ;
    gz[(Ai + 1) * matrix_size + Bi + 1] += cnst25* ( C4895* ( C4821*C4876 )  ) ;
    gz[(Ai + 3) * matrix_size + Bi + 0] +=  ( C4895* ( C4876*C4818 )  ) *cnst25;
    double gz002001 =  ( C4876*C4876 ) * (  (  (  ( C4895*2 ) + ( C4798*cnst28 )  ) /C4760 ) + (  ( C4873*C4939 ) /C4757 )  ) ;
    gz[(Ai + 2) * matrix_size + Bi + 2] += cc* (  (  ( - ( 0.5*gz200001 )  ) - ( 0.5*gz020001 )  ) +gz002001 ) ;
    double C4929 =  (  ( C4872*C4792 ) /C4757 ) + (  ( C4779*4. ) /C4760 ) ;
    gy[(Ai + 0) * matrix_size + Bi + 1] +=  (  ( C4929*C4748 ) *C4876 ) *cnst25;
    gy[(Ai + 1) * matrix_size + Bi + 1] +=  ( C4755* ( C4876*C4929 )  ) *cnst25;
    double C4930 =  (  ( 4.*C4799 ) /C4760 ) + (  ( C4895*C4873 ) /C4757 ) ;
    gz[(Ai + 3) * matrix_size + Bi + 2] +=  (  ( C4876*C4748 ) *C4930 ) *cnst25;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=  (  ( C4876*C4754 ) *C4930 ) *cnst25;
    double C4928 =  (  ( C4867*C4767 ) /C4757 ) + (  ( C4756*4. ) /C4760 ) ;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=  (  ( C4928*C4754 ) *C4876 ) *cnst25;
    gx[(Ai + 3) * matrix_size + Bi + 0] +=  (  ( C4928*C4876 ) *C4755 ) *cnst25;
}
