#include <iostream>
#include <format>

#include <iostream>

unsigned fibonacci(void)
{
    //a e b inicializadas apenas uma vez, na primeira chamada
    static unsigned a{0}, b{1};   
    unsigned tmp{a};

    a = b;
    b += tmp;

    return tmp;
}


int main() {
    std::cout << std::format("{} ", fibonacci());
    std::cout << std::format("{} ", fibonacci());
    std::cout << std::format("{} ", fibonacci());

    return 0;
}
