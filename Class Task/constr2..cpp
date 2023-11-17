#include<iostream>
using namespace std;

class Operation
{
	public:
		Operation()
		{
			float a,b;
			
			cout<<"Enter A : ";
			cin>>a;
			cout<<"\nEnter B : ";
			cin>>b;
			cout<<"\nAddition : "<<a+b;
			cout<<"\nSubstraction : "<<a-b;
			cout<<"\nMultiplication : "<<a*b;
			cout<<"\nDivision : "<<a/b;
			
		}
	
};


main()
{
	Operation obj;
}