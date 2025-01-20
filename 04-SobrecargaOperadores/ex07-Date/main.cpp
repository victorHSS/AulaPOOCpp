#include <iostream>
using std::cout, std::endl;

#include "Date.hpp"

int main() {
  Date d1;

  Date d2{3,22,2023};

  cout << "d1 = " << d1 << endl;
  cout << "d2 = " << d2 << endl;

  d2 += 15;

  cout << "d2 = " << d2 << endl;

  cout << "d2 = " << ++d2 << endl;

  cout << "d2 = " << d2++ << endl;

  cout << "d2 = " << d2 << endl;

  return 0;
}
