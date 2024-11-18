#include <iostream>
using std::cout, std::endl;

#include <string>
using std::string;

//======================
//
// A CLASSE VOLDEMORT
//
//======================

class Voldemort {
public:
  Voldemort(string name) 
  {
    whereAmI = name;
    cout << "Estou no construtor de " << whereAmI << endl;
  }

  ~Voldemort()
  {
    cout << "Estou no destrutor de " << whereAmI << endl;
  }

private:
  string whereAmI;
};

//======================



Voldemort globalVoldemort("Voldemort Global");

void func()
{
  Voldemort voldemortFunc("Voldemort de Local func");
  static Voldemort staticVoldemortFunc("Voldemort Static Local Func");
}

int main()
{
  Voldemort voldemort1("Local main Voldemort 1");

  func();

  Voldemort voldemort2("Local main Voldemort 2");

  func();

  return 0;
}
