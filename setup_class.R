# inst/tools/setup_class.R would be a natural place for this (in root for visibility)

library(Rcpp)

exposeClass("dog",
            constructors = list("string"),
            fields = c("name"),
            methods = c("setDogSize", "setEars", "bark"),
            header = '#include "api_class.h"\nusing namespace api_class;')  # using namespace!

#> Wrote C++ file "src/dogModule.cpp"
#> Wrote R file "R/dogClass.R"