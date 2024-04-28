#ifndef API_H
#define API_H


#include <vector>

namespace api
{
// don't mix declarations and definitions in header (led to errors mulitple include...)
// see also: https://learn.microsoft.com/en-us/cpp/cpp/header-files-cpp?view=msvc-170
std::vector<double> api_plus_one(std::vector<double> &x);
void api_print(void);
void api_exit(void);
void api_stderr(void);
void api_myerr(void);
}

#endif