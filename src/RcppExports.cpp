// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// duration_viterbi
List duration_viterbi(NumericVector aa_sample, NumericVector pipar, NumericMatrix tpmpar, NumericMatrix od, NumericMatrix params);
RcppExport SEXP signalHsmm_duration_viterbi(SEXP aa_sampleSEXP, SEXP piparSEXP, SEXP tpmparSEXP, SEXP odSEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type aa_sample(aa_sampleSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pipar(piparSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type tpmpar(tpmparSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type od(odSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type params(paramsSEXP);
    __result = Rcpp::wrap(duration_viterbi(aa_sample, pipar, tpmpar, od, params));
    return __result;
END_RCPP
}