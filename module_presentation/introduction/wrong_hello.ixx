export module wrong:wrong_hello;

import std;
import hello;

export auto wrong_hello(const std::string& str) -> std::string
{
  return std::format("Wrong: {}", geosim::hello(str));
}