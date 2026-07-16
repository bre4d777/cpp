#include <iostream>

using namespace std;
void sort(int arr[], int size);

int main() {
  int arr[] = {7, 2, 9, 1, 5, 4, 8, 3, 6, 0};
  int size = sizeof(arr) / sizeof(arr[0]);
  sort(arr, size);
  for (int ele : arr) {
    cout << ele << " ";
  }

  return 0;
}

void sort(int arr[], int size) {
  int t;
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        t = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = t;
      }
    }
  }
}
