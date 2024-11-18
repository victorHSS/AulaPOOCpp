#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

int main() {
  //ex1 
  Time t;

  cout << "Hora inicial: " << endl;
  cout << "Universal: ";
  cout << t.toUniversal() << endl;

  cout << "Padrão EUA: ";
  cout << t.toStandard() << endl;

  cout << "\nMudando a hora..." << endl;
  t.setTime(16, 40, 0);

  cout << "Universal: ";
  cout << t.toUniversal() << endl;

  cout << "Padrão EUA: ";
  cout << t.toStandard() << endl;

  cout<< "\nSetando hora inválida..." << endl;
  t.setTime(100, 100, 100);

  cout << "Universal: ";
  cout << t.toUniversal() << endl;

  cout << "Padrão EUA: ";
  cout << t.toStandard() << endl;

  //ex2 - um objeto é uma variável!! Tudo se aplica!

  Time relogios[5];   //array de 5 objetos Time
  Time &refTime = t;  //referência para objeto Time
  Time *pTime = &t;   //ponteiro para objeto Time

  cout << "\nHora no relogio 1..." << endl;
  cout << relogios[1].toStandard() << endl;

  cout << "Usando refTime..." << endl;
  cout << refTime.toStandard() << endl;

  cout << "Usando pTime..." << endl;
  cout << pTime->toStandard() << endl;   //ponteiro para objetos: operador -> (seta)

  cout << (*pTime).toStandard() << endl; //alternativa


  return 0;
}
