#pragma once

class Increment 
{
public:
  Increment( int = 0, int = 1 );

  void addIncrement() { count += increment; }

  void print() const; 
  //não é o ideal um método print, mas numa aula futura ilustrarei
  //uma forma melhor de fazer isso, com sobrecarga de operadores

private:
  int count;
  //atributo const
  const int increment;
};
