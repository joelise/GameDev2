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

void ContainerDemo::IdolMap()
{
	std::map<std::string, GroupInfo> kpopGroups;
	kpopGroups.insert({ "Stray Kids", { "8", "Bangchan", "2018", "God's Menu" } });
	kpopGroups.insert({ "BTS", { "7", "RM", "2013", "Dynamite" } });
	kpopGroups.insert({ "Enhypen", { "7", "Jungwon", "2020", "Bite Me" } });
	kpopGroups.insert({ "TOMORROW X TOGETHER", { "5", "Soobin", "2019", "0X1=LOVESONG" } });
	kpopGroups.insert({ "ATEEZ", { "8", "Hongjoong", "2018", "BOUNCY" } });
	kpopGroups.insert({ "Seventeen", { "13", "S.Coups", "2015", "Super" } });

	std::string groupName;
	std::string userChoice;
	/*std::string searchGroup;
	auto it = kpopGroups.find(searchGroup);
	if (it != kpopGroups.end()) {
		std::cout << "Group: " << searchGroup << "\n";
		std::cout << "Number of Members: " << it->second.numberOfMembers << "\n";
	}*/

	std::cout << "Map Demo \n\n\n\n";
	MapDemoIntro();

	std::getline(std::cin, groupName);
	auto it = kpopGroups.find(groupName);

	if (it == kpopGroups.end()) 
	{
		std::cout << "Group Not Found.\n\n";
		MapDemoIntro();
	}
	else 
	{
		std::cout << "You have selected" << groupName << "\n";

		std::cout << "Group: " << groupName << "\n";
		std::cout << "Number of Members: " << it->second.numberOfMembers << "\n";
		std::cout << "Leader : " << it->second.leader << "\n";
		std::cout << "Year of Debut " << it->second.debutYear << "\n";
		std::cout << "Most Streamed Song: " << it->second.topSong << "\n\n";
	}

	std::cout << "Would you like to learn about other groups?/n Enter 'Yes' to be brought back to the start page\nEnter 'No' to exit the demo";
	std::getline(std::cin, userChoice);
	if (userChoice == "Yes") 
	{
		MapDemoIntro();
	}

}

void ContainerDemo::MapDemoIntro()
{
	std::cout << "Here are the current most popular male Kpop groups:\n\n - Stray Kids\n - BTS\n - Enhypen\n - TOMORROW X TOGETHER\n - ATEEZ\n - Seventeen\n\n";
	std::cout << "Enter the group name to learn more...\n";
}

void ContainerDemo::MapDemo()
{
	

}