#include <iostream>
using std::cerr, std::endl;

#include "Array.hpp"
#include <stdexcept>

ostream &operator<<(ostream &out , const Array &a)
{
  for (int i = 0 ; i < a.tam ; i++)
    out << a.arr[i] << " ";
  
  out << endl;

  return out;
}

istream &operator>>(istream &inp , Array &a)
{
  for (int i = 0 ; i < a.tam ; i++)
    inp >> a.arr[i];
  
  return inp;
}


Array::Array(int tam)
{
  this->tam = (tam > 0 ? tam : 10);

  arr = new int[this->tam];

  for (int i = 0 ; i < this->tam ; i++)
    arr[i] = 0;
}

Array::Array(const Array &obj) : tam(obj.tam)
{
  arr = new int[this->tam];

  for (int i = 0 ; i < this->tam ; i++)
    arr[i] = obj.arr[i];
}

Array::~Array()
{
  delete [] arr;
}

int Array::getSize() const
{
  return tam;
}

// a = b
// a = a // não permitir
const Array &Array::operator=(const Array &obj)
{
  if (&obj != this) // evita auto-atribuição
  {
    if (this->tam != obj.tam)
    {
      delete [] this->arr;
      this->tam = obj.tam;
      this->arr = new int[this->tam];
    }

    for (int i = 0 ; i < this->tam ; i++)
      arr[i] = obj.arr[i];

  }

  return *this;
}

// a == b
bool Array::operator==(const Array &obj) const
{
  if (this->tam != obj.tam)
    return false;

  for (int i = 0 ; i < this->tam ; i++)
    if (arr[i] != obj.arr[i])
      return false;
  
  return true;
}

// a[3] = 1
// a.operator[](3) = 1
int &Array::operator[](int i)
{
  if (i < 0 || i >= tam)
    throw std::out_of_range("Indice fora de faixa.");


  return arr[i];
}

// cout << a[3]
int Array::operator[](int i) const
{
  if (i < 0 || i >= tam)
    throw std::out_of_range("Indice fora de faixa.");

  return arr[i];
}
