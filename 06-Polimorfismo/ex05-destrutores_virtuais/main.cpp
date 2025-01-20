#include <iostream>
using std::cout, std::endl;

//Teste este arquivo com e sem a palavra-chave virtual no destrutor da base
//combinado em com e sem a palavra-chave override no destrutor da derivada

class ClasseBasica {
public:
	ClasseBasica() {
		cout << "Construindo ClasseBasica" << endl;
	}

	// destrutor virtual
	// experimento: remover virtual e analise a diferença
	virtual ~ClasseBasica() {
		cout << "Destruindo ClasseBasica" << endl;
	}
};

class ClasseDerivada : public ClasseBasica {
public:
	ClasseDerivada() {
		cout << "Construindo ClasseDerivada" << endl;
	}

	// mesmo sem a palavra-chave virtual, o destrutor da derivada é virtual se na classe básica ele for virtual
	~ClasseDerivada() override {
		cout << "Destruindo ClasseDerivada" << endl;
	}
};

int main() {
	ClasseBasica *cb = new ClasseDerivada{};

	delete cb;

	return 0;
}
