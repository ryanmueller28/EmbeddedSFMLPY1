#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "cScreen.h"

class LoadScreen : public cScreen
{
public:
	LoadScreen();
	~LoadScreen();

	virtual int Run(sf::RenderWindow &App);

private:
	sf::Text level_1;
	sf::Text back; //back to previous screen

	sf::Vector2i mousePos = sf::Mouse::getPosition();
};

