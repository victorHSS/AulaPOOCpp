#include "VendasAno.h"

#include <iostream>
#include <format>
using std::cout, std::endl, std::format;

#include <stdexcept> //para exceções std

#include <numeric> //para o accumulate

VendasAno::VendasAno() : vendas{}
{ /* Se não tem mais o que fazer, deixa vazio! */ }


//lança exceção
//ver mais opções em https://cplusplus.com/reference/stdexcept/

void VendasAno::registrarVenda(int mes, double valor)
{  
	//validando
	if (mes < 1 || mes > 12 || valor <= 0.0)
		throw std::invalid_argument{"Mês e/ou valor inválido."}; //lançando exceção!
   
    vendas[mes - 1] = valor;
}

void VendasAno::printSomaVendasAno() const
{
  cout << format("Total de Vendas anual foi R$ {:7.2f}\n", calcTotalAno() );
}

double VendasAno::calcTotalAno() const
{
  //usando o poder de C++
  //                       iterador ini  , iterador fim, valor inicial acumulador
  return std::accumulate(vendas.begin(), vendas.end(), 0 );
  
  //ou, de forma manual:
  
  /*
  double totalV = 0.0;

  for (const auto &venda : vendas)
    totalV += venda;
  
  return totalV;
  */
}
 
