#include "DefenseMonster.h"

#include <string>
using std::string;


DefenseMonster::DefenseMonster(string nome, int life, int ataque, int defesa, double mulDefesa) : Monster{nome, life, ataque, defesa}, mulDefesa{mulDefesa}
{
  //
}

//sobrescrevendo método sofrerGolpe
void DefenseMonster::sofrerGolpe(int forca)
{
  int golpe = forca / (defesa * mulDefesa);
  life = (life - golpe <= 0)? 0 : life - golpe;
}
