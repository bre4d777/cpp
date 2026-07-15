#include <iostream>

void getNum(int &num);
void printNum(int num);

int main() {
  int num;
  getNum(num);
  printNum(num);
  return 0;
}

void printNum(int num) { std::cout << num << std::endl; }

void getNum(int &num) {
  std::cout << "Enter a number: ";
  std::cin >> num;
}
