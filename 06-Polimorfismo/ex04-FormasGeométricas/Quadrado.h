#pragma once

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Quadrado : public FormaBidimensional
{
public:
  Quadrado() : FormaBidimensional{4} {}

  void desenhar() override {
    cout << "+---+" << endl;
    cout << "|   |" << endl;
    cout << "+---+" << endl;
  }
};
