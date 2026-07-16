#include <iostream>

int main() {
  int num;
  do {
    std::cout << "enter a number: ";
    std::cin >> num;
    std::cout << "number: " << num << std::endl;
  } while (num < 0);
  std::cout << "done" << std::endl;
  return 0;
}
