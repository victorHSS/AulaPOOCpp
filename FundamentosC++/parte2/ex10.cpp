#include <iostream>

int main()
{
    unsigned a{0x000A}; // 00001010
    unsigned b{0x000D}; // 00001101

    std::cout << (a << 1) << std::endl;
    std::cout << (a >> 1) << std::endl;

    std::cout << (a & b) << std::endl;
    std::cout << (a | b) << std::endl;

    return 0;
}

