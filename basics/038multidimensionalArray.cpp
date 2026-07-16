#include <iostream>

using namespace std;

int main() {
  string s[2][3] = {{"a", "b", "c"}, {"d", "e", "f"}};
  int rows = sizeof(s) / sizeof(s[0]);
  int cols = sizeof(s[0]) / sizeof(s[0][0]);

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << s[i][j] << endl;
    }
  }

  return 0;
}
