#include <iostream>
#include <string>

using std::string, std::cout, std::cin, std::endl;

int main()
{
    string s1{"Um "};
    string s2{"texto!"};
    string s3{s1 + s2};

    cout << s3 << endl;

    return 0;
}

