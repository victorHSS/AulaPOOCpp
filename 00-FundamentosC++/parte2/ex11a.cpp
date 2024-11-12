#include <iostream>

//ooops, esse não compila
int main() {
    int x{3.1415f + 0.9};

    std::cout << x;

    return 0;
}

