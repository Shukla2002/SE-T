#include<stdio.h>
main()
{
	int w,h;
	int cir;
	
	printf("Enter Width : ");
	scanf("%d",&w);
	printf("\nEnter Height : ");
	scanf("%d",&h);
	
	cir = 2*(w+h);
	
	printf("\nCircumference of Rectangle is : %d",cir);
}