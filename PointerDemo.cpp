#include "PointerDemo.h"

using namespace std;



void PointerDemo::DoDemo() 
{ 
	cout << "Demo Working" << endl;
	int age = 3;
	//string cName = "Molly";
	PassByValueDemo(age);
	cout << "I am " << age << endl;
	PassByRefDemo(age);
	cout << "I am " << age << endl;
}
void PointerDemo::PassByValueDemo(int age) 
{
	cout << "Enter age ";
	cin >> age;
	
}
void PointerDemo::PassByRefDemo(int& age) 
{
	cout << "Enter age ";
	cin >> age;
}
void PointerDemo::UsePointersDemo() 
{

}
void PointerDemo::MemLeakDemo() 
{

}
