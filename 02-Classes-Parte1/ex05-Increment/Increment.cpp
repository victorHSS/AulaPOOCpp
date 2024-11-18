#include <iostream>
#include <format>
using std::cout, std::endl, std::format;

#include "Increment.h"


//--------------------------------->  sintaxe de inicialização de membros 
Increment::Increment (int c, int i) : count(c), increment(i)
{
  // se precisar, faz mais alguma coisa... senão deixa vazio!!
  //count = c; //também funcionaria
  //increment = i; //ERRO, já foi construído e por ser const não posso mais modificar!!
}

void Increment::print() const 
{
  cout << format("contador = {}, incremento =  {}\n", count, increment );
}
