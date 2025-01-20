#include "StrongMonster.h"

#include <iostream>
using std::cout, std::endl;

#include <string>
using std::string;


StrongMonster::StrongMonster(string nome, int life, int ataque, int defesa, double mulAtaque) 
	: Monster{nome, life, ataque, defesa}, mulAtaque(mulAtaque)
{
  cout << "Construindo StrongMonster" << endl;
}

StrongMonster::~StrongMonster()
{
  cout << "Destruindo StrongMonster" << endl;
}

//sobrescrevendo método golpear
int StrongMonster::golpear() const
{
  return static_cast<int>(ataque * mulAtaque);
}
