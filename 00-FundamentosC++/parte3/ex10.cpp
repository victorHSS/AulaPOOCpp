#include <iostream>
#include <string>

using std::string, std::cout, std::cin, std::endl;

int main()
{
    string s{};          //s é uma string vazia
    getline(cin, s);   //lê uma string até o fim da linha

    if (s.empty())
        cout << "String vazia!" << endl;
    else
        cout << "Tamanho da string: " << s.size() << endl;

    return 0;
}

