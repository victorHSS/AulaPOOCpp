#include <iostream>

int main()
{
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

