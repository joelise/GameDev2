#pragma once
#include <iostream>
#include <string>
class PointerDemo
{
	public:
		int age;
		string cName;
		void DoDemo();
	private:
		void PassByValueDemo();	//nothing
		void PassByRefDemo();	//&
		void UsePointersDemo();	//
		void MemLeakDemo();
};

