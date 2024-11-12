#include <iostream>

void reset(int &i) 
{
    i = 0;
}

int main()
{
    int x{100};

    std::cout << x << std::endl;

    reset(x);

    std::cout << x << std::endl;

    return 0;
}

