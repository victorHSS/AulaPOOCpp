#include <iostream>
#include "Soldier.h"
#include "Helmet.h"


// AGREGAÇÃO
int main() {

  // os capacetee existem independentemente
  Helmet capacete1{"Ferro fundido"};
  Helmet capacete2{"Bronze"};
  

  //o soldado existe com ou sem capacete
  Soldier soldado{"Ryan"};

  soldado.quemSou();

  soldado.vestirCapacete(&capacete1);

  soldado.quemSou();

  soldado.vestirCapacete(&capacete2);

  soldado.quemSou();

  soldado.retirarCapacete();

  soldado.quemSou();

  return 0;
  
}
