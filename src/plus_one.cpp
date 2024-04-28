#include <Rcpp.h>
#include <vector>
#include "api.h"
using namespace Rcpp;

// [[Rcpp::export]]
NumericVector plus_one(NumericVector x) {
  
  /* 
   * NumericVector x_plus_one = x; and then x_plus_one[i] += 1; would actually
   * modify x (since it is passed as a pointer... This should be avoided! p. 346).
   * You could use x.copy() first as an alternative.
   */
  NumericVector x_plus_one(x.size());
  for (int i = 0; i < x.size(); i++)
  {
    x_plus_one[i] = x[i] + 1;
  }
  
  return x_plus_one;
}

/* Idea: 
 * Write (api.cpp and) api.h where you define a plus_one function without R specifics
 * and an api namespace. Then write wrapper for this api function passing the args
 * and casting the return value to NumericVector
 */

// Helper to cast (maybe Rcpp would provide some util -> yes: wrap()!)
NumericVector cast_vector(std::vector<double> &x) {
  NumericVector x_out;
  for (const auto &element : x) {
    x_out.push_back(element);
  }
  return x_out;
}

// [[Rcpp::export]]
NumericVector api_plus_one(NumericVector x) {
  std::vector<double> x_plus_one;
  std::vector<double> x_in;
  NumericVector x_out;
  
  // prepare input
  x_in = as<std::vector<double>>(x);
  
  // where the magic happens (main api call)
  x_plus_one = api::api_plus_one(x_in);
  
  // prepare output
  x_out = cast_vector(x_plus_one);
  
  return x_out;
}
