#include "Monster.h"

#include <string>
using std::string;

#include <iostream>
using std::ostream, std::cout, std::endl;

ostream &operator<<(ostream &out, const Monster &m)
{
  out << "Monster: " << m.nome << endl;
  if (m.life > 0) 
    out << "Life: " << m.life << endl << endl;
  else 
    out << "Died." << endl << endl;
  return out;
}

Monster::Monster(string nome, int life, int ataque, int defesa) : nome{nome}, life{life}, ataque{ataque}, defesa{defesa}
{
  //
}

void Monster::sofrerGolpe(int forca)
{
  int golpe = forca / defesa;
  life = (life - golpe <= 0)? 0 : life - golpe;
}

int Monster::golpear() const
{
  cout << "Monster atacando..." << endl;
  return ataque;
}
