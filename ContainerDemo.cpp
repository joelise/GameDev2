#include "ContainerDemo.h"


void ContainerDemo::ArrayDemo()
{
	std::cout << "||| ARRAY DEMO ||| \n\n\n";
	
	bool playerChoosing{ true };	// Variable for while loop
	
	std::string ticTacToe[3][3]		// Creates 2d array of a tictactoe game
	{
		{" X ", "   ", " X "},
		{" O ", " O ", "   "},
		{" X ", "   ", " O "} };

	std::cout << "You are playing as 'X' in a game of TicTacToe, What is your next move?\n\n";
	
	// Displays array
	for (int i = 0; i < 3; i++)			// Iterates through each row in the array
	{
		for (int j = 0; j < 3; j++)		// Iterates through each column in row
		{
			std::cout << ticTacToe[i][j] << " ";	// Displays output
		}
		std::cout << std::endl;
	}

	std::cout << "\nEnter the number of where you would like to place an 'X'\n\n";
	// Updates array so possible options are visual numbers
	ticTacToe[0][1] = "[1]";
	ticTacToe[1][2] = "[2]";
	ticTacToe[2][1] = "[3]";

	// Displays array
	for (int i = 0; i < 3; i++)			// Iterates through each row in the array
	{
		for (int j = 0; j < 3; j++)		// Iterates through each column in row
		{
			std::cout << ticTacToe[i][j] << " ";	// Displays output
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	// While the player is making a choice (loops if an invalid choice is chosen)
	while (playerChoosing) 
	{
		std::string playerChoice;
		std::getline(std::cin, playerChoice);	// Reads player input
		std::cout << std::endl;

		if (playerChoice == "1")				// If player chose "1"
		{
			std::cout << "You placed an 'X' in middle at the top creating 3 in a row.\n\n";

			// Updates board with player choice
			ticTacToe[0][1] = " X ";
			ticTacToe[1][2] = "   ";
			ticTacToe[2][1] = "   ";

			// Displays array
			for (int i = 0; i < 3; i++)			// Iterates through each row in the array
			{
				for (int j = 0; j < 3; j++)		// Iterates through each column in row
				{
					std::cout << ticTacToe[i][j] << " ";	// Displays output
				}
				std::cout << std::endl;
			}

			std::cout << "\nCongratulations you Win!";
			playerChoosing = false;
			break;	// Exits while loop
		}

		if (playerChoice == "2")			// If player chose "2"
		{
			std::cout << "You placed an 'X' right of the middle blocking 'O'.\n\n";

			// Updates board with player choice and the opponents move
			ticTacToe[0][1] = " O ";
			ticTacToe[1][2] = " X ";
			ticTacToe[2][1] = "   ";

			// Displays array
			for (int i = 0; i < 3; i++)			// Iterates through each row in the array
			{
				for (int j = 0; j < 3; j++)		// Iterates through each column in row
				{
					std::cout << ticTacToe[i][j] << " ";	// Displays output
				}
				std::cout << std::endl;
			}

			std::cout << "\nAn 'O' was placed in the middle at the top blocking the chance to win.\nIt's a draw.\n";
			playerChoosing = false;
			break;	// Exits while loop
		}

		if (playerChoice == "3")			// If player chose "3"
		{
			std::cout << "You placed an 'X' in the middle of the bottom row.\n\n";

			// Updates board with player choice and the opponents move
			ticTacToe[0][1] = "   ";
			ticTacToe[1][2] = " O ";
			ticTacToe[2][1] = " X ";

			// Displays array
			for (int i = 0; i < 3; i++)			// Iterates through each row in the array
			{
				for (int j = 0; j < 3; j++)		// Iterates through each column in row
				{
					std::cout << ticTacToe[i][j] << " ";	// Displays output
				}
				std::cout << std::endl;
			}

			std::cout << "\nAn 'O' was placed on the right of the middle row creating 3 O's in a row.\nYou lose.\n";
			playerChoosing = false;
			break;	// Exits while loop
		}

		// If a player enters an invalid option
		if (playerChoice != "1" || "2" || "3"){
			std::cout << "Please select one of the avaliable options.\n\n";
			ticTacToe[0][1] = "[1]";
			ticTacToe[1][2] = "[2]";
			ticTacToe[2][1] = "[3]";

			// Displays array
			for (int i = 0; i < 3; i++)			// Iterates through each row in the array
			{
				for (int j = 0; j < 3; j++)		// Iterates through each column in row 
				{
					std::cout << ticTacToe[i][j] << " ";	// Displays output
				}
				std::cout << std::endl;
			}
		}
	}

	std::cout << "\n\n === END OF ARRAY DEMO === \n\n\n\n";
}

void ContainerDemo::ListDemo()
{
	std::cout << "||| LIST DEMO ||| \n\n\n";
	std::cout << "Press Enter to start... \n";
	std::cin.get();			// Gets input

	std::cout << "Starting\n.\n.\n.\n\n";

	std::cout << "What are the months of the year?... \n\n";
	std::cin.get();			// Gets input
	
	// Creates the list
	std::list<std::string> months = { "February, ", "March, ", "April, ", "May, ", "June, ", "June, ", "August, ", "September, ", "October, ", "November, "};

	// Prints every string in the list
	for (std::string mon : months) 
	{
		std::cout << mon;
	}

	std::cout << std::endl << "Hmmm that's not quite right...\n\n";
	std::cin.get();		// Gets input

	months.push_front("January, ");		// Adds "January" to the front of the list

	// Prints every string in the list
	for (std::string mon : months)
	{
		std::cout << mon;
	}
	std::cout << std::endl;
	
	std::cout << "January was added but something is still missing...\n\n";
	std::cin.get();		// Gets input

	months.push_back("December. \n");	// Adds "December to the end of the list

	// Prints every string in the list
	for (std::string mon : months)
	{
		std::cout << mon;
	}

	std::cout << "Okay we have December, wait where is July? ...\n\n";
	std::cin.get();		// Gets input

	// Adds "July" into its correct place in the list
	std::list<std::string>::iterator it = months.begin();	// Creates an iterator at the start of the list	
	std::advance(it, 7);									// Moves it to the 7th item in the list
	months.insert(it, "July, ");							// Inserts "July" in front of the 7th item (in between "June" and "August")

	// Prints every string in list
	for (std::string mon : months)
	{
		std::cout << mon;
	}

	std::cout << "Why are there 13 months? Oh! there are two Junes...\n\n";
	std::cin.get();		// Gets input

	// Removes "June" from the list
	it = months.begin();				// Moves the iterator back to the start of the list
	std::advance(it, 6);				// Moves it to the 6th item ("June")
	months.erase(it);					// Erases the 6th item

	// Prints every string in list
	for (std::string mon : months)
	{
		std::cout << mon;
	}

	std::cout << "Now it's perfect :) \n\n";
	std::cout << " === END OF LIST DEMO === ";
}


void ContainerDemo::MapDemo()
{
	// Creates an empty map requiring a group name and their corresponding struct (defined in the header)
	std::map<std::string, GroupInfo> kpopGroups;
	// Inserts groups to the map "Group Name (Key)", {"number of members, leader, debut year, top streamed song (Values)"}
	kpopGroups.insert({ "Stray Kids", { "8", "Bangchan", "2018", "God's Menu" } });
	kpopGroups.insert({ "BTS", { "7", "RM", "2013", "Dynamite" } });
	kpopGroups.insert({ "Enhypen", { "7", "Jungwon", "2020", "Bite Me" } });
	kpopGroups.insert({ "TOMORROW X TOGETHER", { "5", "Soobin", "2019", "0X1=LOVESONG" } });
	kpopGroups.insert({ "ATEEZ", { "8", "Hongjoong", "2018", "BOUNCY" } });
	kpopGroups.insert({ "Seventeen", { "13", "S.Coups", "2015", "Super" } });

	std::string groupName;			// Variable for the group entered by the user
	std::string userChoice;			// Variable for if the user wants to exit at the end of the demo loop

	std::cout << "||| MAP DEMO ||| \n";

	bool isRunning = true;	// Condition for menu cycle 

	while (isRunning)		// Menu loop (selecting groups, finds selected information, repeat or exit)
	{
		std::cout << "\n\nHere are the current most popular male Kpop groups:\n\n";

		// Loops through each Key in the map and displays
		for (const auto& group : kpopGroups)	// const = variables can't be modified  auto& = a reference of the variable type which is automatically found by the complier
		{
			std::cout << "- " << group.first << std::endl;		// Displays the group name on each line ( group.first = the map keys)
		}

		bool validChoice = false;	// Condition for the inner loop (if the user has entered a valid group name)

		// Loops until the user enters a valid group name (keeps asking to enter a group if not valid)
		while (!validChoice)
		{
			std::cout << "\nEnter a group name to learn more...\n";
			std::getline(std::cin, groupName);				// Reads what the user has entered
			for (auto& c : groupName) c = tolower(c);		// A reference of each character entered by the user, then converted to lowercase

			// Loop cycle to find a match between the group name entered and the map keys
			for (auto& group : kpopGroups)
			{
				std::string key = group.first;			// Creates a variable for the map keys so they can be converted to lowercase
				for (auto& c : key) c = tolower(c);		// A reference of each character of the map keys, converted into lowercase

				// Strings are case-sensitive, converting variables to both be lowercase ensures capitalisation doesn't affect result

				// Checks if the entered name matches any keys in the map, if there is a match display selected group information
				if (groupName == key)
				{
					std::cout << "\nYou have selected " << group.first << "\n\n";	// Shows user choice before displaying group information

					std::cout << "Group Name: " << group.first << "\n";							// Map Key (Group Name)
					std::cout << "Number of Members: " << group.second.numberOfMembers << "\n";	// Key Value (Variable of Group Info Struct (Number of Members)
					std::cout << "Leader: " << group.second.leader << "\n";						// Key Value (Variable of Group Info Struct (Leader)
					std::cout << "Year of Debut: " << group.second.debutYear << "\n";			// Key Value (Variable of Group Info Struct (Year of Debut)
					std::cout << "Most Streamed Song: " << group.second.topSong << "\n\n";		// Key Value (Variable of Group Info Struct (Top Song)

					validChoice = true;		// A valid option was selected breaking the loop
					break;
				}
			}
		}
		// Displays error message if user enters an invalid option
		if (!validChoice)
		{
			std::cout << "\n Group not found. Please try again\n";
		}

		// Asks user if they would like to choose another group or exit
		std::cout << "\nWould you like to learn about other groups?\n\nEnter 'Yes' to be brought back to the start\nOr\nPress Enter to exit the demo\n";
		std::getline(std::cin, userChoice);			// Reads user input
		for (auto& c : userChoice) c = tolower(c);	// A reference of each character entered by the user, then converted to lowercase

		// If the user wants to exit
		if (userChoice != "yes")
		{
			std::cout << "\nExiting Map Demo...\n\n";
			isRunning = false;	// Ends the demo loop
			std::cout << " === END OF MAP DEMO === ";
		}
	}

}