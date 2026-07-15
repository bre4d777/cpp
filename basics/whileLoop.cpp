#include <iostream>

int main() {
  std::cout << "string: ";
  std::string boom;
  while (boom.empty()) {
    std::cout << "empty string: " << std::endl;
    std::getline(std::cin, boom);
  }
  std::cout << "string: " << boom << std::endl;
  return 0;
}
