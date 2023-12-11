#include<stdio.h>
main()
{
	int n;
	printf("Enter Number : ");
	scanf("%d",&n);
	
	n%2==0?printf("Even Number"):printf("Odd Number");
}