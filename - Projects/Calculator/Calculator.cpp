#include <iostream>

int main() {
  char op;
  double num1;
  double num2;
  double result;

  std::cout << "Enter operator (+ - * /): ";
  std::cin >> op;

  std::cout << "Enter 'num1' and 'num2': ";
  std::cin >> num1 >> num2;

  switch (op) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      std::cout << "Invalid operator";
  }

  std::cout << "Result = " << result << std::endl;

  return 0;
}
