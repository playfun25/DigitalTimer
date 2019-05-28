#include "ResourceManager.h"

#include <string>

#include "Tracer.h"


ResourceManager::ResourceManager()
{
}

void ResourceManager::loadTexture(Resource::Texture _texture, std::string _textureName)
{
	sf::Texture texture;
	std::string path = "Media/Textures/" +  _textureName + ".png" ;
	if (!texture.loadFromFile(path))
		TRACE("RessourceManager::loadTexture : " + _textureName + " not loaded");
	else
		Textures[_texture] = texture;
}

void ResourceManager::loadFont(Resource::Font _font, std::string fontName)
{
	sf::Font font;
	std::string path = "Media/Fonts/" + fontName;
	if (!font.loadFromFile(path))
		TRACE("RessourceManager::loadFont : ", fontName, "not loaded");
	else
		Fonts[_font] = font;
}

ResourceManager::~ResourceManager()
{
}
