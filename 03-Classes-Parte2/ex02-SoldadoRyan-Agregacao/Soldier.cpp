#include <iostream>
#include "Soldier.h"

using std::cout, std::endl;

void Soldier::quemSou() const {
  cout << "Soldado " << nome << ", senhor!" << endl;
  if (helmet)
    cout << "Estou munido de um capacete de " << helmet->getMaterial() << "." << endl << endl;
  else
    cout << "Estou sem meu capacete!" << endl << endl;
}
