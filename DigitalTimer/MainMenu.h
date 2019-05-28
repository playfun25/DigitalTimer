#pragma once

#include "State.h"
#include "Game.h"

class MainMenuState : public State
{
private:
	GameDataRef data;
	sf::Clock 	clock;
	sf::Sprite 	backgroundSprite;
	sf::Sprite playButtonSprite;
	sf::Sprite singlePlayButtonSprite;
	sf::Sprite hostPlayButtonSprite;
	sf::Sprite joinPlayButtonSprite;
public:
	bool updateRequired = true;
	MainMenuState(GameDataRef _data) : data(_data) {}
	void init();
	void handle_input(float delta);
	void draw(float delta);
	void update(float delta) {}
};

