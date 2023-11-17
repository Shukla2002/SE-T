#include<iostream>
using namespace std;

class Prashant{
	
	private:
		int var=20;
		
	protected:
		int var1=30;
	
	friend class f;
};

class f{

	void display(Prashant)
	{
	
	cout<<"Variable 1 : "<<var;
	cout<<"\nVariable 2 : "<<var1;
	}
};

main()
{
	Prashant obj;
	f obj1;
	obj1.display();
	
}