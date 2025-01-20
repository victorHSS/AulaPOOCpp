#include <iostream>
using std::cout, std::cin, std::endl;

#include "Monster.h"
#include "StrongMonster.h"

int main() {

  // Os 2 monstros
  Monster m1{"The Monster"};
  StrongMonster m2{"Strong Monster"};
  
  cout << "Eu ia andando bem distraído, até que me assustei com o que apareceu na minha frente:" << endl << endl;
  
  cout << m1 << m2;

  cout << "Criei coragem e ataquei o segundo com toda força que tinha..." << endl;

  m2.sofrerGolpe(200);

  cout << "Não sei que dano causei, mas o 2 continuaram lá..." << endl << endl;

  cout << m1 << m2;

  cout << "Ele, revoltado, devolveu sua ira, me deu um dano de " << m2.golpear() << endl << endl;

  cout << "Meu corpo ficou, mas juro que a alma saiu correndo!" << endl;
  
  return 0;
}
