#include<iostream>
using namespace std;

class Parent{
	public:
		Parent()
		{
			cout<<"This is Parent class";
		}
	
};

class Child:public Parent{
	
	public:
		Child()
		{
			cout<<"\nThis is a child class";
		}
		
};


main()
{
	Child obj;
	
}