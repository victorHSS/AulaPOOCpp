#include <iostream>
#include <format>
using std::cout, std::endl, std::format;

#include "Relogio.h"

Relogio::Relogio(const string &ma, const string &mo, const Time &t) : marca(ma), modelo(mo), marcador(t) {}

void Relogio::ajustarHoras(const Time &t)
{
  marcador = t;
}

void Relogio::ajustarHoras(int h , int m, int s)
{
  marcador.setTime(h,m,s);
}

void Relogio::verHoras() const
{
  cout << " +------------------+" << endl;
  cout << format("/{:^20s}\\\n", marca);
  cout << format("|{:^20s}|\n", modelo);
  cout << format("\\{:^20s}/\n", marcador.toUniversal());
  cout << " +------------------+\n\n";
}
