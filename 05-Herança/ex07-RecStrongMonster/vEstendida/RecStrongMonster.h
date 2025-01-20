#pragma once

#include <string>
using std::string;

#include <iostream>
using std::ostream;

#include "StrongMonster.h"

class RecStrongMonster: public StrongMonster
{ 
public:
  RecStrongMonster(string, int = 100, int = 80, int = 10, double = 2.5);

  //sobrescrevendo método golpear mais uma vez
  int golpear(); //deixou de ser const

};
