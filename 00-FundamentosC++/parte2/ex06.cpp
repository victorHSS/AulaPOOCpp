#include <iostream>
#include <format>

int main()
{
    int i{0}, j;

    j = i++; //primeiro atribui i a j, depois incrementa

    std::cout << std::format("i={}, j={}\n", i, j);

    return 0;
}

