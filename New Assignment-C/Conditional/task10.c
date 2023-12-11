#include<stdio.h>
main()
{
	int a;
	printf("Enter Number : ");
	scanf("%d",&a);
	
	if (a>0)
	{
		printf("\nIt is positive number");
	}
	else if (a==0)
	{
		printf("\nIt is Zero");
	}
	else
	{
		printf("\nIt is negative number");
	}
}