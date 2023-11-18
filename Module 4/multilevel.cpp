#include<iostream>
using namespace std;

class Person{
	
	public:
		string name;
		int age;
		
		void data()
		{
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"\nEnter Age : ";
			cin>>age;
			
			
		}
};

class Student:public Person{
	
	public:
		float pr;
		
		void per()
		{
			cout<<"\nEnter Your Percentage : ";
			cin>>pr;
			
		}
		
};
		
class Teacher :public Student{
	
	public:
		float salary;
		void sal()
		{
			cout<<"\nEnter Salary : ";
			cin>>salary;
			
			cout<<"\nName = "<<name;
			cout<<"\nAge = "<<age;
			cout<<"\nPercentage = "<<pr;
			cout<<"\nSalary = "<<salary;
			
		}				
	
};

main()
{
	Teacher obj;
	obj.data();
	obj.per();
	obj.sal();
	
}