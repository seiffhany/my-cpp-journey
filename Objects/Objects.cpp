#include <iostream>

class Person {
private:
  std::string name;
  std::string occupation;
  int age;

public:
  Person(std::string name, std::string occupation, int age) {
    this->name = name;
    this->occupation = occupation;
    this->age = age;
  }
  void eat() { std::cout << "\n" << name << " is eating!\n"; }
  void drink() { std::cout << "\n" << name << " is drinking!\n"; }
  void sleep() { std::cout << "\n" << name << " is sleeping!\n"; }
};

int main(int argc, char const *argv[]) {
  Person p1("Seif", "software engineer", 21);
  p1.eat();
  p1.drink();
  p1.sleep();

  Person p2("Patrick", "starfish", 40);
  p2.eat();
  p2.drink();
  p2.sleep();

  Person p3("Sandy", "chipmunk", 21);
  p3.eat();
  p3.drink();
  p3.sleep();

  return 0;
}
