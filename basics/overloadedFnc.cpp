#include <iostream>
#include <string>

void printData(int num) {
  std::cout << "Integer provided : " << num << std::endl;
}

void printData(double doub) {
  std::cout << "Double provided : " << doub << std::endl;
}

void printData(const std::string &str) {
  std::cout << "String provided : " << str << std::endl;
}

int main() {
  printData("lun");
  printData(19);
  printData(5344.5);

  return 0;
}
