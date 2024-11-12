#include <iostream>
#include <string>

using std::cout, std::endl, std::string;

//definindo uma classe Carro
class Carro {
//especificador de acesso público
public:
	//métodos, funções-membro, serviços
	
	//método get - retorna dado privado
	string getMarca() {
		return m_marca;
	}
	
	//método set - configura dado privado
	void setMarca(string marca){
		m_marca = marca;
	}

//especificador de acesso privado
private:
	//membros de dados, atributos
	string m_marca;
};


int main() {
	Carro possante;
	
	//possante.m_marca = "Renault"; // ERRO: m_marca está encapsulado
	
	possante.setMarca("Renault");
	
	cout << "A marca do meu possante eh "
		 << possante.getMarca() << std::endl;
	
	return 0;
}
