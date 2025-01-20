#include "Date.hpp"
#include <iostream>
using std::ostream, std::endl;

const int Date::days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

ostream &operator<<(ostream &out, const Date &d)
{
  static char monthName[13][4] = {"","Jan","Fev","Mar","Abr","Mai","Jun","Jul","Ago","Set","Out","Nov","Dez"};
  out << d.day << "/" << monthName[d.month] << "/" << d.year; 
  return out;
}


Date::Date( int m, int d, int y)
{
  setDate(m,d,y);
}

void Date::setDate(int mm, int dd, int yy)
{
  month = (mm >= 1 && mm <= 12) ? mm : 1;
  year = (yy >= 1900 && yy <= 2100) ? yy : 1900;

  if (month == 2 && leapYear(year))
    day = (dd >= 1 && dd <= 29) ? dd : 1;
  else
    day = (dd >= 1 && dd <= days[month] ) ? dd : 1;
}

//++data
Date &Date::operator++()
{
  helpIncrement();
  return *this;
}

//data++
Date Date::operator++( int )
{
  Date temp = *this;
  helpIncrement();

  return temp;
}

const Date &Date::operator+=(int addDays)
{
  for (int i = 0 ; i < addDays ; i++)
    helpIncrement();

  return *this;
}

bool Date::leapYear(int testYear) const
{
  if (testYear % 400 == 0 ||
     (testYear % 100 != 0 && testYear % 4 == 0))
    return true;
  else
    return false;
}

bool Date::endOfMonth(int testDay) const
{
  if (month == 2 && leapYear( year ))
    return testDay == 29;
  else
    return testDay == days[month];
}

void Date::helpIncrement()
{
  if (!endOfMonth(day))
    day++;
  else
    if (month < 12)
    {
      month++;
      day = 1;
    }
    else
    {
      year++;
      month = 1;
      day = 1;
    }
}
