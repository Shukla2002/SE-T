#include<iostream>
using namespace std;


class Fibo{
	
	public:
		int n,n1=0,n2=1,i;
		int n3=n1+n2;
		
		void number()
		{
			cout<<"Enter Terms : ";
			cin>>n;
			
			cout<<n1;
			cout<<n2;
		}
		
		void fi()
		{
			i=1;
			while(i<n)
			{
				cout<<n3;
				n1 = n2;
				n2 = n3;
				n3 = n1+n2;
				i++;
			}
		}
	
};
main()
{
Fibo obj;
obj.number();
obj.fi();	
	
}