#include "PointerDemo.h"

void PointerDemo::DoDemo() 
{ 
	int age = 14;					// Int Variable
	int* agePtr = &age;				// Pointer to the refernce of the age int	
	int* newAgePtr = new int(age);	// Pointer creating a new address of age int
	
	// Pass by Value Demo
	std::cout << "||| PASS BY VALUE DEMO ||| \n\n";

	std::cout << "Default Age: " << age << std::endl << std::endl;				// Prints the default age

	PassByValueDemo(age);

	std::cout << "\n\nYour new age is " << age << std::endl << std::endl;		// Prints age (not changed due to pass by value)
	std::cout << "\n\n === END OF PASS BY VALUE DEMO === \n\n\n\n";

	// Pass by Reference Demo
	std::cout << "||| PASS BY REF DEMO ||| \n\n";

	std::cout << "Default Age: " << age << std::endl << std::endl;				// Prints the default age

	PassByRefDemo(age);

	std::cout << "\n\nYour new age is " << age << std::endl << std::endl;		// Prints new age (changed from the accessing the variable in pass by ref)
	std::cout << "\n\n === END OF PASS BY REF DEMO === \n\n\n\n";

	// Pointer Demo
	std::cout << "||| POINTER DEMO ||| \n\n";

	std::cout << "Default Age: " << age << std::endl << std::endl;				// Prints the current age (age which was entered in the pass by ref demo)

	UsePointersDemo(agePtr);

	std::cout << "\n\nYour new age is " << age << std::endl << std::endl;		// Prints new age (changes from the pointer demo)
	std::cout << "\n\n === END OF POINTER DEMO === \n\n\n\n";

	// Mem Leak Demo
	std::cout << "||| MEM LEAK DEMO ||| \n\n";

	std::cout << "Default Age: " << age << std::endl << std::endl;				// Prints the current age ( age which was entered in the pointer demo)

	MemLeakDemo(newAgePtr);

	// Prints the current age (unnchaged, age entered in mem leak demo is at a differnt address from the original age, the original age is being printed)
	std::cout << "\n\nYour new age is " << age << std::endl << std::endl;		

	
	std::cout << "A memory leak was detected\nPlease press enter to clean code\n\n";

	// Clears previous/leftover input so std::cin.get() waits for input (earlier input and \n left on buffer gets removed)
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');	 
	std::cin.get();			// Waits for input
	delete newAgePtr;		// Deletes the data of the address that's being pointed to off the heap clearing the memory
	// Pointer is set to null (pointers aren't deleted only the memory being pointed to trying to accessing the pointer can can cause undefined errors (nullptr = safe practice)
	newAgePtr = nullptr;	
	std::cout << "Code Cleaned\n\n";

	std::cout << "\n\n === END OF POINTER DEMO === \n\n\n\n";
	
}
void PointerDemo::PassByValueDemo(int age) 
{
	std::cout << "Please enter an age to continue\n\n";
	std::cin >> age;	// User age input
	std::cout << "\nYou have entered " << age;
	
}
void PointerDemo::PassByRefDemo(int& age) 
{
	std::cout << "Please enter an age to continue\n\n";
	std::cin >> age;	// User age input
	std::cout << "\nYou have entered " << age;
	
}
void PointerDemo::UsePointersDemo(int* agePtr) 
{
	std::cout << "Please enter an age to continue\n\n";
	std::cin >> *agePtr;	// User age input
	std::cout << "\nYou have entered " << *agePtr;

}
void PointerDemo::MemLeakDemo(int* newAgePtr) 
{
	std::cout << "Please enter an age to continue\n\n";
	std::cin >> *newAgePtr;	// User age input
	std::cout << "\nYou have entered " << *newAgePtr;
}
