#include "Carro.hpp"

Carro::Carro(string marca, string modelo)
{		
	setMarca(marca);
	setModelo(modelo);
}
	
string Carro::getMarca() {
	return m_marca;
}
	
void Carro::setMarca(string marca){
	m_marca = ( marca.empty() ? "\"Sem marca\"" : marca );
}
	
string Carro::getModelo() {
	return m_modelo;
}

void Carro::setModelo(string modelo){
	m_modelo = ( modelo.empty() ? "\"Sem modelo\"" : modelo );;
}

