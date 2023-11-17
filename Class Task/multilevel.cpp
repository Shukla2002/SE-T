#include<iostream>
using namespace std;


class Parent1{
	
	public:
		int id;
		string name;
		
		void id()
		{
			cout<<"Enter Id : ";
			cin>>id;
		}
		
	
};
class Parent2{
	public:
	
	void str()
	{
		cout<<"Enter Name : ";
		cin>>name;
		}	
	
};

class Child:public Parent1,public Parent2{

	public:	
	
	void display()
	{
		cout<<"Name : "<<name;
		cout<<"\nId : "<<id;
	}
	
};

main()
{
	Child obj;
	obj.id();
	obj.str();
	obj.display();
	
	
}