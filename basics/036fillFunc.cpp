#include <iostream>

using namespace std;

int main() {
  const int SIZE = 100;
  string s[100];
  fill(s, s + SIZE, "boom");
  for (string &i : s) {
    cout << i << endl;
  }
  return 0;
}
