#include <iostream>
using std::cout, std::cin, std::endl;

#include "DefenseMonster.h"
#include "StrongMonster.h"

int main() {

  // Os 2 monstros
  DefenseMonster m1{"Defense Monster"};
  StrongMonster m2{"Strong Monster"};

  cout << "Eu ia andando bem distraído, até que me assustei com o que apareceu na minha frente:" << endl << endl;
  
  cout << m1 << m2;

  cout << "Criei coragem, procurei o mais fraquinho e ataquei com toda força que tinha..." << endl;

  m1.sofrerGolpe(200);

  cout << "Ledo engano... acho que não fez nem cócegas!" << endl << endl;

  cout << m1 << m2;

  cout << "Ele, revoltado, devolveu sua ira, me deu um dano de " << m1.golpear() << endl << endl;

  cout << "Cooorrre!" << endl;
  
  return 0;
}
