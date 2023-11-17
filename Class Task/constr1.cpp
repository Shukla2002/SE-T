#include<iostream>

using namespace std;

class Calc{
		
		float n,n1;
		public:
	Calc()
	{
		cout<<"Enter Number 1 : ";
		cin>>n;
		cout<<"\nEnter Number 2 : ";
		cin>>n1;
		cout<<"\nAddition : "<<n+n1;
		cout<<"\nSubstraction : "<<n-n1;
		cout<<"\nMultiplication : "<<n*n1;
		cout<<"\nDivision : "<<n/n1;
	}
	
};



main()
{
Calc obj;
	
}