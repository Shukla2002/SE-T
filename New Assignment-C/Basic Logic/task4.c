#include<stdio.h>
int main()
{
	/*
	declare variable and data type
	*/

	int n,area;
	/*
	print to show in screen
	scanf for accept value from user
	
	*/

	printf("Enter Number : ");
	scanf("%d",&n);
	/*
	formula to get area
	*/

	area = n*n;
	printf("Area of Square is : %d",area);
}