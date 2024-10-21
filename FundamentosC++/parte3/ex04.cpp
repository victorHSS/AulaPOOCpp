#include <iostream>

int main()
{
    int arr[]{1,2,3,4,5};

    for (auto &a : arr)
        std::cout << a << " ";

    return 0;
}

