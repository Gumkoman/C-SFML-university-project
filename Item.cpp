//#include "stdafx.h"
#include "Item.h"
#include <iostream>
#include <string>

int Item::itemNumber = 0;
void Item::show()
{
	std::cout << "Produkt nazywa sie: " << name << std::endl;
}

void Item::changeName(std::string new_name)
{
	name = new_name;
}

Item::Item()
{
#ifdef _DEBUG  
	std::cout << "Wywolano domyslny konstruktor Urzadzenie_elektroniczne" << std::endl;
#endif
	name = "Domyslna nazwa";
	itemNumber++;
}

Item::Item(std::string new_name)
{
#ifdef _DEBUG  
	std::cout << "Wywolano domyslny konstruktor Urzadzenie_elektroniczne" << std::endl;
#endif
	name = new_name;
	itemNumber++;
}

Item::~Item()
{
#ifdef _DEBUG
	std::cout << "Wywolano destruktor ~Urzadzenie_elektroniczne" << std::endl;
#endif
	itemNumber--;
}
