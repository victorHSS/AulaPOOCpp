#pragma once

#include <array>

class VendasAno
{
public:
  VendasAno();

  void registrarVenda( int , double );
  void printSomaVendasAno() const; //não ideal. Melhor alternativa em breve...

private:
  double calcTotalAno() const;    //método utilitário
  
  std::array<double,12> vendas;
};
