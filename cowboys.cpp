// Ironull.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/* needs #include <iostream> and  #include <string> */


std::string PlayerInput()
{
	std::string playerChoice;
	std::getline(std::cin, playerChoice);
	return playerChoice;
}

void SouthOrWest()
{
	bool passedTests = false;

	if (passedTests == true)
	{
		std::cout << "You passed the others tribe’s tests, the chief tells you that they’ve seen many buffalo in the west." << std::endl;
	}
	else
	{
		std::cout << "You have failed the tests set by the other tribe.They refuse to tell you where the buffalo are." << std::endl;
	}

	std::cout << "Do you want to go to: " << std::endl;
	std::cout << "	1. The south? " << std::endl;
	std::cout << "	2. The west? " << std::endl;
	
	std::string playerChoice = PlayerInput();

	if (playerChoice == "1")
	{
		std::cout << "You are going south." << std::endl;
		SouthCowboys();
	}
	else if (playerChoice == "2")
	{
		std::cout << "You are going west." << std::endl;
		// You see buffalo tracks
	}
}

void SouthCowboys()
{
	std::cout << "Ahead you see a group of cowboys, they have spotted you! " << std::endl;
	std::cout << "Do you want to: " << std::endl;
	std::cout << "	1. fight? " << std::endl;
	std::cout << "	2. run? " << std::endl;

	std::string playerChoice = PlayerInput();

	if (playerChoice == "1")
	{
		std::cout << "You are outnumbered, they are all armed with guns. They quickly kill you and end your search for the buffalo." << std::endl;
	}
	else if (playerChoice == "2")
	{
		std::cout << "You managed to escape the cowboys with no injuries and get back to your tribe." << std::endl;
		std::cout << "You were followed." << std::endl;
		std::cout << "The cowboys let you escape and followed you, once you reached the tribe they wiped out the entire tribe." << std::endl;
	}
}

int main()
{
	SouthOrWest();
	
	system("pause");
    return 0;
}
