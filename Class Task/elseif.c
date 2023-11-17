#include<stdio.h>

main()

{
	int n;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	if (n==0)
	
	{
		printf("Provided number is zero");
	}
	else if (n>0)
	{
		printf("Number is positive");
		}	
	else
	{
		printf("Number is negative");
	}
}

