#include <iostream>
using std::cout, std::endl;

#include "Time.h"

/*
    este código gerará um erro de compilação
*/

int main() {
  Time acordar{7,0};        //instância não-const
  const Time meioDia{12,0}; //instância const


  // AGORA VAMOS COMPREENDER A IMPORTÂNCIA DE UMA CORRETA MODELAGEM (aplicação de const)

  
                            // OBJETO       METODO         POSSIBILIDADE
  acordar.setHour(18);      // não-const    não-const      Sim
  meioDia.setHour(12);      // const        não-const      Não

  acordar.getHour();        // não-const    const          Sim

  meioDia.getMinute();      // const        const          Sim
  meioDia.toUniversal(); 	// const        const          Sim
  
  meioDia.toStandard();  	// const        não-const      Não!!

  return 0;
}
