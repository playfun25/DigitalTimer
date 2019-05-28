#pragma once

#include "SFML/Graphics.hpp"

#include <iostream>
#include <map>

#include "Resource.h"

class ResourceManager
{
private:
	std::map<Resource::Texture, sf::Texture> Textures;
	std::map<Resource::Font, sf::Font> Fonts;
public:
	ResourceManager();
	void loadTexture(Resource::Texture _texture, std::string textureName);
	void loadFont(Resource::Font _font, std::string fontName);
	sf::Texture& getTexture(Resource::Texture texture) { return Textures.at(texture); }
	sf::Font& getFont(Resource::Font font) { return Fonts.at(font); }
	~ResourceManager();
};

