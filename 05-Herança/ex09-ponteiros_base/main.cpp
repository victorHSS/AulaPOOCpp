#include <iostream>
using std::cout, std::endl;

#include <string>
using std::string;

#include "Monster.h" //opcional
#include "DefenseMonster.h"
#include "StrongMonster.h" //opcional
#include "RecStrongMonster.h"

void quemEsTu(const Monster &m)
{
  std::cout << m.getNome() << " entrou na função!!" << endl;
}

int main() {
  Monster m{"Monster"};
  StrongMonster sm{"Strong Monster"};
  DefenseMonster dm{"Defense Monster"};
  RecStrongMonster rsm{"Rec Strong Monster"};

  quemEsTu(m);
  quemEsTu(sm);
  quemEsTu(dm);
  quemEsTu(rsm);

  cout << endl << endl;

  //ponteiro monster apontando para especialização StrongMonster - OK!!
  Monster *pm1 = &sm;
  cout << pm1->getNome() << endl;

  //ponteiro monster apontando para especialização DefenseMonster - OK!!
  Monster *pm2 = &dm;
  cout << pm2->getNome() << endl;

  //ponteiro monster apontando para especialização RecStrongMonster - OK!!
  Monster *pm3 = &rsm;
  cout << pm3->getNome() << endl;

  //Se tentar acessar um método exclusivo do objeto derivado, isto é, que não exista na classe que aponta, o membro não estará acessível!!!!!
  
  return 0;
}
