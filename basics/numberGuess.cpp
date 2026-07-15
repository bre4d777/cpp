#include <iostream>

using namespace std;
int main() {
  int num;
  int guess;
  int tries;
  srand(time(NULL));
  num = rand() % 100 + 1;
  do {
    cout << "Enter a number(1-100): ";
    cin >> guess;
    tries++;
    if (guess > num) {
      cout << "Too high!" << endl;
    } else if (guess < num) {
      cout << "Too low!" << endl;
    } else {
      cout << "You win!" << endl;
      cout << "It took you " << tries << " tries!" << endl;
      break;
    }
  } while (num != guess);
  return 0;
}
