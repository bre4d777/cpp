#include <cstddef>
#include <cstdlib>
#include <iostream>

int main() {
  srand(time(NULL));
  int num1 = (rand() % 100) + 1;
  int num2 = (rand() % 100) + 1;
  int num3 = (rand() % 100) + 1;
  std::cout << num1 << std::endl;
  std::cout << num2 << std::endl;
  std::cout << num3 << std::endl;
  return 0;
}
