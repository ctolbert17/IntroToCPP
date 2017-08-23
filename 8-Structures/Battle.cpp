#include "Battle.h"
#include <iostream>
void printEntity(Entity target)
{
	std::cout << target.hitPoints << std::endl;
	std::cout << target.atkPoints << std::endl;
	std::cout << target.defPoints << std::endl;
}
void battle(Entity combatantA, Entity combatantB)
{
	bool inProgress = true;

	while (inProgress)
	{
		std::cout << "Player Stats" << std::endl;
		printEntity(combatantB);

		combatantA.hitPoints -= combatantB.defPoints - combatantB.atkPoints;
		combatantB.hitPoints -= combatantA.atkPoints - combatantB.defpoints;

			inProgess = combatantA.hitPoints > 0 && combatantB.hitPoints > 0;

	}

	std::cout << "The battle is over!";

	if (combatantA.hitPoints > 0)
	{
		std::cout << "Player wins!" << std::endl;
	}
	else if (combatantB.hitPoints > 0)
	{
		std::cout << "Zombie wins!" << std::endl;
	}
	else
	{
		std::cout << "Everyone is dead!" << std::endl;
	}
}