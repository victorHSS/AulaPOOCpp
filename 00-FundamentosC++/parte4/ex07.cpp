#include <iostream>
#include <string>

struct Pessoa {
    std::string nome;
    unsigned idade;
    char sexo;
};

int main()
{
    Pessoa p{"Victor", 30, 'M'};

    std::cout << "Nome: " << p.nome << std::endl;
    std::cout << "Idade: " << p.idade << std::endl;
    std::cout << "Sexo: " << p.sexo << std::endl;
    return 0;
}

