#include <iostream>

int getTotalOdd(std::string card);
int getTotal(std::string card);
std::string doubleDigits(std::string card);

int main() {
  std::string creditCard = "6011000990139424";
  std::string doubledCard = doubleDigits(creditCard);

  int total = getTotal(doubledCard) + getTotalOdd(creditCard);

  if (total % 10 == 0) {
    std::cout << "This is a valid card! (" << total << ")\n";
  } else {
    std::cout << "This is not a valid card!(" << total << ")\n";
  }

  return 0;
}

int getTotal(const std::string card) {
  int total = 0;
  for (int i = 0; i < card.size(); i++) {
    total += (card[i]-'0');
  }
  return total;
}

int getTotalOdd(const std::string card) {
  int total = 0;
  for (int i = 1; i < card.size(); i+=2) {
    total += (card[i]-'0');
  }
  return total;
}

std::string doubleDigits(const std::string card) {
  std::string output = "";
  for (int i = 0; i < card.size(); i+=2) {
    int doubled = (card[i]-'0') * 2;
    output += std::to_string(doubled);
  }
  return output;
}
