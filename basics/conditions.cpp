#include <iostream>

int main() {
  bool condition = false;
  char gf = 'n';
  std::cout << "gf: (y/n): ";
  std::cin >> gf;
  if (gf == 'y') {
    condition = true;
  }
  if (condition) {
    std::cout << "ladkibaaz" << std::endl;
  } else {
    std::cout << "randwa" << std::endl;
  }
  return 0;
}
