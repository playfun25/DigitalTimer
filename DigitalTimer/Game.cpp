#include "Game.h"



Game::Game(int width, int height, std::string title)
{
	data->window.create(sf::VideoMode(width, height), title, sf::Style::Close | sf::Style::Titlebar);
	//data->stateMachine.addState(StateRef(new SplashState(data)));
	data->window.setFramerateLimit(80);
	run();
}


void Game::run()
{
	float newTime, frameTime, interpolation;
	float currrentTime = clock.getElapsedTime().asSeconds();
	float acumulator = 0.0f;

	while (data->window.isOpen())
	{
		data->stateMachine.processStateChange();
		newTime = clock.getElapsedTime().asSeconds();
		frameTime = newTime - currrentTime;
		if (frameTime > 0.25f)
			frameTime = 0.25f;
		currrentTime = newTime;
		acumulator += frameTime;

		while (acumulator >= delta)
		{
			data->stateMachine.getActiveState()->handle_input(delta);
			data->stateMachine.getActiveState()->update(delta);
			acumulator -= delta;
		}

		interpolation = acumulator / delta;
		data->stateMachine.getActiveState()->draw(interpolation);
	}
}

Game::~Game()
{
}
