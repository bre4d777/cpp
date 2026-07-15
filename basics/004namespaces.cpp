#include <iostream>

namespace first {
int l = 1;
}

namespace second {
int l = 2;
}

int main() {
  int l = 0;
  std::cout << "first::l = " << first::l << std::endl;
  std::cout << "second::l = " << second::l << std::endl;
  std::cout << "local l = " << l << std::endl;
  return 0;
}
