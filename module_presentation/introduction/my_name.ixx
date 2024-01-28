export module my_name;

import std;

namespace geosim
{
  export auto my_name_is(const std::string& str) -> std::string
  {
    return std::format("My name is {}", str);
  }
}