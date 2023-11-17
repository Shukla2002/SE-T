#include<iostream>

using namespace std;


class Fact{
	
	public:
		int num,fact=1,i;
		
		void number()
		{
			cout<<"Enter Number : ";
			cin>>num;
			
		}
		
		void fac()
		{
			for(i=1;i<=num;i++)
			{
				fact = fact*i;
			}	
				
			cout<<"Factorial Number is : "<<fact;
		}
	
};

main()
{
	Fact obj;
	obj.number();
	obj.fac();
	
}