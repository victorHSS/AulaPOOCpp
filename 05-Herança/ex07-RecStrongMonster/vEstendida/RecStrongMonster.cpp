#include "RecStrongMonster.h"

#include <string>
using std::string;


RecStrongMonster::RecStrongMonster(string nome, int life, int ataque, int defesa, double mulAtaque) : StrongMonster{nome, life, ataque, defesa, mulAtaque}
{
  //
}


//sobrescrevendo método golpear
int RecStrongMonster::golpear()
{
  int golpe = StrongMonster::golpear();
  
  life += static_cast<int> (golpe * .05);

  return golpe;
}
