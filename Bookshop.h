#pragma once
#include "Shop.h"
#include <vector>
#include "Item.h"


using namespace std;
///Klasa Bookshop, pochodna Shop
class Bookshop : public Shop
{
public:
	int availableChair; ///< Zmienna pokazujaca ilosc wolnych miejsc na krzeslach w ksiegarni
	///Metoda dodajaca wolne krzeslo
	void addChair(); 
	///Metoda usuwajaca wolne krzeslo
	void removeChair();
	///Metoda pokazujaca wartosci zmiennych
	void show();
	/// Metoda zmieniajaca nazwe
	void changeName(string new_name);
	///Metoda dodajaca obiekt klasy Item
	void addItem(string new_name);
	///Metoda usuwajaca obiekt klasy Item
	void deleteItem(int n);
	///Standardowy konstruktor
	Bookshop();
	///Standardowy destruktor
	~Bookshop();
	///Operator przypisania
	Bookshop& operator=(Bookshop & bks);

};

