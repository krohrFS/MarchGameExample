#include "Monster.h"
#include <iostream>
#include <string>
#include <vector>


class Monster
{
	std::string name;
		int currentHealth;
		int maxHealth;
		int damage;
		int grantXp;

public:
	Monster() // default constructor
	{
		name = "Goblin";
		currentHealth = 5;
		maxHealth = 5;
		damage = 1;
		grantXp = 50;
	}

	// Overloaded constructor
	Monster(std::string newName, int newCurrentHealth, int newMaxHealth, int newDamage)
	{
		name = newName;
		currentHealth = newCurrentHealth;
		maxHealth = newMaxHealth;
		damage = newDamage;
	}

	// Method
	void DisplayCurrentOutOfMax()
	{
		std::cout << currentHealth << "/" << maxHealth << std::endl;
	}


	// Getters setters

	std::string GetName()
	{
		return name;
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

	int GetGrantXp()
	{
		return grantXp;
	}


	void SetName(std::string newValue)
	{
		name = newValue;
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

	void SetGrantXp(int newValue)
	{
		grantXp = newValue;
	}
};