#include <Rcpp.h>
#include "api_class.h"

using namespace Rcpp;

/*
 * Wrapping a class (i.e. passing and returning Rcpp types) might be a little
 * more involved than for simple functions. But in the end a method is just a
 * function. Similarly, the constructor could just be wrapped to accept Rcpp
 * types... In the dog example, it was not even necessary to wrap.
 * 
 * See also: setup_class.R
 */