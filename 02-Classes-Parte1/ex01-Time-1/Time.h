//impede que múltiplas inclusões ocorram
#pragma once

#include <string>

class Time 
{
public:
  Time(); //construtor
  void setTime(int, int, int); //protótipo
  std::string toUniversal() const;
  std::string toStandard() const;

private:
  int hour;
  int minute;
  int second;
};
