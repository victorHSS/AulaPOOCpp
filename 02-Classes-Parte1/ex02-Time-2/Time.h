//impede que múltiplas inclusões ocorram
#pragma once

#include <string>

class Time 
{
public:
  //Agora nosso construtor aceita construir um objeto com time diferente de 00h00m00s
  Time( int = 0 , int = 0 , int = 0 ); //construtor com argumentos default

  //funções set
  void setTime( int , int , int ); //protótipo
  void setHour( int );
  void setMinute( int );
  void setSecond( int );

  //funções get
  int getHour() const;
  int getMinute() const;
  int getSecond() const;

  std::string toUniversal() const;
  std::string toStandard() const;

private:
  int hour;
  int minute;
  int second;
};

