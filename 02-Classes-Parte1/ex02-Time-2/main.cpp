#include <iostream>
using std::cout, std::endl;

#include "Time.h"

int main() {
  Time t1;          //todos os argumentos default
  Time t2(2);       //hora especificada
  Time t3(21, 40);  //hora e minuto especificados
  Time t4(12,40,30);// H, M, S

  Time t5(30,40,50);//valores inválidos

  cout << "Construtor com valores default" << endl;
  cout << t1.toStandard() << endl;

  cout << "Construtor com hora" << endl;
  cout << t2.toStandard() << endl;

  cout << "Construtor com hora e minutos" << endl;
  cout << t3.toStandard() << endl; 

  cout << "Construtor com hora, minutos e segundos" << endl;
  cout << t4.toStandard() << endl; 

  cout << "Construtor com valores inválidos" << endl;
  cout << t5.toStandard() << endl; 

  return 0;
}
