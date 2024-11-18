#include <iostream>
using std::cout;

#include "Increment.h"

int main() {
  Increment valor(10,5);

  cout << "Antes do incremento: ";
  valor.print();

  for (int i = 0 ; i < 3 ; i++)
  {
    valor.addIncrement();
    cout << "Depois do incremento: ";
    valor.print();
  }

  return 0;
}