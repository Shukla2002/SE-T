#include<stdio.h>
int main()
{

	/*
		declare the data type and variable
	*/
	int n,cir;
	
	/*
		printf and scanf for accept value from user
	*/

	printf("Enter Number : ");
	scanf("%d",&n);
	/*
		formula to get ciecumference of rectangle
	*/
	
	cir = 4*n;
	printf("Circumference of Rectangle is : %d",cir);
}