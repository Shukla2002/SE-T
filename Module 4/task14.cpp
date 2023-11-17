#include<iostream>
using namespace std;

template<class Swap>

int element(Swap& x, Swap& y)
{
	Swap t;
	t = x;
	x = y;
	y = t;
}

int main()
{
	int a=10,b=30;
	
	
	element(a,b);
	{
		cout<<"A : "<<a;
		cout<<"\nB : "<<b;
	}
	
}