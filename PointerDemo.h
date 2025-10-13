#pragma once
#include <iostream>
#include <string>
class PointerDemo
{
	public:
		//int age;
		int height;
		void DoDemo();
		void PassByValueDemo(int age);	//nothing
		void PassByRefDemo(int& age);	//&
		void UsePointersDemo();	//
		void MemLeakDemo();
};

