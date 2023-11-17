#include<iostream>
using namespace std;

class palin{
	public:
		int n,r,s=0,a;
		
		void num()
		{
			cout<<"Enter Number : ";
			cin>>n;
			
			a=n;
		}
		void operation()
		{									
			do{
				r = n%10;						
				s = s*10+r;			
				n = n/10;						
				
			}while(n>0);
			
			if(a==s)
			{
				cout<<"Number is palindorme";
			}
			else
			{
				cout<<"\nNumber is not plaindrome";
				
			}
		}
	
};

main()
{
	palin obj;
	obj.num();
	obj.operation();
	
}