#include<iostream>
using namespace std;

class Student{
	public:
		int rollno;
		
		void roll()
		{
			cout<<"Enter Roll No : ";
			cin>>rollno;
		}
		
	
};

class Test{
	public:
		int maths=54;
		int english=65;
	
		void marks()
		{
			cout<<"\nMaths Marks : "<<maths;
			cout<<"\nEnglish Marks : "<<english;
		}
};

class Result:public Student,public Test{
	
	public:
		int tm;
		
		void show()
		{
			tm = maths+english;
			
			cout<<"\nTotal Marks = "<<tm;
		}
};


main()
{
	Result obj;
	obj.roll();
	obj.marks();
	obj.show();
	
	
}