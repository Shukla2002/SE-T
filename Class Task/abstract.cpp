#include<iostream>
using namespace std;

class Parent{
	public:
		virtual void display()=0;
	
};

class Child1:public Parent{
	public:
	void car()
	{
		cout<<"Child 1 got car";
	}		
	void display()
	{
		
	}	
};

class Child2:public Parent{
	public:
	void bike()
	{
		cout<<"\nChild 2 got bike";
	}
	void display()
	{
		
		}	
};

main()
{

Child1 obj;
obj.display();
obj.car();
	
}