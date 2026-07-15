#include <iostream>

double square(double length);

int main() {
  double length = 5.0;
  double result = square(length);
  std::cout << result << std::endl;
  return 0;
}

double square(double length) {
  double result = length * length;
  return result;
}
