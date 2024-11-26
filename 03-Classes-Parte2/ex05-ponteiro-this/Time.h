#pragma once

#include <string>

class Time 
{
public:
  Time( int = 0, int = 0 , int = 0); //construtor

  //métodos set
  //métodos set retornando uma referência para objeto Time
  Time &setTime(int , int, int); //protótipo

  Time &setHour( int );
  Time &setMinute( int );
  Time &setSecond( int );

  //métodos get
  //Métodos const não alteram o estado do objeto
  int getHour() const {return this->hour;}//apenas quis usar explicitamente o this
  int getMinute() const {return minute;}
  int getSecond() const {return second;}

  std::string toUniversal() const;
  std::string toStandard() const; 

private:
  int hour;
  int minute;
  int second;
};
