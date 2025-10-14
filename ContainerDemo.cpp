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
	std::cout << "What are the months of the year?" << std::endl;
	std::cout << "Press Enter to continue...";
	std::cin.get();
	std::cout << std::endl;

	std::list<std::string> months = { "Feb, ", "Mar, ", "Apr, ", "May, ", "Jun, ", "Jun, ", "Aug, ", "Sep, ", "Oct, ", "Nov, "};
	for (std::string mon : months) 
	{
		std::cout << mon;
	}
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "Hmmm that's not quite right..." << std::endl;
	std::cout << std::endl;
	std::cin.get();

	months.push_front("Jan, ");
	for (std::string mon : months)
	{
		std::cout << mon;
	}
	std::cout << std::endl;

	months.push_back("Dec");
	for (std::string mon : months)
	{
		std::cout << mon;
	}
	std::cout << std::endl;

	std::list<std::string>::iterator it = months.begin();
	std::advance(it, 7);
	months.insert(it, "Jul, ");
	for (std::string mon : months)
	{
		std::cout << mon;
	}
	std::cout << std::endl;

	it = months.begin();
	std::advance(it, 6);
	months.erase(it);
	for (std::string mon : months)
	{
		std::cout << mon;
	}
	std::cout << std::endl;


}

void ContainerDemo::MapDemo()
{

}
