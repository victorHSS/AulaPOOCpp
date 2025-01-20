#pragma once

#include <string>
using std::string;

#include <iostream>
using std::ostream;

#include "Monster.h"

class DefenseMonster: public Monster
{ 
public:
  DefenseMonster(string, int = 100, int = 80, int = 10, double = 2.5);
  ~DefenseMonster();

  //sobrescrevendo método sofrerGolpe
  void sofrerGolpe(int = 100);

  //outros métodos adicionais
  //...

private:
  //outros atributos adicionais
  //...
  double mulDefesa;
};
