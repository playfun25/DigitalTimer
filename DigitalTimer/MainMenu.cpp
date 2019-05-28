#include "MainMenu.h"


#include "Resource.h"

void MainMenuState::init()
{
	//load textures
	data->resourceManager.loadTexture(Resource::Texture::MainMenuBackground, "MainMenuBackground");
	//data->resourceManager.loadTexture(Resource::Texture::MainMenuHostButton, "MainMenuHostButton");
	//data->resourceManager.loadTexture(Resource::Texture::MainMenuJoinButton, "MainMenuJoinButton");
	//data->resourceManager.loadTexture(Resource::Texture::MainMenuPlayButton, "MainMenuPlayButton");
	//create BackgroundSprite
	backgroundSprite.setTexture(data->resourceManager.getTexture(Resource::Texture::MainMenuBackground));
	backgroundSprite.scale(1, 600.0f / 512.0f);
	backgroundSprite.setPosition(
		sf::VideoMode().width / 2 - backgroundSprite.getGlobalBounds().width / 2, 
		sf::VideoMode().height / 2.1f - backgroundSprite.getGlobalBounds().height / 2);

}

void MainMenuState::handle_input(float delta)
{
	sf::Event event;
	while (data->window.pollEvent(event)) {
		
	}
}

void MainMenuState::draw(float delta)
{
	data->window.clear();
	data->window.draw(backgroundSprite);
	data->window.display();
}
