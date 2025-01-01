#include <iostream>

int main() {
  
  int guess;
  int tries;

  std::cout << "Tries: " << tries << "\n"; // Garbage Value??

  srand(time(NULL));
  int num = (rand() % 100) + 1;

  do {
    std::cout << "\nGuess a number between (1-100): ";
    std::cin >> guess;

    if (guess > num) {
      std::cout << "Too High!\n";
    } else if (guess < num) {
      std::cout << "Too Low!\n";
    }

    tries++;
  } while (guess != num);

  std::cout << "CORRECT!\n";
  std::cout << "This took you " << tries << " tries!\n";
  
  return 0;
}