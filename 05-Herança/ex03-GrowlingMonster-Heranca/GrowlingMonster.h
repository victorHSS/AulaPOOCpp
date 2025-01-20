#pragma once

#include <string>
using std::string;

#include <iostream>
using std::ostream;

#include "Monster.h"

                      //herança
class GrowlingMonster : public Monster
{
public:
  GrowlingMonster(string, int = 100, int = 80, int = 10);

  // Ao herdar uma classe, você é livre para adicionar novos métodos e/ou novos atributos
  
  // ====== novo método =======

  void growling() const;

  // ==========================

};
