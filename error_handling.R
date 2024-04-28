library(RcppScratch)

# writes to stderr
RcppScratch::api_stderr()

# throws an exception
# I have written an ExceptionForR class extending the base exception. But this
# would not be necessary. Any exception can be thrown
RcppScratch::api_myerr()

tryCatch(
  stop("Error"),
  error = function(e) cat("Caught an error")
)

# simply writing to stderr is not recognized as error
# I guess in C++ you would combine an exception and then maybe write to stderr?
tryCatch(
  RcppScratch::api_stderr(),
  error = function(e) cat("Caught an error")
)

# exceptions are propagated
tryCatch(
  RcppScratch::api_myerr(),
  error = function(e) cat("Caught an error")
)
