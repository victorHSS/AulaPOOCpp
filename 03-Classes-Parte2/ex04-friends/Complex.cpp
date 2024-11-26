#include <iostream>
#include <format>
using std::cout, std::endl, std::format;

#include "Complex.h"

//implementações das funções friend
//mote que elas não pertencem ao escopo da classe, nem precisam ser prefixadas com "friend"

Complex soma(const Complex &c1, const Complex &c2)
{
  Complex res;
  res.real = c1.real + c2.real;
  res.imaginaria = c1.imaginaria + c2.imaginaria; 
  return res;
}

Complex sub(const Complex &c1, const Complex &c2)
{
  Complex res;
  res.real = c1.real - c2.real;
  res.imaginaria = c1.imaginaria - c2.imaginaria; 
  return res;
}

//demais métodos

std::string Complex::toString() const
{
	return format("{}{}{}*i", real, (imaginaria >= 0 ? " +" : " "), imaginaria);
}

void Complex::print() const
{
  cout << toString() << endl;
}
