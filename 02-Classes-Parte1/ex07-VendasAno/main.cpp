#include <iostream>
using std::cout, std::endl;

#include "VendasAno.h"

int main() {
	VendasAno vendas2023;

	vendas2023.registrarVenda(1, 3000.);
	vendas2023.registrarVenda(2, 3600.);
	vendas2023.registrarVenda(5, 1500.);
	vendas2023.registrarVenda(7, 2200.);
	vendas2023.registrarVenda(11, 750.);

	//vendas2023.calcTotalAno(); //oooops, não consigo chamar!
	
	//vendas2023.registrarVenda(13, 1000); //oooops, que mês é esse?

	vendas2023.printSomaVendasAno();

	return 0;
}
