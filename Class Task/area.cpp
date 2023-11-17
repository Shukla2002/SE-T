#include<iostream>
using namespace std;

class Area{
	
	public:
		int l,b,arearec,areatri,l1,b1;
		float pi=3.14,areacir;
		int r;
		
		void rectangle()
		{
			
			cout<<"Enter Height : ";
			cin>>l;
			cout<<"\nEnter Width : ";
			cin>>b;
			
			arearec = l*b;
			cout<<"\nArea of Rectangle : "<<arearec;	
		}
		
		void circle()
		{
			cout<<"\nEnter Radious : ";
			cin>>r;
			
			areacir = pi*r*r;
			
			cout<<"\nArea of circle : "<<areacir;
			
		}
	
		void triangle()
		{
			cout<<"\nEnter Height : ";
			cin>>l1;
			cout<<"\nEnter Breadth : ";
			cin>>b1;
			
			areatri = 0.5*l1*b1;
			
			cout<<"\n Area of triangle : "<<areatri;
			
		}
	
};


main()
{
	Area obj;
	obj.rectangle();
	obj.circle();
	obj.triangle();
	
}