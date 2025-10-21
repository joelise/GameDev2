#pragma once
#include <iostream>
#include <string>
class KpopGroups
{
	private:
	std::string groupName;
	std::string idolName;
	std::string age;
	std::string position;

public:
	KpopGroups(std::string groupName, std::string idolName, std::string age, std::string position) : groupName(groupName), idolName(idolName), age(age), position(position) {}

	std::string getGroup() const;
	std::string getName() const;
	std::string getAge() const;
	std::string getPosition() const;
};

