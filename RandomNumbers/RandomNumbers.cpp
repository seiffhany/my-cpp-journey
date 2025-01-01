#include <iostream>
#include <ctime>

int getRandom(int min, int max);

int main() {
  // Initialize random seed
  srand(time(NULL));

  // Generate a random number
  int min = 23;
  int max = 27;

  for (int i = 0; i < 10; i++) {
    std::cout << "Random Number: " << getRandom(min, max) << std::endl;
  }

  return 0;
}

int getRandom(int min, int max) {
  return (rand() % (max - min + 1)) + min;
}