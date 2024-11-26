#include <iostream>
#include <format>
using std::cout, std::endl, std::format;


#include "Time.h"

Time::Time(int hr, int min, int sec)
{
  setTime(hr, min, sec);  
  //qualquer modificação posterior em setTime reflete no construtor
}

Time &Time::setTime(int h, int m, int s)
{
  setHour(h);
  setMinute(m);
  setSecond(s);  
  
  return *this;
}

Time &Time::setHour(int hour)
{
  //this explicito... com ele, posso distinguir o parâmetro do atributo!!!
  this->hour = (hour >=0 && hour < 24) ? hour : 0;  
  
  return *this;
}

Time &Time::setMinute(int m)
{
  //this implícito
  minute = (m >= 0 && m < 60) ? m : 0;
  
  return *this;
}

Time &Time::setSecond( int second )
{
  this->second = (second >= 0 && second < 60) ? second : 0;
  
  return *this;
}

std::string Time::toUniversal() const
{
	return format("{:02d}:{:02d}:{:02d}", hour, minute, second);
}

std::string Time::toStandard() const
{
	return format("{:02d}:{:02d}:{:02d} {}", ( (hour == 0 || hour == 12) ? 12 : hour % 12 ), minute, second, (hour < 12 ? "AM" : "PM"));
}
