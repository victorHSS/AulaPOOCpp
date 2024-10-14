#include <iostream>
int var1{100}; // escopo global

int main()
{
    int var2{10}; //escopo de bloco (local)
    std::cout << var1 << " " << var2 << std::endl;
    
    int var1{50}; //escopo de bloco (local)
    std::cout << var1 << " " << var2 << std::endl;
    
    //usando operador de resolução de escopo
    std::cout << ::var1 << " " << var2 << std::endl;

    return 0;
}

