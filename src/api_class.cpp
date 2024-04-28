#include <string>
#include <iostream>
#include "api_class.h"

namespace api_class
{
// Only contains the member functions declared in the header (not the full class)
dog::dog(string name_)
{
  name = name_;
  _legs = 4;
  _bark = true;
}

void dog::setDogSize(string dogSize)
{
  _dogSize = dogSize;
}

void dog::setEars(string type)
{
  _earType = type;
}

void dog::bark()
{
  if (dog::_bark)
    cout << "Wuff" << endl;
}

}