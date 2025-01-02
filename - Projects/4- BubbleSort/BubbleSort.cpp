#include <iostream>

void swap(int arr[], int i, int j);
void print(int arr[], int size);

int main() {
  
  int numbers[] = {2, 5, 1, 6, 3, 8, 10, 9, 4};
  int size  = sizeof(numbers) / sizeof(int);

  std::cout << "Before: ";
  print(numbers, size);

  for (int i = 0; i < size / 2; i++) {
    for (int j = 1; j < size; j++) {
      if (numbers[j] < numbers[j-1]) {
        swap(numbers, j, j-1);
      }
    }
  }

  std::cout << "After: ";
  print(numbers, size);

  return 0;
}

void swap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void print(int arr[], int size) {
  std::cout << "[ ";
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << "]\n";
}