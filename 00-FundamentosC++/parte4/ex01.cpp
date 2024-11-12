#include <iostream>

int fat(int val)
{
    int ret{1};    //ret é uma variável local

    while (val > 1)
        ret *= val--;
    return ret;
}

int main()
{
    std::cout << fat(5);
    return 0;
}

