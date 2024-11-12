#include <iostream>
#include <string>

using std::string, std::cout, std::cin, std::endl;

int main()
{
    string s1{"Uma string qualquer"};

    cout << "Primeiro caractere da string: " << s1[0] << endl;

    cout << "Último caractere da string: " << s1[s1.size() - 1] << endl;

    return 0;
}

