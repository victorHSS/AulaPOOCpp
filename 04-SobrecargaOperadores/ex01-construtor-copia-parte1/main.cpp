#include <iostream>
using std::cout, std::endl;

class ArrayCrazy {
public:
  ArrayCrazy(int t = 0) : arr(nullptr),tam(t)
  {
    if (t > 0)
      arr = new int[t];
    
    cout << "Construindo" << endl;
  }

  ~ArrayCrazy()
  {
    if (arr)
      delete [] arr;
    
    cout << "Destruindo" << endl;
  }

  ArrayCrazy &set(int v)
  {
    for (int i = 0 ; i < tam ; i++)
      arr[i] = v;
    
    return *this;
  }

  void print() const
  {
    for (int i = 0 ; i < tam ; i++)
      cout << arr[i] << " ";
    cout << endl;
  }

private:
  int *arr;
  int tam;
};


int main() {
  ArrayCrazy foo1{3};

  cout << "foo1: ";
  foo1.set(5).print();

  ArrayCrazy foo2{foo1}; //foo2 é construído como uma cópia de foo1
  cout << "foo2: ";
  foo2.print();

  cout << "Setando foo2 para 10: ";
  foo2.set(10);

  cout << endl;

  cout << "foo1: ";
  foo1.print();

  cout << "foo2: ";
  foo2.print();
  
  return 0;
}
