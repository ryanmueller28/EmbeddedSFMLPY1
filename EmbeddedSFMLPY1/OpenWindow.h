#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include "cScreen.h"
#include "optionsScreen.h"

class OpenWindow : public cScreen
{
public:
	int alpha_max;
	int alpha_div;
	bool playing;

	sf::RenderWindow mainWindow;
	OpenWindow();

private:
	//functions to animate the text options getting larger or smaller
	void animDown();
	void animUp();
	unsigned int menu = 0;
	virtual int Run(sf::RenderWindow &App);
	
	sf::Text playText;
	sf::Text titleText;
	sf::Text optionsText;
	sf::Text loadLevel;
	sf::Text creditsText;
	sf::Text exitText;

	sf::Vector2i mousePos = sf::Mouse::getPosition();
};

