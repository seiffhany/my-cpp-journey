#include <iostream>

int main() {
  char *pGrades = NULL;
  int size;

  std::cout << "Enter the size of the array: ";
  std::cin >> size;

  pGrades = new char[size];

  for (int i = 0; i < size; i++) {
    std::cout << "Enter element #" << (i + 1) << ": ";
    std::cin >> pGrades[i];
  }

  std::cout << "[ ";
  for (int i = 0; i < size; i++) {
    std::cout << pGrades[i] << " ";
  }
  std::cout << "]\n";

  return 0;
}