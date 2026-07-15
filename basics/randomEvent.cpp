#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  srand(time(0));
  int randNum = rand() % 5 + 1;
  switch (randNum) {
  case 1:
    std::cout << "1" << std::endl;
  case 2:
    std::cout << "2" << std::endl;
  case 3:
    std::cout << "3" << std::endl;
  case 4:
    std::cout << "4" << std::endl;
  case 5:
    std::cout << "5" << std::endl;
  }
  return 0;
}
