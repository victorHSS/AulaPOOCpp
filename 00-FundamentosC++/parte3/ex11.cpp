#include <iostream>
#include <string>

using std::string, std::cout, std::cin, std::endl;

int main()
{
    string s1{"texto"};
    string s2{"Texto"};

    cout << (s1 == s2?"São iguais":"São diferentes") << endl;

    if (s1 < s2)
        cout << "Na ordem: " << s1 << " " << s2 << endl;
    else
        cout << "Na ordem: " << s2 << " " << s1 << endl;

    return 0;
}

