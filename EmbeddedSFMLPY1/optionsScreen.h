#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "cScreen.h"

class optionsScreen : public cScreen
{
public:
	optionsScreen();
	~optionsScreen();

	virtual int Run(sf::RenderWindow &App);

private:
	sf::Sprite spriteBackground;

	//an object for volume control
	sf::Sprite volSlider;
	sf::Text volText;

	//an object for colorblindness
	sf::Text greyScale;
	sf::Sprite SpriteGS;

	sf::Sprite backButton;
	sf::Text back;
	sf::Vector2i mousePos = sf::Mouse::getPosition();
};

