#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "Shop.h"
#include "Bookshop.h"
#include "Newsstand.h"
#include "GroceryStore.h"
//#include <Keyboard.hpp>


int main()
{
	sf::RenderWindow okno(sf::VideoMode(1200, 600), "Aplikacja zarz¹dzaj¹ca");
	sf::Clock stoper;
	sf::Font font;
	font.loadFromFile("OpenSans-Light.ttf");
	sf::Text test;
	sf::Text test2;
	sf::Text test3;
	sf::Text test4;
	test.setFont(font);
	test.setCharacterSize(36);
	test.setFillColor(sf::Color(255,0,0));
	test2.setFont(font);
	test2.setCharacterSize(36);
	test2.setFillColor(sf::Color(255, 0, 0));
	test3.setFont(font);
	test3.setCharacterSize(36);
	test3.setFillColor(sf::Color(255, 0, 0));
	sf::Texture tBookshopImage;
	sf::Texture tGroceryStoreImage;
	sf::Texture tNewsstandImage;
	sf::Sprite BookshopImage;
	tBookshopImage.loadFromFile("bookshop.jpg");
	BookshopImage.setTexture(tBookshopImage);
	sf::Sprite GroceryStoreImage;
	tGroceryStoreImage.loadFromFile("Grocerystore.jpg");
	GroceryStoreImage.setTexture(tGroceryStoreImage);
	sf::Sprite NewsstandImage;
	tNewsstandImage.loadFromFile("Newsstand.jpg");
	NewsstandImage.setTexture(tNewsstandImage);
	test2.setPosition(50, 30);
	test2.setString("Testowa Opcja \n\nWyswietl ");
	test3.setPosition(30,290);
	test3.setString("Usun obiekt \n\nDodaj obiekt \n\n\nWyjscie");
	///Vector
	std::vector <Shop*> sklepy;

	while (okno.isOpen())
	{
		sf::Event event;
		while (okno.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				okno.close();

		} //while
		okno.clear();
		int tempx = 300;
		///Creating Boxes
		sf::RectangleShape b1(sf::Vector2f(tempx, 120)); // tworzymy prostok¹t
		b1.setFillColor(sf::Color(255, 221, 153));
		b1.setPosition(0,0); // i ustawiamy mu pozycjê
		b1.setOutlineThickness(-10);
		b1.setOutlineColor(sf::Color(255, 187, 51));
		sf::RectangleShape b2(sf::Vector2f(tempx, 120));
		b2.setFillColor(sf::Color(255, 221, 153));
		b2.setPosition(0, 120);
		b2.setOutlineThickness(-10);
		b2.setOutlineColor(sf::Color(255, 187, 51));
		sf::RectangleShape b3(sf::Vector2f(tempx, 120)); // tworzymy prostok¹t
		b3.setFillColor(sf::Color(255, 221, 153));
		b3.setPosition(0, 240); // i ustawiamy mu pozycjê
		b3.setOutlineThickness(-10);
		b3.setOutlineColor(sf::Color(255, 187, 51));
		sf::RectangleShape b4(sf::Vector2f(tempx, 120)); // tworzymy prostok¹t
		b4.setFillColor(sf::Color(255, 221, 153));
		b4.setPosition(0, 360); // i ustawiamy mu pozycjê
		b4.setOutlineThickness(-10);
		b4.setOutlineColor(sf::Color(255, 187, 51));
		sf::RectangleShape b5(sf::Vector2f(tempx, 120)); // tworzymy prostok¹t
		b5.setFillColor(sf::Color(255, 221, 153));
		b5.setPosition(0, 480); // i ustawiamy mu pozycjê
		b5.setOutlineThickness(-10);
		b5.setOutlineColor(sf::Color(255, 187, 51));
		sf::RectangleShape display(sf::Vector2f(1200-tempx, 600));
		display.setFillColor(sf::Color(255, 242, 230));
		display.setPosition(tempx, 0);
		std::string ksiondz;
		std::string pomocniczy;
		pomocniczy = "";
		sf::Event event1;
		//sf::Event event2;
		sf::Vector2f vektor;
		int temp=0, tempy=0;
		while (okno.pollEvent(event1)) {
			temp = sf::Mouse::getPosition(okno).x;
			tempy = sf::Mouse::getPosition(okno).y;
			//std::cout << "x" << temp << std::endl;
			//std::cout << "y" << tempy << std::endl;
			if (event1.type == sf::Event::MouseButtonPressed && temp > 0 && temp < tempx && tempy > 0 && tempy<120)
			{
				pomocniczy = "";
				bool j = 0;
				int temo = 0;
				std::cout << "Przycisk1";
				if (sklepy.size() == 0)
					break;
				std::cout << " I cyk" <<std::endl;
				
				while (j==0)
				{
					//std::cout << "czekanko";
					if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
					{
						std::cout << "Panowie wychodzimy";
						j = 1;
					}
	
			
				}
				std::cout << std::endl << pomocniczy << endl;
				//std::cout <<std::endl << std::endl << pomocniczy[pomocniczy.size()-1];

			}
			if (event1.type == sf::Event::MouseButtonPressed && temp > 0 && temp < tempx && tempy > 120 && tempy<240)
			{
				std::cout << "Przycisk2";
				ksiondz = "";
				int i = sklepy.size();
				if (i != 0) {
					for (int temo = 0; temo < i; temo++)
					{
						std::cout << sklepy[temo]->name << std::endl;
						ksiondz +=sklepy[temo]->name ;
						ksiondz += " ";
						ksiondz += sklepy[temo]->value;
						ksiondz += "\n";
					}
					okno.draw(test);
				}
				test.setString(ksiondz);
				okno.draw(test);
	
			}
			if (event1.type == sf::Event::MouseButtonPressed && temp > 0 && temp < tempx && tempy > 240 && tempy<360)
			{
				std::cout << "Przycisk3";
				if (sklepy.size() >0)
					sklepy.pop_back();
			}
			if (event1.type == sf::Event::MouseButtonPressed && temp > 0 && temp < tempx && tempy > 360 && tempy<480)
			{
				std::string testowy;
				std::cout << "Przycisk4";
				int i = sklepy.size();
				if (event1.text.unicode < 128)
				{
					//std::string name = getString();
					int switcher=0;
					while (true)
					{
						std::cout << "podaj ";
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
						{
							switcher = 1;
							break;
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
						{
							switcher = 2;
							break;
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
						{
						
							switcher = 3;
							break;
						}
					}
					
					std::cout << switcher << std::endl;
					switch (switcher)
					{
					case 1:
						std::cout << "Dodawanie1" << endl;
						Bookshop *bookshop;
						bookshop = new Bookshop;
						sklepy.push_back(bookshop);
						break;
					case 2:
						std::cout << "Dodawanie2" << endl;
						GroceryStore *grocerystore;
						grocerystore = new GroceryStore;
						sklepy.push_back(grocerystore);
						break;
					case 3:
						std::cout << "Dodawanie3" << endl;
						Newsstand *newsstand;
						newsstand = new Newsstand;
						sklepy.push_back(newsstand);
						break;


					default:
						break;
					}
				}



			}
			if (event1.type == sf::Event::MouseButtonPressed && temp > 0 && temp < tempx && tempy > 480 && tempy<600)
			{
				std::cout << "Przycisk5";
				okno.close();
			}
		}



		test.setPosition(tempx + 30, 30);
		
		///Display
		
		okno.draw(BookshopImage);
		
		okno.draw(b1);
		okno.draw(b2);
		okno.draw(b3);
		okno.draw(b4);
		okno.draw(b5);
		okno.draw(display);
		okno.draw(test);
		okno.draw(test3);
		okno.draw(test2);
		BookshopImage.setPosition(1000, 400);
		GroceryStoreImage.setPosition(1000, 400);
		NewsstandImage.setPosition(1000, 400);
		if (!sklepy.size()==0){
		if (sklepy[sklepy.size()-1]->type== "Bookshop.txt")
			okno.draw(BookshopImage);
		if (sklepy[sklepy.size() - 1]->type == "GroceryStore.txt")
			okno.draw(GroceryStoreImage);
		if (sklepy[sklepy.size() - 1]->type == "Newsstand.txt")
			okno.draw(NewsstandImage);
		}
		okno.display();
	} //while
	return 0;
}
