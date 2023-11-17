#include<stdio.h>

void main()
{
	int l,b,r,h,k;
	int arearec,areacir,areatri;
	float pi = 3.14;
	
	printf("Enter Length : ");
	scanf("%d",&l);
	printf("\nEnter Breadth : ");
	scanf("%d",&b);
	
	arearec = l*b;
	
	printf("\nArea of rectangle is : %d",arearec);
	
	
		
		printf("\n\nEnter Value : ");
		scanf("%d",&r);

		areacir=pi*r*r;
	
		printf("\nArea of circle is : %d",areacir);

	
	printf("\n\n Enter the Height : ");
	scanf("%d",&h);
	
	printf("\nEnter the Breadth : ");
	scanf("%d",&k);
		
	areatri = 0.5*h*k;
	
	printf("\n\nArea of triangle is : %d",areatri);
	
		
}