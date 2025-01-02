#include <iostream>

int main() {
  std::string names[] = {"Seif", "Youssef", "Hany"};
  for (std::string name : names) {
    std::cout << name << "\n";
  }
}