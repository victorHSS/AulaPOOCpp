#include <iostream>
#include <array>

using std::array, std::cout;

int main() {
    array meuArray{1,2,3,4,5};  //inicializando um array de 5 inteiros
    array<int, 5> outroArray;   //criando um array de inteiros de tamanho 5 "vazio""

    for (int i{0} ; i < meuArray.size() ; i++)
        outroArray[i] = meuArray.at(i); //[i] e at(i) são semelhantes, mas at(i) é mais seguro
    
    for (const int& v : outroArray)
        cout << v << " ";
    
    return 0;
}
