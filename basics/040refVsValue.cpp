#include <iostream>

using namespace std;
void swap(string &a, string &b);

int main() {
  string s = "s";
  string r = "r";
  swap(s, r);
  cout << s << endl;
  cout << r << endl;
  return 0;
}

void swap(string &a, string &b) {
  string temp = a;
  a = b;
  b = temp;
}
