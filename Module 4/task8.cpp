#include<iostream>
using namespace std;

class matrix{
	
	public:
		int a[3],i,b[3];
		void element()
		{
		
		for(i=0;i<3;i++)
		{
		
		cout<<"\nEnter Elements A : ";
		cin>>a[i];
		}
		}
	
	void elementb()
	{
		
		for(i=0;i<3;i++)
		{
			cout<<"\nEnter Elements B : ";
			cin>>b[i];
		}
	}
	
	
};

class Add : public matrix{
	public:
	void add()
	{
		for (i=0;i<3;i++)
		{
		cout<<"\nAddition of Elements : "<<a[i]+b[i];
		}
	}
	
};

main()
{
Add obj;
obj.element();
obj.elementb();
obj.add();
	
}