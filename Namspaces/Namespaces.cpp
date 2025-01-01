#include <iostream>

namespace first {
  int x = 5;
}

namespace second {
  int x = 10;
}

int main() {
  using std::cout;
  // int x = 0;
  // std::cout << x << std::endl;
  cout << first::x << std::endl;
  cout << second::x << std::endl;
  
  using namespace first;
  cout << x << std::endl;
  return 0;
}