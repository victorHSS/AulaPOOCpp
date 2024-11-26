#include <iostream>
#include "Soldier.h"
#include "Helmet.h"
#include "Relogio.h"


// Associação PURA

int main() {

  Helmet capacete1("Ferro fundido");
  Soldier soldado("Ryan");

  // um relógio de parede
  Relogio relogioParede("Economico", "Unico",Time(8,0));

  soldado.vestirCapacete(&capacete1);

  soldado.verificarHoras(relogioParede);
  
  return 0;
}
