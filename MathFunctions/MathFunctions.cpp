#include <iostream>

int main() {
  double x = 3.4;
  double y = 4;
  double z = 5;

  // z = std::sqrt(x * x + y * y);
  z = std::pow(x, 2);
  // z = std::abs(-x);
  // z = std::ceil(x);
  // z = std::floor(x);
  // z = std::round(x);
  // z = std::trunc(x);
  // z = std::remainder(x, 2);
  // z = std::fmax(x, y);
  // z = std::min(x, y);

  std::cout << "Value of z: " << z << std::endl;
  return 0;
}