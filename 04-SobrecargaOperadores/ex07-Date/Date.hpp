#pragma once

#include <iostream>
using std::ostream;

class Date 
{
  friend ostream &operator<<( ostream &, const Date &);

public:
  Date( int m = 1, int d = 1, int y = 1900 ); //construtor-padrão
  void setDate( int, int, int);
  
  //++objDate
  Date &operator++(); //convenção para incremento prefixado
  Date operator++( int ); //convenção para incremento poxfixado - retorna uma cópia temporária do valor

  const Date &operator+=( int );

  bool leapYear( int ) const;
  bool endOfMonth( int ) const;

private:
  int month;
  int day;
  int year;

  static const int days[];
  void helpIncrement();
};
