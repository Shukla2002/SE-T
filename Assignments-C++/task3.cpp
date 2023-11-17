#include<iostream>

using namespace std;

class Calc
{
	public:
	void add(int n,int n1)
	{
		int ans;
		ans = n+n1;
		cout<<"\nAddition : "<<ans;
	}	
	void sub(int n, int n1)
	{
		
		int ans;
		ans = n-n1;
		cout<<"\nSubstraction : "<<ans;
	}	
	void mul(int n,int n1)
	{
		int ans;
		ans = n*n1;
		cout<<"\nMultiplication : "<<ans;
	}
	void div()
	{
		float n,n1;
		cout<<"\nEnter Number 1 : ";
		cin>>n;
		cout<<"\nEnter Number 2 : ";
		cin>>n1;
	
		float ans;
		ans = n/n1;
		cout<<"Division : "<<ans;
	}
};

main()
{
	Calc obj;
	
		
	obj.add(10,20);
	obj.sub(20,10);
	obj.mul(10,20);
	obj.div();	
}