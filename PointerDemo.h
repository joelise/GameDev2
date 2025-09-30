#pragma once
#include <iostream>
#include <string>
class PointerDemo
{
	public:
		//string cName;
		void DoDemo();
		void PassByValueDemo(string cName);	//nothing
		void PassByRefDemo();	//&
		void UsePointersDemo();	//
		void MemLeakDemo();
};

