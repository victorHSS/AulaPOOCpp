#include <iostream>

#include "ArrayList.h"

int main() {
  ArrayList al{10};

  al.add(1).add(2).add(10).add(20);

  al.print();

  return 0;
}
