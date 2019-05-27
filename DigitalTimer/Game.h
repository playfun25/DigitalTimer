#pragma once

#include "SFML/Graphics.hpp"

#include <memory>

#include "ResourceManager.h"
#include "StateMachine.h"

struct GameData {
	StateMachine stateMachine;
	sf::RenderWindow window;
	ResourceManager resourceManager;
};

typedef std::shared_ptr<GameData> GameDataRef;

class Game
{
private :
	sf::Clock clock;
	const float delta = 1.0f / 60.0f;
	GameDataRef data = std::make_shared<GameData>();

	void run();
public:
	Game(int width, int height, std::string title);
	~Game();
};

