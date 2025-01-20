#include "GrowlingMonster.h"

#include <string>
using std::string;

#include <iostream>
using std::ostream, std::endl;

//para inicializar os membros de dados presentes na classse básica deve-se chamar o construtor da classe básica usando-se a sintaxe de inicialização de membro

GrowlingMonster::GrowlingMonster(string nome, int life, int ataque, int defesa) : Monster(nome, life, ataque, defesa)
{
  //
}

void GrowlingMonster::growling() const
{
  std::cout << "Arrghhhhhh" << endl;
}
