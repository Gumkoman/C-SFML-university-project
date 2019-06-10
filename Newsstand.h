#pragma once
#include "Bookshop.h"

///Klasa Newsstand, pochodna Bookshop
class Newsstand : public Bookshop
{
private:
	int subscriberNumber; ///< Liczba osob subskrybujacych
public:
	/// Metoda wysylajaca gazety do osob subskrybujacych
	void sendSubscription(); 
	/// Metoda dodajaca subskrybenta
	void addSubscriber();
	/// Metoda usuwajaca subsktrybenta
	void removeSubscriber();
	///Metoda pokazujaca zmienne obiektu
	void show();
	///Metoda zmienajaca nazwe obiektu
	void changeName(string new_name);
	friend ostream& operator << (ostream &s, Newsstand &newsstand);
	void save(ostream &plik);
	///Standarowy konstruktor
	Newsstand();
	///Standardowy destruktor
	~Newsstand();
};

