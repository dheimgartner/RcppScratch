// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// api_print
void api_print();
RcppExport SEXP _RcppScratch_api_print() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    api_print();
    return R_NilValue;
END_RCPP
}
// api_exit
void api_exit();
RcppExport SEXP _RcppScratch_api_exit() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    api_exit();
    return R_NilValue;
END_RCPP
}
// api_stderr
void api_stderr();
RcppExport SEXP _RcppScratch_api_stderr() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    api_stderr();
    return R_NilValue;
END_RCPP
}
// api_myerr
void api_myerr();
RcppExport SEXP _RcppScratch_api_myerr() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    api_myerr();
    return R_NilValue;
END_RCPP
}
// plus_one
NumericVector plus_one(NumericVector x);
RcppExport SEXP _RcppScratch_plus_one(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(plus_one(x));
    return rcpp_result_gen;
END_RCPP
}
// api_plus_one
NumericVector api_plus_one(NumericVector x);
RcppExport SEXP _RcppScratch_api_plus_one(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(api_plus_one(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _RcppScratch_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// test_api_class
void test_api_class();
RcppExport SEXP _RcppScratch_test_api_class() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    test_api_class();
    return R_NilValue;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_class_dog();

static const R_CallMethodDef CallEntries[] = {
    {"_RcppScratch_api_print", (DL_FUNC) &_RcppScratch_api_print, 0},
    {"_RcppScratch_api_exit", (DL_FUNC) &_RcppScratch_api_exit, 0},
    {"_RcppScratch_api_stderr", (DL_FUNC) &_RcppScratch_api_stderr, 0},
    {"_RcppScratch_api_myerr", (DL_FUNC) &_RcppScratch_api_myerr, 0},
    {"_RcppScratch_plus_one", (DL_FUNC) &_RcppScratch_plus_one, 1},
    {"_RcppScratch_api_plus_one", (DL_FUNC) &_RcppScratch_api_plus_one, 1},
    {"_RcppScratch_rcpp_hello_world", (DL_FUNC) &_RcppScratch_rcpp_hello_world, 0},
    {"_RcppScratch_test_api_class", (DL_FUNC) &_RcppScratch_test_api_class, 0},
    {"_rcpp_module_boot_class_dog", (DL_FUNC) &_rcpp_module_boot_class_dog, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppScratch(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
