#include<stdio.h>
int main()
{
	/*
	declare data type and variable
	*/

	int n,area;
	/*
	printf and scanf to get number from user and accept value
	*/
	printf("Enter Number : ");
	scanf("%d",&n);
	/*
	formula to ger area of cube
	*/
	area = 6*n*n;
	printf("Area of Cube is : %d",area);
}