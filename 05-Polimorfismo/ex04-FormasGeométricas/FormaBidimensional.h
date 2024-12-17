#pragma once

//classe abstrata

class FormaBidimensional 
{
public:
  FormaBidimensional(int numLados) : numLados{numLados} { }

  //método virtual puro
  virtual void desenhar() = 0;

private:
  int numLados;
};

