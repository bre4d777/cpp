#include <iostream>

using namespace std;

int search(int a[], int size, int numToSearch);

int main() {
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(a) / sizeof(a[0]);
  int i;
  int numToSearch;
  cout << "Enter the number to search: ";
  cin >> numToSearch;
  i = search(a, size, numToSearch);
  if (i == -1) {
    cout << "Number not found\n";
  } else {
    cout << "Number found at index: " << i << endl;
  }
  return 0;
}

int search(int a[], int size, int numToSearch) {
  for (int i = 0; i < size; i++) {
    if (a[i] == numToSearch) {
      return i;
    }
  }
  return -1;
}
