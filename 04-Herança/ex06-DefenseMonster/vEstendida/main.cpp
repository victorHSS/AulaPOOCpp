#include <iostream>
using std::cout, std::cin, std::endl;

#include "DefenseMonster.h"
#include "StrongMonster.h"

// https://www.cplusplus.com/reference/random/
// https://www.cplusplus.com/reference/random/default_random_engine/
#include <random>
#include <chrono>
unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
std::default_random_engine generator(seed);
std::uniform_int_distribution<int> var(-20,20);

int main() {
  int life{200};

  DefenseMonster m0("Bad Defense Monster");
  StrongMonster m1("Ugly Strong Monster");

  cout << "Você está encurralado em um beco." << endl;

  cout << "Existem dois monstros prontos para atacar e você não pode correr." << endl << endl;

  while ((m0.isAlive() || m1.isAlive()) && life>0)
  {
    cout << m0 << m1 << endl;

    cout << "Você" << endl << "Life: " << life << endl << endl;

    cout << "Que monstro quer atacar (0 ou 1)? ";
    int op{};
    cin >> op;

    switch (op)
    {
      case 0:
        if (m0.isAlive())
        {
          cout << "Como quer atacar? " << endl;
          cout << "0. Empurrão (força 80-120)" << endl;
          cout << "1. Murro (força 130-170)" << endl;
          cout << "2. Chute (força 180-220)" << endl;
          int formaAtaque;
          int ataqueForca[] = {100,150,200};
          cin >> formaAtaque;

          formaAtaque = (formaAtaque >= 0 && formaAtaque <=2)?formaAtaque : 2;

          m0.sofrerGolpe(ataqueForca[formaAtaque]+var(generator));

          cout << "Golpeando" << endl << endl;

          life -= (m0.golpear() + var(generator))/10;

          cout << "Você sofreu um golpe" << endl << endl;

        }
        else
          cout << "Você já derrotou " << m0.getNome() << endl << endl;

        break;
      case 1:
        if (m1.isAlive())
        {
          cout << "Como quer atacar? " << endl;
          cout << "0. Empurrão (força 80-120)" << endl;
          cout << "1. Murro (força 130-170)" << endl;
          cout << "2. Chute (força 180-220)" << endl;
          int formaAtaque;
          int ataqueForca[] = {100,150,200};
          cin >> formaAtaque;

          formaAtaque = (formaAtaque >= 0 && formaAtaque <=2)?formaAtaque : 2;

          m1.sofrerGolpe(ataqueForca[formaAtaque]+var(generator));

          cout << "Golpeando" << endl << endl;

          life -= (m1.golpear() + var(generator))/10;

          cout << "Você sofreu um golpe" << endl << endl;

        }
        else
          cout << "Você já derrotou " << m1.getNome() << endl << endl;
        
        break;
      default:
        cout << "Você errou o golpe." << endl << endl;
    }

    cout << "===============================" << endl;
  }

  cout << m0 << m1;

  cout << "Você" << endl << "Life: " << ((life > 0)?life:0) << endl << endl;

  if (life > 0)
    cout << "Você saiu vitorioso!!" << endl;
  else 
    cout << "Não foi dessa vez!!" << endl;

  return 0;
}
