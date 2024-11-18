#include <iostream>
#include <format>
using std::cout, std::endl, std::format;

#include "Time.h"

Time::Time()
{
  hour = minute = second = 0;
}

void Time::setTime(int h, int m, int s)
{
  hour = (h >=0 && h < 24) ? h : 0;     //valida horas
  minute = (m >= 0 && m < 60) ? m : 0;  //valida minutos
  second = (s >= 0 && s < 60) ? s : 0;  //valida segundos
}

std::string Time::toUniversal() const
{
	return format("{:02d}:{:02d}:{:02d}", hour, minute, second);
}

std::string Time::toStandard() const
{
	return format("{:02d}:{:02d}:{:02d} {}", ( (hour == 0 || hour == 12) ? 12 : hour % 12 ), minute, second, (hour < 12 ? "AM" : "PM"));
}
