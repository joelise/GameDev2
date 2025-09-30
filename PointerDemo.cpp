#include "PointerDemo.h"

using namespace std;

void PointerDemo::DoDemo() 
{ 
	cout << "Demo Working" << endl;
	int age = 3;
	//string cName;
	string cName = "Molly";
	PassByValueDemo(cName);
}
void PointerDemo::PassByValueDemo(string cName) 
{
	cout << "My name is" << cName << endl;
}
void PointerDemo::PassByRefDemo() 
{

}
void PointerDemo::UsePointersDemo() 
{

}
void PointerDemo::MemLeakDemo() 
{

}
