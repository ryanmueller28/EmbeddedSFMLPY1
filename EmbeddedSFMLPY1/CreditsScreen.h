#pragma once
#include "cScreen.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class CreditsScreen : public cScreen
{
public:
	CreditsScreen();
	~CreditsScreen();

	virtual int Run(sf::RenderWindow &App);

private:
	sf::Text credits_1; //title 
	sf::Text credits_2; //academic computer science advisors
	sf::Text credits_3; //advisors in education field
	sf::Text credits_4; //assets
	sf::Text back; //back to previous screen

	sf::Vector2i mousePos = sf::Mouse::getPosition();
};

