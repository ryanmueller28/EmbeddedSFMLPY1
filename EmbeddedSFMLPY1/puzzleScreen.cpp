#include "pch.h"
#include "puzzleScreen.h"


puzzleScreen::puzzleScreen()
{
}


puzzleScreen::~puzzleScreen()
{
}

int puzzleScreen::Run(sf::RenderWindow &App) {
	bool Running = true;
	//Load the background image and display


	consoleFont.loadFromFile("capAssets/Fonts/_bitmap_font____romulus_by_pix3m-d6aokem.ttf");

	consoleIn.setFont(consoleFont);
	consoleIn.setCharacterSize(24);
	consoleIn.setFillColor(sf::Color::White);
	consoleIn.setString(">>>");
	consoleIn.setPosition({ 100.f, 100.f });

	sf::Texture textureBackground;
	textureBackground.loadFromFile("capAssets/UI/Full_Background_Pixel.png");

	sf::Sprite spriteBackground;
	spriteBackground.setTexture(textureBackground);
	spriteBackground.setPosition(0, 0);

	//this sets the texture of the main "puzzle screen"
	sf::Texture textureScreen;
	textureScreen.loadFromFile("capAssets/UI/Windows_Screen.png");
	compScreen.setTexture(textureScreen);
	compScreen.setPosition({ 0.f, 0.f });

	//this sets the texture and position of Bei Bei
	sf::Texture beiBeiTexture;
	beiBeiTexture.loadFromFile("capAssets/Panda/BeiBei.png");
	BeiBei.setTexture(beiBeiTexture);
	BeiBei.setPosition({ 1200, 550 });


	while (Running)
	{
		sf::Event event;
		while (App.pollEvent(event))
		{
			
			if (event.type == sf::Event::KeyPressed)
			{
				 if(event.key.code == sf::Keyboard::Escape) {
						return (0);
						break;
				}
			}
			App.clear();
			App.draw(spriteBackground);
			App.draw(BeiBei);
			App.draw(compScreen);
			App.draw(consoleIn);
			App.display();


		}
	}
	return -1;
}

