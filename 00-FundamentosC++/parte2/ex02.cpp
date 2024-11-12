#include <iostream>

int main()
{
    int val{100}, val2{50};  
    int *pVal{&val}, var, *pEx{nullptr};

    std::cout << val << std::endl;
    *pVal = 200;

    std::cout << val << std::endl;

    return 0;
}

