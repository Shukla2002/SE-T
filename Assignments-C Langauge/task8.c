#include<stdio.h>
void main()
{
	int a,b;
	
	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	
	a=b;
	b=a;
	
	printf("\nAfter Swapping value of A is %d",a);
	printf("\nAfter Swapping value of B is %d",b);
	
}