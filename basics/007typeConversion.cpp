#include <iostream>

int main() {
  double pi = (int)3.14; // explicit conversion
  int broken_int = 5.75; // implicit conversion to 5
  std::cout << pi << std::endl;
  std::cout << broken_int << std::endl;
  return 0;
}
