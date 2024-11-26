#include <iostream>
using std::cout, std::endl;

#include "Complex.h"

int main() {

  Complex c1(10,5), c2(5,-5), res;

  cout << "Somando..." << endl;
  res = soma(c1,c2);

  c1.print();
  cout << " + ";
  c2.print();
  cout << " = ";
  res.print();

  cout << endl << endl;
  
  cout << "Subtraindo..." << endl;
  res = sub(c1,c2);

  c1.print();
  cout << " - ";
  c2.print();
  cout << " = ";
  res.print();

  cout << endl;

  return 0;
}
