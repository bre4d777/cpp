#include <algorithm>
#include <cmath>
#include <iostream>

int main() {
  double a = 5.0;
  double b = 2.0;
  double c;
  c = std::max(a, b);
  std::cout << "max" << c << std::endl;
  c = std::min(a, b);
  std::cout << "min" << c << std::endl;
  std::cout << "pow" << std::pow(a, b) << std::endl;     // power of a to b
  std::cout << "sqrt" << std::sqrt(a) << std::endl;      // square root
  std::cout << "abs" << std::abs(a) << std::endl;        // absolute value
  std::cout << "sin" << std::sin(a) << std::endl;        // sine
  std::cout << "cos" << std::cos(a) << std::endl;        // cosine
  std::cout << "tan" << std::tan(a) << std::endl;        // tangent
  std::cout << "asin" << std::asin(a) << std::endl;      // arc sine
  std::cout << "acos" << std::acos(a) << std::endl;      // arc cosine
  std::cout << "atan" << std::atan(a) << std::endl;      // arc tangent
  std::cout << "atan2" << std::atan2(a, b) << std::endl; // arc tangent
  std::cout << "exp" << std::exp(a) << std::endl;        // exponential
  return 0;
}
