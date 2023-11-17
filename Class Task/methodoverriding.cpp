/*

Method overriding : 

	parent and child have same name method its called method overriding 
	
	
*/
#include<iostream>
using namespace std;
class Parent 
{
		public:
			void display()
			{
				cout<<"\n Hello display class is here";
			}
};	
class Child : public Parent
{
		public: 
			void display()
			{
				Parent::display();
				cout<<"\n Hello child class is here";	
			}	
};
main()
{
	// object creation 
	Child obj = Child();
	obj.display();
	//obj.display();
	
}