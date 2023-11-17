#include<iostream>
using namespace std;

class Cricketer{
	public:
		int truns,bperform;
		float avgrun;
		
		void operation()
		{
			cout<<"\nEnter Total Runs of team : ";
			cin>>truns;
			
			avgrun = truns/11;
			cout<<"\nAvg Runs : "<<avgrun;
			cout<<"\nBest Performance : ";
			cin>>bperform;
		}
		
};

class Batsman:public Cricketer{
			public:
			void display()
			{
				cout<<"\nTotal Runs = "<<truns;
				cout<<"\nAvg Runs = "<<avgrun;
				cout<<"\nBest Performance = "<<bperform;
			}
				
};


main()
{
	Batsman obj;
	obj.operation();
	obj.display();
	
}