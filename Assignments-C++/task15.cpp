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
		if(a>b)
		{
			cout<<"\nA is greatest";
		}
		else
		{
			cout<<"\nB is greatest";
		}
	}
	
	
};

main()
{
	sample obj;
	obj.element();
	obj.operation();
}