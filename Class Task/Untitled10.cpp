/*
 abstraction : Abstraction is a concept 
 	which is represent only few information 
 	not allocated background information 
 	
 	using of abstraction we can hide background information 
 	it only contain method declaration 
*/
#include<iostream>
using namespace std;
class Sample
{
	public:
	 virtual void display()=0;	
};
class Demo: Sample 
{
	public: 
	void display()
	{
		cout<<"Hello";
		}	
};

main()
{
	Demo obj=Demo();
	obj.display();
}