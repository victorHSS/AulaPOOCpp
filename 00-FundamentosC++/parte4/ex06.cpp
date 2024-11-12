#include <iostream>
#include <string>

using std::string;

template <typename T>
T giveBack(const T &x) { return x; }

int main()
{
    std::cout << giveBack(100) << std::endl;
    std::cout << giveBack('c') <<  std::endl;
    std::cout << giveBack(string("string")) << std::endl;
    std::cout << giveBack(3.1415f) << std::endl;
    std::cout << giveBack(3.1415) << std::endl;

    return 0;
}

