#pragma once

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Triangulo : public FormaBidimensional
{
public:
  Triangulo() : FormaBidimensional{3} {}

  void desenhar() override{
    cout << "   .    " << endl;
    cout << "  / \\  " << endl;
    cout << " /   \\ " << endl;
    cout << "/_____\\" << endl;
  }
};
