#include<iostream>
using namespace std;

class Student{
	public:
		int id;
		string name;
		
		void setid(int id)		//setter method
		{
			this->id = id;
		}
		int getid()	//getter method
		{
			return id;
		}
		
		void setname(string name)
		{
			this->name = name;
		}
		string getName()
		{
			return name;
		}
	
};


main()
{
	Student obj;
	obj.setid(10);
	cout<<"\nId : "<<obj.getid();
	obj.setname("Prashant");
	cout<<"\nName : "<<obj.getName();
	
}