#include<stdio.h>
main()
{
	int a;
	printf("Enter Year : ");
	scanf("%d",&a);
	
	if (a%4==0)
	{
		printf("\nIt is not leap year");
	}
	else
	{
		printf("\nIt is leap year");
	}
}