#include <iostream>
using std::cout, std::cin, std::endl;

#include "Monster.h"
#include "DefenseMonster.h"
#include "StrongMonster.h"

// https://www.cplusplus.com/reference/random/
// https://www.cplusplus.com/reference/random/default_random_engine/
// https://cplusplus.com/reference/chrono/

#include <random>
#include <chrono>
unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
std::default_random_engine generator(seed);
std::uniform_int_distribution<int> var(-20,20);

#include <array>

bool monstersAlive(std::array<Monster* , 3> &monsters)
{
  for (int i = 0 ; i < monsters.size() ; i++)
    if (monsters[i]->isAlive())
      return true;
  return false;
}

int main() {
  int life = 500;

  std::array<Monster* , 3> m {new Monster{"Normal Monster"},
  new DefenseMonster{"Defense Monster"}, new StrongMonster{"Strong Monster"}};

  cout << "Você está encurralado em um beco." << endl;

  cout << "Existem 3 monstros prontos para atacar, e você não pode correr." << endl << endl;

  while (monstersAlive(m) && life > 0)
  {
    cout << *m[0] << *m[1] << *m[2] << endl;

    cout << "Você" << endl << "Life: " << life << endl << endl;

    cout << "Que monstro quer atacar (0 - 2)? ";
    int op;
    cin >> op;

    switch (op)
    {
      case 0:
      case 1:
      case 2:
        if (m[op]->isAlive())
        {
          cout << "Como quer atacar? " << endl;
          cout << "0. Empurrão (força 80-120)" << endl;
          cout << "1. Murro (força 130-170)" << endl;
          cout << "2. Chute (força 180-220)" << endl;
          int formaAtaque;
          int ataqueForca[] = {100,150,200};
          cin >> formaAtaque;

          formaAtaque = (formaAtaque >= 0 && formaAtaque <=2)?formaAtaque : 2;

          m[op]->sofrerGolpe(ataqueForca[formaAtaque]+var(generator));

          cout << "Golpeando" << endl << endl;

          life -= (m[op]->golpear() + var(generator))/10;

          cout << "Você sofreu um golpe" << endl << endl;

        }
        else
          cout << "Você já derrotou " << m[op]->getNome() << endl << endl;

        break;
      
      default:
        cout << "Você errou o golpe." << endl << endl;
    }

    cout << "===============================" << endl;
  }

  cout << *m[0] << *m[1] << *m[2];

  cout << "Você" << endl << "Life: " << ((life > 0)?life:0) << endl << endl;

  if (life > 0)
    cout << "Você saiu vitorioso!!" << endl;
  else 
    cout << "Não foi dessa vez!!" << endl;
  
  for (int i = 0 ; i < 3 ; i++)
    delete m[i];

  return 0;
}
