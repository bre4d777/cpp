#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int a;
  long b;
  char c;
  float f;
  double d;

  cin >> a >> b >> c >> f >> d;

  cout << a << "\n";
  cout << b << "\n";
  cout << c << "\n";
  cout << fixed << setprecision(3) << f << "\n";
  cout << fixed << setprecision(9) << d << "\n";
  return 0;
}
