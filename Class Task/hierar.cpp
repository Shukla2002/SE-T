#include<iostream>
using namespace std;

class Parent{
	
	public:
		
		int a,b;
		
		void num()
		{
			cout<<"\nEnter A : ";
			cin>>a;
			cout<<"\nEnter B : ";
			cin>>b;
			
		}
};

class Child1 : public Parent{
	
	public:
		int add;
		
		void addition()
		{
			add = a+b;
			cout<<"\nAddition : "<<add;
		}
		
	
};

class Child2: public Parent{
	
	public:
		int sub;
		
		void substraction()
		{
			sub = a-b;
			cout<<"\nSubstraction : "<<sub;
		}
		
	
};

main()
{
	Child1 obj;
	obj.num();
	obj.addition();
	
	Child2 obj1;
	obj1.num();
	obj1.substraction();
	
	
}