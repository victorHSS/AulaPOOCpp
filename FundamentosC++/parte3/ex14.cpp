#include <iostream>
#include <string>
#include <cctype>

using std::string, std::cout, std::cin, std::endl;

int main()
{
 string s1{"Uma string qualquer"};

    for (auto &c : s1)
        c = toupper(c);

    cout << s1 << endl;

    return 0;
}

