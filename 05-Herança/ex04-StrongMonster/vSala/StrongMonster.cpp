#include "StrongMonster.h"

#include <string>
using std::string;


StrongMonster::StrongMonster(string nome, int life, int ataque, int defesa, double mulAtaque) : Monster(nome,life,ataque,defesa), mulAtaque(mulAtaque)
{
  //
}

//sobrescrevendo método golpear
int StrongMonster::golpear() const
{
  //tentar acessar membro ataque dá erro porque eh private na classe básica
  //return static_cast<int>(ataque * mulAtaque); //erro

  //return static_cast<int>(golpear() * mulAtaque); //erro: golpear entra em recursão


  //maneira correta de invocar método sobrescrito da classe básica
  return static_cast<int>(Monster::golpear() * mulAtaque);

  //return static_cast<int>(getAtaque() * mulAtaque); // CORRETO TAMBÉM!!!
}
