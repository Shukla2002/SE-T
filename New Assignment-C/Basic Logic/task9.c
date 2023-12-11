#include<stdio.h>
int main()
{
	int b3,b1,b2,cir;
	
	printf("Enter Boundary 1 : ");
	scanf("%d",&b1);
	printf("Enter Boundary 2 : ");
	scanf("%d",&b2);
	printf("Enter Boundary 3 : ");
	scanf("%d",&b3);

	cir = b1+b2+b3;
	printf("Circumference of Circle is : %d",cir);
}