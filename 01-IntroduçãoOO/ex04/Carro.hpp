//include guard
//header guard
//progegendo o cabeçalho contra múltiplas inclusões
#pragma once

#include <string>
using std::string;

class Carro {
public:
	Carro(string marca, string modelo);
	
	string getMarca();
	
	void setMarca(string marca);
		
	string getModelo();
	
	void setModelo(string modelo);
	
private:
	string m_marca;
	string m_modelo;
};
