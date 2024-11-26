#pragma once

#include <stdexcept>

/*
 * Implementação bem barata do array
 * */

//       PARAMETRO TIPO   PARAMETRO NÃO-TIPO
template <  class T,         unsigned TAM >
class Array {
public:
	Array() = default;
	~Array() = default;

	unsigned size() const { return TAM; }
	
	T &at(unsigned p) {
		if (p >= TAM)
			throw std::out_of_range("Acesso fora dos limites do Array!");
		
		return arr[p];
	}
	
	bool empty() const { return TAM != 0; }

private:
	T arr[TAM];
};
