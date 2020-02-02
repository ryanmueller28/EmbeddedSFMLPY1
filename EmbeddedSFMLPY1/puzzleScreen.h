#pragma once
#include "cSCreen.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>


class puzzleScreen : public cScreen
{
public:
	puzzleScreen();
	~puzzleScreen();
	

	virtual int Run(sf::RenderWindow &App);


private:
	sf::Sprite BeiBei;
	sf::Sprite compScreen;

	sf::Text consoleIn;
	sf::Font consoleFont;
};

