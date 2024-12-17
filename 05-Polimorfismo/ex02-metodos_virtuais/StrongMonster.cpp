#include "StrongMonster.h"

#include <string>
using std::string;

#include <iostream>
using std::cout, std::endl;


StrongMonster::StrongMonster(string nome, int life, int ataque, int defesa, double mulAtaque) : Monster{nome,life,ataque,defesa},mulAtaque{mulAtaque}
{
  //
}


//sobrescrevendo método golpear
int StrongMonster::golpear() const
{
  cout << "StrongMonster atacando..." << endl;
  return static_cast<int>(ataque * mulAtaque);
}
