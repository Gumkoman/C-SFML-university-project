#pragma once
#include <iostream>
#include <vector>
#include "Item.h"
#include <fstream>

using namespace std;
/// Klasa abstraksycja definiujaca sklep
class Shop
{
public:
	string type; ///< Zmienna pomocnicza na podstawie ktrej tworzoy jest plik txt
	string name; ///< Nazwa obiektu 
	int value; ///< Wartosc sklepu
	///Domyslny konstruktor
	Shop();
	///Wirtualny destruktor
	virtual ~Shop();
	vector <Item> itemList;///< Tablica obiektow Item 
	///Metoda wirtualna pokazujaca wartosci zmiennych obiektu
	virtual void show()= 0; 
	///Meroda wirtualna zmieniajaca nazwe obiektu
	virtual void changeName(string new_name);
	///Metoda wirtualna dodajaca obiekt Item do vectora
	virtual void addItem(string new_name) = 0;
	///Metoda wirtualna zapisujaca do pliku
	virtual void save(ostream &plik);
	///Operator strumieniowy 
	friend std::ostream& operator << (std::ostream &s, Shop &shop);
};

