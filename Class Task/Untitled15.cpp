#include<iostream>

using namespace std;


class aray{
	
	public:
		int a[5],i,sum=0;
		float avg;
		void accept()
		{
			for(i=0;i<5;i++)
			{
				cout<<"Enter Marks of Student 1 : ";
				cin>>a[i];
			}
		}
		
		void display()
		{
			for(i=0;i<5;i++)
			{
				cout<<"\nMarks are : "<<a[i];
				
				sum+=a[i];
				avg = sum/5;
				
			}
			cout<<"\nSum of Marks : "<<sum;
			cout<<"\nAverage of Marks : "<<avg;
			
		}
	
};
main()
{
	
	aray obj;
	obj.accept();
	obj.display();
	
}