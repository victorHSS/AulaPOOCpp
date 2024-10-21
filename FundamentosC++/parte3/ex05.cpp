#include <iostream>

int main()
{
    for (auto &i : {1,2,3,4,5}) {
        if (i == 3)
            break;
        std::cout << i << std::endl;
    }

    return 0;
}

