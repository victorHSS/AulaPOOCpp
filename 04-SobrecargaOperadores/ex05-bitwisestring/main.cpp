#include <iostream>
using std::cout, std::cin, std::endl;

#include <string>
using std::string;

//funções globais
string &operator<<(string &s, int d)
{
  if (d % s.size() == 0)
    return s;

  d = d % s.size();

  s = s.substr(d,s.size() - d) + s.substr(0,d);

  return s;
}

string &operator>>(string &s, int d)
{
  if (d % s.size() == 0)
    return s;

  d = d % s.size();

  s = s.substr(s.size() - d,d) + s.substr(0,s.size() - d);

  return s;
}


int main() {
  string str = "string";

  cout << "Rotacionando para esquerda: " << endl;
  for (int i = 0 ; i < str.size() ; i++)
    cout << (str << 1) << endl;

  cout << endl;

  for (int i = 0 ; i <= str.size() ; i++)
  {
    string lstr = str;
    cout << (lstr << i) << endl;
  }

  cout << endl;

  cout << "Rotacionando para direita: " << endl;
  for (int i = 0 ; i < str.size() ; i++)
    cout << (str >> 1) << endl;

  cout << endl;

  for (int i = 0 ; i <= str.size() ; i++)
  {
    string lstr = str;
    cout << (lstr >> i) << endl;
  }

  return 0;
}

