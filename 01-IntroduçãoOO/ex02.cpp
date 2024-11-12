#include <iostream>
#include <string>
#include <format>

using std::cout, std::endl, std::string;
using std::format;

class Carro {
public:
	
	//construtor da classe 
	Carro(string marca, string modelo)
	{
		//m_marca = marca;		//possível
		//m_modelo = modelo;	//possível
		
		setMarca(marca);	//possível - melhor
		setModelo(modelo);	//possível - melhor
	}
	
	string getMarca() const {
		return m_marca;
	}
	
	void setMarca(string marca){
		m_marca = marca;
	}
		
	string getModelo() const {
		return m_modelo;
	}
	
	void setModelo(string modelo){
		m_modelo = modelo;
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
