#include<stdio.h>
int main()
{
/*
	declare variable and data type
	*/
	int b,h,area;
/*
	printf and scanf to get number from user and accept value
	*/	
	printf("Enter Height : ");
	scanf("%d",&h);
	printf("Enter Breadth : ");
	scanf("%d",&b);
	/*
	formula to get area of triangle
	*/
	area = 0.5*b*h;
	printf("Area of Triangle is : %d",area);
}