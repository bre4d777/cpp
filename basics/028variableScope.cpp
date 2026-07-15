#include <iostream>
int globalNum = 1; // global puri program me valid
void printNum(int num) { std::cout << num << std::endl; }
int main() {
  int localNum =
      1; // local sirf isi function me ya param pass kro dusre func me
  std::cout << localNum << std::endl;
  printNum(globalNum);
  return 0;
}
