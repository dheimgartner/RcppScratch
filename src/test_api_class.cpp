#include <Rcpp.h>
#include <iostream>
#include "api_class.h"

using namespace Rcpp;
using namespace api_class;
using namespace std;

// [[Rcpp::export]]
void test_api_class() {
  dog poodle("Singne");
  poodle.setEars("fluppy");
  cout << "This is " << poodle.name << endl;
  poodle.bark();
}