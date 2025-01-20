#include "GrowlingMonster.h"

#include <string>
using std::string;

#include <iostream>
using std::ostream, std::endl;

ostream &operator<<(ostream &out, const GrowlingMonster &m)
{
  out << "Monster: " << m.nome << endl;
  if (m.life > 0) 
    out << "Life: " << m.life << endl << endl;
  else 
    out << "Died." << endl << endl;
  return out;
}

GrowlingMonster::GrowlingMonster(string nome, int life, int ataque, int defesa) : nome(nome),life(life),ataque(ataque),defesa(defesa)
{
  //
}

void GrowlingMonster::sofrerGolpe(int forca)
{
  int golpe = forca / defesa;
  life = (life - golpe <= 0)? 0 : life - golpe;
}

int GrowlingMonster::golpear() const
{
  return ataque;
}

//novo método

void GrowlingMonster::growling() const
{
  std::cout << "Arrghhhhhh" << endl;
}
