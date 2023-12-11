#include<stdio.h>
int main()
{
	int b,h,area;
	
	printf("Enter Height : ");
	scanf("%d",&h);
	printf("Enter Breadth : ");
	scanf("%d",&b);
	
	area = 0.5*b*h;
	printf("Area of Triangle is : %d",area);
}