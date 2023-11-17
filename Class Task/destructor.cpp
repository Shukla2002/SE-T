#include<iostream>

using namespace std;


/*
destructor : to destroy something 
*/
class Sample 
{
	public:
	Sample() // constructor 
	{
		cout<<"\nhello welcome to constructor ";
	}
	void operation()
	{
		int a;
		cout<<"\nEnter A : ";
		cin>>a;
		}	
	~Sample()
	{
		cout<<"\nhello destroy something ";
	}
};

main()
{
	Sample obj = Sample();
	obj.operation();
	
}