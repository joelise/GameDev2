#pragma once
#include <string>
#include <iostream>
#include <map>
#include <list>
#include <iterator>
#include <cctype>

class ContainerDemo
{
	struct GroupInfo	// Group of variables for GroupInfo
	{
		std::string numberOfMembers;
		std::string leader;
		std::string debutYear;
		std::string topSong;

	};

public:
	
	void ArrayDemo();
	void ListDemo();
	void MapDemo();
	
};

