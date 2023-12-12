#include<stdio.h>
int main()
{
	/*
		decalre variable and data type
	*/
	int w,l,area;
	
	/*
		printf and scanf for accept value from user
	*/
	printf("Enter Width : ");
	scanf("%d",&w);
	printf("Enter Length : ");
	scanf("%d",&l);
	
	/*
		formula of area to get rectangle
	*/
	area = w*l;
	printf("Area of Rectangle is : %d",area);
}