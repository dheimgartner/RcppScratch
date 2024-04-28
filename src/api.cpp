#include <iostream>
#include <exception>
#include "api.h"

class ExceptionForR : public std::exception {
public:
  ExceptionForR(const char* message) : m_message(message) {}
  
  const char* what() const noexcept override {
    return m_message;
  }
  
private:
  const char* m_message;
};

// this is actally necessary to wrap in namespace too (not only header...)
namespace api
{

std::vector<double> api_plus_one(std::vector<double> &x) {
  std::vector<double> xp1;
  xp1.reserve(x.size());
  
  for (const auto &element : x) {
    xp1.push_back(element + 1);
  }
  
  return xp1;
}

void api_print(void) {
  std::cout << "hello from api_print" << std::endl;
}

void api_exit(void) {
  std::cout << "hello from api_exit... will exit now" << std::endl;
  // this actually crashes (exits) the R session!
  exit(1);
}

/*
 * an alternative would be to throw an error (instead of writing to stderr, which 
 * just seems to be redirected to stdout but does not actually raise error in R)
 */
void api_stderr(void) {
  int errorCode = 404;
  std::cout << "hello from api_stderr... will write to stderr now" << std::endl;
  std::cerr << "Error code: " << errorCode << std::endl;
}

void api_myerr(void) {
  throw ExceptionForR("This is a test exception");
}

}