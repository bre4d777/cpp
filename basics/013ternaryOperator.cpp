#include <iostream>

int main() {
  int num;
  std::cout << "num: ";
  std::cin >> num;
  num > 5 ? std::cout << "bada " : std::cout << "chhota ";
  return 0;
}
