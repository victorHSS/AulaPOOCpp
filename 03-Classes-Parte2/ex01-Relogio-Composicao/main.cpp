#include <iostream>
using std::cout, std::endl;

#include "Relogio.h"

int main() {
  // observe acriação de um objeto temporário inominado - muito útil. É
  // "semelhante à uma constante literal" para o tipo.
  Relogio rel1{"Amazfit", "Gts", Time{12,0,0}}; 

  rel1.verHoras();

  Relogio rel2{"Garmin", "Forewatcher"};
  rel2.ajustarHoras(Time{7,15,0});

  rel2.verHoras();

  return 0;
}
