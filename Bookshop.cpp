//#include "stdafx.h"
#include "Bookshop.h"
#include "Item.h"

void Bookshop::addChair()
{
		availableChair++;
}

void Bookshop::removeChair()
{
	availableChair--;
}

void Bookshop::show()
{
	std::cout << name << std::endl;
}

void Bookshop::changeName(string new_name)
{
	name = new_name;
}

void Bookshop::addItem(string new_name)
{
	itemList.push_back(Item(new_name));
	value -= 10;
}

void Bookshop::deleteItem(int n)
{
	itemList.erase(itemList.begin()+n);
	value += 15;
}


Bookshop & Bookshop::operator=(Bookshop & bks)
{
	std::cout << "Wywolano operator = \n";
	bks.value = value;
	return *this;
}

Bookshop::Bookshop()
{
#ifdef _DEBUG  
	std::cout << "Wywolano domyslny konstruktor BookShop" << std::endl;
#endif
	name = "Domyslna nazwa";
	type = "Bookshop.txt";
	availableChair = 3;
	value = 1000;
}


Bookshop::~Bookshop()
{
}

