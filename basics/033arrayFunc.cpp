#include <iostream>

using namespace std;

double sum(double num[]);

int main() {
  double num[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double res = sum(num);
  cout << res << endl;
  return 0;
}

double sum(double num[]) {
  double sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += num[i];
  }
  return sum;
}
