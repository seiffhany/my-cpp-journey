#include <iostream>
#include <ctime>

int main() {
  // Initialize random seed
  srand(time(NULL));

  // Generate a random number
  int min = 2;
  int max = 6;

  for (int i = 0; i < 10; i++) {
    int random_number = (rand() % (max - min + 1)) + min;
    std::cout << "Random Number: " << random_number << std::endl;
  }

  return 0;
}

int getRandom(int min, int max) {
  return (rand() % (max - min + 1)) + min;
}