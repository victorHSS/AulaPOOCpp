#include <iostream>

int main()
{
    int cont{0};

    for (std::cout << "Só entro uma vez\n" ;
        std::cout << "testo a condição a cada loop\n", cont < 10 ; 
        std::cout << "incremento sempre ao fim\n", cont++ );

    return 0;
}

