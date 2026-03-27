#include "Combat.h"
#include <iostream>
#include <string>>
#include <vector>

// our includes here
#include "GameData.cpp"


class Combat
{
	// fields


public: // everything above is private, everything below is public

	// default combat constructor
	Combat()
	{

	}

	// Methods
	GameData CombatLoop(GameData gameData)
	{
		// Set up temp variables/object
		Character tempCharacter = gameData.GetPlayerCharacter();
		Monster tempMonster; // monster will be default for now

		GameData newData;

		// we choose the easy path for now and change the condition of our while loop for only player health, that way we don't need to restructuer combat completely
		// right now
		while (tempCharacter.GetCurrentHealth() > 0) // both have to have health greater than 0 for combat to continue
		{
			

			if (tempMonster.GetCurrentHealth() <= 0)
			{

				tempCharacter.SetXp(tempCharacter.GetXp() + tempMonster.GetGrantXp());

				std::cout << tempCharacter.GetName() << " gained " << tempMonster.GetGrantXp() << " experience." << std::endl;

				tempCharacter.LevelUp();

				break;
				// if the monster is dead we don't want to see combat happen
			}
			else
			{
				// the monster is still alive
				// 
				// Monster combat text and math
				std::cout << tempMonster.GetName() << ", slashes " << tempCharacter.GetName() << " for " << tempMonster.GetDamage() << std::endl;
				tempCharacter.SetCurrentHealth(tempCharacter.GetCurrentHealth() - tempMonster.GetDamage());

				tempCharacter.DisplayCurrentOutOfMax();
			}

			if (tempCharacter.GetCurrentHealth() <= 0)
			{
				// the game should end
				newData.SetGameEnd(true);
				std::cout << "YOU DIED" << std::endl;
				break;
			}
			else
			{
				// Player combat text and math
				std::cout << tempCharacter.GetName() << ", strikes " << tempMonster.GetName() << " for " << tempCharacter.GetDamage() << std::endl;
				tempMonster.SetCurrentHealth(tempMonster.GetCurrentHealth() - tempCharacter.GetDamage());

				tempMonster.DisplayCurrentOutOfMax();
			}



		}

		newData.SetPlayerCharacter(tempCharacter);

		gameData = newData;

		return gameData;

	}
};

