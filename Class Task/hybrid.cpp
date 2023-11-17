#include<iostream>

using namespace std;

class Grandparent{
	
	public:
		int a,b;
		void num()
		{
			cout<<"Enter A : ";
			cin>>a;
			cout<<"\nEnter B : ";
			cin>>b;
		}
	
};

class Parent1:public Grandparent{
	
	public:
		int ad;
		void add()
		{
			ad = a+b;
			cout<<"\nAddition : "<<ad;
		}
	
};
class Parent2:public Grandparent{
	
	public:
		int su;
		void sub()
		{
			su = a-b;
			cout<<"\nSubstraction : "<<a-b;
		}
	
};

class Child :public Parent1,public Parent2{
	
	public:
		
	void display()
	{
		cout<<"\nAddition : "<<ad;
		cout<<"\nSubstraction : "<<su;
		
	}
};


main()
{
	Child obj;
	obj.add();
	obj.sub();
	obj.display();
	
	
}