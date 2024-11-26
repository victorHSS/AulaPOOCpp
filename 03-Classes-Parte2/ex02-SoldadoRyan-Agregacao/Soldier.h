#pragma once

#include <string>
#include "Helmet.h"

class Soldier {
public:
  Soldier(const std::string &n): nome(n), helmet(nullptr){}

  void vestirCapacete(Helmet *h) {helmet = h;}
  void retirarCapacete() {helmet = nullptr;}

  void quemSou() const;

private:
  std::string nome;
  Helmet *helmet;
};
