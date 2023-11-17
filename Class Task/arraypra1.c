#include<stdio.h>
main()
{
	int i;
	int a[5];
	
	
	for(i=1;i<=5;i++)
	{
		printf("Enter Elelment : ");
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<=5;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n %d is even",a[i]);
		}
		else
		{
			printf("\n %d is odd",a[i]);
		}
	}
}