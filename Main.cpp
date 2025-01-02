#include <iostream>

void printInfo(std::string &name);

int main() {
  std::string names[] = {"Seif", "Youssef", "Hany"};
  
  std::string myName = "Seif";
  std::cout << &myName << "\n";
  printInfo(myName);
  // for (std::string name : names) {
  //   std::cout << name << "\n";
  // }
}

void printInfo(std::string &name) {
  std::cout << &name << "\n";
}