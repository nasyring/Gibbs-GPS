// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>
using namespace Rcpp;
using namespace arma;
using namespace std;

// GPC_qr
Rcpp::List GPC_qr(SEXP & nn, SEXP & data, SEXP & theta_boot, SEXP & data_boot, SEXP & alpha, SEXP & M_samp, SEXP & B_resamp);
RcppExport SEXP GPC_GPC_qr(SEXP nnSEXP, SEXP dataSEXP, SEXP theta_bootSEXP, SEXP data_bootSEXP, SEXP alphaSEXP, SEXP M_sampSEXP, SEXP B_resampSEXP){
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP & >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type data(dataSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type theta_boot(theta_bootSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type data_boot(data_bootSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type M_samp(M_sampSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type B_resamp(B_resampSEXP);
    __result = Rcpp::wrap(GPC_qr(nn, data, theta_boot, data_boot, alpha, M_samp, B_resamp));
    return __result;
END_RCPP
}

// GPC_qr_parallel
Rcpp::List GPC_qr_parallel(SEXP & nn, SEXP & data, SEXP & theta_boot, SEXP & data_boot, SEXP & alpha, SEXP & M_samp, SEXP & B_resamp);
RcppExport SEXP GPC_GPC_qr_parallel(SEXP nnSEXP, SEXP dataSEXP, SEXP theta_bootSEXP, SEXP data_bootSEXP, SEXP alphaSEXP, SEXP M_sampSEXP, SEXP B_resampSEXP){
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP & >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type data(dataSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type theta_boot(theta_bootSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type data_boot(data_bootSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type M_samp(M_sampSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type B_resamp(B_resampSEXP);
    __result = Rcpp::wrap(GPC_qr_parallel(nn, data, theta_boot, data_boot, alpha, M_samp, B_resamp));
    return __result;
END_RCPP
}


// GPC_linreg
Rcpp::List GPC_linreg(SEXP & nn, SEXP & data, SEXP & theta_boot, SEXP & data_boot, SEXP & alpha, SEXP & M_samp, SEXP & B_resamp);
RcppExport SEXP GPC_GPC_linreg(SEXP nnSEXP, SEXP dataSEXP, SEXP theta_bootSEXP, SEXP data_bootSEXP, SEXP alphaSEXP, SEXP M_sampSEXP, SEXP B_resampSEXP){
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP & >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type data(dataSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type theta_boot(theta_bootSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type data_boot(data_bootSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type M_samp(M_sampSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type B_resamp(B_resampSEXP);
    __result = Rcpp::wrap(GPC_linreg(nn, data, theta_boot, data_boot, alpha, M_samp, B_resamp));
    return __result;
END_RCPP
}

// GPC_varmix
Rcpp::List GPC_varmix(SEXP & nn, SEXP & data, SEXP & data_boot, SEXP & alpha, SEXP & B_resamp);
RcppExport SEXP GPC_GPC_varmix(SEXP nnSEXP, SEXP dataSEXP, SEXP data_bootSEXP, SEXP alphaSEXP, SEXP B_resampSEXP){
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP & >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type data(dataSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type data_boot(data_bootSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type B_resamp(B_resampSEXP);
    __result = Rcpp::wrap(GPC_varmix(nn, data, data_boot, alpha, B_resamp));
    return __result;
END_RCPP
}

// rcpp_parallel_qr
arma::colvec rcpp_parallel_qr(SEXP & nn, SEXP & data, SEXP & thetaboot, SEXP & bootmean0, SEXP & bootmean1, SEXP & databoot,
    SEXP & alpha, SEXP & M_samp, SEXP & B_resamp, SEXP & w);
RcppExport SEXP GPC_rcpp_parallel_qr(SEXP nnSEXP, SEXP dataSEXP, SEXP thetabootSEXP, SEXP bootmean0SEXP, SEXP bootmean1SEXP, SEXP databootSEXP, SEXP alphaSEXP, SEXP M_sampSEXP, SEXP B_resampSEXP, SEXP wSEXP){
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP & >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type data(dataSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type thetaboot(thetabootSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type bootmean0(bootmean0SEXP);
    Rcpp::traits::input_parameter< SEXP & >::type bootmean1(bootmean1SEXP);
    Rcpp::traits::input_parameter< SEXP & >::type databoot(databootSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type M_samp(M_sampSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type B_resamp(B_resampSEXP);
    Rcpp::traits::input_parameter< SEXP & >::type w(wSEXP);
    __result = Rcpp::wrap(rcpp_parallel_qr(nn, data, thetaboot, bootmean0, bootmean1, databoot, alpha, M_samp, B_resamp, w));
    return __result;
END_RCPP
}    

// rcpp_parallel_js_distance
NumericMatrix rcpp_parallel_js_distance(NumericMatrix mat);
RcppExport SEXP GPC_rcpp_parallel_js_distance(SEXP matSEXP){
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;   
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    __result = Rcpp::wrap(rcpp_parallel_js_distance(mat));
    return __result;
END_RCPP
}    


static const R_CallMethodDef CallEntries[] = {
    {"GPC_GPC_qr", (DL_FUNC) &GPC_GPC_qr, 7},
    {"GPC_GPC_qr_parallel", (DL_FUNC) &GPC_GPC_qr_parallel, 7},
    {"GPC_GPC_linreg", (DL_FUNC) &GPC_GPC_linreg, 7},
    {"GPC_GPC_varmix", (DL_FUNC) &GPC_GPC_varmix, 5},
    {"GPC_rcpp_parallel_qr", (DL_FUNC) &GPC_rcpp_parallel_qr, 10},
    {"GPC_rcpp_parallel_js_distance", (DL_FUNC) &GPC_rcpp_parallel_js_distance, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_GPC(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
    



