export module wrong:wrong_myname;

import std;
import my_name;

export auto wrong_my_name_is(const std::string& str) -> std::string
{
  return std::format("Wrong: {}", geosim::my_name_is(str));
}