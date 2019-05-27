#include "NetworkManager.h"
#include "Tracer.h"


sf::TcpSocket NetworkManager::client;

NetworkManager::NetworkManager()
{
}

void NetworkManager::createServer()
{
	sf::TcpListener listener;
	// bind the listener to a port
	if (listener.listen(port) != sf::Socket::Done)
	{
		TRACE("NetworkManager::createServer : error listening port");
	}
	else
		TRACE("NetworkManager::createServer : port open");

	// accept a new connection
	if (listener.accept(NetworkManager::client) != sf::Socket::Done)
	{
		TRACE("NetworkManager::createServer : error accepting client");
	}
	else {
		TRACE("NetworkManager::createServer : connected");
		char data[100] = "VijayChutiyaHai";
		// TCP socket:
		if (client.send(data, strlen(data)) != sf::Socket::Done) {
			TRACE("NetworkManager::createServer : transfer not succesfull");
		}
		else {
			TRACE("NetworkManager::createServer : transfer succesfull");
		}
	}
}

void NetworkManager::sendData()
{
	/*
		std::thread senderThread(send, pos);
		senderThread.join();
	*/
}

void NetworkManager::send()
{
	/*
		sf::Packet packet;
		packet<<pos.x<<pos.y<<pos.z;
		if (client.send(packet) != sf::Socket::Done) {
			std::cerr << "Data transfer not successful" << std::endl;
		}
		else {
		}
	*/
}
