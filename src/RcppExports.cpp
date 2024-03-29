// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// updateDistancesWithCombinations
void updateDistancesWithCombinations(NumericVector& length_root_distances, NumericVector& topological_root_distances, IntegerVector& left_partition, IntegerVector& right_partition, IntegerVector& index_offsets, double distance_to_root, int edges_to_root);
RcppExport SEXP _treespace_updateDistancesWithCombinations(SEXP length_root_distancesSEXP, SEXP topological_root_distancesSEXP, SEXP left_partitionSEXP, SEXP right_partitionSEXP, SEXP index_offsetsSEXP, SEXP distance_to_rootSEXP, SEXP edges_to_rootSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type length_root_distances(length_root_distancesSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type topological_root_distances(topological_root_distancesSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type left_partition(left_partitionSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type right_partition(right_partitionSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type index_offsets(index_offsetsSEXP);
    Rcpp::traits::input_parameter< double >::type distance_to_root(distance_to_rootSEXP);
    Rcpp::traits::input_parameter< int >::type edges_to_root(edges_to_rootSEXP);
    updateDistancesWithCombinations(length_root_distances, topological_root_distances, left_partition, right_partition, index_offsets, distance_to_root, edges_to_root);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_treespace_updateDistancesWithCombinations", (DL_FUNC) &_treespace_updateDistancesWithCombinations, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_treespace(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
