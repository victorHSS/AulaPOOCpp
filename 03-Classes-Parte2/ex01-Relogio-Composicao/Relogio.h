#pragma once

#include <string>
using std::string;

#include "Time.h"

class Relogio {
public:
  
  //É uma boa fazer uso da sintaxe de inicialização de membro já no .h (ou .hpp)
  Relogio(const string &ma, const string &mo) : marca(ma), modelo(mo) {} // a sintaxe de inicialização de membro obriga a implementação do construtor, mesmo que seja vazia "{}"
  
  Relogio(const string &, const string &, const Time &);

  //sobrecarga de métodos	
  void ajustarHoras(const Time &);
  void ajustarHoras(int = 0 , int = 0, int = 0);

  void verHoras() const;

private:
  string marca;
  string modelo;
  Time marcador;
};

