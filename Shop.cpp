//#include "stdafx.h"
#include "Shop.h"
#include <vector>
#include <fstream>

using namespace std;
Shop::Shop()
{
}


Shop::~Shop()
{
}

void Shop::show()
{
	cout << "Usunieto virtual" << endl;
}

void Shop::changeName(string new_name)
{
	name = new_name;
}

void Shop::save(ostream &plik)
{
	//ofstream plik(type);
	plik << *this;
	//plik.close();
}

ostream & operator<<(ostream &s, Shop &shop)
{
	s << shop.name << " "<<shop.value<<" "<<std::endl;
	return s;
}
