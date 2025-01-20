#include <iostream>
using std::cout, std::cin, std::endl;

#include "Monster.h"
#include "GrowlingMonster.h"

int main() {

  // Os 2 monstros
  Monster m1{"The Monster"};
  GrowlingMonster m2{"Growling Monster"};

  cout << "Eu ia andando bem distraído, até que ouvi um grunhido:" << endl << endl;

  m2.growling();

  cout << endl << "Me assustei e molhei as calças..." << endl;
  
  cout << endl << m1 << m2;

  cout << "Criei coragem e ataquei alguém com toda força que tinha..." << endl;

  m1.sofrerGolpe(200);

  cout << "Não sei que dano causei, mas o 2 continuaram lá..." << endl << endl;

  cout << m1 << m2;

  cout << "Ele, revoltado, devolveu sua ira, me deu um dano de " << m1.golpear() << endl << endl;

  cout << "Corri como se não houvesse amanhã!" << endl;
  
  return 0;
}
