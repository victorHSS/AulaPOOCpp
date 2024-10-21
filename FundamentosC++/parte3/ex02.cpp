#include <iostream>

int main()
{
    unsigned a = 0, e = 0, i = 0;
    char ch;

    while (std::cin >> ch)
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                std::cout << "Vogal" << std::endl;
                break;
            default:
                std::cout << "Não vogal" << std::endl;
        }
    return 0;
}

