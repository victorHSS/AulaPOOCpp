#include <iostream>

class Foobar
{
public:
  Foobar(int x = 0, int y = 0) : x(x), y(y) {}
  int getX() const {return x;}
  int getY() const {return y;}
private:
  int x,y;
};

int main() { 
  //alocando memória
  int *x = new int;
  
  // faz coisas
  *x = 100;
  
  //desalocando memória
  delete x;

  //alocando e desalocando array-C
  int *arr = new int[10];
  arr[0] = 100;
  
  delete [] arr;

  int *arr2 = new int[10]{1,2,3,4,5,6,7,8,9,10};
  
  for (int i = 0; i < 10 ; i++)
    std::cout << arr2[i] << " ";
  std::cout << std::endl;
  
  delete [] arr2;

  //mesma ideia com alocação de objetos

  Foobar *fb = new Foobar;
  fb->getX();
  fb->getY();
  delete fb;

  Foobar *fb2 = new Foobar{};
  delete fb2;

  Foobar *fb3 = new Foobar{1,2};
  std::cout << "x de fb3 => " << fb3->getX() << std::endl;
  delete fb3;

  //alocando array de Foobar
  Foobar *fb4 = new Foobar[3];

  delete [] fb4;

  Foobar *fb5 = new Foobar[3]{Foobar{},Foobar{1,2},Foobar{3,4}};

  fb5[2].getX();

  delete [] fb5;


  return 0;
}
