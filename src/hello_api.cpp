#include <Rcpp.h>
#include "api.h"

using namespace Rcpp;


// [[Rcpp::export]]
void api_print() {
  api::api_print();
}

// [[Rcpp::export]]
void api_exit() {
  api::api_exit();
}

// [[Rcpp::export]]
void api_stderr() {
  api::api_stderr();
}

// [[Rcpp::export]]
void api_myerr() {
  api::api_myerr();
}