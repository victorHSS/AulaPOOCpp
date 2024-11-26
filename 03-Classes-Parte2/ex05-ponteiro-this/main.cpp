#include <iostream>
using std::cout, std::endl;

#include "Time.h"

int main() {
  Time t;
  
  //esse encadeamento...
  t.setHour(16).setMinute(40).setSecond(0);

  //... produz o mesmo efeito que
  Time t2;
  t2.setHour(16);
  t2.setMinute(40);
  t2.setSecond(0);

  cout << "t  = " << t.toUniversal() << endl;

  cout << "t2 = " << t2.toUniversal() << endl;

  return 0;
}
