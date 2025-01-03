#include <iostream>

enum Day {
  sunday = 0,
  monday = 1,
  tuesday = 2,
  wednesday = 3,
  thursday = 4,
  friday = 5,
  saturday = 6,
};

int main(int argc, char const *argv[]) {
  Day today = sunday;

  std::cout << friday + monday;
  return 0;
}
