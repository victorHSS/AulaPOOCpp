#include <iostream>
using std::cout, std::cin, std::endl;

#include <array>

#include "Monster.h"

int main() {

  // criando um array-C++ com 2 Monsters
  std::array<Monster,2> m{ Monster{"Bad Monster"}, Monster{"Ugly Monster"} };

  cout << "Eu ia andando e me deparei com:" << endl << endl;
  cout << m[0] << m[1];

  cout << "Criei coragem e ataquei alguém com toda força que tinha..." << endl;

  m[0].sofrerGolpe(200);

  cout << "Não sei que dano causei, mas o 2 continuaram lá..." << endl << endl;

  cout << m[0] << m[1];

  cout << "Ele, revoltado, devolveu sua ira, me deu um dano de " << m[0].golpear() << endl << endl;

  cout << "Corri como se não houvesse amanhã!" << endl;

  
  return 0;
}
