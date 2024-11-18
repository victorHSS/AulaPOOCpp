#include <iostream>
using std::cout, std::endl;

#include "Complex.h"

int main() {
  Complex num1(10,-1);
  Complex num2(5,3);

  cout << "C1: ";
  num1.print();
  cout << "C2: ";
  num2.print();

  cout << "\nC1 = C1 + C2 \n";
  num1.soma(num2);

  cout << "C1: ";
  num1.print();
  cout << "C2: ";
  num2.print();

  cout << "\nC1 = C1 - C2 \n";
  num1.sub(num2);

  cout << "C1: ";
  num1.print();
  cout << "C2: ";
  num2.print();

  return 0;
}
