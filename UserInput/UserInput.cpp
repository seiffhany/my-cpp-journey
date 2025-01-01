#include <iostream>

// cout << (insertion operator) is used to insert data into the output stream
// cin >> (extraction operator) is used to extract data from the input stream

int main() {
  std::string name;
  int age;

  std::cout << "Enter age: ";
  std::cin >> age;

  std::cout << "Enter full name: ";
  std::getline(std::cin >> std::ws, name);
  // std::ws is used to ignore whitespaces that could be left in the input stream

  std::cout << "You are " << name << " (" << age << " years old)" << std::endl;
  return 0;
}