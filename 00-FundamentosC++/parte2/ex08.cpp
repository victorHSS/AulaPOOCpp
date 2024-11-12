#include <iostream>
#include <format>

int main()
{
    int i{0}, j;

    j = ++i; //primeiro incrementa, depois atribui i a j

    std::cout << std::format("i={}, j={}", i ,j);

    return 0;
}

