#include "ContainerDemo.h"


void ContainerDemo::ArrayDemo()
{
	std::string cars[2][4] = {
		{"Datsun", "BMW", "Holden", "Ford" },
		{ "1200", "XM", "Commodore", "Falcon" } };
	
	std::cout << cars[0][3] << " " << cars[1][3];
}

void ContainerDemo::ListDemo()
{
	std::cout << "Press Enter to start... \n";
	std::cin.get();

	std::cout << "Starting\n.\n.\n.\n\n";

	std::cout << "What are the months of the year?... \n\n";
	std::cin.get();
	
	// Creates the list
	std::list<std::string> months = { "February, ", "March, ", "April, ", "May, ", "June, ", "June, ", "August, ", "September, ", "October, ", "November, "};

	for (std::string mon : months) 
	{
		std::cout << mon;
	}

	std::cout << std::endl << "Hmmm that's not quite right...\n\n";
	std::cin.get();

	// Adds "January to the front of the list
	months.push_front("January, ");

	for (std::string mon : months)
	{
		std::cout << mon;
	}
	std::cout << std::endl;
	
	std::cout << "January was added but something is still missing...\n\n";
	std::cin.get();

	// Adds "December to the end of the list
	months.push_back("December. \n");

	for (std::string mon : months)
	{
		std::cout << mon;
	}

	std::cout << "Okay we have December, wait where is July? ...\n\n";
	std::cin.get();

	// Adds "July" into its correct place in the list
	std::list<std::string>::iterator it = months.begin();	// Creates an iterator at the start of the list	
	std::advance(it, 7);									// Moves it to the 7th item in the list
	months.insert(it, "July, ");							// Inserts "July" in front of the 7th item (in between "June" and "August")

	for (std::string mon : months)
	{
		std::cout << mon;
	}

	std::cout << "Why are there 13 months? Oh! there are two Junes...\n\n";
	std::cin.get();

	// Removes "June" from the list
	it = months.begin();				// Moves the iterator back to the start of the list
	std::advance(it, 6);				// Moves it to the 6th item ("June")
	months.erase(it);					// Erases the 6th item

	for (std::string mon : months)
	{
		std::cout << mon;
	}

	std::cout << "Now it's perfect :) \n";
}

void ContainerDemo::MapDemo()
{

}
