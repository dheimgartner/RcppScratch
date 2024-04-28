library(Rcpp)

# Why do we need NumericVector when std::vector works just fine?

cpp <- "
std::vector<int> get_return_vector(std::vector<int> x) {
  std::vector<int> y = x;
  for (int i = 0; i < x.size(); i++)
    y[i] += 1;
  return y;
}
"

cppFunction(code = cpp,
            includes = '#include <vector>')

x <- c(1, 2, 3)
y <- get_return_vector(x)
gc()
y


cpp <- "
List rep(std::vector<int> x, int r) {
  List y;
  for (int i = 0; i < r; i++)
    y.push_back(x);
  return y;
}
"

cppFunction(code = cpp,
            includes = '#include <vector>')

z <- rep(x, 3)
z



# on error handling (also in api.h...)
cpp <- '
#include <exception>

class ExceptionForR : public std::exception {
public:
  ExceptionForR(const char* message) : m_message(message) {}
  
  const char* what() const noexcept override {
    return m_message;
  }
  
private:
  const char* m_message;
};

// [[Rcpp::export]]
int test_exception() {
  throw ExceptionForR("This is a test exception");
  return 1;
}
'

cpp_env <- new.env()
Rcpp::sourceCpp(code = cpp, env = cpp_env)
cpp_env$test_exception()
