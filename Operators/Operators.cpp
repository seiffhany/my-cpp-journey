#include <iostream>

int main() {
    int a = 10;
    int b = 20;
    int c = 25;
    int d = 25;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "b / a = " << b / a << std::endl;
    std::cout << "b % a = " << b % a << std::endl;
    std::cout << "c % a = " << c % a << std::endl;
    std::cout << "a++ = " << a++ << std::endl;
    std::cout << "a-- = " << a-- << std::endl;
    std::cout << "d++ = " << d++ << std::endl;
    std::cout << "++d = " << ++d << std::endl;
    return 0;
}