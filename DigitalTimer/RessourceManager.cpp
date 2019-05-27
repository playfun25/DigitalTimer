#include "RessourceManager.h"
#include "Tracer.h"


RessourceManager::RessourceManager()
{
}

void RessourceManager::loadTexture(Ressource::Texture textureName)
{
	sf::Texture texture;
	std::string path = "Media/Textures/" + textureName;
	if (texture.loadFromFile(path))
		TRACE("RessourceManager::loadTexture : ", textureName, "not loaded");
}

void RessourceManager::loadFont(Ressource::Font fontName)
{
	sf::Font font;
	std::string path = "Media/Fonts/" + fontName;
	if (font.loadFromFile(path))
		TRACE("RessourceManager::loadFont : ", fontName, "not loaded");
}

RessourceManager::~RessourceManager()
{
}
