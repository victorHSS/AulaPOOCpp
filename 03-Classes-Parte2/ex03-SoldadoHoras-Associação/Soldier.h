#pragma once

#include <string>
#include "Helmet.h"
#include "Relogio.h"

class Soldier {
public:
  Soldier(const std::string &n): nome(n), helmet(nullptr){}

  void vestirCapacete(Helmet *h) {helmet = h;}
  void retirarCapacete() {helmet = nullptr;}
  
  void verificarHoras(const Relogio &) const;

  void quemSou() const;

private:
  std::string nome;
  Helmet *helmet;
};
