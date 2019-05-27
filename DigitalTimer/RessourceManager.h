#pragma once

#include "SFML/Graphics.hpp"

#include <iostream>
#include <map>

#include "Ressource.h"

class RessourceManager
{
private:
	std::map<Ressource::Texture, sf::Texture> Textures;
	std::map<Ressource::Font, sf::Font> Fonts;
public:
	RessourceManager();
	void loadTexture(Ressource::Texture texture);
	void loadFont(Ressource::Font font);
	sf::Texture& getTexture(Ressource::Texture texture) { return Textures.at(texture); }
	sf::Font& getFont(Ressource::Font font) { return Fonts.at(font); }
	~RessourceManager();
};

