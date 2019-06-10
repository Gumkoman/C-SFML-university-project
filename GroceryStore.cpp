//#include "stdafx.h"
#include "GroceryStore.h"

using namespace std;
GroceryStore::GroceryStore()
{
#ifdef _DEBUG  
	std::cout << "Wywolano domyslny konstruktor GroceryStore" << std::endl;
#endif
	name = "Domyslna nazwa Warzywniaka";
	type = "GroceryStore.txt";
	value = 500;
}


GroceryStore::~GroceryStore()
{
#ifdef _DEBUG  
	std::cout << "Wywolano domyslny destruktor GroceryStore" << std::endl;
#endif
}

void GroceryStore::show()
{
	cout << "Warzywniak o nazwie" << name << " jest wart " << value << "pln";
}

void GroceryStore::changeName(string new_name)
{
	name = new_name;
}

void GroceryStore::addItem(string new_name)
{
		itemList.push_back(Item(new_name));
		value -= 10;	
}

void GroceryStore::deleteItem(int n)
{
	if (regularCustomer == 1)
	{
		itemList.erase(itemList.begin() + n);
		value += 13;
	}
	else
	{
		itemList.erase(itemList.begin() + n);
		value += 15;
	}
}
