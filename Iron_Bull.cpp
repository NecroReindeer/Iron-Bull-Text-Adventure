// Iron_Bull.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

std::string getWord()
{
	std::cout << "Enter a word: ";
	std::string line;
	std::getline(std::cin, line);

	if (line.length() > 1 && isalpha(line[0]))
	{
		for (int i = 0; i < line.length(); i++)
		{
			line[i] = toupper(line[i]);
		}
		return line;
	}

	else
	{
		std::cout << "Password is not the correct length.";
	}
}
int main()
{
	
	/*Find another Tribe*/
	std::cout << "After a long walk down the stream you come across another tribe. You talk to the chief of the tribe and ask if they have seen any buffalo. They are willing to tell you where they last saw buffalo, but only if you can answer three questions correctly or kill their strongest warrior. Which do you choose?" << std::endl;
	std::string firstTribeChoice = getWord();
	if (firstTribeChoice == "ANSWER THREE QUESTIONS CORRECTLY")

	/*Riddle*/



	/* Fight combat */
	std::cout << "Do you decide to attack first?" << std::endl;
	std::string userInput = getWord();
	int i = 1;
	if (userInput == "YES")
	{
		std::cout << "You lunge forward and he stabs you in the face." << std::endl;
	}
	else if (userInput == "NO")
	{
		std::cout << "The warrior starts to swing their sword at you, do you decide to parry or block?" << std::endl;
		std::string userInput1 = getWord();

		if (userInput1 == "parry")
		{
			std::cout << "You successfully parry the attack and manage to cut his leg leaving him on the ground struggling to get up. Do you kill him or let him live?" << std::endl;
			std::string userInput2 = getWord();
			if (userInput2 == "kill")
			{
				std::cout << "you kill him and the tribe kicks you out." << std::endl;
			}
			else if (userInput2 == "live" || "let him live")
			{
				std::cout << "You let him live and they tell you to head west." << std::endl;
			}
		}
		else if (userInput1 == "block")
		{
			std::cout << "you block" << std::endl;
		}
	}


	/*
	switch (userInput)
	{
	case i:
	{
		std::cout << "Something 1" << std::endl;
	}
	}
	*/

    return 0;
}

