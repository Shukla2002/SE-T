#include<iostream>

using namespace std;

class Grandparent{
	
	public:
		
		void num()
		{
			cout<<"Mathemetical Operations!!!!";
		}
	
};

class Parent1:public Grandparent{
	
	public:
		int a;
		void A()
		{
			num();
			cout<<"\nEnter A: ";
			cin>>a;
		}
	
};
class Parent2:public Grandparent{
	
	public:
		int b;
		void B()
		{
			cout<<"\nEnter B: ";
			cin>>b;
		}
	
};

class Child :public Parent1,public Parent2{
	
	public:
		
	void display()
	{
		cout<<"\nAddition : "<<a+b;
		cout<<"\nSubstraction : "<<a-b;
		
	}
};


main()
{
	Child obj;
	obj.A();
	obj.B();
	obj.display();
	
	
}