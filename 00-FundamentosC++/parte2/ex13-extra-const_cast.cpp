#include <iostream>

int main()
{
    double d{3.1415};
    const double *pd{&d};

    *(const_cast<double*>(pd)) = d * 2;

    std::cout << d;

    return 0;
}

