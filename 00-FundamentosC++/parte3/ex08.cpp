#include <iostream>
#include <string>

using std::string, std::cout, std::cin, std::endl;

int main()
{
    string s{};   //s é uma string vazia
    cin >> s;   //lê uma string até encontrar caracteres de espaço
    cout << s << endl; //escreve s na saída padrão

 return 0;
}

