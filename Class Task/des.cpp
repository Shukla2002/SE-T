#include<iostream>

using namespace std;

class Sample{
	
	public:
		
		Sample()
		{
			cout<<"Welcome to c language";
		}
		
		void operation()
		{
			int a,b;
			cout<<"\nEnter A : ";
			cin>>a;
			cout<<"\nEnter B : ";
			cin>>b;
			cout<<"\nAddition : "<<a+b;
		}
		
		~Sample()
		{
			cout<<"\nThank you for using c Language";
		}
};

main()
{
	Sample obj;
	obj.operation();
	
	
}