#include <iostream>
#include <string>
#include <format>

#include "Carro.hpp"

using std::cout, std::format;

int main() {
	Carro possante{"Renault", "Duster"};
	
	cout << format("O meu possante eh um {} {}\n", 
		possante.getMarca(),
		possante.getModelo());
	
	return 0;
}
