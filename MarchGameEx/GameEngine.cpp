#include "GameEngine.h"

// include our files here
#include "Menu.cpp"

class GameEngine
{

	bool gameEnd;

	GameData gameData;

	bool nameCheck;

	Menu ourMenu;

public:
	GameEngine()
	{
		gameEnd = false;
		nameCheck = false;

		GameStart();
	}


	// method
	void GameStart()
	{




		while (gameEnd == false)
		{
			if (nameCheck == false)
			{
				if (gameData.GetPlayerCharacter().GetName() == "Tav")
				{
					// we can then prompt the user if they want to change the name

					std::cout << "Do you want to change your name? - yes or no" << std::endl;

					std::string userInput = "";

					getline(std::cin, userInput);

					if (userInput == "yes")
					{
						std::cout << "What do you want your name to be?" << std::endl;
						getline(std::cin, userInput);


						
						//Character temp(userInput, 10, 10, 3); // this was our culprit all along - this called our overloaded constructor


						Character temp;
						temp.NameChange(userInput);
						gameData.SetPlayerCharacter(temp);

						//gameData.GetPlayerCharacter().NameChange(userInput);


						

							
						
					}
				}



				nameCheck = true;

				std::cout << "Greetings, " << gameData.GetPlayerCharacter().GetName() << "!" << std::endl;
			}

			gameData = ourMenu.DisplayMenu(gameData);

			// assigns the gameEnd field of GameEngine the value stored in the gameEnd field from GameData 
			gameEnd = gameData.GetGameEnd();

			// Call a Menu Method
			//gameEnd = Menu();
			//std::cout << "pause" << std::endl;
			// std::cin.get();



		}
	}
};

