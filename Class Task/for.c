#include<stdio.h>

main()
{
	int i,n;
	
	for(i=1;i<=5;i++)
	{
		printf("\nEnter Numbers : ");
		scanf("%d",&n);
		
		if(n%2==0)
		{
			printf("\nThe number is even");
		}
		else
		{
			printf("\n The number is odd");
		}
	}
}
