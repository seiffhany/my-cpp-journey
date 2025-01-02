#include <iostream>

double getTotal(double prices[], int size);


int main() {
  double prices[]  = {65.00, 57.99, 15.05, 75, 9.00};
  double total = getTotal(prices, sizeof(prices)/sizeof(double));

  std::cout << "Total: $" << total << "\n";
  return 0;
}

double getTotal(double prices[], int size) {
  double total = 0;

  for (int i = 0; i < size; i++) {
    total += prices[i];
  }

  return total;
}