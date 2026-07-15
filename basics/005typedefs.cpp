#include <iostream>

typedef std::string str;  // old way
using str1 = std::string; /// new and recommended way (badhiya hai we can use
                          /// templartes and shit )
int main() {
  str s = "boom";
  std::cout << s << std::endl;
  str1 s1 = "boom1";
  std::cout << s1 << std::endl;
  return 0;
}
