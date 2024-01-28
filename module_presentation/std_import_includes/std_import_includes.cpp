import std;

namespace fs = std::filesystem;

// Function to check if a string matches a regular expression
bool isMatch(const std::string& input, const std::regex& pattern) {
  return std::regex_match(input, pattern);
}

// Function to calculate the square of a complex number using std::function
std::complex<double> square(const std::complex<double>& num, std::function<double(double)> func) {
  return std::pow(num, func(2.0));
}

int main() {
  // Regular expression example
  std::string text = "World!";
  std::regex pattern("Hello,.*");
  if (isMatch(text, pattern)) {
    std::cout << "Text matches the pattern.\n";
  }
  else {
    std::cout << "Text does not match the pattern.\n";
  }

  // Filesystem example
  std::cout << "Current path: " << fs::current_path() << "\n";

  // Future example
  auto future_result = std::async([]() { return "Future example"; });
  std::cout << future_result.get() << "\n";

  // Random number generation example
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(1, 10);
  std::cout << "Random number: " << dis(gen) << "\n";

  // Complex number and functional example
  std::complex<double> complexNum(2.0, 3.0);
  auto squareFunc = [](double x) { return x * x; };
  std::complex<double> result = square(complexNum, squareFunc);
  std::cout << "Square of complex number: " << result << "\n";

  return 0;
}