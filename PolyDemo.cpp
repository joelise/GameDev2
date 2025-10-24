#include "PolyDemo.h"

void PolyDemo::DoDemo() 
{
	Spells* spell;							// Spell Pointer
	FireSpell fireSpell;
	IceSpell iceSpell;
	LightningSpell lightningSpell;

	std::vector<Spells*> spellList;			// Creates an empty vector

	spellList.push_back(&fireSpell);		// Adds a refernce of fireSpell to the vector
	spellList.push_back(&iceSpell);			// Adds a refernce of iceSpell to the vector
	spellList.push_back(&lightningSpell);	// Adds a refernce of lightningSpell to the vector
	
	int enemyHealth = 3;					// Enemy health variable for menu loop
	int choice = 0;							// Player choice variable

	std::cout << "||| POLY DEMO ||| \n\n\n";
	std::cout << "While exiting a cave you encouter one last enemy.\n\n";

	// Menu loop
	while (enemyHealth >0)	// While enemy's health is above 0 loop 
	{
		std::cout << "Pick a spell to cast : \n\n1.Fire Spell\n2.Ice Spell\n3.Lightning Spell\n\n";
		std::cin >> choice;		// Player input
		std::cout << std::endl << std::endl;

		// If Player selects within the valid range
		if (choice >= 1 && choice <= 3)					// Range of available choices (1. fire, 2.ice, 3. lightning)
		{
			spellList[choice - 1]->CastSpell();			// Finds corrisponding spell from vector and runs CastSpell (Player choice -1 vectors start at 0)
			enemyHealth--;								// Decrements enemy health

			std::cout << "Your spell was effective, the enemy took damage.\n\n";
			spellList[choice - 1]->Dispel();			// Finds corrisponding spell from vector and runs Dispel (Player choice - 1 vectors start at 0)

			std::cout << std::endl << std::endl;
		}

		// If player input wasn't in the valid range (1-3)
		else 
		{
			std::cout << "Select a valid Spell to cast.\n\n";
		}
	}

	std::cout << "\nThe enemy was defeated. You exit the cave quickly.\n";
	std::cout << "\n\n === END OF POLY DEMO === \n\n\n\n";
	
}