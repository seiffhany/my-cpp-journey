#include <iostream>

void drawBoard(char *spaces);

void playerMove(char *spaces, char player);
void compMove(char *spaces, char comp);

bool checkWinner(char *spaces, char player);
bool isFull(char *spaces);

int main() {
  char spaces[] = {
    ' ', ' ', ' ',
    ' ', ' ', ' ',
    ' ', ' ', ' '
    };

  int winStatus = -1; // 0 - Win / 1 - Lose / 2 - Tie
  char player = 'X';
  char comp = 'O';
  int user;

  drawBoard(spaces);
  while (true) {
    playerMove(spaces, player);
    if (checkWinner(spaces, player)) {
      drawBoard(spaces);
      winStatus = 0;
      break;
    }

    bool isBoardFull = isFull(spaces);
    if (!isBoardFull) {
      compMove(spaces, comp);
      drawBoard(spaces);
      if (checkWinner(spaces, comp)) {
        winStatus = 1;
        break;
      }
    } else {
      drawBoard(spaces);
      winStatus = 2;
      break;
    }
  }

  if (winStatus == 0) {
    std::cout << "\n********************************************\n";
    std::cout << "***************** You Won! *****************\n";
    std::cout << "********************************************\n\n";
  } else if (winStatus == 1) {
    std::cout << "\n*********************************************\n";
    std::cout << "***************** You Lost! *****************\n";
    std::cout << "*********************************************\n\n";
  } else {
    std::cout << "\n***********************************************\n";
    std::cout << "***************** It's a Tie! *****************\n";
    std::cout << "***********************************************\n\n";
  }
  return 0;
}

void drawBoard(char *spaces) {
  std::cout << "     |     |     " << "\n";
  std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << "\n";
  std::cout << "____₁|____₂|____₃" << "\n";
  std::cout << "     |     |     " << "\n";
  std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << "\n";
  std::cout << "____₄|____₅|____₆" << "\n";
  std::cout << "     |     |     " << "\n";
  std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << "\n";
  std::cout << "    ₇|    ₈|    ₉" << "\n";
}

void playerMove(char *spaces, char player) {
  int user;

  while (true) {
    std::cout << "\nEnter your position (1-9): ";
    std::cin >> user;
    
    if (user < 1 || user > 9) {
      std::cout << "Invalid number!";
    } else if (spaces[user-1] != ' ') {
      std::cout << "This space is occupied!";
    } else break;
  }

  spaces[user-1] = player;
}

void compMove(char *spaces, char comp) {
  srand(time(NULL));
  int compIn;
  do {
    compIn = rand() % 9;
  } while (spaces[compIn] != ' ');

  spaces[compIn] = comp;
}

bool checkWinner(char *spaces, char player) {
  return (
    // Horizontal
    (spaces[0] == player && spaces[1] == player && spaces[2] == player) ||
    (spaces[3] == player && spaces[4] == player && spaces[5] == player) ||
    (spaces[6] == player && spaces[7] == player && spaces[8] == player) ||
    // Vertical
    (spaces[0] == player && spaces[3] == player && spaces[6] == player) ||
    (spaces[1] == player && spaces[4] == player && spaces[7] == player) ||
    (spaces[2] == player && spaces[5] == player && spaces[8] == player) ||
    // Diagonal
    (spaces[0] == player && spaces[4] == player && spaces[8] == player) ||
    (spaces[2] == player && spaces[4] == player && spaces[6] == player)
  );
}

bool isFull(char *spaces) {
  for (int i = 0; i < 9; i++) {
    if (spaces[i] == ' ') return false;
  }
  return true;
}