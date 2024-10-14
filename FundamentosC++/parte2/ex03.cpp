#include <iostream>

int main()
{
    int val{100}, val2{50};
    int *pVal{&val};

    std::cout << pVal << " " << *pVal << std::endl;
    pVal = &val2;

    std::cout << pVal << " " << *pVal << std::endl;

    return 0;
}

