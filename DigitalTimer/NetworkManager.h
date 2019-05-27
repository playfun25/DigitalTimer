#pragma once

#include "SFML/Network.hpp"

#include <thread>

struct NetworkData
{

};

class NetworkManager
{
public:
	static const unsigned short port = 53000;
	sf::Socket::Status serverStatus;
	sf::Socket::Status clientStatus;
	std::thread thread;
	static sf::TcpSocket client;
	NetworkManager();
	
	static void createServer();

	static void sendData();
	static void send();
};

