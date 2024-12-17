#include <iostream>
using std::cout, std::cin, std::endl;

#include "Monster.h"
#include "StrongMonster.h"

int main() {
  Monster monster{"Monster"};
  StrongMonster strongMonster{"StrongMonster"};

  Monster *m{nullptr};
  StrongMonster *sm{nullptr};

  //ok ponteiro Monster apontando para objeto Monster
  m = &monster;
  cout << *m;
  m->isAlive();
  m->sofrerGolpe();
  m->golpear();        //versão Monster

  //ok ponteiro StrongMonster para objeto StrongMonster
  sm = &strongMonster;
  cout << *sm;
  sm->isAlive();
  sm->sofrerGolpe();
  sm->golpear();       //versão StrongMonster

  //ok ponteiro Monster para objeto StrongMonster (StrongMonster "é um" Monster)
  m = &strongMonster;
  cout << *m;
  m->isAlive();
  m->sofrerGolpe();
  m->golpear(); //Pergunta: Qual versão está sendo invocada aqui? 
                //R: versão Monster, porque o ponteiro é do tipo Monster e o método golpear não é virtual

  
  //erro!!! Monster não é, necessariamente, um StrongMonster
  //sm = &monster; 

  return 0;
}
