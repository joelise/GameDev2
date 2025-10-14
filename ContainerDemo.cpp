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
	std::list<int> numbers = {};
	numbers.push_front(1),(2);
}

void ContainerDemo::MapDemo()
{

}
