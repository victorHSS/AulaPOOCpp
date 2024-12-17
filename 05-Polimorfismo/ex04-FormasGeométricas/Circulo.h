#pragma once

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Circulo : public FormaBidimensional
{
public:
  Circulo() : FormaBidimensional{99999} {}

  void desenhar() override {
    cout << "  _ " << endl;
    cout << "/   \\" << endl;
    cout << "\\   /" << endl;
    cout << "  - " << endl;
  }
};
