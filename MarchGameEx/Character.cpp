#include "Character.h"
#include <iostream> // allows cout
#include <string> // allows getline
#include <vector> // allows vector


class Character
{
	std::string characterName;
	int currentHealth;
	int maxHealth;
	int damage;
	int level;
	int xp;


	int strength;
	int dexterity;
	int constitution;
	int intelligence;
	int wisdom;
	int charisma;


public: 
	Character() // default constructor
	{
		characterName = "Tav";
		currentHealth = 10;
		maxHealth = 10;
		damage = 3;
		level = 1;
		xp = 0;

	}

	// overloaded constructor for Character
	//Character(std::string newName, int newCurrentHealth, int newMaxHealth, int newDamage)
	//{
		//characterName = newName;
		//currentHealth = newCurrentHealth;
		//maxHealth = newMaxHealth;
		//damage = newDamage;

//	}

	// Methods

	void NameChange(std::string newName)
	{
		SetName(newName);
	}

	void Heal()
	{

		DisplayCurrentOutOfMax();
		currentHealth = maxHealth;
		DisplayCurrentOutOfMax();
	}

	void DisplayCurrentOutOfMax()
	{
		std::cout << currentHealth << "/" << maxHealth << std::endl;
	}

	void LevelUp()
	{

		/*0	1
300	2
900	3
2, 700	4
6, 500	5
14, 000	6
23, 000	7
34, 000	8
48, 000	9
64, 000	10
85, 000	11
100, 000 12
120, 000 13
140, 000 14
165, 000	15
195, 000	16
225, 000	17
265, 000	18
305, 000	19
355, 000	20 */


		if (xp <= 299)
		{
			level = 1;

		}
		else if (xp <= 899)
		{
			if (level == 1)
			{
				level = 2;
				maxHealth += 8;
				currentHealth += 8;
				std::cout << "You leveled up!" << std::endl;
			}

		}
		else if (xp >= 900)
		{
			if (level == 2)
			{
				level = 3;
				maxHealth += 8;
				currentHealth += 8;
				std::cout << "You leveled up!" << std::endl;
			}

		}
	}



	// Getters and setters

	// getters
	std::string GetName()
	{
		return characterName;
	}

	int GetCurrentHealth()
	{
		return currentHealth;
	}

	int GetMaxHealth()
	{
		return maxHealth;
	}

	int GetDamage()
	{
		return damage;
	}

	int GetLevel()
	{
		return level;
	}

	int GetXp()
	{
		return xp;
	}

	int GetStrength()
	{
		return strength;
	}

	int GetDexterity()
	{
		return dexterity;
	}

	int GetConstitution()
	{
		return constitution;
	}

	int GetIntelligence()
	{
		return intelligence;
	}

	int GetWisdom()
	{
		return wisdom;
	}

	int GetCharisma()
	{
		return charisma;
	}

	// setters

	void SetName(std::string newValue)
	{
		characterName = newValue;
	}

	void SetCurrentHealth(int newValue)
	{
		currentHealth = newValue;
	}

	void SetMaxHealth(int newValue)
	{
		maxHealth = newValue;
	}

	void SetDamage(int newValue)
	{
		damage = newValue;
	}

	void SetLevel(int newValue)
	{
		level = newValue;
	}

	void SetXp(int newValue)
	{
		xp = newValue;
	}

	void SetStrength(int newValue)
	{
		strength = newValue;
	}

	void SetDexterity(int newValue)
	{
		dexterity = newValue;
	}

	void SetConstitution(int newValue)
	{
		constitution = newValue;
	}

	void SetIntelligence(int newValue)
	{
		intelligence = newValue;
	}

	void SetWisdom(int newValue)
	{
		wisdom = newValue;
	}

	void SetCharisma(int newValue)
	{
		charisma = newValue;
	}
};




