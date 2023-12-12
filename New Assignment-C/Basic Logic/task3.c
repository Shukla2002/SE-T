#include<stdio.h>
main()
{
	/*
	declare variables and datatype
	*/
	int area,cir,r;
	float pi=3.14;
	/*
	printf for show output and scanf for accept value
	*/
	printf("Enter The radious of Circle : ");
	scanf("%d",&r);
	
	/*
	formula to get area
	*/
	area = pi*r*r;
	/*
	print the area of circle
	*/

	printf("\nArea of Circle is : %d",area);
	/*
	print the circumference of circle
	*/

	cir = 2*pi*r;
	printf("\nCircumference of Circle is : %d",cir);
}