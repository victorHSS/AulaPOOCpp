#pragma once

#include <string>
using std::string;

class Employee 
{
public:
  Employee( const string &, const string & );
  ~Employee();

  //Métodos const podem retornar referências const
  string getFirstName() const {return firstName;}

  const string &getLastName() const {return lastName;}

  //função-membro static
  static int getNumEmployees();
private:
  string firstName;
  string lastName;

  //dados static
  static int count;
};
