#' @useDynLib RcppScratch, .registration=TRUE
#' @importFrom Rcpp evalCpp setRcppClass
#' @exportPattern "^[[:alpha:]]+"
NULL



#' Some learnings for wrapping C++ code with Rcpp
#' 
#' @description
#' My philosophy is to be as generic in C++ code as possible without mixing R(cpp)
#' specifics into the source. This can be achieved by writing an api header and
#' source which then can be included in another cpp file wrapping the api
#' functionality (i.e. preparing the input from R, casting the Rcpp datatpyes to
#' generic ones as well as the return values)...
#' 
#' @section Intention: 
#' The following topics are explored in this package:
#' - How to expose C++ functions (in particular `src/api.h`, `src/api.cpp` and
#' `src/hello_api.cpp`). Each function explores a point of interest. I.e. what
#' happens if we call `exit()`, can we use `stdout`, etc.
#' - How to expose a C++ class (see `src/api_class.h`, `src/api_class.cpp` and 
#' `setup_class.R`).
#' - Experiments with error handling in `error_handling.R` (`cpp_from_R.R`) and
#' - Some other minor questions I had in `cpp_from_R.R` (which also illustrates
#' the use of `Rcpp::cppFunction()` and `Rcpp::sourceCpp()`).
#' - Chapter 16 of *Extending R* (which is very nice) is summarized in the
#' vignette.
#' 
#' @section On using `roxygen2`:
#' **Note:** Not all functions are documented. Just serves as an illustration.
#' 
#' When using `roxygen2` you can delete the NAMESPACE file, add `Encoding: UTF-8`
#' to the `DESCRIPTION` file (and `Roxygen: list(markdown = TRUE)`) as well as 
#' the autogenerated directives by `Rcpp` (see first lines of `R/roxygen.R`).
#' 
#' @seealso Extending R Chapter 16 and Rcpp vignettes.
#'
#' @name RcppScratch
#' @aliases RcppScratch-package
"_PACKAGE"



#' Demonstrating roxygen documentation for `api_plus_one()` C++ function
#'
#' You could also use roxygen comments directly in the .cpp source (see vignette Rcpp-attributes).
#' 
#' @param x numeric vector
#' @return numeric vector where 1 has been added to each element of x.
#' @name api_plus_one
#' @usage api_plus_one(x = numeric())
NULL



#' Demonstration of exposed C++ class
#' 
#' @name dog
#' @description
#' Generated with `Rcpp::exposeClass()` in `setup_class.R`. A dog with specific
#' name, ears, size and the ability to bark.
#' @param name name of the dog
#' @field name name of the dog
#' @usage dog(name)
#' 
#' @section Methods:
#' \describe{
#'   \item{\code{bark()}}{The dog barks.}
#'   \item{\code{setDogSize(character())}}{Set the dog's size.}
#'   \item{\code{setEars(character())}}{Set the dog's ears.}
#' }
#' 
#' @seealso `setup_class.R`, `src/api_class.h` and `src/api_class.cpp`
#' @examples
#' singne <- dog("Singne")
#' singne$setDogSize("medium")
#' singne$setEars("floppy")
#' singne$bark()
NULL