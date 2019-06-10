//#include "stdafx.h"
#include "Newsstand.h"


void Newsstand::sendSubscription()
{
	for (int i = 0; i < subscriberNumber; i++)
	{
		itemList.pop_back();
		value += 13;
	}
}

void Newsstand::addSubscriber()
{
	subscriberNumber++;
}

void Newsstand::removeSubscriber()
{
	subscriberNumber--;
}

void Newsstand::show()
{
	cout << "Kiosk o nazwie: " << name << "posiadajacy: " << subscriberNumber << "subskrybentow";
}

void Newsstand::changeName(string new_name)
{
	name = new_name;
}

void Newsstand::save(ostream & plik)
{
	//Shop::save(plik);
	plik << *this;
}

Newsstand::Newsstand()
{
#ifdef _DEBUG  
	std::cout << "Wywolano domyslny konstruktor BookShop" << std::endl;
#endif
	name = "Domysla nazwa kiosku";
	type = "Newsstand.txt";
	subscriberNumber = 5;
}


Newsstand::~Newsstand()
{
}

ostream & operator<<(ostream & s, Newsstand & newsstand)
{
	s << newsstand.name << "\t" << newsstand.availableChair <<"\t" << newsstand.subscriberNumber << endl;
	return s;
}
