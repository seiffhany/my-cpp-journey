#include <iostream>

typedef int (*FunctionType)(const int);

int fibonacci(const int n);
int factorial(const int n);

void invoke(FunctionType func, std::string name);

int main() {
  invoke(fibonacci, "fibonacci");
  // invoke(factorial, "factorial");
}

void invoke(FunctionType func, std::string name) {
  int n = 0;
  while (n >= 0) {
    std::cout << "fibonacci(" << n << "): ";
    std::cout << func(n) << "\n";
    std::cout << "\nEnter number: ";
    std::cin >> n;
  }
}

int fibonacci(const int n) {
  if (n <= 0)
    return 0;
  if (n == 1)
    return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int factorial(const int n) {
  if (n <= 0)
    return 1;
  return n * factorial(n - 1);
}
