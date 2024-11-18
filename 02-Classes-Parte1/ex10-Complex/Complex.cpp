#include <iostream>
#include <format>
using std::cout, std::endl, std::format;

#include "Complex.h"

void Complex::soma(const Complex &c)
{
  real += c.real; // objetos de mesmo tipo podem "quebrar encapsulamento"
  imaginaria += c.imaginaria; // objetos de mesmo tipo podem "quebrar encapsulamento"
}

void Complex::sub(const Complex &c)
{
  real -= c.real; // objetos de mesmo tipo podem "quebrar encapsulamento"
  imaginaria -= c.imaginaria; // objetos de mesmo tipo podem "quebrar encapsulamento"
}

std::string Complex::toString() const
{
	return format("{}{}{}*i", real, (imaginaria >= 0 ? " +" : " "), imaginaria);
}

void Complex::print() const
{
  cout << toString() << endl;
}
