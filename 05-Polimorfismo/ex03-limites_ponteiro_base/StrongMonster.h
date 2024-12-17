#pragma once

#include <string>
using std::string;

#include <iostream>
using std::ostream;

#include "Monster.h"

class StrongMonster: public Monster
{ 
public:
  StrongMonster(string, int = 100, int = 80, int = 10, double = 2.5);

  //sobrescrevendo método golpear
  //Classe derivada - método deve estar indicado como override
  int golpear() const override;

  //add métodos get e set
  double getMulAtaque() const { return mulAtaque; }
  
  StrongMonster &setMulAtaque(double mulAtaque) {
    this->mulAtaque = mulAtaque;
    return *this;
  }

private:

  double mulAtaque;
};
