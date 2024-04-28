#ifndef API_CLASS_H
#define API_CLASS_H

#include <string>
#include <vector>

/*
 * Class example taken from:
 * https://learn.microsoft.com/en-us/cpp/cpp/class-cpp?view=msvc-170
 */

namespace api_class
{
using namespace std;

class dog
{
public:
  dog(string name);
  void setDogSize(string dogSize);
  void setEars(string type);
  void bark();
  string name;
  
private:
  string _dogSize, _earType;
  int _legs;
  bool _bark;
};

}

#endif