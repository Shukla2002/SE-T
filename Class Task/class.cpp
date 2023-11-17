#include<iostream>

using namespace std;

class Student{
	
	string n;
	int id;
	
	public:
	
	void display()
	{
	
	
		cout<<"Enter Name : ";
		cin>>n;
		cout<<"\nEnter Id : ";
		cin>>id;
		
		cout<<"Name : "<<n; 
		cout<<"\nId : "<<id;
		
	}	
};

int main()
{
	Student obj;
	obj.display();	
	
	
}