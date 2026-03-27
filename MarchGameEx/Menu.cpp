#include "Menu.h"
#include <iostream>
#include <string>
#include <vector>

#include "Combat.cpp"

class Menu
{


	bool gameEnd;
	// enum
	enum MenuOptions {
		FIGHT = 1,
		HEAL,
		EXIT
	};

	// vector to display

	std::vector<std::string> theMenu;

public:

	Menu()
	{
		gameEnd = false;
		theMenu = std::vector<std::string>(3);

		theMenu[0] = "1) Fight";
		theMenu[1] = "2) Heal";
		theMenu[2] = "3) Exit";

		




	}


	GameData DisplayMenu(GameData gameData)
	{
		GameData newData;
		for (int i = 0; i < theMenu.size(); i++)
		{
			std::cout << theMenu[i] << std::endl;
		}

		std::cout << "Your choice: ";
		std::string choice = CollectInput(); // START HERE - Look at 61

		int convChoice = stoi(choice); // we convert the user input to an int

		newData = HandleUserChoice(convChoice, gameData); // we call the HandleUserChoice method here and pass in the convChoice int


		gameData = newData;
		return gameData;

	}

	std::string CollectInput()
	{
		std::string userInput = "";
		getline(std::cin, userInput);

		return userInput;
	}


	// TO handle user choice - re-create the actual menu options and have the approriate method run

	GameData HandleUserChoice(int choice, GameData gameData)
	{
		GameData newData;

		Character temp = gameData.GetPlayerCharacter(); // we set up a temp object to alter and then later on we reassign the object to the newData object

		Combat combat;


		switch (choice)
		{
		case (int)MenuOptions::FIGHT: // 1
			std::cout << "You chose to fight" << std::endl;
			newData = combat.CombatLoop(gameData);
			break;

		case (int)MenuOptions::HEAL: // 2
			
			if (temp.GetCurrentHealth() < temp.GetMaxHealth())
			{
				// we would heal here
				temp.Heal();
				
				std::cout << "You healed, " <<temp.GetName() << std::endl;

			}
			else
			{
				// they don't need to be healed
				std::cout << "You're already at max health, " << temp.GetName() << std::endl;
			}

			newData.SetPlayerCharacter(temp);

			break;

		case (int)MenuOptions::EXIT: // 3
			std::cout << "Till next time..." << std::endl;
			newData.SetGameEnd(true);
			break;

		default: // anything else
			std::cout << "Your current choices are 1) fight, 2) heal, and 3) exit" << std::endl;
			break;
		}

		gameData = newData;
		return gameData;
	}
};
