#include <iostream>

int main() {
  double temp;
  char unit;
  double finalTemp;
  std::cout << "Enter the temperature: ";
  std::cin >> temp;
  std::cout << "Enter the unit: ";
  std::cin >> unit;
  if (unit == 'C' || unit == 'c') {
    finalTemp = temp * 9 / 5 + 32;
    std::cout << "The temperature in Fahrenheit is: " << finalTemp << std::endl;
  } else if (unit == 'F' || unit == 'f') {
    finalTemp = (temp - 32) * 5 / 9;
    std::cout << "The temperature in Celsius is: " << finalTemp << std::endl;
  } else {
    std::cout << "Invalid unit";
  }
  return 0;
}
