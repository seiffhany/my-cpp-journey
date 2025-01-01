#include <iostream>

void printNum();

// this includes the "global" namespace (better to avoid this)
// (less secure)
int global = 10;

int main() {
  int local = 5;
  printNum();

  std::cout << "\n***** Testing same var name *****" << "\n";
  int global = 20;
  std::cout << global << "\n"; // prints 20
  std::cout << ::global << "\n\n"; // prints 10 (using the scope resolution operator)
  return 0;
}

void printNum() {
  // std::cout << local << std::endl; // Error
  std::cout << global << std::endl;
}