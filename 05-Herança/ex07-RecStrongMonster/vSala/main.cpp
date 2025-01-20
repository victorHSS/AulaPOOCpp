#include <iostream>
using std::cout, std::cin, std::endl;

#include "DefenseMonster.h"
#include "RecStrongMonster.h"

int main() {

  // Os 2 monstros
  DefenseMonster m1{"Defense Monster"};
  RecStrongMonster m2{"Recovery Strong Monster"};

  cout << "Eu ia andando bem distraído, até que me assustei com o que apareceu na minha frente:" << endl << endl;
  
  cout << m1 << m2;

  cout << "Criei coragem, procurei o mais mais forte e ataquei com toda força que tinha..." << endl;

  m2.sofrerGolpe(200);

  cout << "Acho que derrotei ele!" << endl << endl;

  cout << m1 << m2;

  cout << "Que nada, me deu um dano de " << m2.golpear() << endl << endl;

  cout << "E ainda por cima, recuperou seu life..." << endl << endl;

  cout << m1 << m2;
  
  return 0;
}
