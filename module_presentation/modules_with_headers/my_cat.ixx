module;
#include <string>
#include <format>
#include "cat.h"

export module my_cat;

export auto twice_cat() -> std::string
{
  return std::format("{} {}", cat(), cat());
}