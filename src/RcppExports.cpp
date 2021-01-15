// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// S_eigen
arma::mat S_eigen(arma::mat X);
RcppExport SEXP _HiDimCI_S_eigen(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(S_eigen(X));
    return rcpp_result_gen;
END_RCPP
}
// bootstrapCpp
arma::mat bootstrapCpp(arma::mat X, int B, double dt, bool verbose);
RcppExport SEXP _HiDimCI_bootstrapCpp(SEXP XSEXP, SEXP BSEXP, SEXP dtSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(bootstrapCpp(X, B, dt, verbose));
    return rcpp_result_gen;
END_RCPP
}
// S
arma::mat S(arma::mat X, arma::mat Y);
RcppExport SEXP _HiDimCI_S(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(S(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// johansenCpp
arma::mat johansenCpp(arma::mat X, int r, arma::mat A, arma::mat B, bool Psi, double dt);
RcppExport SEXP _HiDimCI_johansenCpp(SEXP XSEXP, SEXP rSEXP, SEXP ASEXP, SEXP BSEXP, SEXP PsiSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< bool >::type Psi(PsiSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(johansenCpp(X, r, A, B, Psi, dt));
    return rcpp_result_gen;
END_RCPP
}
// sampleVAR1
arma::mat sampleVAR1(int N, arma::vec X0, arma::mat A, arma::vec mu, arma::mat D, arma::mat e, double dt);
RcppExport SEXP _HiDimCI_sampleVAR1(SEXP NSEXP, SEXP X0SEXP, SEXP ASEXP, SEXP muSEXP, SEXP DSEXP, SEXP eSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type X0(X0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type D(DSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type e(eSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(sampleVAR1(N, X0, A, mu, D, e, dt));
    return rcpp_result_gen;
END_RCPP
}
// test_vecm
arma::mat test_vecm(arma::mat X, int r, arma::mat A, arma::mat B, double dt);
RcppExport SEXP _HiDimCI_test_vecm(SEXP XSEXP, SEXP rSEXP, SEXP ASEXP, SEXP BSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(test_vecm(X, r, A, B, dt));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_HiDimCI_S_eigen", (DL_FUNC) &_HiDimCI_S_eigen, 1},
    {"_HiDimCI_bootstrapCpp", (DL_FUNC) &_HiDimCI_bootstrapCpp, 4},
    {"_HiDimCI_S", (DL_FUNC) &_HiDimCI_S, 2},
    {"_HiDimCI_johansenCpp", (DL_FUNC) &_HiDimCI_johansenCpp, 6},
    {"_HiDimCI_sampleVAR1", (DL_FUNC) &_HiDimCI_sampleVAR1, 7},
    {"_HiDimCI_test_vecm", (DL_FUNC) &_HiDimCI_test_vecm, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_HiDimCI(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
