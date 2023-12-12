#include<stdio.h>
main()
{
	
	/*
		decalre variable and data type
	*/
	int w,h;
	int cir;
	/*
		printf and scanf for accept value from user
	*/

	printf("Enter Width : ");
	scanf("%d",&w);
	printf("\nEnter Height : ");
	scanf("%d",&h);
	/*
		formula of area to get circle
	*/

	cir = 2*(w+h);
	
	printf("\nCircumference of Rectangle is : %d",cir);
}