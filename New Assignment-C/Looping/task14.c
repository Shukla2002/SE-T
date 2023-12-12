#include<stdio.h>

main()
{
	int i,n,fact=1;
	
	for (i=1;i<=5;i++)
	{
		printf("Enter Number : ");
		scanf("%d",&n);
		
		
	}
	for (i=1;i<=n;i++)
	{
		fact = fact*i;
	}
	for (i=1;i<=n;i++)
	{
	
	printf("\nFactorial Number : %d",fact);
	}
	
}