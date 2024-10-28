#include <iostream>

unsigned cresceUm(void)
{
    static unsigned v{0};
    return ++v;
}

int main()
{
    std::cout << cresceUm() << std::endl;
    std::cout << cresceUm() << std::endl;
    return 0;
}

