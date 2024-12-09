#include <iostream>
using std::cout, std::cin, std::getline, std::endl;

#include <string>
using std::string;

#include "Monster.h" //opcional
#include "DefenseMonster.h"
#include "StrongMonster.h" //opcional
#include "RecStrongMonster.h"

int main() {
  string pass;

  {
    cout << "M1" << endl;
    Monster m{"M1"};

    cout << "Pressione Enter...";
    getline(cin,pass);
    cout << endl;
  }

  {
	cout << "Pressione Enter...";
    getline(cin,pass);
    cout << endl;
    
    cout << "M2" << endl;
    StrongMonster m{"M2"};

    cout << "Pressione Enter...";
    getline(cin,pass);
    cout << endl;
  }

  {
	cout << "Pressione Enter...";
    getline(cin,pass);
    cout << endl;
    
    cout << "M3" << endl;
    DefenseMonster m{"M3"};

    cout << "Pressione Enter...";
    getline(cin,pass);
    cout << endl;
  }

  {
	cout << "Pressione Enter...";
    getline(cin,pass);
    cout << endl;
    
    cout << "M4" << endl;
    RecStrongMonster m{"M4"};
    
    cout << "Pressione Enter...";
    getline(cin,pass);
    cout << endl;
  }
  
  return 0;
}
