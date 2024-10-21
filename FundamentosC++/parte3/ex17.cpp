#include <iostream>
#include <vector>

using std::vector, std::cout;

int main() {
	vector meuVector{1,2,3,4,5};  //inicializando um vector contendo 5 inteiros
	vector<int> outroVector;      //criando um vector de inteiros vazio

	for (int i{0} ; i < meuVector.size() ; i++)
    		outroVector.push_back( meuVector[i] ); //ou meuVector.at(i) - melhor!!

    
	for (const int& v : outroVector)
    		cout << v << " ";
    
	return 0;
}

