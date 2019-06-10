#pragma once
#include <string>
#include "Shop.h"
#include <vector>

using namespace std;
///Klasa GroceryStore, pochodna Shop
class GroceryStore : public Shop
{
public:
	bool regularCustomer; ///< Zmienna pokazujaca czy klient ma znizke
	///Konstruktor domyslny
	GroceryStore();
	///Destruktor domyslny
	~GroceryStore();
	///Metoda pokazujaca zmienne obiektu
	void show();
	///Metoda zmienajaca nazwe obiektu
	void changeName(string new_name);
	///Metoda dodajaca obiekt klasy Item
	void addItem(string new_name);
	///Metoda usuwajaca wybrany obiekt
	void deleteItem(int n);
};

