#pragma once

#include <string>
using std::string;

#include <iostream>
using std::ostream;

class GrowlingMonster 
{
  friend ostream &operator<<(ostream &, const GrowlingMonster&); 

public:
  GrowlingMonster(string, int = 100, int = 80, int = 10);

  void sofrerGolpe(int = 100);
  int golpear() const;

  // ====== novo método =======

  void growling() const;

  // ==========================

  int isAlive() const {return life != 0;}

  string getNome() const {return nome;}
  int getAtaque() const {return ataque;}
  int getDefesa() const {return defesa;}

  GrowlingMonster &setLife(int life) { this->life = life; return *this;}

  GrowlingMonster &setAtaque(int ataque) { this->ataque = ataque; return *this;}

  GrowlingMonster &setDefesa(int defesa) { this->defesa = defesa; return *this;}

private:
  string nome;
  int life;
  int ataque;
  int defesa;

};
