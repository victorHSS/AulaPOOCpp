#include <iostream>
using std::cin, std::cout, std::endl;

#include "String.hpp"


int main() {
  String str;

  cout << "Entre com uma string: ";
  cin >> str;

  cout << "Voce digitou: " << str << endl;

  String str2 = "C++";
  String str3("eh muito legal.");
  String str4;

  str4 = str2;
  str4 += " ";
  str4 += str3;

  cout << str4 << endl;
  
  str4[18] = '!';
  cout << str4 << endl;

  cout << "Substring: " << str4(7,5) << endl;


  return 0;
}
