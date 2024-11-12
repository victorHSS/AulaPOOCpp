#include <iostream>
#include <format>

int main()
{
    unsigned a{0}, e{0}, i{0};
    char ch;

    while (std::cin >> ch)
        switch (ch) {
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        }

    std::cout << std::format("a {}, e {}, i {}\n", a, e, i);

    return 0;
}

