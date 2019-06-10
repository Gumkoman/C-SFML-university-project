#pragma once
#include <iostream>
#include <string>
///Klasa pomocnicza sluzaca do tworzenia produktow w sklepach
class Item
{
public:
	static int itemNumber; ///<zmienna statyczna okreslajaca liczbe 
	std::string name; ///< nazwa przedmiotu

	/// metoda pokazujaca obiekt klasy Item
	void show() ;
	/// metoda zmieniajaca nazwe obiektu klasy Item
	void changeName(std::string new_name);
	/// Konstruktor domyslny
	Item();
	/// Konstruktor twirzacy w zale¿nosci od nazwy
	Item(std::string new_name);
	///Destruktor domyslny
	~Item();
	
};

