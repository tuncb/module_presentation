export module hello;

import std;

namespace geosim
{
  export auto hello(const std::string& str) -> std::string
  {
    return std::format("Hello {}", str);
  }
}

