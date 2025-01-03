#include <iostream>

struct student {
  // members
  std::string name;
  double gpa;
  bool enrolled = true;
};

int main(int argc, char const *argv[]) {
  student s1;
  s1.name = "Spongebob";
  s1.gpa = 1.41;

  std::cout << s1.name << "\n";
  std::cout << s1.gpa << "\n";
  std::cout << s1.enrolled << "\n";

  student s2;
  s2.name = "Patrick";
  s2.gpa = 2.64;

  std::cout << s2.name << "\n";
  std::cout << s2.gpa << "\n";
  std::cout << s2.enrolled << "\n";

  student s3;
  s3.name = "Squidward";
  s3.gpa = 1.5;
  s3.enrolled = false;

  std::cout << s3.name << "\n";
  std::cout << s3.gpa << "\n";
  std::cout << s3.enrolled << "\n";

  return 0;
}
