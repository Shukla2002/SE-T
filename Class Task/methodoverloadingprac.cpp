#include<iostream>

using namespace std;

class Overloading{
	
	public:
		void display()
		{
			cout<<"This is method overloading";
		}
		
		void display(int i)
		{
			cout<<"\nValue of A : "<<i;
		}
	
};

main()
{
	Overloading obj;
	obj.display();
	obj.display(10);
	
}