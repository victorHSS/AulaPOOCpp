#include <iostream>
#include <string>
#include <format>

using std::cout, std::endl, std::string;
using std::format;

class Carro {
public:
	Carro(string marca, string modelo)
	{		
		setMarca(marca);
		setModelo(modelo);
	}
	
	string getMarca() {
		return m_marca;
	}
	
	void setMarca(string marca){
		m_marca = ( marca.empty() ? "\"Sem marca\"" : marca );
	}
		
	string getModelo() {
		return m_modelo;
	}
	
	void setModelo(string modelo){
		m_modelo = ( modelo.empty() ? "\"Sem modelo\"" : modelo );;
	}
	
private:
	string m_marca;
	string m_modelo;
};


int main() {
	Carro possante{"Renault", "Duster"};
	
	cout << format("O meu possante eh um {} {}\n", 
		possante.getMarca(),
		possante.getModelo());
	
	return 0;
}
