#include "GameData.h"
#include <iostream>
#include <string>
#include <vector>

// include our own files here
#include "Character.cpp"
#include "Monster.cpp"



class GameData
{
	bool gameEnd;
	Character playerCharacter;

public:
	GameData()
	{
		gameEnd = false;
	}


	// getter setter

	Character GetPlayerCharacter() // just a getter for right now
	{
		return playerCharacter;
	}


	void SetPlayerCharacter(Character newPc)
	{
		playerCharacter = newPc;
	}

	void SetGameEnd(bool newValue)
	{
		gameEnd = newValue;
	}

	bool GetGameEnd()
	{
		return gameEnd;
	}

	// Methods - For save and load


	// HEY DO THESE ON THE FUTURE LECTURE

	void SaveGameData()
	{
		// This will end up writing to a text file that will be stored in the project folder
	}


	void LoadGameData()
	{
		// this will read that file line by line and assign values appropriately
	}
};