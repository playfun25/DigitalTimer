#include "ResourceManager.h"
#include "Tracer.h"


ResourceManager::ResourceManager()
{
}

void ResourceManager::loadTexture(Resource::Texture textureName)
{
	sf::Texture texture;
	std::string path = "Media/Textures/" + textureName;
	if (texture.loadFromFile(path))
		TRACE("RessourceManager::loadTexture : ", textureName, "not loaded");
}

void ResourceManager::loadFont(Resource::Font fontName)
{
	sf::Font font;
	std::string path = "Media/Fonts/" + fontName;
	if (font.loadFromFile(path))
		TRACE("RessourceManager::loadFont : ", fontName, "not loaded");
}

ResourceManager::~ResourceManager()
{
}
