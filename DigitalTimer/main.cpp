/*
 *
 * @file MainMenuState.cpp
 * @author Vijay
 * @brief Entry point of the application.
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "SFML/Graphics.hpp"

#include <iostream>

#include "Tracer.h"
#include "Game.h"

#define ENABLE_TRACER

int main()
{
	try {
		Game(sf::VideoMode().getDesktopMode().width, sf::VideoMode().getDesktopMode().height, "DigitalTimer");
	}
	catch (std::exception e) {
		TRACE("main : ", e.what());
	}
}