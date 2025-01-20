#pragma once

#include <iostream>
using std::ostream, std::istream;

class Array
{
  // cout << obj 
  friend ostream &operator<<( ostream &, const Array &);

  // cin >> obj
  friend istream &operator>>( istream &, Array &);
 
public:
  Array( int = 10 );    //construtor-padrão
  Array(const Array &); //construtor de cópia
  ~Array();             //destrutor

  int getSize() const;


  // (a = b) = c
  //Array operator=( Array b);
  // ou
  //Array operator=(const Array &b);
  //ou
  //Array &operator=(const Array &b);


  const Array &operator=( const Array & ); //operador atribuição. "const Array &" evita algo como (a = b) = c

  // a == b ---> a.operator==(b)

  //bool operator==(const Array &b) const;
  //ou
  //bool operator==(Array b) const;
  //ou

  // a == b ---> operator==(a,b)
  //friend bool operator==(const Array &a,const Array &b);
  //friend bool operator==(Array a, Array b);

  //ou (como função global!!!!!!!)
  //bool operator==(const Array &a,const Array &b);

  
  bool operator==( const Array & ) const; //operador de igualdade
  //a != b
  bool operator!=( const Array &dir) const
  {
    return !(*this == dir);
  }

  // Array {1,2,3,4,5,6}
  // a[3] = 1 ==>> a.operator[](3) = 1
  int &operator[](int); //permite modificar o elemento

  // cout << a[3]
  int operator[](int) const; //não permite modificar o elemento

private:
  int tam;
  int *arr;
};

