#include "String.hpp"

#include <cstring>
#include <cstdlib>

#include <iomanip>
using std::setw;

#include <iostream>
using std::cerr,std::endl;

#include <stdexcept>

ostream &operator<<(ostream &out, const String &s)
{
  out << s.sPtr;
  return out;
}

istream &operator>>(istream &inp, String &s)
{
  char tmp[100]; //char *
  inp >> setw(100) >> tmp;

  s = tmp; //invoca operador = . tmp convertido para String

  return inp;
}

String::String(const char *s)
{
  length = (s ? strlen(s):0);
  setString(s);
}


String::String(const String &s) : length(s.length)
{
  setString(s.sPtr);
}

String::~String()
{
  delete [] sPtr;
}


const String &String::operator=(const String &s)
{
  if (&s != this) //a = a // IMPEDIR
  {
    delete [] this->sPtr;
    this->length = s.length;
    setString(s.sPtr);
  }

  return *this;
}

// a+= "teste" ==> a = a + "teste"
const String &String::operator+=(const String &s)
{
  int newLength = this->length + s.length;

  char *tmpPtr = new char[newLength + 1];

  strcpy(tmpPtr,this->sPtr);
  strcpy(tmpPtr + this->length,s.sPtr);

  delete this->sPtr;
  this->sPtr = tmpPtr;
  this->length = newLength;

  return *this;
}

bool String::operator!() const
{
  return length == 0;
}

bool String::operator==( const String &s) const
{
  return strcmp(this->sPtr,s.sPtr) == 0;
}

bool String::operator<( const String &s) const
{
  return strcmp(this->sPtr,s.sPtr) < 0;
} 

char &String::operator[] ( int i )
{
  if (i< 0 || i >= length)
     throw std::out_of_range("Indice fora da string");
     
  return sPtr[i];
}

char String::operator[] ( int i ) const
{
  if (i< 0 || i >= length)
     throw std::out_of_range("Indice fora da string");	
     
  return sPtr[i];
}

//"string"(0,2)
String String::operator() (int index, int subLength) const
{
  if (index < 0 || index >= length || subLength < 0)
    return String(""); // também daria certo return "";

  int len;

  if ((subLength == 0) || index + subLength > length)
    len = length - index;
  else
    len = subLength;

  char *tmpPtr = new char[len + 1];

  strncpy(tmpPtr,&sPtr[index],len);
  tmpPtr[len] = '\0';

  String tmpString(tmpPtr);
  delete [] tmpPtr;

  return tmpString;
}

void String::setString( const char *sPChar)
{
  sPtr = new char[length + 1];

  if (sPChar)
    strcpy(sPtr,sPChar);
  else
    sPtr[0] = '\0';
}
