#include <iostream>

// int max(int x, int y) { return (x > y) ? x : y; }
// double max(double x, double y) { return (x > y) ? x : y; }
// char max(char x, char y) { return (x > y) ? x : y; }
template <typename T> T max(T x, T y) { return (x > y) ? x : y; }
template <typename T, typename U> auto maxDiff(T x, U y) {
  return (x > y) ? x : y;
}

int main() {
  // function template = describes what a function lokos like.
  //                     Can be used to generate as many overloaded functions
  //                     as needed, each using different data types

  std::cout << max(1.1, 2.1) << "\n"; // truncated without overload
  std::cout << max('1', '2') << "\n";
  std::cout << maxDiff(1, 2.1) << "\n";
  return 0;
}