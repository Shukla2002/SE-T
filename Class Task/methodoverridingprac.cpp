#include<iostream>
using namespace std;

class Parent{
	
	public:
		
		void display()
		{
			cout<<"This is Parent class";
		}
};

class Child:public Parent{
	 
	public:
		
		void display()
		
		{
			Parent::display(); //scope resolution
			cout<<"\nThis is Child class";
		}
};

main()
{
	Child obj;
	obj.display();
	
}