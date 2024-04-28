#include <Rcpp.h>
using namespace Rcpp ;
#include "api_class.h"
using namespace api_class;

RCPP_MODULE(class_dog) {


    class_<dog>("dog")

    .constructor<string>()

    .field("name", &dog::name)

    .method("setDogSize", &dog::setDogSize)
    .method("setEars", &dog::setEars)
    .method("bark", &dog::bark)
    ;
}
