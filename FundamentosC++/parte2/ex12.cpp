#include <iostream>

int main()
{
    //necessário, senão teríamos um erro de compilação
    int x{ static_cast<int> (3.1415f + 0.9) }, y{3}; 
    int ri { x / y };

    //converte x para double para que a divisão resulte em ponto flutuante
    double rd { static_cast<double> (x) / y }; 

    std::cout << ri << std::endl;
    std::cout << rd << std::endl;
    return 0;
}

