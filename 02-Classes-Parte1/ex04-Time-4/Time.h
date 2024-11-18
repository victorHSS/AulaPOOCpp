//impede que múltiplas inclusões ocorram
#pragma once

#include <string>

class Time 
{
public:
  Time( int = 0, int = 0 , int = 0 ); //construtor

  //funções set
  //Métodos não-const alteram o estado do objeto
  void setTime(int , int, int); //protótipo

  void setHour( int );
  void setMinute( int );
  void setSecond( int );

  //funções get
  //Métodos const não alteram o estado do objeto
  int getHour() const {return hour;}
  int getMinute() const {return minute;}
  int getSecond() const {return second;}

  std::string toUniversal() const;
  std::string toStandard(); //deveria ser const

private:
  int hour;
  int minute;
  int second;
};
