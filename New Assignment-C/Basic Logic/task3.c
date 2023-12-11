#include<stdio.h>
main()
{
	int area,cir,r;
	float pi=3.14;
	
	printf("Enter The radious of Circle : ");
	scanf("%d",&r);
	
	area = pi*r*r;
	
	printf("\nArea of Circle is : %d",area);
	
	cir = 2*pi*r;
	printf("\nCircumference of Circle is : %d",cir);
}