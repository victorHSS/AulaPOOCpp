#include <iostream>
using std::cout, std::endl;

#include "Employee.h"

int main() {
  cout << "Total de Funcionários: " << Employee::getNumEmployees() << endl;

  Employee gerente{"Victor","Oliveira"};
  
  Employee funcionarios[3]{Employee{"Carlos","Eduardo"},Employee{"Nando","Moura"},Employee{"Gazela","Dourada"}};

  cout << "Total de Funcionários: " << Employee::getNumEmployees() << endl;

  cout << "Contratando um sub-gerente..." << endl;

  Employee *subgerente = new Employee{"Jubi","leu"};
  
  cout << "Total de Funcionários: " << Employee::getNumEmployees() << endl;

  cout << "Demitindo o sub-gerente..." << endl;

  delete subgerente;

  cout << "Total de Funcionários: " << Employee::getNumEmployees() << endl;

  return 0;
}
