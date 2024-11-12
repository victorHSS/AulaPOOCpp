#include <iostream>

int main()
{
    std::cout << "Entre com um número: ";

    int num;
    std::cin >> num;

    std::cout << ((num % 2 == 0)? "Par" : "Impar");

    return 0;
}

