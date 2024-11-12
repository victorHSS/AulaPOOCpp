#include <iostream>

int main()
{
    int val{100}, val2{50};   
    int &refVal{val}, val3;

    std::cout << val << std::endl;
    refVal = 200;

    std::cout << val << std::endl;

    return 0;
}

