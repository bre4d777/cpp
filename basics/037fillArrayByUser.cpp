#include <iostream>
#include <string>

using namespace std;

int main() {
  string s[20];
  int size = sizeof(s) / sizeof(s[0]);
  for (int i = 0; i < size; i++) {
    cout << "Enter a string: " << i << endl;
    getline(cin, s[i]);
  }
  for (string &i : s) {
    cout << i << endl;
    cout << endl;
  }
  return 0;
}
