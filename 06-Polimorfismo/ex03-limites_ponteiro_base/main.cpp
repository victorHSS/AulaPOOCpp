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

  sm->getMulAtaque(); //ok

  //ok ponteiro Monster para objeto StrongMonster (StringMonster é um Monster)
  m = &strongMonster;
  cout << *m;
  m->isAlive();
  m->sofrerGolpe();
  m->golpear(); //Pergunta: Qual versão está sendo invocada aqui? 
                //R: versão StrongMonster, porque o ponteiro é do tipo Monster, mas método golpear agora é virtual. Temos aqui um comportamento polimorfico


  //E se eu tentar, por meio de um ponteiro base, acessar um membro de um objeto da derivada?
  
  m->getMulAtaque(); //R: erro. Apesar do ponteiro apontar para um objeto StrongMonster, o tipo Monster não conhece o método getMulAtaque()


  
  //erro!!! Monster não é, necessariamente, um StrongMonster
  //sm = &monster; 

  return 0;
              
}
