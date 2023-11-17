#include<iostream>
using namespace std;

class Addition
{
	int n1,n2;
	int ans;
	public:
		
	void add()
	{
	
		cout<<"Enter Number 1 : ";
		cin>>n1;
		cout<<"\nEnter Number 2 : ";
		cin>>n2;
	
		ans = n1+n2;
		cout<<"Addition : "<<ans;
	}	
};


int main()
{

	
	Addition obj;
	obj.add();	
}
