#include <iostream>
#include <string>

using std::string, std::cout, std::cin, std::endl;

int main()
{
    string s{};          //s é uma string vazia
    getline(cin, s);   //lê uma string até o fim da linha
    cout << s << endl; //escreve s na saída padrão

    return 0;
}

