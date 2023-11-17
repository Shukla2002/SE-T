#include<iostream>
using namespace std;

class sample{
	private:
	int a,b;
	
	friend element();
	
	public:
	void element()
	{
		cout<<"Enter A : ";
		cin>>a;
		cout<<"\nEnter B : ";
		cin>>b;
		
		
	}
	public:
	void operation()
	{
		this->a = a;
		this->b = b;
		a = a*b;
		b = a/b;
		a = a/b;
		
		cout<<"\nAfter swap A : "<<a;
		cout<<"\nAfter swap B : "<<b;
	}
	
	
};

main()
{
	sample obj;
	obj.element();
	obj.operation();
}