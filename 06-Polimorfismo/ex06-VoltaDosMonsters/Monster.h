#pragma once

#include <string>
using std::string;

#include <iostream>
using std::ostream;

class Monster 
{
  friend ostream &operator<<(ostream &, const Monster&); 
public:
  Monster(string, int = 100, int = 80, int = 10);
  virtual ~Monster() {} //adicionando destrutores virtuais

  //métodos virtuais
  virtual void sofrerGolpe(int forca = 100);
  virtual int golpear() const;

  int isAlive() const {return life != 0;}

  string getNome() const {return nome;}
  int getAtaque() const {return ataque;}
  int getDefesa() const {return defesa;}

  Monster &setLife(int life) { this->life = life; return *this;}

  Monster &setAtaque(int ataque) { this->ataque = ataque; return *this;}

  Monster &setDefesa(int defesa) { this->defesa = defesa; return *this;}

//membros protected podem ser acessados pelas classes derivadas
protected:
  string nome;
  int life;
  int ataque;
  int defesa;

};
