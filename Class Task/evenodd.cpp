#include<iostream>

using namespace std;

class Even{
	public:
		int a;
		
		void num()
		{
			cout<<"Enter Number : ";
			cin>>a;
		}
		
		void operation()
		{
			if(a%2==0)
			{
				cout<<"\nThe Number is Even";
			}
			else
			{
				cout<<"\nThe Number is odd";
			}
		}
	
};

main()
{
	Even obj;
	obj.num();
	obj.operation();
	
}