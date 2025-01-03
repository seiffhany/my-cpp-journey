#include <iostream>

struct Car {
  std::string model;
  int year;
  std::string color;
};

void printCar(Car &car);
int main(int argc, char const *argv[]) {
  Car car1;
  Car car2;

  car1.model = "Mustang";
  car1.year = 2024;
  car1.color = "red";

  car2.model = "Porsche";
  car2.year = 2024;
  car2.color = "blue";

  std::cout << "**** Year: " << car1.year << "\n";
  printCar(car1);
  std::cout << "**** Year: " << car1.year << "\n\n";

  printCar(car2);

  return 0;
}

void printCar(Car &car) {
  std::cout << car.model << "\n";
  std::cout << car.year << "\n";
  std::cout << car.color << "\n";
  car.year = 1997;
}
