#pragma once
#include <iostream>
#include <string>
#include <limits>
class PointerDemo
{
	public:
		void DoDemo();
		void PassByValueDemo(int age);	
		void PassByRefDemo(int& age);	
		void UsePointersDemo(int* agePtr);	
		void MemLeakDemo(int* newAgePtr);
};

