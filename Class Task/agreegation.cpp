#include<iostream>
using namespace std;

class Adress{
	
	public:
		int pincode;
		string city,state;
		
		Adress(int pincode, string city, string state)
		{
			this->city = city;
			this->state=state;
			this->pincode=pincode;
		}
};

class Student{
	
	public:
		int id;
		Adress* adress;
		Student(int id,Adress* adress)
		{
			this->id = id;
			this->adress=adress;
		}
		
		void display()
		{
			cout<<"Id = "<<id;
			cout<<"\nState = "<<adress->state;
			cout<<"\nCity = "<<adress->city;
			cout<<"\nPincode = "<<adress->pincode;
		}
		
	
};
main()
{
	Adress obj(382415,"Ahmedabad","Gujarat");
	
	Student obj1(1,&obj);
	obj1.display();
	
	
}