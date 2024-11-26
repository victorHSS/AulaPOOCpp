#pragma once

#include <string>

class Complex 
{
  //funções friend - não estão sujeitas aos modificadores de visibilidade...

  friend Complex soma(const Complex &, const Complex &);
  friend Complex sub(const Complex &, const Complex &);
  
public:
  Complex( double r = 0, double b = 0) : real{r}, imaginaria{b}
  { /* Deixa vazio se não há nada mais a fazer*/  }

  void soma(const Complex &);

  void sub(const Complex &);
	
  std::string toString() const;
  
  void print() const; //ok, mais uma vez, tem forma melhor de fazer!

private:
  double real;
  double imaginaria;
};

