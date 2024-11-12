#include <iostream>
#include <string>

using std::string, std::cout, std::cin, std::endl;

int main()
{
    string s1{"Uma string qualquer"};

    for (auto c : s1)
        cout << c << endl;

    return 0;
}

