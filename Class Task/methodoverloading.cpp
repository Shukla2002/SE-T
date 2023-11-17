/*

Polymorphism : Poly means many and morphism means forms 

	polymorphism which is derived from greek word 
	
	which means one named method has different different forms 
	
	there are two types of polymorphism 
	
	1) method overloading  (compile time)  
	2) method overriding   (run time) 
	
	method overloading : 
	
		when one class can contain same name method its called method overloading 
		
	method overriding : 
	
		when parent and child both have same name properties 
		
*/
#include<iostream>
using namespace std;
class Sample 
{
		public:
		void display()
		{
			cout<<"Hello display";
		}	
		void display(int i)
		{
			cout<<"\nHello display "<<i;
		}
};
main()
{
	Sample obj = Sample();
	obj.display();
	obj.display(10);
}