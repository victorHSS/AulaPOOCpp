#include <iostream>

#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"
 
int main() {
	//FormaBidimensional fd(2); // ERRO!!!!  

    //FormaBidimensional *p; // o ponteiro pode existir
	FormaBidimensional *formas[] = {
		new Quadrado{}, new Circulo{}, new Triangulo{}};

	for (int i = 0; i < 3; i++) {
		formas[i]->desenhar();
		delete formas[i];
	}

	return 0;
}
