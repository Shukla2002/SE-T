#include<iostream>
using namespace std;

class Grandparent{
	public:
		int a;
		
		void A()
		{
			cout<<"Enter A : ";
			cin>>a;
		}
};

class Parent : public Grandparent{
	
	public:
		int b;
		
	void B()
	{
		cout<<"Enter B : ";
		cin>>b;
	}
	
	
};


class Child:public Parent{

	public:
		int ans;
		
		
	void add()
	{
		ans = a+b;
		cout<<"Addition : "<<ans;
	}
	
	
	
};
main()
{
	Child obj;
	obj.A();
	obj.B();
	obj.add();
	
	
}