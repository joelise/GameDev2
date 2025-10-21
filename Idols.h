#pragma once
#include <iostream>
#include <string>
class Idols
{
	private:
	std::string groupName;
	std::string idolName;
	int age;
	std::string position;

public:
	Idols(std::string groupName, std::string idolName, int age, std::string position) : groupName(groupName), idolName(idolName), age(age), position(position) {}

	std::string getGroup() const;
	std::string getName() const;
	int getAge() const;
	std::string getPosition() const;
};

