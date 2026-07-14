#include <iostream>

int main() {
  int num;
  std::cout << "num: ";
  std::cin >> num;
  if (num > 0 && num < 10) {
    std::cout << "+ve" << std::endl;
  } else if (num > 10 && num < 20) {
    std::cout << "bhot bada" << std::endl;
  }
  if (num > 50 || num > 100) {
    std::cout << "shyd 50 ya 100 se bada" << std::endl;
  }
  if (num == 0) {
    std::cout << "zero" << std::endl;
  }
  if (num != 10) {
    std::cout << "not ten" << std::endl;
  }

  return 0;
}
