#include<stdio.h>
int main()
{
	int i=1,n,ev=0,od=0;
	
	while(i<=5)
	{
		printf("\nEnter Number : ");
		scanf("%d",&n);
		i++;
		
		if (n%2==0)
		{
			printf("\nThis is Even Number");
			ev = ev+n;
			
		}
		
		else
		{
			printf("\nThis is Even Number");
			od = od+n;
		}
		
	}
		printf("\nEven Number sum : %d",ev);
		printf("\nOdd Number sum : %d",od);
}