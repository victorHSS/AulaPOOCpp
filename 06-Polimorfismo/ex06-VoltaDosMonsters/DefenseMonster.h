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
  ~DefenseMonster() override {} 

  //sobrescrevendo método sofrerGolpe
  void sofrerGolpe(int forca = 100) override;

private:

  double mulDefesa;
};
