#include <cmath>
#include <iostream>

int main() {
  double a, b, c;
  std::cout << "Enter the first side: ";
  std::cin >> a;
  std::cout << "Enter the second side: ";
  std::cin >> b;

  c = std::sqrt(a * a + b * b); // shorthand std::hypot(a, b)
  std::cout << "The hypotenuse is: " << c << std::endl;
  return 0;
}
