#include <iostream>

int main() {
  using std::cout;
  using std::cin;
  using std::string;

  string name = "Seif";
  name.insert(1, "Hany");
  cout << "Hello " << name;
}