#pragma once
#include <iostream>
#include <string>
#include <limits>
class PointerDemo
{
	public:
		//int age;
		int height;
		void DoDemo();
		void PassByValueDemo(int age);	//nothing
		void PassByRefDemo(int& age);	//&
		void UsePointersDemo(int* agePtr);	//
		void MemLeakDemo(int* newAgePtr);
};

