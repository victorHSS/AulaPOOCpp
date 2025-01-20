#pragma once

#include <iostream>
using std::ostream, std::istream;

class String 
{
  friend ostream &operator<<(ostream &, const String &);
  friend istream &operator>>(istream &, String &);

public:
  String(const char * = ""); //construtor de conversão/padrão
  String(const String &); //construtor de cópia
  ~String();

  //s1 = s2 = s3 //OK
  //(s1 = s2) = s3 //IMPEDIDO
  const String &operator=(const String &);
  const String &operator+=(const String &);

  bool operator!() const; //String vazia?
  bool operator==( const String &) const; //s1 == s2
  bool operator<( const String &) const; //s1 < s2

  bool operator!=( const String &s2) const
  {
    return !(*this == s2);
  }

  bool operator>( const String &s2) const
  {
    return s2 < *this;
  }

  bool operator<=( const String &s2) const
  {
    return !(s2 < *this);
  }

  bool operator>=( const String &s2) const
  {
    return !(*this < s2);
  }

  char &operator[] ( int );
  char operator[] ( int ) const;

  String operator() (int, int = 0) const; //operador de chamada de função - aqui usado para permitir retornar uma substring

  int getLength() const {return length;}


private:
  int length;
  char *sPtr;

  void setString( const char *); //método utilitário
};
