#pragma once

#include <string>

class Helmet{
public:
  Helmet(const std::string &m) : material(m){}
  std::string getMaterial() const {return material;};

private:
  std::string material;
};
