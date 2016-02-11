// Iron_Bull.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


std::string PlayerInput()
{
	std::string playerChoice;
	std::getline(std::cin, playerChoice);
	return playerChoice;
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
		std::cout << "[FIGHT]" << std::endl;
		std::cout << "You are outnumbered, they are all armed with guns.\nThey quickly kill you and end your search for the buffalo." << std::endl;
	}
	else if (playerChoice == "2")
	{
		std::cout << "[RUN]" << std::endl;
		std::cout << "You managed to escape the cowboys with no injuries and get back to your tribe." << std::endl;
		std::cout << "You were followed." << std::endl;
		std::cout << "The cowboys let you escape and followed you,\nonce you reached the tribe they wiped out the entire tribe." << std::endl;
	}
}

void SouthOrWest(bool passedTests)
{

	if (passedTests == true)
	{
		std::cout << "You passed the tests,\nthe chief tells you that they have seen many buffalo in the west." << std::endl;
	}
	else
	{
		std::cout << "You have failed the tests set by the other tribe.\nThey refuse to tell you where the buffalo are." << std::endl;
	}

	std::cout << "Do you want to go to: " << std::endl;
	std::cout << "	1. The south? " << std::endl;
	std::cout << "	2. The west? " << std::endl;

	std::string playerChoice = PlayerInput();

	if (playerChoice == "1")
	{
		std::cout << "[SOUTH]" << std::endl;
		std::cout << "You are going south." << std::endl;
		SouthCowboys();
	}
	else if (playerChoice == "2")
	{
		std::cout << "[WEST]" << std::endl;
		std::cout << "You are going west." << std::endl;
		// You see buffalo tracks
	}
}
/*
void rightOrWrong(int answer)
{
	if (answer == 1)
	{
		//go to the buffalo tracks
		std::cout << "works" << std::endl;

	}
	else
	{
		//go go south

	}
}*/

void fightTribe()
{
	/* Fight combat */
	std::cout << "Do you decide to attack first?" << std::endl;
	std::cout << "1 - YES" << std::endl;
	std::cout << "2 - NO" << std::endl;
	std::string fightChoice = PlayerInput();
	int i = 1;
	if (fightChoice == "1")
	{
		std::cout << "[YES]" << std::endl;
		std::cout << "You lunge forward and you miss completely.\nThe warrior turns round and starts to swing his axe at you." << std::endl;
		std::cout << "1 - You decide to parry" << std::endl;
		std::cout << "2 - You decide to dodge" << std::endl;
		std::string playerChoice1 = PlayerInput();
		if (playerChoice1 == "1")
		{
			std::cout << "[PARRY]" << std::endl;
			std::cout << "You successfully parried the attack and managed to stab him in the chest.\nHe gives up and the tribe tells you to head North" << std::endl;
			//Right
			bool passedTests = true;
			SouthOrWest(passedTests);

		}
		else if (playerChoice1 == "2")
		{
			std::cout << "[DODGE]" << std::endl;
			std::cout << "You did not manage to dodge the attack and you surrender.\nThen the tribe tells you to head south" << std::endl;
			//Wrong
			bool passedTests = false;
			SouthOrWest(passedTests);
		}


	}
	else if (fightChoice == "2")
	{
		std::cout << "[NO]" << std::endl;
		std::cout << "The warrior starts to swing their sword at you, do you decide to parry or block?" << std::endl;
		std::cout << "1 - Parry" << std::endl;
		std::cout << "2 - Block" << std::endl;
		std::string playerChoice = PlayerInput();

		if (playerChoice == "1")
		{
			std::cout << "[PARRY]" << std::endl;
			std::cout << "You successfully parry the attack and manage to cut his leg leaving\nhim on the ground struggling to get up. Do you kill him or let him live?" << std::endl;
			std::cout << "1 - Kill him" << std::endl;
			std::cout << "2 - Let him live" << std::endl;
			std::string playerChoice1 = PlayerInput();

			if (playerChoice1 == "1")
			{
				std::cout << "[KILL HIM]" << std::endl;
				std::cout << "You kill him and the tribe kicks you out without telling you where the buffalo is." << std::endl;
				//Wrong
				bool passedTests = false;
				SouthOrWest(passedTests);
			}
			else if (playerChoice1 == "2")
			{
				std::cout << "[LET HIM LIVE]" << std::endl;
				std::cout << "You let him live and they tell you to head North." << std::endl;
				//switch to the see buffalo tracks
				bool passedTests = true;
				SouthOrWest(passedTests);
			}
		}
		else if (playerChoice == "2")
		{
			std::cout << "[BLOCK]" << std::endl;
			std::cout << "You successfully block his attack, but you stagger backwards.\nDo you keep defending yourself or attack" << std::endl;
			std::cout << "1 - Keep your guard up" << std::endl;
			std::cout << "2 - Attack him" << std::endl;
			std::string BlockInput = PlayerInput();

			if (BlockInput == "1")
			{
				std::cout << "[KEEP YOUR GUARD UP]" << std::endl;
				std::cout << "The warrior knocks the weapon out your hand and you surrender." << std::endl;
				bool passedTests = false;
				SouthOrWest(passedTests);
			}
			else if (BlockInput == "2")
			{
				std::cout << "[ATTACK HIM]" << std::endl;
				std::cout << "You stab him in the leg and he gives up, and the tribe tell you to head North." << std::endl;
				//switch to the see buffalo tracks
				bool passedTests = true;
				SouthOrWest(passedTests);
			}
		}
	}
}

