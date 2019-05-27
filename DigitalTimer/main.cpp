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

#define ENABLE_TRACER

int main()
{
	try {
		sf::CircleShape circle;
	}
	catch (std::exception e) {
		TRACE("main : ", e.what());
	}
}