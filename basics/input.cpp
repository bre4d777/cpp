#include <iostream>

typedef std::string string;
int main() {
  string boom;
  int boom2;
  std::cout << "int: ";
  std::cin >> boom2;
  std::cout << boom2 << std::endl;
  std::cout << "string daal: ";
  std::getline(std::cin >> std::ws, boom);
  std::cout << boom << std::endl;

  return 0;
}
