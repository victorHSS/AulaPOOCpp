#include <iostream>
using std::cout, std::endl;

#include "Time.h"

//o uso de métodos inline não alteram a lógica do programa

int main() {
  Time t(10,40);

  cout << t.toUniversal() << endl;

  return 0;
}
