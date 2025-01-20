#include "StrongMonster.h"

#include <string>
using std::string;


StrongMonster::StrongMonster(string nome, int life, int ataque, int defesa, double mulAtaque) : Monster{nome, life, ataque, defesa}, mulAtaque{mulAtaque}
{
  //
}

//sobrescrevendo método golpear
int StrongMonster::golpear() const
{
  return static_cast<int>(ataque * mulAtaque);
}
