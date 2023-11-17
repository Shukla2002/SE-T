#include<stdio.h>

void main()
{
	int n;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("The number is even");
	}
	
	else
	{
		printf("The number is odd");
	}
}