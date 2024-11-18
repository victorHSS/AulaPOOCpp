#include <iostream>
using std::cout, std::endl;

#include "Time.h"

int main() {
  Time t(16,40);

  //tentando setar uma hora inválida
  t.setTime(30,90,100);
  cout << t.toUniversal() << endl;

  int &hour = t.getHour();

  hour = 30; //muahahahaha
  cout << t.toUniversal() << endl;

  //Uma outra forma possível
  t.getMinute() = 100; //muahahahaha

  cout << t.toUniversal() << endl;

  return 0;
}
