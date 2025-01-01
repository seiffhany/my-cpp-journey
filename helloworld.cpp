#include <iostream>

int main() {
    // This is a comment

    /*
    This
    is
    a
    Multiline
    Comment
    */

    int num1 = 5;
    int num2 = 10;
    int num = num1 + num2;

    float fnum1 = 5.4; // 16 bits
    double fnum2 = 5.5; // 32 bits

    char ch = 'A';
    std::cout << "Hello, World! " << (char) (ch - 8) << std::endl;

    // string
    std::string name = "Seif";
    std::cout << "Hello, " << name << std::endl;

    // const
    const int x = 5;
    // x = 4; // Error
    
    return 0;
}