void tribe()
{

	/*Find another Tribe*/
	std::cout << "After a long walk down the stream you come across another tribe.\nYou talk to the chief of the tribe and ask if they have seen any buffalo.\nThey are willing to tell you where they last saw buffalo,\nbut only if you can solve this riddle or kill their strongest warrior.\nWhich do you choose?" << std::endl;
	std::cout << "1 - Riddle" << std::endl;
	std::cout << "2 - Fight Warrior" << std::endl;
	std::string playerChoice = PlayerInput();
	int tries = 2;

	/*Riddle*/
	if (playerChoice == "1")
	{
		std::cout << "What has mountains but no earth, " << std::endl;
		std::cout << "Rivers but no water," << std::endl;
		std::cout << "Fields but no crops." << std::endl;
		std::string playerChoice = PlayerInput();

		if (playerChoice == "MAP" || playerChoice == "map" || playerChoice == "A MAP")  //"A MAP" || 
		{
			std::cout << "They are impressed with your wisdom, and tell you that\nthey recently saw buffalo in the west." << std::endl;
			bool passedTests = true;
			SouthOrWest(passedTests);   //contine to the buffalo tracks
		}
	
		/*
		else
		{
			if (tries <= 0)
			{
				std::cout << "You are incorrect again, and they will not tell you where the buffalo is." << std::endl;
			}
			
			std::cout << "incorrect, you may try once more" << std::endl;
			tries--;
		}*/
		else
		{
			std::cout << "You are incorrect, and they will not tell you where the buffalo is." << std::endl;
			std::cout << "You must now fight the warrior!" << std::endl;
			fightTribe();
		}
	}
	else if (playerChoice == "2")
	{
		std::cout << "You have decided to fight the warrior" << std::endl;
		fightTribe();
	}

}
	


/*
void cuttOff()
{
	
	std::cout << "\n[CUTT OFF]\n" << std::endl;
	std::cout << "You feel you know where the buffalo are going. You decide to cut the buffalo off." std::endl;
	std::cout << "you attempt to cut of the buffalo you come accross a large cougar blocking your path." std::endl;
	std::cout << "How do you decide to deal with the cougar?" << std::endl;
	std::cout << "1. Fight the cougar\n2. Attempt to playdead\n3. Sneak around the cougar\n" << std::endl;

	std::string cougarChoice = PlayerInput();
	if (cougarChoice == "1")
		std::cout << "\n[FIGHT]\n" << std::endl;
		std::cout << "You charge at the cougar and try to overpower it but the cougar mauled you to death." << std::endl;
		std::cout << "\n[DEAD]\n" << std::endl;
	if (cougarChoice == "2")
		std::cout << "You layed down hoping the cougar would pass but it attacked you while you were defenceless and mauled you to death." << std::endl;
}*/

void goEast()
{
	/*Go East*/
	std::cout << "\n[EAST]\n" << std::endl;
	std::cout << "After leaving the confines of the tribe walls\nyou come to face the rising sun upon turning East.\n" << std::endl;	
	std::cout << "The grassy plains reach the horizon with distant\nmountains set against a sunny blue canvas.\n" << std::endl;
	std::cout << "This endless landscape give you encouragement for your search for the buffalo.\n" << std::endl;
	std::cout << "As the wind rushes through the tall grass\nyou hear the whispers of your ancestors, and feel the power of the hunt.\n" << std::endl;
	std::cout << "Both you and your companions march on until you come across a stream." << std::endl;
	std::cout << "The water is steady and runs down the hillside." << std::endl;
	std::cout << "The chance of a watering hole is increased by this sight of flowing water,\nbut which way do you go?\n" << std::endl;
	std::cout << "1. Up stream" << std::endl;
	std::cout << "2. Down stream\n" << std::endl;
	
	std::string playerChoice = PlayerInput();

	/*Go upstream*/
	if (playerChoice == "1")
	{
		std::cout << "\n[UPSTREAM]\n" << std::endl;
		std::cout << "Your direction takes you upstream as the water begins to become more rapid and splashes at your feet." << std::endl;
		std::cout << "The rocks are uneven but you march alongside the water." << std::endl;
	}

	/*Go downstream*/
	else if (playerChoice == "2")
	{
		std::cout << "\n[DOWNSTREAM]\n" << std::endl;
		std::cout << "Heading down the hillside, and along the flowing stream, your group continue on in the search for the buffalo." << std::endl;
		std::cout << "The stream leads into a watering hole, however there are no buffalo to be seen. " << std::endl;
		tribe();
	}
	else
	{
		std::cout << "There's only two choices, 1 or 2" << std::endl;
	}
}

int main()
{

	std::cout << "Welcome" << std::endl;
	std::cout << "---------IRON BULL---------" << std::endl;

	std::cout << "You are Iron Bull leader of the Sioux tribe, esteemed leader\nwhose honours will leave stories for generations.\n" << std::endl;
	std::cout << "Although a great leader the nomadic Tribe has suffered a\ntough winter with much suffering due to the\ngruelling weather and hunting driving the buffalo numbers down.\n" << std::endl;
	system("pause");

	std::cout << "The dawn Rises on the tribe marking a new day you are in\nyour tipi sitting by the fire for warmth with the council.\n" << std::endl;
	std::cout << "With few warriors remaining among the tribe plans to train\nyounger members are being discussed among the elders.\n" << std::endl;
	std::cout << "The entrance to the tipi opens and along with the harsh\nwinter enters one of the tribe’s warriors." << std::endl;
	std::cout << "He speaks of the buffalo, he tells you they have gone\nmissing in the night and the frozen ground has left no footprints to follow." << std::endl;
	system("pause");
	
	std::cout << "As one of the few left who can find them you and two\nwarriors decide to embark on a journey to find the buffalo." << std::endl;
	std::cout << "You gather your two men and stand on the edge of the camp site." << std::endl;
	system("pause");

	goEast();
	//tribe();//goEast();//cuttOff();

	system("pause");
	return 0;

}
