#include <iostream>
using std::cout, std::endl;

#include "Time.h"

int main() {
  Time t(16,40);

  cout << "Objeto t: ";
  cout << t.toUniversal() << endl;

  Time outroTime;

  cout << "Objeto outroTime criado: ";
  cout << outroTime.toUniversal() << endl;
    
  outroTime = t;  //cada atributo de t é copiado para o respectivo atributo de outroTime

  cout << "Objeto outroTime pós atribuição: ";
  cout << outroTime.toUniversal() << endl;
  
  outroTime.setTime(13,0,0);
  
  cout << "Objeto outroTime pós setTime 13 0 0: ";
  cout << outroTime.toUniversal() << endl;
  
  cout << "Objeto t original: ";  
  cout << t.toUniversal() << endl;

  return 0;
}
