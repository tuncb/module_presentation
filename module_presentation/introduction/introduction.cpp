import std;

import hello;
import my_name;

import wrong;

int main()
{
  std::cout << std::format("{}\n", geosim::hello("World!"));
  std::cout << std::format("{}\n", geosim::my_name_is("tunc!"));

  std::cout << std::format("{}\n", wrong_hello("World!"));
  std::cout << std::format("{}\n", wrong_my_name_is("tunc!"));
}

