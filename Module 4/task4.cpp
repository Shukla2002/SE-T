#include<iostream>

using namespace std;

class Bankacc{
					string name;
					long double accno;
					string tac;
					int amount;
					int wamt;
					
				
				public:
				void value()
				{
					cout<<"Enter Name : ";
					cin>>name;
					cout<<"\nEnter Account Number :  ";
					cin>>accno;
					cout<<"\nEnter Type of Account : ";
					cin>>tac;
				}
				void damout()
				{
					cout<<"\nEnter Balance Amount : ";
					cin>>amount;
				}
				
				void wamount()
				{
					cout<<"\nEnter Withdraw Amount : ";
					cin>>wamt;
					
				}
				void balamt()
				{
					int bamount = amount-wamt;
					
					cout<<"\n\n Name : "<<name;
					cout<<"\n Remaing Balance : "<<bamount;
					
				}
	
			 };

main()
{
	Bankacc obj;
	obj.value();
	obj.damout();
	obj.wamount();
	obj.balamt();
	
	
}