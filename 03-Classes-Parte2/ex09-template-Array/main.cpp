#include <iostream>
#include <format>

using std::cout, std::endl, std::format;

#include "Array.h"

int main() {
	Array<int,5> meuArray{};
	
	meuArray.at(0) = 100;
	meuArray.at(1) = 200;
	meuArray.at(2) = 300;
	
	for (unsigned i = 0 ; i < meuArray.size() ; i++)
		cout << format("{} ",meuArray.at(i));
	cout << endl;
		
	return 0;
}
