#include <iostream>
using std::cout, std::endl;


#include "Employee.h"

//setando membro static
int Employee::count = 0;

//implementando função-membro static
int Employee::getNumEmployees()
{
  return count;
}

//demais métodos comuns
Employee::Employee(const string &first, const string &last)
{
  firstName = first;
  lastName = last;
  count++;
  cout << "Contruindo +1 objeto Employee." << endl;
}

Employee::~Employee()
{
  count--;
  cout << "Destruindo 1 objeto Employee." << endl;
}
