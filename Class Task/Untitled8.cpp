#include<iostream>
using namespace std;


class Parent1{
	
	public:
		int id;
		
		
		void gid()
		{
			cout<<"Enter Id : ";
			cin>>id;
		}
		
	
};
class Parent2{
	public:
		string name;
	
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
	obj.gid();
	obj.str();
	obj.display();
	
	
}