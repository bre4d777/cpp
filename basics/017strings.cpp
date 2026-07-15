#include <iostream>

int main() {
  std::string boom;
  std::cout << "Enter a string: ";
  std::getline(std::cin, boom);
  std::cout << boom << std::endl;
  std::cout << "length: " << boom.length() << std::endl;
  std::cout << "capacity: " << boom.capacity() << std::endl;
  std::cout << "is empty: " << boom.empty() << std::endl;
  std::cout << "is not empty: " << !boom.empty() << std::endl;
  std::cout << "find: " << boom.find("a") << std::endl;
  std::cout << "rfind: " << boom.rfind("a") << std::endl;
  std::cout << "substr: " << boom.substr(0, 2) << std::endl;
  std::cout << "replace: " << boom.replace(0, 2, "b") << std::endl;
  std::cout << "append: " << boom.append("c") << std::endl;
  std::cout << "insert: " << boom.insert(0, "a") << std::endl;
  std::cout << "erase: " << boom.erase(0, 1) << std::endl;
  std::cout << "erase: " << boom.erase(1, 1) << std::endl;
  std::cout << "erase: " << boom.erase(2, 1) << std::endl;
  std::cout << "erase: " << boom.erase(3, 1) << std::endl;
  return 0;
}
