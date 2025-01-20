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
  m->golpear(); //versão Monster

  //ok ponteiro StrongMonster para objeto StrongMonster
  sm = &strongMonster;
  cout << *sm;
  sm->isAlive();
  sm->sofrerGolpe();
  sm->golpear(); //versão StrongMonster

  //ok ponteiro Monster para objeto StrongMonster (StringMonster é um Monster)
  m = &strongMonster;
  cout << *m;
  m->isAlive();
  m->sofrerGolpe();
  m->golpear(); //Pergunta: qual versão está sendo invocada aqui? 
                //R: versão StrongMonster, porque o ponteiro é do tipo Monster, mas método golpear agora é virtual. Temos aqui um comportamento polimórfico.

  //erro!!! Monster não é, necessariamente, um StrongMonster
  //sm = &monster; 

  return 0;
}
