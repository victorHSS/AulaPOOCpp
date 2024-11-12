#include <iostream>
#include <string>

using std::string;

int giveBack(const int &x) { return x; }
char giveBack(const char &c) { return c; }

string giveBack(const string &s) { return s; }


int main()
{
  std::cout << giveBack(100) << std::endl;
  std::cout << giveBack('c') <<  std::endl;
  std::cout << giveBack(string("string")) << std::endl;
  return 0;
}

