#include <iostream>

int main()
{
    for (auto &i : {1,2,3,4,5}) {
        if (i == 3)
            continue;
        std::cout << i << std::endl;
    }

    return 0;
}

