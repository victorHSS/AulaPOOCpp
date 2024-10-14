#include <iostream>

int main()
{
    int n1{0};
    int n2{0};

    std::cout << "Digite 2 numeros: ";
    std::cin >> n1 >> n2;

    std::cout << "Soma de " << n1 << " com " << n2
           << " é " << n1 + n2 << std::endl;

    return 0;
}

