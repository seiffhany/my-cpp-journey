#include <iostream>

char getComputerChoice();
void print(int winStatus);

int main() {
  using std::cout;
  using std::cin;
  
  char userInput;
  cout << "Enter (Rock (r), Paper (p), or Scissors (s)): ";
  cin >> userInput;

  char computerGuess = getComputerChoice();
  cout << "Computer guessed --> " << computerGuess << std::endl;

  if (userInput == computerGuess) {
    print(2);
    return 0;
  }
  
  switch (userInput)
  {
  case 'r':
    if (computerGuess == 'p') print(0);
    else if (computerGuess == 's') print(1);
    break;
  case 'p':
    if (computerGuess == 'r') print(0);
    else if (computerGuess == 's') print(1);
    break;
  case 's':
    if (computerGuess == 'r') print(0);
    else if (computerGuess == 'p') print(1);
    break;
  default:
    break;
  }

  return 0;
}

char getComputerChoice() {
  srand(time(NULL));

  int random = (rand() % 3) + 1;

  switch (random)
  {
  case 1:
    return 'r';
    break;
  case 2:
    return 'p';
    break;
  case 3:
    return 's';
    break;
  default:
    return 'r';
    break;
  }
}

void print(int winStatus) {
  switch (winStatus)
  {
  case 0:
    std::cout << "You won!" << "\n";
    break;
  case 1:
    std::cout << "You lost!" << "\n";
    break;
  case 2:
    std::cout << "It is a tie!" << "\n";
    break;
  default:
    break;
  }
}