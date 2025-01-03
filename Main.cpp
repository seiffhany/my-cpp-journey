#include <iostream>

void printInfo(std::string &name);

int fibonacci(const int n);
int main() {
  int n = 0;

  while (n >= 0) {
    std::cout << "fibonacci(" << n << "): ";
    std::cout << fibonacci(n) << "\n";
    std::cout << "\nEnter number: ";
    std::cin >> n;
  }
}

int fibonacci(const int n) {
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
}
