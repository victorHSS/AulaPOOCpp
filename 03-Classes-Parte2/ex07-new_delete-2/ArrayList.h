#pragma once

class ArrayList
{
public:
  ArrayList(int);
  ~ArrayList();

  ArrayList &add(int);

  void print() const;

private:
  int *arr;
  int tam;
  int pos;
};
