#pragma once
#include <string>
#include <iostream>
#include <map>
#include <list>
#include <iterator>>
#include "Idols.h"
class ContainerDemo
{
private:
	std::map<std::string, Idols> idols;
public:
	void ArrayDemo();
	void ListDemo();
	void IdolMap();
	void MapDemo();

};

