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
	
	string getMarca() const {
		return m_marca;
	}
	
	void setMarca(string marca){
		//validando entrada antes de atribuir
		m_marca = ( marca.empty() ? "\"Sem marca\"" : marca );
	}
		
	string getModelo() const {
		return m_modelo;
	}
	
	void setModelo(string modelo){
		//validando entrada antes de atribuir
		m_modelo = ( modelo.empty() ? "\"Sem modelo\"" : modelo );;
	}
	
private:
	string m_marca;
	string m_modelo;
};


int main() {
	Carro possante{"", ""};
	
	cout << format("O meu possante eh um {} {}\n", 
		possante.getMarca(),
		possante.getModelo());
	
	return 0;
}
