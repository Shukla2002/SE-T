#include<iostream>

using namespace std;


class aray{
	
	public:
		int a[5],i;
		void accept()
		{
			for(i=0;i<5;i++)
			{
				cout<<"Enter Elements : ";
				cin>>a[i];
			}
		}
		
		void display()
		{
			for(i=0;i<5;i++)
			{
				cout<<"\nElements are : "<<a[i];
			}
		}
	
};
main()
{
	
	aray obj;
	obj.accept();
	obj.display();
	
}